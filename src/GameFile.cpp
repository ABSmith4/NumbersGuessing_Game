#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
  int guess = rand()%200+1;
  int num = 0;
  int a = 1;
  int time = 4;
  cout<<"Guess a number between 1 and 200\n";
  do{

  cout<<"Turns Remaining "<<time+1<<"\n";
  cin>>num;
  
  if(num == guess) {
    cout<<"Congratulations!\n";
    a = 0;
  }
  else if(num < guess)
    cout<<"Try a bigger number\n";
  else if (num > guess) {
    cout<<"Try a smaller number";
  }
  }
  while(a == 1 && time--);
}