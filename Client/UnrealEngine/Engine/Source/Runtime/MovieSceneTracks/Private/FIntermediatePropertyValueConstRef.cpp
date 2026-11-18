// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// Cast<unsigned_char> @ 1465a4c90

uchar * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<unsigned_char>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a4d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (uchar *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return puVar3;
}

// Cast<double> @ 1465a5010

double * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<double>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a50bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar3 = (double *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pdVar3;
}

// Cast<UE::Math::TRotator<double>_> @ 1465a5230

TRotator<double> * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<UE::Math::TRotator<double>_>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  TRotator<double> *pTVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRotator<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x18) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRotator<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRotator<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a52dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TRotator<double> *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pTVar3;
}

// Cast<UE::MovieScene::FDoubleIntermediateVector> @ 1465a5920

FDoubleIntermediateVector * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FDoubleIntermediateVector>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FDoubleIntermediateVector *pFVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDoubleIntermediateVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDoubleIntermediateVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDoubleIntermediateVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a59cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FDoubleIntermediateVector *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this)
  ;
  return pFVar3;
}

// Cast<UE::MovieScene::FFloatIntermediateVector> @ 1465a5a90

FFloatIntermediateVector * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FFloatIntermediateVector>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FFloatIntermediateVector *pFVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFloatIntermediateVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFloatIntermediateVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFloatIntermediateVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a5b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FFloatIntermediateVector *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pFVar3;
}

// Cast<UE::MovieScene::FIntermediate3DTransform> @ 1465a5b50

FIntermediate3DTransform * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FIntermediate3DTransform>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FIntermediate3DTransform *pFVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIntermediate3DTransform *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x48) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIntermediate3DTransform *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIntermediate3DTransform *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a5bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FIntermediate3DTransform *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pFVar3;
}

// Cast<UE::MovieScene::FIntermediateColor> @ 1465a5cc0

FIntermediateColor * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FIntermediateColor>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FIntermediateColor *pFVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIntermediateColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIntermediateColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIntermediateColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a5d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FIntermediateColor *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pFVar3;
}

// Cast<UE::MovieScene::FObjectComponent> @ 1465a5f30

FObjectComponent * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<UE::MovieScene::FObjectComponent>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FObjectComponent *pFVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectComponent *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectComponent *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectComponent *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a5fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FObjectComponent *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pFVar3;
}

// Cast<FString> @ 1465a60a0

FString * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<FString>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a614d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FString *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pFVar3;
}

// Cast<FText> @ 1465a6210

FText * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<FText>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a62bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FText *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pFVar3;
}

// Cast<__int64> @ 1465a6380

long64 * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<__int64>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  long64 *plVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar3 = (long64 *)(*pcVar1)();
      return plVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar3 = (long64 *)(*pcVar1)();
      return plVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar3 = (long64 *)(*pcVar1)();
      return plVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a642d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar3 = (long64 *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return plVar3;
}

// Cast<bool> @ 1465a64f0

bool * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<bool>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  FIntermediatePropertyValueConstRef *pFVar4;
  
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
  }
  pFVar4 = this;
  if (!(this->Value).bInline) {
    pFVar4 = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
  if (*(int *)((pFVar4->Value).Data.Pad + 8) != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value->SizeofT == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
  }
  if (!(this->Value).bIsValid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x0001465a659d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar3 = (bool *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pbVar3;
}

