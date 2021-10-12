//Dependencies
#include <iostream>

//Workspaces
using namespace std;

//functions
int adder( int length ){
    return length + 52678125;
}

//Main
int main(){
    string name;
    int input_password;

    cout << "\n";
    cout << "Name: ";
    cin >> name;

    if(name == ""){
        cout << "Invalid name";
    }

    cout << "Password: ";
    cin >> input_password;

    int should_be = adder(name.length());

    if(input_password == should_be){
        cout << "Congratulation correct password!";
    }else{
        cout << "Invalid password! :(";
    }

    return 0;
}