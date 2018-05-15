#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    int M;
    int min_height;
    int min_length;
    int max_height;
    int max_length;
    int max = -1;
    int min = 99999999;
    cin >> N;
    cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= M - 1; ++length ) {
            cin >> array[height][length];
            if ( array[height][length] > max ) {
                max = array[height][length];
                max_height = height;
                max_length = length;
            }
            if ( array[height][length] < min ) {
                min = array[height][length];
                min_height = height;
                min_length = length;
            }
        }
    }
    cout << min_height + 1 << " " << min_length  + 1 << " " << min << "\n" << max_height + 1  << " " << max_length + 1 << " " << max;
}
