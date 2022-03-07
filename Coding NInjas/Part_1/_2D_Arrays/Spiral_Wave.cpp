#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n>> m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < m; j++)
        {
            cin >> array[i][j];
        }
        
    }
    int count = 0;
    int elements = m * n;

     //springPrint
    int row_start = 0, row_end = n - 1, column_start = 0;
    while (count < elements)
    {
        for (int i = row_start; i < n; i++)
        {
            cout << array[i][column_start] << " ";
            count++;
        }
        for (int j = column_start + 1; j <= column_start; j++)
        {
            cout << array[row_end][j] << " ";
            count++;
        }
        column_start++;
    
        for(int i = row_end; i >= 0; i--)
        {
            cout << array[i][column_start] << " ";
            count++;
        } 
        for (int j = column_start + 1; j <= column_start; j++)
        {
            cout << array[row_start][j] << " ";
            count++;
        }
        column_start++;

    }
    
    return 0;
}