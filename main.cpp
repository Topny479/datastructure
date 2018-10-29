#include "course.h"
#include "Experiment2.h"

int main(void)
{
    system("color 70");
    int flag = 0;
    InitaCuriList(&gp_curi_head);       //����ADT,��ʼ���γ���ͷ���
    InitaRoomList(&gp_room_head);       //����ADT,��ʼ��������ͷ���
    InitaClassList(&gp_class_head);     //����ADT,��ʼ���༶��ͷ���
    InitaProfList(&gp_prof_head);       //����ADT,��ʼ����ʦ��ͷ���
    InitaCourseList(&gp_course_head);   //����ADT,��ʼ���γ���ͷ���

    int op = 1;

    while (op)
    {
        system("cls");
        printf("\t\t\t\t----------------------Ŀ  ¼-------------------\n");
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t    	  1. ��������          16. ɾ��������Ϣ\n");
        printf("\t\t\t    	  2. ����γ���Ϣ      17. ���ҿγ���Ϣ\n");
        printf("\t\t\t    	  3. ���������Ϣ      18. ���ҽ�ʦ��Ϣ\n");
        printf("\t\t\t    	  4. �����ʦ��Ϣ      19. ���ҽ�����Ϣ\n");
        printf("\t\t\t    	  5. ����༶��Ϣ      20. ���Ұ༶��Ϣ\n");
        printf("\t\t\t    	  6. ���������Ϣ      21. ���ݰ༶��������\n");
        printf("\t\t\t    	  7. �޸Ŀγ���Ϣ      22. ���ݽ�ʦ��������\n");
        printf("\t\t\t    	  8. �޸İ༶��Ϣ      23. ���ݽ��Ҽ�������\n");
        printf("\t\t\t    	  9. �޸Ľ�����Ϣ      24. ���ݿγ̼�������\n");
        printf("\t\t\t    	  10. �޸Ľ�ʦ��Ϣ     25. ����ʱ���������\n");
        printf("\t\t\t    	  11. �޸Ŀ�����Ϣ     26. ���ҿ��н���\n");
        printf("\t\t\t    	  12. ɾ���γ���Ϣ     27. ���������ʷ���\n");
        printf("\t\t\t    	  13. ɾ����ʦ��Ϣ     28. ������Ч����\n");
        printf("\t\t\t    	  14. ɾ��������Ϣ     29. ��ʦ�е����ú����Է���\n");
        printf("\t\t\t    	  15. ɾ���༶��Ϣ     30. �༶�γ̺����Է���\n");
        printf("\t\t\t    	  0. �˳�ϵͳ          31. ���Ͻ�ʦ�ػ��ƻ�\n");
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t               ��ѡ����Ĳ���[0~31]:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            flag = 1;
            CreateRoomList(gp_room_head);
            printf("������Ϣ���سɹ�\n");
            CreateCourseList(gp_course_head);
            printf("������Ϣ���سɹ�\n");
            CreateCuriList(gp_curi_head);
            printf("�γ���Ϣ���سɹ�\n");
            CreateClassList(gp_class_head);
            printf("�༶��Ϣ���سɹ�\n");
            CreateProfList(gp_prof_head);
            printf("��ʦ��Ϣ���سɹ�\n");
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            printf("��ʦ-�����ڽӱ����ɹ�\n");
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            printf("�༶-�����ڽӱ����ɹ�\n");
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            printf("����-�����ڽӱ����ɹ�\n");
            getchar();
            getchar();
            break;
        case 2:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            InsertCuriNode(gp_curi_head);   //����γ̽��
            SaveCuriNode(gp_curi_head);     //����γ̽��
            getchar();
            getchar();
            break;
        case 3:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            InsertRoomNode(gp_room_head);   //������ҽ��
            SaveRoomNode(gp_room_head);     //������ҽ��
            getchar();
            getchar();
            break;
        case 4:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            InsertProfNode(gp_prof_head);   //�����ʦ���
            SaveProfNode(gp_prof_head);     //�����ʦ���
            getchar();
            getchar();
            break;
        case 5:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            InsertClassNode(gp_class_head); //������ҽ��
            SaveClassNode(gp_class_head);   //����༶��Ϣ
            getchar();
            getchar();
            break;
        case 6:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            InsertCourseNode(gp_course_head);   //���������Ϣ
            SaveCourseNode(gp_course_head);     //���������Ϣ
            getchar();
            getchar();
            break;
        case 7:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            ModiCuriNode(gp_curi_head);         //�޸Ŀγ���Ϣ
            SaveCuriNode(gp_curi_head);         //����γ���Ϣ
            getchar();
            getchar();
            break;
        case 8:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            ModiClassNode(gp_class_head);       //�޸İ༶��Ϣ
            SaveClassNode(gp_class_head);       //����༶��Ϣ
            getchar();
            getchar();
            break;
        case 9:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            ModiRoomNode(gp_room_head);         //�޸Ľ�����Ϣ
            SaveRoomNode(gp_room_head);         //���������Ϣ
            getchar();
            getchar();
            break;
        case 10:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            ModiProfNode(gp_prof_head);         //�޸Ľ�ʦ��Ϣ
            SaveProfNode(gp_prof_head);         //�����ʦ��Ϣ
            getchar();
            getchar();
            break;
        case 11:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            if(!ModiCourseNode(gp_course_head)) //����޸�ʧ�ܣ���Ϣ�ع�
            {
                InfoReturn();
            }
            //����������Ϣ
            SaveClassNode(gp_class_head);
            SaveCourseNode(gp_course_head);
            SaveCuriNode(gp_curi_head);
            SaveRoomNode(gp_room_head);
            getchar();
            getchar();
            break;
        case 12:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            DelCuriNode(gp_curi_head);      //ɾ���γ���Ϣ
            SaveCuriNode(gp_curi_head);
            SaveCourseNode(gp_course_head);
            getchar();
            getchar();
            break;
        case 13:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            DelProfNode(gp_prof_head);      //ɾ����ʦ��Ϣ
            SaveProfNode(gp_prof_head);
            getchar();
            getchar();
            break;
        case 14:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            DelRoomNode(gp_room_head);      //ɾ��������Ϣ
            SaveRoomNode(gp_room_head);
            getchar();
            getchar();
            break;
        case 15:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            DelClassNode(gp_class_head);    //ɾ���༶��Ϣ
            SaveClassNode(gp_class_head);
            SaveCourseNode(gp_course_head);
            getchar();
            getchar();
            break;
        case 16:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            DelCourseNode(gp_course_head);  //ɾ��������Ϣ
            SaveCourseNode(gp_course_head);
            getchar();
            getchar();
            break;
        case 17:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //���´����ڽӱ�
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCuriNode(gp_curi_head);   //�����γ̽��
            getchar();
            getchar();
            break;
        case 18:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchProfNode(gp_prof_head);   //������ʦ���
            getchar();
            getchar();
            break;
        case 19:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //�����ڽӱ���
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchRoomNode(gp_room_head);   //�������ҽ��
            getchar();
            getchar();
            break;
        case 20:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //�����ڽӱ�
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchClassNode(gp_class_head); //�����༶��Ϣ
            getchar();
            getchar();
            break;
        case 21:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //�����ڽӱ�
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCourseNodeByClass(gp_class_head); //����������Ϣ
            getchar();
            getchar();
            break;
        case 22:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCourseNodeByProf(gp_prof_head);   //ͨ����ʦ���ҿ���
            getchar();
            getchar();
            break;
        case 23:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCourseNodeByRoom(gp_room_head);   //ͨ�����Ҳ��ҿ���
            getchar();
            getchar();
            break;
        case 24:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCourseNodeByCuri(gp_curi_head);
            getchar();
            getchar();
            break;
        case 25:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCourseNodeByTime(gp_course_head);
            getchar();
            getchar();
            break;
        case 26:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            FindFreeRoom(gp_room_head);
            getchar();
            getchar();
            break;
        case 27:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            RoomUseRate(gp_room_head);
            getchar();
            getchar();
            break;
        case 28:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            EnergyAnalysis(gp_room_head);
            getchar();
            getchar();
            break;
        case 29:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            ProfAnalysis(gp_prof_head);
            getchar();
            getchar();
            break;
        case 30:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            ClassAnalysis(gp_class_head);
            getchar();
            getchar();
            break;

        case 31:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            NewOldProf(gp_prof_head);
            getchar();
            getchar();
            break;
        case 32:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            ListClassTrabverse(gp_class_head);
            getchar();
            getchar();
            break;
        case 33:
            if(flag==0)
            {
                printf("��δ��������!");
                getchar();
                getchar();
                break;
            }
            ListCourseTrabverse(gp_course_head);
            getchar();
            getchar();
            break;
        case 0:
            Exit();
            break;
        }//end of switch
    }//end of while
    printf("��ӭ�´���ʹ�ñ�ϵͳ��\n");
}//end of main()

/**
* �������ƣ�CreateCuriList
* ����������curi_hd �γ���ͷ���ָ��
* �������ܣ���txt�ļ��ж�ȡ�γ�����Ϣ�������γ�������
* ����ֵ����������ɹ����ؿγ���ͷ���ָ��, ʧ���򷵻�NULL
**/
CURI_NODE* CreateCuriList(CURI_NODE *curi_hd)
{
    int ret = 0;
    CURI_NODE * pcuri_node=NULL, * pprior_curi_node=NULL;   //����ָ���ǰ��ָ��

    FILE *curi_write = fopen("Curi.txt", "r+");
    if(!curi_write)
    {
        printf("���ļ�ʧ�ܣ�\n");
        fclose(curi_write);
        return NULL;
    }

    pprior_curi_node = curi_hd;

    while (!feof(curi_write))
    {
        pcuri_node = (CURI_NODE*)malloc(sizeof(CURI_NODE));
        ret = fscanf(curi_write, "%s", pcuri_node->curi_name);
        if(ret == -1) break;    //��ֹfscanf���ȡһ��
        fscanf(curi_write, "%f", &pcuri_node->credit);
        fscanf(curi_write, "%f", &pcuri_node->hours);
        fscanf(curi_write, "%d", &pcuri_node->course_num);

        //��������ṹ
        pprior_curi_node->next = pcuri_node;
        pprior_curi_node = pprior_curi_node->next;
        pcuri_node->next = NULL;
    }
    fclose(curi_write);    //�ر��ļ�
    return pcuri_node;
}

/**
* �������ƣ�ProfAnalysis
* ����������head ��ʦ��ͷ���ָ��
* �������ܣ�������ʦ���ð��ź�����
* ����ֵ����
**/
void ProfAnalysis(PROF_NODE * head)
{
    char prof_name[12];
    float avg_hours = 0;                //���н�ʦƽ����ѧʱ��
    float sum_hours = 0;                //���н�ʦ�����н�ѧʱ��
    int prof_num = 0;                   //��ʦ����
    PROF_NODE *pprof_node = head->next, *prof_temp = NULL;

    //��������ͳ�������Ϣ
    while(pprof_node)
    {
        sum_hours+=pprof_node->prof_hours;
        prof_num++;     //��ʦ��������
        pprof_node = pprof_node->next;
    }
    avg_hours = sum_hours/prof_num;         //ͳ��ƽ���ڿ�ѧʱ
    printf("����%dλ��ʦ\n", prof_num);     //�����ʦ������
    printf("ƽ��ÿλ��ʦ�ڿ�ѧʱΪ%f\n", avg_hours);

    printf("��������Ҫ��ѯ�Ľ�ʦ����:\n");
    getchar();
    scanf("%s", prof_name);
    if(!(prof_temp=SeekProf(gp_prof_head, prof_name)))
    {
        printf("�ý�ʦ������\n");
        return;
    }

    //�������������Ϣ
    printf("%s\t�ڿ�%d������\t�ڿ�ѧʱ%f\t", prof_temp->prof_name, prof_temp->prof_num_course, prof_temp->prof_hours);
    if(prof_temp->prof_hours>130)
        printf("\t�ڿ�ѧʱ�϶࣬����130\n");
    else
        printf("\t�ý�ʦ���������Ϻ���\n");
    return;
}

/**
* �������ƣ�ClassAnalysis
* ����������head �༶��ͷ���ָ��
* �������ܣ������༶���ð��ź�����
* ����ֵ����
**/
void ClassAnalysis(CLASS_NODE *head)
{
    CLASS_NODE *pclass_node=head->next, *class_temp=NULL;
    char class_name[30];

    printf("��������Ҫ���������Եİ༶����\n");
    scanf("%s", class_name);
    //��Ѱ�༶���
    if(!(class_temp=SeekClass(gp_class_head, class_name)))
    {
        printf("�ð༶������!\n");
        return;
    }
    printf(" �༶��\t\tҹ���ʱ\t�����ʱ\tҹ���Ͽ�ʱ���\t\t��ѧǰ�����Ͽ�ʱ��\t�������Ͽ�ʱ��\n");
    //��������ÿ���༶����Ϣ
    while(pclass_node)
    {
        pclass_node->rate = pclass_node->night_class_hours*1.0/pclass_node->day_class_hours;
        pclass_node = pclass_node->next;
    }
    printf(" %-12s\t%-8d\t%-8d\t%-8.1f\t\t%-8d\t\t%-8d\t\t\n", class_temp->class_name, class_temp->night_class_hours, class_temp->day_class_hours, class_temp->rate, class_temp->summer_class_hours, class_temp->winter_class_hours);
    if(class_temp->rate>0.5)
        printf(" �ð༶ҹ���ſγ̹���\n");
    else
        printf(" �ð༶ҹ���Ͽ�ʱ��Ȱ��ź���\n");
    if(class_temp->summer_class_hours>4)
    {
        printf(" �ð༶��ѧǰ���ܰ��ſ�ʱ����4��,���ṩ�ʵ��Ļ�����\n");
    }
    if(class_temp->winter_class_hours>4)
    {
        printf(" �ð༶�����ܰ��ſ�ʱ�ﵽ��%d��,���ṩ����ĸ�ϰʱ��\n", class_temp->winter_class_hours);
    }
    else if(class_temp->summer_class_hours<=4)
        printf(" �ð༶�ڿ�ѧ�׶κ���ĩ�׶εĿγ̰��Ž�Ϊ����\n");
    return;
}

/**
* �������ƣ�RoomUseRate
* ����������head ������ͷ���ָ��
* �������ܣ��������������ʲ��������
* ����ֵ����
**/
void RoomUseRate(ROOM_NODE * head)
{
    ROOM_NODE *proom_node = head->next;
    //������������ͳ�Ƹ����ҵİ���ҹ�������ʹ����
    while(proom_node)
    {
        proom_node->day_use_rate = proom_node->day_use_time*1.0/(DAY_CLASS);
        proom_node->night_use_rate = proom_node->night_use_time*1.0/(NIGHT_CLASS);
        proom_node->total_use_rate = proom_node->total_use_time*1.0/(TOTAL_CLASS);
        proom_node = proom_node->next;
    }
    ROOM_NODE *tail = proom_node;
    QuickSortRate(head, tail);    //���ݽ�����������������
    //�������������Ϣ
    proom_node = head->next;
    printf("\t\t\t\t��������������\t\t\t���Ұ���������\t\t\t����ҹ��������\n");
    while(proom_node)
    {
        printf("\t%-12s\t\t\t%-8.2f\t\t\t%-8.2f\t\t\t%-8.2f\n", proom_node->room_name, proom_node->total_use_rate, proom_node->day_use_rate, proom_node->night_use_rate);
        proom_node = proom_node->next;
    }
    return;
}

/**
* �������ƣ�EnergyAnalysis
* ����������head ������ͷ���ָ��
* �������ܣ�����������Ч���
* ����ֵ����
**/
void EnergyAnalysis(ROOM_NODE *head)
{
    ROOM_NODE *proom_node = head->next;
    //ͳ�Ƹ������ҵ�ƽ����Чֵ
    while(proom_node)
    {
        int course_num = 0;     //ͳ��ĳ�����ҵĿγ�����
        float energy_sum = 0;   //ͳ��ĳ�����Ҹ������õ���Чֵ֮��
        COURSE_NODE *pcourse_node = proom_node->firstarc;
        while(pcourse_node)
        {
            course_num++;
            energy_sum += pcourse_node->total_stu_num*1.0/proom_node->volume;
            pcourse_node = pcourse_node->next;
        }
        proom_node->energy = energy_sum/course_num;
        if(proom_node->energy>1)
        {
            proom_node->energy = 1;
        }
        proom_node = proom_node->next;
    }
    ROOM_NODE *tail = proom_node;
    QuickSortEnergy(head, tail);    //������Чֵ����
    proom_node = head->next;
    //������������ҵ���Чֵ
    printf("\t  ���ҽ�����\t����ҹ��ʹ����������\t\t���Ҷ���ʹ����������\t\t��������ʹ����������\n");
    while(proom_node)
    {
        printf("%-12s\t%-8.2f\t%-8.2f\t\t\t%-8.2f\t\t\t  %-8.2f\n", proom_node->room_name, proom_node->energy, proom_node->night_use_time*NIGHT_INCREMENT, proom_node->winter_use_time*WINTER_INCREMENT, proom_node->summer_use_time*SUMMER_INCREMENT);
        proom_node = proom_node->next;
    }
    return;
}

/**
* �������ƣ�QuickSortEnergy
* ����������head ������ͷ���ָ��
            tail ������β���ָ��
* �������ܣ������ҽ����������Чֵ��������
* ����ֵ����
**/
void QuickSortEnergy(ROOM_NODE *head, ROOM_NODE *tail)
{
    if (head->next==tail||head->next->next==tail)
        return;

    ROOM_NODE* mid = head->next;    //midָ���׼ֵ
    ROOM_NODE* p = head;            //ָ��ȱ�׼ֵ���ֵ
    ROOM_NODE* q = mid;             //ָ��ȱ�׼ֵС��ֵ
    float pivot = mid->energy;
    ROOM_NODE* t=mid->next;

    while (t!=tail)
    {
        if (t->energy>pivot)    //��t��ָ��㴮��p����
            p = p->next = t;
        else
            q = q->next = t;    //��t��ָ��㴮��q����
        t = t->next;
    }
    p->next = mid;
    q->next = tail;

    QuickSortEnergy(head, mid);
    QuickSortEnergy(mid, tail);
}

/**
* �������ƣ�QuickSortRate
* ����������head ������ͷ���ָ��
            tail ������β���ָ��
* �������ܣ�����������������������������
* ����ֵ����
**/
void QuickSortRate(ROOM_NODE *head, ROOM_NODE *tail)
{
    if (head->next==tail||head->next->next==tail)
        return;

    ROOM_NODE* mid = head->next;    //midָ���׼ֵ
    ROOM_NODE* p = head;            //ָ��ȱ�׼ֵ���ֵ
    ROOM_NODE* q = mid;             //ָ��ȱ�׼ֵС��ֵ
    float pivot = mid->total_use_rate;
    ROOM_NODE* t = mid->next;     //tΪ����ָ��

    while (t!=tail)
    {
        if (t->total_use_rate>pivot)
            p = p->next = t;
        else
            q = q->next = t;
        t = t->next;
    }
    p->next = mid;      //��������������
    q->next = tail;

    QuickSortRate(head, mid);
    QuickSortRate(mid, tail);
}

