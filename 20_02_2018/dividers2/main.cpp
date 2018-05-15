#include <iostream>

using namespace std;

int main()
{
    int left;
    int right;
    int sum;
    int maxSum = -1;
    int maxNum;
    cin >> left;
    cin >> right;
    maxNum = left;
    for ( int i = left; i <= right; i++ ) {
        sum = 0;
        for ( int j = 1; j <= i; j++ ) {
            if ( i % j == 0 ) {
                sum += j;
            }
        }
        if ( sum > maxSum ) {
            maxSum = sum;
            maxNum = i;
        }
    }
    cout << maxNum;
}
