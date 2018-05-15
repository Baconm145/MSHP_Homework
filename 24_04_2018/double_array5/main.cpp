#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    //int M;
    int sub = 1;
    cin >> N;
    //cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        for ( int length = 0; length <= N - 1; ++length ) {
            if ( height == 0 ) {
                array[height][length] = length + 1;
            } else {
                if ( length == N - 1 ) {
                    array[height][length] = array[height - 1][ 0 ];
                } else {
                    array[height][length] = array[height - 1][length + 1];
                }
            }
            cout << array[height][length] << " ";
        }
        cout << "\n";
    }
}

