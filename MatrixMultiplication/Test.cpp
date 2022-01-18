#include <iostream>
#include "Time.h"
#include "Multiply.h"
using namespace std;

void test(int l, int n, double p, vector<vector<vector<int>>(*)(vector<vector<int>>& A, vector<vector<int>>& B)> funcArr)
{
    vector<pair<vector<vector<int>>, vector<vector<int>>>> arr = generateManyPairs(l, n, p);
    for (unsigned int i = 0; i < funcArr.size(); i++)
    {
        auto currFunc = funcArr[i];
        resetTime();
        for (int j = 0; j < l; j++)
        {
            vector<vector<int>> C = funcArr[i](arr[j].first, arr[j].second);
        }
        showTime();
        cout << endl;
    }
}
int main()
{
    //resetTime();
    //showTime();
    test(3, 1000, 0.1, {Strassen, threadMultiply, bruteForceMultiply});
}