/**
* �������ƣ�FindFreeRoom
* ����������room_hd ������ͷ���ָ��
* �������ܣ����������ʱ�����ʱ��β��ҿ��еĽ���
* ����ֵ����
**/
void FindFreeRoom(ROOM_NODE *room_hd)
{
    int week, date, start_class, end_class,free;
    ROOM_NODE *proom_node = room_hd->next, *room_temp;
    COURSE_NODE * pcourse_node;
    char classes[10];   //������Ĳ��ҽ����ַ���

    printf("��������Ҫ���ҵ��ܴ�(���7��������7)\n");
    getchar();
    scanf("%d", &week);
    printf("��������Ҫ���ҵ�����(������������3)\n");
    getchar();
    scanf("%d", &date);
    printf("��������Ҫ���ҵĽ���(���1~4��������1~4,��1��������1)\n");
    getchar();
    scanf("%s", classes);
    if(!DealString1(classes, &start_class, &end_class))
    {
        printf("��������!\n");
        return;
    }

    //����������Ϣ��
    while(proom_node)
    {
        free = 1;
        pcourse_node = proom_node->firstarc;
        //����ÿ�����Һ�ÿ��������Ϣ���
        while(pcourse_node)
        {
            //printf("%s\n", pcourse_node->course_id);
            room_temp = TimeIn(pcourse_node, week, date, start_class, end_class);    //�ҵ��ض�ʱ���ĳ���������ڵĽ���
            if(!room_temp);
            else if(strcmp(room_temp->room_name,proom_node->room_name)==0)    //����ҵ��Ľ���ǡ�������ڱ����Ľ��ҽ��
            {
                free = 0;
                break;
            }
            pcourse_node = pcourse_node->next;
        }
        if(free)
            printf("%s����\t�ý�������Ϊ:%d\n", proom_node->room_name, proom_node->volume);
        proom_node = proom_node->next;
    }
    getchar();
    return;
}

/**
* �������ƣ�DealString1
* ����������String ���ֽ��ַ���
* �������ܣ���������������ֹ�������ַ�����Ϣ
* ����ֵ�������ɹ�����true, ���򷵻�false
**/
bool DealString1(char *String, int *start_class, int *end_class)
{
    char *ad;
    char *temp = String;
    int all_digit;
    *start_class = *end_class = 0;
    if((ad=strstr(String,"~"))&&isdigit(*(ad-1))&&isdigit(*(ad+1)))
    {
        char *split;
        split = strtok(String, "~");    //��~Ϊ�ָ����ָ��ַ���
        *start_class = atoi(split);
        split = strtok(NULL, "~");
        *end_class = atoi(split);
        return true;
    }
    while(*temp)
    {
    	if(!isdigit(*temp))
    		return false;
    	temp++;
	}
    *start_class = *end_class = atoi(String);
    return true;
}

/**
* �������ƣ�CreateRoomList
* ����������room_hd �γ����׽��ָ��
* �������ܣ���txt�ļ��ж�ȡ��Ϣ��������������
* ����ֵ�������ɹ����ؽ�������ͷ��㣬���򷵻�NULL
**/
ROOM_NODE* CreateRoomList(ROOM_NODE *room_hd)
{
    int ret = 0;
    char room_name[30];
    ROOM_NODE * proom_node = NULL, * pprior_room_node = NULL;

    FILE *room_write = fopen("Room.txt", "r+");
    if(!room_write)
    {
        printf("���ļ�ʧ�ܣ�\n");
        fclose(room_write);
        return NULL;
    }

    pprior_room_node = room_hd; //ǰ��ָ��ָ��ͷ���

    while (!feof(room_write))
    {
        ret = fscanf(room_write, "%s", room_name);
        if(ret == -1) break;    //��ֹfscanf���ȡһ��
        proom_node = (ROOM_NODE*)malloc(sizeof(ROOM_NODE));     //Ϊ�µĽ��ҽ�����ռ�
        strcpy(proom_node->room_name, room_name);
        fscanf(room_write, "%d", &proom_node->summer_use_time);
        fscanf(room_write, "%d", &proom_node->winter_use_time);
        fscanf(room_write, "%d", &proom_node->day_use_time);
        fscanf(room_write, "%d", &proom_node->night_use_time);
        fscanf(room_write, "%d", &proom_node->total_use_time);
        fscanf(room_write, "%d", &proom_node->volume);

        pprior_room_node->next = proom_node;
        pprior_room_node = pprior_room_node->next;
        //printf("%s\n", proom_node->room_name);
        proom_node->next = NULL;
        proom_node->firstarc = NULL;
    }
    fclose(room_write);     //�ر��ļ�
    return proom_node;
}

/**
* �������ƣ�CreateProfList
* ����������prof_hd ��ʦ���׽��ָ��
* �������ܣ���txt�ļ��ж�ȡ��Ϣ��������ʦ����
* ����ֵ�������ɹ����ؽ�ʦ����ͷ��㣬���򷵻�NULL
**/
PROF_NODE* CreateProfList(PROF_NODE *prof_hd)
{
    int ret = 0;
    char prof_name[30];
    char prof_title[30];
    PROF_NODE * pprof_node = NULL, * pprior_prof_node = NULL;    //�������ָ���ǰ��ָ��

    FILE *prof_write = fopen("Prof.txt", "r+");
    if(!prof_write)
    {
        printf("���ļ�ʧ�ܣ�\n");
        fclose(prof_write);
        return NULL;
    }

    pprior_prof_node = prof_hd;

    while (!feof(prof_write))
    {
        ret = fscanf(prof_write, "%s", prof_name);
        if(ret == -1) break;    //��ֹfscanf���ȡһ��
        fscanf(prof_write, "%s", prof_title);
        pprof_node = (PROF_NODE*)malloc(sizeof(PROF_NODE));
        fscanf(prof_write, "%f", &pprof_node->prof_hours);
        fscanf(prof_write, "%d", &pprof_node->prof_num_course);
        fscanf(prof_write, "%d", &pprof_node->age);
        strcpy(pprof_node->prof_name, prof_name);
        strcpy(pprof_node->prof_title, prof_title);

        pprior_prof_node->next = pprof_node;
        pprior_prof_node = pprior_prof_node->next;
        //printf("%s\n", pprof_node->prof_name);
        pprof_node->next = NULL;
        pprof_node->firstarc = NULL;
    }
    fclose(prof_write);     //�ر��ļ�
    return pprof_node;
}

/**
* �������ƣ�CreateClassList
* ����������class_hd �༶���׽��ָ��
* �������ܣ���txt�ļ��ж�ȡ��Ϣ�������༶����
* ����ֵ�������ɹ����ذ༶����ͷ��㣬���򷵻�NULL
**/
CLASS_NODE* CreateClassList(CLASS_NODE *class_hd)
{
    int ret = 0;
    char class_name[30];
    CLASS_NODE * pclass_node = NULL, * pprior_class_node = NULL;    //�������ָ���ǰ��ָ��

    FILE *class_write = fopen("Class.txt", "r+");
    if(!class_write)
    {
        printf("���ļ�ʧ�ܣ�\n");
        fclose(class_write);
        return NULL;
    }

    pprior_class_node = class_hd;

    while (!feof(class_write))
    {
        ret = fscanf(class_write, "%s", class_name);
        if(ret == -1) break;    //��ֹfscanf���ȡһ��
        pclass_node = (CLASS_NODE*)malloc(sizeof(CLASS_NODE));
        strcpy(pclass_node->class_name, class_name);
        fscanf(class_write, "%d", &pclass_node->class_stu_amount);

        fscanf(class_write, "%d", &pclass_node->summer_class_hours);
        fscanf(class_write, "%d", &pclass_node->winter_class_hours);
        fscanf(class_write, "%d", &pclass_node->day_class_hours);
        fscanf(class_write, "%d", &pclass_node->night_class_hours);

        pprior_class_node->next = pclass_node;
        pprior_class_node = pprior_class_node->next;
        //printf("%s\n", pclass_node->class_name);
        pclass_node->next = NULL;
        pclass_node->firstarc = NULL;
    }
    fclose(class_write);    //�ر��ļ�
    return pclass_node;
}

/**
* �������ƣ�InitaCuriList
* �������������Ա�L�ĵ�ַ
* �������ܣ��½��γ�����ͷ��㣬����L��nextָ���ÿ�
* ����ֵ���ɹ����췵��OK�����򷵻�ERROR
**/
Status InitaCuriList(CURI_NODE **L)
{
    (*L) = (CURI_NODE* )malloc(sizeof(CURI_NODE));    //Ϊ��ͷ������ռ�
    if(!(*L))
    {
        printf("����ͷ���ʧ��\n");
        return ERROR;
    }
    //��ʼ����ͷ�����Ϣ
    (*L)->credit = -1;
    (*L)->hours = -1;
    (*L)->next = NULL;
    strcpy((*L)->curi_name, "head");
    return OK;
}

/**
* �������ƣ�InsertCuriNode
* �����������γ̽��ͷָ��hd
* �������ܣ�����γ���Ϣ���
* ����ֵ����
**/
void InsertCuriNode(CURI_NODE * curi_hd)
{
    CURI_NODE *pcuri_node;
    pcuri_node = (CURI_NODE *)malloc(sizeof(CURI_NODE));    //��������γ̽�����ռ�
    if(pcuri_node)
    {
        getchar();
        printf("����������Ҫ��ӵĿγ̵�����:");
        scanf("%s", pcuri_node->curi_name);
    }
    else
    {
        printf("����ռ�ʧ��!");
        return;
    }

    if(SeekCuri(curi_hd, pcuri_node->curi_name)!=NULL)
    {
        printf("����γ��Ѵ���!\n");
        free(pcuri_node);       //�ͷ��ѷ���ռ�
        return;
    }
    else
    {
        printf("������γ�ѧ��: ");
        getchar();
        scanf("%f", &pcuri_node->credit);
        printf("������γ�ѧʱ: ");
        getchar();
        scanf("%f", &pcuri_node->hours);
        pcuri_node->course_num = 0;     //�γ̵Ŀ�����Ŀ����

        pcuri_node->next = curi_hd->next;
        curi_hd->next = pcuri_node;
        pcuri_node->firstarc = NULL;
        printf("����ɹ�!\n");

        return;
    }
}

/**
* �������ƣ�ModiCuriNode
* ����������hd �γ̽��ͷָ��
* �������ܣ��޸Ŀγ���Ϣ���
* ����ֵ���޸ĳɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool ModiCuriNode(CURI_NODE * hd)
{
    CURI_NODE *pcuri_node;
    char curi_name[30], old_curi_name[30], new_curi_name[30];   //�޸�ǰ�Ŀγ����ƺ��޸ĺ�Ŀγ�����
    float old_hours, new_hours;    //�޸�ǰ��ѧʱ���޸ĺ��ѧʱ
    hd = hd->next;
    pcuri_node = hd;

    if(pcuri_node)
    {
        getchar();
        printf("����������Ҫ�޸ĵĿγ̵�����:");
        scanf("%s", curi_name);
    }
    else
    {
        printf("�γ�������δ����!");
        return false;
    }

    if((pcuri_node = SeekCuri(hd, curi_name))!=NULL)
    {
        old_hours = pcuri_node->hours;
        strcpy(old_curi_name, pcuri_node->curi_name);   //�����޸�ǰ�Ŀγ�����
        printf("�������µĿγ�����:");
        getchar();
        scanf("%s", new_curi_name);
        strcpy(pcuri_node->curi_name, new_curi_name);   //�޸�ԭ�пγ�����

        printf("����������Ҫ�޸ĵĿγ̵�ѧ��:");
        getchar();
        scanf("%f", &pcuri_node->credit);

        printf("����������Ҫ�޸ĵĿγ̵�ѧʱ:");
        getchar();
        scanf("%f", &pcuri_node->hours);
        new_hours = pcuri_node->hours;  //�����޸ĺ�Ŀγ�ѧʱ

        ModiCuriInCourse(gp_course_head, old_curi_name, new_curi_name, old_hours, new_hours);
        SaveCourseNode(gp_course_head);     //���������Ϣ
        SaveProfNode(gp_prof_head);         //�����ʦ��Ϣ

        printf("�޸���Ϣ�ɹ�!");
        return true;
    }
    else
    {
        printf("������Ŀγ̲�����\n");
        return false;
    }
}

/**
* �������ƣ�ModiCuriInCourse
* ����������course_hd �γ̽��ͷָ��
* �������ܣ��޸������ڽӱ��б��޸ĵĿγ���Ϣ
* ����ֵ���޸ĳɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool ModiCuriInCourse(COURSE_NODE *course_hd, char * old_curi_name, char *new_curi_name, float old_hours, float new_hours)
{
    int flag = 0;
    COURSE_NODE *temp;

    PROF_NODE * pprof_node = gp_prof_head->next;
    ROOM_NODE * proom_node = gp_room_head->next;
    CLASS_NODE *pclass_node = gp_class_head->next;

    //�޸Ľ���-�����ڽӱ��еĿγ���Ϣ
    while(proom_node)
    {
        temp = proom_node->firstarc;
        while(temp)
        {
            if(strcmp(temp->course_curi_name, old_curi_name)==0)
            {
                strcpy(temp->course_curi_name, new_curi_name);
            }
            temp = temp->next;
        }
        proom_node = proom_node->next;
    }

    //�޸Ľ���-�༶�ڽӱ��еĿγ���Ϣ
    while(pclass_node)
    {
        temp = pclass_node->firstarc;
        while(temp)
        {
            if(strcmp(temp->course_curi_name, old_curi_name)==0)
            {
                strcpy(temp->course_curi_name, new_curi_name);
            }
            temp = temp->next;
        }
        pclass_node = pclass_node->next;
    }

    //�޸Ľ���-��ʦ�ڽӱ��еĿγ���Ϣ
    while(pprof_node)
    {
        flag = 1;
        temp = pprof_node->firstarc;
        while(temp)
        {
            if(strcmp(temp->course_curi_name, old_curi_name)==0)
            {
                pprof_node->prof_hours = pprof_node->prof_hours-old_hours+new_hours;
                strcpy(temp->course_curi_name, new_curi_name);
            }
            temp = temp->next;
        }
        pprof_node = pprof_node->next;
    }
    //�޸��������õ������еĿγ���Ϣ
    temp=course_hd->next;
    while(temp)
    {
        if(strcmp(temp->course_curi_name, old_curi_name)==0)
        {
            strcpy(temp->course_curi_name, new_curi_name);
        }
        temp = temp->next;
    }
    if(flag)
        return true;
    else
        return false;
}

/**
* �������ƣ�DelCuriNode
* ����������hd �γ̽��ͷָ��
* �������ܣ�ɾ���γ���Ϣ���
* ����ֵ��ɾ���ɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool DelCuriNode(CURI_NODE * hd)
{
    CURI_NODE *pcuri_node = hd->next;
    char curi_name[30];

    if(pcuri_node)
    {
        getchar();
        printf("����������Ҫɾ���Ŀγ̵�����:");
        scanf("%s", curi_name);
    }
    else
    {
        printf("�γ�������δ����!");
        return false;
    }

    if((pcuri_node = SeekCuri(hd, curi_name))!=NULL)    //����ָ���Ŀγ̽��ɹ�
    {
        DelCourseAfterCuri(pcuri_node, gp_course_head);

        CURI_NODE *pprior_node = PriorCuriElem(hd, curi_name);  //�ҵ���ɾ������ǰ��
        pprior_node->next = pcuri_node->next;
        pprior_node = pcuri_node;
        pcuri_node = pcuri_node->next;
        free(pprior_node);
        printf("ɾ���ɹ�!\n");
        return true;
    }
    else
    {
        printf("������Ŀγ̲�����\n");
        return false;
    }
}


/**
* �������ƣ�DelCourseAfterCuri
* ����������pcuri_node �γ���Ϣ���
* �������ܣ�ɾ����ɾ���Ŀγ�ͬ���Ŀ���
* ����ֵ����
**/
void DelCourseAfterCuri(CURI_NODE *pcuri_node, COURSE_NODE *course_hd)
{
    COURSE_NODE *pcourse_node = course_hd->next, *course_temp = NULL;
    //������������
    while(pcourse_node)
    {
        course_temp = pcourse_node;
        pcourse_node=pcourse_node->next;
        //����γ����Ϳ���������
        if(strcmp(course_temp->course_curi_name, pcuri_node->curi_name)==0)
        {
            DelWithoutId(course_temp);
        }
    }
    return;
}

/**
* �������ƣ�SaveCuriNode
* ����������curi_hd �γ���ͷ���ָ��
* �������ܣ�����γ�����txt�ļ�
* ����ֵ������ɹ�����TRUE, ���򷵻�FALSE
**/
bool SaveCuriNode(CURI_NODE * curi_hd)
{
    if(!curi_hd)
    {
        printf("û�пγ̴���!\n");
        return false;
    }
    curi_hd = curi_hd->next;
    CURI_NODE *pcuri_node;
    FILE *pfout;    //�ļ�ָ��

    pfout = fopen(gp_curi_info_filename, "w");  //ֻд��ʽ���ļ�ָ��
    if(!pfout)  //�ļ�ָ��Ϊ��
    {
        printf("�γ��ļ�����ʧ�ܣ�\n");
        fclose(pfout);
        return false;
    }

    //�����γ̽�㲢����
    for (pcuri_node = curi_hd; pcuri_node != NULL; pcuri_node = pcuri_node->next)
    {
        fprintf(pfout, "%s\t", pcuri_node->curi_name);  //д��γ�����
        fprintf(pfout, "%.1f\t", pcuri_node->credit);   //д��γ�ѧ��
        fprintf(pfout, "%.1f\t", pcuri_node->hours);    //д��γ�ѧʱ
        fprintf(pfout, "%d\n", pcuri_node->course_num); //д��γ���Ŀ
    }
    fclose(pfout);  //�ر��ļ�ָ��
    return true;
}

