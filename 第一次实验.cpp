/* Linear Table On Sequence Structure */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/*---------page 10 on textbook ---------*/
#define OK 1
#define FALSE -1
#define ERROR -2 

typedef int status;
typedef int ElemType;    //数据元素类型

#define LIST_INIT_SIZE 100    //线性表存储空间初始分配量
#define LISTINCREMENT  10    // 线性表存储空间的分配增量
#define MULTI_LIST_SIZE 10    // 多表表容量
typedef struct {  
	ElemType * elem;
	int length;
	int listsize;
	int isnull = 1;    //线性表未初始化 
}SqList;

/*-----page 19 on textbook ---------*/
status IntiaList(SqList & L);
status DestroyList(SqList & L);
status ClearList(SqList &L);
status ListEmpty(SqList L);
int ListLength(SqList L);
status GetElem(SqList L,int i,ElemType & e);
status LocateElem(SqList L,ElemType e); //简化过
status PriorElem(SqList L,ElemType cur,ElemType & pre_e);
status NextElem(SqList L,ElemType cur,ElemType & next_e);
status ListInsert(SqList & L,int i,ElemType e);
status ListDelete(SqList & L, int i, ElemType & e);
status LoadList(FILE *fp,SqList &L);
status SaveList(FILE *fp,SqList L);
status ListTrabverse(SqList L);  //简化过
status MultiList(SqList &L, SqList List[], int &cur_list, int num);   //多表操作 


int main(void) {
	FILE *fp = NULL;
	SqList L;  
	SqList List[MULTI_LIST_SIZE];
	int temp = 0;
	for (temp = 0;temp<MULTI_LIST_SIZE;temp++)
	{
		List[temp].isnull = 1;
	}
	int op = 1;    
	ElemType e;    //用于输入元素或者承接返回值 
	int i = 0;     //用于输入位序或者承接返回的为序
	int num = 0, cur_list = 0;    //用于代表切换表的序号和现在选中的表的序号 
	char filename[50];    //用于读写文件 
	while (op) {
		system("cls");	printf("\n\n");
		printf("      Menu for Linear Table On Sequence Structure \n");
		printf("-------------------------------------------------\n");
		printf("    	  1. IntiaList       8. PriorElem\n");
		printf("    	  2. DestroyList     9. NextElem \n");
		printf("    	  3. ClearList      10. ListInsert\n");
		printf("    	  4. ListEmpty      11. ListDelete\n");
		printf("    	  5. ListLength     12. ListTrabverse\n");
		printf("    	  6. GetElem        13. LoadList\n");
		printf("    	  7. LocateElem     14. SaveList\n");
		printf("    	  0. Exit           15. MultiList\n");
		printf("-------------------------------------------------\n");
		printf("    请选择你的操作[0~15]:");
		scanf("%d", &op);
		switch (op) {
		case 1:
			if (IntiaList(L) == OK) printf("线性表创建成功！\n");
			else printf("线性表创建失败！\n");
			getchar(); getchar();
			break;
		case 2:
			if (DestroyList(L)==OK) 
			{
				printf("销毁成功！\n");
			}
			getchar(); getchar();
			break;
		case 3:
			if (ClearList(L)==OK) 
			{
				printf("线性表清除成功！\n"); 
			}
			else 
			{
				printf("线性表清除失败！\n");
			}
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 4:
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 5:
			if (ListLength(L)!=ERROR) 
			{
				printf("线性表长度为：%d\n",ListLength(L));
			}
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 6:
			printf("请输入元素位置："); 
			scanf("%d", &i);
			if(GetElem(L,i,e)!=ERROR)
			{
				printf("线性表中第%d个元素为：%d\n", i, e);	
			}
			getchar(); getchar();
			break;
		case 7:
			printf("请输入比对元素：");
			scanf("%d", &e);
			i = LocateElem(L, e);     
			if (i!=0&&i!=ERROR)    //比对元素存在且L不为空 
			{
				printf("要查找的元素在线性表中的位置为：%d", i);
			}
			else if(i == 0)
			{
				printf("这个元素不存在！");
			} 
			getchar(); getchar();
			break;
		case 8:
			ElemType cur, pre_e;
			printf("请输入需要查找其前驱的元素："); 
			scanf("%d", &cur);
			i = PriorElem(L, cur, pre_e);    //查找前驱 
			if (i != ERROR) 
			    printf("要查找的元素在线性表中的前驱为：%d", pre_e);
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 9:
			ElemType next_e;
			printf("请输入需要查找其后驱的元素：");
			scanf("%d", &cur);
			i = NextElem(L, cur, next_e);    //查找后驱 
			if (i != ERROR) 
			    printf("要查找的元素在线性表中的后驱为：%d", next_e);
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 10:
			if (!L.isnull) 
			{
				printf("请输入插入的位置："); 
				scanf("%d", &i);
				ElemType e;
				printf("请输入插入的元素：");
				scanf("%d", &e);
				if (1 <= i&&i <= (ListLength(L) + 1))
				{
					ListInsert(L, i, e);
					printf("插入成功！");
				}
				else printf("输入的插入位置不合法!");
			}
			else printf("线性表不存在！\n");
			getchar(); getchar();
			break;
		case 11:
			if (!L.isnull && L.length!=0) 
			{
				int i=0;
				printf("请输入删除元素的位置："); 
				scanf("%d", &i);
				ElemType e;
				if (1<=i&&i<=ListLength(L))
				{
					ListDelete(L, i, e);
				}
				else printf("输入的位置超出范围!");
			}
			else printf("线性表不存在或线性表长度为0！\n");
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 12:     
			if (ListTrabverse(L)!=ERROR) ;
			getchar(); getchar();
			break;
		case 13: 
            printf("请输入文件名："); 
			scanf("%s", filename);
			fp = fopen(filename,"rb");    //以只读形式打开文件 
            if (LoadList(fp, L) == OK) 
			{
                printf("成功读取！\n");
            } 
			else 
			{
			    printf("读取失败！\n"); 
			}
            getchar(); getchar();
            break;
        case 14: 
        {
            printf("请输入文件名："); 
			scanf("%s", filename);
			fp = fopen(filename,"wb");
            int ret = SaveList(fp, L);    
            if (ret == OK)
			{
			    printf("成功写入文件！\n"); 
			}
            else 
			{
		        printf("写入文件失败！\n"); 
			}
            getchar(); getchar();
            break;
        }
        case 15:
			printf("请选切换表的序号(1~10)：");
			scanf("%d", &num);
			if (MultiList(L, List, cur_list, num) == OK)
				printf("切换成功！\n"); 
			else
				printf("切换失败！\n");
			getchar();getchar();
			break;
		case 0:
			break;
		}//end of switch
	}//end of while
	printf("欢迎下次再使用本系统！\n");
}//end of main()

 /*--------page 23 on textbook --------------------*/
 /**
 * 函数名称：InitiaList
 * 函数参数：线性表L的地址
 * 函数功能：构造一个空的线性表
 * 返回值：成功构造返回OK，否则返回ERROR
 **/
