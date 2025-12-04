#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter total :";
    cin>>a;
    int n;
    cout<<"Enter Size of Array :"<<endl;
    cin>>n;
    int arr[n];
        cout<<"Enter Array Elements :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
bool isFound=false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=i+2; k<n; k++){
            if(arr[i] + arr[j] + arr[k]==a){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                isFound=true;
            }
        }
        }
    }if(!isFound){
        cout<<"there is no such pair"<<endl;
    }

    return 0;
}