/**
* �������ƣ�SearchCuriNode
* ����������hd �γ���ͷ���ָ��
* �������ܣ����ҿγ���Ϣ�����Ƿ�����curi_name������ѡ�����о������Ӧ��Ϣ
* ����ֵ������ʱ����γ���Ϣ, ���򷵻�NULL
**/
bool SearchCuriNode(CURI_NODE * hd)
{
    CURI_NODE *pcuri_node;
    char curi_name[30];

    printf("��������Ҫ���ҵĿγ�����\n");
    getchar();
    scanf("%s", curi_name);
    //���ҿγ�������Ϣ
    pcuri_node = SeekCuri(hd, curi_name);
    if(!pcuri_node)
    {
        printf("���ҿγ�ʧ��\n");
        return false;
    }

    if(pcuri_node)
    {
        //����γ̵�������Ϣ
        printf("ѧ��:%.1f\n", pcuri_node->credit);
        printf("ѧʱ:%.1f\n", pcuri_node->hours);
        printf("���������:%d\n", pcuri_node->course_num);
        return true;
    }
    else if(!(hd->next))
    {
        printf("�γ���Ϊ0��\n");
        return false;
    }
    return false;
}

/**
* �������ƣ�SeekCuri
* ����������curi_name ���ȶԵĿγ�����,
            hd �γ����׽��ָ��
* �������ܣ����ҿγ���Ϣ�����Ƿ�����curi_name������ѡ��
* ����ֵ������ʱ���ؽ��ĵ�ַ, ���򷵻�NULL
**/
CURI_NODE * SeekCuri(CURI_NODE * hd, char *curi_name)
{
    CURI_NODE *pcuri_node;
    int find = 0;

    if(!hd)
    {
        return NULL;
    }

    for (pcuri_node=hd; pcuri_node!=NULL; pcuri_node=pcuri_node->next)
    {
        if (strcmp(curi_name, pcuri_node->curi_name) == 0)
        {
            find = 1;
            break;
        }
    }
    if (find)
    {
        return pcuri_node;
    }
    else
    {
        return NULL;
    }
}

/**
* �������ƣ�InitaRoomList
* �������������Ա�L�ĵ�ַ
* �������ܣ��½���������ͷ��㣬����L��nextָ���ÿ�
* ����ֵ���ɹ����췵��OK�����򷵻�ERROR
**/
Status InitaRoomList(ROOM_NODE **L)
{
    (*L) = (ROOM_NODE* )malloc(sizeof(ROOM_NODE));    //�½���ͷ���
    if(!(*L))
    {
        printf("����ͷ���ʧ��\n");
        return ERROR;
    }
    (*L)->volume = -1;
    (*L)->next = NULL;
    strcpy((*L)->room_name, "rhead");
    return OK;
}

/**
* �������ƣ�ModiCourseNode
* ����������course_hd ���ý��ͷָ��
* �������ܣ��޸Ŀ�����Ϣ���, �����������������Ϣ
* ����ֵ���޸ĳɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool ModiCourseNode(COURSE_NODE * course_hd)
{
    COURSE_NODE *pcourse_node;
    CLASS_NODE *pclass_node;
    PROF_NODE *pprof_node;
    CURI_NODE *pcuri_node;
    int i = 0, j = 0;
    char course_id[20];
    char prof_name[12], curi_name[30];
    course_hd = course_hd->next;
    pcourse_node = course_hd;

    COURSE_NODE *course_temp = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));  //��Ϊ�޸ĺ�Ľ�����
    COURSE_NODE *course_return = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));    //����ԭ�н����Ϣ��������Ϣ�ع�
    if(course_temp)
    {
        printf("����������Ҫ�޸ĵĿ��õ�id:");
        getchar();
        scanf("%s", course_id);
    }
    else
    {
        printf("����������δ����!");
        return false;
    }
    if(!(pcourse_node=SeekCourse(gp_course_head, course_id)))
    {
        printf("�ÿ�����δ����\n");
        return false;
    }
    printf("\n");
    FormatPrint(pcourse_node);
    cpycoursenode(course_temp, pcourse_node);   //����ȫ����Ϣ��course_temp
    cpycoursenode(course_return, pcourse_node); //����ȫ����Ϣ��course_return
    DelWithoutId(pcourse_node);     //��������ɾ��course_node

    if(1)
    {
        int op = 1;
        int firsttime = 1;

        printf("    0.�����޸�    1.��ʦ����\n");
        printf("    2.���ð༶    3.�Ͽ�ʱ��μ���Ӧ����\n");
        while(op)
        {
            printf("��ѡ����Ҫ�޸ĵ�����\n");
            scanf("%d", &op);
            switch(op)
            {
            case 1:
                firsttime = 0;
                printf("���޸Ŀ��õĽ�ʦ����:");
                getchar();
                scanf("%s", prof_name);     //��ʱ�洢������,�Դ����
                if(!(pprof_node = SeekProf(gp_prof_head, prof_name)))
                {
                    printf("���ȴ�����ʦ�Ļ�����Ϣ\n");
                    InsertCourseWithoutInput(course_return);
                    return false;
                }
                strcpy(course_temp->course_prof_name, prof_name);
                break;
            case 2:
                firsttime = 0;
                course_temp->total_stu_num = 0;
                printf("���޸Ŀ������ɵİ༶��Ŀ:");
                getchar();
                scanf("%d", &course_temp->course_class_num);

                printf("���޸ĸ����༶������(���س��ָ�):\n");
                for(i=0; i<course_temp->course_class_num; i++)
                {
                    char class_name[30] = {'\0'};
                    scanf("%s", class_name);
                    if(!(pclass_node=SeekClass(gp_class_head, class_name)))
                    {
                        printf("���ȴ����༶�Ļ�����Ϣ!\n");
                        InsertCourseWithoutInput(course_return);
                        return false;
                    }
                    //printf("�ð༶ѧ���ڰ���γ̹�%d�ڣ����Ͽγ̹�%d��\n", pclass_node->day_class_hours, pclass_node->night_class_hours);
                    //printf("�ð༶ѧ��������γ̹�%d�ڣ�����γ̹�%d��\n", pclass_node->summer_class_hours, pclass_node->winter_class_hours);

                    strcpy(course_temp->course_class_name[i], class_name);
                }
                break;
            case 3:
            {
                firsttime = 0;
                i = 0;
                int firstsubstr = 1;    //��Ǳ���
                ROOM_NODE *proom_node;
                printf("�밴��ʾ�޸��Ͽ�ʱ��κͽ���:\n");

                while(1)
                {
                    int day_num = 0;
                    //�޸��Ͽ�����
                    printf("���޸ķֶ��Ͽ����ڣ�(��1~5��������1~5):\n");
                    char classes[20] = {'\0'};
                    getchar();
                    scanf("%s", classes);
                    if(!DealString1(classes, &course_temp->course_term_period[i][0], &course_temp->course_term_period[i][1]))
                    {
                        printf("��������!\n");
                        InfoReturn();
                        free(course_temp);
                        return false;
                    }
                    //scanf("%d~%d", &course_temp->course_term_period[i][0], &course_temp->course_term_period[i][1]);

                    printf("���޸ĸ������ڵ��Ͽ�������:(��1/2/4/0/0������һ�ܶ��������Ͽ�)\n");
                    char week_date[15] = {'\0'};
                    getchar();
                    scanf("%s", week_date);
                    if(!DealString3(week_date, course_temp->course_week_period[i]))
                    {
                        printf("��������!\n");
                        InfoReturn();
                        free(course_temp);
                        return false;
                    }
                    //scanf("%d/%d/%d/%d/%d/%d", &course_temp->course_week_period[i][0], &course_temp->course_week_period[i][1], &course_temp->course_week_period[i][2], &course_temp->course_week_period[i][3], &course_temp->course_week_period[i][4], &course_temp->course_week_period[i][5]);
                    for(day_num=0; course_temp->course_week_period[i][day_num]!=0; day_num++) ;
                    //�����Ͽ�ʱ��
                    for(j=0; j<day_num; j++)
                    {
                        printf("���޸�ÿһ����Ͽ�ʱ��:(��1~4�����һ���Ľڿ�)\n");
                        char room_name[30];
                        char period[10]={'\0'};
                        getchar();
                        scanf("%s", period);
                        if(!DealString1(period, &course_temp->course_day_period[i][j][0], &course_temp->course_day_period[i][j][1]))
                        {
                            printf("��������!\n");
                            InfoReturn();
                            free(course_temp);
                            return false;
                        }
                        //scanf("%d~%d", &course_temp->course_day_period[i][j][0], &course_temp->course_day_period[i][j][1]);

                        printf("���޸ĸ�ʱ����ڵĽ��ң�\n");
                        getchar();
                        scanf("%s", room_name);
                        if(!(proom_node=SeekRoom(gp_room_head, room_name)))
                        {
                            printf("�ý��Ҳ�����");
                            InsertCourseWithoutInput(course_return);
                            return false;
                        }
                        //���ŷָ��ַ���
                        if(firstsubstr==1)
                        {
                            strcpy(course_temp->course_room_name, room_name);
                            firstsubstr = 0;
                        }
                        else
                        {
                            strcat(course_temp->course_room_name, ",");
                            strcat(course_temp->course_room_name, room_name);
                        }
                    }
                    course_temp->day_period[i] = day_num;
                    i++;

                    printf("�Ƿ�Ҫ��������Ͽ����ڣ�(0����Ҫ��1����Ҫ)");
                    scanf("%d", &op);
                    if(!op)
                        break;
                }
                //��i��ֵ�����ñ���
                course_temp->term_period = i;
                break;
            }
            case 0:
                if(firsttime==1)
                {
                    //��Ϣ�ع�
                    InsertCourseWithoutInput(course_return);
                    return false;
                }
                else
                    break;
            }
        }
        FormatPrint(course_temp);
        InsertCourseWithoutInput(course_temp);
        printf("�޸���Ϣ�ɹ�!");
        return true;
    }
    else
    {
        printf("������Ŀ��ò�����\n");
        return false;
    }
}

/**
* �������ƣ�DelCourseNode
* ����������hd �γ̽��ͷָ��
* �������ܣ�ɾ���γ���Ϣ���
* ����ֵ��ɾ���ɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool DelCourseNode(COURSE_NODE * hd)
{
    COURSE_NODE *pcourse_node;
    char course_id[20];

    pcourse_node = hd->next;
    if(pcourse_node)
    {
        getchar();
        printf("����������Ҫɾ���Ŀ��õ�id:");
        scanf("%s", course_id);
    }
    else
    {
        printf("�γ�������δ����!");
        return false;
    }

    if((pcourse_node = SeekCourse(hd, course_id))!=NULL)
    {
        //����ɾ����Ӧ������Ϣ���������Ϣ
        UpdateAfterDelCourse(pcourse_node);

        COURSE_NODE *pprior_node = PriorCourseElem(hd, course_id);
        pprior_node->next = pcourse_node->next;
        pprior_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        free(pprior_node);
        printf("ɾ���ɹ�!\n");
        //����������Ϣ
        SaveClassNode(gp_class_head);
        SaveCuriNode(gp_curi_head);
        SaveProfNode(gp_prof_head);
        SaveRoomNode(gp_room_head);
        return true;
    }
    else
    {
        printf("������Ŀγ̲�����\n");
        return false;
    }
}

/**
* �������ƣ�DelCourseNode
* ����������pcourse_node ��ɾ���Ŀ��ý��
* �������ܣ�ɾ������Ŀ�����Ϣ���
* ����ֵ��ɾ���ɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool DelWithoutId(COURSE_NODE *pcourse_node)
{
    UpdateAfterDelCourse(pcourse_node);     //���ȸ���ɾ�����������Ϣ

    //�ҵ���ɾ������ǰ��ָ��
    COURSE_NODE *pprior_node = PriorCourseElem(gp_course_head, pcourse_node->course_id);
    pprior_node->next = pcourse_node->next;
    pprior_node = pcourse_node;
    pcourse_node = pcourse_node->next;
    free(pprior_node);
    //������ɾ���������±䶯��������Ϣ
    SaveClassNode(gp_class_head);
    SaveCuriNode(gp_curi_head);
    SaveProfNode(gp_prof_head);
    SaveRoomNode(gp_room_head);
    return true;
}

/**
* �������ƣ�UpdateAfterDelCourse
* ����������pcourse_node ��ɾ���Ŀ��ý��
* �������ܣ�����ɾ������Ŀ�����Ϣ�����������Ϣ
* ����ֵ����
**/
void UpdateAfterDelCourse(COURSE_NODE * pcourse_node)
{
    int i = 0, j = 0;

    //�ҵ�ÿ����������İ༶
    for(i=0; i<pcourse_node->course_class_num; i++)
    {
        CLASS_NODE * pclass_node = SeekClass(gp_class_head, pcourse_node->course_class_name[i]);
        ModiClassAfterDel(pclass_node, pcourse_node);
    }

    PROF_NODE * prof_node = SeekProf(gp_prof_head, pcourse_node->course_prof_name);
    ModiProfAfterDel(prof_node, pcourse_node);

    CURI_NODE * curi_node = SeekCuri(gp_curi_head, pcourse_node->course_curi_name);
    ModiCuriAfterDel(curi_node, pcourse_node);

    char temp[100] = {'\0'};
    strcpy(temp, pcourse_node->course_room_name);
    char *room_name = temp;
    char *split;
    for(i=0; i<pcourse_node->term_period; i++)
    {
        int num_of_week = pcourse_node->course_term_period[i][1]-pcourse_node->course_term_period[i][0]+1;

        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            int start_class = pcourse_node->course_day_period[i][j][0];
            int end_class = pcourse_node->course_day_period[i][j][1];
            //�ֽ���������ɵ��ַ���
            split = strtok(room_name, ",");
            ROOM_NODE *proom_node = SeekRoom(gp_room_head, split);
            room_name = NULL;
            //�޸�ɾ�����ý���Ľ�����Ϣ
            ModiRoomAfterDel(proom_node, pcourse_node, num_of_week, start_class, end_class);
        }
    }
    return;
}

/**
* �������ƣ�ModiProfAfterDel
* ����������pcourse_node ��ɾ���Ŀ��ý��
            pprof_node ��Ҫ�޸ĵĽ�ʦ���
* �������ܣ�����ɾ������Ŀ�����Ϣ����Ľ�ʦ�����Ϣ
* ����ֵ����
**/
void ModiProfAfterDel(PROF_NODE * pprof_node, COURSE_NODE *pcourse_node)
{
    float course_hours = 0;
    COURSE_NODE *course_prior = NULL;
    CURI_NODE * pcuri_node = SeekCuri(gp_curi_head, pcourse_node->course_curi_name);
    course_hours = pcuri_node->hours;

    pprof_node->prof_num_course--;          //���ڿγ̼�һ
    pprof_node->prof_hours-=course_hours;   //�Ͽ�ѧʱ��ȥ�γ̵�ѧʱ

    COURSE_NODE *course_temp = pprof_node->firstarc;

    //������ʦ������Ŀ�����
    while(course_temp)
    {
        //���������
        if(course_temp==pprof_node->firstarc)   //�ÿ���ǡ���ǵ�һ�����ý��
        {
            if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)  //�ÿ��õ����ƺ���Ҫɾ���Ŀ���������ͬ
            {
                pprof_node->firstarc = course_temp->next;
                free(course_temp);
                course_temp = pprof_node->firstarc;
            }
            else
            {
                course_temp = pprof_node->firstarc->next;   //����ָ�����
                course_prior = pprof_node->firstarc;    //ǰ��ָ���������������׽��
            }
        }
        else if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
        {
            course_prior->next = course_temp->next;
            free(course_temp);
            course_temp = course_prior->next;
        }
        else
        {
            course_temp = course_temp->next;    //����ָ�����
            course_prior = course_prior->next;  //ǰ��ָ�����
        }
    }
    return;
}

void ModiCuriAfterDel(CURI_NODE *pcuri_node, COURSE_NODE *pcourse_node)
{
    pcuri_node->course_num--;
    return;
}

/**
* �������ƣ�ModiClassAfterDel
* ����������pcourse_node ��ɾ���Ŀ��ý��
            pclass_node ��Ҫ�޸ĵİ༶���
* �������ܣ�����ɾ������Ŀ�����Ϣ����İ༶�����Ϣ
* ����ֵ����
**/
void ModiClassAfterDel(CLASS_NODE *pclass_node, COURSE_NODE *pcourse_node)
{
    int i, j;
    //�������õ�ÿ������
    for(i=0; i<pcourse_node->term_period; i++)
    {
        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            int start_class = pcourse_node->course_day_period[i][j][0], end_class = pcourse_node->course_day_period[i][j][1];
            int num_of_week = pcourse_node->course_term_period[i][1]-pcourse_node->course_term_period[i][0]+1;
            //�޸�ÿ�ÿζ�Ӧ�༶��ʱ��
            if(start_class>=9)
            {
                pclass_node->night_class_hours -= num_of_week*(end_class-start_class+1);
            }
            else if(end_class<=8)
            {
                pclass_node->day_class_hours -= num_of_week*(end_class-start_class+1);
            }
            else
            {
                //�޸�������Ϣ
                pclass_node->day_class_hours -= num_of_week*(8-start_class+1);
                pclass_node->night_class_hours -= num_of_week*(end_class-9+1);
            }
            if(pcourse_node->course_term_period[i][1]>=18)
            {
                int num_of_winter = pcourse_node->course_term_period[i][1]-18+1;
                pclass_node->winter_class_hours-=num_of_winter*(end_class-start_class+1);
            }
            if(pcourse_node->course_term_period[i][0]<=2)
            {
                int num_of_summer = 2-pcourse_node->course_term_period[i][0]+1;
                pclass_node->summer_class_hours -= num_of_summer*(end_class-start_class+1);
            }
        }
    }

    //ǰ�����ָ��ͱ������ָ��
    COURSE_NODE *course_temp = pclass_node->firstarc, *course_prior = NULL;
    //����ÿ���༶�������ӵ����п�����Ϣ���
    while(course_temp)
    {
        //���ݿ��ý�����ڽӱ��е�λ�÷��������
        if(course_temp==pclass_node->firstarc)
        {
            if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)  //����������Ŀ��ý��ǡ����Ҫɾ�����Ǹ�
            {
                pclass_node->firstarc = course_temp->next;
                free(course_temp);
                course_temp = pclass_node->firstarc;
            }
            else
            {
                course_temp = pclass_node->firstarc->next;
                course_prior = pclass_node->firstarc;
            }
        }
        else if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
        {
            course_prior->next = course_temp->next;
            free(course_temp);
            course_temp = course_prior->next;
        }
        else
        {
            course_temp = course_temp->next;    //�������ý��ָ�����
            course_prior = course_prior->next;  //ǰ�����ý��ָ�����
        }
    }
    return;
}

