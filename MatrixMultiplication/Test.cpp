#include <iostream>
#include "Time.h"
#include "Multiply.h"
using namespace std;

void test(int l, int n, double p, vector<vector<int>> (*multiply)(vector<vector<int>>& A, vector<vector<int>>& B))
{
    vector<pair<vector<vector<int>>, vector<vector<int>>>> arr = generateManyPairs(l, n, p);
    resetTime();
    for (int i = 0; i < l; i++)
    {
        showArr(arr[i].first);
        showArr(arr[i].second);
        vector<vector<int>> C = multiply(arr[i].first, arr[i].second);
        showArr(C);
    }
    showTime();
}
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

    test(1, 4000, 0.5, {bruteForceMultiply, Strassen});
    //vector<vector<int>> arr(321, vector<int>(321, 3)), brr(321, vector<int>(321, 3));
}
