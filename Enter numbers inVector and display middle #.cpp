#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUM_ELEMENTS = 9;
    vector<int> userValues;
    int num = 0, count = 0;
    while (num != -1) {
        cin >> num;
        if (num != -1) {
            if (count == NUM_ELEMENTS) {
                cout << "Too many numbers" << endl;
                return 0;
            }
            userValues.push_back(num);
            ++count;
        }
    }
    cout << "Middle item: " << userValues[count / 2] << endl;
    return 0;
}