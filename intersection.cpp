#include <iostream>
#include <vector>
#include <algorithm> // For sort function

using namespace std;

class Solution {
  public:
    // Function to find the intersection of two arrays
    vector<int> arrayIntersection(vector<int>& arr1, vector<int>& arr2) {
        // Sort both arrays
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        vector<int> ans;
        int i = 0, j = 0;
        
        // Two-pointer technique to find the intersection
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                i++;
            } else if (arr1[i] > arr2[j]) {
                j++;
            } else {
                // If the element is common and not a duplicate
                if (ans.empty() || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};

// Driver code to test the arrayIntersection function
int main() {
    Solution sol;

    // Example arrays
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};

    // Calling the arrayIntersection function
    vector<int> intersectionResult = sol.arrayIntersection(arr1, arr2);

    // Printing the intersection result
    cout << "Intersection of arr1 and arr2: ";
    for (int num : intersectionResult) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
