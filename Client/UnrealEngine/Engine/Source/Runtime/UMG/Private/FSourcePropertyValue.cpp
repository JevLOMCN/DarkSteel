// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// Cast<FMargin> @ 1468e42f0

FMargin * __thiscall UE::MovieScene::FSourcePropertyValue::Cast<FMargin>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FMargin *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FMargin *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FMargin *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FMargin *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMargin *)(*pcVar2)();
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
      pFVar4 = (FMargin *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// Cast<FWidgetTransform> @ 1468e43a0

FWidgetTransform * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<FWidgetTransform>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FWidgetTransform *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FWidgetTransform *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FWidgetTransform *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FWidgetTransform *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWidgetTransform *)(*pcVar2)();
      return pFVar4;
    }
    if (!(this->Value).bInline) {
      this = *(FSourcePropertyValue **)(this->Value).Data.Pad;
    }
    if ((*(int *)((this->Value).Data.Pad + 8) != 0x38) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Address || Value->SizeofT == sizeof(T)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneIntermediatePropertyValue.h"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWidgetTransform *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

