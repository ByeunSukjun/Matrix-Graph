#include <iostream>
using namespace std;

int main() {
    int N = 2, K=3, M=2; // A: NxK, B: KxM
    float A[] = { 1,2,3,4,5,6 }, B[] = {1,0,0,2,1,3}, * C;
    C = new float[N * M];



    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            float sum = 0;
            for (int k = 0; k < K; k++) {
                sum += A[n * K + k] * B[k * M + m];
            }
            C[n * M + m] = sum;
        }
    }

    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            cout << C[n * M + m] << "  ";
        }
        cout << endl;
    }

    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
