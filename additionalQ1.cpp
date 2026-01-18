#include <iostream>
using namespace std;

bool canDivide(int arr[], int n, int m, int limit) {
    int segments = 1;
    int currentOR = 0;

    for(int i = 0; i < n; i++) {
        currentOR = currentOR | arr[i];
        if(currentOR > limit) {
            segments++;
            currentOR = arr[i];
            if(segments > m)
                return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {5, 2, 7, 3, 6};
    int n = 5;
    int m = 3;  
    int low = 0, high = 0;
    for(int i = 0; i < n; i++)
        high = high | arr[i];
 int answer = high;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(canDivide(arr, n, m, mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "Minimum possible maximum OR = " << answer;
    return 0;
}
