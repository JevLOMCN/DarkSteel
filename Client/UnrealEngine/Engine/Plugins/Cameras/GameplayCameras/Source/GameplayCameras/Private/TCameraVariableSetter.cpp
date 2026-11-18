// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 14

// Apply @ 14d607980

void __thiscall
UE::Cameras::TCameraVariableSetter<int>::Apply
          (TCameraVariableSetter<int> *this,FCameraVariableTable *param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = FCameraVariableTable::FindValue<int>
                     (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    fVar3 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    FCameraVariableTable::SetValue<int>
              (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4),
               (int)((float)(this->ToValue - iVar1) * fVar3 + (float)iVar1));
  }
  return;
}

// Apply @ 14d6079f0

void __thiscall
UE::Cameras::TCameraVariableSetter<float>::Apply
          (TCameraVariableSetter<float> *this,FCameraVariableTable *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = FCameraVariableTable::FindValue<float>
                     (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pfVar2 != (float *)0x0) {
    fVar1 = *pfVar2;
    fVar3 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    FCameraVariableTable::SetValue<float>
              (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4),
               (this->ToValue - fVar1) * fVar3 + fVar1);
  }
  return;
}

// Apply @ 14d607a60

void __thiscall
UE::Cameras::TCameraVariableSetter<double>::Apply
          (TCameraVariableSetter<double> *this,FCameraVariableTable *param_1)

{
  double dVar1;
  double *pdVar2;
  float fVar3;
  
  pdVar2 = FCameraVariableTable::FindValue<double>
                     (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pdVar2 != (double *)0x0) {
    dVar1 = *pdVar2;
    fVar3 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    FCameraVariableTable::SetValue<double>
              (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4),
               (this->ToValue - dVar1) * (double)fVar3 + dVar1);
  }
  return;
}

