#include<iostream>
using namespace std;

int main(){
	string str = "Hello World";
	string temp;
	for(int i=0;i<str.length();i++){
		if(str[i]!= ' '){
			temp += str[i];	
		}
		else{
			for(int j=temp.length()-1;j>=0;j--){
				cout<<temp[j];
			}
			cout<<" ";
			temp = "";
		}
	}
	if(temp.length()>0){
		for(int j=temp.length()-1;j>=0;j--){
			cout<<temp[j];
			}
		}
	return 0;
}
