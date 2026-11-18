// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FMenuEntryStyleParams @ 1427b31f0

FMenuEntryStyleParams * __thiscall
FMenuEntryStyleParams::FMenuEntryStyleParams
          (FMenuEntryStyleParams *this,FMenuEntryStyleParams *param_1)

{
  bool bVar1;
  EHorizontalAlignment EVar2;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  
  this->bNoIndent = param_1->bNoIndent;
  EVar2 = param_1->HorizontalAlignment;
  (this->VerticalAlignment).bIsSet = false;
  this->HorizontalAlignment = EVar2;
  bVar1 = (param_1->VerticalAlignment).bIsSet;
  (this->VerticalAlignment).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->VerticalAlignment).TypedValue = (param_1->VerticalAlignment).TypedValue;
  }
  (this->SizeRule).bIsSet = false;
  bVar1 = (param_1->SizeRule).bIsSet;
  (this->SizeRule).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->SizeRule).TypedValue = (param_1->SizeRule).TypedValue;
  }
  (this->MinSize).bIsSet = false;
  bVar1 = (param_1->MinSize).bIsSet;
  (this->MinSize).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->MinSize).TypedValue = (param_1->MinSize).TypedValue;
  }
  (this->MaxSize).bIsSet = false;
  bVar1 = (param_1->MaxSize).bIsSet;
  (this->MaxSize).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->MaxSize).TypedValue = (param_1->MaxSize).TypedValue;
  }
  (this->DesiredWidth).bIsSet = false;
  bVar1 = (param_1->DesiredWidth).bIsSet;
  (this->DesiredWidth).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->DesiredWidth).TypedValue = (param_1->DesiredWidth).TypedValue;
  }
  (this->DesiredHeight).bIsSet = false;
  bVar1 = (param_1->DesiredHeight).bIsSet;
  (this->DesiredHeight).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->DesiredHeight).TypedValue = (param_1->DesiredHeight).TypedValue;
  }
  (this->FillSize).bIsSet = false;
  bVar1 = (param_1->FillSize).bIsSet;
  (this->FillSize).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->FillSize).TypedValue = (param_1->FillSize).TypedValue;
  }
  (this->FillSizeMin).bIsSet = false;
  bVar1 = (param_1->FillSizeMin).bIsSet;
  (this->FillSizeMin).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->FillSizeMin).TypedValue = (param_1->FillSizeMin).TypedValue;
  }
  (this->MinimumSize).Value = (param_1->MinimumSize).Value;
  (this->MinimumSize).bIsSet = (param_1->MinimumSize).bIsSet;
  pTVar3 = &(this->MinimumSize).Getter;
  *(undefined8 *)pTVar3 = 0;
  *(undefined8 *)&(this->MinimumSize).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->MinimumSize).Getter.field_0x10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar3,&(param_1->MinimumSize).Getter);
  pTVar3 = &(this->MaximumSize).Getter;
  (this->MaximumSize).Value = (param_1->MaximumSize).Value;
  (this->MaximumSize).bIsSet = (param_1->MaximumSize).bIsSet;
  *(undefined8 *)pTVar3 = 0;
  *(undefined8 *)&(this->MaximumSize).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->MaximumSize).Getter.field_0x10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar3,&(param_1->MaximumSize).Getter);
  (this->DesiredWidthOverride).Value.Size = (param_1->DesiredWidthOverride).Value.Size;
  (this->DesiredWidthOverride).bIsSet = (param_1->DesiredWidthOverride).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->DesiredWidthOverride).Getter,&(param_1->DesiredWidthOverride).Getter);
  (this->DesiredHeightOverride).Value.Size = (param_1->DesiredHeightOverride).Value.Size;
  (this->DesiredHeightOverride).bIsSet = (param_1->DesiredHeightOverride).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->DesiredHeightOverride).Getter,&(param_1->DesiredHeightOverride).Getter);
  return this;
}

// FMenuEntryStyleParams @ 1427b3380

FMenuEntryStyleParams * __thiscall
FMenuEntryStyleParams::FMenuEntryStyleParams(FMenuEntryStyleParams *this)

{
  float fVar1;
  
  this->bNoIndent = false;
  this->HorizontalAlignment = HAlign_Fill;
  (this->VerticalAlignment).bIsSet = false;
  (this->SizeRule).bIsSet = false;
  (this->MinSize).bIsSet = false;
  (this->MaxSize).bIsSet = false;
  (this->DesiredWidth).bIsSet = false;
  (this->DesiredHeight).bIsSet = false;
  (this->FillSize).bIsSet = false;
  (this->FillSizeMin).bIsSet = false;
  (this->MinimumSize).Value = 0.0;
  (this->MinimumSize).bIsSet = false;
  *(undefined8 *)&(this->MinimumSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinimumSize).Getter = 0;
  *(undefined8 *)&(this->MinimumSize).Getter.field_0x8 = 0;
  (this->MaximumSize).Value = 0.0;
  (this->MaximumSize).bIsSet = false;
  *(undefined8 *)&(this->MaximumSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaximumSize).Getter = 0;
  *(undefined8 *)&(this->MaximumSize).Getter.field_0x8 = 0;
  fVar1 = FOptionalSize::Unspecified;
  (this->DesiredWidthOverride).bIsSet = false;
  (this->DesiredWidthOverride).Value.Size = fVar1;
  *(undefined8 *)&(this->DesiredWidthOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DesiredWidthOverride).Getter = 0;
  *(undefined8 *)&(this->DesiredWidthOverride).Getter.field_0x8 = 0;
  fVar1 = FOptionalSize::Unspecified;
  (this->DesiredHeightOverride).bIsSet = false;
  (this->DesiredHeightOverride).Value.Size = fVar1;
  *(undefined8 *)&(this->DesiredHeightOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DesiredHeightOverride).Getter = 0;
  *(undefined8 *)&(this->DesiredHeightOverride).Getter.field_0x8 = 0;
  return this;
}

// ~FMenuEntryStyleParams @ 1427b9310

void __thiscall FMenuEntryStyleParams::~FMenuEntryStyleParams(FMenuEntryStyleParams *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredHeightOverride).Getter);
  pvVar1 = *(void **)&(this->DesiredHeightOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesiredHeightOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesiredWidthOverride).Getter);
  pvVar1 = *(void **)&(this->DesiredWidthOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesiredWidthOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaximumSize).Getter);
  pvVar1 = *(void **)&(this->MaximumSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaximumSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinimumSize).Getter);
  pvVar1 = *(void **)&(this->MinimumSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinimumSize).Getter);
  return;
}

