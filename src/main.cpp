#include <iostream>

#include "log.h"

static int s_var = 5;

int main() {
    Log log;
    log.setLevel(Log::WARNING);
    log.error("Hello!");
    log.warn("Hello!");
    log.info("Hello!");
}