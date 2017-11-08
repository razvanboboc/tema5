#include <iostream>
using namespace std;
int x[100],i,j,n,nr;
int main()
{
    cin>>n;
    nr=0;
    for(i=1;i<=n;i++)
        cin>>x[i];
    for(j=2;j<=n-1;j++)
        if(x[j]=(float)(x[j-1]+x[j+1])/2)
                ++nr;
    cout <<nr;
    return 0;
}
