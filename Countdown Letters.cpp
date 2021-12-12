#include <iostream>
using namespace std;

void BackwardsAlphabet(char currLetter){
if (currLetter == 'a'){
  cout << currLetter << endl;
}

else {
  cout << currLetter << endl;
    BackwardsAlphabet(currLetter - 1);
}
}
int main (){

  char startingLetter;

  cout << "Enter starting letter: ";
  cin >> startingLetter;

  BackwardsAlphabet(startingLetter);

  return 0;
}