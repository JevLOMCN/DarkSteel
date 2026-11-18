// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 147266940

UScriptStruct * __cdecl FKBoxElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKBoxElem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKBoxElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKBoxElem,(UObject *)pUVar1,L"KBoxElem");
  }
  return Z_Registration_Info_UScriptStruct_FKBoxElem.OuterSingleton;
}

// ~FKBoxElem @ 1476e8f20

void __thiscall FKBoxElem::~FKBoxElem(FKBoxElem *this)

{
  this->_padding_ = (longlong)&___7FKShapeElem__6B_;
  return;
}

// CalcAABB @ 1476f2990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKBoxElem::CalcAABB(FKBoxElem *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1
                   ,float param_2)

{
  TQuat<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined4 in_XMM3_Db;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_1a8 [32];
  TVector<double> *local_188;
  float local_180;
  float local_178;
  float local_170;
  TVector<double>_u_0 local_168;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138;
  undefined4 uStack_137;
  undefined2 uStack_133;
  undefined1 uStack_131;
  TTransform<double> local_128;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (bPhysics_AggregateGeom_ISPC_Enabled) {
    local_138 = 0;
    local_168._s_0.X = 0.0;
    local_168._s_0.Y = 0.0;
    local_148 = 0.0;
    dStack_140 = 0.0;
    uStack_137 = 0;
    local_170 = this->Z;
    local_180 = this->X;
    local_168._s_0.Z = 0.0;
    dStack_150 = 0.0;
    uStack_133 = 0;
    local_178 = this->Y;
    uStack_131 = 0;
    local_188 = &this->Center;
    BoxCalcAABB(&local_168,param_1,CONCAT44(in_XMM3_Db,param_2),&this->Rotation);
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_168._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_168._s_0.Y;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_168._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_150;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_148;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_140;
    __return_storage_ptr__->IsValid = local_138;
    __return_storage_ptr__->Pad[0] = (char)uStack_137;
    __return_storage_ptr__->Pad[1] = (char)((uint)uStack_137 >> 8);
    __return_storage_ptr__->Pad[2] = (char)((uint)uStack_137 >> 0x10);
    __return_storage_ptr__->Pad[3] = (char)((uint)uStack_137 >> 0x18);
    __return_storage_ptr__->Pad[4] = (char)uStack_133;
    __return_storage_ptr__->Pad[5] = (char)((ushort)uStack_133 >> 8);
    __return_storage_ptr__->Pad[6] = uStack_131;
  }
  else {
    pTVar1 = UE::Math::TRotator<double>::Quaternion
                       (&this->Rotation,(TQuat<double> *)&local_168._s_0);
    local_168._s_0.Z = (double)param_2;
    local_128.Rotation.XY.m128d_f64[0] = pTVar1->X;
    local_128.Rotation.XY.m128d_f64[1] = pTVar1->Y;
    local_128.Rotation.ZW.m128d_f64[0] = pTVar1->Z;
    local_128.Rotation.ZW.m128d_f64[1] = pTVar1->W;
    local_128.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_128.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_128.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_128.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_128.Translation.XY.m128d_f64[0] = (this->Center).field0_0x0._s_0.X * local_168._s_0.Z;
    local_128.Translation.XY.m128d_f64[1] = (this->Center).field0_0x0._s_0.Y * local_168._s_0.Z;
    local_128.Translation.ZW.m128d_f64[0] = (this->Center).field0_0x0._s_0.Z * local_168._s_0.Z;
    local_128.Translation.ZW.m128d_f64[1] = 0.0;
    UE::Math::TTransform<double>::Multiply(&local_128,&local_128,param_1);
    fVar5 = param_2 * __real_3f000000;
    local_138 = 1;
    fVar4 = fVar5 * this->X;
    fVar3 = fVar5 * this->Y;
    fVar5 = fVar5 * this->Z;
    local_168._s_0.X = (double)(float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
    local_168._s_0.Y = (double)(float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    local_168._s_0.Z = (double)(float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
    dStack_150 = (double)fVar4;
    local_148 = (double)fVar3;
    dStack_140 = (double)fVar5;
    pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_128,&local_c8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_168._s_0,__return_storage_ptr__,pTVar2);
  }
  return __return_storage_ptr__;
}

// SetTransform @ 14786e100

void __thiscall FKBoxElem::SetTransform(FKBoxElem *this,TTransform<double> *param_1)

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
                      (&bGEnsureHasExecuted<8441893820995469421>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\BoxElem.h"
                       ,0x6d,"InTransform.IsValid()");
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

// GetClosestPointAndNormal @ 148285470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FKBoxElem::GetClosestPointAndNormal
          (FKBoxElem *this,TVector<double> *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  TQuat<double> *pTVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  double dVar54;
  undefined1 auVar50 [16];
  double dVar55;
  undefined4 uVar57;
  undefined1 auVar51 [16];
  double dVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined4 uVar68;
  double dVar69;
  double dVar73;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined4 uVar78;
  undefined4 uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auStack_2a8 [32];
  float local_288;
  TVector<double>_u_0 local_278;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  TQuat<double> local_228;
  FKBoxElem local_208;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_278._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
  local_278._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
  local_278._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
  GetFinalScaled(this,&local_208,(TVector<double> *)&local_278._s_0,
                 &UE::Math::TTransform<double>::Identity);
  pTVar8 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_228);
  local_138.Translation.XY.m128d_f64[0] = (this->Center).field0_0x0._s_0.X;
  local_138.Translation.XY.m128d_f64[1] = (this->Center).field0_0x0._s_0.Y;
  local_138.Rotation.ZW.m128d_f64[0] = pTVar8->Z;
  local_138.Rotation.ZW.m128d_f64[1] = pTVar8->W;
  local_138.Rotation.XY.m128d_f64[0] = pTVar8->X;
  local_138.Rotation.XY.m128d_f64[1] = pTVar8->Y;
  local_138.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_138.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_138.Translation.ZW.m128d_f64[0] = (this->Center).field0_0x0._s_0.Z;
  local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_138.Translation.ZW.m128d_f64[1] = 0.0;
  local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_138.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_198.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_198.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_198,&local_138,param_2);
  dVar48 = local_198.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar56 = local_198.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar27 = (undefined4)((ulonglong)dVar56 >> 0x20);
  dVar74 = local_198.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar10 = local_198.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar49._8_4_ = SUB84(dVar56,0);
  auVar49._0_8_ = dVar48;
  auVar49._12_4_ = uVar27;
  dVar9 = (param_1->field0_0x0)._s_0.Z - local_198.Translation.ZW.m128d_f64[0];
  dVar69 = (param_1->field0_0x0)._s_0.X - local_198.Translation.XY.m128d_f64[0];
  dVar73 = (param_1->field0_0x0)._s_0.Y - local_198.Translation.XY.m128d_f64[1];
  dVar54 = auVar49._8_8_;
  auVar75._8_4_ = SUB84(dVar73,0);
  auVar75._0_8_ = dVar69;
  uVar57 = (undefined4)((ulonglong)dVar73 >> 0x20);
  auVar75._12_4_ = uVar57;
  auVar12._8_4_ = SUB84(dVar74,0);
  auVar12._0_8_ = dVar54;
  auVar12._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
  auVar59._8_4_ = SUB84(dVar56,0);
  auVar59._0_8_ = dVar48;
  auVar59._12_4_ = uVar27;
  auVar29._8_4_ = SUB84(dVar10,0);
  auVar29._0_8_ = dVar74;
  auVar29._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar60 = blendpd(auVar59,auVar29,2);
  auVar76._0_8_ = auVar75._8_8_ * dVar48 - dVar54 * dVar69;
  auVar76._8_8_ = dVar9 * dVar56 - auVar12._8_8_ * dVar73;
  auVar28._8_4_ = SUB84(dVar73,0);
  auVar28._0_8_ = dVar69;
  auVar28._12_4_ = uVar57;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = dVar9;
  auVar29 = blendpd(auVar28,auVar81,2);
  auVar30._0_8_ = auVar29._0_8_ * dVar74 - auVar60._0_8_ * dVar9;
  auVar30._8_8_ = auVar29._8_8_ * dVar10 - auVar60._8_8_ * 0.0;
  auVar29 = blendpd(auVar76,auVar30,2);
  dVar55 = auVar76._8_8_ + auVar76._8_8_;
  dVar58 = auVar30._0_8_ + auVar30._0_8_;
  uVar27 = SUB84(dVar58,0);
  uVar57 = (undefined4)((ulonglong)dVar58 >> 0x20);
  auVar77._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar77._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  auVar40._8_4_ = uVar27;
  auVar40._0_8_ = dVar55;
  auVar40._12_4_ = uVar57;
  auVar13._8_4_ = uVar27;
  auVar13._0_8_ = dVar55;
  auVar13._12_4_ = uVar57;
  auVar31._8_4_ = uVar27;
  auVar31._0_8_ = dVar55;
  auVar31._12_4_ = uVar57;
  auVar29 = blendpd(auVar31,auVar77,2);
  auVar41._0_8_ = auVar40._8_8_ * dVar48 - dVar55 * dVar54;
  auVar41._8_8_ = auVar77._0_8_ * dVar56 - auVar13._8_8_ * dVar74;
  auVar14._8_4_ = SUB84(auVar77._8_8_,0);
  auVar14._0_8_ = auVar77._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
  auVar32._0_8_ = auVar29._0_8_ * dVar74 - auVar77._0_8_ * auVar60._0_8_;
  auVar32._8_8_ = auVar29._8_8_ * dVar10 - auVar14._8_8_ * auVar60._8_8_;
  auVar60._8_4_ = SUB84(auVar41._8_8_,0);
  auVar60._0_8_ = auVar41._0_8_;
  auVar60._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
  auVar29 = blendpd(auVar41,auVar32,2);
  dVar48 = dVar55 * dVar10 + dVar69 + auVar60._8_8_;
  dVar56 = dVar58 * dVar10 + dVar73 + auVar32._0_8_;
  local_258 = (double)(local_208.X * __real_3f000000);
  local_278._s_0.X = (double)(local_208.Z * __real_3f000000);
  dVar74 = auVar77._0_8_ * dVar10 + dVar9 + auVar29._0_8_;
  if (dVar48 <= local_258) {
    local_258 = dVar48;
  }
  if (dVar74 <= local_278._s_0.X) {
    local_278._s_0.X = dVar74;
  }
  dVar10 = (double)(float)((uint)(local_208.Z * __real_3f000000) ^
                          __xmm_80000000800000008000000080000000);
  auVar6._8_8_ = local_198.Rotation.ZW.m128d_f64[1];
  auVar6._0_8_ = local_198.Rotation.ZW.m128d_f64[0];
  if (local_278._s_0.X <= dVar10) {
    local_278._s_0.X = dVar10;
  }
  dStack_250 = (double)(local_208.Y * __real_3f000000);
  local_278._s_0.Y = 0.0;
  dVar10 = (double)(float)((uint)(local_208.Y * __real_3f000000) ^
                          __xmm_80000000800000008000000080000000);
  if (dVar56 <= dStack_250) {
    dStack_250 = dVar56;
  }
  if (dStack_250 <= dVar10) {
    dStack_250 = dVar10;
  }
  dVar10 = (double)(float)((uint)(local_208.X * __real_3f000000) ^
                          __xmm_80000000800000008000000080000000);
  if (local_258 <= dVar10) {
    local_258 = dVar10;
  }
  auVar5._8_8_ = local_198.Rotation.XY.m128d_f64[1];
  auVar5._0_8_ = local_198.Rotation.XY.m128d_f64[0];
  auVar29 = blendpd(auVar5,auVar6,2);
  dVar58 = auVar29._0_8_;
  uVar78 = SUB84(local_198.Rotation.ZW.m128d_f64[0],0);
  uVar79 = (undefined4)((ulonglong)local_198.Rotation.ZW.m128d_f64[0] >> 0x20);
  dVar9 = auVar29._8_8_;
  local_248 = dVar58 * local_278._s_0.X;
  dStack_240 = dVar9 * 0.0;
  auVar70._8_4_ = SUB84(dStack_250,0);
  auVar70._0_8_ = local_258;
  uVar27 = (undefined4)((ulonglong)dStack_250 >> 0x20);
  auVar70._12_4_ = uVar27;
  auVar80._8_4_ = SUB84(dStack_250,0);
  auVar80._0_8_ = local_258;
  auVar80._12_4_ = uVar27;
  dVar54 = auVar70._8_8_;
  auVar61._8_4_ = SUB84(local_278._s_0.X,0);
  auVar61._0_8_ = dVar54;
  auVar61._12_4_ = (int)((ulonglong)local_278._s_0.X >> 0x20);
  auVar15._8_4_ = uVar78;
  auVar15._0_8_ = local_198.Rotation.XY.m128d_f64[1];
  auVar15._12_4_ = uVar79;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_278._s_0.X;
  auVar81 = blendpd(auVar80,auVar2,2);
  auVar62._0_8_ =
       dVar54 * local_198.Rotation.XY.m128d_f64[0] - local_198.Rotation.XY.m128d_f64[1] * local_258;
  auVar62._8_8_ = auVar61._8_8_ * local_198.Rotation.XY.m128d_f64[1] - auVar15._8_8_ * dStack_250;
  auVar50._8_4_ = SUB84(auVar62._8_8_,0);
  auVar50._0_8_ = auVar62._0_8_;
  auVar50._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
  auVar16._0_8_ = auVar81._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - local_248;
  auVar16._8_8_ = auVar81._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - dStack_240;
  auVar29 = blendpd(auVar62,auVar16,2);
  dVar10 = auVar50._8_8_ + auVar50._8_8_;
  dVar55 = auVar16._0_8_ + auVar16._0_8_;
  auVar63._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar63._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  uVar27 = SUB84(dVar55,0);
  auVar42._8_4_ = uVar27;
  auVar42._0_8_ = dVar10;
  uVar57 = (undefined4)((ulonglong)dVar55 >> 0x20);
  auVar42._12_4_ = uVar57;
  dVar48 = dVar48 - local_258;
  dVar56 = dVar56 - dStack_250;
  auVar17._8_4_ = uVar27;
  auVar17._0_8_ = dVar10;
  auVar17._12_4_ = uVar57;
  dVar74 = dVar74 - local_278._s_0.X;
  auVar33._8_4_ = uVar27;
  auVar33._0_8_ = dVar10;
  auVar33._12_4_ = uVar57;
  auVar43._0_8_ =
       auVar42._8_8_ * local_198.Rotation.XY.m128d_f64[0] -
       dVar10 * local_198.Rotation.XY.m128d_f64[1];
  auVar43._8_8_ =
       auVar63._0_8_ * local_198.Rotation.XY.m128d_f64[1] -
       auVar17._8_8_ * local_198.Rotation.ZW.m128d_f64[0];
  auVar29 = blendpd(auVar33,auVar63,2);
  auVar18._8_4_ = SUB84(auVar63._8_8_,0);
  auVar18._0_8_ = auVar63._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar34._0_8_ = auVar29._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - auVar63._0_8_ * dVar58;
  auVar34._8_8_ = auVar29._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - auVar18._8_8_ * dVar9;
  auVar19._8_4_ = SUB84(auVar43._8_8_,0);
  auVar19._0_8_ = auVar43._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar29 = blendpd(auVar43,auVar34,2);
  (param_3->field0_0x0)._s_0.X =
       dVar10 * local_198.Rotation.ZW.m128d_f64[1] + local_258 + auVar19._8_8_ +
       local_198.Translation.XY.m128d_f64[0];
  (param_3->field0_0x0)._s_0.Y =
       dVar55 * local_198.Rotation.ZW.m128d_f64[1] + dStack_250 + auVar34._0_8_ +
       local_198.Translation.XY.m128d_f64[1];
  (param_3->field0_0x0)._s_0.Z =
       auVar63._0_8_ * local_198.Rotation.ZW.m128d_f64[1] + local_278._s_0.X + auVar29._0_8_ +
       local_198.Translation.ZW.m128d_f64[0];
  fVar7 = __real_322bcc77;
  dVar10 = dVar56 * dVar56 + dVar48 * dVar48 + dVar74 * dVar74;
  local_288 = (float)SQRT(dVar10);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_322bcc77 < local_288) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    uVar3 = dVar48 * dVar10;
    uVar4 = dVar56 * dVar10;
    uVar11 = dVar74 * dVar10;
  }
  uVar68 = (undefined4)((ulonglong)uVar4 >> 0x20);
  auVar20._8_4_ = uVar78;
  auVar20._0_8_ = local_198.Rotation.XY.m128d_f64[1];
  auVar20._12_4_ = uVar79;
  auVar71._0_8_ =
       dVar54 * local_198.Rotation.XY.m128d_f64[0] - local_198.Rotation.XY.m128d_f64[1] * local_258;
  auVar71._8_8_ = local_278._s_0.X * local_198.Rotation.XY.m128d_f64[1] - auVar20._8_8_ * dStack_250
  ;
  auVar82._0_8_ = auVar81._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - local_248;
  auVar82._8_8_ = auVar81._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - dStack_240;
  auVar51._8_4_ = SUB84(auVar71._8_8_,0);
  auVar51._0_8_ = auVar71._0_8_;
  auVar51._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
  dVar48 = auVar51._8_8_ + auVar51._8_8_;
  dVar56 = auVar82._0_8_ + auVar82._0_8_;
  auVar29 = blendpd(auVar71,auVar82,2);
  uVar27 = SUB84(dVar56,0);
  auVar44._8_4_ = uVar27;
  auVar44._0_8_ = dVar48;
  uVar57 = (undefined4)((ulonglong)dVar56 >> 0x20);
  auVar44._12_4_ = uVar57;
  auVar21._8_4_ = uVar27;
  auVar21._0_8_ = dVar48;
  auVar21._12_4_ = uVar57;
  auVar35._8_4_ = uVar27;
  auVar35._0_8_ = dVar48;
  auVar35._12_4_ = uVar57;
  auVar72._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar72._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  auVar29 = blendpd(auVar35,auVar72,2);
  auVar64._8_4_ = (int)uVar4;
  auVar64._0_8_ = uVar3;
  auVar64._12_4_ = uVar68;
  auVar45._0_8_ =
       auVar44._8_8_ * local_198.Rotation.XY.m128d_f64[0] -
       dVar48 * local_198.Rotation.XY.m128d_f64[1];
  auVar45._8_8_ =
       auVar72._0_8_ * local_198.Rotation.XY.m128d_f64[1] -
       auVar21._8_8_ * local_198.Rotation.ZW.m128d_f64[0];
  auVar22._8_4_ = SUB84(auVar72._8_8_,0);
  auVar22._0_8_ = auVar72._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
  auVar36._0_8_ = auVar29._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - auVar72._0_8_ * dVar58;
  auVar36._8_8_ = auVar29._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - auVar22._8_8_ * dVar9;
  auVar23._8_4_ = SUB84(auVar45._8_8_,0);
  auVar23._0_8_ = auVar45._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
  auVar29 = blendpd(auVar45,auVar36,2);
  (param_3->field0_0x0)._s_0.X =
       dVar48 * local_198.Rotation.ZW.m128d_f64[1] + local_258 + auVar23._8_8_ +
       local_198.Translation.XY.m128d_f64[0];
  (param_3->field0_0x0)._s_0.Y =
       dVar56 * local_198.Rotation.ZW.m128d_f64[1] + dStack_250 + auVar36._0_8_ +
       local_198.Translation.XY.m128d_f64[1];
  auVar24._8_4_ = uVar78;
  auVar24._0_8_ = local_198.Rotation.XY.m128d_f64[1];
  auVar24._12_4_ = uVar79;
  (param_3->field0_0x0)._s_0.Z =
       auVar72._0_8_ * local_198.Rotation.ZW.m128d_f64[1] + local_278._s_0.X + auVar29._0_8_ +
       local_198.Translation.ZW.m128d_f64[0];
  auVar37._8_4_ = (int)uVar4;
  auVar37._0_8_ = uVar3;
  auVar37._12_4_ = uVar68;
  auVar65._0_8_ =
       auVar64._8_8_ * local_198.Rotation.XY.m128d_f64[0] -
       local_198.Rotation.XY.m128d_f64[1] * (double)uVar3;
  auVar65._8_8_ =
       (double)uVar11 * local_198.Rotation.XY.m128d_f64[1] - auVar24._8_8_ * (double)uVar4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar11;
  auVar29 = blendpd(auVar37,auVar1,2);
  auVar38._0_8_ = auVar29._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - dVar58 * (double)uVar11;
  auVar38._8_8_ = auVar29._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - dVar9 * 0.0;
  auVar25._8_4_ = SUB84(auVar65._8_8_,0);
  auVar25._0_8_ = auVar65._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
  dVar48 = auVar25._8_8_ + auVar25._8_8_;
  dVar56 = auVar38._0_8_ + auVar38._0_8_;
  auVar29 = blendpd(auVar65,auVar38,2);
  auVar66._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar66._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  auVar39._8_4_ = SUB84(local_198.Rotation.ZW.m128d_f64[1],0);
  auVar39._0_8_ = local_198.Rotation.ZW.m128d_f64[1];
  auVar39._12_4_ = (int)((ulonglong)local_198.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar52._8_4_ = SUB84(dVar56,0);
  auVar52._0_8_ = dVar48;
  uVar27 = (undefined4)((ulonglong)dVar56 >> 0x20);
  auVar52._12_4_ = uVar27;
  auVar46._8_4_ = SUB84(dVar56,0);
  auVar46._0_8_ = dVar48;
  auVar46._12_4_ = uVar27;
  auVar29 = blendpd(auVar46,auVar66,2);
  auVar53._0_8_ =
       auVar52._8_8_ * local_198.Rotation.XY.m128d_f64[0] -
       local_198.Rotation.XY.m128d_f64[1] * dVar48;
  auVar53._8_8_ =
       auVar66._0_8_ * local_198.Rotation.XY.m128d_f64[1] -
       local_198.Rotation.ZW.m128d_f64[0] * dVar56;
  auVar26._8_4_ = SUB84(auVar53._8_8_,0);
  auVar26._0_8_ = auVar53._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
  auVar47._0_8_ = auVar29._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - dVar58 * auVar66._0_8_;
  auVar47._8_8_ = auVar29._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - dVar9 * auVar66._8_8_;
  auVar29 = blendpd(auVar53,auVar47,2);
  (param_4->field0_0x0)._s_0.X =
       local_198.Rotation.ZW.m128d_f64[1] * dVar48 + (double)uVar3 + auVar26._8_8_;
  (param_4->field0_0x0)._s_0.Y = auVar39._8_8_ * dVar56 + (double)uVar4 + auVar47._0_8_;
  (param_4->field0_0x0)._s_0.Z =
       local_198.Rotation.ZW.m128d_f64[1] * auVar66._0_8_ + (double)uVar11 + auVar29._0_8_;
  fVar67 = local_288;
  if (local_288 <= fVar7) {
    fVar67 = 0.0;
  }
  ~FKBoxElem(&local_208);
  return fVar67;
}

