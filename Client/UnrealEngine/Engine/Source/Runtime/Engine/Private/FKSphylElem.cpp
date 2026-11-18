// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticStruct @ 14732e690

UScriptStruct * __cdecl FKSphylElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKSphylElem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKSphylElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKSphylElem,(UObject *)pUVar1,L"KSphylElem");
  }
  return Z_Registration_Info_UScriptStruct_FKSphylElem.OuterSingleton;
}

// ~FKSphylElem @ 1476e8f80

void __thiscall FKSphylElem::~FKSphylElem(FKSphylElem *this)

{
  this->_padding_ = (longlong)&___7FKShapeElem__6B_;
  return;
}

// CalcAABB @ 1476f3c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKSphylElem::CalcAABB
          (FKSphylElem *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1,
          float param_2)

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
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auStack_198 [32];
  TVector<double> *local_178;
  float local_170;
  float local_168;
  TQuat<double> local_158;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (bPhysics_AggregateGeom_ISPC_Enabled) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
    local_168 = this->Length;
    local_170 = this->Radius;
    local_178 = &this->Center;
    SPhylCalcAABB(__return_storage_ptr__,param_1,param_1,&this->Rotation);
  }
  else {
    pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_158);
    local_138.Translation.ZW.m128d_f64[0] = (double)param_2;
    local_138.Rotation.XY.m128d_f64[0] = pTVar4->X;
    local_138.Rotation.XY.m128d_f64[1] = pTVar4->Y;
    local_138.Rotation.ZW.m128d_f64[0] = pTVar4->Z;
    local_138.Rotation.ZW.m128d_f64[1] = pTVar4->W;
    local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_138.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_138.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_138.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_138.Translation.XY.m128d_f64[0] =
         (this->Center).field0_0x0._s_0.X * local_138.Translation.ZW.m128d_f64[0];
    local_138.Translation.XY.m128d_f64[1] =
         (this->Center).field0_0x0._s_0.Y * local_138.Translation.ZW.m128d_f64[0];
    local_138.Translation.ZW.m128d_f64[0] =
         (this->Center).field0_0x0._s_0.Z * local_138.Translation.ZW.m128d_f64[0];
    local_138.Translation.ZW.m128d_f64[1] = 0.0;
    UE::Math::TTransform<double>::Multiply(&local_138,&local_138,param_1);
    auVar3._8_8_ = local_138.Rotation.ZW.m128d_f64[1];
    auVar3._0_8_ = local_138.Rotation.ZW.m128d_f64[0];
    auVar19._8_8_ = local_138.Rotation.XY.m128d_f64[1];
    auVar19._0_8_ = local_138.Rotation.XY.m128d_f64[0];
    local_138.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000 * local_138.Scale3D.ZW.m128d_f64[0];
    local_138.Scale3D.ZW.m128d_f64[1] = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
    local_138.Scale3D.XY.m128d_f64[0] = local_138.Scale3D.XY.m128d_f64[0] * 0.0;
    local_138.Scale3D.XY.m128d_f64[1] = local_138.Scale3D.XY.m128d_f64[1] * 0.0;
    uVar20 = (undefined4)((ulonglong)local_138.Scale3D.XY.m128d_f64[1] >> 0x20);
    auVar22._8_4_ = SUB84(local_138.Scale3D.XY.m128d_f64[1],0);
    auVar22._0_8_ = local_138.Scale3D.XY.m128d_f64[0];
    auVar22._12_4_ = uVar20;
    auVar5._8_4_ = SUB84(local_138.Rotation.ZW.m128d_f64[0],0);
    auVar5._0_8_ = local_138.Rotation.XY.m128d_f64[1];
    auVar5._12_4_ = (int)((ulonglong)local_138.Rotation.ZW.m128d_f64[0] >> 0x20);
    auVar19 = blendpd(auVar19,auVar3,2);
    auVar23._0_8_ =
         auVar22._8_8_ * local_138.Rotation.XY.m128d_f64[0] -
         local_138.Rotation.XY.m128d_f64[1] * local_138.Scale3D.XY.m128d_f64[0];
    auVar23._8_8_ =
         local_138.Scale3D.ZW.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[1] -
         auVar5._8_8_ * local_138.Scale3D.XY.m128d_f64[1];
    auVar10._8_4_ = SUB84(local_138.Scale3D.XY.m128d_f64[1],0);
    auVar10._0_8_ = local_138.Scale3D.XY.m128d_f64[0];
    auVar10._12_4_ = uVar20;
    auVar11._8_4_ = SUB84(local_138.Scale3D.ZW.m128d_f64[1],0);
    auVar11._0_8_ = local_138.Scale3D.ZW.m128d_f64[0];
    auVar11._12_4_ = (int)((ulonglong)local_138.Scale3D.ZW.m128d_f64[1] >> 0x20);
    auVar11 = blendpd(auVar10,auVar11,2);
    auVar12._0_8_ =
         auVar11._0_8_ * local_138.Rotation.ZW.m128d_f64[0] -
         auVar19._0_8_ * local_138.Scale3D.ZW.m128d_f64[0];
    auVar12._8_8_ =
         auVar11._8_8_ * local_138.Rotation.ZW.m128d_f64[1] -
         auVar19._8_8_ * local_138.Scale3D.ZW.m128d_f64[1];
    auVar11 = blendpd(auVar23,auVar12,2);
    dVar1 = auVar23._8_8_ + auVar23._8_8_;
    dVar2 = auVar12._0_8_ + auVar12._0_8_;
    uVar20 = SUB84(dVar2,0);
    uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar24._0_8_ = auVar11._0_8_ + auVar11._0_8_;
    auVar24._8_8_ = auVar11._8_8_ + auVar11._8_8_;
    auVar15._8_4_ = uVar20;
    auVar15._0_8_ = dVar1;
    auVar15._12_4_ = uVar21;
    auVar6._8_4_ = uVar20;
    auVar6._0_8_ = dVar1;
    auVar6._12_4_ = uVar21;
    auVar13._8_4_ = uVar20;
    auVar13._0_8_ = dVar1;
    auVar13._12_4_ = uVar21;
    auVar11 = blendpd(auVar13,auVar24,2);
    auVar16._0_8_ =
         auVar15._8_8_ * local_138.Rotation.XY.m128d_f64[0] -
         dVar1 * local_138.Rotation.XY.m128d_f64[1];
    auVar16._8_8_ =
         auVar24._0_8_ * local_138.Rotation.XY.m128d_f64[1] -
         auVar6._8_8_ * local_138.Rotation.ZW.m128d_f64[0];
    auVar7._8_4_ = SUB84(auVar24._8_8_,0);
    auVar7._0_8_ = auVar24._0_8_;
    auVar7._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar14._0_8_ =
         auVar11._0_8_ * local_138.Rotation.ZW.m128d_f64[0] - auVar24._0_8_ * auVar19._0_8_;
    auVar14._8_8_ =
         auVar11._8_8_ * local_138.Rotation.ZW.m128d_f64[1] - auVar7._8_8_ * auVar19._8_8_;
    auVar8._8_4_ = SUB84(auVar16._8_8_,0);
    auVar8._0_8_ = auVar16._0_8_;
    auVar8._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar11 = blendpd(auVar16,auVar14,2);
    fVar25 = param_2 * this->Radius;
    fVar9 = param_2 * __real_3f000000 * this->Length;
    __return_storage_ptr__->IsValid = '\x01';
    fVar18 = (float)((uint)(float)(dVar1 * local_138.Rotation.ZW.m128d_f64[1] +
                                   local_138.Scale3D.XY.m128d_f64[0] + auVar8._8_8_) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar9;
    fVar17 = (float)((uint)(float)(dVar2 * local_138.Rotation.ZW.m128d_f64[1] +
                                   local_138.Scale3D.XY.m128d_f64[1] + auVar14._0_8_) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar9;
    fVar9 = (float)((uint)(float)(auVar24._0_8_ * local_138.Rotation.ZW.m128d_f64[1] +
                                  local_138.Scale3D.ZW.m128d_f64[0] + auVar11._0_8_) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar9;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X =
         (double)(((float)local_138.Translation.XY.m128d_f64[0] - fVar18) - fVar25);
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y =
         (double)(((float)local_138.Translation.XY.m128d_f64[1] - fVar17) - fVar25);
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z =
         (double)(((float)local_138.Translation.ZW.m128d_f64[0] - fVar9) - fVar25);
    (__return_storage_ptr__->Max).field0_0x0._s_0.X =
         (double)(fVar18 + (float)local_138.Translation.XY.m128d_f64[0] + fVar25);
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y =
         (double)(fVar17 + (float)local_138.Translation.XY.m128d_f64[1] + fVar25);
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
         (double)(fVar9 + (float)local_138.Translation.ZW.m128d_f64[0] + fVar25);
  }
  return __return_storage_ptr__;
}

// SetTransform @ 14786e1b0

void __thiscall FKSphylElem::SetTransform(FKSphylElem *this,TTransform<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  bVar4 = UE::Math::TTransform<double>::IsValid(param_1);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6356621301104246694>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\SphylElem.h"
                       ,0x5a,"InTransform.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.X = (param_1->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  (this->Rotation).Pitch = local_48.Pitch;
  (this->Rotation).Yaw = local_48.Yaw;
  (this->Rotation).Roll = local_48.Roll;
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (this->Center).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (this->Center).field0_0x0._s_0.Y = dVar3;
  (this->Center).field0_0x0._s_0.Z = dVar1;
  return;
}

// GetClosestPointAndNormal @ 148286220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FKSphylElem::GetClosestPointAndNormal
          (FKSphylElem *this,TVector<double> *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  TQuat<double> *pTVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  uint uVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar25;
  undefined4 uVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined1 auStack_218 [32];
  TVector<double>_u_0 local_1f8 [2];
  FKSphylElem local_1c8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1f8[0]._0_8_ = (param_2->Scale3D).XY.m128d_f64[0];
  local_1f8[0]._8_8_ = (param_2->Scale3D).XY.m128d_f64[1];
  local_1f8[0]._16_8_ = (param_2->Scale3D).ZW.m128d_f64[0];
  GetFinalScaled(this,&local_1c8,(TVector<double> *)&local_1f8[0]._s_0,
                 &UE::Math::TTransform<double>::Identity);
  pTVar5 = UE::Math::TRotator<double>::Quaternion
                     (&this->Rotation,(TQuat<double> *)&local_1f8[0]._s_0);
  local_f8.Translation.XY.m128d_f64[0] = (this->Center).field0_0x0._s_0.X;
  local_f8.Translation.XY.m128d_f64[1] = (this->Center).field0_0x0._s_0.Y;
  local_f8.Rotation.ZW.m128d_f64[0] = pTVar5->Z;
  local_f8.Rotation.ZW.m128d_f64[1] = pTVar5->W;
  local_f8.Rotation.XY.m128d_f64[0] = pTVar5->X;
  local_f8.Rotation.XY.m128d_f64[1] = pTVar5->Y;
  local_f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_f8.Translation.ZW.m128d_f64[0] = (this->Center).field0_0x0._s_0.Z;
  local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_158,&local_f8,param_2);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar32._8_8_ = local_158.Rotation.XY.m128d_f64[1];
  auVar32._0_8_ = local_158.Rotation.XY.m128d_f64[0];
  auVar3._8_8_ = local_158.Rotation.ZW.m128d_f64[1];
  auVar3._0_8_ = local_158.Rotation.ZW.m128d_f64[0];
  dVar15 = local_158.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar8 = local_158.Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar26 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar34._0_8_ = (param_1->field0_0x0)._s_0.X - local_158.Translation.XY.m128d_f64[0];
  auVar34._8_8_ = (param_1->field0_0x0)._s_0.Y - local_158.Translation.XY.m128d_f64[1];
  dVar7 = (param_1->field0_0x0)._s_0.Z - local_158.Translation.ZW.m128d_f64[0];
  auVar41._0_8_ =
       local_158.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar41._8_8_ =
       local_158.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar38._8_4_ = SUB84(auVar34._8_8_,0);
  auVar38._0_8_ = auVar34._0_8_;
  auVar38._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar31._8_4_ = SUB84(dVar8,0);
  auVar31._0_8_ = dVar15;
  auVar31._12_4_ = uVar26;
  dVar33 = auVar31._8_8_;
  auVar27._8_4_ = SUB84(dVar8,0);
  auVar27._0_8_ = dVar15;
  auVar27._12_4_ = uVar26;
  auVar28._8_4_ = SUB84(auVar41._0_8_,0);
  auVar28._0_8_ = dVar33;
  auVar28._12_4_ = (int)((ulonglong)auVar41._0_8_ >> 0x20);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = dVar7;
  auVar35 = blendpd(auVar34,auVar35,2);
  auVar39._0_8_ = auVar38._8_8_ * dVar15 - dVar33 * auVar34._0_8_;
  auVar39._8_8_ = dVar7 * dVar8 - auVar28._8_8_ * auVar34._8_8_;
  auVar28 = blendpd(auVar27,auVar41,2);
  auVar22._8_4_ = SUB84(auVar39._8_8_,0);
  auVar22._0_8_ = auVar39._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar36._0_8_ = auVar35._0_8_ * auVar41._0_8_ - auVar28._0_8_ * dVar7;
  auVar36._8_8_ = auVar35._8_8_ * auVar41._8_8_ - auVar28._8_8_ * 0.0;
  dVar21 = auVar22._8_8_ + auVar22._8_8_;
  dVar25 = auVar36._0_8_ + auVar36._0_8_;
  auVar35 = blendpd(auVar39,auVar36,2);
  auVar16._8_4_ = SUB84(dVar25,0);
  auVar16._0_8_ = dVar21;
  uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
  auVar16._12_4_ = uVar26;
  auVar40._0_8_ = auVar35._0_8_ + auVar35._0_8_;
  auVar40._8_8_ = auVar35._8_8_ + auVar35._8_8_;
  auVar35 = blendpd(auVar16,auVar40,2);
  auVar9._8_4_ = SUB84(auVar40._8_8_,0);
  auVar9._0_8_ = auVar40._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
  auVar17._0_8_ = auVar35._0_8_ * auVar41._0_8_ - auVar40._0_8_ * auVar28._0_8_;
  auVar17._8_8_ = auVar35._8_8_ * auVar41._8_8_ - auVar9._8_8_ * auVar28._8_8_;
  auVar29._8_4_ = SUB84(dVar25,0);
  auVar29._0_8_ = dVar21;
  auVar29._12_4_ = uVar26;
  auVar32 = blendpd(auVar32,auVar3,2);
  auVar30._0_8_ = auVar29._8_8_ * dVar15 - dVar21 * dVar33;
  auVar30._8_8_ = auVar40._0_8_ * dVar8 - dVar25 * auVar41._0_8_;
  auVar35 = blendpd(auVar30,auVar17,2);
  dVar15 = (double)(local_1c8.Length * __real_3f000000);
  dVar7 = auVar35._0_8_ + auVar41._8_8_ * auVar40._0_8_ + dVar7;
  dVar8 = (double)(float)((uint)(local_1c8.Length * __real_3f000000) ^
                         __xmm_80000000800000008000000080000000);
  if (dVar7 <= dVar15) {
    dVar15 = dVar7;
  }
  if (dVar15 <= dVar8) {
    dVar15 = dVar8;
  }
  dVar15 = (double)(float)dVar15;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar15;
  auVar35 = blendpd(ZEXT816(0),auVar1,2);
  auVar42._0_8_ =
       local_158.Rotation.XY.m128d_f64[0] * 0.0 - local_158.Rotation.XY.m128d_f64[1] * 0.0;
  auVar42._8_8_ =
       dVar15 * local_158.Rotation.XY.m128d_f64[1] - local_158.Rotation.ZW.m128d_f64[0] * 0.0;
  auVar18._0_8_ = auVar35._0_8_ * local_158.Rotation.ZW.m128d_f64[0] - auVar32._0_8_ * dVar15;
  auVar18._8_8_ = auVar35._8_8_ * local_158.Rotation.ZW.m128d_f64[1] - auVar32._8_8_ * 0.0;
  auVar35 = blendpd(auVar42,auVar18,2);
  dVar8 = auVar42._8_8_ + auVar42._8_8_;
  dVar7 = auVar18._0_8_ + auVar18._0_8_;
  uVar26 = SUB84(dVar7,0);
  uVar44 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar43._0_8_ = auVar35._0_8_ + auVar35._0_8_;
  auVar43._8_8_ = auVar35._8_8_ + auVar35._8_8_;
  auVar23._8_4_ = uVar26;
  auVar23._0_8_ = dVar8;
  auVar23._12_4_ = uVar44;
  auVar10._8_4_ = uVar26;
  auVar10._0_8_ = dVar8;
  auVar10._12_4_ = uVar44;
  auVar19._8_4_ = uVar26;
  auVar19._0_8_ = dVar8;
  auVar19._12_4_ = uVar44;
  auVar35 = blendpd(auVar19,auVar43,2);
  auVar24._0_8_ =
       auVar23._8_8_ * local_158.Rotation.XY.m128d_f64[0] -
       dVar8 * local_158.Rotation.XY.m128d_f64[1];
  auVar24._8_8_ =
       auVar43._0_8_ * local_158.Rotation.XY.m128d_f64[1] -
       auVar10._8_8_ * local_158.Rotation.ZW.m128d_f64[0];
  auVar11._8_4_ = SUB84(auVar43._8_8_,0);
  auVar11._0_8_ = auVar43._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar20._0_8_ = auVar35._0_8_ * local_158.Rotation.ZW.m128d_f64[0] - auVar43._0_8_ * auVar32._0_8_
  ;
  auVar20._8_8_ = auVar35._8_8_ * local_158.Rotation.ZW.m128d_f64[1] - auVar11._8_8_ * auVar32._8_8_
  ;
  auVar12._8_4_ = SUB84(auVar24._8_8_,0);
  auVar12._0_8_ = auVar24._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
  auVar35 = blendpd(auVar24,auVar20,2);
  dVar21 = (auVar43._0_8_ * local_158.Rotation.ZW.m128d_f64[1] + dVar15 + auVar35._0_8_ +
           local_158.Translation.ZW.m128d_f64[0]) - (param_1->field0_0x0)._s_0.Z;
  dVar15 = (dVar7 * local_158.Rotation.ZW.m128d_f64[1] + auVar20._0_8_ +
           local_158.Translation.XY.m128d_f64[1]) - (param_1->field0_0x0)._s_0.Y;
  dVar7 = (dVar8 * local_158.Rotation.ZW.m128d_f64[1] + auVar12._8_8_ +
          local_158.Translation.XY.m128d_f64[0]) - (param_1->field0_0x0)._s_0.X;
  dVar8 = dVar15 * dVar15 + dVar7 * dVar7 + dVar21 * dVar21;
  fVar14 = (float)SQRT(dVar8);
  bVar2 = fVar14 <= __real_322bcc77;
  fVar37 = fVar14 - local_1c8.Radius;
  if (fVar14 - local_1c8.Radius <= 0.0) {
    fVar37 = 0.0;
  }
  if (fVar14 <= __real_322bcc77) {
    (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = (double)uVar4;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    uVar6 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)(dVar8 * dVar7) >> 0x20) ^ uVar13,
                          SUB84(dVar8 * dVar7,0) ^ uVar6);
    (param_4->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)(dVar8 * dVar15) >> 0x20) ^ uVar13,
                          SUB84(dVar8 * dVar15,0) ^ uVar6);
    (param_4->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(dVar21 * dVar8) >> 0x20) ^ uVar13,
                          SUB84(dVar21 * dVar8,0) ^ uVar6);
  }
  dVar15 = (param_4->field0_0x0)._s_0.Y;
  dVar8 = (param_4->field0_0x0)._s_0.Z;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar21 = (param_1->field0_0x0)._s_0.Z;
  dVar25 = (double)fVar37;
  (param_3->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X - dVar25 * (param_4->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar7 - dVar25 * dVar15;
  (param_3->field0_0x0)._s_0.Z = dVar21 - dVar25 * dVar8;
  if (bVar2) {
    fVar37 = 0.0;
  }
  ~FKSphylElem(&local_1c8);
  return fVar37;
}

// GetFinalScaled @ 148287fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FKSphylElem * __thiscall
FKSphylElem::GetFinalScaled
          (FKSphylElem *this,FKSphylElem *__return_storage_ptr__,TVector<double> *param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  longlong lVar7;
  float fVar8;
  TQuat<double> *pTVar9;
  TRotator<double> *pTVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  TRotator<double> local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  dVar2 = __real_3f1a36e2e0000000;
  uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar28 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_208;
  __return_storage_ptr__->_padding_ = (longlong)&___7FKShapeElem__6B_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)this->_padding_;
  *(undefined8 *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       *(undefined8 *)((longlong)&this->_padding_ + 4);
  lVar7 = __return_storage_ptr__->_padding_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(byte *)&__return_storage_ptr__->_padding_ =
       (byte)__return_storage_ptr__->_padding_ ^ ((byte)lVar7 ^ (byte)this->_padding_) & 1;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 1) =
       *(undefined1 *)((longlong)&this->_padding_ + 1);
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 6;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__;
  __return_storage_ptr__->_padding_ = (longlong)&___7FKSphylElem__6B_;
  dVar21 = (this->Center).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar21;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = (this->Center).field0_0x0._s_0.Z;
  dVar21 = (this->Rotation).Yaw;
  (__return_storage_ptr__->Rotation).Pitch = (this->Rotation).Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar21;
  (__return_storage_ptr__->Rotation).Roll = (this->Rotation).Roll;
  __return_storage_ptr__->Radius = this->Radius;
  __return_storage_ptr__->Length = this->Length;
  fVar8 = __real_3dcccccd;
  local_1c8.Roll = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar20 = (param_2->Scale3D).XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar21 = (param_2->Scale3D).XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  dVar1 = local_1c8.Roll * (param_1->field0_0x0)._s_0.Z;
  if ((((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar29,SUB84(dVar20,0) & uVar28) <=
        dVar2) &&
      ((double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar29,SUB84(dVar21,0) & uVar28) <=
       dVar2)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar29,SUB84(dVar1,0) & uVar28) <= dVar2))
  {
    dVar21 = __real_3fb99999a0000000;
    dVar1 = __real_3fb99999a0000000;
    dVar20 = __real_3fb99999a0000000;
  }
  uVar17 = SUB84(dVar21,0) & uVar28;
  uVar18 = (uint)((ulonglong)dVar21 >> 0x20) & uVar29;
  dVar21 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar29,SUB84(dVar20,0) & uVar28);
  if (dVar21 <= (double)CONCAT44(uVar18,uVar17)) {
    dVar21 = (double)CONCAT44(uVar18,uVar17);
  }
  uVar28 = SUB84(dVar1,0) & uVar28;
  uVar29 = (uint)((ulonglong)dVar1 >> 0x20) & uVar29;
  fVar19 = this->Radius;
  fVar11 = (float)dVar21 * fVar19;
  fVar19 = (float)((double)(fVar19 + fVar19 + this->Length) * (double)CONCAT44(uVar29,uVar28) *
                  __real_3fe0000000000000);
  if (fVar19 <= __real_3dcccccd) {
    fVar19 = __real_3dcccccd;
  }
  if (fVar11 <= fVar19) {
    fVar19 = fVar11;
  }
  if (fVar19 <= __real_3dcccccd) {
    fVar19 = __real_3dcccccd;
  }
  __return_storage_ptr__->Radius = fVar19;
  fVar19 = this->Radius;
  fVar11 = (float)dVar21 * fVar19;
  fVar19 = (float)((double)(fVar19 + fVar19 + this->Length) * (double)CONCAT44(uVar29,uVar28) *
                  __real_3fe0000000000000);
  if (fVar19 <= fVar8) {
    fVar19 = fVar8;
  }
  if (fVar19 <= fVar11) {
    fVar11 = fVar19;
  }
  if (fVar11 <= fVar8) {
    fVar11 = fVar8;
  }
  fVar19 = (fVar19 - fVar11) + (fVar19 - fVar11);
  if (fVar19 <= fVar8) {
    fVar19 = fVar8;
  }
  __return_storage_ptr__->Length = fVar19;
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
  pTVar9 = UE::Math::TRotator<double>::Quaternion
                     (&__return_storage_ptr__->Rotation,(TQuat<double> *)local_1e8);
  local_e8.Scale3D.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_e8.Rotation.ZW.m128d_f64[0] = pTVar9->Z;
  local_e8.Rotation.ZW.m128d_f64[1] = pTVar9->W;
  local_e8.Rotation.XY.m128d_f64[0] = pTVar9->X;
  local_e8.Rotation.XY.m128d_f64[1] = pTVar9->Y;
  local_e8.Scale3D.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_e8.Scale3D.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_e8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_e8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
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
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_1a8,&local_e8,&local_148);
  auVar14 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar4 = (this->Center).field0_0x0._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0] * (this->Center).field0_0x0._s_0.X;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1] * (this->Center).field0_0x0._s_0.Y;
  uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar12,auVar14,2);
  auVar30._8_4_ = SUB84(dVar3,0);
  auVar30._0_8_ = dVar2;
  auVar30._12_4_ = uVar27;
  dVar21 = auVar14._0_8_;
  auVar31._0_8_ = auVar30._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar2;
  auVar31._8_8_ = dVar4 * auVar12._8_8_ - dVar21 * dVar3;
  auVar32._8_4_ = SUB84(dVar3,0);
  auVar32._0_8_ = dVar2;
  auVar32._12_4_ = uVar27;
  auVar12._8_4_ = SUB84(dVar1,0);
  auVar12._0_8_ = dVar4;
  auVar12._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar12 = blendpd(auVar32,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar21 - auVar22._0_8_ * dVar4;
  auVar13._8_8_ = auVar12._8_8_ * auVar14._8_8_ - auVar22._8_8_ * dVar1;
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar32 = blendpd(auVar31,auVar13,2);
  auVar33._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar33._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  dVar1 = auVar31._8_8_ + auVar31._8_8_;
  dVar20 = auVar13._0_8_ + auVar13._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar20 >> 0x20);
  auVar25._8_4_ = SUB84(dVar20,0);
  auVar25._0_8_ = dVar1;
  auVar25._12_4_ = uVar27;
  auVar23._8_4_ = SUB84(dVar20,0);
  auVar23._0_8_ = dVar1;
  auVar23._12_4_ = uVar27;
  auVar32 = blendpd(auVar23,auVar33,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar1;
  auVar26._8_8_ = auVar33._0_8_ * auVar12._8_8_ - dVar21 * dVar20;
  auVar12 = blendpd(auVar12,auVar14,2);
  auVar22._8_4_ = SUB84(auVar26._8_8_,0);
  auVar22._0_8_ = auVar26._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  auVar24._0_8_ = auVar32._0_8_ * dVar21 - auVar12._0_8_ * auVar33._0_8_;
  auVar24._8_8_ = auVar32._8_8_ * auVar14._8_8_ - auVar12._8_8_ * auVar33._8_8_;
  auVar12 = blendpd(auVar26,auVar24,2);
  dVar2 = dVar1 * dVar6 + dVar2 + auVar22._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar21 = dVar20 * dVar6 + dVar3 + auVar24._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  auVar5._4_8_ = auVar24._0_8_;
  auVar5._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = SUB84(dVar21,0);
  auVar14._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  local_1c8.Roll =
       auVar33._0_8_ * dVar6 + dVar4 + auVar12._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  dVar21 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = dVar2 * (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = auVar14._8_8_ * dVar21;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = local_1c8.Roll * dVar1;
  dVar3 = (param_2->Rotation).XY.m128d_f64[0];
  dVar4 = (param_2->Rotation).XY.m128d_f64[1];
  auVar14 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar20 = auVar14._8_8_;
  dVar2 = auVar14._0_8_;
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = dVar20;
  auVar15._12_4_ = auVar14._12_4_;
  auVar16._8_4_ = auVar14._0_4_;
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = auVar14._4_4_;
  dVar21 = dVar3 * local_1a8.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar15._8_8_ * local_1a8.Rotation.XY.m128d_f64[1] +
           dVar4 * local_1a8.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar16._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar1 = dVar3 * local_1a8.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar20 * local_1a8.Rotation.ZW.m128d_f64[1] +
          dVar4 * local_1a8.Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar2 * local_1a8.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_1e8._8_4_ = SUB84(dVar21,0);
  local_1e8._0_8_ =
       dVar3 * local_1a8.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar20 * local_1a8.Rotation.XY.m128d_f64[0] +
       dVar4 * local_1a8.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar2 * local_1a8.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_1e8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  local_1d8._8_4_ = SUB84(dVar1,0);
  local_1d8._0_8_ =
       dVar3 * local_1a8.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar20 * local_1a8.Rotation.ZW.m128d_f64[0] +
       dVar4 * local_1a8.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar2 * local_1a8.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_1d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  pTVar10 = UE::Math::TRotator<double>::TRotator<double>(&local_1c8,(TQuat<double> *)local_1e8);
  dVar21 = pTVar10->Yaw;
  (__return_storage_ptr__->Rotation).Pitch = pTVar10->Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar21;
  (__return_storage_ptr__->Rotation).Roll = pTVar10->Roll;
  return __return_storage_ptr__;
}

// GetScaledCylinderLength @ 14828ced0

float __thiscall FKSphylElem::GetScaledCylinderLength(FKSphylElem *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  fVar5 = this->Radius;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  dVar7 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar4 = (float)((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  (double)(fVar5 + fVar5 + this->Length) * __real_3fe0000000000000);
  dVar6 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (fVar4 <= __real_3dcccccd) {
    fVar4 = __real_3dcccccd;
  }
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  fVar3 = (float)dVar7 * fVar5;
  if (fVar4 <= (float)dVar7 * fVar5) {
    fVar3 = fVar4;
  }
  if (fVar3 <= __real_3dcccccd) {
    fVar3 = __real_3dcccccd;
  }
  fVar5 = (fVar4 - fVar3) + (fVar4 - fVar3);
  if (fVar5 <= __real_3dcccccd) {
    fVar5 = __real_3dcccccd;
  }
  return fVar5;
}

// GetScaledHalfLength @ 14828cfe0

float __thiscall FKSphylElem::GetScaledHalfLength(FKSphylElem *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  fVar2 = (float)((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  (double)(this->Radius + this->Radius + this->Length) * __real_3fe0000000000000);
  if (fVar2 <= __real_3dcccccd) {
    fVar2 = __real_3dcccccd;
  }
  return fVar2;
}

// GetScaledRadius @ 14828d130

float __thiscall FKSphylElem::GetScaledRadius(FKSphylElem *this,TVector<double> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = this->Radius;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  dVar6 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar4 = (float)((double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  (double)(fVar1 + fVar1 + this->Length) * __real_3fe0000000000000);
  if (fVar4 <= __real_3dcccccd) {
    fVar4 = __real_3dcccccd;
  }
  dVar5 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field0_0x0 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar6 <= dVar5) {
    dVar6 = dVar5;
  }
  if ((float)dVar6 * fVar1 <= fVar4) {
    fVar4 = (float)dVar6 * fVar1;
  }
  if (fVar4 <= __real_3dcccccd) {
    fVar4 = __real_3dcccccd;
  }
  return fVar4;
}

// GetShortestDistanceToPoint @ 14828de70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FKSphylElem::GetShortestDistanceToPoint
          (FKSphylElem *this,TVector<double> *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  TQuat<double> *pTVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_208 [32];
  TVector<double>_u_0 local_1e8;
  FKSphylElem local_1c8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_1e8._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
  local_1e8._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
  local_1e8._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
  GetFinalScaled(this,&local_1c8,(TVector<double> *)&local_1e8._s_0,
                 &UE::Math::TTransform<double>::Identity);
  pTVar6 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,(TQuat<double> *)&local_1e8._s_0);
  local_f8.Translation.XY.m128d_f64[0] = (this->Center).field0_0x0._s_0.X;
  local_f8.Translation.XY.m128d_f64[1] = (this->Center).field0_0x0._s_0.Y;
  local_f8.Rotation.ZW.m128d_f64[0] = pTVar6->Z;
  local_f8.Rotation.ZW.m128d_f64[1] = pTVar6->W;
  local_f8.Rotation.XY.m128d_f64[0] = pTVar6->X;
  local_f8.Rotation.XY.m128d_f64[1] = pTVar6->Y;
  local_f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_f8.Translation.ZW.m128d_f64[0] = (this->Center).field0_0x0._s_0.Z;
  local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_158,&local_f8,param_2);
  dVar21 = local_158.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar22 = local_158.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar28 = local_158.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar1 = local_158.Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar7 = (param_1->field0_0x0)._s_0.Z - local_158.Translation.ZW.m128d_f64[0];
  dVar3 = (param_1->field0_0x0)._s_0.X - local_158.Translation.XY.m128d_f64[0];
  dVar4 = (param_1->field0_0x0)._s_0.Y - local_158.Translation.XY.m128d_f64[1];
  uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar29._8_4_ = SUB84(dVar4,0);
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar26;
  auVar8._8_4_ = SUB84(dVar28,0);
  auVar8._0_8_ = dVar22;
  auVar8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  auVar19._8_4_ = SUB84(dVar22,0);
  auVar19._0_8_ = dVar21;
  auVar19._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar13._8_4_ = SUB84(dVar1,0);
  auVar13._0_8_ = dVar28;
  auVar13._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar20 = blendpd(auVar19,auVar13,2);
  auVar30._0_8_ = auVar29._8_8_ * dVar21 - dVar22 * dVar3;
  auVar30._8_8_ = dVar7 * dVar22 - auVar8._8_8_ * dVar4;
  auVar12._8_4_ = SUB84(dVar4,0);
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = uVar26;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar7;
  auVar13 = blendpd(auVar12,auVar5,2);
  auVar14._0_8_ = auVar13._0_8_ * dVar28 - auVar20._0_8_ * dVar7;
  auVar14._8_8_ = auVar13._8_8_ * dVar1 - auVar20._8_8_ * 0.0;
  dVar2 = auVar30._8_8_ + auVar30._8_8_;
  dVar11 = auVar14._0_8_ + auVar14._0_8_;
  uVar26 = SUB84(dVar11,0);
  uVar27 = (undefined4)((ulonglong)dVar11 >> 0x20);
  auVar13 = blendpd(auVar30,auVar14,2);
  auVar31._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar31._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar17._8_4_ = uVar26;
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = uVar27;
  auVar9._8_4_ = uVar26;
  auVar9._0_8_ = dVar2;
  auVar9._12_4_ = uVar27;
  auVar15._8_4_ = uVar26;
  auVar15._0_8_ = dVar2;
  auVar15._12_4_ = uVar27;
  auVar13 = blendpd(auVar15,auVar31,2);
  auVar18._0_8_ = auVar17._8_8_ * dVar21 - dVar2 * dVar22;
  auVar18._8_8_ = auVar31._0_8_ * dVar22 - auVar9._8_8_ * dVar28;
  auVar10._8_4_ = SUB84(auVar31._8_8_,0);
  auVar10._0_8_ = auVar31._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar16._0_8_ = auVar13._0_8_ * dVar28 - auVar31._0_8_ * auVar20._0_8_;
  auVar16._8_8_ = auVar13._8_8_ * dVar1 - auVar10._8_8_ * auVar20._8_8_;
  auVar20._8_4_ = SUB84(auVar18._8_8_,0);
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  dVar28 = dVar2 * dVar1 + dVar3 + auVar20._8_8_;
  dVar2 = dVar11 * dVar1 + dVar4 + auVar16._0_8_;
  auVar13 = blendpd(auVar18,auVar16,2);
  dVar11 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar24 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar28 = auVar31._0_8_ * dVar1 + dVar7 + auVar13._0_8_;
  dVar28 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           (double)(local_1c8.Length * __real_3f000000);
  if (dVar28 <= 0.0) {
    dVar28 = 0.0;
  }
  dVar28 = SQRT((double)CONCAT44(uVar25,uVar24) * (double)CONCAT44(uVar25,uVar24) + dVar11 * dVar11
                + dVar28 * dVar28) - (double)local_1c8.Radius;
  if (dVar28 <= 0.0) {
    dVar28 = 0.0;
  }
  fVar23 = (float)dVar28;
  if (fVar23 <= __real_322bcc77) {
    fVar23 = 0.0;
  }
  ~FKSphylElem(&local_1c8);
  return fVar23;
}

// ScaleElem @ 1482a8680

void __thiscall FKSphylElem::ScaleElem(FKSphylElem *this,TVector<double> *param_1,float param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  fVar3 = (float)(param_1->field0_0x0)._s_0.X;
  if ((double)(float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    fVar3 = (float)dVar2;
  }
  fVar1 = this->Radius;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = fVar1 + fVar3;
  if (fVar3 <= param_2) {
    fVar3 = param_2;
  }
  this->Radius = fVar3;
  fVar3 = (float)dVar2 + this->Length + (fVar1 - fVar3);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  this->Length = fVar3;
  return;
}

// DrawElemSolid @ 1482f82d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FKSphylElem::DrawElemSolid
          (FKSphylElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FMaterialRenderProxy *param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FPrimitiveDrawInterface *pFVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FDynamicMeshVertex *pFVar14;
  void *pvVar15;
  TMatrix<double> *pTVar16;
  uint uVar17;
  float *pfVar18;
  FDynamicMeshVertex *pFVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  double dVar26;
  uint uVar27;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  double dVar37;
  double dVar39;
  float fVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_298 [32];
  int local_258;
  TVector<float>_u_0 local_254;
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_23c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  FPrimitiveDrawInterface *local_1e8;
  FDynamicMeshVertex *local_1e0;
  TTransform<double> *local_1d8;
  FMaterialRenderProxy *local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b4;
  undefined8 local_1a8;
  FDynamicMeshBuilder local_198;
  float local_168;
  float fStack_164;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  dVar28 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar26 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&param_3->field0_0x0 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar28 <= dVar26) {
    dVar28 = dVar26;
  }
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar25 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar27 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_1d0 = param_4;
  local_1e8 = param_1;
  local_1d8 = param_2;
  pFVar14 = FMemory::Malloc(0xcc30,0);
  local_1e0 = pFVar14;
  pvVar15 = FMemory::Malloc(0x630,0);
  uVar1 = __xmm_80000000000000008000000000000000;
  fVar44 = __real_3f000000;
  fVar43 = __real_bf000000;
  uVar20 = 0;
  pfVar18 = (float *)((longlong)pvVar15 + 8);
  local_1c8 = pvVar15;
  do {
    fVar40 = this->Length;
    fVar42 = fVar43;
    if (uVar20 < 9) {
      fVar42 = fVar44;
    }
    __libm_sse2_sincosf_();
    fVar33 = (float)dVar28 * this->Radius;
    (((FDynamicMeshVertex *)(pfVar18 + -2))->Position).field0_0x0._s_0.X = 0.0;
    local_248._s_0.Z = extraout_XMM0_Da * fVar33;
    pfVar18[-1] = local_248._s_0.Z;
    local_254._s_0.Z = extraout_XMM0_Db * fVar33;
    dVar26 = (double)local_254._s_0.Z;
    *pfVar18 = (float)((double)((float)(double)CONCAT44(uVar27,uVar25) * fVar42 * fVar40) + dVar26);
    local_23c._0_8_ = 0x3f800000;
    local_23c._s_0.Z = 0.0;
    local_254._0_8_ = (ulonglong)(uint)local_248._s_0.Z << 0x20;
    local_248._0_8_ =
         (ulonglong)
         (uint)(float)(double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) ^
                                       (uint)((ulonglong)uVar1 >> 0x20),
                                       SUB84(dVar26,0) ^ (uint)uVar1) << 0x20;
    FDynamicMeshVertex::SetTangents
              ((FDynamicMeshVertex *)(pfVar18 + -2),(TVector<float> *)&local_23c._s_0,
               (TVector<float> *)&local_248._s_0,(TVector<float> *)&local_254._s_0);
    fVar40 = (float)(int)uVar20 * __real_3d70f0f1;
    uVar20 = uVar20 + 1;
    pfVar18[1] = 0.0;
    pfVar18[2] = fVar40;
    fVar40 = __real_bf800000;
    pfVar18 = pfVar18 + 0x16;
  } while ((int)uVar20 < 0x12);
  pfVar18 = &(pFVar14->Position).field0_0x0._s_0.Z;
  lVar23 = (longlong)pvVar15 + (0x48 - (longlong)pFVar14);
  local_258 = 0;
  fStack_20c = 0.0;
  fStack_1fc = 0.0;
  fStack_1ec = 0.0;
  fStack_21c = 1.0;
  fVar43 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar44 = _UNK_151040074;
  fVar42 = _UNK_151040078;
  fVar33 = _UNK_15104007c;
  do {
    uVar20 = __xmm_80000000800000008000000080000000;
    fVar35 = 0.0;
    fVar38 = 0.0;
    fVar45 = (float)local_258 * __real_3d000000;
    fVar34 = __real_3d000000;
    __vdecl_sincosf4();
    pFVar6 = local_1e8;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uStack_15c = 0;
    uStack_14c = 0;
    uStack_13c = 0;
    local_168 = fVar35 * fVar34;
    lVar22 = 0x12;
    uStack_12c = 0x3f800000;
    fStack_164 = fVar34 * extraout_XMM0_Db_00;
    local_158 = extraout_XMM0_Dc * extraout_XMM0_Da_00 * fVar35 - fVar38 * extraout_XMM0_Db_00;
    fStack_154 = extraout_XMM0_Dc * extraout_XMM0_Da_00 * extraout_XMM0_Db_00 + fVar38 * fVar35;
    fStack_150 = (float)((uint)(fVar34 * extraout_XMM0_Dc) ^ uVar20);
    fStack_140 = fVar38 * fVar34;
    local_138 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fStack_130 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fStack_144 = fVar35 * extraout_XMM0_Dc - fVar38 * extraout_XMM0_Da_00 * extraout_XMM0_Db_00;
    local_148 = (float)((uint)(fVar38 * extraout_XMM0_Da_00 * fVar35 +
                              extraout_XMM0_Dc * extraout_XMM0_Db_00) ^ uVar20);
    fStack_134 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    do {
      local_228 = *(float *)((longlong)pfVar18 + lVar23 + -0x50);
      fStack_224 = *(float *)((longlong)pfVar18 + lVar23 + -0x4c);
      fStack_220 = *(float *)((longlong)pfVar18 + lVar23 + -0x48);
      auVar29._0_4_ = fStack_220 * local_148;
      auVar29._4_4_ = fStack_220 * fStack_144;
      auVar29._8_4_ = fStack_220 * fStack_140;
      auVar29._12_4_ = fStack_220 * 0.0;
      ((TVector<float>_u_0_s_0 *)(pfVar18 + -2))->X =
           fStack_224 * local_158 + local_228 * local_168 + auVar29._0_4_ +
           fStack_21c * (float)uVar3;
      pfVar18[-1] = fStack_224 * fStack_154 + local_228 * fStack_164 + auVar29._4_4_ +
                    fStack_21c * (float)uVar4;
      *pfVar18 = fStack_224 * fStack_150 + local_228 * extraout_XMM0_Da_00 + auVar29._8_4_ +
                 fStack_21c * (float)uVar5;
      fVar35 = __real_437e0000;
      fVar34 = __real_3f000000;
      auVar29 = pmovsxbd(auVar29,*(undefined4 *)((longlong)pfVar18 + lVar23));
      local_218 = (float)auVar29._0_4_ * fVar43;
      fStack_214 = (float)auVar29._4_4_ * fVar44;
      local_23c._0_8_ = CONCAT44(fStack_214,local_218);
      fStack_210 = (float)auVar29._8_4_ * fVar42;
      fVar33 = (float)auVar29._12_4_ * fVar33;
      auVar32._0_4_ = fStack_210 * local_148;
      auVar32._4_4_ = fStack_210 * fStack_144;
      auVar32._8_4_ = fStack_210 * fStack_140;
      auVar32._12_4_ = fStack_210 * 0.0;
      auVar29 = pmovsxbd(auVar32,*(undefined4 *)((longlong)pfVar18 + lVar23 + -4));
      local_1f8 = (float)auVar29._0_4_ * fVar43;
      fStack_1f4 = (float)auVar29._4_4_ * fVar44;
      fStack_1f0 = (float)auVar29._8_4_ * fVar42;
      local_248._0_8_ = CONCAT44(fStack_1f4,local_1f8);
      local_254._0_8_ = CONCAT44(fStack_1f4,local_1f8);
      local_208 = (fStack_214 * fStack_1f0 - fStack_210 * fStack_1f4) * fVar33;
      fStack_204 = (fStack_210 * local_1f8 - local_218 * fStack_1f0) * fVar33;
      fStack_200 = (local_218 * fStack_1f4 - fStack_214 * local_1f8) * fVar33;
      fVar38 = fStack_204 * fStack_154 + local_208 * fStack_164 + fStack_200 * fStack_144 +
               fStack_1fc * (float)uVar4;
      uVar25 = (int)ROUND((fStack_1f4 * local_158 + local_1f8 * local_168 + fStack_1f0 * local_148 +
                          fStack_1ec * (float)uVar3) * __real_437e0000 + __real_3f000000) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar25 < 0x7f) {
        uVar20 = uVar25;
      }
      *(undefined1 *)((longlong)pfVar18 + 0x47) = 0x7f;
      uVar25 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar25 = uVar20 & 0xff;
      }
      *(char *)(pfVar18 + 0x11) = (char)uVar25;
      uVar27 = (int)ROUND((fStack_1f4 * fStack_154 + local_1f8 * fStack_164 +
                           fStack_1f0 * fStack_144 + fStack_1ec * (float)uVar4) * fVar35 + fVar34)
               >> 1;
      uVar20 = 0x7f;
      if ((int)uVar27 < 0x7f) {
        uVar20 = uVar27;
      }
      uVar27 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar27 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x45) = (char)uVar27;
      uVar8 = (int)ROUND((fStack_1f4 * fStack_150 + local_1f8 * extraout_XMM0_Da_00 +
                          fStack_1f0 * fStack_140 + fStack_1ec * (float)uVar5) * fVar35 + fVar34) >>
              1;
      uVar20 = 0x7f;
      if ((int)uVar8 < 0x7f) {
        uVar20 = uVar8;
      }
      uVar8 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar8 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x46) = (char)uVar8;
      uVar9 = (int)ROUND((fStack_214 * local_158 + local_218 * local_168 + auVar32._0_4_ +
                         fStack_20c * (float)uVar3) * fVar35 + fVar34) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar9 < 0x7f) {
        uVar20 = uVar9;
      }
      uVar9 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar9 = uVar20 & 0xff;
      }
      *(char *)(pfVar18 + 0x12) = (char)uVar9;
      uVar10 = (int)ROUND((fStack_214 * fStack_154 + local_218 * fStack_164 + auVar32._4_4_ +
                          fStack_20c * (float)uVar4) * fVar35 + fVar34) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar10 < 0x7f) {
        uVar20 = uVar10;
      }
      uVar10 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar10 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x49) = (char)uVar10;
      uVar11 = (int)ROUND((fStack_214 * fStack_150 + local_218 * extraout_XMM0_Da_00 + auVar32._8_4_
                          + fStack_20c * (float)uVar5) * fVar35 + fVar34) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar11 < 0x7f) {
        uVar20 = uVar11;
      }
      uVar11 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar11 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x4a) = (char)uVar11;
      fVar33 = _UNK_15104007c;
      fVar42 = _UNK_151040078;
      fVar44 = _UNK_151040074;
      fVar43 = ___xmm_3c0102043c0102043c0102043c010204;
      uVar12 = (int)ROUND((fStack_204 * local_158 + local_208 * local_168 + fStack_200 * local_148 +
                          fStack_1fc * (float)uVar3) * fVar35 + fVar34) >> 1;
      auVar30._4_4_ = fVar38;
      auVar30._0_4_ = fVar38;
      auVar30._8_4_ = fVar38;
      auVar30._12_4_ = fVar38;
      auVar31._4_12_ = auVar30._4_12_;
      uVar20 = 0x7f;
      if ((int)uVar12 < 0x7f) {
        uVar20 = uVar12;
      }
      auVar31._0_4_ = fVar38 * fVar35 + fVar34;
      uVar12 = 0x7f;
      if ((int)ROUND(auVar31._0_4_) >> 1 < 0x7f) {
        uVar12 = (int)ROUND(auVar31._0_4_) >> 1;
      }
      uVar13 = (int)ROUND((fStack_204 * fStack_150 + local_208 * extraout_XMM0_Da_00 +
                           fStack_200 * fStack_140 + fStack_1fc * (float)uVar5) * fVar35 + fVar34)
               >> 1;
      uVar17 = 0x7f;
      if ((int)uVar13 < 0x7f) {
        uVar17 = uVar13;
      }
      uVar13 = 0x80;
      if (-0x80 < (int)uVar17) {
        uVar13 = uVar17 & 0xff;
      }
      auVar29 = pmovsxbd(auVar31,ZEXT416(((uVar11 & 0xff | 0x7f00) << 8 | uVar10 & 0xff) << 8 |
                                         uVar9 & 0xff));
      uVar9 = 0x80;
      if (-0x80 < (int)uVar12) {
        uVar9 = uVar12 & 0xff;
      }
      fVar34 = (float)auVar29._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar35 = (float)auVar29._4_4_ * _UNK_151040074;
      local_1a8 = CONCAT44(fVar35,fVar34);
      uVar10 = 0x80;
      if (-0x80 < (int)uVar20) {
        uVar10 = uVar20 & 0xff;
      }
      dVar26 = (double)((float)auVar29._8_4_ * _UNK_151040078);
      auVar29 = pmovsxbd(auVar29,ZEXT416(((uVar13 | 0x7f00) << 8 | uVar9) << 8 | uVar10));
      fVar38 = (float)auVar29._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar36 = (float)auVar29._4_4_ * _UNK_151040074;
      local_1b4 = CONCAT44(fVar36,fVar38);
      auVar32 = pmovsxbd(auVar29,ZEXT416(((uVar8 & 0xff | 0x7f00) << 8 | uVar27 & 0xff) << 8 |
                                         uVar25 & 0xff));
      dVar2 = (double)fVar35;
      dVar39 = (double)((float)auVar29._8_4_ * _UNK_151040078);
      dVar41 = (double)fVar36;
      fVar36 = (float)auVar32._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar35 = (float)auVar32._4_4_ * _UNK_151040074;
      local_1c0 = CONCAT44(fVar35,fVar36);
      dVar37 = (double)fVar35;
      dVar28 = (double)((float)auVar32._8_4_ * _UNK_151040078);
      fVar35 = __real_3f800000;
      if (((dVar41 * dVar26 - dVar2 * dVar39) * (double)fVar36 -
          (dVar37 * dVar26 - dVar2 * dVar28) * (double)fVar38) +
          (dVar37 * dVar39 - dVar41 * dVar28) * (double)fVar34 < __real_0000000000000000) {
        fVar35 = fVar40;
      }
      uVar7 = 0x7f;
      if (fVar35 < 0.0) {
        uVar7 = 0x81;
      }
      *(undefined1 *)((longlong)pfVar18 + 0x4b) = uVar7;
      pfVar18[1] = fVar45;
      pfVar18[2] = (float)*(undefined4 *)((longlong)pfVar18 + lVar23 + -0x40);
      pfVar18 = pfVar18 + 0x16;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar23 = lVar23 + -0x630;
    local_258 = local_258 + 1;
  } while (local_258 < 0x21);
  iVar24 = 1;
  FDynamicMeshBuilder::FDynamicMeshBuilder
            (&local_198,local_1e8->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
  pFVar14 = local_1e0;
  lVar23 = 0x252;
  pFVar19 = local_1e0;
  do {
    FDynamicMeshBuilder::AddVertex(&local_198,pFVar19);
    pFVar19 = pFVar19 + 1;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  do {
    lVar23 = 0x11;
    iVar21 = iVar24;
    do {
      FDynamicMeshBuilder::AddTriangle(&local_198,iVar21 + -1,iVar21 + 0x11,iVar21);
      FDynamicMeshBuilder::AddTriangle(&local_198,iVar21 + 0x11,iVar21 + 0x12,iVar21);
      iVar21 = iVar21 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    iVar24 = iVar24 + 0x12;
  } while (iVar24 < 0x241);
  pTVar16 = UE::Math::TTransform<double>::ToMatrixWithScale(local_1d8,(TMatrix<double> *)&local_168)
  ;
  FDynamicMeshBuilder::Draw
            (&local_198,pFVar6,pTVar16,local_1d0,'\0',false,true,(FHitProxyId)0xffffffff);
  FMemory::Free(pFVar14);
  FMemory::Free(local_1c8);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_198);
  return;
}

// DrawElemSolid @ 1482f8de0

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
FKSphylElem::DrawElemSolid
          (FKSphylElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FMaterialRenderProxy *param_4)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = (double)param_3;
  local_28._8_4_ = SUB84(local_28._s_0.Z,0);
  local_28._0_8_ = local_28._s_0.Z;
  local_28._12_4_ = (int)((ulonglong)local_28._s_0.Z >> 0x20);
  DrawElemSolid(this,param_1,param_2,(TVector<double> *)&local_28._s_0,param_4);
  return;
}

// DrawElemWire @ 1482fbb70

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
FKSphylElem::DrawElemWire
          (FKSphylElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FColor param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
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
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  FLinearColor_u_0 *pFVar46;
  ulonglong uVar47;
  double dVar48;
  uint uVar50;
  ulonglong uVar49;
  FLinearColor_u_0 local_138;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [32];
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0 [5];
  
  auVar21 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar42 = (param_2->Scale3D).XY.m128d_f64[0] * ___xmm_00000000000000003ff0000000000000;
  dVar44 = (param_2->Scale3D).XY.m128d_f64[1] * _UNK_150689518;
  auVar36._8_4_ = SUB84(dVar44,0);
  auVar36._0_8_ = dVar42;
  uVar35 = (undefined4)((ulonglong)dVar44 >> 0x20);
  auVar36._12_4_ = uVar35;
  auVar23 = blendpd(auVar16,auVar21,2);
  dVar26 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar5 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar1 = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  dVar9 = (param_2->Translation).ZW.m128d_f64[0];
  dVar3 = auVar21._0_8_;
  auVar37._0_8_ = auVar36._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar42;
  auVar37._8_8_ = dVar26 * auVar16._8_8_ - dVar3 * dVar44;
  auVar24._8_4_ = SUB84(dVar44,0);
  auVar24._0_8_ = dVar42;
  auVar24._12_4_ = uVar35;
  auVar16._8_4_ = SUB84(dVar5,0);
  auVar16._0_8_ = dVar26;
  auVar16._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar16 = blendpd(auVar24,auVar16,2);
  dVar48 = auVar21._8_8_;
  auVar17._0_8_ = auVar16._0_8_ * dVar3 - auVar23._0_8_ * dVar26;
  auVar17._8_8_ = auVar16._8_8_ * dVar48 - auVar23._8_8_ * dVar5;
  auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar23 = blendpd(auVar37,auVar17,2);
  auVar38._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar38._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  dVar5 = auVar37._8_8_ + auVar37._8_8_;
  dVar2 = auVar17._0_8_ + auVar17._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar31._8_4_ = SUB84(dVar2,0);
  auVar31._0_8_ = dVar5;
  auVar31._12_4_ = uVar35;
  auVar27._8_4_ = SUB84(dVar2,0);
  auVar27._0_8_ = dVar5;
  auVar27._12_4_ = uVar35;
  auVar23 = blendpd(auVar27,auVar38,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar5;
  auVar32._8_8_ = auVar38._0_8_ * auVar16._8_8_ - dVar3 * dVar2;
  auVar18._8_4_ = SUB84(auVar32._8_8_,0);
  auVar18._0_8_ = auVar32._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  dVar43 = ___xmm_3ff00000000000000000000000000000 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar45 = _UNK_15061cbc8 * (param_2->Scale3D).XY.m128d_f64[1];
  auVar16 = blendpd(auVar16,auVar21,2);
  auVar28._0_8_ = auVar23._0_8_ * dVar3 - auVar16._0_8_ * auVar38._0_8_;
  auVar28._8_8_ = auVar23._8_8_ * dVar48 - auVar16._8_8_ * auVar38._8_8_;
  dVar4 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar2 = dVar2 * dVar8 + dVar44 + auVar28._0_8_;
  auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar23 = blendpd(auVar32,auVar28,2);
  local_b8._s_0.Z = auVar38._0_8_ * dVar8 + dVar26 + auVar23._0_8_;
  auVar39._8_4_ = SUB84(dVar45,0);
  auVar39._0_8_ = dVar43;
  uVar35 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar39._12_4_ = uVar35;
  local_b8._8_4_ = SUB84(dVar2,0);
  local_b8._s_0.X = dVar5 * dVar8 + dVar42 + auVar18._8_8_;
  local_b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar24 = blendpd(auVar16,auVar21,2);
  auVar40._0_8_ = auVar39._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar43;
  auVar40._8_8_ = dVar4 * auVar16._8_8_ - dVar3 * dVar45;
  auVar19._8_4_ = SUB84(dVar45,0);
  auVar19._0_8_ = dVar43;
  auVar19._12_4_ = uVar35;
  auVar23._8_4_ = SUB84(dVar6,0);
  auVar23._0_8_ = dVar4;
  auVar23._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar16 = blendpd(auVar19,auVar23,2);
  auVar20._0_8_ = auVar16._0_8_ * dVar3 - auVar24._0_8_ * dVar4;
  auVar20._8_8_ = auVar16._8_8_ * dVar48 - auVar24._8_8_ * dVar6;
  auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar23 = blendpd(auVar40,auVar20,2);
  dVar5 = auVar40._8_8_ + auVar40._8_8_;
  dVar2 = auVar20._0_8_ + auVar20._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar41._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar41._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar33._8_4_ = SUB84(dVar2,0);
  auVar33._0_8_ = dVar5;
  auVar33._12_4_ = uVar35;
  auVar29._8_4_ = SUB84(dVar2,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = uVar35;
  auVar23 = blendpd(auVar29,auVar41,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar5;
  auVar34._8_8_ = auVar41._0_8_ * auVar16._8_8_ - dVar3 * dVar2;
  auVar16 = blendpd(auVar16,auVar21,2);
  dVar26 = auVar16._8_8_ * auVar41._8_8_;
  auVar21._8_4_ = SUB84(auVar34._8_8_,0);
  auVar21._0_8_ = auVar34._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar30._0_8_ = auVar23._0_8_ * dVar3 - auVar16._0_8_ * auVar41._0_8_;
  auVar30._8_8_ = auVar23._8_8_ * dVar48 - dVar26;
  dVar3 = dVar2 * dVar48 + dVar45 + auVar30._0_8_;
  auVar16 = blendpd(auVar34,auVar30,2);
  local_a0[0]._16_8_ = auVar41._0_8_ * dVar48 + dVar4 + auVar16._0_8_;
  local_d8._0_16_ = ZEXT816(0);
  local_a0[0]._8_4_ = SUB84(dVar3,0);
  local_a0[0]._0_8_ = dVar5 * dVar48 + dVar43 + auVar21._8_8_;
  local_a0[0]._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_d8._16_8_ = __real_3ff0000000000000;
  UE::Math::TTransform<double>::TransformVector
            (param_2,(TVector<double> *)&local_128._s_0,(TVector<double> *)local_d8);
  fVar13 = GetScaledCylinderLength(this,param_3);
  fVar13 = fVar13 * __real_3f000000;
  fVar14 = GetScaledRadius(this,param_3);
  auVar7._4_8_ = dVar26;
  auVar7._0_4_ = auVar1._4_4_;
  auVar25._0_8_ = auVar7._0_8_ << 0x20;
  auVar25._8_4_ = auVar1._8_4_;
  auVar25._12_4_ = auVar1._12_4_;
  dVar3 = (double)fVar13;
  local_f8._s_0.X = dVar3 * local_128._s_0.X + auVar1._0_8_;
  local_f8._s_0.Y = dVar3 * local_128._s_0.Y + auVar25._8_8_;
  local_110._s_0.X = auVar1._0_8_ - dVar3 * local_128._s_0.X;
  local_110._s_0.Y = auVar25._8_8_ - dVar3 * local_128._s_0.Y;
  local_f8._s_0.Z = dVar3 * local_128._s_0.Z + dVar9;
  local_110._s_0.Z = dVar9 - dVar3 * local_128._s_0.Z;
  uVar12 = (ulonglong)param_4.field0_0x0._s_0.R;
  uVar10 = (ulonglong)param_4.field0_0x0._s_0.G;
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar12];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar10];
  uVar11 = (uint)param_4.field0_0x0 & 0xff;
  fVar13 = (float)((uint)param_4.field0_0x0 >> 0x18) * __real_3b808081;
  dVar3 = (double)fVar14;
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[uVar11];
  local_138._s_0.A = fVar13;
  local_d8._16_8_ = dVar9;
  DrawCircle(param_1,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_b8._s_0,
             (TVector<double> *)&local_a0[0]._s_0,(FLinearColor *)&local_138._s_0,dVar3,0x20,'\0',
             0.0,0.0,false);
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar12];
  pFVar46 = &local_138;
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar10];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[uVar11];
  dVar48 = dVar3;
  local_138._s_0.A = fVar13;
  DrawCircle(param_1,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_b8._s_0,
             (TVector<double> *)&local_a0[0]._s_0,(FLinearColor *)&pFVar46->_s_0,dVar3,0x20,'\0',0.0
             ,0.0,false);
  uVar50 = (uint)((ulonglong)dVar48 >> 0x20);
  uVar35 = (undefined4)((ulonglong)pFVar46 >> 0x20);
  DrawHalfCircle(param_1,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_a0[0]._s_0,
                 (TVector<double> *)&local_128._s_0,param_4,fVar14);
  DrawHalfCircle(param_1,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_b8._s_0,
                 (TVector<double> *)&local_128._s_0,param_4,fVar14);
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_128._s_0.X =
       (double)CONCAT44((uint)((ulonglong)local_128._0_8_ >> 0x20) ^ uVar22,
                        SUB84(local_128._s_0.X,0) ^ uVar15);
  local_128._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)local_128._8_8_ >> 0x20) ^ uVar22,
                        SUB84(local_128._s_0.Y,0) ^ uVar15);
  local_128._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)local_128._16_8_ >> 0x20) ^ uVar22,
                        SUB84(local_128._s_0.Z,0) ^ uVar15);
  DrawHalfCircle(param_1,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_a0[0]._s_0,
                 (TVector<double> *)&local_128._s_0,param_4,fVar14);
  uVar47 = CONCAT44(uVar35,param_4.field0_0x0);
  DrawHalfCircle(param_1,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_b8._s_0,
                 (TVector<double> *)&local_128._s_0,param_4,fVar14);
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar12];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar10];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[uVar11];
  local_128._s_0.X = dVar3 * local_b8._s_0.X + local_110._s_0.X;
  local_d8._0_8_ = dVar3 * local_b8._s_0.X + local_f8._s_0.X;
  local_128._s_0.Y = dVar3 * local_b8._s_0.Y + local_110._s_0.Y;
  local_d8._8_8_ = dVar3 * local_b8._s_0.Y + local_f8._s_0.Y;
  local_128._s_0.Z = dVar3 * local_b8._s_0.Z + local_110._s_0.Z;
  local_d8._16_8_ = dVar3 * local_b8._s_0.Z + local_f8._s_0.Z;
  uVar49 = (ulonglong)uVar50 << 0x20;
  uVar47 = uVar47 & 0xffffffffffffff00;
  local_138._s_0.A = fVar13;
  (**(code **)(param_1->_padding_ + 0x30))(param_1,local_d8,&local_128,&local_138,uVar47,uVar49,0,0)
  ;
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar12];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar10];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[uVar11];
  local_d8._0_8_ = local_110._s_0.X - dVar3 * local_b8._s_0.X;
  local_d8._8_8_ = local_110._s_0.Y - dVar3 * local_b8._s_0.Y;
  uVar49 = uVar49 & 0xffffffff00000000;
  local_d8._16_8_ = local_110._s_0.Z - dVar3 * local_b8._s_0.Z;
  local_128._s_0.X = local_f8._s_0.X - dVar3 * local_b8._s_0.X;
  local_128._s_0.Y = local_f8._s_0.Y - dVar3 * local_b8._s_0.Y;
  local_128._s_0.Z = local_f8._s_0.Z - dVar3 * local_b8._s_0.Z;
  uVar47 = uVar47 & 0xffffffffffffff00;
  local_138._s_0.A = fVar13;
  (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_128,local_d8,&local_138,uVar47,uVar49,0,0)
  ;
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar12];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar10];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[uVar11];
  local_d8._0_8_ = dVar3 * (double)local_a0[0]._0_8_ + local_110._s_0.X;
  local_128._s_0.X = dVar3 * (double)local_a0[0]._0_8_ + local_f8._s_0.X;
  local_d8._8_8_ = dVar3 * (double)local_a0[0]._8_8_ + local_110._s_0.Y;
  local_128._s_0.Y = dVar3 * (double)local_a0[0]._8_8_ + local_f8._s_0.Y;
  local_d8._16_8_ = dVar3 * (double)local_a0[0]._16_8_ + local_110._s_0.Z;
  local_128._s_0.Z = dVar3 * (double)local_a0[0]._16_8_ + local_f8._s_0.Z;
  uVar49 = uVar49 & 0xffffffff00000000;
  uVar47 = uVar47 & 0xffffffffffffff00;
  local_138._s_0.A = fVar13;
  (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_128,local_d8,&local_138,uVar47,uVar49,0,0)
  ;
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar12];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar10];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[uVar11];
  local_d8._8_8_ = local_110._s_0.Y - dVar3 * (double)local_a0[0]._8_8_;
  local_d8._0_8_ = local_110._s_0.X - dVar3 * (double)local_a0[0]._0_8_;
  local_d8._16_8_ = local_110._s_0.Z - dVar3 * (double)local_a0[0]._16_8_;
  local_128._s_0.X = local_f8._s_0.X - dVar3 * (double)local_a0[0]._0_8_;
  local_128._s_0.Y = local_f8._s_0.Y - dVar3 * (double)local_a0[0]._8_8_;
  local_128._s_0.Z = local_f8._s_0.Z - dVar3 * (double)local_a0[0]._16_8_;
  local_138._s_0.A = fVar13;
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,&local_128,local_d8,&local_138,uVar47 & 0xffffffffffffff00,
             uVar49 & 0xffffffff00000000,0,0);
  return;
}

