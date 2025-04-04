#include "application.c"
#include "presentation.c"
#include "session.c"
#include "util.h"
#include "transport.c"
#include "network_layer.h"
#include "data_link.h"
#include "physical.h"

int main(int argc, char const *argv[])
{
    
Application_data request_data=app();
Encrypted_data e=some_encryption(request_data);
Connection con=start_session(destination_folder);
Segmented_data segmented_data =segment_data(con,e);
Wrapped_Request request=wrapped_request_creation(segmented_data);
request=add_mac_address(&request);
turn_into_binary(&request);

    return 0;
}

