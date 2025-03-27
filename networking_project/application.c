#include "application.h"
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>

Method getMethod(char choice){
switch (choice )
{
case '1':
return GET;
break;

case '2':
return PUT;
break;

case '3':
return POST;
break;

case '4':
return DELETE;
break;
default:
return GET;
    break;
}
}



Content_type getContentType(char choice){


switch (choice)
{
case '1':
    return TEXT;
    break;

    case '2':
    return IMAGE;
    break;

    case '3':
    return STREAM;
    break;
default:
    break;
}

}



static Application_data app_data;


Application_data app(){
    char choice;
    char name[40] = {0};
    char text[100] = {0};
    char temp;
    int i = 0;

    printf("\n=======================================\n");
    printf(" Welcome to the Packet Transfer App!  \n");
    printf("=======================================\n\n");

    printf("Let's create a new request.\n\n");
    printf("Choose the request type:\n");
    printf("   1) GET\n");
    printf("   2) POST\n");
    printf("   3) PUT\n");
    printf("   4) DELETE\n\n");

    printf("Enter your choice: ");


    
    choice = getchar();
    while (getchar() != '\n');  

    printf("%c selected\n", choice);

    printf("Enter your name: ");
    while ((temp = getchar()) != '\n' && temp != EOF) {
        if (i < 39) {  // Prevent buffer overflow
            name[i++] = temp;
        }
    }
    name[i] = '\0';

    printf("Choose the **content type**  1) TEXT  2) IMAGE\n");
    int content_choice = getchar();  
    while (getchar() != '\n');  

    
    int content_type = getContentType(content_choice);

    printf("WRITE THE TEXT HERE:\n");
    fgets(text, sizeof(text), stdin);
    
    
    text[strcspn(text, "\n")] = '\0';
  
    
    Application_data app_data;
    strcpy(app_data.user_name, name);
    strcpy(app_data.text, text);
    app_data.content_type = (int)content_type;
    app_data.method = (int)getMethod(choice);
 
    return app_data;

}