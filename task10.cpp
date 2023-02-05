#include <iostream>
using namespace std;




int calculateGcd(int number1 , int number2);
int calculateLcm(int number1 , int number2 , int gdc);


main()
{
    int num1 , num2 , hcf , lcm;

    cout << "Enter first number: ";
    cin >> num1;


    cout << "Enter second number: ";
    cin >> num2;

    hcf = calculateGcd(num1 ,num2);
    lcm = calculateLcm( num1 , num2 , hcf);

    cout << "HCF = " << hcf <<endl;
    cout << "LCM = " << lcm <<endl;



}




int calculateGcd(int number1 , int number2)
{
    int gcd;
    for (int i = 1; i <= number1 && i <=number2; i++)
    {
        if (number1%i == 0 && number2%i==0)
        {
            gcd = i;
        }
   
    }
    
    return gcd;
    
}

int calculateLcm(int number1 , int number2 , int gdc)
{
    
    int lcm = (number1*number2)/gdc;
    return lcm;


}