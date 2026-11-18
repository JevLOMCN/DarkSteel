// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 20

// StaticClass @ 14966b7b0

UClass * __cdecl UGizmoElementCone::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCone",
               &Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton,
               StaticRegisterNativesUGizmoElementCone,400,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementCone>,
               InternalVTableHelperCtorCaller<UGizmoElementCone>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton;
}

// UGizmoElementCone @ 1496849b0

UGizmoElementCone * __thiscall
UGizmoElementCone::UGizmoElementCone(UGizmoElementCone *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementCone__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = -1.0;
  this->Height = 1.0;
  this->Radius = 0.5;
  this->NumSides = 0x20;
  this->bEndCaps = false;
  return this;
}

// UGizmoElementCone @ 149684a40

UGizmoElementCone * __thiscall
UGizmoElementCone::UGizmoElementCone(UGizmoElementCone *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementCone__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = -1.0;
  this->Height = 1.0;
  this->Radius = 0.5;
  this->NumSides = 0x20;
  this->bEndCaps = false;
  return this;
}

// ~UGizmoElementCone @ 149689a40

void __thiscall UGizmoElementCone::~UGizmoElementCone(UGizmoElementCone *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 1496a0e60

TVector<double> * __thiscall
UGizmoElementCone::GetDirection(UGizmoElementCone *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Direction).field0_0x0._s_0.Y;
  dVar1 = (this->Direction).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Direction).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetEndCaps @ 1496a2c30

bool __thiscall UGizmoElementCone::GetEndCaps(UGizmoElementCone *this)

{
  return this->bEndCaps;
}

// GetHeight @ 1496a2d60

float __thiscall UGizmoElementCone::GetHeight(UGizmoElementCone *this)

{
  return this->Height;
}

// GetNumSides @ 1496a38e0

int __thiscall UGizmoElementCone::GetNumSides(UGizmoElementCone *this)

{
  return this->NumSides;
}

// GetOrigin @ 1496a3950

TVector<double> * __thiscall
UGizmoElementCone::GetOrigin(UGizmoElementCone *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Origin).field0_0x0._s_0.Y;
  dVar1 = (this->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a5070

UClass * __cdecl UGizmoElementCone::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCone",
               &Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton,
               StaticRegisterNativesUGizmoElementCone,400,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementCone>,
               InternalVTableHelperCtorCaller<UGizmoElementCone>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCone.InnerSingleton;
}

// GetRadius @ 1496a7a90

float __thiscall UGizmoElementCone::GetRadius(UGizmoElementCone *this)

{
  return this->Radius;
}

