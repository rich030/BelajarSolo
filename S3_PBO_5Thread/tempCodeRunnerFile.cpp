#include "Thread.h"

int main() {
    Thread thread1, thread2, thread3;
    thread1.start();
    thread2.start();
    thread3.start();
    this_thread :: sleep_for ( 10s );

    thread1.stop();
    thread2.stop();
    thread3.stop();
    this_thread :: sleep_for ( 3s );
    return 0;
}