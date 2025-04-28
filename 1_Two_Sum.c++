#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                return 0;
            }
        }
    }
    cout << "No two numbers add up to the target." << endl;
    return 0;
}