#include "application.c"
#include "presentation.c"


int main(int argc, char const *argv[])
{
    

Application_data request_data=app();
printf("DATA TO BE ENCRYPTED : \n" 
    "username = %s \n"
    "METHOD = %d \n" 
    "CONTENT_TYPE =  %c  " 
   "TEXT = %s  \n" , 
   request_data.user_name ,request_data.method,request_data.content_type,request_data.text
   );
// some_encryption(request_data);

    
    return 0;
}