// Apply @ 14d607ad0

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TRotator<float>_>::Apply
          (TCameraVariableSetter<UE::Math::TRotator<float>_> *this,FCameraVariableTable *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  uchar *puVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  TRotator<float> *pTVar10;
  FEntry *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  float fVar19;
  float fVar20;
  uint local_res8 [2];
  uint *local_res18;
  float fStack_54;
  
  pTVar10 = FCameraVariableTable::FindValue<UE::Math::TRotator<float>_>
                      (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar10 != (TRotator<float> *)0x0) {
    fVar3 = pTVar10->Roll;
    uVar1 = pTVar10->Pitch;
    uVar2 = pTVar10->Yaw;
    fVar16 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    fVar6 = GlobalVectorConstants::Float360.m128_f32[0];
    fVar7 = GlobalVectorConstants::Float360.m128_f32[1];
    fVar8 = GlobalVectorConstants::Float360.m128_f32[2];
    local_res8[0] = *(uint *)((longlong)&this->_padding_ + 4);
    fVar20 = (this->ToValue).Pitch - (float)uVar1;
    fVar17 = (this->ToValue).Yaw - (float)uVar2;
    fVar19 = (this->ToValue).Roll - fVar3;
    auVar18._4_4_ = fVar17;
    auVar18._0_4_ = fVar20;
    auVar18._8_4_ = fVar19;
    auVar18._12_4_ = 0;
    auVar18 = divps(auVar18,(undefined1  [16])GlobalVectorConstants::Float360);
    auVar18 = roundps(in_XMM1,auVar18,3);
    fVar20 = fVar20 - auVar18._0_4_ * fVar6;
    fVar17 = fVar17 - auVar18._4_4_ * fVar7;
    fVar19 = fVar19 - auVar18._8_4_ * fVar8;
    fVar20 = (float)(~-(uint)(0.0 <= fVar20) & (uint)(fVar20 + fVar6) |
                    -(uint)(0.0 <= fVar20) & (uint)fVar20);
    fVar17 = (float)(~-(uint)(0.0 <= fVar17) & (uint)(fVar17 + fVar7) |
                    -(uint)(0.0 <= fVar17) & (uint)fVar17);
    fVar19 = (float)(~-(uint)(0.0 <= fVar19) & (uint)(fVar19 + fVar8) |
                    -(uint)(0.0 <= fVar19) & (uint)fVar19);
    uVar13 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar20);
    uVar14 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar17);
    uVar15 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar19);
    pFVar11 = FCameraVariableTable::FindEntry(param_1,(FCameraVariableID)local_res8[0]);
    if (pFVar11 == (FEntry *)0x0) {
      local_res18 = local_res8;
      bVar9 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>'::__l3::
              <lambda_1>::operator()(&local_res18);
      if (!bVar9) {
        return;
      }
    }
    if ((pFVar11->Type != Rotator3f) &&
       (bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = (ulonglong)pFVar11->Offset;
    puVar4 = param_1->Memory;
    *(float *)(puVar4 + uVar12) =
         (float)((uint)(fVar20 - fVar6) & uVar13 | ~uVar13 & (uint)fVar20) * fVar16 + (float)uVar1;
    *(float *)(puVar4 + uVar12 + 4) =
         (float)((uint)(fVar17 - fVar7) & uVar14 | ~uVar14 & (uint)fVar17) * fVar16 + (float)uVar2;
    *(float *)(puVar4 + uVar12 + 8) =
         (float)((uint)(fVar19 - fVar8) & uVar15 | ~uVar15 & (uint)fVar19) * fVar16 + fVar3;
    pFVar11->Flags = pFVar11->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// Apply @ 14d607cb0

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TRotator<double>_>::Apply
          (TCameraVariableSetter<UE::Math::TRotator<double>_> *this,FCameraVariableTable *param_1)

{
  double dVar1;
  uchar *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TRotator<double> *pTVar10;
  FEntry *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  uint local_res8 [2];
  uint *local_res18 [2];
  
  pTVar10 = FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                      (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar10 != (TRotator<double> *)0x0) {
    dVar7 = pTVar10->Pitch;
    dVar8 = pTVar10->Yaw;
    dVar1 = pTVar10->Roll;
    fVar16 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    dVar30 = (this->ToValue).Pitch - dVar7;
    local_res8[0] = *(uint *)((longlong)&this->_padding_ + 4);
    auVar23._0_8_ = (this->ToValue).Roll - dVar1;
    auVar23._8_8_ = 0;
    dVar26 = (this->ToValue).Yaw - dVar8;
    auVar17._8_4_ = SUB84(dVar26,0);
    auVar17._0_8_ = dVar30;
    auVar17._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    auVar17 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar17 = roundpd(auVar23,auVar17,3);
    dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar24._0_8_ = auVar17._0_8_ * dVar5;
    dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar24._8_8_ = auVar17._8_8_ * dVar4;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = auVar23._0_8_;
    auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar30 = dVar30 - auVar24._0_8_;
    dVar26 = dVar26 - auVar24._8_8_;
    auVar17 = roundpd(auVar24,auVar17,3);
    dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar19._8_4_ = SUB84(dVar26,0);
    auVar19._0_8_ = dVar30;
    auVar19._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    dVar22 = auVar19._8_8_ + dVar4;
    dVar32 = auVar23._0_8_ - auVar17._0_8_ * dVar6;
    dVar33 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar12 = -(ulonglong)(0.0 <= dVar30);
    uVar14 = -(ulonglong)(0.0 <= dVar26);
    uVar13 = -(ulonglong)(0.0 <= dVar32);
    uVar15 = -(ulonglong)(0.0 <= dVar33);
    auVar25._0_8_ = uVar12 & (ulonglong)dVar30;
    auVar25._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar26);
    auVar25._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar26) >> 0x20);
    auVar29._0_4_ = ~(uint)uVar12 & SUB84(dVar30 + dVar5,0);
    auVar29._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar30 + dVar5) >> 0x20);
    auVar29._8_4_ = ~(uint)uVar14 & SUB84(dVar22,0);
    auVar29._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
    auVar27._0_8_ = uVar13 & (ulonglong)dVar32;
    auVar27._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar33);
    auVar27._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar33) >> 0x20);
    auVar29 = auVar29 | auVar25;
    auVar20._8_4_ = SUB84(dVar33,0);
    auVar20._0_8_ = dVar32;
    auVar20._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    dVar22 = auVar20._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar31._0_4_ = ~(uint)uVar13 & SUB84(dVar32 + dVar6,0);
    auVar31._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar6) >> 0x20);
    auVar31._8_4_ = ~(uint)uVar15 & SUB84(dVar22,0);
    auVar31._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
    auVar31 = auVar31 | auVar27;
    uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar29._0_8_);
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar29._8_8_);
    auVar28._0_8_ = uVar13 & (ulonglong)(auVar29._0_8_ - dVar5);
    uVar12 = uVar14 & (ulonglong)(auVar29._8_8_ - dVar4);
    auVar28._8_4_ = (undefined4)uVar12;
    auVar28._12_4_ = (undefined4)(uVar12 >> 0x20);
    dVar5 = (double)fVar16;
    auVar21._0_4_ = ~(uint)uVar13 & auVar29._0_4_;
    auVar21._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar29._4_4_;
    auVar21._8_4_ = ~(uint)uVar14 & auVar29._8_4_;
    auVar21._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar29._12_4_;
    uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar31._0_8_);
    pFVar11 = FCameraVariableTable::FindEntry(param_1,(FCameraVariableID)local_res8[0]);
    if (pFVar11 == (FEntry *)0x0) {
      local_res18[0] = local_res8;
      bVar9 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
              <lambda_1>::operator()(local_res18);
      if (!bVar9) {
        return;
      }
    }
    if ((pFVar11->Type != Rotator3d) &&
       (bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar13 = (ulonglong)pFVar11->Offset;
    puVar2 = param_1->Memory;
    *(double *)(puVar2 + uVar13) = dVar5 * SUB168(auVar28 | auVar21,0) + dVar7;
    *(double *)(puVar2 + uVar13 + 8) = dVar5 * SUB168(auVar28 | auVar21,8) + dVar8;
    *(double *)(puVar2 + uVar13 + 0x10) =
         dVar5 * (double)((ulonglong)(auVar31._0_8_ - dVar6) & uVar12 |
                         CONCAT44(~(uint)(uVar12 >> 0x20) & auVar31._4_4_,
                                  ~(uint)uVar12 & auVar31._0_4_)) + dVar1;
    pFVar11->Flags = pFVar11->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// Apply @ 14d607f00

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TTransform<float>_>::Apply
          (TCameraVariableSetter<UE::Math::TTransform<float>_> *this,FCameraVariableTable *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TTransform<float> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  __m128 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  pTVar8 = FCameraVariableTable::FindValue<UE::Math::TTransform<float>_>
                     (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar8 != (TTransform<float> *)0x0) {
    fVar20 = (pTVar8->Rotation).m128_f32[0];
    fVar21 = (pTVar8->Rotation).m128_f32[1];
    local_98.m128_u64[0] = (pTVar8->Rotation).m128_u64[0];
    fVar22 = (pTVar8->Rotation).m128_f32[2];
    fVar23 = (pTVar8->Rotation).m128_f32[3];
    local_98.m128_u64[1] = *(undefined8 *)((pTVar8->Rotation).m128_f32 + 2);
    fVar14 = (pTVar8->Translation).m128_f32[0];
    fVar16 = (pTVar8->Translation).m128_f32[1];
    local_88 = (pTVar8->Translation).m128_u64[0];
    fVar17 = (pTVar8->Translation).m128_f32[2];
    fVar18 = (pTVar8->Translation).m128_f32[3];
    uStack_80 = *(ulong64 *)((pTVar8->Translation).m128_f32 + 2);
    fVar19 = (pTVar8->Scale3D).m128_f32[0];
    fVar1 = (pTVar8->Scale3D).m128_f32[1];
    local_78 = (pTVar8->Scale3D).m128_u64[0];
    fVar2 = (pTVar8->Scale3D).m128_f32[2];
    fVar3 = (pTVar8->Scale3D).m128_f32[3];
    uStack_70 = *(ulong64 *)((pTVar8->Scale3D).m128_f32 + 2);
    fVar13 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    if (__real_3727c5ac < fVar13) {
      if (fVar13 < __real_3f7fff58) {
        fVar4 = (this->ToValue).Rotation.m128_f32[0];
        fVar5 = (this->ToValue).Rotation.m128_f32[1];
        fVar6 = (this->ToValue).Rotation.m128_f32[2];
        fVar7 = (this->ToValue).Rotation.m128_f32[3];
        fVar24 = GlobalVectorConstants::FloatOne.m128_f32[0] - fVar13;
        fVar25 = GlobalVectorConstants::FloatOne.m128_f32[1] - fVar13;
        fVar26 = GlobalVectorConstants::FloatOne.m128_f32[2] - fVar13;
        fVar27 = GlobalVectorConstants::FloatOne.m128_f32[3] - fVar13;
        local_88 = CONCAT44(fVar13 * (this->ToValue).Translation.m128_f32[1] + fVar25 * fVar16,
                            fVar13 * (this->ToValue).Translation.m128_f32[0] + fVar24 * fVar14);
        uStack_80 = CONCAT44(fVar13 * (this->ToValue).Translation.m128_f32[3] + fVar27 * fVar18,
                             fVar13 * (this->ToValue).Translation.m128_f32[2] + fVar26 * fVar17);
        fVar14 = fVar4 * fVar20;
        fVar16 = fVar5 * fVar21;
        fVar17 = fVar6 * fVar22;
        fVar18 = fVar7 * fVar23;
        local_78 = CONCAT44(fVar13 * (this->ToValue).Scale3D.m128_f32[1] + fVar25 * fVar1,
                            fVar13 * (this->ToValue).Scale3D.m128_f32[0] + fVar24 * fVar19);
        uStack_70 = CONCAT44(fVar13 * (this->ToValue).Scale3D.m128_f32[3] + fVar27 * fVar3,
                             fVar13 * (this->ToValue).Scale3D.m128_f32[2] + fVar26 * fVar2);
        fVar19 = fVar16 + fVar14;
        fVar14 = fVar14 + fVar16;
        fVar16 = fVar18 + fVar17;
        fVar17 = fVar17 + fVar18;
        uVar9 = -(uint)(0.0 <= fVar16 + fVar19);
        uVar10 = -(uint)(0.0 <= fVar17 + fVar14);
        uVar11 = -(uint)(0.0 <= fVar19 + fVar16);
        uVar12 = -(uint)(0.0 <= fVar14 + fVar17);
        fVar14 = (float)(~uVar9 & (uint)(0.0 - fVar20) | uVar9 & (uint)fVar20) * fVar24 +
                 fVar4 * fVar13;
        fVar16 = (float)(~uVar10 & (uint)(0.0 - fVar21) | uVar10 & (uint)fVar21) * fVar25 +
                 fVar5 * fVar13;
        fVar17 = (float)(~uVar11 & (uint)(0.0 - fVar22) | uVar11 & (uint)fVar22) * fVar26 +
                 fVar6 * fVar13;
        fVar18 = (float)(~uVar12 & (uint)(0.0 - fVar23) | uVar12 & (uint)fVar23) * fVar27 +
                 fVar7 * fVar13;
        fVar20 = fVar16 * fVar16 + fVar14 * fVar14;
        fVar21 = fVar14 * fVar14 + fVar16 * fVar16;
        fVar22 = fVar18 * fVar18 + fVar17 * fVar17;
        fVar23 = fVar17 * fVar17 + fVar18 * fVar18;
        auVar15._0_4_ = fVar22 + fVar20;
        auVar15._4_4_ = fVar23 + fVar21;
        auVar15._8_4_ = fVar20 + fVar22;
        auVar15._12_4_ = fVar21 + fVar23;
        uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
        uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
        uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
        uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
        auVar15 = sqrtps(auVar15,auVar15);
        auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
        local_98.m128_u32[1] =
             (uint)(auVar15._4_4_ * fVar16) & uVar10 |
             ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
        local_98.m128_u32[0] =
             (uint)(auVar15._0_4_ * fVar14) & uVar9 |
             ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
        local_98.m128_u32[3] =
             (uint)(auVar15._12_4_ * fVar18) & uVar12 |
             ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
        local_98.m128_u32[2] =
             (uint)(auVar15._8_4_ * fVar17) & uVar11 |
             ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
      }
      else {
        local_98.m128_u64[0] = (this->ToValue).Rotation.m128_u64[0];
        local_98.m128_u64[1] = (this->ToValue).Rotation.m128_u64[1];
        local_88 = (this->ToValue).Translation.m128_u64[0];
        uStack_80 = (this->ToValue).Translation.m128_u64[1];
        local_78 = (this->ToValue).Scale3D.m128_u64[0];
        uStack_70 = (this->ToValue).Scale3D.m128_u64[1];
      }
    }
    FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>
              (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4),
               (TTransform<float> *)&local_98);
  }
  return;
}

// Apply @ 14d6080d0

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TTransform<double>_>::Apply
          (TCameraVariableSetter<UE::Math::TTransform<double>_> *this,FCameraVariableTable *param_1)

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
  double dVar10;
  double dVar11;
  double dVar12;
  TTransform<double> *pTVar13;
  float fVar14;
  TTransform<double> local_c8 [2];
  
  pTVar13 = FCameraVariableTable::FindValue<UE::Math::TTransform<double>_>
                      (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar13 != (TTransform<double> *)0x0) {
    dVar1 = (pTVar13->Rotation).XY.m128d_f64[0];
    dVar2 = (pTVar13->Rotation).XY.m128d_f64[1];
    dVar3 = (pTVar13->Rotation).ZW.m128d_f64[0];
    dVar4 = (pTVar13->Rotation).ZW.m128d_f64[1];
    dVar5 = (pTVar13->Translation).XY.m128d_f64[0];
    dVar6 = (pTVar13->Translation).XY.m128d_f64[1];
    dVar7 = (pTVar13->Translation).ZW.m128d_f64[0];
    dVar8 = (pTVar13->Translation).ZW.m128d_f64[1];
    dVar9 = (pTVar13->Scale3D).XY.m128d_f64[0];
    dVar10 = (pTVar13->Scale3D).XY.m128d_f64[1];
    dVar11 = (pTVar13->Scale3D).ZW.m128d_f64[0];
    dVar12 = (pTVar13->Scale3D).ZW.m128d_f64[1];
    fVar14 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    local_c8[0].Rotation.XY.m128d_f64[0] = dVar1;
    local_c8[0].Rotation.XY.m128d_f64[1] = dVar2;
    local_c8[0].Rotation.ZW.m128d_f64[0] = dVar3;
    local_c8[0].Rotation.ZW.m128d_f64[1] = dVar4;
    local_c8[0].Translation.XY.m128d_f64[0] = dVar5;
    local_c8[0].Translation.XY.m128d_f64[1] = dVar6;
    local_c8[0].Translation.ZW.m128d_f64[0] = dVar7;
    local_c8[0].Translation.ZW.m128d_f64[1] = dVar8;
    local_c8[0].Scale3D.XY.m128d_f64[0] = dVar9;
    local_c8[0].Scale3D.XY.m128d_f64[1] = dVar10;
    local_c8[0].Scale3D.ZW.m128d_f64[0] = dVar11;
    local_c8[0].Scale3D.ZW.m128d_f64[1] = dVar12;
    UE::Math::TTransform<double>::BlendWith(local_c8,&this->ToValue,fVar14);
    FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>
              (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4),local_c8);
  }
  return;
}

