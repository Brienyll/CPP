#include <cstdio>
using namespace std;

int main( int argc, char ** argv) {
  char s[] = { 's', 't', 'r', 'i', 'n', 'g'};
  for (char * cp = s; *cp; cp++) {
    printf ("char  is: %c\n", *cp);
  }
  return 0;
}
