#include "tabel.h"
#include "tabel.c"

int main(){
    Tabel T1;

    createTable (&T1);

    addXTable(&T1, 5);
    addXTable(&T1, 4);
    addXTable(&T1, 5);
    addXTable(&T1, 3);
    addXTable(&T1, 7);
    addXTable (&T1, 6);
    printTable(T1);

    printf("\n setelah dihapus :\n");
    delAllXTable(&T1, 5);
    printTable(T1);
    printf("\n setelah dihapus tampilkan tabelsaja :\n");
    viewTable(T1);

}