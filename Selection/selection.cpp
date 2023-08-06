#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menukar data
void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

// Selection Sort
void selectionSort(string nama[], string alamat[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (nama[j] < nama[min_idx]) {
                min_idx = j;
            }
        }
        // Jika indeks minimum tidak sama dengan indeks saat ini, tukar nama dan alamat
        if (min_idx != i) {
            swap(nama[i], nama[min_idx]);
            swap(alamat[i], alamat[min_idx]);
        }
    }
}

int main() {
    // Data awal sebelum diurutkan
    string nama[] = {"Fahmi", "Romi", "Andri", "Fadillah", "Ruli", "Rudi", "Dendi", "Zaki"};
    string alamat[] = {"Jakarta", "Solo", "Jakarta", "Banyuwangi", "Bandung", "Bali", "Purwokerto", "Madiun"};
    int n = sizeof(nama) / sizeof(nama[0]);

    cout << "Data sebelum diurutkan:\n";
    cout << "Nama\t\tAlamat\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << "\t\t" << alamat[i] << endl;
    }

    selectionSort(nama, alamat, n);

    cout << "\nData setelah diurutkan (Selection Sort):\n";
    cout << "Nama\t\tAlamat\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << "\t\t" << alamat[i] << endl;
    }

    return 0;
}
