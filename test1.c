#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

void main()
{
char pbuf[128];
struct sockaddr_in6 inaddr_local;
struct addrinfo hint;
struct addrinfo *res = NULL;
int ret;

memset(&hint, 0, sizeof(hint));

hint.ai_family = PF_UNSPEC;
hint.ai_flags = AI_NUMERICHOST;

ret = getaddrinfo("::100", NULL, &hint, &res);

if (ret) {
        printf("Invalid address");
        return;
}
if(res->ai_family == AF_INET) {
        printf("This is an ipv4 address\n");
} else if (res->ai_family == AF_INET6) {
        printf("This is an ipv6 address\n");
}

//inaddr_local.sin6_family = AF_INET6;
//inet_pton(AF_INET6, "192.168.1.100", &inaddr_local.sin6_addr.s6_addr);
//inet_ntop(AF_INET6, (const void *) &inaddr_local.sin6_addr, pbuf, sizeof(pbuf));
//printf("Address in IPv6 format is %s\n", pbuf);

}
