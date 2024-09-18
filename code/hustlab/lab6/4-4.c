#include<stdio.h>
#include<string.h>
void task0(void) {
	printf("task0 is called!\n");
}
void task1(void) {
	printf("task1 is called!\n");
}
void task2(void) {
	printf("task2 is called!\n");
}
void task3(void) {
	printf("task3 is called!\n");
}
void task4(void) {
	printf("task4 is called!\n");
}
void task5(void) {
	printf("task5 is called!\n");
}
void task6(void) {
	printf("task6 is called!\n");
}
void task7(void) {
	printf("task7 is called!\n");
}

void excute(int num,void(*func[])()){
    for(int i=0;i<num;i++){
        func[i]();
    }
}

// 函数指针
void scheduler(){
    // 函数指针声明
    void(*func_list[8])()={
        task0,task1,task2,task3,task4,task5,task6,task7
    };
    char name[9];
    scanf("%s",name);
    int num = strlen(name);
    void (*function[num])();
    for (int i=0;i<num;i++){
        function[i] = func_list[+name[i]-48] ;
    }
    excute(num,function);
}

int main(void) {
	scheduler();
	return 0;
}