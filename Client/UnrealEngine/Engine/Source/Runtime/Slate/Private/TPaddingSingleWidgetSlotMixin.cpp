// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// Padding @ 1427703b0

TSingleWidgetChildrenWithBasicLayoutSlot<0> * __thiscall
TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
          (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *this,
          float param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar4;
  FSlotBase *this_00;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._12_4_ = param_4;
  this_00 = (FSlotBase *)(this + -2);
  local_40[0x10] = true;
  local_18 = 0;
  if (this == (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = param_1;
  local_40._4_4_ = param_2;
  local_40._8_4_ = param_3;
  pSVar3 = FSlotBase::GetOwnerWidget(this_00);
  if (pSVar3 == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this,pSVar3,(TAttribute<FMargin> *)local_40,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  pTVar4 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)(this + -4);
  if (this == (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)0x0) {
    pTVar4 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)0x0;
  }
  return pTVar4;
}

// Padding @ 1427704f0

TSingleWidgetChildrenWithBasicLayoutSlot<0> * __thiscall
TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
          (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *this,
          TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar5;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  local_38._0_4_ = (param_1->Value).Left;
  local_38._4_4_ = (param_1->Value).Top;
  local_38._8_4_ = (param_1->Value).Right;
  local_38._12_4_ = (param_1->Value).Bottom;
  local_38[0x10] = param_1->bIsSet;
  this_00 = &param_1->Getter;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pTVar5 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)(this + -4);
  if (this == (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)0x0) {
    pTVar5 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)0x0;
  }
  pSVar4 = FSlotBase::GetOwnerWidget((FSlotBase *)&pTVar5->field_0x20);
  if (pSVar4 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)(*pcVar2)();
      return pTVar5;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this,pSVar4,(TAttribute<FMargin> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return pTVar5;
}

// SetPadding @ 1428356c0

void __thiscall
TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::SetPadding
          (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *this,
          TAttribute<FMargin> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FSlotBase *this_00;
  
  this_00 = (FSlotBase *)(this + -2);
  if (this == (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  pSVar4 = FSlotBase::GetOwnerWidget(this_00);
  if (pSVar4 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this,pSVar4,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetPadding @ 142a0b500

void __thiscall
TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<1>,1>::SetPadding
          (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<1>,1> *this,
          TAttribute<FMargin> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FSlotBase *this_00;
  
  this_00 = (FSlotBase *)(this + -2);
  if (this == (TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<1>,1> *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  pSVar4 = FSlotBase::GetOwnerWidget(this_00);
  if (pSVar4 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this,pSVar4,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

