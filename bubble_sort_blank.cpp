#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// ฟังก์ชัน Bubble Sort
void bubbleSort(int arr[], int n) {
   //เขียนโค๊ดตรงนี้
}

// Display Array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
     cout << "\n"; 
}

int main() {
   
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    
 
    int n = sizeof(arr) / sizeof(arr[0]);


    cout << "Unsorted array: ";
    printArray(arr, n);
 
    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);


    return 0;
}