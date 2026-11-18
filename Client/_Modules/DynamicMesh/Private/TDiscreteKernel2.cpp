// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// EvaluateFromOffset @ 14c8e12f0

float __thiscall
UE::Geometry::TDiscreteKernel2<float>::EvaluateFromOffset
          (TDiscreteKernel2<float> *this,FVector2i *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  iVar1 = this->IntRadius;
  uVar5 = ((param_1->field0_0x0)._s_0.Y + iVar1) * (iVar1 * 2 + 1) + (param_1->field0_0x0)._s_0.X +
          iVar1;
  uVar4 = 0;
  if ((int)uVar5 < (this->Kernel).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  return *(float *)((this->Kernel).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

