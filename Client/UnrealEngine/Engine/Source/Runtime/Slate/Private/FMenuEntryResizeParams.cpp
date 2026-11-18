// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// ~FMenuEntryResizeParams @ 142700e50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuEntryResizeParams::~FMenuEntryResizeParams(FMenuEntryResizeParams *this)

{
  void *pvVar1;
  
  FWrappingParams::~FWrappingParams(&this->Wrapping);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VisibleInOverflow).Getter);
  pvVar1 = *(void **)&(this->VisibleInOverflow).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->VisibleInOverflow).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AllowClipping).Getter);
  pvVar1 = *(void **)&(this->AllowClipping).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AllowClipping).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClippingPriority).Getter);
  pvVar1 = *(void **)&(this->ClippingPriority).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClippingPriority).Getter);
  return;
}

// FMenuEntryResizeParams @ 1427b2f40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
FMenuEntryResizeParams::FMenuEntryResizeParams
          (FMenuEntryResizeParams *this,FMenuEntryResizeParams *param_1)

{
  bool bVar1;
  
  (this->ClippingPriority).Value = (param_1->ClippingPriority).Value;
  (this->ClippingPriority).bIsSet = (param_1->ClippingPriority).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClippingPriority).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ClippingPriority).Getter);
  (this->AllowClipping).Value = (param_1->AllowClipping).Value;
  (this->AllowClipping).bIsSet = (param_1->AllowClipping).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AllowClipping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->AllowClipping).Getter);
  (this->VisibleInOverflow).Value = (param_1->VisibleInOverflow).Value;
  (this->VisibleInOverflow).bIsSet = (param_1->VisibleInOverflow).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VisibleInOverflow).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->VisibleInOverflow).Getter);
  (this->Wrapping).Allow.Value = (param_1->Wrapping).Allow.Value;
  (this->Wrapping).Allow.bIsSet = (param_1->Wrapping).Allow.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Wrapping).Allow.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Wrapping).Allow.Getter);
  (this->Wrapping).Priority.Value = (param_1->Wrapping).Priority.Value;
  (this->Wrapping).Priority.bIsSet = (param_1->Wrapping).Priority.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Wrapping).Priority.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Wrapping).Priority.Getter);
  (this->Wrapping).Mode.Value = (param_1->Wrapping).Mode.Value;
  (this->Wrapping).Mode.bIsSet = (param_1->Wrapping).Mode.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Wrapping).Mode.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Wrapping).Mode.Getter);
  (this->Wrapping).VerticalOverflowBehavior.bIsSet = false;
  bVar1 = (param_1->Wrapping).VerticalOverflowBehavior.bIsSet;
  (this->Wrapping).VerticalOverflowBehavior.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Wrapping).VerticalOverflowBehavior.TypedValue =
         (param_1->Wrapping).VerticalOverflowBehavior.TypedValue;
  }
  (this->Wrapping).ForceNewLine.bIsSet = false;
  bVar1 = (param_1->Wrapping).ForceNewLine.bIsSet;
  (this->Wrapping).ForceNewLine.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Wrapping).ForceNewLine.TypedValue = (param_1->Wrapping).ForceNewLine.TypedValue;
  }
  return this;
}

