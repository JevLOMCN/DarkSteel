// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// GetTransform @ 14944f2c0

TTransform<float> * __thiscall
FNiagaraStatelessSpaceTransforms::GetTransform
          (FNiagaraStatelessSpaceTransforms *this,ENiagaraCoordinateSpace param_1,
          ENiagaraCoordinateSpace param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<float> *pTVar4;
  
  if ((Local < param_1) || (Local < param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                       ,0x30,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTransform<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  cVar1 = this->TransformRemap[(int)param_1][(int)param_2];
  if (cVar1 == -1) {
    return &UE::Math::TTransform<float>::Identity;
  }
  return this->Transforms + cVar1;
}

// InitializeTransforms @ 149452790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraStatelessSpaceTransforms::InitializeTransforms
          (FNiagaraStatelessSpaceTransforms *this,bool param_1,TTransform<float> *param_2)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  __m128 _Var10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  __m128 _Var20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar5 = _UNK_15061cc7c;
  uVar4 = _UNK_15061cc78;
  uVar3 = _UNK_15061cc74;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  *(schar *)((longlong)(this->TransformRemap + 2) + 1) = '\0';
  *(schar *)((longlong)(this->TransformRemap + 2) + 2) = -1;
  *(schar *)((longlong)(this->TransformRemap + 1) + 1) = -1;
  *(schar *)((longlong)(this->TransformRemap + 1) + 2) = '\x01';
  this->TransformRemap[0][0] = -1;
  this->TransformRemap[2][0] = !param_1 + -1;
  this->TransformRemap[0][2] = !param_1 * '\x02' + -1;
  this->TransformRemap[0][1] = param_1 + -1;
  bVar6 = param_1 * '\x02' - 1;
  this->TransformRemap[1][0] = bVar6;
  uVar1 = (param_2->Rotation).m128_u64[1];
  this->Transforms[0].Rotation.m128_u64[0] = (param_2->Rotation).m128_u64[0];
  this->Transforms[0].Rotation.m128_u64[1] = uVar1;
  uVar1 = (param_2->Translation).m128_u64[1];
  this->Transforms[0].Translation.m128_u64[0] = (param_2->Translation).m128_u64[0];
  this->Transforms[0].Translation.m128_u64[1] = uVar1;
  uVar1 = (param_2->Scale3D).m128_u64[1];
  this->Transforms[0].Scale3D.m128_u64[0] = (param_2->Scale3D).m128_u64[0];
  this->Transforms[0].Scale3D.m128_u64[1] = uVar1;
  auVar8 = *(undefined1 (*) [16])(param_2->Scale3D).m128_f32;
  auVar9._4_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
                        (float)(auVar8._4_4_ & uVar3));
  auVar9._0_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
                        (float)(auVar8._0_4_ & uVar2));
  auVar9._8_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
                        (float)(auVar8._8_4_ & uVar4));
  auVar9._12_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] < (float)(auVar8._12_4_ & uVar5));
  iVar7 = movmskps((uint)bVar6,auVar9);
  if (iVar7 == 0) {
    fVar21 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
    fVar22 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
    fVar23 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
    fVar24 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
    _Var10 = UE::Math::TTransform<float>::Identity.Translation;
    _Var20 = UE::Math::TTransform<float>::Identity.Scale3D;
  }
  else {
    fVar21 = (param_2->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
    fVar22 = (param_2->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
    fVar23 = (param_2->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
    fVar24 = (param_2->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
    auVar9 = blendps(auVar8,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
    auVar8 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar9);
    auVar19._0_4_ =
         ~-(uint)((float)(auVar9._0_4_ & uVar2) <= GlobalVectorConstants::SmallNumber.m128_f32[0]) &
         auVar8._0_4_;
    auVar19._4_4_ =
         ~-(uint)((float)(auVar9._4_4_ & uVar3) <= GlobalVectorConstants::SmallNumber.m128_f32[1]) &
         auVar8._4_4_;
    auVar19._8_4_ =
         ~-(uint)((float)(auVar9._8_4_ & uVar4) <= GlobalVectorConstants::SmallNumber.m128_f32[2]) &
         auVar8._8_4_;
    auVar19._12_4_ =
         ~-(uint)((float)(auVar9._12_4_ & uVar5) <= GlobalVectorConstants::SmallNumber.m128_f32[3])
         & auVar8._12_4_;
    _Var20 = (__m128)insertps(auVar19,auVar19,8);
    fVar15 = (param_2->Translation).m128_f32[0] * _Var20.m128_f32[0];
    fVar16 = (param_2->Translation).m128_f32[1] * _Var20.m128_f32[1];
    fVar17 = (param_2->Translation).m128_f32[2] * _Var20.m128_f32[2];
    fVar18 = (param_2->Translation).m128_f32[3] * _Var20.m128_f32[3];
    fVar11 = fVar16 * fVar21 - fVar22 * fVar15;
    fVar12 = fVar17 * fVar22 - fVar23 * fVar16;
    fVar13 = fVar15 * fVar23 - fVar21 * fVar17;
    fVar14 = fVar18 * fVar24 - fVar24 * fVar18;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar11 = fVar11 + fVar11;
    fVar14 = fVar14 + fVar14;
    auVar8._0_4_ = 0.0 - (fVar24 * fVar12 + fVar15 + (fVar11 * fVar22 - fVar13 * fVar23));
    auVar8._4_4_ = 0.0 - (fVar24 * fVar13 + fVar16 + (fVar12 * fVar23 - fVar11 * fVar21));
    auVar8._8_4_ = 0.0 - (fVar24 * fVar11 + fVar17 + (fVar13 * fVar21 - fVar12 * fVar22));
    auVar8._12_4_ = 0.0 - (fVar24 * fVar14 + fVar18 + (fVar14 * fVar24 - fVar14 * fVar24));
    _Var10 = (__m128)insertps(auVar8,auVar8,8);
  }
  this->Transforms[1].Rotation.m128_f32[0] = fVar21;
  this->Transforms[1].Rotation.m128_f32[1] = fVar22;
  this->Transforms[1].Rotation.m128_f32[2] = fVar23;
  this->Transforms[1].Rotation.m128_f32[3] = fVar24;
  this->Transforms[1].Translation = _Var10;
                    /* WARNING: Store size is inaccurate */
  *(__m128 *)this->Transforms[1].Scale3D.m128_f32 = _Var20;
  return;
}

// TransformPosition @ 14946c210

TVector<float> * __thiscall
FNiagaraStatelessSpaceTransforms::TransformPosition
          (FNiagaraStatelessSpaceTransforms *this,TVector<float> *__return_storage_ptr__,
          ENiagaraCoordinateSpace param_1,ENiagaraCoordinateSpace param_2,TVector<float> *param_3)

{
  TTransform<float> *pTVar1;
  __m128 *p_Var2;
  char cVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  TVector<float> *pTVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_28;
  float local_20;
  undefined8 local_1c;
  float local_14;
  
  if ((Local < param_1) || (Local < param_2)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                       ,0x3e,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<float> *)(*pcVar5)();
      return pTVar10;
    }
  }
  cVar3 = this->TransformRemap[(int)param_1][(int)param_2];
  if (cVar3 == -1) {
    local_20 = (param_3->field0_0x0)._s_0.Z;
    puVar11 = &local_28;
    local_28 = *(undefined8 *)&param_3->field0_0x0;
  }
  else {
    puVar11 = &local_1c;
    pTVar1 = this->Transforms + cVar3;
    fVar4 = (pTVar1->Rotation).m128_f32[0];
    fVar6 = (pTVar1->Rotation).m128_f32[1];
    fVar7 = (pTVar1->Rotation).m128_f32[2];
    fVar8 = (pTVar1->Rotation).m128_f32[3];
    p_Var2 = &this->Transforms[cVar3].Scale3D;
    fVar15 = (float)*(undefined8 *)&param_3->field0_0x0 * p_Var2->m128_f32[0];
    fVar16 = (float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) * p_Var2->m128_f32[1];
    fVar17 = (param_3->field0_0x0)._s_0.Z * p_Var2->m128_f32[2];
    fVar12 = fVar16 * fVar4 - fVar15 * fVar6;
    fVar13 = fVar17 * fVar6 - fVar16 * fVar7;
    fVar14 = fVar15 * fVar7 - fVar17 * fVar4;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    fVar12 = fVar12 + fVar12;
    p_Var2 = &this->Transforms[cVar3].Translation;
    local_1c = CONCAT44(fVar8 * fVar14 + fVar16 + (fVar13 * fVar7 - fVar12 * fVar4) +
                        p_Var2->m128_f32[1],
                        fVar8 * fVar13 + fVar15 + (fVar12 * fVar6 - fVar14 * fVar7) +
                        p_Var2->m128_f32[0]);
    local_14 = fVar8 * fVar12 + fVar17 + (fVar14 * fVar4 - fVar13 * fVar6) + p_Var2->m128_f32[2];
  }
  fVar4 = *(float *)(puVar11 + 1);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4;
  return __return_storage_ptr__;
}

// TransformRotation @ 14946c340

TQuat<float> * __thiscall
FNiagaraStatelessSpaceTransforms::TransformRotation
          (FNiagaraStatelessSpaceTransforms *this,TQuat<float> *__return_storage_ptr__,
          ENiagaraCoordinateSpace param_1,ENiagaraCoordinateSpace param_2,TQuat<float> *param_3)

{
  TTransform<float> *pTVar1;
  char cVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  TQuat<float> *pTVar13;
  float *pfVar14;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if ((Local < param_1) || (Local < param_2)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                        ,0x37,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TQuat<float> *)(*pcVar3)();
      return pTVar13;
    }
  }
  cVar2 = this->TransformRemap[(int)param_1][(int)param_2];
  if (cVar2 == -1) {
    pfVar14 = (float *)&local_28;
    local_28._0_4_ = param_3->X;
    local_28._4_4_ = param_3->Y;
    uStack_20._0_4_ = param_3->Z;
    uStack_20._4_4_ = param_3->W;
  }
  else {
    fVar4 = param_3->X;
    fVar5 = param_3->Y;
    fVar6 = param_3->Z;
    fVar7 = param_3->W;
    pfVar14 = &local_18;
    pTVar1 = this->Transforms + cVar2;
    fVar8 = (pTVar1->Rotation).m128_f32[0];
    fVar9 = (pTVar1->Rotation).m128_f32[1];
    fVar10 = (pTVar1->Rotation).m128_f32[2];
    fVar11 = (pTVar1->Rotation).m128_f32[3];
    local_18 = fVar7 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar11 * fVar4
               + fVar6 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
               fVar5 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fStack_14 = fVar6 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                fVar11 * fVar5 +
                fVar7 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                fVar4 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fStack_10 = fVar5 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                fVar11 * fVar6 +
                fVar4 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                fVar7 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fStack_c = fVar4 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar11 * fVar7
               + fVar5 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
               fVar6 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  }
  fVar4 = pfVar14[1];
  fVar5 = pfVar14[2];
  fVar6 = pfVar14[3];
  __return_storage_ptr__->X = pfVar14[0];
  __return_storage_ptr__->Y = fVar4;
  __return_storage_ptr__->Z = fVar5;
  __return_storage_ptr__->W = fVar6;
  return __return_storage_ptr__;
}

