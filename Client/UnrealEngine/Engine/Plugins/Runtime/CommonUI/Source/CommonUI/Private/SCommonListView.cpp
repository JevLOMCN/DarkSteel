// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 4

// OnFocusReceived @ 14a7fc4b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonListView<UObject_*>::OnFocusReceived
          (SCommonListView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  uint uVar1;
  undefined1 auVar2 [8];
  undefined1 *puVar3;
  undefined8 *puVar4;
  UObject **ppUVar5;
  UObject *pUVar6;
  UObject *local_res8;
  undefined1 local_38 [8];
  ulonglong uStack_30;
  
  if ((this->bScrollToSelectedOnFocus != false) &&
     ((param_2->Cause == Navigation || (param_2->Cause == SetDirectly)))) {
    if (*(longlong **)&this->field_0x9e8 == (longlong *)0x0) {
      local_38 = (undefined1  [8])0x0;
      puVar3 = local_38;
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(**(longlong **)&this->field_0x9e8 + 8))();
    }
    if (0 < (int)*(undefined8 *)(puVar3 + 8)) {
      if (*(int *)&this->field_0x820 == *(int *)&this->field_0x84c) {
        if (*(longlong **)&this->field_0x9e8 == (longlong *)0x0) {
          local_38 = (undefined1  [8])0x0;
          puVar4 = (undefined8 *)local_38;
          uStack_30 = uStack_30 & 0xffffffff00000000;
        }
        else {
          puVar4 = (undefined8 *)(**(code **)(**(longlong **)&this->field_0x9e8 + 8))();
        }
        local_38 = (undefined1  [8])*puVar4;
        uStack_30 = puVar4[1];
        ppUVar5 = TArrayView<UObject_*_const,int>::operator[]
                            ((TArrayView<UObject_*_const,int> *)local_38,0);
        pUVar6 = *ppUVar5;
      }
      else {
        if (this->field_0x990 == '\0') goto LAB_14a7fc632;
        pUVar6 = *(UObject **)&this->field_0x868;
      }
      if (pUVar6 != (UObject *)0x0) {
        local_res8 = pUVar6;
        SListView<UObject_*>::Private_FindNextSelectableOrNavigable
                  ((SListView<UObject_*> *)this,(TOptional<UObject_*> *)local_38,&local_res8);
        auVar2 = local_38;
        if (uStack_30._0_1_ != false) {
          if (this->field_0x32b == '\0') {
            *(undefined1 (*) [8])&this->field_0x868 = local_38;
          }
          else {
            local_res8 = (UObject *)local_38;
            SListView<UObject_*>::Private_FindNextSelectableOrNavigable
                      ((SListView<UObject_*> *)this,(TOptional<UObject_*> *)local_38,&local_res8);
            if (uStack_30._0_1_ != false) {
              SListView<UObject_*>::Private_SetSelection
                        ((SListView<UObject_*> *)this,(UObject *)local_38,OnNavigation);
            }
          }
          uVar1 = param_2->UserIndex;
          local_res8 = (UObject *)auVar2;
          SListView<UObject_*>::Private_FindNextSelectableOrNavigable
                    ((SListView<UObject_*> *)this,(TOptional<UObject_*> *)local_38,&local_res8);
          if (uStack_30._0_1_ != false) {
            *(undefined1 (*) [8])&this->field_0x8d0 = local_38;
            this->field_0x992 = 1;
            *(uint *)&this->field_0x8d8 = uVar1;
            STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
          }
        }
      }
    }
  }
LAB_14a7fc632:
  this->bScrollToSelectedOnFocus = true;
  SWidget::OnFocusReceived((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 14a7fd750

void __thiscall
SCommonListView<UObject_*>::OnMouseLeave(SCommonListView<UObject_*> *this,FPointerEvent *param_1)

{
  bool bVar1;
  
  STableViewBase::OnMouseLeave((STableViewBase *)this,param_1);
  if (param_1->bIsTouchEvent != false) {
    bVar1 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar1) {
      this->field_0x340 = 1;
    }
  }
  return;
}

// OnTouchEnded @ 14a7ff990

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonListView<UObject_*>::OnTouchEnded
          (SCommonListView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  STableViewBase::OnTouchEnded((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 14a7ff9d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonListView<UObject_*>::OnTouchMoved
          (SCommonListView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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
                         ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_18);
      FReply::SetUserFocus(__return_storage_ptr__,pTVar2,SetDirectly,false);
    }
  }
  return __return_storage_ptr__;
}

