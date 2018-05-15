#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    int M;
    int max = -1000;
    int min = 1000;
    cin >> N;
    cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= M - 1; ++length ) {
            cin >> array[height][length];
        }
    }
    for ( int length = 0; length <= M - 1; ++length ) {
        max = -1000;
        min = 1000;
        for ( int height = 0; height <= N - 1; ++height ) {
            if ( array[height][length] > max ) {
                max = array[height][length];
            }
            if ( array[height][length] < min ) {
                min = array[height][length];
            }
        }
        cout << max << " " << min << "\n";
    }
}

