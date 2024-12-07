#include<bits/stdc++.h>

using namespace std;

int main()

{
	int n,se,e[100],f=0;
	int l=0,i;
	cout<<"Enter the num:\n";
	cin>>n;
	cout<<"Enter the elements:\n";
	for( i=0;i<n;i++){
		cin>>e[i];
	}
	
	cout<<"Enter the elements which number we find to:\n";
	cin>>se;
	for(i=0;i<n;i++){
		if(e[i]==se){
			f=1;
			l=i+1;
			break;
		}
	}
	if(f){
		cout<<"Number is here in location "<<l;
	}
	else{
		cout<<"Number is'nt here";
	}
	
	return 0;
}
