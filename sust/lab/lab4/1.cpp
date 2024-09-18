 #include <iostream>
 #include <string.h>
 using namespace std;
 int main()
 {
 int cards[4]{};
 int hands[4];
 int price[] = {2,3,5,9};
 char direction[4] {'L',82,'U',68};
 char title[] = "ChartGPTis an awesome tool.";
 cout<< "sizeof(cards) = " << sizeof(cards) << ",sizeofof cards[0] = " << sizeof(cards[0]) << endl;
 cout<< "sizeof(price) = " << sizeof(price) << ",sizeofof price[0] = " << sizeof(price[1]) << endl;
 cout<< "sizeof(direction) = " << sizeof(direction) << ",length of direction = " << strlen(direction) << endl;
 // strlen() 函数需要读到 '/0' 才会结束
 cout<< "sizeof(title) = " << sizeof(title) << ",length of title = " << strlen(title) << endl;
 

  cout<< "sizeof(hands) = " << sizeof(hands);

 return 0;
 } 