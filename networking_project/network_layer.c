
#include <stdio.h>
#include <string.h>
#include "network_layer.h"
#include "transport.h"
#include "util.h"
#include "SYSTEM_A/system_config_A.c"
#include "SYSTEM_B/system_config_B.c"
static Wrapped_Request wrapped_request;


Wrapped_Request getIt() {
    return wrapped_request;
}

/**
 * @brief  this method will wrap the request with addresses, kind of like an IP, that is different than th
 * 
 * @param data the seegmented data from the transport layer
 * @param  PARAM_NAME PARAM_TYPE
 * 
 * @return Wrapped_Request
 */
Wrapped_Request wrapped_request_creation(Segmented_data data) {
    strcpy(wrapped_request.network_name,"default");
    wrapped_request.data = data;
    strcpy(wrapped_request.device[0].device_name,"source");
    strcpy(wrapped_request.device[0].device_path,get_device_info_A().device_path);

    strcpy(wrapped_request.device[1].device_name,"destination");
    strcpy(wrapped_request.device[1].device_path,get_info_device_B().device_path);


    printf("<====================NETWORK %s :====================> \n",wrapped_request.network_name);
    printf("NETWORK =====>DEVICE 1 NAME : %s : \n",wrapped_request.device[0].device_name);
    printf("NETWORK =====>DEVICE 1 PATH : %s\n",wrapped_request.device[0].device_path);

    printf("NETWORK =====>DEVICE 2 NAME : %s : \n",wrapped_request.device[1].device_name);
    printf("NETWORK =====>DEVICE 2 PATH : %s\n",wrapped_request.device[1].device_path);
    return wrapped_request; // Return value (if any)
}
