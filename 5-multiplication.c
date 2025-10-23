#include <stdio.h>
int num, i, out = 0;

int main()
{
    do
    {
        printf("ต้องการสูตรคูณแม่อะไร?\nโปรดใส่ตัวเลขระหว่าง 1-12: ");
        scanf("%d", &num);
        for (i = 1; i <= 12; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("ต้องการดูสูตรคูณแม่อื่นหรือไม่? (0 = ใช่, 1 = ไม่): ");
        scanf("%d", &out);
        printf("\n");
    } while (out == 0);

    return 0;
}