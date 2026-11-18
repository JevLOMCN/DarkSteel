// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 14758a260

UScriptStruct * __cdecl FBaseAttenuationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBaseAttenuationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBaseAttenuationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBaseAttenuationSettings,(UObject *)pUVar1,
                         L"BaseAttenuationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FBaseAttenuationSettings.OuterSingleton;
}

// FBaseAttenuationSettings @ 1475a4490

FBaseAttenuationSettings * __thiscall
FBaseAttenuationSettings::FBaseAttenuationSettings(FBaseAttenuationSettings *this)

{
  this->DistanceAlgorithm = Linear;
  this->AttenuationShape = '\0';
  this->_padding_ = (longlong)&___7FBaseAttenuationSettings__6B_;
  this->FalloffMode = Continues;
  (this->AttenuationShapeExtents).field0_0x0._s_0.X = 400.0;
  (this->AttenuationShapeExtents).field0_0x0._s_0.Y = 0.0;
  (this->AttenuationShapeExtents).field0_0x0._s_0.Z = 0.0;
  this->ConeOffset = 0.0;
  this->ConeSphereFalloffDistance = 0.0;
  this->dBAttenuationAtMax = -60.0;
  this->FalloffDistance = 3600.0;
  this->ConeSphereRadius = 0.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomAttenuationCurve);
  return this;
}

// ~FBaseAttenuationSettings @ 1475a97f0

void __thiscall FBaseAttenuationSettings::~FBaseAttenuationSettings(FBaseAttenuationSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FBaseAttenuationSettings__6B_;
  pFVar1 = (this->CustomAttenuationCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CustomAttenuationCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CustomAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CustomAttenuationCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->CustomAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomAttenuationCurve).EditorCurveData._padding_);
  return;
}

// AttenuationEval @ 1475b4180

