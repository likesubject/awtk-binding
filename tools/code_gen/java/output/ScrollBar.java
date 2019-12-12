package awtk;


/**
 * 滚动条控件。
 * 
 * 目前只支持垂直滚动。
 * 
 *  scroll\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于scroll\_bar\_t控件。
 * 
 *  在xml中使用"scroll\_bar"或"scroll\_bar\_d"或"scroll\_bar\_m"标签创建滚动条控件。如：
 * 
 *  ```xml
 *  <list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 *  <scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 *  ...
 *  </scroll_view>
 *  <scroll_bar_m name="bar" x="right" y="0" w="6" h="100%" value="0"/>
 *  </list_view>
 *  ```
 * 
 * 更多用法请参考：[list\_view\_m.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 * 
 *  在c代码中使用函数scroll\_bar\_create创建列表项控件。如：
 * 
 *  ```c
 *   widget_t* scroll_bar = scroll_bar_create(list_view, 0, 0, 0, 0);
 *  ```
 * 
 *  ```xml
 *  <style name="default">
 *    <normal bg_color="#c0c0c0" fg_color="#808080"/>
 *    <over bg_color="#c0c0c0" fg_color="#808080"/>
 *    <pressed bg_color="#c0c0c0" fg_color="#808080"/>
 *  </style>
 *  ```
 * 
 * 更多用法请参考：[theme default](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L350)
 *
 */
public class ScrollBar extends Widget {
 public long nativeObj;

 public ScrollBar(long nativeObj) {
   super(nativeObj);
 }

 static public ScrollBar cast(long nativeObj) {
   return new ScrollBar(nativeObj);
 }


/**
 * 创建scroll_bar对象
 * 
 * 根据宏WITH_DESKTOP_STYLE决定创建desktop风格还是mobile风格的滚动条
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @returns 对象。
 */
 public  static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new ScrollBar(scroll_bar_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


/**
 * 转换为scroll_bar对象(供脚本语言使用)。
 * 
 * @param widget scroll_bar对象。
 *
 * @returns scroll_bar对象。
 */
 public  static Widget cast(Widget widget)  {
   return new ScrollBar(scroll_bar_cast(widget != null ? (widget.nativeObj) : 0));
 }


/**
 * 创建mobile风格的scroll_bar对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @returns 对象。
 */
 public  static Widget createMobile(Widget parent, int x, int y, int w, int h)  {
   return new ScrollBar(scroll_bar_create_mobile(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


/**
 * 创建desktop风格的scroll_bar对象
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @returns 对象。
 */
 public  static Widget createDesktop(Widget parent, int x, int y, int w, int h)  {
   return new ScrollBar(scroll_bar_create_desktop(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


/**
 * 设置参数。
 * 
 * @param widget scroll_bar控件。
 * @param virtual_size 虚拟高度。
 * @param row 每一行的高度。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setParams(int virtual_size, int row)  {
   return Ret.from(scroll_bar_set_params(this.nativeObj, virtual_size, row));
 }


/**
 * 滚动到指定的值。
 * 
 * @param widget scroll_bar控件。
 * @param value 值。
 * @param duration 动画持续时间。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret scrollTo(int value, int duration)  {
   return Ret.from(scroll_bar_scroll_to(this.nativeObj, value, duration));
 }


/**
 * 设置值，并触发EVT_VALUE_CHANGED事件。
 * 
 * @param widget scroll_bar控件。
 * @param value 值。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setValue(int value)  {
   return Ret.from(scroll_bar_set_value(this.nativeObj, value));
 }


/**
 * 在当前的值上增加一个值，并触发EVT_VALUE_CHANGED事件。
 * 
 * @param widget scroll_bar控件。
 * @param delta 值。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret addDelta(int delta)  {
   return Ret.from(scroll_bar_add_delta(this.nativeObj, delta));
 }


/**
 * 在当前的值上增加一个值，并滚动到新的值，并触发EVT_VALUE_CHANGED事件。
 * 
 * @param widget scroll_bar控件。
 * @param delta 值。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret scrollDelta(int delta)  {
   return Ret.from(scroll_bar_scroll_delta(this.nativeObj, delta));
 }


/**
 * 设置值，但不触发EVT_VALUE_CHANGED事件。
 * 
 * @param widget scroll_bar控件。
 * @param value 值。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setValueOnly(int value)  {
   return Ret.from(scroll_bar_set_value_only(this.nativeObj, value));
 }


/**
 * 判断是否是mobile风格的滚动条。
 * 
 * @param widget scroll_bar控件。
 *
 * @returns 返回TRUE表示是mobile风格的，否则表示不是mobile风格的。
 */
 public  boolean isMobile()  {
   return scroll_bar_is_mobile(this.nativeObj);
 }

 public int getVirtualSize() {
   return scroll_bar_t_get_prop_virtual_size(this.nativeObj);
 }

 public int getRow() {
   return scroll_bar_t_get_prop_row(this.nativeObj);
 }

 public boolean getAnimatable() {
   return scroll_bar_t_get_prop_animatable(this.nativeObj);
 }

static private native long scroll_bar_create(long parent, int x, int y, int w, int h);
static private native long scroll_bar_cast(long widget);
static private native long scroll_bar_create_mobile(long parent, int x, int y, int w, int h);
static private native long scroll_bar_create_desktop(long parent, int x, int y, int w, int h);
static private native int scroll_bar_set_params(long widget, int virtual_size, int row);
static private native int scroll_bar_scroll_to(long widget, int value, int duration);
static private native int scroll_bar_set_value(long widget, int value);
static private native int scroll_bar_add_delta(long widget, int delta);
static private native int scroll_bar_scroll_delta(long widget, int delta);
static private native int scroll_bar_set_value_only(long widget, int value);
static private native boolean scroll_bar_is_mobile(long widget);
static private native int scroll_bar_t_get_prop_virtual_size(long nativeObj);
static private native int scroll_bar_t_get_prop_value(long nativeObj);
static private native int scroll_bar_t_get_prop_row(long nativeObj);
static private native boolean scroll_bar_t_get_prop_animatable(long nativeObj);
}

