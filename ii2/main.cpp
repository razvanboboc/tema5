#include <iostream>
using namespace std;
int n,j,k,i;
float v[100],t;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(j=1;j<n;j+=2){
        t=v[j];
        v[j]=(t+v[j-1])/2;
        n++;
        for(k=n-1;k>j;k--)
            v[k]=v[k-1];
        v[j+1]=t;
    }
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
