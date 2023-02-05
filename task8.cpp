#include <iostream>
using namespace std;



void multiplication(int number);


main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    multiplication(number);



}





void multiplication(int number)
{
    int result;
    for (int i = 1; i <= 10; i++)
    {
        
        result = number * i;
        cout << number << " * " << i << " = " << result <<endl;
        
    }

     
    

}