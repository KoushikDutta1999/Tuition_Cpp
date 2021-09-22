#include<iostream>
using namespace std;

int main(){
	int n,i,flag=0;
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
	i=0;
	for(;i<n-1 && a[i]<a[i+1];i++){
			flag=1;
	}
	if(i==n-1){
		cout<<"Not a valid montain array"<<endl;
		return 0;
	}
	for(;i<n-1 && a[i]>a[i+1] && flag;i++);
	if(i!=n-1)
	cout<<"Array is not mountain";
	else
	cout<<"Array is mountain";
	return 0;
}

