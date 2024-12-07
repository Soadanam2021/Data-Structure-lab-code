#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void towerOfHanoi(int n,char from,char to,char aux)
{

    if (n==0)
    {
        return;
    }
    towerOfHanoi(n - 1,from,aux,to);
    cout<<" "<<from <<" " <<to<< endl;
    towerOfHanoi(n - 1, aux,to,from);
    cnt++;
}
int main()
{
    int n;
    cout<<"Number of Diske:\n";
    cin>>n;
    towerOfHanoi(n, 'A', 'C', 'B');
    cout<<"Number of move: "<<cnt;
    return 0;
}
