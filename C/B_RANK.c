==========================================================================================
//長テーブルのうなぎ屋
#include <stdio.h>
void refresh(int a[101])
{
 for (int i=1;i<=100;i++) a[i]=1;    
}
int check(int seki[101],int a,int b) 
{
    for (int i=b;i<=a+b-1;i++)
     if (seki[i]==0)  return 0;
     return 1;
}
int main(void){
    char buf[1000];int seki[101];
    int a,b,n,m,count=0;
    refresh(seki);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %d\n",&n,&m);
    for (int i=0; i<m; i++) 
    {
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf,"%d %d\n",&a,&b);
        if (check(seki,a,b)==1)
         for (int j=b;j<=a+b-1;j++)  
           {   
               seki[j]=0;
                count++; 
           }
    }
    printf("%d",count);
    return 0;
}

==========================================================================================
//「隣接行列 C編」
#include <stdio.h>
#include <string.h>

#define  MAX  100

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    int g[MAX][MAX];int a,b,N,M;
    fgets(str, sizeof(str), stdin); 
    sscanf(str, "%d %d",&N,&M);
    memset(g,0,sizeof(g));
    for (int i=0;i<M;i++)
    {
       fgets(str, sizeof(str), stdin); 
       sscanf(str,"%d %d",&a,&b);
       g[a-1][b-1]=1;
    }
     for (int i = 0; i < N; i++)
        {
          for (int j = 0; j < N; j++)
 
              printf("%d",g[i][j]);

              printf("\n");
         }
     for (int i = 0; i < N; i++)
     {
       for (int j = 0; j < N; j++)
        if (g[i][j])
            printf("%d", j);
       
          printf("\n");
     }
    
      return 0;
}

==========================================================================================
//「重みあり有向グラフの隣接行列と隣接リスト C編」

#include <stdio.h>
#include <string.h>

#define  MAX  100

typedef struct {
    int potision;
    int value;
} map_g;

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    map_g g[MAX][MAX];int a,b,N,M,k;
    fgets(str, sizeof(str), stdin); 
    sscanf(str, "%d %d",&N,&M);
    memset(g,0,sizeof(g));
    for (int i=0;i<M;i++)
    {
       fgets(str, sizeof(str), stdin); 
       sscanf(str,"%d %d %d",&a,&b,&k);
       g[a-1][b-1].potision=1;g[a-1][b-1].value=k;
    }
     for (int i = 0; i < N; i++)
        {
          for (int j = 0; j < N; j++)
             if (g[i][j].potision)  printf("%d",g[i][j].value);
             else                   printf("%d",g[i][j].potision);

              printf("\n");
         }
     for (int i = 0; i < N; i++)
     {
       for (int j = 0; j < N; j++)
        if (g[i][j].potision)
            printf("%d(%d)",j,g[i][j].value);
       
          printf("\n");
     }
    
      return 0;
}
==========================================================================================
//「一方通行（グラフ上の移動） C編」


#include <stdio.h>
#include <string.h>

#define  MAX  100

typedef struct {
    int p1;
    int p2;
    int trace;
} map_g;

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    map_g g[MAX];int N,t=1;
    fgets(str, sizeof(str), stdin); 
    sscanf(str, "%d",&N);
    memset(g,0,sizeof(g));
    for (int i=0;i<N-1;i++)
    {
       fgets(str, sizeof(str), stdin); 
       sscanf(str,"%d %d",&g[i].p1,&g[i].p2);
    }
       for (int i = 0; i < N; i++)
        { 
          printf("%d\n",t);               
          for (int j = 0; j < N; j++)
           if (g[j].trace==0)
            if   ((g[j].p1==t)||(g[j].p2==t)) 
               {
              
                 if    (g[j].p1==t) t=g[j].p2;
                 else               t=g[j].p1;
                 g[j].trace=1;
                 break;
               }
     
         }
    
    
      return 0;
}
==========================================================================================
//B129:n毛作

#include <stdio.h>
#define  MAX 50

    // 自分の得意な言語で
    // Let's チャレンジ！！
void harvest(int farm[MAX][MAX],int crop[MAX],int a,int b,int c,int d)
{
 int i,j;   
 for (i=a-1;i<b;i++)
  {
  for (j=c-1;j<d;j++)
       crop[farm[i][j]]++;
  }       
  return;       
      
}
void plant(int farm[MAX][MAX],int a,int b,int c,int d,int e)
{
 int i,j;   
 for (i=a-1;i<b;i++)
  {
  for (j=c-1;j<d;j++)
       farm[i][j]=e;
  }       
  return;       
      
}
int main(void){
    int farm[MAX][MAX]={0};
    int i,j,n,m,h,w,a,b,c,d,e;
    int crop[MAX]={0};
    scanf("%d %d",&n,&m);
    scanf("%d %d",&h,&w);
    for (i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); 
        harvest(farm,crop,a,b,c,d);
        plant(farm,a,b,c,d,e);
    }
    for (i=1;i<=m;i++) printf("%d\n",crop[i]);
    for (i=0;i<h;i++)
    {
        for (j=0;j<w;j++)
        if     (farm[i][j]==0) printf(".");
        else    printf("%d",farm[i][j]);
        printf("\n");
    }
    return 0;
}



==========================================================================================











































==========================================================================================


































==========================================================================================
