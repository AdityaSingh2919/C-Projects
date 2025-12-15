#include <iostream>
using namespace std;
bool isPossible(int n,int m,int arr[],int mid){
    
    int ans=0;
    int studentCount=1;
    for(int i=0;i<n;i++){
        if(ans+arr[i]<=mid){
            ans+=arr[i];
        }else{
            studentCount++;
            if(arr[i]>mid ){
                return false;
            }else if(studentCount>m ){
                return false;
                }else{
                ans=0;
                ans+=arr[i];
            }
        }
    }return true;
}
int main()
{
    int n=4;
    int m=2;//Number of students
    int arr[n]={10,20,30,40};
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }int end=sum;
    int ans=-1;
    while(start <= end){
        int mid=start+ (end-start)/2;
        
        if(isPossible(n,m,arr,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
cout<<ans;
    return 0;
}
