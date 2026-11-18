// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSceneViewFamilyContext @ 14850d9f0

FSceneViewFamilyContext * __thiscall
FSceneViewFamilyContext::FSceneViewFamilyContext
          (FSceneViewFamilyContext *this,ConstructionValues *param_1)

{
  FSceneViewFamily::FSceneViewFamily((FSceneViewFamily *)this,param_1);
  *(undefined ***)this = &___7FSceneViewFamilyContext__6B_;
  return this;
}

// ~FSceneViewFamilyContext @ 148510e60

void __thiscall FSceneViewFamilyContext::~FSceneViewFamilyContext(FSceneViewFamilyContext *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  *(undefined ***)this = &___7FSceneViewFamilyContext__6B_;
  if (0 < *(int *)&this->field_0x10) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&this->field_0x10) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = *(undefined8 **)(lVar6 + *(longlong *)&this->field_0x8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < *(int *)&this->field_0x10);
  }
  FSceneViewFamily::~FSceneViewFamily((FSceneViewFamily *)this);
  return;
}

