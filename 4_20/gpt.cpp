#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char gender;
} User;

int main() {
    User user1;

    // 用结构体指针指向 user1
    User* ptr = &user1;

    // 输入用户数据
    printf("Enter your name: ");
    scanf("%49s", ptr->name);  // 防止缓冲区溢出

    printf("Enter your age: ");
    scanf("%d", &ptr->age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &ptr->gender);  // 注意前面的空格，防止读入换行符

    // 打印用户数据
    printf("\nUser Information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Gender: %c\n", ptr->gender);

    return 0;
}