// Apply @ 14d6081e0

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TVector2<float>_>::Apply
          (TCameraVariableSetter<UE::Math::TVector2<float>_> *this,FCameraVariableTable *param_1)

{
  TVector2<float> TVar1;
  TVector2<float>_u_0_s_0 TVar2;
  TVector2<float>_u_0 *pTVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  float local_res18;
  float fStackX_1c;
  
  pTVar3 = &FCameraVariableTable::FindValue<UE::Math::TVector2<float>_>
                      (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4))->
            field0_0x0;
  if (pTVar3 != (TVector2<float>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&pTVar3->_s_0;
    fVar4 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    TVar2 = (this->ToValue).field0_0x0._s_0;
    local_res8 = TVar2.X;
    local_res18 = TVar1.field0_0x0._0_4_;
    fStackX_c = TVar2.Y;
    fStackX_1c = TVar1.field0_0x0._4_4_;
    TVar1.field0_0x0._s_0.Y = (fStackX_c - fStackX_1c) * fVar4 + fStackX_1c;
    TVar1.field0_0x0._s_0.X = (local_res8 - local_res18) * fVar4 + local_res18;
    FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>
              (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4),TVar1);
  }
  return;
}

// Apply @ 14d608280

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TVector2<double>_>::Apply
          (TCameraVariableSetter<UE::Math::TVector2<double>_> *this,FCameraVariableTable *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uchar *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TVector2<double> *pTVar9;
  FEntry *pFVar10;
  float fVar11;
  uint local_res8 [2];
  uint *local_res18 [2];
  
  pTVar9 = FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                     (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar9 != (TVector2<double> *)0x0) {
    dVar6 = (pTVar9->field0_0x0)._s_0.X;
    dVar7 = (pTVar9->field0_0x0)._s_0.Y;
    fVar11 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    dVar1 = (this->ToValue).field0_0x0._s_0.X;
    dVar2 = (this->ToValue).field0_0x0._s_0.Y;
    local_res8[0] = *(uint *)((longlong)&this->_padding_ + 4);
    pFVar10 = FCameraVariableTable::FindEntry(param_1,(FCameraVariableID)local_res8[0]);
    if (pFVar10 == (FEntry *)0x0) {
      local_res18[0] = local_res8;
      bVar8 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
              <lambda_1>::operator()(local_res18);
      if (!bVar8) {
        return;
      }
    }
    if ((pFVar10->Type != Vector2d) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = pFVar10->Offset;
    puVar4 = param_1->Memory;
    *(double *)(puVar4 + uVar3) = (dVar1 - dVar6) * (double)fVar11 + dVar6;
    *(double *)(puVar4 + (ulonglong)uVar3 + 8) = (dVar2 - dVar7) * (double)fVar11 + dVar7;
    pFVar10->Flags = pFVar10->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// Apply @ 14d608390

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TVector4<float>_>::Apply
          (TCameraVariableSetter<UE::Math::TVector4<float>_> *this,FCameraVariableTable *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uchar *puVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  TVector4<float> *pTVar12;
  FEntry *pFVar13;
  ulonglong uVar14;
  float fVar15;
  uint local_res8 [2];
  uint *local_res18 [2];
  
  pTVar12 = FCameraVariableTable::FindValue<UE::Math::TVector4<float>_>
                      (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar12 != (TVector4<float> *)0x0) {
    fVar7 = (pTVar12->field0_0x0)._s_0.X;
    fVar8 = (pTVar12->field0_0x0)._s_0.Y;
    fVar9 = (pTVar12->field0_0x0)._s_0.Z;
    fVar10 = (pTVar12->field0_0x0)._s_0.W;
    fVar15 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    fVar1 = (this->ToValue).field0_0x0._s_0.X;
    fVar2 = (this->ToValue).field0_0x0._s_0.Y;
    fVar3 = (this->ToValue).field0_0x0._s_0.Z;
    fVar4 = (this->ToValue).field0_0x0._s_0.W;
    local_res8[0] = *(uint *)((longlong)&this->_padding_ + 4);
    pFVar13 = FCameraVariableTable::FindEntry(param_1,(FCameraVariableID)local_res8[0]);
    if (pFVar13 == (FEntry *)0x0) {
      local_res18[0] = local_res8;
      bVar11 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>'::__l3::
               <lambda_1>::operator()(local_res18);
      if (!bVar11) {
        return;
      }
    }
    if ((pFVar13->Type != Vector4f) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7269619262472323284>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                            ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar14 = (ulonglong)pFVar13->Offset;
    puVar5 = param_1->Memory;
    *(float *)(puVar5 + uVar14) = (fVar1 - fVar7) * fVar15 + fVar7;
    *(float *)(puVar5 + uVar14 + 4) = (fVar2 - fVar8) * fVar15 + fVar8;
    *(float *)(puVar5 + uVar14 + 8) = (fVar3 - fVar9) * fVar15 + fVar9;
    *(float *)(puVar5 + uVar14 + 0xc) = (fVar4 - fVar10) * fVar15 + fVar10;
    pFVar13->Flags = pFVar13->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// Apply @ 14d608510

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TVector4<double>_>::Apply
          (TCameraVariableSetter<UE::Math::TVector4<double>_> *this,FCameraVariableTable *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TVector4<double> *pTVar12;
  FEntry *pFVar13;
  ulonglong uVar14;
  float fVar15;
  double dVar16;
  uint local_res8 [2];
  uint *local_res18 [2];
  
  pTVar12 = FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>
                      (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar12 != (TVector4<double> *)0x0) {
    dVar7 = (pTVar12->field0_0x0)._s_0.X;
    dVar8 = (pTVar12->field0_0x0)._s_0.Y;
    dVar9 = (pTVar12->field0_0x0)._s_0.Z;
    dVar10 = (pTVar12->field0_0x0)._s_0.W;
    fVar15 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    dVar1 = (this->ToValue).field0_0x0._s_0.X;
    dVar2 = (this->ToValue).field0_0x0._s_0.Y;
    dVar3 = (this->ToValue).field0_0x0._s_0.W;
    local_res8[0] = *(uint *)((longlong)&this->_padding_ + 4);
    dVar16 = (double)fVar15;
    dVar4 = (this->ToValue).field0_0x0._s_0.Z;
    pFVar13 = FCameraVariableTable::FindEntry(param_1,(FCameraVariableID)local_res8[0]);
    if (pFVar13 == (FEntry *)0x0) {
      local_res18[0] = local_res8;
      bVar11 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::
               <lambda_1>::operator()(local_res18);
      if (!bVar11) {
        return;
      }
    }
    if ((pFVar13->Type != Vector4d) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7269619262472323284>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                            ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar14 = (ulonglong)pFVar13->Offset;
    puVar5 = param_1->Memory;
    *(double *)(puVar5 + uVar14) = (dVar1 - dVar7) * dVar16 + dVar7;
    *(double *)(puVar5 + uVar14 + 8) = (dVar2 - dVar8) * dVar16 + dVar8;
    *(double *)(puVar5 + uVar14 + 0x10) = (dVar4 - dVar9) * dVar16 + dVar9;
    *(double *)(puVar5 + uVar14 + 0x18) = (dVar3 - dVar10) * dVar16 + dVar10;
    pFVar13->Flags = pFVar13->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// Apply @ 14d608690

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TVector<float>_>::Apply
          (TCameraVariableSetter<UE::Math::TVector<float>_> *this,FCameraVariableTable *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  TVector<float> *pTVar9;
  FEntry *pFVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  uint local_res8 [2];
  uint *local_res18;
  float fStack_44;
  
  pTVar9 = FCameraVariableTable::FindValue<UE::Math::TVector<float>_>
                     (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar9 != (TVector<float> *)0x0) {
    fVar5 = (pTVar9->field0_0x0)._s_0.Z;
    uVar4 = *(undefined8 *)&pTVar9->field0_0x0;
    fVar13 = (float)uVar4;
    fVar12 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    fVar1 = (this->ToValue).field0_0x0._s_0.X;
    fVar2 = (this->ToValue).field0_0x0._s_0.Z;
    local_res8[0] = *(uint *)((longlong)&this->_padding_ + 4);
    fVar3 = (this->ToValue).field0_0x0._s_0.Y;
    fStack_44 = (float)((ulonglong)uVar4 >> 0x20);
    pFVar10 = FCameraVariableTable::FindEntry(param_1,(FCameraVariableID)local_res8[0]);
    if (pFVar10 == (FEntry *)0x0) {
      local_res18 = local_res8;
      bVar8 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<float>_>'::__l3::
              <lambda_1>::operator()(&local_res18);
      if (!bVar8) {
        return;
      }
    }
    if ((pFVar10->Type != Vector3f) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = (ulonglong)pFVar10->Offset;
    puVar6 = param_1->Memory;
    *(float *)(puVar6 + uVar11) = (fVar1 - fVar13) * fVar12 + fVar13;
    *(float *)(puVar6 + uVar11 + 4) = (fVar3 - fStack_44) * fVar12 + fStack_44;
    *(float *)(puVar6 + uVar11 + 8) = (fVar2 - fVar5) * fVar12 + fVar5;
    pFVar10->Flags = pFVar10->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// Apply @ 14d6087e0

void __thiscall
UE::Cameras::TCameraVariableSetter<UE::Math::TVector<double>_>::Apply
          (TCameraVariableSetter<UE::Math::TVector<double>_> *this,FCameraVariableTable *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  FEntry *pFVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  uint local_res8 [2];
  uint *local_res18 [2];
  
  pTVar10 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                      (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pTVar10 != (TVector<double> *)0x0) {
    dVar7 = (pTVar10->field0_0x0)._s_0.X;
    dVar8 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (pTVar10->field0_0x0)._s_0.Z;
    fVar13 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    dVar2 = (this->ToValue).field0_0x0._s_0.X;
    dVar3 = (this->ToValue).field0_0x0._s_0.Y;
    local_res8[0] = *(uint *)((longlong)&this->_padding_ + 4);
    dVar14 = (double)fVar13;
    dVar4 = (this->ToValue).field0_0x0._s_0.Z;
    pFVar11 = FCameraVariableTable::FindEntry(param_1,(FCameraVariableID)local_res8[0]);
    if (pFVar11 == (FEntry *)0x0) {
      local_res18[0] = local_res8;
      bVar9 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::
              <lambda_1>::operator()(local_res18);
      if (!bVar9) {
        return;
      }
    }
    if ((pFVar11->Type != Vector3d) &&
       (bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = (ulonglong)pFVar11->Offset;
    puVar5 = param_1->Memory;
    *(double *)(puVar5 + uVar12) = (dVar2 - dVar7) * dVar14 + dVar7;
    *(double *)(puVar5 + uVar12 + 8) = (dVar3 - dVar8) * dVar14 + dVar8;
    *(double *)(puVar5 + uVar12 + 0x10) = (dVar4 - dVar1) * dVar14 + dVar1;
    pFVar11->Flags = pFVar11->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// Apply @ 14d608940

void __thiscall
UE::Cameras::TCameraVariableSetter<bool>::Apply
          (TCameraVariableSetter<bool> *this,FCameraVariableTable *param_1)

{
  bool *pbVar1;
  bool bVar2;
  float fVar3;
  
  pbVar1 = FCameraVariableTable::FindValue<bool>
                     (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4));
  if (pbVar1 != (bool *)0x0) {
    bVar2 = *pbVar1;
    fVar3 = FCameraVariableSetter::GetBlendFactor((FCameraVariableSetter *)this);
    if (__real_3f000000 <= fVar3) {
      bVar2 = this->ToValue;
    }
    FCameraVariableTable::SetValue<bool>
              (param_1,(FCameraVariableID)*(uint *)((longlong)&this->_padding_ + 4),bVar2);
  }
  return;
}

