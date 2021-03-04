#include <iostream>
using namespace std;
int main() {
  cout << "What is your favorite programming language? \n\n";
  cout << "Choose Wisely................ \n";
  string programchoice;
  cin >> programchoice;
  if(programchoice=="Python"){
   cout << "Okay, you like simple programming languages.";
  }
  if (programchoice=="C"){
    cout << "Wow! You love C, the programming begginer's must.";
  }
  if(programchoice=="C++"){
    cout << "Oh, so you like C++? I LOVE it!";
  }
  cout << "Thanks!";
}

