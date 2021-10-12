//Dependencies
#include <iostream>

//Workspaces
using namespace std;

//Variables
string pass_1 = "This3SpAsw";
string pass_2 = "_niCePassW";

//Main
int main(){
    string password_input;

    cout << "\n";
    cout << "Password: ";
    cin >> password_input;
    
    if(password_input == pass_1 + pass_2){
        cout << "Congratulation! Correct password! :D";
    }else{
        cout << "Invalid password! :(";
    }

    cout << "\n";
    return 0;
}