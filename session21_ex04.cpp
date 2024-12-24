#include <stdio.h>

int main() {
    FILE *file;
    char line[256]; 


    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Kh�ng th? m? file bt01.txt d? d?c.\n");
        return 1; 
    }

    
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("D�ng d?u ti�n trong file bt01.txt l�: %s", line);
    } else {
        printf("File bt01.txt r?ng ho?c kh�ng th? d?c d�ng d?u ti�n.\n");
    }

    fclose(file);

    return 0;
}
