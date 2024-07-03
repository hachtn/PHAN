#include <stdio.h>

#define MAX 100001
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[MAX];long i,A,B;int N;
    int start[MAX]={0},end[MAX]={0};
    long mind=100001;long maxd=0;
    FILE* file = fopen("input.txt", "r");
    fgets(str, sizeof(str),file);
    sscanf(str,"%d",&N);
    for (i=0;i<N;i++)
     {
      fgets(str, sizeof(str),file);
      sscanf(str,"%ld %ld",&A,&B);    
      start[A]++;end[B]++;
      if (A<mind) mind=A;
      if (B>maxd) maxd=B;
     }
    long worday = 0;
    long maxday = 0;
    long currentday = 0;

    for (i = mind; i <= maxd;i++) {
        worday += start[i];
        if (worday > 0) {
            currentday++;
            if (currentday > maxday) {
                maxday = currentday;
            }
        } else {
            currentday = 0;
        }
        worday -= end[i];
    }
    fclose(file);
    printf("%ld\n", maxday);
    return 0;
}