// TransformVector @ 14946c450

TVector<float> * __thiscall
FNiagaraStatelessSpaceTransforms::TransformVector
          (FNiagaraStatelessSpaceTransforms *this,TVector<float> *__return_storage_ptr__,
          ENiagaraCoordinateSpace param_1,ENiagaraCoordinateSpace param_2,TVector<float> *param_3)

{
  TTransform<float> *pTVar1;
  __m128 *p_Var2;
  char cVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  TVector<float> *pTVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_28;
  float local_20;
  undefined8 local_1c;
  float local_14;
  
  if ((Local < param_1) || (Local < param_2)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                       ,0x45,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<float> *)(*pcVar5)();
      return pTVar10;
    }
  }
  cVar3 = this->TransformRemap[(int)param_1][(int)param_2];
  if (cVar3 == -1) {
    local_20 = (param_3->field0_0x0)._s_0.Z;
    puVar11 = &local_28;
    local_28 = *(undefined8 *)&param_3->field0_0x0;
  }
  else {
    puVar11 = &local_1c;
    pTVar1 = this->Transforms + cVar3;
    fVar4 = (pTVar1->Rotation).m128_f32[0];
    fVar6 = (pTVar1->Rotation).m128_f32[1];
    fVar7 = (pTVar1->Rotation).m128_f32[2];
    fVar8 = (pTVar1->Rotation).m128_f32[3];
    p_Var2 = &this->Transforms[cVar3].Scale3D;
    fVar15 = (float)*(undefined8 *)&param_3->field0_0x0 * p_Var2->m128_f32[0];
    fVar16 = (float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) * p_Var2->m128_f32[1];
    fVar17 = (param_3->field0_0x0)._s_0.Z * p_Var2->m128_f32[2];
    fVar12 = fVar16 * fVar4 - fVar15 * fVar6;
    fVar13 = fVar17 * fVar6 - fVar16 * fVar7;
    fVar14 = fVar15 * fVar7 - fVar17 * fVar4;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    fVar12 = fVar12 + fVar12;
    local_1c = CONCAT44(fVar8 * fVar14 + fVar16 + (fVar13 * fVar7 - fVar12 * fVar4),
                        fVar8 * fVar13 + fVar15 + (fVar12 * fVar6 - fVar14 * fVar7));
    local_14 = fVar8 * fVar12 + fVar17 + (fVar14 * fVar4 - fVar13 * fVar6);
  }
  fVar4 = *(float *)(puVar11 + 1);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4;
  return __return_storage_ptr__;
}

