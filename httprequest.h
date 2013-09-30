#ifndef HTTP_REQUEST_H
#define HTTP_REQUEST_H


#include <string>
#include "curl/curl.h"


   class HttpRequest{

    public:
        HttpRequest(std::string url_string);
        void execute();
        std::string getResult();

    private:
        CURL *curl;
        CURLcode res;
        std::string url;

        void setopt();
        void perform();
        void cleanUp();
        void validate();

        static std::string htmlResponse;
        static std::size_t writeCallback(char * buf, size_t size, size_t nmemb, void* up);
    };
	
	
	
	
	
	#endif 