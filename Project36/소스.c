#define _CRT_SECURE_NO_WARNINGS
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_RESET    "\x1b[0m"
#define LEFT 75
#define RIGHT 77
#define SPACEBAR 32
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//�Է¹ޱ�_�ð����� �ߴ� �� �Ѿ��
int key(int timer)
{
    if (_kbhit())
    {
        int nkey = _getch();
        if (nkey == SPACEBAR)
        {
            printf("\r");
            printf("���� �ð� > %02d : %02d", timer / 60, timer % 60);
            int nkey2 = _getch();
            if (nkey2 == SPACEBAR)
            {
                printf("\r");
                return timer;
            }
            if (nkey2 == RIGHT)
            {
                printf("\r");
                return nkey2;
            }
        }
        else if (nkey == RIGHT)
        {
            printf("\r");
            return nkey;
        }
    }
}

void Time1(int timer)  // Ÿ�̸� �Լ� �����ϱ�
{
    int input;
    while (1)
    {
        int min = timer / 60;
        int sec = timer % 60;
        key(timer);
        if (key(timer) == RIGHT)
        {
            printf("Ÿ�̸Ӱ� ���� ����Ǿ����ϴ�\n");
            break;
        }
        printf("���� �ð� > %02d : %02d ", min, sec);
        printf("\r");
        Sleep(1000);    // 1�� 1000�и��� ����
        timer -= 1;

        if (timer < 0)
        {
            printf("Ÿ�̸� ����\n");
            return 0;
        }
    }
}

//�����Ľ�Ÿ �����Լ�
void voice()
{
    char buff[200];

    FILE* fp1 = fopen("input1.txt", "r");
    if (fp1 == NULL) system("fsutil file createnew input1.txt 0 > null");
    FILE* fp2 = fopen("read1.vbs", "w");
    if (fp2 == NULL) system("fsutil file createnew read1.vbs 0 >null");

    fprintf(fp2, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp1))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp2, "%s", buff);
    }

    fprintf(fp2, "\"");

    fclose(fp1);
    fclose(fp2);

    system("read1.vbs > null");
    system("del read1.vbs > null");
}

void voice1()
{
    char buff[200];

    FILE* fp3 = fopen("input2.txt", "r");
    if (fp3 == NULL) system("fsutil file createnew input2.txt 0 > null");
    FILE* fp4 = fopen("read2.vbs", "w");
    if (fp4 == NULL) system("fsutil file createnew read2.vbs 0 >null");

    fprintf(fp4, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp3))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp4, "%s", buff);
    }

    fprintf(fp4, "\"");

    fclose(fp3);
    fclose(fp4);

    system("read2.vbs > null");
    system("del read2.vbs > null");
}

void voice2()
{
    char buff[200];

    FILE* fp5 = fopen("input3.txt", "r");
    if (fp5 == NULL) system("fsutil file createnew input3.txt 0 > null");
    FILE* fp6 = fopen("read3.vbs", "w");
    if (fp6 == NULL) system("fsutil file createnew read3.vbs 0 >null");

    fprintf(fp6, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp5))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp6, "%s", buff);
    }

    fprintf(fp6, "\"");

    fclose(fp5);
    fclose(fp6);

    system("read3.vbs > null");
    system("del read3.vbs > null");
}

void voice3()
{
    char buff[200];

    FILE* fp7 = fopen("input4.txt", "r");
    if (fp7 == NULL) system("fsutil file createnew input4.txt 0 > null");
    FILE* fp8 = fopen("read4.vbs", "w");
    if (fp8 == NULL) system("fsutil file createnew read4.vbs 0 >null");

    fprintf(fp8, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp7))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp8, "%s", buff);
    }

    fprintf(fp8, "\"");

    fclose(fp7);
    fclose(fp8);

    system("read4.vbs > null");
    system("del read4.vbs > null");
}

