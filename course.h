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
 *课堂信息链结点结构
 */
typedef struct course_node {
    char course_id[20];                      /**< 课堂id*/
    char course_curi_name[30];               /**< 课堂对应课程名称*/
    char course_prof_name[14];               /**< 课堂教师名称*/
    int course_class_num;                    /**< 课堂下的班级数量*/
    char course_class_name[6][20];           /**< 课堂下各个班级的名称*/
    char course_room_name[100];              /**< 课堂下教室名称组成的字符串*/
    int total_stu_num;                       /**< 课堂下学生总数*/
    int term_period;                         /**< 一学期内该课堂分几段上课周期*/
    int day_period[5] = {0};                 /**< 每一段上课周期内的天数*/
    int course_week_period[5][6] = {{0}};            /**< 周几上课*/
    int course_day_period[5][5][2] = {{{0}}};        /**< 每天上课的时间段*/
    int course_term_period[5][2] = {{0}};            /**< 每个上课周期内的起止周数*/
    struct course_node *next;                        /**< 指向下一结点的指针*/
} COURSE_NODE;

/**
 *课程信息链结点结构
 */
typedef struct curi_node{
    char curi_name[30];               /**< 课程名称*/
    float credit;                     /**< 学分*/
    float hours;                      /**< 学时*/
    int course_num = 0;               /**< 课堂数目*/
    struct course_node * firstarc;    /**< 指向第一个课堂结点*/
    struct curi_node * next;          /**< 指向下一结点的指针*/
} CURI_NODE;

/**
 *教师信息链结点结构
 */
typedef struct prof_node {
    char prof_name[12];                  /**< 教师姓名*/
    char prof_title[12];                 /**< 教师头衔*/
    struct course_node * firstarc;       /**< 指向第一个课堂结点*/
    float prof_hours = 0;                /**< 教师一学期教学时长*/
    int age = 0;                         /**< 教师年龄*/
    int prof_num_course = 0;             /**< 教师带的课堂数*/
    struct prof_node *next;              /**< 指向下一结点的指针*/
} PROF_NODE;

/**
 *教室信息链结点结构
 */
typedef struct room_node {
    int volume;         	    /**< 教室容量*/
    char room_name[30];         /**< 教室名称*/
    int day_use_time = 0;       /**< 教室白天使用时长*/
    int night_use_time = 0;     /**< 教室夜晚使用时长*/
    int total_use_time = 0;     /**< 教室总体使用时长*/
    float energy;               /**< 教室节能效率*/
    float day_use_rate;         /**< 教室白天使用率*/
    float night_use_rate;       /**< 教室夜晚使用率*/
    float total_use_rate;       /**< 教室总体利用率*/
    int winter_use_time = 0;    /**< 教室冬天使用时长*/
    int summer_use_time = 0;    /**< 教室夏天使用时长*/
    struct course_node *firstarc;  /**< 指向第一个课堂结点指针*/
    struct room_node *next;     /**< 指向下一结点的指针*/
} ROOM_NODE;

/**
 班级信息链结点结构
 */
typedef struct class_node {
    int class_stu_amount;             /**< 班级学生人数*/
    char class_name[30];              /**< 班级名称*/
    float rate;                       /**< 班级夜日上课时间比*/
    int day_class_hours = 0;          /**< 班级白天上课节数*/
    int night_class_hours = 0;        /**< 班级夜晚上课节数*/
    int winter_class_hours = 0;       /**< 班级冬天上课节数*/
    int summer_class_hours = 0;       /**< 班级夏天上课节数*/
    struct class_node * next;         /**< 指向下一个结点的指针*/
    struct course_node *firstarc;     /**< 指向第一个课堂结点指针*/
} CLASS_NODE;

CURI_NODE *gp_curi_head = NULL;                /*课程信息链头指针*/
COURSE_NODE *gp_course_head = NULL;            /*课堂信息链头指针*/
CLASS_NODE *gp_class_head = NULL;              /*班级信息链头指针*/
ROOM_NODE *gp_room_head = NULL;                /*教室信息链头指针*/
PROF_NODE *gp_prof_head = NULL;                /*教师信息链头指针*/

char const*gp_curi_info_filename = "Curi.txt";
char const*gp_prof_info_filename = "Prof.txt";
char const*gp_class_info_filename = "Class.txt";
char const*gp_room_info_filename = "Room.txt";
char const*gp_course_info_filename = "Course.txt";

