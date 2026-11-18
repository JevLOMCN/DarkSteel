// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// operator[] @ 1429c0d00

TSingleWidgetChildrenWithBasicLayoutSlot<1> * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::operator[]
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->field_0x20);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x38;
  *(SWidget **)&this->field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->field_0x20);
  return (TSingleWidgetChildrenWithBasicLayoutSlot<1> *)this;
}

// GetChildAt @ 1429e9cd0

TSharedRef<SWidget,1> * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::GetChildAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  
  if (param_1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x143,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = *(SWidget **)&this->field_0x30;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x38;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e9d40

TSharedRef<SWidget_const_,1> * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::GetChildAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  
  if (param_1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x149,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = *(SWidget **)&this->field_0x30;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x38;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea3d0

FWidgetRef * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::GetChildRefAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FWidgetRef *pFVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x181,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWidgetRef *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->WidgetReference = *(SWidget **)&this->field_0x30;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea430

FConstWidgetRef * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::GetChildRefAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          FConstWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FConstWidgetRef *pFVar3;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x186,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->WidgetReference = *(SWidget **)&this->field_0x30;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 1429eeb80

FSlotBase * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::GetSlotAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *pFVar3;
  
  if (param_1 == 0) {
    return (FSlotBase *)&this->field_0x20;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ChildIndex == 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,0x17b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlotBase *)(*pcVar1)();
    return pFVar3;
  }
  return (FSlotBase *)&this->field_0x20;
}

// Num @ 1429f7e90

int __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::Num
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this)

{
  return 1;
}