void voice4()
{
    char buff[200];

    FILE* fp9 = fopen("input5.txt", "r");
    if (fp9 == NULL) system("fsutil file createnew input5.txt 0 > null");
    FILE* fp10 = fopen("read5.vbs", "w");
    if (fp10 == NULL) system("fsutil file createnew read5.vbs 0 >null");

    fprintf(fp10, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp9))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp10, "%s", buff);
    }

    fprintf(fp10, "\"");

    fclose(fp9);
    fclose(fp10);

    system("read5.vbs > null");
    system("del read5.vbs > null");
}

void voice5()
{
    char buff[200];

    FILE* fp11 = fopen("input6.txt", "r");
    if (fp11 == NULL) system("fsutil file createnew input6.txt 0 > null");
    FILE* fp12 = fopen("read6.vbs", "w");
    if (fp12 == NULL) system("fsutil file createnew read6.vbs 0 >null");

    fprintf(fp12, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp11))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp12, "%s", buff);
    }

    fprintf(fp12, "\"");

    fclose(fp11);
    fclose(fp12);

    system("read6.vbs > null");
    system("del read6.vbs > null");
}

void voice6()
{
    char buff[200];

    FILE* fp13 = fopen("input7.txt", "r");
    if (fp13 == NULL) system("fsutil file createnew input7.txt 0 > null");
    FILE* fp14 = fopen("read7.vbs", "w");
    if (fp14 == NULL) system("fsutil file createnew read7.vbs 0 >null");

    fprintf(fp14, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp13))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp14, "%s", buff);
    }

    fprintf(fp14, "\"");

    fclose(fp13);
    fclose(fp14);

    system("read7.vbs > null");
    system("del read7.vbs > null");
}

void voice7()
{
    char buff[200];

    FILE* fp15 = fopen("input8.txt", "r");
    if (fp15 == NULL) system("fsutil file createnew input8.txt 0 > null");
    FILE* fp16 = fopen("read8.vbs", "w");
    if (fp16 == NULL) system("fsutil file createnew read8.vbs 0 >null");

    fprintf(fp16, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp15))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp16, "%s", buff);
    }

    fprintf(fp16, "\"");

    fclose(fp15);
    fclose(fp16);

    system("read8.vbs > null");
    system("del read8.vbs > null");
}

//��ġ������ �����Լ�
void voice9()
{
    char buff[200];

    FILE* fp17 = fopen("input9.txt", "r");
    if (fp17 == NULL) system("fsutil file createnew input9.txt 0 > null");
    FILE* fp18 = fopen("read9.vbs", "w");
    if (fp18 == NULL) system("fsutil file createnew read9.vbs 0 >null");

    fprintf(fp18, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp17))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp18, "%s", buff);
    }

    fprintf(fp18, "\"");

    fclose(fp17);
    fclose(fp18);

    system("read9.vbs > null");
    system("del read9.vbs > null");
}

void voice10()
{
    char buff[200];

    FILE* fp19 = fopen("input10.txt", "r");
    if (fp19 == NULL) system("fsutil file createnew input10.txt 0 > null");
    FILE* fp20 = fopen("read10.vbs", "w");
    if (fp20 == NULL) system("fsutil file createnew read10.vbs 0 >null");

    fprintf(fp20, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp19))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp20, "%s", buff);
    }

    fprintf(fp20, "\"");

    fclose(fp19);
    fclose(fp20);

    system("read10.vbs > null");
    system("del read10.vbs > null");
}

void voice11()
{
    char buff[200];

    FILE* fp21 = fopen("input11.txt", "r");
    if (fp21 == NULL) system("fsutil file createnew input11.txt 0 > null");
    FILE* fp22 = fopen("read11.vbs", "w");
    if (fp22 == NULL) system("fsutil file createnew read11.vbs 0 >null");

    fprintf(fp22, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp21))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp22, "%s", buff);
    }

    fprintf(fp22, "\"");

    fclose(fp21);
    fclose(fp22);

    system("read11.vbs > null");
    system("del read11.vbs > null");
}

