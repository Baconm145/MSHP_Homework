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
            if ( height == length  ) {
                array[height][length] = 0;
            } else {
                array[height][length] = abs( height - length );
            }
            cout << array[height][length] << " ";
        }
        cout << "\n";
    }
}
