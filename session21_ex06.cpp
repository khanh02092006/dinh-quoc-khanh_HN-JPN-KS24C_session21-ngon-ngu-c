#include <stdio.h>

int main() {
    FILE *fileNguon, *fileDich;
    char kyTu;

    fileNguon = fopen("bt01.txt", "r");
    if (fileNguon == NULL) {
        printf("Không th? m? file bt01.txt d? d?c.\n");
        return 1; 
    }

  
    fileDich = fopen("bt06.txt", "w");
    if (fileDich == NULL) {
        printf("Không th? m? file bt06.txt d? ghi.\n");
        fclose(fileNguon);
        return 1;
    }

 
    while ((kyTu = fgetc(fileNguon)) != EOF) {
        fputc(kyTu, fileDich); 
    }


    fclose(fileNguon);
    fclose(fileDich);

    printf("N?i dung t? file bt01.txt dã du?c sao chép sang file bt06.txt.\n");

    return 0;
}
