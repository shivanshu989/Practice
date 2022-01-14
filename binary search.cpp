#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
	int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	int b;
	cin>>b;
	int x=0,y=9,z;
	for(int i=0;i<9;i++){
		z=(x+y)/2;
		if(a[z]==b){
			cout<<z;
			break;
		}
		else if(a[z]>b){
			y=z-1;
		}
		else if(a[z]<b){
			x=z+1;
		}
	}
	getch();
}
