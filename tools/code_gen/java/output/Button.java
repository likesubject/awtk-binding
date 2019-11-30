class Button extends Widget {
 public long nativeObj;

 public Button(long nativeObj) {
   super(nativeObj);
 }

 static public Button cast(long nativeObj) {
   return new Button(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Button(button_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new Button(button_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setRepeat(int repeat)  {
   return button_set_repeat(this.nativeObj, repeat);
 }

 Ret setEnableLongPress(boolean enable_long_press)  {
   return button_set_enable_long_press(this.nativeObj, enable_long_press);
 }

 public int getRepeat() {
   return button_t_get_prop_repeat(this.nativeObj);
 }

 public boolean getEnableLongPress() {
   return button_t_get_prop_enable_long_press(this.nativeObj);
 }

static private native long button_create(long parent, int x, int y, int w, int h);
static private native long button_cast(long widget);
static private native Ret button_set_repeat(long widget, int repeat);
static private native Ret button_set_enable_long_press(long widget, boolean enable_long_press);
static private native int button_t_get_prop_repeat(long nativeObj);
static private native boolean button_t_get_prop_enable_long_press(long nativeObj);
}

