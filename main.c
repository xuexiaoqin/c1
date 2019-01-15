#include <stdio.h>

int main()
{

    printf("进入ATM系统\n");
    while (1)
    {
        int qian = 0;
        printf("1 -- 存钱\n");
        printf("2 -- 取钱\n");
        printf("3 -- 余额\n");
        printf("4 -- 退出\n");

        printf("请输入功能编号\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
           
            int cun;
            printf("进入存钱功能区,请输入存款金额\n");
            qian += cun;
            scanf("%d",&cun);
            printf("存钱成功，点击回车继续\n");
            int x;
            scanf("%d",&x);
            scanf("%d",&x);
        }

        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
    }

    return 0;
}