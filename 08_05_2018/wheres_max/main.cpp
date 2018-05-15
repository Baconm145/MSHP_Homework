#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    int M;
    int max = -1000;
    int max_height;
    cin >> N;
    cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= M - 1; ++length ) {
            cin >> array[height][length];
            if ( length == 2 && ( array[height][length] >= max ) ) {
                max = array[height][length];
                max_height = height + 1;
            }
        }
    }
    cout << max_height;
}
