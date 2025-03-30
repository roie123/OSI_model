#ifndef PRESENTATION_H
#define PRESENTATION_H
#endif



#include <stddef.h>
#include "transport.h"

#include <time.h>

#include "session.h"

/*
This is the transport layer 
it should break down the request into smaller chunks for transmission
and add a port (In HTTP request )

TCP will ensure all the chunks have arrived safely and in order

*/
static Segmented_data segmented_data;
#define SLEEP_TIME 2000000
/**
 * @brief this method will segment the data into smaller chunks 
 * 
 *
 * @param param 
 * @return ReturnType 
 */
Segmented_data segment_data(Connection con, Encrypted_data data ) {

    printf("\nCHUNK 1 ===>");
    usleep(SLEEP_TIME);

for (size_t i = 0; i < 50; i++)
{
    segmented_data.data_chunk_1[i]=data.arr[i];
    printf("%d",segmented_data.data_chunk_1[i]);

}

    printf("\nCHUNK 2 ===>");
    usleep(SLEEP_TIME);

for (size_t i = 50; i < 100; i++)
{
    segmented_data.data_chunk_2[i]=data.arr[i];
    printf("%d",segmented_data.data_chunk_2[i]);

}
    printf("\nCHUNK 3 ===>");

for (size_t i =100; i < 150; i++)
{
    segmented_data.data_chunk_3[i]=data.arr[i];
    printf("%d",segmented_data.data_chunk_3[i]);

}
    printf("\nCHUNK 4 ===>");
    usleep(SLEEP_TIME);

for (size_t i = 150; i < 200; i++)
{
    segmented_data.data_chunk_4[i]=data.arr[i];
    printf("%d",segmented_data.data_chunk_4[i]);

}
    usleep(SLEEP_TIME);




}