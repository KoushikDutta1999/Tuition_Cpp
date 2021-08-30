#include<iostream>
using namespace std;

int main(){
	string str = "Hello World";
	string temp;
	for(int i=str.length()-1;i>=0;i--){
		//cout<<str[i];
		//cout<<str[i]<<endl;
		temp += str[i];
		
	}
	cout<<temp;
	return 0;
}
