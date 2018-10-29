#include "course.h"
#include "Experiment2.h"

int main(void)
{
    system("color 70");
    int flag = 0;
    InitaCuriList(&gp_curi_head);       //基本ADT,初始化课程链头结点
    InitaRoomList(&gp_room_head);       //基本ADT,初始化教室链头结点
    InitaClassList(&gp_class_head);     //基本ADT,初始化班级链头结点
    InitaProfList(&gp_prof_head);       //基本ADT,初始化教师链头结点
    InitaCourseList(&gp_course_head);   //基本ADT,初始化课程链头结点

    int op = 1;

    while (op)
    {
        system("cls");
        printf("\t\t\t\t----------------------目  录-------------------\n");
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t    	  1. 加载数据          16. 删除课堂信息\n");
        printf("\t\t\t    	  2. 插入课程信息      17. 查找课程信息\n");
        printf("\t\t\t    	  3. 插入教室信息      18. 查找教师信息\n");
        printf("\t\t\t    	  4. 插入教师信息      19. 查找教室信息\n");
        printf("\t\t\t    	  5. 插入班级信息      20. 查找班级信息\n");
        printf("\t\t\t    	  6. 插入课堂信息      21. 根据班级检索课堂\n");
        printf("\t\t\t    	  7. 修改课程信息      22. 根据教师检索课堂\n");
        printf("\t\t\t    	  8. 修改班级信息      23. 根据教室检索课堂\n");
        printf("\t\t\t    	  9. 修改教室信息      24. 根据课程检索课堂\n");
        printf("\t\t\t    	  10. 修改教师信息     25. 根据时间检索课堂\n");
        printf("\t\t\t    	  11. 修改课堂信息     26. 查找空闲教室\n");
        printf("\t\t\t    	  12. 删除课程信息     27. 教室利用率分析\n");
        printf("\t\t\t    	  13. 删除教师信息     28. 教室能效分析\n");
        printf("\t\t\t    	  14. 删除教室信息     29. 教师承担课堂合理性分析\n");
        printf("\t\t\t    	  15. 删除班级信息     30. 班级课程合理性分析\n");
        printf("\t\t\t    	  0. 退出系统          31. 新老教师关怀计划\n");
        printf("\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\t               请选择你的操作[0~31]:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            flag = 1;
            CreateRoomList(gp_room_head);
            printf("教室信息加载成功\n");
            CreateCourseList(gp_course_head);
            printf("课堂信息加载成功\n");
            CreateCuriList(gp_curi_head);
            printf("课程信息加载成功\n");
            CreateClassList(gp_class_head);
            printf("班级信息加载成功\n");
            CreateProfList(gp_prof_head);
            printf("教师信息加载成功\n");
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            printf("教师-课堂邻接表创建成功\n");
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            printf("班级-课堂邻接表创建成功\n");
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            printf("教室-课堂邻接表创建成功\n");
            getchar();
            getchar();
            break;
        case 2:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            InsertCuriNode(gp_curi_head);   //插入课程结点
            SaveCuriNode(gp_curi_head);     //保存课程结点
            getchar();
            getchar();
            break;
        case 3:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            InsertRoomNode(gp_room_head);   //插入教室结点
            SaveRoomNode(gp_room_head);     //保存教室结点
            getchar();
            getchar();
            break;
        case 4:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            InsertProfNode(gp_prof_head);   //插入教师结点
            SaveProfNode(gp_prof_head);     //保存教师结点
            getchar();
            getchar();
            break;
        case 5:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            InsertClassNode(gp_class_head); //插入教室结点
            SaveClassNode(gp_class_head);   //保存班级信息
            getchar();
            getchar();
            break;
        case 6:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            InsertCourseNode(gp_course_head);   //插入课堂信息
            SaveCourseNode(gp_course_head);     //保存课堂信息
            getchar();
            getchar();
            break;
        case 7:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            ModiCuriNode(gp_curi_head);         //修改课程信息
            SaveCuriNode(gp_curi_head);         //保存课程信息
            getchar();
            getchar();
            break;
        case 8:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            ModiClassNode(gp_class_head);       //修改班级信息
            SaveClassNode(gp_class_head);       //保存班级信息
            getchar();
            getchar();
            break;
        case 9:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            ModiRoomNode(gp_room_head);         //修改教室信息
            SaveRoomNode(gp_room_head);         //保存教室信息
            getchar();
            getchar();
            break;
        case 10:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            ModiProfNode(gp_prof_head);         //修改教师信息
            SaveProfNode(gp_prof_head);         //保存教师信息
            getchar();
            getchar();
            break;
        case 11:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            if(!ModiCourseNode(gp_course_head)) //如果修改失败，信息回滚
            {
                InfoReturn();
            }
            //保存其余信息
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
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            DelCuriNode(gp_curi_head);      //删除课程信息
            SaveCuriNode(gp_curi_head);
            SaveCourseNode(gp_course_head);
            getchar();
            getchar();
            break;
        case 13:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            DelProfNode(gp_prof_head);      //删除教师信息
            SaveProfNode(gp_prof_head);
            getchar();
            getchar();
            break;
        case 14:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            DelRoomNode(gp_room_head);      //删除教室信息
            SaveRoomNode(gp_room_head);
            getchar();
            getchar();
            break;
        case 15:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            DelClassNode(gp_class_head);    //删除班级信息
            SaveClassNode(gp_class_head);
            SaveCourseNode(gp_course_head);
            getchar();
            getchar();
            break;
        case 16:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            DelCourseNode(gp_course_head);  //删除课堂信息
            SaveCourseNode(gp_course_head);
            getchar();
            getchar();
            break;
        case 17:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //更新创建邻接表
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCuriNode(gp_curi_head);   //搜索课程结点
            getchar();
            getchar();
            break;
        case 18:
            if(flag==0)
            {
                printf("尚未加载数据!");
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
            SearchProfNode(gp_prof_head);   //搜索教师结点
            getchar();
            getchar();
            break;
        case 19:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //更新邻接表结点
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchRoomNode(gp_room_head);   //搜索教室结点
            getchar();
            getchar();
            break;
        case 20:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //更新邻接表
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchClassNode(gp_class_head); //搜索班级信息
            getchar();
            getchar();
            break;
        case 21:
            if(flag==0)
            {
                printf("尚未加载数据!");
                getchar();
                getchar();
                break;
            }
            CreateRoomList(gp_room_head);
            CreateCourseList(gp_course_head);
            CreateCuriList(gp_curi_head);
            CreateClassList(gp_class_head);
            CreateProfList(gp_prof_head);
            //更新邻接表
            Cre_Prof_Course_List(gp_prof_head, gp_course_head);
            Cre_Class_Course_List(gp_class_head, gp_course_head);
            Cre_Room_Course_List(gp_room_head, gp_course_head);
            SearchCourseNodeByClass(gp_class_head); //搜索课堂信息
            getchar();
            getchar();
            break;
        case 22:
            if(flag==0)
            {
                printf("尚未加载数据!");
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
            SearchCourseNodeByProf(gp_prof_head);   //通过教师查找课堂
            getchar();
            getchar();
            break;
        case 23:
            if(flag==0)
            {
                printf("尚未加载数据!");
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
            SearchCourseNodeByRoom(gp_room_head);   //通过教室查找课堂
            getchar();
            getchar();
            break;
        case 24:
            if(flag==0)
            {
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
                printf("尚未加载数据!");
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
    printf("欢迎下次再使用本系统！\n");
}//end of main()

/**
* 函数名称：CreateCuriList
* 函数参数：curi_hd 课程链头结点指针
* 函数功能：从txt文件中读取课程链信息，创建课程链链表
* 返回值：创建链表成功返回课程链头结点指针, 失败则返回NULL
**/
CURI_NODE* CreateCuriList(CURI_NODE *curi_hd)
{
    int ret = 0;
    CURI_NODE * pcuri_node=NULL, * pprior_curi_node=NULL;   //遍历指针和前驱指针

    FILE *curi_write = fopen("Curi.txt", "r+");
    if(!curi_write)
    {
        printf("打开文件失败！\n");
        fclose(curi_write);
        return NULL;
    }

    pprior_curi_node = curi_hd;

    while (!feof(curi_write))
    {
        pcuri_node = (CURI_NODE*)malloc(sizeof(CURI_NODE));
        ret = fscanf(curi_write, "%s", pcuri_node->curi_name);
        if(ret == -1) break;    //防止fscanf多读取一项
        fscanf(curi_write, "%f", &pcuri_node->credit);
        fscanf(curi_write, "%f", &pcuri_node->hours);
        fscanf(curi_write, "%d", &pcuri_node->course_num);

        //调整链表结构
        pprior_curi_node->next = pcuri_node;
        pprior_curi_node = pprior_curi_node->next;
        pcuri_node->next = NULL;
    }
    fclose(curi_write);    //关闭文件
    return pcuri_node;
}

/**
* 函数名称：ProfAnalysis
* 函数参数：head 教师链头结点指针
* 函数功能：分析教师课堂安排合理性
* 返回值：无
**/
void ProfAnalysis(PROF_NODE * head)
{
    char prof_name[12];
    float avg_hours = 0;                //所有教师平均教学时长
    float sum_hours = 0;                //所有教师的所有教学时长
    int prof_num = 0;                   //教师人数
    PROF_NODE *pprof_node = head->next, *prof_temp = NULL;

    //遍历链表，统计相关信息
    while(pprof_node)
    {
        sum_hours+=pprof_node->prof_hours;
        prof_num++;     //教师人数自增
        pprof_node = pprof_node->next;
    }
    avg_hours = sum_hours/prof_num;         //统计平均授课学时
    printf("共有%d位教师\n", prof_num);     //输出教师总人数
    printf("平均每位教师授课学时为%f\n", avg_hours);

    printf("请输入需要查询的教师姓名:\n");
    getchar();
    scanf("%s", prof_name);
    if(!(prof_temp=SeekProf(gp_prof_head, prof_name)))
    {
        printf("该教师不存在\n");
        return;
    }

    //遍历并且输出信息
    printf("%s\t授课%d个课堂\t授课学时%f\t", prof_temp->prof_name, prof_temp->prof_num_course, prof_temp->prof_hours);
    if(prof_temp->prof_hours>130)
        printf("\t授课学时较多，超过130\n");
    else
        printf("\t该教师分配的任务较合理\n");
    return;
}

/**
* 函数名称：ClassAnalysis
* 函数参数：head 班级链头结点指针
* 函数功能：分析班级课堂安排合理性
* 返回值：无
**/
void ClassAnalysis(CLASS_NODE *head)
{
    CLASS_NODE *pclass_node=head->next, *class_temp=NULL;
    char class_name[30];

    printf("请输入需要分析合理性的班级名称\n");
    scanf("%s", class_name);
    //搜寻班级结点
    if(!(class_temp=SeekClass(gp_class_head, class_name)))
    {
        printf("该班级不存在!\n");
        return;
    }
    printf(" 班级名\t\t夜晚课时\t白天课时\t夜日上课时间比\t\t开学前两周上课时间\t考试周上课时间\n");
    //遍历计算每个班级的信息
    while(pclass_node)
    {
        pclass_node->rate = pclass_node->night_class_hours*1.0/pclass_node->day_class_hours;
        pclass_node = pclass_node->next;
    }
    printf(" %-12s\t%-8d\t%-8d\t%-8.1f\t\t%-8d\t\t%-8d\t\t\n", class_temp->class_name, class_temp->night_class_hours, class_temp->day_class_hours, class_temp->rate, class_temp->summer_class_hours, class_temp->winter_class_hours);
    if(class_temp->rate>0.5)
        printf(" 该班级夜晚安排课程过多\n");
    else
        printf(" 该班级夜日上课时间比安排合适\n");
    if(class_temp->summer_class_hours>4)
    {
        printf(" 该班级开学前两周安排课时超过4节,请提供适当的缓冲期\n");
    }
    if(class_temp->winter_class_hours>4)
    {
        printf(" 该班级考试周安排课时达到了%d节,请提供充足的复习时间\n", class_temp->winter_class_hours);
    }
    else if(class_temp->summer_class_hours<=4)
        printf(" 该班级在开学阶段和期末阶段的课程安排较为合理\n");
    return;
}

/**
* 函数名称：RoomUseRate
* 函数参数：head 教室链头结点指针
* 函数功能：分析教室利用率并排序输出
* 返回值：无
**/
void RoomUseRate(ROOM_NODE * head)
{
    ROOM_NODE *proom_node = head->next;
    //遍历教室链表，统计各教室的白天夜晚和总体使用率
    while(proom_node)
    {
        proom_node->day_use_rate = proom_node->day_use_time*1.0/(DAY_CLASS);
        proom_node->night_use_rate = proom_node->night_use_time*1.0/(NIGHT_CLASS);
        proom_node->total_use_rate = proom_node->total_use_time*1.0/(TOTAL_CLASS);
        proom_node = proom_node->next;
    }
    ROOM_NODE *tail = proom_node;
    QuickSortRate(head, tail);    //根据教室总体利用率排序
    //遍历链表，输出信息
    proom_node = head->next;
    printf("\t\t\t\t教室总体利用率\t\t\t教室白天利用率\t\t\t教室夜晚利用率\n");
    while(proom_node)
    {
        printf("\t%-12s\t\t\t%-8.2f\t\t\t%-8.2f\t\t\t%-8.2f\n", proom_node->room_name, proom_node->total_use_rate, proom_node->day_use_rate, proom_node->night_use_rate);
        proom_node = proom_node->next;
    }
    return;
}

/**
* 函数名称：EnergyAnalysis
* 函数参数：head 教室链头结点指针
* 函数功能：分析教室能效情况
* 返回值：无
**/
void EnergyAnalysis(ROOM_NODE *head)
{
    ROOM_NODE *proom_node = head->next;
    //统计各个教室的平均能效值
    while(proom_node)
    {
        int course_num = 0;     //统计某个教室的课程数量
        float energy_sum = 0;   //统计某个教室各个课堂的能效值之和
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
    QuickSortEnergy(head, tail);    //根据能效值排序
    proom_node = head->next;
    //遍历输出各教室的能效值
    printf("\t  教室节能率\t教室夜晚使用能量增量\t\t教室冬天使用能量增量\t\t教室夏天使用能量增量\n");
    while(proom_node)
    {
        printf("%-12s\t%-8.2f\t%-8.2f\t\t\t%-8.2f\t\t\t  %-8.2f\n", proom_node->room_name, proom_node->energy, proom_node->night_use_time*NIGHT_INCREMENT, proom_node->winter_use_time*WINTER_INCREMENT, proom_node->summer_use_time*SUMMER_INCREMENT);
        proom_node = proom_node->next;
    }
    return;
}

/**
* 函数名称：QuickSortEnergy
* 函数参数：head 教室链头结点指针
            tail 教室链尾结点指针
* 函数功能：将教室结点链根据能效值重新排序
* 返回值：无
**/
void QuickSortEnergy(ROOM_NODE *head, ROOM_NODE *tail)
{
    if (head->next==tail||head->next->next==tail)
        return;

    ROOM_NODE* mid = head->next;    //mid指向标准值
    ROOM_NODE* p = head;            //指向比标准值大的值
    ROOM_NODE* q = mid;             //指向比标准值小的值
    float pivot = mid->energy;
    ROOM_NODE* t=mid->next;

    while (t!=tail)
    {
        if (t->energy>pivot)    //将t所指结点串入p链中
            p = p->next = t;
        else
            q = q->next = t;    //将t所指结点串入q链中
        t = t->next;
    }
    p->next = mid;
    q->next = tail;

    QuickSortEnergy(head, mid);
    QuickSortEnergy(mid, tail);
}

/**
* 函数名称：QuickSortRate
* 函数参数：head 教室链头结点指针
            tail 教室链尾结点指针
* 函数功能：将教室链结点根据利用率重新排序
* 返回值：无
**/
void QuickSortRate(ROOM_NODE *head, ROOM_NODE *tail)
{
    if (head->next==tail||head->next->next==tail)
        return;

    ROOM_NODE* mid = head->next;    //mid指向标准值
    ROOM_NODE* p = head;            //指向比标准值大的值
    ROOM_NODE* q = mid;             //指向比标准值小的值
    float pivot = mid->total_use_rate;
    ROOM_NODE* t = mid->next;     //t为遍历指针

    while (t!=tail)
    {
        if (t->total_use_rate>pivot)
            p = p->next = t;
        else
            q = q->next = t;
        t = t->next;
    }
    p->next = mid;      //将两段链串起来
    q->next = tail;

    QuickSortRate(head, mid);
    QuickSortRate(mid, tail);
}

/**
* 函数名称：FindFreeRoom
* 函数参数：room_hd 教室链头结点指针
* 函数功能：根据输入的时间或者时间段查找空闲的教室
* 返回值：无
**/
void FindFreeRoom(ROOM_NODE *room_hd)
{
    int week, date, start_class, end_class,free;
    ROOM_NODE *proom_node = room_hd->next, *room_temp;
    COURSE_NODE * pcourse_node;
    char classes[10];   //待输入的查找节数字符串

    printf("请输入需要查找的周次(如第7周则输入7)\n");
    getchar();
    scanf("%d", &week);
    printf("请输入需要查找的日期(如周三则输入3)\n");
    getchar();
    scanf("%d", &date);
    printf("请输入需要查找的节数(如第1~4节则输入1~4,第1节则输入1)\n");
    getchar();
    scanf("%s", classes);
    if(!DealString1(classes, &start_class, &end_class))
    {
        printf("输入有误!\n");
        return;
    }

    //遍历教室信息链
    while(proom_node)
    {
        free = 1;
        pcourse_node = proom_node->firstarc;
        //遍历每个教室后每个课堂信息结点
        while(pcourse_node)
        {
            //printf("%s\n", pcourse_node->course_id);
            room_temp = TimeIn(pcourse_node, week, date, start_class, end_class);    //找到特定时间段某个课堂所在的教室
            if(!room_temp);
            else if(strcmp(room_temp->room_name,proom_node->room_name)==0)    //如果找到的教室恰好是正在遍历的教室结点
            {
                free = 0;
                break;
            }
            pcourse_node = pcourse_node->next;
        }
        if(free)
            printf("%s空闲\t该教室容量为:%d\n", proom_node->room_name, proom_node->volume);
        proom_node = proom_node->next;
    }
    getchar();
    return;
}

/**
* 函数名称：DealString1
* 函数参数：String 待分解字符串
* 函数功能：解析包含课堂起止节数的字符串信息
* 返回值：解析成功返回true, 否则返回false
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
        split = strtok(String, "~");    //以~为分隔符分隔字符串
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
* 函数名称：CreateRoomList
* 函数参数：room_hd 课程链首结点指针
* 函数功能：从txt文件中读取信息，创建教室链表
* 返回值：创建成功返回教室链表头结点，否则返回NULL
**/
ROOM_NODE* CreateRoomList(ROOM_NODE *room_hd)
{
    int ret = 0;
    char room_name[30];
    ROOM_NODE * proom_node = NULL, * pprior_room_node = NULL;

    FILE *room_write = fopen("Room.txt", "r+");
    if(!room_write)
    {
        printf("打开文件失败！\n");
        fclose(room_write);
        return NULL;
    }

    pprior_room_node = room_hd; //前驱指针指向头结点

    while (!feof(room_write))
    {
        ret = fscanf(room_write, "%s", room_name);
        if(ret == -1) break;    //防止fscanf多读取一项
        proom_node = (ROOM_NODE*)malloc(sizeof(ROOM_NODE));     //为新的教室结点分配空间
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
    fclose(room_write);     //关闭文件
    return proom_node;
}

/**
* 函数名称：CreateProfList
* 函数参数：prof_hd 教师链首结点指针
* 函数功能：从txt文件中读取信息，创建教师链表
* 返回值：创建成功返回教师链表头结点，否则返回NULL
**/
PROF_NODE* CreateProfList(PROF_NODE *prof_hd)
{
    int ret = 0;
    char prof_name[30];
    char prof_title[30];
    PROF_NODE * pprof_node = NULL, * pprior_prof_node = NULL;    //遍历结点指针和前驱指针

    FILE *prof_write = fopen("Prof.txt", "r+");
    if(!prof_write)
    {
        printf("打开文件失败！\n");
        fclose(prof_write);
        return NULL;
    }

    pprior_prof_node = prof_hd;

    while (!feof(prof_write))
    {
        ret = fscanf(prof_write, "%s", prof_name);
        if(ret == -1) break;    //防止fscanf多读取一项
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
    fclose(prof_write);     //关闭文件
    return pprof_node;
}

/**
* 函数名称：CreateClassList
* 函数参数：class_hd 班级链首结点指针
* 函数功能：从txt文件中读取信息，创建班级链表
* 返回值：创建成功返回班级链表头结点，否则返回NULL
**/
CLASS_NODE* CreateClassList(CLASS_NODE *class_hd)
{
    int ret = 0;
    char class_name[30];
    CLASS_NODE * pclass_node = NULL, * pprior_class_node = NULL;    //遍历结点指针和前驱指针

    FILE *class_write = fopen("Class.txt", "r+");
    if(!class_write)
    {
        printf("打开文件失败！\n");
        fclose(class_write);
        return NULL;
    }

    pprior_class_node = class_hd;

    while (!feof(class_write))
    {
        ret = fscanf(class_write, "%s", class_name);
        if(ret == -1) break;    //防止fscanf多读取一项
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
    fclose(class_write);    //关闭文件
    return pclass_node;
}

/**
* 函数名称：InitaCuriList
* 函数参数：线性表L的地址
* 函数功能：新建课程链表头结点，并将L的next指针置空
* 返回值：成功构造返回OK，否则返回ERROR
**/
Status InitaCuriList(CURI_NODE **L)
{
    (*L) = (CURI_NODE* )malloc(sizeof(CURI_NODE));    //为表头结点分配空间
    if(!(*L))
    {
        printf("创建头结点失败\n");
        return ERROR;
    }
    //初始化表头结点信息
    (*L)->credit = -1;
    (*L)->hours = -1;
    (*L)->next = NULL;
    strcpy((*L)->curi_name, "head");
    return OK;
}

/**
* 函数名称：InsertCuriNode
* 函数参数：课程结点头指针hd
* 函数功能：插入课程信息结点
* 返回值：无
**/
void InsertCuriNode(CURI_NODE * curi_hd)
{
    CURI_NODE *pcuri_node;
    pcuri_node = (CURI_NODE *)malloc(sizeof(CURI_NODE));    //给待插入课程结点分配空间
    if(pcuri_node)
    {
        getchar();
        printf("请输入您所要添加的课程的名称:");
        scanf("%s", pcuri_node->curi_name);
    }
    else
    {
        printf("分配空间失败!");
        return;
    }

    if(SeekCuri(curi_hd, pcuri_node->curi_name)!=NULL)
    {
        printf("输入课程已存在!\n");
        free(pcuri_node);       //释放已分配空间
        return;
    }
    else
    {
        printf("请输入课程学分: ");
        getchar();
        scanf("%f", &pcuri_node->credit);
        printf("请输入课程学时: ");
        getchar();
        scanf("%f", &pcuri_node->hours);
        pcuri_node->course_num = 0;     //课程的课堂数目置零

        pcuri_node->next = curi_hd->next;
        curi_hd->next = pcuri_node;
        pcuri_node->firstarc = NULL;
        printf("插入成功!\n");

        return;
    }
}

/**
* 函数名称：ModiCuriNode
* 函数参数：hd 课程结点头指针
* 函数功能：修改课程信息结点
* 返回值：修改成功则返回TRUE,失败则返回FALSE
**/
bool ModiCuriNode(CURI_NODE * hd)
{
    CURI_NODE *pcuri_node;
    char curi_name[30], old_curi_name[30], new_curi_name[30];   //修改前的课程名称和修改后的课程名称
    float old_hours, new_hours;    //修改前的学时和修改后的学时
    hd = hd->next;
    pcuri_node = hd;

    if(pcuri_node)
    {
        getchar();
        printf("请输入您所要修改的课程的名称:");
        scanf("%s", curi_name);
    }
    else
    {
        printf("课程链表暂未创建!");
        return false;
    }

    if((pcuri_node = SeekCuri(hd, curi_name))!=NULL)
    {
        old_hours = pcuri_node->hours;
        strcpy(old_curi_name, pcuri_node->curi_name);   //保存修改前的课程名称
        printf("请输入新的课程名称:");
        getchar();
        scanf("%s", new_curi_name);
        strcpy(pcuri_node->curi_name, new_curi_name);   //修改原有课程名称

        printf("请输入您所要修改的课程的学分:");
        getchar();
        scanf("%f", &pcuri_node->credit);

        printf("请输入您所要修改的课程的学时:");
        getchar();
        scanf("%f", &pcuri_node->hours);
        new_hours = pcuri_node->hours;  //保存修改后的课程学时

        ModiCuriInCourse(gp_course_head, old_curi_name, new_curi_name, old_hours, new_hours);
        SaveCourseNode(gp_course_head);     //保存课堂信息
        SaveProfNode(gp_prof_head);         //保存教师信息

        printf("修改信息成功!");
        return true;
    }
    else
    {
        printf("您输入的课程不存在\n");
        return false;
    }
}

/**
* 函数名称：ModiCuriInCourse
* 函数参数：course_hd 课程结点头指针
* 函数功能：修改所有邻接表中被修改的课程信息
* 返回值：修改成功则返回TRUE,失败则返回FALSE
**/
bool ModiCuriInCourse(COURSE_NODE *course_hd, char * old_curi_name, char *new_curi_name, float old_hours, float new_hours)
{
    int flag = 0;
    COURSE_NODE *temp;

    PROF_NODE * pprof_node = gp_prof_head->next;
    ROOM_NODE * proom_node = gp_room_head->next;
    CLASS_NODE *pclass_node = gp_class_head->next;

    //修改教室-课堂邻接表中的课程信息
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

    //修改教室-班级邻接表中的课程信息
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

    //修改教室-教师邻接表中的课程信息
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
    //修改整个课堂单链表中的课程信息
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
* 函数名称：DelCuriNode
* 函数参数：hd 课程结点头指针
* 函数功能：删除课程信息结点
* 返回值：删除成功则返回TRUE,失败则返回FALSE
**/
bool DelCuriNode(CURI_NODE * hd)
{
    CURI_NODE *pcuri_node = hd->next;
    char curi_name[30];

    if(pcuri_node)
    {
        getchar();
        printf("请输入您所要删除的课程的名称:");
        scanf("%s", curi_name);
    }
    else
    {
        printf("课程链表暂未创建!");
        return false;
    }

    if((pcuri_node = SeekCuri(hd, curi_name))!=NULL)    //搜索指定的课程结点成功
    {
        DelCourseAfterCuri(pcuri_node, gp_course_head);

        CURI_NODE *pprior_node = PriorCuriElem(hd, curi_name);  //找到待删除结点的前驱
        pprior_node->next = pcuri_node->next;
        pprior_node = pcuri_node;
        pcuri_node = pcuri_node->next;
        free(pprior_node);
        printf("删除成功!\n");
        return true;
    }
    else
    {
        printf("您输入的课程不存在\n");
        return false;
    }
}


/**
* 函数名称：DelCourseAfterCuri
* 函数参数：pcuri_node 课程信息结点
* 函数功能：删除与删除的课程同名的课堂
* 返回值：无
**/
void DelCourseAfterCuri(CURI_NODE *pcuri_node, COURSE_NODE *course_hd)
{
    COURSE_NODE *pcourse_node = course_hd->next, *course_temp = NULL;
    //遍历课堂链表
    while(pcourse_node)
    {
        course_temp = pcourse_node;
        pcourse_node=pcourse_node->next;
        //如果课程名和课堂名符合
        if(strcmp(course_temp->course_curi_name, pcuri_node->curi_name)==0)
        {
            DelWithoutId(course_temp);
        }
    }
    return;
}

/**
* 函数名称：SaveCuriNode
* 函数参数：curi_hd 课程链头结点指针
* 函数功能：保存课程链至txt文件
* 返回值：保存成功返回TRUE, 否则返回FALSE
**/
bool SaveCuriNode(CURI_NODE * curi_hd)
{
    if(!curi_hd)
    {
        printf("没有课程存在!\n");
        return false;
    }
    curi_hd = curi_hd->next;
    CURI_NODE *pcuri_node;
    FILE *pfout;    //文件指针

    pfout = fopen(gp_curi_info_filename, "w");  //只写方式打开文件指针
    if(!pfout)  //文件指针为空
    {
        printf("课程文件保存失败！\n");
        fclose(pfout);
        return false;
    }

    //遍历课程结点并保存
    for (pcuri_node = curi_hd; pcuri_node != NULL; pcuri_node = pcuri_node->next)
    {
        fprintf(pfout, "%s\t", pcuri_node->curi_name);  //写入课程名称
        fprintf(pfout, "%.1f\t", pcuri_node->credit);   //写入课程学分
        fprintf(pfout, "%.1f\t", pcuri_node->hours);    //写入课程学时
        fprintf(pfout, "%d\n", pcuri_node->course_num); //写入课程数目
    }
    fclose(pfout);  //关闭文件指针
    return true;
}

/**
* 函数名称：SearchCuriNode
* 函数参数：hd 课程链头结点指针
* 函数功能：查找课程信息链中是否有与curi_name重名的选项，如果有就输出相应信息
* 返回值：查中时输出课程信息, 否则返回NULL
**/
bool SearchCuriNode(CURI_NODE * hd)
{
    CURI_NODE *pcuri_node;
    char curi_name[30];

    printf("请输入需要查找的课程名称\n");
    getchar();
    scanf("%s", curi_name);
    //查找课程名的信息
    pcuri_node = SeekCuri(hd, curi_name);
    if(!pcuri_node)
    {
        printf("查找课程失败\n");
        return false;
    }

    if(pcuri_node)
    {
        //输出课程的所有信息
        printf("学分:%.1f\n", pcuri_node->credit);
        printf("学时:%.1f\n", pcuri_node->hours);
        printf("下设课堂数:%d\n", pcuri_node->course_num);
        return true;
    }
    else if(!(hd->next))
    {
        printf("课程数为0！\n");
        return false;
    }
    return false;
}

/**
* 函数名称：SeekCuri
* 函数参数：curi_name 待比对的课程名称,
            hd 课程链首结点指针
* 函数功能：查找课程信息链中是否有与curi_name重名的选项
* 返回值：查中时返回结点的地址, 否则返回NULL
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
* 函数名称：InitaRoomList
* 函数参数：线性表L的地址
* 函数功能：新建教室链表头结点，并将L的next指针置空
* 返回值：成功构造返回OK，否则返回ERROR
**/
Status InitaRoomList(ROOM_NODE **L)
{
    (*L) = (ROOM_NODE* )malloc(sizeof(ROOM_NODE));    //新建表头结点
    if(!(*L))
    {
        printf("创建头结点失败\n");
        return ERROR;
    }
    (*L)->volume = -1;
    (*L)->next = NULL;
    strcpy((*L)->room_name, "rhead");
    return OK;
}

/**
* 函数名称：ModiCourseNode
* 函数参数：course_hd 课堂结点头指针
* 函数功能：修改课堂信息结点, 更新其余相关链的信息
* 返回值：修改成功则返回TRUE,失败则返回FALSE
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

    COURSE_NODE *course_temp = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));  //作为修改后的结点插入
    COURSE_NODE *course_return = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));    //保存原有结点信息，用于信息回滚
    if(course_temp)
    {
        printf("请输入您所要修改的课堂的id:");
        getchar();
        scanf("%s", course_id);
    }
    else
    {
        printf("课堂链表暂未创建!");
        return false;
    }
    if(!(pcourse_node=SeekCourse(gp_course_head, course_id)))
    {
        printf("该课堂尚未创建\n");
        return false;
    }
    printf("\n");
    FormatPrint(pcourse_node);
    cpycoursenode(course_temp, pcourse_node);   //复制全部信息至course_temp
    cpycoursenode(course_return, pcourse_node); //复制全部信息至course_return
    DelWithoutId(pcourse_node);     //从链表中删除course_node

    if(1)
    {
        int op = 1;
        int firsttime = 1;

        printf("    0.不再修改    1.教师名称\n");
        printf("    2.课堂班级    3.上课时间段及对应教室\n");
        while(op)
        {
            printf("请选择需要修改的内容\n");
            scanf("%d", &op);
            switch(op)
            {
            case 1:
                firsttime = 0;
                printf("请修改课堂的教师名称:");
                getchar();
                scanf("%s", prof_name);     //暂时存储输入流,以待检查
                if(!(pprof_node = SeekProf(gp_prof_head, prof_name)))
                {
                    printf("请先创建教师的基本信息\n");
                    InsertCourseWithoutInput(course_return);
                    return false;
                }
                strcpy(course_temp->course_prof_name, prof_name);
                break;
            case 2:
                firsttime = 0;
                course_temp->total_stu_num = 0;
                printf("请修改课堂容纳的班级数目:");
                getchar();
                scanf("%d", &course_temp->course_class_num);

                printf("请修改各个班级的名称(按回车分隔):\n");
                for(i=0; i<course_temp->course_class_num; i++)
                {
                    char class_name[30] = {'\0'};
                    scanf("%s", class_name);
                    if(!(pclass_node=SeekClass(gp_class_head, class_name)))
                    {
                        printf("请先创建班级的基本信息!\n");
                        InsertCourseWithoutInput(course_return);
                        return false;
                    }
                    //printf("该班级学期内白天课程共%d节，晚上课程共%d节\n", pclass_node->day_class_hours, pclass_node->night_class_hours);
                    //printf("该班级学期内夏天课程共%d节，冬天课程共%d节\n", pclass_node->summer_class_hours, pclass_node->winter_class_hours);

                    strcpy(course_temp->course_class_name[i], class_name);
                }
                break;
            case 3:
            {
                firsttime = 0;
                i = 0;
                int firstsubstr = 1;    //标记变量
                ROOM_NODE *proom_node;
                printf("请按提示修改上课时间段和教室:\n");

                while(1)
                {
                    int day_num = 0;
                    //修改上课周期
                    printf("请修改分段上课周期：(如1~5周则输入1~5):\n");
                    char classes[20] = {'\0'};
                    getchar();
                    scanf("%s", classes);
                    if(!DealString1(classes, &course_temp->course_term_period[i][0], &course_temp->course_term_period[i][1]))
                    {
                        printf("输入有误!\n");
                        InfoReturn();
                        free(course_temp);
                        return false;
                    }
                    //scanf("%d~%d", &course_temp->course_term_period[i][0], &course_temp->course_term_period[i][1]);

                    printf("请修改该周期内的上课日期数:(如1/2/4/0/0代表周一周二和周四上课)\n");
                    char week_date[15] = {'\0'};
                    getchar();
                    scanf("%s", week_date);
                    if(!DealString3(week_date, course_temp->course_week_period[i]))
                    {
                        printf("输入有误!\n");
                        InfoReturn();
                        free(course_temp);
                        return false;
                    }
                    //scanf("%d/%d/%d/%d/%d/%d", &course_temp->course_week_period[i][0], &course_temp->course_week_period[i][1], &course_temp->course_week_period[i][2], &course_temp->course_week_period[i][3], &course_temp->course_week_period[i][4], &course_temp->course_week_period[i][5]);
                    for(day_num=0; course_temp->course_week_period[i][day_num]!=0; day_num++) ;
                    //遍历上课时段
                    for(j=0; j<day_num; j++)
                    {
                        printf("请修改每一天的上课时段:(如1~4代表第一至四节课)\n");
                        char room_name[30];
                        char period[10]={'\0'};
                        getchar();
                        scanf("%s", period);
                        if(!DealString1(period, &course_temp->course_day_period[i][j][0], &course_temp->course_day_period[i][j][1]))
                        {
                            printf("输入有误!\n");
                            InfoReturn();
                            free(course_temp);
                            return false;
                        }
                        //scanf("%d~%d", &course_temp->course_day_period[i][j][0], &course_temp->course_day_period[i][j][1]);

                        printf("请修改该时间段内的教室：\n");
                        getchar();
                        scanf("%s", room_name);
                        if(!(proom_node=SeekRoom(gp_room_head, room_name)))
                        {
                            printf("该教室不存在");
                            InsertCourseWithoutInput(course_return);
                            return false;
                        }
                        //逗号分隔字符串
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

                    printf("是否要继续添加上课周期？(0代表不要，1代表要)");
                    scanf("%d", &op);
                    if(!op)
                        break;
                }
                //将i赋值给课堂变量
                course_temp->term_period = i;
                break;
            }
            case 0:
                if(firsttime==1)
                {
                    //信息回滚
                    InsertCourseWithoutInput(course_return);
                    return false;
                }
                else
                    break;
            }
        }
        FormatPrint(course_temp);
        InsertCourseWithoutInput(course_temp);
        printf("修改信息成功!");
        return true;
    }
    else
    {
        printf("您输入的课堂不存在\n");
        return false;
    }
}

/**
* 函数名称：DelCourseNode
* 函数参数：hd 课程结点头指针
* 函数功能：删除课程信息结点
* 返回值：删除成功则返回TRUE,失败则返回FALSE
**/
bool DelCourseNode(COURSE_NODE * hd)
{
    COURSE_NODE *pcourse_node;
    char course_id[20];

    pcourse_node = hd->next;
    if(pcourse_node)
    {
        getchar();
        printf("请输入您所要删除的课堂的id:");
        scanf("%s", course_id);
    }
    else
    {
        printf("课程链表暂未创建!");
        return false;
    }

    if((pcourse_node = SeekCourse(hd, course_id))!=NULL)
    {
        //更新删除相应课堂信息后的其他信息
        UpdateAfterDelCourse(pcourse_node);

        COURSE_NODE *pprior_node = PriorCourseElem(hd, course_id);
        pprior_node->next = pcourse_node->next;
        pprior_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        free(pprior_node);
        printf("删除成功!\n");
        //保存其他信息
        SaveClassNode(gp_class_head);
        SaveCuriNode(gp_curi_head);
        SaveProfNode(gp_prof_head);
        SaveRoomNode(gp_room_head);
        return true;
    }
    else
    {
        printf("您输入的课程不存在\n");
        return false;
    }
}

/**
* 函数名称：DelCourseNode
* 函数参数：pcourse_node 待删除的课堂结点
* 函数功能：删除传入的课堂信息结点
* 返回值：删除成功则返回TRUE,失败则返回FALSE
**/
bool DelWithoutId(COURSE_NODE *pcourse_node)
{
    UpdateAfterDelCourse(pcourse_node);     //首先更新删除后的连锁信息

    //找到待删除结点的前驱指针
    COURSE_NODE *pprior_node = PriorCourseElem(gp_course_head, pcourse_node->course_id);
    pprior_node->next = pcourse_node->next;
    pprior_node = pcourse_node;
    pcourse_node = pcourse_node->next;
    free(pprior_node);
    //保存因删除结点而导致变动的其余信息
    SaveClassNode(gp_class_head);
    SaveCuriNode(gp_curi_head);
    SaveProfNode(gp_prof_head);
    SaveRoomNode(gp_room_head);
    return true;
}

/**
* 函数名称：UpdateAfterDelCourse
* 函数参数：pcourse_node 待删除的课堂结点
* 函数功能：更新删除传入的课堂信息结点后的其余信息
* 返回值：无
**/
void UpdateAfterDelCourse(COURSE_NODE * pcourse_node)
{
    int i = 0, j = 0;

    //找到每个课堂下面的班级
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
            //分解教室名构成的字符串
            split = strtok(room_name, ",");
            ROOM_NODE *proom_node = SeekRoom(gp_room_head, split);
            room_name = NULL;
            //修改删除课堂结点后的教室信息
            ModiRoomAfterDel(proom_node, pcourse_node, num_of_week, start_class, end_class);
        }
    }
    return;
}

/**
* 函数名称：ModiProfAfterDel
* 函数参数：pcourse_node 待删除的课堂结点
            pprof_node 需要修改的教师结点
* 函数功能：更新删除传入的课堂信息结点后的教师结点信息
* 返回值：无
**/
void ModiProfAfterDel(PROF_NODE * pprof_node, COURSE_NODE *pcourse_node)
{
    float course_hours = 0;
    COURSE_NODE *course_prior = NULL;
    CURI_NODE * pcuri_node = SeekCuri(gp_curi_head, pcourse_node->course_curi_name);
    course_hours = pcuri_node->hours;

    pprof_node->prof_num_course--;          //教授课程减一
    pprof_node->prof_hours-=course_hours;   //上课学时减去课程的学时

    COURSE_NODE *course_temp = pprof_node->firstarc;

    //遍历教师链后面的课堂链
    while(course_temp)
    {
        //分情况讨论
        if(course_temp==pprof_node->firstarc)   //该课堂恰好是第一个课堂结点
        {
            if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)  //该课堂的名称和需要删除的课堂名称相同
            {
                pprof_node->firstarc = course_temp->next;
                free(course_temp);
                course_temp = pprof_node->firstarc;
            }
            else
            {
                course_temp = pprof_node->firstarc->next;   //遍历指针后移
                course_prior = pprof_node->firstarc;    //前驱指针移向教室链后的首结点
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
            course_temp = course_temp->next;    //遍历指针后移
            course_prior = course_prior->next;  //前驱指针后移
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
* 函数名称：ModiClassAfterDel
* 函数参数：pcourse_node 待删除的课堂结点
            pclass_node 需要修改的班级结点
* 函数功能：更新删除传入的课堂信息结点后的班级结点信息
* 返回值：无
**/
void ModiClassAfterDel(CLASS_NODE *pclass_node, COURSE_NODE *pcourse_node)
{
    int i, j;
    //遍历课堂的每个周期
    for(i=0; i<pcourse_node->term_period; i++)
    {
        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            int start_class = pcourse_node->course_day_period[i][j][0], end_class = pcourse_node->course_day_period[i][j][1];
            int num_of_week = pcourse_node->course_term_period[i][1]-pcourse_node->course_term_period[i][0]+1;
            //修改每堂课对应班级的时间
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
                //修改早晚信息
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

    //前驱结点指针和遍历结点指针
    COURSE_NODE *course_temp = pclass_node->firstarc, *course_prior = NULL;
    //遍历每个班级后面连接的所有课堂信息结点
    while(course_temp)
    {
        //根据课堂结点在邻接表中的位置分情况讨论
        if(course_temp==pclass_node->firstarc)
        {
            if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)  //如果遍历到的课堂结点恰好是要删除的那个
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
            course_temp = course_temp->next;    //遍历课堂结点指针后移
            course_prior = course_prior->next;  //前驱课堂结点指针后移
        }
    }
    return;
}

/**
* 函数名称：ModiRoomAfterDel
* 函数参数：pcourse_node 待删除的课堂结点
            proom_node 需要修改的教室结点
* 函数功能：更新删除传入的课堂信息结点后的班级结点信息
* 返回值：无
**/
void ModiRoomAfterDel(ROOM_NODE *proom_node, COURSE_NODE *pcourse_node,int num_of_week, int start_class, int end_class)
{
    int i;
    for(i=0; i<pcourse_node->term_period; i++)  //遍历待删除课堂结点的时间分段
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
    //修改每个教室的白天黑夜利用时间
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

    //修改教室结点的总体利用时间
    proom_node->total_use_time -= num_of_week*(end_class-start_class+1);

    COURSE_NODE *course_temp = proom_node->firstarc, *course_prior = NULL;
    //遍历课堂结点信息链
    while(course_temp)
    {
        //分情况讨论
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
* 函数名称：ModiRoomNode
* 函数参数：room_hd 教室结点头指针
* 函数功能：修改教室信息结点
* 返回值：修改成功则返回TRUE,失败则返回FALSE
**/
bool ModiRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];
    room_hd = room_hd->next;
    proom_node = room_hd;
    if(proom_node)
    {
        printf("请输入您所要修改的教室的名称:");
        getchar();
        scanf("%s", room_name);
    }
    else
    {
        printf("课程链表暂未创建!");
        return false;
    }

    if((proom_node = SeekRoom(room_hd, room_name))!=NULL)   //输入的教室不存在
    {
        printf("请输入您所要修改的教室的容量:");
        getchar();
        scanf("%d", &proom_node->volume);   //修改教室容量

        printf("修改信息成功!");
        return true;
    }
    else
    {
        printf("您输入的教室不存在\n");
        return false;
    }
}

/**
* 函数名称：InsertRoomNode
* 函数参数：room_hd 教师链表头指针指针
* 函数功能：插入教师信息结点
* 返回值：无
**/
void InsertRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    proom_node = (ROOM_NODE *)malloc(sizeof(ROOM_NODE));    //给待插入课程结点分配空间
    if(proom_node)
    {
        getchar();
        printf("请输入您所要添加的教室的名称:");
        scanf("%s", proom_node->room_name);
    }
    else
    {
        printf("分配空间失败!");
        return;
    }

    if(SeekRoom(room_hd, proom_node->room_name)!=NULL)      //查找是否有重名的教室
    {
        printf("输入教室已存在!\n");
        free(proom_node);       //释放已经申请的空间
        return;
    }
    else
    {
        printf("请输入教室容量: ");
        getchar();
        scanf("%d", &proom_node->volume);
        //初始化教室相关信息
        proom_node->day_use_time = 0;
        proom_node->night_use_time = 0;
        proom_node->total_use_time = 0;
        proom_node->winter_use_time = 0;
        proom_node->summer_use_time = 0;

        //将新结点从链表头部插入
        proom_node->next = room_hd->next;
        room_hd->next = proom_node;
        proom_node->firstarc = NULL;
        printf("插入成功!\n");

        return;
    }
}

/**
* 函数名称：DelRoomNode
* 函数参数：hd 教室结点头指针
* 函数功能：删除教室信息结点
* 返回值：删除成功则返回TRUE,失败则返回FALSE
**/
bool DelRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];

    proom_node = room_hd->next;
    if(proom_node)
    {
        getchar();
        printf("请输入您所要删除的教室的名称:");
        scanf("%s", room_name);
    }
    else
    {
        printf("课程链表暂未创建!");
        return false;
    }

    if((proom_node=SeekRoom(room_hd, room_name))!=NULL)     //找到指定教室名称的教室结点
    {
        if(proom_node->total_use_time>0)
        {
            printf("该教室仍然承担教学任务!\n");
            return false;
        }
        ROOM_NODE *pprior_node = PriorRoomElem(room_hd, room_name); //找到待删除节点的前驱结点
        pprior_node->next = proom_node->next;
        pprior_node = proom_node;
        proom_node = proom_node->next;
        free(pprior_node);
        printf("删除成功!\n");
        return true;
    }
    else
    {
        printf("您输入的教室不存在\n");
        return false;
    }
}


/**
* 函数名称：SeekCuri
* 函数参数：curi_name 待比对的课程名称,
            hd 课程链首结点指针
* 函数功能：查找课程信息链中是否有与curi_name重名的选项
* 返回值：查中时输出课程信息, 否则返回NULL
**/
bool SearchRoomNode(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];

    printf("请输入需要查找的教室名称\n");
    getchar();
    scanf("%s", room_name);
    proom_node = SeekRoom(room_hd, room_name);
    if(!proom_node)
    {
        printf("查找教室失败\n");
        return false;
    }

    if(proom_node)  //教室结点被顺利查找
    {
        printf("教室容量:%d\n", proom_node->volume);
        printf("夏季使用时长:%d节课\n", proom_node->summer_use_time);
        printf("冬季使用时长:%d节课\n", proom_node->winter_use_time);
        printf("夜晚使用时长:%d节课\n", proom_node->night_use_time);
        return true;
    }
    else if(!(room_hd->next))
    {
        printf("教室数为0！\n");
        return false;
    }
    return false;
}

/**
* 函数名称：SeekCuri
* 函数参数：curi_name 待比对的课程名称,
            hd 课程链首结点指针
* 函数功能：查找课程信息链中是否有与curi_name重名的选项
* 返回值：查中时返回结点的地址, 否则返回NULL
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
 * 函数名称：PriorCuriElem
 * 函数参数：线性表L，待查找前驱结点的课程名称
 * 函数功能：查找指定课程结点的前驱结点
 * 返回值：成功则返回指向前驱结点的指针，否则返回NULL
 **/
CURI_NODE* PriorCuriElem(CURI_NODE * L, char *curi_name)
{
    CURI_NODE* pcuri_node = L->next;              //遍历指针
    CURI_NODE* pprior_node = L;                   //前驱指针
    if(SeekCuri(L, curi_name)==NULL)
    {
        return NULL;
    }
    while (pcuri_node->next && strcmp(pcuri_node->curi_name, curi_name))    //后继不为空并且遍历指针指向元素非查找元素
    {
        pcuri_node = pcuri_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pcuri_node->next)&&strcmp(pcuri_node->curi_name, curi_name))       //后继为空且遍历指针指向元素还是不是查找元素
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //返回指向前驱结点的指针
    }
}

/**
 * 函数名称：PriorRoomElem
 * 函数参数：线性表L，待查找前驱结点的教室名称
 * 函数功能：查找指定教室结点的前驱结点
 * 返回值：成功则返回指向前驱结点的指针，否则返回NULL
 **/
ROOM_NODE* PriorRoomElem(ROOM_NODE * L, char *room_name)
{
    ROOM_NODE* proom_node = L->next;              //遍历指针
    ROOM_NODE* pprior_node = L;                   //前驱指针
    if(SeekRoom(L, room_name)==NULL)
    {
        return NULL;
    }
    while (proom_node->next && strcmp(proom_node->room_name, room_name))    //后继不为空并且遍历指针指向元素非查找元素
    {
        proom_node = proom_node->next;
        pprior_node = pprior_node->next;
    }
    if((!proom_node->next)&&strcmp(proom_node->room_name, room_name))       //后继为空且遍历指针指向元素还是不是查找元素
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //返回指向前驱结点的指针
    }
}

/**
* 函数名称：SaveRoomNode
* 函数参数：room_hd 教室链首结点指针
* 函数功能：保存课程链至txt文件
* 返回值：保存成功返回TRUE, 否则返回FALSE
**/
bool SaveRoomNode(ROOM_NODE * room_hd)
{
    if(!room_hd)
    {
        printf("没有教室存在!\n");
        return false;
    }
    room_hd = room_hd->next;
    ROOM_NODE *proom_node;
    FILE *pfout;    //文件指针

    pfout = fopen(gp_room_info_filename, "w");
    if(!pfout)  //文件指针为空
    {
        printf("课程文件保存失败！\n");
        return false;
    }

    //遍历课程结点并保存
    for (proom_node = room_hd; proom_node != NULL; proom_node = proom_node->next)
    {
        fprintf(pfout, "%s\t", proom_node->room_name);          //写入教室名称
        fprintf(pfout, "%d\t", proom_node->summer_use_time);    //写入教室夏天使用时长
        fprintf(pfout, "%d\t", proom_node->winter_use_time);    //写入教室冬天使用时长
        fprintf(pfout, "%d\t", proom_node->day_use_time);       //写入教室白天使用时长
        fprintf(pfout, "%d\t", proom_node->night_use_time);     //写入教室夜晚使用时长
        fprintf(pfout, "%d\t", proom_node->total_use_time);     //写入教室总体使用时长
        fprintf(pfout, "%d\n", proom_node->volume);             //写入课程容量
    }
    fclose(pfout);  //关闭文件指针
    return true;
}

/**
 * 函数名称：ListCuriTrabverse
 * 函数参数：课程单链表头结点指针
 * 函数功能：依次显示线性表中的每个元素。
 * 返回值：成功遍历返回OK，否则返回ERROR
 **/
Status ListCuriTrabverse(CURI_NODE * curi_hd)
{
    curi_hd = curi_hd->next;
    CURI_NODE * pcuri_node = curi_hd;
    if(!pcuri_node)
    {
        return ERROR;
    }
    printf("\t\t\t课程名称\t\t课程学分\t\t课程学时\t\t课堂数量\n");
    while (pcuri_node)
    {
        printf("\t\t%-16s\t\t%-8.1f\t\t%-8.1f\t\t%-8d\n", pcuri_node->curi_name, pcuri_node->credit, pcuri_node->hours, pcuri_node->course_num);
        pcuri_node = pcuri_node->next;
    }
    return OK;
}

/**
 * 函数名称：ListRoomTrabverse
 * 函数参数：教室单链表头结点指针
 * 函数功能：依次显示线性表中的每个元素。
 * 返回值：成功遍历返回OK，否则返回ERROR
 **/
Status ListRoomTrabverse(ROOM_NODE * room_hd)
{
    room_hd = room_hd->next;
    ROOM_NODE * proom_node = room_hd;
    if(!proom_node)
    {
        return ERROR;
    }

    while (proom_node)  //遍历教室结点链并输出相应信息
    {
        printf("教室名称为%s    教室容量为%d人\n", proom_node->room_name, proom_node->volume);
        printf("白天使用时长%d节课    夜晚使用时长%d节课\n", proom_node->day_use_time, proom_node->night_use_time);
        printf("夏天使用时长%d节课    冬天使用时长%d节课\n", proom_node->summer_use_time, proom_node->winter_use_time);
        proom_node = proom_node->next;
    }
    return OK;
}

/**
 * 函数名称：ListClassTrabverse
 * 函数参数：班级单链表头结点指针
 * 函数功能：依次显示线性表中的每个元素
 * 返回值：成功遍历返回OK，否则返回ERROR
 **/
Status ListClassTrabverse(CLASS_NODE * class_hd)
{
    class_hd = class_hd->next;
    CLASS_NODE * pclass_node = class_hd;
    if(!pclass_node)
    {
        return ERROR;
    }

    while (pclass_node) //遍历班级信息并输出
    {
        printf("%s    %d人\n", pclass_node->class_name, pclass_node->class_stu_amount);
        printf("该班级学期内白天课程共%d节，晚上课程共%d节\n", pclass_node->day_class_hours, pclass_node->night_class_hours);
        printf("该班级学期内夏天课程共%d节，冬天课程共%d节\n", pclass_node->summer_class_hours, pclass_node->winter_class_hours);
        pclass_node = pclass_node->next;
    }
    return OK;
}

/**
 * 函数名称：ListProfTrabverse
 * 函数参数：教师单链表头结点指针
 * 函数功能：依次显示线性表中的每个元素
 * 返回值：成功遍历返回OK，否则返回ERROR
 **/
Status ListProfTrabverse(PROF_NODE * prof_hd)
{
    prof_hd = prof_hd->next;
    PROF_NODE * pprof_node = prof_hd;
    if(!pprof_node)
    {
        return ERROR;
    }
    while (pprof_node)  //遍历教师信息并且输出
    {
        printf("%s    %s\n", pprof_node->prof_name, pprof_node->prof_title);
        printf("一学期承担%d个课堂，%.1f学时的教学任务\n", pprof_node->prof_num_course, pprof_node->prof_hours);
        pprof_node = pprof_node->next;
    }
    return OK;
}

/**
 * 函数名称：ListCourseTrabverse
 * 函数参数：课堂单链表头结点指针
 * 函数功能：依次显示线性表中的每个元素
 * 返回值：成功遍历返回OK，否则返回ERROR
 **/
Status ListCourseTrabverse(COURSE_NODE * course_hd)
{
    course_hd = course_hd->next;
    COURSE_NODE * pcourse_node = course_hd;
    if(!pcourse_node)
    {
        return ERROR;
    }
    while (pcourse_node)    //遍历课堂信息并且输出
    {
        FormatPrint(pcourse_node);
        printf("该课堂的总人数为：%d\n\n", pcourse_node->total_stu_num);
        pcourse_node = pcourse_node->next;
    }
    return OK;
}

/**
 * 函数名称：ListClassCourseTrabverse
 * 函数参数：班级单链表头结点指针
 * 函数功能：依次显示班级-课堂邻接表中的班级-课堂关系
 * 返回值：成功遍历返回OK，否则返回ERROR
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
    while (pclass_node) //遍历班级信息结点
    {
        pcourse_node = pclass_node->firstarc;
        printf("%s    %d:\n", pclass_node->class_name, pclass_node->class_stu_amount);
        //遍历到某个班级结点的时候输出邻接表中该结点后的所有课堂信息
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
 * 函数名称：ListProfCourseTrabverse
 * 函数参数：教师单链表头结点指针
 * 函数功能：依次显示教师-课堂邻接表中的教师-课堂关系
 * 返回值：成功遍历返回OK，否则返回ERROR
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
    while (pprof_node)  //遍历教师信息结点
    {
        pcourse_node = pprof_node->firstarc;
        printf("%s    %s:\n", pprof_node->prof_name, pprof_node->prof_title);
        //遍历到某个教师结点的时候输出邻接表中该结点后的所有课堂信息
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
 * 函数名称：ListRoomCourseTrabverse
 * 函数参数：教室单链表头结点指针
 * 函数功能：依次显示教室-课堂邻接表中的教室-课堂关系
 * 返回值：成功遍历返回OK，否则返回ERROR
 **/
Status ListRoomCourseTrabverse(ROOM_NODE * room_hd)
{

    ROOM_NODE * proom_node = room_hd->next;
    COURSE_NODE * pcourse_node;
    if(!proom_node)
    {
        return ERROR;
    }
    printf("教室名\t\t授课教师\t\t课堂人数\t\t课堂id\n");
    while (proom_node)
    {
        pcourse_node = proom_node->firstarc;
        //遍历到某个教室结点的时候输出邻接表中该结点后的所有课堂信息
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
* 函数名称：Cre_Room_Course_List
* 函数参数：class_hd 班级链首结点指针
            course_class_head 用于创建班级-课堂有向图的课堂链
* 函数功能：创建班级-课堂有向图
* 返回值：保存成功返回指向图中第一个班级结点的指针, 否则返回NULL
**/
ROOM_NODE * Cre_Room_Course_List(ROOM_NODE * room_hd, COURSE_NODE * gp_course_head)
{
    COURSE_NODE *pcourse_node = gp_course_head->next;
    COURSE_NODE *qcourse_node, *qtemp = NULL;
    ROOM_NODE *proom_node = NULL;

    while(pcourse_node) //遍历课堂结点信息链
    {
        qcourse_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        proom_node = room_hd->next;
        while(proom_node)   //遍历教室结点信息链
        {
            if(strstr(qcourse_node->course_room_name, proom_node->room_name))   //如果教室名称在课堂的教室名字符串里面
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
* 函数名称：cpycoursenode
* 函数参数：a 信息复制的目标课堂结点
            b 复制信息的来源
* 函数功能：将b中的信息全部复制到a中
* 返回值：复制成功返回true, 否则返回false
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

    //复制周期内天数
    for(i=0; i<b->term_period; i++)
    {
        a->day_period[i] = b->day_period[i];
    }
    //依次复制班级名称
    for(i=0; i<b->course_class_num; i++)
    {
        strcpy(a->course_class_name[i], b->course_class_name[i]);
    }
    //依次复制上课周次
    for(i=0; i<b->term_period; i++)
    {
        for(j=0; j<b->day_period[i]; j++)
        {
            a->course_week_period[i][j]=b->course_week_period[i][j];
        }
    }
    //依次复制上课节次
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
* 函数名称：Cre_Class_Course_List
* 函数参数：class_hd 班级链首结点指针
            course_class_head 用于创建班级-课堂有向图的课堂链
* 函数功能：创建班级-课堂有向图
* 返回值：保存成功返回指向图中第一个班级结点的指针, 否则返回NULL
**/
CLASS_NODE* Cre_Class_Course_List(CLASS_NODE *class_hd, COURSE_NODE *gp_course_head)
{
    COURSE_NODE *pcourse_node = gp_course_head->next;
    COURSE_NODE *qcourse_node = NULL, *qtemp = NULL;
    CLASS_NODE *pclass_node = NULL;
    int i;

    while(pcourse_node)     //遍历课堂信息链
    {
        qcourse_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        for(i=0; i<qcourse_node->course_class_num; i++)
        {
            pclass_node = class_hd->next;
            while(pclass_node)  //遍历班级信息链
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
* 函数名称：Cre_Prof_Course_List
* 函数参数：prof_hd 班级链首结点指针
            cprof_courese_hd 用于创建教师-课堂有向图的课堂链
* 函数功能：创建教师-课堂有向图
* 返回值：保存成功返回指向图中第一个教师结点的指针, 否则返回NULL
**/
PROF_NODE* Cre_Prof_Course_List(PROF_NODE *prof_hd, COURSE_NODE *cprof_courese_hd)
{
    COURSE_NODE *pcourse_node = cprof_courese_hd->next;
    COURSE_NODE *qcourse_node = NULL, *qtemp = NULL;
    PROF_NODE *pprof_node = NULL;

    while(pcourse_node)     //遍历课堂信息链
    {
        qcourse_node = pcourse_node;
        pcourse_node = pcourse_node->next;
        pprof_node = prof_hd->next;
        while(pprof_node)       //遍历教师信息链
        {
            if(strcmp(qcourse_node->course_prof_name, pprof_node->prof_name)==0)    //课堂的教师姓名ihe教师姓名相同
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
* 函数名称：InitiaProfList
* 函数参数：线性表L的地址
* 函数功能：新建教师表头结点，并将next指针置空
* 返回值：成功构造返回OK，否则返回ERROR
**/
Status InitaProfList(PROF_NODE **L)
{
    (*L) = (PROF_NODE* )malloc(sizeof(PROF_NODE));    //新建表头结点
    if(!(*L))
    {
        printf("创建头结点失败\n");
        return ERROR;
    }
    (*L)->next = NULL;
    (*L)->firstarc = NULL;
    strcpy((*L)->prof_name, "phead");
    strcpy((*L)->prof_title, "phead");
    return OK;
}

/**
* 函数名称：ModiProfNode
* 函数参数：prof_hd 教师信息链头结点指针
* 函数功能：修改教师信息结点
* 返回值：修改成功则返回true,失败则返回false
**/
bool ModiProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[12];     //需要修改的教师结点
    prof_hd = prof_hd->next;
    pprof_node = prof_hd;

    if(pprof_node)
    {
        printf("请输入您所要修改的教师的姓名:");
        getchar();
        scanf("%s", prof_name);
    }
    else
    {
        printf("教师链表暂未创建!");
        return false;
    }

    if((pprof_node = SeekProf(prof_hd, prof_name))!=NULL)   //查找到教师姓名
    {
        printf("请输入您所要修改的教师的职位:");
        getchar();
        scanf("%s", pprof_node->prof_title);

        printf("修改信息成功!");
        return true;
    }
    else
    {
        printf("您输入的教师不存在\n");
        return false;
    }
}

/**
* 函数名称：InsertProfNode
* 函数参数：prof_hd 教师信息链头结点指针
* 函数功能：插入教师信息结点
* 返回值：无
**/
void InsertProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    pprof_node = (PROF_NODE *)malloc(sizeof(PROF_NODE));
    if(pprof_node)
    {
        getchar();
        printf("请输入您所要添加的教师的姓名:");
        scanf("%s", pprof_node->prof_name);
    }
    else
    {
        printf("分配空间失败!");
        return;
    }

    if(SeekProf(prof_hd, pprof_node->prof_name)!=NULL)
    {
        printf("输入教师已存在!\n");
        free(pprof_node);       //释放已分配的空间
        return;
    }
    else
    {
        printf("请输入教师职位: ");
        getchar();
        scanf("%s", pprof_node->prof_title);
        printf("请输入教师年龄：");
        getchar();
        scanf("%d", &pprof_node->age);
        //初始化教师结点的统计信息
        pprof_node->prof_hours = 0;
        pprof_node->prof_num_course = 0;

        pprof_node->next = prof_hd->next;
        prof_hd->next = pprof_node;
        pprof_node->firstarc = NULL;
        pprof_node->prof_hours = 0;
        printf("插入成功!\n");

        return;
    }
}

/**
* 函数名称：DelProfNode
* 函数参数：hd 课程结点头指针
* 函数功能：删除课程信息结点
* 返回值：删除成功则返回TRUE,失败则返回FALSE
**/
bool DelProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[30];

    pprof_node = prof_hd->next;
    if(pprof_node)
    {
        getchar();
        printf("请输入您所要删除的教师的名称:");
        scanf("%s", prof_name);
    }
    else
    {
        printf("教师链表暂未创建!");
        return false;
    }

    if((pprof_node = SeekProf(prof_hd, prof_name))!=NULL)   //找到对应教师名称的结点
    {
        if(pprof_node->prof_num_course>0)
        {
            printf("该教师尚在教学!\n");
            return false;
        }
        PROF_NODE *pprior_node = PriorProfElem(prof_hd, prof_name); //找到教师结点的前驱结点
        pprior_node->next = pprof_node->next;
        pprior_node = pprof_node;
        pprof_node = pprof_node->next;
        free(pprior_node);
        printf("删除成功!\n");
        return true;
    }
    else
    {
        printf("您输入的教师不存在\n");
        return false;
    }
}

/**
* 函数名称：SeekCuri
* 函数参数：curi_name 待比对的课程名称,
            hd 课程链首结点指针
* 函数功能：查找课程信息链中是否有与curi_name重名的选项
* 返回值：查中时输出课程信息, 否则返回NULL
**/
bool SearchProfNode(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[30];

    printf("请输入需要查找的教师姓名\n");
    getchar();
    scanf("%s", prof_name);
    pprof_node = SeekProf(prof_hd, prof_name);
    if(!pprof_node)
    {
        printf("查找教师失败\n");
        return false;
    }

    if(pprof_node)  //遍历教师结点并输出信息
    {
        printf("教师职称:%s\n", pprof_node->prof_title);
        printf("本学期授课总学时:%.1f\n", pprof_node->prof_hours);
        printf("本学期授课课堂数:%d\n", pprof_node->prof_num_course);
        return true;
    }
    else if(!(prof_hd->next))
    {
        printf("教师数为0！\n");
        return false;
    }
    return false;
}

/**
* 函数名称：SeekCuri
* 函数参数：curi_name 待比对的课程名称,
            hd 课程链首结点指针
* 函数功能：查找课程信息链中是否有与curi_name重名的选项
* 返回值：查中时返回结点的地址, 否则返回NULL
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
        if (strcmp(prof_name, pprof_node->prof_name) == 0)  //比对教师信息是否相同
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
 * 函数名称：PriorProfElem
 * 函数参数：线性表L，待查找前驱结点的教师名称
 * 函数功能：查找指定教师结点的前驱结点
 * 返回值：成功则返回指向前驱结点的指针，否则返回NULL
 **/
PROF_NODE* PriorProfElem(PROF_NODE * L, char *prof_name)
{
    PROF_NODE* pprof_node = L->next;              //遍历指针
    PROF_NODE* pprior_node = L;                   //前驱指针
    if(SeekProf(L, prof_name)==NULL)
    {
        return NULL;
    }
    while (pprof_node->next && strcmp(pprof_node->prof_name, prof_name))    //后继不为空并且遍历指针指向元素非查找元素
    {
        pprof_node = pprof_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pprof_node->next)&&strcmp(pprof_node->prof_name, prof_name))       //后继为空且遍历指针指向元素还是不是查找元素
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //返回指向前驱结点的指针
    }
}

/**
* 函数名称：SaveCuriNode
* 函数参数：hd 课程链首结点指针
* 函数功能：保存课程链至txt文件
* 返回值：保存成功返回TRUE, 否则返回FALSE
**/
bool SaveProfNode(PROF_NODE * prof_hd)
{
    if(!prof_hd)
    {
        printf("没有教师存在!\n");
        return false;
    }
    prof_hd = prof_hd->next;
    PROF_NODE *pprof_node;
    FILE *pfout;    //文件指针

    pfout = fopen(gp_prof_info_filename, "w");
    if(!pfout)  //文件指针为空
    {
        printf("教师文件保存失败！\n");
        fclose(pfout);
        return false;
    }

    //遍历教师结点链
    for (pprof_node = prof_hd; pprof_node != NULL; pprof_node = pprof_node->next)
    {
        /*保存教师信息*/
        fprintf(pfout, "%s\t", pprof_node->prof_name);
        fprintf(pfout, "%s\t", pprof_node->prof_title);
        fprintf(pfout, "%f\t", pprof_node->prof_hours);
        fprintf(pfout, "%d\t", pprof_node->prof_num_course);
        fprintf(pfout, "%d\n", pprof_node->age);
    }
    fclose(pfout);  //文件指针关闭
    return true;
}

/**
* 函数名称：InitiaClassList
* 函数参数：线性表L的地址
* 函数功能：新建一个表头结点，并将next指针置空
* 返回值：成功构造返回OK，否则返回ERROR
**/
Status InitaClassList(CLASS_NODE **L)
{
    (*L) = (CLASS_NODE* )malloc(sizeof(CLASS_NODE));    //新建表头结点
    if(!(*L))
    {
        printf("创建头结点失败\n");
        return ERROR;
    }
    (*L)->next = NULL;
    (*L)->class_stu_amount = -1;
    strcpy((*L)->class_name, "chead");
    return OK;
}

/**
* 函数名称：ModiClassNode
* 函数参数：class_hd 教师信息链头结点指针
* 函数功能：修改教师信息结点
* 返回值：修改成功则返回true,失败则返回false
**/
bool ModiClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];
    class_hd = class_hd->next;
    pclass_node = class_hd;
    int old_stu_amount = 0;    //修改之前的学生数量

    if(pclass_node)
    {
        printf("请输入您所要修改的班级的名称:");
        getchar();
        scanf("%s", class_name);
    }
    else
    {
        printf("班级链表暂未创建!");
        return false;
    }

    if((pclass_node = SeekClass(class_hd, class_name))!=NULL)   //如果输入的班级存在
    {
        old_stu_amount = pclass_node->class_stu_amount;
        printf("请输入您所要修改的班级的人数:");
        getchar();
        scanf("%d", &pclass_node->class_stu_amount);    //修改班级人数
        if(ModiClassInCourse(gp_course_head, pclass_node, old_stu_amount))  //修改邻接表中的课程信息
        {
            printf("修改信息成功!");
            return true;
        }
    }
    else
    {
        printf("您输入的班级不存在\n");
        return false;
    }

    return false;
}

/**
* 函数名称：ModiClassInCourse
* 函数参数：course_hd 课堂信息链头结点指针
            pclass_node 需要修改的班级信息结点
            old_stu_amount 修改前的班级学生数目
* 函数功能：修改教师信息结点
* 返回值：修改成功则返回true,失败则返回false
**/
bool ModiClassInCourse(COURSE_NODE *course_hd, CLASS_NODE *pclass_node, int old_stu_amount)
{
    int flag = 0, i = 0;
    COURSE_NODE * pcourse = course_hd->next;

    //遍历每个课堂结点信息
    while(pcourse)
    {
        for(i=0; i<pcourse->course_class_num; i++)
        {
            if(strcmp(pcourse->course_class_name[i], pclass_node->class_name)==0)
            {
                flag = 1;
                pcourse->total_stu_num = pcourse->total_stu_num+pclass_node->class_stu_amount-old_stu_amount;
                //修改邻接表中的课堂结点信息
                ModiCrossForClass(pcourse);
            }
        }
        pcourse = pcourse->next;
    }

    SaveCourseNode(gp_course_head);     //保存课堂信息
    if(flag)
        return true;
    else
        return false;
}

/**
* 函数名称：ModiCrossForClass
* 函数参数：pcourse_node 课堂信息链头结点指针
* 函数功能：修改邻接表中的课堂信息结点
* 返回值：无
**/
void ModiCrossForClass(COURSE_NODE *pcourse_node)
{
    COURSE_NODE *course_temp;
    int i;
    PROF_NODE *pprof_node=SeekProf(gp_prof_head, pcourse_node->course_prof_name);
    CLASS_NODE *pclass_node;
    ROOM_NODE *proom_node = gp_room_head->next;

    course_temp = pprof_node->firstarc;
    while(course_temp)  //更新教师结点后的课堂链的学生信息
    {
        if(strcmp(course_temp->course_id, pcourse_node->course_id)==0)
        {
            course_temp->total_stu_num = pcourse_node->total_stu_num;
        }
        course_temp = course_temp->next;
    }

    for(i=0; i<pcourse_node->course_class_num; i++)
    {
        pclass_node = SeekClass(gp_class_head, pcourse_node->course_class_name[i]);     //搜寻班级结点
        course_temp = pclass_node->firstarc;
        while(course_temp)  //更新班级结点后的课堂链的学生信息
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
        while(course_temp)  //更新教室结点后的课堂链的学生信息
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
* 函数名称：InsertClassNode
* 函数参数：class_hd 班级信息链头结点
* 函数功能：插入班级信息结点
* 返回值：无
**/
void InsertClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    pclass_node = (CLASS_NODE *)malloc(sizeof(CLASS_NODE));    //给待插入课程结点分配空间
    if(pclass_node)
    {
        getchar();
        printf("请输入您所要添加的班级的名称:");
        scanf("%s", pclass_node->class_name);
    }
    else
    {
        printf("分配空间失败!");
        return;
    }

    if(SeekClass(class_hd, pclass_node->class_name)!=NULL)      //检查班级重名情况
    {
        printf("输入班级名已存在!\n");
        free(pclass_node);
        return;
    }
    else
    {
        printf("请输入班级学生人数: ");
        getchar();
        scanf("%d", &pclass_node->class_stu_amount);
        //初始化班级结点相关信息
        pclass_node->night_class_hours = 0;
        pclass_node->day_class_hours = 0;

        pclass_node->next = class_hd->next;
        class_hd->next = pclass_node;
        pclass_node->firstarc = NULL;
        printf("插入成功!\n");

        return;
    }
}

/**
* 函数名称：DelClassNode
* 函数参数：class_hd 班级信息链头结点
* 函数功能：删除班级信息结点
* 返回值：删除成功则返回TRUE,失败则返回FALSE
**/
bool DelClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];

    pclass_node = class_hd->next;
    //输入需要删除的班级名称
    if(pclass_node)
    {
        getchar();
        printf("请输入您所要删除的班级的名称:");
        scanf("%s", class_name);
    }
    else
    {
        printf("班级链表暂未创建!");
        return false;
    }

    //搜寻指定名称的班级结点
    if((pclass_node = SeekClass(class_hd, class_name))!=NULL)   //找到待删除的班级结点
    {
        DelCourseAfterC(pclass_node, gp_course_head);   //修改删除班级结点后的其他信息
        //找到待删除结点的前驱结点
        CLASS_NODE *pprior_node = PriorClassElem(class_hd, class_name);
        pprior_node->next = pclass_node->next;
        pprior_node = pclass_node;
        pclass_node = pclass_node->next;
        free(pprior_node);
        printf("删除成功!\n");
        return true;
    }
    else
    {
        printf("您输入的班级不存在\n");
        return false;
    }
}

/**
* 函数名称：DelCourseAfterC
* 函数参数：pclass_node 班级信息结点
            course_hd 课堂信息链头结点
* 函数功能：删除班级信息结点后进行其余结点信息的修改
* 返回值：删除成功则返回TRUE,失败则返回FALSE
**/
void DelCourseAfterC(CLASS_NODE *pclass_node, COURSE_NODE *course_hd)
{
    int i ,j;
    COURSE_NODE *pcourse_node = pclass_node->firstarc, *qcourse_node = course_hd->next, *course_temp = NULL;
    //遍历课堂结点信息
    while(pcourse_node)
    {
        course_temp = pcourse_node;     //保存待删除或修改的结点的地址
        pcourse_node = pcourse_node->next;  //遍历指针后移
        //只有一个班级的情况
        if(course_temp->course_class_num==1)
        {
            //直接把那个课堂给删了
            qcourse_node = SeekCourse(course_hd, course_temp->course_id);
            DelWithoutId(qcourse_node);
        }
        else
        {
            qcourse_node = SeekCourse(course_hd, course_temp->course_id);
            //课堂内的学生总人数减去班级人数
            qcourse_node->total_stu_num-=pclass_node->class_stu_amount;
            //修改每个课堂结点的班级数目和班级名称
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
            qcourse_node->course_class_num--;   //删除一个班级，必须减一
        }
        free(course_temp);
    }
    return;
}

/**
* 函数名称：SearchClassNode
* 函数参数：class_hd 课程链首结点指针
* 函数功能：根据输入信息查找相应的班级结点
* 返回值：查中时输出班级信息, 否则返回NULL
**/
bool SearchClassNode(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];

    printf("请输入需要查找的班级名称:");
    getchar();
    scanf("%s", class_name);
    pclass_node = SeekClass(class_hd, class_name);
    if(!pclass_node)
    {
        printf("查找班级失败\n");
        return false;
    }

    if(pclass_node)     //查找班级结点成功
    {
        printf("班级学生数目:%d\n", pclass_node->class_stu_amount);
        printf("考试周上课节数:%d节课\n", pclass_node->winter_class_hours);
        printf("开学前两周上课节数:%d节课\n", pclass_node->summer_class_hours);
        printf("夜晚上课节数:%d节课\n", pclass_node->night_class_hours);
        return true;
    }
    else if(!(class_hd->next))
    {
        printf("班级数为0！\n");
        return false;
    }
    return false;
}


/**
* 函数名称：SeekClass
* 函数参数：class_name 待比对的班级名称,
            class_hd 班级链首结点指针
* 函数功能：查找班级信息链中是否有与class_name重名的结点
* 返回值：查中时返回结点的地址, 否则返回NULL
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
 * 函数名称：PriorClassElem
 * 函数参数：线性表L，待查找前驱结点的班级名称
 * 函数功能：查找指定班级结点的前驱结点
 * 返回值：成功则返回指向前驱结点的指针，否则返回NULL
 **/
CLASS_NODE* PriorClassElem(CLASS_NODE * L, char *class_name)
{
    CLASS_NODE* pclass_node = L->next;              //遍历指针
    CLASS_NODE* pprior_node = L;                    //前驱指针
    if(SeekClass(L, class_name)==NULL)
    {
        return NULL;
    }
    while (pclass_node->next && strcmp(pclass_node->class_name, class_name))    //后继不为空并且遍历指针指向元素非查找元素
    {
        pclass_node = pclass_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pclass_node->next)&&strcmp(pclass_node->class_name, class_name))       //后继为空且遍历指针指向元素还是不是查找元素
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //返回指向前驱结点的指针
    }
}

/**
* 函数名称：SaveClassNode
* 函数参数：class_hd 课程链头结点指针
* 函数功能：保存班级链至txt文件
* 返回值：保存成功返回TRUE, 否则返回FALSE
**/
bool SaveClassNode(CLASS_NODE * class_hd)
{
    if(!class_hd)
    {
        printf("没有班级存在!\n");
        return false;
    }
    class_hd = class_hd->next;
    CLASS_NODE *pclass_node;
    FILE *pfout;    //文件指针

    pfout = fopen(gp_class_info_filename, "w");
    if(!pfout)  //文件指针为空
    {
        printf("课程文件保存失败！\n");
        fclose(pfout);
        return false;
    }

    //遍历班级结点并保存
    for (pclass_node = class_hd; pclass_node != NULL; pclass_node = pclass_node->next)
    {
        /*保存班级信息*/
        fprintf(pfout, "%s\t", pclass_node->class_name);
        fprintf(pfout, "%d\t", pclass_node->class_stu_amount);
        fprintf(pfout, "%d\t", pclass_node->summer_class_hours);
        fprintf(pfout, "%d\t", pclass_node->winter_class_hours);
        fprintf(pfout, "%d\t", pclass_node->day_class_hours);
        fprintf(pfout, "%d\n", pclass_node->night_class_hours);
    }
    fclose(pfout);  //关闭文件
    return true;
}

/**
* 函数名称：InitaCourseList
* 函数参数：线性表L的地址
* 函数功能：新建课堂链表头结点，并将L的next指针置空
* 返回值：成功构造返回OK，否则返回ERROR
**/
Status InitaCourseList(COURSE_NODE **L)
{
    (*L) = (COURSE_NODE* )malloc(sizeof(COURSE_NODE));    //新建表头结点
    if(!(*L))
    {
        printf("创建头结点失败\n");
        return ERROR;
    }
    (*L)->term_period = -1;
    (*L)->next = NULL;
    return OK;
}

/**
* 函数名称：Initarray
* 函数参数：pcourse_node 指定课堂结点的指针
* 函数功能：初始化课堂结点的信息
* 返回值：无
**/
void Initarray(COURSE_NODE *pcourse_node)
{
    int i, j;
    for(i=0;i<5;i++)
    {
        pcourse_node->day_period[i]=0;  //初始化一周的上课天数
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            pcourse_node->course_week_period[i][j]=0;   //初始化每周的上课日期
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            pcourse_node->course_day_period[i][j][0]=0; //初始化每周的上课日期
            pcourse_node->course_day_period[i][j][1]=0;
        }
    }
    for(i=0;i<5;i++)
    {
        pcourse_node->course_term_period[i][0]=0;   //初始化上课节次
        pcourse_node->course_term_period[i][1]=0;
    }
    return;
}

/**
* 函数名称：InsertCourseNode
* 函数参数：course_hd 课堂链头结点指针
* 函数功能：插入课堂结点至课堂链表
* 返回值：保存成功返回链尾结点指针, 否则返回NULL
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
    //初始化课堂结点的统计信息，
    pcourse_node->term_period = 0;
    pcourse_node->total_stu_num = 0;

    int i = 0, j =0, op = 0;
    char prof_name[12], curi_name[30];
    int num_of_week, start_class, end_class;

    if(pcourse_node)
    {
        getchar();
        printf("请输入您添加的课堂id:\n");
        scanf("%s", pcourse_node->course_id);
    }
    else
    {
        printf("分配空间失败!");
        return;
    }

    //初始化其他信息
    Initarray(pcourse_node);

    if(SeekCourse(course_hd, pcourse_node->course_id)!=NULL)        //防止课堂id重合
    {
        printf("输入课堂id已存在！\n");
        free(pcourse_node);
        return;
    }
    else
    {
        printf("请输入课堂对应课程名称:");
        getchar();
        scanf("%s", curi_name);     //暂时存储输入流,以待检查
        if(!(pcuri_node=SeekCuri(gp_curi_head, curi_name)))
        {
            printf("该课程不存在!\n");
            free(pcourse_node);
            return;
        }
        strcpy(pcourse_node->course_curi_name, curi_name);

        printf("请输入课堂的教师名称:");
        getchar();
        scanf("%s", prof_name);     //暂时存储输入流,以待检查
        if(!(pprof_node=SeekProf(gp_prof_head, prof_name)))
        {
            printf("该教师不存在!\n");
            free(pcourse_node);
            return;
        }
        strcpy(pcourse_node->course_prof_name, prof_name);

        i = 0;
        int firstsubstr = 1;
        printf("请按提示输入上课时间段:\n");
        while(1)
        {
            int day_num = 0;
            printf("请输入分段上课周期：(如1~5周则输入1~5):\n");
            char classes[20] = {'\0'};
            getchar();
            scanf("%s", classes);
            if(!DealString1(classes, &pcourse_node->course_term_period[i][0], &pcourse_node->course_term_period[i][1]))
            {
                printf("输入有误!\n");
                InfoReturn();
                free(pcourse_node);
                return;
            }
            //scanf("%s", &pcourse_node->course_term_period[i][0], &pcourse_node->course_term_period[i][1]);
            num_of_week=pcourse_node->course_term_period[i][1]-pcourse_node->course_term_period[i][0]+1;      //计算上课周期中的周数

            printf("请输入该周期内的上课日期数:(如1,2,4代表周一周二和周四上课)\n");
            char week_date[15] = {'\0'};
            getchar();
            scanf("%s", week_date);
            if(!DealString3(week_date, pcourse_node->course_week_period[i]))
            {
                printf("输入有误!\n");
                InfoReturn();
                free(pcourse_node);
                return;
            }
            //getchar();
            //scanf("%d/%d/%d/%d/%d/%d", &pcourse_node->course_week_period[i][0], &pcourse_node->course_week_period[i][1], &pcourse_node->course_week_period[i][2], &pcourse_node->course_week_period[i][3], &pcourse_node->course_week_period[i][4], &pcourse_node->course_week_period[i][5]);
            //计算周期中一周内的上课天数
            for(day_num=0; pcourse_node->course_week_period[i][day_num]!=0; day_num++) ;

            printf("请按序输入每一天的上课时段和教室:\n");
            pcourse_node->term_period++;
            pcourse_node->day_period[i] = day_num;      //第i-1个上课周期中每周上课的天数
            for(j=0; j<day_num; j++)
            {
                int date = pcourse_node->course_week_period[i][j];
                printf("请输入周%d的上课时间段:(如1~4代表第一至四节课)\n", date);
                char room_name[30] = {'\0'};
                char period[10]={'\0'};
                getchar();
                scanf("%s", period);
                if(!DealString1(period, &pcourse_node->course_day_period[i][j][0], &pcourse_node->course_day_period[i][j][1]))
                {
                    printf("输入有误!\n");
                    InfoReturn();
                    free(pcourse_node);
                    return;
                }
                if(pcourse_node->course_day_period[i][j][0]<1||pcourse_node->course_day_period[i][j][0]>12
                    ||pcourse_node->course_day_period[i][j][1]<1||pcourse_node->course_day_period[i][j][1]>12)
                {
                    printf("输入时间越界!\n");
                    InfoReturn();
                    free(pcourse_node);
                    return;
                }
                start_class = pcourse_node->course_day_period[i][j][0];
                end_class = pcourse_node->course_day_period[i][j][1];

                printf("请输入该时间段内的教室:");
                getchar();
                scanf("%s", room_name);
                //检查输入的教室字符串
                if(!(proom_node=SeekRoom(gp_room_head, room_name)))
                {
                    printf("插入失败，请先创建教室的基本信息");
                    InfoReturn();   //信息回滚,使得教室，班级等信息回归插入之前的状态
                    free(pcourse_node);
                    return;
                }
                COURSE_NODE *course_temp = course_hd->next;
                while(course_temp)
                {
                    if(ContraRoom(proom_node, pcourse_node, course_temp))
                    {
                        printf("时间冲突!\n");
                        InfoReturn();   //信息回滚,使得教室，班级等信息回归插入之前的状态
                        free(pcourse_node);
                        return;
                    }
                    course_temp = course_temp->next;
                }
                //逗号分隔字符串
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
                //更新因为课堂结点而造成的教室信息改变
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

            printf("是否要继续输入上课时间段？(0代表不要，1代表要)");
            getchar();
            scanf("%d", &op);
            if(!op)
                break;
        }
        pcourse_node->term_period = i;      //课堂上课周期数目

        printf("请输入课堂容纳的班级数目:");
        getchar();
        scanf("%d", &pcourse_node->course_class_num);

        printf("请输入各个班级的名称(按回车分隔):\n");
        for(i=0; i<pcourse_node->course_class_num; i++)
        {
            char class_name[30] = {'\0'};
            getchar();
            scanf("%s", class_name);
            if(!(pclass_node=SeekClass(gp_class_head, class_name)))
            {
                printf("请先创建班级的基本信息!\n");
                InfoReturn();   //信息回滚,使得教室，班级等信息回归插入之前的状态
                free(pcourse_node);
                return;
            }
            //修改班级上课时间等信息
            UpdateClassUseTime(pclass_node, pcourse_node);

            strcpy(pcourse_node->course_class_name[i], class_name);
            pcourse_node->total_stu_num+=pclass_node->class_stu_amount;    //计算课堂总人数
        }

        FormatPrint(pcourse_node);
        pcourse_node->next = course_hd->next;
        course_hd->next = pcourse_node;

        //因课堂的修改而引起的其余各种结点的信息修改
        pcuri_node->course_num++;                       //修改一门课程下的课堂数目
        pprof_node->prof_hours+=pcuri_node->hours;      //插入课堂后，修改相应教师的工作时长
        pprof_node->prof_num_course++;                  //修改教师的教学课堂数目

        printf("插入成功!\n");
        InsertCrossList(pcourse_node);                  //将新增的课堂结点加入到邻接表中

        SaveClassNode(gp_class_head);                   //保存班级信息
        SaveRoomNode(gp_room_head);                     //保存教室信息
        SaveCuriNode(gp_curi_head);                     //保存课程信息
        SaveProfNode(gp_prof_head);                     //保存教师信息

        return;
    }
}

/**
* 函数名称：FormatPrint
* 函数参数：pcourse_node 课堂链结点指针
* 函数功能：格式化输出课堂信息
* 返回值：无
**/
void FormatPrint(COURSE_NODE *pcourse_node)
{
    int i;
    char temp[100] = {'\0'};    //如果不使用temp,那么pcourse_node->course_room_name将被更改
    strcpy(temp, pcourse_node->course_room_name);
    char *room_name = temp;
    char *split;

    printf("课堂id:%s\n", pcourse_node->course_id);
    printf("课程名称:%s\n", pcourse_node->course_curi_name);
    printf("教授姓名:%s\n", pcourse_node->course_prof_name);
    printf("班级名称:");
    for(i=0; i<pcourse_node->course_class_num; i++)
    {
        printf("%s ", pcourse_node->course_class_name[i]);
    }
    printf("上课周期为：\n");
    for (i=0; i<pcourse_node->term_period; i++)
    {
        int j = 0;
        if(pcourse_node->course_term_period[i][0]!=pcourse_node->course_term_period[i][1])
        {
            printf("%d-%d", pcourse_node->course_term_period[i][0], pcourse_node->course_term_period[i][1]);
            printf("周 ");
            while((j<pcourse_node->day_period[i]))
            {
                split = strtok(room_name, ",");
                printf("周");
                printf("%d ", pcourse_node->course_week_period[i][j]);
                printf("第");
                printf("%d-%d节 ", pcourse_node->course_day_period[i][j][0], pcourse_node->course_day_period[i][j][1]);
                printf("在%s教室", split);
                printf("\n");
                room_name = NULL;
                j++;
            }
        }
        else
        {
            printf("%d", pcourse_node->course_term_period[i][0]);
            printf("周 ");
            while((j<pcourse_node->day_period[i]))
            {
                split = strtok(room_name, ",");
                printf("周");
                printf("%d ", pcourse_node->course_week_period[i][j]);
                printf("第");
                printf("%d-%d节 ", pcourse_node->course_day_period[i][j][0], pcourse_node->course_day_period[i][j][1]);
                printf("在%s教室", split);
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
* 函数名称：InsertCourseWithoutInput
* 函数参数：pcourse_node 待插入课堂链结点指针
* 函数功能：插入课堂结点
* 返回值：无
**/
void InsertCourseWithoutInput(COURSE_NODE *pcourse_node)
{
    int i,j,num_of_week,start_class,end_class;
    PROF_NODE *pprof_node = SeekProf(gp_prof_head, pcourse_node->course_prof_name);
    CURI_NODE *pcuri_node = SeekCuri(gp_curi_head, pcourse_node->course_curi_name);
    COURSE_NODE *course_hd = gp_course_head;
    COURSE_NODE *course_temp = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
    CLASS_NODE *pclass_node = (CLASS_NODE *)malloc(sizeof(CLASS_NODE));

    cpycoursenode(course_temp, pcourse_node);   //复制pcourse_node的所有信息
    //修改课程信息
    pcuri_node->course_num++;
    pprof_node->prof_hours+=pcuri_node->hours;
    pprof_node->prof_num_course++;  //修改教师的执教课堂数目

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
            //修改教室信息
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
    for(i=0; i<pcourse_node->course_class_num; i++) //遍历并且修改班级信息
    {
        pclass_node = SeekClass(gp_class_head, pcourse_node->course_class_name[i]);
        UpdateClassUseTime(pclass_node, pcourse_node);
        pcourse_node->total_stu_num+=pclass_node->class_stu_amount;
    }
    pcourse_node->next = course_hd->next;
    course_hd->next = pcourse_node;

    InsertCrossList(pcourse_node);  //插入到每个邻接表中
    //保存修改的信息
    SaveClassNode(gp_class_head);
    SaveRoomNode(gp_room_head);
    SaveCuriNode(gp_curi_head);
    SaveProfNode(gp_prof_head);

    return;
}

/**
* 函数名称：InsertCrossList
* 函数参数：pcourse_node 等待插入到邻接表中的课堂结点指针
* 函数功能：将课堂结点插入到各邻接表中
* 返回值：无
**/
void InsertCrossList(COURSE_NODE *pcourse_node)
{
    int i,j;
    //插入教师-课堂邻接表
    PROF_NODE *pprof_node = SeekProf(gp_prof_head, pcourse_node->course_prof_name); //定位到教授课堂的教师的结点
    COURSE_NODE *course_prof = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
    cpycoursenode(course_prof, pcourse_node);   //将课堂结点除了指针域外的所有信息复制到待插入结点
    course_prof->next = pprof_node->firstarc;   //修改指针域
    pprof_node->firstarc = course_prof;
    //插入班级-课堂邻接表
    for(i=0; i<pcourse_node->course_class_num; i++)
    {
        COURSE_NODE *course_class = (COURSE_NODE *)malloc(sizeof(COURSE_NODE));
        CLASS_NODE *pclass_node = SeekClass(gp_class_head, pcourse_node->course_class_name[i]);
        cpycoursenode(course_class, pcourse_node);  //将课堂结点除了指针域外的所有信息复制到待插入结点
        //修改指针域
        course_class->next = pclass_node->firstarc;
        pclass_node->firstarc = course_class;
    }
    //插入教室-课堂邻接表
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
            //修改指针域
            course_room->next = proom_node->firstarc;
            proom_node->firstarc = course_room;
            room_name = NULL;
        }
    }
    return;
}

/**
* 函数名称：UpdateRoomUseTime
* 函数参数：proom_node 等待更新的教室结点指针
            num_of_week 在该教室的课堂持续周数
            start_class 在该教室的课堂开始上课的节数
            end_class 在该教室的课堂下课的节数
* 函数功能：插入课堂结点后更新教室信息结点的白天黑夜和总的使用时长
* 返回值：无
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
    //printf("\n名称：%s白天%d黑夜%d\n", proom_node->room_name, proom_node->day_use_time, proom_node->night_use_time);
    return;
}

/**
* 函数名称：UpdateClassUseTime
* 函数参数：pclass_node 等待更新的班级结点指针
            pcourse_node 新插入的课堂结点指针
* 函数功能：插入课堂结点后更新班级信息结点的内容
* 返回值：无
**/
void UpdateClassUseTime(CLASS_NODE * pclass_node, COURSE_NODE * pcourse_node)
{
    int i,j;
    //遍历班级某课堂的上课时间并统计早晚，冬夏的时间变化
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
            //printf("\n名称：%s白天%d黑夜%d\n", pclass_node->class_name, pclass_node->day_class_hours, pclass_node->night_class_hours);
        }
    }
    return;
}

/**
* 函数名称：SeekCourse
* 函数参数：course_name 待比对的课程名称,
            hd 课程链首结点指针
* 函数功能：查找课程信息链中是否有与course_name重名的选项
* 返回值：查中时返回结点的地址, 否则返回NULL
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
 * 函数名称：PriorCourseElem
 * 函数参数：线性表L，待查找前驱结点的课堂id
 * 函数功能：查找指定课堂结点的前驱结点
 * 返回值：成功则返回指向前驱课堂结点的指针，否则返回NULL
 **/
COURSE_NODE* PriorCourseElem(COURSE_NODE * L, char *course_id)
{
    COURSE_NODE* pcourse_node = L->next;              //遍历指针
    COURSE_NODE* pprior_node = L;                   //前驱指针
    if(SeekCourse(L, course_id)==NULL)
    {
        return NULL;
    }
    while (pcourse_node->next && strcmp(pcourse_node->course_id, course_id))    //后继不为空并且遍历指针指向元素非查找元素
    {
        pcourse_node = pcourse_node->next;
        pprior_node = pprior_node->next;
    }
    if((!pcourse_node->next)&&strcmp(pcourse_node->course_id, course_id))       //后继为空且遍历指针指向元素还是不是查找元素
    {
        return NULL;
    }
    else
    {
        return pprior_node;     //返回指向前驱结点的指针
    }
}


/**
* 函数名称：SaveCourseNode
* 函数参数：course_hd 课堂链头结点指针
* 函数功能：保存课堂链至txt文件
* 返回值：保存成功返回TRUE, 否则返回FALSE
**/
bool SaveCourseNode(COURSE_NODE * course_hd)
{
    int i=0, j=0, k=0;
    if(!course_hd)
    {
        printf("没有课堂存在!\n");
        return false;
    }
    course_hd = course_hd->next;
    COURSE_NODE *pcourse_node;
    FILE *pfout;    //文件指针

    pfout = fopen(gp_course_info_filename, "w");
    if(!pfout)
    {
        printf("课堂文件保存失败！\n");
        fclose(pfout);  //文件指针关闭
        return false;
    }

    /*遍历课堂信息链*/
    for (pcourse_node = course_hd; pcourse_node != NULL; pcourse_node = pcourse_node->next)
    {
        /*保存课堂信息*/
        fprintf(pfout, "%s\t", pcourse_node->course_id);
        fprintf(pfout, "%s\t", pcourse_node->course_curi_name);
        fprintf(pfout, "%s\t", pcourse_node->course_prof_name);
        fprintf(pfout, "%d\t", pcourse_node->course_class_num);
        /*遍历课堂信息链中的班级名称链*/
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
        /*遍历保存课堂信息链中上课起止节数*/
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
    fclose(pfout);  //文件指针关闭
    return true;
}

/**
* 函数名称：CreateCourseList
* 函数参数：course_hd 课堂链头结点指针
* 函数功能：保存课程链至txt文件
* 返回值：保存成功返回链尾结点指针, 否则返回NULL
**/
COURSE_NODE* CreateCourseList(COURSE_NODE *course_hd)
{
    int ret = 0, i = 0, j = 0, k = 0;
    COURSE_NODE * pcourse_node = NULL, * pprior_course_node = NULL;

    FILE *course_write = fopen("Course.txt", "r+");
    if(!course_write)
    {
        printf("打开文件失败！\n");
        fclose(course_write);   //关闭文件
        return NULL;
    }

    pprior_course_node = course_hd;

    while (!feof(course_write)) //扫描文件至文件尾部
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
    fclose(course_write);   //关闭文件
    return pcourse_node;
}

/**
* 函数名称：SearchCourseNodeByProf
* 函数参数：prof_hd 教师链表头结点指针
* 函数功能：根据教师查找课堂
* 返回值：查找成功返回true,查找失败返回false
**/
bool SearchCourseNodeByProf(PROF_NODE * prof_hd)
{
    PROF_NODE *pprof_node;
    char prof_name[30];

    printf("请输入需要查找的教师姓名\n");
    getchar();
    scanf("%s", prof_name);
    pprof_node = SeekProf(prof_hd, prof_name);  //查找教师信息
    if(!pprof_node)     //教师信息指针不为空
    {
        printf("查找教师失败\n");
        return false;
    }

    COURSE_NODE * pcourse_node = pprof_node->firstarc;
    if(!pcourse_node)   //如果教师结点后面一个课堂结点都没有
    {
        printf("该教师不承担授课任务\n");
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
* 函数名称：SearchCourseNodeByRoom
* 函数参数：room_hd 教室结点链头指针
* 函数功能：根据教室输出这个教室里的课堂信息
* 返回值：查找成功返回true,否则返回false
**/
bool SearchCourseNodeByRoom(ROOM_NODE * room_hd)
{
    ROOM_NODE *proom_node;
    char room_name[30];

    printf("请输入需要查找的教室名称\n");
    getchar();
    scanf("%s", room_name);
    proom_node = SeekRoom(room_hd, room_name);
    if(!proom_node)
    {
        printf("查找教室失败\n");
        return false;
    }

    COURSE_NODE * pcourse_node = proom_node->firstarc;

    if(!pcourse_node)
    {
        printf("该教室中没有课堂\n");
        return false;
    }
    while(pcourse_node) //遍历课堂信息并且输出
    {
        //printf("课堂id为%s\n课堂总人数为:%d\n", pcourse_node->course_id, pcourse_node->total_stu_num);
        FormatPrint(pcourse_node);
        pcourse_node = pcourse_node->next;
    }
    return true;
}

/**
* 函数名称：SearchCourseNodeByCuri
* 函数参数：curi_hd 课程信息头结点指针,
* 函数功能：根据课程名查找课堂信息
* 返回值：查中时输出课堂信息,否则返回NULL
**/
bool SearchCourseNodeByCuri(CURI_NODE * curi_hd)
{
    CreateCourseList(gp_course_head);
    CreateCuriList(gp_curi_head);

    CURI_NODE *pcuri_node;
    char curi_name[30];
    int find = 0;

    printf("请输入需要查找的课程名称\n");
    getchar();
    scanf("%s", curi_name);
    pcuri_node = SeekCuri(curi_hd, curi_name);  //检查课程是否存在
    if(!pcuri_node)     //课程结点为空
    {
        printf("查找课程失败\n");
        return false;
    }

    COURSE_NODE * pcourse_node = gp_course_head;
    while(pcourse_node)     //遍历课堂结点
    {
        if(strcmp(pcourse_node->course_curi_name, curi_name)==0)
        {
            find = 1;
            //printf("课堂id为%s\n课堂总人数为:%d\n", pcourse_node->course_id, pcourse_node->total_stu_num);
            FormatPrint(pcourse_node);
        }
        pcourse_node = pcourse_node->next;
    }
    if(find)
        return true;
    else
    {
        printf("查找课程失败!");
        return false;
    }
}

/**
* 函数名称：SearchCourseNodeByTime
* 函数参数：course_node 课堂结点指针
* 函数功能：根据输入的时间查找课堂
* 返回值：查中时输出课堂信息, 否则返回NULL
**/
bool SearchCourseNodeByTime(COURSE_NODE * course_node)
{
    CreateCourseList(gp_course_head);

    COURSE_NODE *pcourse_node = gp_course_head->next;
    ROOM_NODE *proom_node;
    int week, date, start_class = 0, end_class = 0;
    char temp;
    int find = 0;

    printf("请输入需要查找的周次(如第7周则输入7)\n");
    getchar();
    scanf("%d", &week);
    printf("请输入需要查找的日期(如周三则输入3)\n");
    getchar();
    scanf("%d", &date);
    printf("请输入需要查找的节数，~分隔(如第1~4节则输入1~4,第1节则输入1\n");
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
            //printf("该时间段在%s\n", proom_node->room_name);
            find = 1;
        }
        pcourse_node = pcourse_node->next;
    }
    if(find)
        return true;
    else
    {
        printf("查找课程失败!");
        return false;
    }
}

/**
* 函数名称：TimeIn
* 函数参数：pcourse_node 课堂结点指针
             week 课堂所在的周数
             date 课堂一周在周几
             start_class
* 函数功能：从txt文件中读取课程链信息，创建课程链链表
* 返回值：如果课堂时间和输入的时间冲突,则返回课堂的教室结点指针，否则返回NULL
**/
ROOM_NODE* TimeIn(COURSE_NODE * pcourse_node, int week, int date, int start_class, int end_class)
{
    int i, j;
    bool condi1 = false, condi2 = false;    //如果冲突，需要满足两个条件

    char temp[100] = {'\0'};    //如果不使用temp承接,那么pcourse_node->course_room_name将被更改
    strcpy(temp, pcourse_node->course_room_name);
    char *room_name = temp;
    char *split;
    for(i=0; i<pcourse_node->term_period; i++)
    {
        if(pcourse_node->course_term_period[i][0]<=week
                && week<=pcourse_node->course_term_period[i][1])    //输入的周次是否在课堂的开课周期里面
            condi1 = true;
        for(j=0; j<pcourse_node->day_period[i]; j++)
        {
            split = strtok(room_name, ",");
            ROOM_NODE *proom_node = SeekRoom(gp_room_head, split);
            room_name = NULL;
            //检查课堂的上课日期是否和date相同
            if(pcourse_node->course_week_period[i][j]==date)
            {
                //检查课堂的起止节数是否在范围内
                if((start_class>=pcourse_node->course_day_period[i][j][0]&&start_class<=pcourse_node->course_day_period[i][j][1])
                        ||(end_class>=pcourse_node->course_day_period[i][j][0]&&end_class<=pcourse_node->course_day_period[i][j][1]))
                    condi2 = true;
            }
            //两个条件都满足，返回此时课堂所在的教室信息
            if(condi1&&condi2)
                return proom_node;
        }
    }
    return NULL;    //搜索失败返回NULL
}


/**
* 函数名称：SearchCourseNodeByClass
* 函数参数：class_hd 班级链首结点指针
* 函数功能：根据输入的班级查找相应的课堂
* 返回值：查中时输出课堂信息, 否则返回NULL
**/
bool SearchCourseNodeByClass(CLASS_NODE * class_hd)
{
    CLASS_NODE *pclass_node;
    char class_name[30];

    printf("请输入需要查找的班级名\n");
    getchar();
    scanf("%s", class_name);
    pclass_node = SeekClass(class_hd, class_name);  //查找对应的班级结点
    if(!pclass_node)
    {
        printf("查找班级失败\n");
        return false;
    }

    COURSE_NODE *pcourse_node = pclass_node->firstarc;

    if(!pcourse_node)
    {
        printf("该班级未参与课堂\n");
        return false;
    }
    while(pcourse_node)
    {
        //printf("课堂id为%s\n课堂总人数为:%d\n", pcourse_node->course_id, pcourse_node->total_stu_num);
        FormatPrint(pcourse_node);
        pcourse_node = pcourse_node->next;
    }
    return true;
}

/**
* 函数名称：Exit
* 函数参数：无
* 函数功能：释放内存，退出系统
* 返回值：无
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
    //printf("课堂内存释放完毕\n");

    while(pcuri_node)
    {
        qcuri_node = pcuri_node;
        pcuri_node = pcuri_node->next;
        free(qcuri_node);
        qcuri_node = NULL;
    }
    //printf("课程内存释放完毕\n");

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
    //printf("班级内存释放完毕\n");

    //遍历教师信息链表
    while(pprof_node)
    {
        COURSE_NODE * qqcourse_node = NULL;
        qprof_node = pprof_node;
        if(pprof_node->next)
            return;
        pprof_node = pprof_node->next;
        qcourse_node = pprof_node->firstarc;
        //删除教师链表后面的课堂链结点
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

    //遍历教室信息链表
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
    //printf("内存释放完毕\n");
    getchar();
    return;
}

/**
* 函数名称：InfoReturn
* 函数参数：无
* 函数功能：信息回滚
* 返回值：无
**/
void InfoReturn(void)
{
    CreateClassList(gp_class_head);
    CreateCuriList(gp_curi_head);
    CreateProfList(gp_prof_head);
    CreateRoomList(gp_room_head);
}

/**
* 函数名称：NewOldProf
* 函数参数：prof_hd 教师头结点指针
* 函数功能：输出新老教师名单供用户选择
* 返回值：无
**/
void NewOldProf(PROF_NODE *prof_hd)
{
    char prof_name[12];
    printf("新老教师名单如下:\n");
    PROF_NODE *pprof_node = prof_hd->next;
    while(pprof_node)
    {
        if(pprof_node->age<31)
        {
            printf(" %-12s\t新教师\t%d岁\n", pprof_node->prof_name, pprof_node->age);
        }
        else if(pprof_node->age>50)
        {
            printf(" %-12s\t老教师\t%d岁\n", pprof_node->prof_name, pprof_node->age);
        }
        pprof_node=pprof_node->next;
    }
    printf("请输入需要分析的新老教师姓名:\n");
    getchar();
    scanf("%s", prof_name);
    if(!(pprof_node = SeekProf(prof_hd, prof_name)))
    {
        printf("该教师不存在\n");
        return;
    }
    if(pprof_node->age<51&&pprof_node->age>30)  //教师为中年教师
    {
        printf("该教师是中年教师\n");
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
* 函数名称：NewAnalysis
* 函数参数：pprof_node 新教师结点指针
* 函数功能：分析新教师的安排课堂情况
* 返回值：无
**/
void NewAnalysis(PROF_NODE * pprof_node)
{
    if(pprof_node->prof_num_course>3)   //新教师教授课堂大于三个
    {
        printf("该新教师教授%d个课堂，承担教学任务过重\n", pprof_node->prof_num_course);
        return;
    }
    else
    {
        printf("该新教师教授%d个课堂，承担教学任务合理\n", pprof_node->prof_num_course);
        return;
    }
}

/**
* 函数名称：OldAnalysis
* 函数参数：pprof_node 老教师结点指针
* 函数功能：分析老教师的教学学时,爬楼层数
* 返回值：无
**/
void OldAnalysis(PROF_NODE *pprof_node)
{
    int floor_sum = 0;      //爬的楼层总数
    int class_time = 0;     //课堂数目
    float avg_floor = 0;    //平均爬的楼层数
    int existhigh = 0;      //标志变量，判断高楼层教室是否存在
    char highfloor[100] = {'\0'};   //保存分析所得的高楼层教室名称
    int i,j;
    COURSE_NODE *pcourse_node = pprof_node->firstarc;   //pcourse_node指向分析的老教师的课堂支链
    //遍历课堂链表
    while(pcourse_node)
    {
        char temp[100] = {'\0'};    //保存每个课堂的教室名称字符串
        strcpy(temp, pcourse_node->course_room_name);
        char *room_name = temp;
        char *split;
        int firsttime = 0;  //标志变量
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
    avg_floor = floor_sum*1.0/class_time;   //计算老教师平均每个课堂要上几层楼
    if(pprof_node->prof_hours>60)
    {
        printf("该老教师的教学学时达到了%.1f，请适当缩短其教学时间\n", pprof_node->prof_hours);
    }
    //输出分析信息
    if(existhigh)
    {
        printf("该老教师平均每次上课要爬%.1f层楼，请尽量使老教师在低楼层教室上课\n", avg_floor);
        printf("使得该老教师爬楼3层以上的课堂id有:\n");
        printf("%s\n", highfloor);
        printf("请尽快修改");
    }
    return;
}

/**
* 函数名称：DealString2
* 函数参数：split 原来课堂结点中的教室信息字符串
* 函数功能：辅助函数，用于处理字符串
* 返回值：每个教室所在的楼层数
**/
int DealString2(char *split)
{
    while(*split)
    {
        split++;    //字符串指针后移
        if((*split)<='9'&&(*split)>='1')
            return ((*split)-'1');
    }
    return -1;
}

/**
* 函数名称：DealString3
* 函数参数：String 上课日期字符串
            a 存放上课日期的数组
* 函数功能：辅助函数，用于处理字符串
* 返回值：如果输入格式正确返回true，否则返回false
**/
bool DealString3(char *String, int *a)
{
	int i = 0;
	for(i=0;i<6;i++)
		a[i]=0;
	int shouldbenum = 1;
	int dot_num = 0;
	char *temp = String;
	//判断输入是否符合规范
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
* 函数名称：ContraRoom
* 函数参数：proom_node 教室结点
            pcourse_node 课堂结点
* 函数功能：判断教室和课堂是否产生时间冲突
* 返回值：如果产生冲突则返回true，否则返回false
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
            //分解教室名构成的字符串
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
