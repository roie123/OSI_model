#ifndef SYSTEM_CONFIG_A_H
#define SYSTEM_CONFIG_A_H
#include "../network_layer.h"

//
// Created by royivri on 3/28/25.
//
//THIS WILL STORE THE SYSTEM CONFIG (like a PC)



static Device system_a_device_info ={.device_name ="Natan's PC" ,
.device_path = "/networking/OSI_MODEL/networking_project/SYSTEM_B"
};


Device get_device_info_A() {
return system_a_device_info;
}
#endif
