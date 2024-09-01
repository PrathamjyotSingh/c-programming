#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char buffer[100];
    int sockid, commfd;
    struct sockaddr_in serveraddr, cliaddr;
    sockid = socket(AF_INET, SOCK_STREAM, 0);
    if (sockid < 0){
    printf("Not Created\n");
    return 1;}
    bzero(&serveraddr, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = INADDR_ANY;
    serveraddr.sin_port = htons(23456);
    if (bind(sockid, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) < 0){
    printf("Not Binded\n");
    return 1;}
    listen(sockid, 10);
    int size = sizeof(cliaddr);
    printf("Server available\n");
    commfd = accept(sockid, (struct sockaddr *)&cliaddr, &size);
    if (commfd < 0){
    printf("Server accept failed\n");
    return 1;}
    while (1){
    bzero(buffer, 100);
    int n = recv(commfd, buffer, 100, 0);
    if (n <= 0){
    printf("Client Exit\n");
    break;}
    printf("\nReply: %s", buffer);
    printf("You: ");
    bzero(buffer, 100);
    fgets(buffer, 100, stdin);
    send(commfd, buffer, strlen(buffer), 0);
    if (strncmp("exit", buffer, 4) == 0){
    printf("Chat Ended\n");
    break;}}
    close(commfd);
    close(sockid);
    return 0;
}
