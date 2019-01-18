#include <stdio.h>
#include <math.h>

struct Student
{
    int yw;
    int sx;
    int yy;
    char name[100];
};
int index = 0;
struct Student arr[1000];
int sum = 0;

int main()
{
    printf("进入学生成绩管理系统\n");

    while (1)
    {
        printf("1 -- 输入学生姓名和成绩\n");
        printf("2 -- 删除最后一个学生成绩\n");
        printf("3 -- 显示所有学生成绩\n");
        printf("4 -- 业务1：所有总分不及格的学生\n");
        printf("5 -- 业务2：每一科都不及格的学生\n");
        printf("6 -- 业务3：显示总分最高的学生\n");
        printf("7 -- 业务4：显示平均分最高,且没有不及格的\n");
        printf("8 -- 退出程序\n");

        printf("请输入功能编号\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("输入学生姓名\n");
            scanf("%s", (arr[index].name));

            printf("输入学生语文成绩\n");
            scanf("%d", &(arr[index].yw));

            printf("输入学生数学成绩\n");
            scanf("%d", &(arr[index].sx));

            printf("输入学生英语成绩\n");
            scanf("%d", &(arr[index].yy));

            index++;
            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {

            if (index > 0)
            {

                index--;
                printf("删除成功，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("无学生信息，删除失败，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }

        if (code == 3)
        {
            printf("所有学生成绩如下：\n");

            for (int i = 0; i < index; i++)
            {
                printf("第%d个学生%s的语文成绩为:%d 数学成绩为:%d 英语成绩为:%d\n", i + 1, arr[i].name, arr[i].yw, arr[i].sx, arr[i].yy);
            }
            printf("显示成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {

            printf("所有总分不及格的学生如下：\n");

            for (int i = 0; i < index; i++)
            {
                sum = arr[i].yw + arr[i].sx + arr[i].yy;
                if (sum < 180)
                {
                    printf("第%d名学生%s的成绩不及格,分数为%d：\n", i + 1, arr[i].name, sum);
                }
            }

            printf("筛选成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 5)
        {
            printf("每一科都不及格的学生如下\n");

            for (int i = 0; i < index; i++)
            {
                if ((arr[i].yw < 60) && (arr[i].sx < 60) && (arr[i].yy < 60))
                {
                    printf("第%d名学生%s每一科都不及格\n", i + 1, arr[i].name);
                }
            }
            printf("筛选成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 6)
        {
            printf("总分最高的学生为\n");

            int max = 0;
            int id;

            for (int i = 0; i < index; i++)
            {
                int l = arr[i].yw + arr[i].sx + arr[i].yy;
                if (max < l)
                {
                    max = l;
                    id = i;
                }
            }
            printf("第%d名同学%s的总分最高，最高分为%d\n", id, arr[id].name, max);

            printf("筛选成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 7)
        {
            double max = 0;
            int d;

            printf("平均分最高且没有不及格的为\n");

            for (int i = 0; i < index; i++)
            {
                if (arr[i].yw >= 60 && arr[i].sx >= 60 && arr[i].yy >= 60)
                {
                    double pj = (arr[i].yw + arr[i].sx + arr[i].yy) / 3.0;
                    if (max < pj)
                    {
                        max = pj;
                        d = i;
                    }
                }
            }
            printf("%s同学的平均分最高且没有不及格的科目\n",arr[d].name);

            printf("筛选成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 8)
        {
            break;
        }
    }

    return 0;
}