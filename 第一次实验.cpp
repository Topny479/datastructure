/* Linear Table On Sequence Structure */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/*---------page 10 on textbook ---------*/
#define OK 1
#define FALSE -1
#define ERROR -2 

typedef int status;
typedef int ElemType;    //����Ԫ������

#define LIST_INIT_SIZE 100    //���Ա�洢�ռ��ʼ������
#define LISTINCREMENT  10    // ���Ա�洢�ռ�ķ�������
#define MULTI_LIST_SIZE 10    // ��������
typedef struct {  
	ElemType * elem;
	int length;
	int listsize;
	int isnull = 1;    //���Ա�δ��ʼ�� 
}SqList;

/*-----page 19 on textbook ---------*/
status IntiaList(SqList & L);
status DestroyList(SqList & L);
status ClearList(SqList &L);
status ListEmpty(SqList L);
int ListLength(SqList L);
status GetElem(SqList L,int i,ElemType & e);
status LocateElem(SqList L,ElemType e); //�򻯹�
status PriorElem(SqList L,ElemType cur,ElemType & pre_e);
status NextElem(SqList L,ElemType cur,ElemType & next_e);
status ListInsert(SqList & L,int i,ElemType e);
status ListDelete(SqList & L, int i, ElemType & e);
status LoadList(FILE *fp,SqList &L);
status SaveList(FILE *fp,SqList L);
status ListTrabverse(SqList L);  //�򻯹�
status MultiList(SqList &L, SqList List[], int &cur_list, int num);   //������ 


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
	ElemType e;    //��������Ԫ�ػ��߳нӷ���ֵ 
	int i = 0;     //��������λ����߳нӷ��ص�Ϊ��
	int num = 0, cur_list = 0;    //���ڴ����л������ź�����ѡ�еı����� 
	char filename[50];    //���ڶ�д�ļ� 
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
		printf("    ��ѡ����Ĳ���[0~15]:");
		scanf("%d", &op);
		switch (op) {
		case 1:
			if (IntiaList(L) == OK) printf("���Ա����ɹ���\n");
			else printf("���Ա���ʧ�ܣ�\n");
			getchar(); getchar();
			break;
		case 2:
			if (DestroyList(L)==OK) 
			{
				printf("���ٳɹ���\n");
			}
			getchar(); getchar();
			break;
		case 3:
			if (ClearList(L)==OK) 
			{
				printf("���Ա�����ɹ���\n"); 
			}
			else 
			{
				printf("���Ա����ʧ�ܣ�\n");
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
				printf("���Ա���Ϊ��%d\n",ListLength(L));
			}
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 6:
			printf("������Ԫ��λ�ã�"); 
			scanf("%d", &i);
			if(GetElem(L,i,e)!=ERROR)
			{
				printf("���Ա��е�%d��Ԫ��Ϊ��%d\n", i, e);	
			}
			getchar(); getchar();
			break;
		case 7:
			printf("������ȶ�Ԫ�أ�");
			scanf("%d", &e);
			i = LocateElem(L, e);     
			if (i!=0&&i!=ERROR)    //�ȶ�Ԫ�ش�����L��Ϊ�� 
			{
				printf("Ҫ���ҵ�Ԫ�������Ա��е�λ��Ϊ��%d", i);
			}
			else if(i == 0)
			{
				printf("���Ԫ�ز����ڣ�");
			} 
			getchar(); getchar();
			break;
		case 8:
			ElemType cur, pre_e;
			printf("��������Ҫ������ǰ����Ԫ�أ�"); 
			scanf("%d", &cur);
			i = PriorElem(L, cur, pre_e);    //����ǰ�� 
			if (i != ERROR) 
			    printf("Ҫ���ҵ�Ԫ�������Ա��е�ǰ��Ϊ��%d", pre_e);
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 9:
			ElemType next_e;
			printf("��������Ҫ�����������Ԫ�أ�");
			scanf("%d", &cur);
			i = NextElem(L, cur, next_e);    //���Һ��� 
			if (i != ERROR) 
			    printf("Ҫ���ҵ�Ԫ�������Ա��еĺ���Ϊ��%d", next_e);
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 10:
			if (!L.isnull) 
			{
				printf("����������λ�ã�"); 
				scanf("%d", &i);
				ElemType e;
				printf("����������Ԫ�أ�");
				scanf("%d", &e);
				if (1 <= i&&i <= (ListLength(L) + 1))
				{
					ListInsert(L, i, e);
					printf("����ɹ���");
				}
				else printf("����Ĳ���λ�ò��Ϸ�!");
			}
			else printf("���Ա����ڣ�\n");
			getchar(); getchar();
			break;
		case 11:
			if (!L.isnull && L.length!=0) 
			{
				int i=0;
				printf("������ɾ��Ԫ�ص�λ�ã�"); 
				scanf("%d", &i);
				ElemType e;
				if (1<=i&&i<=ListLength(L))
				{
					ListDelete(L, i, e);
				}
				else printf("�����λ�ó�����Χ!");
			}
			else printf("���Ա����ڻ����Ա���Ϊ0��\n");
			ListTrabverse(L);
			getchar(); getchar();
			break;
		case 12:     
			if (ListTrabverse(L)!=ERROR) ;
			getchar(); getchar();
			break;
		case 13: 
            printf("�������ļ�����"); 
			scanf("%s", filename);
			fp = fopen(filename,"rb");    //��ֻ����ʽ���ļ� 
            if (LoadList(fp, L) == OK) 
			{
                printf("�ɹ���ȡ��\n");
            } 
			else 
			{
			    printf("��ȡʧ�ܣ�\n"); 
			}
            getchar(); getchar();
            break;
        case 14: 
        {
            printf("�������ļ�����"); 
			scanf("%s", filename);
			fp = fopen(filename,"wb");
            int ret = SaveList(fp, L);    
            if (ret == OK)
			{
			    printf("�ɹ�д���ļ���\n"); 
			}
            else 
			{
		        printf("д���ļ�ʧ�ܣ�\n"); 
			}
            getchar(); getchar();
            break;
        }
        case 15:
			printf("��ѡ�л�������(1~10)��");
			scanf("%d", &num);
			if (MultiList(L, List, cur_list, num) == OK)
				printf("�л��ɹ���\n"); 
			else
				printf("�л�ʧ�ܣ�\n");
			getchar();getchar();
			break;
		case 0:
			break;
		}//end of switch
	}//end of while
	printf("��ӭ�´���ʹ�ñ�ϵͳ��\n");
}//end of main()

 /*--------page 23 on textbook --------------------*/
 /**
 * �������ƣ�InitiaList
 * �������������Ա�L�ĵ�ַ
 * �������ܣ�����һ���յ����Ա�
 * ����ֵ���ɹ����췵��OK�����򷵻�ERROR
 **/
