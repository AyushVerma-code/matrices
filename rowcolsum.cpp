// C++ program to
find the sum
// of each row and
column of a matrix
  
#include
<iostream>
using namespace
std;
  
// Get the size m
and n
#define m 4
#define n 4
  
// Function to
calculate sum of
each row
void row_sum(int
arr[m][n])
{
  
    int i,j,sum = 0;
  
    cout <<
"\nFinding Sum of
each row:\n\n";
  
    // finding the row
sum
    for (i = 0; i < 4; +
+i) {
        for (j = 0; j < 4;
++j) { 
  
            // Add the
element
            sum = sum +
arr[i][j];
        }
  
        // Print the row
sum
        cout
            << "Sum of
the row "
            << i << " = "
<< sum 
            << endl;
  
        // Reset the
sum
        sum = 0;
    }
}
  
// Function to
calculate sum of
each column
void
column_sum(int
arr[m][n])
{
  
    int i,j,sum = 0;
  
    cout <<
"\nFinding Sum of
each column:\n\n";
  
    // finding the
column sum
    for (i = 0; i < 4; +
+i) {
        for (j = 0; j < 4;
++j) {
  
            // Add the
element 
            sum = sum +
arr[j][i];
        }
  
        // Print the
column sum
        cout
            << "Sum of
the column "
            << i << " = "
<< sum
            << endl; 
  
        // Reset the
sum
        sum = 0;
    }
}
  
// Driver code
int main()
{
  
    int i,j;
    int arr[m][n];
  
    // Get the matrix
elements 
    int x = 1;
    for (i = 0; i < m;
i++)
        for (j = 0; j < n;
j++)
            arr[i][j] = x+
+;
  
    // Get each row
sum
    row_sum(arr);
  
    // Get each 
column sum
    column_sum(arr)
;
  
    return 0;
}
