//Dependencies
#include <iostream>

//Workspaces
using namespace std;

//Variables
string abcd = "abcdefghijklmnopqrstuvwxynz";
string the_password = "0";

//Functions
string calIme(){
    string temp = "0";

    temp += "5285";
    temp += the_password;

    return temp;
}

string callme(){
    for( int i = 0; i <= 7; i++ ){
        the_password += "____" + i;
    }

    return calIme();
}

//Main
int main(){
    the_password += "52592118925225";

    string password_input;

    cout << "\n";
    the_password += "___"; the_password += "529861";
    cout << "Password: ";
    the_password += "___";
    cin >> password_input;the_password += "nwa521521";

    callme();

    the_password += "___"; the_password += "fwafaw25";
    cout << the_password;
    the_password += "___"; the_password += "n2a5ma5a";

    the_password += "___"; the_password += "m25152s";

    if(password_input == the_password){
        cout << "Congratulation! You have cracked the password!";
    }else{
        cout << "Invalid password.";
    }

    cout << "\n";
    return 0;
}