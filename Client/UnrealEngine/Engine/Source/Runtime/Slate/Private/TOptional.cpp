// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 11

// GetValue @ 142745da0

ETextOverflowPolicy * __thiscall TOptional<enum_ETextOverflowPolicy>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  ETextOverflowPolicy *pEVar3;
  
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (ETextOverflowPolicy *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

// TOptional<FSizeParam> @ 1427aa6c0

TOptional<FSizeParam> * __thiscall
TOptional<FSizeParam>::TOptional<FSizeParam>(TOptional<FSizeParam> *this,FSizeParam *param_1)

{
  (this->TypedValue).SizeRule = param_1->SizeRule;
  (this->TypedValue).Value.Value = (param_1->Value).Value;
  (this->TypedValue).Value.bIsSet = (param_1->Value).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).Value.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Value).Getter);
  (this->TypedValue).ShrinkValue.Value = (param_1->ShrinkValue).Value;
  (this->TypedValue).ShrinkValue.bIsSet = (param_1->ShrinkValue).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).ShrinkValue.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ShrinkValue).Getter);
  this->bIsSet = true;
  return this;
}

// operator= @ 1427bb5e0

TOptional<FSizeParam> * __thiscall
TOptional<FSizeParam>::operator=(TOptional<FSizeParam> *this,TOptional<FSizeParam> *param_1)

{
  void *pvVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                   &(this->TypedValue).ShrinkValue.Getter);
        pvVar1 = *(void **)&(this->TypedValue).ShrinkValue.Getter.field_0x8;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).ShrinkValue.Getter);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).Value.Getter);
        pvVar1 = *(void **)&(this->TypedValue).Value.Getter.field_0x8;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).Value.Getter);
      }
      FSizeParam::FSizeParam(&this->TypedValue,&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).ShrinkValue.Getter
                );
      pvVar1 = *(void **)&(this->TypedValue).ShrinkValue.Getter.field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).ShrinkValue.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).Value.Getter);
      pvVar1 = *(void **)&(this->TypedValue).Value.Getter.field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&(this->TypedValue).Value.Getter);
      this->bIsSet = false;
    }
  }
  return this;
}

// GetValue @ 142816470

EVisibility * __thiscall TOptional<EVisibility>::GetValue(TOptional<EVisibility> *this)

{
  code *pcVar1;
  bool bVar2;
  EVisibility *pEVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (EVisibility *)(*pcVar1)();
      return pEVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 1428164c0

TEnumAsByte<EVerticalAlignment> * __thiscall
TOptional<TEnumAsByte<enum_EVerticalAlignment>_>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVerticalAlignment> *pTVar3;
  
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TEnumAsByte<EVerticalAlignment> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// GetValue @ 142816510

ESizeRule * __thiscall TOptional<enum_FSizeParam::ESizeRule>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  ESizeRule *pEVar3;
  
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (ESizeRule *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

// GetValue @ 142816560

EVerticalAlignment * __thiscall TOptional<enum_EVerticalAlignment>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  EVerticalAlignment *pEVar3;
  
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (EVerticalAlignment *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

// GetValue @ 1428165b0

bool * __thiscall TOptional<bool>::GetValue(TOptional<bool> *this)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 14294b080

EPopupMethod * __thiscall TOptional<enum_EPopupMethod>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  EPopupMethod *pEVar3;
  
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (EPopupMethod *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

// GetValue @ 14294b0d0

ETextFlowDirection * __thiscall TOptional<enum_ETextFlowDirection>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  ETextFlowDirection *pEVar3;
  
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (ETextFlowDirection *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

// GetValue @ 14294b120

ETextShapingMethod * __thiscall TOptional<enum_ETextShapingMethod>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  ETextShapingMethod *pEVar3;
  
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (ETextShapingMethod *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

