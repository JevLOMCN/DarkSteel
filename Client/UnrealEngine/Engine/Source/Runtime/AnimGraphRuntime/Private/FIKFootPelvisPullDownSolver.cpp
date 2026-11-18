// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// StaticStruct @ 1463e7c90

UScriptStruct * __cdecl FIKFootPelvisPullDownSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKFootPelvisPullDownSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FIKFootPelvisPullDownSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver,(UObject *)pUVar1,
                         L"IKFootPelvisPullDownSolver");
  }
  return Z_Registration_Info_UScriptStruct_FIKFootPelvisPullDownSolver.OuterSingleton;
}

// Solve @ 14646bce0

TTransform<double> * __thiscall
FIKFootPelvisPullDownSolver::Solve
          (FIKFootPelvisPullDownSolver *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_3,float param_4)

{
  float *pfVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  ulonglong uVar20;
  double dVar21;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar22;
  bool bVar23;
  uint uVar24;
  TTransform<double> *pTVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 local_188 [12];
  undefined4 uStack_17c;
  double local_178;
  double dStack_168;
  double local_160;
  TVector<double>_u_0 local_140;
  double local_128;
  TVector<double> local_118 [9];
  
  pTVar22 = param_3;
  dVar16 = (param_1->Translation).XY.m128d_f64[0];
  dVar17 = (param_1->Translation).XY.m128d_f64[1];
  dVar15 = (param_1->Translation).ZW.m128d_f64[0];
  iVar5 = param_2->ArrayNum;
  iVar6 = param_3->ArrayNum;
  if ((iVar6 < 1) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IKFootLocationsCount > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\BoneControllerSolvers.cpp"
                          ,0xd,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    pTVar25 = (TTransform<double> *)(*pcVar9)();
    return pTVar25;
  }
  if ((iVar5 < 1) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("FKFootDistancesCount > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\BoneControllerSolvers.cpp"
                          ,0xe,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    pTVar25 = (TTransform<double> *)(*pcVar9)();
    return pTVar25;
  }
  if ((iVar5 != iVar6) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("FKFootDistancesCount == IKFootLocationsCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\BoneControllerSolvers.cpp"
                          ,0xf,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    pTVar25 = (TTransform<double> *)(*pcVar9)();
    return pTVar25;
  }
  dVar21 = __real_3e45798ee0000000;
  dVar38 = __real_3ff0000000000000;
  param_3._0_4_ = 0;
  uVar44 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar45 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  dVar36 = this->PelvisAdjustmentMaxDistance;
  dVar12 = __real_3ff0000000000000 / (double)iVar6;
  local_140._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_140._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_140._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_140._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_140._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar35 = dVar16;
  dVar37 = dVar17;
  dVar19 = dVar15;
  if (0 < this->PelvisAdjustmentMaxIter) {
    do {
      uVar20 = (ulonglong)dVar37 >> 0x20;
      uVar43 = SUB84(dVar37,0);
      dVar37 = (double)CONCAT44(uVar42,uVar41);
      local_178 = (double)CONCAT44(uVar45,uVar44);
      uVar28 = 0;
      lVar27 = 0;
      auVar31._8_4_ = uVar43;
      auVar31._0_8_ = dVar35;
      auVar31._12_4_ = (int)uVar20;
      dVar34 = (double)CONCAT44(uVar40,uVar39);
      local_188._4_4_ = uVar40;
      local_188._0_4_ = uVar39;
      local_188._8_4_ = uVar41;
      uStack_17c = uVar42;
      if ((longlong)iVar6 < 1) {
        auVar14._4_4_ = uVar41;
        auVar14._0_4_ = uVar40;
        auVar14._8_4_ = uVar42;
        stack0xfffffffffffffe80 = (double)auVar14._4_8_;
      }
      else {
        lVar29 = 0;
        dStack_168 = auVar31._8_8_;
        do {
          uVar26 = ~uVar28 >> 0x1f;
          uVar24 = 0;
          if ((int)uVar28 < pTVar22->ArrayNum) {
            uVar24 = uVar26;
          }
          if (uVar24 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar23) {
              pcVar9 = (code *)swi(3);
              pTVar25 = (TTransform<double> *)(*pcVar9)();
              return pTVar25;
            }
            uVar44 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar45 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
          pTVar7 = pTVar22->DataPtr;
          uVar24 = 0;
          if ((int)uVar28 < pTVar22->ArrayNum) {
            uVar24 = uVar26;
          }
          if (uVar24 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar23) {
              pcVar9 = (code *)swi(3);
              pTVar25 = (TTransform<double> *)(*pcVar9)();
              return pTVar25;
            }
            uVar44 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar45 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
          pTVar8 = pTVar22->DataPtr;
          dVar34 = dVar35 - *(double *)((longlong)&pTVar8->field0_0x0 + lVar29);
          dVar37 = dStack_168 - *(double *)((longlong)&pTVar8->field0_0x0 + lVar29 + 8);
          local_160 = dVar19 - *(double *)((longlong)&pTVar8->field0_0x0 + lVar29 + 0x10);
          dVar33 = dVar37 * dVar37 + dVar34 * dVar34 + local_160 * local_160;
          if (dVar33 != dVar38) {
            if (dVar21 <= dVar33) {
              local_128 = dVar38 / SQRT(dVar33);
              dVar34 = dVar34 * local_128;
              dVar37 = dVar37 * local_128;
              local_160 = local_160 * local_128;
            }
            else {
              local_160 = (double)CONCAT44(uVar45,uVar44);
              dVar37 = (double)CONCAT44(uVar42,uVar41);
              dVar34 = (double)CONCAT44(uVar40,uVar39);
            }
          }
          uVar24 = 0;
          if ((int)uVar28 < param_2->ArrayNum) {
            uVar24 = uVar26;
          }
          if (uVar24 == 0) {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar23) {
              pcVar9 = (code *)swi(3);
              pTVar25 = (TTransform<double> *)(*pcVar9)();
              return pTVar25;
            }
            uVar44 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar45 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
          uVar28 = uVar28 + 1;
          pfVar1 = param_2->DataPtr + lVar27;
          lVar27 = lVar27 + 1;
          dVar33 = (double)*pfVar1;
          pdVar2 = (double *)((longlong)&pTVar7->field0_0x0 + lVar29);
          lVar3 = lVar29 + 8;
          lVar4 = lVar29 + 0x10;
          lVar29 = lVar29 + 0x18;
          dVar34 = (double)local_188._0_8_ + (dVar34 * dVar33 + *pdVar2) * dVar12;
          dVar37 = stack0xfffffffffffffe80 +
                   (dVar37 * dVar33 + *(double *)((longlong)&pTVar7->field0_0x0 + lVar3)) * dVar12;
          local_178 = local_178 +
                      (local_160 * dVar33 + *(double *)((longlong)&pTVar7->field0_0x0 + lVar4)) *
                      dVar12;
          stack0xfffffffffffffe80 = dVar37;
          local_188._0_8_ = dVar34;
        } while (lVar27 < iVar6);
        local_188._8_4_ = SUB84(dVar37,0);
        uStack_17c = (int)((ulonglong)dVar37 >> 0x20);
      }
      unique0x10000331 = stack0xfffffffffffffe80 - dVar17;
      local_188._0_8_ = (double)local_188._0_8_ - dVar16;
      dVar35 = local_178 - dVar15;
      auVar30._8_8_ = local_140._s_0.Y;
      auVar30._0_8_ = local_140._8_8_;
      auVar10._8_8_ = 0;
      auVar10._0_8_ =
           (unique0x10000331 - local_140._s_0.Y) * (unique0x10000331 - local_140._s_0.Y) +
           ((double)local_188._0_8_ - local_140._s_0.X) *
           ((double)local_188._0_8_ - local_140._s_0.X) +
           (dVar35 - local_140._s_0.Z) * (dVar35 - local_140._s_0.Z);
      auVar31 = sqrtpd(auVar30,auVar10);
      local_140._s_0.X = (double)local_188._0_8_;
      local_140._s_0.Y = unique0x10000331;
      local_140._s_0.Z = dVar35;
    } while ((this->PelvisAdjustmentErrorTolerance <= auVar31._0_8_ &&
              auVar31._0_8_ != this->PelvisAdjustmentErrorTolerance) &&
            (param_3._0_4_ = (int)param_3 + 1, dVar35 = dVar34, dVar19 = local_178,
            (int)param_3 < this->PelvisAdjustmentMaxIter));
  }
  FRK4SpringInterpolator<UE::Math::TVector<double>_>::Update
            ((FRK4SpringInterpolator<UE::Math::TVector<double>_> *)this,local_118,
             (TVector<double> *)&local_140._s_0,&param_4);
  dVar37 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  auVar18._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  auVar18._0_8_ = dVar37;
  auVar18._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar12 = this->PelvisAdjustmentInterpAlpha;
  auVar13._4_8_ = extraout_XMM0_Qb;
  auVar13._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  auVar32._0_8_ = auVar13._0_8_ << 0x20;
  auVar32._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  auVar32._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_188._0_8_ =
       (*(double *)&(this->PelvisAdjustmentInterp).field_0x30 - dVar37) * dVar12 + dVar37 + dVar16;
  unique0x10000379 =
       (*(double *)&(this->PelvisAdjustmentInterp).field_0x38 - auVar32._8_8_) * dVar12 +
       auVar32._8_8_ + dVar17;
  local_178 = (*(double *)&(this->PelvisAdjustmentInterp).field_0x40 -
              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) * dVar12 +
              UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z + dVar15;
  if (dVar36 * dVar36 <=
      (dVar17 - unique0x10000379) * (dVar17 - unique0x10000379) +
      (dVar16 - (double)local_188._0_8_) * (dVar16 - (double)local_188._0_8_) +
      (dVar15 - local_178) * (dVar15 - local_178)) {
    local_188._0_8_ = (double)local_188._0_8_ - dVar16;
    unique0x10000381 = unique0x10000379 - dVar17;
    uVar11 = local_178 - dVar15;
    dVar36 = unique0x10000381 * unique0x10000381 + (double)local_188._0_8_ * (double)local_188._0_8_
             + (double)uVar11 * (double)uVar11;
    if (dVar36 != dVar38) {
      if (dVar21 <= dVar36) {
        dVar38 = dVar38 / SQRT(dVar36);
        unique0x10000389 = unique0x10000381 * dVar38;
        uVar11 = (double)uVar11 * dVar38;
        local_188._0_8_ = (double)local_188._0_8_ * dVar38;
      }
      else {
        unique0x10000d12 = auVar18._8_8_;
        local_188._0_8_ = dVar37;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    dVar36 = this->PelvisAdjustmentMaxDistance;
    local_188._0_8_ = (double)local_188._0_8_ * dVar36 + dVar16;
    unique0x10000399 = unique0x10000d0a * dVar36 + dVar17;
    local_178 = (double)uVar11 * dVar36 + dVar15;
  }
  (param_1->Translation).XY.m128d_f64[0] = (double)local_188._0_8_;
  (param_1->Translation).XY.m128d_f64[1] = stack0xfffffffffffffe80;
  (param_1->Translation).ZW.m128d_f64[0] = local_178;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  dVar15 = (param_1->Rotation).XY.m128d_f64[1];
  dVar16 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar17 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar15;
  dVar15 = (param_1->Translation).XY.m128d_f64[0];
  dVar36 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar16;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar17;
  dVar16 = (param_1->Translation).ZW.m128d_f64[0];
  dVar17 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar15;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar36;
  dVar15 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar36 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar16;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar17;
  dVar16 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar17 = (param_1->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar15;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar36;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar16;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar17;
  return __return_storage_ptr__;
}

