#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    
    
    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
    while (row_start <= row_end && column_start <= column_end)
    {
        for(int j = column_start; j <= column_end; j++)
        {
            cout << array[row_start][j] << " ";
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++)
        {
            cout << array[i][column_end] <<" ";
        }
        column_end--;
        
        for(int j = column_end; j >= column_start; j--)
        {
            cout << array[row_end][j] << " ";
        }
        row_end--;
        for (int i = row_end ; i >=  row_start; i--)
        {
            cout << array[i][column_start] << " ";
        }
        column_start++;
    }
    
   
    return 0;
}