#include "application.c"
#include "presentation.c"


int main(int argc, char const *argv[])
{
    int a =0;

Application_data request_data=app();

 Encrypted_data e=some_encryption(request_data);

    while (a<200)
    {
        printf("%d",e.arr[a]);
        a++;
        if (a==199)
        {
            printf("\n");
        }
        
    }
    


    return 0;
}
