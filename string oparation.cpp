#include<bits/stdc++.h>

  
using namespace std;

void substring (string s,int z,int t){
	
	string b;
	
	cout<<"Enter string:\n";
	cin>>s;
	cout<<"Enter the start position:\n";
   	cin>>z;
   	cout<<"Enter the last position:\n";
   	cin>>t;
    b=s.substr(z,t);
     cout<<"substring:\n"<<b;
}
   
int main()
{
	string s;
	string s1;
	int x,y,z,t;
	cout<<"Press 1 to find length.\n";
    cout<<"Press 2 to find substring.\n";
    cout<<"Press 3 to concatinate.\n";
    cout<<"Press 4 to indexing.\n";
    
	while(1){
	
    cout<<"Enter the choise:\n";
    cin>>y;
    if(y==1){

    cout<<"lenth:\n"<<x;
   }
   
   if(y==2){
   	 
   	 substring (s,z,t);
   	 cout<<s1;
   	
  
   }
    
    
   }
	return 0;
	
}
