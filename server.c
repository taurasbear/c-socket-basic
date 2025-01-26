#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")

int main()
{
    WSADATA wsadata;
    int result;
    result = WSAStartup(MAKEWORD(2, 2), &wsadata);

    if (result != 0)
    {
        printf("WSAStartup failed: %d", result);
        return 1;
    }

    struct addrinfo *result = NULL,
                    *ptr = NULL,
                    hints;

    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;

    return 0;
}