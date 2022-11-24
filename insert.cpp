// Insertion sort in C++

#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int n)
{
   for(int i = 1; i<n; i++) {
        int temp = array[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(array[j] > temp) {
                //shift
                array[j+1] = array[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        array[j+1] = temp;  
    } 
}
// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}