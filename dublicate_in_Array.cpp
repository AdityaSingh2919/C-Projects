#include <iostream>
using namespace std;
void dublicate(int arr[],int n){
   
}
int main()
{int n;
cout<<"Enter size of an array :";
cin>>n;
int arr[n];
cout<<"Enter elements in array :";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

     bool isfound=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" is dublicate"<<endl;
                isfound=true;
                
            }
        }
    }if(!isfound){
        cout<<"there is no dublicate in array"<<endl;
    }

    return 0;
}
