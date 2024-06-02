#include <iostream>
using namespace std;

int main()
{

    int grid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};
    cout << grid[0][1] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << grid[i][j] << " ";
        }
    }

    return 0;
}