// TransformVectorNoScale @ 14946c570

TVector<float> * __thiscall
FNiagaraStatelessSpaceTransforms::TransformVectorNoScale
          (FNiagaraStatelessSpaceTransforms *this,TVector<float> *__return_storage_ptr__,
          ENiagaraCoordinateSpace param_1,ENiagaraCoordinateSpace param_2,TVector<float> *param_3)

{
  TTransform<float> *pTVar1;
  char cVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  TVector<float> *pTVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_28;
  float local_20;
  undefined8 local_1c;
  float local_14;
  
  if ((Local < param_1) || (Local < param_2)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("int(SourceSpace) >= 0 && int(SourceSpace) < TransformRemapSize && int(DestinationSpace) >= 0 && int(DestinationSpace) < TransformRemapSize"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessCommon.cpp"
                       ,0x4c,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<float> *)(*pcVar4)();
      return pTVar10;
    }
  }
  cVar2 = this->TransformRemap[(int)param_1][(int)param_2];
  if (cVar2 == -1) {
    local_20 = (param_3->field0_0x0)._s_0.Z;
    puVar11 = &local_28;
    local_28 = *(undefined8 *)&param_3->field0_0x0;
  }
  else {
    fVar3 = (param_3->field0_0x0)._s_0.Z;
    puVar11 = &local_1c;
    fVar15 = (float)*(undefined8 *)&param_3->field0_0x0;
    fVar16 = (float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
    pTVar1 = this->Transforms + cVar2;
    fVar5 = (pTVar1->Rotation).m128_f32[0];
    fVar6 = (pTVar1->Rotation).m128_f32[1];
    fVar7 = (pTVar1->Rotation).m128_f32[2];
    fVar8 = (pTVar1->Rotation).m128_f32[3];
    fVar12 = fVar16 * fVar5 - fVar6 * fVar15;
    fVar13 = fVar3 * fVar6 - fVar7 * fVar16;
    fVar14 = fVar15 * fVar7 - fVar5 * fVar3;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    fVar12 = fVar12 + fVar12;
    local_1c = CONCAT44(fVar8 * fVar14 + fVar16 + (fVar13 * fVar7 - fVar12 * fVar5),
                        fVar8 * fVar13 + fVar15 + (fVar12 * fVar6 - fVar14 * fVar7));
    local_14 = fVar8 * fVar12 + fVar3 + (fVar14 * fVar5 - fVar13 * fVar6);
  }
  fVar3 = *(float *)(puVar11 + 1);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  return __return_storage_ptr__;
}