// FMenuEntryResizeParams @ 1427b3070

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
FMenuEntryResizeParams::FMenuEntryResizeParams
          (FMenuEntryResizeParams *this,FMenuEntryResizeParams *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
  *this_00;
  bool bVar2;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  
  (this->ClippingPriority).Value = (param_1->ClippingPriority).Value;
  (this->ClippingPriority).bIsSet = (param_1->ClippingPriority).bIsSet;
  pTVar3 = &(this->ClippingPriority).Getter;
  *(undefined8 *)pTVar3 = 0;
  *(undefined8 *)&(this->ClippingPriority).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ClippingPriority).Getter.field_0x10 = 0;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar3,&(param_1->ClippingPriority).Getter);
  pTVar1 = &(this->AllowClipping).Getter;
  (this->AllowClipping).Value = (param_1->AllowClipping).Value;
  (this->AllowClipping).bIsSet = (param_1->AllowClipping).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->AllowClipping).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->AllowClipping).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->AllowClipping).Getter);
  pTVar1 = &(this->VisibleInOverflow).Getter;
  (this->VisibleInOverflow).Value = (param_1->VisibleInOverflow).Value;
  (this->VisibleInOverflow).bIsSet = (param_1->VisibleInOverflow).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->VisibleInOverflow).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->VisibleInOverflow).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->VisibleInOverflow).Getter);
  pTVar1 = &(this->Wrapping).Allow.Getter;
  (this->Wrapping).Allow.Value = (param_1->Wrapping).Allow.Value;
  (this->Wrapping).Allow.bIsSet = (param_1->Wrapping).Allow.bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Wrapping).Allow.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Wrapping).Allow.Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->Wrapping).Allow.Getter);
  pTVar3 = &(this->Wrapping).Priority.Getter;
  (this->Wrapping).Priority.Value = (param_1->Wrapping).Priority.Value;
  (this->Wrapping).Priority.bIsSet = (param_1->Wrapping).Priority.bIsSet;
  *(undefined8 *)pTVar3 = 0;
  *(undefined8 *)&(this->Wrapping).Priority.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Wrapping).Priority.Getter.field_0x10 = 0;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar3,&(param_1->Wrapping).Priority.Getter);
  this_00 = &(this->Wrapping).Mode.Getter;
  (this->Wrapping).Mode.Value = (param_1->Wrapping).Mode.Value;
  (this->Wrapping).Mode.bIsSet = (param_1->Wrapping).Mode.bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Wrapping).Mode.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Wrapping).Mode.Getter.field_0x10 = 0;
  TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(this_00,&(param_1->Wrapping).Mode.Getter);
  (this->Wrapping).VerticalOverflowBehavior.bIsSet = false;
  bVar2 = (param_1->Wrapping).VerticalOverflowBehavior.bIsSet;
  (this->Wrapping).VerticalOverflowBehavior.bIsSet = bVar2;
  if (bVar2 != false) {
    (this->Wrapping).VerticalOverflowBehavior.TypedValue =
         (param_1->Wrapping).VerticalOverflowBehavior.TypedValue;
  }
  (this->Wrapping).ForceNewLine.bIsSet = false;
  bVar2 = (param_1->Wrapping).ForceNewLine.bIsSet;
  (this->Wrapping).ForceNewLine.bIsSet = bVar2;
  if (bVar2 != false) {
    (this->Wrapping).ForceNewLine.TypedValue = (param_1->Wrapping).ForceNewLine.TypedValue;
  }
  return this;
}

// operator= @ 1427bb820

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
FMenuEntryResizeParams::operator=(FMenuEntryResizeParams *this,FMenuEntryResizeParams *param_1)

{
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar1;
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar2;
  TOptional<bool> *pTVar3;
  TOptional<bool> *pTVar4;
  
  (this->ClippingPriority).Value = (param_1->ClippingPriority).Value;
  (this->ClippingPriority).bIsSet = (param_1->ClippingPriority).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClippingPriority).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ClippingPriority).Getter);
  (this->AllowClipping).Value = (param_1->AllowClipping).Value;
  (this->AllowClipping).bIsSet = (param_1->AllowClipping).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AllowClipping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->AllowClipping).Getter);
  (this->VisibleInOverflow).Value = (param_1->VisibleInOverflow).Value;
  (this->VisibleInOverflow).bIsSet = (param_1->VisibleInOverflow).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VisibleInOverflow).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->VisibleInOverflow).Getter);
  (this->Wrapping).Allow.Value = (param_1->Wrapping).Allow.Value;
  (this->Wrapping).Allow.bIsSet = (param_1->Wrapping).Allow.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Wrapping).Allow.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Wrapping).Allow.Getter);
  (this->Wrapping).Priority.Value = (param_1->Wrapping).Priority.Value;
  (this->Wrapping).Priority.bIsSet = (param_1->Wrapping).Priority.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Wrapping).Priority.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Wrapping).Priority.Getter);
  (this->Wrapping).Mode.Value = (param_1->Wrapping).Mode.Value;
  (this->Wrapping).Mode.bIsSet = (param_1->Wrapping).Mode.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Wrapping).Mode.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Wrapping).Mode.Getter);
  pTVar1 = &(param_1->Wrapping).VerticalOverflowBehavior;
  pTVar2 = &(this->Wrapping).VerticalOverflowBehavior;
  if (pTVar1 != pTVar2) {
    if ((param_1->Wrapping).VerticalOverflowBehavior.bIsSet == false) {
      if ((this->Wrapping).VerticalOverflowBehavior.bIsSet != false) {
        (this->Wrapping).VerticalOverflowBehavior.bIsSet = false;
      }
    }
    else {
      pTVar2->TypedValue = pTVar1->TypedValue;
      (this->Wrapping).VerticalOverflowBehavior.bIsSet = true;
    }
  }
  pTVar3 = &(param_1->Wrapping).ForceNewLine;
  pTVar4 = &(this->Wrapping).ForceNewLine;
  if (pTVar3 != pTVar4) {
    if ((param_1->Wrapping).ForceNewLine.bIsSet == false) {
      if ((this->Wrapping).ForceNewLine.bIsSet != false) {
        (this->Wrapping).ForceNewLine.bIsSet = false;
        return this;
      }
    }
    else {
      pTVar4->TypedValue = pTVar3->TypedValue;
      (this->Wrapping).ForceNewLine.bIsSet = true;
    }
  }
  return this;
}

