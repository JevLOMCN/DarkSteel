// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// GetQuickSlotItemData @ 14ba4e740

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
FDS_QuickSlotData::GetQuickSlotItemData(FDS_QuickSlotData *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res8 [4];
  
  if (this->TargetUID == 0) {
    *(undefined8 *)in_RDX = 0;
    local_res8[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res8);
    return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)in_RDX;
  }
  if (this->TemplateType != ItemBase) {
    *(undefined8 *)in_RDX = 0;
    local_res8[0] = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res8);
    return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)in_RDX;
  }
  DS_ItemDataUtil::GetItemDataByUID((long64)in_RDX);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)in_RDX;
}

// Init @ 14ba527e0

void __thiscall FDS_QuickSlotData::Init(FDS_QuickSlotData *this,int *param_1,int *param_2)

{
  this->TargetUID = 0;
  this->DeckNumber = *param_1;
  this->SlotNumber = *param_2;
  return;
}

// SetAutoUse @ 14ba6a2d0

void __thiscall FDS_QuickSlotData::SetAutoUse(FDS_QuickSlotData *this,bool *param_1)

{
  bool bVar1;
  
  if (this->bIsAutoUse != *param_1) {
    this->bIsAutoUse = *param_1;
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnQuickSlotAutoUseChanged);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnQuickSlotAutoUseChanged);
      return;
    }
  }
  return;
}

// SetCanAutoUse @ 14ba6a8c0

void __thiscall FDS_QuickSlotData::SetCanAutoUse(FDS_QuickSlotData *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  FDS_ItemConsumeFunctionTableRow *pFVar2;
  
  if (this->TemplateType == ItemBase) {
    pFVar1 = FDS_ItemBaseTableRow::Get(this->TargetUID,true);
    if (pFVar1 != (FDS_ItemBaseTableRow *)0x0) {
      pFVar2 = FDS_ItemConsumeFunctionTableRow::Get((longlong)(int)pFVar1->ItemType,true);
      if (pFVar2 != (FDS_ItemConsumeFunctionTableRow *)0x0) {
        this->bCanAutoUse = pFVar2->IsAutoUse;
      }
    }
  }
  return;
}

// SetItemDataAutoUse @ 14ba71c20

void __thiscall FDS_QuickSlotData::SetItemDataAutoUse(FDS_QuickSlotData *this,bool *param_1)

{
  FWeakObjectPtr local_res8 [4];
  
  DS_ItemDataUtil::GetItemDataByTID((int)local_res8);
  FWeakObjectPtr::IsValid(local_res8);
  return;
}

// UpdateQuickSlotData @ 14ba80800

void __thiscall
FDS_QuickSlotData::UpdateQuickSlotData(FDS_QuickSlotData *this,SqlQuickSlotTable *param_1)

{
  EDS_Template EVar1;
  int iVar2;
  bool bVar3;
  FDS_ItemBaseTableRow *pFVar4;
  FDS_ItemConsumeFunctionTableRow *pFVar5;
  FWeakObjectPtr local_res8;
  
  EVar1 = (EDS_Template)(param_1->_impl_).template_type_;
  this->TemplateType = EVar1;
  iVar2 = (param_1->_impl_).template_id_;
  this->TargetTID = iVar2;
  this->TargetUID = (longlong)iVar2;
  if (EVar1 == ItemBase) {
    pFVar4 = FDS_ItemBaseTableRow::Get((longlong)iVar2,true);
    if (pFVar4 != (FDS_ItemBaseTableRow *)0x0) {
      pFVar5 = FDS_ItemConsumeFunctionTableRow::Get((longlong)(int)pFVar4->ItemType,true);
      if (pFVar5 != (FDS_ItemConsumeFunctionTableRow *)0x0) {
        this->bCanAutoUse = pFVar5->IsAutoUse;
      }
    }
  }
  bVar3 = (param_1->_impl_).auto_use_;
  if (this->bIsAutoUse != bVar3) {
    this->bIsAutoUse = bVar3;
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnQuickSlotAutoUseChanged);
    if (bVar3) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnQuickSlotAutoUseChanged);
    }
  }
  DS_ItemDataUtil::GetItemDataByTID((int)&local_res8);
  FWeakObjectPtr::IsValid(&local_res8);
  bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
  if (bVar3) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnQuickSlotDataChanged);
  }
  return;
}

