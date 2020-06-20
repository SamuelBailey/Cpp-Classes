
class Log {
private:
    int logLevel = MAX_LOG_LEVEL;

    static const int MIN_LOG_LEVEL = 0;
    static const int MAX_LOG_LEVEL = 2;

public:
    static const int LOG_LEVEL_ERROR = 0;
    static const int LOG_LEVEL_WARNING = 1;
    static const int LOG_LEVEL_INFO = 2;

    void setLevel(int level);

    void warn(const char* message);
    void error(const char* message);
    void info(const char* message);
};