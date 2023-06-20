#pragma once

#include "types.h"

extern "C" {
typedef void* (*alloc_t)(int, size_t);
typedef void (*free_t)(int, void*);
struct SOInitInfo {
    alloc_t allocator;
    free_t dealloc;
};

void SOFree(int, void*);
void* SOAlloc(int, size_t);

int SOInit(SOInitInfo* info);
int SOStartupEx(u32);
int SOSocket(int domain, int type, int protocal);
int SOBind(int socket, const struct sockaddr* address, int address_len);
int SOConnect(int socket, const struct sockaddr* address, int address_len);
int SOClose(int socket);
u32 SORecvFrom(int socket, void* buffer, u32 length, int flags, struct sockaddr* address, u32* address_len);
u32 SOSendTo(int socket, const void* message, u32 length, int flags, const struct sockaddr* dest_addr, u32 dest_len);
char* SOInetNtoA(struct in_addr in);
u32 SOHtoNl(u32 hostlong);
u32 SOHtoNs(u32 hostshort);
u32 SOHtoHl(u32 netlong);
u32 SOHtoHs(u32 netshort);
u32 SONtoHs(short);

enum {
    IOCTL_SO_ACCEPT	= 1,
    IOCTL_SO_BIND,
    IOCTL_SO_CLOSE,
    IOCTL_SO_CONNECT,
    IOCTL_SO_FCNTL,
    IOCTL_SO_GETPEERNAME, // todo
    IOCTL_SO_GETSOCKNAME, // todo
    IOCTL_SO_GETSOCKOPT,  // todo    8
    IOCTL_SO_SETSOCKOPT,
    IOCTL_SO_LISTEN,
    IOCTL_SO_POLL,        // todo    b
    IOCTLV_SO_RECVFROM,
    IOCTLV_SO_SENDTO,
    IOCTL_SO_SHUTDOWN,    // todo    e
    IOCTL_SO_SOCKET,
    IOCTL_SO_GETHOSTID,
    IOCTL_SO_GETHOSTBYNAME,
    IOCTL_SO_GETHOSTBYADDR,// todo
    IOCTLV_SO_GETNAMEINFO, // todo   13
    IOCTL_SO_UNK14,        // todo
    IOCTL_SO_INETATON,     // todo
    IOCTL_SO_INETPTON,     // todo
    IOCTL_SO_INETNTOP,     // todo
    IOCTLV_SO_GETADDRINFO, // todo
    IOCTL_SO_SOCKATMARK,   // todo
    IOCTLV_SO_UNK1A,       // todo
    IOCTLV_SO_UNK1B,       // todo
    IOCTLV_SO_GETINTERFACEOPT, // todo
    IOCTLV_SO_SETINTERFACEOPT, // todo
    IOCTL_SO_SETINTERFACE,     // todo
    IOCTL_SO_STARTUP,           // 0x1f
    IOCTL_SO_ICMPSOCKET =	0x30, // todo
    IOCTLV_SO_ICMPPING,         // todo
    IOCTL_SO_ICMPCANCEL,        // todo
    IOCTL_SO_ICMPCLOSE          // todo
};
}