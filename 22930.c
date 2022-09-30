//#include<stdio.h>
//int main() {
//	int n;
//	int id[100];
//	double rate[100];
//
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int initial, final;
//		scanf("%d%d%d", &id[i], &initial, &final);
//		rate[i] = (double)final / initial;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (rate[j + 1] > rate[j]) {
//				int tmpId = id[j];
//				id[j] = id[j + 1];
//				id[j + 1] = tmpId;
//				double tmpRate = rate[j];
//				rate[j] = rate[j + 1];
//				rate[j + 1] = tmpRate;
//			}
//		}
//	}
//
//	double maxDiff = 0;
//	int maxDiffIndex = 0;
//	for (int i = 0; i < n - 1; i++) {
//		double diff = rate[i] - rate[i + 1];
//		if (maxDiff < diff) {
//			maxDiff = diff;
//			maxDiffIndex = i;
//		}
//	}
//
//	printf("%d\n", maxDiffIndex + 1);
//	for (int i = maxDiffIndex; i >= 0; i--) {
//		printf("%d\n", id[i]);
//	}
//
//	printf("%d\n", n - maxDiffIndex - 1);
//	for (int i = n - 1; i >= maxDiffIndex + 1;i--) {
//	printf("%d\n", id[i]);
//	}
//	return 0;
//}