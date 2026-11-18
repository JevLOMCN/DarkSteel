// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 5

// SCommonTreeView<UObject_*> @ 14a7a6660

SCommonTreeView<UObject_*> * __thiscall
SCommonTreeView<UObject_*>::SCommonTreeView<UObject_*>(SCommonTreeView<UObject_*> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *local_res8;
  
  SListView<UObject_*>::SListView<UObject_*>((SListView<UObject_*> *)this,Tree);
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&STreeView<UObject*___ptr64>::_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&STreeView<UObject*___ptr64>::_vftable__for__IScrollableWidget__;
  this->_padding_ = (longlong)&STreeView<UObject*___ptr64>::_vftable__for__FGCObject__;
  this->_padding_ =
       (longlong)&STreeView<UObject*___ptr64>::_vftable__for__ITypedTableView<UObject*___ptr64>__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (plVar1 == (longlong *)0x0) {
    `SListView<UObject_*>::SetItemsSource'::__l2::<lambda_1>::operator()(&local_res8);
  }
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
    if (cVar3 != '\0') goto LAB_14a7a67ee;
  }
  if (plVar1 == (longlong *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = plVar1;
      *local_res8 = &___7__FArrayPointer_PEAVUObject___ItemsSource_Slate_UE__6B_;
    }
  }
  SListView<UObject_*>::SetItemsSource
            ((SListView<UObject_*> *)this,(IItemsSource<UObject_*> *)&local_res8);
LAB_14a7a67ee:
  this->_padding_ = (longlong)&SCommonTreeView<UObject*___ptr64>::_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&SCommonTreeView<UObject*___ptr64>::_vftable__for__IScrollableWidget__
  ;
  this->_padding_ = (longlong)&SCommonTreeView<UObject*___ptr64>::_vftable__for__FGCObject__;
  this->_padding_ =
       (longlong)
       &SCommonTreeView<UObject*___ptr64>::_vftable__for__ITypedTableView<UObject*___ptr64>__;
  this->bScrollToSelectedOnFocus = true;
  return this;
}

// OnFocusReceived @ 14a7fc830

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonTreeView<UObject_*>::OnFocusReceived
          (SCommonTreeView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  longlong lVar1;
  TArrayView<UObject_*_const,int> *pTVar2;
  UObject **ppUVar3;
  UObject *pUVar4;
  TArrayView<UObject_*_const,int> local_18;
  
  if (((this->bScrollToSelectedOnFocus != false) &&
      (((param_2->Cause == Navigation || (param_2->Cause == SetDirectly)) &&
       ((longlong *)this->_padding_ != (longlong *)0x0)))) &&
     (lVar1 = (**(code **)(*(longlong *)this->_padding_ + 8))(), 0 < (int)*(undefined8 *)(lVar1 + 8)
     )) {
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        local_18.DataPtr = (UObject **)0x0;
        local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
        pTVar2 = &local_18;
      }
      else {
        pTVar2 = (TArrayView<UObject_*_const,int> *)
                 (**(code **)(*(longlong *)this->_padding_ + 8))();
      }
      local_18.DataPtr = pTVar2->DataPtr;
      local_18._8_8_ = *(undefined8 *)&pTVar2->ArrayNum;
      ppUVar3 = TArrayView<UObject_*_const,int>::operator[](&local_18,0);
      pUVar4 = *ppUVar3;
    }
    else {
      if ((char)this->_padding_ == '\0') goto LAB_14a7fc925;
      pUVar4 = (UObject *)this->_padding_;
    }
    if (pUVar4 != (UObject *)0x0) {
      SListView<UObject_*>::SetSelection((SListView<UObject_*> *)this,pUVar4,OnNavigation);
      SListView<UObject_*>::RequestNavigateToItem
                ((SListView<UObject_*> *)this,pUVar4,param_2->UserIndex);
    }
  }
LAB_14a7fc925:
  this->bScrollToSelectedOnFocus = true;
  SWidget::OnFocusReceived((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 14a7fd7d0

void __thiscall
SCommonTreeView<UObject_*>::OnMouseLeave(SCommonTreeView<UObject_*> *this,FPointerEvent *param_1)

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

// OnTouchEnded @ 14a7ff9b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonTreeView<UObject_*>::OnTouchEnded
          (SCommonTreeView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  STableViewBase::OnTouchEnded((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 14a7ffa90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonTreeView<UObject_*>::OnTouchMoved
          (SCommonTreeView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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

