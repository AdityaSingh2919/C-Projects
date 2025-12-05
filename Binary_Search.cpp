#include <iostream>
using namespace std;
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
    cout<<"Enter number to find in array :";
    cin>>key;
    int start =0,end=n-1;
    int mid= (start + end)/2;
    bool isFound=false;
while(start <= end){
    if(arr[mid] == key){
        cout<<"Element is at index "<<key<<endl;
        isFound=true;
        break;
    }else if(key > arr[mid]){
        start = mid +1;
    }else{
        end = mid - 1;
    }
    mid=(start + end)/2;
} if(!isFound){
    cout<<"there is no "<<key<<" in the array"<<endl;
}
    return 0;
}
