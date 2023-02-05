#include <iostream>
using namespace std;



int digitSum(int number);



main()
{
    int number , result;

    cout << "Enter number: ";
    cin >> number;

    result = digitSum(number);
    cout << "Sum is : " << result;
}






int digitSum(int number)
{
    int sum = 0;
    int remainder;
    

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        
        sum = sum + remainder; 

    }

   
    return sum; 
     

}