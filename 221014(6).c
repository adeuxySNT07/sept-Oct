#include<stdio.h>
#include<math.h>
int main() {

	int a = 0, b = 0, c;
	scanf("%d%d", &a, &b);
	c = fabs(a - b);
	switch (c) {
	case 0:printf("�����޼�"); break;
	case 1:printf("��Զ������һ��"); break;
	case 2:printf("ˮ������"); break;
	case 3:printf("֪������"); break;
	case 4:printf("������"); break;
	case 5:printf("�������µ���"); break;
	case 6:printf("�������"); break;
	case 7:printf("����Ĳ���"); break;
	case 8:printf("��Ů��ϵ������"); break;
	case 9:printf("��Ͷ���"); break;
	case 10:printf("��ϵ��"); break;
	case 11:printf("�������"); break;
	case 12:printf("�������"); break;
	case 13:printf("�ʺ����"); break;
	case 14:printf("˵�㻵������"); break;
	case 15:printf("����"); break;
	case 16:printf("����"); break;
	case 17:printf("���ĵ���"); break;
	case 18:printf("���Ĺ��ε���"); break;
	case 19:printf("����˼"); break;
	case 20:printf("ɽ�˺���"); break;
	case 21:printf("���"); break;
	case 22:printf("���������"); break;
	case 23:printf("��Զ��һ��"); break;
	case 24:printf("������"); break;
	case 25:printf("�����ְ���"); break;
	default:printf("����Ե�ֳ������㷶Χ"); break;
	}
	return 0;
}