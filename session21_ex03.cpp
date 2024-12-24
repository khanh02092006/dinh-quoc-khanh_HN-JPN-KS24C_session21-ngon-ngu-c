#include <stdio.h>

int main() {
    FILE *file;
    char str[100]; 
   
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Không th? m? file bt01.txt d? ghi.\n");
        return 1; 
    }

    printf("Nh?p chu?i b?t k? d? ghi thêm vào file: ");
    fgets(str, sizeof(str), stdin); 
   
    fprintf(file, "%s", str);

    
    fclose(file);

    printf("Chu?i dã du?c ghi thêm vào file bt01.txt.\n");

    return 0;
}
