#include <iostream>

using namespace std;

void justKeepLooping(char letter);

int main(){
    justKeepLooping(^);
    return 0;
}

void justKeepLooping(char letter){
    //prints out 5 ‘^’ characters each on a new line
    int i = 10;
    do{
        cout << letter << endl;
        i += 2;
    }while(i > 1)
    return;
}