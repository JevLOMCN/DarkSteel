// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 3

// StaticStruct @ 14a149fa0

UScriptStruct * __cdecl FRigVMMirrorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMMirrorSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMMirrorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMirrorSettings,(UObject *)pUVar1,
                         L"RigVMMirrorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMMirrorSettings.OuterSingleton;
}

// MirrorTransform @ 14a1b1430

TTransform<double> * __thiscall
FRigVMMirrorSettings::MirrorTransform
          (FRigVMMirrorSettings *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  uint uVar9;
  double dVar10;
  uint uVar12;
  double dVar11;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  TVector<double>_u_0 local_198;
  TVector<double> local_180;
  TVector<double> local_168;
  TMatrix<double> local_148;
  TQuat<double> local_c8;
  TQuat<double> local_a8;
  TQuat<double> local_88 [4];
  
  dVar11 = (param_1->Rotation).XY.m128d_f64[1];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  uVar1 = (this->MirrorAxis).Value;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->Translation).XY.m128d_f64[0];
  dVar5 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar3 = (param_1->Translation).ZW.m128d_f64[0];
  dVar4 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar11;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
  dVar11 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  dVar3 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar4 = (param_1->Scale3D).ZW.m128d_f64[1];
  uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar17 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar21 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar11;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
  uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar24 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  dVar7 = __real_3ff0000000000000;
  dVar11 = (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
  dVar3 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
  dVar4 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
  dVar5 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
  dVar6 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
  dVar14 = (__return_storage_ptr__->Translation).XY.m128d_f64[0];
  dVar13 = (__return_storage_ptr__->Translation).XY.m128d_f64[1];
  uVar25 = SUB84(__real_3ff0000000000000,0);
  uVar26 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar16 = uVar25;
  uVar18 = uVar26;
  uVar20 = uVar19;
  uVar22 = uVar21;
  if (((uVar1 != '\x01') &&
      (uVar16 = uVar15, uVar18 = uVar17, uVar20 = uVar25, uVar22 = uVar26, uVar1 != '\x02')) &&
     (uVar20 = uVar19, uVar22 = uVar21, uVar1 == '\x03')) {
    uVar23 = uVar25;
    uVar24 = uVar26;
  }
  dVar10 = dVar13 * (double)CONCAT44(uVar22,uVar20) + dVar14 * (double)CONCAT44(uVar18,uVar16) +
           dVar11 * (double)CONCAT44(uVar24,uVar23);
  dVar10 = dVar10 + dVar10;
  dVar13 = dVar13 - dVar10 * (double)CONCAT44(uVar22,uVar20);
  local_180.field0_0x0._s_0.Z = dVar11 - dVar10 * (double)CONCAT44(uVar24,uVar23);
  auVar2._8_4_ = SUB84(dVar13,0);
  auVar2._0_8_ = dVar14 - dVar10 * (double)CONCAT44(uVar18,uVar16);
  auVar2._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_180.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  uVar1 = (this->AxisToFlip).Value;
  if (uVar1 == '\x01') {
    dVar11 = dVar3 + dVar3;
    dVar14 = (double)CONCAT44((uint)((ulonglong)(dVar5 + dVar5) >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar5 + dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000)
    ;
    local_198._s_0.X = dVar6 * dVar14 + dVar4 * dVar11;
    local_198._s_0.Y = (dVar5 * dVar14 - dVar3 * dVar11) + dVar7;
    local_198._s_0.Z = dVar6 * dVar11 - dVar4 * dVar14;
    MirrorVector(this,&local_168,(TVector<double> *)&local_198._s_0);
    dVar11 = dVar4 + dVar4;
    uVar9 = SUB84(dVar3 + dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)(dVar3 + dVar3) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    local_198._s_0.X = dVar6 * dVar11 - dVar5 * (double)CONCAT44(uVar12,uVar9);
    local_198._s_0.Z = (dVar3 * (double)CONCAT44(uVar12,uVar9) - dVar4 * dVar11) + dVar7;
    local_198._s_0.Y = dVar6 * (double)CONCAT44(uVar12,uVar9) + dVar5 * dVar11;
    MirrorVector(this,&local_180,(TVector<double> *)&local_198._s_0);
    UE::Math::TRotationMatrix<double>::MakeFromYZ(&local_148,&local_168,&local_180);
    pTVar8 = local_88;
  }
  else {
    uVar9 = SUB84(dVar4 + dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)(dVar4 + dVar4) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    dVar11 = (double)CONCAT44(uVar12,uVar9);
    if (uVar1 == '\x02') {
      dVar14 = dVar5 + dVar5;
      local_198._s_0.X = ((double)CONCAT44(uVar12,uVar9) * dVar4 - dVar5 * dVar14) + dVar7;
      local_198._s_0.Y = dVar6 * dVar14 - (double)CONCAT44(uVar12,uVar9) * dVar3;
      local_198._s_0.Z = dVar3 * dVar14 + dVar11 * dVar6;
      MirrorVector(this,&local_168,(TVector<double> *)&local_198._s_0);
      dVar11 = dVar4 + dVar4;
      uVar9 = SUB84(dVar3 + dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar12 = (uint)((ulonglong)(dVar3 + dVar3) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      local_198._s_0.X = dVar6 * dVar11 - dVar5 * (double)CONCAT44(uVar12,uVar9);
      local_198._s_0.Z = (dVar3 * (double)CONCAT44(uVar12,uVar9) - dVar4 * dVar11) + dVar7;
      local_198._s_0.Y = dVar6 * (double)CONCAT44(uVar12,uVar9) + dVar5 * dVar11;
      MirrorVector(this,&local_180,(TVector<double> *)&local_198._s_0);
      UE::Math::TRotationMatrix<double>::MakeFromXZ(&local_148,&local_168,&local_180);
      pTVar8 = &local_a8;
    }
    else {
      dVar14 = dVar5 + dVar5;
      local_198._s_0.X = (dVar4 * dVar11 - dVar5 * dVar14) + dVar7;
      local_198._s_0.Y = dVar6 * dVar14 - dVar3 * dVar11;
      local_198._s_0.Z = dVar6 * dVar11 + dVar3 * dVar14;
      MirrorVector(this,&local_180,(TVector<double> *)&local_198._s_0);
      dVar11 = dVar3 + dVar3;
      dVar14 = (double)CONCAT44((uint)((ulonglong)(dVar5 + dVar5) >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar5 + dVar5,0) ^
                                (uint)__xmm_80000000000000008000000000000000);
      local_198._s_0.X = dVar6 * dVar14 + dVar4 * dVar11;
      local_198._s_0.Y = (dVar5 * dVar14 - dVar3 * dVar11) + dVar7;
      local_198._s_0.Z = dVar6 * dVar11 - dVar4 * dVar14;
      MirrorVector(this,&local_168,(TVector<double> *)&local_198._s_0);
      UE::Math::TRotationMatrix<double>::MakeFromXY(&local_148,&local_180,&local_168);
      pTVar8 = &local_c8;
    }
  }
  pTVar8 = UE::Math::TQuat<double>::TQuat<double>(pTVar8,&local_148);
  dVar11 = pTVar8->Y;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar8->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// MirrorVector @ 14a1b18e0

TVector<double> * __thiscall
FRigVMMirrorSettings::MirrorVector
          (FRigVMMirrorSettings *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uchar uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar4 = (this->MirrorAxis).Value;
  uVar6 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar11 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar16 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar9 = (undefined4)__real_3ff0000000000000;
  uVar12 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar10 = uVar9;
  uVar13 = uVar12;
  uVar15 = uVar14;
  uVar17 = uVar16;
  if (((uVar4 != '\x01') &&
      (uVar10 = uVar8, uVar13 = uVar11, uVar15 = uVar9, uVar17 = uVar12, uVar4 != '\x02')) &&
     (uVar15 = uVar14, uVar17 = uVar16, uVar4 == '\x03')) {
    uVar6 = uVar9;
    uVar7 = uVar12;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = dVar2 * (double)CONCAT44(uVar13,uVar10) + dVar1 * (double)CONCAT44(uVar17,uVar15);
  dVar5 = ((double)CONCAT44(uVar7,uVar6) + (double)CONCAT44(uVar7,uVar6)) * dVar3 + dVar5 + dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 - dVar5 * (double)CONCAT44(uVar13,uVar10);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - dVar5 * (double)CONCAT44(uVar17,uVar15);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar5 * (double)CONCAT44(uVar7,uVar6);
  return __return_storage_ptr__;
}

