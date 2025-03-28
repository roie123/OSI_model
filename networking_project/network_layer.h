#ifndef NETWORK_LAYER_H
#define NETWORK_LAYER_H
#include "transport.h"


typedef struct Device {
    char device_name[50];
    char device_path[50];
} Device;
typedef struct Wrapped_Request {
    char network_name[50];
    Device device[5];
    Segmented_data data;
} Wrapped_Request;

Wrapped_Request wrapped_request_creation(Segmented_data data);
Wrapped_Request getIt();

#endif
