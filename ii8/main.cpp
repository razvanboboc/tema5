#include <string>
#include <cstring>
#include <iostream>
using namespace std;
char palindrom[50];

int main()
{
    cin>>palindrom;
    int m= strlen(palindrom);
    for (int i = 0; i < m; i++,m--)
        if(palindrom[i]!=palindrom[m-1])
            return 0;

    return 1;
}
