[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TInputMethod](_awtk_.tinputmethod.md)

# Class: TInputMethod

输入法接口。
常见的实现方式有以下几种：
* 空实现。用于不需要输入法的嵌入式平台。
* 缺省实现。用于需要输入法的嵌入式平台。
* 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。
输入类型请参考：[input\_type](input_type_t.md)

## Hierarchy

* **TInputMethod**

## Index

### Constructors

* [constructor](_awtk_.tinputmethod.md#constructor)

### Properties

* [nativeObj](_awtk_.tinputmethod.md#nativeobj)

### Methods

* [commitText](_awtk_.tinputmethod.md#committext)
* [dispatchKey](_awtk_.tinputmethod.md#dispatchkey)
* [instance](_awtk_.tinputmethod.md#static-instance)

## Constructors

###  constructor

\+ **new TInputMethod**(`nativeObj`: any): *[TInputMethod](_awtk_.tinputmethod.md)*

*Defined in [awtk.ts:3889](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L3889)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TInputMethod](_awtk_.tinputmethod.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:3889](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L3889)*

## Methods

###  commitText

▸ **commitText**(`text`: string): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3904](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L3904)*

提交输入文本。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`text` | string | 文本。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  dispatchKey

▸ **dispatchKey**(`key`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3918](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L3918)*

提交按键。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`key` | number | 键值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` instance

▸ **instance**(): *[TInputMethod](_awtk_.tinputmethod.md)*

*Defined in [awtk.ts:3930](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L3930)*

获取全局输入法对象。

**Returns:** *[TInputMethod](_awtk_.tinputmethod.md)*

成功返回输入法对象，失败返回NULL。