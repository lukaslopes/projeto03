#ifndef QUERY_IOCTL_H
#define QUERY_IOCTL_H

#define CARDSIZE 16
#define NAMESIZE 20
#define CRYPT 20

#include <linux/ioctl.h>
 
typedef struct
{
    int code;
    float value;
    char number[CARDSIZE];
    char name[NAMESIZE];
} transaction_arg_t;
 
#define GET_TRANSACTION _IOR('t', 1, transaction_arg_t *)
#define CLR_TRANSACTION _IO('t', 2)
#define SET_TRANSACTION _IOW('t', 3, transaction_arg_t *)
 
#endif
