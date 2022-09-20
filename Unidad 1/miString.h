#ifndef MISTRING_H_INCLUDED
#define MISTRING_H_INCLUDED

size_t miStrlen(const char *s);
void* miMemcpy(void *destino,const void *origen,size_t n);
void* miMemMove(void *destino,const void *origen,size_t n);
char *strncat(char*s1, const char *s2, size_t n);


#endif // MISTRING_H_INCLUDED
