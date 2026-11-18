// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 14962a4b0

UClass * __cdecl UGizmoElementArc::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementArc.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementArc",
               &Z_Registration_Info_UClass_UGizmoElementArc.InnerSingleton,
               StaticRegisterNativesUGizmoElementArc,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementArc>,
               InternalVTableHelperCtorCaller<UGizmoElementArc>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementArc.InnerSingleton;
}

// UGizmoElementArc @ 14963ad40

UGizmoElementArc * __thiscall
UGizmoElementArc::UGizmoElementArc(UGizmoElementArc *this,FVTableHelper *param_1)

{
  UGizmoElementCircleBase::UGizmoElementCircleBase((UGizmoElementCircleBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementArc__6B_;
  this->InnerRadius = 5.0;
  return this;
}

// UGizmoElementArc @ 14963ad80

UGizmoElementArc * __thiscall UGizmoElementArc::UGizmoElementArc(UGizmoElementArc *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UGizmoElementCircleBase::UGizmoElementCircleBase((UGizmoElementCircleBase *)this,pFVar1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UGizmoElementArc__6B_;
  this->InnerRadius = 5.0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  return this;
}

// ~UGizmoElementArc @ 14963e9f0

void __thiscall UGizmoElementArc::~UGizmoElementArc(UGizmoElementArc *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementArc__6B_;
  UGizmoElementCircleBase::~UGizmoElementCircleBase((UGizmoElementCircleBase *)this);
  return;
}

// GetInnerRadius @ 1496550a0

double __thiscall UGizmoElementArc::GetInnerRadius(UGizmoElementArc *this)

{
  return this->InnerRadius;
}

// GetPrivateStaticClass @ 149656750

UClass * __cdecl UGizmoElementArc::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementArc.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementArc",
               &Z_Registration_Info_UClass_UGizmoElementArc.InnerSingleton,
               StaticRegisterNativesUGizmoElementArc,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementArc>,
               InternalVTableHelperCtorCaller<UGizmoElementArc>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementArc.InnerSingleton;
}

// LineTrace @ 14965a700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FInputRayHit * __thiscall
UGizmoElementArc::LineTrace
          (UGizmoElementArc *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1,
          FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  bool bVar7;
  TVector<double> *pTVar8;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_228 [32];
  double local_208;
  double dStack_200;
  undefined8 local_1f8;
  double local_1f0;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double> local_198;
  undefined8 local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  void *local_148;
  FWeakObjectPtr FStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_138 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_130 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_128 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_120 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_118 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_110 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_f8 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_f0 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_108 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_100 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_d8 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_d4 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_d0._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_d0._1_1_ = param_2->HitSortType;
  uStack_d0._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_cc = *(undefined4 *)&param_2->field_0x6c;
  local_e8 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_e0 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
  cVar6 = (**(code **)(this->_padding_ + 0x6a8))(local_d8,param_1,&this->_padding_,&local_138);
  if (cVar6 == '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_1f0 = (double)*(float *)&this->_padding_ * (double)CONCAT44(uStack_d4,local_d8);
  auVar39._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_e8;
  auVar39._8_8_ = dStack_e0 * 0.0;
  dVar2 = local_f8 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar37 = dStack_f0 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar31 = (undefined4)((ulonglong)dVar37 >> 0x20);
  auVar33._8_4_ = SUB84(dVar37,0);
  auVar33._0_8_ = dVar2;
  auVar33._12_4_ = uVar31;
  auVar4._8_8_ = dStack_130;
  auVar4._0_8_ = local_138;
  auVar9._8_4_ = SUB84(dVar37,0);
  auVar9._0_8_ = dVar2;
  auVar9._12_4_ = uVar31;
  auVar10 = blendpd(auVar9,auVar39,2);
  auVar5._8_8_ = dStack_120;
  auVar5._0_8_ = local_128;
  auVar47 = blendpd(auVar4,auVar5,2);
  auVar34._0_8_ = auVar33._8_8_ * local_138 - dStack_130 * dVar2;
  auVar34._8_8_ = auVar39._0_8_ * dStack_130 - local_128 * dVar37;
  dVar42 = auVar47._0_8_;
  dVar45 = auVar47._8_8_;
  auVar11._0_8_ = auVar10._0_8_ * local_128 - dVar42 * auVar39._0_8_;
  auVar11._8_8_ = auVar10._8_8_ * dStack_120 - dVar45 * auVar39._8_8_;
  auVar10 = blendpd(auVar34,auVar11,2);
  dVar38 = auVar34._8_8_ + auVar34._8_8_;
  dVar22 = auVar11._0_8_ + auVar11._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar22 >> 0x20);
  auVar35._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar35._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  auVar24._8_4_ = SUB84(dVar22,0);
  auVar24._0_8_ = dVar38;
  auVar24._12_4_ = uVar31;
  auVar12._8_4_ = SUB84(dVar22,0);
  auVar12._0_8_ = dVar38;
  auVar12._12_4_ = uVar31;
  auVar10 = blendpd(auVar12,auVar35,2);
  dVar32 = (double)this->_padding_;
  auVar25._0_8_ = auVar24._8_8_ * local_138 - dVar38 * dStack_130;
  auVar25._8_8_ = auVar35._0_8_ * dStack_130 - dVar22 * local_128;
  auVar13._0_8_ = auVar10._0_8_ * local_128 - auVar35._0_8_ * dVar42;
  auVar13._8_8_ = auVar10._8_8_ * dStack_120 - auVar35._8_8_ * dVar45;
  auVar47 = blendpd(auVar25,auVar13,2);
  dVar22 = dVar22 * dStack_120 + dVar37 + auVar13._0_8_ + dStack_110;
  local_1c8._8_4_ = SUB84(dVar22,0);
  local_1c8._s_0.X = dVar38 * dStack_120 + dVar2 + auVar25._8_8_ + local_118;
  local_1c8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar10._0_8_ = this->_padding_;
  auVar10._8_8_ = this->_padding_;
  local_1c8._s_0.Z = auVar35._0_8_ * dStack_120 + auVar39._0_8_ + auVar47._0_8_ + local_108;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar32;
  auVar47 = blendpd(auVar10,auVar16,2);
  auVar43._0_8_ = (double)auVar10._8_8_ * local_138 - (double)auVar10._0_8_ * dStack_130;
  auVar43._8_8_ = dVar32 * dStack_130 - (double)auVar10._8_8_ * local_128;
  auVar14._0_8_ = auVar47._0_8_ * local_128 - dVar32 * dVar42;
  auVar14._8_8_ = auVar47._8_8_ * dStack_120 - dVar45 * 0.0;
  auVar47 = blendpd(auVar43,auVar14,2);
  auVar44._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar44._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  dVar38 = auVar43._8_8_ + auVar43._8_8_;
  dVar2 = auVar14._0_8_ + auVar14._0_8_;
  uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar26._8_4_ = SUB84(dVar2,0);
  auVar26._0_8_ = dVar38;
  auVar26._12_4_ = uVar31;
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar38;
  auVar15._12_4_ = uVar31;
  auVar16 = blendpd(auVar15,auVar44,2);
  auVar27._0_8_ = auVar26._8_8_ * local_138 - dVar38 * dStack_130;
  auVar27._8_8_ = auVar44._0_8_ * dStack_130 - dVar2 * local_128;
  auVar47._0_8_ = this->_padding_;
  auVar47._8_8_ = this->_padding_;
  auVar17._0_8_ = auVar16._0_8_ * local_128 - auVar44._0_8_ * dVar42;
  auVar17._8_8_ = auVar16._8_8_ * dStack_120 - auVar44._8_8_ * dVar45;
  auVar16 = blendpd(auVar27,auVar17,2);
  dVar22 = dVar38 * dStack_120 + (double)auVar10._0_8_ + auVar27._8_8_;
  dVar2 = dVar2 * dStack_120 + (double)auVar10._8_8_ + auVar17._0_8_;
  dVar38 = (double)this->_padding_;
  local_1f8 = auVar44._0_8_ * dStack_120 + dVar32 + auVar16._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar38;
  auVar10 = blendpd(auVar47,auVar1,2);
  auVar40._0_8_ = (double)auVar47._8_8_ * local_138 - (double)auVar47._0_8_ * dStack_130;
  auVar40._8_8_ = dVar38 * dStack_130 - (double)auVar47._8_8_ * local_128;
  auVar36._8_4_ = SUB84(auVar40._8_8_,0);
  auVar36._0_8_ = auVar40._0_8_;
  auVar36._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
  auVar18._0_8_ = auVar10._0_8_ * local_128 - dVar38 * dVar42;
  auVar18._8_8_ = auVar10._8_8_ * dStack_120 - dVar45 * 0.0;
  unique0x10000a2f = SUB84(dVar2,0);
  local_208 = dVar22;
  unique0x10000a33 = (int)((ulonglong)dVar2 >> 0x20);
  auVar10 = blendpd(auVar40,auVar18,2);
  auVar41._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar41._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  dVar32 = auVar36._8_8_ + auVar36._8_8_;
  dVar37 = auVar18._0_8_ + auVar18._0_8_;
  auVar28._8_4_ = SUB84(dVar37,0);
  auVar28._0_8_ = dVar32;
  uVar31 = (undefined4)((ulonglong)dVar37 >> 0x20);
  auVar28._12_4_ = uVar31;
  auVar19._8_4_ = SUB84(dVar37,0);
  auVar19._0_8_ = dVar32;
  auVar19._12_4_ = uVar31;
  auVar10 = blendpd(auVar19,auVar41,2);
  auVar29._0_8_ = auVar28._8_8_ * local_138 - dVar32 * dStack_130;
  auVar29._8_8_ = auVar41._0_8_ * dStack_130 - dVar37 * local_128;
  auVar20._0_8_ = auVar10._0_8_ * local_128 - auVar41._0_8_ * dVar42;
  auVar20._8_8_ = auVar10._8_8_ * dStack_120 - auVar41._8_8_ * dVar45;
  auVar10 = blendpd(auVar29,auVar20,2);
  local_1b0._s_0.Z = auVar41._0_8_ * dStack_120 + dVar38 + auVar10._0_8_;
  dVar32 = dVar32 * dStack_120 + (double)auVar47._0_8_ + auVar29._8_8_;
  dVar38 = dVar37 * dStack_120 + (double)auVar47._8_8_ + auVar20._0_8_;
  auVar3._4_8_ = auVar10._8_8_;
  auVar3._0_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar30._0_8_ = auVar3._0_8_ << 0x20;
  auVar30._8_4_ = SUB84(dVar38,0);
  auVar30._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  local_1e8._s_0.X = local_1b0._s_0.Z * dVar2 - (double)local_1f8 * auVar30._8_8_;
  local_1e8._s_0.Y = (double)local_1f8 * dVar32 - local_1b0._s_0.Z * dVar22;
  local_1e8._s_0.Z = dVar22 * auVar30._8_8_ - dVar2 * dVar32;
  bVar7 = UGizmoElementCircleBase::IsPartial
                    ((UGizmoElementCircleBase *)this,param_1,(TVector<double> *)&local_1c8._s_0,
                     (TVector<double> *)&local_1e8._s_0);
  dVar32 = __real_3e45798ee2308c3a;
  local_1d0 = (double)this->_padding_ - (double)this->_padding_;
  if ((!bVar7) || (__real_3e45798ee2308c3a < local_1d0)) {
    auVar46._8_8_ = 0;
    auVar46._0_8_ = local_1c8._s_0.X;
    dVar38 = (param_3->field0_0x0)._s_0.X;
    dVar42 = (param_3->field0_0x0)._s_0.Y;
    dVar45 = (param_4->field0_0x0)._s_0.Z;
    dVar22 = local_1c8._s_0.Y * local_1e8._s_0.Y + local_1c8._s_0.X * local_1e8._s_0.X +
             local_1c8._s_0.Z * local_1e8._s_0.Z;
    dVar22 = ((dVar22 * local_1e8._s_0.Y - dVar42) * local_1e8._s_0.Y +
              (dVar22 * local_1e8._s_0.X - dVar38) * local_1e8._s_0.X +
             (dVar22 * local_1e8._s_0.Z - (param_3->field0_0x0)._s_0.Z) * local_1e8._s_0.Z) /
             ((param_4->field0_0x0)._s_0.Y * local_1e8._s_0.Y +
              (param_4->field0_0x0)._s_0.X * local_1e8._s_0.X + dVar45 * local_1e8._s_0.Z);
    if (__real_3e45798ee2308c3a <= dVar22) {
      local_198.field0_0x0._s_0.Z = local_e8;
      local_1b0._s_0.Y = (dVar22 * (param_4->field0_0x0)._s_0.Y + dVar42) - local_1c8._s_0.Y;
      local_1b0._s_0.X = (dVar22 * (param_4->field0_0x0)._s_0.X + dVar38) - local_1c8._s_0.X;
      local_1b0._s_0.Z = (dVar45 * dVar22 + (param_3->field0_0x0)._s_0.Z) - local_1c8._s_0.Z;
      dVar38 = local_f8 * (double)this->_padding_;
      dVar42 = local_f8 * this->InnerRadius;
      auVar21._0_8_ =
           local_1b0._s_0.Y * local_1b0._s_0.Y + local_1b0._s_0.X * local_1b0._s_0.X +
           local_1b0._s_0.Z * local_1b0._s_0.Z;
      auVar21._8_8_ = 0;
      auVar10 = sqrtpd(auVar46,auVar21);
      dVar45 = auVar10._0_8_;
      if ((dVar45 <= dVar38 + local_1f0) && (dVar42 - local_1f0 <= dVar45)) {
        if (bVar7) {
          pTVar8 = UE::Math::TVector<double>::RotateAngleAxis
                             ((TVector<double> *)&local_208,&local_198,(double)this->_padding_,
                              (TVector<double> *)&local_1e8._s_0);
          dVar22 = (pTVar8->field0_0x0)._s_0.X;
          dVar2 = (pTVar8->field0_0x0)._s_0.Y;
          dVar37 = (pTVar8->field0_0x0)._s_0.Z;
          dVar23 = dVar2 * dVar2 + dVar22 * dVar22 + dVar37 * dVar37;
          if (dVar23 == __real_3ff0000000000000) {
            _local_208 = *(undefined1 (*) [16])&pTVar8->field0_0x0;
            local_1f8 = (pTVar8->field0_0x0)._s_0.Z;
          }
          else if (__real_3e45798ee0000000 <= dVar23) {
            dVar23 = __real_3ff0000000000000 / SQRT(dVar23);
            local_1f8 = dVar37 * dVar23;
            dStack_200 = dVar2 * dVar23;
            local_208 = dVar22 * dVar23;
          }
          else {
            dStack_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          dVar22 = UE::Geometry::VectorUtil::PlaneAngleSignedR<double>
                             ((TVector<double> *)&local_208,(TVector<double> *)&local_1b0._s_0,
                              (TVector<double> *)&local_1e8._s_0);
          if (dVar22 < dVar32) {
            dVar22 = dVar22 + __real_401921fb54442d18;
          }
          if (local_1d0 < dVar22) goto LAB_14965ae43;
        }
        (**(code **)(this->_padding_ + 0x6b0))(this,&local_178);
        dVar32 = (double)*(float *)((longlong)&this->_padding_ + 4);
        if (dVar32 <= 0.0) {
          dVar32 = 0.0;
        }
        dVar32 = dVar32 * (double)CONCAT44(uStack_d4,local_d8);
        if ((dVar32 + dVar38 < dVar45) || (dVar45 < dVar42 - dVar32)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        param_5->bIsSurfaceHit = bVar7;
        *(undefined8 *)__return_storage_ptr__ = local_178;
        __return_storage_ptr__->HitDepth = dStack_170;
        (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_168;
        (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_160;
        (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_158;
        __return_storage_ptr__->bHasHitNormal = (bool)(undefined1)uStack_150;
        *(undefined3 *)&__return_storage_ptr__->field_0x29 = uStack_150._1_3_;
        __return_storage_ptr__->HitIdentifier = uStack_150._4_4_;
        __return_storage_ptr__->HitOwner = local_148;
        (__return_storage_ptr__->HitObject).WeakPtr = FStack_140;
        return __return_storage_ptr__;
      }
    }
  }
LAB_14965ae43:
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 14965f850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UGizmoElementArc::Render
          (UGizmoElementArc *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  FWeakObjectPtr FVar16;
  double *pdVar17;
  char cVar18;
  bool bVar19;
  double *pdVar20;
  UMaterialInterface *pUVar21;
  FSceneView *pFVar22;
  FPrimitiveDrawInterface *pFVar23;
  FMaterialRenderProxy *pFVar24;
  longlong lVar25;
  FRenderTraversalState *pFVar26;
  float fVar27;
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
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  double dVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
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
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auVar64 [16];
  undefined1 auStackY_318 [32];
  FColor local_2a8;
  FColor local_2a4;
  FLinearColor local_2a0;
  double local_290;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  EGizmoElementInteractionState EStack_1c0;
  FGizmoElementMeshRenderStateAttributes FStack_1bc;
  FGizmoElementLineRenderStateAttributes local_11c;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  lVar25 = 2;
  pdVar17 = (double *)local_228;
  do {
    pFVar26 = param_2;
    pdVar20 = pdVar17;
    dVar1 = (pFVar26->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar5 = (pFVar26->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar9 = (pFVar26->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar26->MeshRenderState).HoverMaterial.bOverridesChildState;
    *pdVar20 = (pFVar26->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    pdVar20[1] = dVar1;
    dVar1 = (pFVar26->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar2 = (pFVar26->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    pdVar20[2] = dVar5;
    pdVar20[3] = dVar9;
    dVar5 = (pFVar26->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar9 = (pFVar26->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    pdVar20[4] = dVar1;
    pdVar20[5] = dVar2;
    dVar1 = (pFVar26->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar2 = (pFVar26->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar20[6] = dVar5;
    pdVar20[7] = dVar9;
    dVar5 = (pFVar26->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar9 = (pFVar26->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar20[8] = dVar1;
    pdVar20[9] = dVar2;
    dVar1 = pFVar26->PixelToWorldScale;
    dVar2 = *(double *)&pFVar26->InteractionState;
    pdVar20[10] = dVar5;
    pdVar20[0xb] = dVar9;
    dVar5 = *(double *)&(pFVar26->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar16 = (pFVar26->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pdVar20[0xc] = dVar1;
    pdVar20[0xd] = dVar2;
    pdVar20[0xe] = dVar5;
    *(FWeakObjectPtr *)(pdVar20 + 0xf) = FVar16;
    lVar25 = lVar25 + -1;
    pdVar17 = pdVar20 + 0x10;
  } while (lVar25 != 0);
  dVar1 = *(double *)&(pFVar26->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar16 = (pFVar26->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar5 = *(double *)&(pFVar26->MeshRenderState).SelectMaterial.bOverridesChildState;
  pdVar20[0x10] = *(double *)param_2;
  pdVar20[0x11] = dVar1;
  dVar1 = *(double *)&(pFVar26->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar9 = *(double *)&(pFVar26->MeshRenderState).VertexColor.Value.field0_0x0;
  *(FWeakObjectPtr *)(pdVar20 + 0x12) = FVar16;
  pdVar20[0x13] = dVar5;
  dVar5 = *(double *)((longlong)&(pFVar26->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar2 = *(double *)&(pFVar26->MeshRenderState).VertexColor.bHasValue;
  pdVar20[0x14] = dVar1;
  pdVar20[0x15] = dVar9;
  dVar1 = *(double *)((longlong)&(pFVar26->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar9 = *(double *)((longlong)&(pFVar26->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc)
  ;
  pdVar20[0x16] = dVar5;
  pdVar20[0x17] = dVar2;
  dVar5 = *(double *)&(pFVar26->MeshRenderState).InteractVertexColor.Value.field0_0x0;
  dVar2 = *(double *)
           ((longlong)&(pFVar26->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8);
  pdVar20[0x18] = dVar1;
  pdVar20[0x19] = dVar9;
  uVar62 = *(undefined4 *)&(pFVar26->MeshRenderState).InteractVertexColor.bHasValue;
  fVar27 = (pFVar26->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar14 = (pFVar26->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar15 = (pFVar26->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  pdVar20[0x1a] = dVar5;
  pdVar20[0x1b] = dVar2;
  *(undefined4 *)(pdVar20 + 0x1c) = uVar62;
  *(float *)((longlong)pdVar20 + 0xe4) = fVar27;
  *(float *)(pdVar20 + 0x1d) = fVar14;
  *(float *)((longlong)pdVar20 + 0xec) = fVar15;
  cVar18 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->_padding_,local_228);
  if ((cVar18 != '\0') &&
     (pUVar21 = FGizmoElementMeshRenderStateAttributes::GetMaterial(&FStack_1bc,EStack_1c0),
     pUVar21 != (UMaterialInterface *)0x0)) {
    dVar5 = local_1e8 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1e0 = dStack_1e0 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar62 = (undefined4)((ulonglong)dStack_1e0 >> 0x20);
    auVar54._8_4_ = SUB84(dStack_1e0,0);
    auVar54._0_8_ = dVar5;
    auVar54._12_4_ = uVar62;
    dVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_1d8;
    dStack_1d0 = dStack_1d0 * 0.0;
    auVar28._8_4_ = SUB84(dStack_1e0,0);
    auVar28._0_8_ = dVar5;
    auVar28._12_4_ = uVar62;
    auVar6._8_4_ = SUB84(dStack_1d0,0);
    auVar6._0_8_ = dVar38;
    auVar6._12_4_ = (int)((ulonglong)dStack_1d0 >> 0x20);
    auVar29 = blendpd(auVar28,auVar6,2);
    dVar7 = local_228._0_8_;
    dVar8 = local_228._8_8_;
    dVar10 = local_218._0_8_;
    dVar11 = local_218._8_8_;
    auVar64 = blendpd(local_228,local_218,2);
    auVar55._0_8_ = auVar54._8_8_ * dVar7 - dVar8 * dVar5;
    auVar55._8_8_ = dVar38 * dVar8 - dVar10 * dStack_1e0;
    dVar9 = auVar64._0_8_;
    dVar2 = auVar64._8_8_;
    auVar46._8_4_ = SUB84(auVar55._8_8_,0);
    auVar46._0_8_ = auVar55._0_8_;
    auVar46._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
    auVar30._0_8_ = auVar29._0_8_ * dVar10 - dVar9 * dVar38;
    auVar30._8_8_ = auVar29._8_8_ * dVar11 - dVar2 * dStack_1d0;
    auVar29 = blendpd(auVar55,auVar30,2);
    auVar31._8_4_ = local_218._8_4_;
    auVar31._0_8_ = dVar11;
    auVar31._12_4_ = local_218._12_4_;
    auVar56._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar56._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    dVar45 = auVar46._8_8_ + auVar46._8_8_;
    dVar50 = auVar30._0_8_ + auVar30._0_8_;
    auVar51._8_4_ = SUB84(dVar50,0);
    auVar51._0_8_ = dVar45;
    uVar62 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar51._12_4_ = uVar62;
    auVar39._8_4_ = SUB84(dVar50,0);
    auVar39._0_8_ = dVar45;
    auVar39._12_4_ = uVar62;
    auVar29 = blendpd(auVar39,auVar56,2);
    dVar1 = (double)this->_padding_;
    auVar52._0_8_ = auVar51._8_8_ * dVar7 - dVar8 * dVar45;
    auVar52._8_8_ = auVar56._0_8_ * dVar8 - dVar10 * dVar50;
    auVar40._0_8_ = auVar29._0_8_ * dVar10 - dVar9 * auVar56._0_8_;
    auVar40._8_8_ = auVar29._8_8_ * dVar11 - dVar2 * auVar56._8_8_;
    auVar64 = blendpd(auVar52,auVar40,2);
    local_270._s_0.X = dVar11 * dVar45 + dVar5 + auVar52._8_8_ + local_208;
    local_270._s_0.Y = auVar31._8_8_ * dVar50 + dStack_1e0 + auVar40._0_8_ + dStack_200;
    auVar29._0_8_ = this->_padding_;
    auVar29._8_8_ = this->_padding_;
    local_270._s_0.Z = dVar11 * auVar56._0_8_ + dVar38 + auVar64._0_8_ + local_1f8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar1;
    auVar64 = blendpd(auVar29,auVar3,2);
    auVar57._0_8_ = (double)auVar29._8_8_ * dVar7 - dVar8 * (double)auVar29._0_8_;
    auVar57._8_8_ = dVar1 * dVar8 - dVar10 * (double)auVar29._8_8_;
    auVar41._8_4_ = SUB84(auVar57._8_8_,0);
    auVar41._0_8_ = auVar57._0_8_;
    auVar41._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
    auVar32._0_8_ = auVar64._0_8_ * dVar10 - dVar9 * dVar1;
    auVar32._8_8_ = auVar64._8_8_ * dVar11 - dVar2 * 0.0;
    auVar64 = blendpd(auVar57,auVar32,2);
    dVar38 = auVar41._8_8_ + auVar41._8_8_;
    dVar50 = auVar32._0_8_ + auVar32._0_8_;
    auVar58._0_8_ = auVar64._0_8_ + auVar64._0_8_;
    auVar58._8_8_ = auVar64._8_8_ + auVar64._8_8_;
    auVar47._8_4_ = SUB84(dVar50,0);
    auVar47._0_8_ = dVar38;
    uVar62 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar47._12_4_ = uVar62;
    auVar33._8_4_ = SUB84(dVar50,0);
    auVar33._0_8_ = dVar38;
    auVar33._12_4_ = uVar62;
    auVar64 = blendpd(auVar33,auVar58,2);
    dVar5 = (double)this->_padding_;
    auVar53._8_4_ = local_218._8_4_;
    auVar53._0_8_ = dVar11;
    auVar53._12_4_ = local_218._12_4_;
    auVar48._0_8_ = auVar47._8_8_ * dVar7 - dVar8 * dVar38;
    auVar48._8_8_ = auVar58._0_8_ * dVar8 - dVar10 * dVar50;
    auVar34._0_8_ = auVar64._0_8_ * dVar10 - dVar9 * auVar58._0_8_;
    auVar34._8_8_ = auVar64._8_8_ * dVar11 - dVar2 * auVar58._8_8_;
    auVar64 = blendpd(auVar48,auVar34,2);
    dVar45 = dVar11 * dVar38 + (double)auVar29._0_8_ + auVar48._8_8_;
    dVar38 = dVar11 * dVar50 + (double)auVar29._8_8_ + auVar34._0_8_;
    uVar63 = SUB84(dVar38,0);
    uVar61 = (undefined4)((ulonglong)dVar38 >> 0x20);
    local_240._s_0.Z = dVar11 * auVar58._0_8_ + dVar1 + auVar64._0_8_;
    auVar64._0_8_ = this->_padding_;
    auVar64._8_8_ = this->_padding_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar5;
    auVar29 = blendpd(auVar64,auVar4,2);
    local_240._8_4_ = uVar63;
    local_240._0_8_ = dVar45;
    local_240._12_4_ = uVar61;
    auVar59._0_8_ = (double)auVar64._8_8_ * dVar7 - dVar8 * (double)auVar64._0_8_;
    auVar59._8_8_ = dVar5 * dVar8 - dVar10 * (double)auVar64._8_8_;
    auVar35._0_8_ = auVar29._0_8_ * dVar10 - dVar9 * dVar5;
    auVar35._8_8_ = auVar29._8_8_ * dVar11 - dVar2 * 0.0;
    dVar1 = auVar59._8_8_ + auVar59._8_8_;
    dVar38 = auVar35._0_8_ + auVar35._0_8_;
    uVar62 = (undefined4)((ulonglong)dVar38 >> 0x20);
    auVar29 = blendpd(auVar59,auVar35,2);
    auVar42._8_4_ = SUB84(dVar38,0);
    auVar42._0_8_ = dVar1;
    auVar42._12_4_ = uVar62;
    auVar36._8_4_ = SUB84(dVar38,0);
    auVar36._0_8_ = dVar1;
    auVar36._12_4_ = uVar62;
    auVar60._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar60._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar12._4_8_ = auVar64._8_8_;
    auVar12._0_4_ = (int)((ulonglong)dVar45 >> 0x20);
    auVar49._0_8_ = auVar12._0_8_ << 0x20;
    auVar49._8_4_ = uVar63;
    auVar49._12_4_ = uVar61;
    auVar29 = blendpd(auVar36,auVar60,2);
    auVar43._0_8_ = auVar42._8_8_ * dVar7 - dVar8 * dVar1;
    auVar43._8_8_ = auVar60._0_8_ * dVar8 - dVar10 * dVar38;
    auVar37._0_8_ = auVar29._0_8_ * dVar10 - dVar9 * auVar60._0_8_;
    auVar37._8_8_ = auVar29._8_8_ * dVar11 - dVar2 * auVar60._8_8_;
    local_258._s_0.X = dVar11 * dVar1 + (double)auVar64._0_8_ + auVar43._8_8_;
    local_258._s_0.Y = auVar53._8_8_ * dVar38 + (double)auVar64._8_8_ + auVar37._0_8_;
    auVar29 = blendpd(auVar43,auVar37,2);
    local_258._s_0.Z = dVar11 * auVar60._0_8_ + dVar5 + auVar29._0_8_;
    auVar13._4_8_ = auVar29._8_8_;
    auVar13._0_4_ = (int)((ulonglong)local_258._s_0.X >> 0x20);
    auVar44._0_8_ = auVar13._0_8_ << 0x20;
    auVar44._8_4_ = SUB84(local_258._s_0.Y,0);
    auVar44._12_4_ = (int)((ulonglong)local_258._s_0.Y >> 0x20);
    local_288._s_0.X = local_258._s_0.Z * auVar49._8_8_ - local_240._s_0.Z * auVar44._8_8_;
    local_288._s_0.Y = local_240._s_0.Z * local_258._s_0.X - local_258._s_0.Z * dVar45;
    local_288._s_0.Z = dVar45 * auVar44._8_8_ - auVar49._8_8_ * local_258._s_0.X;
    pFVar22 = (FSceneView *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    bVar19 = UGizmoElementCircleBase::IsPartial
                       ((UGizmoElementCircleBase *)this,pFVar22,(TVector<double> *)&local_270._s_0,
                        (TVector<double> *)&local_288._s_0);
    if (bVar19) {
      dVar1 = (double)this->_padding_;
      dVar5 = (double)this->_padding_;
      uVar62 = SUB84(dVar5,0);
      uVar63 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (dVar1 - dVar5 <= 0.0) {
        return;
      }
    }
    else {
      uVar62 = 0;
      uVar63 = 0;
      dVar1 = __real_401921fb54442d18;
    }
    dVar5 = local_1e8 * (double)this->_padding_;
    dVar9 = local_1e8 * this->InnerRadius;
    local_290 = local_1d8;
    FGizmoElementMeshRenderStateAttributes::GetVertexColor(&FStack_1bc,&local_2a0,EStack_1c0);
    FLinearColor::ToFColorSRGB(&local_2a0);
    FGizmoElementLineRenderStateAttributes::GetLineColor(&local_11c,&local_2a0,EStack_1c0);
    FLinearColor::ToFColorSRGB(&local_2a0);
    pdVar17 = (pFVar22->ViewMatrices).ProjectionMatrix.M[3] + 3;
    fVar27 = (float)(**(code **)(this->_padding_ + 0x6b8))
                              (this,*pdVar17 <= __real_3ff0000000000000 &&
                                    __real_3ff0000000000000 != *pdVar17);
    pFVar23 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pFVar24 = (FMaterialRenderProxy *)(**(code **)(pUVar21->_padding_ + 0x310))(pUVar21);
    DrawThickArc(pFVar23,(TVector<double> *)&local_270._s_0,(TVector<double> *)&local_240._s_0,
                 (TVector<double> *)&local_258._s_0,dVar5,dVar9,(double)CONCAT44(uVar63,uVar62),
                 dVar1,(int)this->_padding_,pFVar24,&local_2a4,&local_2a8,(double)fVar27 * local_1e8
                );
  }
  return;
}

// SetInnerRadius @ 149661e00

void __thiscall UGizmoElementArc::SetInnerRadius(UGizmoElementArc *this,double param_1)

{
  this->InnerRadius = param_1;
  return;
}

// StaticRegisterNativesUGizmoElementArc @ 149664b30

void __cdecl UGizmoElementArc::StaticRegisterNativesUGizmoElementArc(void)

{
  return;
}

