// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// DeterminantTimesInverseTranspose @ 14c72b9d0

TMatrix3<double> * __thiscall
UE::Geometry::TMatrix3<double>::DeterminantTimesInverseTranspose
          (TMatrix3<double> *this,TMatrix3<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = (this->Row2).field0_0x0._s_0.Y;
  dVar2 = (this->Row2).field0_0x0._s_0.Z;
  dVar3 = (this->Row2).field0_0x0._s_0.X;
  dVar4 = (this->Row0).field0_0x0._s_0.Z;
  dVar5 = (this->Row1).field0_0x0._s_0.Z;
  dVar6 = (this->Row0).field0_0x0._s_0.X;
  dVar7 = (this->Row0).field0_0x0._s_0.Y;
  dVar8 = (this->Row1).field0_0x0._s_0.X;
  dVar9 = (this->Row1).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.X = dVar2 * dVar9 - dVar1 * dVar5;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = dVar3 * dVar5 - dVar2 * dVar8;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z = dVar1 * dVar8 - dVar3 * dVar9;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.X = dVar1 * dVar4 - dVar2 * dVar7;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = dVar2 * dVar6 - dVar3 * dVar4;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = dVar3 * dVar7 - dVar1 * dVar6;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = dVar9 * dVar6 - dVar8 * dVar7;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = dVar8 * dVar4 - dVar5 * dVar6;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.X = dVar5 * dVar7 - dVar9 * dVar4;
  return __return_storage_ptr__;
}

// Inverse @ 14c74f970

TMatrix3<double> * __thiscall
UE::Geometry::TMatrix3<double>::Inverse
          (TMatrix3<double> *this,TMatrix3<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  TMatrix3<double> *pTVar15;
  double dVar16;
  
  dVar1 = (this->Row1).field0_0x0._s_0.Z;
  dVar2 = (this->Row0).field0_0x0._s_0.Z;
  dVar3 = (this->Row1).field0_0x0._s_0.Y;
  dVar4 = (this->Row2).field0_0x0._s_0.Y;
  dVar5 = (this->Row2).field0_0x0._s_0.Z;
  dVar6 = (this->Row1).field0_0x0._s_0.X;
  dVar7 = (this->Row2).field0_0x0._s_0.X;
  dVar8 = (this->Row0).field0_0x0._s_0.X;
  dVar9 = (this->Row0).field0_0x0._s_0.Y;
  dVar11 = dVar5 * dVar3 - dVar4 * dVar1;
  dVar12 = dVar4 * dVar2 - dVar5 * dVar9;
  dVar13 = dVar1 * dVar9 - dVar3 * dVar2;
  dVar16 = dVar12 * dVar6 + dVar11 * dVar8 + dVar13 * dVar7;
  if ((double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3cb0000000000000) {
    bVar14 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8115802994596904758>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MatrixTypes.h"
                        ,0xca,"TMathUtil<RealType>::Abs(det) >= TMathUtil<RealType>::Epsilon");
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      pTVar15 = (TMatrix3<double> *)(*pcVar10)();
      return pTVar15;
    }
  }
  dVar16 = __real_3ff0000000000000 / dVar16;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.X = dVar16 * dVar11;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z = dVar16 * dVar13;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = dVar16 * dVar12;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = dVar16 * (dVar6 * dVar2 - dVar1 * dVar8);
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = (dVar5 * dVar8 - dVar7 * dVar2) * dVar16;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.X = (dVar4 * dVar6 - dVar7 * dVar3) * dVar16;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = (dVar3 * dVar8 - dVar6 * dVar9) * dVar16;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = dVar16 * (dVar7 * dVar9 - dVar4 * dVar8);
  (__return_storage_ptr__->Row1).field0_0x0._s_0.X = dVar16 * (dVar7 * dVar1 - dVar5 * dVar6);
  return __return_storage_ptr__;
}

