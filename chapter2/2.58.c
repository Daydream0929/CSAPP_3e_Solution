#include <stdio.h>
#include <assert.h>

typedef unsigned char *byte_pointer;

int is_little_endian() {
    int x = 1;
    byte_pointer p = (byte_pointer) &x;
    return p[0] == 1;
}

int main(int argc, char *argv[]) {
    assert(is_little_endian());
    return 0;
}