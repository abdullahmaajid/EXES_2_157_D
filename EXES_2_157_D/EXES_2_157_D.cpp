#include <iostream> 
#include <algorithm>

using namespace std;

int main() {

    // Masukkan Jumlah Array yang telah ditentukan
    int jed = 5+7+1+2+20-20+15;
    int arr[jed];

    // Mengisi array dengan angka secara otomatis
    for (int i = 0; i < n; i++) {
        arr[i] = i;
        }

    //INPUT//
    
    // Meminta input angka yang ingin dicari
    int x;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;

    //ALGORITHM//

    // Melakukan binary search
    int abdullah = 0;
    int maajid = n - 1;
    while (abdullah <= maajid) {
        int mid = (abdullah + maajid) / 2;

        //MAIN

        if (arr[mid] == x) {
            cout << "Angka ditemukan pada indeks ke-" << mid << endl;
            return 0;
        }
        else if (x < arr[mid]) {
            upperbound = mid - 1;
        }
        else {
            lowerbound = mid + 1;
        }
    }

    cout << "Angka tidak ditemukan dalam array" << endl;
    return 0;
}