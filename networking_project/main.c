#include "application.c"
#include "presentation.c"
#include "session.c"
#include "util.h"
int main(int argc, char const *argv[])
{
    int a =0;

Application_data request_data=app();

Encrypted_data e=some_encryption(request_data);
start_session(destination_folder);


    


    return 0;
}