status IntiaList(SqList & L) 
{
    L.elem = (int *)malloc(sizeof(ElemType) * LIST_INIT_SIZE);
    if (!L.elem) return ERROR;    //�ڴ����ʧ��
	L.length = 0;                    //��ʼ���ձ���0
	L.listsize = LIST_INIT_SIZE;     //��ʼ���洢����
	L.isnull = 0; 
	return OK;
}

/**
 * �������ƣ�DestroyList
 * �������������Ա�L�ĵ�ַ
 * �������ܣ�ɾ�����Ա�
 * ����ֵ���ɹ����ٷ���OK�����򷵻�ERROR
 **/
status DestroyList(SqList & L) 
{
	if(L.isnull==1) 
	{
		printf("���Ա�����!"); 
		return ERROR;
	}
	if (!L.elem)
	{
		printf("���Ա�δ������\n");
		return ERROR;
	}
	free(L.elem);
	L.elem = NULL;
	L.length = 0;
	L.listsize = 0;
	return OK;
}

/**
 * �������ƣ�ClearList
 * �������������Ա�L�ĵ�ַ
 * �������ܣ��������Ա�
 * ����ֵ���ɹ��ÿշ���OK�����򷵻�ERROR
 **/
status ClearList(SqList &L) 
{
	if(L.isnull==1) 
	{
		printf("���Ա�����!"); 
		return ERROR;
	}
	L.length = 0;
	return OK;
}

/**
 * �������ƣ�ListEmpty
 * �������������Ա�L
 * �������ܣ��ж����Ա��Ƿ�Ϊ��
 * ����ֵ����LΪ�ձ��򷵻�OK�����򷵻�FALSE
 **/
status ListEmpty(SqList L)
{
	if(L.isnull==1) 
	{
		printf("���Ա�����!"); 
		return ERROR;
	}
    else if (L.length == 0) 
    {
    	return OK; //����Ϊ�գ�����ok
	} 
	else
	{
		printf("���Ա�Ϊ�գ�");
		return FALSE;    //���򷵻�false
	} 
	 
}

/**
 * �������ƣ�ListLength
 * �������������Ա�L
 * �������ܣ��������Ա�L������Ԫ�ظ�����
 * ����ֵ���ɹ�����L������Ԫ�ظ�����ʧ�ܷ���ERROR
 **/
