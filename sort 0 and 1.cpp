#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
            if( arr[i] == 0){
                i++;
            }else if(arr[j] == 1){
                j--;
            }
            else {
                swap(arr[i],arr[j]);
                i++;
                j--;
            
        }
    }
    for(int k = 0; k < n; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
