#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    int M;
    int sum = 0;
    cin >> N;
    cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= M - 1; ++length ) {
            cin >> array[height][length];
            sum += array[height][length];
        }
    }
    cout << sum;
}
