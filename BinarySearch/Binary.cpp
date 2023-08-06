#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fungsi untuk mencari indeks dari elemen yang sesuai dengan nilai yang dicari
vector<int> binarySearch(const vector<int>& arr, int target) {
    vector<int> indices;

    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            indices.push_back(mid);

            // Cek elemen yang sama di kiri dan kanan
            int leftPtr = mid - 1;
            while (leftPtr >= 0 && arr[leftPtr] == target) {
                indices.push_back(leftPtr);
                leftPtr--;
            }

            int rightPtr = mid + 1;
            while (rightPtr < arr.size() && arr[rightPtr] == target) {
                indices.push_back(rightPtr);
                rightPtr++;
            }

            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return indices;
}

int main() {
    vector<int> arr = {19, 40, 10, 90, 2, 50, 60, 50, 1};

    // Urutkan array terlebih dahulu untuk memastikan binary search berhasil
    sort(arr.begin(), arr.end());

    int searchValue;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> searchValue;

    vector<int> indices = binarySearch(arr, searchValue);

    if (!indices.empty()) {
        cout << "Angka " << searchValue << " ada di indeks ke: ";
        for (int idx : indices) {
            cout << idx << " ";
        }
    } else {
        cout << "Angka " << searchValue << " tidak ada dalam array.";
    }

    return 0;
}
