#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char gender;
} User;

int main() {
    User user1;

    // �ýṹ��ָ��ָ�� user1
    User* ptr = &user1;

    // �����û�����
    printf("Enter your name: ");
    scanf("%49s", ptr->name);  // ��ֹ���������

    printf("Enter your age: ");
    scanf("%d", &ptr->age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &ptr->gender);  // ע��ǰ��Ŀո񣬷�ֹ���뻻�з�

    // ��ӡ�û�����
    printf("\nUser Information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Gender: %c\n", ptr->gender);

    return 0;
}

