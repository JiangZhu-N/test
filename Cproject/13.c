#include <stdio.h>
//13.1
int f1(void)
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char file_name[256];
    scanf("%s", file_name, 256);
    if ((fp = fopen(file_name, "r")) == NULL)
    {
        printf("打开失败");
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    return 0;
}

// 13.2
void f2(void)
{
    FILE *fp1;
    FILE *fp2;
    char *file1 = "text.txt";
    char *file2 = "teext.txt";
    int ch = 0;

    if ((fp1 = fopen(file1, "r")) == NULL)
    {
        printf("打开失败");
    }
    if ((fp2 = fopen(file2, "r")) == NULL)
    {
        printf("打开失败");
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return;
}

//13.3
void f3(void)
{
    char file_name[256];
    char *tmp_file = "text.txt"; 
    int ch = 0;
    FILE *fp_r;
    FILE *fp_w;
    gets_s(file_name, 256);

    if ((fp_r = fopen(file_name, "r+")) == NULL)
    {
        printf("打开失败");
    }

    if ((fp_w = fopen(tmp_file, "w")) == NULL)
    {
       printf("打开失败");
    }

    while ((ch = fgetc(fp_r)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp_w);
    }

    fclose(fp_r);
    fclose(fp_w);

    if ((fp_r = fopen(tmp_file, "r")) == NULL)
    {
        printf("打开失败");
    }
    if ((fp_w = fopen(file_name, "w")) == NULL)
    {
        printf("打开失败");
    }
    while ((ch = fgetc(fp_r)) != EOF)
    {
        fputc(ch, fp_w);
    }

    fclose(fp_r);
    fclose(fp_w);
    remove(tmp_file);

    printf("Done.\n");

    return;
}

//13.4
int f4(int argc, char **argv)
{
    FILE *fp;
    char buf[256] = {0};
    for (int i = 1; i < argc; i++)
    {
        if ((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("打开失败");
        }

        printf("%s:\n", argv[i]);
        while (fgets(buf, 256, fp) != NULL)
        {
            fputs(buf, stdout);
        }

        printf("\n");
    }
    return 0;
}

// 13.5
#define BUFFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFFSIZE, source)) > 0)
    {
        fwrite(temp, sizeof(char), bytes, dest);
    }
}
char *f5(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}

// 13.6
void f6(void)
{
    FILE *file1, *file2;
    char file_name1[128];
    char file_name2[128];
    char buf1[256] = {0};
    char buf2[256] = {0};
    gets(file_name1, 128);
    gets(file_name2, 128);

    if ((file1 = fopen(file_name1, "r")) == NULL)
    {
        printf("打开失败");
    }
    if ((file2 = fopen(file_name2, "r")) == NULL)
    {
        printf("打开失败");
    }

    while ((feof(file1) == 0) || (feof(file2) == 0))
    {
        if (fgets(buf1, 256, file1) != NULL)
        {
            int length = strlen(buf1);
            fputs(buf1, stdout);
        }
        if (fgets(buf2, 256, file2) != NULL)
        {
            fputs(buf2, stdout);
        }
    }

    return;
}
