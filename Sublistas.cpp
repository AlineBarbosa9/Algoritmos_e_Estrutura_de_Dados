#include <iostream>
using namespace std;

void backtracking(int arr[], int n, int pos, int atual[], int tamanho) {

    // Caso base
    if (pos == n) {
        cout << "[ ";
        for (int i = 0; i < tamanho; i++) {
            cout << atual[i] << " ";
        }
        cout << "]";
        cout << endl;
        return;
    }

    // Não escolher arr[pos]
    backtracking(arr, n, pos + 1, atual, tamanho);

    // Escolher arr[pos]
    atual[tamanho] = arr[pos];

    backtracking(arr, n, pos + 1, atual, tamanho + 1);
}

int main() {

    int arr[] = {1, 2};

    int n = 2;

    int atual[2];

    backtracking(arr, n, 0, atual, 0);

    return 0;
}
