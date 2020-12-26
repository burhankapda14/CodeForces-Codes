#include <bits/stdc++.h>

using namespace std;

// Function to check if there is any

// row where number of unique elements

// are greater than 1

string checkRearrangements(

        vector<vector<int> > mat, int N, int M)

{

        // Iterate over the matrix

        for (int i = 0; i < N; i++) {

                for (int j = 1; j < M; j++) {

                        if (mat[i][0] != mat[i][j]) {

                                return "Yes";

                        }

                }

        }

        return "No";

}

// Function to check if it is possible

// to rearrange mat[][] such that XOR

// of its first column is non-zero

string nonZeroXor(vector<vector<int> > mat,

                                int N, int M)

{

        int res = 0;

        // Find bitwise XOR of the first

        // column of mat[][]

        for (int i = 0; i < N; i++) {

                res = res ^ mat[i][0];

        }

        // If bitwise XOR of the first

        // column of mat[][] is non-zero

        if (res != 0)

                return "Yes";

        // Otherwise check rearrangements

        else

                return checkRearrangements(mat, N, M);

}

// Driver Code

int main()

{

        // Given Matrix mat[][]

        vector<vector<int> > mat

                = {};

        int N = mat.size();

        int M = mat[0].size();

        // Function Call

        cout << nonZeroXor(mat, N, M);

        return 0;

}
