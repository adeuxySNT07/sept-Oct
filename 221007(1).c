//StudybarCommentBegin
#include<stdio.h>
int main()
{
    int a[5];
    int i;
    int x1, x2, x3, x4, x5; //x1Ϊ0-9֮������ĸ�����x2Ϊ10-19֮�����ĸ������Դ�����
    x1 = x2 = x3 = x4 = x5 = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]); //����10������������
    }
    for (i = 0; i < 5; i++) {
//StudybarCommentEnd

        if (a[i] >= 0 && a[i] < 10) {
            x1++;
        }
        else if (a[i] >= 10 && a[i] < 20) {
            x2++;
        }
        else if (a[i] >= 20 && a[i] < 30) {
            x3++;
        }
        else if (a[i] >= 30 && a[i] < 40) {
            x4++;
        }
        else if (a[i] >= 40 && a[i] < 50) {
            x5++;
        }

//StudybarCommentBegin
    }
    printf("0-9:%d\n", x1);
    printf("10-19:%d\n", x2);
    printf("20-29:%d\n", x3);
    printf("30-39:%d\n", x4);
    printf("40-49:%d\n", x5);
    return 0;
}

//StudybarCommentEnd