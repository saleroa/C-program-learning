#include<stdio.h>

typedef enum weather{
    Rainy = 1,
    Sunny = 2,
    Cloud = 3,
    Stromy = 4 
} weather;

typedef enum weekday{
    Monday = 1,
    Tuesday = 2,
    Wednesday =3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
    Sunday = 7
} weekday;

typedef struct DayInfo{
    weather Wea;
    weekday Wed;
}DayInfo;

// c 语言中没有 bool 类型
int canTravel(DayInfo d){
    if (d.Wea == Sunny){
        if (d.Wed == 6 || d.Wed == 7){
            return 1;
        }
    }
    return 0;
}

int main(){
   DayInfo a,b;
   a.Wea = Sunny;
   a.Wed = 3;

   b.Wea = Sunny;
   b.Wed = 6;
 
    printf("a can travel %d",canTravel(a));
    printf("b can travel %d",canTravel(b));

}
