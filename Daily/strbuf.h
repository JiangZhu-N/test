#ifndef _STRBUF_H
#define _STRBUF_H

#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
struct strbuf
{
    int len;
    int alloc;
    char *buf;
};

void strbuf_init(struct strbuf *sb, size_t alloc)
{
    sb->buf = (char *)malloc(alloc);
    sb->len = 0;
    sb->alloc = alloc;
}

void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc)
{
    strbuf_init(sb, alloc);
    sb->len = len;
    sb->alloc = alloc;
    sb->buf = (char *)str;
}
void strbuf_release(struct strbuf *sb)
{
    free(sb->buf);
}
void strbuf_swap(struct strbuf *a, struct strbuf *b)
{
    struct strbuf t = *a;
    *a = *b;
    *b = t;
}
char *strbuf_detach(struct strbuf *sb, size_t *sz)
{
    *sz = sb->alloc;
    return sb->buf;
}
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second)
{
    return strcmp(first->buf, second->buf);
}
void strbuf_reset(struct strbuf *sb)
{
    strbuf_init(sb, sb->alloc);
}

void strbuf_grow(struct strbuf *sb, size_t extra)
{
    sb->buf = (char *)realloc(sb->buf, extra);
    strbuf_init(sb, extra);
}
void strbuf_add(struct strbuf *sb, const void *data, size_t len)
{
    sb->len+=len;
    sb->alloc+=len*sizeof(char);
    sb->buf=(char *)realloc(sb->buf,sb->alloc);
    strcat(sb->buf,(char*)data);

}
/*void strbuf_addch(struct strbuf *sb, int c)
{
    sb->len += 1;
    strcat(sb->buf, (char *)&c);
}
/*void strbuf_addstr(struct strbuf *sb, const char *s);
/*void strbuf_addbuf(struct strbuf *sb, const struct strbuf *sb2);
/*void strbuf_setlen(struct strbuf *sb, size_t len);
/*size_t strbuf_avail(const struct strbuf *sb);
/*void strbuf_insert(struct strbuf *sb, size_t pos, const void *data, size_t len);

void strbuf_rtrim(struct strbuf *sb);
void strbuf_ltrim(struct strbuf *sb);
void strbuf_remove(struct strbuf *sb, size_t pos, size_t len);

ssize_t strbuf_read(struct strbuf *sb, int fd, size_t hint);
ssize_t strbuf_read_file(struct strbuf *sb, const char *path, size_t hint);
int strbuf_getline(struct strbuf *sb, FILE *fp);

struct strbuf **strbuf_split_buf(const char *str, size_t len, int terminator, int max);
bool strbuf_begin_judge(char *target_str, const char *str, int strnlen);
char *strbuf_get_mid_buf(char *target_buf, int begin, int end, int len);
*/

#endif