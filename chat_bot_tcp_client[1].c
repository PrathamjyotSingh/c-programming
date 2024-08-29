#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/types.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    int sockid;
    char data[100], rcvdata[100];
    struct sockaddr_in serveraddr;
    sockid = socket(AF_INET, SOCK_STREAM, 0);
    if (sockid < 0){
    printf("Not Created\n");
    return 1;}
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serveraddr.sin_port = htons(23456);
    if (connect(sockid, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) < 0){
    printf("Not connected\n");
    return 1;}
    printf("Server Connected\n");
    while (1){
    printf("You: ");
    bzero(data, 100);
    fgets(data, 100, stdin);
    send(sockid, data, strlen(data), 0);
    if (strncmp("exit", data, 4) == 0){
    printf("Client Exit\n");
    break;}
    bzero(rcvdata, 100);
    int n = recv(sockid, rcvdata, 100, 0);
    if (n <= 0){
    printf("Chat Ended\n");
    break;}
    printf("Reply: %s", rcvdata);}
    close(sockid);
    return 0;
}
