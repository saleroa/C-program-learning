typedef struct sutinfo{
    char name[20];
    double score[3];
    double ave;
}stuinfo;

void inputstu(stuinfo stu[],int n);
void showstu(stuinfo stu[] , int n);