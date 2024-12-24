#include <stdio.h>

int main() {
    FILE *file;
    int numLines;
    char line[256]; 


    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Không th? m? file bt05.txt d? ghi.\n");
        return 1; 
    }

    
    printf("Nh?p s? dòng b?n mu?n ghi vào file: ");
    scanf("%d", &numLines);
    getchar();

    
    for (int i = 0; i < numLines; i++) {
        printf("Nh?p n?i dung cho dòng %d: ", i + 1);
        fgets(line, sizeof(line), stdin); 
        fprintf(file, "%s", line); 
    }

   
    fclose(file);


    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Không th? m? file bt05.txt d? d?c.\n");
        return 1; 
    }

    printf("\nN?i dung trong file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); 
    }

 
    fclose(file);

    return 0;
}
