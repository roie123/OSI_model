#include "application.h"



//This layer is responsible to encrypt the data so eve if somone intercept the data they couldn't read it 
//as the encryption type is not really relevent, we will just play a bit with the placement of chars 


typedef struct Encrypted_data
{
    char arr[200];
}Encrypted_data;


/**
 * @brief this function encypts the data using shifts in the txt 
 *
 * @param param 
 * @return ReturnType 
 */
 int some_encryption(Application_data data) {
     
    //  printf("DATA TO BE ENCRYPTED : \n" 
    //      "username = %s \n"
    //      "METHOD = %d \n" 
    //      "CONTENT_TYPE =  %c  " 
    //     "TEXT = %s" , 
    //     data.user_name ,data.method,data.content_type,data.text
    //     );


        return 1;
}
