// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticStruct @ 14732e7a0

UScriptStruct * __cdecl FKTaperedCapsuleElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKTaperedCapsuleElem.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKTaperedCapsuleElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKTaperedCapsuleElem,(UObject *)pUVar1,
                         L"KTaperedCapsuleElem");
  }
  return Z_Registration_Info_UScriptStruct_FKTaperedCapsuleElem.OuterSingleton;
}

// FKTaperedCapsuleElem @ 1476e7ad0

FKTaperedCapsuleElem * __thiscall
FKTaperedCapsuleElem::FKTaperedCapsuleElem(FKTaperedCapsuleElem *this,FKTaperedCapsuleElem *param_1)

{
  double dVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = (longlong)&___7FKShapeElem__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ ^ ((byte)lVar2 ^ (byte)param_1->_padding_) & 1;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined4 *)&this->_padding_ = 6;
  this->_padding_ = (longlong)this;
  this->_padding_ = (longlong)&___7FKTaperedCapsuleElem__6B_;
  dVar1 = (param_1->Center).field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar1;
  (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
  dVar1 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar1;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  this->Radius0 = param_1->Radius0;
  this->Radius1 = param_1->Radius1;
  this->Length = param_1->Length;
  this->bOneSidedCollision = param_1->bOneSidedCollision;
  return this;
}

// FKTaperedCapsuleElem @ 1476e7b70

FKTaperedCapsuleElem * __thiscall
FKTaperedCapsuleElem::FKTaperedCapsuleElem
          (FKTaperedCapsuleElem *this,float param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 3;
  *(undefined4 *)&this->_padding_ = 6;
  this->_padding_ = (longlong)this;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FKTaperedCapsuleElem__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->Radius0 = param_1;
  this->Radius1 = param_2;
  this->Length = param_3;
  this->bOneSidedCollision = false;
  return this;
}

// FKTaperedCapsuleElem @ 1476e7bf0

FKTaperedCapsuleElem * __thiscall
FKTaperedCapsuleElem::FKTaperedCapsuleElem(FKTaperedCapsuleElem *this)

{
  undefined8 uVar1;
  double dVar2;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 3;
  *(undefined4 *)&this->_padding_ = 6;
  this->_padding_ = (longlong)this;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FKTaperedCapsuleElem__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->Radius0 = 1.0;
  this->Radius1 = 1.0;
  this->Length = 1.0;
  this->bOneSidedCollision = false;
  return this;
}

// ~FKTaperedCapsuleElem @ 1476e8fa0

void __thiscall FKTaperedCapsuleElem::~FKTaperedCapsuleElem(FKTaperedCapsuleElem *this)

{
  this->_padding_ = (longlong)&___7FKShapeElem__6B_;
  return;
}

