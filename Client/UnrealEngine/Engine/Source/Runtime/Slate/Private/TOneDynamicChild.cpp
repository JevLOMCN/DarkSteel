// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// GetChildAt @ 1429e9660

TSharedRef<SWidget,1> * __thiscall
TOneDynamicChild<FBasicLayoutWidgetSlot>::GetChildAt
          (TOneDynamicChild<FBasicLayoutWidgetSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  TPanelChildren<FBasicLayoutWidgetSlot> *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x41a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = this->AllChildren;
  piVar4 = TAttribute<int>::Get(this->WidgetIndex);
  TPanelChildren<FBasicLayoutWidgetSlot>::GetChildAt(this_00,__return_storage_ptr__,*piVar4);
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e96e0

TSharedRef<SWidget_const_,1> * __thiscall
TOneDynamicChild<FBasicLayoutWidgetSlot>::GetChildAt
          (TOneDynamicChild<FBasicLayoutWidgetSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  TPanelChildren<FBasicLayoutWidgetSlot> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  uint *puVar10;
  
  if (param_1 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x420,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget_const_,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar2 = this->AllChildren;
  puVar10 = (uint *)TAttribute<int>::Get(this->WidgetIndex);
  uVar1 = *puVar10;
  uVar8 = 0;
  if ((int)uVar1 < (pTVar2->Children).ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget_const_,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  lVar3 = *(longlong *)((pTVar2->Children).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x18);
  pSVar5 = *(SWidget **)(lVar3 + 0x10);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = pSVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pSVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429e9db0

FWidgetRef * __thiscall
TOneDynamicChild<FBasicLayoutWidgetSlot>::GetChildRefAt
          (TOneDynamicChild<FBasicLayoutWidgetSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  TPanelChildren<FBasicLayoutWidgetSlot> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FWidgetRef *pFVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x42c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar1 = this->AllChildren;
  pcVar2 = *(code **)(pTVar1->_padding_ + 0x38);
  piVar5 = TAttribute<int>::Get(this->WidgetIndex);
  (*pcVar2)(pTVar1,__return_storage_ptr__,*piVar5);
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429e9e40

FConstWidgetRef * __thiscall
TOneDynamicChild<FBasicLayoutWidgetSlot>::GetChildRefAt
          (TOneDynamicChild<FBasicLayoutWidgetSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  TPanelChildren<FBasicLayoutWidgetSlot> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FConstWidgetRef *pFVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x432,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar1 = this->AllChildren;
  pcVar2 = *(code **)(pTVar1->_padding_ + 0x30);
  piVar5 = TAttribute<int>::Get(this->WidgetIndex);
  (*pcVar2)(pTVar1,__return_storage_ptr__,*piVar5);
  return __return_storage_ptr__;
}

// GetSlotAt @ 1429ee970

FSlotBase * __thiscall
TOneDynamicChild<FBasicLayoutWidgetSlot>::GetSlotAt
          (TOneDynamicChild<FBasicLayoutWidgetSlot> *this,int param_1)

{
  FBasicLayoutWidgetSlot *pFVar1;
  
  pFVar1 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](this->AllChildren,param_1);
  return (FSlotBase *)pFVar1;
}

// Num @ 1429f7e30

int __thiscall
TOneDynamicChild<FBasicLayoutWidgetSlot>::Num(TOneDynamicChild<FBasicLayoutWidgetSlot> *this)

{
  return (int)(0 < (this->AllChildren->Children).ArrayNum);
}

