#include "application.c"
#include "presentation.c"
#include "session.c"
#include "util.h"
#include "transport.c"
int main(int argc, char const *argv[])
{
    
Application_data request_data=app();
Encrypted_data e=some_encryption(request_data);
Connection con=start_session(destination_folder);
segment_data(con,e);




    return 0;
}

