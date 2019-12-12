[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TObjectDefault](_awtk_.tobjectdefault.md)

# Class: TObjectDefault

对象接口的缺省实现。
内部使用有序数组保存所有属性，可以快速查找指定名称的属性。

## Hierarchy

  ↳ [TObject](_awtk_.tobject.md)

  ↳ **TObjectDefault**

## Index

### Constructors

* [constructor](_awtk_.tobjectdefault.md#constructor)

### Properties

* [nativeObj](_awtk_.tobjectdefault.md#nativeobj)

### Accessors

* [name](_awtk_.tobjectdefault.md#name)
* [propsSize](_awtk_.tobjectdefault.md#propssize)
* [refCount](_awtk_.tobjectdefault.md#refcount)

### Methods

* [canExec](_awtk_.tobjectdefault.md#canexec)
* [clearProps](_awtk_.tobjectdefault.md#clearprops)
* [compare](_awtk_.tobjectdefault.md#compare)
* [copyProp](_awtk_.tobjectdefault.md#copyprop)
* [destroy](_awtk_.tobjectdefault.md#destroy)
* [disable](_awtk_.tobjectdefault.md#disable)
* [dispatch](_awtk_.tobjectdefault.md#dispatch)
* [dispatchSimpleEvent](_awtk_.tobjectdefault.md#dispatchsimpleevent)
* [enable](_awtk_.tobjectdefault.md#enable)
* [eval](_awtk_.tobjectdefault.md#eval)
* [exec](_awtk_.tobjectdefault.md#exec)
* [getDesc](_awtk_.tobjectdefault.md#getdesc)
* [getProp](_awtk_.tobjectdefault.md#getprop)
* [getPropBool](_awtk_.tobjectdefault.md#getpropbool)
* [getPropBoolByPath](_awtk_.tobjectdefault.md#getpropboolbypath)
* [getPropFloat](_awtk_.tobjectdefault.md#getpropfloat)
* [getPropFloatByPath](_awtk_.tobjectdefault.md#getpropfloatbypath)
* [getPropInt](_awtk_.tobjectdefault.md#getpropint)
* [getPropIntByPath](_awtk_.tobjectdefault.md#getpropintbypath)
* [getPropObject](_awtk_.tobjectdefault.md#getpropobject)
* [getPropObjectByPath](_awtk_.tobjectdefault.md#getpropobjectbypath)
* [getPropPointer](_awtk_.tobjectdefault.md#getproppointer)
* [getPropPointerByPath](_awtk_.tobjectdefault.md#getproppointerbypath)
* [getPropStr](_awtk_.tobjectdefault.md#getpropstr)
* [getPropStrByPath](_awtk_.tobjectdefault.md#getpropstrbypath)
* [getSize](_awtk_.tobjectdefault.md#getsize)
* [getType](_awtk_.tobjectdefault.md#gettype)
* [hasProp](_awtk_.tobjectdefault.md#hasprop)
* [isCollection](_awtk_.tobjectdefault.md#iscollection)
* [notifyChanged](_awtk_.tobjectdefault.md#notifychanged)
* [off](_awtk_.tobjectdefault.md#off)
* [on](_awtk_.tobjectdefault.md#on)
* [removeProp](_awtk_.tobjectdefault.md#removeprop)
* [setName](_awtk_.tobjectdefault.md#setname)
* [setProp](_awtk_.tobjectdefault.md#setprop)
* [setPropBool](_awtk_.tobjectdefault.md#setpropbool)
* [setPropFloat](_awtk_.tobjectdefault.md#setpropfloat)
* [setPropInt](_awtk_.tobjectdefault.md#setpropint)
* [setPropObject](_awtk_.tobjectdefault.md#setpropobject)
* [setPropStr](_awtk_.tobjectdefault.md#setpropstr)
* [size](_awtk_.tobjectdefault.md#size)
* [unref](_awtk_.tobjectdefault.md#unref)
* [cast](_awtk_.tobjectdefault.md#static-cast)
* [create](_awtk_.tobjectdefault.md#static-create)
* [ref](_awtk_.tobjectdefault.md#static-ref)

## Constructors

###  constructor

\+ **new TObjectDefault**(`nativeObj`: any): *[TObjectDefault](_awtk_.tobjectdefault.md)*

*Overrides [TObject](_awtk_.tobject.md).[constructor](_awtk_.tobject.md#constructor)*

*Defined in [awtk.ts:20720](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L20720)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TObjectDefault](_awtk_.tobjectdefault.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TObject](_awtk_.tobject.md).[nativeObj](_awtk_.tobject.md#nativeobj)*

*Defined in [awtk.ts:20720](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L20720)*

## Accessors

###  name

• **get name**(): *string*

*Inherited from [TObject](_awtk_.tobject.md).[name](_awtk_.tobject.md#name)*

*Defined in [awtk.ts:16130](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16130)*

对象的名称。

**Returns:** *string*

• **set name**(`v`: string): *void*

*Inherited from [TObject](_awtk_.tobject.md).[name](_awtk_.tobject.md#name)*

*Defined in [awtk.ts:16120](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16120)*

对象的名称。

**Parameters:**

Name | Type |
------ | ------ |
`v` | string |

**Returns:** *void*

___

###  propsSize

• **get propsSize**(): *number*

*Defined in [awtk.ts:20769](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L20769)*

属性个数。

**Returns:** *number*

___

###  refCount

• **get refCount**(): *number*

*Inherited from [TObject](_awtk_.tobject.md).[refCount](_awtk_.tobject.md#refcount)*

*Defined in [awtk.ts:16116](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16116)*

引用计数。

**Returns:** *number*

## Methods

###  canExec

▸ **canExec**(`name`: string, `args`: string): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[canExec](_awtk_.tobject.md#canexec)*

*Defined in [awtk.ts:15991](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15991)*

检查是否可以执行指定的命令。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 命令的名称。 |
`args` | string | 命令的参数。  |

**Returns:** *boolean*

返回TRUE表示可以执行，否则表示不可以执行。

___

###  clearProps

▸ **clearProps**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:20759](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L20759)*

清除全部属性。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  compare

▸ **compare**(`other`: [TObject](_awtk_.tobject.md)): *number*

*Inherited from [TObject](_awtk_.tobject.md).[compare](_awtk_.tobject.md#compare)*

*Defined in [awtk.ts:15726](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15726)*

比较两个对象。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`other` | [TObject](_awtk_.tobject.md) | 比较的object对象。  |

**Returns:** *number*

返回比较结果。

___

###  copyProp

▸ **copyProp**(`src`: [TObject](_awtk_.tobject.md), `name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[copyProp](_awtk_.tobject.md#copyprop)*

*Defined in [awtk.ts:15947](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15947)*

拷贝指定的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`src` | [TObject](_awtk_.tobject.md) | 源对象。 |
`name` | string | 属性的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[destroy](_awtk_.temitter.md#destroy)*

*Defined in [awtk.ts:10666](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10666)*

销毁。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  disable

▸ **disable**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[disable](_awtk_.temitter.md#disable)*

*Defined in [awtk.ts:10640](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10640)*

禁用。
禁用后emitter_dispatch无效，但可以注册和注销。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  dispatch

▸ **dispatch**(`e`: [TEvent](_awtk_.tevent.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[dispatch](_awtk_.temitter.md#dispatch)*

*Defined in [awtk.ts:10567](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10567)*

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`e` | [TEvent](_awtk_.tevent.md) | 事件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

___

###  dispatchSimpleEvent

▸ **dispatchSimpleEvent**(`type`: [TEventType](../enums/_awtk_.teventtype.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[dispatchSimpleEvent](_awtk_.temitter.md#dispatchsimpleevent)*

*Defined in [awtk.ts:10583](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10583)*

分发事件。
对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TEventType](../enums/_awtk_.teventtype.md) | 事件类型。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

___

###  enable

▸ **enable**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[enable](_awtk_.temitter.md#enable)*

*Defined in [awtk.ts:10626](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10626)*

启用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  eval

▸ **eval**(`expr`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[eval](_awtk_.tobject.md#eval)*

*Defined in [awtk.ts:15976](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15976)*

计算一个表达式，表达式中引用的变量从prop中获取。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`expr` | string | 表达式。 |
`v` | [TValue](_awtk_.tvalue.md) | 返回计算结果。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  exec

▸ **exec**(`name`: string, `args`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[exec](_awtk_.tobject.md#exec)*

*Defined in [awtk.ts:16006](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16006)*

执行指定的命令。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 命令的名称。 |
`args` | string | 命令的参数。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getDesc

▸ **getDesc**(): *string*

*Inherited from [TObject](_awtk_.tobject.md).[getDesc](_awtk_.tobject.md#getdesc)*

*Defined in [awtk.ts:15672](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15672)*

获取对象的描述信息。

**Returns:** *string*

返回对象的描述信息。

___

###  getProp

▸ **getProp**(`name`: string, `v`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[getProp](_awtk_.tobject.md#getprop)*

*Defined in [awtk.ts:15741](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15741)*

获取指定属性的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`v` | [TValue](_awtk_.tvalue.md) | 返回属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  getPropBool

▸ **getPropBool**(`name`: string, `defval`: boolean): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[getPropBool](_awtk_.tobject.md#getpropbool)*

*Defined in [awtk.ts:15813](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15813)*

获取指定属性的bool类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | boolean | 缺省值。  |

**Returns:** *boolean*

返回指定属性的bool类型的值。

___

###  getPropBoolByPath

▸ **getPropBoolByPath**(`path`: string, `defval`: boolean): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[getPropBoolByPath](_awtk_.tobject.md#getpropboolbypath)*

*Defined in [awtk.ts:16091](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16091)*

获取指定属性的bool类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。 |
`defval` | boolean | 缺省值。  |

**Returns:** *boolean*

返回指定属性的bool类型的值。

___

###  getPropFloat

▸ **getPropFloat**(`name`: string, `defval`: number): *number*

*Inherited from [TObject](_awtk_.tobject.md).[getPropFloat](_awtk_.tobject.md#getpropfloat)*

*Defined in [awtk.ts:15828](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15828)*

获取指定属性的浮点数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的浮点数类型的值。

___

###  getPropFloatByPath

▸ **getPropFloatByPath**(`path`: string, `defval`: number): *number*

*Inherited from [TObject](_awtk_.tobject.md).[getPropFloatByPath](_awtk_.tobject.md#getpropfloatbypath)*

*Defined in [awtk.ts:16106](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16106)*

获取指定属性的浮点数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的浮点数类型的值。

___

###  getPropInt

▸ **getPropInt**(`name`: string, `defval`: number): *number*

*Inherited from [TObject](_awtk_.tobject.md).[getPropInt](_awtk_.tobject.md#getpropint)*

*Defined in [awtk.ts:15798](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15798)*

获取指定属性的整数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的整数类型的值。

___

###  getPropIntByPath

▸ **getPropIntByPath**(`path`: string, `defval`: number): *number*

*Inherited from [TObject](_awtk_.tobject.md).[getPropIntByPath](_awtk_.tobject.md#getpropintbypath)*

*Defined in [awtk.ts:16076](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16076)*

获取指定属性的整数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。 |
`defval` | number | 缺省值。  |

**Returns:** *number*

返回指定属性的整数类型的值。

___

###  getPropObject

▸ **getPropObject**(`name`: string): *[TObject](_awtk_.tobject.md)*

*Inherited from [TObject](_awtk_.tobject.md).[getPropObject](_awtk_.tobject.md#getpropobject)*

*Defined in [awtk.ts:15783](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15783)*

获取指定属性的object类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回指定属性的object类型的值。

___

###  getPropObjectByPath

▸ **getPropObjectByPath**(`path`: string): *[TObject](_awtk_.tobject.md)*

*Inherited from [TObject](_awtk_.tobject.md).[getPropObjectByPath](_awtk_.tobject.md#getpropobjectbypath)*

*Defined in [awtk.ts:16061](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16061)*

获取指定属性的object类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回指定属性的object类型的值。

___

###  getPropPointer

▸ **getPropPointer**(`name`: string): *any*

*Inherited from [TObject](_awtk_.tobject.md).[getPropPointer](_awtk_.tobject.md#getproppointer)*

*Defined in [awtk.ts:15769](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15769)*

获取指定属性的指针类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *any*

返回指定属性的指针类型的值。

___

###  getPropPointerByPath

▸ **getPropPointerByPath**(`path`: string): *any*

*Inherited from [TObject](_awtk_.tobject.md).[getPropPointerByPath](_awtk_.tobject.md#getproppointerbypath)*

*Defined in [awtk.ts:16047](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16047)*

获取指定属性的指针类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。  |

**Returns:** *any*

返回指定属性的指针类型的值。

___

###  getPropStr

▸ **getPropStr**(`name`: string): *string*

*Inherited from [TObject](_awtk_.tobject.md).[getPropStr](_awtk_.tobject.md#getpropstr)*

*Defined in [awtk.ts:15755](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15755)*

获取指定属性的字符串类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *string*

返回指定属性的字符串类型的值。

___

###  getPropStrByPath

▸ **getPropStrByPath**(`path`: string): *string*

*Inherited from [TObject](_awtk_.tobject.md).[getPropStrByPath](_awtk_.tobject.md#getpropstrbypath)*

*Defined in [awtk.ts:16033](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16033)*

获取指定属性的字符串类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`path` | string | 属性的path。  |

**Returns:** *string*

返回指定属性的字符串类型的值。

___

###  getSize

▸ **getSize**(): *number*

*Inherited from [TObject](_awtk_.tobject.md).[getSize](_awtk_.tobject.md#getsize)*

*Defined in [awtk.ts:15685](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15685)*

获取对象占用内存的大小。

**Returns:** *number*

返回对象占用内存的大小。

___

###  getType

▸ **getType**(): *string*

*Inherited from [TObject](_awtk_.tobject.md).[getType](_awtk_.tobject.md#gettype)*

*Defined in [awtk.ts:15659](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15659)*

获取对象的类型名称。

**Returns:** *string*

返回对象的类型名称。

___

###  hasProp

▸ **hasProp**(`name`: string): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[hasProp](_awtk_.tobject.md#hasprop)*

*Defined in [awtk.ts:15961](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15961)*

检查是否存在指定的属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *boolean*

返回TRUE表示存在，否则表示不存在。

___

###  isCollection

▸ **isCollection**(): *boolean*

*Inherited from [TObject](_awtk_.tobject.md).[isCollection](_awtk_.tobject.md#iscollection)*

*Defined in [awtk.ts:15698](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15698)*

判断对象是否是集合。

**Returns:** *boolean*

返回TRUE表示是集合，否则不是。

___

###  notifyChanged

▸ **notifyChanged**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[notifyChanged](_awtk_.tobject.md#notifychanged)*

*Defined in [awtk.ts:16019](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L16019)*

触发EVT_PROPS_CHANGED事件。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  off

▸ **off**(`id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[off](_awtk_.temitter.md#off)*

*Defined in [awtk.ts:10613](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10613)*

注销指定事件的处理函数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`id` | number | emitter_on返回的ID。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  on

▸ **on**(`type`: [TEventType](../enums/_awtk_.teventtype.md), `on_event`: Function, `ctx`: any): *number*

*Inherited from [TEmitter](_awtk_.temitter.md).[on](_awtk_.temitter.md#on)*

*Defined in [awtk.ts:10599](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10599)*

注册指定事件的处理函数。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TEventType](../enums/_awtk_.teventtype.md) | 事件类型。 |
`on_event` | Function | 事件处理函数。 |
`ctx` | any | 事件处理函数上下文。  |

**Returns:** *number*

返回id，用于emitter_off。

___

###  removeProp

▸ **removeProp**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[removeProp](_awtk_.tobject.md#removeprop)*

*Defined in [awtk.ts:15842](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15842)*

删除指定属性。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setName

▸ **setName**(`name`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[setName](_awtk_.tobject.md#setname)*

*Defined in [awtk.ts:15712](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15712)*

设置对象的名称。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 对象的名称。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setProp

▸ **setProp**(`name`: string, `value`: [TValue](_awtk_.tvalue.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[setProp](_awtk_.tobject.md#setprop)*

*Defined in [awtk.ts:15857](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15857)*

设置指定属性的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | [TValue](_awtk_.tvalue.md) | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropBool

▸ **setPropBool**(`name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[setPropBool](_awtk_.tobject.md#setpropbool)*

*Defined in [awtk.ts:15917](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15917)*

设置指定属性的bool类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | any | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropFloat

▸ **setPropFloat**(`name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[setPropFloat](_awtk_.tobject.md#setpropfloat)*

*Defined in [awtk.ts:15932](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15932)*

设置指定属性的浮点数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | any | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropInt

▸ **setPropInt**(`name`: string, `value`: any): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[setPropInt](_awtk_.tobject.md#setpropint)*

*Defined in [awtk.ts:15902](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15902)*

设置指定属性的整数类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | any | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropObject

▸ **setPropObject**(`name`: string, `value`: [TObject](_awtk_.tobject.md)): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[setPropObject](_awtk_.tobject.md#setpropobject)*

*Defined in [awtk.ts:15887](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15887)*

设置指定属性的object类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | [TObject](_awtk_.tobject.md) | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  setPropStr

▸ **setPropStr**(`name`: string, `value`: string): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TObject](_awtk_.tobject.md).[setPropStr](_awtk_.tobject.md#setpropstr)*

*Defined in [awtk.ts:15872](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15872)*

设置指定属性的字符串类型的值。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 属性的名称。 |
`value` | string | 属性的值。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  size

▸ **size**(): *number*

*Inherited from [TEmitter](_awtk_.temitter.md).[size](_awtk_.temitter.md#size)*

*Defined in [awtk.ts:10653](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10653)*

获取注册的回调函数个数，主要用于辅助测试。

**Returns:** *number*

回调函数个数。

___

###  unref

▸ **unref**(): *[TRet](../enums/_awtk_.tret.md)*

*Overrides [TObject](_awtk_.tobject.md).[unref](_awtk_.tobject.md#unref)*

*Defined in [awtk.ts:20746](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L20746)*

for script gc

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`emitter`: [TEmitter](_awtk_.temitter.md)): *[TEmitter](_awtk_.temitter.md)*

*Inherited from [TEmitter](_awtk_.temitter.md).[cast](_awtk_.temitter.md#static-cast)*

*Defined in [awtk.ts:10680](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L10680)*

转换为emitter对象(供脚本语言使用)。
主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`emitter` | [TEmitter](_awtk_.temitter.md) | emitter对象。  |

**Returns:** *[TEmitter](_awtk_.temitter.md)*

对象。

___

### `Static` create

▸ **create**(): *[TObject](_awtk_.tobject.md)*

*Overrides [TEmitter](_awtk_.temitter.md).[create](_awtk_.temitter.md#static-create)*

*Defined in [awtk.ts:20733](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L20733)*

创建对象。

**Returns:** *[TObject](_awtk_.tobject.md)*

返回object对象。

___

### `Static` ref

▸ **ref**(`obj`: [TObject](_awtk_.tobject.md)): *[TObject](_awtk_.tobject.md)*

*Inherited from [TObject](_awtk_.tobject.md).[ref](_awtk_.tobject.md#static-ref)*

*Defined in [awtk.ts:15646](https://github.com/zlgopen/awtk-binding/blob/540939e/tools/code_gen/js/output/awtk.ts#L15646)*

引用计数加1。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`obj` | [TObject](_awtk_.tobject.md) | object对象。  |

**Returns:** *[TObject](_awtk_.tobject.md)*

返回object对象。