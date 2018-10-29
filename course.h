#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <io.h>
#include <fcntl.h>
#include <sys\stat.h>
#include <ctype.h>
#include <time.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <cassert>
using namespace std;

#define DAY_CLASS 760
#define NIGHT_CLASS 380
#define TOTAL_CLASS 1140
#define WINTER_INCREMENT 0.4
#define SUMMER_INCREMENT 0.6
#define NIGHT_INCREMENT 0.1

#ifndef COURSE_H__
#define COURSE_H__

/**
 *������Ϣ�����ṹ
 */
typedef struct course_node {
    char course_id[20];                      /**< ����id*/
    char course_curi_name[30];               /**< ���ö�Ӧ�γ�����*/
    char course_prof_name[14];               /**< ���ý�ʦ����*/
    int course_class_num;                    /**< �����µİ༶����*/
    char course_class_name[6][20];           /**< �����¸����༶������*/
    char course_room_name[100];              /**< �����½���������ɵ��ַ���*/
    int total_stu_num;                       /**< ������ѧ������*/
    int term_period;                         /**< һѧ���ڸÿ��÷ּ����Ͽ�����*/
    int day_period[5] = {0};                 /**< ÿһ���Ͽ������ڵ�����*/
    int course_week_period[5][6] = {{0}};            /**< �ܼ��Ͽ�*/
    int course_day_period[5][5][2] = {{{0}}};        /**< ÿ���Ͽε�ʱ���*/
    int course_term_period[5][2] = {{0}};            /**< ÿ���Ͽ������ڵ���ֹ����*/
    struct course_node *next;                        /**< ָ����һ����ָ��*/
} COURSE_NODE;

/**
 *�γ���Ϣ�����ṹ
 */
typedef struct curi_node{
    char curi_name[30];               /**< �γ�����*/
    float credit;                     /**< ѧ��*/
    float hours;                      /**< ѧʱ*/
    int course_num = 0;               /**< ������Ŀ*/
    struct course_node * firstarc;    /**< ָ���һ�����ý��*/
    struct curi_node * next;          /**< ָ����һ����ָ��*/
} CURI_NODE;

/**
 *��ʦ��Ϣ�����ṹ
 */
typedef struct prof_node {
    char prof_name[12];                  /**< ��ʦ����*/
    char prof_title[12];                 /**< ��ʦͷ��*/
    struct course_node * firstarc;       /**< ָ���һ�����ý��*/
    float prof_hours = 0;                /**< ��ʦһѧ�ڽ�ѧʱ��*/
    int age = 0;                         /**< ��ʦ����*/
    int prof_num_course = 0;             /**< ��ʦ���Ŀ�����*/
    struct prof_node *next;              /**< ָ����һ����ָ��*/
} PROF_NODE;

/**
 *������Ϣ�����ṹ
 */
typedef struct room_node {
    int volume;         	    /**< ��������*/
    char room_name[30];         /**< ��������*/
    int day_use_time = 0;       /**< ���Ұ���ʹ��ʱ��*/
    int night_use_time = 0;     /**< ����ҹ��ʹ��ʱ��*/
    int total_use_time = 0;     /**< ��������ʹ��ʱ��*/
    float energy;               /**< ���ҽ���Ч��*/
    float day_use_rate;         /**< ���Ұ���ʹ����*/
    float night_use_rate;       /**< ����ҹ��ʹ����*/
    float total_use_rate;       /**< ��������������*/
    int winter_use_time = 0;    /**< ���Ҷ���ʹ��ʱ��*/
    int summer_use_time = 0;    /**< ��������ʹ��ʱ��*/
    struct course_node *firstarc;  /**< ָ���һ�����ý��ָ��*/
    struct room_node *next;     /**< ָ����һ����ָ��*/
} ROOM_NODE;

/**
 �༶��Ϣ�����ṹ
 */
typedef struct class_node {
    int class_stu_amount;             /**< �༶ѧ������*/
    char class_name[30];              /**< �༶����*/
    float rate;                       /**< �༶ҹ���Ͽ�ʱ���*/
    int day_class_hours = 0;          /**< �༶�����Ͽν���*/
    int night_class_hours = 0;        /**< �༶ҹ���Ͽν���*/
    int winter_class_hours = 0;       /**< �༶�����Ͽν���*/
    int summer_class_hours = 0;       /**< �༶�����Ͽν���*/
    struct class_node * next;         /**< ָ����һ������ָ��*/
    struct course_node *firstarc;     /**< ָ���һ�����ý��ָ��*/
} CLASS_NODE;

CURI_NODE *gp_curi_head = NULL;                /*�γ���Ϣ��ͷָ��*/
COURSE_NODE *gp_course_head = NULL;            /*������Ϣ��ͷָ��*/
CLASS_NODE *gp_class_head = NULL;              /*�༶��Ϣ��ͷָ��*/
ROOM_NODE *gp_room_head = NULL;                /*������Ϣ��ͷָ��*/
PROF_NODE *gp_prof_head = NULL;                /*��ʦ��Ϣ��ͷָ��*/

