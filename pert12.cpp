#include <iostream>

using namespace std;

void bubbleSort(int array[], int size){
  for (int step = 0; step < size - 1; ++step){
    for (int i = 0; i < size - step - 1; ++i){

      //sortir, change > to < in this line.
      if (array[i] > array[i + 1]){

        //jika lebih besar berada paling belakang
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

//fungsi cetak hasil
void printArray(int array[], int size){
  for (int i = 0; i < size; ++i){
    cout<<"  "<< array[i];
  }
  cout<<"\n";
}

int main(){
  int data[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  cout<<"Hasil data setelah disortir :\n";
  printArray(data, size);
}
