#include <iostream>

using namespace std;

string season(string name);
string convertUppercase(string user_string);

int main() {
    string name;
    char answer;
    
    do{
    	cout << "What is your first name?" << endl;
    	cin>>name;
        name = convertUppercase(name);
   	cout << "Your season is:" << season(name) << "!" << endl;

   	cout << "Would you like another suggestion (y/n)?" << endl;
   	cin >> answer;

   	while(answer != 'y' && answer != 'n'){
   		cout << "Invalid input. Please type only y or n." << endl;
   		cout << "Would you like another suggestion (y/n)?" << endl;
   		cin >> answer;
   	}
   	 
    }while(answer != 'n');

    cout << "Goodbye!" << endl;
    return 0;
}

string season(string name){
    //suggests an accessory for the weather
    string suggestion;
    
    if(int(name[0]) >= 65 && int(name[0]) <= 71){ // a=65, g=71
   	 suggestion = " winter";
    }else if(int(name[0]) >= 72 && int(name[0]) <= 78){ // h=72, n=78
   	 suggestion = " spring";
    }else if(int(name[0]) >= 79 && int(name[0]) <= 85){ // o=79, u=85
   	 suggestion = " summer";
    }else if(int(name[0]) >= 86 && int(name[0]) <= 90){ // v=86, z=90
   	 suggestion = " fall";
    }else{ //For invalid entries
   	 suggestion = " Game of Thrones S08";
    }
    
    return suggestion;
}

string convertUppercase(string user_string){
    //converts a string to uppercase letters
    string newString;
    int string_size;
    string_size = user_string.size();

    for (int i=0; i < string_size; i++)
    {
        if (int(user_string[i]) >= 97 && int(user_string[i]) <= 122) 
        {
            newString = newString + char(int(user_string[i]) - 32); 
        }
        else
        {
            newString = newString + user_string[i];
        }
    }
    return newString;
}
