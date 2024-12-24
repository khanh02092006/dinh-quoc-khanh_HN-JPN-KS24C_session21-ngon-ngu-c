#include <stdio.h>

int main() {
    FILE *file;
    char line[256]; 


    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Không th? m? file bt01.txt d? d?c.\n");
        return 1; 
    }

    
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dòng d?u tiên trong file bt01.txt là: %s", line);
    } else {
        printf("File bt01.txt r?ng ho?c không th? d?c dòng d?u tiên.\n");
    }

    fclose(file);

    return 0;
}