void voice12()
{
    char buff[200];

    FILE* fp23 = fopen("input12.txt", "r");
    if (fp23 == NULL) system("fsutil file createnew input12.txt 0 > null");
    FILE* fp24 = fopen("read12.vbs", "w");
    if (fp24 == NULL) system("fsutil file createnew read12.vbs 0 >null");

    fprintf(fp24, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp23))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp24, "%s", buff);
    }

    fprintf(fp24, "\"");

    fclose(fp23);
    fclose(fp24);

    system("read12.vbs > null");
    system("del read12.vbs > null");
}

void voice13()
{
    char buff[200];

    FILE* fp25 = fopen("input13.txt", "r");
    if (fp25 == NULL) system("fsutil file createnew input13.txt 0 > null");
    FILE* fp26 = fopen("read13.vbs", "w");
    if (fp26 == NULL) system("fsutil file createnew read13.vbs 0 >null");

    fprintf(fp26, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp25))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp26, "%s", buff);
    }

    fprintf(fp26, "\"");

    fclose(fp25);
    fclose(fp26);

    system("read13.vbs > null");
    system("del read13.vbs > null");
}

void voice14()
{
    char buff[200];

    FILE* fp27 = fopen("input14.txt", "r");
    if (fp27 == NULL) system("fsutil file createnew input14.txt 0 > null");
    FILE* fp28 = fopen("read14.vbs", "w");
    if (fp28 == NULL) system("fsutil file createnew read14.vbs 0 >null");

    fprintf(fp28, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp27))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp28, "%s", buff);
    }

    fprintf(fp28, "\"");

    fclose(fp27);
    fclose(fp28);

    system("read14.vbs > null");
    system("del read14.vbs > null");
}

void voice15()
{
    char buff[200];

    FILE* fp29 = fopen("input15.txt", "r");
    if (fp29 == NULL) system("fsutil file createnew input15.txt 0 > null");
    FILE* fp30 = fopen("read15.vbs", "w");
    if (fp30 == NULL) system("fsutil file createnew read15.vbs 0 >null");

    fprintf(fp30, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp29))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp30, "%s", buff);
    }

    fprintf(fp30, "\"");

    fclose(fp29);
    fclose(fp30);

    system("read15.vbs > null");
    system("del read15.vbs > null");
}

//����� �����Լ�
void voice16()
{
    char buff[200];

    FILE* fp31 = fopen("input16.txt", "r");
    if (fp31 == NULL) system("fsutil file createnew input16.txt 0 > null");
    FILE* fp32 = fopen("read16.vbs", "w");
    if (fp32 == NULL) system("fsutil file createnew read16.vbs 0 >null");

    fprintf(fp32, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp31))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp32, "%s", buff);
    }

    fprintf(fp32, "\"");

    fclose(fp31);
    fclose(fp32);

    system("read16.vbs > null");
    system("del read16.vbs > null");
}

void voice17()
{
    char buff[200];

    FILE* fp33 = fopen("input17.txt", "r");
    if (fp33 == NULL) system("fsutil file createnew input17.txt 0 > null");
    FILE* fp34 = fopen("read17.vbs", "w");
    if (fp34 == NULL) system("fsutil file createnew read17.vbs 0 >null");

    fprintf(fp34, "CreateObject(\"SAPI.SpVoice\").Speak \"");

    while (fgets(buff, 200, fp33))
    {
        buff[strlen(buff) - 1] = ' ';
        buff[strlen(buff)] = '\0';
        fprintf(fp34, "%s", buff);
    }

    fprintf(fp34, "\"");

    fclose(fp33);
    fclose(fp34);

    system("read17.vbs > null");
    system("del read17.vbs > null");
}
/*
void voice18()
{

}

void voice19()
{

}

void voice20()
{

}

void voice21()
{

}

void voice22()
{

}

void voice23()
{

}
*/
//������ ��� ���� �Լ�
void Eliminate(char* str, char* remove)
{
    int len;
    char* p_pos;

    while (*str)//null ���� ���ö� ���� �ݺ�
    {
        if (*str++ == *remove)//���� Ž�� ���ڿ� ���ڿ��� ���� �κ��� ��ġ�ϴ� ���
        {
            for (len = 1; *(remove + len); len++)
            {
                if (*str++ != *(remove + len))
                    break;
            }//���� ���������� ���ڿ� ������ �������� ã��
            if (*(remove + len) == 0)
            {
                str -= len;//������ �� �ּҸ� �ٽ� �������
                for (p_pos = str; *(p_pos + len); p_pos++)
                    *p_pos = *(p_pos + len);
                *p_pos = '\0'; // null����
            }
        }
    }
}

