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
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           
        }
    }
}       
cout<<"After Sorting :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    
}
     


    return 0;
}
