#include <cstdio>
using namespace std;

int main( int argc, char ** argv) {
  char s[] = { 's', 't', 'r', 'i', 'n', 'g'};
  for (char c: s) {
    printf ("char  is: %c\n", c);
  }
  return 0;
}
