#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int swaps = 0;

    cout << "Before Sorting: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;

                cout << "After Swap: ";
                for(int k = 0; k < n; k++)
                    cout << arr[k] << " ";
                cout << endl;
            }
        }
    }

    cout << "Total Swaps = "
         << swaps << endl;

    cout << "Final Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
