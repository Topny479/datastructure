#define OK 1
#define ERROR -2
#define TRUE 1
#define FALSE 0

#include "course.h"

typedef int Status;

#define MULTI_LIST_SIZE 10    // ��������

Status InitaCuriList(CURI_NODE *L);		                               // ����һ���յ����Ա�L
/*Status DestroyList(LinkList &L);	                               // �������Ա�L
Status ClearList(LinkList &L);	                                   // ��ձ�
Status ListEmpty(LinkList L);	                                   // �жϿձ�
int ListLength(LinkList L);		                                   // ���
Status LocateElem(LinkList L, ElemType e);		                   // ����Ԫ��
Status GetElem(LinkList L, int i, ElemType &e);	                   // ���Ԫ��
Status PriorElem(LinkList L, ElemType cur_e, ElemType &pre_e);	   // ���ǰ��
Status NextElem(LinkList L, ElemType cur_e, ElemType &next_e);	   // ��ú��
Status ListInsert(LinkList &L, int i, ElemType e);		           // ����Ԫ��
Status ListDelete(LinkList &L, int i, ElemType &e);		           // ɾ��Ԫ��
Status ListTrabverse(LinkList L);		                           // ������
Status LoadList(FILE *fp, LinkList &L);		                       // ���ļ��������Ա�
Status SaveList(FILE *fp, LinkList L);		                       // ���������ļ�
Status MultiList(LinkList &L, LinkList List[], int &cur_num, int num); //������*/

/**
* �������ƣ�InitiaList
* �������������Ա�L�ĵ�ַ
* �������ܣ��½�һ����ͷ��㣬����nextָ���ÿ�
* ����ֵ���ɹ����췵��OK�����򷵻�ERROR
**/
/*Status InitaCuriList(CURI_NODE *L)
{
	if(L)
	{
		printf("���Ա��Ѵ��ڣ�\n");
    }
    L = (CURI_NODE* )malloc(sizeof(CURI_NODE));    //�½���ͷ���
    if(!L)
    {
        printf("����ͷ���ʧ��\n");
    }
    L->credit = -1;
    L->hours = -1;
    L->next = NULL;
    return OK;
}*/
