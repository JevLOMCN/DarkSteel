// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 24

// Cast<signed_char> @ 1465a4be0

schar * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<signed_char>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  schar *psVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (schar *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  psVar4 = (schar *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (psVar4 != (schar *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      psVar4 = (schar *)(*pcVar2)();
      return psVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      psVar4 = (schar *)(*pcVar2)();
      return psVar4;
    }
  }
  return psVar4;
}

// Cast<unsigned_char> @ 1465a4d50

uchar * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<unsigned_char>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (uchar *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  puVar4 = (uchar *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (puVar4 != (uchar *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
  }
  return puVar4;
}

// Cast<short> @ 1465a4e00

short * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<short>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  short *psVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (short *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  psVar4 = (short *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (psVar4 != (short *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      psVar4 = (short *)(*pcVar2)();
      return psVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      psVar4 = (short *)(*pcVar2)();
      return psVar4;
    }
  }
  return psVar4;
}

// Cast<int> @ 1465a4eb0

int * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<int>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (int *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  piVar4 = (int *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (piVar4 != (int *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      piVar4 = (int *)(*pcVar2)();
      return piVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      piVar4 = (int *)(*pcVar2)();
      return piVar4;
    }
  }
  return piVar4;
}

// Cast<float> @ 1465a4f60

float * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<float>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (float *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pfVar4 = (float *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pfVar4 != (float *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar2)();
      return pfVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar2)();
      return pfVar4;
    }
  }
  return pfVar4;
}

// Cast<double> @ 1465a50d0

double * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<double>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (double *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pdVar4 = (double *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pdVar4 != (double *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar2)();
      return pdVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar2)();
      return pdVar4;
    }
  }
  return pdVar4;
}

// Cast<UObject_*> @ 1465a5180

UObject ** __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UObject_*>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  UObject **ppUVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (UObject **)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  ppUVar4 = (UObject **)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (ppUVar4 != (UObject **)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      ppUVar4 = (UObject **)(*pcVar2)();
      return ppUVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      ppUVar4 = (UObject **)(*pcVar2)();
      return ppUVar4;
    }
  }
  return ppUVar4;
}

// Cast<UE::Math::TRotator<double>_> @ 1465a52f0

TRotator<double> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TRotator<double>_>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TRotator<double> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TRotator<double> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TRotator<double> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TRotator<double> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TRotator<double> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x18) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TRotator<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<UE::Math::TTransform<double>_> @ 1465a53a0

TTransform<double> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TTransform<double>_>
          (FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TTransform<double> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TTransform<double> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TTransform<double> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x60) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<UE::Math::TVector2<float>_> @ 1465a5450

TVector2<float> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TVector2<float>_>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<float> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TVector2<float> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TVector2<float> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TVector2<float> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<float> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<UE::Math::TVector2<double>_> @ 1465a5500

TVector2<double> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TVector2<double>_>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TVector2<double> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TVector2<double> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TVector2<double> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<UE::Math::TVector4<float>_> @ 1465a55b0

TVector4<float> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TVector4<float>_>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TVector4<float> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TVector4<float> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TVector4<float> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TVector4<float> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<UE::Math::TVector4<double>_> @ 1465a5660

TVector4<double> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TVector4<double>_>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TVector4<double> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TVector4<double> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TVector4<double> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TVector4<double> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector4<double> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x20) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector4<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<UE::Math::TVector<float>_> @ 1465a5710

TVector<float> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TVector<float>_>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TVector<float> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TVector<float> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TVector<float> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<UE::Math::TVector<double>_> @ 1465a57c0

TVector<double> * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::Math::TVector<double>_>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (TVector<double> *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pTVar4 = (TVector<double> *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pTVar4 != (TVector<double> *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar2)();
      return pTVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x18) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar4;
}

// Cast<FColor> @ 1465a5870

FColor * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<FColor>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FColor *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FColor *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FColor *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FColor *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FColor *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<FEulerTransform> @ 1465a59e0

FEulerTransform * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<FEulerTransform>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FEulerTransform *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FEulerTransform *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FEulerTransform *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FEulerTransform *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FEulerTransform *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x48) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FEulerTransform *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<UE::MovieScene::FIntermediate3DTransform> @ 1465a5c10

FIntermediate3DTransform * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<UE::MovieScene::FIntermediate3DTransform>
          (FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FIntermediate3DTransform *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FIntermediate3DTransform *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FIntermediate3DTransform *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FIntermediate3DTransform *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FIntermediate3DTransform *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x48) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FIntermediate3DTransform *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<FLinearColor> @ 1465a5d80

FLinearColor * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<FLinearColor>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FLinearColor *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FLinearColor *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FLinearColor *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FLinearColor *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<FSlateColor> @ 1465a5ff0

FSlateColor * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<FSlateColor>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FSlateColor *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FSlateColor *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FSlateColor *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FSlateColor *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateColor *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x14) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<FString> @ 1465a6160

FString * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<FString>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FString *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FString *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FString *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<FText> @ 1465a62d0

FText * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<FText>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FText *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FText *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FText *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<__int64> @ 1465a6440

long64 * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<__int64>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  long64 *plVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (long64 *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  plVar4 = (long64 *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (plVar4 != (long64 *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      plVar4 = (long64 *)(*pcVar2)();
      return plVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      plVar4 = (long64 *)(*pcVar2)();
      return plVar4;
    }
  }
  return plVar4;
}

// Cast<bool> @ 1465a65b0

bool * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<bool>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool *pbVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (bool *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pbVar4 = (bool *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pbVar4 != (bool *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar2)();
      return pbVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar2)();
      return pbVar4;
    }
  }
  return pbVar4;
}

