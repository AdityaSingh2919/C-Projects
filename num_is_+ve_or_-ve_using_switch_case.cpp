//checking number is +ve or -ve using switch case
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the number:";
cin>>n;
switch(n==0){
    case true:
    cout<<"zero";
    return 0;
    
}
switch(n>0 ){

case true:
cout<<"Positive\n";
break;
case false:
cout<<"Negative\n";
break;


    return 0;
}
}