status IntiaList(SqList & L) 
{
    L.elem = (int *)malloc(sizeof(ElemType) * LIST_INIT_SIZE);
    if (!L.elem) return ERROR;    //内存分配失败
	L.length = 0;                    //初始化空表长度0
	L.listsize = LIST_INIT_SIZE;     //初始化存储容量
	L.isnull = 0; 
	return OK;
}

/**
 * 函数名称：DestroyList
 * 函数参数：线性表L的地址
 * 函数功能：删除线性表
 * 返回值：成功销毁返回OK，否则返回ERROR
 **/
status DestroyList(SqList & L) 
{
	if(L.isnull==1) 
	{
		printf("线性表不存在!"); 
		return ERROR;
	}
	if (!L.elem)
	{
		printf("线性表未创建！\n");
		return ERROR;
	}
	free(L.elem);
	L.elem = NULL;
	L.length = 0;
	L.listsize = 0;
	return OK;
}

/**
 * 函数名称：ClearList
 * 函数参数：线性表L的地址
 * 函数功能：重置线性表
 * 返回值：成功置空返回OK，否则返回ERROR
 **/
status ClearList(SqList &L) 
{
	if(L.isnull==1) 
	{
		printf("线性表不存在!"); 
		return ERROR;
	}
	L.length = 0;
	return OK;
}

/**
 * 函数名称：ListEmpty
 * 函数参数：线性表L
 * 函数功能：判断线性表是否为空
 * 返回值：若L为空表则返回OK，否则返回FALSE
 **/
