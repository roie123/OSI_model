#include "data_link.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "SYSTEM_A/system_config_A.h"
#include "SYSTEM_B/system_config_B.h"




Wrapped_Request add_mac_address(Wrapped_Request *request) {
strcpy(request->device[0].MAC_address,get_device_info_A().MAC_address);
strcpy(request->device[1].MAC_address,get_info_device_B().MAC_address);

    printf("\n <======================= DATA LINK  LAYER =======================> \n");
    printf("Adding MAC address:%s to %s\n",request->device[0].MAC_address,request->device[0].device_name);
    printf("Adding MAC address:%s to %s\n",request->device[1].MAC_address,request->device[1].device_name);

return *request;
}