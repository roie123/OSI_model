#include "application.h"
#include "presentation.h"
#include <stddef.h>
#include <stdio.h>



//This layer is responsible to encrypt the data so eve if somone intercept the data they couldn't read it 
//as the encryption type is not really relevent, we will just play a bit with the placement of chars 


static Encrypted_data encrypted_data ={0};

//arr[200] = [name 40][text 100][method 1][content 1]

/**
 * @brief this function encypts the data using shifts in the txt , if
 * its even than +1 in ascii else its -1
 * method and content type is not encrypted 
 *
 * @param param 
 * @return char[], the whole data is turned into a single array 
 */
 Encrypted_data some_encryption(Application_data data) {








    
    
    size_t a=0;
     
    while (a<200)
    {
       
        encrypted_data.arr[a]=0;
        printf("%d",encrypted_data.arr[a]);
        a++;
    }

    printf("\n \n");
    
    
    for (size_t i = 0; i < 40 && data.user_name[i] != '\0'; i++) {
        
        if (i % 2 == 0) {
            data.user_name[i] += 1;  
        }
        else{
            data.user_name[i] -= 1;
        }

        encrypted_data.arr[i]=data.user_name[i];
        
    }
    
    for (size_t i = 0; i < 100 && data.text[i]!='\0' ; i++)
    {
       
        if (i % 2 == 0) {
            data.text[i] += 1;  
        }
        else{
            data.text[i] -= 1;
        }

        encrypted_data.arr[i+40]=data.text[i];
    }


encrypted_data.arr[198]=(int)data.content_type;
encrypted_data.arr[199]=(int)data.method;


 



        return encrypted_data;
}