status ListEmpty(SqList L)
{
	if(L.isnull==1) 
	{
		printf("线性表不存在!"); 
		return ERROR;
	}
    else if (L.length == 0) 
    {
    	return OK; //若表为空，返回ok
	} 
	else
	{
		printf("线性表不为空！");
		return FALSE;    //否则返回false
	} 
	 
}

/**
 * 函数名称：ListLength
 * 函数参数：线性表L
 * 函数功能：计算线性表L中数据元素个数；
 * 返回值：成功返回L中数据元素个数，失败返回ERROR
 **/
int ListLength(SqList L) 
{
	if(L.isnull==1) 
	{
		printf("线性表不存在!"); 
		return ERROR;
	}
	return L.length;
}

/**
 * 函数名称：GetElem
 * 函数参数：线性表L，e为第i个数据的地址；
 * 函数功能：查找并显示L中第i个元素的值；
 * 返回值：成功则返回第i个元素的值，否则返回ERROR
 **/
status GetElem(SqList L, int i, ElemType & e) 
{
    //用e返回L中第i个元素的值
    if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
    if(L.length==0) 
	{
		printf("L中元素个数为0!");
		return ERROR;    
	}
	if(1>i||i>ListLength(L)) 
	{
		printf("输入的元素位置不合法!");
		return ERROR;
	}
	e = L.elem[i-1];    //返回指向第i个数据元素地址的元素的值
    return e;
}

/**
 * 函数名称：LocateElem
 * 函数参数：线性表L和相对比的元素值；
 * 函数功能：查找L中与e相同数据所在的位序；位序从1开始
 * 返回值：成功则返回第一个与e相同的数据的位序，不存在则返回0，其余情况返回ERROR
 **/
status LocateElem(SqList L, ElemType e) {
	//查找线性表中满足和e相等的元素的值的位置
    if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
	int j = 1;    //标志位置的变量
	ElemType *p = L.elem;    //指向线性表元素的指针
	while(j<=L.length&&!(e==*p))    //当位置变量小于等于线性表长度并且所指线性表元素和e不等
    {
        p++;
        j++;
    }
    if(j<=L.length) return j;
    else return 0;
}

/**
 * 函数名称：PriorElem
 * 函数参数：线性表L，查找的数据cur_e,前驱pre_e；
 * 函数功能：查找L中与cur_e相同的第一个数据，并返回其前驱
 * 返回值：成功则返回与cur_e相同的第一个数据，并返回其第一个前驱；若无前驱以及其他情况则返回ERROR
 **/
status PriorElem(SqList L, ElemType cur, ElemType & pre_e) 
{
	ElemType e;
	if(LocateElem(L, cur)==0)
	{
		printf("该元素不在L中");
		return ERROR; 
	}
    if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}	
    ElemType *p = L.elem;    //指向线性表元素的指针
    int count = 0;    //计算已经遍历的线性表元素
    while(*(p+1)!=cur&&count<L.length)    //当所指元素的后一位元素不等于cur_e并且count小于线性表长度
    {
        count++;
        p++;
    }
    if(count==L.length) 
	{
		if(L.length)    //表内有元素 
		    printf("该元素为第一个元素！");
		else 
		    printf("该表为空表");
		return ERROR;
	} 
    else pre_e = *p;
	return pre_e;
}

/**
 * 函数名称：NextElem
 * 函数参数：线性表L，查找的数据cur,后驱next_e；
 * 函数功能：查找L中与next_e相同的第一个数据，并返回其后驱
 * 返回值：成功则返回与next_e相同的第一个数据，并返回其后驱；若无后驱以及其他情况则返回ERROR
 **/
status NextElem(SqList L, ElemType cur, ElemType & next_e)
{
	if(LocateElem(L, cur)==0)
	{
		printf("该元素不在L中");
		return ERROR;
	}
    if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
	else if(L.length==0)    //表为空表 
	    printf("此表为空表");	
	ElemType *p = L.elem;    //指向线性表元素的指针
    int count = 0;    //已经遍历的元素数 
    while(*p!=cur&&count<L.length)    //当所指元素的后一位元素不等于cur_e并且count小于线性表长度
    {
        count++;
        p++;
    }
    if(count==L.length-1) 
    {
    	printf("该元素为最后一个元素！");
    	return ERROR;
	} 
    next_e = *(p+1);
	return next_e;
}

