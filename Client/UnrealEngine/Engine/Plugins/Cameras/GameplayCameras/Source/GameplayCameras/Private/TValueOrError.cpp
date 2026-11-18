// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// GetValue @ 14d661d60

FFloatCameraParameter ** __thiscall
TValueOrError<FFloatCameraParameter_*,enum_EPropertyBagResult>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  FFloatCameraParameter **ppFVar3;
  
  if (*(char *)((longlong)this + 8) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar3 = (FFloatCameraParameter **)(*pcVar1)();
      return ppFVar3;
    }
  }
  return this;
}

// GetValue @ 14d661db0

FVector3dCameraParameter ** __thiscall
TValueOrError<FVector3dCameraParameter_*,enum_EPropertyBagResult>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  FVector3dCameraParameter **ppFVar3;
  
  if (*(char *)((longlong)this + 8) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar3 = (FVector3dCameraParameter **)(*pcVar1)();
      return ppFVar3;
    }
  }
  return this;
}