// LineTrace @ 1496af340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementCone::LineTrace
          (UGizmoElementCone *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1,
          FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  undefined4 uVar11;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStackY_278 [32];
  bool local_238 [8];
  double local_230;
  TVector<double>_u_0 local_228;
  double local_210;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  void *local_188;
  FWeakObjectPtr FStack_180;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_158 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_150 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_148 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_140 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_138 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_130 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_118 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_110 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_128 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_120 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_f8 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_f4 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_f0._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_f0._1_1_ = param_2->HitSortType;
  uStack_f0._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_ec = *(undefined4 *)&param_2->field_0x6c;
  local_108 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_100 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
  cVar10 = (**(code **)(this->_padding_ + 0x6a8))(local_f8,param_1,&this->Origin,&local_158);
  dVar4 = local_118;
  if (cVar10 != '\0') {
    auVar8._8_8_ = dStack_140;
    auVar8._0_8_ = local_148;
    auVar25 = *(undefined1 (*) [16])&(this->Direction).field0_0x0;
    dVar30 = auVar25._8_8_;
    local_238[0] = false;
    auVar41._8_8_ = dStack_150;
    auVar41._0_8_ = local_158;
    dVar2 = (this->Direction).field0_0x0._s_0.Z;
    local_230 = 0.0;
    fVar1 = this->Height;
    auVar41 = blendpd(auVar41,auVar8,2);
    local_210 = (double)fVar1 / (double)SQRT(this->Radius * this->Radius + fVar1 * fVar1);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar2;
    auVar12 = blendpd(auVar25,auVar12,2);
    auVar44._0_8_ = dVar30 * local_158 - dStack_150 * auVar25._0_8_;
    auVar44._8_8_ = dVar2 * dStack_150 - local_148 * dVar30;
    auVar32._8_4_ = SUB84(auVar44._8_8_,0);
    auVar32._0_8_ = auVar44._0_8_;
    auVar32._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
    dVar3 = auVar41._0_8_;
    dVar5 = auVar41._8_8_;
    auVar13._0_8_ = auVar12._0_8_ * local_148 - dVar3 * dVar2;
    auVar13._8_8_ = auVar12._8_8_ * dStack_140 - dVar5 * 0.0;
    dVar6 = (double)*(float *)&this->_padding_ * (double)CONCAT44(uStack_f4,local_f8);
    dVar31 = auVar32._8_8_ + auVar32._8_8_;
    dVar34 = auVar13._0_8_ + auVar13._0_8_;
    auVar12 = blendpd(auVar44,auVar13,2);
    auVar45._0_8_ = auVar12._0_8_ + auVar12._0_8_;
    auVar45._8_8_ = auVar12._8_8_ + auVar12._8_8_;
    auVar23._8_4_ = SUB84(dVar34,0);
    auVar23._0_8_ = dVar31;
    uVar11 = (undefined4)((ulonglong)dVar34 >> 0x20);
    auVar23._12_4_ = uVar11;
    auVar14._8_4_ = SUB84(dVar34,0);
    auVar14._0_8_ = dVar31;
    auVar14._12_4_ = uVar11;
    auVar12 = blendpd(auVar14,auVar45,2);
    auVar24._0_8_ = auVar23._8_8_ * local_158 - dVar31 * dStack_150;
    auVar24._8_8_ = auVar45._0_8_ * dStack_150 - dVar34 * local_148;
    auVar15._0_8_ = auVar12._0_8_ * local_148 - auVar45._0_8_ * dVar3;
    auVar15._8_8_ = auVar12._8_8_ * dStack_140 - auVar45._8_8_ * dVar5;
    local_1f0._s_0.X = dVar31 * dStack_140 + auVar25._0_8_ + auVar24._8_8_;
    local_1f0._s_0.Y = dVar34 * dStack_140 + dVar30 + auVar15._0_8_;
    auVar33._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_108;
    auVar33._8_8_ = dStack_100 * 0.0;
    dVar31 = local_118 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar34 = dStack_110 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    auVar25 = blendpd(auVar24,auVar15,2);
    auVar35._8_4_ = SUB84(dVar34,0);
    auVar35._0_8_ = dVar31;
    uVar11 = (undefined4)((ulonglong)dVar34 >> 0x20);
    auVar35._12_4_ = uVar11;
    dVar43 = auVar45._0_8_ * dStack_140 + dVar2 + auVar25._0_8_;
    auVar25._8_4_ = SUB84(dVar34,0);
    auVar25._0_8_ = dVar31;
    auVar25._12_4_ = uVar11;
    auVar36._0_8_ = auVar35._8_8_ * local_158 - dVar31 * dStack_150;
    auVar36._8_8_ = auVar33._0_8_ * dStack_150 - dVar34 * local_148;
    auVar25 = blendpd(auVar25,auVar33,2);
    auVar16._0_8_ = auVar25._0_8_ * local_148 - auVar33._0_8_ * dVar3;
    auVar16._8_8_ = auVar25._8_8_ * dStack_140 - auVar33._8_8_ * dVar5;
    auVar25 = blendpd(auVar36,auVar16,2);
    dVar2 = auVar36._8_8_ + auVar36._8_8_;
    dVar30 = auVar16._0_8_ + auVar16._0_8_;
    uVar11 = (undefined4)((ulonglong)dVar30 >> 0x20);
    auVar37._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar37._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar26._8_4_ = SUB84(dVar30,0);
    auVar26._0_8_ = dVar2;
    auVar26._12_4_ = uVar11;
    auVar17._8_4_ = SUB84(dVar30,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar11;
    auVar25 = blendpd(auVar17,auVar37,2);
    auVar27._0_8_ = auVar26._8_8_ * local_158 - dVar2 * dStack_150;
    auVar27._8_8_ = auVar37._0_8_ * dStack_150 - dVar30 * local_148;
    auVar18._0_8_ = auVar25._0_8_ * local_148 - auVar37._0_8_ * dVar3;
    auVar18._8_8_ = auVar25._8_8_ * dStack_140 - auVar37._8_8_ * dVar5;
    auVar25 = blendpd(auVar27,auVar18,2);
    local_228._s_0.X =
         (dVar2 * dStack_140 + dVar31 + auVar27._8_8_ + local_138) - dVar6 * local_1f0._s_0.X;
    local_208._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_1c8._8_4_ = SUB84(local_1f0._s_0.Y,0);
    local_1c8._0_8_ = local_1f0._s_0.Y;
    local_1c8._12_4_ = (int)((ulonglong)local_1f0._s_0.Y >> 0x20);
    local_228._s_0.Y =
         (dVar30 * dStack_140 + dVar34 + auVar18._0_8_ + dStack_130) - dVar6 * local_1f0._s_0.Y;
    local_228._s_0.Z =
         (auVar37._0_8_ * dStack_140 + auVar33._0_8_ + auVar25._0_8_ + local_128) - dVar6 * dVar43;
    local_208._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_208._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_1f0._s_0.Z = dVar43;
    local_1d8 = local_1f0._s_0.X;
    dStack_1d0 = local_1f0._s_0.Y;
    dVar2 = UE::GizmoUtil::ClampRayOrigin
                      (param_1,(TVector<double> *)&local_208._s_0,param_4,__real_4130000000000000);
    dVar3 = local_210;
    GizmoMath::RayConeIntersection<double>
              ((TVector<double> *)&local_228._s_0,(TVector<double> *)&local_1f0._s_0,local_210,
               dVar4 * (double)fVar1 + dVar6 + dVar6,(TVector<double> *)&local_208._s_0,param_4,
               local_238,&local_230);
    if (local_238[0] != false) {
      local_230 = local_230 + dVar2;
      (**(code **)(this->_padding_ + 0x6b0))(this,&local_1b8,local_230,param_5);
      auVar9._8_8_ = dStack_140;
      auVar9._0_8_ = local_148;
      auVar7._8_8_ = dStack_150;
      auVar7._0_8_ = local_158;
      auVar42._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_108;
      auVar42._8_8_ = dStack_100 * 0.0;
      dVar5 = local_118 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dVar30 = dStack_110 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar11 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar38._8_4_ = SUB84(dVar30,0);
      auVar38._0_8_ = dVar5;
      auVar38._12_4_ = uVar11;
      dVar6 = (double)*(float *)((longlong)&this->_padding_ + 4) *
              (double)CONCAT44(uStack_f4,local_f8);
      auVar19._8_4_ = SUB84(dVar30,0);
      auVar19._0_8_ = dVar5;
      auVar19._12_4_ = uVar11;
      auVar25 = blendpd(auVar19,auVar42,2);
      auVar39._0_8_ = auVar38._8_8_ * local_158 - dStack_150 * dVar5;
      auVar39._8_8_ = auVar42._0_8_ * dStack_150 - local_148 * dVar30;
      auVar12 = blendpd(auVar7,auVar9,2);
      auVar20._0_8_ = auVar25._0_8_ * local_148 - auVar42._0_8_ * auVar12._0_8_;
      auVar20._8_8_ = auVar25._8_8_ * dStack_140 - auVar42._8_8_ * auVar12._8_8_;
      dVar4 = auVar39._8_8_ + auVar39._8_8_;
      dVar2 = auVar20._0_8_ + auVar20._0_8_;
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar25 = blendpd(auVar39,auVar20,2);
      auVar28._8_4_ = SUB84(dVar2,0);
      auVar28._0_8_ = dVar4;
      auVar28._12_4_ = uVar11;
      auVar21._8_4_ = SUB84(dVar2,0);
      auVar21._0_8_ = dVar4;
      auVar21._12_4_ = uVar11;
      auVar40._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar40._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar25 = blendpd(auVar21,auVar40,2);
      auVar29._0_8_ = auVar28._8_8_ * local_158 - dStack_150 * dVar4;
      auVar29._8_8_ = auVar40._0_8_ * dStack_150 - local_148 * dVar2;
      auVar22._0_8_ = auVar25._0_8_ * local_148 - auVar12._0_8_ * auVar40._0_8_;
      auVar22._8_8_ = auVar25._8_8_ * dStack_140 - auVar12._8_8_ * auVar40._8_8_;
      auVar25 = blendpd(auVar29,auVar22,2);
      local_228._s_0.X =
           (dStack_140 * dVar4 + dVar5 + auVar29._8_8_ + local_138) - dVar6 * local_1d8;
      local_228._s_0.Y =
           (dStack_140 * dVar2 + dVar30 + auVar22._0_8_ + dStack_130) -
           dVar6 * (double)local_1c8._0_8_;
      local_228._s_0.Z =
           (dStack_140 * auVar40._0_8_ + auVar42._0_8_ + auVar25._0_8_ + local_128) - dVar6 * dVar43
      ;
      GizmoMath::RayConeIntersection<double>
                ((TVector<double> *)&local_228._s_0,(TVector<double> *)&local_1f0._s_0,dVar3,
                 (double)this->Height * local_118 + dVar6 + dVar6,(TVector<double> *)&local_208._s_0
                 ,param_4,local_238,&local_230);
      if (local_238[0] != false) {
        dStack_1b0 = local_230;
        param_5->bIsSurfaceHit = true;
      }
      *(undefined8 *)__return_storage_ptr__ = local_1b8;
      __return_storage_ptr__->HitDepth = dStack_1b0;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_1a8;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_1a0;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_198;
      __return_storage_ptr__->bHasHitNormal = (bool)(undefined1)uStack_190;
      *(undefined3 *)&__return_storage_ptr__->field_0x29 = uStack_190._1_3_;
      __return_storage_ptr__->HitIdentifier = uStack_190._4_4_;
      __return_storage_ptr__->HitOwner = local_188;
      (__return_storage_ptr__->HitObject).WeakPtr = FStack_180;
      return __return_storage_ptr__;
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496b8fd0

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
UGizmoElementCone::Render
          (UGizmoElementCone *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  uint uVar1;
  double dVar2;
  FWeakObjectPtr FVar3;
  undefined1 auVar4 [16];
  TTransform<double> *pTVar5;
  char cVar6;
  TTransform<double> *pTVar7;
  UMaterialInterface *pUVar8;
  TMatrix<double> *pTVar9;
  FPrimitiveDrawInterface *pFVar10;
  FMaterialRenderProxy *pFVar11;
  longlong lVar12;
  FRenderTraversalState *pFVar13;
  float fVar14;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  undefined8 local_398;
  TVector<double>_u_0 local_390;
  TVector<double>_u_0 local_378;
  TQuat<double> local_358 [2];
  TTransform<double> local_318;
  TMatrix<double> local_2b8;
  TTransform<double> local_238;
  EGizmoElementInteractionState EStack_1d0;
  FGizmoElementMeshRenderStateAttributes FStack_1cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  lVar12 = 2;
  pTVar5 = &local_238;
  do {
    pFVar13 = param_2;
    pTVar7 = pTVar5;
    dVar35 = (pFVar13->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar2 = (pFVar13->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar46 = (pFVar13->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar13->MeshRenderState).HoverMaterial.bOverridesChildState;
    (pTVar7->Rotation).XY.m128d_f64[0] = (pFVar13->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    (pTVar7->Rotation).XY.m128d_f64[1] = dVar35;
    dVar35 = (pFVar13->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar44 = (pFVar13->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    (pTVar7->Rotation).ZW.m128d_f64[0] = dVar2;
    (pTVar7->Rotation).ZW.m128d_f64[1] = dVar46;
    dVar2 = (pFVar13->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar46 = (pFVar13->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    (pTVar7->Translation).XY.m128d_f64[0] = dVar35;
    (pTVar7->Translation).XY.m128d_f64[1] = dVar44;
    dVar35 = (pFVar13->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar44 = (pFVar13->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    (pTVar7->Translation).ZW.m128d_f64[0] = dVar2;
    (pTVar7->Translation).ZW.m128d_f64[1] = dVar46;
    dVar2 = (pFVar13->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar46 = (pFVar13->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    (pTVar7->Scale3D).XY.m128d_f64[0] = dVar35;
    (pTVar7->Scale3D).XY.m128d_f64[1] = dVar44;
    dVar35 = pFVar13->PixelToWorldScale;
    dVar44 = *(double *)&pFVar13->InteractionState;
    (pTVar7->Scale3D).ZW.m128d_f64[0] = dVar2;
    (pTVar7->Scale3D).ZW.m128d_f64[1] = dVar46;
    dVar2 = *(double *)&(pFVar13->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar3 = (pFVar13->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pTVar7[1].Rotation.XY.m128d_f64[0] = dVar35;
    pTVar7[1].Rotation.XY.m128d_f64[1] = dVar44;
    pTVar7[1].Rotation.ZW.m128d_f64[0] = dVar2;
    *(FWeakObjectPtr *)(pTVar7[1].Rotation.ZW.m128d_f64 + 1) = FVar3;
    lVar12 = lVar12 + -1;
    pTVar5 = (TTransform<double> *)&pTVar7[1].Translation;
  } while (lVar12 != 0);
  dVar35 = *(double *)&(pFVar13->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar3 = (pFVar13->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar2 = *(double *)&(pFVar13->MeshRenderState).SelectMaterial.bOverridesChildState;
  pTVar7[1].Translation.XY.m128d_f64[0] = *(double *)param_2;
  pTVar7[1].Translation.XY.m128d_f64[1] = dVar35;
  dVar35 = *(double *)&(pFVar13->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar46 = *(double *)&(pFVar13->MeshRenderState).VertexColor.Value.field0_0x0;
  pTVar7[1].Translation.ZW.m128d_f64[0] = (double)FVar3;
  pTVar7[1].Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)((longlong)&(pFVar13->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar44 = *(double *)&(pFVar13->MeshRenderState).VertexColor.bHasValue;
  pTVar7[1].Scale3D.XY.m128d_f64[0] = dVar35;
  pTVar7[1].Scale3D.XY.m128d_f64[1] = dVar46;
  dVar35 = *(double *)((longlong)&(pFVar13->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar46 = *(double *)
            ((longlong)&(pFVar13->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pTVar7[1].Scale3D.ZW.m128d_f64[0] = dVar2;
  pTVar7[1].Scale3D.ZW.m128d_f64[1] = dVar44;
  dVar2 = *(double *)&(pFVar13->MeshRenderState).InteractVertexColor.Value.field0_0x0;
  dVar44 = *(double *)
            ((longlong)&(pFVar13->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8);
  pTVar7[2].Rotation.XY.m128d_f64[0] = dVar35;
  pTVar7[2].Rotation.XY.m128d_f64[1] = dVar46;
  dVar35 = *(double *)&(pFVar13->MeshRenderState).InteractVertexColor.bHasValue;
  dVar46 = *(double *)((longlong)&(pFVar13->MeshRenderState).SelectVertexColor.Value.field0_0x0 + 4)
  ;
  pTVar7[2].Rotation.ZW.m128d_f64[0] = dVar2;
  pTVar7[2].Rotation.ZW.m128d_f64[1] = dVar44;
  pTVar7[2].Translation.XY.m128d_f64[0] = dVar35;
  pTVar7[2].Translation.XY.m128d_f64[1] = dVar46;
  cVar6 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->Origin,&local_238);
  if ((cVar6 != '\0') &&
     (pUVar8 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal(&FStack_1cc,EStack_1d0),
     pUVar8 != (UMaterialInterface *)0x0)) {
    pTVar9 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_2b8,&this->Direction);
    UE::Math::TMatrix<double>::ToQuat(pTVar9,local_358);
    local_2b8.M[0][2] = local_358[0].Z;
    local_2b8.M[0][3] = local_358[0].W;
    local_2b8.M[0][0] = local_358[0].X;
    local_2b8.M[0][1] = local_358[0].Y;
    local_2b8.M[1][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_2b8.M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2b8.M[1][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2b8.M[1][3] = 0.0;
    local_2b8.M[2][0] = (double)this->Height;
    local_318.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_318.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_318.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_318.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2b8.M[2][3] = 0.0;
    local_318.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_318.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_318.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_318.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_318.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_318.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_318.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_318.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_2b8.M[2][1] = local_2b8.M[2][0];
    local_2b8.M[2][2] = local_2b8.M[2][0];
    UE::Math::TTransform<double>::Multiply(&local_318,(TTransform<double> *)&local_2b8,&local_238);
    fVar61 = this->Height;
    fVar61 = fVar61 / SQRT(this->Radius * this->Radius + fVar61 * fVar61);
    fVar14 = __real_bf800000;
    if ((__real_bf800000 <= fVar61) && (fVar14 = fVar61, __real_3f800000 <= fVar61)) {
      fVar14 = __real_3f800000;
    }
    fVar14 = acosf(fVar14);
    pFVar10 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pFVar11 = (FMaterialRenderProxy *)(**(code **)(pUVar8->_padding_ + 0x310))(pUVar8);
    uVar1 = this->NumSides;
    local_3a8._4_4_ = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
    local_3a8._0_4_ = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
    fStack_3a0 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
    fStack_39c = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
    pTVar9 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_318,&local_2b8);
    DrawCone(pFVar10,pTVar9,fVar14,fVar14,uVar1,false,(FLinearColor *)local_3a8,pFVar11,'\x01');
    if (this->bEndCaps != false) {
      dVar44 = local_238.Rotation.XY.m128d_f64[1];
      dVar35 = (double)(fVar61 * this->Height);
      local_238.Scale3D.ZW.m128d_f64[0] =
           dVar35 * (this->Direction).field0_0x0._s_0.Z * local_238.Scale3D.ZW.m128d_f64[0];
      local_238.Scale3D.ZW.m128d_f64[1] = local_238.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar46 = dVar35 * (this->Direction).field0_0x0._s_0.X * local_238.Scale3D.XY.m128d_f64[0];
      local_238.Scale3D.XY.m128d_f64[1] =
           dVar35 * (this->Direction).field0_0x0._s_0.Y * local_238.Scale3D.XY.m128d_f64[1];
      uVar42 = (undefined4)((ulonglong)local_238.Scale3D.XY.m128d_f64[1] >> 0x20);
      dVar35 = local_238.Rotation.ZW.m128d_f64[0];
      auVar53 = blendpd((undefined1  [16])local_238.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_238.Rotation.ZW.m128d_f64,2);
      dVar2 = local_238.Rotation.ZW.m128d_f64[1];
      auVar57._8_4_ = SUB84(local_238.Scale3D.XY.m128d_f64[1],0);
      auVar57._0_8_ = dVar46;
      auVar57._12_4_ = uVar42;
      auVar15._8_4_ = local_238.Rotation.ZW.m128d_f64[0]._0_4_;
      auVar15._0_8_ = dVar44;
      auVar15._12_4_ = local_238.Rotation.ZW.m128d_f64[0]._4_4_;
      auVar24._8_4_ = SUB84(local_238.Scale3D.XY.m128d_f64[1],0);
      auVar24._0_8_ = dVar46;
      auVar24._12_4_ = uVar42;
      auVar58._0_8_ = auVar57._8_8_ * local_238.Rotation.XY.m128d_f64[0] - dVar44 * dVar46;
      auVar58._8_8_ =
           local_238.Scale3D.ZW.m128d_f64[0] * dVar44 -
           auVar15._8_8_ * local_238.Scale3D.XY.m128d_f64[1];
      auVar25._8_4_ = SUB84(local_238.Scale3D.ZW.m128d_f64[1],0);
      auVar25._0_8_ = local_238.Scale3D.ZW.m128d_f64[0];
      auVar25._12_4_ = (int)((ulonglong)local_238.Scale3D.ZW.m128d_f64[1] >> 0x20);
      auVar25 = blendpd(auVar24,auVar25,2);
      auVar48._8_4_ = SUB84(auVar58._8_8_,0);
      auVar48._0_8_ = auVar58._0_8_;
      auVar48._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
      auVar26._0_8_ = auVar25._0_8_ * dVar35 - auVar53._0_8_ * local_238.Scale3D.ZW.m128d_f64[0];
      auVar26._8_8_ = auVar25._8_8_ * dVar2 - auVar53._8_8_ * local_238.Scale3D.ZW.m128d_f64[1];
      auVar25 = blendpd(auVar58,auVar26,2);
      dVar47 = auVar48._8_8_ + auVar48._8_8_;
      dVar52 = auVar26._0_8_ + auVar26._0_8_;
      auVar59._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar59._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      uVar42 = SUB84(dVar52,0);
      auVar36._8_4_ = uVar42;
      auVar36._0_8_ = dVar47;
      uVar43 = (undefined4)((ulonglong)dVar52 >> 0x20);
      auVar36._12_4_ = uVar43;
      auVar16._8_4_ = uVar42;
      auVar16._0_8_ = dVar47;
      auVar16._12_4_ = uVar43;
      auVar27._8_4_ = uVar42;
      auVar27._0_8_ = dVar47;
      auVar27._12_4_ = uVar43;
      auVar25 = blendpd(auVar27,auVar59,2);
      dVar45 = UE::Math::TVector<double>::RightVector.field0_0x0._8_8_;
      auVar4._8_8_ = local_318.Rotation.ZW.m128d_f64[1];
      auVar4._0_8_ = local_318.Rotation.ZW.m128d_f64[0];
      auVar60._8_8_ = local_318.Rotation.XY.m128d_f64[1];
      auVar60._0_8_ = local_318.Rotation.XY.m128d_f64[0];
      auVar37._0_8_ = auVar36._8_8_ * local_238.Rotation.XY.m128d_f64[0] - dVar47 * dVar44;
      auVar37._8_8_ = auVar59._0_8_ * dVar44 - auVar16._8_8_ * dVar35;
      auVar17._8_4_ = SUB84(auVar59._8_8_,0);
      auVar17._0_8_ = auVar59._0_8_;
      auVar17._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
      auVar54._8_8_ = 0;
      auVar54._0_8_ = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      auVar28._0_8_ = auVar25._0_8_ * dVar35 - auVar59._0_8_ * auVar53._0_8_;
      auVar28._8_8_ = auVar25._8_8_ * dVar2 - auVar17._8_8_ * auVar53._8_8_;
      auVar53._8_4_ = SUB84(auVar37._8_8_,0);
      auVar53._0_8_ = auVar37._0_8_;
      auVar53._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
      auVar25 = blendpd(auVar37,auVar28,2);
      local_390._s_0.X =
           dVar47 * dVar2 + dVar46 + auVar53._8_8_ + local_238.Translation.XY.m128d_f64[0];
      local_390._s_0.Y =
           dVar52 * dVar2 + local_238.Scale3D.XY.m128d_f64[1] + auVar28._0_8_ +
           local_238.Translation.XY.m128d_f64[1];
      local_390._s_0.Z =
           auVar59._0_8_ * dVar2 + local_238.Scale3D.ZW.m128d_f64[0] + auVar25._0_8_ +
           local_238.Translation.ZW.m128d_f64[0];
      auVar60 = blendpd(auVar60,auVar4,2);
      auVar49._0_8_ =
           dVar45 * local_318.Rotation.XY.m128d_f64[0] -
           UE::Math::TVector<double>::RightVector.field0_0x0._0_8_ *
           local_318.Rotation.XY.m128d_f64[1];
      auVar49._8_8_ =
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z *
           local_318.Rotation.XY.m128d_f64[1] - dVar45 * local_318.Rotation.ZW.m128d_f64[0];
      auVar25 = blendpd(UE::Math::TVector<double>::RightVector.field0_0x0._0_16_,auVar54,2);
      dVar44 = auVar60._0_8_;
      dVar47 = auVar60._8_8_;
      auVar29._0_8_ =
           auVar25._0_8_ * local_318.Rotation.ZW.m128d_f64[0] -
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * dVar44;
      auVar29._8_8_ = auVar25._8_8_ * local_318.Rotation.ZW.m128d_f64[1] - dVar47 * 0.0;
      auVar25 = blendpd(auVar49,auVar29,2);
      dVar35 = auVar49._8_8_ + auVar49._8_8_;
      dVar2 = auVar29._0_8_ + auVar29._0_8_;
      uVar42 = SUB84(dVar2,0);
      uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar50._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar50._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar38._8_4_ = uVar42;
      auVar38._0_8_ = dVar35;
      auVar38._12_4_ = uVar43;
      auVar18._8_4_ = uVar42;
      auVar18._0_8_ = dVar35;
      auVar18._12_4_ = uVar43;
      auVar30._8_4_ = uVar42;
      auVar30._0_8_ = dVar35;
      auVar30._12_4_ = uVar43;
      auVar25 = blendpd(auVar30,auVar50,2);
      dVar46 = UE::Math::TVector<double>::UpVector.field0_0x0._8_8_;
      auVar39._0_8_ =
           auVar38._8_8_ * local_318.Rotation.XY.m128d_f64[0] -
           dVar35 * local_318.Rotation.XY.m128d_f64[1];
      auVar39._8_8_ =
           auVar50._0_8_ * local_318.Rotation.XY.m128d_f64[1] -
           auVar18._8_8_ * local_318.Rotation.ZW.m128d_f64[0];
      auVar19._8_4_ = SUB84(auVar50._8_8_,0);
      auVar19._0_8_ = auVar50._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
      auVar31._0_8_ = auVar25._0_8_ * local_318.Rotation.ZW.m128d_f64[0] - auVar50._0_8_ * dVar44;
      auVar31._8_8_ = auVar25._8_8_ * local_318.Rotation.ZW.m128d_f64[1] - auVar19._8_8_ * dVar47;
      auVar20._8_4_ = SUB84(auVar39._8_8_,0);
      auVar20._0_8_ = auVar39._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      dVar2 = dVar2 * local_318.Rotation.ZW.m128d_f64[1] + dVar45 + auVar31._0_8_;
      auVar25 = blendpd(auVar39,auVar31,2);
      local_378._s_0.Z =
           auVar50._0_8_ * local_318.Rotation.ZW.m128d_f64[1] +
           UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z + auVar25._0_8_;
      local_378._8_4_ = SUB84(dVar2,0);
      local_378._0_8_ =
           dVar35 * local_318.Rotation.ZW.m128d_f64[1] +
           UE::Math::TVector<double>::RightVector.field0_0x0._0_8_ + auVar20._8_8_;
      local_378._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar51._8_8_ = 0;
      auVar51._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      auVar25 = blendpd(UE::Math::TVector<double>::UpVector.field0_0x0._0_16_,auVar51,2);
      auVar55._0_8_ =
           dVar46 * local_318.Rotation.XY.m128d_f64[0] -
           UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ * local_318.Rotation.XY.m128d_f64[1]
      ;
      auVar55._8_8_ =
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
           local_318.Rotation.XY.m128d_f64[1] - dVar46 * local_318.Rotation.ZW.m128d_f64[0];
      auVar32._0_8_ =
           auVar25._0_8_ * local_318.Rotation.ZW.m128d_f64[0] -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar44;
      auVar32._8_8_ = auVar25._8_8_ * local_318.Rotation.ZW.m128d_f64[1] - dVar47 * 0.0;
      auVar25 = blendpd(auVar55,auVar32,2);
      dVar35 = auVar55._8_8_ + auVar55._8_8_;
      dVar2 = auVar32._0_8_ + auVar32._0_8_;
      uVar42 = SUB84(dVar2,0);
      uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar56._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar56._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar40._8_4_ = uVar42;
      auVar40._0_8_ = dVar35;
      auVar40._12_4_ = uVar43;
      auVar21._8_4_ = uVar42;
      auVar21._0_8_ = dVar35;
      auVar21._12_4_ = uVar43;
      auVar33._8_4_ = uVar42;
      auVar33._0_8_ = dVar35;
      auVar33._12_4_ = uVar43;
      auVar25 = blendpd(auVar33,auVar56,2);
      auVar41._0_8_ =
           auVar40._8_8_ * local_318.Rotation.XY.m128d_f64[0] -
           dVar35 * local_318.Rotation.XY.m128d_f64[1];
      auVar41._8_8_ =
           auVar56._0_8_ * local_318.Rotation.XY.m128d_f64[1] -
           auVar21._8_8_ * local_318.Rotation.ZW.m128d_f64[0];
      auVar22._8_4_ = SUB84(auVar56._8_8_,0);
      auVar22._0_8_ = auVar56._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
      auVar34._0_8_ = auVar25._0_8_ * local_318.Rotation.ZW.m128d_f64[0] - auVar56._0_8_ * dVar44;
      auVar34._8_8_ = auVar25._8_8_ * local_318.Rotation.ZW.m128d_f64[1] - auVar22._8_8_ * dVar47;
      auVar23._8_4_ = SUB84(auVar41._8_8_,0);
      auVar23._0_8_ = auVar41._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
      auVar25 = blendpd(auVar41,auVar34,2);
      dVar2 = dVar2 * local_318.Rotation.ZW.m128d_f64[1] + dVar46 + auVar34._0_8_;
      local_398 = auVar56._0_8_ * local_318.Rotation.ZW.m128d_f64[1] +
                  UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z + auVar25._0_8_;
      fStack_3a0 = (float)SUB84(dVar2,0);
      local_3a8 = (undefined1  [8])
                  (dVar35 * local_318.Rotation.ZW.m128d_f64[1] +
                   UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ + auVar23._8_8_);
      fStack_39c = (float)(int)((ulonglong)dVar2 >> 0x20);
      GizmoConeComponentLocals::DrawDisc
                (pFVar10,(TVector<double> *)&local_390._s_0,(TVector<double> *)&local_378._s_0,
                 (TVector<double> *)local_3a8,
                 (double)(fVar61 * this->Radius) * local_238.Scale3D.XY.m128d_f64[0],this->NumSides,
                 pUVar8);
    }
  }
  return;
}

// SetDirection @ 1496bd470

void __thiscall UGizmoElementCone::SetDirection(UGizmoElementCone *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Direction).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Direction).field0_0x0._s_0.Y = dVar1;
  (this->Direction).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->Direction,__real_3e45798ee0000000);
  return;
}

// SetEndCaps @ 1496bd5c0

void __thiscall UGizmoElementCone::SetEndCaps(UGizmoElementCone *this,bool param_1)

{
  this->bEndCaps = param_1;
  return;
}

// SetHeight @ 1496bd970

void __thiscall UGizmoElementCone::SetHeight(UGizmoElementCone *this,float param_1)

{
  this->Height = param_1;
  return;
}

// SetNumSides @ 1496bdcc0

void __thiscall UGizmoElementCone::SetNumSides(UGizmoElementCone *this,int param_1)

{
  this->NumSides = param_1;
  return;
}

// SetOrigin @ 1496bdcf0

void __thiscall UGizmoElementCone::SetOrigin(UGizmoElementCone *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetRadius @ 1496bf970

void __thiscall UGizmoElementCone::SetRadius(UGizmoElementCone *this,float param_1)

{
  this->Radius = param_1;
  return;
}

// StaticRegisterNativesUGizmoElementCone @ 1496c2940

void __cdecl UGizmoElementCone::StaticRegisterNativesUGizmoElementCone(void)

{
  return;
}

