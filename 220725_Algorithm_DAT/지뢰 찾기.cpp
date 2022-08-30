#include <iostream>
using namespace std;

int main()
{
    int MAP[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0, 0, 0, 0, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 100, 0, 0},
        {0, 0, 0, 0, 0, 10, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 20, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int x, y;
    cin >> x >> y;

    // MAP[x + 0][y + 0];
    // MAP[x + 0][y + -1];
    // MAP[x + 0][y + 1];
    // MAP[x + -1][y + 0];
    // MAP[x + 1][y + 0];

    int d1[] = { 0, 0, 0, -1, 1 };
    int d2[] = { 0, -1, 1, 0, 0 };

    for (int i = 0; i < 5; i++)
    {
        int row = x + d1[i];
        int col = y + d2[i];

        if (row < 0 || row > 9) continue;
        if (col < 0 || col > 9) continue;

        if (MAP[row][col] != 0)
        {
            for (int j = 0; j < MAP[row][col]; j++)
            {
                cout << "BOOM!";
            }
        }
    }
}