// UpdateTransforms @ 14946e610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FNiagaraStatelessSpaceTransforms::UpdateTransforms
          (FNiagaraStatelessSpaceTransforms *this,TTransform<float> *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_EAX;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  __m128 _Var12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  __m128 _Var23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar5 = _UNK_15061cc7c;
  uVar4 = _UNK_15061cc78;
  uVar3 = _UNK_15061cc74;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar9._4_4_ = -(uint)(_UNK_1506895e4 <
                        (float)((uint)((param_1->Translation).m128_f32[1] -
                                      this->Transforms[0].Translation.m128_f32[1]) & _UNK_15061cc74)
                        );
  auVar9._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                        (float)((uint)((param_1->Translation).m128_f32[0] -
                                      this->Transforms[0].Translation.m128_f32[0]) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar9._8_4_ = -(uint)(_UNK_1506895e8 <
                        (float)((uint)((param_1->Translation).m128_f32[2] -
                                      this->Transforms[0].Translation.m128_f32[2]) & _UNK_15061cc78)
                        );
  auVar9._12_4_ =
       -(uint)(_UNK_1506895ec <
              (float)((uint)((param_1->Translation).m128_f32[3] -
                            this->Transforms[0].Translation.m128_f32[3]) & _UNK_15061cc7c));
  iVar6 = movmskps(in_EAX,auVar9);
  if (iVar6 == 0) {
    fVar24 = this->Transforms[0].Rotation.m128_f32[0];
    fVar25 = this->Transforms[0].Rotation.m128_f32[1];
    fVar26 = this->Transforms[0].Rotation.m128_f32[2];
    fVar27 = this->Transforms[0].Rotation.m128_f32[3];
    auVar10._4_4_ =
         -(uint)(_UNK_1506895e4 <
                (float)((uint)((param_1->Rotation).m128_f32[1] - fVar25) & _UNK_15061cc74));
    auVar10._0_4_ =
         -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                (float)((uint)((param_1->Rotation).m128_f32[0] - fVar24) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar10._8_4_ =
         -(uint)(_UNK_1506895e8 <
                (float)((uint)((param_1->Rotation).m128_f32[2] - fVar26) & _UNK_15061cc78));
    auVar10._12_4_ =
         -(uint)(_UNK_1506895ec <
                (float)((uint)((param_1->Rotation).m128_f32[3] - fVar27) & _UNK_15061cc7c));
    iVar6 = movmskps(0,auVar10);
    if (((iVar6 == 0) ||
        (auVar7._4_4_ = -(uint)(_UNK_1506895e4 <
                               (float)((uint)((param_1->Rotation).m128_f32[1] + fVar25) &
                                      _UNK_15061cc74)),
        auVar7._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                              (float)((uint)((param_1->Rotation).m128_f32[0] + fVar24) &
                                     __xmm_7fffffff7fffffff7fffffff7fffffff)),
        auVar7._8_4_ = -(uint)(_UNK_1506895e8 <
                              (float)((uint)((param_1->Rotation).m128_f32[2] + fVar26) &
                                     _UNK_15061cc78)),
        auVar7._12_4_ =
             -(uint)(_UNK_1506895ec <
                    (float)((uint)((param_1->Rotation).m128_f32[3] + fVar27) & _UNK_15061cc7c)),
        iVar6 = movmskps(iVar6,auVar7), iVar6 == 0)) &&
       (auVar14._4_4_ =
             -(uint)(_UNK_1506895e4 <
                    (float)((uint)((param_1->Scale3D).m128_f32[1] -
                                  this->Transforms[0].Scale3D.m128_f32[1]) & _UNK_15061cc74)),
       auVar14._0_4_ =
            -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                   (float)((uint)((param_1->Scale3D).m128_f32[0] -
                                 this->Transforms[0].Scale3D.m128_f32[0]) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff)),
       auVar14._8_4_ =
            -(uint)(_UNK_1506895e8 <
                   (float)((uint)((param_1->Scale3D).m128_f32[2] -
                                 this->Transforms[0].Scale3D.m128_f32[2]) & _UNK_15061cc78)),
       auVar14._12_4_ =
            -(uint)(_UNK_1506895ec <
                   (float)((uint)((param_1->Scale3D).m128_f32[3] -
                                 this->Transforms[0].Scale3D.m128_f32[3]) & _UNK_15061cc7c)),
       iVar6 = movmskps(0,auVar14), iVar6 == 0)) {
      return false;
    }
  }
  uVar1 = (param_1->Rotation).m128_u64[1];
  this->Transforms[0].Rotation.m128_u64[0] = (param_1->Rotation).m128_u64[0];
  this->Transforms[0].Rotation.m128_u64[1] = uVar1;
  uVar1 = (param_1->Translation).m128_u64[1];
  this->Transforms[0].Translation.m128_u64[0] = (param_1->Translation).m128_u64[0];
  this->Transforms[0].Translation.m128_u64[1] = uVar1;
  uVar1 = (param_1->Scale3D).m128_u64[1];
  this->Transforms[0].Scale3D.m128_u64[0] = (param_1->Scale3D).m128_u64[0];
  this->Transforms[0].Scale3D.m128_u64[1] = uVar1;
  auVar9 = *(undefined1 (*) [16])(param_1->Scale3D).m128_f32;
  auVar8._4_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
                        (float)(auVar9._4_4_ & uVar3));
  auVar8._0_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
                        (float)(auVar9._0_4_ & uVar2));
  auVar8._8_4_ = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
                        (float)(auVar9._8_4_ & uVar4));
  auVar8._12_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] < (float)(auVar9._12_4_ & uVar5));
  iVar6 = movmskps(iVar6,auVar8);
  if (iVar6 == 0) {
    fVar24 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
    fVar25 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
    fVar26 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
    fVar27 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
    _Var12 = UE::Math::TTransform<float>::Identity.Translation;
    _Var23 = UE::Math::TTransform<float>::Identity.Scale3D;
  }
  else {
    fVar24 = (param_1->Rotation).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
    fVar25 = (param_1->Rotation).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
    fVar26 = (param_1->Rotation).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
    fVar27 = (param_1->Rotation).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
    auVar10 = blendps(auVar9,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
    auVar9 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar10);
    auVar22._0_4_ =
         ~-(uint)((float)(auVar10._0_4_ & uVar2) <= GlobalVectorConstants::SmallNumber.m128_f32[0])
         & auVar9._0_4_;
    auVar22._4_4_ =
         ~-(uint)((float)(auVar10._4_4_ & uVar3) <= GlobalVectorConstants::SmallNumber.m128_f32[1])
         & auVar9._4_4_;
    auVar22._8_4_ =
         ~-(uint)((float)(auVar10._8_4_ & uVar4) <= GlobalVectorConstants::SmallNumber.m128_f32[2])
         & auVar9._8_4_;
    auVar22._12_4_ =
         ~-(uint)((float)(auVar10._12_4_ & uVar5) <= GlobalVectorConstants::SmallNumber.m128_f32[3])
         & auVar9._12_4_;
    _Var23 = (__m128)insertps(auVar22,auVar22,8);
    fVar18 = _Var23.m128_f32[0] * (param_1->Translation).m128_f32[0];
    fVar19 = _Var23.m128_f32[1] * (param_1->Translation).m128_f32[1];
    fVar20 = _Var23.m128_f32[2] * (param_1->Translation).m128_f32[2];
    fVar21 = _Var23.m128_f32[3] * (param_1->Translation).m128_f32[3];
    fVar13 = fVar19 * fVar24 - fVar25 * fVar18;
    fVar15 = fVar20 * fVar25 - fVar26 * fVar19;
    fVar16 = fVar18 * fVar26 - fVar24 * fVar20;
    fVar17 = fVar21 * fVar27 - fVar27 * fVar21;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar13 = fVar13 + fVar13;
    fVar17 = fVar17 + fVar17;
    auVar11._0_4_ = 0.0 - (fVar27 * fVar15 + fVar18 + (fVar13 * fVar25 - fVar16 * fVar26));
    auVar11._4_4_ = 0.0 - (fVar27 * fVar16 + fVar19 + (fVar15 * fVar26 - fVar13 * fVar24));
    auVar11._8_4_ = 0.0 - (fVar27 * fVar13 + fVar20 + (fVar16 * fVar24 - fVar15 * fVar25));
    auVar11._12_4_ = 0.0 - (fVar27 * fVar17 + fVar21 + (fVar17 * fVar27 - fVar17 * fVar27));
    _Var12 = (__m128)insertps(auVar11,auVar11,8);
  }
  this->Transforms[1].Rotation.m128_f32[0] = fVar24;
  this->Transforms[1].Rotation.m128_f32[1] = fVar25;
  this->Transforms[1].Rotation.m128_f32[2] = fVar26;
  this->Transforms[1].Rotation.m128_f32[3] = fVar27;
  this->Transforms[1].Translation = _Var12;
                    /* WARNING: Store size is inaccurate */
  *(__m128 *)this->Transforms[1].Scale3D.m128_f32 = _Var23;
  return true;
}

