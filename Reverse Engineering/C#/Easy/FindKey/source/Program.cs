using System;

namespace source
{
    class Program
    {
        static void Main(string[] args)
        {
            string magical_password = "Th3IsItheKEy";

            Console.WriteLine("Password :");
            string password = Console.ReadLine();

            if(password == magical_password){
                Console.WriteLine("Congratulation correct password!");
            }else{
                Console.WriteLine("Invalid password. :(");
            }
        }
    }
}
