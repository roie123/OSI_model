#ifndef APPLICATION_H
#define APPLICATION_H




typedef enum Method {GET=1 ,POST,PUT,DELETE} Method;
typedef enum Content_type {TEXT=1,IMAGE,STREAM} Content_type;

typedef struct Application_data
{
    Method method;
    char user_name[40];
    Content_type content_type;
    char text[100];
} Application_data; 

Application_data app();














#endif