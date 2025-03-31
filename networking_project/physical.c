#include "physical.h"

#include <stdio.h>

#include "network_layer.h"

Binary_Data binary_data;
int turn_into_binary(Wrapped_Request *request) {
    printf("\n<============================== PHYSICAL LAYER ==============================>\n");
    printf("\n\n<=================================== DATA IN BINARY FORM ===================================>\n\n");
    for (int i = 0; i < 51; i++) {
        for (int j = 7; j >= 0; --j) {
            int *p = &request->data.data_chunk_1[i];


            if (p != NULL) {
                binary_data.data_B[i * 8 + (7 - j)] = ((*p >> j) & 1);
            } else {

                printf("ERROR: Pointer is NULL at index %d\n", i);
            }
        }





    }
    for (int i = 0; i < 51; i++) {
        for (int j = 7; j >= 0; --j) {
            int *p = &request->data.data_chunk_2[i];

            // Ensure pointer is not NULL before dereferencing
            if (p != NULL) {
                // Shift by j to extract the j-th bit
                binary_data.data_B[i * 8 + (7 - j)] = ((*p >> j) & 1);
            } else {
                // Print error only if the pointer is NULL
                printf("ERROR: Pointer is NULL at index %d\n", i);
            }
        }





    }

    for (int i = 0; i < 51; i++) {
        for (int j = 7; j >= 0; --j) {
            int *p = &request->data.data_chunk_3[i];

            // Ensure pointer is not NULL before dereferencing
            if (p != NULL) {
                // Shift by j to extract the j-th bit
                binary_data.data_B[i * 8 + (7 - j)] = ((*p >> j) & 1);
            } else {
                // Print error only if the pointer is NULL
                printf("ERROR: Pointer is NULL at index %d\n", i);
            }
        }





    }

    for (int i = 0; i < 51; i++) {

        for (int j = 7; j >= 0; --j) {
            int *p = &request->data.data_chunk_4[i];

            // Ensure pointer is not NULL before dereferencing
            if (p != NULL) {
                // Shift by j to extract the j-th bit
                binary_data.data_B[i * 8 + (7 - j)] = ((*p >> j) & 1);
            } else {
                // Print error only if the pointer is NULL
                printf("ERROR: Pointer is NULL at index %d\n", i);
            }
        }





    }


for (int i = 0; i < 1200; ++i) {
    if (i%100==0) {
        printf("\n");
    }
    if (i%8==0) {
        printf("|");
    }
    printf("%d",binary_data.data_B[i]);
}

return 1;
}



