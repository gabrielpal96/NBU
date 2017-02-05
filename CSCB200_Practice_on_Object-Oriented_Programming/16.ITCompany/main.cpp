#include "Cmanager.h"
using namespace std;
 
template<typename T>
void maxElement(ostream& out, T arr[], int n) {
     T max = arr[0];
     for (size_t i = 0; i < n; i++) {
         if (max < arr[i])
              max = arr[i];
     }
     out << max << endl;
}
 
template<typename T>
void sumOfElements(ostream& out, T arr[], int n) {
     T sum = 0;
     for (size_t i = 0; i < n; i++)
         sum += arr[i];
         
     out << sum << endl;
}
 
int main() {
     int arr[] = { 2, 5, 7 };
     maxElement(cout, arr, 3);
     sumOfElements(cout, arr, 3);
 
     const int N = 2;
     Cmanager * managers = new Cmanager[N];
     cout << "Enter manager: ";
 
     for (size_t i = 0; i < N; i++) {
         cin >> managers[i];
     }
 
     for (size_t i = 0; i < N; i++) {
         cout << managers[i] << endl;
     }
 
     delete[] managers;
 
     return 0;
}