/**
* �������ƣ�ModiRoomAfterDel
* ����������pcourse_node ��ɾ���Ŀ��ý��
            proom_node ��Ҫ�޸ĵĽ��ҽ��
* �������ܣ�����ɾ������Ŀ�����Ϣ����İ༶�����Ϣ
* ����ֵ����
**/
void ModiRoomAfterDel(ROOM_NODE *proom_node, COURSE_NODE *pcourse_node,int num_of_week, int start_class, int end_class)
{
    int i;
    for(i=0; i<pcourse_node->term_period; i++)  //������ɾ�����ý���ʱ��ֶ�
    {
        if(pcourse_node->course_term_period[i][1]>=18)
        {
            proom_node->winter_use_time-=(pcourse_node->course_term_period[i][1]-18+1)*(end_class-start_class+1);
        }
        if(pcourse_node->course_term_period[i][0]<=2)
        {
            proom_node->summer_use_time-=(2-pcourse_node->course_term_period[i][0]+1)*(end_class-start_class+1);
        }
    }
    //�޸�ÿ�����ҵİ����ҹ����ʱ��
    if(start_class>=9)
    {
        proom_node->night_use_time -= num_of_week*(end_class-start_class+1);
    }
    else if(end_class<=8)
    {
        proom_node->day_use_time -= num_of_week*(end_class-start_class+1);
    }
    else
    {
        proom_node->day_use_time -= num_of_week*(8-start_class+1);
        proom_node->night_use_time -= num_of_week*(end_class-9+1);
    }

    //�޸Ľ��ҽ�����������ʱ��
    proom_node->total_use_time -= num_of_week*(end_class-start_class+1);

    COURSE_NODE *course_temp = proom_node->firstarc, *course_prior = NULL;
    //�������ý����Ϣ��
    while(course_temp)
    {
        //���������
        if(course_temp==proom_node->firstarc)
        {
            if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
            {
                proom_node->firstarc = course_temp->next;
                free(course_temp);
                course_temp = proom_node->firstarc;
            }
            else
            {
                course_temp = proom_node->firstarc->next;
                course_prior = proom_node->firstarc;
            }
        }
        else if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
        {
            course_prior->next = course_temp->next;
            free(course_temp);
            course_temp = course_prior->next;
        }
        else
        {
            course_temp = course_temp->next;
            course_prior = course_prior->next;
        }
    }
    return;
}

/**
* �������ƣ�ModiRoomNode
* ����������room_hd ���ҽ��ͷָ��
* �������ܣ��޸Ľ�����Ϣ���
* ����ֵ���޸ĳɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool ModiRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];
    room_hd = room_hd->next;
    proom_node = room_hd;
    if(proom_node)
    {
        printf("����������Ҫ�޸ĵĽ��ҵ�����:");
        getchar();
        scanf("%s", room_name);
    }
    else
    {
        printf("�γ�������δ����!");
        return false;
    }

    if((proom_node = SeekRoom(room_hd, room_name))!=NULL)   //����Ľ��Ҳ�����
    {
        printf("����������Ҫ�޸ĵĽ��ҵ�����:");
        getchar();
        scanf("%d", &proom_node->volume);   //�޸Ľ�������

        printf("�޸���Ϣ�ɹ�!");
        return true;
    }
    else
    {
        printf("������Ľ��Ҳ�����\n");
        return false;
    }
}

/**
* �������ƣ�InsertRoomNode
* ����������room_hd ��ʦ����ͷָ��ָ��
* �������ܣ������ʦ��Ϣ���
* ����ֵ����
**/
void InsertRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    proom_node = (ROOM_NODE *)malloc(sizeof(ROOM_NODE));    //��������γ̽�����ռ�
    if(proom_node)
    {
        getchar();
        printf("����������Ҫ��ӵĽ��ҵ�����:");
        scanf("%s", proom_node->room_name);
    }
    else
    {
        printf("����ռ�ʧ��!");
        return;
    }

    if(SeekRoom(room_hd, proom_node->room_name)!=NULL)      //�����Ƿ��������Ľ���
    {
        printf("��������Ѵ���!\n");
        free(proom_node);       //�ͷ��Ѿ�����Ŀռ�
        return;
    }
    else
    {
        printf("�������������: ");
        getchar();
        scanf("%d", &proom_node->volume);
        //��ʼ�����������Ϣ
        proom_node->day_use_time = 0;
        proom_node->night_use_time = 0;
        proom_node->total_use_time = 0;
        proom_node->winter_use_time = 0;
        proom_node->summer_use_time = 0;

        //���½�������ͷ������
        proom_node->next = room_hd->next;
        room_hd->next = proom_node;
        proom_node->firstarc = NULL;
        printf("����ɹ�!\n");

        return;
    }
}

/**
* �������ƣ�DelRoomNode
* ����������hd ���ҽ��ͷָ��
* �������ܣ�ɾ��������Ϣ���
* ����ֵ��ɾ���ɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool DelRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];

    proom_node = room_hd->next;
    if(proom_node)
    {
        getchar();
        printf("����������Ҫɾ���Ľ��ҵ�����:");
        scanf("%s", room_name);
    }
    else
    {
        printf("�γ�������δ����!");
        return false;
    }

    if((proom_node=SeekRoom(room_hd, room_name))!=NULL)     //�ҵ�ָ���������ƵĽ��ҽ��
    {
        if(proom_node->total_use_time>0)
        {
            printf("�ý�����Ȼ�е���ѧ����!\n");
            return false;
        }
        ROOM_NODE *pprior_node = PriorRoomElem(room_hd, room_name); //�ҵ���ɾ���ڵ��ǰ�����
        pprior_node->next = proom_node->next;
        pprior_node = proom_node;
        proom_node = proom_node->next;
        free(pprior_node);
        printf("ɾ���ɹ�!\n");
        return true;
    }
    else
    {
        printf("������Ľ��Ҳ�����\n");
        return false;
    }
}


/**
* �������ƣ�SeekCuri
* ����������curi_name ���ȶԵĿγ�����,
            hd �γ����׽��ָ��
* �������ܣ����ҿγ���Ϣ�����Ƿ�����curi_name������ѡ��
* ����ֵ������ʱ����γ���Ϣ, ���򷵻�NULL
**/
bool SearchRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];

    printf("��������Ҫ���ҵĽ�������\n");
    getchar();
    scanf("%s", room_name);
    proom_node = SeekRoom(room_hd, room_name);
    if(!proom_node)
    {
        printf("���ҽ���ʧ��\n");
        return false;
    }

    if(proom_node)  //���ҽ�㱻˳������
    {
        printf("��������:%d\n", proom_node->volume);
        printf("�ļ�ʹ��ʱ��:%d�ڿ�\n", proom_node->summer_use_time);
        printf("����ʹ��ʱ��:%d�ڿ�\n", proom_node->winter_use_time);
        printf("ҹ��ʹ��ʱ��:%d�ڿ�\n", proom_node->night_use_time);
        return true;
    }
    else if(!(room_hd->next))
    {
        printf("������Ϊ0��\n");
        return false;
    }
    return false;
}

/**
* �������ƣ�SeekCuri
* ����������curi_name ���ȶԵĿγ�����,
            hd �γ����׽��ָ��
* �������ܣ����ҿγ���Ϣ�����Ƿ�����curi_name������ѡ��
* ����ֵ������ʱ���ؽ��ĵ�ַ, ���򷵻�NULL
**/
ROOM_NODE * SeekRoom(ROOM_NODE * room_hd, char *room_name)
{
    ROOM_NODE *proom_node;
    int find = 0;

    if(!room_hd)
    {
        return NULL;
    }

    for (proom_node=room_hd; proom_node!=NULL; proom_node=proom_node->next)
    {
        if (strcmp(room_name, proom_node->room_name) == 0)
        {
            find = 1;
            break;
        }
    }
    if (find)
    {
        return proom_node;
    }
    else
    {
        return NULL;
    }
}

/**
 * �������ƣ�PriorCuriElem
 * �������������Ա�L��������ǰ�����Ŀγ�����
 * �������ܣ�����ָ���γ̽���ǰ�����
 * ����ֵ���ɹ��򷵻�ָ��ǰ������ָ�룬���򷵻�NULL
 **/
CURI_NODE* PriorCuriElem(CURI_NODE * L, char *curi_name)
{
    CURI_NODE* pcuri_node = L->next;              //����ָ��
    CURI_NODE* pprior_node = L;                   //ǰ��ָ��
    if(SeekCuri(L, curi_name)==NULL)
    {
        return NULL;
    }
    while (pcuri_node->next && strcmp(pcuri_node->curi_name, curi_name))    //��̲�Ϊ�ղ��ұ���ָ��ָ��Ԫ�طǲ���Ԫ��
    {
        pcuri_node = pcuri_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pcuri_node->next)&&strcmp(pcuri_node->curi_name, curi_name))       //���Ϊ���ұ���ָ��ָ��Ԫ�ػ��ǲ��ǲ���Ԫ��
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //����ָ��ǰ������ָ��
    }
}

/**
 * �������ƣ�PriorRoomElem
 * �������������Ա�L��������ǰ�����Ľ�������
 * �������ܣ�����ָ�����ҽ���ǰ�����
 * ����ֵ���ɹ��򷵻�ָ��ǰ������ָ�룬���򷵻�NULL
 **/
ROOM_NODE* PriorRoomElem(ROOM_NODE * L, char *room_name)
{
    ROOM_NODE* proom_node = L->next;              //����ָ��
    ROOM_NODE* pprior_node = L;                   //ǰ��ָ��
    if(SeekRoom(L, room_name)==NULL)
    {
        return NULL;
    }
    while (proom_node->next && strcmp(proom_node->room_name, room_name))    //��̲�Ϊ�ղ��ұ���ָ��ָ��Ԫ�طǲ���Ԫ��
    {
        proom_node = proom_node->next;
        pprior_node = pprior_node->next;
    }
    if((!proom_node->next)&&strcmp(proom_node->room_name, room_name))       //���Ϊ���ұ���ָ��ָ��Ԫ�ػ��ǲ��ǲ���Ԫ��
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //����ָ��ǰ������ָ��
    }
}

/**
* �������ƣ�SaveRoomNode
* ����������room_hd �������׽��ָ��
* �������ܣ�����γ�����txt�ļ�
* ����ֵ������ɹ�����TRUE, ���򷵻�FALSE
**/
bool SaveRoomNode(ROOM_NODE * room_hd)
{
    if(!room_hd)
    {
        printf("û�н��Ҵ���!\n");
        return false;
    }
    room_hd = room_hd->next;
    ROOM_NODE *proom_node;
    FILE *pfout;    //�ļ�ָ��

    pfout = fopen(gp_room_info_filename, "w");
    if(!pfout)  //�ļ�ָ��Ϊ��
    {
        printf("�γ��ļ�����ʧ�ܣ�\n");
        return false;
    }

    //�����γ̽�㲢����
    for (proom_node = room_hd; proom_node != NULL; proom_node = proom_node->next)
    {
        fprintf(pfout, "%s\t", proom_node->room_name);          //д���������
        fprintf(pfout, "%d\t", proom_node->summer_use_time);    //д���������ʹ��ʱ��
        fprintf(pfout, "%d\t", proom_node->winter_use_time);    //д����Ҷ���ʹ��ʱ��
        fprintf(pfout, "%d\t", proom_node->day_use_time);       //д����Ұ���ʹ��ʱ��
        fprintf(pfout, "%d\t", proom_node->night_use_time);     //д�����ҹ��ʹ��ʱ��
        fprintf(pfout, "%d\t", proom_node->total_use_time);     //д���������ʹ��ʱ��
        fprintf(pfout, "%d\n", proom_node->volume);             //д��γ�����
    }
    fclose(pfout);  //�ر��ļ�ָ��
    return true;
}

/**
 * �������ƣ�ListCuriTrabverse
 * �����������γ̵�����ͷ���ָ��
 * �������ܣ�������ʾ���Ա��е�ÿ��Ԫ�ء�
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListCuriTrabverse(CURI_NODE * curi_hd)
{
    curi_hd = curi_hd->next;
    CURI_NODE * pcuri_node = curi_hd;
    if(!pcuri_node)
    {
        return ERROR;
    }
    printf("\t\t\t�γ�����\t\t�γ�ѧ��\t\t�γ�ѧʱ\t\t��������\n");
    while (pcuri_node)
    {
        printf("\t\t%-16s\t\t%-8.1f\t\t%-8.1f\t\t%-8d\n", pcuri_node->curi_name, pcuri_node->credit, pcuri_node->hours, pcuri_node->course_num);
        pcuri_node = pcuri_node->next;
    }
    return OK;
}

/**
 * �������ƣ�ListRoomTrabverse
 * �������������ҵ�����ͷ���ָ��
 * �������ܣ�������ʾ���Ա��е�ÿ��Ԫ�ء�
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListRoomTrabverse(ROOM_NODE * room_hd)
{
    room_hd = room_hd->next;
    ROOM_NODE * proom_node = room_hd;
    if(!proom_node)
    {
        return ERROR;
    }

    while (proom_node)  //�������ҽ�����������Ӧ��Ϣ
    {
        printf("��������Ϊ%s    ��������Ϊ%d��\n", proom_node->room_name, proom_node->volume);
        printf("����ʹ��ʱ��%d�ڿ�    ҹ��ʹ��ʱ��%d�ڿ�\n", proom_node->day_use_time, proom_node->night_use_time);
        printf("����ʹ��ʱ��%d�ڿ�    ����ʹ��ʱ��%d�ڿ�\n", proom_node->summer_use_time, proom_node->winter_use_time);
        proom_node = proom_node->next;
    }
    return OK;
}

/**
 * �������ƣ�ListClassTrabverse
 * �����������༶������ͷ���ָ��
 * �������ܣ�������ʾ���Ա��е�ÿ��Ԫ��
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListClassTrabverse(CLASS_NODE * class_hd)
{
    class_hd = class_hd->next;
    CLASS_NODE * pclass_node = class_hd;
    if(!pclass_node)
    {
        return ERROR;
    }

    while (pclass_node) //�����༶��Ϣ�����
    {
        printf("%s    %d��\n", pclass_node->class_name, pclass_node->class_stu_amount);
        printf("�ð༶ѧ���ڰ���γ̹�%d�ڣ����Ͽγ̹�%d��\n", pclass_node->day_class_hours, pclass_node->night_class_hours);
        printf("�ð༶ѧ��������γ̹�%d�ڣ�����γ̹�%d��\n", pclass_node->summer_class_hours, pclass_node->winter_class_hours);
        pclass_node = pclass_node->next;
    }
    return OK;
}

/**
 * �������ƣ�ListProfTrabverse
 * ������������ʦ������ͷ���ָ��
 * �������ܣ�������ʾ���Ա��е�ÿ��Ԫ��
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListProfTrabverse(PROF_NODE * prof_hd)
{
    prof_hd = prof_hd->next;
    PROF_NODE * pprof_node = prof_hd;
    if(!pprof_node)
    {
        return ERROR;
    }
    while (pprof_node)  //������ʦ��Ϣ�������
    {
        printf("%s    %s\n", pprof_node->prof_name, pprof_node->prof_title);
        printf("һѧ�ڳе�%d�����ã�%.1fѧʱ�Ľ�ѧ����\n", pprof_node->prof_num_course, pprof_node->prof_hours);
        pprof_node = pprof_node->next;
    }
    return OK;
}

/**
 * �������ƣ�ListCourseTrabverse
 * �������������õ�����ͷ���ָ��
 * �������ܣ�������ʾ���Ա��е�ÿ��Ԫ��
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListCourseTrabverse(COURSE_NODE * course_hd)
{
    course_hd = course_hd->next;
    COURSE_NODE * pcourse_node = course_hd;
    if(!pcourse_node)
    {
        return ERROR;
    }
    while (pcourse_node)    //����������Ϣ�������
    {
        FormatPrint(pcourse_node);
        printf("�ÿ��õ�������Ϊ��%d\n\n", pcourse_node->total_stu_num);
        pcourse_node = pcourse_node->next;
    }
    return OK;
}

/**
 * �������ƣ�ListClassCourseTrabverse
 * �����������༶������ͷ���ָ��
 * �������ܣ�������ʾ�༶-�����ڽӱ��еİ༶-���ù�ϵ
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListClassCourseTrabverse(CLASS_NODE * class_hd)
{
    class_hd = class_hd->next;
    CLASS_NODE * pclass_node = class_hd;
    COURSE_NODE * pcourse_node;
    if(!pclass_node)
    {
        return ERROR;
    }
    while (pclass_node) //�����༶��Ϣ���
    {
        pcourse_node = pclass_node->firstarc;
        printf("%s    %d:\n", pclass_node->class_name, pclass_node->class_stu_amount);
        //������ĳ���༶����ʱ������ڽӱ��иý�������п�����Ϣ
        while(pcourse_node)
        {
            printf("%s:", pcourse_node->course_id);
            printf("%s\n", pcourse_node->course_prof_name);
            pcourse_node = pcourse_node->next;
        }
        pclass_node = pclass_node->next;
    }
    return OK;
}

/**
 * �������ƣ�ListProfCourseTrabverse
 * ������������ʦ������ͷ���ָ��
 * �������ܣ�������ʾ��ʦ-�����ڽӱ��еĽ�ʦ-���ù�ϵ
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListProfCourseTrabverse(PROF_NODE * prof_hd)
{
    prof_hd = prof_hd->next;
    PROF_NODE * pprof_node = prof_hd;
    COURSE_NODE * pcourse_node;
    if(!pprof_node)
    {
        return ERROR;
    }
    while (pprof_node)  //������ʦ��Ϣ���
    {
        pcourse_node = pprof_node->firstarc;
        printf("%s    %s:\n", pprof_node->prof_name, pprof_node->prof_title);
        //������ĳ����ʦ����ʱ������ڽӱ��иý�������п�����Ϣ
        while(pcourse_node)
        {
            printf("%s:", pcourse_node->course_id);
            printf("%s\n", pcourse_node->course_prof_name);
            pcourse_node = pcourse_node->next;
        }
        pprof_node = pprof_node->next;
    }
    return OK;
}

/**
 * �������ƣ�ListRoomCourseTrabverse
 * �������������ҵ�����ͷ���ָ��
 * �������ܣ�������ʾ����-�����ڽӱ��еĽ���-���ù�ϵ
 * ����ֵ���ɹ���������OK�����򷵻�ERROR
 **/
Status ListRoomCourseTrabverse(ROOM_NODE * room_hd)
{

    ROOM_NODE * proom_node = room_hd->next;
    COURSE_NODE * pcourse_node;
    if(!proom_node)
    {
        return ERROR;
    }
    printf("������\t\t�ڿν�ʦ\t\t��������\t\t����id\n");
    while (proom_node)
    {
        pcourse_node = proom_node->firstarc;
        //������ĳ�����ҽ���ʱ������ڽӱ��иý�������п�����Ϣ
        while(pcourse_node)
        {
            printf("%s\t\t", proom_node->room_name);
            printf("%s\t\t", pcourse_node->course_prof_name);
            printf("%d\t\t", pcourse_node->total_stu_num);
            printf("%s\t\t\n", pcourse_node->course_id);
            pcourse_node = pcourse_node->next;
        }
        proom_node = proom_node->next;
    }
    return OK;
}

