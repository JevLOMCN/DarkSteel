// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 1

// GetActivitedParticleNum @ 14ac97d20

int __thiscall
FEasyParticleChildEmitterArray::GetActivitedParticleNum(FEasyParticleChildEmitterArray *this)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar6 = 0;
  uVar7 = 0;
  if (0 < (this->ChildrenParticle).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ChildrenParticle).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      lVar2 = *(longlong *)((this->ChildrenParticle).AllocatorInstance.Data + lVar8);
      if ((*(char *)(lVar2 + 0x3d8) != '\0') ||
         (((*(char *)(lVar2 + 0x3da) == '\0' &&
           (fVar1 = *(float *)(lVar2 + 0x138),
           *(float *)(lVar2 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar2 + 0x14))) && (0.0 < fVar1)
          ))) {
        iVar6 = iVar6 + 1;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->ChildrenParticle).ArrayNum);
  }
  return iVar6;
}

