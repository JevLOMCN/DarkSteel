// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// RotatorToQuat @ 14569e8c0

TQuat<double> * __thiscall
FRotationConversionCache::RotatorToQuat
          (FRotationConversionCache *this,TQuat<double> *__return_storage_ptr__,
          TRotator<double> *param_1)

{
  TRotator<double> *this_00;
  FPayload *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FPayload *pFVar5;
  TQuat<double> *pTVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  FRotationConversionCache local_58 [2];
  TQuat<double> local_48 [2];
  
  if ((this->PayloadPtr).Ptr == (FPayload *)0x0) {
    pFVar5 = ::operator_new(0x40);
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    if (pFVar5 == (FPayload *)0x0) {
      pFVar5 = (FPayload *)0x0;
    }
    else {
      (pFVar5->CachedQuat).X = UE::Math::TQuat<double>::Identity.X;
      (pFVar5->CachedQuat).Y = dVar2;
      in_XMM1 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
      dVar3 = UE::Math::TQuat<double>::Identity.W;
      (pFVar5->CachedQuat).Z = UE::Math::TQuat<double>::Identity.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pFVar5->CachedQuat).W = dVar3;
      (pFVar5->CachedRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pFVar5->CachedRotator).Yaw = dVar2;
      (pFVar5->CachedRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    if (this != local_58) {
      pFVar1 = (this->PayloadPtr).Ptr;
      (this->PayloadPtr).Ptr = pFVar5;
      pFVar5 = (FPayload *)0x0;
      ::operator_delete(pFVar1,0x40);
    }
    ::operator_delete(pFVar5,0x40);
  }
  pFVar5 = (this->PayloadPtr).Ptr;
  this_00 = &pFVar5->CachedRotator;
  if (((param_1->Pitch != this_00->Pitch) || (param_1->Yaw != (pFVar5->CachedRotator).Yaw)) ||
     (param_1->Roll != (pFVar5->CachedRotator).Roll)) {
    auVar17._0_8_ = param_1->Pitch;
    auVar17._8_8_ = param_1->Yaw;
    auVar11 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar11 = roundpd(in_XMM1,auVar11,3);
    dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar16._0_8_ = auVar11._0_8_ * dVar2;
    dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar16._8_8_ = auVar11._8_8_ * dVar3;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_1->Roll;
    auVar11 = divpd(auVar11,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar22 = (double)auVar17._0_8_ - auVar16._0_8_;
    dVar24 = (double)auVar17._8_8_ - auVar16._8_8_;
    auVar17 = roundpd(auVar16,auVar11,3);
    dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar12._8_4_ = SUB84(dVar24,0);
    auVar12._0_8_ = dVar22;
    auVar12._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    dVar15 = auVar12._8_8_ + dVar3;
    dVar25 = param_1->Roll - auVar17._0_8_ * dVar4;
    dVar26 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar7 = -(ulonglong)(0.0 <= dVar22);
    uVar9 = -(ulonglong)(0.0 <= dVar24);
    uVar8 = -(ulonglong)(0.0 <= dVar25);
    uVar10 = -(ulonglong)(0.0 <= dVar26);
    auVar18._0_8_ = uVar7 & (ulonglong)dVar22;
    auVar18._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar24);
    auVar18._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar24) >> 0x20);
    auVar21._0_4_ = ~(uint)uVar7 & SUB84(dVar22 + dVar2,0);
    auVar21._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar22 + dVar2) >> 0x20);
    auVar21._8_4_ = ~(uint)uVar9 & SUB84(dVar15,0);
    auVar21._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
    auVar21 = auVar21 | auVar18;
    auVar19._0_8_ = uVar8 & (ulonglong)dVar25;
    auVar19._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar26);
    auVar19._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar26) >> 0x20);
    auVar13._8_4_ = SUB84(dVar26,0);
    auVar13._0_8_ = dVar25;
    auVar13._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    dVar15 = auVar13._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar23._0_4_ = ~(uint)uVar8 & SUB84(dVar25 + dVar4,0);
    auVar23._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar25 + dVar4) >> 0x20);
    auVar23._8_4_ = ~(uint)uVar10 & SUB84(dVar15,0);
    auVar23._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
    auVar23 = auVar23 | auVar19;
    uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar21._0_8_);
    uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar21._8_8_);
    uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar23._0_8_);
    auVar20._0_8_ = uVar8 & (ulonglong)(auVar21._0_8_ - dVar2);
    uVar7 = uVar10 & (ulonglong)(auVar21._8_8_ - dVar3);
    auVar20._8_4_ = (undefined4)uVar7;
    auVar20._12_4_ = (undefined4)(uVar7 >> 0x20);
    auVar14._0_4_ = ~(uint)uVar8 & auVar21._0_4_;
    auVar14._4_4_ = ~(uint)(uVar8 >> 0x20) & auVar21._4_4_;
    auVar14._8_4_ = ~(uint)uVar10 & auVar21._8_4_;
    auVar14._12_4_ = ~(uint)(uVar10 >> 0x20) & auVar21._12_4_;
    this_00->Pitch = (double)SUB168(auVar20 | auVar14,0);
    this_00->Yaw = (double)SUB168(auVar20 | auVar14,8);
    (pFVar5->CachedRotator).Roll =
         (double)((ulonglong)(auVar23._0_8_ - dVar4) & uVar9 |
                 CONCAT44(~(uint)(uVar9 >> 0x20) & auVar23._4_4_,~(uint)uVar9 & auVar23._0_4_));
    pTVar6 = UE::Math::TRotator<double>::Quaternion(this_00,local_48);
    dVar2 = pTVar6->Y;
    (pFVar5->CachedQuat).X = pTVar6->X;
    (pFVar5->CachedQuat).Y = dVar2;
    dVar2 = pTVar6->W;
    (pFVar5->CachedQuat).Z = pTVar6->Z;
    (pFVar5->CachedQuat).W = dVar2;
  }
  dVar2 = (pFVar5->CachedQuat).Y;
  dVar3 = (pFVar5->CachedQuat).Z;
  dVar4 = (pFVar5->CachedQuat).W;
  __return_storage_ptr__->X = (pFVar5->CachedQuat).X;
  __return_storage_ptr__->Y = dVar2;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  return __return_storage_ptr__;
}