/**
* �������ƣ�Cre_Room_Course_List
* ����������class_hd �༶���׽��ָ��
            course_class_head ���ڴ����༶-��������ͼ�Ŀ�����
* �������ܣ������༶-��������ͼ
* ����ֵ������ɹ�����ָ��ͼ�е�һ���༶����ָ��, ���򷵻�NULL
**/
ROOM_NODE * Cre_Room_Course_List(ROOM_NODE * room_hd, COURSE_NODE * gp_course_head)
{
    COURSE_NODE *pcourse_node = gp_course_head->next;
    COURSE_NODE *qcourse_node, *qtemp = NULL;
    ROOM_NODE *proom_node = NULL;

    while(pcourse_node) //�������ý����Ϣ��
    {
        qcourse_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        proom_node = room_hd->next;
        while(proom_node)   //�������ҽ����Ϣ��
        {
            if(strstr(qcourse_node->course_room_name, proom_node->room_name))   //������������ڿ��õĽ������ַ�������
            {
                qtemp = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
                cpycoursenode(qtemp, qcourse_node);
                qtemp->next = proom_node->firstarc;
                proom_node->firstarc = qtemp;
            }
            proom_node = proom_node->next;
        }
    }
    return room_hd;
}

/**
* �������ƣ�cpycoursenode
* ����������a ��Ϣ���Ƶ�Ŀ����ý��
            b ������Ϣ����Դ
* �������ܣ���b�е���Ϣȫ�����Ƶ�a��
* ����ֵ�����Ƴɹ�����true, ���򷵻�false
**/
bool cpycoursenode(COURSE_NODE *a, COURSE_NODE *b)
{
    int i,j;
    strcpy(a->course_id, b->course_id);
    strcpy(a->course_prof_name, b->course_prof_name);
    a->course_class_num = b->course_class_num;
    strcpy(a->course_curi_name, b->course_curi_name);
    strcpy(a->course_room_name, b->course_room_name);
    a->total_stu_num = b->total_stu_num;
    a->term_period = b->term_period;
    a->next = NULL;

    //��������������
    for(i=0; i<b->term_period; i++)
    {
        a->day_period[i] = b->day_period[i];
    }
    //���θ��ư༶����
    for(i=0; i<b->course_class_num; i++)
    {
        strcpy(a->course_class_name[i], b->course_class_name[i]);
    }
    //���θ����Ͽ��ܴ�
    for(i=0; i<b->term_period; i++)
    {
        for(j=0; j<b->day_period[i]; j++)
        {
            a->course_week_period[i][j]=b->course_week_period[i][j];
        }
    }
    //���θ����Ͽνڴ�
    for(i=0; i<b->term_period; i++)
    {
        for(j=0; j<b->day_period[i]; j++)
        {
            a->course_day_period[i][j][0]=b->course_day_period[i][j][0];
            a->course_day_period[i][j][1]=b->course_day_period[i][j][1];
        }
    }
    for(i=0; i<b->term_period; i++)
    {
        a->course_term_period[i][0]=b->course_term_period[i][0];
        a->course_term_period[i][1]=b->course_term_period[i][1];
    }
    return true;
}


/**
* �������ƣ�Cre_Class_Course_List
* ����������class_hd �༶���׽��ָ��
            course_class_head ���ڴ����༶-��������ͼ�Ŀ�����
* �������ܣ������༶-��������ͼ
* ����ֵ������ɹ�����ָ��ͼ�е�һ���༶����ָ��, ���򷵻�NULL
**/
CLASS_NODE* Cre_Class_Course_List(CLASS_NODE *class_hd, COURSE_NODE *gp_course_head)
{
    COURSE_NODE *pcourse_node = gp_course_head->next;
    COURSE_NODE *qcourse_node = NULL, *qtemp = NULL;
    CLASS_NODE *pclass_node = NULL;
    int i;

    while(pcourse_node)     //����������Ϣ��
    {
        qcourse_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        for(i=0; i<qcourse_node->course_class_num; i++)
        {
            pclass_node = class_hd->next;
            while(pclass_node)  //�����༶��Ϣ��
            {
                if(strcmp(qcourse_node->course_class_name[i], pclass_node->class_name)==0)
                {
                    qtemp = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
                    cpycoursenode(qtemp, qcourse_node);
                    qtemp->next = pclass_node->firstarc;
                    pclass_node->firstarc = qtemp;
                    break;
                }
                else
                {
                    pclass_node = pclass_node->next;
                }
            }
        }
    }
    return class_hd;
}

/**
* �������ƣ�Cre_Prof_Course_List
* ����������prof_hd �༶���׽��ָ��
            cprof_courese_hd ���ڴ�����ʦ-��������ͼ�Ŀ�����
* �������ܣ�������ʦ-��������ͼ
* ����ֵ������ɹ�����ָ��ͼ�е�һ����ʦ����ָ��, ���򷵻�NULL
**/
PROF_NODE* Cre_Prof_Course_List(PROF_NODE *prof_hd, COURSE_NODE *cprof_courese_hd)
{
    COURSE_NODE *pcourse_node = cprof_courese_hd->next;
    COURSE_NODE *qcourse_node = NULL, *qtemp = NULL;
    PROF_NODE *pprof_node = NULL;

    while(pcourse_node)     //����������Ϣ��
    {
        qcourse_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        pprof_node = prof_hd->next;
        while(pprof_node)       //������ʦ��Ϣ��
        {
            if(strcmp(qcourse_node->course_prof_name, pprof_node->prof_name)==0)    //���õĽ�ʦ����ihe��ʦ������ͬ
            {
                qtemp = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
                cpycoursenode(qtemp, qcourse_node);
                qtemp->next = pprof_node->firstarc;
                pprof_node->firstarc = qtemp;
            }
            pprof_node = pprof_node->next;
        }
    }
    return prof_hd;
}

/**
* �������ƣ�InitiaProfList
* �������������Ա�L�ĵ�ַ
* �������ܣ��½���ʦ��ͷ��㣬����nextָ���ÿ�
* ����ֵ���ɹ����췵��OK�����򷵻�ERROR
**/
Status InitaProfList(PROF_NODE **L)
{
    (*L) = (PROF_NODE* )malloc(sizeof(PROF_NODE));    //�½���ͷ���
    if(!(*L))
    {
        printf("����ͷ���ʧ��\n");
        return ERROR;
    }
    (*L)->next = NULL;
    (*L)->firstarc = NULL;
    strcpy((*L)->prof_name, "phead");
    strcpy((*L)->prof_title, "phead");
    return OK;
}

/**
* �������ƣ�ModiProfNode
* ����������prof_hd ��ʦ��Ϣ��ͷ���ָ��
* �������ܣ��޸Ľ�ʦ��Ϣ���
* ����ֵ���޸ĳɹ��򷵻�true,ʧ���򷵻�false
**/
bool ModiProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[12];     //��Ҫ�޸ĵĽ�ʦ���
    prof_hd = prof_hd->next;
    pprof_node = prof_hd;

    if(pprof_node)
    {
        printf("����������Ҫ�޸ĵĽ�ʦ������:");
        getchar();
        scanf("%s", prof_name);
    }
    else
    {
        printf("��ʦ������δ����!");
        return false;
    }

    if((pprof_node = SeekProf(prof_hd, prof_name))!=NULL)   //���ҵ���ʦ����
    {
        printf("����������Ҫ�޸ĵĽ�ʦ��ְλ:");
        getchar();
        scanf("%s", pprof_node->prof_title);

        printf("�޸���Ϣ�ɹ�!");
        return true;
    }
    else
    {
        printf("������Ľ�ʦ������\n");
        return false;
    }
}

/**
* �������ƣ�InsertProfNode
* ����������prof_hd ��ʦ��Ϣ��ͷ���ָ��
* �������ܣ������ʦ��Ϣ���
* ����ֵ����
**/
void InsertProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    pprof_node = (PROF_NODE *)malloc(sizeof(PROF_NODE));
    if(pprof_node)
    {
        getchar();
        printf("����������Ҫ��ӵĽ�ʦ������:");
        scanf("%s", pprof_node->prof_name);
    }
    else
    {
        printf("����ռ�ʧ��!");
        return;
    }

    if(SeekProf(prof_hd, pprof_node->prof_name)!=NULL)
    {
        printf("�����ʦ�Ѵ���!\n");
        free(pprof_node);       //�ͷ��ѷ���Ŀռ�
        return;
    }
    else
    {
        printf("�������ʦְλ: ");
        getchar();
        scanf("%s", pprof_node->prof_title);
        printf("�������ʦ���䣺");
        getchar();
        scanf("%d", &pprof_node->age);
        //��ʼ����ʦ����ͳ����Ϣ
        pprof_node->prof_hours = 0;
        pprof_node->prof_num_course = 0;

        pprof_node->next = prof_hd->next;
        prof_hd->next = pprof_node;
        pprof_node->firstarc = NULL;
        pprof_node->prof_hours = 0;
        printf("����ɹ�!\n");

        return;
    }
}

/**
* �������ƣ�DelProfNode
* ����������hd �γ̽��ͷָ��
* �������ܣ�ɾ���γ���Ϣ���
* ����ֵ��ɾ���ɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool DelProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[30];

    pprof_node = prof_hd->next;
    if(pprof_node)
    {
        getchar();
        printf("����������Ҫɾ���Ľ�ʦ������:");
        scanf("%s", prof_name);
    }
    else
    {
        printf("��ʦ������δ����!");
        return false;
    }

    if((pprof_node = SeekProf(prof_hd, prof_name))!=NULL)   //�ҵ���Ӧ��ʦ���ƵĽ��
    {
        if(pprof_node->prof_num_course>0)
        {
            printf("�ý�ʦ���ڽ�ѧ!\n");
            return false;
        }
        PROF_NODE *pprior_node = PriorProfElem(prof_hd, prof_name); //�ҵ���ʦ����ǰ�����
        pprior_node->next = pprof_node->next;
        pprior_node = pprof_node;
        pprof_node = pprof_node->next;
        free(pprior_node);
        printf("ɾ���ɹ�!\n");
        return true;
    }
    else
    {
        printf("������Ľ�ʦ������\n");
        return false;
    }
}

/**
* �������ƣ�SeekCuri
* ����������curi_name ���ȶԵĿγ�����,
            hd �γ����׽��ָ��
* �������ܣ����ҿγ���Ϣ�����Ƿ�����curi_name������ѡ��
* ����ֵ������ʱ����γ���Ϣ, ���򷵻�NULL
**/
bool SearchProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[30];

    printf("��������Ҫ���ҵĽ�ʦ����\n");
    getchar();
    scanf("%s", prof_name);
    pprof_node = SeekProf(prof_hd, prof_name);
    if(!pprof_node)
    {
        printf("���ҽ�ʦʧ��\n");
        return false;
    }

    if(pprof_node)  //������ʦ��㲢�����Ϣ
    {
        printf("��ʦְ��:%s\n", pprof_node->prof_title);
        printf("��ѧ���ڿ���ѧʱ:%.1f\n", pprof_node->prof_hours);
        printf("��ѧ���ڿο�����:%d\n", pprof_node->prof_num_course);
        return true;
    }
    else if(!(prof_hd->next))
    {
        printf("��ʦ��Ϊ0��\n");
        return false;
    }
    return false;
}

/**
* �������ƣ�SeekCuri
* ����������curi_name ���ȶԵĿγ�����,
            hd �γ����׽��ָ��
* �������ܣ����ҿγ���Ϣ�����Ƿ�����curi_name������ѡ��
* ����ֵ������ʱ���ؽ��ĵ�ַ, ���򷵻�NULL
**/
PROF_NODE * SeekProf(PROF_NODE * prof_hd, char *prof_name)
{
    PROF_NODE *pprof_node;
    int find = 0;

    if(!prof_hd)
    {
        return NULL;
    }

    for (pprof_node=prof_hd; pprof_node!=NULL; pprof_node=pprof_node->next)
    {
        if (strcmp(prof_name, pprof_node->prof_name) == 0)  //�ȶԽ�ʦ��Ϣ�Ƿ���ͬ
        {
            find = 1;
            break;
        }
    }
    if (find)
    {
        return pprof_node;
    }
    else
    {
        return NULL;
    }
}

/**
 * �������ƣ�PriorProfElem
 * �������������Ա�L��������ǰ�����Ľ�ʦ����
 * �������ܣ�����ָ����ʦ����ǰ�����
 * ����ֵ���ɹ��򷵻�ָ��ǰ������ָ�룬���򷵻�NULL
 **/
PROF_NODE* PriorProfElem(PROF_NODE * L, char *prof_name)
{
    PROF_NODE* pprof_node = L->next;              //����ָ��
    PROF_NODE* pprior_node = L;                   //ǰ��ָ��
    if(SeekProf(L, prof_name)==NULL)
    {
        return NULL;
    }
    while (pprof_node->next && strcmp(pprof_node->prof_name, prof_name))    //��̲�Ϊ�ղ��ұ���ָ��ָ��Ԫ�طǲ���Ԫ��
    {
        pprof_node = pprof_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pprof_node->next)&&strcmp(pprof_node->prof_name, prof_name))       //���Ϊ���ұ���ָ��ָ��Ԫ�ػ��ǲ��ǲ���Ԫ��
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //����ָ��ǰ������ָ��
    }
}

/**
* �������ƣ�SaveCuriNode
* ����������hd �γ����׽��ָ��
* �������ܣ�����γ�����txt�ļ�
* ����ֵ������ɹ�����TRUE, ���򷵻�FALSE
**/
bool SaveProfNode(PROF_NODE * prof_hd)
{
    if(!prof_hd)
    {
        printf("û�н�ʦ����!\n");
        return false;
    }
    prof_hd = prof_hd->next;
    PROF_NODE *pprof_node;
    FILE *pfout;    //�ļ�ָ��

    pfout = fopen(gp_prof_info_filename, "w");
    if(!pfout)  //�ļ�ָ��Ϊ��
    {
        printf("��ʦ�ļ�����ʧ�ܣ�\n");
        fclose(pfout);
        return false;
    }

    //������ʦ�����
    for (pprof_node = prof_hd; pprof_node != NULL; pprof_node = pprof_node->next)
    {
        /*�����ʦ��Ϣ*/
        fprintf(pfout, "%s\t", pprof_node->prof_name);
        fprintf(pfout, "%s\t", pprof_node->prof_title);
        fprintf(pfout, "%f\t", pprof_node->prof_hours);
        fprintf(pfout, "%d\t", pprof_node->prof_num_course);
        fprintf(pfout, "%d\n", pprof_node->age);
    }
    fclose(pfout);  //�ļ�ָ��ر�
    return true;
}

/**
* �������ƣ�InitiaClassList
* �������������Ա�L�ĵ�ַ
* �������ܣ��½�һ����ͷ��㣬����nextָ���ÿ�
* ����ֵ���ɹ����췵��OK�����򷵻�ERROR
**/
Status InitaClassList(CLASS_NODE **L)
{
    (*L) = (CLASS_NODE* )malloc(sizeof(CLASS_NODE));    //�½���ͷ���
    if(!(*L))
    {
        printf("����ͷ���ʧ��\n");
        return ERROR;
    }
    (*L)->next = NULL;
    (*L)->class_stu_amount = -1;
    strcpy((*L)->class_name, "chead");
    return OK;
}

/**
* �������ƣ�ModiClassNode
* ����������class_hd ��ʦ��Ϣ��ͷ���ָ��
* �������ܣ��޸Ľ�ʦ��Ϣ���
* ����ֵ���޸ĳɹ��򷵻�true,ʧ���򷵻�false
**/
bool ModiClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];
    class_hd = class_hd->next;
    pclass_node = class_hd;
    int old_stu_amount = 0;    //�޸�֮ǰ��ѧ������

    if(pclass_node)
    {
        printf("����������Ҫ�޸ĵİ༶������:");
        getchar();
        scanf("%s", class_name);
    }
    else
    {
        printf("�༶������δ����!");
        return false;
    }

    if((pclass_node = SeekClass(class_hd, class_name))!=NULL)   //�������İ༶����
    {
        old_stu_amount = pclass_node->class_stu_amount;
        printf("����������Ҫ�޸ĵİ༶������:");
        getchar();
        scanf("%d", &pclass_node->class_stu_amount);    //�޸İ༶����
        if(ModiClassInCourse(gp_course_head, pclass_node, old_stu_amount))  //�޸��ڽӱ��еĿγ���Ϣ
        {
            printf("�޸���Ϣ�ɹ�!");
            return true;
        }
    }
    else
    {
        printf("������İ༶������\n");
        return false;
    }

    return false;
}

/**
* �������ƣ�ModiClassInCourse
* ����������course_hd ������Ϣ��ͷ���ָ��
            pclass_node ��Ҫ�޸ĵİ༶��Ϣ���
            old_stu_amount �޸�ǰ�İ༶ѧ����Ŀ
* �������ܣ��޸Ľ�ʦ��Ϣ���
* ����ֵ���޸ĳɹ��򷵻�true,ʧ���򷵻�false
**/
bool ModiClassInCourse(COURSE_NODE *course_hd, CLASS_NODE *pclass_node, int old_stu_amount)
{
    int flag = 0, i = 0;
    COURSE_NODE * pcourse = course_hd->next;

    //����ÿ�����ý����Ϣ
    while(pcourse)
    {
        for(i=0; i<pcourse->course_class_num; i++)
        {
            if(strcmp(pcourse->course_class_name[i], pclass_node->class_name)==0)
            {
                flag = 1;
                pcourse->total_stu_num = pcourse->total_stu_num+pclass_node->class_stu_amount-old_stu_amount;
                //�޸��ڽӱ��еĿ��ý����Ϣ
                ModiCrossForClass(pcourse);
            }
        }
        pcourse = pcourse->next;
    }

    SaveCourseNode(gp_course_head);     //���������Ϣ
    if(flag)
        return true;
    else
        return false;
}

