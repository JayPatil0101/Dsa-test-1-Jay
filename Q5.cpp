#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 12, 23, 31, 55, 67, 89};
    int target = 12;
    int left = 0, right = 6;
    int steps = 0;
    bool found = false;

    while(left <= right) {
        int mid = (left + right) / 2;
        steps++;

        cout << "Step " << steps
             << " Left=" << left
             << " Right=" << right
             << " Mid=" << mid
             << " Value=" << arr[mid]
             << endl;

        if(arr[mid] == target) {
            found = true;
            cout << "Found" << endl;
            break;
        }
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if(!found)
        cout << "Not Found" << endl;

    cout << "Total Steps = "
         << steps << endl;

    return 0;
}
