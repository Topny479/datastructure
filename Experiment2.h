#define OK 1
#define TRUE 1
#define FALSE 0
#define ERROR -2
#include "course.h"

typedef int Status;

Status InitaCuriList(CURI_NODE **L);                                // ��ʼ���γ���Ϣ����
Status InitaRoomList(ROOM_NODE **L);                                // ��ʼ��������Ϣ����
Status InitaProfList(PROF_NODE **L);                                // ��ʼ����ʦ��Ϣ����
Status InitaClassList(CLASS_NODE **L);		                        // ��ʼ���༶��Ϣ����
Status InitaCourseList(COURSE_NODE **L);                            // ��ʼ��������Ϣ����

Status ListCuriTrabverse(CURI_NODE * curi_hd);                      //�����γ���Ϣ������
Status ListRoomTrabverse(ROOM_NODE * room_hd);                      //����������Ϣ������
Status ListProfTrabverse(PROF_NODE * prof_hd);                      //������ʦ��Ϣ������
Status ListClassTrabverse(CLASS_NODE * class_hd);                   //�����༶��Ϣ������
Status ListCourseTrabverse(COURSE_NODE * course_head);              //����������Ϣ������
Status ListClassCourseTrabverse(CLASS_NODE * class_head);           //�����༶-�����ڽӱ�
Status ListProfCourseTrabverse(PROF_NODE * prof_head);              //������ʦ-�����ڽӱ�
Status ListRoomCourseTrabverse(ROOM_NODE * room_head);              //��������-�����ڽӱ�

CURI_NODE* PriorCuriElem(CURI_NODE * L, char *curi_name);           //��ָ���γ̽��ǰ�����
ROOM_NODE* PriorRoomElem(ROOM_NODE * L, char *room_name);           //��ָ�����ҽ��ǰ�����
COURSE_NODE* PriorCourseElem(COURSE_NODE * L, char *course_id);     //��ָ�����ý��ǰ�����
PROF_NODE* PriorProfElem(PROF_NODE * L, char *prof_name);           //��ָ����ʦ���ǰ�����
CLASS_NODE* PriorClassElem(CLASS_NODE * L, char *class_name);       //��ָ���༶���ǰ�����

