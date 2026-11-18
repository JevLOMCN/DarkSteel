// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// UpdateNumActiveMorphTargets @ 147979bc0

void __thiscall
FExternalMorphSetWeights::UpdateNumActiveMorphTargets(FExternalMorphSetWeights *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  this->NumActiveMorphTargets = 0;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (0 < (this->Weights).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Weights).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this->ActiveWeightThreshold <=
          (float)(*(uint *)((this->Weights).AllocatorInstance.Data + lVar5) & uVar2)) {
        this->NumActiveMorphTargets = this->NumActiveMorphTargets + 1;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar6 < (this->Weights).ArrayNum);
  }
  return;
}

// ZeroWeights @ 14797d550

void __thiscall FExternalMorphSetWeights::ZeroWeights(FExternalMorphSetWeights *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = (longlong)(this->Weights).ArrayNum;
  uVar6 = 0;
  if (0 < lVar5) {
    lVar4 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Weights).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(undefined4 *)((this->Weights).AllocatorInstance.Data + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar5);
  }
  if (param_1) {
    this->NumActiveMorphTargets = 0;
  }
  return;
}

