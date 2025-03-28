#ifndef SYSTEM_CONFIG_B_H
#define SYSTEM_CONFIG_B_H
#include "../network_layer.h"
//
// Created by royivri on 3/28/25.
//
//THIS WILL STRORE THE SYSTEM CONFIG (like a PC)



static Device system_b_device_info ={.device_name ="Natan's PC" ,
.device_path = "/networking/OSI_MODEL/networking_project/SYSTEM_B"
};


Device get_info_device_B() {
    return system_b_device_info;
}

#endif