/**
* �������ƣ�ModiCrossForClass
* ����������pcourse_node ������Ϣ��ͷ���ָ��
* �������ܣ��޸��ڽӱ��еĿ�����Ϣ���
* ����ֵ����
**/
void ModiCrossForClass(COURSE_NODE *pcourse_node)
{
    COURSE_NODE *course_temp;
    int i;
    PROF_NODE *pprof_node=SeekProf(gp_prof_head, pcourse_node->course_prof_name);
    CLASS_NODE *pclass_node;
    ROOM_NODE *proom_node = gp_room_head->next;

    course_temp = pprof_node->firstarc;
    while(course_temp)  //���½�ʦ����Ŀ�������ѧ����Ϣ
    {
        if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
        {
            course_temp->total_stu_num = pcourse_node->total_stu_num;
        }
        course_temp = course_temp->next;
    }

    for(i=0; i<pcourse_node->course_class_num; i++)
    {
        pclass_node = SeekClass(gp_class_head, pcourse_node->course_class_name[i]);     //��Ѱ�༶���
        course_temp = pclass_node->firstarc;
        while(course_temp)  //���°༶����Ŀ�������ѧ����Ϣ
        {
            if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
            {
                course_temp->total_stu_num = pcourse_node->total_stu_num;
            }
            course_temp = course_temp->next;
        }
    }

    while(proom_node)
    {
        course_temp = proom_node->firstarc;
        while(course_temp)  //���½��ҽ���Ŀ�������ѧ����Ϣ
        {
            if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
            {
                course_temp->total_stu_num = pcourse_node->total_stu_num;
            }
            course_temp = course_temp->next;
        }
        proom_node = proom_node->next;
    }

    return;
}

/**
* �������ƣ�InsertClassNode
* ����������class_hd �༶��Ϣ��ͷ���
* �������ܣ�����༶��Ϣ���
* ����ֵ����
**/
void InsertClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    pclass_node = (CLASS_NODE *)malloc(sizeof(CLASS_NODE));    //��������γ̽�����ռ�
    if(pclass_node)
    {
        getchar();
        printf("����������Ҫ��ӵİ༶������:");
        scanf("%s", pclass_node->class_name);
    }
    else
    {
        printf("����ռ�ʧ��!");
        return;
    }

    if(SeekClass(class_hd, pclass_node->class_name)!=NULL)      //���༶�������
    {
        printf("����༶���Ѵ���!\n");
        free(pclass_node);
        return;
    }
    else
    {
        printf("������༶ѧ������: ");
        getchar();
        scanf("%d", &pclass_node->class_stu_amount);
        //��ʼ���༶��������Ϣ
        pclass_node->night_class_hours = 0;
        pclass_node->day_class_hours = 0;

        pclass_node->next = class_hd->next;
        class_hd->next = pclass_node;
        pclass_node->firstarc = NULL;
        printf("����ɹ�!\n");

        return;
    }
}

/**
* �������ƣ�DelClassNode
* ����������class_hd �༶��Ϣ��ͷ���
* �������ܣ�ɾ���༶��Ϣ���
* ����ֵ��ɾ���ɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
bool DelClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];

    pclass_node = class_hd->next;
    //������Ҫɾ���İ༶����
    if(pclass_node)
    {
        getchar();
        printf("����������Ҫɾ���İ༶������:");
        scanf("%s", class_name);
    }
    else
    {
        printf("�༶������δ����!");
        return false;
    }

    //��Ѱָ�����Ƶİ༶���
    if((pclass_node = SeekClass(class_hd, class_name))!=NULL)   //�ҵ���ɾ���İ༶���
    {
        DelCourseAfterC(pclass_node, gp_course_head);   //�޸�ɾ���༶�����������Ϣ
        //�ҵ���ɾ������ǰ�����
        CLASS_NODE *pprior_node = PriorClassElem(class_hd, class_name);
        pprior_node->next = pclass_node->next;
        pprior_node = pclass_node;
        pclass_node = pclass_node->next;
        free(pprior_node);
        printf("ɾ���ɹ�!\n");
        return true;
    }
    else
    {
        printf("������İ༶������\n");
        return false;
    }
}

/**
* �������ƣ�DelCourseAfterC
* ����������pclass_node �༶��Ϣ���
            course_hd ������Ϣ��ͷ���
* �������ܣ�ɾ���༶��Ϣ���������������Ϣ���޸�
* ����ֵ��ɾ���ɹ��򷵻�TRUE,ʧ���򷵻�FALSE
**/
void DelCourseAfterC(CLASS_NODE *pclass_node, COURSE_NODE *course_hd)
{
    int i ,j;
    COURSE_NODE *pcourse_node = pclass_node->firstarc, *qcourse_node = course_hd->next, *course_temp = NULL;
    //�������ý����Ϣ
    while(pcourse_node)
    {
        course_temp = pcourse_node;     //�����ɾ�����޸ĵĽ��ĵ�ַ
        pcourse_node = pcourse_node->next;  //����ָ�����
        //ֻ��һ���༶�����
        if(course_temp->course_class_num==1)
        {
            //ֱ�Ӱ��Ǹ����ø�ɾ��
            qcourse_node = SeekCourse(course_hd, course_temp->course_id);
            DelWithoutId(qcourse_node);
        }
        else
        {
            qcourse_node = SeekCourse(course_hd, course_temp->course_id);
            //�����ڵ�ѧ����������ȥ�༶����
            qcourse_node->total_stu_num-=pclass_node->class_stu_amount;
            //�޸�ÿ�����ý��İ༶��Ŀ�Ͱ༶����
            for(i=0;i<qcourse_node->course_class_num;i++)
            {
                if(strcmp(qcourse_node->course_class_name[i], pclass_node->class_name)==0)
                {
                    for(j=i;j<qcourse_node->course_class_num;j++)
                    {
                        strcpy(qcourse_node->course_class_name[j],qcourse_node->course_class_name[j+1]);
                    }
                    break;
                }
            }
            qcourse_node->course_class_num--;   //ɾ��һ���༶�������һ
        }
        free(course_temp);
    }
    return;
}

/**
* �������ƣ�SearchClassNode
* ����������class_hd �γ����׽��ָ��
* �������ܣ�����������Ϣ������Ӧ�İ༶���
* ����ֵ������ʱ����༶��Ϣ, ���򷵻�NULL
**/
bool SearchClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];

    printf("��������Ҫ���ҵİ༶����:");
    getchar();
    scanf("%s", class_name);
    pclass_node = SeekClass(class_hd, class_name);
    if(!pclass_node)
    {
        printf("���Ұ༶ʧ��\n");
        return false;
    }

    if(pclass_node)     //���Ұ༶���ɹ�
    {
        printf("�༶ѧ����Ŀ:%d\n", pclass_node->class_stu_amount);
        printf("�������Ͽν���:%d�ڿ�\n", pclass_node->winter_class_hours);
        printf("��ѧǰ�����Ͽν���:%d�ڿ�\n", pclass_node->summer_class_hours);
        printf("ҹ���Ͽν���:%d�ڿ�\n", pclass_node->night_class_hours);
        return true;
    }
    else if(!(class_hd->next))
    {
        printf("�༶��Ϊ0��\n");
        return false;
    }
    return false;
}


/**
* �������ƣ�SeekClass
* ����������class_name ���ȶԵİ༶����,
            class_hd �༶���׽��ָ��
* �������ܣ����Ұ༶��Ϣ�����Ƿ�����class_name�����Ľ��
* ����ֵ������ʱ���ؽ��ĵ�ַ, ���򷵻�NULL
**/
CLASS_NODE * SeekClass(CLASS_NODE *class_hd, char *class_name)
{
    CLASS_NODE *pclass_node;
    int find = 0;

    if(!class_hd)
    {
        return NULL;
    }

    for (pclass_node=class_hd; pclass_node!=NULL; pclass_node=pclass_node->next)
    {
        if (strcmp(class_name, pclass_node->class_name) == 0)
        {
            find = 1;
            break;
        }
    }
    if (find)
    {
        return pclass_node;
    }
    else
    {
        return NULL;
    }
}

/**
 * �������ƣ�PriorClassElem
 * �������������Ա�L��������ǰ�����İ༶����
 * �������ܣ�����ָ���༶����ǰ�����
 * ����ֵ���ɹ��򷵻�ָ��ǰ������ָ�룬���򷵻�NULL
 **/
CLASS_NODE* PriorClassElem(CLASS_NODE * L, char *class_name)
{
    CLASS_NODE* pclass_node = L->next;              //����ָ��
    CLASS_NODE* pprior_node = L;                    //ǰ��ָ��
    if(SeekClass(L, class_name)==NULL)
    {
        return NULL;
    }
    while (pclass_node->next && strcmp(pclass_node->class_name, class_name))    //��̲�Ϊ�ղ��ұ���ָ��ָ��Ԫ�طǲ���Ԫ��
    {
        pclass_node = pclass_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pclass_node->next)&&strcmp(pclass_node->class_name, class_name))       //���Ϊ���ұ���ָ��ָ��Ԫ�ػ��ǲ��ǲ���Ԫ��
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //����ָ��ǰ������ָ��
    }
}

/**
* �������ƣ�SaveClassNode
* ����������class_hd �γ���ͷ���ָ��
* �������ܣ�����༶����txt�ļ�
* ����ֵ������ɹ�����TRUE, ���򷵻�FALSE
**/
bool SaveClassNode(CLASS_NODE * class_hd)
{
    if(!class_hd)
    {
        printf("û�а༶����!\n");
        return false;
    }
    class_hd = class_hd->next;
    CLASS_NODE *pclass_node;
    FILE *pfout;    //�ļ�ָ��

    pfout = fopen(gp_class_info_filename, "w");
    if(!pfout)  //�ļ�ָ��Ϊ��
    {
        printf("�γ��ļ�����ʧ�ܣ�\n");
        fclose(pfout);
        return false;
    }

    //�����༶��㲢����
    for (pclass_node = class_hd; pclass_node != NULL; pclass_node = pclass_node->next)
    {
        /*����༶��Ϣ*/
        fprintf(pfout, "%s\t", pclass_node->class_name);
        fprintf(pfout, "%d\t", pclass_node->class_stu_amount);
        fprintf(pfout, "%d\t", pclass_node->summer_class_hours);
        fprintf(pfout, "%d\t", pclass_node->winter_class_hours);
        fprintf(pfout, "%d\t", pclass_node->day_class_hours);
        fprintf(pfout, "%d\n", pclass_node->night_class_hours);
    }
    fclose(pfout);  //�ر��ļ�
    return true;
}

/**
* �������ƣ�InitaCourseList
* �������������Ա�L�ĵ�ַ
* �������ܣ��½���������ͷ��㣬����L��nextָ���ÿ�
* ����ֵ���ɹ����췵��OK�����򷵻�ERROR
**/
Status InitaCourseList(COURSE_NODE **L)
{
    (*L) = (COURSE_NODE* )malloc(sizeof(COURSE_NODE));    //�½���ͷ���
    if(!(*L))
    {
        printf("����ͷ���ʧ��\n");
        return ERROR;
    }
    (*L)->term_period = -1;
    (*L)->next = NULL;
    return OK;
}

/**
* �������ƣ�Initarray
* ����������pcourse_node ָ�����ý���ָ��
* �������ܣ���ʼ�����ý�����Ϣ
* ����ֵ����
**/
void Initarray(COURSE_NODE *pcourse_node)
{
    int i, j;
    for(i=0;i<5;i++)
    {
        pcourse_node->day_period[i]=0;  //��ʼ��һ�ܵ��Ͽ�����
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            pcourse_node->course_week_period[i][j]=0;   //��ʼ��ÿ�ܵ��Ͽ�����
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            pcourse_node->course_day_period[i][j][0]=0; //��ʼ��ÿ�ܵ��Ͽ�����
            pcourse_node->course_day_period[i][j][1]=0;
        }
    }
    for(i=0;i<5;i++)
    {
        pcourse_node->course_term_period[i][0]=0;   //��ʼ���Ͽνڴ�
        pcourse_node->course_term_period[i][1]=0;
    }
    return;
}

/**
* �������ƣ�InsertCourseNode
* ����������course_hd ������ͷ���ָ��
* �������ܣ�������ý������������
* ����ֵ������ɹ�������β���ָ��, ���򷵻�NULL
**/
void InsertCourseNode(COURSE_NODE * course_hd)
{
    COURSE_NODE *pcourse_node;
    CLASS_NODE *pclass_node;
    ROOM_NODE *proom_node;
    CURI_NODE *pcuri_node;
    PROF_NODE *pprof_node;

    pcourse_node = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
    pclass_node = (CLASS_NODE *)malloc(sizeof(CLASS_NODE));
    //��ʼ�����ý���ͳ����Ϣ��
    pcourse_node->term_period = 0;
    pcourse_node->total_stu_num = 0;

    int i = 0, j =0, op = 0;
    char prof_name[12], curi_name[30];
    int num_of_week, start_class, end_class;

    if(pcourse_node)
    {
        getchar();
        printf("����������ӵĿ���id:\n");
        scanf("%s", pcourse_node->course_id);
    }
    else
    {
        printf("����ռ�ʧ��!");
        return;
    }

    //��ʼ��������Ϣ
    Initarray(pcourse_node);

    if(SeekCourse(course_hd, pcourse_node->course_id)!=NULL)        //��ֹ����id�غ�
    {
        printf("�������id�Ѵ��ڣ�\n");
        free(pcourse_node);
        return;
    }
    else
    {
        printf("��������ö�Ӧ�γ�����:");
        getchar();
        scanf("%s", curi_name);     //��ʱ�洢������,�Դ����
        if(!(pcuri_node=SeekCuri(gp_curi_head, curi_name)))
        {
            printf("�ÿγ̲�����!\n");
            free(pcourse_node);
            return;
        }
        strcpy(pcourse_node->course_curi_name, curi_name);

        printf("��������õĽ�ʦ����:");
        getchar();
        scanf("%s", prof_name);     //��ʱ�洢������,�Դ����
        if(!(pprof_node=SeekProf(gp_prof_head, prof_name)))
        {
            printf("�ý�ʦ������!\n");
            free(pcourse_node);
            return;
        }
        strcpy(pcourse_node->course_prof_name, prof_name);

        i = 0;
        int firstsubstr = 1;
        printf("�밴��ʾ�����Ͽ�ʱ���:\n");
        while(1)
        {
            int day_num = 0;
            printf("������ֶ��Ͽ����ڣ�(��1~5��������1~5):\n");
            char classes[20] = {'\0'};
            getchar();
            scanf("%s", classes);
            if(!DealString1(classes, &pcourse_node->course_term_period[i][0], &pcourse_node->course_term_period[i][1]))
            {
                printf("��������!\n");
                InfoReturn();
                free(pcourse_node);
                return;
            }
            //scanf("%s", &pcourse_node->course_term_period[i][0], &pcourse_node->course_term_period[i][1]);
            num_of_week=pcourse_node->course_term_period[i][1]-pcourse_node->course_term_period[i][0]+1;      //�����Ͽ������е�����

            printf("������������ڵ��Ͽ�������:(��1,2,4������һ�ܶ��������Ͽ�)\n");
            char week_date[15] = {'\0'};
            getchar();
            scanf("%s", week_date);
            if(!DealString3(week_date, pcourse_node->course_week_period[i]))
            {
                printf("��������!\n");
                InfoReturn();
                free(pcourse_node);
                return;
            }
            //getchar();
            //scanf("%d/%d/%d/%d/%d/%d", &pcourse_node->course_week_period[i][0], &pcourse_node->course_week_period[i][1], &pcourse_node->course_week_period[i][2], &pcourse_node->course_week_period[i][3], &pcourse_node->course_week_period[i][4], &pcourse_node->course_week_period[i][5]);
            //����������һ���ڵ��Ͽ�����
            for(day_num=0; pcourse_node->course_week_period[i][day_num]!=0; day_num++) ;

            printf("�밴������ÿһ����Ͽ�ʱ�κͽ���:\n");
            pcourse_node->term_period++;
            pcourse_node->day_period[i] = day_num;      //��i-1���Ͽ�������ÿ���Ͽε�����
            for(j=0; j<day_num; j++)
            {
                int date = pcourse_node->course_week_period[i][j];
                printf("��������%d���Ͽ�ʱ���:(��1~4�����һ���Ľڿ�)\n", date);
                char room_name[30] = {'\0'};
                char period[10]={'\0'};
                getchar();
                scanf("%s", period);
                if(!DealString1(period, &pcourse_node->course_day_period[i][j][0], &pcourse_node->course_day_period[i][j][1]))
                {
                    printf("��������!\n");
                    InfoReturn();
                    free(pcourse_node);
                    return;
                }
                if(pcourse_node->course_day_period[i][j][0]<1||pcourse_node->course_day_period[i][j][0]>12
                    ||pcourse_node->course_day_period[i][j][1]<1||pcourse_node->course_day_period[i][j][1]>12)
                {
                    printf("����ʱ��Խ��!\n");
                    InfoReturn();
                    free(pcourse_node);
                    return;
                }
                start_class = pcourse_node->course_day_period[i][j][0];
                end_class = pcourse_node->course_day_period[i][j][1];

                printf("�������ʱ����ڵĽ���:");
                getchar();
                scanf("%s", room_name);
                //�������Ľ����ַ���
                if(!(proom_node=SeekRoom(gp_room_head, room_name)))
                {
                    printf("����ʧ�ܣ����ȴ������ҵĻ�����Ϣ");
                    InfoReturn();   //��Ϣ�ع�,ʹ�ý��ң��༶����Ϣ�ع����֮ǰ��״̬
                    free(pcourse_node);
                    return;
                }
                COURSE_NODE *course_temp = course_hd->next;
                while(course_temp)
                {
                    if(ContraRoom(proom_node, pcourse_node, course_temp))
                    {
                        printf("ʱ���ͻ!\n");
                        InfoReturn();   //��Ϣ�ع�,ʹ�ý��ң��༶����Ϣ�ع����֮ǰ��״̬
                        free(pcourse_node);
                        return;
                    }
                    course_temp = course_temp->next;
                }
                //���ŷָ��ַ���
                if(firstsubstr==1)
                {
                    strcpy(pcourse_node->course_room_name, room_name);
                    firstsubstr=0;
                }
                else
                {
                    strcat(pcourse_node->course_room_name, ",");
                    strcat(pcourse_node->course_room_name, room_name);
                }
                //������Ϊ���ý�����ɵĽ�����Ϣ�ı�
                UpdateRoomUseTime(proom_node, num_of_week, start_class, end_class);
                if(pcourse_node->course_term_period[i][1]>=18)
                {
                    proom_node->winter_use_time+=(pcourse_node->course_term_period[i][1]-18+1)*(end_class-start_class+1);
                }
                if(pcourse_node->course_term_period[i][0]<=2)
                {
                    proom_node->summer_use_time+=(2-pcourse_node->course_term_period[i][0]+1)*(end_class-start_class+1);
                }
            }
            i++;

            printf("�Ƿ�Ҫ���������Ͽ�ʱ��Σ�(0����Ҫ��1����Ҫ)");
            getchar();
            scanf("%d", &op);
            if(!op)
                break;
        }
        pcourse_node->term_period = i;      //�����Ͽ�������Ŀ

        printf("������������ɵİ༶��Ŀ:");
        getchar();
        scanf("%d", &pcourse_node->course_class_num);

        printf("����������༶������(���س��ָ�):\n");
        for(i=0; i<pcourse_node->course_class_num; i++)
        {
            char class_name[30] = {'\0'};
            getchar();
            scanf("%s", class_name);
            if(!(pclass_node=SeekClass(gp_class_head, class_name)))
            {
                printf("���ȴ����༶�Ļ�����Ϣ!\n");
                InfoReturn();   //��Ϣ�ع�,ʹ�ý��ң��༶����Ϣ�ع����֮ǰ��״̬
                free(pcourse_node);
                return;
            }
            //�޸İ༶�Ͽ�ʱ�����Ϣ
            UpdateClassUseTime(pclass_node, pcourse_node);

            strcpy(pcourse_node->course_class_name[i], class_name);
            pcourse_node->total_stu_num+=pclass_node->class_stu_amount;    //�������������
        }

        FormatPrint(pcourse_node);
        pcourse_node->next = course_hd->next;
        course_hd->next = pcourse_node;

        //����õ��޸Ķ������������ֽ�����Ϣ�޸�
        pcuri_node->course_num++;                       //�޸�һ�ſγ��µĿ�����Ŀ
        pprof_node->prof_hours+=pcuri_node->hours;      //������ú��޸���Ӧ��ʦ�Ĺ���ʱ��
        pprof_node->prof_num_course++;                  //�޸Ľ�ʦ�Ľ�ѧ������Ŀ

        printf("����ɹ�!\n");
        InsertCrossList(pcourse_node);                  //�������Ŀ��ý����뵽�ڽӱ���

        SaveClassNode(gp_class_head);                   //����༶��Ϣ
        SaveRoomNode(gp_room_head);                     //���������Ϣ
        SaveCuriNode(gp_curi_head);                     //����γ���Ϣ
        SaveProfNode(gp_prof_head);                     //�����ʦ��Ϣ

        return;
    }
}