// CalcAABB @ 1476f3fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKTaperedCapsuleElem::CalcAABB
          (FKTaperedCapsuleElem *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  TQuat<double> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auStack_168 [32];
  TQuat<double> local_148;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_148);
  local_128.Translation.ZW.m128d_f64[0] = (double)param_2;
  local_128.Rotation.XY.m128d_f64[0] = pTVar4->X;
  local_128.Rotation.XY.m128d_f64[1] = pTVar4->Y;
  local_128.Rotation.ZW.m128d_f64[0] = pTVar4->Z;
  local_128.Rotation.ZW.m128d_f64[1] = pTVar4->W;
  local_128.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_128.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_128.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_128.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_128.Translation.XY.m128d_f64[0] =
       (this->Center).field0_0x0._s_0.X * local_128.Translation.ZW.m128d_f64[0];
  local_128.Translation.XY.m128d_f64[1] =
       (this->Center).field0_0x0._s_0.Y * local_128.Translation.ZW.m128d_f64[0];
  local_128.Translation.ZW.m128d_f64[0] =
       (this->Center).field0_0x0._s_0.Z * local_128.Translation.ZW.m128d_f64[0];
  local_128.Translation.ZW.m128d_f64[1] = 0.0;
  UE::Math::TTransform<double>::Multiply(&local_128,&local_128,param_1);
  auVar3._8_8_ = local_128.Rotation.ZW.m128d_f64[1];
  auVar3._0_8_ = local_128.Rotation.ZW.m128d_f64[0];
  auVar19._8_8_ = local_128.Rotation.XY.m128d_f64[1];
  auVar19._0_8_ = local_128.Rotation.XY.m128d_f64[0];
  local_128.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000 * local_128.Scale3D.ZW.m128d_f64[0];
  local_128.Scale3D.ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1] * 0.0;
  local_128.Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0] * 0.0;
  local_128.Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1] * 0.0;
  uVar21 = (undefined4)((ulonglong)local_128.Scale3D.XY.m128d_f64[1] >> 0x20);
  auVar19 = blendpd(auVar19,auVar3,2);
  auVar23._8_4_ = SUB84(local_128.Scale3D.XY.m128d_f64[1],0);
  auVar23._0_8_ = local_128.Scale3D.XY.m128d_f64[0];
  auVar23._12_4_ = uVar21;
  auVar5._8_4_ = SUB84(local_128.Rotation.ZW.m128d_f64[0],0);
  auVar5._0_8_ = local_128.Rotation.XY.m128d_f64[1];
  auVar5._12_4_ = (int)((ulonglong)local_128.Rotation.ZW.m128d_f64[0] >> 0x20);
  auVar10._8_4_ = SUB84(local_128.Scale3D.XY.m128d_f64[1],0);
  auVar10._0_8_ = local_128.Scale3D.XY.m128d_f64[0];
  auVar10._12_4_ = uVar21;
  auVar24._0_8_ =
       auVar23._8_8_ * local_128.Rotation.XY.m128d_f64[0] -
       local_128.Rotation.XY.m128d_f64[1] * local_128.Scale3D.XY.m128d_f64[0];
  auVar24._8_8_ =
       local_128.Scale3D.ZW.m128d_f64[0] * local_128.Rotation.XY.m128d_f64[1] -
       auVar5._8_8_ * local_128.Scale3D.XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(local_128.Scale3D.ZW.m128d_f64[1],0);
  auVar11._0_8_ = local_128.Scale3D.ZW.m128d_f64[0];
  auVar11._12_4_ = (int)((ulonglong)local_128.Scale3D.ZW.m128d_f64[1] >> 0x20);
  auVar11 = blendpd(auVar10,auVar11,2);
  auVar12._0_8_ =
       auVar11._0_8_ * local_128.Rotation.ZW.m128d_f64[0] -
       auVar19._0_8_ * local_128.Scale3D.ZW.m128d_f64[0];
  auVar12._8_8_ =
       auVar11._8_8_ * local_128.Rotation.ZW.m128d_f64[1] -
       auVar19._8_8_ * local_128.Scale3D.ZW.m128d_f64[1];
  auVar11 = blendpd(auVar24,auVar12,2);
  dVar1 = auVar24._8_8_ + auVar24._8_8_;
  dVar2 = auVar12._0_8_ + auVar12._0_8_;
  uVar21 = SUB84(dVar2,0);
  uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar25._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar25._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar15._8_4_ = uVar21;
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = uVar22;
  auVar6._8_4_ = uVar21;
  auVar6._0_8_ = dVar1;
  auVar6._12_4_ = uVar22;
  auVar13._8_4_ = uVar21;
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = uVar22;
  auVar11 = blendpd(auVar13,auVar25,2);
  auVar16._0_8_ =
       auVar15._8_8_ * local_128.Rotation.XY.m128d_f64[0] -
       dVar1 * local_128.Rotation.XY.m128d_f64[1];
  auVar16._8_8_ =
       auVar25._0_8_ * local_128.Rotation.XY.m128d_f64[1] -
       auVar6._8_8_ * local_128.Rotation.ZW.m128d_f64[0];
  auVar7._8_4_ = SUB84(auVar25._8_8_,0);
  auVar7._0_8_ = auVar25._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  auVar14._0_8_ = auVar11._0_8_ * local_128.Rotation.ZW.m128d_f64[0] - auVar25._0_8_ * auVar19._0_8_
  ;
  auVar14._8_8_ = auVar11._8_8_ * local_128.Rotation.ZW.m128d_f64[1] - auVar7._8_8_ * auVar19._8_8_;
  auVar8._8_4_ = SUB84(auVar16._8_8_,0);
  auVar8._0_8_ = auVar16._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar11 = blendpd(auVar16,auVar14,2);
  fVar17 = param_2 * this->Radius0;
  fVar9 = param_2 * __real_3f000000 * this->Length;
  fVar26 = param_2 * this->Radius1;
  __return_storage_ptr__->IsValid = '\x01';
  fVar20 = (float)((uint)(float)(dVar1 * local_128.Rotation.ZW.m128d_f64[1] +
                                 local_128.Scale3D.XY.m128d_f64[0] + auVar8._8_8_) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar9;
  fVar18 = (float)((uint)(float)(auVar25._0_8_ * local_128.Rotation.ZW.m128d_f64[1] +
                                 local_128.Scale3D.ZW.m128d_f64[0] + auVar11._0_8_) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar9;
  fVar9 = (float)((uint)(float)(dVar2 * local_128.Rotation.ZW.m128d_f64[1] +
                                local_128.Scale3D.XY.m128d_f64[1] + auVar14._0_8_) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar9;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (double)(((float)local_128.Translation.XY.m128d_f64[0] - fVar20) - fVar17);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y =
       (double)(((float)local_128.Translation.XY.m128d_f64[1] - fVar9) - fVar17);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z =
       (double)(((float)local_128.Translation.ZW.m128d_f64[0] - fVar18) - fVar17);
  (__return_storage_ptr__->Max).field0_0x0._s_0.X =
       (double)(fVar20 + (float)local_128.Translation.XY.m128d_f64[0] + fVar26);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y =
       (double)(fVar9 + (float)local_128.Translation.XY.m128d_f64[1] + fVar26);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
       (double)(fVar18 + (float)local_128.Translation.ZW.m128d_f64[0] + fVar26);
  return __return_storage_ptr__;
}

// GetFinalScaled @ 1482884e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FKTaperedCapsuleElem * __thiscall
FKTaperedCapsuleElem::GetFinalScaled
          (FKTaperedCapsuleElem *this,FKTaperedCapsuleElem *__return_storage_ptr__,
          TVector<double> *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  float fVar7;
  TQuat<double> *pTVar8;
  TRotator<double> *pTVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  TRotator<double> local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_208;
  FKTaperedCapsuleElem(__return_storage_ptr__,this);
  fVar7 = __real_3dcccccd;
  dVar2 = __real_3fe0000000000000;
  local_1c8.Roll = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar19 = (param_2->Scale3D).XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar20 = (param_2->Scale3D).XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  dVar1 = local_1c8.Roll * (param_1->field0_0x0)._s_0.Z;
  if ((((double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      ((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) {
    dVar20 = __real_3fb99999a0000000;
    dVar1 = __real_3fb99999a0000000;
    dVar19 = __real_3fb99999a0000000;
  }
  uVar16 = SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)dVar20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar20 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar20 <= (double)CONCAT44(uVar17,uVar16)) {
    dVar20 = (double)CONCAT44(uVar17,uVar16);
  }
  uVar16 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  fVar27 = (float)dVar20;
  fVar18 = this->Radius0 * fVar27;
  fVar10 = (float)((double)(this->Radius0 + this->Length + this->Radius1) *
                   (double)CONCAT44(uVar17,uVar16) * __real_3fe0000000000000);
  if (fVar10 <= __real_3dcccccd) {
    fVar10 = __real_3dcccccd;
  }
  if (fVar18 <= fVar10) {
    fVar10 = fVar18;
  }
  if (fVar10 <= __real_3dcccccd) {
    fVar10 = __real_3dcccccd;
  }
  __return_storage_ptr__->Radius0 = fVar10;
  fVar18 = this->Radius1 * fVar27;
  fVar10 = (float)((double)(this->Radius0 + this->Length + this->Radius1) *
                   (double)CONCAT44(uVar17,uVar16) * dVar2);
  if (fVar10 <= fVar7) {
    fVar10 = fVar7;
  }
  if (fVar18 <= fVar10) {
    fVar10 = fVar18;
  }
  if (fVar10 <= fVar7) {
    fVar10 = fVar7;
  }
  __return_storage_ptr__->Radius1 = fVar10;
  fVar18 = this->Radius0 * fVar27;
  fVar27 = this->Radius1 * fVar27;
  fVar10 = (float)((double)(this->Radius0 + this->Length + this->Radius1) *
                   (double)CONCAT44(uVar17,uVar16) * dVar2);
  if (fVar10 <= fVar7) {
    fVar10 = fVar7;
  }
  if (fVar10 <= fVar27) {
    fVar27 = fVar10;
  }
  if (fVar10 <= fVar18) {
    fVar18 = fVar10;
  }
  if (fVar27 <= fVar7) {
    fVar27 = fVar7;
  }
  if (fVar18 <= fVar7) {
    fVar18 = fVar7;
  }
  fVar27 = (fVar10 + fVar10) - (fVar27 + fVar18);
  if (fVar27 <= fVar7) {
    fVar27 = fVar7;
  }
  __return_storage_ptr__->Length = fVar27;
  local_148.Scale3D.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_148.Scale3D.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_148.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_148.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_148.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_148.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_148.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_148.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_148.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_148.Translation.ZW.m128d_f64[1] = 0.0;
  local_148.Scale3D.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_148.Scale3D.ZW.m128d_f64[1] = 0.0;
  pTVar8 = UE::Math::TRotator<double>::Quaternion
                     (&__return_storage_ptr__->Rotation,(TQuat<double> *)local_1e8);
  local_e8.Rotation.ZW.m128d_f64[0] = pTVar8->Z;
  local_e8.Rotation.ZW.m128d_f64[1] = pTVar8->W;
  local_e8.Rotation.XY.m128d_f64[0] = pTVar8->X;
  local_e8.Rotation.XY.m128d_f64[1] = pTVar8->Y;
  local_e8.Scale3D.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_e8.Scale3D.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_e8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_e8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_e8.Scale3D.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1a8,&local_e8,&local_148);
  auVar13 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar4 = (this->Center).field0_0x0._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0] * (this->Center).field0_0x0._s_0.X;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1] * (this->Center).field0_0x0._s_0.Y;
  uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar11 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar21 = blendpd(auVar11,auVar13,2);
  auVar28._8_4_ = SUB84(dVar3,0);
  auVar28._0_8_ = dVar2;
  auVar28._12_4_ = uVar26;
  dVar20 = auVar13._0_8_;
  auVar29._0_8_ = auVar28._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar2;
  auVar29._8_8_ = dVar4 * auVar11._8_8_ - dVar20 * dVar3;
  auVar30._8_4_ = SUB84(dVar3,0);
  auVar30._0_8_ = dVar2;
  auVar30._12_4_ = uVar26;
  auVar11._8_4_ = SUB84(dVar1,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar11 = blendpd(auVar30,auVar11,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar20 - auVar21._0_8_ * dVar4;
  auVar12._8_8_ = auVar11._8_8_ * auVar13._8_8_ - auVar21._8_8_ * dVar1;
  auVar11 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar30 = blendpd(auVar29,auVar12,2);
  dVar1 = auVar29._8_8_ + auVar29._8_8_;
  dVar19 = auVar12._0_8_ + auVar12._0_8_;
  uVar26 = (undefined4)((ulonglong)dVar19 >> 0x20);
  auVar31._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar31._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  auVar24._8_4_ = SUB84(dVar19,0);
  auVar24._0_8_ = dVar1;
  auVar24._12_4_ = uVar26;
  auVar22._8_4_ = SUB84(dVar19,0);
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = uVar26;
  auVar30 = blendpd(auVar22,auVar31,2);
  auVar25._0_8_ = auVar24._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar1;
  auVar25._8_8_ = auVar31._0_8_ * auVar11._8_8_ - dVar20 * dVar19;
  auVar21._8_4_ = SUB84(auVar25._8_8_,0);
  auVar21._0_8_ = auVar25._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  auVar11 = blendpd(auVar11,auVar13,2);
  auVar23._0_8_ = auVar30._0_8_ * dVar20 - auVar11._0_8_ * auVar31._0_8_;
  auVar23._8_8_ = auVar30._8_8_ * auVar13._8_8_ - auVar11._8_8_ * auVar31._8_8_;
  auVar11 = blendpd(auVar25,auVar23,2);
  dVar2 = dVar1 * dVar6 + dVar2 + auVar21._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar20 = dVar19 * dVar6 + dVar3 + auVar23._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  auVar5._4_8_ = auVar23._0_8_;
  auVar5._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar13._0_8_ = auVar5._0_8_ << 0x20;
  auVar13._8_4_ = SUB84(dVar20,0);
  auVar13._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  local_1c8.Roll =
       auVar31._0_8_ * dVar6 + dVar4 + auVar11._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  dVar20 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = dVar2 * (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = auVar13._8_8_ * dVar20;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = local_1c8.Roll * dVar1;
  dVar3 = (param_2->Rotation).XY.m128d_f64[0];
  dVar4 = (param_2->Rotation).XY.m128d_f64[1];
  auVar13 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar19 = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._0_8_ = dVar19;
  auVar14._12_4_ = auVar13._12_4_;
  dVar2 = auVar13._0_8_;
  auVar15._8_4_ = auVar13._0_4_;
  auVar15._0_8_ = dVar2;
  auVar15._12_4_ = auVar13._4_4_;
  dVar20 = dVar3 * local_1a8.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar14._8_8_ * local_1a8.Rotation.XY.m128d_f64[1] +
           dVar4 * local_1a8.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar15._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar1 = dVar3 * local_1a8.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar19 * local_1a8.Rotation.ZW.m128d_f64[1] +
          dVar4 * local_1a8.Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar2 * local_1a8.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_1e8._8_4_ = SUB84(dVar20,0);
  local_1e8._0_8_ =
       dVar3 * local_1a8.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar19 * local_1a8.Rotation.XY.m128d_f64[0] +
       dVar4 * local_1a8.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar2 * local_1a8.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_1e8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  local_1d8._8_4_ = SUB84(dVar1,0);
  local_1d8._0_8_ =
       dVar3 * local_1a8.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar19 * local_1a8.Rotation.ZW.m128d_f64[0] +
       dVar4 * local_1a8.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar2 * local_1a8.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_1d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  pTVar9 = UE::Math::TRotator<double>::TRotator<double>(&local_1c8,(TQuat<double> *)local_1e8);
  dVar20 = pTVar9->Yaw;
  (__return_storage_ptr__->Rotation).Pitch = pTVar9->Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar20;
  (__return_storage_ptr__->Rotation).Roll = pTVar9->Roll;
  return __return_storage_ptr__;
}

// GetScaledCylinderLength @ 14828cf50

float __thiscall
FKTaperedCapsuleElem::GetScaledCylinderLength(FKTaperedCapsuleElem *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  dVar2 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar6 = (float)((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  (double)(this->Radius0 + this->Length + this->Radius1) * __real_3fe0000000000000);
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  dVar4 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (fVar6 <= __real_3dcccccd) {
    fVar6 = __real_3dcccccd;
  }
  if (dVar4 <= dVar2) {
    dVar4 = dVar2;
  }
  fVar5 = (float)dVar4 * this->Radius0;
  fVar3 = (float)dVar4 * this->Radius1;
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  if (fVar6 <= fVar3) {
    fVar3 = fVar6;
  }
  if (fVar5 <= __real_3dcccccd) {
    fVar5 = __real_3dcccccd;
  }
  if (fVar3 <= __real_3dcccccd) {
    fVar3 = __real_3dcccccd;
  }
  fVar6 = (fVar6 + fVar6) - (fVar3 + fVar5);
  if (fVar6 <= __real_3dcccccd) {
    fVar6 = __real_3dcccccd;
  }
  return fVar6;
}

// GetScaledHalfLength @ 14828d020

float __thiscall
FKTaperedCapsuleElem::GetScaledHalfLength(FKTaperedCapsuleElem *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  fVar2 = (float)((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  (double)(this->Length + this->Radius0 + this->Radius1) * __real_3fe0000000000000);
  if (fVar2 <= __real_3dcccccd) {
    fVar2 = __real_3dcccccd;
  }
  return fVar2;
}

// GetScaledRadii @ 14828d060

void __thiscall
FKTaperedCapsuleElem::GetScaledRadii
          (FKTaperedCapsuleElem *this,TVector<double> *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  
  fVar2 = __real_3dcccccd;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  dVar5 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar5 <= dVar4) {
    dVar5 = dVar4;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar7 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  fVar3 = (float)dVar5 * this->Radius0;
  fVar6 = (float)((double)(this->Radius0 + this->Length + this->Radius1) *
                  (double)CONCAT44(uVar8,uVar7) * __real_3fe0000000000000);
  if (fVar6 <= __real_3dcccccd) {
    fVar6 = __real_3dcccccd;
  }
  if (fVar3 <= fVar6) {
    fVar6 = fVar3;
  }
  if (fVar6 <= __real_3dcccccd) {
    fVar6 = __real_3dcccccd;
  }
  *param_2 = fVar6;
  fVar3 = this->Radius1 * (float)dVar5;
  fVar6 = (float)((double)(this->Length + this->Radius0 + this->Radius1) *
                  (double)CONCAT44(uVar8,uVar7) * __real_3fe0000000000000);
  if (fVar6 <= fVar2) {
    fVar6 = fVar2;
  }
  if (fVar3 <= fVar6) {
    fVar6 = fVar3;
  }
  if (fVar6 <= fVar2) {
    fVar6 = fVar2;
  }
  *param_3 = fVar6;
  return;
}

// ScaleElem @ 1482a86f0

void __thiscall
FKTaperedCapsuleElem::ScaleElem(FKTaperedCapsuleElem *this,TVector<double> *param_1,float param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = this->Radius0;
  fVar1 = this->Radius1;
  fVar3 = (float)(param_1->field0_0x0)._s_0.Y + fVar1;
  fVar4 = (float)(param_1->field0_0x0)._s_0.X + fVar5;
  if (fVar3 <= param_2) {
    fVar3 = param_2;
  }
  if (fVar4 <= param_2) {
    fVar4 = param_2;
  }
  this->Radius1 = fVar3;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  this->Radius0 = fVar4;
  fVar5 = ((fVar1 - fVar3) + (fVar5 - fVar4)) * __real_3f000000 + (float)dVar2 + this->Length;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  this->Length = fVar5;
  return;
}

// DrawElemSolid @ 1482f8e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKTaperedCapsuleElem::DrawElemSolid
          (FKTaperedCapsuleElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FMaterialRenderProxy *param_4)

{
  TMatrix<double> *pTVar1;
  undefined1 auStackY_128 [32];
  FScopedTaperedCapsuleBuilder local_e8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FScopedTaperedCapsuleBuilder::FScopedTaperedCapsuleBuilder
            (&local_e8,this,param_3,param_1->View->FeatureLevel);
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_a8);
  FDynamicMeshBuilder::Draw
            (&local_e8.MeshBuilder,param_1,pTVar1,param_4,'\0',false,true,(FHitProxyId)0xffffffff);
  FMemory::Free(local_e8.Verts);
  FMemory::Free(local_e8.ArcVerts);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_e8.MeshBuilder);
  return;
}

// DrawElemSolid @ 1482f8ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKTaperedCapsuleElem::DrawElemSolid
          (FKTaperedCapsuleElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FMaterialRenderProxy *param_4)

{
  TMatrix<double> *pTVar1;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_f8;
  FScopedTaperedCapsuleBuilder local_e0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8._s_0.Z = (double)param_3;
  local_f8._8_4_ = SUB84(local_f8._s_0.Z,0);
  local_f8._0_8_ = local_f8._s_0.Z;
  local_f8._12_4_ = (int)((ulonglong)local_f8._s_0.Z >> 0x20);
  FScopedTaperedCapsuleBuilder::FScopedTaperedCapsuleBuilder
            (&local_e0,this,(TVector<double> *)&local_f8._s_0,param_1->View->FeatureLevel);
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_a8);
  FDynamicMeshBuilder::Draw
            (&local_e0.MeshBuilder,param_1,pTVar1,param_4,'\0',false,true,(FHitProxyId)0xffffffff);
  FMemory::Free(local_e0.Verts);
  FMemory::Free(local_e0.ArcVerts);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_e0.MeshBuilder);
  return;
}

// DrawElemWire @ 1482fc3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKTaperedCapsuleElem::DrawElemWire
          (FKTaperedCapsuleElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FColor param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  double dVar3;
  FColor FVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  FColor_u_0 FVar7;
  TVector<double>_u_0 *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  uint uVar55;
  uint uVar56;
  byte bStack_207;
  byte bStack_206;
  byte bStack_205;
  undefined1 local_1f8 [4];
  undefined1 auStack_1f4 [8];
  float fStack_1ec;
  undefined8 local_1e8;
  float local_1d8;
  float local_1d4 [3];
  undefined1 local_1c8 [32];
  TVector<double>_u_0 local_1a8;
  FColor_u_0 local_188;
  float local_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  double local_e8;
  
  FVar4.field0_0x0 = param_4.field0_0x0;
  if (this->bOneSidedCollision == false) {
    local_188 = param_4.field0_0x0;
  }
  else {
    fStack_17c = FLinearColor::sRGBToLinearTable[(uint)param_4.field0_0x0 >> 8 & 0xff] *
                 __real_3e4ccccd;
    local_180 = FLinearColor::sRGBToLinearTable[(uint)param_4.field0_0x0 >> 0x10 & 0xff] *
                __real_3e4ccccd;
    local_178 = FLinearColor::sRGBToLinearTable[(uint)param_4.field0_0x0 & 0xff] * __real_3e4ccccd;
    local_174 = (float)((uint)param_4.field0_0x0 >> 0x18) * ___real_3a4d9a68;
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_180);
  }
  FVar7 = local_188;
  auVar18 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar37 = auVar18._0_8_;
  auVar14 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar41._0_8_ = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  auVar41._8_8_ = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar45 = ___xmm_00000000000000003ff0000000000000 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar47 = _UNK_150689518 * (param_2->Scale3D).XY.m128d_f64[1];
  dVar36 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar50._0_8_ = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  auVar50._8_8_ = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar1 = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  auVar38._8_4_ = SUB84(dVar47,0);
  auVar38._0_8_ = dVar45;
  uVar34 = (undefined4)((ulonglong)dVar47 >> 0x20);
  auVar38._12_4_ = uVar34;
  dVar3 = (param_2->Translation).ZW.m128d_f64[0];
  dVar19 = auVar18._8_8_;
  auVar20 = blendpd(auVar14,auVar18,2);
  auVar39._0_8_ = auVar38._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar45;
  auVar39._8_8_ = auVar41._0_8_ * auVar14._8_8_ - dVar37 * dVar47;
  auVar14._8_4_ = SUB84(dVar47,0);
  auVar14._0_8_ = dVar45;
  auVar14._12_4_ = uVar34;
  auVar14 = blendpd(auVar14,auVar41,2);
  local_168._s_0.Z = 0.0;
  auVar23._0_8_ = auVar14._0_8_ * dVar37 - auVar20._0_8_ * auVar41._0_8_;
  auVar23._8_8_ = auVar14._8_8_ * dVar19 - auVar20._8_8_ * auVar41._8_8_;
  auVar14 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar20 = blendpd(auVar39,auVar23,2);
  auVar40._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar40._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar21 = auVar39._8_8_ + auVar39._8_8_;
  dVar27 = auVar23._0_8_ + auVar23._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar27 >> 0x20);
  auVar28._8_4_ = SUB84(dVar27,0);
  auVar28._0_8_ = dVar21;
  auVar28._12_4_ = uVar34;
  auVar22._8_4_ = SUB84(dVar27,0);
  auVar22._0_8_ = dVar21;
  auVar22._12_4_ = uVar34;
  auVar23 = blendpd(auVar22,auVar40,2);
  auVar29._0_8_ = auVar28._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar21;
  auVar29._8_8_ = auVar40._0_8_ * auVar14._8_8_ - dVar37 * dVar27;
  auVar14 = blendpd(auVar14,auVar18,2);
  auVar20._8_4_ = SUB84(auVar29._8_8_,0);
  auVar20._0_8_ = auVar29._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  dVar46 = ___xmm_3ff00000000000000000000000000000 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar48 = _UNK_15061cbc8 * (param_2->Scale3D).XY.m128d_f64[1];
  auVar42._8_4_ = SUB84(dVar48,0);
  auVar42._0_8_ = dVar46;
  uVar34 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar42._12_4_ = uVar34;
  auVar24._0_8_ = auVar23._0_8_ * dVar37 - auVar14._0_8_ * auVar40._0_8_;
  auVar24._8_8_ = auVar23._8_8_ * dVar19 - auVar14._8_8_ * auVar40._8_8_;
  dVar45 = dVar21 * dVar36 + dVar45 + auVar20._8_8_;
  dVar21 = dVar27 * dVar36 + dVar47 + auVar24._0_8_;
  uVar53 = SUB84(dVar21,0);
  uVar54 = (undefined4)((ulonglong)dVar21 >> 0x20);
  local_168._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar23 = blendpd(local_168._0_16_,auVar18,2);
  auVar43._0_8_ = auVar42._8_8_ * local_168._0_8_ - local_168._8_8_ * dVar46;
  auVar43._8_8_ = auVar50._0_8_ * local_168._8_8_ - dVar37 * dVar48;
  auVar15._8_4_ = SUB84(dVar48,0);
  auVar15._0_8_ = dVar46;
  auVar15._12_4_ = uVar34;
  auVar14 = blendpd(auVar15,auVar50,2);
  auVar20 = blendpd(auVar29,auVar24,2);
  dVar36 = auVar40._0_8_ * dVar36 + auVar41._0_8_ + auVar20._0_8_;
  auVar16._0_8_ = auVar14._0_8_ * dVar37 - auVar23._0_8_ * auVar50._0_8_;
  auVar16._8_8_ = auVar14._8_8_ * dVar19 - auVar23._8_8_ * auVar50._8_8_;
  dVar21 = auVar43._8_8_ + auVar43._8_8_;
  dVar27 = auVar16._0_8_ + auVar16._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar27 >> 0x20);
  auVar23 = blendpd(auVar43,auVar16,2);
  auVar14 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar44._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar44._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar30._8_4_ = SUB84(dVar27,0);
  auVar30._0_8_ = dVar21;
  auVar30._12_4_ = uVar34;
  auVar25._8_4_ = SUB84(dVar27,0);
  auVar25._0_8_ = dVar21;
  auVar25._12_4_ = uVar34;
  auVar23 = blendpd(auVar25,auVar44,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar21;
  auVar31._8_8_ = auVar44._0_8_ * auVar14._8_8_ - dVar37 * dVar27;
  auVar14 = blendpd(auVar14,auVar18,2);
  auVar17._8_4_ = SUB84(auVar31._8_8_,0);
  auVar17._0_8_ = auVar31._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar26._0_8_ = auVar23._0_8_ * dVar37 - auVar14._0_8_ * auVar44._0_8_;
  auVar26._8_8_ = auVar23._8_8_ * dVar19 - auVar14._8_8_ * auVar44._8_8_;
  dVar27 = dVar27 * dVar19 + dVar48 + auVar26._0_8_;
  auVar14 = blendpd(auVar31,auVar26,2);
  local_148._s_0.Z = auVar44._0_8_ * dVar19 + auVar50._0_8_ + auVar14._0_8_;
  local_1c8._0_16_ = ZEXT816(0);
  local_148._8_4_ = SUB84(dVar27,0);
  local_148._s_0.X = dVar21 * dVar19 + dVar46 + auVar17._8_8_;
  local_148._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  local_1c8._16_8_ = __real_3ff0000000000000;
  UE::Math::TTransform<double>::TransformVector
            (param_2,(TVector<double> *)&local_118._s_0,(TVector<double> *)local_1c8);
  fVar12 = GetScaledCylinderLength(this,param_3);
  fVar12 = fVar12 * __real_3f000000;
  GetScaledRadii(this,param_3,&local_1d8,local_1d4);
  fVar13 = __real_c2b40000;
  fVar52 = __real_42b40000;
  fVar51 = __real_3b808081;
  dVar21 = (double)fVar12;
  auVar2._4_8_ = auVar18._8_8_;
  auVar2._0_4_ = auVar1._4_4_;
  auVar18._0_8_ = auVar2._0_8_ << 0x20;
  auVar18._8_4_ = auVar1._8_4_;
  auVar18._12_4_ = auVar1._12_4_;
  local_130._s_0.X = auVar1._0_8_ + dVar21 * local_118._s_0.X;
  local_100._s_0.Y = auVar18._8_8_ - dVar21 * local_118._s_0.Y;
  local_130._s_0.Y = auVar18._8_8_ + dVar21 * local_118._s_0.Y;
  local_100._s_0.X = auVar1._0_8_ - dVar21 * local_118._s_0.X;
  local_130._s_0.Z = dVar3 + dVar21 * local_118._s_0.Z;
  local_1e8 = dVar3 - dVar21 * local_118._s_0.Z;
  dVar37 = local_130._s_0.Y - local_100._s_0.Y;
  dVar27 = local_130._s_0.X - local_100._s_0.X;
  dVar21 = local_130._s_0.Z - (double)local_1e8;
  fVar12 = (float)SQRT(dVar37 * dVar37 + dVar27 * dVar27 + dVar21 * dVar21);
  uVar5 = param_4.field0_0x0._s_0.G;
  uVar6 = param_4.field0_0x0._s_0.R;
  bStack_207 = FVar7._s_0.G;
  bStack_206 = FVar7._s_0.R;
  bStack_205 = FVar7._s_0.A;
  local_100._s_0.Z = (double)local_1e8;
  if (((((double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000) &&
       ((double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
      (uVar32 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar33 = (uint)((ulonglong)dVar21 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar33,uVar32) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar33,uVar32) == __real_3f1a36e2e0000000)) ||
     (fVar12 <= (float)((uint)(local_1d8 - local_1d4[0]) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    uVar9 = (ulonglong)param_4.field0_0x0._s_0.R;
    uVar11 = (ulonglong)param_4.field0_0x0._s_0.G;
    uVar32 = (uint)FVar4.field0_0x0 & 0xff;
    auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar11];
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar9];
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
    fVar51 = (float)param_4.field0_0x0._3_1_ * __real_3b808081;
    fStack_1ec = fVar51;
    local_1a8._8_4_ = uVar53;
    local_1a8._0_8_ = dVar45;
    local_1a8._12_4_ = uVar54;
    local_168._s_0.Z = local_148._s_0.Z;
    local_168._s_0.X = local_148._s_0.X;
    local_168._s_0.X = local_148._s_0.X;
    local_168._s_0.Y = local_148._s_0.Y;
    local_1a8._s_0.Z = dVar36;
    if (local_1d8 <= local_1d4[0]) {
      local_1c8._16_8_ = local_1e8;
      local_1c8._0_8_ = local_100._s_0.X;
      local_1c8._8_8_ = local_100._s_0.Y;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,__real_c2b40000,__real_42b40000,
              (double)local_1d4[0],0x20,(FLinearColor *)local_1f8,'\0');
      auVar18 = _local_1f8;
      local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar9];
      auVar14 = _local_1f8;
      fStack_1ec = auVar18._12_4_;
      _local_1f8 = auVar14._0_8_;
      auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
      local_168._s_0.Z = local_118._s_0.Z;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar11];
      local_1c8._0_8_ = local_100._s_0.X;
      local_1c8._8_8_ = local_100._s_0.Y;
      fStack_1ec = fVar51;
      local_1c8._16_8_ = local_100._s_0.Z;
      local_1a8._s_0.Z = dVar36;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,fVar13,fVar52,(double)local_1d4[0],0x20,
              (FLinearColor *)local_1f8,'\0');
      fVar13 = __real_43870000;
      uVar10 = (ulonglong)(byte)local_188._0_1_;
      local_168._s_0.Z = local_148._s_0.Z;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[bStack_207];
      local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[bStack_206];
      auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar10];
      local_168._s_0.X = local_148._s_0.X;
      local_168._s_0.Y = local_148._s_0.Y;
      local_1c8._0_8_ = local_100._s_0.X;
      local_1c8._8_8_ = local_100._s_0.Y;
      fVar12 = (float)bStack_205 * __real_3b808081;
      fStack_1ec = fVar12;
      local_1c8._16_8_ = local_100._s_0.Z;
      local_1a8._s_0.Z = dVar36;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,fVar52,__real_43870000,(double)local_1d4[0],0x20,
              (FLinearColor *)local_1f8,'\0');
      auVar18 = _local_1f8;
      local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[bStack_206];
      auVar14 = _local_1f8;
      fStack_1ec = auVar18._12_4_;
      _local_1f8 = auVar14._0_8_;
      auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar10];
      local_168._s_0.Z = local_118._s_0.Z;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[bStack_207];
      local_1c8._8_8_ = local_100._s_0.Y;
      local_1c8._0_8_ = local_100._s_0.X;
      fStack_1ec = fVar12;
      local_1c8._16_8_ = local_100._s_0.Z;
      local_1a8._s_0.Z = dVar36;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,fVar52,fVar13,(double)local_1d4[0],0x20,
              (FLinearColor *)local_1f8,'\0');
      pTVar8 = &local_100;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar11];
      local_1d8 = local_1d4[0];
    }
    else {
      local_1c8._16_8_ = local_130._s_0.Z;
      local_1c8._0_8_ = local_130._s_0.X;
      local_1c8._8_8_ = local_130._s_0.Y;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,__real_c2b40000,__real_42b40000,(double)local_1d8,
              0x20,(FLinearColor *)local_1f8,'\0');
      auVar18 = _local_1f8;
      local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar9];
      auVar14 = _local_1f8;
      fStack_1ec = auVar18._12_4_;
      _local_1f8 = auVar14._0_8_;
      auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
      local_168._s_0.Z = local_118._s_0.Z;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar11];
      local_1c8._0_8_ = local_130._s_0.X;
      local_1c8._8_8_ = local_130._s_0.Y;
      fStack_1ec = fVar51;
      local_1c8._16_8_ = local_130._s_0.Z;
      local_1a8._s_0.Z = dVar36;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,fVar13,fVar52,(double)local_1d8,0x20,
              (FLinearColor *)local_1f8,'\0');
      fVar13 = __real_43870000;
      uVar10 = (ulonglong)(byte)local_188._0_1_;
      local_168._s_0.Z = local_148._s_0.Z;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[bStack_207];
      local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[bStack_206];
      auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar10];
      local_168._s_0.X = local_148._s_0.X;
      local_168._s_0.Y = local_148._s_0.Y;
      local_1c8._0_8_ = local_130._s_0.X;
      local_1c8._8_8_ = local_130._s_0.Y;
      fVar12 = (float)bStack_205 * __real_3b808081;
      fStack_1ec = fVar12;
      local_1c8._16_8_ = local_130._s_0.Z;
      local_1a8._s_0.Z = dVar36;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,fVar52,__real_43870000,(double)local_1d8,0x20,
              (FLinearColor *)local_1f8,'\0');
      auVar18 = _local_1f8;
      local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[bStack_206];
      auVar14 = _local_1f8;
      fStack_1ec = auVar18._12_4_;
      _local_1f8 = auVar14._0_8_;
      auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar10];
      local_168._s_0.Z = local_118._s_0.Z;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[bStack_207];
      local_1c8._8_8_ = local_130._s_0.Y;
      local_1c8._0_8_ = local_130._s_0.X;
      fStack_1ec = fVar12;
      local_1c8._16_8_ = local_130._s_0.Z;
      local_1a8._s_0.Z = dVar36;
      DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
              (TVector<double> *)&local_168._s_0,fVar52,fVar13,(double)local_1d8,0x20,
              (FLinearColor *)local_1f8,'\0');
      pTVar8 = &local_130;
      auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar11];
    }
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar9];
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
    fStack_1ec = fVar51;
    DrawCircle(param_1,(TVector<double> *)&pTVar8->_s_0,(TVector<double> *)&local_148._s_0,
               (TVector<double> *)&local_118._s_0,(FLinearColor *)local_1f8,(double)local_1d8,0x20,
               '\0',0.0,0.0,false);
  }
  else {
    fStack_17c = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.G];
    local_180 = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.R];
    local_178 = FLinearColor::sRGBToLinearTable[(uint)FVar4.field0_0x0 & 0xff];
    local_174 = (float)param_4.field0_0x0._3_1_ * __real_3b808081;
    local_168._s_0.Z = dVar3;
    local_1c8._0_8_ = dVar45;
    if (local_1d8 <= local_1d4[0]) {
      local_1a8._s_0.X = local_148._s_0.X;
      local_1a8._s_0.Y = local_148._s_0.Y;
      local_1a8._s_0.Z = local_148._s_0.Z;
      local_1c8._8_4_ = uVar53;
      local_1c8._12_4_ = uVar54;
      local_1c8._16_8_ = dVar36;
      _local_1f8 = local_100._s_0.X;
      unique0x10002867 = local_100._s_0.Y;
      DrawArc(param_1,(TVector<double> *)local_1f8,(TVector<double> *)local_1c8,
              (TVector<double> *)&local_1a8._s_0,__real_c2b40000,__real_42b40000,
              (double)local_1d4[0],0x20,(FLinearColor *)&local_180,'\0');
      fStack_17c = FLinearColor::sRGBToLinearTable[bStack_207];
      local_180 = FLinearColor::sRGBToLinearTable[bStack_206];
      local_178 = FLinearColor::sRGBToLinearTable[FVar7.Bits & 0xff];
      local_1a8._s_0.X = local_148._s_0.X;
      local_1a8._s_0.Y = local_148._s_0.Y;
      stack0xfffffffffffffe10 = local_100._s_0.Y;
      _local_1f8 = local_100._s_0.X;
      local_1e8 = local_100._s_0.Z;
      fVar13 = local_1d4[0];
    }
    else {
      local_1c8._0_16_ = local_148._0_16_;
      local_1c8._16_8_ = local_148._s_0.Z;
      auStack_1f4._4_4_ = uVar53;
      _local_1f8 = dVar45;
      fStack_1ec = (float)uVar54;
      local_1e8 = dVar36;
      local_1a8._s_0.Z = local_130._s_0.Z;
      local_1a8._s_0.X = local_130._s_0.X;
      local_1a8._s_0.Y = local_130._s_0.Y;
      DrawArc(param_1,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)local_1f8,
              (TVector<double> *)local_1c8,__real_c2b40000,__real_42b40000,(double)local_1d8,0x20,
              (FLinearColor *)&local_180,'\0');
      fStack_17c = FLinearColor::sRGBToLinearTable[bStack_207];
      local_180 = FLinearColor::sRGBToLinearTable[bStack_206];
      local_178 = FLinearColor::sRGBToLinearTable[FVar7.Bits & 0xff];
      local_1a8._s_0.X = local_148._s_0.X;
      local_1a8._s_0.Y = local_148._s_0.Y;
      stack0xfffffffffffffe10 = local_130._s_0.Y;
      _local_1f8 = local_130._s_0.X;
      local_1e8 = local_130._s_0.Z;
      fVar13 = local_1d8;
    }
    local_174 = (float)bStack_205 * fVar51;
    local_1c8._8_4_ = uVar53;
    local_1c8._12_4_ = uVar54;
    local_1c8._16_8_ = dVar36;
    local_1a8._s_0.Z = local_148._s_0.Z;
    DrawArc(param_1,(TVector<double> *)local_1f8,(TVector<double> *)local_1c8,
            (TVector<double> *)&local_1a8._s_0,fVar52,__real_43870000,(double)fVar13,0x20,
            (FLinearColor *)&local_180,'\0');
    uVar32 = (uint)__xmm_80000000000000008000000000000000;
    uVar55 = SUB84(local_118._s_0.X,0) ^ uVar32;
    uVar33 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar56 = (uint)((ulonglong)local_118._0_8_ >> 0x20) ^ uVar33;
    dVar21 = (double)CONCAT44((uint)((ulonglong)local_118._8_8_ >> 0x20) ^ uVar33,
                              SUB84(local_118._s_0.Y,0) ^ uVar32);
    dVar27 = (double)CONCAT44((uint)((ulonglong)local_118._16_8_ >> 0x20) ^ uVar33,
                              SUB84(local_118._s_0.Z,0) ^ uVar32);
    fVar12 = (((local_1d8 - local_1d4[0]) * local_1d8) / fVar12) / local_1d8;
    fVar13 = __real_bf800000;
    if ((__real_bf800000 <= fVar12) && (fVar13 = fVar12, __real_3f800000 <= fVar12)) {
      fVar13 = __real_3f800000;
    }
    _local_180 = dVar27;
    local_e8 = dVar21;
    fVar13 = asinf(fVar13);
    fVar12 = __real_43b40000;
    fVar52 = fVar52 - fVar13 * __real_42652ee0;
    uVar10 = (ulonglong)(byte)uVar5;
    uVar11 = (ulonglong)(byte)uVar6;
    uVar32 = (uint)FVar4.field0_0x0 & 0xff;
    fVar35 = __real_43b40000 - fVar52;
    local_1a8._s_0.Z = local_148._s_0.Z;
    auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar10];
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar11];
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
    fVar49 = (float)((uint)param_4.field0_0x0 >> 0x18) * fVar51;
    local_1a8._s_0.X = local_148._s_0.X;
    local_1a8._s_0.Y = local_148._s_0.Y;
    fStack_1ec = fVar49;
    local_168._s_0.Y = local_130._s_0.Y;
    local_168._s_0.X = local_130._s_0.X;
    local_1c8._0_8_ = CONCAT44(uVar56,uVar55);
    local_168._s_0.Z = local_130._s_0.Z;
    local_1c8._16_8_ = dVar27;
    local_1c8._8_8_ = dVar21;
    DrawArc(param_1,(TVector<double> *)&local_168._s_0,(TVector<double> *)local_1c8,
            (TVector<double> *)&local_1a8._s_0,fVar52,fVar35,(double)local_1d8,0x20,
            (FLinearColor *)local_1f8,'\0');
    auVar18 = _local_1f8;
    fVar13 = __real_43340000;
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar11];
    auVar14 = _local_1f8;
    fStack_1ec = auVar18._12_4_;
    _local_1f8 = auVar14._0_8_;
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
    local_1a8._s_0.X = local_130._s_0.X;
    local_1a8._s_0.Y = local_130._s_0.Y;
    auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar10];
    fStack_1ec = fVar49;
    local_1c8._4_4_ = uVar56;
    local_1c8._0_4_ = uVar55;
    local_1c8._8_8_ = dVar21;
    local_168._8_4_ = uVar53;
    local_168._0_8_ = dVar45;
    local_168._12_4_ = uVar54;
    local_1a8._s_0.Z = local_130._s_0.Z;
    local_1c8._16_8_ = dVar27;
    local_168._s_0.Z = dVar36;
    DrawArc(param_1,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)local_1c8,
            (TVector<double> *)&local_168._s_0,fVar52,__real_43340000,(double)local_1d8,0x20,
            (FLinearColor *)local_1f8,'\0');
    uVar9 = (ulonglong)(byte)local_188._0_1_;
    local_1c8._16_8_ = _local_180;
    auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[bStack_207];
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[bStack_206];
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar9];
    local_1a8._s_0.X = local_130._s_0.X;
    local_1a8._s_0.Y = local_130._s_0.Y;
    fStack_1ec = (float)bStack_205 * fVar51;
    local_1c8._0_8_ = CONCAT44(uVar56,uVar55);
    local_1c8._8_8_ = local_e8;
    local_1a8._s_0.Z = local_130._s_0.Z;
    local_168._s_0.Z = dVar36;
    DrawArc(param_1,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)local_1c8,
            (TVector<double> *)&local_168._s_0,fVar13,fVar35,(double)local_1d8,0x20,
            (FLinearColor *)local_1f8,'\0');
    auVar18 = _local_1f8;
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar11];
    auVar14 = _local_1f8;
    fStack_1ec = auVar18._12_4_;
    _local_1f8 = auVar14._0_8_;
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
    fVar52 = fVar13 - fVar52;
    local_168._s_0.Z = local_148._s_0.Z;
    local_1a8._16_8_ = local_118._s_0.Z;
    auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar10];
    local_1c8._16_8_ = local_100._s_0.Z;
    local_168._0_16_ = local_148._0_16_;
    fStack_1ec = fVar49;
    local_1c8._0_8_ = local_100._s_0.X;
    local_1c8._8_8_ = local_100._s_0.Y;
    DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
            (TVector<double> *)&local_168._s_0,fVar52,fVar12 - fVar52,(double)local_1d4[0],0x20,
            (FLinearColor *)local_1f8,'\0');
    auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[uVar10];
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[uVar11];
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar32];
    local_1a8._s_0.Z = local_118._s_0.Z;
    local_1c8._0_8_ = local_100._s_0.X;
    local_1c8._8_8_ = local_100._s_0.Y;
    local_1c8._16_8_ = local_100._s_0.Z;
    local_168._s_0.Z = dVar36;
    DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
            (TVector<double> *)&local_168._s_0,fVar52,fVar13,(double)local_1d4[0],0x20,
            (FLinearColor *)local_1f8,'\0');
    auVar18 = _local_1f8;
    local_1f8 = (undefined1  [4])FLinearColor::sRGBToLinearTable[bStack_206];
    auVar14 = _local_1f8;
    fStack_1ec = auVar18._12_4_;
    _local_1f8 = auVar14._0_8_;
    auStack_1f4._4_4_ = FLinearColor::sRGBToLinearTable[uVar9];
    auStack_1f4._0_4_ = FLinearColor::sRGBToLinearTable[bStack_207];
    local_1c8._8_8_ = local_100._s_0.Y;
    local_1c8._0_8_ = local_100._s_0.X;
    local_1a8._s_0.Z = local_118._s_0.Z;
    fStack_1ec = (float)bStack_205 * fVar51;
    local_1c8._16_8_ = local_100._s_0.Z;
    local_168._s_0.Z = dVar36;
    DrawArc(param_1,(TVector<double> *)local_1c8,(TVector<double> *)&local_1a8._s_0,
            (TVector<double> *)&local_168._s_0,fVar13,fVar12 - fVar52,(double)local_1d4[0],0x20,
            (FLinearColor *)local_1f8,'\0');
    DrawTaperedCapsuleSides
              (param_1,param_2,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_100._s_0
               ,local_1d8,local_1d4[0],&param_4,this->bOneSidedCollision);
  }
  return;
}

// DrawElemWire @ 1482fd5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKTaperedCapsuleElem::DrawElemWire
          (FKTaperedCapsuleElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FColor param_4)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = (double)param_3;
  local_28._8_4_ = SUB84(local_28._s_0.Z,0);
  local_28._0_8_ = local_28._s_0.Z;
  local_28._12_4_ = (int)((ulonglong)local_28._s_0.Z >> 0x20);
  DrawElemWire(this,param_1,param_2,(TVector<double> *)&local_28._s_0,param_4);
  return;
}

// DrawTaperedCapsuleSides @ 1482ff440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FKTaperedCapsuleElem::DrawTaperedCapsuleSides
          (FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6,FColor *param_7,bool param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float local_res20;
  byte bStack0000000000000041;
  byte bStack0000000000000042;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  if (param_8) {
    fStack_f4 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.G] * __real_3e4ccccd;
    local_f8 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.R] * __real_3e4ccccd;
    local_f0 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.B] * __real_3e4ccccd;
    local_ec = (float)(param_7->field0_0x0)._s_0.A * ___real_3a4d9a68;
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_f8);
  }
  else {
    _param_8 = (param_7->field0_0x0)._s_0;
  }
  dVar10 = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar15 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar13 = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  auVar5._0_8_ = dVar15 * dVar15;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar10 * dVar10 + auVar5._0_8_ + dVar13 * dVar13;
  auVar6 = sqrtpd(auVar5,auVar6);
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     ((float)((uint)(param_5 - param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)auVar6._0_8_)) {
    dVar15 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar2 = (param_2->Rotation).XY.m128d_f64[0];
    dVar3 = (param_2->Rotation).XY.m128d_f64[1];
    fVar7 = (param_6 - param_5) / (float)auVar6._0_8_;
    _local_f8 = (undefined8)fVar7;
    local_100 = (double)_local_f8 * dVar2;
    local_108 = (double)_local_f8 * dVar3;
    fVar7 = SQRT(__real_3f800000 - fVar7 * fVar7);
    dVar16 = (double)fVar7;
    uVar8 = SUB84(local_100 + local_100,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)(local_100 + local_100) >> 0x20) ^
            __xmm_80000000000000008000000000000000._4_4_;
    dVar14 = local_108 - dVar16 * dVar15;
    dVar11 = dVar16 * dVar2 + dVar16 * dVar2;
    dVar13 = (double)param_5;
    dVar14 = dVar14 + dVar14;
    dVar10 = (double)param_6;
    local_res20 = __real_41340000;
    local_120 = (dVar3 * dVar11 - dVar15 * (double)CONCAT44(uVar9,uVar8)) + dVar1 * dVar14;
    local_118 = (dVar15 * dVar14 - dVar2 * dVar11) + dVar1 * (double)CONCAT44(uVar9,uVar8) + dVar16;
    local_110 = (dVar2 * (double)CONCAT44(uVar9,uVar8) - dVar3 * dVar14) +
                dVar1 * dVar11 + (double)_local_f8;
    do {
      dVar12 = local_100;
      dVar19 = local_108;
      __libm_sse2_sincosf_();
      dVar11 = (double)(extraout_XMM0_Da * fVar7);
      dVar14 = (double)(extraout_XMM0_Db * fVar7);
      dVar12 = dVar15 * dVar11 - dVar12;
      dVar19 = dVar19 - dVar15 * dVar14;
      dVar12 = dVar12 + dVar12;
      dVar19 = dVar19 + dVar19;
      dVar17 = dVar2 * dVar14 - dVar3 * dVar11;
      local_e8 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.R];
      local_e4 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.G];
      dVar17 = dVar17 + dVar17;
      local_e0 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.B];
      local_dc = (float)(param_7->field0_0x0)._s_0.A * __real_3b808081;
      dVar16 = (dVar3 * dVar17 - dVar15 * dVar12) + dVar1 * dVar19 + dVar11;
      local_150 = dVar13 * dVar16 + (param_3->field0_0x0)._s_0.X;
      dVar14 = (dVar15 * dVar19 - dVar2 * dVar17) + dVar1 * dVar12 + dVar14;
      dVar11 = (dVar2 * dVar12 - dVar3 * dVar19) + dVar1 * dVar17 + (double)_local_f8;
      local_148 = dVar13 * dVar14 + (param_3->field0_0x0)._s_0.Y;
      local_140 = dVar13 * dVar11 + (param_3->field0_0x0)._s_0.Z;
      local_138 = local_120 * dVar13 + (param_3->field0_0x0)._s_0.X;
      local_128 = local_110 * dVar13 + (param_3->field0_0x0)._s_0.Z;
      local_130 = local_118 * dVar13 + (param_3->field0_0x0)._s_0.Y;
      (**(code **)(param_1->_padding_ + 0x38))(param_1,&local_138,&local_150,&local_e8,0,0,0,0);
      local_164 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.R];
      local_160 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.G];
      local_15c = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.B];
      local_138 = dVar10 * dVar16 + (param_4->field0_0x0)._s_0.X;
      local_158 = (float)(param_7->field0_0x0)._s_0.A * __real_3b808081;
      local_128 = dVar10 * dVar11 + (param_4->field0_0x0)._s_0.Z;
      local_130 = dVar10 * dVar14 + (param_4->field0_0x0)._s_0.Y;
      local_150 = local_120 * dVar10 + (param_4->field0_0x0)._s_0.X;
      local_148 = local_118 * dVar10 + (param_4->field0_0x0)._s_0.Y;
      local_140 = local_110 * dVar10 + (param_4->field0_0x0)._s_0.Z;
      (**(code **)(param_1->_padding_ + 0x38))(param_1,&local_150,&local_138,&local_164,0,0,0,0);
      local_res20 = local_res20 + __real_41340000;
      local_120 = dVar16;
      local_118 = dVar14;
      local_110 = dVar11;
    } while (local_res20 <= __real_43340000);
    uVar4 = (ulonglong)bStack0000000000000042;
    uVar8 = (uint)_param_8 & 0xff;
    local_168 = __real_433f4000;
    fVar18 = (float)((uint)_param_8 >> 0x18) * __real_3b808081;
    do {
      __libm_sse2_sincosf_();
      dVar11 = (double)(extraout_XMM0_Da_00 * fVar7);
      local_160 = FLinearColor::sRGBToLinearTable[bStack0000000000000041];
      dVar16 = (double)(extraout_XMM0_Db_00 * fVar7);
      dVar14 = dVar11 * dVar15 - local_100;
      dVar12 = local_108 - dVar16 * dVar15;
      dVar14 = dVar14 + dVar14;
      dVar12 = dVar12 + dVar12;
      dVar19 = dVar16 * dVar2 - dVar11 * dVar3;
      local_164 = FLinearColor::sRGBToLinearTable[uVar4];
      local_15c = FLinearColor::sRGBToLinearTable[uVar8];
      dVar19 = dVar19 + dVar19;
      dVar11 = (dVar19 * dVar3 - dVar14 * dVar15) + dVar12 * dVar1 + dVar11;
      local_138 = dVar13 * dVar11 + (param_3->field0_0x0)._s_0.X;
      dVar16 = (dVar12 * dVar15 - dVar19 * dVar2) + dVar14 * dVar1 + dVar16;
      dVar14 = (dVar14 * dVar2 - dVar12 * dVar3) + dVar19 * dVar1 + (double)_local_f8;
      local_130 = dVar13 * dVar16 + (param_3->field0_0x0)._s_0.Y;
      local_128 = dVar13 * dVar14 + (param_3->field0_0x0)._s_0.Z;
      local_150 = local_120 * dVar13 + (param_3->field0_0x0)._s_0.X;
      local_148 = local_118 * dVar13 + (param_3->field0_0x0)._s_0.Y;
      local_140 = local_110 * dVar13 + (param_3->field0_0x0)._s_0.Z;
      local_158 = fVar18;
      (**(code **)(param_1->_padding_ + 0x38))(param_1,&local_150,&local_138,&local_164,0,0,0,0);
      local_e8 = FLinearColor::sRGBToLinearTable[uVar4];
      local_e4 = FLinearColor::sRGBToLinearTable[bStack0000000000000041];
      local_e0 = FLinearColor::sRGBToLinearTable[uVar8];
      local_138 = dVar10 * dVar11 + (param_4->field0_0x0)._s_0.X;
      local_130 = dVar10 * dVar16 + (param_4->field0_0x0)._s_0.Y;
      local_128 = dVar10 * dVar14 + (param_4->field0_0x0)._s_0.Z;
      local_150 = local_120 * dVar10 + (param_4->field0_0x0)._s_0.X;
      local_148 = local_118 * dVar10 + (param_4->field0_0x0)._s_0.Y;
      local_140 = local_110 * dVar10 + (param_4->field0_0x0)._s_0.Z;
      local_dc = fVar18;
      (**(code **)(param_1->_padding_ + 0x38))(param_1,&local_150,&local_138,&local_e8,0,0,0,0);
      local_168 = local_168 + __real_41340000;
      local_120 = dVar11;
      local_118 = dVar16;
      local_110 = dVar14;
    } while (local_168 <= __real_43b40000);
    local_168 = 0.0;
    do {
      __libm_sse2_sincosf_();
      dVar11 = (double)(extraout_XMM0_Da_01 * fVar7);
      dVar19 = (double)(extraout_XMM0_Db_01 * fVar7);
      dVar17 = dVar15 * dVar11 - local_100;
      dVar16 = local_108 - dVar15 * dVar19;
      dVar17 = dVar17 + dVar17;
      dVar16 = dVar16 + dVar16;
      dVar14 = dVar2 * dVar19 - dVar3 * dVar11;
      local_164 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.R];
      local_160 = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.G];
      dVar14 = dVar14 + dVar14;
      local_15c = FLinearColor::sRGBToLinearTable[(param_7->field0_0x0)._s_0.B];
      local_158 = (float)(param_7->field0_0x0)._s_0.A * __real_3b808081;
      dVar12 = (dVar3 * dVar14 - dVar15 * dVar17) + dVar1 * dVar16 + dVar11;
      local_138 = dVar10 * dVar12 + (param_4->field0_0x0)._s_0.X;
      dVar19 = (dVar15 * dVar16 - dVar2 * dVar14) + dVar1 * dVar17 + dVar19;
      dVar11 = (dVar2 * dVar17 - dVar3 * dVar16) + dVar1 * dVar14 + (double)_local_f8;
      local_130 = dVar10 * dVar19 + (param_4->field0_0x0)._s_0.Y;
      local_128 = dVar10 * dVar11 + (param_4->field0_0x0)._s_0.Z;
      local_150 = dVar13 * dVar12 + (param_3->field0_0x0)._s_0.X;
      local_148 = dVar13 * dVar19 + (param_3->field0_0x0)._s_0.Y;
      local_140 = dVar13 * dVar11 + (param_3->field0_0x0)._s_0.Z;
      (**(code **)(param_1->_padding_ + 0x38))(param_1,&local_150,&local_138,&local_164,0,0,0,0);
      local_168 = local_168 + __real_42b40000;
    } while (local_168 <= __real_43340000);
    local_168 = __real_43870000;
    do {
      __libm_sse2_sincosf_();
      dVar11 = (double)(extraout_XMM0_Da_02 * fVar7);
      local_160 = FLinearColor::sRGBToLinearTable[bStack0000000000000041];
      dVar19 = (double)(extraout_XMM0_Db_02 * fVar7);
      dVar16 = local_108 - dVar15 * dVar19;
      dVar12 = dVar15 * dVar11 - local_100;
      dVar16 = dVar16 + dVar16;
      dVar12 = dVar12 + dVar12;
      dVar14 = dVar2 * dVar19 - dVar3 * dVar11;
      local_164 = FLinearColor::sRGBToLinearTable[uVar4];
      local_15c = FLinearColor::sRGBToLinearTable[uVar8];
      dVar14 = dVar14 + dVar14;
      dVar11 = (dVar3 * dVar14 - dVar15 * dVar12) + dVar1 * dVar16 + dVar11;
      dVar19 = (dVar15 * dVar16 - dVar2 * dVar14) + dVar1 * dVar12 + dVar19;
      local_138 = dVar11 * dVar10 + (param_4->field0_0x0)._s_0.X;
      local_150 = dVar11 * dVar13 + (param_3->field0_0x0)._s_0.X;
      dVar11 = (dVar2 * dVar12 - dVar3 * dVar16) + dVar1 * dVar14 + (double)_local_f8;
      local_130 = dVar19 * dVar10 + (param_4->field0_0x0)._s_0.Y;
      local_148 = dVar19 * dVar13 + (param_3->field0_0x0)._s_0.Y;
      local_140 = dVar11 * dVar13 + (param_3->field0_0x0)._s_0.Z;
      local_128 = dVar11 * dVar10 + (param_4->field0_0x0)._s_0.Z;
      local_158 = fVar18;
      (**(code **)(param_1->_padding_ + 0x38))(param_1,&local_150,&local_138,&local_164,0,0,0,0);
      local_168 = local_168 + __real_42b40000;
    } while (local_168 < __real_43b40000);
  }
  return;
}

// GetElemSolid @ 14830a240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FKTaperedCapsuleElem::GetElemSolid
          (FKTaperedCapsuleElem *this,TTransform<double> *param_1,TVector<double> *param_2,
          FMaterialRenderProxy *param_3,int param_4,FMeshElementCollector *param_5)

{
  TMatrix<double> *pTVar1;
  undefined1 auStackY_128 [32];
  FScopedTaperedCapsuleBuilder local_e8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FScopedTaperedCapsuleBuilder::FScopedTaperedCapsuleBuilder
            (&local_e8,this,param_2,param_5->FeatureLevel);
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_a8);
  FDynamicMeshBuilder::GetMesh
            (&local_e8.MeshBuilder,pTVar1,param_3,'\0',false,false,param_4,param_5);
  FMemory::Free(local_e8.Verts);
  FMemory::Free(local_e8.ArcVerts);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_e8.MeshBuilder);
  return;
}

