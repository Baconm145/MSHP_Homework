#include <iostream>

using namespace std;

const int ROWS = 10;
const int COLS = 10;

int main()
{
    int N;
    int M;
    cin >> N;
    cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= M - 1; ++length ) {
            if ( ( height >= 1 ) && ( length >= 1 ) ) {
                array[height][length] = array[height - 1][length] + array[height][length - 1];
            } else {
                array[height][length] = 1;
            }
            cout << array[height][length] << " ";
        }
        cout << "\n";
    }
}
