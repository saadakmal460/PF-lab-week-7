#include <iostream>
using namespace std;



int calculateMoney(int age , int toy , float price);



main()
{
    int age , toy ;
    float priceWM;

    cout << "Enter Lily's age: ";
    cin >> age;

    cout << "Enter price of washing machine: ";
    cin >> priceWM;

    cout << "Enter price of unit toy: ";
    cin >> toy;

    int total = calculateMoney( age ,  toy , priceWM);
    cout << total;

    

    if (total > priceWM)
    {
        cout << "Yes you can buy and will left with " << total - priceWM << " USD";
    }
    else
    {
        cout << "No! you will need " << priceWM - total << " USD";
    }
    

}



int calculateMoney(int age , int toy , float price)
{
    int sum = 0;
    for (int i = 1; i <=age; i++)
    {
        if (i%2 == 0)
        {
            sum = sum + 10 * (i/2);
            sum = sum - 1;
            
        }

        else
        {
            sum = sum + toy;
        }

 
        
        
    }
    return sum;

}

