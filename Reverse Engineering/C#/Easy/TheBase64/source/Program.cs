using System;
using System.Text;

namespace source
{
    class Program
    {
        public static string Base64Encode(string text) {
            var text_bytes = Encoding.UTF8.GetBytes(text);

            return System.Convert.ToBase64String(text_bytes);
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Username: ");
            string username = Console.ReadLine();

            Console.WriteLine("Password: ");
            string Password = Console.ReadLine();

            if(Password == Base64Encode(username)){
                Console.WriteLine("Yay! Correct password!");
            }else{
                Console.WriteLine("Invalid password! :(");
            }
        }
    }
}
