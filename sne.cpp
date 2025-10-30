#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    // Take number of rows and columns from user
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[100][100], matrix2[100][100], sum[100][100];

    // Input first matrix
    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
         {
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> matrix2[i][j];
        }
    }

    // Add matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    cout << "\nSum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