void InsertCuriNode(CURI_NODE * gp_curi_head);      /*插入课程信息*/
void InsertRoomNode(ROOM_NODE * gp_room_head);      /*插入教室信息*/
void InsertClassNode(CLASS_NODE * gp_class_head);   /*插入班级信息*/
void InsertProfNode(PROF_NODE * gp_prof_head);      /*插入教师信息*/
void InsertCourseNode(COURSE_NODE * gp_course_head);/*插入课堂信息*/

bool SaveCuriNode(CURI_NODE * gp_curi_head);        /*保存课程信息*/
bool SaveRoomNode(ROOM_NODE * gp_room_head);        /*保存教室信息*/
bool SaveClassNode(CLASS_NODE * gp_class_head);     /*保存班级信息*/
bool SaveProfNode(PROF_NODE * gp_prof_head);        /*保存教师信息*/
bool SaveCourseNode(COURSE_NODE * gp_course_head);  /*保存课堂信息*/

bool ModiCuriNode(CURI_NODE * gp_curi_head);        /*修改课程信息*/
bool ModiRoomNode(ROOM_NODE * gp_room_head);        /*修改教室信息*/
bool ModiClassNode(CLASS_NODE * gp_class_head);     /*修改班级信息*/
bool ModiProfNode(PROF_NODE * gp_prof_head);        /*修改教师信息*/
bool ModiCourseNode(COURSE_NODE * gp_course_head);  /*修改课堂信息*/

bool DelCuriNode(CURI_NODE * gp_curi_head);         /*删除课程信息*/
bool DelRoomNode(ROOM_NODE * gp_room_head);         /*删除教室信息*/
bool DelClassNode(CLASS_NODE * gp_class_head);      /*删除班级信息*/
bool DelProfNode(PROF_NODE * gp_prof_head);         /*删除教师信息*/
bool DelCourseNode(COURSE_NODE * gp_course_head);   /*删除课堂信息*/
void UpdateAfterDelCourse(COURSE_NODE * pcourse_node);                      /*删除课堂后更新其他结点的信息*/
void ModiProfAfterDel(PROF_NODE *pprof_node, COURSE_NODE *pcourse_node);    /*删除课堂后修改教师信息*/
void ModiCuriAfterDel(CURI_NODE *pcuri_node, COURSE_NODE *pcourse_node);    /*删除课堂后修改课程信息*/
void ModiClassAfterDel(CLASS_NODE *pclass_node, COURSE_NODE *pcourse_node); /*删除课堂后修改班级信息*/
void ModiRoomAfterDel(ROOM_NODE *proom_node, COURSE_NODE *pcourse_node, int num_of_week, int start_class, int end_class);   /*删除课堂后修改教室信息*/

bool SearchCuriNode(CURI_NODE * gp_curi_head);          /*搜索课程信息*/
bool SearchRoomNode(ROOM_NODE * gp_room_head);          /*搜索教室信息*/
bool SearchClassNode(CLASS_NODE * gp_class_head);       /*搜索班级信息*/
bool SearchProfNode(PROF_NODE * gp_prof_head);          /*搜索教师信息*/
bool SearchCourseNode(COURSE_NODE * gp_course_head);    /*搜索课堂信息*/

bool SearchCourseNodeByClass(CLASS_NODE * class_hd);    /*通过班级搜索课堂信息*/
bool SearchCourseNodeByProf(PROF_NODE * prof_hd);       /*通过教师搜索课堂信息*/
bool SearchCourseNodeByRoom(ROOM_NODE * room_hd);       /*通过教室搜索课堂信息*/
bool SearchCourseNodeByTime(COURSE_NODE * course_node); /*通过时间搜索课堂信息*/
bool SearchCourseNodeByCuri(CURI_NODE * curi_hd);       /*通过课程搜索课堂信息*/

CURI_NODE* CreateCuriList(CURI_NODE *curi_hd);                  /*创建课程信息链表*/
ROOM_NODE * CreateRoomList(ROOM_NODE *room_hd);                 /*创建教室信息链表*/
CLASS_NODE * CreateClassList(CLASS_NODE *class_hd);             /*创建班级信息链表*/
PROF_NODE * CreateProfList(PROF_NODE * gp_prof_head);           /*创建教师信息链表*/
COURSE_NODE *CreateCourseList(COURSE_NODE * gp_course_head);    /*创建课堂信息链表*/

