#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;
    int amount;
    cin >> first;
    cin >> second;
    for ( int i = first; i <= second; i++ ) {
        amount = 0;
        for ( int j = 1; j <= i; j++ ) {
            if ( i % j == 0 ) {
                amount++;
            }
        }
        cout << amount << " ";
    }
}
