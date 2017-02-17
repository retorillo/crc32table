#include <stdio.h>
int main() {
  unsigned int i = 0;
  for (i = 0; i < 256; i++) {
    unsigned int c = i;
    int j = 0;
    for (j = 0; j < 8; j++) {
      c = (c & 1) ? (0xEDB88320 ^ (c >> 1)) : (c >> 1);
    }
    printf((i + 1) % 8 == 0 ? "0x%08x,\n" : "0x%08x, ", c);
  }
  return 0;
}
