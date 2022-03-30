#include <iostream>
#include <fstream>


namespace EventLogger {
    class recordEvent {
    public:
        static recordEvent *getInstance() {
            if (instance == NULL)
            {
                instance = new recordEvent();
            }
            return instance;
        };
        void logEvent(std::string text) {
            if (logFile.is_open()) {
                logFile << text << std::endl;
                printf("it's open\n");
            }
        };
    private:
        std::ofstream logFile;
        static recordEvent *instance;
        recordEvent() {
            if (logFile.is_open()) {
                printf("it's open\n");
            } else {
                printf("it's not open\n");
                logFile.open("log.txt", std::ios::app);
            }
        };
    };
}