/*
 * BinaryTreeMain.c
 *
 *  Created on: 2021. 8. 1.
 *      Author: polit
 */
#include <stdio.h>
#include <stdlib.h> //malloc, rand, atoi - ���� / ���� / ���ڿ� ��ȯ �Լ���
#include <string.h> //strcpy, memcpy - ���ڿ� �Լ� / �޸𸮺��� �Լ�
#include <conio.h> // _getch, putch - MS��� C��ǥ�� �Լ�
#include <time.h> // time, clock - �ð� ��¥ �Լ�
//#pragma warnig(disable:4996) // scanf() �� ���� c �Լ� ���� ���� �ذ� (�����Ʃ���
//#pragma warning(disable:4477) // unsigned <-->signed ���� warning (�����Ʃ���

#include "BinaryTree.h"


void printData(BTData data){
	printf("%d ", data);
}
int main(void){
	{
		BTreeNode *bt1 = btree_make_node();
		BTreeNode *bt2 = btree_make_node();
		BTreeNode *bt3 = btree_make_node();
		BTreeNode *bt4 = btree_make_node();

		btree_set_data(bt1, 1);
		btree_set_data(bt2, 2);
		btree_set_data(bt3, 3);
		btree_set_data(bt4, 4);

		btree_make_left(bt1, bt2); // bt1�� bt2 ����
		btree_make_right(bt1, bt3);
		btree_make_left(bt2, bt4);


		// bt1�� left�� data? 2
		printf("bt1�� left�� data? %d \n", btree_get_data(btree_get_left(bt1)));

		// bt1�� left�� left�� data? 4
		printf("bt1�� left�� left�� data? %d \n", btree_get_data(btree_get_left(btree_get_left(bt1))));



		// traversing
		printf("Preorder : ");
		btree_preoder_traverse(bt1, printData); // 1 - 2 - 3 - 4
		printf("\n");

		printf("Inorder : ");
		btree_inoder_traverse(bt1, printData); // 4 - 2 - 1 - 3
		printf("\n");

		printf("Postorder : ");
		btree_postoder_traverse(bt1, printData); // 4 - 2 - 3 - 1
		printf("\n");

		printf("Levelorder : ");
		btree_levelorder_traverse(bt1, printData); // 1 - 2 - 3 - 4
		printf("\n");


		btree_delete(bt1); // ���� ���� 4 - 2 - 3 - 1





	}
	printf("\n");
	{
		BTreeNode *bt0 = btree_make_node();
		BTreeNode *bt1 = btree_make_node();
		BTreeNode *bt2 = btree_make_node();
		BTreeNode *bt3 = btree_make_node();
		BTreeNode *bt4 = btree_make_node();
		BTreeNode *bt5 = btree_make_node();
		BTreeNode *bt7 = btree_make_node();
		BTreeNode *bt8 = btree_make_node();
		BTreeNode *bt9 = btree_make_node();
		btree_set_data(bt0, 0);
		btree_set_data(bt1, 1);
		btree_set_data(bt2, 2);
		btree_set_data(bt3, 3);
		btree_set_data(bt4, 4);
		btree_set_data(bt5, 5);
		btree_set_data(bt7, 7);
		btree_set_data(bt8, 8);
		btree_set_data(bt9, 9);
		btree_make_left(bt5, bt4);
		btree_make_right(bt5, bt2);
		btree_make_left(bt4, bt3);
		btree_make_right(bt4, bt0);
		btree_make_left(bt0, bt8);
		btree_make_right(bt0, bt1);
		btree_make_right(bt8, bt7);
		btree_make_left(bt2, bt9);

		// traversing
		printf("Preorder : ");
		btree_preoder_traverse(bt5, printData); // 5 4 3 0 8 7 1 2 9
		printf("\n");

		printf("Inorder : ");
		btree_inoder_traverse(bt5, printData); // 3 4 8 7 0 1 5 9 2
		printf("\n");

		printf("Postorder : ");
		btree_postoder_traverse(bt5, printData); // 3 7 8 1 0 4 9 2 5
		printf("\n");

		printf("Levelorder : ");
		btree_levelorder_traverse(bt5, printData); // 5 4 2 3 0 9 8 1 7
		printf("\n");



		btree_delete(bt5);
	}

	return 0;
}


