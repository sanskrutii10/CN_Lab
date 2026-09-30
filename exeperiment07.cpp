#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int frame[11], i, j;
    int timeout = 5;
    int delay;
    int n;

    srand(time(0));

    cout << "\nEnter size of frame: ";
    cin >> n;

   
    for(i = 0; i < n; i++)
    {
        cout << "Enter frame: ";
        cin >> frame[i];
        delay = rand() % 5+1;
        if(delay <= timeout)
        {
            for(j = 0; j < delay; j++)
            {
                cout << "Waiting\n";
            }

            cout << "Acknowledgement received\n";
        }
        else
        {
            cout << "Timeout!!\n";
        }
    }
    return 0;
}