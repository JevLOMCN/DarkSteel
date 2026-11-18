// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// Accumulate @ 14ceb3bf0

void __thiscall
UE::Geometry::TClusterCenterArray<UE::Math::TVector<double>,0>::Accumulate
          (TClusterCenterArray<UE::Math::TVector<double>,0> *this,int param_1,
          TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->Values).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  *(double *)(pFVar1 + lVar5 * 0x18) =
       (param_2->field0_0x0)._s_0.X + *(double *)(pFVar1 + lVar5 * 0x18);
  *(double *)(pFVar1 + lVar5 * 0x18 + 8) =
       (param_2->field0_0x0)._s_0.Y + *(double *)(pFVar1 + lVar5 * 0x18 + 8);
  *(double *)(pFVar1 + lVar5 * 0x18 + 0x10) =
       (param_2->field0_0x0)._s_0.Z + *(double *)(pFVar1 + lVar5 * 0x18 + 0x10);
  return;
}

