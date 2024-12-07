#include<bits/stdc++.h>

  
using namespace std;
   

void insertion(string str1, string str2,int n)
{
   cout<<"Enter a String:\n";
   cin>>str1;
   cout<<"Enter the position:\n";
   cin>>n;
   cout<<"Enter the inserted string:\n";
   cin>>str2;
   
    str1.insert(n, str2);
    cout << "After insert : ";
    cout << str1<<"\n";
}

void deletetion(string str,int a,int b)
{
	
	
	 cout<<"Enter a String:\n";
      cin>>str;
     cout<<"Enter the start position:\n";
     cin>>a;
     cout<<"Enter the end position:\n";
     cin>>b;
     
    str.erase(a, b);
    cout << "After erase : ";
    cout << str<<"\n";
}

void replace(string str3, int q, int p,string str4){
	 cout<<"Enter a String:\n";
      cin>>str3;
     cout<<"Enter the start position:\n";
     cin>>q;
     cout<<"Enter the end position:\n";
     cin>>p; 
     cout<<"Enter the inserted string:\n";
     cin>>str4;
     
     
     
     str3.replace(q, p, str4);
       cout << "After replace :";
    cout << str3<<"\n";
     
     
	
}
 
  

int main()
{
    string str1;
    string str2;
    string str;
    string str3;
    string str4;
    int i,n,q,p;
    int a,b;
    cout<<"Press 1 to insertion\n";
    cout<<"Press 2 to deletetion\n";
    cout<<"Press 3 to replacetion\n";
    cout<<"Press 4 to exit\n";
    while(1)
    {
	
    
    cout<<"Enter choose:\n";
    cin>>i;
    
    if(i==1){
   
   insertion(str1, str2,n);
}
if(i==2){
   
   deletetion(str,a,b);
}
if(i==3){
   
   replace(str3,q,p,str4);
}
if(i==4)
{
	break;
}
}
   
    return 0;
}
