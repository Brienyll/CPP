#include <iostream>

using namespace std;

int main () {
  int i = 1;
    int avg;
    int sum = 0;
    while (i <= 10) {
      sum += i;
      i++;
    }
    avg = sum / i;
    cout << avg << endl;
    system("pause");
}
