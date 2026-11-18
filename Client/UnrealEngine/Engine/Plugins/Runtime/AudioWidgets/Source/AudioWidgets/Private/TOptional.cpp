// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// TOptional<float> @ 14d8a77e0

TOptional<float> * __thiscall
TOptional<float>::TOptional<float>(TOptional<float> *this,TOptional<float> *param_1)

{
  bool bVar1;
  
  this->bIsSet = false;
  bVar1 = param_1->bIsSet;
  this->bIsSet = bVar1;
  if (bVar1 != false) {
    this->TypedValue = param_1->TypedValue;
  }
  return this;
}

// operator= @ 14d8c2c70

TOptional<UE::Math::TVector2<float>_> * __thiscall
TOptional<UE::Math::TVector2<float>_>::operator=
          (TOptional<UE::Math::TVector2<float>_> *this,TVector2<float> *param_1)

{
  if ((TOptional<UE::Math::TVector2<float>_> *)param_1 != this) {
    (this->TypedValue).field0_0x0 = param_1->field0_0x0;
    this->bIsSet = true;
  }
  return this;
}

// GetValue @ 14d938160

TVector2<float> * __thiscall
TOptional<UE::Math::TVector2<float>_>::GetValue(TOptional<UE::Math::TVector2<float>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector2<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// IsSet @ 14d93f5a0

bool __thiscall TOptional<float>::IsSet(TOptional<float> *this)

{
  return this->bIsSet;
}

// IsSet @ 14d93f5b0

bool __thiscall
TOptional<UE::Math::TVector2<float>_>::IsSet(TOptional<UE::Math::TVector2<float>_> *this)

{
  return this->bIsSet;
}

// Reset @ 14d964530

void __thiscall
TOptional<UE::Math::TVector2<float>_>::Reset(TOptional<UE::Math::TVector2<float>_> *this)

{
  if (this->bIsSet != false) {
    this->bIsSet = false;
  }
  return;
}

