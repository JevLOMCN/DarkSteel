// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// CopyFrom<FDefaultDelegateUserPolicy> @ 14a796cd0

void __thiscall
TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// CreateSP<FCommonAnalogCursor> @ 14a796dd0

TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
CreateSP<FCommonAnalogCursor>
          (TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,FCommonAnalogCursor *param_1,pmf_dd1d858c *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = (TReferenceControllerBase<1> *)param_1->_padding_;
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar13 = pTVar12;
    pTVar11 = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar8->SharedReferenceCount;
      do {
        pTVar11 = pTVar12;
        if (aVar5 == (atomic<int>)0x0) goto LAB_14a796e85;
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar14 = aVar5 == aVar6;
        if (bVar14) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar14);
      pTVar13 = (TReferenceControllerBase<1> *)param_1->_padding_;
      pTVar11 = pTVar8;
    }
LAB_14a796e85:
    pTVar8 = (TReferenceControllerBase<1> *)&pTVar13->SharedReferenceCount;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = pTVar12;
    }
    if ((pTVar8 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar14)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> *)(*pcVar2)();
      return pTVar9;
    }
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> *)(*pcVar2)()
        ;
        return pTVar9;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> *)(*pcVar2)()
        ;
        return pTVar9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar10;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFCommonAnalogCursor___00__A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pTVar13;
    puVar7[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar7[5] = uVar3;
    puVar7[6] = uVar4;
  }
  if (((ulonglong)pTVar12 & 4) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 2) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// operator= @ 14a7b3ef0

TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14a7b3ff0

TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14a7b40f0

TDelegate<UDragDropOperation_*___cdecl(FGeometry_const_&,FPointerEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<UDragDropOperation_*___cdecl(FGeometry_const_&,FPointerEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<UDragDropOperation_*___cdecl(FGeometry_const_&,FPointerEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<UDragDropOperation_*___cdecl(FGeometry_const_&,FPointerEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// Execute @ 14a7d6d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TDelegate<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,UPanelSlot *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,__return_storage_ptr__,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// ExecuteIfBound @ 14a7d6e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TDelegate<void___cdecl(FInputDeviceId,FKey,enum_EInputEvent,FReply_&),FDefaultDelegateUserPolicy>::
ExecuteIfBound(void *this,FInputDeviceId param_1,FKey *param_2,EInputEvent param_3,FReply *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FName local_38;
  FKeyDetails *local_30;
  TReferenceControllerBase<1> *local_28;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_20);
  plVar3 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar3 = *(longlong **)((longlong)this + 8);
  }
  if (plVar3 == (longlong *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
    uVar2 = 0;
  }
  else {
    pcVar1 = *(code **)(*plVar3 + 0x68);
    local_38 = param_2->KeyName;
    local_30 = (param_2->KeyDetails).Object;
    local_28 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    (param_2->KeyDetails).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->KeyDetails).Object = (FKeyDetails *)0x0;
    uVar2 = (*pcVar1)(plVar3,param_1.InternalId,&local_38,param_3,param_4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  }
  return (bool)uVar2;
}

