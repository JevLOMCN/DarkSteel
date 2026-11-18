// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// GetAdjustedComponentToWorld @ 14969fd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UE::GizmoRenderingUtil::FConstantViewRelativeTransformAdjuster::GetAdjustedComponentToWorld
          (FConstantViewRelativeTransformAdjuster *this,TTransform<double> *__return_storage_ptr__,
          ISceneViewInterface *param_1,TTransform<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  __m128 _Var5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  double dVar9;
  undefined1 auStackY_1d8 [32];
  TVector<double>_u_0 local_1a8;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  TVector<double>_u_0 local_170;
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [32];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar6 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_140);
  pTVar7 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x20))(param_1,local_128);
  pTVar8 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_158);
  local_170._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_170._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_170._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  UE::Geometry::TFrame3<double>::TFrame3<double>
            ((TFrame3<double> *)&local_1a8._s_0,(TVector<double> *)&local_170._s_0,pTVar8,pTVar7,
             pTVar6);
  local_108.Rotation.XY.m128d_f64[0] = (this->ViewRelativeTransform).Rotation.XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1] = (this->ViewRelativeTransform).Rotation.XY.m128d_f64[1];
  local_108.Rotation.ZW.m128d_f64[0] = (this->ViewRelativeTransform).Rotation.ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1] = (this->ViewRelativeTransform).Rotation.ZW.m128d_f64[1];
  local_108.Translation.XY.m128d_f64[0] = (this->ViewRelativeTransform).Translation.XY.m128d_f64[0];
  local_108.Translation.XY.m128d_f64[1] = (this->ViewRelativeTransform).Translation.XY.m128d_f64[1];
  local_108.Translation.ZW.m128d_f64[0] = (this->ViewRelativeTransform).Translation.ZW.m128d_f64[0];
  local_108.Translation.ZW.m128d_f64[1] = (this->ViewRelativeTransform).Translation.ZW.m128d_f64[1];
  local_108.Scale3D.XY.m128d_f64 = *&(this->ViewRelativeTransform).Scale3D.XY.m128d_f64;
  local_108.Scale3D.ZW.m128d_f64[0] = (this->ViewRelativeTransform).Scale3D.ZW.m128d_f64[0];
  local_108.Scale3D.ZW.m128d_f64[1] = (this->ViewRelativeTransform).Scale3D.ZW.m128d_f64[1];
  if (this->bKeepConstantViewSize != false) {
    dVar9 = ViewBasedTransformAdjustersLocals::GetComponentToGizmoScaling(param_1,param_2);
    dVar4 = local_108.Scale3D.XY.m128d_f64[1] * dVar9;
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
    local_108.Scale3D.XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0] * dVar9;
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0] * dVar9;
    local_108.Scale3D.ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1] * 0.0;
    local_108.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0] * dVar9;
    local_108.Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1] * dVar9;
    local_108.Translation.ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0] * dVar9;
    local_108.Translation.ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1] * 0.0;
  }
  local_a8.Rotation.XY.m128d_f64[0] = local_190;
  local_a8.Rotation.XY.m128d_f64[1] = dStack_188;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Translation.XY.m128d_f64[0] = local_1a8._s_0.X;
  local_a8.Translation.XY.m128d_f64[1] = local_1a8._s_0.Y;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_a8.Rotation.ZW.m128d_f64[0] = local_180;
  local_a8.Rotation.ZW.m128d_f64[1] = dStack_178;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Translation.ZW.m128d_f64[0] = local_1a8._s_0.Z;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  _Var5 = GlobalVectorConstants::FloatZero;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)_Var5.m128_f32[2];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)_Var5.m128_f32[3];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_108,&local_a8);
  return __return_storage_ptr__;
}

// GetViewIndependentBounds @ 1496aaa50

TBoxSphereBounds<double,double> * __thiscall
UE::GizmoRenderingUtil::FConstantViewRelativeTransformAdjuster::GetViewIndependentBounds
          (FConstantViewRelativeTransformAdjuster *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  
  uVar6 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.X;
  uVar5 = ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.Z;
  uVar4 = ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.Y;
  if (this->bKeepConstantViewSize != false) {
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         ViewBasedTransformAdjustersLocals::InfiniteBounds.Origin.field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar4;
    uVar7 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.Z;
    uVar4 = ViewBasedTransformAdjustersLocals::InfiniteBounds.BoxExtent.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)uVar5;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)uVar6;
    dVar8 = ViewBasedTransformAdjustersLocals::InfiniteBounds.SphereRadius;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = (double)uVar7;
    __return_storage_ptr__->SphereRadius = dVar8;
    return __return_storage_ptr__;
  }
  dVar8 = (param_2->BoxExtent).field0_0x0._s_0.Y;
  dVar1 = (param_2->BoxExtent).field0_0x0._s_0.X;
  dVar2 = (param_2->BoxExtent).field0_0x0._s_0.Z;
  dVar3 = (param_2->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  auVar9 = sqrtpd(in_XMM3,auVar9);
  dVar8 = auVar9._0_8_;
  if (auVar9._0_8_ <= param_2->SphereRadius) {
    dVar8 = param_2->SphereRadius;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
  __return_storage_ptr__->SphereRadius = dVar8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar8;
  return __return_storage_ptr__;
}

