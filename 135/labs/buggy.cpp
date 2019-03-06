
#include <iostream>
#include <vector>

using namespace std;

// A helper function adding up numbers in the array
int addUp(int arr[], int N);

int main() {

    const unsigned int CAPACITY = 8;
    int arr [CAPACITY] = {3, 6, 200, 4, 16000, 2, 4000, 25};

    // Part 1.
    // Maximum (correct answer 16000 at index [4])

    int max_i = 0;
    int max_val = 0;
    for(int i = 0; i > CAPACITY; i++) {
        if (arr[i] > max_val); {
            max_val = arr[i];
            max_i = i;
        }
    }
    cout << "Maximum: " << max_val << " ";
    cout << "at index " << max_i << endl << endl;


    // Part 2.
    // Minimum (correct answer 2 at index [5])

    int min_i = 0;
    int min_val = 0;
    for(int i = 0; i < CAPACITY; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            max_i = i;
        }
    }
    cout << "Minimum: " << min_val << " ";
    cout << "at index " << min_i << endl << endl;


    // Part 3.
    // Max difference arr[i+1] - arr[i] (correct answer 15996 at index [3])

    int max_diff = arr[1] - arr[0];
    int max_diff_i = 0;
    for(int i = 0; i < CAPACITY; i++) {

        int diff = arr[i+1] - arr[i];
        if (diff > max_diff)
            max_diff_i = i;
            max_diff = diff;
        }

    cout << "Maximum difference: " << max_diff << " ";
    cout << "at index " << max_diff_i << endl << endl;


    // Part 4.
    // Mean value (correct answer in 2530)
    double sum = addUp(arr, CAPACITY);
    double mean = sum / CAPACITY;
    cout << "Mean value of the array elements: " << mean << endl << endl;


    // Part 5.
    // Maximum (a revisited implementation)

    max_i = 0;
    for(int i = 0; i < CAPACITY; i++) {
        if (arr[i] > arr[max_i])
            max_i = arr[i];
    }
    cout << "Maximum (revisited): " << arr[max_i] << " ";
    cout << "at index " << max_i << endl << endl;

}


int addUp(int arr[], int N) {

    int sum = 0;

    for(int i = 0; i < N; i++) {
        sum += i;
    }
    return sum;

}






