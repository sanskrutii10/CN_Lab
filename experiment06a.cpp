#include <iostream>
using namespace std;

int main() {
    int f[20], msg[40], d[10], i, j, m, n; 
    
    cout << "Enter size of frame: ";
    cin >> m;
    cout << "Enter size of divisor: ";
    cin >> n;
    
    cout << "Enter bits of frame: ";
    for (i = 0; i < m; i++) {
        cin >> f[i];
    }
    
    cout << "Enter bits of divisor: ";
    for (j = 0; j < n; j++) {
        cin >> d[j]; 
    }
    
    for (i = 0; i < m; i++) {
        msg[i] = f[i];
    }
    
    for (i = 0; i < n-1; i++) {
        msg[m + i] = 0; 
    }
    
    int temp[40];
    int total_bits = m + n - 1;
    for (i = 0; i < total_bits; i++) {
        temp[i] = msg[i];
    }
    
    for (i = 0; i < m; i++) {
        if (temp[i] == 1) {
            for (j = 0; j < n; j++) {
                temp[i + j] = temp[i + j] ^ d[j];
            }
        }
    }
    
    cout << "Message with zeros: ";
    for (i = 0; i < total_bits; i++) {
        cout << msg[i] << " ";
    }
    cout << endl;
    
    cout << "Remainder: ";
    for (i = m; i < total_bits; i++) {
        cout << temp[i] << " ";
    }
    for (i = 0; i < n - 1; i++) {
        msg[m + i] = temp[m + i];
    }
    
    cout << "\nFinal transmitted message: ";
    for (i = 0; i < total_bits; i++) {
        cout << msg[i] << " ";
    }
    return 0;
}

