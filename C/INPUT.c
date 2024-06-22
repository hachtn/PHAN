#define _CRT_SECURE_NO_WARNINGS // Để tắt cảnh báo C4996

#include <stdio.h>
#include <string.h>

int main()
{
    char line[1000], s1[1000], s2[1000];
    int count;
    FILE* file = fopen("D:\\Laptrinh\\TEST.txt", "r");
    if (file == NULL)
    {
        perror("Unable to open file");
        return 1;
    }
    int n = 0;
    fgets(line, 1000, file);
    sscanf(line, "%d", &n);
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        fgets(line, 1000, file);
        sscanf(line, "%s %s", s1, s2);
        printf("%s %s\n", s1, s2);
    }
    fclose(file);
    return 0;
}
