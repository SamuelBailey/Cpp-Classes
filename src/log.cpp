#include "log.h"

#include <exception>
#include <stdexcept>
#include <iostream>

void Log::setLevel(Level level) {
    if (level < ERROR || level > INFO) {
        throw std::invalid_argument("Level is outside range of accepted LOG_LEVEL values");
    }
    this->logLevel = level;
}

void Log::error(const char* message) {
    if (this->logLevel >= ERROR) {
        std::cout << "[ERROR]: " << message << std::endl;
    }
}

void Log::warn(const char* message) {
    if (this->logLevel >= WARNING) {
        std::cout << "[WARNING]: " << message << std::endl;
    }
}

void Log::info(const char* message) {
    if (this->logLevel >= INFO) {
        std::cout << "[INFO]: " << message << std::endl;
    }
}
