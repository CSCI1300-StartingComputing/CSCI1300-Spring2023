#include <iostream>

double surprise(int input){
  string mysteryString = "surprise";
  input == input % 8;
  return mysteryString[input];
}

int main(){
  int input;
  char result;

  cout << "Enter a number:" << endl;
  cin > input;

  result = surprise(input);
  cout << result << endl;

  return 0;
	}