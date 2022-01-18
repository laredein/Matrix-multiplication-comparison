#ifndef MULTIPLY_H 
#define MULTIPLY_H

#include "Generator.h"
#include <thread>
#include <future>

int padding(int n);
vector<vector<int>> matSum (vector<vector<int>>& A, vector<vector<int>>& B);
vector<vector<int>> matDif (vector<vector<int>>& A, vector<vector<int>>& B);
vector<vector<int>> bruteForceMultiply (vector<vector<int>>& A, vector<vector<int>>& B);
vector<vector<int>> Strassen (vector<vector<int>>& A, vector<vector<int>>& B);
vector<vector<int>> expand(vector<vector<int>> A);
vector<vector<int>> StrassenStep(vector<vector<int>> A, vector<vector<int>> B);
vector<vector<int>> threadMultiply (vector<vector<int>>& A, vector<vector<int>>& B);
void grid8Multiply (vector<vector<int>>& A, vector<vector<int>>& B, vector<vector<int>>& C, int ind);

#endif
