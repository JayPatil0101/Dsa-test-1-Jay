#include <iostream>
using namespace std;

int main() {
    int arr[] = {23, 67, 4, 89, 31, 55, 12};
    int target = 89;
    int n = 7;
    int steps = 0;
    bool found = false;

    for(int i = 0; i < n; i++) {
        steps++;
        cout << "Step " << steps
             << ": Checking index "
             << i << " value "
             << arr[i] << endl;

        if(arr[i] == target) {
            cout << "Found at index "
                 << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Not Found" << endl;

    cout << "Total Steps = "
         << steps << endl;

    return 0;
}
