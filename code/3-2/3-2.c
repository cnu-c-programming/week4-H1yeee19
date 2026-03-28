#include <stdio.h>

void swap_endian(int *x) {
    // main 에서 int 주소값 받아서 각 주소값에 +1?
    unsigned char* addr = (unsigned char*)x;
    unsigned char tmp;

    // 첫 번째 바이트와 네 번째 바이트 교환
    tmp = addr[0];
    addr[0] = addr[3];
    addr[3] = tmp;

    //두 번째 바이트와 세 번째 바이트 교환
    tmp = addr[1];
    addr[1] = addr[2];
    addr[2] = tmp;

}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
