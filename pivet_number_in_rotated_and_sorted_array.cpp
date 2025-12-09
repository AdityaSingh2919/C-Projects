#include <iostream>
using namespace std;


int main()
{
 int arr[6]={7,8,9,1,2,3}; //array should be sorted and rotated
 int start=0,end=5;
 
     int mid=start + (end-start)/2;
 while(start < end){
     if(arr[mid]>arr[0]){
         start=mid+1;
     }else{
         end=mid;
     }
     mid=start + (end-start)/2;
 }cout<<"pivet is at index "<<start;

    return 0;
}
