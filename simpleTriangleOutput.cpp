#include <iostream>
using namespace std;

void triangle(int tsize, char order)
{
    int i, j, k, l, m; //incrementing variables
    int space = 0; //variable to help with spacing
    if (tsize > 1 && tsize < 21)
    {
        int tester = tsize; //variable to help with spacing
        if (order == 'r')
        {
            for (i = 1; i <= (tsize); i++)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << "&";
                }
                cout << endl;
            }
            for (k = 0; k < (tsize - 1); k++)
            {
                for (l = (tester - 2); l >= 0; l--)
                {
                    cout << "&";
                }
                tester--;
                cout << endl;
            }
        }
        else if (order == 'd')
        {
            for (i = 0; i < tsize; i++)
            {
                for (k = 0; k < space; k++)
                {
                    cout << " ";
                }
                for (j = ((tester * 2) - 1); j > 0; j--)
                {
                    cout << "&";
                }
                cout << endl;
                tester--;
                space++;
            }
        }
        else if (order == 'u')
        {
            for (i = 0; i < tsize; i++)
            {
                for (space = (tester); space > 1; space--)
                {
                    cout << " ";
                }
                for (j = 0; j <= i * 2; j++)
                {
                    cout << "&";
                }
                cout << endl;
                tester--;
            }
        }
        else if (order == 'l')
        {
            for (i = 1; i <= (tsize); i++)
            {
                for (space = (tester - 1); space >= 1; space--)
                {
                    cout << " ";
                }
                for (j = 0; j < i; j++)
                {
                    cout << "&";
                }
                cout << endl;
                tester--;
            }
            tester = tsize;
            for (k = 0; k < (tsize - 1); k++)
            {
                for (m = 0; m <= space; m++)
                {
                    cout << " ";
                }
                for (l = (tester - 2); l >= 0; l--)
                {
                    cout << "&";
                }
                tester--;
                cout << endl;
                space++;
            }
        }
        else
        {
            cout << "Error: Enter 'r,d,l,u' only" << endl;
        }
    }
    else
        cout << "Error: Size between 2 and 20 only" << endl;
}

int main()
{
    int tsize;  //variable to find out the size of triangle
    char order; //character to find out the orientation
    cout << "Triangle size: ";
    cin >> tsize;
    cout << "Triangle orientation [r, d, u, l]: ";
    cin >> order;
    triangle(tsize, order);
    return 0;
}