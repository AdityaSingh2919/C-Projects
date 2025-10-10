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
int temp=0;
for(int i=0;i<n;i+=2){
    if(i+1<n){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
}
    cout<<"Swapped array is "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    

    return 0;
}
