//Dependencies
#include <iostream>
#include <string>

//Workspaces
using namespace std;

//Variables
string the_r_pass = "";
string to_pass = "key";

//Functions
string second(){
    for( int i = 0; i <= 14; i++ ){
        the_r_pass += "12561" + to_string(i);
    }

    return "";
}

string first(){
    the_r_pass = "JM5921nu125n15n1j51i5on51n";

    second();

    return "";
}

//Main
int main(){
    string password_input;

    cout << "\n";

    cout << "Password: ";
    cin >> password_input;

    first();

    cout << to_pass;
    if(password_input == the_r_pass && to_pass == "kRy"){
        cout << "Yay correct password!";
    }else{
        cout << "Invalid password! :(";
    }

    cout << "\n";
    return 0;
}