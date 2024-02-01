// This file is automatically generated.
// Please do not edit manually.
// Check the documentation to learn how to edit it
#ifndef _SmartHome_html_
#define _SmartHome_html_
#include <ESP8266WebServer.h>
const char SmartHome_html[] PROGMEM = R"=====(
<!doctype html>
<html>

<head>
  <title>NANIT CMArt home</title>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
  <link href="style.css" rel="stylesheet" />
</head>

<body>
  <center>
    <!-- 
    ===============================================================================
            Навігаційне меню
    =============================================================================== 
     -->
    <div class="nanit_img">
      <img style="vertical-align: middle;"
        src="data:image/png;base64,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">
    </div>

    <div class="frame_text">
      <span class="home_img"></span><span><a href="/"><input type="button" name="" value="Home"
            class="font_type"></a></span>
    </div>

    <div class="frame_text">
      <span class="setting_img"></span><span><a href="/setting"><input type="button" name="" value="Setting"
            class="font_type"></a></span>
    </div>

    <div class="frame_text">
      <span class="controller_img"></span><span><a href="/gamePad"><input type="button" name="" value="Controller"
            class="font_type"></a></span>
    </div>

    <div class="frame_text">
      <span class="terminal_img"></span><span><a href="/terminal"><input type="button" name="" value="Terminal"
            class="font_type"></a></span>
    </div>

    <div class="pointer_page_text">
      <span><input type="button" name="" value="monitor" class="pointer_page_frame"></span>
    </div>
    <!-- 
    ===============================================================================
            Індикатори
    =============================================================================== 
     -->
    <div id="temp"></div>
    <div id="humidity"></div>
    <div id="CO"></div>
    <div id="Power"></div>
    <div id="Voltage"></div>
    <script src="raphael-2.1.4.min.js"></script>
    <script src="justgage.js"></script>
    <script>
      var temp, humidity, CO, Power, Voltage;

      window.onload = function () {

        var temp = new JustGage({
          id: "temp",
          value: getRandomInt(-25, 35),
          min: -50,
          max: 50,
          title: "Temp",
          label: "°C"
        });

        var humidity = new JustGage({
          id: "humidity",
          value: getRandomInt(0, 100),
          min: 0,
          max: 100,
          title: "Humidity",
          label: "%"
        });

        var CO = new JustGage({
          id: "CO",
          value: getRandomInt(350, 1500),
          min: 350,
          max: 1800,
          title: "C02",
          label: "ppm"
        });


        var Power = new JustGage({
          id: "Power",
          value: getRandomInt(5, 99),
          min: 0,
          max: 100,
          title: "Power",
          label: "%"
        });

        var Voltage = new JustGage({
          id: "Voltage",
          value: getRandomInt(3190, 4210),
          min: 3190,
          max: 4210,
          title: "Voltage",
          label: "mV"
        });

        setInterval(function () {
          temp.refresh(getRandomInt(-30, 45));
          humidity.refresh(getRandomInt(25, 90));
          CO.refresh(getRandomInt(350, 1500));
          Power.refresh(getRandomInt(0, 100));
          Voltage.refresh(getRandomInt(3200, 4200));
        }, 2500);
      };
    </script>
    <!-- 
===============================================================================
        Керування 
=============================================================================== 
 -->
    <table>
      <thead>
        <tr>
          <th colspan="3"><center><div class="buttons_game">Control</div></center></th>
        </tr>
      </thead>
      <tbody>
        <!-- 
===============================================================================
        Ручне автоматичне керування
=============================================================================== 
            -->
        <tr>
          <td>
            <div class="buttons_game">AUTO</div>
          </td>
          <td>
            <div class="buttons_game">
              <label class="switch">
                <input type="checkbox" id="manual_control" value="1">
                <span class="slider round"></span>
              </label>
            </div>
          </td>
          <td>
            <div class="buttons_game">Manual</div>
          </td>
        </tr>
        <!-- 
-------------------------------------------------------------------------------
        Вентилятор
-------------------------------------------------------------------------------
            -->
        <tr>
          <td colspan="3"><center><div class="buttons_game">Light</div></center></td>
        </tr>
        <tr>
          <td>
            <div class="buttons_game">OFF</div>
          </td>
          <td>
            <div class="buttons_game">
              <label class="switch">
                <input type="checkbox" id="Fan" value="1">
                <span class="slider round"></span>
              </label>
            </div>
          </td>
          <td>
            <div class="buttons_game">ON</div>
          </td>
        </tr> 
      <!-- 
-------------------------------------------------------------------------------
          Вікно
-------------------------------------------------------------------------------
      -->
        <tr>
          <td colspan="3"><center><div class="buttons_game">Window</div></center></td>
        </tr>
        <tr>
          <td>
            <div class="buttons_game">Close</div>
          </td>
          <td>
            <div class="buttons_game">
              <label class="switch">
                <input type="checkbox" id="Window" value="1">
                <span class="slider round"></span>
              </label>
            </div>
          </td>
          <td>
            <div class="buttons_game">Open</div>
          </td>
        </tr>
      <!-- 
-------------------------------------------------------------------------------
          LED
-------------------------------------------------------------------------------
      -->
      <tr>
        <td colspan="3"><center><div class="buttons_game">Light</div></center></td>
      </tr>
      <tr>
        <td>
          <div class="buttons_game">Off</div>
        </td>
        <td>
          <div class="buttons_game">
            <label class="switch">
              <input type="checkbox" id="LED" value="1">
              <span class="slider round"></span>
            </label>
          </div>
        </td>
        <td>
          <div class="buttons_game">On</div>
        </td>
      </tr>
      <!-- 
-------------------------------------------------------------------------------
          Gate
-------------------------------------------------------------------------------
      -->
      <tr>
        <td colspan="3"><center><div class="buttons_game">Gate</div></center></td>
      </tr>
      <tr>
        <td>
          <div class="buttons_game">Close</div>
        </td>
        <td>
          <div class="buttons_game">
            <label class="switch">
              <input type="checkbox" id="Gate" value="1">
              <span class="slider round"></span>
            </label>
          </div>
        </td>
        <td>
          <div class="buttons_game">Open</div>
        </td>
      </tr>
        <!-- 
-------------------------------------------------------------------------------
        Кінець
-------------------------------------------------------------------------------
            -->
      </tbody>
    </table>
  </center>
</body>

</html>)=====";
extern ESP8266WebServer server;
void send_SmartHome_html(){
	digitalWrite(D7, HIGH);
	server.send(200, "text/html", SmartHome_html);
	digitalWrite(D7, LOW);
}
#endif
//EOF
