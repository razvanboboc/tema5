#include <iostream>

using namespace std;
int n,x,v[100],j,k,i,t;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(j=2;j<=n;j+=2){
        t=v[j];
        v[j]=(float)(t+v[j-1])/2;
        n++;
        for(k=n;k>=j;k--)
            v[k]=v[k-1];
        v[j+1]=t;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
