#include "application.h"
#include <stdio.h>
#include <termios.h>
#include <unistd.h>


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
Application_data app(){
char choice ,i=0;
char name[40]={0};
char temp='1';
char text[100]={0};
printf("Hi welcome to the app , Lets transfer some packets ! \n");
printf("first lets make the request\n");
printf("Choose the request type \n1) GET  2) POST 3)PUT 4)DELETE \n");
choice=getchar();
printf("%c  selected \n",choice);
scanf("%*c"); 

while((temp=getchar()) !='\n' && temp!=EOF){
    name[i]=temp;
    i++;
}
name[i]='\0';

tcflush(STDIN_FILENO, TCIFLUSH);

printf("Choose the **content type**  1) TEXT  2) IMAGE \n");
Content_type content_type = getContentType(getchar());



puts("WRITE THE TEXT HERE : \n");
fgets(text,100,stdin);
tcflush(STDIN_FILENO, TCIFLUSH);



Application_data application_data ={.text =text, .method=getMethod(choice) ,.user_name=name ,.content_type=content_type};


printf("DATA TO BE ENCRYPTED : \n" 
    "username = %s \n"
    "METHOD = %d \n" 
    "CONTENT_TYPE =  %c  " 
   "TEXT = %s" , 
   application_data.user_name ,application_data.method,application_data.content_type,application_data.text
   );

return  application_data;

}