#include <iostream>

using namespace std;

int main()
{
    int height;
    int length;
    cin >> height;
    cin >> length;
    for ( int i = 0; i < height; i++ ) {
        for ( int j = 0; j < length; j++ ) {
            cout << "*";
        }
        cout << "\n";
    }
}