int ListLength(SqList L) 
{
	if(L.isnull==1) 
	{
		printf("���Ա�����!"); 
		return ERROR;
	}
	return L.length;
}

/**
 * �������ƣ�GetElem
 * �������������Ա�L��eΪ��i�����ݵĵ�ַ��
 * �������ܣ����Ҳ���ʾL�е�i��Ԫ�ص�ֵ��
 * ����ֵ���ɹ��򷵻ص�i��Ԫ�ص�ֵ�����򷵻�ERROR
 **/
status GetElem(SqList L, int i, ElemType & e) 
{
    //��e����L�е�i��Ԫ�ص�ֵ
    if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
    if(L.length==0) 
	{
		printf("L��Ԫ�ظ���Ϊ0!");
		return ERROR;    
	}
	if(1>i||i>ListLength(L)) 
	{
		printf("�����Ԫ��λ�ò��Ϸ�!");
		return ERROR;
	}
	e = L.elem[i-1];    //����ָ���i������Ԫ�ص�ַ��Ԫ�ص�ֵ
    return e;
}

/**
 * �������ƣ�LocateElem
 * �������������Ա�L����Աȵ�Ԫ��ֵ��
 * �������ܣ�����L����e��ͬ�������ڵ�λ��λ���1��ʼ
 * ����ֵ���ɹ��򷵻ص�һ����e��ͬ�����ݵ�λ�򣬲������򷵻�0�������������ERROR
 **/
status LocateElem(SqList L, ElemType e) {
	//�������Ա��������e��ȵ�Ԫ�ص�ֵ��λ��
    if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
	int j = 1;    //��־λ�õı���
	ElemType *p = L.elem;    //ָ�����Ա�Ԫ�ص�ָ��
	while(j<=L.length&&!(e==*p))    //��λ�ñ���С�ڵ������Ա��Ȳ�����ָ���Ա�Ԫ�غ�e����
    {
        p++;
        j++;
    }
    if(j<=L.length) return j;
    else return 0;
}

/**
 * �������ƣ�PriorElem
 * �������������Ա�L�����ҵ�����cur_e,ǰ��pre_e��
 * �������ܣ�����L����cur_e��ͬ�ĵ�һ�����ݣ���������ǰ��
 * ����ֵ���ɹ��򷵻���cur_e��ͬ�ĵ�һ�����ݣ����������һ��ǰ��������ǰ���Լ���������򷵻�ERROR
 **/
status PriorElem(SqList L, ElemType cur, ElemType & pre_e) 
{
	ElemType e;
	if(LocateElem(L, cur)==0)
	{
		printf("��Ԫ�ز���L��");
		return ERROR; 
	}
    if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}	
    ElemType *p = L.elem;    //ָ�����Ա�Ԫ�ص�ָ��
    int count = 0;    //�����Ѿ����������Ա�Ԫ��
    while(*(p+1)!=cur&&count<L.length)    //����ָԪ�صĺ�һλԪ�ز�����cur_e����countС�����Ա���
    {
        count++;
        p++;
    }
    if(count==L.length) 
	{
		if(L.length)    //������Ԫ�� 
		    printf("��Ԫ��Ϊ��һ��Ԫ�أ�");
		else 
		    printf("�ñ�Ϊ�ձ�");
		return ERROR;
	} 
    else pre_e = *p;
	return pre_e;
}

/**
 * �������ƣ�NextElem
 * �������������Ա�L�����ҵ�����cur,����next_e��
 * �������ܣ�����L����next_e��ͬ�ĵ�һ�����ݣ������������
 * ����ֵ���ɹ��򷵻���next_e��ͬ�ĵ�һ�����ݣ�����������������޺����Լ���������򷵻�ERROR
 **/
status NextElem(SqList L, ElemType cur, ElemType & next_e)
{
	if(LocateElem(L, cur)==0)
	{
		printf("��Ԫ�ز���L��");
		return ERROR;
	}
    if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
	else if(L.length==0)    //��Ϊ�ձ� 
	    printf("�˱�Ϊ�ձ�");	
	ElemType *p = L.elem;    //ָ�����Ա�Ԫ�ص�ָ��
    int count = 0;    //�Ѿ�������Ԫ���� 
    while(*p!=cur&&count<L.length)    //����ָԪ�صĺ�һλԪ�ز�����cur_e����countС�����Ա���
    {
        count++;
        p++;
    }
    if(count==L.length-1) 
    {
    	printf("��Ԫ��Ϊ���һ��Ԫ�أ�");
    	return ERROR;
	} 
    next_e = *(p+1);
	return next_e;
}