char const*gp_curi_info_filename = "Curi.txt";
char const*gp_prof_info_filename = "Prof.txt";
char const*gp_class_info_filename = "Class.txt";
char const*gp_room_info_filename = "Room.txt";
char const*gp_course_info_filename = "Course.txt";

void InsertCuriNode(CURI_NODE * gp_curi_head);      /*����γ���Ϣ*/
void InsertRoomNode(ROOM_NODE * gp_room_head);      /*���������Ϣ*/
void InsertClassNode(CLASS_NODE * gp_class_head);   /*����༶��Ϣ*/
void InsertProfNode(PROF_NODE * gp_prof_head);      /*�����ʦ��Ϣ*/
void InsertCourseNode(COURSE_NODE * gp_course_head);/*���������Ϣ*/

bool SaveCuriNode(CURI_NODE * gp_curi_head);        /*����γ���Ϣ*/
bool SaveRoomNode(ROOM_NODE * gp_room_head);        /*���������Ϣ*/
bool SaveClassNode(CLASS_NODE * gp_class_head);     /*����༶��Ϣ*/
bool SaveProfNode(PROF_NODE * gp_prof_head);        /*�����ʦ��Ϣ*/
bool SaveCourseNode(COURSE_NODE * gp_course_head);  /*���������Ϣ*/

bool ModiCuriNode(CURI_NODE * gp_curi_head);        /*�޸Ŀγ���Ϣ*/
bool ModiRoomNode(ROOM_NODE * gp_room_head);        /*�޸Ľ�����Ϣ*/
bool ModiClassNode(CLASS_NODE * gp_class_head);     /*�޸İ༶��Ϣ*/
bool ModiProfNode(PROF_NODE * gp_prof_head);        /*�޸Ľ�ʦ��Ϣ*/
bool ModiCourseNode(COURSE_NODE * gp_course_head);  /*�޸Ŀ�����Ϣ*/

bool DelCuriNode(CURI_NODE * gp_curi_head);         /*ɾ���γ���Ϣ*/
bool DelRoomNode(ROOM_NODE * gp_room_head);         /*ɾ��������Ϣ*/
bool DelClassNode(CLASS_NODE * gp_class_head);      /*ɾ���༶��Ϣ*/
bool DelProfNode(PROF_NODE * gp_prof_head);         /*ɾ����ʦ��Ϣ*/
bool DelCourseNode(COURSE_NODE * gp_course_head);   /*ɾ��������Ϣ*/
void UpdateAfterDelCourse(COURSE_NODE * pcourse_node);                      /*ɾ�����ú��������������Ϣ*/
void ModiProfAfterDel(PROF_NODE *pprof_node, COURSE_NODE *pcourse_node);    /*ɾ�����ú��޸Ľ�ʦ��Ϣ*/
void ModiCuriAfterDel(CURI_NODE *pcuri_node, COURSE_NODE *pcourse_node);    /*ɾ�����ú��޸Ŀγ���Ϣ*/
void ModiClassAfterDel(CLASS_NODE *pclass_node, COURSE_NODE *pcourse_node); /*ɾ�����ú��޸İ༶��Ϣ*/
void ModiRoomAfterDel(ROOM_NODE *proom_node, COURSE_NODE *pcourse_node, int num_of_week, int start_class, int end_class);   /*ɾ�����ú��޸Ľ�����Ϣ*/

bool SearchCuriNode(CURI_NODE * gp_curi_head);          /*�����γ���Ϣ*/
bool SearchRoomNode(ROOM_NODE * gp_room_head);          /*����������Ϣ*/
bool SearchClassNode(CLASS_NODE * gp_class_head);       /*�����༶��Ϣ*/
bool SearchProfNode(PROF_NODE * gp_prof_head);          /*������ʦ��Ϣ*/
bool SearchCourseNode(COURSE_NODE * gp_course_head);    /*����������Ϣ*/

bool SearchCourseNodeByClass(CLASS_NODE * class_hd);    /*ͨ���༶����������Ϣ*/
bool SearchCourseNodeByProf(PROF_NODE * prof_hd);       /*ͨ����ʦ����������Ϣ*/
bool SearchCourseNodeByRoom(ROOM_NODE * room_hd);       /*ͨ����������������Ϣ*/
bool SearchCourseNodeByTime(COURSE_NODE * course_node); /*ͨ��ʱ������������Ϣ*/
bool SearchCourseNodeByCuri(CURI_NODE * curi_hd);       /*ͨ���γ�����������Ϣ*/

CURI_NODE* CreateCuriList(CURI_NODE *curi_hd);                  /*�����γ���Ϣ����*/
ROOM_NODE * CreateRoomList(ROOM_NODE *room_hd);                 /*����������Ϣ����*/
CLASS_NODE * CreateClassList(CLASS_NODE *class_hd);             /*�����༶��Ϣ����*/
PROF_NODE * CreateProfList(PROF_NODE * gp_prof_head);           /*������ʦ��Ϣ����*/
COURSE_NODE *CreateCourseList(COURSE_NODE * gp_course_head);    /*����������Ϣ����*/