/**
 * 函数名称：ListInsert
 * 函数参数：线性表L的地址，插入的位置i，插入的数据元素e。
 * 函数功能：在L的第i个位置之前插入新的数据元素e；若已插满，则按照分配增量，分配更大的空间。
 * 返回值：成功插入返回OK，否则返回ERROR
 **/
status ListInsert(SqList & L, int i, ElemType e) {
    if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
    int j = 0;
    if((i<1)||(i>L.length+1))
    {
    	printf("插入位置不合法！");
    	return ERROR;
	}
    //处理存储空间已满的情况
    if (L.length>=L.listsize)
    {
        ElemType *newbase = (ElemType *)realloc(L.elem, sizeof(ElemType)*(L.listsize+LISTINCREMENT));    //新的基址
        if(!newbase) return ERROR;
        L.listsize = L.listsize + LISTINCREMENT;    //增加表的容量
        L.elem = newbase;
    }
    //将插入位置后面的元素后移 
    for (j=L.length-1; j>=i-1; j--)
    {
        L.elem[j+1] = L.elem[j];
    }
    L.elem[i-1] = e;
    L.length += 1;    //改变长度
    ListTrabverse(L);
    return OK;    
}

/**
 * 函数名称：ListDelete
 * 函数参数：线性表L的地址，删除的位序i，指针e的地址。
 * 函数功能：删除L的第i个数据元素，用e返回其值。
 * 返回值：成功删除返回OK，否则返回ERROR
 **/
status ListDelete(SqList & L, int i, ElemType & e) {
    if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
    if((i<1)||(i>L.length+1))
    {
    	printf("插入位置不合法！");
    	return ERROR;
	}
    ElemType *q = &(L.elem[i-1]);    //指向要删除的元素
    ElemType *p = &(L.elem[L.length-1]);
    e = *q;
    //将删除的元素后面的前移 
    for(; q<=p-1; q++) *q = *(q+1);    
    L.length -= 1;
    return OK;
}

/**
 * 函数名称：LoadList
 * 函数参数：文件指针，线性表L
 * 函数功能：数据加载，为线性表输入元素。
 * 返回值：加载成功返回OK，加载失败返回ERROR
 **/
status LoadList(FILE *fp,SqList &L)
{
	if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
    if (fp==NULL)
	{
        printf("文件打开错误\n ");
	    return ERROR;
	}
	//逐个读取线性表元素 
    while(fread(&L.elem[L.length],sizeof(ElemType),1,fp))
        L.length++;
    ListTrabverse(L);
    fclose(fp);
	return OK;
 }

 /**
 * 函数名称：SaveList
 * 函数参数：文件指针，线性表L
 * 函数功能：将L中的数据保存到fp指针指向的文件中
 * 返回值：OK
 **/
status SaveList(FILE *fp,SqList L)
{
	if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
 	if (fp==NULL)
	{
	    printf("文件打开错误\n ");
	    return ERROR;
	}
	int i;
	for(i=0; i<L.length; i++)
	{
	    fwrite(L.elem,sizeof(ElemType),1,fp);
		L.elem++;	
	}
    fclose(fp);
	return OK;
}

/**
 * 函数名称：ListTrabverse
 * 函数参数：线性表L
 * 函数功能：依次显示线性表中的每个元素。
 * 返回值：成功遍历返回线性表的长度，否则返回ERROR
 **/
status ListTrabverse(SqList L) 
{
    if(L.isnull==1) 
	{
		printf("线性表不存在!");
		return ERROR;
	}
	if (L.length==0&&L.isnull==0) 
	{
		printf("线性表为空！\n");
	}
	int i;
	printf("\n-----------all elements -----------------------\n");
	for (i = 0; i<L.length; i++) printf("%d ", L.elem[i]);
	printf("\n------------------ end ------------------------\n");
	return L.length;
}

/**
 * 函数名称：MultiList 
 * 函数参数：线性表L
 * 函数功能：依次在小于等于10的线性表之间进行切换 
 * 返回值：成功遍历返回线性表的长度，否则返回ERROR
 **/
status MultiList(SqList &L, SqList List[], int &cur_list, int num)
{
	if (num<1 || num>MULTI_LIST_SIZE)
	{
		printf("输入序号超出合法范围\n");
		return ERROR;
	}
	num--;
	List[cur_list] = L;
	L.elem = List[num].elem;
	L.length = List[num].length;
	L.listsize = List[num].listsize;
	L.isnull = List[num].isnull; 
	cur_list = num;
	return OK;
}
