#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * Algorithm Challenge – Level 3 | #9 Print Middle Row and Middle Column of a Matrix
 *
 * This program fills a 3x3 matrix with random numbers, prints the matrix, then prints:
 *  - the middle row
 *  - the middle column
 *
 * The purpose of this challenge is to understand how to locate and extract central elements in a matrix using index-based logic.
 */

// Generates a random number within a given range
int RandNumbr(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fills a 3x3 matrix with random numbers
void FillMatrxWithRandNums(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++) // Traverse rows
    {
        for (short j = 0; j < Cols; j++) // Traverse columns
        {
            arr[i][j] = RandNumbr(1, 9);
        }
    }
}

// Prints the matrix in formatted form
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

// Prints the middle row of the matrix
void PrintMiddelRowsOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows / 2; // Calculate middle row index

    // Column index changes, row index stays fixed
    for (short i = 0; i < Cols; i++)
    {
        printf("%0*d  ", 2, arr[MiddleRow][i]);
    }
    cout << endl;
}

// Prints the middle column of the matrix
void PrintMiddelColmOfMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleColm = Cols / 2; // Calculate middle column index

    // Row index changes, column index stays fixed
    for (short i = 0; i < Rows; i++)
    {
        printf("%0*d  ", 2, arr[i][MiddleColm]);
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL)); // Seed random generator once

    int Matrix1[3][3];

    FillMatrxWithRandNums(Matrix1, 3, 3);

    cout << "Matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMiddle Row of Matrix:\n";
    PrintMiddelRowsOfMatrix(Matrix1, 3, 3);

    cout << "\nMiddle Column of Matrix:\n";
    PrintMiddelColmOfMatrix(Matrix1, 3, 3);

    return 0;
}
