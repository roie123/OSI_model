#include "application.c"
#include "presentation.c"
#include "session.c"
#include "util.h"
#include "transport.c"
#include "network_layer.h"
int main(int argc, char const *argv[])
{
    
Application_data request_data=app();
Encrypted_data e=some_encryption(request_data);
Connection con=start_session(destination_folder);
Segmented_data segmented_data =segment_data(con,e);
wrapped_request_creation(segmented_data);
// getIt();


    return 0;
}

