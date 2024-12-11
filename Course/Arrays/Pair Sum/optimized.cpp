#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> pairSum(vector<int>& vec, int target) {
    vector<pair<int,int>> ans;
    int n = vec.size();
    int i=0,j=n-1;
    while(i<=j){
        int pairsum=vec[i]+vec[j];
        if(pairsum<target){
            i++;
        }
        else if(pairsum>target){
            j--;
        }
        else{
            ans.push_back({i,j});
            i++;
            j--; 
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

    vector<pair<int, int>> ans = pairSum(vec, 4);

    if (ans.empty()) {
        cout << "No pair found!" << endl;
    } else {
        for (const auto& p : ans) {
            cout << "(" << vec[p.first] << "," << vec[p.second] << ")";
        }
    }

    return 0;
}
