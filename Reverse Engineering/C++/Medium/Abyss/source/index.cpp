//Dependencies
#include <iostream>

//Workspaces
using namespace std;

//Variables
string the_password = "awnrawraw";

//Functions
int adder(){
    the_password += "_21n52859112";

    return 0;
}

//Main
int main(){
    the_password += "a";
    the_password += "c";
    the_password += "d";
    the_password += "f";
    the_password += "h";
    the_password += "w";
    the_password += "ws";
    the_password += "rws";

    string password;

    cout << "\n";
    cout << "Password: ";
    cin >> password;

    adder(); the_password += "42142124952"; the_password += 0x0f + 0x42; the_password += 0x0e + 0x24;
    cout << the_password;
    if(password == the_password){
        cout << "Congratulation! Looks like your really good!";
    }else{
        cout << "Invalid password!";
    }

    cout << "\n";
    return 0;
}