class ListViewH extends Widget {
 public long nativeObj;

 public ListViewH(long nativeObj) {
   super(nativeObj);
 }

 static public ListViewH cast(long nativeObj) {
   return new ListViewH(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new ListViewH(list_view_h_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 Ret setItemWidth(int item_width)  {
   return list_view_h_set_item_width(this.nativeObj, item_width);
 }

 Ret setSpacing(int spacing)  {
   return list_view_h_set_spacing(this.nativeObj, spacing);
 }

 static Widget cast(Widget widget)  {
   return new ListViewH(list_view_h_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public int getItemWidth() {
   return list_view_h_t_get_prop_item_width(this.nativeObj);
 }

 public int getSpacing() {
   return list_view_h_t_get_prop_spacing(this.nativeObj);
 }

static private native long list_view_h_create(long parent, int x, int y, int w, int h);
static private native Ret list_view_h_set_item_width(long widget, int item_width);
static private native Ret list_view_h_set_spacing(long widget, int spacing);
static private native long list_view_h_cast(long widget);
static private native int list_view_h_t_get_prop_item_width(long nativeObj);
static private native int list_view_h_t_get_prop_spacing(long nativeObj);
}
