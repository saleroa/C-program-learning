#include<stdio.h>
#include <stdlib.h>
#include"stuinfo.h"
#include"string.h"

void inputstu(stuinfo stu[],int n){
    for (int i=0;i<n;i++){
        char* name = (char*) malloc(20);
        printf("please input your name: \n");
        scanf("%s",name);
        strncpy(stu[i].name,name,19);
        stu[i].name[19] = '\0';
        free(name);
        printf("please input your three scores: \n");
        scanf("%lf,%lf,%lf",&(stu[i].score[0]),&(stu[i].score[1]),&(stu[i].score[2]));
        float sum = 0.0;
        for (int j = 0;j<3;j++){
            sum += stu[i].score[j];
        }
        stu[i].ave = sum / 3;
    }
}



void  showstu(stuinfo stu[],int n){
    for (int i=0;i<n;i++){
        printf("name: %s  ave:%lf \n",stu[i].name,stu[i].ave);        
    }
}
