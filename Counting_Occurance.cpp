#include <iostream>
#include <algorithm> 
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
 sort(arr, arr+n);
int count=1;
for(int i=0;i<n;i++){
   
        if(i<n-1 && arr[i]==arr[i+1]){
            count++;
           
        }else{
            cout<<arr[i]<<" occurs "<<count<<" times"<<endl;
            count=1;
        }
    
}       

     


    return 0;
}
