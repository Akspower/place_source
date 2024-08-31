#include <iostream>
#include <vector>

using namespace std;

vector<int> missrepeat(vector<int>& arr) {
    int n = arr.size();

    vector<int> ans(2); // To store missing and repeated numbers
    vector<int> count(n + 1, 0);

    int missing = -1, repeat = -1;

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            missing = i;
        }
        if (count[i] == 2) {
            repeat = i;
        }
    }

    ans[0] = missing;
    ans[1] = repeat;
    return ans;
}
int main() {
    // Test array
    vector<int> arr = {1, 3, 3, 4, 5};

    // Call the function
    vector<int> result = missrepeat(arr);

    // Print the result
    cout << "Missing number: " << result[0] << endl;
    cout << "Repeated number: " << result[1] << endl;

    return 0;
}