CURI_NODE * SeekCuri(CURI_NODE * gp_curi_head, char *curi_name);        /*���ҿγ���Ϣ*/
ROOM_NODE * SeekRoom(ROOM_NODE * gp_room_head, char *room_name);        /*���ҽ�����Ϣ*/
CLASS_NODE * SeekClass(CLASS_NODE * gp_class_head, char *class_name);   /*���Ұ༶��Ϣ*/
PROF_NODE * SeekProf(PROF_NODE * gp_prof_head, char *prof_name);        /*���ҽ�ʦ��Ϣ*/
COURSE_NODE * SeekCourse(COURSE_NODE * gp_curi_head, char *course_id);  /*���ҿ�����Ϣ*/

ROOM_NODE* TimeIn(COURSE_NODE * pcourse_node, int week, int date, int start_class, int end_class);/*���ݿ��ú�ʱ����ҽ���*/
void FindFreeRoom(ROOM_NODE *room_hd);      /*���ҿ��н���*/
void ProfAnalysis(PROF_NODE * head);        /*������ʦ�Ŀ��ð��ź�����*/
void ClassAnalysis(CLASS_NODE *head);       /*�����༶�Ŀ��ð��ź�����*/
void EnergyAnalysis(ROOM_NODE *head);       /*�������ҵ���Ч*/
void OldAnalysis(PROF_NODE *pprof_node);    /*�����Ͻ�ʦ�Ŀ��ð��ź�����*/
void NewAnalysis(PROF_NODE * pprof_node);   /*�����½�ʦ�Ŀ��ð��ź�����*/
void NewOldProf(PROF_NODE* gp_prof_head);   /*�������Ͻ�ʦ���ſ��ú�����*/
void RoomUseRate(ROOM_NODE * head);         /*��������������*/

void DelCourseAfterC(CLASS_NODE *pclass_node, COURSE_NODE *course_hd);
void DelCourseAfterCuri(CURI_NODE *pcuri_node, COURSE_NODE *course_hd);     /*ɾ���γ̺�ɾ����ؿ��ý��*/

CLASS_NODE * Cre_Class_Course_List(CLASS_NODE * gp_class_head, COURSE_NODE * course_class_head);    /*�����༶-�����ڽӱ�*/
PROF_NODE * Cre_Prof_Course_List(PROF_NODE * gp_prof_head, COURSE_NODE * cprof_course_head);        /*������ʦ-�����ڽӱ�*/
ROOM_NODE * Cre_Room_Course_List(ROOM_NODE * gp_room_head, COURSE_NODE * course_room_head);         /*��������-�����ڽӱ�*/
void InsertCrossList(COURSE_NODE *pcourse_node);                                                    /*������ý��ʱ�޸��ڽӱ�*/
void ModiCrossForClass(COURSE_NODE *pcourse_node);                                                  /*�޸İ༶�����޸��ڽӱ�*/

void UpdateRoomUseTime(ROOM_NODE * proom_node, int num_of_week, int start_class, int end_class);    /*���¿��ú����½��������Ϣ*/
void UpdateClassUseTime(CLASS_NODE * pclass_node, COURSE_NODE * pcourse_node);      /*���¿��ú����°༶�����Ϣ*/

bool ModiCuriInCourse(COURSE_NODE *course_hd, char * old_curi_name, char * new_curi_name, float old_hours, float new_hours);    /*�޸���γ���Ϣ�޸Ķ���Ҫ�䶯�Ŀ�����Ϣ*/
bool ModiClassInCourse(COURSE_NODE *course_hd, CLASS_NODE *pclass_node, int old_stu_amount);    /*�޸���༶��Ϣ�޸Ķ���Ҫ�䶯�Ŀ�����Ϣ*/
bool ModiCourseAfterDelC(CLASS_NODE *pclass_node);                                              /*ɾ���༶�����޸Ŀ�����Ϣ*/

bool DelWithoutId(COURSE_NODE *pcourse_node);               /*ɾ������Ŀ��ý��*/
void InsertCourseWithoutInput(COURSE_NODE *pcourse_node);   /*���봫��Ŀ��ý��*/
bool ContraRoom(ROOM_NODE *proom_node, COURSE_NODE *pcourse_node, COURSE_NODE *course_temp);  /*�жϽ��ҺͿ��õ�ʱ���Ƿ��ͻ*/

//��Ϊ��Ҫ�ĸ�������
bool cpycoursenode(COURSE_NODE * a, COURSE_NODE *b);    /*��b���ý���ָ�������������Ϣ���Ƶ����a*/
void FormatPrint(COURSE_NODE *pcourse_node);            /*��ʽ�����һ�����õ���Ϣ*/
void InfoReturn(void);
void QuickSortRate(ROOM_NODE *head, ROOM_NODE *tail);
void QuickSortEnergy(ROOM_NODE *head, ROOM_NODE *tail);
void Initarray(COURSE_NODE *pcourse_node);
bool DealString1(char *String, int *start_class, int *end_class);
int DealString2(char *split);
void Exit(void);
bool DealString3(char *String, int *a);
#endif

