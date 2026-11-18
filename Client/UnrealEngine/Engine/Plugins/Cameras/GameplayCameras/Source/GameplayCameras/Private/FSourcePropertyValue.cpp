// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Cast<FCameraFramingZone> @ 14d5ed8b0

FCameraFramingZone * __thiscall
UE::MovieScene::FSourcePropertyValue::Cast<FCameraFramingZone>(FSourcePropertyValue *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FCameraFramingZone *pFVar4;
  FSourcePropertyValue *pFVar5;
  
  if (!(this->Value).bIsValid) {
    return (FCameraFramingZone *)0x0;
  }
  pFVar5 = this;
  if (!(this->Value).bInline) {
    pFVar5 = *(FSourcePropertyValue **)(this->Value).Data.Pad;
  }
  pFVar4 = (FCameraFramingZone *)(**(code **)(*(longlong *)(pFVar5->Value).Data.Pad + 8))();
  if (pFVar4 != (FCameraFramingZone *)0x0) {
    if ((!(this->Value).bIsValid) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCameraFramingZone *)(*pcVar2)();
      return pFVar4;
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
      pFVar4 = (FCameraFramingZone *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