// GetFinalScaled @ 1482878f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FKBoxElem * __thiscall
FKBoxElem::GetFinalScaled
          (FKBoxElem *this,FKBoxElem *__return_storage_ptr__,TVector<double> *param_1,
          TTransform<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 extraout_EAX;
  int iVar13;
  TQuat<double> *pTVar14;
  FKBoxElem *pFVar15;
  TTransform<double> *pTVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar34;
  uint uVar35;
  uint uVar37;
  double dVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar38;
  double dVar39;
  uint uVar40;
  double dVar41;
  undefined1 auStackY_2a8 [32];
  TRotator<double> local_278;
  TQuat<double> local_258;
  double local_238;
  double dStack_230;
  double local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  TQuat<double> local_1f8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  uVar11 = _UNK_15061cc8c;
  uVar10 = _UNK_15061cc88;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_238 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_230 = (param_2->Scale3D).XY.m128d_f64[1];
  local_228 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar39 = local_238 * (param_1->field0_0x0)._s_0.X;
  dVar26 = dStack_230 * (param_1->field0_0x0)._s_0.Y;
  dVar41 = local_228 * (param_1->field0_0x0)._s_0.Z;
  if ((((double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      ((double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) {
    dVar39 = __real_3fb99999a0000000;
    dVar41 = __real_3fb99999a0000000;
    dVar26 = __real_3fb99999a0000000;
  }
  uVar38 = SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar40 = (uint)((ulonglong)dVar39 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
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
  __return_storage_ptr__->_padding_ = (longlong)&___7FKBoxElem__6B_;
  dVar39 = (this->Center).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar39;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = (this->Center).field0_0x0._s_0.Z;
  dVar39 = (this->Rotation).Yaw;
  (__return_storage_ptr__->Rotation).Pitch = (this->Rotation).Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar39;
  (__return_storage_ptr__->Rotation).Roll = (this->Rotation).Roll;
  fVar1 = this->X;
  __return_storage_ptr__->X = fVar1;
  fVar2 = this->Y;
  __return_storage_ptr__->Y = fVar2;
  fVar3 = this->Z;
  __return_storage_ptr__->X = (float)((double)CONCAT44(uVar40,uVar38) * (double)fVar1);
  __return_storage_ptr__->Y =
       (float)((double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar9,SUB84(dVar26,0) & uVar8) *
              (double)fVar2);
  __return_storage_ptr__->Z =
       (float)((double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar9,SUB84(dVar41,0) & uVar8) *
              (double)fVar3);
  local_b8.Scale3D.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_b8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_b8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_b8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_b8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_b8.Scale3D.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_b8.Scale3D.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_b8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_b8.Scale3D.ZW.m128d_f64[1] = 0.0;
  pTVar14 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_1f8);
  local_118.Translation.ZW.m128d_f64[0] = (this->Center).field0_0x0._s_0.Z;
  local_208 = pTVar14->Z;
  dStack_200 = pTVar14->W;
  local_218 = pTVar14->X;
  dStack_210 = pTVar14->Y;
  local_118.Translation.XY.m128d_f64[0] = (this->Center).field0_0x0._s_0.X;
  local_118.Translation.XY.m128d_f64[1] = (this->Center).field0_0x0._s_0.Y;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  local_118.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_118.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_178.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_118.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_178.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_178.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_178.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_178.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_178.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_118.Rotation.XY.m128d_f64[0] = local_218;
  local_118.Rotation.XY.m128d_f64[1] = dStack_210;
  local_118.Rotation.ZW.m128d_f64[0] = local_208;
  local_118.Rotation.ZW.m128d_f64[1] = dStack_200;
  UE::Math::TTransform<double>::Multiply(&local_178,&local_118,param_2);
  pTVar16 = &local_1d8;
  local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(pTVar16,&local_178,&local_b8);
  auVar6._8_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar6._0_8_ = local_1d8.Rotation.ZW.m128d_f64[0];
  auVar6._12_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._4_4_;
  auVar5._8_4_ = local_1d8.Rotation.XY.m128d_f64[1]._0_4_;
  auVar5._0_8_ = local_1d8.Rotation.XY.m128d_f64[0];
  auVar5._12_4_ = local_1d8.Rotation.XY.m128d_f64[1]._4_4_;
  uVar40 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar34 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  auVar17._0_8_ =
       (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[0]._4_4_ & uVar34,
                        local_1d8.Rotation.ZW.m128d_f64[0]._0_4_ & uVar40);
  uVar35 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  auVar17._8_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ & uVar35;
  uVar37 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  auVar17._12_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ & uVar37;
  dVar26 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar39 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ == dVar39);
  auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ == dVar26);
  uVar38 = movmskpd((int)pTVar16,auVar18);
  auVar19._0_8_ =
       (double)CONCAT44(local_1d8.Rotation.XY.m128d_f64[0]._4_4_ & uVar34,
                        local_1d8.Rotation.XY.m128d_f64[0]._0_4_ & uVar40);
  auVar19._8_4_ = local_1d8.Rotation.XY.m128d_f64[1]._0_4_ & uVar35;
  auVar19._12_4_ = local_1d8.Rotation.XY.m128d_f64[1]._4_4_ & uVar37;
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ == dVar39);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ == dVar26);
  iVar13 = movmskpd(extraout_EAX,auVar20);
  if ((uVar38 & 0x3fffffff) == 0 && iVar13 == 0) {
    auVar21._0_8_ =
         (double)CONCAT44(local_1d8.Translation.ZW.m128d_f64[0]._4_4_ & uVar34,
                          local_1d8.Translation.ZW.m128d_f64[0]._0_4_ & uVar40);
    auVar21._8_4_ = local_1d8.Translation.ZW.m128d_f64[1]._0_4_ & uVar35;
    auVar21._12_4_ = local_1d8.Translation.ZW.m128d_f64[1]._4_4_ & uVar37;
    auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ == dVar39);
    auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ == dVar26);
    auVar27._0_8_ =
         (double)CONCAT44(local_1d8.Translation.XY.m128d_f64[0]._4_4_ & uVar34,
                          local_1d8.Translation.XY.m128d_f64[0]._0_4_ & uVar40);
    auVar27._8_4_ = local_1d8.Translation.XY.m128d_f64[1]._0_4_ & uVar35;
    auVar27._12_4_ = local_1d8.Translation.XY.m128d_f64[1]._4_4_ & uVar37;
    uVar38 = movmskpd(0,auVar22);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ == dVar39);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ == dVar26);
    iVar13 = movmskpd(iVar13,auVar28);
    if ((uVar38 & 0x3fffffff) == 0 && iVar13 == 0) {
      auVar23._0_8_ =
           (double)CONCAT44(local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar34,
                            local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar40);
      auVar23._8_4_ = local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar35;
      auVar23._12_4_ = local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar37;
      auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ == dVar39);
      auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ == dVar26);
      auVar29._0_8_ =
           (double)CONCAT44(local_1d8.Scale3D.XY.m128d_f64[0]._4_4_ & uVar34,
                            local_1d8.Scale3D.XY.m128d_f64[0]._0_4_ & uVar40);
      auVar29._8_4_ = local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ & uVar35;
      auVar29._12_4_ = local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ & uVar37;
      uVar38 = movmskpd(0,auVar24);
      auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ == dVar39);
      auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ == dVar26);
      iVar13 = movmskpd(iVar13,auVar30);
      if ((uVar38 & 0x3fffffff) == 0 && iVar13 == 0) {
        dVar26 = local_1d8.Rotation.ZW.m128d_f64[0] * local_1d8.Rotation.ZW.m128d_f64[0] +
                 local_1d8.Rotation.XY.m128d_f64[0] * local_1d8.Rotation.XY.m128d_f64[0];
        dVar39 = auVar6._8_8_ * auVar6._8_8_ + auVar5._8_8_ * auVar5._8_8_;
        dVar41 = dVar39 + dVar26;
        dVar26 = dVar26 + dVar39;
        dVar39 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar41;
        dVar36 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar26;
        auVar32._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar9,SUB84(dVar39,0) & uVar8);
        auVar32._8_4_ = SUB84(dVar36,0) & uVar10;
        auVar32._12_4_ = (uint)((ulonglong)dVar36 >> 0x20) & uVar11;
        auVar31._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar32._8_8_);
        auVar31._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar32._0_8_);
        dVar41 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar41;
        dVar26 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar26;
        uVar38 = movmskpd(0,auVar31);
        auVar33._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar9,SUB84(dVar41,0) & uVar8);
        auVar33._8_4_ = SUB84(dVar26,0) & uVar10;
        auVar33._12_4_ = (uint)((ulonglong)dVar26 >> 0x20) & uVar11;
        auVar25._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar33._8_8_);
        auVar25._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] < auVar33._0_8_);
        iVar13 = movmskpd(iVar13,auVar25);
        dVar26 = local_1d8.Rotation.XY.m128d_f64[1];
        dVar39 = local_1d8.Rotation.ZW.m128d_f64[1];
        if ((uVar38 & 0x3fffffff) == 0 && iVar13 == 0) goto LAB_148287cff;
      }
    }
  }
  bVar12 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<8441893820995469421>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\BoxElem.h"
                      ,0x6d,"InTransform.IsValid()");
  dVar26 = local_1d8.Rotation.XY.m128d_f64[1];
  dVar39 = local_1d8.Rotation.ZW.m128d_f64[1];
  if (bVar12) {
    pcVar4 = (code *)swi(3);
    pFVar15 = (FKBoxElem *)(*pcVar4)();
    return pFVar15;
  }