/**
* �������ƣ�FormatPrint
* ����������pcourse_node ���������ָ��
* �������ܣ���ʽ�����������Ϣ
* ����ֵ����
**/
void FormatPrint(COURSE_NODE *pcourse_node)
{
    int i;
    char temp[100] = {'\0'};    //�����ʹ��temp,��ôpcourse_node->course_room_name��������
    strcpy(temp, pcourse_node->course_room_name);
    char *room_name = temp;
    char *split;

    printf("����id:%s\n", pcourse_node->course_id);
    printf("�γ�����:%s\n", pcourse_node->course_curi_name);
    printf("��������:%s\n", pcourse_node->course_prof_name);
    printf("�༶����:");
    for(i=0; i<pcourse_node->course_class_num; i++)
    {
        printf("%s ", pcourse_node->course_class_name[i]);
    }
    printf("�Ͽ�����Ϊ��\n");
    for (i=0; i<pcourse_node->term_period; i++)
    {
        int j = 0;
        if(pcourse_node->course_term_period[i][0]!=pcourse_node->course_term_period[i][1])
        {
            printf("%d-%d", pcourse_node->course_term_period[i][0], pcourse_node->course_term_period[i][1]);
            printf("�� ");
            while((j<pcourse_node->day_period[i]))
            {
                split = strtok(room_name, ",");
                printf("��");
                printf("%d ", pcourse_node->course_week_period[i][j]);
                printf("��");
                printf("%d-%d�� ", pcourse_node->course_day_period[i][j][0], pcourse_node->course_day_period[i][j][1]);
                printf("��%s����", split);
                printf("\n");
                room_name = NULL;
                j++;
            }
        }
        else
        {
            printf("%d", pcourse_node->course_term_period[i][0]);
            printf("�� ");
            while((j<pcourse_node->day_period[i]))
            {
                split = strtok(room_name, ",");
                printf("��");
                printf("%d ", pcourse_node->course_week_period[i][j]);
                printf("��");
                printf("%d-%d�� ", pcourse_node->course_day_period[i][j][0], pcourse_node->course_day_period[i][j][1]);
                printf("��%s����", split);
                printf("\n");
                room_name = NULL;
                j++;
            }
        }
    }
    printf("\n");
    return;
}

/**
* �������ƣ�InsertCourseWithoutInput
* ����������pcourse_node ��������������ָ��
* �������ܣ�������ý��
* ����ֵ����
**/
void InsertCourseWithoutInput(COURSE_NODE *pcourse_node)
{
    int i,j,num_of_week,start_class,end_class;
    PROF_NODE *pprof_node = SeekProf(gp_prof_head, pcourse_node->course_prof_name);
    CURI_NODE *pcuri_node = SeekCuri(gp_curi_head, pcourse_node->course_curi_name);
    COURSE_NODE *course_hd = gp_course_head;
    COURSE_NODE *course_temp = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
    CLASS_NODE *pclass_node = (CLASS_NODE *)malloc(sizeof(CLASS_NODE));

    cpycoursenode(course_temp, pcourse_node);   //����pcourse_node��������Ϣ
    //�޸Ŀγ���Ϣ
    pcuri_node->course_num++;
    pprof_node->prof_hours+=pcuri_node->hours;
    pprof_node->prof_num_course++;  //�޸Ľ�ʦ��ִ�̿�����Ŀ

    char temp[100] = {'\0'};
    strcpy(temp, pcourse_node->course_room_name);
    char *room_name = temp;
    char *split;
    for(i=0;i<pcourse_node->term_period;i++)
    {
        num_of_week = pcourse_node->course_term_period[i][1]-pcourse_node->course_term_period[i][0]+1;
        for(j=0;j<pcourse_node->day_period[i];j++)
        {
            start_class = pcourse_node->course_day_period[i][j][0];
            end_class = pcourse_node->course_day_period[i][j][1];
            split = strtok(room_name, ",");
            ROOM_NODE *proom_node = SeekRoom(gp_room_head, split);
            room_name = NULL;
            //�޸Ľ�����Ϣ
            UpdateRoomUseTime(proom_node, num_of_week, start_class, end_class);
            if(pcourse_node->course_term_period[i][1]>=18)
            {
                proom_node->winter_use_time+=(pcourse_node->course_term_period[i][1]-18+1)*(end_class-start_class+1);
            }
            if(pcourse_node->course_term_period[i][0]<=2)
            {
                proom_node->summer_use_time+=(2-pcourse_node->course_term_period[i][0]+1)*(end_class-start_class+1);
            }
        }
    }

    pcourse_node->total_stu_num = 0;
    for(i=0; i<pcourse_node->course_class_num; i++) //���������޸İ༶��Ϣ
    {
        pclass_node = SeekClass(gp_class_head, pcourse_node->course_class_name[i]);
        UpdateClassUseTime(pclass_node, pcourse_node);
        pcourse_node->total_stu_num+=pclass_node->class_stu_amount;
    }
    pcourse_node->next = course_hd->next;
    course_hd->next = pcourse_node;

    InsertCrossList(pcourse_node);  //���뵽ÿ���ڽӱ���
    //�����޸ĵ���Ϣ
    SaveClassNode(gp_class_head);
    SaveRoomNode(gp_room_head);
    SaveCuriNode(gp_curi_head);
    SaveProfNode(gp_prof_head);

    return;
}

/**
* �������ƣ�InsertCrossList
* ����������pcourse_node �ȴ����뵽�ڽӱ��еĿ��ý��ָ��
* �������ܣ������ý����뵽���ڽӱ���
* ����ֵ����
**/
void InsertCrossList(COURSE_NODE *pcourse_node)
{
    int i,j;
    //�����ʦ-�����ڽӱ�
    PROF_NODE *pprof_node = SeekProf(gp_prof_head, pcourse_node->course_prof_name); //��λ�����ڿ��õĽ�ʦ�Ľ��
    COURSE_NODE *course_prof = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
    cpycoursenode(course_prof, pcourse_node);   //�����ý�����ָ�������������Ϣ���Ƶ���������
    course_prof->next = pprof_node->firstarc;   //�޸�ָ����
    pprof_node->firstarc = course_prof;
    //����༶-�����ڽӱ�
    for(i=0; i<pcourse_node->course_class_num; i++)
    {
        COURSE_NODE *course_class = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
        CLASS_NODE *pclass_node = SeekClass(gp_class_head, pcourse_node->course_class_name[i]);
        cpycoursenode(course_class, pcourse_node);  //�����ý�����ָ�������������Ϣ���Ƶ���������
        //�޸�ָ����
        course_class->next = pclass_node->firstarc;
        pclass_node->firstarc = course_class;
    }
    //�������-�����ڽӱ�
    char *split;
    char temp[100] = {'\0'};
    char check[100] = {'\0'};
    strcpy(temp, pcourse_node->course_room_name);
    char *room_name = temp;
    for(i=0; i<pcourse_node->term_period; i++)
    {
        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            split = strtok(room_name, ",");
            if(strstr(check,split))
                continue;
            strcat(check ,split);
            COURSE_NODE *course_room = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
            ROOM_NODE *proom_node = SeekRoom(gp_room_head, split);
            cpycoursenode(course_room, pcourse_node);
            //�޸�ָ����
            course_room->next = proom_node->firstarc;
            proom_node->firstarc = course_room;
            room_name = NULL;
        }
    }
    return;
}

/**
* �������ƣ�UpdateRoomUseTime
* ����������proom_node �ȴ����µĽ��ҽ��ָ��
            num_of_week �ڸý��ҵĿ��ó�������
            start_class �ڸý��ҵĿ��ÿ�ʼ�ϿεĽ���
            end_class �ڸý��ҵĿ����¿εĽ���
* �������ܣ�������ý�����½�����Ϣ���İ����ҹ���ܵ�ʹ��ʱ��
* ����ֵ����
**/
void UpdateRoomUseTime(ROOM_NODE * proom_node, int num_of_week, int start_class, int end_class)
{
    if(start_class>=9)
    {
        proom_node->night_use_time += num_of_week*(end_class-start_class+1);
    }
    else if(end_class<=8)
    {
        proom_node->day_use_time += num_of_week*(end_class-start_class+1);
    }
    else
    {
        proom_node->day_use_time += num_of_week*(8-start_class+1);
        proom_node->night_use_time += num_of_week*(end_class-9+1);
    }
    proom_node->total_use_time += num_of_week*(end_class-start_class+1);
    //printf("\n���ƣ�%s����%d��ҹ%d\n", proom_node->room_name, proom_node->day_use_time, proom_node->night_use_time);
    return;
}

/**
* �������ƣ�UpdateClassUseTime
* ����������pclass_node �ȴ����µİ༶���ָ��
            pcourse_node �²���Ŀ��ý��ָ��
* �������ܣ�������ý�����°༶��Ϣ��������
* ����ֵ����
**/
void UpdateClassUseTime(CLASS_NODE * pclass_node, COURSE_NODE * pcourse_node)
{
    int i,j;
    //�����༶ĳ���õ��Ͽ�ʱ�䲢ͳ���������ĵ�ʱ��仯
    for(i=0; i<pcourse_node->term_period; i++)
    {
        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            int start_class = pcourse_node->course_day_period[i][j][0], end_class = pcourse_node->course_day_period[i][j][1];
            int num_of_week = pcourse_node->course_term_period[i][1]-pcourse_node->course_term_period[i][0]+1;
            if(start_class>=9)
            {
                pclass_node->night_class_hours += num_of_week*(end_class-start_class+1);
            }
            else if(end_class<=8)
            {
                pclass_node->day_class_hours += num_of_week*(end_class-start_class+1);
            }
            else
            {
                pclass_node->day_class_hours += num_of_week*(8-start_class+1);
                pclass_node->night_class_hours += num_of_week*(end_class-9+1);
            }
            if(pcourse_node->course_term_period[i][1]>=18)
            {
                int num_of_winter = pcourse_node->course_term_period[i][1]-18+1;


                pclass_node->winter_class_hours+=num_of_winter*(end_class-start_class+1);
            }
            if(pcourse_node->course_term_period[i][0]<=2)
            {
                int num_of_summer = 2-pcourse_node->course_term_period[i][0]+1;
                pclass_node->summer_class_hours += num_of_summer*(end_class-start_class+1);
            }
            //printf("\n���ƣ�%s����%d��ҹ%d\n", pclass_node->class_name, pclass_node->day_class_hours, pclass_node->night_class_hours);
        }
    }
    return;
}

/**
* �������ƣ�SeekCourse
* ����������course_name ���ȶԵĿγ�����,
            hd �γ����׽��ָ��
* �������ܣ����ҿγ���Ϣ�����Ƿ�����course_name������ѡ��
* ����ֵ������ʱ���ؽ��ĵ�ַ, ���򷵻�NULL
**/
COURSE_NODE * SeekCourse(COURSE_NODE * hd, char *course_id)
{
    COURSE_NODE *pcourse_node;
    int find = 0;

    if(!hd)
    {
        return NULL;
    }

    for (pcourse_node=hd; pcourse_node!=NULL; pcourse_node=pcourse_node->next)
    {
        if (strcmp(course_id, pcourse_node->course_id) == 0)
        {
            find = 1;
            break;
        }
    }
    if (find)
    {
        return pcourse_node;
    }
    else
    {
        return NULL;
    }
}

/**
 * �������ƣ�PriorCourseElem
 * �������������Ա�L��������ǰ�����Ŀ���id
 * �������ܣ�����ָ�����ý���ǰ�����
 * ����ֵ���ɹ��򷵻�ָ��ǰ�����ý���ָ�룬���򷵻�NULL
 **/
COURSE_NODE* PriorCourseElem(COURSE_NODE * L, char *course_id)
{
    COURSE_NODE* pcourse_node = L->next;              //����ָ��
    COURSE_NODE* pprior_node = L;                   //ǰ��ָ��
    if(SeekCourse(L, course_id)==NULL)
    {
        return NULL;
    }
    while (pcourse_node->next && strcmp(pcourse_node->course_id, course_id))    //��̲�Ϊ�ղ��ұ���ָ��ָ��Ԫ�طǲ���Ԫ��
    {
        pcourse_node = pcourse_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pcourse_node->next)&&strcmp(pcourse_node->course_id, course_id))       //���Ϊ���ұ���ָ��ָ��Ԫ�ػ��ǲ��ǲ���Ԫ��
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //����ָ��ǰ������ָ��
    }
}


/**
* �������ƣ�SaveCourseNode
* ����������course_hd ������ͷ���ָ��
* �������ܣ������������txt�ļ�
* ����ֵ������ɹ�����TRUE, ���򷵻�FALSE
**/
bool SaveCourseNode(COURSE_NODE * course_hd)
{
    int i=0, j=0, k=0;
    if(!course_hd)
    {
        printf("û�п��ô���!\n");
        return false;
    }
    course_hd = course_hd->next;
    COURSE_NODE *pcourse_node;
    FILE *pfout;    //�ļ�ָ��

    pfout = fopen(gp_course_info_filename, "w");
    if(!pfout)
    {
        printf("�����ļ�����ʧ�ܣ�\n");
        fclose(pfout);  //�ļ�ָ��ر�
        return false;
    }

    /*����������Ϣ��*/
    for (pcourse_node = course_hd; pcourse_node != NULL; pcourse_node = pcourse_node->next)
    {
        /*���������Ϣ*/
        fprintf(pfout, "%s\t", pcourse_node->course_id);
        fprintf(pfout, "%s\t", pcourse_node->course_curi_name);
        fprintf(pfout, "%s\t", pcourse_node->course_prof_name);
        fprintf(pfout, "%d\t", pcourse_node->course_class_num);
        /*����������Ϣ���еİ༶������*/
        for(i=0; i<pcourse_node->course_class_num; i++)
        {
            fprintf(pfout, "%s\t", pcourse_node->course_class_name[i]);
        }
        fprintf(pfout, "%d\t", pcourse_node->term_period);
        for(i=0; i<5; i++)
        {
            for(j=0; j<6; j++)
            {
                fprintf(pfout,"%d\t", pcourse_node->course_week_period[i][j]);
            }
        }
        /*�������������Ϣ�����Ͽ���ֹ����*/
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                for(k=0; k<2; k++)
                    fprintf(pfout,"%d\t", pcourse_node->course_day_period[i][j][k]);
            }
        }
        for(i=0; i<5; i++)
        {
            for(j=0; j<2; j++)
            {
                fprintf(pfout, "%d\t", pcourse_node->course_term_period[i][j]);
            }
        }
        for(i=0; i<5; i++)
        {
            fprintf(pfout, "%d\t", pcourse_node->day_period[i]);
        }
        fprintf(pfout, "%s\t", pcourse_node->course_room_name);
        fprintf(pfout, "%d\t", pcourse_node->total_stu_num);
        fprintf(pfout, "\n");
    }
    fclose(pfout);  //�ļ�ָ��ر�
    return true;
}

/**
* �������ƣ�CreateCourseList
* ����������course_hd ������ͷ���ָ��
* �������ܣ�����γ�����txt�ļ�
* ����ֵ������ɹ�������β���ָ��, ���򷵻�NULL
**/
COURSE_NODE* CreateCourseList(COURSE_NODE *course_hd)
{
    int ret = 0, i = 0, j = 0, k = 0;
    COURSE_NODE * pcourse_node = NULL, * pprior_course_node = NULL;

    FILE *course_write = fopen("Course.txt", "r+");
    if(!course_write)
    {
        printf("���ļ�ʧ�ܣ�\n");
        fclose(course_write);   //�ر��ļ�
        return NULL;
    }

    pprior_course_node = course_hd;

    while (!feof(course_write)) //ɨ���ļ����ļ�β��
    {
        pcourse_node = (COURSE_NODE*)malloc(sizeof(COURSE_NODE));
        ret = fscanf(course_write, "%s", pcourse_node->course_id);
        if(ret == -1) break;
        fscanf(course_write, "%s", pcourse_node->course_curi_name);
        fscanf(course_write, "%s", pcourse_node->course_prof_name);
        fscanf(course_write, "%d", &pcourse_node->course_class_num);
        for(i=0; i<pcourse_node->course_class_num; i++)
        {
            fscanf(course_write, "%s", pcourse_node->course_class_name[i]);
        }
        fscanf(course_write, "%d", &pcourse_node->term_period);
        for(i=0; i<5; i++)
        {
            for(j=0; j<6; j++)
            {
                fscanf(course_write,"%d", &pcourse_node->course_week_period[i][j]);
            }
        }
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                for(k=0; k<2; k++)
                    fscanf(course_write,"%d", &pcourse_node->course_day_period[i][j][k]);
            }
        }
        for(i=0; i<5; i++)
        {
            for(j=0; j<2; j++)
            {
                fscanf(course_write, "%d", &pcourse_node->course_term_period[i][j]);
            }
        }
        for(i=0; i<5; i++)
        {
            fscanf(course_write, "%d", &pcourse_node->day_period[i]);
        }
        fscanf(course_write, "%s", pcourse_node->course_room_name);
        fscanf(course_write, "%d", &pcourse_node->total_stu_num);

        pprior_course_node->next = pcourse_node;
        pprior_course_node = pprior_course_node->next;
        pcourse_node->next = NULL;
    }
    fclose(course_write);   //�ر��ļ�
    return pcourse_node;
}

