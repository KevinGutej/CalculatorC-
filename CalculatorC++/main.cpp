//final version
#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <math.h>
#include <cmath>

using namespace std;

void space()
{
    cout << endl;
}
void menu()
{
    cout << "=========================" << endl;
    cout << "[1] - Adding" << endl;
    cout << "[2] - Takeaway" << endl;
    cout << "[3] - Multiplication" << endl;
    cout << "[4] - Division" << endl;
    cout << "[5] - SquareRoot" << endl;
    cout << "[6] - Exit Program" << endl;
    cout << "=========================" << endl;
    space();
}

float function1(float &a, float &b)
{
        return a + b;
}

float function2_v1(float &a, float &b)
{
        return a - b;
}

float function2_v2(float &a, float &b)
{
        return b - a;
}

float function3(float &a, float &b)
{
    return a * b;
}

float function4_v1(float &a, float &b)
{
        return a / b;
}

float function4_v2(float &a, float &b)
{
        return b / a;
}

long int square(int &p, int w)
{
    if(w==0)return 1;
    else return p*square(p,w-1);
}
int main()
{

    float a,b;
    int k,p,w;
    int help;
    for(;;)
    {
        menu();
        space();
        cout << "Please choose a option: ";
        cin >> k;
        for(;;)
        {
            if(k>=1&&k<=6)
            {
                cout << "Working..." << endl;
                break;
            }
            else
            {
                cout << "Option is not available!" << endl;
                cout << "Enter again: ";
                cin >> k;
            }
        }
        switch(k)
        {
            case 1:
            {
                cout << "Please Enter First Number: ";
                cin >> a;
                cout << "Please Enter Second Number: ";
                cin >> b;
                cout << "Outcome After Adding: " << function1(a,b) << endl;
                space();
                system("pause");

            }
            break;
            case 2:
            {
                cout << "Please enter first number: ";
                cin >> a;
                space();
                cout << "Please enter second number: ";
                cin >> b;
                space();
                cout << "[Option 1] A - B: " << endl;
                space();
                Sleep(250);
                cout << "[Option 2] B - A: " << endl;
                space();
                Sleep(250);
                cout << "Choose option: ";
                cin >> help;
                for(;;)
                {
                    if(help==1||help==2)break;
                    else
                    {
                        cout <<"Wrong option!Choose again: ";
                        cin >> help;
                    }
                }
                Sleep(1250);
                if(help == 1)
                {
                   space();
                   cout << "Outcome Of Option 1: " << function2_v1(a,b) << endl;
                   space();
                   system("pause");
                }
                if(help == 2)
                {
                    space();
                    cout << "Outcome Of Option 2: " << function2_v2(a,b) << endl;
                    space();
                    system("pause");
                }
            }
            break;
            case 3:
            {
                cout << "Please enter a: ";
                cin >> a;
                cout << "Please enter b: ";
                cin >> b;
                cout << "Outcome Option 3: " << function3(a,b) << endl;
                space();
                system("pause");
            }
            break;
            case 4:
            {
                cout << "Please enter a: ";
                cin >> a;
                cout << "Please enter b: ";
                cin >> b;
                cout << "[Option 1] A / B: " << endl;
                space();
                Sleep(250);
                cout << "[Option 2] B / A: " << endl;
                space();
                Sleep(250);
                cout << "Choose option: ";
                cin >> help;
                for(;;)
                {
                    if(help==1||help==2)break;
                    else
                    {
                        cout <<"Wrong option!Choose again: ";
                        cin >> help;
                    }
                }
                Sleep(1250);
                if(help == 1)
                {
                   cout << "Outcome Option 1: " << function4_v1(a,b) << endl;
                   space();
                   system("pause");
                }
                if(help == 2)
                {
                    cout << "Outcome Option 2: " << function4_v2(a,b) << endl;
                    space();
                    system("pause");
                }
            }
            break;
            case 5:
            {
                cout << "Please enter p: ";
                cin >> p;
                cout << "Please enter w: ";
                cin >> w;
                cout << "Outcome of squareroot is: " << square(p,w) << endl;
                space();
                system("pause");

            }
            break;
            case 6:
            {
                system("pause");
                exit(0);
            }
            break;
        }

}
}
