[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TProgressEvent](_awtk_.tprogressevent.md)

# Class: TProgressEvent

进度变化事件。

## Hierarchy

* [TEvent](_awtk_.tevent.md)

  ↳ **TProgressEvent**

## Index

### Constructors

* [constructor](_awtk_.tprogressevent.md#constructor)

### Properties

* [nativeObj](_awtk_.tprogressevent.md#nativeobj)

### Accessors

* [percent](_awtk_.tprogressevent.md#percent)
* [target](_awtk_.tprogressevent.md#target)
* [time](_awtk_.tprogressevent.md#time)
* [type](_awtk_.tprogressevent.md#type)

### Methods

* [destroy](_awtk_.tprogressevent.md#destroy)
* [cast](_awtk_.tprogressevent.md#static-cast)
* [create](_awtk_.tprogressevent.md#static-create)

## Constructors

###  constructor

\+ **new TProgressEvent**(`nativeObj`: any): *[TProgressEvent](_awtk_.tprogressevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[constructor](_awtk_.tevent.md#constructor)*

*Defined in [awtk.ts:11412](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11412)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TProgressEvent](_awtk_.tprogressevent.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Overrides [TEvent](_awtk_.tevent.md).[nativeObj](_awtk_.tevent.md#nativeobj)*

*Defined in [awtk.ts:11412](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11412)*

## Accessors

###  percent

• **get percent**(): *number*

*Defined in [awtk.ts:11434](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11434)*

进度百分比。

**Returns:** *number*

___

###  target

• **get target**(): *any*

*Inherited from [TEvent](_awtk_.tevent.md).[target](_awtk_.tevent.md#target)*

*Defined in [awtk.ts:1710](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1710)*

事件发生的目标对象。

**Returns:** *any*

___

###  time

• **get time**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[time](_awtk_.tevent.md#time)*

*Defined in [awtk.ts:1701](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1701)*

事件发生的时间。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Inherited from [TEvent](_awtk_.tevent.md).[type](_awtk_.tevent.md#type)*

*Defined in [awtk.ts:1692](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1692)*

类型。

**Returns:** *number*

## Methods

###  destroy

▸ **destroy**(): *[TRet](../enums/_awtk_.tret.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[destroy](_awtk_.tevent.md#destroy)*

*Defined in [awtk.ts:1683](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1683)*

销毁事件对象。

主要给脚本语言使用。

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` cast

▸ **cast**(`event`: [TEvent](_awtk_.tevent.md)): *[TProgressEvent](_awtk_.tprogressevent.md)*

*Overrides [TEvent](_awtk_.tevent.md).[cast](_awtk_.tevent.md#static-cast)*

*Defined in [awtk.ts:11425](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L11425)*

把event对象转progress_event_t对象，主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`event` | [TEvent](_awtk_.tevent.md) | event对象。  |

**Returns:** *[TProgressEvent](_awtk_.tprogressevent.md)*

返回event对象。

___

### `Static` create

▸ **create**(`type`: number): *[TEvent](_awtk_.tevent.md)*

*Inherited from [TEvent](_awtk_.tevent.md).[create](_awtk_.tevent.md#static-create)*

*Defined in [awtk.ts:1670](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L1670)*

创建event对象。

主要给脚本语言使用。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | number | 事件类型。  |

**Returns:** *[TEvent](_awtk_.tevent.md)*

返回事件对象。