float __thiscall
FBaseAttenuationSettings::AttenuationEval
          (FBaseAttenuationSettings *this,float param_1,float param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  FRichCurve *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = __real_3f800000;
  fVar5 = 0.0;
  fVar4 = param_1 * param_3;
  if (param_2 <= __real_3f800000) {
    param_2 = __real_3f800000;
  }
  switch(this->DistanceAlgorithm) {
  case Linear:
    fVar5 = __real_3f800000 - fVar4 / param_2;
    break;
  case Logarithmic:
    if (fVar4 <= __real_38d1b717) {
      fVar4 = __real_38d1b717;
    }
    fVar5 = logf(fVar4 / param_2);
    fVar5 = fVar5 * __real_bf000000;
    break;
  case Inverse:
    if (fVar4 <= __real_38d1b717) {
      fVar4 = __real_38d1b717;
    }
    fVar5 = __real_3ca3d70a / (fVar4 / param_2);
    break;
  case LogReverse:
    if (fVar4 <= param_2) {
      fVar4 = __real_3f800000 - fVar4 / param_2;
      if (fVar4 <= __real_38d1b717) {
        fVar4 = __real_38d1b717;
      }
      fVar4 = logf(fVar4);
      fVar5 = fVar4 * __real_3f000000 + fVar3;
    }
    break;
  case NaturalSound:
    if ((0.0 < this->dBAttenuationAtMax) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("dBAttenuationAtMax <= 0.0f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                           ,0xdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    fVar4 = fVar4 / param_2;
    if (this->FalloffMode == Hold) {
      if (fVar3 <= fVar4) {
        fVar4 = fVar3;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
    else if (this->FalloffMode == Silent) {
      if (fVar3 <= fVar4) {
        fVar4 = fVar3;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (fVar3 <= fVar4) break;
    }
    fVar5 = powf(__real_41200000,fVar4 * this->dBAttenuationAtMax * __real_3d4ccccd);
    break;
  case Custom:
    this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->CustomAttenuationCurve);
    fVar5 = FRichCurve::Eval(this_00,fVar4 / param_2,0.0);
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                       ,0xfb,L"Unknown attenuation distance algorithm!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return fVar5;
}

// AttenuationEvalBox @ 1475b4390

float __thiscall
FBaseAttenuationSettings::AttenuationEvalBox
          (FBaseAttenuationSettings *this,TTransform<double> *param_1,TVector<double> *param_2,
          float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  uint uVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  
  dVar21 = (param_1->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar22 = (param_1->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar7 = (param_2->field0_0x0)._s_0.Z - (param_1->Translation).ZW.m128d_f64[0];
  auVar20._8_4_ = SUB84(dVar22,0);
  auVar20._0_8_ = dVar21;
  auVar20._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  dVar2 = (param_1->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar16 = (param_1->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->Translation).XY.m128d_f64[0];
  dVar19 = (param_2->field0_0x0)._s_0.Y - (param_1->Translation).XY.m128d_f64[1];
  uVar29 = (undefined4)((ulonglong)dVar19 >> 0x20);
  auVar11._8_4_ = SUB84(dVar16,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar20 = blendpd(auVar20,auVar11,2);
  auVar26._8_4_ = SUB84(dVar19,0);
  auVar26._0_8_ = dVar3;
  auVar26._12_4_ = uVar29;
  auVar10._8_4_ = SUB84(dVar19,0);
  auVar10._0_8_ = dVar3;
  auVar10._12_4_ = uVar29;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar7;
  auVar11 = blendpd(auVar10,auVar4,2);
  auVar27._0_8_ = auVar26._8_8_ * dVar21 - dVar22 * dVar3;
  auVar27._8_8_ = dVar7 * dVar22 - dVar2 * dVar19;
  auVar12._0_8_ = auVar11._0_8_ * dVar2 - auVar20._0_8_ * dVar7;
  auVar12._8_8_ = auVar11._8_8_ * dVar16 - auVar20._8_8_ * 0.0;
  auVar11 = blendpd(auVar27,auVar12,2);
  dVar25 = auVar27._8_8_ + auVar27._8_8_;
  dVar5 = auVar12._0_8_ + auVar12._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar28._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar28._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar25;
  auVar17._12_4_ = uVar29;
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar25;
  auVar13._12_4_ = uVar29;
  auVar11 = blendpd(auVar13,auVar28,2);
  dVar1 = (this->AttenuationShapeExtents).field0_0x0._s_0.Y;
  auVar18._0_8_ = auVar17._8_8_ * dVar21 - dVar25 * dVar22;
  auVar18._8_8_ = auVar28._0_8_ * dVar22 - dVar5 * dVar2;
  dVar21 = (this->AttenuationShapeExtents).field0_0x0._s_0.X;
  dVar22 = (this->AttenuationShapeExtents).field0_0x0._s_0.Z;
  auVar14._0_8_ = auVar11._0_8_ * dVar2 - auVar28._0_8_ * auVar20._0_8_;
  auVar14._8_8_ = auVar11._8_8_ * dVar16 - auVar28._8_8_ * auVar20._8_8_;
  auVar11 = blendpd(auVar18,auVar14,2);
  dVar9 = 0.0;
  dVar2 = dVar25 * dVar16 + dVar3 + auVar18._8_8_;
  dVar3 = dVar5 * dVar16 + dVar19 + auVar14._0_8_;
  dVar25 = auVar28._0_8_ * dVar16 + dVar7 + auVar11._0_8_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  uVar23 = SUB84(dVar21,0) ^ uVar6;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar24 = (uint)((ulonglong)dVar21 >> 0x20) ^ uVar8;
  dVar19 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar6);
  dVar16 = (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^ uVar8,SUB84(dVar22,0) ^ uVar6);
  if ((double)CONCAT44(uVar24,uVar23) <= dVar2) {
    if (dVar2 <= dVar21) goto LAB_1475b4517;
  }
  else {
    dVar21 = (double)CONCAT44(uVar24,uVar23);
  }
  dVar9 = (dVar2 - dVar21) * (dVar2 - dVar21);
LAB_1475b4517:
  if ((dVar3 < dVar19) || (dVar19 = dVar1, dVar1 < dVar3)) {
    dVar9 = dVar9 + (dVar3 - dVar19) * (dVar3 - dVar19);
  }
  if ((dVar25 < dVar16) || (dVar16 = dVar22, dVar22 < dVar25)) {
    dVar9 = dVar9 + (dVar25 - dVar16) * (dVar25 - dVar16);
  }
  fVar15 = (float)dVar9;
  if (((float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) ||
     (fVar15 < this->FalloffDistance * this->FalloffDistance)) {
    fVar15 = AttenuationEval(this,SQRT(fVar15),this->FalloffDistance,param_3);
  }
  else {
    fVar15 = 0.0;
  }
  return fVar15;
}

// AttenuationEvalCapsule @ 1475b45e0

float __thiscall
FBaseAttenuationSettings::AttenuationEvalCapsule
          (FBaseAttenuationSettings *this,TTransform<double> *param_1,TVector<double> *param_2,
          float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0 [7];
  
  fVar19 = (float)(this->AttenuationShapeExtents).field0_0x0._s_0.X;
  fVar18 = (float)(this->AttenuationShapeExtents).field0_0x0._s_0.Y;
  if (fVar18 < fVar19) {
    auVar7 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
    auVar4 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar8 = blendpd(auVar4,auVar7,2);
    dVar3 = auVar7._0_8_;
    auVar16._0_8_ = auVar4._0_8_ * 0.0 - auVar4._8_8_ * 0.0;
    auVar16._8_8_ = __real_3ff0000000000000 * auVar4._8_8_ - dVar3 * 0.0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = __real_3ff0000000000000;
    auVar4 = blendpd(ZEXT816(0),auVar4,2);
    auVar9._0_8_ = auVar4._0_8_ * dVar3 - auVar8._0_8_ * __real_3ff0000000000000;
    auVar9._8_8_ = auVar4._8_8_ * auVar7._8_8_ - auVar8._8_8_ * 0.0;
    auVar4 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar8 = blendpd(auVar16,auVar9,2);
    dVar5 = auVar16._8_8_ + auVar16._8_8_;
    dVar10 = auVar9._0_8_ + auVar9._0_8_;
    uVar15 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar17._0_8_ = auVar8._0_8_ + auVar8._0_8_;
    auVar17._8_8_ = auVar8._8_8_ + auVar8._8_8_;
    auVar13._8_4_ = SUB84(dVar10,0);
    auVar13._0_8_ = dVar5;
    auVar13._12_4_ = uVar15;
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = dVar5;
    auVar8._12_4_ = uVar15;
    auVar9 = blendpd(auVar4,auVar7,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar4._0_8_ - auVar4._8_8_ * dVar5;
    auVar14._8_8_ = auVar17._0_8_ * auVar4._8_8_ - dVar3 * dVar10;
    auVar4 = blendpd(auVar8,auVar17,2);
    auVar12._0_8_ = auVar4._0_8_ * dVar3 - auVar9._0_8_ * auVar17._0_8_;
    auVar12._8_8_ = auVar4._8_8_ * auVar7._8_8_ - auVar9._8_8_ * auVar17._8_8_;
    auVar7._8_4_ = SUB84(auVar14._8_8_,0);
    auVar7._0_8_ = auVar14._0_8_;
    auVar7._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    dVar3 = (double)(fVar19 - fVar18);
    auVar4 = blendpd(auVar14,auVar12,2);
    dVar2 = (param_1->Translation).ZW.m128d_f64[0];
    dVar5 = dVar3 * (dVar5 * dVar1 + auVar7._8_8_);
    dVar10 = dVar3 * (dVar10 * dVar1 + auVar12._0_8_);
    dVar3 = dVar3 * (auVar17._0_8_ * dVar1 + __real_3ff0000000000000 + auVar4._0_8_);
    local_b0[0]._0_8_ = dVar5 + (param_1->Translation).XY.m128d_f64[0];
    local_b0[0]._8_8_ = dVar10 + (param_1->Translation).XY.m128d_f64[1];
    local_b0[0]._16_8_ = dVar3 + dVar2;
    local_c8._s_0.X = (param_1->Translation).XY.m128d_f64[0] - dVar5;
    local_c8._s_0.Y = (param_1->Translation).XY.m128d_f64[1] - dVar10;
    local_c8._s_0.Z = dVar2 - dVar3;
    fVar19 = FMath::PointDistToSegment
                       (param_2,(TVector<double> *)&local_b0[0]._s_0,
                        (TVector<double> *)&local_c8._s_0);
    fVar19 = fVar19 - fVar18;
  }
  else {
    dVar5 = (param_2->field0_0x0)._s_0.X - (param_1->Translation).XY.m128d_f64[0];
    dVar10 = (param_2->field0_0x0)._s_0.Y - (param_1->Translation).XY.m128d_f64[1];
    dVar3 = (param_2->field0_0x0)._s_0.Z - (param_1->Translation).ZW.m128d_f64[0];
    auVar6._0_8_ = dVar5 * dVar5;
    auVar6._8_8_ = 0;
    auVar11._0_8_ = dVar10 * dVar10 + auVar6._0_8_ + dVar3 * dVar3;
    auVar11._8_8_ = 0;
    auVar7 = sqrtpd(auVar6,auVar11);
    dVar3 = auVar7._0_8_ - (double)fVar18;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    fVar19 = (float)dVar3;
  }
  fVar18 = AttenuationEval(this,fVar19,this->FalloffDistance,param_3);
  return fVar18;
}

// AttenuationEvalCone @ 1475b4880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FBaseAttenuationSettings::AttenuationEvalCone
          (FBaseAttenuationSettings *this,TTransform<double> *param_1,TVector<double> *param_2,
          float param_3)

{
  double dVar1;
  undefined1 auVar2 [12];
  TVector<double> *pTVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8 [8];
  
  auVar21 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar10 = auVar21._0_8_;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  fVar9 = 0.0;
  local_c8[0]._0_16_ = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar15 = blendpd(local_c8[0]._0_16_,auVar21,2);
  local_e8._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  dVar24 = __xmm_00000000000000003ff0000000000000._8_8_;
  auVar25._0_8_ =
       dVar24 * local_c8[0]._0_8_ -
       local_c8[0]._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
  auVar25._8_8_ = local_c8[0]._8_8_ * 0.0 - dVar10 * dVar24;
  auVar7 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar16._0_8_ = auVar7._0_8_ * dVar10 - auVar15._0_8_ * 0.0;
  auVar16._8_8_ = auVar7._8_8_ * auVar21._8_8_ - auVar15._8_8_ * 0.0;
  auVar7 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar15 = blendpd(auVar25,auVar16,2);
  dVar6 = auVar25._8_8_ + auVar25._8_8_;
  dVar22 = auVar16._0_8_ + auVar16._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar22 >> 0x20);
  auVar19._8_4_ = SUB84(dVar22,0);
  auVar19._0_8_ = dVar6;
  auVar19._12_4_ = uVar27;
  auVar26._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar26._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  auVar15._8_4_ = SUB84(dVar22,0);
  auVar15._0_8_ = dVar6;
  auVar15._12_4_ = uVar27;
  auVar16 = blendpd(auVar7,auVar21,2);
  auVar15 = blendpd(auVar15,auVar26,2);
  auVar20._0_8_ = auVar19._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar6;
  auVar20._8_8_ = auVar26._0_8_ * auVar7._8_8_ - dVar10 * dVar22;
  auVar7._0_8_ = auVar15._0_8_ * dVar10 - auVar16._0_8_ * auVar26._0_8_;
  auVar7._8_8_ = auVar15._8_8_ * auVar21._8_8_ - auVar16._8_8_ * auVar26._8_8_;
  auVar21._8_4_ = SUB84(auVar20._8_8_,0);
  auVar21._0_8_ = auVar20._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
  dVar13 = (double)this->ConeOffset;
  dVar10 = dVar6 * dVar1 + (double)__xmm_00000000000000003ff0000000000000 + auVar21._8_8_;
  dVar6 = dVar22 * dVar1 + dVar24 + auVar7._0_8_;
  auVar21 = blendpd(auVar20,auVar7,2);
  auVar2._4_8_ = dVar24;
  auVar2._0_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar23._0_8_ = auVar2._0_8_ << 0x20;
  auVar23._8_4_ = SUB84(dVar6,0);
  auVar23._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar6 = (param_1->Translation).XY.m128d_f64[0] - dVar13 * dVar10;
  dVar24 = auVar26._0_8_ * dVar1 + auVar21._0_8_;
  dVar22 = (param_1->Translation).XY.m128d_f64[1] - dVar13 * auVar23._8_8_;
  dVar1 = local_e8._s_0.Z - dVar13 * dVar24;
  if (__real_322bcc77 <
      (float)((uint)this->ConeSphereRadius & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    dVar14 = (param_2->field0_0x0)._s_0.Y - dVar22;
    dVar11 = (param_2->field0_0x0)._s_0.X - dVar6;
    dVar13 = (param_2->field0_0x0)._s_0.Z - dVar1;
    auVar12._0_8_ = dVar11 * dVar11;
    auVar12._8_8_ = 0;
    auVar17._0_8_ = dVar14 * dVar14 + auVar12._0_8_ + dVar13 * dVar13;
    auVar17._8_8_ = 0;
    auVar21 = sqrtpd(auVar12,auVar17);
    fVar9 = (float)(auVar21._0_8_ - (double)this->ConeSphereRadius);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar9 = AttenuationEval(this,fVar9,this->ConeSphereFalloffDistance,param_3);
  }
  dVar13 = (this->AttenuationShapeExtents).field0_0x0._s_0.X;
  if ((double)this->ConeSphereRadius < dVar13) {
    dVar6 = (param_2->field0_0x0)._s_0.X - dVar6;
    dVar22 = (param_2->field0_0x0)._s_0.Y - dVar22;
    dVar1 = (param_2->field0_0x0)._s_0.Z - dVar1;
    auVar8._0_8_ = dVar6 * dVar6;
    auVar8._8_8_ = 0;
    auVar18._0_8_ = dVar22 * dVar22 + auVar8._0_8_ + dVar1 * dVar1;
    auVar18._8_8_ = 0;
    auVar21 = sqrtpd(auVar8,auVar18);
    dVar13 = auVar21._0_8_ - dVar13;
    if (dVar13 <= __real_0000000000000000) {
      dVar13 = __real_0000000000000000;
    }
    fVar4 = AttenuationEval(this,(float)dVar13,this->FalloffDistance,param_3);
    if (0.0 < fVar4) {
      local_e8._s_0.X = dVar6;
      local_e8._s_0.Y = dVar22;
      local_e8._s_0.Z = dVar1;
      pTVar3 = UE::Math::TVector<double>::GetSafeNormal
                         ((TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_c8[0]._s_0,
                          __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar22 = auVar23._8_8_ * (pTVar3->field0_0x0)._s_0.Y + dVar10 * (pTVar3->field0_0x0)._s_0.X +
               dVar24 * (pTVar3->field0_0x0)._s_0.Z;
      dVar6 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar22) && (dVar6 = dVar22, __real_3ff0000000000000 <= dVar22)
         ) {
        dVar6 = __real_3ff0000000000000;
      }
      dVar22 = (this->AttenuationShapeExtents).field0_0x0._s_0.Z;
      dVar6 = acos(dVar6);
      fVar5 = AttenuationEval(this,(float)((double)(float)((double)CONCAT44((uint)((ulonglong)dVar6
                                                                                  >> 0x20) &
                                                                                                                                                        
                                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                  SUB84(dVar6,0) &
                                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                                                  __real_404ca5dc1a63c1f8) -
                                          (this->AttenuationShapeExtents).field0_0x0._s_0.Y),
                              (float)dVar22,__real_3f800000);
      fVar4 = fVar5 * fVar4;
    }
    if (fVar9 <= fVar4) {
      fVar9 = fVar4;
    }
  }
  return fVar9;
}

// CollectAttenuationShapesForVisualization @ 1475ba3f0

void __thiscall
FBaseAttenuationSettings::CollectAttenuationShapesForVisualization
          (FBaseAttenuationSettings *this,
          TMultiMap<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>_>
          *param_1)

{
  uint local_res8 [2];
  TPairInitializer<EAttenuationShape::Type_&&,FBaseAttenuationSettings::AttenuationShapeDetails_&&>
  local_res10;
  uint *local_48;
  double *local_40;
  double local_38;
  double dStack_30;
  double local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_38 = (this->AttenuationShapeExtents).field0_0x0._s_0.X;
  dStack_30 = (this->AttenuationShapeExtents).field0_0x0._s_0.Y;
  local_28 = (this->AttenuationShapeExtents).field0_0x0._s_0.Z;
  local_res8[0] = (uint)(this->AttenuationShape).Value;
  local_20 = this->FalloffDistance;
  local_48 = local_res8;
  local_1c = this->ConeOffset;
  local_18 = this->ConeSphereRadius;
  local_14 = this->ConeSphereFalloffDistance;
  local_40 = &local_38;
  TSet<TTuple<enum_EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails>,TDefaultMapHashableKeyFuncs<enum_EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EAttenuationShape::Type_&&,FBaseAttenuationSettings::AttenuationShapeDetails_&&>_>
            (param_1,&local_res10,(bool *)&local_48);
  return;
}

// Evaluate @ 1475c4d00

float __thiscall
FBaseAttenuationSettings::Evaluate
          (FBaseAttenuationSettings *this,TTransform<double> *param_1,TVector<double> *param_2,
          float param_3)

{
  uchar uVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [3];
  
  fVar5 = __real_3f800000;
  uVar1 = (this->AttenuationShape).Value;
  if (uVar1 == '\0') {
    dVar9 = (param_2->field0_0x0)._s_0.X - (param_1->Translation).XY.m128d_f64[0];
    dVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->Translation).XY.m128d_f64[1];
    dVar6 = (param_2->field0_0x0)._s_0.Z - (param_1->Translation).ZW.m128d_f64[0];
    auVar7._0_8_ = dVar6 * dVar6;
    auVar7._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar3 * dVar3 + dVar9 * dVar9 + auVar7._0_8_;
    auVar8 = sqrtpd(auVar7,auVar8);
    fVar5 = (float)(auVar8._0_8_ - (this->AttenuationShapeExtents).field0_0x0._s_0.X);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = AttenuationEval(this,fVar5,this->FalloffDistance,param_3);
    return fVar5;
  }
  if (uVar1 == '\x01') {
    local_58[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_58[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
    local_58[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
    fVar5 = AttenuationEvalCapsule(this,param_1,(TVector<double> *)&local_58[0]._s_0,param_3);
    return fVar5;
  }
  if (uVar1 == '\x02') {
    local_78._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_78._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_78._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    fVar5 = AttenuationEvalBox(this,param_1,(TVector<double> *)&local_78._s_0,param_3);
    return fVar5;
  }
  if (uVar1 != '\x03') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                       ,0xa4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
    return fVar5;
  }
  local_98._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  fVar5 = AttenuationEvalCone(this,param_1,(TVector<double> *)&local_98._s_0,param_3);
  return fVar5;
}

// GetMaxDimension @ 1475d5070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FBaseAttenuationSettings::GetMaxDimension(FBaseAttenuationSettings *this)

{
  double dVar1;
  uchar uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRichCurve *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    WorldMax = FAudioDevice::GetMaxWorldDistance();
    _Init_thread_footer(&::_TSS0);
  }
  fVar10 = this->FalloffDistance;
  fVar14 = WorldMax;
  if (fVar10 <= WorldMax) {
    fVar14 = fVar10;
    if (this->DistanceAlgorithm == NaturalSound) {
      if (this->FalloffMode == Continues) {
        fVar14 = this->dBAttenuationAtMax;
        if (__real_b8d1b717 <= this->dBAttenuationAtMax) {
          fVar14 = __real_b8d1b717;
        }
        fVar14 = (fVar10 * ___real_c2700000) / fVar14;
      }
      else if (this->FalloffMode == Hold) {
        fVar14 = WorldMax;
      }
    }
    else if (this->DistanceAlgorithm == Custom) {
      pFVar6 = FRuntimeFloatCurve::GetRichCurveConst(&this->CustomAttenuationCurve);
      if ((pFVar6 == (FRichCurve *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Curve",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                             ,0x4b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar10 = (float)(*pcVar4)();
        return fVar10;
      }
      iVar3 = (pFVar6->Keys).ArrayNum;
      pFVar7 = (FScriptContainerElement *)0x0;
      pFVar8 = (pFVar6->Keys).AllocatorInstance.Data;
      fVar13 = 0.0;
      pFVar9 = pFVar8 + (longlong)iVar3 * 0x1c;
      while( true ) {
        if ((pFVar6->Keys).ArrayNum != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar8 == pFVar9) break;
        if (fVar13 < *(float *)(pFVar8 + 4)) {
          pFVar7 = pFVar8;
          fVar13 = *(float *)(pFVar8 + 4);
        }
        pFVar8 = pFVar8 + 0x1c;
      }
      if (pFVar7 == (FScriptContainerElement *)0x0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = *(float *)(pFVar7 + 8);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
      }
      fVar14 = WorldMax;
      if ((float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3a83126f) {
        fVar14 = fVar10 * fVar13;
      }
    }
  }
  uVar2 = (this->AttenuationShape).Value;
  if (uVar2 != '\0') {
    if (uVar2 == '\x01') {
      dVar12 = (this->AttenuationShapeExtents).field0_0x0._s_0.Y;
      dVar1 = (this->AttenuationShapeExtents).field0_0x0._s_0.X;
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      fVar14 = (float)(dVar12 + (double)fVar14);
      goto LAB_1475d5293;
    }
    if (uVar2 == '\x02') {
      dVar12 = (this->AttenuationShapeExtents).field0_0x0._s_0.Y;
      dVar1 = (this->AttenuationShapeExtents).field0_0x0._s_0.X;
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      dVar1 = (this->AttenuationShapeExtents).field0_0x0._s_0.Z;
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      fVar14 = (float)(dVar12 + (double)fVar14);
      goto LAB_1475d5293;
    }
    if (uVar2 != '\x03') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                         ,0x37,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        fVar10 = (float)(*pcVar4)();
        return fVar10;
      }
      goto LAB_1475d5293;
    }
  }
  fVar14 = (float)((double)fVar14 + (this->AttenuationShapeExtents).field0_0x0._s_0.X);
LAB_1475d5293:
  fVar10 = FAudioDevice::GetMaxWorldDistance();
  if (fVar14 <= fVar10) {
    fVar10 = fVar14;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  return fVar10;
}

// GetMaxFalloffDistance @ 1475d52f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FBaseAttenuationSettings::GetMaxFalloffDistance(FBaseAttenuationSettings *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRichCurve *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    WorldMax = FAudioDevice::GetMaxWorldDistance();
    _Init_thread_footer(&::_TSS0);
  }
  fVar8 = this->FalloffDistance;
  fVar10 = WorldMax;
  if (fVar8 <= WorldMax) {
    fVar10 = fVar8;
    if (this->DistanceAlgorithm == NaturalSound) {
      if (this->FalloffMode == Continues) {
        fVar10 = this->dBAttenuationAtMax;
        if (__real_b8d1b717 <= this->dBAttenuationAtMax) {
          fVar10 = __real_b8d1b717;
        }
        fVar10 = (fVar8 * ___real_c2700000) / fVar10;
      }
      else if (this->FalloffMode == Hold) {
        return WorldMax;
      }
    }
    else if (this->DistanceAlgorithm == Custom) {
      pFVar4 = FRuntimeFloatCurve::GetRichCurveConst(&this->CustomAttenuationCurve);
      if ((pFVar4 == (FRichCurve *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Curve",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Attenuation.cpp"
                             ,0x4b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
      iVar1 = (pFVar4->Keys).ArrayNum;
      pFVar7 = (FScriptContainerElement *)0x0;
      pFVar5 = (pFVar4->Keys).AllocatorInstance.Data;
      fVar10 = 0.0;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x1c;
      while( true ) {
        if ((pFVar4->Keys).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar5 == pFVar6) break;
        if (fVar10 < *(float *)(pFVar5 + 4)) {
          pFVar7 = pFVar5;
          fVar10 = *(float *)(pFVar5 + 4);
        }
        pFVar5 = pFVar5 + 0x1c;
      }
      if (pFVar7 == (FScriptContainerElement *)0x0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = *(float *)(pFVar7 + 8);
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
      }
      if ((float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3a83126f) {
        return fVar8 * fVar10;
      }
      return WorldMax;
    }
  }
  return fVar10;
}

