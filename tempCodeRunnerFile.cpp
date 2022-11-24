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

void selectionSort(int array[], int n)
{
   
    for(int i=0;i<n-1;i++)
    {
        int mini =i;
        for(int j = i+1;j<n;j++)
        {
            if (array[j]<= array[mini])
            mini=j;
        }
        swap(array[mini],array[i]);
    }

}
// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}