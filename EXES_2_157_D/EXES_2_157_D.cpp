#include <iostream> 

using namespace std;

int jed[30];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of element in the array : ";
        cin >> n;
        if ((n > 0) && (n <= 30))
            break;
        else
            cout << "\n Array should have minimum 1 amd maximum 20 element. \n\n";
    }

    // Accept array elements
    cout << "\n-------------------\n";
    cout << " Enter array element \n";
    cout << "---------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> jed[i];
    }
}

void binarysearch() {

    // Melakukan binary search
    int abdullah = 0;
    int maajid = n - 1;
    int x;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;


    while (abdullah <= maajid) {
        int mid = (abdullah + maajid) / 2;

        if (jed[mid] == x) {
            cout << "Angka ditemukan pada indeks ke-" << mid << endl;
            break;
        }
        else if (x < jed[mid]) {
            maajid = mid - 1;
        }
        else {
            abdullah = mid + 1;
        }
    }

    cout << "Angka tidak ditemukan dalam array" << endl;
}

int main() {
    input();
    binarysearch();
}