//����� ������
void gyeran_jjim(int i)
{
    if (i == 1) {
        printf("�١ڡٰ���� �����ǡ١ڡ�\n\n");
        printf("������ ��� : ���, ���⸧, ��, ������, ����, ���, ��\n");
        char str[] = "������ ��� : ���, ���⸧, ��, ������, ����, ���, ��";

        printf(ANSI_COLOR_YELLOW"Now : ��� 2��, ���⸧ 1/3������ �ְ� ����� Ǯ���ּ���."ANSI_COLOR_RESET"\n");
        printf("NEXT : �˲��� �����ϱ� ���� ������� ü�� �ɷ��ּ���.\n");
        voice16();
        char remove1[] = "���, ���⸧, ";
        Eliminate(str, remove1);
        Time1(120);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW"Now : �˲��� �����ϱ� ���� ������� ü�� �ɷ��ּ���. "ANSI_COLOR_RESET " \n");
        printf("NEXT : ������� ������ �� ������ �ְ� �����ּ���.\n");
        voice17();
        Time1(60);
        printf("\n%s\n", str);

        /*
        printf(ANSI_COLOR_YELLOW "Now : ������� ������ �� ������ �ְ� �����ּ���."ANSI_COLOR_RESET "\n");
        printf("NEXT : ������� ���ָ� �� ���� �ְ� �����ּ���. \n");
        voice18();
        char remove2[] = "������, ";
        Eliminate(str, remove2);
        Time1(60);
        printf("\n%s\n", str);


        printf(ANSI_COLOR_YELLOW "Now : ������� ���ָ� �� ���� �ְ� �����ּ���." ANSI_COLOR_RESET"\n");
        printf("NEXT : ���� ��� �ϳ��� 50ml�� �ְ� �����ּ���\n");
        voice19();
        char remove3[] = "����, ";
        Eliminate(str, remove3);
        Time1(60);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : ���� ��� �ϳ��� 50ml�� �ְ� �����ּ���."ANSI_COLOR_RESET "\n");
        printf("NEXT : ������� ���, �ĸ� �־��ּ���.\n");
        voice20();
        char remove4[] = "��, ";
        Eliminate(str, remove4);
        Time1(60);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW"Now : ������� ���, �ĸ� �־��ּ���,"ANSI_COLOR_RESET "\n");
        printf("NEXT : ���ڷ������� ������ 2�� �����ּ���.\n");
        voice21();
        char remove5[] = "���, ��, ";
        Eliminate(str, remove5);
        Time1(60);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : ���ڷ������� ������ 2�� �����ּ���."ANSI_COLOR_RESET "\n");
        printf("NEXT : ������ ������ �ٽ� ���ڷ������� 3�� �����ּ���.\n");
        voice22();
        Time1(180);
        printf("\n%s\n", str);

        printf("Now : ������ ������ �ٽ� ���ڷ������� 3�� �����ּ��� \n");
        voice23();
        Time1(180);
        printf("\n%s\n", str);
        printf(ANSI_COLOR_RESET "NEXT : �ϼ�!" ANSI_COLOR_YELLOW "\n");
        printf(ANSI_COLOR_BLUE "�١ڡٰ���� �ϼ��١ڡ�" ANSI_COLOR_RESET "\n");
    */
    }
    else
        printf(" ");

}

