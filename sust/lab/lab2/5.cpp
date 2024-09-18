
 #include <iostream>
 int main()
 {
// 类型不匹配的时候就会出现隐式类型转换
 auto a = 10;
 a = 20.5;
 a += 10.5;
 std::cout << a << std::endl;
 return 0;
 }