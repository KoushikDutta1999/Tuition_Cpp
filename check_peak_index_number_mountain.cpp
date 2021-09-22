#include<iostream>
using namespace std;

int main(){
	int n,i,flag=0,temp=0;
	cout<<"How many elements in the array : ";
	cin>>n;
	if(n<3){
	cout<<"Array elements can not be less than 3!!!"<<endl;
	return 0;
	}
	int a[n];
	cout<<"Enter the arrays : "<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>temp)
		temp=a[i];
	}
	cout<<"Peak index Element: "<<temp;
	return 0;
}

