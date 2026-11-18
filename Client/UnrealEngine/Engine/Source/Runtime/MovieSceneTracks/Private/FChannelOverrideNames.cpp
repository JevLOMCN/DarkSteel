// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetChannelName @ 146689510

FName __thiscall
UE::MovieScene::FChannelOverrideNames::GetChannelName(FChannelOverrideNames *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  int iVar4;
  int in_R8D;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  iVar4 = in_R8D - this->IndexOffset;
  if ((-1 < iVar4) && (iVar4 < (this->ChannelNames).ArrayNum)) {
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    *(undefined8 *)FVar3 =
         *(undefined8 *)((this->ChannelNames).AllocatorInstance.Data + (longlong)iVar4 * 8);
    return FVar3;
  }
  *(undefined8 *)FVar3 = 0;
  return FVar3;
}

