// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// ~IDS_ItemBasketInterface @ 14b541450

void __thiscall IDS_ItemBasketInterface::~IDS_ItemBasketInterface(IDS_ItemBasketInterface *this)

{
  *this = (IDS_ItemBasketInterface)&___7IDS_ItemBasketInterface__6B_;
  return;
}

// GetBasketActionButtonText @ 14b542910

FDS_Text * __thiscall
IDS_ItemBasketInterface::GetBasketActionButtonText
          (IDS_ItemBasketInterface *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetBasketMoneyIconID @ 14b542950

int __thiscall IDS_ItemBasketInterface::GetBasketMoneyIconID(IDS_ItemBasketInterface *this)

{
  return 0;
}

// GetBasketMoneyQuantity @ 14b542960

int __thiscall IDS_ItemBasketInterface::GetBasketMoneyQuantity(IDS_ItemBasketInterface *this)

{
  return 0;
}

// GetBasketTitle @ 14b542980

FDS_Text * __thiscall
IDS_ItemBasketInterface::GetBasketTitle
          (IDS_ItemBasketInterface *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetBasketWeight @ 14b5429e0

int __thiscall IDS_ItemBasketInterface::GetBasketWeight(IDS_ItemBasketInterface *this)

{
  return 0;
}

// OnClickBasketAction @ 14b5439c0

void __thiscall IDS_ItemBasketInterface::OnClickBasketAction(IDS_ItemBasketInterface *this)

{
  return;
}

// OnClickClearBasket @ 14b5439d0

void __thiscall IDS_ItemBasketInterface::OnClickClearBasket(IDS_ItemBasketInterface *this)

{
  return;
}

// OnEventDrop @ 14b5439e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IDS_ItemBasketInterface::OnEventDrop(IDS_ItemBasketInterface *this,FDS_DragDropEventField *param_1)

{
  return;
}

// OnUpdatedBasket @ 14b5439f0

void __thiscall IDS_ItemBasketInterface::OnUpdatedBasket(IDS_ItemBasketInterface *this)

{
  return;
}

// UpdateQuantityControl @ 14b543cc0

void __thiscall
IDS_ItemBasketInterface::UpdateQuantityControl(IDS_ItemBasketInterface *this,float param_1)

{
  return;
}

// _getUObject @ 14b545230

UObject * __thiscall IDS_ItemBasketInterface::_getUObject(IDS_ItemBasketInterface *this)

{
  return (UObject *)0x0;
}

// GetBasketMoneyType @ 14bd5a240

EDS_MoneyType __thiscall IDS_ItemBasketInterface::GetBasketMoneyType(IDS_ItemBasketInterface *this)

{
  return None;
}

// GetBasketMoneyVisibility @ 14bd5a250

ESlateVisibility __thiscall
IDS_ItemBasketInterface::GetBasketMoneyVisibility(IDS_ItemBasketInterface *this)

{
  return Collapsed;
}

