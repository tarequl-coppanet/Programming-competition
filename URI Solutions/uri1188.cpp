#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    char T;
    float M[12][12], Sum = 0, Avg = 0, count = 0;
    cin >> T;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    for (int k = 7; k < 12; k++)
    {
        for (int l = 12-k; l < k; l++)
        {
            Sum += M[k][l];
            count++;
        }
    }
    if (T == 'S')
    {
        cout << fixed << setprecision(1) << Sum << endl;
    }
    if (T == 'M')
    {
        //Avg= Sum/count;
        cout << fixed << setprecision(1) << Sum / 30.0 << endl;
    }
    return 0;
}
