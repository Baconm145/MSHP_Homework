#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    //int M;
    cin >> N;
    //cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= N - 1; ++length ) {
            cin >> array[height][length];
        }
    }
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= N - 1; ++length ) {
            if ( height + length == N - 1 ) {
                cout << array[height][length] << " ";
            }
        }
    }
}
