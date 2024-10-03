#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool primoXnao(int num) {
    if (num == 1) {
        cout << "O numero " << num << " nao eh primo" << endl;
        return false;
    }
    if (num == 2) {
        cout << "O numero " << num << " eh primo" << endl;
        return true;
    } 
    else if (num % 2 == 0) { 
        cout << "O numero " << num << " nao eh primo" << endl;
        return false;
    }

    int limite = static_cast<int>(sqrt(num));
  
    for (int i = 3; i <= limite; i += 2) {
        if (num % i == 0) { 
            cout << "O numero " << num << " nao eh primo" << endl;
            return false;
        }
    }
    cout << "O numero " << num << " eh primo" << endl;
    return true;
}

int main() {
    int n;
    cout << "Digite a quantidade de numeros: ";
    cin >> n;
  
    vector<int> vetor(n);

    cout << "Digite os numeros: ";
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
  
    for (int i = 0; i < n; i++) {
        primoXnao(vetor[i]);
    }
  
    return 0;
}
