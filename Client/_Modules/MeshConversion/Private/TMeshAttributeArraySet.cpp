// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 1

// GetArrayForChannel @ 1443d5f40

TMeshAttributeArrayBase<float> * __thiscall
TMeshAttributeArraySet<float>::GetArrayForChannel(TMeshAttributeArraySet<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<float> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<float> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

