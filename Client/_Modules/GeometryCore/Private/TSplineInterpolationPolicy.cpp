// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// InterpolateWithBasis @ 1435b9310

TVector<double> * __cdecl
UE::Geometry::Spline::TSplineInterpolationPolicy<UE::Math::TVector<double>_>::InterpolateWithBasis
          (TVector<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_*_const,int> *param_1,
          TArrayView<float_const_,int> *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  
  iVar4 = param_2->ArrayNum;
  iVar5 = param_1->ArrayNum;
  uVar10 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  if (iVar5 < iVar4) {
    iVar4 = iVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  if (0 < (longlong)iVar4) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar5) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TVector<double> *)(*pcVar6)();
        return pTVar9;
      }
      pTVar9 = param_1->DataPtr[lVar11];
      uVar8 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TVector<double> *)(*pcVar6)();
        return pTVar9;
      }
      uVar10 = uVar10 + 1;
      pfVar1 = param_2->DataPtr + lVar11;
      lVar11 = lVar11 + 1;
      dVar12 = (double)*pfVar1;
      dVar2 = (pTVar9->field0_0x0)._s_0.Y;
      dVar3 = (pTVar9->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           dVar12 * (pTVar9->field0_0x0)._s_0.X + (__return_storage_ptr__->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           dVar12 * dVar2 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           dVar12 * dVar3 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    } while (lVar11 < iVar4);
  }
  return __return_storage_ptr__;
}

