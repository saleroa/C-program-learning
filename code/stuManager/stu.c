
#include "stu.h"

int main()
{
    // 创建头节点
    Node *head = (Node *)malloc(sizeof(Node));
    head->next = NULL;

    while(1){
    wellcome();
    // getchar 和 scanf 函数会把回车保存到缓冲区，_getch 不会

    char c = getchar();
    switch (c){
        case '1': // 录入学生信息
        inputStudent(head);
         break;
        case '2': // 打印学生信息
        printstudent(head);
         break;
        case '3': // 统计学生人数
        countstudent(head);
         break;
        case '4': // 查找学生信息
        findstudent(head);
         break;
        case '5': // 修改学生信息
         break;
        case '6': // 删除学生信息
         break;
        case '7': // 按成绩排序
         break;
        case '8': // 退出系统
        system("cls");
        printf("bye bye !\n");
        exit(0);
         break;
        default:
         break;
    }

    }

    return 0;
}

// 系统提示功能
void welcome()
{
    printf("*********************************\n");
    printf("*\t学生成绩管理系统\t*\n");
    printf("*********************************\n");
    printf("*\t请选择功能列表\t\t*\n");
    printf("*********************************\n");
    printf("*\t1.录入学生信息\t\t*\n");
    printf("*\t2.打印学生信息\t\t*\n");
    printf("*\t3.统计学生人数\t\t*\n");
    printf("*\t4.查找学生信息\t\t*\n");
    printf("*\t5.修改学生信息\t\t*\n");
    printf("*\t6.删除学生信息\t\t*\n");
    printf("*\t7.按成绩排序\t\t*\n");
    printf("*\t8.退出系统\t\t*\n");
    printf("*********************************\n");
    return;
}

// 录入学生信息
void inputStudent(Node* head){
    // 从头节点移动到 tail 节点
    Node * move = head;
    while (move->next){
        move = move->next;
    }
    // 创建节点
    Node* fresh = malloc(sizeof(Node));
    fresh->next = NULL;
    // 输入用户信息
    printf("please input stuid,name,score:\n");
    scanf("%d %s %d",&fresh->stu.number,&fresh->stu.name,&fresh->stu.score);
    // 将新节点放到链表尾部
    move->next = fresh;

    // 等待一下，按下任意键后再继续程序
    system("pause");
    // 清空屏幕
    system("cls");
    return;
}

// 打印学生信息
void printstudent(Node* head){
    Node* move = head -> next;
    while(move){
        printf("%d %s %d",move->stu.number,move->stu.name,move->stu.score);
        move = move ->next;
    }
    system("pause");
    system("cls");
    return;
}


// 统计学生人数
void countstudent(Node* head){
    int count = 0;
    Node * move = head->next;
    while(move){
        count++;
        move = move->next;
    }
    printf("sum of stu:%d\n",count);
    system("pause");
    system("cls");
    return;
}

// 查找学生信息
void findstudent(Node* head){
    int stuNum;
    printf("please input stuid:\n");
    scanf("%d",stuNum);
    Node* move = head -> next;
    while(move){
        if (move->stu.number == stuNum){
            printf("%d %s %d",move->stu.number,move->stu.name,move->stu.score);
            system("pause");
            system("cls");
            return;
        }
        move = move ->next;
    }
    printf("do not found such stu\n");
    system("pause");
    system("cls");
}