//�����Ľ�Ÿ ������
void roze_pasta(int i)
{
    if (i == 2) {
        printf("Space�� �ѹ� ���� �� : Ÿ�̸� ����\n");
        printf("Space�� �ι� ���� �� : Ÿ�̸� �ٽ� ����\n");
        printf("������ ����Ű ���� �� : Ÿ�̸� ���� ����\n");

        printf("�١ڡٷ����Ľ�Ÿ �����ǡ١ڡ�\n\n");
        printf("������ ��� : ����, ��, �ұ�, ����, ���߰���, ����, ����, �����ҽ�\n");
        char str[] = "������ ��� : ����, ��, �ұ�, ����, ���߰���, ����, ����, �����ҽ�";

        printf(ANSI_COLOR_YELLOW "NOW : ���� (�ұ�.���� �ణ, ���߰��� 1���� �ְ� ��������)" ANSI_COLOR_RESET "\n");
        printf("NEXT : �Ľ�Ÿ���� ���� �ұ� �ְ� 9�е��� ������\n");
        voice();
        Time1(10);
        printf("\n%s\n", str);  // ������� ����

        printf(ANSI_COLOR_YELLOW "NOW : �Ľ�Ÿ���� ���� �ұ� �ְ� 9�е��� ������" ANSI_COLOR_RESET "\n");
        printf("NEXT : ���� �� ����\n");
        voice1();
        char remove1[] = "��, ";
        Eliminate(str, remove1);
        Time1(540);
        printf("\n%s\n", str);  // ������� �� ���

        printf(ANSI_COLOR_YELLOW "NOW : ���� �� ����" ANSI_COLOR_RESET "\n");
        printf("NEXT : ���� 1/4�� ����");
        voice3();
        char remove2[] = "����, ";
        Eliminate(str, remove2);
        Time1(60);
        printf("\n%s\n", str);  // ���� �� ����

        printf(ANSI_COLOR_YELLOW"NOW : ���� 1/4�� ����"ANSI_COLOR_RESET "\n");
        printf("NEXT : ���찡 ���� ������ ���캺��\n");
        voice4();
        char remove3[] = "����, ";
        Eliminate(str, remove3);
        Time1(90);
        printf("\n%s\n", str);  // ���� 1/4�� ����

        printf(ANSI_COLOR_YELLOW "NOW : ���찡 ���� ������ ���캺��" ANSI_COLOR_RESET "\n");
        printf("NEXT : �����ҽ� �ְ� ����\n");
        voice5();
        char remove4[] = "����, ";
        Eliminate(str, remove4);
        Time1(90);
        printf("\n%s\n", str);  // ���캺��

        printf(ANSI_COLOR_YELLOW "NOW : �����ҽ� �ְ� ����" ANSI_COLOR_RESET "\n");
        printf("NEXT : �ұ�, ���� �ణ �ֱ�");
        voice6();
        char remove5[] = "�����ҽ�";
        Eliminate(str, remove5);
        Time1(240);
        printf("\n%s\n", str);  // �����ҽ� ����

        printf(ANSI_COLOR_YELLOW "NOW : �ұ�, ���� �ణ �ֱ�"ANSI_COLOR_RESET "\n");
        printf("NEXT : �ϼ�!");
        voice7();
        char remove6[] = "�ұ�, ����, ";
        Eliminate(str, remove6);
        Time1(10);  // �����ҽ� ����
        printf("\n��Ḧ �� ����ϼ̽��ϴ�!\n");

        printf(ANSI_COLOR_BLUE "�١ڡٷ����Ľ�Ÿ �ϼ��١ڡ�" ANSI_COLOR_RESET "\n");
    }
    else
        printf(" ");

}
//��ġ������ ������
void kimchibbeumbab(int i)
{
    if (i == 3)
    {
        printf("Space�� �ѹ� ���� �� : Ÿ�̸� ����\n");
        printf("Space�� �ι� ���� �� : Ÿ�̸� �ٽ� ����\n");
        printf("������ ����Ű ���� �� : Ÿ�̸� ���� ����\n");

        printf("�١ڡٱ�ġ������ �����ǡ١ڡ�\n\n");
        printf("������ ��� : ���, �Ŀ���, ��, ����, ��ġ, ���߰���, ����, ��, ����\n");
        char str[] = "������ ��� : ���, �Ŀ���, ��, ����, ��ġ, ���߰���, ����, ��, ����";
        printf(ANSI_COLOR_YELLOW "Now : ����Ķ��̸� ���弼��." ANSI_COLOR_RESET "\n");
        printf("NEXT : �Ŀ����� �ĸ� ��������.\n");
        voice9();
        char remove9[] = "���, ";
        Eliminate(str, remove9);
        Time1(10);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : �Ŀ����� �ĸ� ��������." ANSI_COLOR_RESET "\n");
        printf("NEXT : �İ� ������� ���������� ������ �ְ� �����ּ���.\n");
        voice10();
        char remove10[] = "�Ŀ���, ��, ";
        Eliminate(str, remove10);
        Time1(10);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : �İ� ������� ���������� ������ �ְ� �����ּ���." ANSI_COLOR_RESET "\n");
        printf("NEXT : ��ġ�� �ְ� �����ּ���.\n");
        voice11();
        char remove11[] = "����, ";
        Eliminate(str, remove11);
        Time1(10);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : ��ġ�� �ְ� �����ּ���." ANSI_COLOR_RESET "\n");
        printf("NEXT : ���߰��� �ݽ�Ǭ, ���� 1��Ǭ �ְ� �ߺҿ��� ��� �����ּ���.\n");
        voice12();
        char remove12[] = "��ġ, ";
        Eliminate(str, remove12);
        Time1(10);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : ���߰��� �ݽ�Ǭ, ���� 1��Ǭ �ְ� �ߺҿ��� ��� �����ּ���." ANSI_COLOR_RESET "\n");
        printf("NEXT : ��ġ�� �������� ��ҷ� ���̰� ���� �־��ּ���.\n");
        voice13();
        char remove13[] = "���߰���, ����";
        Eliminate(str, remove13);
        Time1(10);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : ��ġ�� �������� ��ҷ� ���̰� ���� �־��ּ���." ANSI_COLOR_RESET "\n");
        printf("NEXT : ���� 1��Ǭ�� ���ȴٰ� ���� �����ּ���.\n");
        voice14();
        char remove14[] = "��, ";
        Eliminate(str, remove14);
        Time1(10);
        printf("\n%s\n", str);

        printf(ANSI_COLOR_YELLOW "Now : ���� 1��Ǭ�� ���ȴٰ� ���� �����ּ���." ANSI_COLOR_RESET "\n");
        printf("NEXT : �ϼ�!\n");
        voice15();
        char remove15[] = "����";
        Eliminate(str, remove15);
        Time1(10);
        printf("\n��Ḧ �� ����ϼ̽��ϴ�!\n");

        printf(ANSI_COLOR_BLUE "�١ڡٷ����Ľ�Ÿ �ϼ��١ڡ�" ANSI_COLOR_RESET "\n");
    }

    else
        printf(" ");
}

int main()
{
    int i;
    printf("1.����� 2.�����Ľ�Ÿ 3.��ġ������ �� ��ȣ ����: ");
    scanf("%d", &i);
    gyeran_jjim(i);
    roze_pasta(i);
    kimchibbeumbab(i);
    if (i > 3 || i < 1)
        printf("1,2,3�߿� �Է��ϼ���\n");

    return 0;
}