#include <iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=1; i<=n;i++){
        ans*=i;
    }return ans;
}
int main()
{
int n,r;
cout<<"Enter total number of object :";
cin>>n;
cout<<"ENter selected object :";
cin>>r;
int ans=factorial(n)/factorial(n-r);
cout<<"permutation is "<<ans;
    return 0;
}
