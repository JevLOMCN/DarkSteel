// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Cast<FCameraFramingZone> @ 14d5ed7f0

FCameraFramingZone * __thiscall
UE::MovieScene::FIntermediatePropertyValueConstRef::Cast<FCameraFramingZone>
          (FIntermediatePropertyValueConstRef *this)

{
  code *pcVar1;
  bool bVar2;
  FCameraFramingZone *pFVar3;
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
      pFVar3 = (FCameraFramingZone *)(*pcVar1)();
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
      pFVar3 = (FCameraFramingZone *)(*pcVar1)();
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
      pFVar3 = (FCameraFramingZone *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (!(this->Value).bInline) {
    this = *(FIntermediatePropertyValueConstRef **)(this->Value).Data.Pad;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d5ed89d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FCameraFramingZone *)(**(code **)(*(longlong *)(this->Value).Data.Pad + 8))(this);
  return pFVar3;
}

