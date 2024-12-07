#include<iostream>

using namespace std;

int main()
{
	int n,max,i;
	int l1=0,l2=0;
	int a[100];
	
	cout<<"Enter number:\n";
	cin>>n;
	cout<<"Enter Element:\n";
    for(i=0;i<n;i++) {
    cin>>a[i];
	}
	
	max=a[0];
	for(i=1;i<n;i++){
		
		if(a[i]>max){
			max=a[i];
			
		}
		
		
	}
	cout<<"Max element:\n"<<max;
	return 0;
	
}
	