LAB_148287cff:
  local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ = (uint)((ulonglong)dVar39 >> 0x20);
  local_1d8.Rotation.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)dVar26 >> 0x20);
  local_258.Y._4_4_ = local_1d8.Rotation.XY.m128d_f64[1]._4_4_;
  local_258.W._4_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._4_4_;
  local_258.Y._0_4_ = local_1d8.Rotation.XY.m128d_f64[1]._0_4_;
  local_258.W._0_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._0_4_;
  local_1d8.Rotation.XY.m128d_f64[1] = dVar26;
  local_1d8.Rotation.ZW.m128d_f64[1] = dVar39;
  local_258.Z = local_1d8.Rotation.ZW.m128d_f64[0];
  local_258.X = local_1d8.Rotation.XY.m128d_f64[0];
  UE::Math::TQuat<double>::Rotator(&local_258,&local_278);
  (__return_storage_ptr__->Rotation).Pitch = local_278.Pitch;
  (__return_storage_ptr__->Rotation).Yaw = local_278.Yaw;
  *(double *)&(__return_storage_ptr__->Center).field0_0x0 = local_1d8.Translation.XY.m128d_f64[0];
  *(double *)((longlong)&(__return_storage_ptr__->Center).field0_0x0 + 8) =
       local_1d8.Translation.XY.m128d_f64[1];
  *(double *)((longlong)&(__return_storage_ptr__->Center).field0_0x0 + 0x10) =
       local_1d8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).Roll = local_278.Roll;
  return __return_storage_ptr__;
}

