#Dependencies
import sys

#functions
def calculate(string):
    return str(len(string) + 248912)

#Main
username = input("Username: ")

if len(username) == 0:
    print("Invalid username.")
    sys.exit()

password = input("Password: ")

if password == calculate(username):
    print("Congratulation! Correct password!")
else:
    print("Invalid password! :(")