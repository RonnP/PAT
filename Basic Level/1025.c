/**
 * Created by Ronn on 1/7/18
 * 1025. 反转链表
 */
#include <stdio.h>
#include <malloc.h>

#define SWAP(A, B){Node temp=A; A=B; B=temp;}
typedef struct Node {
	int addr, data, next;
} *Node;

int main() {
	int start, n, k;
	scanf("%d %d %d", &start, &n, &k);
	Node *nodes, *p;
	nodes = malloc(n * sizeof(Node));
	for (int i = 0; i < n; i++) {
		nodes[i] = malloc(sizeof(struct Node));
		scanf("%d %d %d", &nodes[i]->addr, &nodes[i]->data, &nodes[i]->next);
	}

	//调整链表顺序
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			/* 交换链表顺序
			 * 如果i=0 则找出头结点
			 * 如果i!=0 则找出下结点
			 */
			if (nodes[j]->addr == (i ? nodes[i - 1]->next : start)) {
				SWAP(nodes[i], nodes[j]);
				break;
			}
		}

		//无用结点
		if (nodes[i]->next == -1) n = i + 1;
	}

	//反转链表
	for (int i = 0; i < n / k; i++) {
		p = nodes + i * k;
		for (int j = 0; j < k / 2; j++) {
			SWAP(p[j], p[k - j - 1]);
		}
	}

	//打印链表
	for (int i = 0; i < n - 1; i++)
		printf("%05d %d %05d\n", nodes[i]->addr, nodes[i]->data, nodes[i + 1]->addr);
	printf("%05d %d -1\n", nodes[n - 1]->addr, nodes[n - 1]->data);
	return 0;
}