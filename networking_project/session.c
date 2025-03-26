#include "session.h"
#include <stdio.h>
#include <stdlib.h>

static Connection c;

Connection start_session(char destination_from_user[150]){

c.session_Id =rand();
c.status=IN_PROGRESS;
c.synch_points[0]=NAME;
c.synch_points[1]=TEXT;
c.synch_points[2]=CONTENT_TYPE;
c.synch_points[3]=METHOD;
strcpy(c.destination,destination_from_user);


FILE *file = fopen(c.destination,"W");
if (file==NULL)
{
perror("cant open this file ");
c.status=ERROR;
printf("Could not connect (session error), folder not found");
return c;
}





    return c;
}