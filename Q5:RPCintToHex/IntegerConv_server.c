/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "IntegerConv.h"

my_result *
tohex_1_svc(int *argp, struct svc_req *rqstp)
{
	static my_result  result;
	/*
	 * insert server code here
	 */
	static char text[255]; 
	memset(&result, '\0', sizeof(result));                                
	memset(text, '\0', sizeof(text));
	printf("Received %d from client\n",*argp);
	sprintf(text, "%x", *argp);
	result.data = text;
	return &result;
}

my_result *
tooct_1_svc(int *argp, struct svc_req *rqstp)
{
	static my_result  result;
	/*
	 * insert server code here
	 */
	static char text[255]; 
	memset(&result, '\0', sizeof(result));                                
	memset(text, '\0', sizeof(text));
	printf("Received %d from client\n",*argp);
	sprintf(text, "%o", *argp);
	result.data = text;
	return &result;
}
