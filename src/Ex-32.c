#include <stdio.h>
#include <stdlib.h>

// Định nghĩa các macro theo slide bài học
#define SUM(x, y)     (x + y)
#define MUL(x, y)     (x * y)
#define MAX(x, y)     ((x) > (y) ? (x) : (y))
#define ERROR(s)      printf("%s.\n", s)

int main() {
   int a = 5, b = 10;
   printf("SUM(%d,%d)=%d", a, b, SUM(a,b));
   return 0;
}
