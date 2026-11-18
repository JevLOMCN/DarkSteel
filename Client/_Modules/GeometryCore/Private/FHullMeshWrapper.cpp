// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// GetTriVertices @ 1433b29f0

void __thiscall
`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
          (void *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint local_18;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x98)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x90);
  uVar8 = *(ulonglong *)(lVar3 + (longlong)param_1 * 0xc);
  uVar7 = *(uint *)(lVar3 + 8 + (longlong)param_1 * 0xc);
  local_18 = (uint)uVar8;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(local_18 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + (ulonglong)(local_18 & 0x1ff) * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (ulonglong)(local_18 & 0x1ff) * 0x18);
  (param_2->field0_0x0)._s_0.X = *pdVar1;
  (param_2->field0_0x0)._s_0.Y = dVar5;
  uVar9 = (ulonglong)((uint)(uVar8 >> 0x20) & 0x1ff);
  (param_2->field0_0x0)._s_0.Z = dVar2;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (uVar8 >> 0x29) * 8);
  pdVar1 = (double *)(lVar3 + uVar9 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
  (param_3->field0_0x0)._s_0.X = *pdVar1;
  (param_3->field0_0x0)._s_0.Y = dVar5;
  (param_3->field0_0x0)._s_0.Z = dVar2;
  uVar8 = (ulonglong)(uVar7 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar8 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
  (param_4->field0_0x0)._s_0.X = *pdVar1;
  (param_4->field0_0x0)._s_0.Y = dVar5;
  (param_4->field0_0x0)._s_0.Z = dVar2;
  return;
}

