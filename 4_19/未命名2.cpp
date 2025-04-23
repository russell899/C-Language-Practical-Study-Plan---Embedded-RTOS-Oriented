#include <stdio.h>

// ����˵����Ӧ�ĺ�������
typedef void (*MenuFunction)();  // so we redefine void(*)() to MenuFuntion

// �����˵����Ӧ�ĺ���
void sayHello() {
    printf("Hello!\n");
}

void sayGoodbye() {
    printf("Goodbye!\n");
}

void showInfo() {
    printf("This is a menu system using function pointers.\n");
}

// �˵��ṹ��
typedef struct {
    const char* description;
    MenuFunction func;
} MenuItem;

// ������
int main() {
    MenuItem menu[] = {
        {"Say Hello", sayHello},
        {"Say Goodbye", sayGoodbye},
        {"Show Info", showInfo},
        {"Exit", NULL}
    };

    int choice;
    int numItems = sizeof(menu) / sizeof(menu[0]);

    while (1) {
        printf("\n--- Menu ---\n");
        for (int i = 0; i < numItems; i++) 
		{
            printf("%d. %s\n", i + 1, menu[i].description);
        }

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > numItems)
		{
            printf("Invalid choice.\n");
            continue;
        }

        if (menu[choice - 1].func == NULL)
		 {
            printf("Exiting...\n");
            break;
        }

        // ���ö�Ӧ����ָ��
        menu[choice - 1].func();
    }

    return 0;
}

