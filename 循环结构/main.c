/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    srand(time(NULL));
    printf("%d",rand());
    int i = 0;         //游戏循环次数
    int hp1 = 100 , hp2 = 100; //1p和2p的血量
    int att1 , att2;  //1p和2p的攻击

    while(hp1 >= 0 && hp2 >= 0)  //双方血量不为0时，继续PK
    {
        //默认1p首先攻击
        att1 = rand() % 11 + 5;
        hp2 -= att1;
        if(att1 == 15) //出现暴击
            att1 *=2;
        att2 = rand() % 11 + 5;
        hp1 -= att2;
        if(att2 == 15)
            att2 *=2;
        printf("**********************************\n");
        printf("*************第%d轮***************\n",i+1);
        printf("1P攻击%d，2P剩余%d血\n",att1,hp2);
        printf("2P攻击%d，1P剩余%d血\n",att2,hp1);
        printf("**********************************\n");
        if(hp1 == 0 && hp2 == 0)
        {
            break;
        }
        i++;
        Sleep(500); //延时500毫秒
    }
    printf("1p血量剩余%d，2p血量剩余%d\n",hp1,hp2);
    printf("KO~~~~~~~~~~~\n");
    Sleep(500); //延时500毫秒
    return 0;
}
