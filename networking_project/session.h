#ifndef SESSION_H
#define SESSION_H
#include <stddef.h>


typedef enum sych_points_values {NAME=0,TEXT_SYNCH=40,CONTENT_TYPE=198,METHOD=199};

typedef unsigned long ul;

typedef enum Status {OK=1 ,IN_PROGRESS=2 ,ERROR=3} Status;

typedef struct Connection
{
    ul session_Id;
    size_t synch_points[100];
    Status status;
    char destination[150];
    
}Connection;

Connection start_session();



#endif