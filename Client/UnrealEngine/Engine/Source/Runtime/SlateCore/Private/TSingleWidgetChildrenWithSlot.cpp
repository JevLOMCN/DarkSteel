// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 13

// operator[] @ 1425c31d0

TSingleWidgetChildrenWithBasicLayoutSlot<0> * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
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
  return (TSingleWidgetChildrenWithBasicLayoutSlot<0> *)this;
}

// GetChildAt @ 1425de910

TSharedRef<SWidget,1> * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::GetChildAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
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

// GetChildAt @ 1425de980

TSharedRef<SWidget_const_,1> * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::GetChildAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
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

// GetChildAt @ 1425de9f0

TSharedRef<SWidget,1> * __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::GetChildAt
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this,
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

// GetChildAt @ 1425dea60

TSharedRef<SWidget_const_,1> * __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::GetChildAt
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this,
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

// GetChildRefAt @ 1425df750

FWidgetRef * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::GetChildRefAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
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

// GetChildRefAt @ 1425df7b0

FConstWidgetRef * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::GetChildRefAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
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

// GetChildRefAt @ 1425df810

FWidgetRef * __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::GetChildRefAt
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this,
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

// GetChildRefAt @ 1425df870

FConstWidgetRef * __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::GetChildRefAt
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this,
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

// GetSlotAt @ 1425e36a0

FSlotBase * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::GetSlotAt
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
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

// GetSlotAt @ 1425e36f0

FSlotBase * __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::GetSlotAt
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this,int param_1)

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

// Num @ 1425eb890

int __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::Num
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this)

{
  return 1;
}

// Num @ 1425eb8a0

int __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::Num
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this)

{
  return 1;
}

