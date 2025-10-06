#include <iostream>
using namespace std;
int main()
{
int  n,next;
int n1=0;
int n2=1;
cout<<"Enter Number :";
cin>>n;
if(n==0 || n==1){
    cout<<n;
}else{
    cout<<n1<<endl<<n2<<endl;
    for(int i=2; i<=n; i++){
        next=n1 + n2;
        cout<<next<<endl;
        n1=n2;
        n2=next;
    }
}
    return 0;
}
