// This file is automatically generated.
// Please do not edit manually.
// Check the documentation to learn how to edit it
#ifndef _index_html_
#define _index_html_
#include <ESP8266WebServer.h>
const char index_html[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Wifi setting</title>
    <link href="style.css" rel="stylesheet" />
</head>

<body>
    <div class="center">
        <div style="position: relative; top: -50px;" class="outer">
            <img
                src="data:image/png;base64,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">
        </div>
        <div class="outer">

            <div class="wifi left1 ">
                <span class="setting_img"></span><span><a href="/setting"><input type="button" name="" value="Setting"
                            class="buttonWifi"></a></span>
            </div>
        </div>


        <div class="outer">
            <div class="wifi left1">
                <span class="controller_img"></span><span><a href="/gamePad"><input type="button" name=""
                            value="Controller" class="buttonWifi"></a></span>
            </div>

            <div class="wifi right1">
                <span class="terminal_img"></span><span><a href="/terminal"><input type="button" name="" value="Terminal"
                            class="buttonWifi"></a></span>
                </div>
        </div>
        <div class="outer">
        <div class="wifi left1">
            <span class="home_img"></span><span><a href="/SmartHome"><input type="button" name="" value="SmartHome"
                        class="buttonWifi"></a></span>
        </div>
        <div class="wifi right1">
            <span class="config_img"></span><span><a href="/config"><input type="button" name="" value="Config"
                        class="buttonWifi"></a></span>
        </div>
    </div>
    </div>

</body>

</html>)=====";
extern ESP8266WebServer server;
void send_index_html(){
	digitalWrite(D7, HIGH);
	server.send(200, "text/html", index_html);
	digitalWrite(D7, LOW);
}
#endif
//EOF
