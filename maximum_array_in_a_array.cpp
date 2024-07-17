#include <iostream>

int main() {
    int array[] = {3, 5, 7, 32, 8, -1, 4, 10, 12};
    int arraySize = sizeof(array) / sizeof(array[0]);

    int maxElement = array[0]; 

    for(int i = 1; i < arraySize; ++i) {
        if(array[i] > maxElement) {
            maxElement = array[i];
        }
    }

    std::cout << "The maximum element in the array is: " << maxElement << std::endl;

    return 0;
}
