


typedef enum Method {GET ,POST,PUT,DELETE} Method;
typedef enum Content_type {TEXT,IMAGE,STREAM} Content_type;


typedef struct Application_data
{
    Method method;
    char user_name[40];
    Content_type content_type;
} Application_data; 


Method getMethod(char choice){
switch (choice )
{
case 1:
return GET;
break;

case 2:
return PUT;
break;

case 3:
return POST;
break;

case 4:
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
case 1:
    return TEXT;
    break;

    case 2:
    return IMAGE;
    break;

    case 3:
    return STREAM;
    break;
default:
    break;
}


}
Application_data app(){
char choice ,temp,i=0;
char name[40]={0};


printf("Hi welcome to the app , Lets transfer some packets ! ");
printf("first lets make the request");
printf("Choose the request type 1) GET  2) POST 3)PUT 4)DELETE");
choice=getchar();
printf("%d  selected",choice);
do{
temp=getchar();
name[i]=temp;
i++;

}while(temp!= '\n');
printf("");

printf("Choose the content type 1) TEXT  2) IMAGE ");


Application_data application_data ={.method=getMethod(choice) , .content_type=getContentType};
return  application_data;

}