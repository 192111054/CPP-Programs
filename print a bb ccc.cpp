#include <iostream>
using namespace std;
 
int main()
{
    char input, alphabet = 'A';
    int i, j;
 
    cout << "Enter the uppercase character you want to print in the last row:";
    cin >> input;
      
     // outer loop is responsible for rows
    for(int i = 1; i <= (input-'A'+1); i++)
    {
         
        //inner loop is responsible for columns
        for(int j = 1; j <= i; j++)
        {
            cout << alphabet << " ";
        }
        alphabet++;
         
        // give line breaks after ending every row
        cout << "\n";
    }
    return 0;
}
