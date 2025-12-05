#include <iostream>
using namespace std;
int firstOccurence( int n, int arr[],int key){
     
      int start =0,end=n-1;
    int mid= (start + end)/2;
    
    int ans=-1;
while(start <= end){
    if(arr[mid] == key){
        
       
        ans=mid;
        end=mid-1;
     
    }else if(key > arr[mid]){
        start = mid +1;
    }else{
        end = mid - 1;
    }
    mid=(start + end)/2;
}
if(ans==-1){
    cout<<"Element is not present in Array"<<endl;
}else{
cout<<"First Occurence of Element is at index "<<ans<<endl;
}

return 0;
}
int lastOccurence( int n, int arr[],int key){
     
      int start =0,end=n-1;
    int mid= (start + end)/2;
    
    int ans=-1;
while(start <= end){
    if(arr[mid] == key){
        
       
        ans=mid;
        start = mid +1;
        
    }else if(key > arr[mid]){
        start = mid +1;
    }else{
        end = mid - 1;
    }
    mid=(start + end)/2;
}
if(ans==-1){
    cout<<"Element is not present in Array"<<endl;
}else{
cout<<"Last Occurence of Element is at index "<<ans<<endl;
}
return 0;
}
int main()
{
     int n;
    cout<<"Enter Size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements :"; //Elements should be in increasing or decreasing order
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter number to find first occurence :";
    cin>>key;
    firstOccurence(n,arr,key);
    lastOccurence(n,arr,key);
    
  
    return 0;
}
