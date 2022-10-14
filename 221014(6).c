#include<stdio.h>
#include<math.h>
int main() {

	int a = 0, b = 0, c;
	scanf("%d%d", &a, &b);
	c = fabs(a - b);
	switch (c) {
	case 0:printf("亲密无间"); break;
	case 1:printf("永远和你在一起"); break;
	case 2:printf("水火不相容"); break;
	case 3:printf("知心朋友"); break;
	case 4:printf("心上人"); break;
	case 5:printf("帮你做事的人"); break;
	case 6:printf("帮你的人"); break;
	case 7:printf("面和心不合"); break;
	case 8:printf("男女关系不正常"); break;
	case 9:printf("情投意合"); break;
	case 10:printf("关系马虎"); break;
	case 11:printf("尊敬你的人"); break;
	case 12:printf("爱你的人"); break;
	case 13:printf("适合你的"); break;
	case 14:printf("说你坏话的人"); break;
	case 15:printf("克星"); break;
	case 16:printf("救星"); break;
	case 17:printf("忠心的人"); break;
	case 18:printf("狼心狗肺的人"); break;
	case 19:printf("单相思"); break;
	case 20:printf("山盟海誓"); break;
	case 21:printf("情敌"); break;
	case 22:printf("服从你的人"); break;
	case 23:printf("永远在一起"); break;
	case 24:printf("伴终生"); break;
	case 25:printf("恨你又爱你"); break;
	default:printf("你俩缘分超出计算范围"); break;
	}
	return 0;
}