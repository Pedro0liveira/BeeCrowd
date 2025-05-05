#include <iostream>

using namespace std;

void bubble_sort( int A[ ], int n ) {
    int temp;
    for(int k = 0; k < n-1; k++) {

        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
}

int main()
{
    int nums[3] = {0, 0, 0};
    for(int i = 0; i < 3; i++)
        cin >> nums[i];

    int old_nums[3];
    for (int i = 0; i < 3; i++) {
        old_nums[i] = nums[i];
    }

    bubble_sort(nums, 3);

    for(int i = 0; i < 3; i++)
        cout << nums[i] << endl;
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << old_nums[i] << endl;
    return 0;
}
