#ifndef _ALL_PAGES_
#define _ALL_PAGES_
#include "SmartHome.html.h"
#include "justgage.js.h"
#include "raphael-2.1.4.min.js.h"
#include "style.css.h"

#define SERVER_ON_ALL                                                          \
  server.on("/justgage.js", send_justgage_js);                                 \
  server.on("/raphael-2.1.4.min.js", send_raphael_2_1_4_min_js);               \
  server.on("/SmartHome.html", send_SmartHome_html);                           \
  server.on("/style.css", send_style_css);

#endif
