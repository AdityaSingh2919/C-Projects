#include <iostream>
using namespace std;


int main()
{int n;
cout<<"Enter Size of Array :";
cin>>n;

int arr[n];
cout<<"Enter "<<n<<" Array elements :";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int max=arr[0];
for(int i=0; i<n; i++){
 if(arr[i]>=max){
     max=arr[i];
     
 }   
}cout<<"Maximum element in Array is "<<max;
    return 0;
}
