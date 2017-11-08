#include <iostream>
using namespace std;
int x[100],ok,r,n,i,j;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    ok=1;
    for(j=2;j<=n-1;j++)
        if(x[j]!=(float)(x[j-1]+x[j+1])/2)
            ok=0;
        if(ok==1)
            cout<<"The terms are in arithmetical progression"<<endl<<"The ratio is"<<" "<<x[2]-x[1];
        else
            cout<<"The terms are not in arithmetical progression";

    return 0;
}
