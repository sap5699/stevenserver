#include <sys/socket.h>
#include <sys/fcntl.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>


typedef char *String;
typedef struct sockaddr_in sockaddr_in;
typedef struct sockaddr sockaddr;

extern int Open(const char *pathname, int flags);
extern int Read(int fildes, void *buf, size_t nbyte);

extern int Socket(int domain, int type, int protocol);
extern int Bind(int sockfd, sockaddr *addr, socklen_t addrLen);
extern int Listen(int sockfd, int backlog);
extern int Accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);

extern int Pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern int Pthread_join(pthread_t thread, void **retval);
extern int Pthread_mutex_lock(pthread_mutex_t *mutex);
extern int Pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int Pthread_mutex_init(pthread_mutex_t *restrict mutex, const pthread_mutexattr_t *restrict attr);
extern int Pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern int Pthread_cond_signal(pthread_cond_t *cond);
extern int Pthread_cond_init(pthread_cond_t *restrict cond, const pthread_condattr_t *restrict attr);