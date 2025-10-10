#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter array Size :";
cin>>n;
int arr[n];
cout<<"Enter Array Elements :";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int ans=0;
for(int i=0;i<n;i++){
    ans=ans ^arr[i];
}       
cout<<"Unique Element is "<<ans<<endl;
      


    return 0;
}
