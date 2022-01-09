#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

struct strbuf
{
    int len;   //当前缓冲区（字符串）长度
    int alloc; //当前缓冲区（字符串）容量
    char *buf; //缓冲区（字符串）
};

void strbuf_init(struct strbuf *sb, size_t alloc);
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc);
void strbuf_addstr(struct strbuf *sb, void *str);
void strbuf_release(struct strbuf *sb);

int main()
{
    struct strbuf sb;
    strbuf_init(&sb, 10);
    strbuf_attach(&sb, "xiyou", 5, 10);
    assert(strcmp(sb.buf, "xiyou") == 0);
    strbuf_addstr(&sb, "linux");
    printf("%s\n", sb.buf);
    assert(strcmp(sb.buf, "xiyoulinux") == 0);
    strbuf_release(&sb);
}

void strbuf_setlen(struct strbuf *sb)
{
    sb->len = strlen(sb->buf);
}

void strbuf_init(struct strbuf *sb, size_t alloc)
{
    sb->buf = (char *)malloc(alloc);
    sb->len = 0;
    sb->alloc = alloc;
}

void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc)
{
    while (sb->len + len >= alloc)
    {
        sb->buf = realloc(sb->buf, alloc);
    }
    strcpy(sb->buf, str);
    strbuf_setlen(sb);
}

void strbuf_addstr(struct strbuf *sb, void *str)
{
    strcat(sb->buf, str);
}

void strbuf_release(struct strbuf *sb)
{
    free(sb->buf);
}