//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#define MAXLEN 100
//typedef struct queue {
//	int* pbase;
//	int front;
//	int rear;
//}QUEUE;
//
//void init(QUEUE*pq) {
//	pq->pbase = (QUEUE*)malloc(sizeof(QUEUE));  //pq���ָ��ָ����Q�������
//	pq->front = 0;
//	pq->rear = 0;
//}
//
//bool full_queue(QUEUE* pq) {
//	if ((pq->rear + 1) % MAXLEN == pq->front) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//bool in_queue(QUEUE *pq, int val) {  //���������ﴫ��ʱ����ֱ�Ӱ�pq���ָ�봫�����ӿ�����
//	if (full_queue(pq)) {
//		return false;
//	}
//	else {
//		pq->pbase[pq->rear] = val;
//		pq->rear = (pq->rear + 1) % MAXLEN;
//		return true;
//	}
//}
//
//bool empty_queue(QUEUE* pq) {
//	if (pq->front == pq->rear) {
//		return true;
//	}
//	else
//		return false;
//}
//bool out_queue(QUEUE* pq, int *pval) {
//	if (empty_queue(pq)) {
//		return false;
//	}
//	else {
//		*pval = pq->pbase[pq->front];
//pq->front = (pq->front + 1) % MAXLEN;
//	}
//}
//void traverse_queue(QUEUE* pq) {
//	int i = pq->front;
//	while (i != pq->rear) {  //��Ϊrear ʼ��ָ�����һ��Ԫ�غ����һ��û���õĿռ�
//		printf("%d ", pq->pbase[i]);
//		i = (i + 1) % MAXLEN;
//	}
//	printf("\n");
//	return;
//}
//
//
//int main() {
//	QUEUE Q;
//	int val;
//	init(&Q);
//	in_queue(&Q, 1);
//	in_queue(&Q, 2);
//	in_queue(&Q, 3);
//	in_queue(&Q, 4);
//	in_queue(&Q, 5);
//	in_queue(&Q, 6);
//	traverse_queue(&Q);
//	if (out_queue(&Q, &val)) {
//		printf("���ӳɹ������г��ӵ�Ԫ����%d \n", val);
//	}
//	else {
//		printf("����ʧ�ܣ�");
//	}
//	traverse_queue(&Q);
//
//	return 0;
//}