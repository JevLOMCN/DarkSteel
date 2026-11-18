// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 16

// TOptional<float> @ 142f2c3c0

TOptional<float> * __thiscall
TOptional<float>::TOptional<float>(TOptional<float> *this,float *param_1)

{
  this->TypedValue = *param_1;
  this->bIsSet = true;
  return this;
}

// TOptional<float> @ 142f2c3e0

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

// TOptional<float> @ 142f2c400

TOptional<float> * __thiscall
TOptional<float>::TOptional<float>(TOptional<float> *this,float *param_1)

{
  this->TypedValue = *param_1;
  this->bIsSet = true;
  return this;
}

// TOptional<float> @ 142f2c420

TOptional<float> * __thiscall TOptional<float>::TOptional<float>(TOptional<float> *this)

{
  this->bIsSet = false;
  return this;
}

// TOptional<enum_EPopupMethod> @ 142f2c430

TOptional<EPopupMethod> * __thiscall
TOptional<enum_EPopupMethod>::TOptional<enum_EPopupMethod>(void *this,EPopupMethod *param_1)

{
  *(EPopupMethod *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  return this;
}

// TOptional<enum_EPopupMethod> @ 142f2c450

TOptional<EPopupMethod> * __thiscall
TOptional<enum_EPopupMethod>::TOptional<enum_EPopupMethod>(void *this)

{
  *(undefined1 *)((longlong)this + 1) = 0;
  return this;
}

// TOptional<enum_ETextOverflowPolicy> @ 142f2c460

TOptional<ETextOverflowPolicy> * __thiscall
TOptional<enum_ETextOverflowPolicy>::TOptional<enum_ETextOverflowPolicy>
          (void *this,ETextOverflowPolicy *param_1)

{
  *(ETextOverflowPolicy *)this = *param_1;
  *(undefined1 *)((longlong)this + 1) = 1;
  return this;
}

// ~TOptional<FTextFormat> @ 142f39940

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall TOptional<FTextFormat>::~TOptional<FTextFormat>(TOptional<FTextFormat> *this)

{
  if (this->bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->TypedValue).TextFormatData.SharedReferenceCount.ReferenceController);
    return;
  }
  return;
}

// TOptional<unsigned_short> @ 1430554b0

TOptional<unsigned_short> * __thiscall
TOptional<unsigned_short>::TOptional<unsigned_short>
          (TOptional<unsigned_short> *this,ushort *param_1)

{
  this->TypedValue = *param_1;
  this->bIsSet = true;
  return this;
}

// TOptional<int> @ 1430554d0

TOptional<int> * __thiscall TOptional<int>::TOptional<int>(TOptional<int> *this,int *param_1)

{
  this->TypedValue = *param_1;
  this->bIsSet = true;
  return this;
}

// TOptional<UE::Math::TVector2<float>_> @ 1430554f0

TOptional<UE::Math::TVector2<float>_> * __thiscall
TOptional<UE::Math::TVector2<float>_>::TOptional<UE::Math::TVector2<float>_>
          (TOptional<UE::Math::TVector2<float>_> *this)

{
  this->bIsSet = false;
  return this;
}

// TOptional<UE::Math::TVector2<double>_> @ 143055500

TOptional<UE::Math::TVector2<double>_> * __thiscall
TOptional<UE::Math::TVector2<double>_>::TOptional<UE::Math::TVector2<double>_>
          (TOptional<UE::Math::TVector2<double>_> *this)

{
  this->bIsSet = false;
  return this;
}

// TOptional<TTransform2<float>_> @ 143055510

TOptional<TTransform2<float>_> * __thiscall
TOptional<TTransform2<float>_>::TOptional<TTransform2<float>_>
          (TOptional<TTransform2<float>_> *this,TTransform2<float> *param_1)

{
  float afVar1 [2];
  
  afVar1 = (param_1->M).M[1];
  (this->TypedValue).M.M[0] = (param_1->M).M[0];
  (this->TypedValue).M.M[1] = afVar1;
  (this->TypedValue).Trans.field0_0x0 = (param_1->Trans).field0_0x0;
  this->bIsSet = true;
  return this;
}

// TOptional<bool> @ 143055530

TOptional<bool> * __thiscall TOptional<bool>::TOptional<bool>(TOptional<bool> *this)

{
  this->bIsSet = false;
  return this;
}

// GetValue @ 1430ce7b0

ushort * __thiscall TOptional<unsigned_short>::GetValue(TOptional<unsigned_short> *this)

{
  code *pcVar1;
  bool bVar2;
  ushort *puVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (ushort *)(*pcVar1)();
      return puVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 1430ce800

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall TOptional<FTextFormat>::GetValue(TOptional<FTextFormat> *this)

{
  code *pcVar1;
  bool bVar2;
  FTextFormat *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTextFormat *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

