#include <stdio.h>

int main() {
    FILE *file;
    char str[100]; 

    
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Kh�ng the ma file dc ghi.\n");
        return 1; 
    }

    printf("Nhap chuoi bat ki: ");
    fgets(str, sizeof(str), stdin); 

   
    fclose(file);

    printf("Chuoi d� duoc ghi v�o file bt01.txt.\n");

    return 0;
}
