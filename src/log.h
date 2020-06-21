#pragma once

class Log {
public:
    enum Level : unsigned char {
        ERROR,
        WARNING,
        INFO
    };

private:
    Level logLevel = INFO;

public:
    void setLevel(Level level);

    void warn(const char* message);
    void error(const char* message);
    void info(const char* message);
};