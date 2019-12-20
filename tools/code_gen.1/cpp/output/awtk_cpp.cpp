﻿#include "awtk_cpp.hpp"
 TEvent TEvent::Cast(TEvent& event)  {
   return TEvent(event_cast(((event_t*)(event.nativeObj))));
 }

 TEvent TEvent::Create(uint32_t type)  {
   return TEvent((event_t*)(event_create(type)));
 }

 ret_t TEvent::Destroy()  {
   return event_destroy(((event_t*)(this->nativeObj)));
 }

 int32_t TEvent::getType() const {
   return ((event_t*)(this->nativeObj))->type;
 }

 int32_t TEvent::getTime() const {
   return ((event_t*)(this->nativeObj))->time;
 }

 void* TEvent::getTarget() const {
   return ((event_t*)(this->nativeObj))->target;
 }

 TRect TRect::Create(xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TRect((rect_t*)(rect_create(x, y, w, h)));
 }

 TRect TRect::Set(xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TRect((rect_t*)(rect_set(((rect_t*)(this->nativeObj)), x, y, w, h)));
 }

 TRect TRect::Cast(TRect& rect)  {
   return TRect(rect_cast(((rect_t*)(rect.nativeObj))));
 }

 ret_t TRect::Destroy()  {
   return rect_destroy(((rect_t*)(this->nativeObj)));
 }

 xy_t TRect::getX() const {
   return ((rect_t*)(this->nativeObj))->x;
 }

 xy_t TRect::getY() const {
   return ((rect_t*)(this->nativeObj))->y;
 }

 wh_t TRect::getW() const {
   return ((rect_t*)(this->nativeObj))->w;
 }

 wh_t TRect::getH() const {
   return ((rect_t*)(this->nativeObj))->h;
 }

 TEmitter TEmitter::Create()  {
   return TEmitter((emitter_t*)(emitter_create()));
 }

 ret_t TEmitter::Dispatch(TEvent& e)  {
   return emitter_dispatch(((emitter_t*)(this->nativeObj)), ((event_t*)(e.nativeObj)));
 }

 ret_t TEmitter::DispatchSimpleEvent(event_type_t type)  {
   return emitter_dispatch_simple_event(((emitter_t*)(this->nativeObj)), type);
 }

 uint32_t TEmitter::On(event_type_t type, event_func_t on_event, void* ctx)  {
    return emitter_on(((emitter_t*)(this->nativeObj)), type, on_event, ctx);
 }

 ret_t TEmitter::Off(uint32_t id)  {
   return emitter_off(((emitter_t*)(this->nativeObj)), id);
 }

 ret_t TEmitter::Enable()  {
   return emitter_enable(((emitter_t*)(this->nativeObj)));
 }

 ret_t TEmitter::Disable()  {
   return emitter_disable(((emitter_t*)(this->nativeObj)));
 }

 uint32_t TEmitter::Size()  {
    return emitter_size(((emitter_t*)(this->nativeObj)));
 }

 ret_t TEmitter::Destroy()  {
   return emitter_destroy(((emitter_t*)(this->nativeObj)));
 }

 TEmitter TEmitter::Cast(TEmitter& emitter)  {
   return TEmitter(emitter_cast(((emitter_t*)(emitter.nativeObj))));
 }

 TBitmap TBitmap::Create()  {
   return TBitmap((bitmap_t*)(bitmap_create()));
 }

 TBitmap TBitmap::CreateEx(uint32_t w, uint32_t h, uint32_t line_length, bitmap_format_t format)  {
   return TBitmap((bitmap_t*)(bitmap_create_ex(w, h, line_length, format)));
 }

 uint32_t TBitmap::GetBpp()  {
    return bitmap_get_bpp(((bitmap_t*)(this->nativeObj)));
 }

 ret_t TBitmap::Destroy()  {
   return bitmap_destroy(((bitmap_t*)(this->nativeObj)));
 }

 wh_t TBitmap::getW() const {
   return ((bitmap_t*)(this->nativeObj))->w;
 }

 wh_t TBitmap::getH() const {
   return ((bitmap_t*)(this->nativeObj))->h;
 }

 uint32_t TBitmap::getLineLength() const {
   return ((bitmap_t*)(this->nativeObj))->line_length;
 }

 uint16_t TBitmap::getFlags() const {
   return ((bitmap_t*)(this->nativeObj))->flags;
 }

 uint16_t TBitmap::getFormat() const {
   return ((bitmap_t*)(this->nativeObj))->format;
 }

 const char* TBitmap::getName() const {
   return ((bitmap_t*)(this->nativeObj))->name;
 }

 TValue TValue::SetBool(bool value)  {
   return TValue((value_t*)(value_set_bool(((value_t*)(this->nativeObj)), value)));
 }

 bool TValue::Bool()  {
    return value_bool(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetInt8(int8_t value)  {
   return TValue((value_t*)(value_set_int8(((value_t*)(this->nativeObj)), value)));
 }

 int8_t TValue::Int8()  {
    return value_int8(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetUint8(uint8_t value)  {
   return TValue((value_t*)(value_set_uint8(((value_t*)(this->nativeObj)), value)));
 }

 int8_t TValue::Uint8()  {
    return value_uint8(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetInt16(int16_t value)  {
   return TValue((value_t*)(value_set_int16(((value_t*)(this->nativeObj)), value)));
 }

 int16_t TValue::Int16()  {
    return value_int16(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetUint16(uint16_t value)  {
   return TValue((value_t*)(value_set_uint16(((value_t*)(this->nativeObj)), value)));
 }

 uint16_t TValue::Uint16()  {
    return value_uint16(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetInt32(int32_t value)  {
   return TValue((value_t*)(value_set_int32(((value_t*)(this->nativeObj)), value)));
 }

 int32_t TValue::Int32()  {
    return value_int32(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetUint32(uint32_t value)  {
   return TValue((value_t*)(value_set_uint32(((value_t*)(this->nativeObj)), value)));
 }

 TValue TValue::SetInt64(int64_t value)  {
   return TValue((value_t*)(value_set_int64(((value_t*)(this->nativeObj)), value)));
 }

 int64_t TValue::Int64()  {
    return value_int64(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetUint64(uint64_t value)  {
   return TValue((value_t*)(value_set_uint64(((value_t*)(this->nativeObj)), value)));
 }

 uint64_t TValue::Uint64()  {
    return value_uint64(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetFloat(float_t value)  {
   return TValue((value_t*)(value_set_float(((value_t*)(this->nativeObj)), value)));
 }

 float TValue::Float32()  {
    return value_float32(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetFloat64(double value)  {
   return TValue((value_t*)(value_set_double(((value_t*)(this->nativeObj)), value)));
 }

 double TValue::Float64()  {
    return value_double(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetStr(const char* value)  {
   return TValue((value_t*)(value_dup_str(((value_t*)(this->nativeObj)), value)));
 }

 const char* TValue::Str()  {
    return value_str(((value_t*)(this->nativeObj)));
 }

 bool TValue::IsNull()  {
    return value_is_null(((value_t*)(this->nativeObj)));
 }

 TValue TValue::SetInt(int32_t value)  {
   return TValue((value_t*)(value_set_int(((value_t*)(this->nativeObj)), value)));
 }

 TValue TValue::SetObject(TObject& value)  {
   return TValue((value_t*)(value_set_object(((value_t*)(this->nativeObj)), ((object_t*)(value.nativeObj)))));
 }

 TObject TValue::Object()  {
   return TObject((emitter_t*)(value_object(((value_t*)(this->nativeObj)))));
 }

 TValue TValue::SetToken(uint32_t value)  {
   return TValue((value_t*)(value_set_token(((value_t*)(this->nativeObj)), value)));
 }

 uint32_t TValue::Token()  {
    return value_token(((value_t*)(this->nativeObj)));
 }

 TValue TValue::Create()  {
   return TValue((value_t*)(value_create()));
 }

 ret_t TValue::Destroy()  {
   return value_destroy(((value_t*)(this->nativeObj)));
 }

 ret_t TValue::Reset()  {
   return value_reset(((value_t*)(this->nativeObj)));
 }

 TValue TValue::Cast(TValue& value)  {
   return TValue(value_cast(((value_t*)(value.nativeObj))));
 }

 ret_t TObject::Unref()  {
   return object_unref(((object_t*)(this->nativeObj)));
 }

 TObject TObject::Ref(TObject& obj)  {
   return TObject((emitter_t*)(object_ref(((object_t*)(obj.nativeObj)))));
 }

 const char* TObject::GetType()  {
    return object_get_type(((object_t*)(this->nativeObj)));
 }

 const char* TObject::GetDesc()  {
    return object_get_desc(((object_t*)(this->nativeObj)));
 }

 uint32_t TObject::GetSize()  {
    return object_get_size(((object_t*)(this->nativeObj)));
 }

 bool TObject::IsCollection()  {
    return object_is_collection(((object_t*)(this->nativeObj)));
 }

 ret_t TObject::SetName(const char* name)  {
   return object_set_name(((object_t*)(this->nativeObj)), name);
 }

 int TObject::Compare(TObject& other)  {
    return object_compare(((object_t*)(this->nativeObj)), ((object_t*)(other.nativeObj)));
 }

 ret_t TObject::GetProp(const char* name, TValue& v)  {
   return object_get_prop(((object_t*)(this->nativeObj)), name, ((value_t*)(v.nativeObj)));
 }

 const char* TObject::GetPropStr(const char* name)  {
    return object_get_prop_str(((object_t*)(this->nativeObj)), name);
 }

 void* TObject::GetPropPointer(const char* name)  {
    return object_get_prop_pointer(((object_t*)(this->nativeObj)), name);
 }

 TObject TObject::GetPropObject(const char* name)  {
   return TObject((emitter_t*)(object_get_prop_object(((object_t*)(this->nativeObj)), name)));
 }

 int32_t TObject::GetPropInt(const char* name, int32_t defval)  {
    return object_get_prop_int(((object_t*)(this->nativeObj)), name, defval);
 }

 bool TObject::GetPropBool(const char* name, bool defval)  {
    return object_get_prop_bool(((object_t*)(this->nativeObj)), name, defval);
 }

 float_t TObject::GetPropFloat(const char* name, float_t defval)  {
    return object_get_prop_float(((object_t*)(this->nativeObj)), name, defval);
 }

 ret_t TObject::RemoveProp(const char* name)  {
   return object_remove_prop(((object_t*)(this->nativeObj)), name);
 }

 ret_t TObject::SetProp(const char* name, TValue& value)  {
   return object_set_prop(((object_t*)(this->nativeObj)), name, ((value_t*)(value.nativeObj)));
 }

 ret_t TObject::SetPropStr(const char* name, const char* value)  {
   return object_set_prop_str(((object_t*)(this->nativeObj)), name, value);
 }

 ret_t TObject::SetPropObject(const char* name, TObject& value)  {
   return object_set_prop_object(((object_t*)(this->nativeObj)), name, ((object_t*)(value.nativeObj)));
 }

 ret_t TObject::SetPropInt(const char* name, int32_t value)  {
   return object_set_prop_int(((object_t*)(this->nativeObj)), name, value);
 }

 ret_t TObject::SetPropBool(const char* name, bool value)  {
   return object_set_prop_bool(((object_t*)(this->nativeObj)), name, value);
 }

 ret_t TObject::SetPropFloat(const char* name, float_t value)  {
   return object_set_prop_float(((object_t*)(this->nativeObj)), name, value);
 }

 ret_t TObject::CopyProp(TObject& src, const char* name)  {
   return object_copy_prop(((object_t*)(this->nativeObj)), ((object_t*)(src.nativeObj)), name);
 }

 bool TObject::HasProp(const char* name)  {
    return object_has_prop(((object_t*)(this->nativeObj)), name);
 }

 ret_t TObject::Eval(const char* expr, TValue& v)  {
   return object_eval(((object_t*)(this->nativeObj)), expr, ((value_t*)(v.nativeObj)));
 }

 bool TObject::CanExec(const char* name, const char* args)  {
    return object_can_exec(((object_t*)(this->nativeObj)), name, args);
 }

 ret_t TObject::Execute(const char* name, const char* args)  {
   return object_exec(((object_t*)(this->nativeObj)), name, args);
 }

 ret_t TObject::NotifyChanged()  {
   return object_notify_changed(((object_t*)(this->nativeObj)));
 }

 const char* TObject::GetPropStrByPath(const char* path)  {
    return object_get_prop_str_by_path(((object_t*)(this->nativeObj)), path);
 }

 void* TObject::GetPropPointerByPath(const char* path)  {
    return object_get_prop_pointer_by_path(((object_t*)(this->nativeObj)), path);
 }

 TObject TObject::GetPropObjectByPath(const char* path)  {
   return TObject((emitter_t*)(object_get_prop_object_by_path(((object_t*)(this->nativeObj)), path)));
 }

 int32_t TObject::GetPropIntByPath(const char* path, int32_t defval)  {
    return object_get_prop_int_by_path(((object_t*)(this->nativeObj)), path, defval);
 }

 bool TObject::GetPropBoolByPath(const char* path, bool defval)  {
    return object_get_prop_bool_by_path(((object_t*)(this->nativeObj)), path, defval);
 }

 float_t TObject::GetPropFloatByPath(const char* path, float_t defval)  {
    return object_get_prop_float_by_path(((object_t*)(this->nativeObj)), path, defval);
 }

 int32_t TObject::getRefCount() const {
   return ((object_t*)(this->nativeObj))->ref_count;
 }

 char* TObject::getName() const {
   return ((object_t*)(this->nativeObj))->name;
 }

 ret_t TGlobal::Init(wh_t w, wh_t h, app_type_t app_type, const char* app_name, const char* app_root)  {
   return tk_init(w, h, app_type, app_name, app_root);
 }

 ret_t TGlobal::Run()  {
   return tk_run();
 }

 ret_t TGlobal::Quit()  {
   return tk_quit();
 }

 int32_t TGlobal::GetPointerX()  {
    return tk_get_pointer_x();
 }

 int32_t TGlobal::GetPointerY()  {
    return tk_get_pointer_y();
 }

 bool TGlobal::IsPointerPressed()  {
    return tk_is_pointer_pressed();
 }

 ret_t TFontManager::UnloadFont(char* name, font_size_t size)  {
   return font_manager_unload_font(((font_manager_t*)(this->nativeObj)), name, size);
 }

 ret_t TFontManager::UnloadAll()  {
   return font_manager_unload_all(((font_manager_t*)(this->nativeObj)));
 }

 uint32_t TIdle::Add(idle_func_t on_idle, void* ctx)  {
    return idle_add(on_idle, ctx);
 }

 ret_t TIdle::Remove(uint32_t idle_id)  {
   return idle_remove(idle_id);
 }

 TImageManager TImageManager::Instance()  {
   return TImageManager((image_manager_t*)(image_manager()));
 }

 ret_t TImageManager::GetBitmap(char* name, TBitmap& image)  {
   return image_manager_get_bitmap(((image_manager_t*)(this->nativeObj)), name, ((bitmap_t*)(image.nativeObj)));
 }

 ret_t TInputMethod::CommitText(char* text)  {
   return input_method_commit_text(((input_method_t*)(this->nativeObj)), text);
 }

 ret_t TInputMethod::DispatchKey(uint32_t key)  {
   return input_method_dispatch_key(((input_method_t*)(this->nativeObj)), key);
 }

 TInputMethod TInputMethod::Instance()  {
   return TInputMethod((input_method_t*)(input_method()));
 }

 TLocaleInfo TLocaleInfo::Instance()  {
   return TLocaleInfo((locale_info_t*)(locale_info()));
 }

 const char* TLocaleInfo::Tr(const char* text)  {
    return locale_info_tr(((locale_info_t*)(this->nativeObj)), text);
 }

 ret_t TLocaleInfo::Change(char* language, char* country)  {
   return locale_info_change(((locale_info_t*)(this->nativeObj)), language, country);
 }

 ret_t TLocaleInfo::Off(uint32_t id)  {
   return locale_info_off(((locale_info_t*)(this->nativeObj)), id);
 }

 ret_t TStyle::NotifyWidgetStateChanged(TWidget& widget)  {
   return style_notify_widget_state_changed(((style_t*)(this->nativeObj)), ((widget_t*)(widget.nativeObj)));
 }

 bool TStyle::IsValid()  {
    return style_is_valid(((style_t*)(this->nativeObj)));
 }

 int32_t TStyle::GetInt(const char* name, int32_t defval)  {
    return style_get_int(((style_t*)(this->nativeObj)), name, defval);
 }

 const char* TStyle::GetStr(const char* name, const char* defval)  {
    return style_get_str(((style_t*)(this->nativeObj)), name, defval);
 }

 ret_t TStyle::Set(const char* state, const char* name, TValue& value)  {
   return style_set(((style_t*)(this->nativeObj)), state, name, ((const value_t*)(value.nativeObj)));
 }

 bool TStyle::IsMutable()  {
    return style_is_mutable(((style_t*)(this->nativeObj)));
 }

 TTheme TTheme::Instance()  {
   return TTheme((theme_t*)(theme()));
 }

 uint32_t TTimer::Add(timer_func_t on_timer, void* ctx, uint32_t duration)  {
    return timer_add(on_timer, ctx, duration);
 }

 ret_t TTimer::Remove(uint32_t timer_id)  {
   return timer_remove(timer_id);
 }

 ret_t TTimer::Reset(uint32_t timer_id)  {
   return timer_reset(timer_id);
 }

 ret_t TTimer::Modify(uint32_t timer_id, uint32_t duration)  {
   return timer_modify(timer_id, duration);
 }

 TVgcanvas TVgcanvas::Cast(TVgcanvas& vg)  {
   return TVgcanvas(vgcanvas_cast(((vgcanvas_t*)(vg.nativeObj))));
 }

 ret_t TVgcanvas::Flush()  {
   return vgcanvas_flush(((vgcanvas_t*)(this->nativeObj)));
 }

 ret_t TVgcanvas::BeginPath()  {
   return vgcanvas_begin_path(((vgcanvas_t*)(this->nativeObj)));
 }

 ret_t TVgcanvas::MoveTo(float_t x, float_t y)  {
   return vgcanvas_move_to(((vgcanvas_t*)(this->nativeObj)), x, y);
 }

 ret_t TVgcanvas::LineTo(float_t x, float_t y)  {
   return vgcanvas_line_to(((vgcanvas_t*)(this->nativeObj)), x, y);
 }

 ret_t TVgcanvas::QuadTo(float_t cpx, float_t cpy, float_t x, float_t y)  {
   return vgcanvas_quad_to(((vgcanvas_t*)(this->nativeObj)), cpx, cpy, x, y);
 }

 ret_t TVgcanvas::BezierTo(float_t cp1x, float_t cp1y, float_t cp2x, float_t cp2y, float_t x, float_t y)  {
   return vgcanvas_bezier_to(((vgcanvas_t*)(this->nativeObj)), cp1x, cp1y, cp2x, cp2y, x, y);
 }

 ret_t TVgcanvas::ArcTo(float_t x1, float_t y1, float_t x2, float_t y2, float_t r)  {
   return vgcanvas_arc_to(((vgcanvas_t*)(this->nativeObj)), x1, y1, x2, y2, r);
 }

 ret_t TVgcanvas::Arc(float_t x, float_t y, float_t r, float_t start_angle, float_t end_angle, bool ccw)  {
   return vgcanvas_arc(((vgcanvas_t*)(this->nativeObj)), x, y, r, start_angle, end_angle, ccw);
 }

 bool TVgcanvas::IsPointInPath(float_t x, float_t y)  {
    return vgcanvas_is_point_in_path(((vgcanvas_t*)(this->nativeObj)), x, y);
 }

 ret_t TVgcanvas::Rect(float_t x, float_t y, float_t w, float_t h)  {
   return vgcanvas_rect(((vgcanvas_t*)(this->nativeObj)), x, y, w, h);
 }

 ret_t TVgcanvas::RoundedRect(float_t x, float_t y, float_t w, float_t h, float_t r)  {
   return vgcanvas_rounded_rect(((vgcanvas_t*)(this->nativeObj)), x, y, w, h, r);
 }

 ret_t TVgcanvas::Ellipse(float_t x, float_t y, float_t rx, float_t ry)  {
   return vgcanvas_ellipse(((vgcanvas_t*)(this->nativeObj)), x, y, rx, ry);
 }

 ret_t TVgcanvas::ClosePath()  {
   return vgcanvas_close_path(((vgcanvas_t*)(this->nativeObj)));
 }

 ret_t TVgcanvas::Rotate(float_t rad)  {
   return vgcanvas_rotate(((vgcanvas_t*)(this->nativeObj)), rad);
 }

 ret_t TVgcanvas::Scale(float_t x, float_t y)  {
   return vgcanvas_scale(((vgcanvas_t*)(this->nativeObj)), x, y);
 }

 ret_t TVgcanvas::Translate(float_t x, float_t y)  {
   return vgcanvas_translate(((vgcanvas_t*)(this->nativeObj)), x, y);
 }

 ret_t TVgcanvas::Transform(float_t a, float_t b, float_t c, float_t d, float_t e, float_t f)  {
   return vgcanvas_transform(((vgcanvas_t*)(this->nativeObj)), a, b, c, d, e, f);
 }

 ret_t TVgcanvas::SetTransform(float_t a, float_t b, float_t c, float_t d, float_t e, float_t f)  {
   return vgcanvas_set_transform(((vgcanvas_t*)(this->nativeObj)), a, b, c, d, e, f);
 }

 ret_t TVgcanvas::ClipRect(float_t x, float_t y, float_t w, float_t h)  {
   return vgcanvas_clip_rect(((vgcanvas_t*)(this->nativeObj)), x, y, w, h);
 }

 ret_t TVgcanvas::Fill()  {
   return vgcanvas_fill(((vgcanvas_t*)(this->nativeObj)));
 }

 ret_t TVgcanvas::Stroke()  {
   return vgcanvas_stroke(((vgcanvas_t*)(this->nativeObj)));
 }

 ret_t TVgcanvas::Paint(bool stroke, TBitmap& img)  {
   return vgcanvas_paint(((vgcanvas_t*)(this->nativeObj)), stroke, ((bitmap_t*)(img.nativeObj)));
 }

 ret_t TVgcanvas::SetFont(char* font)  {
   return vgcanvas_set_font(((vgcanvas_t*)(this->nativeObj)), font);
 }

 ret_t TVgcanvas::SetFontSize(float_t font)  {
   return vgcanvas_set_font_size(((vgcanvas_t*)(this->nativeObj)), font);
 }

 ret_t TVgcanvas::SetTextAlign(char* value)  {
   return vgcanvas_set_text_align(((vgcanvas_t*)(this->nativeObj)), value);
 }

 ret_t TVgcanvas::SetTextBaseline(char* value)  {
   return vgcanvas_set_text_baseline(((vgcanvas_t*)(this->nativeObj)), value);
 }

 ret_t TVgcanvas::FillText(char* text, float_t x, float_t y, float_t max_width)  {
   return vgcanvas_fill_text(((vgcanvas_t*)(this->nativeObj)), text, x, y, max_width);
 }

 float_t TVgcanvas::MeasureText(char* text)  {
    return vgcanvas_measure_text(((vgcanvas_t*)(this->nativeObj)), text);
 }

 ret_t TVgcanvas::DrawImage(TBitmap& img, float_t sx, float_t sy, float_t sw, float_t sh, float_t dx, float_t dy, float_t dw, float_t dh)  {
   return vgcanvas_draw_image(((vgcanvas_t*)(this->nativeObj)), ((bitmap_t*)(img.nativeObj)), sx, sy, sw, sh, dx, dy, dw, dh);
 }

 ret_t TVgcanvas::DrawIcon(TBitmap& img, float_t sx, float_t sy, float_t sw, float_t sh, float_t dx, float_t dy, float_t dw, float_t dh)  {
   return vgcanvas_draw_icon(((vgcanvas_t*)(this->nativeObj)), ((bitmap_t*)(img.nativeObj)), sx, sy, sw, sh, dx, dy, dw, dh);
 }

 ret_t TVgcanvas::SetAntialias(bool value)  {
   return vgcanvas_set_antialias(((vgcanvas_t*)(this->nativeObj)), value);
 }

 ret_t TVgcanvas::SetGlobalAlpha(float_t alpha)  {
   return vgcanvas_set_global_alpha(((vgcanvas_t*)(this->nativeObj)), alpha);
 }

 ret_t TVgcanvas::SetLineWidth(float_t value)  {
   return vgcanvas_set_line_width(((vgcanvas_t*)(this->nativeObj)), value);
 }

 ret_t TVgcanvas::SetFillColor(const char* color)  {
   return vgcanvas_set_fill_color_str(((vgcanvas_t*)(this->nativeObj)), color);
 }

 ret_t TVgcanvas::SetStrokeColor(const char* color)  {
   return vgcanvas_set_stroke_color_str(((vgcanvas_t*)(this->nativeObj)), color);
 }

 ret_t TVgcanvas::SetLineCap(char* value)  {
   return vgcanvas_set_line_cap(((vgcanvas_t*)(this->nativeObj)), value);
 }

 ret_t TVgcanvas::SetLineJoin(char* value)  {
   return vgcanvas_set_line_join(((vgcanvas_t*)(this->nativeObj)), value);
 }

 ret_t TVgcanvas::SetMiterLimit(float_t value)  {
   return vgcanvas_set_miter_limit(((vgcanvas_t*)(this->nativeObj)), value);
 }

 ret_t TVgcanvas::Save()  {
   return vgcanvas_save(((vgcanvas_t*)(this->nativeObj)));
 }

 ret_t TVgcanvas::Restore()  {
   return vgcanvas_restore(((vgcanvas_t*)(this->nativeObj)));
 }

 wh_t TVgcanvas::getW() const {
   return ((vgcanvas_t*)(this->nativeObj))->w;
 }

 wh_t TVgcanvas::getH() const {
   return ((vgcanvas_t*)(this->nativeObj))->h;
 }

 uint32_t TVgcanvas::getStride() const {
   return ((vgcanvas_t*)(this->nativeObj))->stride;
 }

 float_t TVgcanvas::getRatio() const {
   return ((vgcanvas_t*)(this->nativeObj))->ratio;
 }

 bool TVgcanvas::getAntiAlias() const {
   return ((vgcanvas_t*)(this->nativeObj))->anti_alias;
 }

 float_t TVgcanvas::getLineWidth() const {
   return ((vgcanvas_t*)(this->nativeObj))->line_width;
 }

 float_t TVgcanvas::getGlobalAlpha() const {
   return ((vgcanvas_t*)(this->nativeObj))->global_alpha;
 }

 float_t TVgcanvas::getMiterLimit() const {
   return ((vgcanvas_t*)(this->nativeObj))->miter_limit;
 }

 const char* TVgcanvas::getLineCap() const {
   return ((vgcanvas_t*)(this->nativeObj))->line_cap;
 }

 const char* TVgcanvas::getLineJoin() const {
   return ((vgcanvas_t*)(this->nativeObj))->line_join;
 }

 char* TVgcanvas::getFont() const {
   return ((vgcanvas_t*)(this->nativeObj))->font;
 }

 float_t TVgcanvas::getFontSize() const {
   return ((vgcanvas_t*)(this->nativeObj))->font_size;
 }

 const char* TVgcanvas::getTextAlign() const {
   return ((vgcanvas_t*)(this->nativeObj))->text_align;
 }

 const char* TVgcanvas::getTextBaseline() const {
   return ((vgcanvas_t*)(this->nativeObj))->text_baseline;
 }

 int32_t TWidget::CountChildren()  {
    return widget_count_children(((widget_t*)(this->nativeObj)));
 }

 TWidget TWidget::GetChild(int32_t index)  {
   return TWidget((widget_t*)(widget_get_child(((widget_t*)(this->nativeObj)), index)));
 }

 int32_t TWidget::IndexOf()  {
    return widget_index_of(((widget_t*)(this->nativeObj)));
 }

 ret_t TWidget::Move(xy_t x, xy_t y)  {
   return widget_move(((widget_t*)(this->nativeObj)), x, y);
 }

 ret_t TWidget::Resize(wh_t w, wh_t h)  {
   return widget_resize(((widget_t*)(this->nativeObj)), w, h);
 }

 ret_t TWidget::MoveResize(xy_t x, xy_t y, wh_t w, wh_t h)  {
   return widget_move_resize(((widget_t*)(this->nativeObj)), x, y, w, h);
 }

 ret_t TWidget::SetValue(int32_t value)  {
   return widget_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TWidget::AnimateValueTo(int32_t value, uint32_t duration)  {
   return widget_animate_value_to(((widget_t*)(this->nativeObj)), value, duration);
 }

 ret_t TWidget::AddValue(int32_t delta)  {
   return widget_add_value(((widget_t*)(this->nativeObj)), delta);
 }

 ret_t TWidget::UseStyle(char* style)  {
   return widget_use_style(((widget_t*)(this->nativeObj)), style);
 }

 ret_t TWidget::SetText(const char* text)  {
   return widget_set_text_utf8(((widget_t*)(this->nativeObj)), text);
 }

 ret_t TWidget::SetTrText(char* text)  {
   return widget_set_tr_text(((widget_t*)(this->nativeObj)), text);
 }

 int32_t TWidget::GetValue()  {
    return widget_get_value(((widget_t*)(this->nativeObj)));
 }

 const wchar_t* TWidget::GetText()  {
    return widget_get_text(((widget_t*)(this->nativeObj)));
 }

 ret_t TWidget::SetName(char* name)  {
   return widget_set_name(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TWidget::SetTheme(char* name)  {
   return widget_set_theme(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TWidget::SetPointerCursor(char* cursor)  {
   return widget_set_pointer_cursor(((widget_t*)(this->nativeObj)), cursor);
 }

 ret_t TWidget::SetAnimation(const char* animation)  {
   return widget_set_animation(((widget_t*)(this->nativeObj)), animation);
 }

 ret_t TWidget::CreateAnimator(const char* animation)  {
   return widget_create_animator(((widget_t*)(this->nativeObj)), animation);
 }

 ret_t TWidget::StartAnimator(const char* name)  {
   return widget_start_animator(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TWidget::SetAnimatorTimeScale(const char* name, float_t time_scale)  {
   return widget_set_animator_time_scale(((widget_t*)(this->nativeObj)), name, time_scale);
 }

 ret_t TWidget::PauseAnimator(char* name)  {
   return widget_pause_animator(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TWidget::StopAnimator(char* name)  {
   return widget_stop_animator(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TWidget::DestroyAnimator(char* name)  {
   return widget_destroy_animator(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TWidget::SetEnable(bool enable)  {
   return widget_set_enable(((widget_t*)(this->nativeObj)), enable);
 }

 ret_t TWidget::SetFeedback(bool feedback)  {
   return widget_set_feedback(((widget_t*)(this->nativeObj)), feedback);
 }

 ret_t TWidget::SetFloating(bool floating)  {
   return widget_set_floating(((widget_t*)(this->nativeObj)), floating);
 }

 ret_t TWidget::SetFocused(bool focused)  {
   return widget_set_focused(((widget_t*)(this->nativeObj)), focused);
 }

 ret_t TWidget::SetFocusable(bool focusable)  {
   return widget_set_focusable(((widget_t*)(this->nativeObj)), focusable);
 }

 ret_t TWidget::SetState(const char* state)  {
   return widget_set_state(((widget_t*)(this->nativeObj)), state);
 }

 ret_t TWidget::SetOpacity(uint8_t opacity)  {
   return widget_set_opacity(((widget_t*)(this->nativeObj)), opacity);
 }

 ret_t TWidget::DestroyChildren()  {
   return widget_destroy_children(((widget_t*)(this->nativeObj)));
 }

 ret_t TWidget::AddChild(TWidget& child)  {
   return widget_add_child(((widget_t*)(this->nativeObj)), ((widget_t*)(child.nativeObj)));
 }

 ret_t TWidget::RemoveChild(TWidget& child)  {
   return widget_remove_child(((widget_t*)(this->nativeObj)), ((widget_t*)(child.nativeObj)));
 }

 ret_t TWidget::InsertChild(uint32_t index, TWidget& child)  {
   return widget_insert_child(((widget_t*)(this->nativeObj)), index, ((widget_t*)(child.nativeObj)));
 }

 ret_t TWidget::Restack(uint32_t index)  {
   return widget_restack(((widget_t*)(this->nativeObj)), index);
 }

 TWidget TWidget::Child(char* name)  {
   return TWidget((widget_t*)(widget_child(((widget_t*)(this->nativeObj)), name)));
 }

 TWidget TWidget::Lookup(char* name, bool recursive)  {
   return TWidget((widget_t*)(widget_lookup(((widget_t*)(this->nativeObj)), name, recursive)));
 }

 TWidget TWidget::LookupByType(char* type, bool recursive)  {
   return TWidget((widget_t*)(widget_lookup_by_type(((widget_t*)(this->nativeObj)), type, recursive)));
 }

 ret_t TWidget::SetVisible(bool visible, bool recursive)  {
   return widget_set_visible(((widget_t*)(this->nativeObj)), visible, recursive);
 }

 ret_t TWidget::SetVisibleOnly(bool visible)  {
   return widget_set_visible_only(((widget_t*)(this->nativeObj)), visible);
 }

 ret_t TWidget::SetSensitive(bool sensitive)  {
   return widget_set_sensitive(((widget_t*)(this->nativeObj)), sensitive);
 }

 int32_t TWidget::On(event_type_t type, event_func_t on_event, void* ctx)  {
    return widget_on(((widget_t*)(this->nativeObj)), type, on_event, ctx);
 }

 ret_t TWidget::Off(int32_t id)  {
   return widget_off(((widget_t*)(this->nativeObj)), id);
 }

 ret_t TWidget::InvalidateForce(TRect& r)  {
   return widget_invalidate_force(((widget_t*)(this->nativeObj)), ((rect_t*)(r.nativeObj)));
 }

 ret_t TWidget::SetPropStr(const char* name, const char* v)  {
   return widget_set_prop_str(((widget_t*)(this->nativeObj)), name, v);
 }

 const char* TWidget::GetPropStr(const char* name, const char* defval)  {
    return widget_get_prop_str(((widget_t*)(this->nativeObj)), name, defval);
 }

 ret_t TWidget::SetPropInt(const char* name, int32_t v)  {
   return widget_set_prop_int(((widget_t*)(this->nativeObj)), name, v);
 }

 int32_t TWidget::GetPropInt(const char* name, int32_t defval)  {
    return widget_get_prop_int(((widget_t*)(this->nativeObj)), name, defval);
 }

 ret_t TWidget::SetPropBool(const char* name, bool v)  {
   return widget_set_prop_bool(((widget_t*)(this->nativeObj)), name, v);
 }

 bool TWidget::GetPropBool(const char* name, bool defval)  {
    return widget_get_prop_bool(((widget_t*)(this->nativeObj)), name, defval);
 }

 bool TWidget::IsWindowOpened()  {
    return widget_is_window_opened(((widget_t*)(this->nativeObj)));
 }

 bool TWidget::IsWindow()  {
    return widget_is_window(((widget_t*)(this->nativeObj)));
 }

 bool TWidget::IsDesigningWindow()  {
    return widget_is_designing_window(((widget_t*)(this->nativeObj)));
 }

 bool TWidget::IsWindowManager()  {
    return widget_is_window_manager(((widget_t*)(this->nativeObj)));
 }

 ret_t TWidget::Foreach(tk_visit_t visit, void* ctx)  {
   return widget_foreach(((widget_t*)(this->nativeObj)), visit, ctx);
 }

 TWidget TWidget::GetWindow()  {
   return TWidget((widget_t*)(widget_get_window(((widget_t*)(this->nativeObj)))));
 }

 TWidget TWidget::GetWindowManager()  {
   return TWidget((widget_t*)(widget_get_window_manager(((widget_t*)(this->nativeObj)))));
 }

 const char* TWidget::GetType()  {
    return widget_get_type(((widget_t*)(this->nativeObj)));
 }

 TWidget TWidget::Clone(TWidget& parent)  {
   return TWidget((widget_t*)(widget_clone(((widget_t*)(this->nativeObj)), ((widget_t*)(parent.nativeObj)))));
 }

 bool TWidget::Equal(TWidget& other)  {
    return widget_equal(((widget_t*)(this->nativeObj)), ((widget_t*)(other.nativeObj)));
 }

 TWidget TWidget::Cast(TWidget& widget)  {
   return TWidget(widget_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TWidget::Destroy()  {
   return widget_destroy(((widget_t*)(this->nativeObj)));
 }

 ret_t TWidget::Unref()  {
   return widget_unref(((widget_t*)(this->nativeObj)));
 }

 ret_t TWidget::Layout()  {
   return widget_layout(((widget_t*)(this->nativeObj)));
 }

 ret_t TWidget::SetSelfLayout(const char* params)  {
   return widget_set_self_layout(((widget_t*)(this->nativeObj)), params);
 }

 ret_t TWidget::SetChildrenLayout(const char* params)  {
   return widget_set_children_layout(((widget_t*)(this->nativeObj)), params);
 }

 ret_t TWidget::SetSelfLayoutParams(const char* x, const char* y, const char* w, const char* h)  {
   return widget_set_self_layout_params(((widget_t*)(this->nativeObj)), x, y, w, h);
 }

 ret_t TWidget::SetStyleInt(const char* state_and_name, int32_t value)  {
   return widget_set_style_int(((widget_t*)(this->nativeObj)), state_and_name, value);
 }

 ret_t TWidget::SetStyleStr(const char* state_and_name, const char* value)  {
   return widget_set_style_str(((widget_t*)(this->nativeObj)), state_and_name, value);
 }

 ret_t TWidget::SetStyleColor(const char* state_and_name, uint32_t value)  {
   return widget_set_style_color(((widget_t*)(this->nativeObj)), state_and_name, value);
 }

 xy_t TWidget::getX() const {
   return ((widget_t*)(this->nativeObj))->x;
 }

 xy_t TWidget::getY() const {
   return ((widget_t*)(this->nativeObj))->y;
 }

 wh_t TWidget::getW() const {
   return ((widget_t*)(this->nativeObj))->w;
 }

 wh_t TWidget::getH() const {
   return ((widget_t*)(this->nativeObj))->h;
 }

 char* TWidget::getName() const {
   return ((widget_t*)(this->nativeObj))->name;
 }

 char* TWidget::getTrText() const {
   return ((widget_t*)(this->nativeObj))->tr_text;
 }

 char* TWidget::getStyle() const {
   return ((widget_t*)(this->nativeObj))->style;
 }

 char* TWidget::getAnimation() const {
   return ((widget_t*)(this->nativeObj))->animation;
 }

 bool TWidget::getEnable() const {
   return ((widget_t*)(this->nativeObj))->enable;
 }

 bool TWidget::getFeedback() const {
   return ((widget_t*)(this->nativeObj))->feedback;
 }

 bool TWidget::getVisible() const {
   return ((widget_t*)(this->nativeObj))->visible;
 }

 bool TWidget::getSensitive() const {
   return ((widget_t*)(this->nativeObj))->sensitive;
 }

 bool TWidget::getFocusable() const {
   return ((widget_t*)(this->nativeObj))->focusable;
 }

 bool TWidget::getWithFocusState() const {
   return ((widget_t*)(this->nativeObj))->with_focus_state;
 }

 bool TWidget::getFloating() const {
   return ((widget_t*)(this->nativeObj))->floating;
 }

 TWidget TWidget::getParent() const {
   return TWidget(((widget_t*)(this->nativeObj))->parent);
 }

 uint64_t TTimeNow::S()  {
    return time_now_s();
 }

 uint64_t TTimeNow::Ms()  {
    return time_now_ms();
 }

 wh_t TCanvas::GetWidth()  {
    return canvas_get_width(((canvas_t*)(this->nativeObj)));
 }

 wh_t TCanvas::GetHeight()  {
    return canvas_get_height(((canvas_t*)(this->nativeObj)));
 }

 ret_t TCanvas::GetClipRect(TRect& r)  {
   return canvas_get_clip_rect(((canvas_t*)(this->nativeObj)), ((rect_t*)(r.nativeObj)));
 }

 ret_t TCanvas::SetClipRect(TRect& r)  {
   return canvas_set_clip_rect(((canvas_t*)(this->nativeObj)), ((const rect_t*)(r.nativeObj)));
 }

 ret_t TCanvas::SetClipRectEx(TRect& r, bool translate)  {
   return canvas_set_clip_rect_ex(((canvas_t*)(this->nativeObj)), ((const rect_t*)(r.nativeObj)), translate);
 }

 ret_t TCanvas::SetFillColor(const char* color)  {
   return canvas_set_fill_color_str(((canvas_t*)(this->nativeObj)), color);
 }

 ret_t TCanvas::SetTextColor(const char* color)  {
   return canvas_set_text_color_str(((canvas_t*)(this->nativeObj)), color);
 }

 ret_t TCanvas::SetStrokeColor(const char* color)  {
   return canvas_set_stroke_color_str(((canvas_t*)(this->nativeObj)), color);
 }

 ret_t TCanvas::SetGlobalAlpha(uint8_t alpha)  {
   return canvas_set_global_alpha(((canvas_t*)(this->nativeObj)), alpha);
 }

 ret_t TCanvas::Translate(xy_t dx, xy_t dy)  {
   return canvas_translate(((canvas_t*)(this->nativeObj)), dx, dy);
 }

 ret_t TCanvas::Untranslate(xy_t dx, xy_t dy)  {
   return canvas_untranslate(((canvas_t*)(this->nativeObj)), dx, dy);
 }

 ret_t TCanvas::DrawVline(xy_t x, xy_t y, wh_t h)  {
   return canvas_draw_vline(((canvas_t*)(this->nativeObj)), x, y, h);
 }

 ret_t TCanvas::DrawHline(xy_t x, xy_t y, wh_t w)  {
   return canvas_draw_hline(((canvas_t*)(this->nativeObj)), x, y, w);
 }

 ret_t TCanvas::FillRect(xy_t x, xy_t y, wh_t w, wh_t h)  {
   return canvas_fill_rect(((canvas_t*)(this->nativeObj)), x, y, w, h);
 }

 ret_t TCanvas::StrokeRect(xy_t x, xy_t y, wh_t w, wh_t h)  {
   return canvas_stroke_rect(((canvas_t*)(this->nativeObj)), x, y, w, h);
 }

 ret_t TCanvas::SetFont(const char* name, font_size_t size)  {
   return canvas_set_font(((canvas_t*)(this->nativeObj)), name, size);
 }

 float_t TCanvas::MeasureText(const char* str)  {
    return canvas_measure_utf8(((canvas_t*)(this->nativeObj)), str);
 }

 ret_t TCanvas::DrawText(const char* str, xy_t x, xy_t y)  {
   return canvas_draw_utf8(((canvas_t*)(this->nativeObj)), str, x, y);
 }

 ret_t TCanvas::DrawTextInRect(const char* str, TRect& r)  {
   return canvas_draw_utf8_in_rect(((canvas_t*)(this->nativeObj)), str, ((const rect_t*)(r.nativeObj)));
 }

 ret_t TCanvas::DrawIcon(TBitmap& img, xy_t cx, xy_t cy)  {
   return canvas_draw_icon(((canvas_t*)(this->nativeObj)), ((bitmap_t*)(img.nativeObj)), cx, cy);
 }

 ret_t TCanvas::DrawImage(TBitmap& img, TRect& src, TRect& dst)  {
   return canvas_draw_image(((canvas_t*)(this->nativeObj)), ((bitmap_t*)(img.nativeObj)), ((rect_t*)(src.nativeObj)), ((rect_t*)(dst.nativeObj)));
 }

 ret_t TCanvas::DrawImageEx(TBitmap& img, image_draw_type_t draw_type, TRect& dst)  {
   return canvas_draw_image_ex(((canvas_t*)(this->nativeObj)), ((bitmap_t*)(img.nativeObj)), draw_type, ((rect_t*)(dst.nativeObj)));
 }

 TVgcanvas TCanvas::GetVgcanvas()  {
   return TVgcanvas((vgcanvas_t*)(canvas_get_vgcanvas(((canvas_t*)(this->nativeObj)))));
 }

 TCanvas TCanvas::Cast(TCanvas& c)  {
   return TCanvas(canvas_cast(((canvas_t*)(c.nativeObj))));
 }

 ret_t TCanvas::Reset()  {
   return canvas_reset(((canvas_t*)(this->nativeObj)));
 }

 xy_t TCanvas::getOx() const {
   return ((canvas_t*)(this->nativeObj))->ox;
 }

 xy_t TCanvas::getOy() const {
   return ((canvas_t*)(this->nativeObj))->oy;
 }

 char* TCanvas::getFontName() const {
   return ((canvas_t*)(this->nativeObj))->font_name;
 }

 uint16_t TCanvas::getFontSize() const {
   return ((canvas_t*)(this->nativeObj))->font_size;
 }

 uint8_t TCanvas::getGlobalAlpha() const {
   return ((canvas_t*)(this->nativeObj))->global_alpha;
 }

 TNamedValue TNamedValue::Create()  {
   return TNamedValue((named_value_t*)(named_value_create()));
 }

 TNamedValue TNamedValue::Cast(TNamedValue& nv)  {
   return TNamedValue(named_value_cast(((named_value_t*)(nv.nativeObj))));
 }

 ret_t TNamedValue::SetName(const char* name)  {
   return named_value_set_name(((named_value_t*)(this->nativeObj)), name);
 }

 ret_t TNamedValue::SetValue(TValue& value)  {
   return named_value_set_value(((named_value_t*)(this->nativeObj)), ((const value_t*)(value.nativeObj)));
 }

 TValue TNamedValue::GetValue()  {
   return TValue((value_t*)(named_value_get_value(((named_value_t*)(this->nativeObj)))));
 }

 ret_t TNamedValue::Destroy()  {
   return named_value_destroy(((named_value_t*)(this->nativeObj)));
 }

 char* TNamedValue::getName() const {
   return ((named_value_t*)(this->nativeObj))->name;
 }

 ret_t TClipBoard::SetText(const char* text)  {
   return clip_board_set_text(text);
 }

 const char* TClipBoard::GetText()  {
    return clip_board_get_text();
 }

 TDateTime TDateTime::Create()  {
   return TDateTime((date_time_t*)(date_time_create()));
 }

 ret_t TDateTime::Set()  {
   return date_time_set(((date_time_t*)(this->nativeObj)));
 }

 ret_t TDateTime::Destroy()  {
   return date_time_destroy(((date_time_t*)(this->nativeObj)));
 }

 int32_t TDateTime::getSecond() const {
   return ((date_time_t*)(this->nativeObj))->second;
 }

 int32_t TDateTime::getMinute() const {
   return ((date_time_t*)(this->nativeObj))->minute;
 }

 int32_t TDateTime::getHour() const {
   return ((date_time_t*)(this->nativeObj))->hour;
 }

 int32_t TDateTime::getDay() const {
   return ((date_time_t*)(this->nativeObj))->day;
 }

 int32_t TDateTime::getWday() const {
   return ((date_time_t*)(this->nativeObj))->wday;
 }

 int32_t TDateTime::getMonth() const {
   return ((date_time_t*)(this->nativeObj))->month;
 }

 int32_t TDateTime::getYear() const {
   return ((date_time_t*)(this->nativeObj))->year;
 }

 TColor TColor::Create(uint8_t r, uint8_t b, uint8_t g, uint8_t a)  {
   return TColor((color_t*)(color_create(r, b, g, a)));
 }

 TColor TColor::FromStr(const char* str)  {
   return TColor((color_t*)(color_from_str(((color_t*)(this->nativeObj)), str)));
 }

 uint8_t TColor::R()  {
    return color_r(((color_t*)(this->nativeObj)));
 }

 uint8_t TColor::G()  {
    return color_g(((color_t*)(this->nativeObj)));
 }

 uint8_t TColor::B()  {
    return color_b(((color_t*)(this->nativeObj)));
 }

 uint8_t TColor::A()  {
    return color_a(((color_t*)(this->nativeObj)));
 }

 TColor TColor::Cast(TColor& color)  {
   return TColor(color_cast(((color_t*)(color.nativeObj))));
 }

 ret_t TColor::Destroy()  {
   return color_destroy(((color_t*)(this->nativeObj)));
 }

 uint32_t TColor::getColor() const {
   return ((color_t*)(this->nativeObj))->color;
 }

 uint16_t TAssetInfo::getType() const {
   return ((asset_info_t*)(this->nativeObj))->type;
 }

 uint8_t TAssetInfo::getSubtype() const {
   return ((asset_info_t*)(this->nativeObj))->subtype;
 }

 uint8_t TAssetInfo::getIsInRom() const {
   return ((asset_info_t*)(this->nativeObj))->is_in_rom;
 }

 uint32_t TAssetInfo::getSize() const {
   return ((asset_info_t*)(this->nativeObj))->size;
 }

 uint32_t TAssetInfo::getRefcount() const {
   return ((asset_info_t*)(this->nativeObj))->refcount;
 }

 char* TAssetInfo::getName() const {
   return ((asset_info_t*)(this->nativeObj))->name;
 }

 TAssetsManager TAssetsManager::Instance()  {
   return TAssetsManager((assets_manager_t*)(assets_manager()));
 }

 TAssetInfo TAssetsManager::Ref(asset_type_t type, char* name)  {
   return TAssetInfo((asset_info_t*)(assets_manager_ref(((assets_manager_t*)(this->nativeObj)), type, name)));
 }

 ret_t TAssetsManager::Unref(TAssetInfo& info)  {
   return assets_manager_unref(((assets_manager_t*)(this->nativeObj)), ((asset_info_t*)(info.nativeObj)));
 }

 TWidget TCanvasWidget::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TCanvasWidget((widget_t*)(canvas_widget_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TCanvasWidget TCanvasWidget::Cast(TWidget& widget)  {
   return TCanvasWidget(canvas_widget_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TTimeClock::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TTimeClock((widget_t*)(time_clock_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TTimeClock TTimeClock::Cast(TWidget& widget)  {
   return TTimeClock(time_clock_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TTimeClock::SetHour(int32_t hour)  {
   return time_clock_set_hour(((widget_t*)(this->nativeObj)), hour);
 }

 ret_t TTimeClock::SetMinute(int32_t minute)  {
   return time_clock_set_minute(((widget_t*)(this->nativeObj)), minute);
 }

 ret_t TTimeClock::SetSecond(int32_t second)  {
   return time_clock_set_second(((widget_t*)(this->nativeObj)), second);
 }

 ret_t TTimeClock::SetHourImage(const char* hour)  {
   return time_clock_set_hour_image(((widget_t*)(this->nativeObj)), hour);
 }

 ret_t TTimeClock::SetMinuteImage(const char* minute_image)  {
   return time_clock_set_minute_image(((widget_t*)(this->nativeObj)), minute_image);
 }

 ret_t TTimeClock::SetSecondImage(const char* second_image)  {
   return time_clock_set_second_image(((widget_t*)(this->nativeObj)), second_image);
 }

 ret_t TTimeClock::SetBgImage(const char* bg_image)  {
   return time_clock_set_bg_image(((widget_t*)(this->nativeObj)), bg_image);
 }

 ret_t TTimeClock::SetImage(const char* image)  {
   return time_clock_set_image(((widget_t*)(this->nativeObj)), image);
 }

 ret_t TTimeClock::SetHourAnchor(const char* anchor_x, const char* anchor_y)  {
   return time_clock_set_hour_anchor(((widget_t*)(this->nativeObj)), anchor_x, anchor_y);
 }

 ret_t TTimeClock::SetMinuteAnchor(const char* anchor_x, const char* anchor_y)  {
   return time_clock_set_minute_anchor(((widget_t*)(this->nativeObj)), anchor_x, anchor_y);
 }

 ret_t TTimeClock::SetSecondAnchor(const char* anchor_x, const char* anchor_y)  {
   return time_clock_set_second_anchor(((widget_t*)(this->nativeObj)), anchor_x, anchor_y);
 }

 int32_t TTimeClock::getHour() const {
   return ((time_clock_t*)(this->nativeObj))->hour;
 }

 int32_t TTimeClock::getMinute() const {
   return ((time_clock_t*)(this->nativeObj))->minute;
 }

 int32_t TTimeClock::getSecond() const {
   return ((time_clock_t*)(this->nativeObj))->second;
 }

 char* TTimeClock::getImage() const {
   return ((time_clock_t*)(this->nativeObj))->image;
 }

 char* TTimeClock::getBgImage() const {
   return ((time_clock_t*)(this->nativeObj))->bg_image;
 }

 char* TTimeClock::getHourImage() const {
   return ((time_clock_t*)(this->nativeObj))->hour_image;
 }

 char* TTimeClock::getMinuteImage() const {
   return ((time_clock_t*)(this->nativeObj))->minute_image;
 }

 char* TTimeClock::getSecondImage() const {
   return ((time_clock_t*)(this->nativeObj))->second_image;
 }

 char* TTimeClock::getHourAnchorX() const {
   return ((time_clock_t*)(this->nativeObj))->hour_anchor_x;
 }

 char* TTimeClock::getHourAnchorY() const {
   return ((time_clock_t*)(this->nativeObj))->hour_anchor_y;
 }

 char* TTimeClock::getMinuteAnchorX() const {
   return ((time_clock_t*)(this->nativeObj))->minute_anchor_x;
 }

 char* TTimeClock::getMinuteAnchorY() const {
   return ((time_clock_t*)(this->nativeObj))->minute_anchor_y;
 }

 char* TTimeClock::getSecondAnchorX() const {
   return ((time_clock_t*)(this->nativeObj))->second_anchor_x;
 }

 char* TTimeClock::getSecondAnchorY() const {
   return ((time_clock_t*)(this->nativeObj))->second_anchor_y;
 }

 TWidget TTextSelector::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TTextSelector((widget_t*)(text_selector_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TTextSelector TTextSelector::Cast(TWidget& widget)  {
   return TTextSelector(text_selector_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TTextSelector::ResetOptions()  {
   return text_selector_reset_options(((widget_t*)(this->nativeObj)));
 }

 int32_t TTextSelector::CountOptions()  {
    return text_selector_count_options(((widget_t*)(this->nativeObj)));
 }

 ret_t TTextSelector::AppendOption(int32_t value, char* text)  {
   return text_selector_append_option(((widget_t*)(this->nativeObj)), value, text);
 }

 ret_t TTextSelector::SetOptions(char* options)  {
   return text_selector_set_options(((widget_t*)(this->nativeObj)), options);
 }

 ret_t TTextSelector::SetRangeOptions(int32_t start, uint32_t nr, int32_t step)  {
   return text_selector_set_range_options(((widget_t*)(this->nativeObj)), start, nr, step);
 }

 int32_t TTextSelector::GetValue()  {
    return text_selector_get_value(((widget_t*)(this->nativeObj)));
 }

 ret_t TTextSelector::SetValue(int32_t value)  {
   return text_selector_set_value(((widget_t*)(this->nativeObj)), value);
 }

 const char* TTextSelector::GetTextValue()  {
    return text_selector_get_text(((widget_t*)(this->nativeObj)));
 }

 ret_t TTextSelector::SetText(const char* text)  {
   return text_selector_set_text(((widget_t*)(this->nativeObj)), text);
 }

 ret_t TTextSelector::SetSelectedIndex(uint32_t index)  {
   return text_selector_set_selected_index(((widget_t*)(this->nativeObj)), index);
 }

 ret_t TTextSelector::SetVisibleNr(uint32_t visible_nr)  {
   return text_selector_set_visible_nr(((widget_t*)(this->nativeObj)), visible_nr);
 }

 uint32_t TTextSelector::getVisibleNr() const {
   return ((text_selector_t*)(this->nativeObj))->visible_nr;
 }

 int32_t TTextSelector::getSelectedIndex() const {
   return ((text_selector_t*)(this->nativeObj))->selected_index;
 }

 char* TTextSelector::getOptions() const {
   return ((text_selector_t*)(this->nativeObj))->options;
 }

 TPropChangeEvent TPropChangeEvent::Cast(TEvent& event)  {
   return TPropChangeEvent(prop_change_event_cast(((event_t*)(event.nativeObj))));
 }

 const char* TPropChangeEvent::getName() const {
   return ((prop_change_event_t*)(this->nativeObj))->name;
 }

 TValue TPropChangeEvent::getValue() const {
   return TValue(((prop_change_event_t*)(this->nativeObj))->value);
 }

 TProgressEvent TProgressEvent::Cast(TEvent& event)  {
   return TProgressEvent(progress_event_cast(((event_t*)(event.nativeObj))));
 }

 uint32_t TProgressEvent::getPercent() const {
   return ((progress_event_t*)(this->nativeObj))->percent;
 }

 TWidget TSwitch::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSwitch((widget_t*)(switch_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TSwitch::SetValue(bool value)  {
   return switch_set_value(((widget_t*)(this->nativeObj)), value);
 }

 TSwitch TSwitch::Cast(TWidget& widget)  {
   return TSwitch(switch_cast(((widget_t*)(widget.nativeObj))));
 }

 bool TSwitch::getValue() const {
   return ((switch_t*)(this->nativeObj))->value;
 }

 float_t TSwitch::getMaxXoffsetRatio() const {
   return ((switch_t*)(this->nativeObj))->max_xoffset_ratio;
 }

 TWidget TSlideView::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSlideView((widget_t*)(slide_view_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TSlideView TSlideView::Cast(TWidget& widget)  {
   return TSlideView(slide_view_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TSlideView::SetAutoPlay(uint16_t auto_play)  {
   return slide_view_set_auto_play(((widget_t*)(this->nativeObj)), auto_play);
 }

 ret_t TSlideView::SetActive(uint32_t index)  {
   return slide_view_set_active(((widget_t*)(this->nativeObj)), index);
 }

 ret_t TSlideView::SetVertical(bool vertical)  {
   return slide_view_set_vertical(((widget_t*)(this->nativeObj)), vertical);
 }

 ret_t TSlideView::SetAnimHint(const char* anim_hint)  {
   return slide_view_set_anim_hint(((widget_t*)(this->nativeObj)), anim_hint);
 }

 ret_t TSlideView::SetLoop(bool loop)  {
   return slide_view_set_loop(((widget_t*)(this->nativeObj)), loop);
 }

 bool TSlideView::getVertical() const {
   return ((slide_view_t*)(this->nativeObj))->vertical;
 }

 uint16_t TSlideView::getAutoPlay() const {
   return ((slide_view_t*)(this->nativeObj))->auto_play;
 }

 bool TSlideView::getLoop() const {
   return ((slide_view_t*)(this->nativeObj))->loop;
 }

 char* TSlideView::getAnimHint() const {
   return ((slide_view_t*)(this->nativeObj))->anim_hint;
 }

 TWidget TSlideIndicator::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSlideIndicator((widget_t*)(slide_indicator_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TWidget TSlideIndicator::CreateLinear(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSlideIndicator((widget_t*)(slide_indicator_create_linear(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TWidget TSlideIndicator::CreateArc(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSlideIndicator((widget_t*)(slide_indicator_create_arc(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TSlideIndicator TSlideIndicator::Cast(TWidget& widget)  {
   return TSlideIndicator(slide_indicator_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TSlideIndicator::SetValue(uint32_t value)  {
   return slide_indicator_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TSlideIndicator::SetMax(uint32_t max)  {
   return slide_indicator_set_max(((widget_t*)(this->nativeObj)), max);
 }

 ret_t TSlideIndicator::SetDefaultPaint(indicator_default_paint_t default_paint)  {
   return slide_indicator_set_default_paint(((widget_t*)(this->nativeObj)), default_paint);
 }

 ret_t TSlideIndicator::SetAutoHide(uint16_t auto_hide)  {
   return slide_indicator_set_auto_hide(((widget_t*)(this->nativeObj)), auto_hide);
 }

 ret_t TSlideIndicator::SetMargin(int32_t margin)  {
   return slide_indicator_set_margin(((widget_t*)(this->nativeObj)), margin);
 }

 ret_t TSlideIndicator::SetSpacing(float_t spacing)  {
   return slide_indicator_set_spacing(((widget_t*)(this->nativeObj)), spacing);
 }

 ret_t TSlideIndicator::SetSize(uint32_t size)  {
   return slide_indicator_set_size(((widget_t*)(this->nativeObj)), size);
 }

 ret_t TSlideIndicator::SetAnchor(const char* anchor_x, const char* anchor_y)  {
   return slide_indicator_set_anchor(((widget_t*)(this->nativeObj)), anchor_x, anchor_y);
 }

 ret_t TSlideIndicator::SetIndicatedTarget(const char* indicated_target)  {
   return slide_indicator_set_indicated_target(((widget_t*)(this->nativeObj)), indicated_target);
 }

 uint32_t TSlideIndicator::getValue() const {
   return ((slide_indicator_t*)(this->nativeObj))->value;
 }

 uint32_t TSlideIndicator::getMax() const {
   return ((slide_indicator_t*)(this->nativeObj))->max;
 }

 indicator_default_paint_t TSlideIndicator::getDefaultPaint() const {
   return ((slide_indicator_t*)(this->nativeObj))->default_paint;
 }

 uint16_t TSlideIndicator::getAutoHide() const {
   return ((slide_indicator_t*)(this->nativeObj))->auto_hide;
 }

 int32_t TSlideIndicator::getMargin() const {
   return ((slide_indicator_t*)(this->nativeObj))->margin;
 }

 float_t TSlideIndicator::getSpacing() const {
   return ((slide_indicator_t*)(this->nativeObj))->spacing;
 }

 uint32_t TSlideIndicator::getSize() const {
   return ((slide_indicator_t*)(this->nativeObj))->size;
 }

 float_t TSlideIndicator::getAnchorX() const {
   return ((slide_indicator_t*)(this->nativeObj))->anchor_x;
 }

 float_t TSlideIndicator::getAnchorY() const {
   return ((slide_indicator_t*)(this->nativeObj))->anchor_y;
 }

 char* TSlideIndicator::getIndicatedTarget() const {
   return ((slide_indicator_t*)(this->nativeObj))->indicated_target;
 }

 TWidget TSlideMenu::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSlideMenu((widget_t*)(slide_menu_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TSlideMenu TSlideMenu::Cast(TWidget& widget)  {
   return TSlideMenu(slide_menu_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TSlideMenu::SetValue(uint32_t value)  {
   return slide_menu_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TSlideMenu::SetAlignV(align_v_t align_v)  {
   return slide_menu_set_align_v(((widget_t*)(this->nativeObj)), align_v);
 }

 ret_t TSlideMenu::SetMinScale(float_t min_scale)  {
   return slide_menu_set_min_scale(((widget_t*)(this->nativeObj)), min_scale);
 }

 int32_t TSlideMenu::getValue() const {
   return ((slide_menu_t*)(this->nativeObj))->value;
 }

 align_v_t TSlideMenu::getAlignV() const {
   return ((slide_menu_t*)(this->nativeObj))->align_v;
 }

 float_t TSlideMenu::getMinScale() const {
   return ((slide_menu_t*)(this->nativeObj))->min_scale;
 }

 TWidget TScrollView::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TScrollView((widget_t*)(scroll_view_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TScrollView TScrollView::Cast(TWidget& widget)  {
   return TScrollView(scroll_view_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TScrollView::SetVirtualW(wh_t w)  {
   return scroll_view_set_virtual_w(((widget_t*)(this->nativeObj)), w);
 }

 ret_t TScrollView::SetVirtualH(wh_t h)  {
   return scroll_view_set_virtual_h(((widget_t*)(this->nativeObj)), h);
 }

 ret_t TScrollView::SetXslidable(bool xslidable)  {
   return scroll_view_set_xslidable(((widget_t*)(this->nativeObj)), xslidable);
 }

 ret_t TScrollView::SetYslidable(bool yslidable)  {
   return scroll_view_set_yslidable(((widget_t*)(this->nativeObj)), yslidable);
 }

 ret_t TScrollView::SetOffset(int32_t xoffset, int32_t yoffset)  {
   return scroll_view_set_offset(((widget_t*)(this->nativeObj)), xoffset, yoffset);
 }

 ret_t TScrollView::SetSpeedScale(float_t xspeed_scale, float_t yspeed_scale)  {
   return scroll_view_set_speed_scale(((widget_t*)(this->nativeObj)), xspeed_scale, yspeed_scale);
 }

 ret_t TScrollView::ScrollTo(int32_t xoffset_end, int32_t yoffset_end, int32_t duration)  {
   return scroll_view_scroll_to(((widget_t*)(this->nativeObj)), xoffset_end, yoffset_end, duration);
 }

 ret_t TScrollView::ScrollDeltaTo(int32_t xoffset_delta, int32_t yoffset_delta, int32_t duration)  {
   return scroll_view_scroll_delta_to(((widget_t*)(this->nativeObj)), xoffset_delta, yoffset_delta, duration);
 }

 wh_t TScrollView::getVirtualW() const {
   return ((scroll_view_t*)(this->nativeObj))->virtual_w;
 }

 wh_t TScrollView::getVirtualH() const {
   return ((scroll_view_t*)(this->nativeObj))->virtual_h;
 }

 int32_t TScrollView::getXoffset() const {
   return ((scroll_view_t*)(this->nativeObj))->xoffset;
 }

 int32_t TScrollView::getYoffset() const {
   return ((scroll_view_t*)(this->nativeObj))->yoffset;
 }

 float_t TScrollView::getXspeedScale() const {
   return ((scroll_view_t*)(this->nativeObj))->xspeed_scale;
 }

 float_t TScrollView::getYspeedScale() const {
   return ((scroll_view_t*)(this->nativeObj))->yspeed_scale;
 }

 bool TScrollView::getXslidable() const {
   return ((scroll_view_t*)(this->nativeObj))->xslidable;
 }

 bool TScrollView::getYslidable() const {
   return ((scroll_view_t*)(this->nativeObj))->yslidable;
 }

 TWidget TScrollBar::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TScrollBar((widget_t*)(scroll_bar_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TScrollBar TScrollBar::Cast(TWidget& widget)  {
   return TScrollBar(scroll_bar_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TScrollBar::CreateMobile(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TScrollBar((widget_t*)(scroll_bar_create_mobile(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TWidget TScrollBar::CreateDesktop(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TScrollBar((widget_t*)(scroll_bar_create_desktop(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TScrollBar::SetParams(int32_t virtual_size, int32_t row)  {
   return scroll_bar_set_params(((widget_t*)(this->nativeObj)), virtual_size, row);
 }

 ret_t TScrollBar::ScrollTo(int32_t value, int32_t duration)  {
   return scroll_bar_scroll_to(((widget_t*)(this->nativeObj)), value, duration);
 }

 ret_t TScrollBar::SetValue(int32_t value)  {
   return scroll_bar_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TScrollBar::AddDelta(int32_t delta)  {
   return scroll_bar_add_delta(((widget_t*)(this->nativeObj)), delta);
 }

 ret_t TScrollBar::ScrollDelta(int32_t delta)  {
   return scroll_bar_scroll_delta(((widget_t*)(this->nativeObj)), delta);
 }

 ret_t TScrollBar::SetValueOnly(int32_t value)  {
   return scroll_bar_set_value_only(((widget_t*)(this->nativeObj)), value);
 }

 bool TScrollBar::IsMobile()  {
    return scroll_bar_is_mobile(((widget_t*)(this->nativeObj)));
 }

 int32_t TScrollBar::getVirtualSize() const {
   return ((scroll_bar_t*)(this->nativeObj))->virtual_size;
 }

 int32_t TScrollBar::getValue() const {
   return ((scroll_bar_t*)(this->nativeObj))->value;
 }

 int32_t TScrollBar::getRow() const {
   return ((scroll_bar_t*)(this->nativeObj))->row;
 }

 bool TScrollBar::getAnimatable() const {
   return ((scroll_bar_t*)(this->nativeObj))->animatable;
 }

 TWidget TListView::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TListView((widget_t*)(list_view_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TListView::SetItemHeight(int32_t item_height)  {
   return list_view_set_item_height(((widget_t*)(this->nativeObj)), item_height);
 }

 ret_t TListView::SetDefaultItemHeight(int32_t default_item_height)  {
   return list_view_set_default_item_height(((widget_t*)(this->nativeObj)), default_item_height);
 }

 ret_t TListView::SetAutoHideScrollBar(bool auto_hide_scroll_bar)  {
   return list_view_set_auto_hide_scroll_bar(((widget_t*)(this->nativeObj)), auto_hide_scroll_bar);
 }

 TListView TListView::Cast(TWidget& widget)  {
   return TListView(list_view_cast(((widget_t*)(widget.nativeObj))));
 }

 int32_t TListView::getItemHeight() const {
   return ((list_view_t*)(this->nativeObj))->item_height;
 }

 int32_t TListView::getDefaultItemHeight() const {
   return ((list_view_t*)(this->nativeObj))->default_item_height;
 }

 bool TListView::getAutoHideScrollBar() const {
   return ((list_view_t*)(this->nativeObj))->auto_hide_scroll_bar;
 }

 TWidget TListViewH::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TListViewH((widget_t*)(list_view_h_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TListViewH::SetItemWidth(int32_t item_width)  {
   return list_view_h_set_item_width(((widget_t*)(this->nativeObj)), item_width);
 }

 ret_t TListViewH::SetSpacing(int32_t spacing)  {
   return list_view_h_set_spacing(((widget_t*)(this->nativeObj)), spacing);
 }

 TListViewH TListViewH::Cast(TWidget& widget)  {
   return TListViewH(list_view_h_cast(((widget_t*)(widget.nativeObj))));
 }

 int32_t TListViewH::getItemWidth() const {
   return ((list_view_h_t*)(this->nativeObj))->item_width;
 }

 int32_t TListViewH::getSpacing() const {
   return ((list_view_h_t*)(this->nativeObj))->spacing;
 }

 TWidget TListItem::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TListItem((widget_t*)(list_item_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TListItem TListItem::Cast(TWidget& widget)  {
   return TListItem(list_item_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget THscrollLabel::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return THscrollLabel((widget_t*)(hscroll_label_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t THscrollLabel::SetLull(int32_t lull)  {
   return hscroll_label_set_lull(((widget_t*)(this->nativeObj)), lull);
 }

 ret_t THscrollLabel::SetDuration(int32_t duration)  {
   return hscroll_label_set_duration(((widget_t*)(this->nativeObj)), duration);
 }

 ret_t THscrollLabel::SetOnlyFocus(bool only_focus)  {
   return hscroll_label_set_only_focus(((widget_t*)(this->nativeObj)), only_focus);
 }

 ret_t THscrollLabel::SetOnlyParentFocus(bool only_parent_focus)  {
   return hscroll_label_set_only_parent_focus(((widget_t*)(this->nativeObj)), only_parent_focus);
 }

 ret_t THscrollLabel::SetLoop(bool loop)  {
   return hscroll_label_set_loop(((widget_t*)(this->nativeObj)), loop);
 }

 ret_t THscrollLabel::SetYoyo(bool yoyo)  {
   return hscroll_label_set_yoyo(((widget_t*)(this->nativeObj)), yoyo);
 }

 ret_t THscrollLabel::SetEllipses(bool ellipses)  {
   return hscroll_label_set_ellipses(((widget_t*)(this->nativeObj)), ellipses);
 }

 ret_t THscrollLabel::SetXoffset(int32_t xoffset)  {
   return hscroll_label_set_xoffset(((widget_t*)(this->nativeObj)), xoffset);
 }

 ret_t THscrollLabel::Start()  {
   return hscroll_label_start(((widget_t*)(this->nativeObj)));
 }

 ret_t THscrollLabel::Stop()  {
   return hscroll_label_stop(((widget_t*)(this->nativeObj)));
 }

 THscrollLabel THscrollLabel::Cast(TWidget& widget)  {
   return THscrollLabel(hscroll_label_cast(((widget_t*)(widget.nativeObj))));
 }

 bool THscrollLabel::getOnlyFocus() const {
   return ((hscroll_label_t*)(this->nativeObj))->only_focus;
 }

 bool THscrollLabel::getOnlyParentFocus() const {
   return ((hscroll_label_t*)(this->nativeObj))->only_parent_focus;
 }

 bool THscrollLabel::getLoop() const {
   return ((hscroll_label_t*)(this->nativeObj))->loop;
 }

 bool THscrollLabel::getYoyo() const {
   return ((hscroll_label_t*)(this->nativeObj))->yoyo;
 }

 bool THscrollLabel::getEllipses() const {
   return ((hscroll_label_t*)(this->nativeObj))->ellipses;
 }

 int32_t THscrollLabel::getLull() const {
   return ((hscroll_label_t*)(this->nativeObj))->lull;
 }

 int32_t THscrollLabel::getDuration() const {
   return ((hscroll_label_t*)(this->nativeObj))->duration;
 }

 int32_t THscrollLabel::getXoffset() const {
   return ((hscroll_label_t*)(this->nativeObj))->xoffset;
 }

 int32_t THscrollLabel::getTextW() const {
   return ((hscroll_label_t*)(this->nativeObj))->text_w;
 }

 TWidget TRichText::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TRichText((widget_t*)(rich_text_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TRichText::SetText(char* text)  {
   return rich_text_set_text(((widget_t*)(this->nativeObj)), text);
 }

 TRichText TRichText::Cast(TWidget& widget)  {
   return TRichText(rich_text_cast(((widget_t*)(widget.nativeObj))));
 }

 uint32_t TRichText::getLineGap() const {
   return ((rich_text_t*)(this->nativeObj))->line_gap;
 }

 uint32_t TRichText::getMargin() const {
   return ((rich_text_t*)(this->nativeObj))->margin;
 }

 TWidget TProgressCircle::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TProgressCircle((widget_t*)(progress_circle_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TProgressCircle TProgressCircle::Cast(TWidget& widget)  {
   return TProgressCircle(progress_circle_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TProgressCircle::SetValue(float_t value)  {
   return progress_circle_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TProgressCircle::SetMax(uint32_t max)  {
   return progress_circle_set_max(((widget_t*)(this->nativeObj)), max);
 }

 ret_t TProgressCircle::SetLineWidth(uint32_t line_width)  {
   return progress_circle_set_line_width(((widget_t*)(this->nativeObj)), line_width);
 }

 ret_t TProgressCircle::SetStartAngle(int32_t start_angle)  {
   return progress_circle_set_start_angle(((widget_t*)(this->nativeObj)), start_angle);
 }

 ret_t TProgressCircle::SetUnit(const char* unit)  {
   return progress_circle_set_unit(((widget_t*)(this->nativeObj)), unit);
 }

 ret_t TProgressCircle::SetShowText(bool show_text)  {
   return progress_circle_set_show_text(((widget_t*)(this->nativeObj)), show_text);
 }

 ret_t TProgressCircle::SetCounterClockWise(bool counter_clock_wise)  {
   return progress_circle_set_counter_clock_wise(((widget_t*)(this->nativeObj)), counter_clock_wise);
 }

 float_t TProgressCircle::getValue() const {
   return ((progress_circle_t*)(this->nativeObj))->value;
 }

 uint32_t TProgressCircle::getMax() const {
   return ((progress_circle_t*)(this->nativeObj))->max;
 }

 int32_t TProgressCircle::getStartAngle() const {
   return ((progress_circle_t*)(this->nativeObj))->start_angle;
 }

 uint32_t TProgressCircle::getLineWidth() const {
   return ((progress_circle_t*)(this->nativeObj))->line_width;
 }

 char* TProgressCircle::getUnit() const {
   return ((progress_circle_t*)(this->nativeObj))->unit;
 }

 bool TProgressCircle::getCounterClockWise() const {
   return ((progress_circle_t*)(this->nativeObj))->counter_clock_wise;
 }

 bool TProgressCircle::getShowText() const {
   return ((progress_circle_t*)(this->nativeObj))->show_text;
 }

 TWidget TMledit::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TMledit((widget_t*)(mledit_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TMledit::SetReadonly(bool readonly)  {
   return mledit_set_readonly(((widget_t*)(this->nativeObj)), readonly);
 }

 ret_t TMledit::SetFocus(bool focus)  {
   return mledit_set_focus(((widget_t*)(this->nativeObj)), focus);
 }

 ret_t TMledit::SetWrapWord(bool wrap_word)  {
   return mledit_set_wrap_word(((widget_t*)(this->nativeObj)), wrap_word);
 }

 ret_t TMledit::SetMaxLines(uint32_t max_lines)  {
   return mledit_set_max_lines(((widget_t*)(this->nativeObj)), max_lines);
 }

 ret_t TMledit::SetInputTips(char* tips)  {
   return mledit_set_input_tips(((widget_t*)(this->nativeObj)), tips);
 }

 ret_t TMledit::SetCursor(uint32_t cursor)  {
   return mledit_set_cursor(((widget_t*)(this->nativeObj)), cursor);
 }

 ret_t TMledit::SetScrollLine(uint32_t scroll_line)  {
   return mledit_set_scroll_line(((widget_t*)(this->nativeObj)), scroll_line);
 }

 TMledit TMledit::Cast(TWidget& widget)  {
   return TMledit(mledit_cast(((widget_t*)(widget.nativeObj))));
 }

 bool TMledit::getReadonly() const {
   return ((mledit_t*)(this->nativeObj))->readonly;
 }

 char* TMledit::getTips() const {
   return ((mledit_t*)(this->nativeObj))->tips;
 }

 bool TMledit::getWrapWord() const {
   return ((mledit_t*)(this->nativeObj))->wrap_word;
 }

 uint32_t TMledit::getMaxLines() const {
   return ((mledit_t*)(this->nativeObj))->max_lines;
 }

 float_t TMledit::getScrollLine() const {
   return ((mledit_t*)(this->nativeObj))->scroll_line;
 }

 TWidget TLineNumber::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TLineNumber((widget_t*)(line_number_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TLineNumber::SetTopMargin(int32_t top_margin)  {
   return line_number_set_top_margin(((widget_t*)(this->nativeObj)), top_margin);
 }

 ret_t TLineNumber::SetBottomMargin(int32_t bottom_margin)  {
   return line_number_set_bottom_margin(((widget_t*)(this->nativeObj)), bottom_margin);
 }

 ret_t TLineNumber::SetLineHeight(int32_t line_height)  {
   return line_number_set_line_height(((widget_t*)(this->nativeObj)), line_height);
 }

 ret_t TLineNumber::SetYoffset(int32_t yoffset)  {
   return line_number_set_yoffset(((widget_t*)(this->nativeObj)), yoffset);
 }

 TLineNumber TLineNumber::Cast(TWidget& widget)  {
   return TLineNumber(line_number_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TImageValue::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TImageValue((widget_t*)(image_value_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TImageValue::SetImage(const char* image)  {
   return image_value_set_image(((widget_t*)(this->nativeObj)), image);
 }

 ret_t TImageValue::SetFormat(const char* format)  {
   return image_value_set_format(((widget_t*)(this->nativeObj)), format);
 }

 ret_t TImageValue::SetValue(float_t value)  {
   return image_value_set_value(((widget_t*)(this->nativeObj)), value);
 }

 TImageValue TImageValue::Cast(TWidget& widget)  {
   return TImageValue(image_value_cast(((widget_t*)(widget.nativeObj))));
 }

 char* TImageValue::getImage() const {
   return ((image_value_t*)(this->nativeObj))->image;
 }

 char* TImageValue::getFormat() const {
   return ((image_value_t*)(this->nativeObj))->format;
 }

 float_t TImageValue::getValue() const {
   return ((image_value_t*)(this->nativeObj))->value;
 }

 TWidget TImageAnimation::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TImageAnimation((widget_t*)(image_animation_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TImageAnimation::SetLoop(bool loop)  {
   return image_animation_set_loop(((widget_t*)(this->nativeObj)), loop);
 }

 ret_t TImageAnimation::SetImage(const char* image)  {
   return image_animation_set_image(((widget_t*)(this->nativeObj)), image);
 }

 ret_t TImageAnimation::SetInterval(uint32_t interval)  {
   return image_animation_set_interval(((widget_t*)(this->nativeObj)), interval);
 }

 ret_t TImageAnimation::SetDelay(uint32_t delay)  {
   return image_animation_set_delay(((widget_t*)(this->nativeObj)), delay);
 }

 ret_t TImageAnimation::SetAutoPlay(bool auto_play)  {
   return image_animation_set_auto_play(((widget_t*)(this->nativeObj)), auto_play);
 }

 ret_t TImageAnimation::SetSequence(const char* sequence)  {
   return image_animation_set_sequence(((widget_t*)(this->nativeObj)), sequence);
 }

 ret_t TImageAnimation::SetRangeSequence(uint32_t start_index, uint32_t end_index)  {
   return image_animation_set_range_sequence(((widget_t*)(this->nativeObj)), start_index, end_index);
 }

 ret_t TImageAnimation::Play()  {
   return image_animation_play(((widget_t*)(this->nativeObj)));
 }

 ret_t TImageAnimation::Stop()  {
   return image_animation_stop(((widget_t*)(this->nativeObj)));
 }

 ret_t TImageAnimation::Pause()  {
   return image_animation_pause(((widget_t*)(this->nativeObj)));
 }

 ret_t TImageAnimation::Next()  {
   return image_animation_next(((widget_t*)(this->nativeObj)));
 }

 ret_t TImageAnimation::SetFormat(const char* format)  {
   return image_animation_set_format(((widget_t*)(this->nativeObj)), format);
 }

 ret_t TImageAnimation::SetUnloadAfterPaint(bool unload_after_paint)  {
   return image_animation_set_unload_after_paint(((widget_t*)(this->nativeObj)), unload_after_paint);
 }

 TImageAnimation TImageAnimation::Cast(TWidget& widget)  {
   return TImageAnimation(image_animation_cast(((widget_t*)(widget.nativeObj))));
 }

 char* TImageAnimation::getImage() const {
   return ((image_animation_t*)(this->nativeObj))->image;
 }

 char* TImageAnimation::getSequence() const {
   return ((image_animation_t*)(this->nativeObj))->sequence;
 }

 uint32_t TImageAnimation::getStartIndex() const {
   return ((image_animation_t*)(this->nativeObj))->start_index;
 }

 uint32_t TImageAnimation::getEndIndex() const {
   return ((image_animation_t*)(this->nativeObj))->end_index;
 }

 bool TImageAnimation::getLoop() const {
   return ((image_animation_t*)(this->nativeObj))->loop;
 }

 bool TImageAnimation::getAutoPlay() const {
   return ((image_animation_t*)(this->nativeObj))->auto_play;
 }

 bool TImageAnimation::getUnloadAfterPaint() const {
   return ((image_animation_t*)(this->nativeObj))->unload_after_paint;
 }

 char* TImageAnimation::getFormat() const {
   return ((image_animation_t*)(this->nativeObj))->format;
 }

 uint32_t TImageAnimation::getInterval() const {
   return ((image_animation_t*)(this->nativeObj))->interval;
 }

 uint32_t TImageAnimation::getDelay() const {
   return ((image_animation_t*)(this->nativeObj))->delay;
 }

 TWidget TGuage::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TGuage((widget_t*)(guage_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TGuage TGuage::Cast(TWidget& widget)  {
   return TGuage(guage_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TGuage::SetImage(char* name)  {
   return guage_set_image(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TGuage::SetDrawType(image_draw_type_t draw_type)  {
   return guage_set_draw_type(((widget_t*)(this->nativeObj)), draw_type);
 }

 char* TGuage::getImage() const {
   return ((guage_t*)(this->nativeObj))->image;
 }

 image_draw_type_t TGuage::getDrawType() const {
   return ((guage_t*)(this->nativeObj))->draw_type;
 }

 TWidget TGuagePointer::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TGuagePointer((widget_t*)(guage_pointer_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TGuagePointer TGuagePointer::Cast(TWidget& widget)  {
   return TGuagePointer(guage_pointer_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TGuagePointer::SetAngle(int32_t angle)  {
   return guage_pointer_set_angle(((widget_t*)(this->nativeObj)), angle);
 }

 ret_t TGuagePointer::SetImage(const char* image)  {
   return guage_pointer_set_image(((widget_t*)(this->nativeObj)), image);
 }

 ret_t TGuagePointer::SetAnchor(const char* anchor_x, const char* anchor_y)  {
   return guage_pointer_set_anchor(((widget_t*)(this->nativeObj)), anchor_x, anchor_y);
 }

 int32_t TGuagePointer::getAngle() const {
   return ((guage_pointer_t*)(this->nativeObj))->angle;
 }

 char* TGuagePointer::getImage() const {
   return ((guage_pointer_t*)(this->nativeObj))->image;
 }

 float_t TGuagePointer::getAnchorX() const {
   return ((guage_pointer_t*)(this->nativeObj))->anchor_x;
 }

 float_t TGuagePointer::getAnchorY() const {
   return ((guage_pointer_t*)(this->nativeObj))->anchor_y;
 }

 TWidget TDraggable::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TDraggable((widget_t*)(draggable_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TDraggable TDraggable::Cast(TWidget& widget)  {
   return TDraggable(draggable_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TDraggable::SetTop(int32_t top)  {
   return draggable_set_top(((widget_t*)(this->nativeObj)), top);
 }

 ret_t TDraggable::SetBottom(int32_t bottom)  {
   return draggable_set_bottom(((widget_t*)(this->nativeObj)), bottom);
 }

 ret_t TDraggable::SetLeft(int32_t left)  {
   return draggable_set_left(((widget_t*)(this->nativeObj)), left);
 }

 ret_t TDraggable::SetRight(int32_t right)  {
   return draggable_set_right(((widget_t*)(this->nativeObj)), right);
 }

 ret_t TDraggable::SetVerticalOnly(bool vertical_only)  {
   return draggable_set_vertical_only(((widget_t*)(this->nativeObj)), vertical_only);
 }

 ret_t TDraggable::SetHorizontalOnly(bool horizontal_only)  {
   return draggable_set_horizontal_only(((widget_t*)(this->nativeObj)), horizontal_only);
 }

 ret_t TDraggable::SetDragWindow(bool drag_window)  {
   return draggable_set_drag_window(((widget_t*)(this->nativeObj)), drag_window);
 }

 int32_t TDraggable::getTop() const {
   return ((draggable_t*)(this->nativeObj))->top;
 }

 int32_t TDraggable::getBottom() const {
   return ((draggable_t*)(this->nativeObj))->bottom;
 }

 int32_t TDraggable::getLeft() const {
   return ((draggable_t*)(this->nativeObj))->left;
 }

 int32_t TDraggable::getRight() const {
   return ((draggable_t*)(this->nativeObj))->right;
 }

 bool TDraggable::getVerticalOnly() const {
   return ((draggable_t*)(this->nativeObj))->vertical_only;
 }

 bool TDraggable::getHorizontalOnly() const {
   return ((draggable_t*)(this->nativeObj))->horizontal_only;
 }

 bool TDraggable::getDragWindow() const {
   return ((draggable_t*)(this->nativeObj))->drag_window;
 }

 TWidget TColorPicker::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TColorPicker((widget_t*)(color_picker_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TColorPicker::SetColor(const char* color)  {
   return color_picker_set_color(((widget_t*)(this->nativeObj)), color);
 }

 TColorPicker TColorPicker::Cast(TWidget& widget)  {
   return TColorPicker(color_picker_cast(((widget_t*)(widget.nativeObj))));
 }

 const char* TColorPicker::getValue() const {
   return ((color_picker_t*)(this->nativeObj))->value;
 }

 TColorComponent TColorComponent::Cast(TWidget& widget)  {
   return TColorComponent(color_component_cast(((widget_t*)(widget.nativeObj))));
 }

 TWindowManager TWindowManager::Instance()  {
   return TWindowManager(window_manager());
 }

 TWindowManager TWindowManager::Cast(TWidget& widget)  {
   return TWindowManager(window_manager_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TWindowManager::GetTopMainWindow()  {
   return TWidget((widget_t*)(window_manager_get_top_main_window(((widget_t*)(this->nativeObj)))));
 }

 TWidget TWindowManager::GetTopWindow()  {
   return TWidget((widget_t*)(window_manager_get_top_window(((widget_t*)(this->nativeObj)))));
 }

 TWidget TWindowManager::GetPrevWindow()  {
   return TWidget((widget_t*)(window_manager_get_prev_window(((widget_t*)(this->nativeObj)))));
 }

 xy_t TWindowManager::GetPointerX()  {
    return window_manager_get_pointer_x(((widget_t*)(this->nativeObj)));
 }

 xy_t TWindowManager::GetPointerY()  {
    return window_manager_get_pointer_y(((widget_t*)(this->nativeObj)));
 }

 bool TWindowManager::GetPointerPressed()  {
    return window_manager_get_pointer_pressed(((widget_t*)(this->nativeObj)));
 }

 ret_t TWindowManager::SetShowFps(bool show_fps)  {
   return window_manager_set_show_fps(((widget_t*)(this->nativeObj)), show_fps);
 }

 ret_t TWindowManager::SetScreenSaverTime(uint32_t screen_saver_time)  {
   return window_manager_set_screen_saver_time(((widget_t*)(this->nativeObj)), screen_saver_time);
 }

 ret_t TWindowManager::SetCursor(const char* cursor)  {
   return window_manager_set_cursor(((widget_t*)(this->nativeObj)), cursor);
 }

 ret_t TWindowManager::Back()  {
   return window_manager_back(((widget_t*)(this->nativeObj)));
 }

 ret_t TWindowManager::BackToHome()  {
   return window_manager_back_to_home(((widget_t*)(this->nativeObj)));
 }

 ret_t TWindowManager::BackTo(const char* target)  {
   return window_manager_back_to(((widget_t*)(this->nativeObj)), target);
 }

 TWindowBase TWindowBase::Cast(TWidget& widget)  {
   return TWindowBase(window_base_cast(((widget_t*)(widget.nativeObj))));
 }

 char* TWindowBase::getTheme() const {
   return ((window_base_t*)(this->nativeObj))->theme;
 }

 window_closable_t TWindowBase::getClosable() const {
   return ((window_base_t*)(this->nativeObj))->closable;
 }

 ret_t TStyleMutable::SetName(const char* name)  {
   return style_mutable_set_name(((style_t*)(this->nativeObj)), name);
 }

 ret_t TStyleMutable::SetInt(const char* state, const char* name, uint32_t val)  {
   return style_mutable_set_int(((style_t*)(this->nativeObj)), state, name, val);
 }

 TStyleMutable TStyleMutable::Cast(TStyle& s)  {
   return TStyleMutable(style_mutable_cast(((style_t*)(s.nativeObj))));
 }

 TStyle TStyleMutable::Create(TWidget& widget, TStyle& default_style)  {
   return TStyleMutable((style_t*)(style_mutable_create(((widget_t*)(widget.nativeObj)), ((style_t*)(default_style.nativeObj)))));
 }

 char* TStyleMutable::getName() const {
   return ((style_mutable_t*)(this->nativeObj))->name;
 }

 ret_t TImageBase::SetImage(char* name)  {
   return image_base_set_image(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TImageBase::SetRotation(float_t rotation)  {
   return image_base_set_rotation(((widget_t*)(this->nativeObj)), rotation);
 }

 ret_t TImageBase::SetScale(float_t scale_x, float_t scale_y)  {
   return image_base_set_scale(((widget_t*)(this->nativeObj)), scale_x, scale_y);
 }

 ret_t TImageBase::SetAnchor(float_t anchor_x, float_t anchor_y)  {
   return image_base_set_anchor(((widget_t*)(this->nativeObj)), anchor_x, anchor_y);
 }

 ret_t TImageBase::SetSelected(bool selected)  {
   return image_base_set_selected(((widget_t*)(this->nativeObj)), selected);
 }

 ret_t TImageBase::SetSelectable(bool selectable)  {
   return image_base_set_selectable(((widget_t*)(this->nativeObj)), selectable);
 }

 ret_t TImageBase::SetClickable(bool clickable)  {
   return image_base_set_clickable(((widget_t*)(this->nativeObj)), clickable);
 }

 TImageBase TImageBase::Cast(TWidget& widget)  {
   return TImageBase(image_base_cast(((widget_t*)(widget.nativeObj))));
 }

 char* TImageBase::getImage() const {
   return ((image_base_t*)(this->nativeObj))->image;
 }

 float_t TImageBase::getAnchorX() const {
   return ((image_base_t*)(this->nativeObj))->anchor_x;
 }

 float_t TImageBase::getAnchorY() const {
   return ((image_base_t*)(this->nativeObj))->anchor_y;
 }

 float_t TImageBase::getScaleX() const {
   return ((image_base_t*)(this->nativeObj))->scale_x;
 }

 float_t TImageBase::getScaleY() const {
   return ((image_base_t*)(this->nativeObj))->scale_y;
 }

 float_t TImageBase::getRotation() const {
   return ((image_base_t*)(this->nativeObj))->rotation;
 }

 bool TImageBase::getClickable() const {
   return ((image_base_t*)(this->nativeObj))->clickable;
 }

 bool TImageBase::getSelectable() const {
   return ((image_base_t*)(this->nativeObj))->selectable;
 }

 bool TImageBase::getSelected() const {
   return ((image_base_t*)(this->nativeObj))->selected;
 }

 TWindowEvent TWindowEvent::Cast(TEvent& event)  {
   return TWindowEvent(window_event_cast(((event_t*)(event.nativeObj))));
 }

 TWidget TWindowEvent::getWindow() const {
   return TWidget(((window_event_t*)(this->nativeObj))->window);
 }

 TPaintEvent TPaintEvent::Cast(TEvent& event)  {
   return TPaintEvent(paint_event_cast(((event_t*)(event.nativeObj))));
 }

 TCanvas TPaintEvent::getC() const {
   return TCanvas(((paint_event_t*)(this->nativeObj))->c);
 }

 TKeyEvent TKeyEvent::Cast(TEvent& event)  {
   return TKeyEvent(key_event_cast(((event_t*)(event.nativeObj))));
 }

 uint32_t TKeyEvent::getKey() const {
   return ((key_event_t*)(this->nativeObj))->key;
 }

 bool TKeyEvent::getAlt() const {
   return ((key_event_t*)(this->nativeObj))->alt;
 }

 bool TKeyEvent::getLalt() const {
   return ((key_event_t*)(this->nativeObj))->lalt;
 }

 bool TKeyEvent::getRalt() const {
   return ((key_event_t*)(this->nativeObj))->ralt;
 }

 bool TKeyEvent::getCtrl() const {
   return ((key_event_t*)(this->nativeObj))->ctrl;
 }

 bool TKeyEvent::getLctrl() const {
   return ((key_event_t*)(this->nativeObj))->lctrl;
 }

 bool TKeyEvent::getRctrl() const {
   return ((key_event_t*)(this->nativeObj))->rctrl;
 }

 bool TKeyEvent::getShift() const {
   return ((key_event_t*)(this->nativeObj))->shift;
 }

 bool TKeyEvent::getLshift() const {
   return ((key_event_t*)(this->nativeObj))->lshift;
 }

 bool TKeyEvent::getRshift() const {
   return ((key_event_t*)(this->nativeObj))->rshift;
 }

 bool TKeyEvent::getCmd() const {
   return ((key_event_t*)(this->nativeObj))->cmd;
 }

 bool TKeyEvent::getMenu() const {
   return ((key_event_t*)(this->nativeObj))->menu;
 }

 bool TKeyEvent::getCapslock() const {
   return ((key_event_t*)(this->nativeObj))->capslock;
 }

 TPointerEvent TPointerEvent::Cast(TEvent& event)  {
   return TPointerEvent(pointer_event_cast(((event_t*)(event.nativeObj))));
 }

 xy_t TPointerEvent::getX() const {
   return ((pointer_event_t*)(this->nativeObj))->x;
 }

 xy_t TPointerEvent::getY() const {
   return ((pointer_event_t*)(this->nativeObj))->y;
 }

 uint8_t TPointerEvent::getButton() const {
   return ((pointer_event_t*)(this->nativeObj))->button;
 }

 bool TPointerEvent::getPressed() const {
   return ((pointer_event_t*)(this->nativeObj))->pressed;
 }

 bool TPointerEvent::getAlt() const {
   return ((pointer_event_t*)(this->nativeObj))->alt;
 }

 bool TPointerEvent::getCtrl() const {
   return ((pointer_event_t*)(this->nativeObj))->ctrl;
 }

 bool TPointerEvent::getCmd() const {
   return ((pointer_event_t*)(this->nativeObj))->cmd;
 }

 bool TPointerEvent::getMenu() const {
   return ((pointer_event_t*)(this->nativeObj))->menu;
 }

 bool TPointerEvent::getShift() const {
   return ((pointer_event_t*)(this->nativeObj))->shift;
 }

 TOrientationEvent TOrientationEvent::Cast(TEvent& event)  {
   return TOrientationEvent(orientation_event_cast(((event_t*)(event.nativeObj))));
 }

 int32_t TOrientationEvent::getOrientation() const {
   return ((orientation_event_t*)(this->nativeObj))->orientation;
 }

 TWheelEvent TWheelEvent::Cast(TEvent& event)  {
   return TWheelEvent(wheel_event_cast(((event_t*)(event.nativeObj))));
 }

 int32_t TWheelEvent::getDy() const {
   return ((wheel_event_t*)(this->nativeObj))->dy;
 }

 bool TWheelEvent::getAlt() const {
   return ((wheel_event_t*)(this->nativeObj))->alt;
 }

 bool TWheelEvent::getCtrl() const {
   return ((wheel_event_t*)(this->nativeObj))->ctrl;
 }

 bool TWheelEvent::getShift() const {
   return ((wheel_event_t*)(this->nativeObj))->shift;
 }

 TWidget TAppBar::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TAppBar((widget_t*)(app_bar_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TAppBar TAppBar::Cast(TWidget& widget)  {
   return TAppBar(app_bar_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TButtonGroup::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TButtonGroup((widget_t*)(button_group_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TButtonGroup TButtonGroup::Cast(TWidget& widget)  {
   return TButtonGroup(button_group_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TButton::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TButton((widget_t*)(button_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TButton TButton::Cast(TWidget& widget)  {
   return TButton(button_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TButton::SetRepeat(int32_t repeat)  {
   return button_set_repeat(((widget_t*)(this->nativeObj)), repeat);
 }

 ret_t TButton::SetEnableLongPress(bool enable_long_press)  {
   return button_set_enable_long_press(((widget_t*)(this->nativeObj)), enable_long_press);
 }

 int32_t TButton::getRepeat() const {
   return ((button_t*)(this->nativeObj))->repeat;
 }

 bool TButton::getEnableLongPress() const {
   return ((button_t*)(this->nativeObj))->enable_long_press;
 }

 TWidget TCheckButton::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TCheckButton((widget_t*)(check_button_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TWidget TCheckButton::CreateRadio(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TCheckButton((widget_t*)(check_button_create_radio(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TCheckButton::SetValue(bool value)  {
   return check_button_set_value(((widget_t*)(this->nativeObj)), value);
 }

 TCheckButton TCheckButton::Cast(TWidget& widget)  {
   return TCheckButton(check_button_cast(((widget_t*)(widget.nativeObj))));
 }

 bool TCheckButton::getValue() const {
   return ((check_button_t*)(this->nativeObj))->value;
 }

 TWidget TClipView::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TClipView((widget_t*)(clip_view_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TClipView TClipView::Cast(TWidget& widget)  {
   return TClipView(clip_view_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TColorTile::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TColorTile((widget_t*)(color_tile_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TColorTile TColorTile::Cast(TWidget& widget)  {
   return TColorTile(color_tile_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TColorTile::SetBgColor(const char* color)  {
   return color_tile_set_bg_color(((widget_t*)(this->nativeObj)), color);
 }

 const char* TColorTile::getBgColor() const {
   return ((color_tile_t*)(this->nativeObj))->bg_color;
 }

 const char* TColorTile::getBorderColor() const {
   return ((color_tile_t*)(this->nativeObj))->border_color;
 }

 TWidget TColumn::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TColumn((widget_t*)(column_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TColumn TColumn::Cast(TWidget& widget)  {
   return TColumn(column_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TComboBoxItem::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TComboBoxItem((widget_t*)(combo_box_item_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TComboBoxItem TComboBoxItem::Cast(TWidget& widget)  {
   return TComboBoxItem(combo_box_item_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TComboBoxItem::SetChecked(bool checked)  {
   return combo_box_item_set_checked(((widget_t*)(this->nativeObj)), checked);
 }

 ret_t TComboBoxItem::SetValue(int32_t value)  {
   return combo_box_item_set_value(((widget_t*)(this->nativeObj)), value);
 }

 int32_t TComboBoxItem::getValue() const {
   return ((combo_box_item_t*)(this->nativeObj))->value;
 }

 bool TComboBoxItem::getChecked() const {
   return ((combo_box_item_t*)(this->nativeObj))->checked;
 }

 TWidget TComboBox::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TComboBox((widget_t*)(combo_box_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TComboBox TComboBox::Cast(TWidget& widget)  {
   return TComboBox(combo_box_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TComboBox::SetOpenWindow(const char* open_window)  {
   return combo_box_set_open_window(((widget_t*)(this->nativeObj)), open_window);
 }

 ret_t TComboBox::ResetOptions()  {
   return combo_box_reset_options(((widget_t*)(this->nativeObj)));
 }

 int32_t TComboBox::CountOptions()  {
    return combo_box_count_options(((widget_t*)(this->nativeObj)));
 }

 ret_t TComboBox::SetSelectedIndex(uint32_t index)  {
   return combo_box_set_selected_index(((widget_t*)(this->nativeObj)), index);
 }

 ret_t TComboBox::SetLocalizeOptions(bool localize_options)  {
   return combo_box_set_localize_options(((widget_t*)(this->nativeObj)), localize_options);
 }

 ret_t TComboBox::SetValue(int32_t value)  {
   return combo_box_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TComboBox::SetItemHeight(uint32_t item_height)  {
   return combo_box_set_item_height(((widget_t*)(this->nativeObj)), item_height);
 }

 ret_t TComboBox::AppendOption(int32_t value, const char* text)  {
   return combo_box_append_option(((widget_t*)(this->nativeObj)), value, text);
 }

 ret_t TComboBox::SetOptions(const char* options)  {
   return combo_box_set_options(((widget_t*)(this->nativeObj)), options);
 }

 int32_t TComboBox::GetValue()  {
    return combo_box_get_value(((widget_t*)(this->nativeObj)));
 }

 const char* TComboBox::GetTextValue()  {
    return combo_box_get_text(((widget_t*)(this->nativeObj)));
 }

 char* TComboBox::getOpenWindow() const {
   return ((combo_box_t*)(this->nativeObj))->open_window;
 }

 int32_t TComboBox::getSelectedIndex() const {
   return ((combo_box_t*)(this->nativeObj))->selected_index;
 }

 int32_t TComboBox::getValue() const {
   return ((combo_box_t*)(this->nativeObj))->value;
 }

 bool TComboBox::getLocalizeOptions() const {
   return ((combo_box_t*)(this->nativeObj))->localize_options;
 }

 char* TComboBox::getOptions() const {
   return ((combo_box_t*)(this->nativeObj))->options;
 }

 int32_t TComboBox::getItemHeight() const {
   return ((combo_box_t*)(this->nativeObj))->item_height;
 }

 TWidget TDialogClient::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TDialogClient((widget_t*)(dialog_client_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TDialogClient TDialogClient::Cast(TWidget& widget)  {
   return TDialogClient(dialog_client_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TDialogTitle::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TDialogTitle((widget_t*)(dialog_title_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TDialogTitle TDialogTitle::Cast(TWidget& widget)  {
   return TDialogTitle(dialog_title_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TDigitClock::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TDigitClock((widget_t*)(digit_clock_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TDigitClock TDigitClock::Cast(TWidget& widget)  {
   return TDigitClock(digit_clock_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TDigitClock::SetFormat(const char* format)  {
   return digit_clock_set_format(((widget_t*)(this->nativeObj)), format);
 }

 char* TDigitClock::getFormat() const {
   return ((digit_clock_t*)(this->nativeObj))->format;
 }

 TWidget TDragger::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TDragger((widget_t*)(dragger_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TDragger TDragger::Cast(TWidget& widget)  {
   return TDragger(dragger_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TDragger::SetRange(xy_t x_min, xy_t y_min, xy_t x_max, xy_t y_max)  {
   return dragger_set_range(((widget_t*)(this->nativeObj)), x_min, y_min, x_max, y_max);
 }

 xy_t TDragger::getXMin() const {
   return ((dragger_t*)(this->nativeObj))->x_min;
 }

 xy_t TDragger::getYMin() const {
   return ((dragger_t*)(this->nativeObj))->y_min;
 }

 xy_t TDragger::getXMax() const {
   return ((dragger_t*)(this->nativeObj))->x_max;
 }

 xy_t TDragger::getYMax() const {
   return ((dragger_t*)(this->nativeObj))->y_max;
 }

 TWidget TEdit::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TEdit((widget_t*)(edit_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TEdit TEdit::Cast(TWidget& widget)  {
   return TEdit(edit_cast(((widget_t*)(widget.nativeObj))));
 }

 int32_t TEdit::GetInt()  {
    return edit_get_int(((widget_t*)(this->nativeObj)));
 }

 double TEdit::GetDouble()  {
    return edit_get_double(((widget_t*)(this->nativeObj)));
 }

 ret_t TEdit::SetInt(int32_t value)  {
   return edit_set_int(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TEdit::SetDouble(double value)  {
   return edit_set_double(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TEdit::SetTextLimit(uint32_t min, uint32_t max)  {
   return edit_set_text_limit(((widget_t*)(this->nativeObj)), min, max);
 }

 ret_t TEdit::SetIntLimit(int32_t min, int32_t max, uint32_t step)  {
   return edit_set_int_limit(((widget_t*)(this->nativeObj)), min, max, step);
 }

 ret_t TEdit::SetFloatLimit(double min, double max, double step)  {
   return edit_set_float_limit(((widget_t*)(this->nativeObj)), min, max, step);
 }

 ret_t TEdit::SetReadonly(bool readonly)  {
   return edit_set_readonly(((widget_t*)(this->nativeObj)), readonly);
 }

 ret_t TEdit::SetAutoFix(bool auto_fix)  {
   return edit_set_auto_fix(((widget_t*)(this->nativeObj)), auto_fix);
 }

 ret_t TEdit::SetSelectNoneWhenFocused(bool select_none_when_focused)  {
   return edit_set_select_none_when_focused(((widget_t*)(this->nativeObj)), select_none_when_focused);
 }

 ret_t TEdit::SetOpenImWhenFocused(bool open_im_when_focused)  {
   return edit_set_open_im_when_focused(((widget_t*)(this->nativeObj)), open_im_when_focused);
 }

 ret_t TEdit::SetInputType(input_type_t type)  {
   return edit_set_input_type(((widget_t*)(this->nativeObj)), type);
 }

 ret_t TEdit::SetInputTips(char* tips)  {
   return edit_set_input_tips(((widget_t*)(this->nativeObj)), tips);
 }

 ret_t TEdit::SetPasswordVisible(bool password_visible)  {
   return edit_set_password_visible(((widget_t*)(this->nativeObj)), password_visible);
 }

 ret_t TEdit::SetFocus(bool focus)  {
   return edit_set_focus(((widget_t*)(this->nativeObj)), focus);
 }

 ret_t TEdit::SetCursor(uint32_t cursor)  {
   return edit_set_cursor(((widget_t*)(this->nativeObj)), cursor);
 }

 bool TEdit::getReadonly() const {
   return ((edit_t*)(this->nativeObj))->readonly;
 }

 bool TEdit::getPasswordVisible() const {
   return ((edit_t*)(this->nativeObj))->password_visible;
 }

 bool TEdit::getAutoFix() const {
   return ((edit_t*)(this->nativeObj))->auto_fix;
 }

 bool TEdit::getSelectNoneWhenFocused() const {
   return ((edit_t*)(this->nativeObj))->select_none_when_focused;
 }

 bool TEdit::getOpenImWhenFocused() const {
   return ((edit_t*)(this->nativeObj))->open_im_when_focused;
 }

 char* TEdit::getTips() const {
   return ((edit_t*)(this->nativeObj))->tips;
 }

 input_type_t TEdit::getInputType() const {
   return ((edit_t*)(this->nativeObj))->input_type;
 }

 double TEdit::getMin() const {
   return ((edit_t*)(this->nativeObj))->min;
 }

 double TEdit::getMax() const {
   return ((edit_t*)(this->nativeObj))->max;
 }

 double TEdit::getStep() const {
   return ((edit_t*)(this->nativeObj))->step;
 }

 TWidget TGridItem::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TGridItem((widget_t*)(grid_item_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TGridItem TGridItem::Cast(TWidget& widget)  {
   return TGridItem(grid_item_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TGrid::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TGrid((widget_t*)(grid_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TGrid TGrid::Cast(TWidget& widget)  {
   return TGrid(grid_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TGroupBox::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TGroupBox((widget_t*)(group_box_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TGroupBox TGroupBox::Cast(TWidget& widget)  {
   return TGroupBox(group_box_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TLabel::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TLabel((widget_t*)(label_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TLabel::SetLength(int32_t length)  {
   return label_set_length(((widget_t*)(this->nativeObj)), length);
 }

 ret_t TLabel::ResizeToContent(uint32_t min_w, uint32_t max_w, uint32_t min_h, uint32_t max_h)  {
   return label_resize_to_content(((widget_t*)(this->nativeObj)), min_w, max_w, min_h, max_h);
 }

 TLabel TLabel::Cast(TWidget& widget)  {
   return TLabel(label_cast(((widget_t*)(widget.nativeObj))));
 }

 int32_t TLabel::getLength() const {
   return ((label_t*)(this->nativeObj))->length;
 }

 TWidget TOverlay::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TOverlay((widget_t*)(overlay_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TOverlay TOverlay::Cast(TWidget& widget)  {
   return TOverlay(overlay_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TPages::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TPages((widget_t*)(pages_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TPages TPages::Cast(TWidget& widget)  {
   return TPages(pages_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TPages::SetActive(uint32_t index)  {
   return pages_set_active(((widget_t*)(this->nativeObj)), index);
 }

 ret_t TPages::SetActiveByName(char* name)  {
   return pages_set_active_by_name(((widget_t*)(this->nativeObj)), name);
 }

 uint32_t TPages::getActive() const {
   return ((pages_t*)(this->nativeObj))->active;
 }

 TWidget TProgressBar::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TProgressBar((widget_t*)(progress_bar_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TProgressBar TProgressBar::Cast(TWidget& widget)  {
   return TProgressBar(progress_bar_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TProgressBar::SetValue(float_t value)  {
   return progress_bar_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TProgressBar::SetMax(uint32_t max)  {
   return progress_bar_set_max(((widget_t*)(this->nativeObj)), max);
 }

 ret_t TProgressBar::SetVertical(bool vertical)  {
   return progress_bar_set_vertical(((widget_t*)(this->nativeObj)), vertical);
 }

 ret_t TProgressBar::SetShowText(bool show_text)  {
   return progress_bar_set_show_text(((widget_t*)(this->nativeObj)), show_text);
 }

 uint32_t TProgressBar::GetPercent()  {
    return progress_bar_get_percent(((widget_t*)(this->nativeObj)));
 }

 float_t TProgressBar::getValue() const {
   return ((progress_bar_t*)(this->nativeObj))->value;
 }

 float_t TProgressBar::getMax() const {
   return ((progress_bar_t*)(this->nativeObj))->max;
 }

 bool TProgressBar::getVertical() const {
   return ((progress_bar_t*)(this->nativeObj))->vertical;
 }

 bool TProgressBar::getShowText() const {
   return ((progress_bar_t*)(this->nativeObj))->show_text;
 }

 TWidget TRow::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TRow((widget_t*)(row_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TRow TRow::Cast(TWidget& widget)  {
   return TRow(row_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TSlider::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSlider((widget_t*)(slider_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TSlider TSlider::Cast(TWidget& widget)  {
   return TSlider(slider_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TSlider::SetValue(double value)  {
   return slider_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TSlider::SetMin(double min)  {
   return slider_set_min(((widget_t*)(this->nativeObj)), min);
 }

 ret_t TSlider::SetMax(double max)  {
   return slider_set_max(((widget_t*)(this->nativeObj)), max);
 }

 ret_t TSlider::SetStep(double step)  {
   return slider_set_step(((widget_t*)(this->nativeObj)), step);
 }

 ret_t TSlider::SetBarSize(uint32_t bar_size)  {
   return slider_set_bar_size(((widget_t*)(this->nativeObj)), bar_size);
 }

 ret_t TSlider::SetVertical(bool vertical)  {
   return slider_set_vertical(((widget_t*)(this->nativeObj)), vertical);
 }

 double TSlider::getValue() const {
   return ((slider_t*)(this->nativeObj))->value;
 }

 double TSlider::getMin() const {
   return ((slider_t*)(this->nativeObj))->min;
 }

 double TSlider::getMax() const {
   return ((slider_t*)(this->nativeObj))->max;
 }

 double TSlider::getStep() const {
   return ((slider_t*)(this->nativeObj))->step;
 }

 bool TSlider::getVertical() const {
   return ((slider_t*)(this->nativeObj))->vertical;
 }

 uint32_t TSlider::getBarSize() const {
   return ((slider_t*)(this->nativeObj))->bar_size;
 }

 uint32_t TSlider::getDraggerSize() const {
   return ((slider_t*)(this->nativeObj))->dragger_size;
 }

 bool TSlider::getDraggerAdaptToIcon() const {
   return ((slider_t*)(this->nativeObj))->dragger_adapt_to_icon;
 }

 bool TSlider::getSlideWithBar() const {
   return ((slider_t*)(this->nativeObj))->slide_with_bar;
 }

 TWidget TTabButtonGroup::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TTabButtonGroup((widget_t*)(tab_button_group_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TTabButtonGroup::SetCompact(bool compact)  {
   return tab_button_group_set_compact(((widget_t*)(this->nativeObj)), compact);
 }

 ret_t TTabButtonGroup::SetScrollable(bool scrollable)  {
   return tab_button_group_set_scrollable(((widget_t*)(this->nativeObj)), scrollable);
 }

 TTabButtonGroup TTabButtonGroup::Cast(TWidget& widget)  {
   return TTabButtonGroup(tab_button_group_cast(((widget_t*)(widget.nativeObj))));
 }

 bool TTabButtonGroup::getCompact() const {
   return ((tab_button_group_t*)(this->nativeObj))->compact;
 }

 bool TTabButtonGroup::getScrollable() const {
   return ((tab_button_group_t*)(this->nativeObj))->scrollable;
 }

 TWidget TTabButton::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TTabButton((widget_t*)(tab_button_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TTabButton TTabButton::Cast(TWidget& widget)  {
   return TTabButton(tab_button_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TTabButton::SetValue(uint32_t value)  {
   return tab_button_set_value(((widget_t*)(this->nativeObj)), value);
 }

 ret_t TTabButton::SetIcon(char* name)  {
   return tab_button_set_icon(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TTabButton::SetActiveIcon(char* name)  {
   return tab_button_set_active_icon(((widget_t*)(this->nativeObj)), name);
 }

 ret_t TTabButton::SetLoadUi(char* name)  {
   return tab_button_set_load_ui(((widget_t*)(this->nativeObj)), name);
 }

 bool TTabButton::getValue() const {
   return ((tab_button_t*)(this->nativeObj))->value;
 }

 char* TTabButton::getLoadUi() const {
   return ((tab_button_t*)(this->nativeObj))->load_ui;
 }

 char* TTabButton::getActiveIcon() const {
   return ((tab_button_t*)(this->nativeObj))->active_icon;
 }

 char* TTabButton::getIcon() const {
   return ((tab_button_t*)(this->nativeObj))->icon;
 }

 TWidget TTabControl::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TTabControl((widget_t*)(tab_control_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TTabControl TTabControl::Cast(TWidget& widget)  {
   return TTabControl(tab_control_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TView::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TView((widget_t*)(view_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TView TView::Cast(TWidget& widget)  {
   return TView(view_cast(((widget_t*)(widget.nativeObj))));
 }

 TIdleInfo TIdleInfo::Cast(TIdleInfo& idle)  {
   return TIdleInfo(idle_info_cast(((idle_info_t*)(idle.nativeObj))));
 }

 void* TIdleInfo::getCtx() const {
   return ((idle_info_t*)(this->nativeObj))->ctx;
 }

 uint32_t TIdleInfo::getId() const {
   return ((idle_info_t*)(this->nativeObj))->id;
 }

 TObject TObjectArray::Create()  {
   return TObjectArray((emitter_t*)(object_array_create()));
 }

 ret_t TObjectArray::Unref()  {
   return object_array_unref(((object_t*)(this->nativeObj)));
 }

 ret_t TObjectArray::ClearProps()  {
   return object_array_clear_props(((object_t*)(this->nativeObj)));
 }

 uint32_t TObjectArray::getPropsSize() const {
   return ((object_array_t*)(this->nativeObj))->props_size;
 }

 TWidget TGifImage::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TGifImage((widget_t*)(gif_image_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TGifImage TGifImage::Cast(TWidget& widget)  {
   return TGifImage(gif_image_cast(((widget_t*)(widget.nativeObj))));
 }

 TObject TObjectDefault::Create()  {
   return TObjectDefault((emitter_t*)(object_default_create()));
 }

 ret_t TObjectDefault::Unref()  {
   return object_default_unref(((object_t*)(this->nativeObj)));
 }

 ret_t TObjectDefault::ClearProps()  {
   return object_default_clear_props(((object_t*)(this->nativeObj)));
 }

 uint32_t TObjectDefault::getPropsSize() const {
   return ((object_default_t*)(this->nativeObj))->props_size;
 }

 TWidget TImage::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TImage((widget_t*)(image_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TImage::SetDrawType(image_draw_type_t draw_type)  {
   return image_set_draw_type(((widget_t*)(this->nativeObj)), draw_type);
 }

 TImage TImage::Cast(TWidget& widget)  {
   return TImage(image_cast(((widget_t*)(widget.nativeObj))));
 }

 image_draw_type_t TImage::getDrawType() const {
   return ((image_t*)(this->nativeObj))->draw_type;
 }

 TWidget TComboBoxEx::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TComboBoxEx((widget_t*)(combo_box_ex_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TWidget TPopup::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TPopup((widget_t*)(popup_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TPopup TPopup::Cast(TWidget& widget)  {
   return TPopup(popup_cast(((widget_t*)(widget.nativeObj))));
 }

 ret_t TPopup::SetCloseWhenClick(bool close_when_click)  {
   return popup_set_close_when_click(((widget_t*)(this->nativeObj)), close_when_click);
 }

 ret_t TPopup::SetCloseWhenClickOutside(bool close_when_click_outside)  {
   return popup_set_close_when_click_outside(((widget_t*)(this->nativeObj)), close_when_click_outside);
 }

 bool TPopup::getCloseWhenClick() const {
   return ((popup_t*)(this->nativeObj))->close_when_click;
 }

 bool TPopup::getCloseWhenClickOutside() const {
   return ((popup_t*)(this->nativeObj))->close_when_click_outside;
 }

 TWidget TSvgImage::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSvgImage((widget_t*)(svg_image_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 ret_t TSvgImage::SetImage(char* name)  {
   return svg_image_set_image(((widget_t*)(this->nativeObj)), name);
 }

 TSvgImage TSvgImage::Cast(TWidget& widget)  {
   return TSvgImage(svg_image_cast(((widget_t*)(widget.nativeObj))));
 }

 TTimerInfo TTimerInfo::Cast(TTimerInfo& timer)  {
   return TTimerInfo(timer_info_cast(((timer_info_t*)(timer.nativeObj))));
 }

 void* TTimerInfo::getCtx() const {
   return ((timer_info_t*)(this->nativeObj))->ctx;
 }

 uint32_t TTimerInfo::getId() const {
   return ((timer_info_t*)(this->nativeObj))->id;
 }

 uint64_t TTimerInfo::getNow() const {
   return ((timer_info_t*)(this->nativeObj))->now;
 }

 TWidget TSpinBox::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSpinBox((widget_t*)(spin_box_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TSpinBox TSpinBox::Cast(TWidget& widget)  {
   return TSpinBox(spin_box_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TSystemBar::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TSystemBar((widget_t*)(system_bar_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TSystemBar TSystemBar::Cast(TWidget& widget)  {
   return TSystemBar(system_bar_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TWindow::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TWindow((widget_t*)(window_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TWidget TWindow::CreateDefault()  {
   return TWindow((widget_t*)(window_create_default()));
 }

 ret_t TWindow::SetFullscreen(bool fullscreen)  {
   return window_set_fullscreen(((widget_t*)(this->nativeObj)), fullscreen);
 }

 TWidget TWindow::Open(char* name)  {
   return TWindow((widget_t*)(window_open(name)));
 }

 TWidget TWindow::OpenAndClose(char* name, TWidget& to_close)  {
   return TWindow((widget_t*)(window_open_and_close(name, ((widget_t*)(to_close.nativeObj)))));
 }

 ret_t TWindow::Close()  {
   return window_close(((widget_t*)(this->nativeObj)));
 }

 ret_t TWindow::CloseForce()  {
   return window_close_force(((widget_t*)(this->nativeObj)));
 }

 TWindow TWindow::Cast(TWidget& widget)  {
   return TWindow(window_cast(((widget_t*)(widget.nativeObj))));
 }

 bool TWindow::getFullscreen() const {
   return ((window_t*)(this->nativeObj))->fullscreen;
 }

 TWidget TKeyboard::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TKeyboard((widget_t*)(keyboard_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TKeyboard TKeyboard::Cast(TWidget& widget)  {
   return TKeyboard(keyboard_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TDialog::Create(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TDialog((widget_t*)(dialog_create(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TWidget TDialog::CreateSimple(TWidget& parent, xy_t x, xy_t y, wh_t w, wh_t h)  {
   return TDialog((widget_t*)(dialog_create_simple(((widget_t*)(parent.nativeObj)), x, y, w, h)));
 }

 TDialog TDialog::Cast(TWidget& widget)  {
   return TDialog(dialog_cast(((widget_t*)(widget.nativeObj))));
 }

 TWidget TDialog::GetTitle()  {
   return TWidget((widget_t*)(dialog_get_title(((widget_t*)(this->nativeObj)))));
 }

 TWidget TDialog::GetClient()  {
   return TWidget((widget_t*)(dialog_get_client(((widget_t*)(this->nativeObj)))));
 }

 TWidget TDialog::Open(const char* name)  {
   return TDialog((widget_t*)(dialog_open(name)));
 }

 ret_t TDialog::SetTitle(char* title)  {
   return dialog_set_title(((widget_t*)(this->nativeObj)), title);
 }

 dialog_quit_code_t TDialog::Modal()  {
   return dialog_modal(((widget_t*)(this->nativeObj)));
 }

 ret_t TDialog::Quit(uint32_t code)  {
   return dialog_quit(((widget_t*)(this->nativeObj)), code);
 }

 bool TDialog::IsQuited()  {
    return dialog_is_quited(((widget_t*)(this->nativeObj)));
 }

 bool TDialog::IsModal()  {
    return dialog_is_modal(((widget_t*)(this->nativeObj)));
 }

 ret_t TDialog::Toast(const char* text, uint32_t duration)  {
   return dialog_toast(text, duration);
 }

 ret_t TDialog::Info(const char* title, const char* text)  {
   return dialog_info(title, text);
 }

 ret_t TDialog::Warn(const char* title, const char* text)  {
   return dialog_warn(title, text);
 }

 ret_t TDialog::Confirm(const char* title, const char* text)  {
   return dialog_confirm(title, text);
 }

 const char* TDialog::getHighlight() const {
   return ((dialog_t*)(this->nativeObj))->highlight;
 }
