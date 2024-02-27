#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> nums;
public:
    Solution(vector<int> x) : nums(x) {}

    int removeElement(int val) {
        int iAns = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[iAns] = nums[i];
                iAns++;
            }
        }
        return iAns;
    }

    void print(int size) {
        cout << "Size of array is " << size << endl;
        cout << "Array is [ ";
        for (int i = 0; i < size; i++) {
            cout << nums[i];
            if (i < size - 1) {
                cout << ",";
            }
        }
        cout << " ]" << endl;
    }
};

int main() {
    vector<int> num1 = {3, 2, 2, 3};
    int val1 = 3;

    Solution solObj1(num1);
    int res1 = solObj1.removeElement(val1);
    solObj1.print(res1);

    vector<int> num2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;

    Solution solObj2(num2);
    int res2 = solObj2.removeElement(val2);
    solObj2.print(res2);

    return 0;
}
