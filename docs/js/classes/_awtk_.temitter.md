[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TEmitter](_awtk_.temitter.md)

# Class: TEmitter

事件分发器, 用于实现观察者模式。

## Hierarchy

* **TEmitter**

  ↳ [TObject](_awtk_.tobject.md)

## Index

### Constructors

* [constructor](_awtk_.temitter.md#constructor)

### Properties

* [nativeObj](_awtk_.temitter.md#nativeobj)

### Methods

* [destroy](_awtk_.temitter.md#destroy)
* [disable](_awtk_.temitter.md#disable)
* [dispatch](_awtk_.temitter.md#dispatch)
* [dispatchSimpleEvent](_awtk_.temitter.md#dispatchsimpleevent)
* [enable](_awtk_.temitter.md#enable)
* [off](_awtk_.temitter.md#off)
* [on](_awtk_.temitter.md#on)
* [size](_awtk_.temitter.md#size)
* [cast](_awtk_.temitter.md#static-cast)
* [create](_awtk_.temitter.md#static-create)

## Constructors

###  constructor

\+ **new TEmitter**(`nativeObj`: any): *[TEmitter](_awtk_.temitter.md)*

*Defined in [awtk.ts:1850](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1850)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TEmitter](_awtk_.temitter.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:1850](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1850)*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1961](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1961)*

销毁。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  disable

▸ **disable**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1939](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1939)*

禁用。

禁用后emitter_dispatch无效，但可以注册和注销。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  dispatch

▸ **dispatch**(`e`: [TEvent](_awtk_.tevent.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1875](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1875)*

分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
禁用状态下，本函数不做任何事情。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`e` | [TEvent](_awtk_.tevent.md) | 事件对象。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

___

###  dispatchSimpleEvent

▸ **dispatchSimpleEvent**(`type`: [TEventType](../enums/_awtk_.teventtype.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1889](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1889)*

分发事件。
> 对emitter_dispatch的包装，分发一个简单的事件。
如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TEventType](../enums/_awtk_.teventtype.md) | 事件类型。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

___

###  enable

▸ **enable**(): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1926](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1926)*

启用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

###  off

▸ **off**(`id`: number): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:1915](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1915)*

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

*Defined in [awtk.ts:1903](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1903)*

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

###  size

▸ **size**(): *number*

*Defined in [awtk.ts:1950](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1950)*

获取注册的回调函数个数，主要用于辅助测试。

**Returns:** *number*

回调函数个数。

___

### `Static` cast

▸ **cast**(`emitter`: [TEmitter](_awtk_.temitter.md)): *[TEmitter](_awtk_.temitter.md)*

*Defined in [awtk.ts:1975](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1975)*

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

▸ **create**(): *[TEmitter](_awtk_.temitter.md)*

*Defined in [awtk.ts:1862](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1862)*

创建emitter对象。

**Returns:** *[TEmitter](_awtk_.temitter.md)*

对象。
