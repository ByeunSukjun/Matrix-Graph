#include <iostream>
using namespace std;

int main() {
  
    int N = 2, K = 3, M = 2; 
    float A[2][3] = { {1, 2, 3}, {4, 5, 6} }; 
    float B[3][2] = { {1, 0}, {0, 2}, {1, 3} }; 
    float C[2][2] = {}; 


    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            float sum = 0;
            for (int k = 0; k < K; k++) {
                sum += A[n][k] * B[k][m];
            }
            C[n][m] = sum;
        }
    }


    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            cout << C[n][m] << " ";
        }
        cout << endl;
    }

    return 0;
}
