#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    cin >> N;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= N - 1; ++length ) {
            array[height][length] = height + 1;
            cout << array[height][length] << " ";
        }
        cout << "\n";
    }
}