// GetShortestDistanceToPoint @ 14828d630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FKBoxElem::GetShortestDistanceToPoint
          (FKBoxElem *this,TVector<double> *param_1,TTransform<double> *param_2)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_208 [32];
  TVector<double>_u_0 local_1e8;
  FKBoxElem local_1c8;
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
  dVar23 = local_158.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar24 = local_158.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = local_158.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar28 = local_158.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar18._8_4_ = SUB84(dVar24,0);
  auVar18._0_8_ = dVar23;
  uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
  auVar18._12_4_ = uVar25;
  dVar7 = (param_1->field0_0x0)._s_0.Z - local_158.Translation.ZW.m128d_f64[0];
  dVar20 = (param_1->field0_0x0)._s_0.X - local_158.Translation.XY.m128d_f64[0];
  dVar2 = (param_1->field0_0x0)._s_0.Y - local_158.Translation.XY.m128d_f64[1];
  uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar19 = auVar18._8_8_;
  auVar29._8_4_ = SUB84(dVar2,0);
  auVar29._0_8_ = dVar20;
  auVar29._12_4_ = uVar27;
  auVar8._8_4_ = SUB84(dVar1,0);
  auVar8._0_8_ = dVar19;
  auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar21._8_4_ = SUB84(dVar24,0);
  auVar21._0_8_ = dVar23;
  auVar21._12_4_ = uVar25;
  auVar12._8_4_ = SUB84(dVar28,0);
  auVar12._0_8_ = dVar1;
  auVar12._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  auVar22 = blendpd(auVar21,auVar12,2);
  auVar30._0_8_ = auVar29._8_8_ * dVar23 - dVar19 * dVar20;
  auVar30._8_8_ = dVar7 * dVar24 - auVar8._8_8_ * dVar2;
  auVar11._8_4_ = SUB84(dVar2,0);
  auVar11._0_8_ = dVar20;
  auVar11._12_4_ = uVar27;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar7;
  auVar12 = blendpd(auVar11,auVar5,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar1 - auVar22._0_8_ * dVar7;
  auVar13._8_8_ = auVar12._8_8_ * dVar28 - auVar22._8_8_ * 0.0;
  dVar3 = auVar30._8_8_ + auVar30._8_8_;
  dVar4 = auVar13._0_8_ + auVar13._0_8_;
  uVar25 = SUB84(dVar4,0);
  uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar12 = blendpd(auVar30,auVar13,2);
  auVar31._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar31._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  auVar16._8_4_ = uVar25;
  auVar16._0_8_ = dVar3;
  auVar16._12_4_ = uVar27;
  auVar9._8_4_ = uVar25;
  auVar9._0_8_ = dVar3;
  auVar9._12_4_ = uVar27;
  auVar14._8_4_ = uVar25;
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar27;
  auVar12 = blendpd(auVar14,auVar31,2);
  auVar17._0_8_ = auVar16._8_8_ * dVar23 - dVar3 * dVar19;
  auVar17._8_8_ = auVar31._0_8_ * dVar24 - auVar9._8_8_ * dVar1;
  auVar10._8_4_ = SUB84(auVar31._8_8_,0);
  auVar10._0_8_ = auVar31._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar15._0_8_ = auVar12._0_8_ * dVar1 - auVar31._0_8_ * auVar22._0_8_;
  auVar15._8_8_ = auVar12._8_8_ * dVar28 - auVar10._8_8_ * auVar22._8_8_;
  auVar22._8_4_ = SUB84(auVar17._8_8_,0);
  auVar22._0_8_ = auVar17._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  dVar1 = dVar3 * dVar28 + dVar20 + auVar22._8_8_;
  dVar20 = dVar4 * dVar28 + dVar2 + auVar15._0_8_;
  auVar12 = blendpd(auVar17,auVar15,2);
  dVar28 = auVar31._0_8_ * dVar28 + dVar7 + auVar12._0_8_;
  dVar28 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           (double)(local_1c8.Z * __real_3f000000);
  if (dVar28 <= 0.0) {
    dVar28 = 0.0;
  }
  dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           (double)(local_1c8.Y * __real_3f000000);
  dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (double)(local_1c8.X * __real_3f000000);
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  fVar26 = (float)SQRT(dVar1 * dVar1 + dVar20 * dVar20 + dVar28 * dVar28);
  if (fVar26 <= __real_322bcc77) {
    fVar26 = 0.0;
  }
  ~FKBoxElem(&local_1c8);
  return fVar26;
}

