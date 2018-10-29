#define OK 1
#define TRUE 1
#define FALSE 0
#define ERROR -2
#include "course.h"

typedef int Status;

Status InitaCuriList(CURI_NODE **L);                                // 初始化课程信息链表
Status InitaRoomList(ROOM_NODE **L);                                // 初始化教室信息链表
Status InitaProfList(PROF_NODE **L);                                // 初始化教师信息链表
Status InitaClassList(CLASS_NODE **L);		                        // 初始化班级信息链表
Status InitaCourseList(COURSE_NODE **L);                            // 初始化课堂信息链表

Status ListCuriTrabverse(CURI_NODE * curi_hd);                      //遍历课程信息单链表
Status ListRoomTrabverse(ROOM_NODE * room_hd);                      //遍历教室信息单链表
Status ListProfTrabverse(PROF_NODE * prof_hd);                      //遍历教师信息单链表
Status ListClassTrabverse(CLASS_NODE * class_hd);                   //遍历班级信息单链表
Status ListCourseTrabverse(COURSE_NODE * course_head);              //遍历课堂信息单链表
Status ListClassCourseTrabverse(CLASS_NODE * class_head);           //遍历班级-课堂邻接表
Status ListProfCourseTrabverse(PROF_NODE * prof_head);              //遍历教师-课堂邻接表
Status ListRoomCourseTrabverse(ROOM_NODE * room_head);              //遍历教室-课堂邻接表

CURI_NODE* PriorCuriElem(CURI_NODE * L, char *curi_name);           //求指定课程结点前驱结点
ROOM_NODE* PriorRoomElem(ROOM_NODE * L, char *room_name);           //求指定教室结点前驱结点
COURSE_NODE* PriorCourseElem(COURSE_NODE * L, char *course_id);     //求指定课堂结点前驱结点
PROF_NODE* PriorProfElem(PROF_NODE * L, char *prof_name);           //求指定教师结点前驱结点
CLASS_NODE* PriorClassElem(CLASS_NODE * L, char *class_name);       //求指定班级结点前驱结点

