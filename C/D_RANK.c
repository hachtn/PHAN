

//コードの評価方法
#include <stdio.h>
int main(void){
    int i, n;
    char buf[1000];
    char token1[100], token2[100];

    fgets(buf, sizeof(buf), file);
    sscanf(buf, "%d\n", &n);
    for (i=0; i<n; i++) {
        fgets(buf, sizeof(buf), file);
        sscanf(buf, "%s %s\n", token1, token2);
        printf("hello = %s , world = %s\n" ,token1 ,token2);
    }
    return 0;
}
==========================================================================================

//1つのデータの入力 C編
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char s[1000],str[1000];
    fgets(str, sizeof(str), file);
    sscanf(str,"%s",s);
    printf("%s",s);
    return 0;

}
==========================================================================================
//3行のデータの入力
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    #define  n 3
    char str[1000];
    for (int i = 0; i < n; i++)
    {
    fgets(str, sizeof(str), file);
    printf("%s", str);
    }
    return 0;
}
==========================================================================================
//3つのデータの入力
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000],s1[1000],s2[1000],s3[1000];
    fgets(str, sizeof(str), file);
    sscanf(str,"%s %s %s",s1,s2,s3);
    printf("%s\n",s1);printf("%s\n",s2);printf("%s\n",s3);
    return 0;
}
==========================================================================================
//N個のデータの入力 C編

#include <stdio.h>
int main(void) {
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000]; int n;
    const char delim[] = " ";
    fgets(str, sizeof(str), file);
    sscanf(str, "%d", &n);
    fgets(str, sizeof(str), file);
    char* token = strtok(str, delim);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    return 0;
}
==========================================================================================

//カンマ区切りの3つのデータの入力 
#include <stdio.h>
int main(void) {
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000]; 
    const char delim[] = ",";
    fgets(str, sizeof(str), file);
    char* token = strtok(str, delim);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    return 0;
}

==========================================================================================
//カンマ区切りのN個のデータの入力 

#include <stdio.h>
int main(void) {
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000]; int n;
    const char delim[] = ",";
    fgets(str, sizeof(str), file);
    sscanf(str, "%d", &n);
    fgets(str, sizeof(str), file);
    char* token = strtok(str, delim);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    return 0;
}
==========================================================================================
//「数値演算結果で分岐 C編」
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];int a,b,c;
    fgets(str, sizeof(str), file);
    sscanf(str,"%d %d %d",&a,&b,&c);
    if ((a*b) <=c)  printf("YES\n");
    else            printf("NO\n");
    return 0;
}

==========================================================================================
//「占い C編」
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];int a;
    fgets(str, sizeof(str), file);
    sscanf(str,"%d",&a);
    if (a==7)  printf("Yes");
    else       printf("No");
    return 0;
}
==========================================================================================
//「ある数字までの出力 2 C編」
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];int i,n;
    fgets(str, sizeof(str), file);
    sscanf(str,"%d",&n);
    for (i=1;i<=n;i++) printf("%d\n",i);
    return 0;
}

==========================================================================================

//「FizzBuzz C編」採点結果
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int i;
    for (i=1;i<=100;i++)
     if      (((i%5)==0)&&((i%3)==0)) printf("FizzBuzz\n");
     else if ((i%5)==0)               printf("Buzz\n");
     else if ((i%3)==0)               printf("Fizz\n");
     else                             printf("%d\n",i);
    return 0;
}
==========================================================================================
//掛け算
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];int a,b;
    fgets(str, sizeof(str), file);
    sscanf(str,"%d",&a);
    fgets(str, sizeof(str), file);
    sscanf(str,"%d",&b);
    printf("%d",a*b);
    return 0;
}
==========================================================================================

//「足し算 C編」
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];int a,b;
    fgets(str, sizeof(str), file);
    sscanf(str,"%d %d",&a,&b);
    printf("%d",a+b);
    return 0;
}
==========================================================================================
//「一番小さい値 C編」
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    #define  n 5
    char str[1000];int a,min=100;
    for (int i = 0; i < n; i++)
    {
    fgets(str, sizeof(str), file);
    sscanf(str,"%d",&a);
    if (a<min) min=a;
    }
    printf("%d",min);
    return 0;
}

==========================================================================================
//文字の一致 
#include <stdio.h>
#include <string.h>

int main(void) {
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000], c[1000];
    
    fgets(str,sizeof(str), file);
    fgets(c,sizeof(c), file);
     str[strcspn(str, "\n")] = '\0';
     c[strcspn(c, "\n")] = '\0';
   if (strcmp(str,c) == 0) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}

==========================================================================================
//「【殿堂入りキャンペーン】
#include <stdio.h>
#include <string.h>

int main(void) {
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000], c[1000];
    fgets(str,sizeof(str), file);str[strcspn(str, "\n")] = '\0';
    printf("%s@",str);
    fgets(c,sizeof(c), file);str[strcspn(str, "\n")] = '\0';
    printf("%s",c);
    return 0;
}


==========================================================================================
//D172:イヴの日付
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];int a;
    fgets(str, sizeof(str), file);
    sscanf(str,"%d",&a);
    printf("%d",a-1);
    return 0;
}

==========================================================================================
//D120:鉛筆の数
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];int a;
    fgets(str, sizeof(str), file);
    sscanf(str,"%d",&a);
    printf("%d",a*12);
    return 0;
}
==========================================================================================
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    #define  n 7
    char str[1000];int count=0;
    for (int i = 0; i < n; i++)
    {
    fgets(str, sizeof(str), file);
    if (str[0] =='R') count++;
    }
    if (count>3) printf("Yes");
    else         printf("No");
    return 0;
}
