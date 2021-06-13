#include <iostream>

using namespace std;
int joc(int n)
{
    int k,s=0;
    for(k=2 ; k<=n ; k++)
        if(n%k==0)
        s++;
    return s;
}
int main()
{
    cout<<joc(12);
    return 0;
}
