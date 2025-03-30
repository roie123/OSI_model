#include "physical.h"

#include <stdio.h>

#include "network_layer.h"

Binary_Data binary_data;
int turn_into_binary(Wrapped_Request *request) {

    for (int i = 0; i < 51; i++) {
        for (int j = 7; j >= 0; --j) {
            int *p = &request->data.data_chunk_1[i];

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
printf("\nEND OF CHUNK 1 =>\n");
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
    printf("\nEND OF CHUNK 2 =>\n");

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
    printf("\nEND OF CHUNK 3 =>\n");

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
    printf("\nEND OF CHUNK 4 =>\n");

printf("\n<============================== PHYSICAL LAYER ==============================>\n");
printf("\n\n<============================== DATA IN BINARY FORM ==============================>\n\n");
for (int i = 0; i < 2000; ++i) {
    printf("%d",binary_data.data_B[i]);
}

return 1;
}



