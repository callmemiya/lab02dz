include <iostream>
int main(){
std::cout <<"username:";
char name[15];
std::cin.getline(name,15);
std::cout <<"Hello world from ";
for (int i=0;i<strlen(name);i++) std::cout <<name[i];
std::cout <<endl;
return 0;
}
