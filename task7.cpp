#include <iostream>
using namespace std;



float calculateAmount(float amount , int year);

main()
{
    int year; 
     float amount , total , final;

    cout << "Enter inherited amount: ";
    cin >> amount;

    cout << "Enter year you want to go: ";
    cin >> year;

    total = calculateAmount(amount , year );
    
    final = amount - total;
    

   if (final > 0)
    {
        cout << "Yes he will have carefree life and will have " << final;
    }
    else if (final < 0)
    {
        cout << "He will need " << -final << " dollars to live";
    }
   
   
}



float calculateAmount(float amount , int year )
{
    float result = 0 ;
    float result2 = 0 ;
    float age = year - 1801;
    float finalAmount = 0;
    for (int count = 1800; count <= year; count++)
    {
        if (count%2 == 0)
        {
            result =  12000 * (count - 1800);
        }

        if (count%2 !=0)
        {
        result2 = 12000 + 50 *(age + 18);
        }

        
    }
   finalAmount = result + result2; 
    return finalAmount;
}