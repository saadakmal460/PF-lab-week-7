#include <iostream>
using namespace std;


void printPercentage(int number);



main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    printPercentage(number);

}





void printPercentage(int number)
{
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int p4 = 0;
    int p5 = 0;
    int input;
    float percentage1,percentage2 , percentage3 , percentage4 ,percentage5; 

    for (int i = 0; i < number; i++)
    {
        cout << "Enter " << number << " numbers: "; 
        cin >> input;
        if (input < 200)
        {
            p1 = p1 + 1;
        }

        else if (input < 400)
        {
            p2 = p2 + 1;
        }

        else if (input < 600)
        {
            p3 = p3 + 1;
        }

        else if (input < 800)
        {
            p4 = p4 + 1;
        }
        
        else if (input < 1000)
        {
            p5 = p5 + 1;
        }
        
    }

    percentage1 = (p1 * 100)/number;
    percentage2 = (p2 * 100)/number;
    percentage3 = (p3 * 100)/number;
    percentage4 = (p4 * 100)/number;
    percentage5 = (p5 * 100)/number;

    cout << percentage1 << " %" << endl;
    cout << percentage2 << " %" << endl;
    cout << percentage3 << " %" << endl;
    cout << percentage4 << " %" << endl;
    cout << percentage5 << " %" << endl;



}