// DrawElemWire @ 1482fc3a0

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
FKSphylElem::DrawElemWire
          (FKSphylElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
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

// GetElemSolid @ 148309730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FKSphylElem::GetElemSolid
          (FKSphylElem *this,TTransform<double> *param_1,TVector<double> *param_2,
          FMaterialRenderProxy *param_3,int param_4,FMeshElementCollector *param_5)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FMeshElementCollector *pFVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FDynamicMeshVertex *pFVar14;
  void *pvVar15;
  TMatrix<double> *pTVar16;
  uint uVar17;
  float *pfVar18;
  FDynamicMeshVertex *pFVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  double dVar26;
  uint uVar27;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  double dVar37;
  double dVar39;
  float fVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_298 [32];
  int local_258;
  TVector<float>_u_0 local_254;
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_23c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  FMeshElementCollector *local_1e8;
  FDynamicMeshVertex *local_1e0;
  TTransform<double> *local_1d8;
  FMaterialRenderProxy *local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b4;
  undefined8 local_1a8;
  FDynamicMeshBuilder local_198;
  float local_168;
  float fStack_164;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  dVar28 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar26 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&param_2->field0_0x0 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar28 <= dVar26) {
    dVar28 = dVar26;
  }
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar25 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar27 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_1e8 = param_5;
  local_1d8 = param_1;
  local_1d0 = param_3;
  pFVar14 = FMemory::Malloc(0xcc30,0);
  local_1e0 = pFVar14;
  pvVar15 = FMemory::Malloc(0x630,0);
  uVar1 = __xmm_80000000000000008000000000000000;
  fVar44 = __real_3f000000;
  fVar43 = __real_bf000000;
  uVar20 = 0;
  pfVar18 = (float *)((longlong)pvVar15 + 8);
  local_1c8 = pvVar15;
  do {
    fVar40 = this->Length;
    fVar42 = fVar43;
    if (uVar20 < 9) {
      fVar42 = fVar44;
    }
    __libm_sse2_sincosf_();
    fVar33 = (float)dVar28 * this->Radius;
    (((FDynamicMeshVertex *)(pfVar18 + -2))->Position).field0_0x0._s_0.X = 0.0;
    local_248._s_0.Z = extraout_XMM0_Da * fVar33;
    pfVar18[-1] = local_248._s_0.Z;
    local_254._s_0.Z = extraout_XMM0_Db * fVar33;
    dVar26 = (double)local_254._s_0.Z;
    *pfVar18 = (float)((double)((float)(double)CONCAT44(uVar27,uVar25) * fVar42 * fVar40) + dVar26);
    local_23c._0_8_ = 0x3f800000;
    local_23c._s_0.Z = 0.0;
    local_254._0_8_ = (ulonglong)(uint)local_248._s_0.Z << 0x20;
    local_248._0_8_ =
         (ulonglong)
         (uint)(float)(double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) ^
                                       (uint)((ulonglong)uVar1 >> 0x20),
                                       SUB84(dVar26,0) ^ (uint)uVar1) << 0x20;
    FDynamicMeshVertex::SetTangents
              ((FDynamicMeshVertex *)(pfVar18 + -2),(TVector<float> *)&local_23c._s_0,
               (TVector<float> *)&local_248._s_0,(TVector<float> *)&local_254._s_0);
    fVar40 = (float)(int)uVar20 * __real_3d70f0f1;
    uVar20 = uVar20 + 1;
    pfVar18[1] = 0.0;
    pfVar18[2] = fVar40;
    fVar40 = __real_bf800000;
    pfVar18 = pfVar18 + 0x16;
  } while ((int)uVar20 < 0x12);
  pfVar18 = &(pFVar14->Position).field0_0x0._s_0.Z;
  lVar23 = (longlong)pvVar15 + (0x48 - (longlong)pFVar14);
  local_258 = 0;
  fStack_20c = 0.0;
  fStack_1fc = 0.0;
  fStack_1ec = 0.0;
  fStack_21c = 1.0;
  fVar43 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar44 = _UNK_151040074;
  fVar42 = _UNK_151040078;
  fVar33 = _UNK_15104007c;
  do {
    uVar20 = __xmm_80000000800000008000000080000000;
    fVar35 = 0.0;
    fVar38 = 0.0;
    fVar45 = (float)local_258 * __real_3d000000;
    fVar34 = __real_3d000000;
    __vdecl_sincosf4();
    pFVar6 = local_1e8;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uStack_15c = 0;
    uStack_14c = 0;
    uStack_13c = 0;
    local_168 = fVar35 * fVar34;
    lVar22 = 0x12;
    uStack_12c = 0x3f800000;
    fStack_164 = fVar34 * extraout_XMM0_Db_00;
    local_158 = extraout_XMM0_Dc * extraout_XMM0_Da_00 * fVar35 - fVar38 * extraout_XMM0_Db_00;
    fStack_154 = extraout_XMM0_Dc * extraout_XMM0_Da_00 * extraout_XMM0_Db_00 + fVar38 * fVar35;
    fStack_150 = (float)((uint)(fVar34 * extraout_XMM0_Dc) ^ uVar20);
    fStack_140 = fVar38 * fVar34;
    local_138 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fStack_130 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fStack_144 = fVar35 * extraout_XMM0_Dc - fVar38 * extraout_XMM0_Da_00 * extraout_XMM0_Db_00;
    local_148 = (float)((uint)(fVar38 * extraout_XMM0_Da_00 * fVar35 +
                              extraout_XMM0_Dc * extraout_XMM0_Db_00) ^ uVar20);
    fStack_134 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    do {
      local_228 = *(float *)((longlong)pfVar18 + lVar23 + -0x50);
      fStack_224 = *(float *)((longlong)pfVar18 + lVar23 + -0x4c);
      fStack_220 = *(float *)((longlong)pfVar18 + lVar23 + -0x48);
      auVar29._0_4_ = fStack_220 * local_148;
      auVar29._4_4_ = fStack_220 * fStack_144;
      auVar29._8_4_ = fStack_220 * fStack_140;
      auVar29._12_4_ = fStack_220 * 0.0;
      ((TVector<float>_u_0_s_0 *)(pfVar18 + -2))->X =
           fStack_224 * local_158 + local_228 * local_168 + auVar29._0_4_ +
           fStack_21c * (float)uVar3;
      pfVar18[-1] = fStack_224 * fStack_154 + local_228 * fStack_164 + auVar29._4_4_ +
                    fStack_21c * (float)uVar4;
      *pfVar18 = fStack_224 * fStack_150 + local_228 * extraout_XMM0_Da_00 + auVar29._8_4_ +
                 fStack_21c * (float)uVar5;
      fVar35 = __real_437e0000;
      fVar34 = __real_3f000000;
      auVar29 = pmovsxbd(auVar29,*(undefined4 *)((longlong)pfVar18 + lVar23));
      local_218 = (float)auVar29._0_4_ * fVar43;
      fStack_214 = (float)auVar29._4_4_ * fVar44;
      local_23c._0_8_ = CONCAT44(fStack_214,local_218);
      fStack_210 = (float)auVar29._8_4_ * fVar42;
      fVar33 = (float)auVar29._12_4_ * fVar33;
      auVar32._0_4_ = fStack_210 * local_148;
      auVar32._4_4_ = fStack_210 * fStack_144;
      auVar32._8_4_ = fStack_210 * fStack_140;
      auVar32._12_4_ = fStack_210 * 0.0;
      auVar29 = pmovsxbd(auVar32,*(undefined4 *)((longlong)pfVar18 + lVar23 + -4));
      local_1f8 = (float)auVar29._0_4_ * fVar43;
      fStack_1f4 = (float)auVar29._4_4_ * fVar44;
      fStack_1f0 = (float)auVar29._8_4_ * fVar42;
      local_248._0_8_ = CONCAT44(fStack_1f4,local_1f8);
      local_254._0_8_ = CONCAT44(fStack_1f4,local_1f8);
      local_208 = (fStack_214 * fStack_1f0 - fStack_210 * fStack_1f4) * fVar33;
      fStack_204 = (fStack_210 * local_1f8 - local_218 * fStack_1f0) * fVar33;
      fStack_200 = (local_218 * fStack_1f4 - fStack_214 * local_1f8) * fVar33;
      fVar38 = fStack_204 * fStack_154 + local_208 * fStack_164 + fStack_200 * fStack_144 +
               fStack_1fc * (float)uVar4;
      uVar25 = (int)ROUND((fStack_1f4 * local_158 + local_1f8 * local_168 + fStack_1f0 * local_148 +
                          fStack_1ec * (float)uVar3) * __real_437e0000 + __real_3f000000) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar25 < 0x7f) {
        uVar20 = uVar25;
      }
      *(undefined1 *)((longlong)pfVar18 + 0x47) = 0x7f;
      uVar25 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar25 = uVar20 & 0xff;
      }
      *(char *)(pfVar18 + 0x11) = (char)uVar25;
      uVar27 = (int)ROUND((fStack_1f4 * fStack_154 + local_1f8 * fStack_164 +
                           fStack_1f0 * fStack_144 + fStack_1ec * (float)uVar4) * fVar35 + fVar34)
               >> 1;
      uVar20 = 0x7f;
      if ((int)uVar27 < 0x7f) {
        uVar20 = uVar27;
      }
      uVar27 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar27 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x45) = (char)uVar27;
      uVar8 = (int)ROUND((fStack_1f4 * fStack_150 + local_1f8 * extraout_XMM0_Da_00 +
                          fStack_1f0 * fStack_140 + fStack_1ec * (float)uVar5) * fVar35 + fVar34) >>
              1;
      uVar20 = 0x7f;
      if ((int)uVar8 < 0x7f) {
        uVar20 = uVar8;
      }
      uVar8 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar8 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x46) = (char)uVar8;
      uVar9 = (int)ROUND((fStack_214 * local_158 + local_218 * local_168 + auVar32._0_4_ +
                         fStack_20c * (float)uVar3) * fVar35 + fVar34) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar9 < 0x7f) {
        uVar20 = uVar9;
      }
      uVar9 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar9 = uVar20 & 0xff;
      }
      *(char *)(pfVar18 + 0x12) = (char)uVar9;
      uVar10 = (int)ROUND((fStack_214 * fStack_154 + local_218 * fStack_164 + auVar32._4_4_ +
                          fStack_20c * (float)uVar4) * fVar35 + fVar34) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar10 < 0x7f) {
        uVar20 = uVar10;
      }
      uVar10 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar10 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x49) = (char)uVar10;
      uVar11 = (int)ROUND((fStack_214 * fStack_150 + local_218 * extraout_XMM0_Da_00 + auVar32._8_4_
                          + fStack_20c * (float)uVar5) * fVar35 + fVar34) >> 1;
      uVar20 = 0x7f;
      if ((int)uVar11 < 0x7f) {
        uVar20 = uVar11;
      }
      uVar11 = 0xffffff80;
      if (-0x80 < (int)uVar20) {
        uVar11 = uVar20 & 0xff;
      }
      *(char *)((longlong)pfVar18 + 0x4a) = (char)uVar11;
      fVar33 = _UNK_15104007c;
      fVar42 = _UNK_151040078;
      fVar44 = _UNK_151040074;
      fVar43 = ___xmm_3c0102043c0102043c0102043c010204;
      uVar12 = (int)ROUND((fStack_204 * local_158 + local_208 * local_168 + fStack_200 * local_148 +
                          fStack_1fc * (float)uVar3) * fVar35 + fVar34) >> 1;
      auVar30._4_4_ = fVar38;
      auVar30._0_4_ = fVar38;
      auVar30._8_4_ = fVar38;
      auVar30._12_4_ = fVar38;
      auVar31._4_12_ = auVar30._4_12_;
      uVar20 = 0x7f;
      if ((int)uVar12 < 0x7f) {
        uVar20 = uVar12;
      }
      auVar31._0_4_ = fVar38 * fVar35 + fVar34;
      uVar12 = 0x7f;
      if ((int)ROUND(auVar31._0_4_) >> 1 < 0x7f) {
        uVar12 = (int)ROUND(auVar31._0_4_) >> 1;
      }
      uVar13 = (int)ROUND((fStack_204 * fStack_150 + local_208 * extraout_XMM0_Da_00 +
                           fStack_200 * fStack_140 + fStack_1fc * (float)uVar5) * fVar35 + fVar34)
               >> 1;
      uVar17 = 0x7f;
      if ((int)uVar13 < 0x7f) {
        uVar17 = uVar13;
      }
      uVar13 = 0x80;
      if (-0x80 < (int)uVar17) {
        uVar13 = uVar17 & 0xff;
      }
      auVar29 = pmovsxbd(auVar31,ZEXT416(((uVar11 & 0xff | 0x7f00) << 8 | uVar10 & 0xff) << 8 |
                                         uVar9 & 0xff));
      uVar9 = 0x80;
      if (-0x80 < (int)uVar12) {
        uVar9 = uVar12 & 0xff;
      }
      fVar34 = (float)auVar29._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar35 = (float)auVar29._4_4_ * _UNK_151040074;
      local_1a8 = CONCAT44(fVar35,fVar34);
      uVar10 = 0x80;
      if (-0x80 < (int)uVar20) {
        uVar10 = uVar20 & 0xff;
      }
      dVar26 = (double)((float)auVar29._8_4_ * _UNK_151040078);
      auVar29 = pmovsxbd(auVar29,ZEXT416(((uVar13 | 0x7f00) << 8 | uVar9) << 8 | uVar10));
      fVar38 = (float)auVar29._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar36 = (float)auVar29._4_4_ * _UNK_151040074;
      local_1b4 = CONCAT44(fVar36,fVar38);
      auVar32 = pmovsxbd(auVar29,ZEXT416(((uVar8 & 0xff | 0x7f00) << 8 | uVar27 & 0xff) << 8 |
                                         uVar25 & 0xff));
      dVar2 = (double)fVar35;
      dVar39 = (double)((float)auVar29._8_4_ * _UNK_151040078);
      dVar41 = (double)fVar36;
      fVar36 = (float)auVar32._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar35 = (float)auVar32._4_4_ * _UNK_151040074;
      local_1c0 = CONCAT44(fVar35,fVar36);
      dVar37 = (double)fVar35;
      dVar28 = (double)((float)auVar32._8_4_ * _UNK_151040078);
      fVar35 = __real_3f800000;
      if (((dVar41 * dVar26 - dVar2 * dVar39) * (double)fVar36 -
          (dVar37 * dVar26 - dVar2 * dVar28) * (double)fVar38) +
          (dVar37 * dVar39 - dVar41 * dVar28) * (double)fVar34 < __real_0000000000000000) {
        fVar35 = fVar40;
      }
      uVar7 = 0x7f;
      if (fVar35 < 0.0) {
        uVar7 = 0x81;
      }
      *(undefined1 *)((longlong)pfVar18 + 0x4b) = uVar7;
      pfVar18[1] = fVar45;
      pfVar18[2] = (float)*(undefined4 *)((longlong)pfVar18 + lVar23 + -0x40);
      pfVar18 = pfVar18 + 0x16;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar23 = lVar23 + -0x630;
    local_258 = local_258 + 1;
  } while (local_258 < 0x21);
  iVar24 = 1;
  FDynamicMeshBuilder::FDynamicMeshBuilder
            (&local_198,local_1e8->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
  pFVar14 = local_1e0;
  lVar23 = 0x252;
  pFVar19 = local_1e0;
  do {
    FDynamicMeshBuilder::AddVertex(&local_198,pFVar19);
    pFVar19 = pFVar19 + 1;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  do {
    lVar23 = 0x11;
    iVar21 = iVar24;
    do {
      FDynamicMeshBuilder::AddTriangle(&local_198,iVar21 + -1,iVar21 + 0x11,iVar21);
      FDynamicMeshBuilder::AddTriangle(&local_198,iVar21 + 0x11,iVar21 + 0x12,iVar21);
      iVar21 = iVar21 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    iVar24 = iVar24 + 0x12;
  } while (iVar24 < 0x241);
  pTVar16 = UE::Math::TTransform<double>::ToMatrixWithScale(local_1d8,(TMatrix<double> *)&local_168)
  ;
  FDynamicMeshBuilder::GetMesh(&local_198,pTVar16,local_1d0,'\0',false,false,param_4,pFVar6);
  FMemory::Free(pFVar14);
  FMemory::Free(local_1c8);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_198);
  return;
}

