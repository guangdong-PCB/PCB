/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    srand(time(NULL));
    printf("%d",rand());
    int i = 0;         //��Ϸѭ������
    int hp1 = 100 , hp2 = 100; //1p��2p��Ѫ��
    int att1 , att2;  //1p��2p�Ĺ���

    while(hp1 >= 0 && hp2 >= 0)  //˫��Ѫ����Ϊ0ʱ������PK
    {
        //Ĭ��1p���ȹ���
        att1 = rand() % 11 + 5;
        hp2 -= att1;
        if(att1 == 15) //���ֱ���
            att1 *=2;
        att2 = rand() % 11 + 5;
        hp1 -= att2;
        if(att2 == 15)
            att2 *=2;
        printf("**********************************\n");
        printf("*************��%d��***************\n",i+1);
        printf("1P����%d��2Pʣ��%dѪ\n",att1,hp2);
        printf("2P����%d��1Pʣ��%dѪ\n",att2,hp1);
        printf("**********************************\n");
        if(hp1 == 0 && hp2 == 0)
        {
            break;
        }
        i++;
        Sleep(500); //��ʱ500����
    }
    printf("1pѪ��ʣ��%d��2pѪ��ʣ��%d\n",hp1,hp2);
    printf("KO~~~~~~~~~~~\n");
    Sleep(500); //��ʱ500����
    return 0;
}
