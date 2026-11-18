// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// operator() @ 14cad6ac0

TVector2<double> * __thiscall
`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector2<double> *pTVar7;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pdVar1 = (double *)(*plVar2 + (longlong)param_1 * 0x10);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  return __return_storage_ptr__;
}

