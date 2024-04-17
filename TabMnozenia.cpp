#include <iostream>

using namespace std;

int main()
{
    int tabliczka[10][10];
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabliczka[i][j] = (i+1) * (j+1);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << (i+1) << " * " << (j+1) << " = " << tabliczka[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
