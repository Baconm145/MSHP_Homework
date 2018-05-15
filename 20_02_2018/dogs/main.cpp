#include <iostream>

using namespace std;

int main()
{
    int amount;
    int current;
    cin >> amount;
    for ( int i = 0; i < amount; i++ ) {
        cin >> current;
        for ( int j = 0; j < current; j++ ) {
            cout << "@";
        }
        cout << "\n";
    }
}
