class Slider extends Widget {
 public long nativeObj;

 public Slider(long nativeObj) {
   super(nativeObj);
 }

 static public Slider cast(long nativeObj) {
   return new Slider(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Slider(slider_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new Slider(slider_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setValue(double value)  {
   return slider_set_value(this.nativeObj, value);
 }

 Ret setMin(double min)  {
   return slider_set_min(this.nativeObj, min);
 }

 Ret setMax(double max)  {
   return slider_set_max(this.nativeObj, max);
 }

 Ret setStep(double step)  {
   return slider_set_step(this.nativeObj, step);
 }

 Ret setBarSize(int bar_size)  {
   return slider_set_bar_size(this.nativeObj, bar_size);
 }

 Ret setVertical(boolean vertical)  {
   return slider_set_vertical(this.nativeObj, vertical);
 }

 public double getMin() {
   return slider_t_get_prop_min(this.nativeObj);
 }

 public double getMax() {
   return slider_t_get_prop_max(this.nativeObj);
 }

 public double getStep() {
   return slider_t_get_prop_step(this.nativeObj);
 }

 public boolean getVertical() {
   return slider_t_get_prop_vertical(this.nativeObj);
 }

 public int getBarSize() {
   return slider_t_get_prop_bar_size(this.nativeObj);
 }

static private native long slider_create(long parent, int x, int y, int w, int h);
static private native long slider_cast(long widget);
static private native Ret slider_set_value(long widget, double value);
static private native Ret slider_set_min(long widget, double min);
static private native Ret slider_set_max(long widget, double max);
static private native Ret slider_set_step(long widget, double step);
static private native Ret slider_set_bar_size(long widget, int bar_size);
static private native Ret slider_set_vertical(long widget, boolean vertical);
static private native double slider_t_get_prop_value(long nativeObj);
static private native double slider_t_get_prop_min(long nativeObj);
static private native double slider_t_get_prop_max(long nativeObj);
static private native double slider_t_get_prop_step(long nativeObj);
static private native boolean slider_t_get_prop_vertical(long nativeObj);
static private native int slider_t_get_prop_bar_size(long nativeObj);
}
