#include    <iostream>
using namespace std;

int letterRowTriangle(int rows) {
   for (int i = 1; i <= rows; ++i) {
      char letter = 'A';
      for (int j = 0; j < i; ++j) {
         cout << letter++;
         if (j < i - 1) cout << " ";
      }
      cout << endl;
   }
}

int main()
{

 int totalRows;
 cout << "Enter the number of rows: ";
 cin >> totalRows;

 if (totalRows <=0) {
   cout << "Error. To display, number of rows must be at LEAST 1." << endl;

 }

return letterRowTriangle(totalRows);
  
}
