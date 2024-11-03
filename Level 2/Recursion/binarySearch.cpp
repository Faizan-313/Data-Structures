#include <iostream>
using namespace std;

bool search(int arr[], int n, int a) {
    if (n <= 0) return false; // Base case: elements not found

    int mid = n / 2; // Calculate the middle index

    if (arr[mid] == a) return true; // Element found
    else if (a > arr[mid]) return search(arr + mid+1, n - mid - 1, a); // Search in the right half
    else return search(arr, mid, a); // Search in the left half
}

int main() {
    int n = 6;
    int arr[6] = {11, 12, 13, 14, 15, 16}; // Sorted array
    int a;
    cout << "Enter element to search: ";
    cin >> a;

    if (search(arr, n, a)) cout << "found" << endl;
    else cout << "not found" << endl;

    return 0; 
}
