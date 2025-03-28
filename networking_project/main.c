#include "application.c"
#include "presentation.c"
#include "session.c"
#include "util.h"
#include "transport.c"
#include "network_layer.h"
#include "data_link.h"
int main(int argc, char const *argv[])
{
    
Application_data request_data=app();
Encrypted_data e=some_encryption(request_data);
Connection con=start_session(destination_folder);
Segmented_data segmented_data =segment_data(con,e);
Wrapped_Request request=wrapped_request_creation(segmented_data);
request=add_mac_address(&request);

    printf("%s\n",request.device[0].MAC_address);
    printf("%s\n",request.device[1].MAC_address);

    return 0;
}

