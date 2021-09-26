#include<iostream>
#include<map>
using namespace std;

int main(){
	//unorder_map
	map<char,int>m1,m2;
	string str_1,str_2;
	cout<<"Enter the first string: "<<endl;
	cin>>str_1;
	cout<<"Enter the second string: "<<endl;
	cin>>str_2;
	
	for(int i=0;i<str_1.length();i++){
		m1[str_1[i]]++;
	}
	
	for(int i=0;i<str_2.length();i++){
		m2[str_2[i]]++;
	}
	
	if(m1==m2){
		cout<<"Two strings are Anagram.";
	}
	else{
		cout<<"Two strings are not Anagram.";
	}
}
