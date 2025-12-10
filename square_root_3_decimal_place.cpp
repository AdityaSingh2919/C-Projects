#include <iostream>
using namespace std;

int BinarySearch(int n){
    int start=0,end=n;
    int mid=start+ (end-start)/2;
   
    while(start <= end){
    int square=mid*mid;
        if(square==n){
            return mid;
            //break;
        }else if(square < n){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }return end;
}

double sqrt(int n, double ans, int digit) {
    double factor = 1;

    for (int i = 0; i < digit; i++) {
        factor /= 10;
        while ((ans + factor) * (ans + factor) <= n) {
            ans += factor;
        }
    }
    return ans;
}


int main()
{
   int n;
   cout<<"Enter: ";
   cin>>n;
   int ans=BinarySearch(n);
cout<<sqrt(n,ans,3);
    return 0;
}
