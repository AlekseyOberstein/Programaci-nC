#include <iostream>
using namespace std;

int fibonacci(int n) {
    int result = 0;
    if (0 == n) {
        result = 1;
    }
    else if (1 == n) {
        result = 1;
    }
    else {
        result = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return result;
}

int main() {
  int i;
  
  printf("Ingresa la posición de la sucesión de fibonacci que deseas obtener:\n");
  scanf("%d", &i);
  
  //cout<<fibonacci(i);
  
    for(int j =0 ; j < i; ++j) {
        cout << "fibonacci(" << j << ") = " << fibonacci(j) << '\n';
    }
    return 0;
}
