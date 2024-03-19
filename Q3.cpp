#include <iostream>
#include <vector>
using namespace std;
void generateArrays(vector<int>& A,vector<int>& B,vector<int>& currentArray, int i, int j, bool fromA) {
    if (fromA) {
        // Include element from A
        currentArray.push_back(A[i]);
        
        // Recur for the next element from B
        if (i + 1 < A.size()) {
            generateArrays(A, B, currentArray, i + 1, j, !fromA);
        } else {
            generateArrays(A, B, currentArray, i, j, !fromA);
        }
    } else {
        // Include element from B
        currentArray.push_back(B[j]);
        
        // Recur for the next element from A
        if (j + 1 < B.size()) {
            generateArrays(A, B, currentArray, i, j + 1, !fromA);
        }
    }
}

int main() {
    vector<int> A = {10, 15, 25};
    vector<int> B = {1, 5, 20, 30};
    vector<int> currentArray;
    
    generateArrays(A, B, currentArray, 0, 0, true);

    return 0;
}
