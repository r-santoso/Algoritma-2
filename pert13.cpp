#include <iostream>

using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

// fungsi cetak array
void printArray(int array[], int size){
  for (int i = 0; i < size; i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;
}

void selectionSort(int array[], int size){
  for (int step = 0; step < size - 1; step++){
    int min_idx = step;
    for (int i = step + 1; i < size; i++){

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}

int main() {
  int data[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout<<"Hasil array yang sudah disortir :\n";
  printArray(data, size);
}
