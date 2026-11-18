// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FSphericalSector @ 148a7f310

FSphericalSector * __thiscall
FSphericalSector::FSphericalSector
          (FSphericalSector *this,TVector<double> *param_1,double param_2,TVector<double> *param_3,
          double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  FSphericalSector *pFVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  this->Radius = param_2;
  (this->Center).field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->Axis).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->Axis).field0_0x0._s_0.Y = dVar1;
  (this->Axis).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  this->Angle = param_4;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  dVar1 = __real_3ff0000000000000 - (dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
  if (__real_3f847ae140000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAxis.IsNormalized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                       ,0x26,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSphericalSector *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((param_4 < 0.0) || (__real_4076800000000000 < param_4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAngle >= 0 && InAngle <= 360",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                       ,0x27,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSphericalSector *)(*pcVar4)();
      return pFVar6;
    }
  }
  return this;
}

// IsNearlyZero @ 148a9a200

bool __thiscall FSphericalSector::IsNearlyZero(FSphericalSector *this)

{
  undefined8 uVar1;
  
  if (((__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)this->Radius >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(this->Radius,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
      (((uVar1 = *(undefined8 *)&(this->Axis).field0_0x0,
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
        (uVar1 = *(undefined8 *)((longlong)&(this->Axis).field0_0x0 + 8),
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (uVar1 = *(undefined8 *)((longlong)&(this->Axis).field0_0x0 + 0x10),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) &&
     (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)this->Angle >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(this->Angle,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    return false;
  }
  return true;
}

// TransformBy @ 148aa2ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSphericalSector * __thiscall
FSphericalSector::TransformBy
          (FSphericalSector *this,FSphericalSector *__return_storage_ptr__,
          TTransform<double> *param_1)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [5];
  
  auVar25 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar2 = (param_1->Scale3D).XY.m128d_f64[0] * (this->Axis).field0_0x0._s_0.X;
  dVar3 = (param_1->Scale3D).XY.m128d_f64[1] * (this->Axis).field0_0x0._s_0.Y;
  uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar36._8_4_ = SUB84(dVar3,0);
  auVar36._0_8_ = dVar2;
  auVar36._12_4_ = uVar35;
  dVar5 = (this->Axis).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar23 = blendpd(auVar10,auVar25,2);
  dVar19 = auVar25._0_8_;
  dVar22 = auVar25._8_8_;
  auVar37._0_8_ = auVar36._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar2;
  auVar37._8_8_ = dVar5 * auVar10._8_8_ - dVar19 * dVar3;
  auVar24._8_4_ = SUB84(dVar3,0);
  auVar24._0_8_ = dVar2;
  auVar24._12_4_ = uVar35;
  uVar43 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(param_1->Scale3D).XY.m128d_f64;
  uVar44 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
  uVar45 = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
  uVar46 = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  auVar42._0_8_ =
       CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                *(uint *)(param_1->Scale3D).ZW.m128d_f64);
  auVar42._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1);
  auVar42._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = dVar5;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar10 = blendpd(auVar24,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar19 - auVar23._0_8_ * dVar5;
  auVar11._8_8_ = auVar10._8_8_ * dVar22 - auVar23._8_8_ * dVar7;
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar23 = blendpd(auVar37,auVar11,2);
  auVar38._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar38._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  dVar7 = auVar37._8_8_ + auVar37._8_8_;
  dVar1 = auVar11._0_8_ + auVar11._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar31._8_4_ = SUB84(dVar1,0);
  auVar31._0_8_ = dVar7;
  auVar31._12_4_ = uVar35;
  auVar27._8_4_ = SUB84(dVar1,0);
  auVar27._0_8_ = dVar7;
  auVar27._12_4_ = uVar35;
  auVar23 = blendpd(auVar27,auVar38,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
  auVar32._8_8_ = auVar38._0_8_ * auVar10._8_8_ - dVar19 * dVar1;
  auVar12._8_4_ = SUB84(auVar32._8_8_,0);
  auVar12._0_8_ = auVar32._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar10 = blendpd(auVar10,auVar25,2);
  dVar6 = (this->Center).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar28._0_8_ = auVar23._0_8_ * dVar19 - auVar10._0_8_ * auVar38._0_8_;
  auVar28._8_8_ = auVar23._8_8_ * dVar22 - auVar10._8_8_ * auVar38._8_8_;
  dVar1 = dVar1 * dVar9 + dVar3 + auVar28._0_8_;
  auVar23 = blendpd(auVar32,auVar28,2);
  dVar3 = (param_1->Scale3D).XY.m128d_f64[0] * (this->Center).field0_0x0._s_0.X;
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1] * (this->Center).field0_0x0._s_0.Y;
  uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  local_a8._s_0.Z = auVar38._0_8_ * dVar9 + dVar5 + auVar23._0_8_;
  auVar39._8_4_ = SUB84(dVar4,0);
  auVar39._0_8_ = dVar3;
  auVar39._12_4_ = uVar35;
  local_a8._8_4_ = SUB84(dVar1,0);
  local_a8._0_8_ = dVar7 * dVar9 + dVar2 + auVar12._8_8_;
  local_a8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar40._0_8_ = auVar39._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar3;
  auVar40._8_8_ = dVar6 * auVar10._8_8_ - dVar19 * dVar4;
  auVar13._8_4_ = SUB84(dVar4,0);
  auVar13._0_8_ = dVar3;
  auVar13._12_4_ = uVar35;
  auVar24 = blendpd(auVar10,auVar25,2);
  auVar23._8_4_ = SUB84(dVar8,0);
  auVar23._0_8_ = dVar6;
  auVar23._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar10 = blendpd(auVar13,auVar23,2);
  auVar14._0_8_ = auVar10._0_8_ * dVar19 - auVar24._0_8_ * dVar6;
  auVar14._8_8_ = auVar10._8_8_ * dVar22 - auVar24._8_8_ * dVar8;
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar23 = blendpd(auVar40,auVar14,2);
  dVar7 = auVar40._8_8_ + auVar40._8_8_;
  dVar1 = auVar14._0_8_ + auVar14._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar41._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar41._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar33._8_4_ = SUB84(dVar1,0);
  auVar33._0_8_ = dVar7;
  auVar33._12_4_ = uVar35;
  auVar29._8_4_ = SUB84(dVar1,0);
  auVar29._0_8_ = dVar7;
  auVar29._12_4_ = uVar35;
  auVar23 = blendpd(auVar29,auVar41,2);
  auVar25 = blendpd(auVar10,auVar25,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
  auVar34._8_8_ = auVar41._0_8_ * auVar10._8_8_ - dVar19 * dVar1;
  auVar30._0_8_ = auVar23._0_8_ * dVar19 - auVar25._0_8_ * auVar41._0_8_;
  auVar30._8_8_ = auVar23._8_8_ * dVar22 - auVar25._8_8_ * auVar41._8_8_;
  auVar15._8_4_ = SUB84(auVar34._8_8_,0);
  auVar15._0_8_ = auVar34._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar26._4_4_ = uVar44;
  auVar26._0_4_ = uVar43;
  auVar26._8_4_ = uVar45;
  auVar26._12_4_ = uVar46;
  auVar20._12_4_ = uVar44;
  auVar20._8_4_ = uVar43;
  auVar20._0_8_ = auVar42._0_8_;
  auVar16._4_4_ = uVar44;
  auVar16._0_4_ = uVar43;
  auVar16._8_4_ = uVar45;
  auVar16._12_4_ = uVar46;
  dVar1 = dVar1 * dVar22 + dVar4 + auVar30._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  auVar17._8_8_ = auVar42._0_8_;
  auVar17._0_8_ = auVar16._8_8_;
  auVar25 = maxpd(auVar26,auVar17);
  auVar24 = blendpd(auVar34,auVar30,2);
  auVar23 = maxpd(auVar25,auVar20);
  auVar18._4_4_ = uVar44;
  auVar18._0_4_ = uVar43;
  auVar18._8_4_ = uVar45;
  auVar18._12_4_ = uVar46;
  auVar21._8_4_ = auVar42._8_4_;
  auVar21._0_8_ = auVar42._0_8_;
  auVar21._12_4_ = auVar42._12_4_;
  auVar25 = blendpd(auVar18,auVar42,2);
  auVar10 = maxpd(auVar21,auVar25);
  auVar25._4_4_ = uVar46;
  auVar25._0_4_ = uVar45;
  auVar25._8_4_ = auVar42._8_4_;
  auVar25._12_4_ = auVar42._12_4_;
  maxpd(auVar10,auVar25);
  local_88[0]._16_8_ =
       auVar41._0_8_ * dVar22 + dVar6 + auVar24._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_88[0]._8_4_ = SUB84(dVar1,0);
  local_88[0]._0_8_ =
       dVar7 * dVar22 + dVar3 + auVar15._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  local_88[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  FSphericalSector(__return_storage_ptr__,(TVector<double> *)&local_88[0]._s_0,
                   (double)(float)auVar23._0_8_ * this->Radius,(TVector<double> *)&local_a8._s_0,
                   this->Angle);
  return __return_storage_ptr__;
}

// BuildDebugMesh @ 148ac0c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *
__thiscall
FSphericalSector::BuildDebugMesh
          (FSphericalSector *this,
          TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  TMatrix<double> *this_00;
  TQuat<double> *pTVar18;
  TVector<double> *pTVar19;
  longlong lVar20;
  TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  *pTVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  double dVar31;
  double dVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined4 uVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar57;
  double dVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  undefined1 auVar62 [16];
  double dVar64;
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auStackY_2d8 [32];
  uint local_2a4;
  int local_2a0;
  TVector<double>_u_0 local_270;
  TRotator<double> local_258;
  TRotator<double> local_240;
  TRotator<double> local_228;
  TRotator<double> local_210;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TVector<double> local_1b8;
  TVector<double> local_1a0;
  TQuat<double> local_188;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  bVar16 = IsNearlyZero(this);
  if (!bVar16) {
    dVar4 = this->Angle;
    iVar24 = -((int)ROUND(__real_bf000000 - (float)dVar4 * ___real_3eb60b61) >> 1);
    if (iVar24 < 4) {
      iVar24 = 4;
    }
    this_00 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_168,&this->Axis);
    UE::Math::TMatrix<double>::Rotator(this_00,&local_258);
    dVar5 = this->Radius;
    local_270._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X * dVar5;
    local_270._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar5;
    local_270._s_0.Z = dVar5 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    uVar29 = (iVar24 + 2) * 0x22;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    if (*piVar1 < (int)uVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar29,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    uVar56 = (undefined4)__real_bfe0000000000000;
    uVar57 = (undefined4)((ulonglong)__real_bfe0000000000000 >> 0x20);
    local_2a4 = 0xffffffff;
    local_2a0 = 0;
    do {
      dVar61 = _UNK_150689518;
      dVar51 = ___xmm_00000000000000003ff0000000000000;
      local_240.Pitch = local_258.Pitch;
      local_240.Yaw = local_258.Yaw;
      local_240.Roll = (double)((float)local_2a0 * __real_41340000) + local_258.Roll;
      pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_240,&local_188);
      dVar5 = (this->Center).field0_0x0._s_0.Y;
      dVar6 = (this->Center).field0_0x0._s_0.X;
      dVar7 = (this->Center).field0_0x0._s_0.Z;
      auVar8._0_8_ = pTVar18->X;
      auVar8._8_8_ = pTVar18->Y;
      auVar9._0_8_ = pTVar18->Z;
      auVar9._8_8_ = pTVar18->W;
      local_228.Yaw = this->Angle * (double)CONCAT44(uVar57,uVar56);
      local_228.Pitch = 0.0;
      local_228.Roll = 0.0;
      local_1d8 = auVar8;
      local_1c8 = auVar9;
      pTVar19 = UE::Math::TRotator<double>::RotateVector
                          (&local_228,&local_1b8,(TVector<double> *)&local_270._s_0);
      auVar65 = blendpd(auVar8,auVar9,2);
      auVar63 = *(undefined1 (*) [16])&pTVar19->field0_0x0;
      auVar43._8_4_ = (int)auVar9._0_8_;
      auVar43._0_8_ = auVar8._8_8_;
      auVar43._12_4_ = (int)((ulonglong)auVar9._0_8_ >> 0x20);
      dVar51 = (pTVar19->field0_0x0)._s_0.Z * dVar51;
      dVar61 = dVar61 * 0.0;
      dVar52 = auVar63._8_8_;
      auVar39._8_4_ = SUB84(dVar61,0);
      auVar39._0_8_ = dVar51;
      auVar39._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
      auVar39 = blendpd(auVar63,auVar39,2);
      auVar53._0_8_ = dVar52 * (double)auVar8._0_8_ - (double)auVar8._8_8_ * auVar63._0_8_;
      auVar53._8_8_ = dVar51 * (double)auVar8._8_8_ - auVar43._8_8_ * dVar52;
      auVar62._8_4_ = SUB84(auVar53._8_8_,0);
      auVar62._0_8_ = auVar53._0_8_;
      auVar62._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
      dVar31 = auVar65._0_8_;
      dVar38 = auVar65._8_8_;
      auVar40._0_8_ = auVar39._0_8_ * (double)auVar9._0_8_ - dVar31 * dVar51;
      auVar40._8_8_ = auVar39._8_8_ * (double)auVar9._8_8_ - dVar38 * dVar61;
      auVar39 = blendpd(auVar53,auVar40,2);
      dVar61 = auVar62._8_8_ + auVar62._8_8_;
      dVar64 = auVar40._0_8_ + auVar40._0_8_;
      auVar54._0_8_ = auVar39._0_8_ + auVar39._0_8_;
      auVar54._8_8_ = auVar39._8_8_ + auVar39._8_8_;
      uVar56 = SUB84(dVar64,0);
      auVar47._8_4_ = uVar56;
      auVar47._0_8_ = dVar61;
      uVar57 = (undefined4)((ulonglong)dVar64 >> 0x20);
      auVar47._12_4_ = uVar57;
      auVar65._8_4_ = uVar56;
      auVar65._0_8_ = dVar61;
      auVar65._12_4_ = uVar57;
      auVar41._8_4_ = uVar56;
      auVar41._0_8_ = dVar61;
      auVar41._12_4_ = uVar57;
      auVar39 = blendpd(auVar41,auVar54,2);
      auVar48._0_8_ = auVar47._8_8_ * (double)auVar8._0_8_ - dVar61 * (double)auVar8._8_8_;
      auVar48._8_8_ = auVar54._0_8_ * (double)auVar8._8_8_ - auVar65._8_8_ * (double)auVar9._0_8_;
      auVar32._8_4_ = SUB84(auVar54._8_8_,0);
      auVar32._0_8_ = auVar54._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
      auVar42._0_8_ = auVar39._0_8_ * (double)auVar9._0_8_ - auVar54._0_8_ * dVar31;
      auVar42._8_8_ = auVar39._8_8_ * (double)auVar9._8_8_ - auVar32._8_8_ * dVar38;
      auVar33._8_4_ = SUB84(auVar48._8_8_,0);
      auVar33._0_8_ = auVar48._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar39 = blendpd(auVar48,auVar42,2);
      auVar63._0_8_ = dVar61 * (double)auVar9._8_8_ + auVar63._0_8_ + auVar33._8_8_ + dVar6;
      auVar63._8_8_ = dVar64 * (double)auVar9._8_8_ + dVar52 + auVar42._0_8_ + dVar5;
      dVar51 = auVar54._0_8_ * (double)auVar9._8_8_ + dVar51 + auVar39._0_8_ + dVar7;
      iVar17 = __return_storage_ptr__->ArrayNum;
      local_1f8 = auVar63;
      local_1e8 = dVar51;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      iVar26 = 1;
      __return_storage_ptr__->ArrayNum = iVar17 + 1;
      dVar61 = (this->Center).field0_0x0._s_0.Y;
      lVar20 = (longlong)iVar17;
      pFVar30 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(double *)(pFVar30 + lVar20 * 0x30) = (this->Center).field0_0x0._s_0.X;
      *(double *)(pFVar30 + lVar20 * 0x30 + 8) = dVar61;
      *(double *)(pFVar30 + lVar20 * 0x30 + 0x10) = (this->Center).field0_0x0._s_0.Z;
      *(undefined1 (*) [16])(pFVar30 + lVar20 * 0x30 + 0x18) = auVar63;
      *(double *)(pFVar30 + lVar20 * 0x30 + 0x28) = dVar51;
      uVar29 = __return_storage_ptr__->ArrayNum;
      dVar61 = dVar51;
      auVar39 = local_1f8;
      dVar52 = local_1e8;
      if (0 < iVar24) {
        do {
          local_210.Pitch = 0.0;
          local_210.Roll = 0.0;
          local_210.Yaw =
               (double)iVar26 * (dVar4 / (double)iVar24) - this->Angle * __real_3fe0000000000000;
          pTVar19 = UE::Math::TRotator<double>::RotateVector
                              (&local_210,&local_1a0,(TVector<double> *)&local_270._s_0);
          auVar39 = *(undefined1 (*) [16])&pTVar19->field0_0x0;
          dVar51 = (pTVar19->field0_0x0)._s_0.Z * ___xmm_00000000000000003ff0000000000000;
          uVar56 = SUB84(_UNK_150689518 * 0.0,0);
          uVar57 = (undefined4)((ulonglong)(_UNK_150689518 * 0.0) >> 0x20);
          iVar17 = __return_storage_ptr__->ArrayNum;
          dVar60 = auVar39._8_8_;
          auVar13._8_4_ = uVar56;
          auVar13._0_8_ = dVar51;
          auVar13._12_4_ = uVar57;
          auVar43 = blendpd(auVar39,auVar13,2);
          auVar58._0_8_ = dVar60 * (double)auVar8._0_8_ - auVar39._0_8_ * (double)auVar8._8_8_;
          auVar58._8_8_ = dVar51 * (double)auVar8._8_8_ - dVar60 * (double)auVar9._0_8_;
          auVar34._8_4_ = uVar56;
          auVar34._0_8_ = dVar51;
          auVar34._12_4_ = uVar57;
          auVar55._8_4_ = SUB84(auVar58._8_8_,0);
          auVar55._0_8_ = auVar58._0_8_;
          auVar55._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
          auVar44._0_8_ = auVar43._0_8_ * (double)auVar9._0_8_ - dVar51 * dVar31;
          auVar44._8_8_ = auVar43._8_8_ * (double)auVar9._8_8_ - auVar34._8_8_ * dVar38;
          auVar43 = blendpd(auVar58,auVar44,2);
          dVar52 = auVar55._8_8_ + auVar55._8_8_;
          dVar64 = auVar44._0_8_ + auVar44._0_8_;
          auVar59._0_8_ = auVar43._0_8_ + auVar43._0_8_;
          auVar59._8_8_ = auVar43._8_8_ + auVar43._8_8_;
          uVar56 = SUB84(dVar64,0);
          auVar49._8_4_ = uVar56;
          auVar49._0_8_ = dVar52;
          uVar57 = (undefined4)((ulonglong)dVar64 >> 0x20);
          auVar49._12_4_ = uVar57;
          auVar35._8_4_ = uVar56;
          auVar35._0_8_ = dVar52;
          auVar35._12_4_ = uVar57;
          auVar45._8_4_ = uVar56;
          auVar45._0_8_ = dVar52;
          auVar45._12_4_ = uVar57;
          auVar43 = blendpd(auVar45,auVar59,2);
          auVar50._0_8_ = auVar49._8_8_ * (double)auVar8._0_8_ - dVar52 * (double)auVar8._8_8_;
          auVar50._8_8_ =
               auVar59._0_8_ * (double)auVar8._8_8_ - auVar35._8_8_ * (double)auVar9._0_8_;
          auVar36._8_4_ = SUB84(auVar59._8_8_,0);
          auVar36._0_8_ = auVar59._0_8_;
          auVar36._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
          auVar46._0_8_ = auVar43._0_8_ * (double)auVar9._0_8_ - auVar59._0_8_ * dVar31;
          auVar46._8_8_ = auVar43._8_8_ * (double)auVar9._8_8_ - auVar36._8_8_ * dVar38;
          auVar37._8_4_ = SUB84(auVar50._8_8_,0);
          auVar37._0_8_ = auVar50._0_8_;
          auVar37._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
          auVar43 = blendpd(auVar50,auVar46,2);
          dVar52 = (double)auVar9._8_8_ * dVar52 + auVar39._0_8_ + auVar37._8_8_ + dVar6;
          dVar64 = (double)auVar9._8_8_ * dVar64 + dVar60 + auVar46._0_8_ + dVar5;
          uVar56 = SUB84(dVar64,0);
          uVar57 = (undefined4)((ulonglong)dVar64 >> 0x20);
          dVar51 = dVar51 + (double)auVar9._8_8_ * auVar59._0_8_ + auVar43._0_8_ + dVar7;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          iVar26 = iVar26 + 1;
          __return_storage_ptr__->ArrayNum = iVar17 + 1;
          lVar20 = (longlong)iVar17;
          pFVar30 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(undefined1 (*) [16])(pFVar30 + lVar20 * 0x30) = auVar63;
          *(double *)(pFVar30 + lVar20 * 0x30 + 0x10) = dVar61;
          auVar63._8_4_ = uVar56;
          auVar63._0_8_ = dVar52;
          auVar63._12_4_ = uVar57;
          auVar14._8_4_ = uVar56;
          auVar14._0_8_ = dVar52;
          auVar14._12_4_ = uVar57;
          *(undefined1 (*) [16])(pFVar30 + lVar20 * 0x30 + 0x18) = auVar14;
          *(double *)(pFVar30 + lVar20 * 0x30 + 0x28) = dVar51;
          dVar61 = dVar51;
          auVar39 = auVar63;
          dVar52 = dVar51;
        } while (iVar26 <= iVar24);
      }
      local_1e8 = dVar52;
      local_1f8 = auVar39;
      iVar17 = __return_storage_ptr__->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      lVar20 = (longlong)iVar17;
      __return_storage_ptr__->ArrayNum = iVar17 + 1;
      dVar5 = (this->Center).field0_0x0._s_0.Y;
      pFVar30 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(double *)(pFVar30 + lVar20 * 0x30) = (this->Center).field0_0x0._s_0.X;
      *(double *)(pFVar30 + lVar20 * 0x30 + 8) = dVar5;
      *(double *)(pFVar30 + lVar20 * 0x30 + 0x10) = (this->Center).field0_0x0._s_0.Z;
      *(undefined1 (*) [16])(pFVar30 + lVar20 * 0x30 + 0x18) = auVar63;
      *(double *)(pFVar30 + lVar20 * 0x30 + 0x28) = dVar51;
      if (local_2a0 != 0) {
        lVar20 = (longlong)iVar24;
        if (0 < iVar24) {
          lVar25 = (longlong)(int)local_2a4 * 0x30;
          uVar27 = local_2a4;
          do {
            uVar23 = (uVar29 - local_2a4) + uVar27;
            uVar28 = 0;
            if ((int)uVar23 < __return_storage_ptr__->ArrayNum) {
              uVar28 = ~uVar23 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar12 = (code *)swi(3);
              pTVar21 = (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar12)();
              return pTVar21;
            }
            pFVar30 = (__return_storage_ptr__->AllocatorInstance).Data +
                      ((longlong)(int)uVar29 - (longlong)(int)local_2a4) * 0x30 + lVar25;
            uVar28 = 0;
            if ((int)uVar27 < __return_storage_ptr__->ArrayNum) {
              uVar28 = ~uVar27 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar12 = (code *)swi(3);
              pTVar21 = (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar12)();
              return pTVar21;
            }
            iVar17 = __return_storage_ptr__->ArrayNum;
            pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (iVar17 == *piVar1) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
            }
            uVar27 = uVar27 + 1;
            __return_storage_ptr__->ArrayNum = iVar17 + 1;
            pFVar2 = pFVar10 + lVar25;
            uVar15 = *(undefined8 *)(pFVar2 + 8);
            lVar22 = (longlong)iVar17;
            pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
            *(undefined8 *)(pFVar11 + lVar22 * 0x30) = *(undefined8 *)pFVar2;
            *(undefined8 *)(pFVar11 + lVar22 * 0x30 + 8) = uVar15;
            lVar3 = lVar25 + 0x10;
            lVar25 = lVar25 + 0x30;
            *(undefined8 *)(pFVar11 + lVar22 * 0x30 + 0x10) = *(undefined8 *)(pFVar10 + lVar3);
            uVar15 = *(undefined8 *)(pFVar30 + 8);
            *(undefined8 *)(pFVar11 + lVar22 * 0x30 + 0x18) = *(undefined8 *)pFVar30;
            *(undefined8 *)(pFVar11 + lVar22 * 0x30 + 0x18 + 8) = uVar15;
            *(undefined8 *)(pFVar11 + lVar22 * 0x30 + 0x28) = *(undefined8 *)(pFVar30 + 0x10);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        uVar28 = (uVar29 - 1) + iVar24;
        uVar27 = 0;
        if ((int)uVar28 < __return_storage_ptr__->ArrayNum) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          pTVar21 = (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar12)();
          return pTVar21;
        }
        pFVar30 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_2a4 = iVar24 + -1 + local_2a4;
        uVar27 = 0;
        if ((int)local_2a4 < __return_storage_ptr__->ArrayNum) {
          uVar27 = ~local_2a4 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          pTVar21 = (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar12)();
          return pTVar21;
        }
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        iVar17 = __return_storage_ptr__->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        lVar20 = (longlong)iVar17;
        __return_storage_ptr__->ArrayNum = iVar17 + 1;
        pFVar2 = pFVar10 + (longlong)(int)local_2a4 * 0x30 + 0x18;
        uVar15 = *(undefined8 *)(pFVar2 + 8);
        pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
        *(undefined8 *)(pFVar11 + lVar20 * 0x30) = *(undefined8 *)pFVar2;
        *(undefined8 *)(pFVar11 + lVar20 * 0x30 + 8) = uVar15;
        *(undefined8 *)(pFVar11 + lVar20 * 0x30 + 0x10) =
             *(undefined8 *)(pFVar10 + (longlong)(int)local_2a4 * 0x30 + 0x28);
        pFVar10 = pFVar30 + (longlong)(int)uVar28 * 0x30 + 0x18;
        uVar15 = *(undefined8 *)(pFVar10 + 8);
        *(undefined8 *)(pFVar11 + lVar20 * 0x30 + 0x18) = *(undefined8 *)pFVar10;
        *(undefined8 *)(pFVar11 + lVar20 * 0x30 + 0x18 + 8) = uVar15;
        *(undefined8 *)(pFVar11 + lVar20 * 0x30 + 0x28) =
             *(undefined8 *)(pFVar30 + (longlong)(int)uVar28 * 0x30 + 0x28);
      }
      local_2a0 = local_2a0 + 1;
      uVar56 = (undefined4)__real_bfe0000000000000;
      uVar57 = (undefined4)((ulonglong)__real_bfe0000000000000 >> 0x20);
      local_2a4 = uVar29;
    } while (local_2a0 < 0x11);
  }
  return __return_storage_ptr__;
}

// IntersectsBox @ 148ad3840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FSphericalSector::IntersectsBox(FSphericalSector *this,TBox2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  dVar13 = (param_1->Min).field0_0x0._s_0.Y;
  dVar16 = (param_1->Min).field0_0x0._s_0.X;
  dVar14 = (param_1->Max).field0_0x0._s_0.X;
  dVar5 = (param_1->Max).field0_0x0._s_0.Y;
  dVar7 = (this->Center).field0_0x0._s_0.X;
  dVar6 = dVar14;
  if (dVar7 <= dVar14) {
    dVar6 = dVar7;
  }
  dVar1 = (this->Center).field0_0x0._s_0.Y;
  dVar9 = dVar5;
  if (dVar1 <= dVar5) {
    dVar9 = dVar1;
  }
  if (dVar6 <= dVar16) {
    dVar6 = dVar16;
  }
  if (dVar9 <= dVar13) {
    dVar9 = dVar13;
  }
  if (this->Radius * this->Radius <
      (dVar9 - dVar1) * (dVar9 - dVar1) + (dVar6 - dVar7) * (dVar6 - dVar7)) {
LAB_148ad3cea:
    bVar4 = false;
  }
  else {
    if (this->Angle < __real_4076800000000000) {
      dVar16 = dVar16 - dVar7;
      dVar13 = dVar13 - dVar1;
      dVar6 = dVar13 * dVar13 + dVar16 * dVar16;
      if (dVar6 <= __real_3e45798ee0000000) {
        dVar6 = 0.0;
        dVar9 = 0.0;
      }
      else {
        dVar9 = __real_3ff0000000000000 / SQRT(dVar6);
        dVar6 = dVar16 * dVar9;
        dVar9 = dVar13 * dVar9;
      }
      dVar14 = dVar14 - dVar7;
      dVar7 = dVar14 * dVar14 + dVar13 * dVar13;
      if (dVar7 <= __real_3e45798ee0000000) {
        dVar3 = 0.0;
        dVar7 = 0.0;
      }
      else {
        dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
        dVar3 = dVar14 * dVar7;
        dVar7 = dVar7 * dVar13;
      }
      dVar5 = dVar5 - dVar1;
      dVar13 = dVar5 * dVar5 + dVar14 * dVar14;
      if (dVar13 <= __real_3e45798ee0000000) {
        dVar13 = 0.0;
        dVar1 = 0.0;
      }
      else {
        dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
        dVar1 = dVar5 * dVar13;
        dVar13 = dVar13 * dVar14;
      }
      dVar14 = dVar5 * dVar5 + dVar16 * dVar16;
      if (dVar14 <= __real_3e45798ee0000000) {
        dVar16 = 0.0;
        dVar14 = 0.0;
      }
      else {
        dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
        dVar16 = dVar14 * dVar16;
        dVar14 = dVar14 * dVar5;
      }
      dVar5 = this->Angle;
      dVar8 = (this->Axis).field0_0x0._s_0.X;
      dVar2 = (this->Axis).field0_0x0._s_0.Y;
      if (__real_4066800000000000 < dVar5) {
        if ((((dVar6 * dVar8 + dVar2 * dVar9 < 0.0) && (dVar3 * dVar8 + dVar7 * dVar2 < 0.0)) &&
            (dVar13 * dVar8 + dVar1 * dVar2 < 0.0)) && (dVar16 * dVar8 + dVar14 * dVar2 < 0.0)) {
          dVar5 = sin((__real_4076800000000000 - dVar5) * ___real_3f81df46aaaaaaab);
          uVar18 = SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar19 = (uint)((ulonglong)dVar8 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          uVar20 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          dVar8 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
          dVar9 = (double)CONCAT44(uVar19,uVar18) * dVar9 - dVar6 * (double)CONCAT44(uVar21,uVar20);
          dVar6 = (double)CONCAT44(uVar19,uVar18) * dVar7 - dVar3 * (double)CONCAT44(uVar21,uVar20);
          dVar7 = (double)CONCAT44(uVar19,uVar18) * dVar1 - dVar13 * (double)CONCAT44(uVar21,uVar20)
          ;
          dVar13 = (double)CONCAT44(uVar19,uVar18) * dVar14 -
                   dVar16 * (double)CONCAT44(uVar21,uVar20);
          if (((((dVar8 < dVar9) && (dVar8 < dVar6)) &&
               ((dVar8 < dVar7 && ((dVar8 < dVar13 && (dVar9 < dVar5)))))) && (dVar6 < dVar5)) &&
             (dVar7 < dVar5)) {
            return dVar5 <= dVar13;
          }
        }
      }
      else {
        dVar5 = sin(dVar5 * ___real_3f81df46aaaaaaab);
        dVar10 = dVar9 * dVar8 - dVar2 * dVar6;
        dVar15 = dVar7 * dVar8 - dVar2 * dVar3;
        dVar17 = dVar1 * dVar8 - dVar2 * dVar13;
        dVar11 = dVar14 * dVar8 - dVar2 * dVar16;
        dVar12 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
        if (((((dVar10 < dVar12) && (dVar15 < dVar12)) && (dVar17 < dVar12)) && (dVar11 < dVar12))
           || ((((dVar5 < dVar10 && (dVar5 < dVar15)) && ((dVar5 < dVar17 && (dVar5 < dVar11)))) ||
               ((((dVar6 * dVar8 + dVar9 * dVar2 < 0.0 && (dVar3 * dVar8 + dVar7 * dVar2 < 0.0)) &&
                 (dVar13 * dVar8 + dVar1 * dVar2 < 0.0)) && (dVar16 * dVar8 + dVar14 * dVar2 < 0.0))
               )))) goto LAB_148ad3cea;
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

