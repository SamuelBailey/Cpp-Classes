#include "log.h"

#include <exception>
#include <stdexcept>
#include <iostream>

void Log::setLevel(int level) {
    if (level < MIN_LOG_LEVEL || level > MAX_LOG_LEVEL) {
        throw std::invalid_argument("Level is outside range of accepted LOG_LEVEL values");
    }
    this->logLevel = level;
}

void Log::error(const char* message) {
    if (this->logLevel >= LOG_LEVEL_ERROR) {
        std::cout << "[ERROR]: " << message << std::endl;
    }
}

void Log::warn(const char* message) {
    if (this->logLevel >= LOG_LEVEL_WARNING) {
        std::cout << "[WARNING]: " << message << std::endl;
    }
}

void Log::info(const char* message) {
    if (this->logLevel >= LOG_LEVEL_INFO) {
        std::cout << "[INFO]: " << message << std::endl;
    }
}
