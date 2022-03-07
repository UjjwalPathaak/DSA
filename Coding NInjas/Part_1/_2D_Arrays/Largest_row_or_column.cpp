/* Largest Row or Column
Send Feedback
For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

Second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the ith row constitutes 'M' column values separated by a single space.
Output Format :
For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
OR
If column sum is maximum, then print: "column" <col_index> <col_sum>
It will be printed in a single line separated by a single space between each piece of information.

Output for every test case will be printed in a seperate line.
Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1sec
Sample Input 1 :
1
2 2 
1 1 
1 1
Sample Output 1 :
row 0 2
Sample Input 2 :
2
3 3
3 6 9 
1 4 7 
2 8 9
4 2
1 2
90 100
3 40
-10 200
Sample Output 2 :
column 2 25
column 1 342 */
#include <iostream>
using namespace std;
int main()
{
    int n, m, row, column, greatestrow = -1, greatestcolumn = -1, sum;
    cin >> n >> m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
        
    }

    //check for column
    for (int i = 0; i < m; i++)
    {
      sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + array[j][i];
        }
       if(sum > greatestcolumn)
       {
         column = i;
         greatestcolumn= sum;  
       }
    }

    //check for rows
    for (int i = 0; i < m; i++)
    {
     sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + array[i][j];
        }
       if(sum > greatestrow)
       {
         row = i;
         greatestrow = sum;  
       }
    }

    if(greatestcolumn > greatestrow)
    {
        cout << "column " << column << " " << greatestrow;
    }
    else
    cout << "row " << row << " " << greatestcolumn;
  //  cout <<  << row << " "<< greatestrow << "  column " << column << " " << greatestcolumn;
    return 0;
}