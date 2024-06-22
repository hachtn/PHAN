#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[1000],s2[1000];
    int i,n,length,count=0;
    FILE* file = fopen("C:/Users/Admin/Desktop/Paiza/input.txt", "r");
    if (file == NULL)
    {
        perror("Unable to open file");
        return 1;
    }
   fscanf(file,"%d",&n);
   fscanf(file,"%s",s1);
   length=strlen(s1);
   for (i=0;i<n-1;i++)
    {
        fscanf(file,"%s",s2);
        if (s1[length-1]!=s2[0])
         {
         printf("%S %s",s1[length-1],s2[0]);
         break;
         }
        else count++;
        strcpy(s1,s2);
        length=strlen(s1);
    }
    if (count==n-1)
    printf("Yes");
   fclose(file);
   return 0;
}
