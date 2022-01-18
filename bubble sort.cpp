#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
	int n,t,f;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		f=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				f=1;
			}
		}
		if(f==0){
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	getch();
	return 0;
}
