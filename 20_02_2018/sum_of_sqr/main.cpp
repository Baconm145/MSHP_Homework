#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double intrmdtRes;
    cin >> n;
    for ( int x = 1; x < n; x++ ) {
        for ( int y = 1; y < n; y++ ) {
            intrmdtRes = sqrt( n - x * x - y * y );
            if ( floor( intrmdtRes ) == intrmdtRes && intrmdtRes > 0 && x > 0 && y > 0 ) {
                cout << x << " " << y << " " << intrmdtRes << "\n";
            }
        }
    }
}
