//Dependencies
#include <iostream>

//Workspaces
using namespace std;

//Variables
string password = "nice!_your_awesome!";

//Main
int main(){
    string password_input;

    cout << "\n";
    cout << "Password: ";
    cin >> password_input;

    if(password_input == password){
        cout << "Congratulation! Correct password! :)";
    }else{
        cout << "Invalid password. :(";
    }

    cout << "\n";
    return 0;
}