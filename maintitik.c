#include "titik.c"
#include <stdio.h>

int main() {
    Titik A, B;

    setAbsis(&A,4);
    setAbsis(&B, 8);
    setOrdinat(&A, 6);
    setOrdinat(&B, 10);
    printf("Titik A (%d, %d)\n", getAbsis(A), getOrdinat(A));
    printf("Titik B (%d, %d)\n", getAbsis(B), getOrdinat(B));

    setAbsis(&A,8);
    printf("Titik A diganti dengan %d (%d, %d)\n", getAbsis(A), getAbsis(A), getOrdinat(A));
    setOrdinat(&A,7);
    printf("Titik A diganti dengan %d (%d, %d)\n", getOrdinat(A), getAbsis(A), getOrdinat(A));

    geserXY(&B, 3, 5);
    printf("Titik B (%d, %d)\n", getAbsis(B), getOrdinat(B));

    refleksiSumbuY(&A);
    printf("Titik A (%d, %d)\n", getAbsis(A), getOrdinat(A));


    printf ("jarak kedua titik adalah %.2f cm", Jarak(A, B));

    return 0;
}