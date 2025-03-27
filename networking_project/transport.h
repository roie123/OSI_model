#if !defined(TRANSPORT_H)
#define TRANSPORT_H
#include "session.h"
typedef struct Segmented_data
{
     unsigned int data_chunk_1[51];
     unsigned int data_chunk_2[51];
     unsigned int data_chunk_3[51];
     unsigned int data_chunk_4[51];
     Connection con;
}Segmented_data;







#endif // TRANSPORT_H
