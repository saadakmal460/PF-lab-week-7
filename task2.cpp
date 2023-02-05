#include <iostream>
using namespace std;


int totalDigits(int num);



main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    int result = totalDigits(number);
    cout << result << " digits";
}





int totalDigits(int number)
{
    int counter = 0;
    
   while (number > 0)
   {
        number = number / 10;
        counter++;
    }
    return counter;
   
     
   
    
}