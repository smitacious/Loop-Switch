/* Norris Smith
   1/22/16
   Programming Assignment # 4
   A loop drive program that is designed to ask user for a certain user selected product and quantity of the selected. The program then calculates a
   running total of the selected products. Once the user decides to end the loop, a series of total calculation are preformed. Then final figures are
   printed to the screen */

#include <iostream>// allows program to perform input and output
#include <iomanip> // parameterized stream manipulators



using namespace std;

int main()
{
    // declaration of variable to be used
    int product = 0, quantity = 0, totalItems = 0;
    int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0, quantity5 = 0;
    double total1 = 0.0, total2 = 0.0, total3 = 0.0, total4 = 0.0, total5 = 0.0, totalCost = 0.0;

    cout << "Enter product number and quantity sold (enter -1-1 to end):"; // output to define the product and the quantity
    cin >> product >> quantity;

    while ( product != -1 ) // parameters of which the loop is checked against
    {
        switch( product)  // defines which variable will be used in switch statement
        {
            case 1:
                quantity1 += quantity; // calculates the total quantity
                total1 += quantity * 2.98; // calculate the total of the product
                break;

            case 2:
                quantity2 += quantity; // calculates the total quantity
                total2 += quantity * 4.50; // calculate the total of the product
                break;

            case 3:
                quantity3 += quantity; // calculates the total quantity
                total3 += quantity * 9.98; // calculate the total of the product
                break;

            case 4:
                quantity4 += quantity; // calculates the total quantity
                total4 += quantity * 4.49; // calculate the total of the product
                break;

            case 5:
                quantity5 += quantity; // calculates the total quantity
                total5 += quantity * 6.87; // calculate the total of the product
                break;

            // default setting to check for errors via inputation
            default:
                if ( product != -1)
                    cout << "Enter correct product number!" << endl;
                    break;
        }

        cout << "Enter product number and quantity sold (enter -1-1 to end):"; // output to define the product and the quantity
        cin >> product >> quantity;
    }

    cout << setprecision(2) << fixed; // setting the precision of the double values to the second point after the decimal
    cout << " " << endl;  // blank line
    cout << "Total number of items entered and price." << endl; // line of output
    cout << " " << endl;  // blank line
    cout << "Product 1 : " << quantity1 << " times, Final price of 1: $" << total1 << endl; // outputs info for product 1
    cout << "Product 2 : " << quantity2 << " times, Final price of 2: $" << total2 << endl; // outputs info for product 2
    cout << "Product 3 : " << quantity3 << " times, Final price of 3: $" << total3 << endl; // outputs info for product 3
    cout << "Product 4 : " << quantity4 << " times, Final price of 4: $" << total4 << endl; // outputs info for product 4
    cout << "Product 5 : " << quantity5 << " times, Final price of 5: $" << total5 << endl; // outputs info for product 5
    cout << " " << endl; // blank line
    totalItems = quantity1 + quantity2 + quantity3 + quantity4 + quantity5; // calculation to determine the total of items chosen
    totalCost = total1 + total2 + total3 + total4 + total5; // calculation to determine the total costs of the items
    cout << "Total cost for your " << totalItems << " is $" << totalCost; // final output showing final figures

    return 0; // returns value of ok
}
