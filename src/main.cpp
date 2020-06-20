
#include "log.h"

int main() {
    Log log;
    log.setLevel(Log::LOG_LEVEL_WARNING);
    log.error("Hello!");
    log.warn("Hello!");
    log.info("Hello!");
}