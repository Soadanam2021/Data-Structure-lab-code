#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,c,d,i,j,k,l;

cout<<"Enter number elements\n";
cin>>a;
int ar[a];
cout<<"Enter elements\n";
for(i=0;i<a;i++)
{
cin>>ar[i];
}
for (i = 0; i < a-1; i++)
{
for (j = 0; j < a-i-1; j++)
{
if (ar[j] > ar[j+1])
swap(ar[j] ,ar[j+1]);
}
}
cout<<"Sorted array\n";
for(i=0;i<a;i++)
{
cout<<ar[i]<<" ";
}


return 0;
}