// ScaleElem @ 1482a8140

void __thiscall FKBoxElem::ScaleElem(FKBoxElem *this,TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (double)param_2;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = dVar3 + dVar3 + (double)this->X;
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->X = (float)dVar3;
  dVar3 = dVar2 + dVar2 + (double)this->Y;
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  this->Y = (float)dVar3;
  dVar3 = dVar1 + dVar1 + (double)this->Z;
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  this->Z = (float)dVar3;
  return;
}

// DrawElemSolid @ 1482f7120

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
FKBoxElem::DrawElemSolid
          (FKBoxElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FMaterialRenderProxy *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TMatrix<double> *pTVar3;
  undefined1 auStack_e8 [32];
  TVector<double>_u_0 local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar1 = this->X;
  uVar2 = this->Y;
  local_b8._s_0.X =
       (double)(float)uVar1 * (param_3->field0_0x0)._s_0.X * ___xmm_3fe00000000000003fe0000000000000
  ;
  local_b8._s_0.Y = (double)(float)uVar2 * (param_3->field0_0x0)._s_0.Y * _UNK_150689678;
  local_b8._s_0.Z = (double)this->Z * (param_3->field0_0x0)._s_0.Z * __real_3fe0000000000000;
  pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_98);
  DrawBox(param_1,pTVar3,(TVector<double> *)&local_b8._s_0,param_4,'\0');
  return;
}

