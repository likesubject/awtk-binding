[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TBitmapFlag](_awtk_.tbitmapflag.md)

# Enumeration: TBitmapFlag

位图标志常量定义。

## Index

### Enumeration members

* [CHANGED](_awtk_.tbitmapflag.md#changed)
* [IMMUTABLE](_awtk_.tbitmapflag.md#immutable)
* [NONE](_awtk_.tbitmapflag.md#none)
* [OPAQUE](_awtk_.tbitmapflag.md#opaque)
* [PREMULTI_ALPHA](_awtk_.tbitmapflag.md#premulti_alpha)
* [TEXTURE](_awtk_.tbitmapflag.md#texture)

## Enumeration members

###  CHANGED

• **CHANGED**: =  BITMAP_FLAG_CHANGED()

*Defined in [awtk.ts:5378](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L5378)*

如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。

___

###  IMMUTABLE

• **IMMUTABLE**: =  BITMAP_FLAG_IMMUTABLE()

*Defined in [awtk.ts:5366](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L5366)*

图片内容不会变化。

___

###  NONE

• **NONE**: =  BITMAP_FLAG_NONE()

*Defined in [awtk.ts:5354](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L5354)*

无特殊标志。

___

###  OPAQUE

• **OPAQUE**: =  BITMAP_FLAG_OPAQUE()

*Defined in [awtk.ts:5360](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L5360)*

不透明图片。

___

###  PREMULTI_ALPHA

• **PREMULTI_ALPHA**: =  BITMAP_FLAG_PREMULTI_ALPHA()

*Defined in [awtk.ts:5384](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L5384)*

预乘alpha。

___

###  TEXTURE

• **TEXTURE**: =  BITMAP_FLAG_TEXTURE()

*Defined in [awtk.ts:5372](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L5372)*

OpenGL Texture, bitmap的id是有效的texture id。
