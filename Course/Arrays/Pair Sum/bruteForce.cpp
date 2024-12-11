#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int>& vec, int target) {
    vector<int> ans;
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Ensure unique pairs (i < j)
            if (vec[i] + vec[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                // If you want to return after the first pair, use 'return ans;'
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    
    vector<int> vec(n);
    cout << "Enter elements of vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> ans = pairSum(vec, 3);
    
    if (ans.empty()) {
        cout << "No pair found!" << endl;
    } else {
        cout<<vec[ans[0]]<<","<<vec[ans[1]];
    }

    return 0;
}