/**
 * �������ƣ�ListInsert
 * �������������Ա�L�ĵ�ַ�������λ��i�����������Ԫ��e��
 * �������ܣ���L�ĵ�i��λ��֮ǰ�����µ�����Ԫ��e�����Ѳ��������շ����������������Ŀռ䡣
 * ����ֵ���ɹ����뷵��OK�����򷵻�ERROR
 **/
status ListInsert(SqList & L, int i, ElemType e) {
    if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
    int j = 0;
    if((i<1)||(i>L.length+1))
    {
    	printf("����λ�ò��Ϸ���");
    	return ERROR;
	}
    //����洢�ռ����������
    if (L.length>=L.listsize)
    {
        ElemType *newbase = (ElemType *)realloc(L.elem, sizeof(ElemType)*(L.listsize+LISTINCREMENT));    //�µĻ�ַ
        if(!newbase) return ERROR;
        L.listsize = L.listsize + LISTINCREMENT;    //���ӱ������
        L.elem = newbase;
    }
    //������λ�ú����Ԫ�غ��� 
    for (j=L.length-1; j>=i-1; j--)
    {
        L.elem[j+1] = L.elem[j];
    }
    L.elem[i-1] = e;
    L.length += 1;    //�ı䳤��
    ListTrabverse(L);
    return OK;    
}

/**
 * �������ƣ�ListDelete
 * �������������Ա�L�ĵ�ַ��ɾ����λ��i��ָ��e�ĵ�ַ��
 * �������ܣ�ɾ��L�ĵ�i������Ԫ�أ���e������ֵ��
 * ����ֵ���ɹ�ɾ������OK�����򷵻�ERROR
 **/
status ListDelete(SqList & L, int i, ElemType & e) {
    if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
    if((i<1)||(i>L.length+1))
    {
    	printf("����λ�ò��Ϸ���");
    	return ERROR;
	}
    ElemType *q = &(L.elem[i-1]);    //ָ��Ҫɾ����Ԫ��
    ElemType *p = &(L.elem[L.length-1]);
    e = *q;
    //��ɾ����Ԫ�غ����ǰ�� 
    for(; q<=p-1; q++) *q = *(q+1);    
    L.length -= 1;
    return OK;
}

/**
 * �������ƣ�LoadList
 * �����������ļ�ָ�룬���Ա�L
 * �������ܣ����ݼ��أ�Ϊ���Ա�����Ԫ�ء�
 * ����ֵ�����سɹ�����OK������ʧ�ܷ���ERROR
 **/
status LoadList(FILE *fp,SqList &L)
{
	if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
    if (fp==NULL)
	{
        printf("�ļ��򿪴���\n ");
	    return ERROR;
	}
	//�����ȡ���Ա�Ԫ�� 
    while(fread(&L.elem[L.length],sizeof(ElemType),1,fp))
        L.length++;
    ListTrabverse(L);
    fclose(fp);
	return OK;
 }

 /**
 * �������ƣ�SaveList
 * �����������ļ�ָ�룬���Ա�L
 * �������ܣ���L�е����ݱ��浽fpָ��ָ����ļ���
 * ����ֵ��OK
 **/
status SaveList(FILE *fp,SqList L)
{
	if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
 	if (fp==NULL)
	{
	    printf("�ļ��򿪴���\n ");
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
 * �������ƣ�ListTrabverse
 * �������������Ա�L
 * �������ܣ�������ʾ���Ա��е�ÿ��Ԫ�ء�
 * ����ֵ���ɹ������������Ա�ĳ��ȣ����򷵻�ERROR
 **/
status ListTrabverse(SqList L) 
{
    if(L.isnull==1) 
	{
		printf("���Ա�����!");
		return ERROR;
	}
	if (L.length==0&&L.isnull==0) 
	{
		printf("���Ա�Ϊ�գ�\n");
	}
	int i;
	printf("\n-----------all elements -----------------------\n");
	for (i = 0; i<L.length; i++) printf("%d ", L.elem[i]);
	printf("\n------------------ end ------------------------\n");
	return L.length;
}

/**
 * �������ƣ�MultiList 
 * �������������Ա�L
 * �������ܣ�������С�ڵ���10�����Ա�֮������л� 
 * ����ֵ���ɹ������������Ա�ĳ��ȣ����򷵻�ERROR
 **/
status MultiList(SqList &L, SqList List[], int &cur_list, int num)
{
	if (num<1 || num>MULTI_LIST_SIZE)
	{
		printf("������ų����Ϸ���Χ\n");
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
