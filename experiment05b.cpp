#include<iostream>
using namespace std;

int main()
{
    int C[11], D[7], i;
    int S0, S1, S2, S3;

    cout << "Enter the received 11-bit codeword: ";
    for(i = 0; i < 11; i++)
    {
        cin >> C[i];
	}
    S0 = C[10] ^ C[8] ^ C[6] ^ C[4] ^ C[2] ^ C[0];
    S1 = C[9]  ^ C[8] ^ C[6] ^ C[5] ^ C[1] ^ C[0];
    S2 = C[7]  ^ C[6] ^ C[5] ^ C[4];
    S3 = C[3]  ^ C[2] ^ C[1] ^ C[0];
	if(S0 == 0 && S1 == 0 && S2 == 0 && S3 == 0)
    {
        cout << "\nNo error detected in the transmission." << endl;
    
        D[0] = C[0];
        D[1] = C[1];
        D[2] = C[2];
        D[3] = C[4];
        D[4] = C[5];
        D[5] = C[6];
        D[6] = C[8];

        cout << "Extracted Message: ";
        for(i = 0; i < 7; i++)
        {
            cout << D[i];
        }
        cout << endl;
    }
    else
    {
        cout << "\nError detected during transmission!" << endl;
        cout << "Syndrome bits (S3 S2 S1 S0): " << S3 << S2 << S1 << S0 << endl;
    }

    return 0;
}

