/*************************************************************************
    > File Name: pthread.h
    > Author: Luting Wang
    > Mail:2457348692@qq.com
    > Created Time: 2019��06��11�� ���ڶ� 15ʱ12��49��
 ************************************************************************/

#ifndef _PTHREAD_H
#define _PTHREAD_H      1

#include <types.h>

typedef u_int pthread_t;

typedef struct {
        // char size[__SIZEOF_PTHREAD_ATTR_T];
        long int align;
} pthread_attr_t;

int pthread_create(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
void pthread_exit(void *retval);
int pthread_join(pthread_t th, void **thread_return);
int pthread_cancel(pthread_t th);

#endif  /* pthread.h */

