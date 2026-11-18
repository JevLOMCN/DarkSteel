// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 4

// OnFocusLost @ 14a7fc480

void __thiscall
SCommonTileView<UObject_*>::OnFocusLost(SCommonTileView<UObject_*> *this,FFocusEvent *param_1)

{
  STableViewBase::OnFocusLost((STableViewBase *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return;
}

// OnFocusReceived @ 14a7fc660

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonTileView<UObject_*>::OnFocusReceived
          (SCommonTileView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  UObject **ppUVar5;
  FReply *pFVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  TArrayView<UObject_*_const,int> local_48 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((this->bScrollToSelectedOnFocus != false) &&
     ((param_2->Cause == Navigation || (param_2->Cause == SetDirectly)))) {
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      local_68 = 0;
      puVar4 = &local_68;
      uStack_60 = 0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    }
    local_28 = *(undefined4 *)puVar4;
    uStack_24 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_20 = *(undefined4 *)(puVar4 + 1);
    uStack_1c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if (0 < (int)puVar4[1]) {
      if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          local_58 = 0;
          puVar4 = &local_58;
          uStack_50 = 0;
        }
        else {
          puVar4 = (undefined8 *)(**(code **)(*(longlong *)this->_padding_ + 8))();
        }
        local_48[0].DataPtr = (UObject **)*puVar4;
        local_48[0]._8_8_ = puVar4[1];
        ppUVar5 = TArrayView<UObject_*_const,int>::operator[](local_48,0);
        pUVar1 = *ppUVar5;
        SListView<UObject_*>::SetSelection((SListView<UObject_*> *)this,pUVar1,OnNavigation);
        SListView<UObject_*>::RequestNavigateToItem
                  ((SListView<UObject_*> *)this,pUVar1,param_2->UserIndex);
      }
      else {
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        SListView<UObject_*>::GetSelectedItems((SListView<UObject_*> *)this,&local_78);
        if ((local_78.ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar2)();
          return pFVar6;
        }
        pUVar1 = *(UObject **)local_78.AllocatorInstance.Data;
        SListView<UObject_*>::SetSelection((SListView<UObject_*> *)this,pUVar1,OnNavigation);
        SListView<UObject_*>::RequestNavigateToItem
                  ((SListView<UObject_*> *)this,pUVar1,param_2->UserIndex);
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
      }
    }
  }
  this->bScrollToSelectedOnFocus = true;
  SWidget::OnFocusReceived((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 14a7fd790

void __thiscall
SCommonTileView<UObject_*>::OnMouseLeave(SCommonTileView<UObject_*> *this,FPointerEvent *param_1)

{
  bool bVar1;
  
  STableViewBase::OnMouseLeave((STableViewBase *)this,param_1);
  if (param_1->bIsTouchEvent != false) {
    bVar1 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar1) {
      *(undefined1 *)&this->_padding_ = 1;
    }
  }
  return;
}

// OnTouchMoved @ 14a7ffa30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonTileView<UObject_*>::OnTouchMoved
          (SCommonTileView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  TSharedRef<SWidget,1> *pTVar2;
  TSharedRef<SWidget,1> local_18;
  
  STableViewBase::OnTouchMoved((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ != '\0') {
    bVar1 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar1) {
      this->bScrollToSelectedOnFocus = false;
      pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
      FReply::SetUserFocus(__return_storage_ptr__,pTVar2,SetDirectly,false);
    }
  }
  return __return_storage_ptr__;
}

