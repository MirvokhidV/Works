#include <iostream>

using namespace std;

void checking_prime_number(int number)
{
    int i = 2, c = 0;
    while (i <= number/2)
    {
        if (number % i == 0)
        {
            c = 1;
            cout << "Your number is not a prime number: " << number << endl;
            break;
        }
        i++;
        
    }
    if (c == 0)
    {
        cout << "Your number is a prime: " << number << endl;
    }
}

void output_prime_numbers(int number)
{
    int numbers = 3;
    cout << "There are numbers ->" << endl;
    while (numbers <= number)
    {
        int i = 2, b = 0, gar;
        gar = numbers / 2;
        while (i <= gar)
        {
            if (numbers % i == 0)
            {
                b = 1;
                break;
            }
            i++;
        }
        if (b == 0)
        {
            cout << ">> " << numbers << endl;
        }
        numbers++;
    }
}
int main()
{
   cout << "There is two exe" << endl;
   cout << "1. Checking number prime or not \n2. Showing prime numbers until entered number" << "\n";
   cout << "\nWhich one do you want to see" << endl;
   int exe;
   cout << ">> "; cin >> exe;
   cout << "Enter number" << endl;
   int a = 0, num = 0;
   while (a <= 1)
   {
        cout << ">> "; cin >> num;
        if (num == 1 or num == 2)
        {
            cout << "\nPrime number should be more than two" << endl;
            a = 0;
        }
        else
        {
            a = 1;
            break;
        }
   }
   switch (exe)
   {
        case 1:
        {
            checking_prime_number(num);
            break;
        }
        case 2:
        {
            output_prime_numbers(num);
            break;
        }
        default:
        {
            cout << "ERROR input: " << exe << endl; 
            break;
        }
   }
}