// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 2

// FAccessibleWidgetData @ 142d60410

FAccessibleWidgetData * __thiscall
FAccessibleWidgetData::FAccessibleWidgetData
          (FAccessibleWidgetData *this,FAccessibleWidgetData *param_1)

{
  *(byte *)this =
       *(byte *)this ^ (this->bCanChildrenBeAccessible ^ param_1->bCanChildrenBeAccessible) & 1;
  this->AccessibleBehavior = param_1->AccessibleBehavior;
  this->AccessibleSummaryBehavior = param_1->AccessibleSummaryBehavior;
  FText::FText(&(this->AccessibleText).Value,&(param_1->AccessibleText).Value);
  (this->AccessibleText).bIsSet = (param_1->AccessibleText).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AccessibleText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->AccessibleText).Getter);
  FText::FText(&(this->AccessibleSummaryText).Value,&(param_1->AccessibleSummaryText).Value);
  (this->AccessibleSummaryText).bIsSet = (param_1->AccessibleSummaryText).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AccessibleSummaryText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->AccessibleSummaryText).Getter);
  return this;
}

// FAccessibleWidgetData @ 142d604b0

FAccessibleWidgetData * __thiscall
FAccessibleWidgetData::FAccessibleWidgetData
          (FAccessibleWidgetData *this,FAccessibleWidgetData *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  *(byte *)this =
       *(byte *)this ^ (this->bCanChildrenBeAccessible ^ param_1->bCanChildrenBeAccessible) & 1;
  this->AccessibleBehavior = param_1->AccessibleBehavior;
  this->AccessibleSummaryBehavior = param_1->AccessibleSummaryBehavior;
  (this->AccessibleText).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->AccessibleText).Value.TextData.Reference;
  (this->AccessibleText).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->AccessibleText).Getter;
  (this->AccessibleText).Value.Flags = (param_1->AccessibleText).Value.Flags;
  (this->AccessibleText).bIsSet = (param_1->AccessibleText).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->AccessibleText).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->AccessibleText).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->AccessibleText).Getter);
  (this->AccessibleSummaryText).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->AccessibleSummaryText).Value.TextData.Reference;
  (this->AccessibleSummaryText).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->AccessibleSummaryText).Getter;
  (this->AccessibleSummaryText).Value.Flags = (param_1->AccessibleSummaryText).Value.Flags;
  (this->AccessibleSummaryText).bIsSet = (param_1->AccessibleSummaryText).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->AccessibleSummaryText).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->AccessibleSummaryText).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->AccessibleSummaryText).Getter);
  return this;
}

