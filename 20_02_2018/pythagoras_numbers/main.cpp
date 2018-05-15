#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int left;
    int right;
    double intrmdtResult;
    cin >> left;
    cin >> right;
    for ( int x = left; x < right; x++ ) {
        for ( int y = left; y < right; y++ ) {
            intrmdtResult = sqrt( ( x * x ) + ( y * y ) );
            if ( ( intrmdtResult  < right ) && ( ( floor( intrmdtResult ) ) == intrmdtResult ) ) {
                cout << x << " " << y << " " << intrmdtResult << "\n";
            }
        }
    }
}
