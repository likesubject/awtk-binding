class TimeClock extends Widget {
 public long nativeObj;

 public TimeClock(long nativeObj) {
   super(nativeObj);
 }

 static public TimeClock cast(long nativeObj) {
   return new TimeClock(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new TimeClock(time_clock_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new TimeClock(time_clock_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setHour(int hour)  {
   return time_clock_set_hour(this.nativeObj, hour);
 }

 Ret setMinute(int minute)  {
   return time_clock_set_minute(this.nativeObj, minute);
 }

 Ret setSecond(int second)  {
   return time_clock_set_second(this.nativeObj, second);
 }

 Ret setHourImage(String hour)  {
   return time_clock_set_hour_image(this.nativeObj, hour);
 }

 Ret setMinuteImage(String minute_image)  {
   return time_clock_set_minute_image(this.nativeObj, minute_image);
 }

 Ret setSecondImage(String second_image)  {
   return time_clock_set_second_image(this.nativeObj, second_image);
 }

 Ret setBgImage(String bg_image)  {
   return time_clock_set_bg_image(this.nativeObj, bg_image);
 }

 Ret setImage(String image)  {
   return time_clock_set_image(this.nativeObj, image);
 }

 Ret setHourAnchor(String anchor_x, String anchor_y)  {
   return time_clock_set_hour_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 Ret setMinuteAnchor(String anchor_x, String anchor_y)  {
   return time_clock_set_minute_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 Ret setSecondAnchor(String anchor_x, String anchor_y)  {
   return time_clock_set_second_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 public int getHour() {
   return time_clock_t_get_prop_hour(this.nativeObj);
 }

 public int getMinute() {
   return time_clock_t_get_prop_minute(this.nativeObj);
 }

 public int getSecond() {
   return time_clock_t_get_prop_second(this.nativeObj);
 }

 public String getImage() {
   return time_clock_t_get_prop_image(this.nativeObj);
 }

 public String getBgImage() {
   return time_clock_t_get_prop_bg_image(this.nativeObj);
 }

 public String getHourImage() {
   return time_clock_t_get_prop_hour_image(this.nativeObj);
 }

 public String getMinuteImage() {
   return time_clock_t_get_prop_minute_image(this.nativeObj);
 }

 public String getSecondImage() {
   return time_clock_t_get_prop_second_image(this.nativeObj);
 }

 public String getHourAnchorX() {
   return time_clock_t_get_prop_hour_anchor_x(this.nativeObj);
 }

 public String getHourAnchorY() {
   return time_clock_t_get_prop_hour_anchor_y(this.nativeObj);
 }

 public String getMinuteAnchorX() {
   return time_clock_t_get_prop_minute_anchor_x(this.nativeObj);
 }

 public String getMinuteAnchorY() {
   return time_clock_t_get_prop_minute_anchor_y(this.nativeObj);
 }

 public String getSecondAnchorX() {
   return time_clock_t_get_prop_second_anchor_x(this.nativeObj);
 }

 public String getSecondAnchorY() {
   return time_clock_t_get_prop_second_anchor_y(this.nativeObj);
 }

static private native long time_clock_create(long parent, int x, int y, int w, int h);
static private native long time_clock_cast(long widget);
static private native Ret time_clock_set_hour(long widget, int hour);
static private native Ret time_clock_set_minute(long widget, int minute);
static private native Ret time_clock_set_second(long widget, int second);
static private native Ret time_clock_set_hour_image(long widget, String hour);
static private native Ret time_clock_set_minute_image(long widget, String minute_image);
static private native Ret time_clock_set_second_image(long widget, String second_image);
static private native Ret time_clock_set_bg_image(long widget, String bg_image);
static private native Ret time_clock_set_image(long widget, String image);
static private native Ret time_clock_set_hour_anchor(long widget, String anchor_x, String anchor_y);
static private native Ret time_clock_set_minute_anchor(long widget, String anchor_x, String anchor_y);
static private native Ret time_clock_set_second_anchor(long widget, String anchor_x, String anchor_y);
static private native int time_clock_t_get_prop_hour(long nativeObj);
static private native int time_clock_t_get_prop_minute(long nativeObj);
static private native int time_clock_t_get_prop_second(long nativeObj);
static private native String time_clock_t_get_prop_image(long nativeObj);
static private native String time_clock_t_get_prop_bg_image(long nativeObj);
static private native String time_clock_t_get_prop_hour_image(long nativeObj);
static private native String time_clock_t_get_prop_minute_image(long nativeObj);
static private native String time_clock_t_get_prop_second_image(long nativeObj);
static private native String time_clock_t_get_prop_hour_anchor_x(long nativeObj);
static private native String time_clock_t_get_prop_hour_anchor_y(long nativeObj);
static private native String time_clock_t_get_prop_minute_anchor_x(long nativeObj);
static private native String time_clock_t_get_prop_minute_anchor_y(long nativeObj);
static private native String time_clock_t_get_prop_second_anchor_x(long nativeObj);
static private native String time_clock_t_get_prop_second_anchor_y(long nativeObj);
}
