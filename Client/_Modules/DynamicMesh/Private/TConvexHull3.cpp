// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator() @ 14c7ba2a0

TVector<double> * __thiscall
`UE::Geometry::TConvexHull3<double>::Solve<UE::Math::TVector<double>_>'::__l2::<lambda_1>::
operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  plVar3 = *(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

