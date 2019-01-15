#include <stdio.h>

int main()
{
    int qian = 0;
    printf("进入ATM系统\n");
    while (1)
    {

        printf("1 -- 存钱\n");
        printf("2 -- 取钱\n");
        printf("3 -- 余额\n");
        printf("4 -- 退出\n");

        printf("请输入功能编号\n");
        int code = 0;
        scanf("%d", &code);
        if (code == 1)
        {

            int cun;
            printf("进入存钱功能区,请输入存款金额\n");

            scanf("%d", &cun);
            qian += cun;
            printf("存钱成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {
            int qu;
            char x;
            printf("进入取钱功能区,请输入取款金额\n");
            scanf("%d", &qu);
            if (qian >= qu)
            {
                qian -= qu;
                printf("取钱成功，点击回车继续\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("余额不足，取款失败，点击回车继续\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
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