/**
* �������ƣ�SearchCourseNodeByProf
* ����������prof_hd ��ʦ����ͷ���ָ��
* �������ܣ����ݽ�ʦ���ҿ���
* ����ֵ�����ҳɹ�����true,����ʧ�ܷ���false
**/
bool SearchCourseNodeByProf(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[30];

    printf("��������Ҫ���ҵĽ�ʦ����\n");
    getchar();
    scanf("%s", prof_name);
    pprof_node = SeekProf(prof_hd, prof_name);  //���ҽ�ʦ��Ϣ
    if(!pprof_node)     //��ʦ��Ϣָ�벻Ϊ��
    {
        printf("���ҽ�ʦʧ��\n");
        return false;
    }

    COURSE_NODE * pcourse_node = pprof_node->firstarc;
    if(!pcourse_node)   //�����ʦ������һ�����ý�㶼û��
    {
        printf("�ý�ʦ���е��ڿ�����\n");
        return false;
    }
    while(pcourse_node)
    {
        FormatPrint(pcourse_node);
        pcourse_node = pcourse_node->next;
    }
    return true;
}

/**
* �������ƣ�SearchCourseNodeByRoom
* ����������room_hd ���ҽ����ͷָ��
* �������ܣ����ݽ���������������Ŀ�����Ϣ
* ����ֵ�����ҳɹ�����true,���򷵻�false
**/
bool SearchCourseNodeByRoom(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];

    printf("��������Ҫ���ҵĽ�������\n");
    getchar();
    scanf("%s", room_name);
    proom_node = SeekRoom(room_hd, room_name);
    if(!proom_node)
    {
        printf("���ҽ���ʧ��\n");
        return false;
    }

    COURSE_NODE * pcourse_node = proom_node->firstarc;

    if(!pcourse_node)
    {
        printf("�ý�����û�п���\n");
        return false;
    }
    while(pcourse_node) //����������Ϣ�������
    {
        //printf("����idΪ%s\n����������Ϊ:%d\n", pcourse_node->course_id, pcourse_node->total_stu_num);
        FormatPrint(pcourse_node);
        pcourse_node = pcourse_node->next;
    }
    return true;
}

/**
* �������ƣ�SearchCourseNodeByCuri
* ����������curi_hd �γ���Ϣͷ���ָ��,
* �������ܣ����ݿγ������ҿ�����Ϣ
* ����ֵ������ʱ���������Ϣ,���򷵻�NULL
**/
bool SearchCourseNodeByCuri(CURI_NODE * curi_hd)
{
    CreateCourseList(gp_course_head);
    CreateCuriList(gp_curi_head);

    CURI_NODE *pcuri_node;
    char curi_name[30];
    int find = 0;

    printf("��������Ҫ���ҵĿγ�����\n");
    getchar();
    scanf("%s", curi_name);
    pcuri_node = SeekCuri(curi_hd, curi_name);  //���γ��Ƿ����
    if(!pcuri_node)     //�γ̽��Ϊ��
    {
        printf("���ҿγ�ʧ��\n");
        return false;
    }

    COURSE_NODE * pcourse_node = gp_course_head;
    while(pcourse_node)     //�������ý��
    {
        if(strcmp(pcourse_node->course_curi_name, curi_name)==0)
        {
            find = 1;
            //printf("����idΪ%s\n����������Ϊ:%d\n", pcourse_node->course_id, pcourse_node->total_stu_num);
            FormatPrint(pcourse_node);
        }
        pcourse_node = pcourse_node->next;
    }
    if(find)
        return true;
    else
    {
        printf("���ҿγ�ʧ��!");
        return false;
    }
}

/**
* �������ƣ�SearchCourseNodeByTime
* ����������course_node ���ý��ָ��
* �������ܣ����������ʱ����ҿ���
* ����ֵ������ʱ���������Ϣ, ���򷵻�NULL
**/
bool SearchCourseNodeByTime(COURSE_NODE * course_node)
{
    CreateCourseList(gp_course_head);

    COURSE_NODE *pcourse_node = gp_course_head->next;
    ROOM_NODE *proom_node;
    int week, date, start_class = 0, end_class = 0;
    char temp;
    int find = 0;

    printf("��������Ҫ���ҵ��ܴ�(���7��������7)\n");
    getchar();
    scanf("%d", &week);
    printf("��������Ҫ���ҵ�����(������������3)\n");
    getchar();
    scanf("%d", &date);
    printf("��������Ҫ���ҵĽ�����~�ָ�(���1~4��������1~4,��1��������1\n");
    getchar();
    scanf("%d%c", &start_class, &temp);
    if(temp=='~')
    {
        scanf("%d", &end_class);
    }
    else
        end_class = start_class;

    while(pcourse_node)
    {
        if((proom_node=TimeIn(pcourse_node, week, date, start_class, end_class)))
        {
            FormatPrint(pcourse_node);
            //printf("%s ", pcourse_node->course_id);
            printf("\n");
            //printf("��ʱ�����%s\n", proom_node->room_name);
            find = 1;
        }
        pcourse_node = pcourse_node->next;
    }
    if(find)
        return true;
    else
    {
        printf("���ҿγ�ʧ��!");
        return false;
    }
}

/**
* �������ƣ�TimeIn
* ����������pcourse_node ���ý��ָ��
             week �������ڵ�����
             date ����һ�����ܼ�
             start_class
* �������ܣ���txt�ļ��ж�ȡ�γ�����Ϣ�������γ�������
* ����ֵ���������ʱ��������ʱ���ͻ,�򷵻ؿ��õĽ��ҽ��ָ�룬���򷵻�NULL
**/
ROOM_NODE* TimeIn(COURSE_NODE * pcourse_node, int week, int date, int start_class, int end_class)
{
    int i, j;
    bool condi1 = false, condi2 = false;    //�����ͻ����Ҫ������������

    char temp[100] = {'\0'};    //�����ʹ��temp�н�,��ôpcourse_node->course_room_name��������
    strcpy(temp, pcourse_node->course_room_name);
    char *room_name = temp;
    char *split;
    for(i=0; i<pcourse_node->term_period; i++)
    {
        if(pcourse_node->course_term_period[i][0]<=week
                && week<=pcourse_node->course_term_period[i][1])    //������ܴ��Ƿ��ڿ��õĿ�����������
            condi1 = true;
        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            split = strtok(room_name, ",");
            ROOM_NODE *proom_node = SeekRoom(gp_room_head, split);
            room_name = NULL;
            //�����õ��Ͽ������Ƿ��date��ͬ
            if(pcourse_node->course_week_period[i][j]==date)
            {
                //�����õ���ֹ�����Ƿ��ڷ�Χ��
                if((start_class>=pcourse_node->course_day_period[i][j][0]&&start_class<=pcourse_node->course_day_period[i][j][1])
                        ||(end_class>=pcourse_node->course_day_period[i][j][0]&&end_class<=pcourse_node->course_day_period[i][j][1]))
                    condi2 = true;
            }
            //�������������㣬���ش�ʱ�������ڵĽ�����Ϣ
            if(condi1&&condi2)
                return proom_node;
        }
    }
    return NULL;    //����ʧ�ܷ���NULL
}


/**
* �������ƣ�SearchCourseNodeByClass
* ����������class_hd �༶���׽��ָ��
* �������ܣ���������İ༶������Ӧ�Ŀ���
* ����ֵ������ʱ���������Ϣ, ���򷵻�NULL
**/
bool SearchCourseNodeByClass(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];

    printf("��������Ҫ���ҵİ༶��\n");
    getchar();
    scanf("%s", class_name);
    pclass_node = SeekClass(class_hd, class_name);  //���Ҷ�Ӧ�İ༶���
    if(!pclass_node)
    {
        printf("���Ұ༶ʧ��\n");
        return false;
    }

    COURSE_NODE *pcourse_node = pclass_node->firstarc;

    if(!pcourse_node)
    {
        printf("�ð༶δ�������\n");
        return false;
    }
    while(pcourse_node)
    {
        //printf("����idΪ%s\n����������Ϊ:%d\n", pcourse_node->course_id, pcourse_node->total_stu_num);
        FormatPrint(pcourse_node);
        pcourse_node = pcourse_node->next;
    }
    return true;
}

/**
* �������ƣ�Exit
* ������������
* �������ܣ��ͷ��ڴ棬�˳�ϵͳ
* ����ֵ����
**/
void Exit(void)
{
    COURSE_NODE * pcourse_node = gp_course_head, *qcourse_node = NULL;
    CLASS_NODE * pclass_node = gp_class_head, *qclass_node = NULL;
    ROOM_NODE * proom_node = gp_room_head, *qroom_node = NULL;
    PROF_NODE * pprof_node = gp_prof_head, *qprof_node = NULL;
    CURI_NODE * pcuri_node = gp_curi_head, *qcuri_node = NULL;

    while(pcourse_node)
    {
        qcourse_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        free(qcourse_node);
        qcourse_node = NULL;
    }
    //printf("�����ڴ��ͷ����\n");

    while(pcuri_node)
    {
        qcuri_node = pcuri_node;
        pcuri_node = pcuri_node->next;
        free(qcuri_node);
        qcuri_node = NULL;
    }
    //printf("�γ��ڴ��ͷ����\n");

    while(pclass_node)
    {
        COURSE_NODE * qqcourse_node = NULL;
        qclass_node = pclass_node;
        if(pclass_node->next)
            return;
        pclass_node = pclass_node->next;
        qcourse_node = pclass_node->firstarc;
        while(qcourse_node)
        {
            qqcourse_node = qcourse_node;
            qcourse_node = qcourse_node->next;
            free(qqcourse_node);
            qqcourse_node = NULL;
        }
        free(qclass_node);
        qclass_node = NULL;
    }
    //printf("�༶�ڴ��ͷ����\n");

    //������ʦ��Ϣ����
    while(pprof_node)
    {
        COURSE_NODE * qqcourse_node = NULL;
        qprof_node = pprof_node;
        if(pprof_node->next)
            return;
        pprof_node = pprof_node->next;
        qcourse_node = pprof_node->firstarc;
        //ɾ����ʦ�������Ŀ��������
        while(qcourse_node)
        {
            qqcourse_node = qcourse_node;
            qcourse_node = qcourse_node->next;
            free(qqcourse_node);
            qqcourse_node = NULL;
        }
        free(qprof_node);
        qprof_node = NULL;
    }

    //����������Ϣ����
    while(proom_node)
    {
        COURSE_NODE * qqcourse_node = NULL;
        qroom_node = proom_node;
        if(proom_node->next)
            return;
        proom_node = proom_node->next;
        qcourse_node = pclass_node->firstarc;
        while(qcourse_node)
        {
            qqcourse_node = qcourse_node;
            qcourse_node = qcourse_node->next;
            free(qqcourse_node);
        }
        free(qroom_node);
        qroom_node->next = NULL;
    }
    //printf("�ڴ��ͷ����\n");
    getchar();
    return;
}

/**
* �������ƣ�InfoReturn
* ������������
* �������ܣ���Ϣ�ع�
* ����ֵ����
**/
void InfoReturn(void)
{
    CreateClassList(gp_class_head);
    CreateCuriList(gp_curi_head);
    CreateProfList(gp_prof_head);
    CreateRoomList(gp_room_head);
}

/**
* �������ƣ�NewOldProf
* ����������prof_hd ��ʦͷ���ָ��
* �������ܣ�������Ͻ�ʦ�������û�ѡ��
* ����ֵ����
**/
void NewOldProf(PROF_NODE *prof_hd)
{
    char prof_name[12];
    printf("���Ͻ�ʦ��������:\n");
    PROF_NODE *pprof_node = prof_hd->next;
    while(pprof_node)
    {
        if(pprof_node->age<31)
        {
            printf(" %-12s\t�½�ʦ\t%d��\n", pprof_node->prof_name, pprof_node->age);
        }
        else if(pprof_node->age>50)
        {
            printf(" %-12s\t�Ͻ�ʦ\t%d��\n", pprof_node->prof_name, pprof_node->age);
        }
        pprof_node=pprof_node->next;
    }
    printf("��������Ҫ���������Ͻ�ʦ����:\n");
    getchar();
    scanf("%s", prof_name);
    if(!(pprof_node = SeekProf(prof_hd, prof_name)))
    {
        printf("�ý�ʦ������\n");
        return;
    }
    if(pprof_node->age<51&&pprof_node->age>30)  //��ʦΪ�����ʦ
    {
        printf("�ý�ʦ�������ʦ\n");
        return;
    }
    if(pprof_node->age>50)
    {
        OldAnalysis(pprof_node);
    }
    else
    {
        NewAnalysis(pprof_node);
    }
    return ;
}

/**
* �������ƣ�NewAnalysis
* ����������pprof_node �½�ʦ���ָ��
* �������ܣ������½�ʦ�İ��ſ������
* ����ֵ����
**/
void NewAnalysis(PROF_NODE * pprof_node)
{
    if(pprof_node->prof_num_course>3)   //�½�ʦ���ڿ��ô�������
    {
        printf("���½�ʦ����%d�����ã��е���ѧ�������\n", pprof_node->prof_num_course);
        return;
    }
    else
    {
        printf("���½�ʦ����%d�����ã��е���ѧ�������\n", pprof_node->prof_num_course);
        return;
    }
}

/**
* �������ƣ�OldAnalysis
* ����������pprof_node �Ͻ�ʦ���ָ��
* �������ܣ������Ͻ�ʦ�Ľ�ѧѧʱ,��¥����
* ����ֵ����
**/
void OldAnalysis(PROF_NODE *pprof_node)
{
    int floor_sum = 0;      //����¥������
    int class_time = 0;     //������Ŀ
    float avg_floor = 0;    //ƽ������¥����
    int existhigh = 0;      //��־�������жϸ�¥������Ƿ����
    char highfloor[100] = {'\0'};   //����������õĸ�¥���������
    int i,j;
    COURSE_NODE *pcourse_node = pprof_node->firstarc;   //pcourse_nodeָ��������Ͻ�ʦ�Ŀ���֧��
    //������������
    while(pcourse_node)
    {
        char temp[100] = {'\0'};    //����ÿ�����õĽ��������ַ���
        strcpy(temp, pcourse_node->course_room_name);
        char *room_name = temp;
        char *split;
        int firsttime = 0;  //��־����
        for(i=0; i<pcourse_node->term_period; i++)
        {
            for(j=0; j<pcourse_node->day_period[i]; j++)
            {
                class_time++;
                split = strtok(room_name, ",");
                if(firsttime==0&&DealString2(split)>2)
                {
                    existhigh = 1;
                    firsttime = 1;
                    strcat(highfloor, pcourse_node->course_id);
                    strcat(highfloor, "  ");
                }
                floor_sum+=DealString2(split);
                room_name = NULL;
            }
        }
        pcourse_node = pcourse_node->next;
    }
    avg_floor = floor_sum*1.0/class_time;   //�����Ͻ�ʦƽ��ÿ������Ҫ�ϼ���¥
    if(pprof_node->prof_hours>60)
    {
        printf("���Ͻ�ʦ�Ľ�ѧѧʱ�ﵽ��%.1f�����ʵ��������ѧʱ��\n", pprof_node->prof_hours);
    }
    //���������Ϣ
    if(existhigh)
    {
        printf("���Ͻ�ʦƽ��ÿ���Ͽ�Ҫ��%.1f��¥���뾡��ʹ�Ͻ�ʦ�ڵ�¥������Ͽ�\n", avg_floor);
        printf("ʹ�ø��Ͻ�ʦ��¥3�����ϵĿ���id��:\n");
        printf("%s\n", highfloor);
        printf("�뾡���޸�");
    }
    return;
}

/**
* �������ƣ�DealString2
* ����������split ԭ�����ý���еĽ�����Ϣ�ַ���
* �������ܣ��������������ڴ����ַ���
* ����ֵ��ÿ���������ڵ�¥����
**/
int DealString2(char *split)
{
    while(*split)
    {
        split++;    //�ַ���ָ�����
        if((*split)<='9'&&(*split)>='1')
            return ((*split)-'1');
    }
    return -1;
}

/**
* �������ƣ�DealString3
* ����������String �Ͽ������ַ���
            a ����Ͽ����ڵ�����
* �������ܣ��������������ڴ����ַ���
* ����ֵ����������ʽ��ȷ����true�����򷵻�false
**/
bool DealString3(char *String, int *a)
{
	int i = 0;
	for(i=0;i<6;i++)
		a[i]=0;
	int shouldbenum = 1;
	int dot_num = 0;
	char *temp = String;
	//�ж������Ƿ���Ϲ淶
	while (*temp)
	{
		if(shouldbenum==1&&(!isdigit(*temp)))
			return false;
		if(((*temp)!=',')&&(!isdigit(*temp)))
			return false;
		if((*temp)==',')
		{
			dot_num++;
			shouldbenum = 1;
		}
		if(isdigit(*temp))
		{
			shouldbenum = 0;
		}
		temp++;
	}
	int count = dot_num+1;
	temp = String;
	char *split;
	for(i=0; i<count; i++)
	{
		split = strtok(temp, ",");
		a[i] = atoi(split);
		temp = NULL;
	}
	return true;
}

/**
* �������ƣ�ContraRoom
* ����������proom_node ���ҽ��
            pcourse_node ���ý��
* �������ܣ��жϽ��ҺͿ����Ƿ����ʱ���ͻ
* ����ֵ�����������ͻ�򷵻�true�����򷵻�false
**/
bool ContraRoom(ROOM_NODE *proom_node, COURSE_NODE *pcourse_node, COURSE_NODE *course_temp)
{
    //char temp[100] = {'\0'};
    //strcpy(temp, pcourse_node->course_room_name);
    //char *room_name = temp;
    //char *split;
    int i,j;
    for(i=0; i<pcourse_node->term_period; i++)
    {
        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            int start_class = pcourse_node->course_day_period[i][j][0];
            int end_class = pcourse_node->course_day_period[i][j][1];
            int start_week = pcourse_node->course_term_period[i][0];
            int end_week = pcourse_node->course_term_period[i][1];
            int date = pcourse_node->course_week_period[i][j];
            int week;
            //�ֽ���������ɵ��ַ���
            //split = strtok(room_name, ",");
            //ROOM_NODE *room_temp = SeekRoom(gp_room_head, split);
            //room_name = NULL;
            int k;
            for(k=start_week;k<=end_week;k++)
            {
                week = k;
                if(proom_node==TimeIn(course_temp, week, date, start_class, end_class))
                    return true;
            }
        }
    }
    return false;
}
