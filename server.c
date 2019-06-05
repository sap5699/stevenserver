
#include "wrappers.h"

typedef struct Request 
{
	sockaddr_in *clientInfo;	/* information about the clients */
	int connfd;					/* Connection file descriptor */
} request;

int main(int argc, char *argv[])
{
	/* Verify correct arguments */
	if(argc!=2)
	{
		fprintf(stdout, "usage: %s <port>\n", argv[0]);
		exit(1);
	}
	int port = atoi(argv[1]);
	printf("Port: %d\n", port);

	/* Create socket data structures */
	sockaddr_in serverInfo;
	socklen_t sockSize = sizeof(sockaddr_in);
	int sockfd, connfd;

	/* Initialize socket data structures */
	memset(&serverInfo, 0, sizeof(serverInfo));
	serverInfo.sin_family = AF_INET;
	serverInfo.sin_addr.s_addr = htonl(INADDR_ANY);
	serverInfo.sin_port = htons(port);

	/* Establish connection with clients */
	sockfd = Socket(AF_INET, SOCK_STREAM, 0);
	Bind(sockfd, (sockaddr *)&serverInfo, sockSize);
	Listen(sockfd, 1);
	while(1)
	{
		sockaddr_in *clientInfo = (sockaddr_in *)malloc(sizeof(sockadd_in));
		request *req = (request *)malloc(sizeof(request));
		connfd = Accept(sockfd, (sockaddr *)&clientInfo, &sockSize);
	}
	return 0;
}

/* Thread entrance function to handle a connection from a client */
void *handleConnection(void *request)
{

	free(request->clientInfo);
	free(request);
	return NULL;

}

/*  */
void parseHeaders()
{

}
