#include <iostream>

using namespace std;

int main() {

    int hari;

    cout << "hari ke\t : "; cin >> hari;

    for (int i = 0; i < 1000; i++) {
        if (hari == i * 7 + 1) { 
            cout << "Hari ke-" << hari << " adalah hari Senin"; 
        }
        else if (hari == i * 7 + 2) { 
            cout << "Hari ke-" << hari << " adalah hari Selasa"; 
        }
        else if (hari == i * 7 + 3) { 
            cout << "Hari ke-" << hari << " adalah hari Rabu"; 
        }
        else if (hari == i * 7 + 4) { 
            cout << "Hari ke-" << hari << " adalah hari Kamis"; 
        }
        else if (hari == i * 7 + 5) { 
            cout << "Hari ke-" << hari << " adalah hari Jumat"; 
        }
        else if (hari == i * 7 + 6) { 
            cout << "Hari ke-" << hari << " adalah hari Sabtu"; 
        }
        else if (hari == i * 7 + 7) { 
            cout << "Hari ke-" << hari << " adalah hari Minggu"; 
        }
        else if (hari > 7007) { 
            cout << "Error!!, Data Input Melebihi Batas!!"; 
            break;
        }
    }
    return 0;
}