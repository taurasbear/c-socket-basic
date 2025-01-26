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

    printf("Hello world!");

    return 0;
}