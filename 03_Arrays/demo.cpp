#include <iostream>
#include <array>

using namespace std;

void incrementArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 1;
    }
}

void printArr1(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    array<int, 5> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
        cout << num << endl;
    }

    return 0;
}
