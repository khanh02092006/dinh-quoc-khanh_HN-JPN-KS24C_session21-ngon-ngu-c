#include <stdio.h>

int main() {
    FILE *file;
    char str[100]; 
   
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Kh�ng th? m? file bt01.txt d? ghi.\n");
        return 1; 
    }

    printf("Nh?p chu?i b?t k? d? ghi th�m v�o file: ");
    fgets(str, sizeof(str), stdin); 
   
    fprintf(file, "%s", str);

    
    fclose(file);

    printf("Chu?i d� du?c ghi th�m v�o file bt01.txt.\n");

    return 0;
}
