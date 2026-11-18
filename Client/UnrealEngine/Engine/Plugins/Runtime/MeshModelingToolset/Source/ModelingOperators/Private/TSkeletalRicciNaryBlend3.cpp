// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// Value @ 14c987aa0

double __thiscall
UE::Geometry::
TSkeletalRicciNaryBlend3<UE::Geometry::TDistanceFieldToSkeletalField<UE::Geometry::TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>,double>,double>
::Value(TSkeletalRicciNaryBlend3<UE::Geometry::TDistanceFieldToSkeletalField<UE::Geometry::TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>,double>,double>
        *this,TVector<double> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8 [6];
  
  iVar7 = (this->Children).ArrayNum;
  lVar9 = (longlong)iVar7;
  if ((iVar7 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    dVar12 = (double)(*pcVar2)();
    return dVar12;
  }
  local_108._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_108._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_108._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  puVar1 = *(undefined8 **)(this->Children).AllocatorInstance.Data;
  dVar19 = TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
           ::Value<0>((TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
                       *)*puVar1,(TVector<double> *)&local_108._s_0);
  dVar5 = __real_3fe0000000000000;
  dVar4 = __real_3ff0000000000000;
  dVar12 = (double)puVar1[1];
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (dVar19 <= dVar12) {
    dVar14 = __real_3ff0000000000000;
    if ((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar18,SUB84(dVar12,0) ^ uVar17) <=
        dVar19) {
      dVar12 = (dVar12 + dVar19) * (__real_3fe0000000000000 / dVar12);
      dVar12 = __real_3ff0000000000000 - dVar12 * dVar12;
      dVar14 = dVar12 * dVar12 * dVar12;
    }
  }
  else {
    dVar14 = 0.0;
  }
  uVar11 = 1;
  dVar12 = this->BlendPower;
  uVar15 = SUB84(dVar12,0);
  uVar16 = (undefined4)((ulonglong)dVar12 >> 0x20);
  iVar7 = 1;
  if (this->bSubtract != false) {
    iVar7 = -1;
  }
  dVar19 = (double)iVar7;
  if (dVar12 == __real_3ff0000000000000) {
    if (1 < lVar9) {
      lVar10 = 1;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->Children).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          dVar12 = (double)(*pcVar2)();
          return dVar12;
        }
        local_e8._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_e8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_e8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        puVar1 = *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar10 * 8);
        dVar3 = TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
                ::Value<0>((TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
                            *)*puVar1,(TVector<double> *)&local_e8._s_0);
        dVar12 = (double)puVar1[1];
        if (dVar3 <= dVar12) {
          dVar13 = dVar4;
          if ((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar18,SUB84(dVar12,0) ^ uVar17)
              <= dVar3) {
            dVar12 = (dVar12 + dVar3) * (dVar5 / dVar12);
            dVar12 = dVar4 - dVar12 * dVar12;
            dVar13 = dVar12 * dVar12 * dVar12;
          }
        }
        else {
          dVar13 = 0.0;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 1;
        dVar14 = dVar14 + dVar13 * dVar19;
      } while (lVar10 < lVar9);
    }
    if (dVar14 <= 0.0) {
      dVar14 = 0.0;
    }
  }
  else if (dVar12 == __real_4000000000000000) {
    dVar14 = dVar14 * dVar14;
    if (1 < lVar9) {
      lVar10 = 1;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->Children).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          dVar12 = (double)(*pcVar2)();
          return dVar12;
        }
        local_c8._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_c8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_c8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        puVar1 = *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar10 * 8);
        dVar3 = TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
                ::Value<0>((TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
                            *)*puVar1,(TVector<double> *)&local_c8._s_0);
        dVar12 = (double)puVar1[1];
        if (dVar3 <= dVar12) {
          dVar13 = dVar4;
          if ((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar18,SUB84(dVar12,0) ^ uVar17)
              <= dVar3) {
            dVar12 = (dVar12 + dVar3) * (dVar5 / dVar12);
            dVar12 = dVar4 - dVar12 * dVar12;
            dVar13 = dVar12 * dVar12 * dVar12;
          }
        }
        else {
          dVar13 = 0.0;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 1;
        dVar14 = dVar14 + dVar13 * dVar13 * dVar19;
      } while (lVar10 < lVar9);
    }
    if (dVar14 <= 0.0) {
      dVar14 = 0.0;
    }
    dVar14 = SQRT(dVar14);
  }
  else {
    dVar12 = pow(dVar14,dVar12);
    if (1 < lVar9) {
      lVar10 = 1;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->Children).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          dVar12 = (double)(*pcVar2)();
          return dVar12;
        }
        local_a8[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
        local_a8[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
        local_a8[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
        puVar1 = *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar10 * 8);
        dVar3 = TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
                ::Value<0>((TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
                            *)*puVar1,(TVector<double> *)&local_a8[0]._s_0);
        dVar14 = (double)puVar1[1];
        if (dVar3 <= dVar14) {
          dVar13 = dVar4;
          if ((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar18,SUB84(dVar14,0) ^ uVar17)
              <= dVar3) {
            dVar14 = (dVar3 + dVar14) * (dVar5 / dVar14);
            dVar14 = dVar4 - dVar14 * dVar14;
            dVar13 = dVar14 * dVar14 * dVar14;
          }
        }
        else {
          dVar13 = 0.0;
        }
        dVar14 = this->BlendPower;
        uVar15 = SUB84(dVar14,0);
        uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
        dVar14 = pow(dVar13,dVar14);
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 1;
        dVar12 = dVar12 + dVar14 * dVar19;
      } while (lVar10 < lVar9);
    }
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    dVar14 = pow(dVar12,dVar4 / (double)CONCAT44(uVar16,uVar15));
  }
  return dVar14;
}

