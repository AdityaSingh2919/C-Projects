int sqrt(int n){
    int start=0,end=n;
int mid=start+(end-start)/2;


while(start <= end){
    int square=mid*mid;
if(square==n){
    return mid;
}else if(square <n){
    
    start=mid+1;
}else{
    end=mid-1;
}
mid=start+(end-start)/2;
}
return mid;
}
int main()
{

int n;
cout<<"Enter Number :";
cin>>n;
cout<<"Square root is "<<sqrt(n);

	return 0;
}
