#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    int M;
    int sum_min = 10000000;
    int sum_current;
    int min_index;
    cin >> N;
    cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        sum_current = 0;
        for ( int length = 0; length <= M - 1; ++length ) {
            cin >> array[height][length];
            sum_current += array[height][length];
        }
        if ( sum_current < sum_min ) {
            sum_min = sum_current;
            min_index = height;
        }
    }
    for ( int length = 0; length <= M - 1; ++length ) {
        cout << array[min_index][length] << " ";
    }
}
