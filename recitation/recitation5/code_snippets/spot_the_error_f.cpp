#include <iostream>

using namespace std;

string hello();
void kenobi(string name);

int main(){
        hello();
        return 0;

void hello(){
        cout << "Hello there!" << endl;;
        kenobi("Kenobi!");
    return;
}

void kenobi(string name){
        cin << "General " << name << endl;
    return;
	}