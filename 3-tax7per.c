#include <stdio.h>
#include <string.h>

int main()
{
    int i, num, items_amount[100], items_price[100], item_totals[100], total = 0;

    do
    {
        printf("ใส่จำนวนรายการสินค้าที่จะคำนวณ (อย่างน้อย 3): ");
        scanf("%d", &num);
        if (num < 3)
        {
            printf("ต้องมีรายการสินค้าขั้นต่ำ 3 รายการ\n");
        }
    } while (num < 3);

    for (i = 1; i <= num; i++)
    {
        printf("\n--- สินค้ารายการที่ %d ---\n", i);
        printf("จำนวนสินค้า (มากกว่า 1 ขึ้นไป) : ");
        scanf("%d", &items_amount[i]);
        if (items_amount[i] <= 1)
        {
            printf("จำนวนสินค้าต้องมากกว่า 1\n");
            i--;
            continue;
        }
        printf("ราคาต่อชิ้น : ");
        scanf("%d", &items_price[i]);
        if (items_price[i] < 1)
        {
            printf("ราคาต่อชิ้นต้องไม่น้อยกว่า 1 บาท\n");
            i--;
            continue;
        }
        item_totals[i] = items_amount[i] * items_price[i];
    }

    printf("\n--- สรุปรายการสินค้า ---\n");
    for (i = 1; i <= num; i++)
    {
        printf("รายการที่ %d: %d ชิ้น ราคาชิ้นละ %d บาท = %d บาท\n", i, items_amount[i], items_price[i], item_totals[i]);
        total += item_totals[i];
    }

    float vat = total * 0.07, total_with_vat = total + vat;

    printf("\nราคารวม: %d บาท\n", total);
    printf("ภาษี 7%%: %.2f บาท\n", vat);
    printf("ราคารวมภาษี: %.2f บาท\n", total_with_vat);

    return 0;
}