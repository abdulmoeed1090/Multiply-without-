#include <iostream>
using namespace std;

void multiplication(int num1, int num2)
{
    int result = 0; // Initialize result to 0
    for (int i = 0; i < num2; i++)
    {
        result += num1; // Perform multiplication by repeated addition
    }
    cout << "Multiplication is : " << result << endl;
}

int main()
{
    int a, b;
    cout << "Enter the numbers one by one : ";
    cin >> a >> b;
    multiplication(a, b);
    return 0;
}
