
#include <iostream>
using namespace std;
int main() {

int player1;
cout<<"Enter your move Player1-->1-Rock,2-Scissor and 3-paper\n";
cin>>player1;
int player2;
cout<<"Enter your move Player2-->1-Rock,2-Scissor and 3-paper\n";
cin>>player2;

if(player1==1 && player2==2){
    cout<<"Player1 Wins\n";
}else if(player1==2 && player2==1){
    cout<<"player2 wins\n";

}else if(player1==2 && player2==3){
    cout<<"player1 wins\n";

}else if(player1==3 && player2==2){
    cout<<"player2 wins\n";

}else if(player1==1 && player2==3){
    cout<<"player2 wins\n";

}else if(player1==3 && player2==1){
    cout<<"player1 wins\n";
}else if(player1==player2){
    cout<<"Tie\n";
}else{
    cout<<"You played an invalid move";
}
    return 0;
}