#define OK 1
#define ERROR -2
#define TRUE 1
#define FALSE 0

#include "course.h"

typedef int Status;

#define MULTI_LIST_SIZE 10    // 多表表容量

Status InitaCuriList(CURI_NODE *L);		                               // 构造一个空的线性表L
/*Status DestroyList(LinkList &L);	                               // 销毁线性表L
Status ClearList(LinkList &L);	                                   // 清空表
Status ListEmpty(LinkList L);	                                   // 判断空表
int ListLength(LinkList L);		                                   // 求表长
Status LocateElem(LinkList L, ElemType e);		                   // 查找元素
Status GetElem(LinkList L, int i, ElemType &e);	                   // 获得元素
Status PriorElem(LinkList L, ElemType cur_e, ElemType &pre_e);	   // 获得前驱
Status NextElem(LinkList L, ElemType cur_e, ElemType &next_e);	   // 获得后继
Status ListInsert(LinkList &L, int i, ElemType e);		           // 插入元素
Status ListDelete(LinkList &L, int i, ElemType &e);		           // 删除元素
Status ListTrabverse(LinkList L);		                           // 遍历表
Status LoadList(FILE *fp, LinkList &L);		                       // 从文件读入线性表
Status SaveList(FILE *fp, LinkList L);		                       // 将表保存至文件
Status MultiList(LinkList &L, LinkList List[], int &cur_num, int num); //多表操作*/

/**
* 函数名称：InitiaList
* 函数参数：线性表L的地址
* 函数功能：新建一个表头结点，并将next指针置空
* 返回值：成功构造返回OK，否则返回ERROR
**/
/*Status InitaCuriList(CURI_NODE *L)
{
	if(L)
	{
		printf("线性表已存在！\n");
    }
    L = (CURI_NODE* )malloc(sizeof(CURI_NODE));    //新建表头结点
    if(!L)
    {
        printf("创建头结点失败\n");
    }
    L->credit = -1;
    L->hours = -1;
    L->next = NULL;
    return OK;
}*/
