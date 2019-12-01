class ImageValue extends Widget {
 public long nativeObj;

 public ImageValue(long nativeObj) {
   super(nativeObj);
 }

 static public ImageValue cast(long nativeObj) {
   return new ImageValue(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new ImageValue(image_value_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 Ret setImage(String image)  {
   return image_value_set_image(this.nativeObj, image);
 }

 Ret setFormat(String format)  {
   return image_value_set_format(this.nativeObj, format);
 }

 Ret setValue(double value)  {
   return image_value_set_value(this.nativeObj, value);
 }

 static Widget cast(Widget widget)  {
   return new ImageValue(image_value_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public String getImage() {
   return image_value_t_get_prop_image(this.nativeObj);
 }

 public String getFormat() {
   return image_value_t_get_prop_format(this.nativeObj);
 }

static private native long image_value_create(long parent, int x, int y, int w, int h);
static private native Ret image_value_set_image(long widget, String image);
static private native Ret image_value_set_format(long widget, String format);
static private native Ret image_value_set_value(long widget, double value);
static private native long image_value_cast(long widget);
static private native String image_value_t_get_prop_image(long nativeObj);
static private native String image_value_t_get_prop_format(long nativeObj);
static private native double image_value_t_get_prop_value(long nativeObj);
}