CURI_NODE * SeekCuri(CURI_NODE * gp_curi_head, char *curi_name);        /*查找课程信息*/
ROOM_NODE * SeekRoom(ROOM_NODE * gp_room_head, char *room_name);        /*查找教室信息*/
CLASS_NODE * SeekClass(CLASS_NODE * gp_class_head, char *class_name);   /*查找班级信息*/
PROF_NODE * SeekProf(PROF_NODE * gp_prof_head, char *prof_name);        /*查找教师信息*/
COURSE_NODE * SeekCourse(COURSE_NODE * gp_curi_head, char *course_id);  /*查找课堂信息*/

ROOM_NODE* TimeIn(COURSE_NODE * pcourse_node, int week, int date, int start_class, int end_class);/*根据课堂和时间查找教室*/
void FindFreeRoom(ROOM_NODE *room_hd);      /*查找空闲教室*/
void ProfAnalysis(PROF_NODE * head);        /*分析教师的课堂安排合理性*/
void ClassAnalysis(CLASS_NODE *head);       /*分析班级的课堂安排合理性*/
void EnergyAnalysis(ROOM_NODE *head);       /*分析教室的能效*/
void OldAnalysis(PROF_NODE *pprof_node);    /*分析老教师的课堂安排合理性*/
void NewAnalysis(PROF_NODE * pprof_node);   /*分析新教师的课堂安排合理性*/
void NewOldProf(PROF_NODE* gp_prof_head);   /*分析新老教师安排课堂合理性*/
void RoomUseRate(ROOM_NODE * head);         /*分析教室利用率*/

void DelCourseAfterC(CLASS_NODE *pclass_node, COURSE_NODE *course_hd);
void DelCourseAfterCuri(CURI_NODE *pcuri_node, COURSE_NODE *course_hd);     /*删除课程后删除相关课堂结点*/

CLASS_NODE * Cre_Class_Course_List(CLASS_NODE * gp_class_head, COURSE_NODE * course_class_head);    /*创建班级-课堂邻接表*/
PROF_NODE * Cre_Prof_Course_List(PROF_NODE * gp_prof_head, COURSE_NODE * cprof_course_head);        /*创建教师-课堂邻接表*/
ROOM_NODE * Cre_Room_Course_List(ROOM_NODE * gp_room_head, COURSE_NODE * course_room_head);         /*创建教室-课堂邻接表*/
void InsertCrossList(COURSE_NODE *pcourse_node);                                                    /*插入课堂结点时修改邻接表*/
void ModiCrossForClass(COURSE_NODE *pcourse_node);                                                  /*修改班级结点后修改邻接表*/

void UpdateRoomUseTime(ROOM_NODE * proom_node, int num_of_week, int start_class, int end_class);    /*更新课堂后会更新教室相关信息*/
void UpdateClassUseTime(CLASS_NODE * pclass_node, COURSE_NODE * pcourse_node);      /*更新课堂后会更新班级相关信息*/

bool ModiCuriInCourse(COURSE_NODE *course_hd, char * old_curi_name, char * new_curi_name, float old_hours, float new_hours);    /*修改因课程信息修改而需要变动的课堂信息*/
bool ModiClassInCourse(COURSE_NODE *course_hd, CLASS_NODE *pclass_node, int old_stu_amount);    /*修改因班级信息修改而需要变动的课堂信息*/
bool ModiCourseAfterDelC(CLASS_NODE *pclass_node);                                              /*删除班级结点后修改课堂信息*/

bool DelWithoutId(COURSE_NODE *pcourse_node);               /*删除传入的课堂结点*/
void InsertCourseWithoutInput(COURSE_NODE *pcourse_node);   /*插入传入的课堂结点*/
bool ContraRoom(ROOM_NODE *proom_node, COURSE_NODE *pcourse_node, COURSE_NODE *course_temp);  /*判断教室和课堂的时间是否冲突*/

//极为次要的辅助函数
bool cpycoursenode(COURSE_NODE * a, COURSE_NODE *b);    /*将b课堂结点除指针域外的所有信息复制到结点a*/
void FormatPrint(COURSE_NODE *pcourse_node);            /*格式化输出一个课堂的信息*/
void InfoReturn(void);
void QuickSortRate(ROOM_NODE *head, ROOM_NODE *tail);
void QuickSortEnergy(ROOM_NODE *head, ROOM_NODE *tail);
void Initarray(COURSE_NODE *pcourse_node);
bool DealString1(char *String, int *start_class, int *end_class);
int DealString2(char *split);
void Exit(void);
bool DealString3(char *String, int *a);
#endif

