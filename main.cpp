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
   
  
}
