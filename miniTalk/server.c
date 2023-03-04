#include "minitalk.h"

void signal_handler(int sigCode)
{
    printf("My function was started\n");
}

int main()
{
    printf("server is running on PID = %d",getpid());
    fflush(stdout);

    signal(SIGUSR1,signal_handler);
    signal(SIGUSR2,signal_handler);

    while(1)
    {
        pause();
    }


    return 0;
}