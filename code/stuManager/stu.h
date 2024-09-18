#include<stdlib.h>
#include<stdio.h>


typedef struct student{
    int number; // stuid
    char name[20];
    int score;
}Student;

typedef struct node{
    Student stu;
    Node * next;
}Node;

void welcome();
void inputStudent(Node* head);