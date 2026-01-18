#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 20, 11, 10, 12};
    int n = 7;

    sort(arr, arr + n); 

    int maxLen = 1;
    int start = 0;

    for(int end = 0; end < n; end++) {
        while(arr[end] - arr[start] > 10)
            start++;

        int len = end - start + 1;
        if(len > maxLen)
            maxLen = len;
    }

    cout << "Maximum length of good subsequence = " << maxLen;
    return 0;
}
