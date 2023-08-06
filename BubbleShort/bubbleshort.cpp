#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menukar data
void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

// Bubble Sort
void bubbleSort(string nama[], string alamat[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nama[j] > nama[j + 1]) {
                // Jika nama saat ini lebih besar dari nama selanjutnya, tukar nama dan alamat
                swap(nama[j], nama[j + 1]);
                swap(alamat[j], alamat[j + 1]);
            }
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

    bubbleSort(nama, alamat, n);

    cout << "\nData setelah diurutkan (Bubble Sort):\n";
    cout << "Nama\t\tAlamat\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << "\t\t" << alamat[i] << endl;
    }

    return 0;
}
