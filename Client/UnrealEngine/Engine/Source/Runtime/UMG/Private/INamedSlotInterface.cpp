// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// ~INamedSlotInterface @ 146992480

void __thiscall INamedSlotInterface::~INamedSlotInterface(INamedSlotInterface *this)

{
  *this = (INamedSlotInterface)&___7INamedSlotInterface__6B_;
  return;
}

// ContainsContent @ 1469b0f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall INamedSlotInterface::ContainsContent(INamedSlotInterface *this,UWidget *param_1)

{
  longlong *plVar1;
  int iVar2;
  UWidget *pUVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  longlong *local_28;
  ulonglong local_20;
  
  lVar4 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  (**(code **)((longlong)*this + 0x10))(this,&local_28);
  iVar2 = (int)local_20;
  uVar6 = (ulonglong)(int)local_20;
  plVar1 = local_28 + uVar6;
  plVar5 = local_28;
  while( true ) {
    if ((int)uVar6 != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar1) goto LAB_1469b0fb9;
    pUVar3 = (UWidget *)(**(code **)((longlong)*this + 0x18))(this,*plVar5);
    if (pUVar3 == param_1) break;
    uVar6 = local_20 & 0xffffffff;
    plVar5 = plVar5 + 1;
  }
  lVar4 = *plVar5;
LAB_1469b0fb9:
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return lVar4 != 0;
}

// FindSlotForContent @ 1469c8f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall INamedSlotInterface::FindSlotForContent(INamedSlotInterface *this,UWidget *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong in_R8;
  undefined1 local_res8 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  (**(code **)((longlong)*this + 0x10))(this,&local_38);
  iVar2 = (int)local_30;
  uVar4 = (ulonglong)(int)local_30;
  plVar1 = local_38 + uVar4;
  plVar5 = local_38;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar1) break;
    lVar3 = (**(code **)((longlong)*this + 0x18))(this,*plVar5);
    if (lVar3 == in_R8) {
      param_1->_padding_ = *plVar5;
LAB_1469c8fe1:
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      return (FName)param_1;
    }
    uVar4 = local_30 & 0xffffffff;
    plVar5 = plVar5 + 1;
  }
  param_1->_padding_ = 0;
  goto LAB_1469c8fe1;
}

// ReleaseNamedSlotSlateResources @ 146a0a020

void __thiscall
INamedSlotInterface::ReleaseNamedSlotSlateResources(INamedSlotInterface *this,bool param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  undefined8 *local_28;
  ulonglong local_20;
  
  if (param_1) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    (**(code **)((longlong)*this + 0x10))(this,&local_28);
    iVar2 = (int)local_20;
    uVar4 = (ulonglong)(int)local_20;
    puVar1 = local_28 + uVar4;
    puVar5 = local_28;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar5 == puVar1) break;
      plVar3 = (longlong *)(**(code **)((longlong)*this + 0x18))(this,*puVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,1);
      }
      uVar4 = local_20 & 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}

// _getUObject @ 146a30ca0

UObject * __thiscall INamedSlotInterface::_getUObject(INamedSlotInterface *this)

{
  return (UObject *)0x0;
}

