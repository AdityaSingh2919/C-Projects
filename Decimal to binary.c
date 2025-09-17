#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    int ans=0;
    int power=1;
    while(n!=0){
       ans=ans*10+n%10;
       n/=10;
    }printf("%d",ans);

    return 0;
}
