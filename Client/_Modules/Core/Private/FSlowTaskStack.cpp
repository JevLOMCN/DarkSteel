// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetProgressFraction @ 14194a530

float __thiscall FSlowTaskStack::GetProgressFraction(FSlowTaskStack *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = __real_3f800000;
  uVar5 = *(int *)&this->field_0x8 - 1;
  lVar6 = (longlong)(int)uVar5;
  fVar9 = 0.0;
  if (lVar6 < param_1) {
    fVar9 = 0.0;
  }
  else {
    do {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&this->field_0x8) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
      uVar5 = uVar5 - 1;
      lVar1 = *(longlong *)(*(longlong *)this + lVar6 * 8);
      lVar6 = lVar6 + -1;
      fVar8 = fVar7 / *(float *)(lVar1 + 0x20);
      fVar9 = fVar8 * *(float *)(lVar1 + 0x28) * fVar9 + fVar8 * *(float *)(lVar1 + 0x24);
    } while (param_1 <= lVar6);
  }
  return fVar9;
}

