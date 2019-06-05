#include "steven.h"

int Socket(int domain, int type, int protocol)
{
	int ret = socket(domain, type, protocol);
	if(ret < 0)
	{
		fprintf(stderr, "Problem creating socket\n");
	}
	return ret;
}

int Bind(int sockfd, sockaddr *addr, socklen_t addrLen)
{
	int ret = bind(sockfd, addr, addrLen);
	if(ret < 0)
	{
		fprintf(stderr, "Problem binding address to socket\n");
	}
	return ret;
}

int Listen(int sockfd, int backlog)
{
	int ret = listen(sockfd, backlog);
	if(ret < 0)
	{
		fprintf(stderr, "Problem in listen call\n");
	}
	return ret;
}

int Accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen)
{
	int ret = accept(sockfd, addr, addrlen);
	if(ret < 0)
	{
		fprintf(stderr, "Problem accepting connection from client\n");
	}
	return ret;
}

ssize_t Read(int fildes, void *buf, size_t nbyte)
{
	int ret = read(fildes, buf, nbyte);
	if(ret < 0)
	{
		fprintf(stderr, "Problem reading file\n");
	}
	return ret;
}

int Pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void*), void *arg)
{
    int ret = pthread_create(thread, attr, start_routine, arg);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem creating thread\n");
    }
    return ret;
}

int Pthread_join(pthread_t thread, void **retval)
{
    int ret = pthread_join(thread, retval);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem creating thread\n");
    }
    return ret;
}

int Pthread_mutex_lock(pthread_mutex_t *mutex)
{
    int ret = pthread_mutex_lock(mutex);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem locking mutex\n");
    }
    return ret;
}

int Pthread_mutex_unlock(pthread_mutex_t *mutex)
{
    int ret = pthread_mutex_unlock(mutex);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem unlocking mutex\n");
    }
    return ret;
}

int Pthread_mutex_init(pthread_mutex_t *restrict mutex, const pthread_mutexattr_t *restrict attr)
{
    int ret = pthread_mutex_init(mutex, attr);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem initializing mutex\n");
    }
    return ret;
}

int Pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex)
{
    int ret = pthread_cond_wait(cond, mutex);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem waiting on cond\n");
    }
    return ret;
}

int Pthread_cond_signal(pthread_cond_t *cond)
{
    int r = pthread_cond_signal(cond);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem signaling pthread_cond_t\n");
    }
    return ret;
}

int Pthread_cond_init(pthread_cond_t *restrict cond, const pthread_condattr_t *restrict attr)
{
    int ret = pthread_cond_init(cond, attr);
    if(ret < 0)
    {
    	fprintf(stderr, "Problem initializing pthread_cond_t\n");
    }
    return ret;
}