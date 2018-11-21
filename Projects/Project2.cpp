#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
        enum choices {SUM = 1, MEAN = 2, MIN = 3, MAX = 4, EXIT = 5};
        float num1, num2, num3, num4, num5, num6; /*Veribles for th number to be inputed by user */
        int Value, SUM, MAX, MIN, MEAN;

        cout << "Computer Science and Engineering" << endl;
        cout << "CSCE 1030 - Computer Science I" <<  endl;
        cout << "Haskell Cappers hac0078 haskellcappers@my.unt.edu" << endl; /* defualt header for projects */
                /* Menu options fo for the user to choice from */
        cout << "Please choose from the following list." << endl;
        cout << "1. Compute sum of 6 floating-point numbers" << endl;
        cout << "2. Compute mean of 6 floating-point numbers" << endl;
        cout << "3. Compute min of 6 floating-point numbers" << endl;
        cout << "4. Compute max of 6 floating-point numbers" << endl;
        cout << "5. Exit "  << endl;
        cin >> Value;


        switch(Value) /*switch statments to support the menu chooice given */
{
                case 1:
                        cout << "You will be prompted to enter 6 numbers." << endl;
                        cout << "Enter first number: ";
                        cin >> num1 << endl;
                        cout << "Enter second  number: ";
                        cin >> num2;
                        cout  << endl;
                        cout << "Enter third number: ";
                        cin >> num3;
                        cout  << endl;
                        cout << "Enter fourth number: ";
                        cin >> num4;
                        cout << endl;
                        cout << "Enter fith number: ";
                        cin >> num5;
                        cout << endl;
                        cout << "Enter sixth  number: ";
                        cin >> num6;
                        cout <, endl;
                        SUM =  num1 + num2 + num3 + num4 + num5 + num6
                        cout << "The sum of the 6 number is: "  << SUM << endl;
                        break;
                case 2:
                        cout << "You will be prompted to enter 6 numbers." << endl;
                        cout << "Enter first number: ";
                        cin >> num1 << endl;
                        cout << "Enter second  number: ";
                        cin >> num2;
                        cout  << endl;
                        cout << "Enter third number: ";
                        cin >> num3;
                                         MAX = num5;
A                        cout  << endl;
                        cout << "Enter fourth number: ";
                        cin >> num4;
                        cout << endl;
                        cout << "Enter fith number: ";
                        cin >> num5;
                        cout << endl;
                        cout << "Enter sixth  number: ";
                        cin >> num6;
                        cout <, endl;

                        MEAN = (num1 + num2 + num3 + num4 + num5 + num6) / 6
                        cout << "The mean of the 6 numbers is: " << MEAN << endl;
                        break;
                case 3:
                        cout << "You will be prompted to enter 6 numbers." << endl;
                        cout << "Enter first number: ";
                        cin >> num1;
                        cout << "Enter second  number: ";
                        cin >> num2;
                        cout  << endl;
                        cout << "Enter third number: ";
                        cin >> num3;
                        cout  << endl;
                        cout << "Enter fourth number: ";
                        cin >> num4;
                        cout << endl;
                        cout << "Enter fith number: ";
                        cin >> num5;
                        cout << endl;
                        cout << "Enter sixth  number: ";
                        cin >> num6;
                        cout <, endl;
                        MIN = num1;
                                if (num2<MIN)
                                        MIN = num2;
                                if (num3<MIN)
                                        MIN = num3;
                                if (num4<MIN)
                                        MIN = num4;
                                if (num5<MIN)
                                        MIN = num5;
                                if (num6<MIN)
                                        MIN = num6;
                        cout << "The min of the 6 numbers is: " << MIN << endl;
                        break;
                case 4:
                        cout << "You will be prompted to enter 6 numbers." << endl;
                        cout << "Enter first number: ";
                        cin >> num1;
                        cout << "Enter second  number: ";
                        cin >> num2;
                        cout  << endl;
                        cout << "Enter third number: ";
                        cin >> num3;
                        cout  << endl;
                        cout << "Enter fourth number: ";
                        cin >> num4;
                        cout << endl;
                        cout << "Enter fith number: ";
                        cin >> num5;
						cout << endl;
                        cout << "Enter sixth  number: ";
                        cin >> num6;
                        cout << endl;
                        MAX = num1;
                                if (num2>MAX)
                                        MAX = num2;
                                if (num3>MAX)
                                        MAX = num3;
                                if (num4>MAX)
                                        MAX = num4;
                                if (num5>MAX)
                                        MAX = num5;
                                if (num6>MAX)
                                        MAX = num6;

                        cout << "The max of the 6 number is: " << MAX << endl;
                        break;
                case 5:
                        cout << "Thank you for using this program" << endl;
                        break;

                default:
                        cout << "That is an invalid choice. Please enter choice 1 - 5" << endl;
}




        return 0;
}