// DrawElemSolid @ 1482f71d0

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
FKBoxElem::DrawElemSolid
          (FKBoxElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FMaterialRenderProxy *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TMatrix<double> *pTVar3;
  double dVar4;
  undefined1 auStack_e8 [32];
  TVector<double>_u_0 local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar1 = this->X;
  uVar2 = this->Y;
  dVar4 = (double)param_3 * __real_3fe0000000000000;
  local_b8._s_0.X = (double)(float)uVar1 * dVar4;
  local_b8._s_0.Y = (double)(float)uVar2 * dVar4;
  local_b8._s_0.Z = (double)this->Z * dVar4;
  pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_98);
  DrawBox(param_1,pTVar3,(TVector<double> *)&local_b8._s_0,param_4,'\0');
  return;
}

// DrawElemWire @ 1482f8fd0

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
FKBoxElem::DrawElemWire
          (FKBoxElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FColor param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double *pdVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double *pdVar22;
  longlong lVar23;
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
  undefined1 auVar35 [16];
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
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  longlong local_res20;
  undefined1 local_1c0 [16];
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  double local_138;
  double local_130;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  
  pdVar19 = &local_100;
  uVar21 = (ulonglong)param_4.field0_0x0._s_0.R;
  local_res20 = 2;
  dVar16 = (double)this->X * (param_3->field0_0x0)._s_0.X * __real_3fe0000000000000;
  dVar17 = (double)this->Y * (param_3->field0_0x0)._s_0.Y * __real_3fe0000000000000;
  dVar15 = (double)this->Z * (param_3->field0_0x0)._s_0.Z * __real_3fe0000000000000;
  uVar44 = (uint)__xmm_80000000000000008000000000000000;
  uVar43 = SUB84(dVar16,0) ^ uVar44;
  uVar46 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar45 = (uint)((ulonglong)dVar16 >> 0x20) ^ uVar46;
  local_110 = dVar16;
  local_138 = (double)CONCAT44(uVar45,uVar43);
  local_f8 = CONCAT44(uVar45,uVar43);
  dVar47 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar46,SUB84(dVar15,0) ^ uVar44);
  local_108 = dVar17;
  local_100 = dVar15;
  fVar61 = (float)((uint)param_4.field0_0x0 >> 0x18) * __real_3b808081;
  uVar44 = SUB84(dVar17,0) ^ uVar44;
  uVar46 = (uint)((ulonglong)dVar17 >> 0x20) ^ uVar46;
  local_130 = (double)CONCAT44(uVar46,uVar44);
  local_f0 = CONCAT44(uVar46,uVar44);
  local_e8 = dVar47;
  do {
    dVar1 = pdVar19[-2];
    pdVar22 = &local_100;
    dVar2 = *pdVar19;
    lVar23 = 2;
    uVar20 = (ulonglong)param_4.field0_0x0._s_0.G;
    do {
      local_190 = FLinearColor::sRGBToLinearTable[uVar21];
      dVar10 = dVar47 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar12 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      local_18c = FLinearColor::sRGBToLinearTable[uVar20];
      dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
      local_188 = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.B];
      dVar6 = (param_2->Scale3D).XY.m128d_f64[0] * dVar1;
      dVar7 = (param_2->Scale3D).XY.m128d_f64[1] * pdVar22[-1];
      uVar76 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar77._8_4_ = SUB84(dVar7,0);
      auVar77._0_8_ = dVar6;
      auVar77._12_4_ = uVar76;
      auVar62 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar63 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar5 = auVar63._0_8_;
      auVar48 = blendpd(auVar25,auVar63,2);
      auVar78._0_8_ = auVar77._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar6;
      auVar78._8_8_ = dVar10 * auVar25._8_8_ - dVar5 * dVar7;
      auVar24._8_4_ = SUB84(dVar7,0);
      auVar24._0_8_ = dVar6;
      auVar24._12_4_ = uVar76;
      auVar25._8_4_ = SUB84(dVar12,0);
      auVar25._0_8_ = dVar10;
      auVar25._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar25 = blendpd(auVar24,auVar25,2);
      dVar3 = auVar63._8_8_;
      auVar26._0_8_ = auVar25._0_8_ * dVar5 - auVar48._0_8_ * dVar10;
      auVar26._8_8_ = auVar25._8_8_ * dVar3 - auVar48._8_8_ * dVar12;
      auVar25 = blendpd(auVar78,auVar26,2);
      auVar79._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar79._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      dVar12 = auVar78._8_8_ + auVar78._8_8_;
      dVar4 = auVar26._0_8_ + auVar26._0_8_;
      uVar76 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar64._8_4_ = SUB84(dVar4,0);
      auVar64._0_8_ = dVar12;
      auVar64._12_4_ = uVar76;
      auVar49._8_4_ = SUB84(dVar4,0);
      auVar49._0_8_ = dVar12;
      auVar49._12_4_ = uVar76;
      auVar25 = blendpd(auVar49,auVar79,2);
      auVar65._0_8_ = auVar64._8_8_ * auVar62._0_8_ - auVar62._8_8_ * dVar12;
      auVar65._8_8_ = auVar79._0_8_ * auVar62._8_8_ - dVar5 * dVar4;
      auVar27._8_4_ = SUB84(auVar65._8_8_,0);
      auVar27._0_8_ = auVar65._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
      auVar62 = blendpd(auVar62,auVar63,2);
      auVar50._0_8_ = auVar25._0_8_ * dVar5 - auVar62._0_8_ * auVar79._0_8_;
      auVar50._8_8_ = auVar25._8_8_ * dVar3 - auVar62._8_8_ * auVar79._8_8_;
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      dVar11 = dVar15 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar13 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar4 = dVar4 * dVar14 + dVar7 + auVar50._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      auVar62 = blendpd(auVar65,auVar50,2);
      local_1b0 = auVar79._0_8_ * dVar14 + dVar10 + auVar62._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      dVar7 = dVar1 * (param_2->Scale3D).XY.m128d_f64[0];
      dVar10 = pdVar22[-1] * (param_2->Scale3D).XY.m128d_f64[1];
      uVar76 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar80._8_4_ = SUB84(dVar10,0);
      auVar80._0_8_ = dVar7;
      auVar80._12_4_ = uVar76;
      local_1c0._8_4_ = SUB84(dVar4,0);
      local_1c0._0_8_ =
           dVar12 * dVar14 + dVar6 + auVar27._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_1c0._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar81._0_8_ = auVar80._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar7;
      auVar81._8_8_ = dVar11 * auVar25._8_8_ - dVar5 * dVar10;
      auVar28._8_4_ = SUB84(dVar10,0);
      auVar28._0_8_ = dVar7;
      auVar28._12_4_ = uVar76;
      auVar62 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar48._8_4_ = SUB84(dVar13,0);
      auVar48._0_8_ = dVar11;
      auVar48._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar48 = blendpd(auVar28,auVar48,2);
      auVar25 = blendpd(auVar25,auVar63,2);
      auVar29._0_8_ = auVar48._0_8_ * dVar5 - auVar25._0_8_ * dVar11;
      auVar29._8_8_ = auVar48._8_8_ * dVar3 - auVar25._8_8_ * dVar13;
      auVar25 = blendpd(auVar81,auVar29,2);
      dVar12 = auVar81._8_8_ + auVar81._8_8_;
      dVar4 = auVar29._0_8_ + auVar29._0_8_;
      uVar76 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar82._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar82._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar66._8_4_ = SUB84(dVar4,0);
      auVar66._0_8_ = dVar12;
      auVar66._12_4_ = uVar76;
      auVar51._8_4_ = SUB84(dVar4,0);
      auVar51._0_8_ = dVar12;
      auVar51._12_4_ = uVar76;
      auVar25 = blendpd(auVar51,auVar82,2);
      auVar67._0_8_ = auVar66._8_8_ * auVar62._0_8_ - auVar62._8_8_ * dVar12;
      auVar67._8_8_ = auVar82._0_8_ * auVar62._8_8_ - dVar5 * dVar4;
      auVar30._8_4_ = SUB84(auVar67._8_8_,0);
      auVar30._0_8_ = auVar67._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
      auVar62 = blendpd(auVar62,auVar63,2);
      auVar52._0_8_ = auVar25._0_8_ * dVar5 - auVar62._0_8_ * auVar82._0_8_;
      auVar52._8_8_ = auVar25._8_8_ * dVar3 - auVar62._8_8_ * auVar82._8_8_;
      dVar5 = dVar4 * dVar3 + dVar10 + auVar52._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      auVar25 = blendpd(auVar67,auVar52,2);
      local_198 = auVar82._0_8_ * dVar3 + dVar11 + auVar25._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      local_1a8._8_4_ = SUB84(dVar5,0);
      local_1a8._0_8_ =
           dVar12 * dVar3 + dVar7 + auVar30._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_1a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_184 = fVar61;
      (**(code **)(param_1->_padding_ + 0x30))
                (param_1,local_1a8,local_1c0,&local_190,0,0,0,0,dVar47);
      local_118 = *pdVar22;
      local_180 = FLinearColor::sRGBToLinearTable[uVar21];
      dVar11 = local_118 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar12 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      local_17c = FLinearColor::sRGBToLinearTable[uVar20];
      dVar18 = (param_2->Rotation).ZW.m128d_f64[1];
      local_178 = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.B];
      dVar6 = (param_2->Scale3D).XY.m128d_f64[0] * local_138;
      dVar7 = (param_2->Scale3D).XY.m128d_f64[1] * pdVar19[-1];
      uVar76 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar83._8_4_ = SUB84(dVar7,0);
      auVar83._0_8_ = dVar6;
      auVar83._12_4_ = uVar76;
      auVar62 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar5 = auVar62._0_8_;
      auVar84._0_8_ = auVar83._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar6;
      auVar84._8_8_ = dVar11 * auVar25._8_8_ - dVar5 * dVar7;
      auVar31._8_4_ = SUB84(dVar7,0);
      auVar31._0_8_ = dVar6;
      auVar31._12_4_ = uVar76;
      auVar63._8_4_ = SUB84(dVar12,0);
      auVar63._0_8_ = dVar11;
      auVar63._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar48 = blendpd(auVar31,auVar63,2);
      dVar3 = auVar62._8_8_;
      auVar63 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar25 = blendpd(auVar25,auVar62,2);
      auVar32._0_8_ = auVar48._0_8_ * dVar5 - auVar25._0_8_ * dVar11;
      auVar32._8_8_ = auVar48._8_8_ * dVar3 - auVar25._8_8_ * dVar12;
      auVar25 = blendpd(auVar84,auVar32,2);
      dVar12 = auVar84._8_8_ + auVar84._8_8_;
      dVar4 = auVar32._0_8_ + auVar32._0_8_;
      uVar76 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar85._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar85._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar68._8_4_ = SUB84(dVar4,0);
      auVar68._0_8_ = dVar12;
      auVar68._12_4_ = uVar76;
      auVar53._8_4_ = SUB84(dVar4,0);
      auVar53._0_8_ = dVar12;
      auVar53._12_4_ = uVar76;
      auVar25 = blendpd(auVar53,auVar85,2);
      auVar69._0_8_ = auVar68._8_8_ * auVar63._0_8_ - auVar63._8_8_ * dVar12;
      auVar69._8_8_ = auVar85._0_8_ * auVar63._8_8_ - dVar5 * dVar4;
      auVar33._8_4_ = SUB84(auVar69._8_8_,0);
      auVar33._0_8_ = auVar69._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      auVar63 = blendpd(auVar63,auVar62,2);
      auVar54._0_8_ = auVar25._0_8_ * dVar5 - auVar63._0_8_ * auVar85._0_8_;
      auVar54._8_8_ = auVar25._8_8_ * dVar3 - auVar63._8_8_ * auVar85._8_8_;
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar48 = blendpd(auVar69,auVar54,2);
      dVar4 = dVar4 * dVar18 + dVar7 + auVar54._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      dVar13 = local_118 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar14 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar7 = (param_2->Scale3D).XY.m128d_f64[0] * dVar16;
      dVar10 = (param_2->Scale3D).XY.m128d_f64[1] * pdVar19[-1];
      uVar76 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar63 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      local_1a8._8_4_ = SUB84(dVar4,0);
      local_1a8._0_8_ =
           dVar12 * dVar18 + dVar6 + auVar33._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_198 = auVar85._0_8_ * dVar18 + dVar11 + auVar48._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      auVar48 = blendpd(auVar63,auVar62,2);
      auVar86._8_4_ = SUB84(dVar10,0);
      auVar86._0_8_ = dVar7;
      auVar86._12_4_ = uVar76;
      auVar87._0_8_ = auVar86._8_8_ * auVar63._0_8_ - auVar63._8_8_ * dVar7;
      auVar87._8_8_ = dVar13 * auVar63._8_8_ - dVar5 * dVar10;
      auVar34._8_4_ = SUB84(dVar10,0);
      auVar34._0_8_ = dVar7;
      auVar34._12_4_ = uVar76;
      auVar8._8_4_ = SUB84(dVar14,0);
      auVar8._0_8_ = dVar13;
      auVar8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar63 = blendpd(auVar34,auVar8,2);
      auVar35._0_8_ = auVar63._0_8_ * dVar5 - auVar48._0_8_ * dVar13;
      auVar35._8_8_ = auVar63._8_8_ * dVar3 - auVar48._8_8_ * dVar14;
      dVar12 = auVar87._8_8_ + auVar87._8_8_;
      dVar4 = auVar35._0_8_ + auVar35._0_8_;
      uVar76 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar63 = blendpd(auVar87,auVar35,2);
      auVar70._8_4_ = SUB84(dVar4,0);
      auVar70._0_8_ = dVar12;
      auVar70._12_4_ = uVar76;
      auVar55._8_4_ = SUB84(dVar4,0);
      auVar55._0_8_ = dVar12;
      auVar55._12_4_ = uVar76;
      auVar88._0_8_ = auVar63._0_8_ + auVar63._0_8_;
      auVar88._8_8_ = auVar63._8_8_ + auVar63._8_8_;
      auVar63 = blendpd(auVar55,auVar88,2);
      auVar71._0_8_ = auVar70._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar12;
      auVar71._8_8_ = auVar88._0_8_ * auVar25._8_8_ - dVar5 * dVar4;
      auVar25 = blendpd(auVar25,auVar62,2);
      auVar56._0_8_ = auVar63._0_8_ * dVar5 - auVar25._0_8_ * auVar88._0_8_;
      auVar56._8_8_ = auVar63._8_8_ * dVar3 - auVar25._8_8_ * auVar88._8_8_;
      auVar36._8_4_ = SUB84(auVar71._8_8_,0);
      auVar36._0_8_ = auVar71._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      dVar5 = dVar4 * dVar3 + dVar10 + auVar56._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      auVar25 = blendpd(auVar71,auVar56,2);
      local_1b0 = auVar88._0_8_ * dVar3 + dVar13 + auVar25._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      local_1c0._8_4_ = SUB84(dVar5,0);
      local_1c0._0_8_ =
           dVar12 * dVar3 + dVar7 + auVar36._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_1c0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_174 = fVar61;
      (**(code **)(param_1->_padding_ + 0x30))(param_1,local_1c0,local_1a8,&local_180,0,0,0,0);
      local_170 = FLinearColor::sRGBToLinearTable[uVar21];
      local_16c = FLinearColor::sRGBToLinearTable[uVar20];
      dVar10 = dVar2 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar12 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
      local_168 = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.B];
      dVar6 = pdVar22[-2] * (param_2->Scale3D).XY.m128d_f64[0];
      dVar7 = local_130 * (param_2->Scale3D).XY.m128d_f64[1];
      uVar76 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar62 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar63 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      auVar89._8_4_ = SUB84(dVar7,0);
      auVar89._0_8_ = dVar6;
      auVar89._12_4_ = uVar76;
      dVar5 = auVar63._0_8_;
      auVar48 = blendpd(auVar62,auVar63,2);
      auVar90._0_8_ = auVar89._8_8_ * auVar62._0_8_ - auVar62._8_8_ * dVar6;
      auVar90._8_8_ = dVar10 * auVar62._8_8_ - dVar5 * dVar7;
      auVar37._8_4_ = SUB84(dVar7,0);
      auVar37._0_8_ = dVar6;
      auVar37._12_4_ = uVar76;
      auVar62._8_4_ = SUB84(dVar12,0);
      auVar62._0_8_ = dVar10;
      auVar62._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar62 = blendpd(auVar37,auVar62,2);
      dVar3 = auVar63._8_8_;
      auVar38._0_8_ = auVar62._0_8_ * dVar5 - auVar48._0_8_ * dVar10;
      auVar38._8_8_ = auVar62._8_8_ * dVar3 - auVar48._8_8_ * dVar12;
      auVar62 = blendpd(auVar90,auVar38,2);
      dVar12 = auVar90._8_8_ + auVar90._8_8_;
      dVar4 = auVar38._0_8_ + auVar38._0_8_;
      uVar76 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar91._0_8_ = auVar62._0_8_ + auVar62._0_8_;
      auVar91._8_8_ = auVar62._8_8_ + auVar62._8_8_;
      auVar72._8_4_ = SUB84(dVar4,0);
      auVar72._0_8_ = dVar12;
      auVar72._12_4_ = uVar76;
      auVar57._8_4_ = SUB84(dVar4,0);
      auVar57._0_8_ = dVar12;
      auVar57._12_4_ = uVar76;
      auVar62 = blendpd(auVar57,auVar91,2);
      auVar73._0_8_ = auVar72._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar12;
      auVar73._8_8_ = auVar91._0_8_ * auVar25._8_8_ - dVar5 * dVar4;
      auVar25 = blendpd(auVar25,auVar63,2);
      auVar39._8_4_ = SUB84(auVar73._8_8_,0);
      auVar39._0_8_ = auVar73._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
      auVar58._0_8_ = auVar62._0_8_ * dVar5 - auVar25._0_8_ * auVar91._0_8_;
      auVar58._8_8_ = auVar62._8_8_ * dVar3 - auVar25._8_8_ * auVar91._8_8_;
      dVar4 = dVar4 * dVar11 + dVar7 + auVar58._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      local_1a8._8_4_ = SUB84(dVar4,0);
      local_1a8._0_8_ =
           dVar12 * dVar11 + dVar6 + auVar39._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar62 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar48 = blendpd(auVar73,auVar58,2);
      local_198 = auVar91._0_8_ * dVar11 + dVar10 + auVar48._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      dVar6 = pdVar22[-2] * (param_2->Scale3D).XY.m128d_f64[0];
      dVar7 = dVar17 * (param_2->Scale3D).XY.m128d_f64[1];
      uVar76 = (undefined4)((ulonglong)dVar7 >> 0x20);
      dVar10 = dVar2 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar12 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar48 = blendpd(auVar25,auVar63,2);
      auVar92._8_4_ = SUB84(dVar7,0);
      auVar92._0_8_ = dVar6;
      auVar92._12_4_ = uVar76;
      auVar93._0_8_ = auVar92._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar6;
      auVar93._8_8_ = dVar10 * auVar25._8_8_ - dVar5 * dVar7;
      auVar40._8_4_ = SUB84(dVar7,0);
      auVar40._0_8_ = dVar6;
      auVar40._12_4_ = uVar76;
      auVar9._8_4_ = SUB84(dVar12,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar25 = blendpd(auVar40,auVar9,2);
      auVar41._0_8_ = auVar25._0_8_ * dVar5 - auVar48._0_8_ * dVar10;
      auVar41._8_8_ = auVar25._8_8_ * dVar3 - auVar48._8_8_ * dVar12;
      auVar25 = blendpd(auVar93,auVar41,2);
      dVar12 = auVar93._8_8_ + auVar93._8_8_;
      dVar4 = auVar41._0_8_ + auVar41._0_8_;
      uVar76 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar94._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar94._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar74._8_4_ = SUB84(dVar4,0);
      auVar74._0_8_ = dVar12;
      auVar74._12_4_ = uVar76;
      auVar59._8_4_ = SUB84(dVar4,0);
      auVar59._0_8_ = dVar12;
      auVar59._12_4_ = uVar76;
      auVar25 = blendpd(auVar59,auVar94,2);
      auVar75._0_8_ = auVar74._8_8_ * auVar62._0_8_ - auVar62._8_8_ * dVar12;
      auVar75._8_8_ = auVar94._0_8_ * auVar62._8_8_ - dVar5 * dVar4;
      auVar42._8_4_ = SUB84(auVar75._8_8_,0);
      auVar42._0_8_ = auVar75._0_8_;
      auVar42._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
      auVar62 = blendpd(auVar62,auVar63,2);
      auVar60._0_8_ = auVar25._0_8_ * dVar5 - auVar62._0_8_ * auVar94._0_8_;
      auVar60._8_8_ = auVar25._8_8_ * dVar3 - auVar62._8_8_ * auVar94._8_8_;
      dVar5 = dVar4 * dVar3 + dVar7 + auVar60._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      auVar25 = blendpd(auVar75,auVar60,2);
      local_1b0 = auVar94._0_8_ * dVar3 + dVar10 + auVar25._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      local_1c0._8_4_ = SUB84(dVar5,0);
      local_1c0._0_8_ =
           dVar12 * dVar3 + dVar6 + auVar42._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_1c0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_164 = fVar61;
      local_118 = dVar2;
      (**(code **)(param_1->_padding_ + 0x30))(param_1,local_1c0,local_1a8,&local_170,0,0,0,0);
      pdVar22 = pdVar22 + 3;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    pdVar19 = pdVar19 + 3;
    local_res20 = local_res20 + -1;
  } while (local_res20 != 0);
  return;
}

// DrawElemWire @ 1482f98f0

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
FKBoxElem::DrawElemWire
          (FKBoxElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
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

// GetElemSolid @ 148308ce0

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
FKBoxElem::GetElemSolid
          (FKBoxElem *this,TTransform<double> *param_1,TVector<double> *param_2,
          FMaterialRenderProxy *param_3,int param_4,FMeshElementCollector *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TMatrix<double> *pTVar3;
  undefined1 auStackY_f8 [32];
  TVector<double>_u_0 local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar1 = this->X;
  uVar2 = this->Y;
  local_b8._s_0.X =
       (double)(float)uVar1 * (param_2->field0_0x0)._s_0.X * ___xmm_3fe00000000000003fe0000000000000
  ;
  local_b8._s_0.Y = (double)(float)uVar2 * (param_2->field0_0x0)._s_0.Y * _UNK_150689678;
  local_b8._s_0.Z = (double)this->Z * (param_2->field0_0x0)._s_0.Z * __real_3fe0000000000000;
  pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_98);
  GetBoxMesh(pTVar3,(TVector<double> *)&local_b8._s_0,param_3,'\0',param_4,param_5,(HHitProxy *)0x0)
  ;
  return;
}

