//
// Created by liyingmin on 2021/9/12.
//

#include <iostream>
#include <map>
#include <vector>
#include "util/output_container.h"

using namespace std;

int main() {
    map<int, int> mp{
            {1, 1},
            {2, 4},
            {3, 9}};
    cout << mp << endl;
    vector<vector<int>> vv{
            {1, 1},
            {2, 4},
            {3, 9}};
    cout << vv << endl;
}