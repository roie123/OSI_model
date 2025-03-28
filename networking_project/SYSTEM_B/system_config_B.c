#include "system_config_B.h"
#include "../network_layer.h"
//
// Created by royivri on 3/28/25.
//
//THIS WILL STRORE THE SYSTEM CONFIG (like a PC)



static Device system_b_device_info ={.device_name ="Natan's PC" ,
.device_path = "/networking/OSI_MODEL/networking_project/SYSTEM_B"
    ,.MAC_address = "00:1A:2B:3C:4D:5E",
};


Device get_info_device_B() {
    return system_b_device_info;
}


