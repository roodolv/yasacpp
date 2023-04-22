#include "minmax.h"

int MinMax::max(int n1, int n2, int n3) {
  int tmp = n1;
  if (tmp <= n2)
    tmp = n2;
  if (tmp <= n3)
    tmp = n3;
  return tmp;
}

int MinMax::min(int n1, int n2, int n3) {
  return -max(-n1, -n2, -n3);
}
