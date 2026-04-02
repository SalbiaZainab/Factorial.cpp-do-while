#include <iostream>
using namespace std;

int main() 
{
    int num, i = 1, fact = 1;
    cout << "Enter number: ";
    cin >> num;

    do 
	{
        fact *= i;
        i++;
    } 
	while(i <= num);

    cout << "Factorial = " << fact;
    return 0;
}
