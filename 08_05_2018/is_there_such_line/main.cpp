#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main()
{
    int N;
    int M;
    bool flag;
    bool global_flag = false;
    cin >> N;
    cin >> M;
    int array[ROWS][COLS] = {};
    for ( int height = 0; height <= N - 1; ++height ) {
        flag = true;
        for ( int length = 0; length <= M - 1; ++length ) {
            cin >> array[height][length];
            if ( array[height][length] < 0 ) {
                flag = false;
            }
        }
        if ( flag == true ) {
            global_flag = true;
        }
    }
    if ( global_flag == true ) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
