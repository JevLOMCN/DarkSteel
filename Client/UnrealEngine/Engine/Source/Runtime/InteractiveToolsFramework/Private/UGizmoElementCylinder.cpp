// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 22

// StaticClass @ 14966e130

UClass * __cdecl UGizmoElementCylinder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCylinder",
               &Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton,
               StaticRegisterNativesUGizmoElementCylinder,0x198,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementCylinder>,
               InternalVTableHelperCtorCaller<UGizmoElementCylinder>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton;
}

// UGizmoElementCylinder @ 149684ad0

UGizmoElementCylinder * __thiscall
UGizmoElementCylinder::UGizmoElementCylinder(UGizmoElementCylinder *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementCylinder__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  this->Height = 1.0;
  this->Radius = 0.5;
  this->NumSides = 0x20;
  this->bIsDashed = false;
  this->DashLength = 10.0;
  this->DashGapLength = 5.0;
  return this;
}

// UGizmoElementCylinder @ 149684b70

UGizmoElementCylinder * __thiscall
UGizmoElementCylinder::UGizmoElementCylinder
          (UGizmoElementCylinder *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementCylinder__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  this->Height = 1.0;
  this->Radius = 0.5;
  this->NumSides = 0x20;
  this->bIsDashed = false;
  this->DashLength = 10.0;
  this->DashGapLength = 5.0;
  return this;
}

// ~UGizmoElementCylinder @ 149689a60

void __thiscall UGizmoElementCylinder::~UGizmoElementCylinder(UGizmoElementCylinder *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBase @ 1496a03f0

TVector<double> * __thiscall
UGizmoElementCylinder::GetBase(UGizmoElementCylinder *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Base).field0_0x0._s_0.Y;
  dVar1 = (this->Base).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Base).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetDashParameters @ 1496a0b80

void __thiscall
UGizmoElementCylinder::GetDashParameters(UGizmoElementCylinder *this,float *param_1,float *param_2)

{
  *param_1 = this->DashLength;
  *param_2 = this->DashGapLength;
  return;
}

// GetDirection @ 1496a0e90

TVector<double> * __thiscall
UGizmoElementCylinder::GetDirection
          (UGizmoElementCylinder *this,TVector<double> *__return_storage_ptr__)

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

// GetHeight @ 1496a2d70

float __thiscall UGizmoElementCylinder::GetHeight(UGizmoElementCylinder *this)

{
  return this->Height;
}

// GetIsDashed @ 1496a3110

bool __thiscall UGizmoElementCylinder::GetIsDashed(UGizmoElementCylinder *this)

{
  return this->bIsDashed;
}

// GetNumSides @ 1496a38f0

int __thiscall UGizmoElementCylinder::GetNumSides(UGizmoElementCylinder *this)

{
  return this->NumSides;
}

// GetPrivateStaticClass @ 1496a5130

UClass * __cdecl UGizmoElementCylinder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCylinder",
               &Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton,
               StaticRegisterNativesUGizmoElementCylinder,0x198,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementCylinder>,
               InternalVTableHelperCtorCaller<UGizmoElementCylinder>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCylinder.InnerSingleton;
}

// GetRadius @ 1496a7aa0

float __thiscall UGizmoElementCylinder::GetRadius(UGizmoElementCylinder *this)

{
  return this->Radius;
}

// LineTrace @ 1496af9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementCylinder::LineTrace
          (UGizmoElementCylinder *this,FInputRayHit *__return_storage_ptr__,
          UGizmoViewContext *param_1,FLineTraceTraversalState *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FLineTraceOutput *param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar19;
  double dVar18;
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
  double dVar31;
  undefined4 uVar32;
  undefined1 auStackY_248 [32];
  bool local_208 [8];
  double local_200;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  undefined8 local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  void *local_168;
  FWeakObjectPtr FStack_160;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_248;
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
  cVar3 = (**(code **)(this->_padding_ + 0x6a8))(local_f8,param_1,&this->Base,&local_158);
  if (cVar3 != '\0') {
    auVar22 = *(undefined1 (*) [16])&(this->Direction).field0_0x0;
    local_208[0] = false;
    dVar1 = (this->Direction).field0_0x0._s_0.Z;
    local_200 = 0.0;
    local_1e0 = (double)*(float *)&this->_padding_ * (double)CONCAT44(uStack_f4,local_f8);
    auVar30._8_8_ = dStack_150;
    auVar30._0_8_ = local_158;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar1;
    auVar4 = blendpd(auVar22,auVar4,2);
    dVar18 = auVar22._8_8_;
    auVar2._8_8_ = dStack_140;
    auVar2._0_8_ = local_148;
    dVar16 = (double)this->Height;
    local_1d8 = dVar16 * local_118;
    auVar30 = blendpd(auVar30,auVar2,2);
    uVar32 = (undefined4)((ulonglong)dStack_140 >> 0x20);
    local_1d0 = (double)this->Radius * local_118;
    auVar25._0_8_ = dVar18 * local_158 - auVar22._0_8_ * dStack_150;
    auVar25._8_8_ = dVar1 * dStack_150 - dVar18 * local_148;
    dVar10 = auVar30._0_8_;
    dVar31 = auVar30._8_8_;
    auVar5._0_8_ = auVar4._0_8_ * local_148 - dVar1 * dVar10;
    auVar5._8_8_ = auVar4._8_8_ * dStack_140 - dVar31 * 0.0;
    auVar4 = blendpd(auVar25,auVar5,2);
    dVar15 = auVar25._8_8_ + auVar25._8_8_;
    dVar17 = auVar5._0_8_ + auVar5._0_8_;
    auVar26._0_8_ = auVar4._0_8_ + auVar4._0_8_;
    auVar26._8_8_ = auVar4._8_8_ + auVar4._8_8_;
    auVar20._8_4_ = SUB84(dVar17,0);
    auVar20._0_8_ = dVar15;
    uVar19 = (undefined4)((ulonglong)dVar17 >> 0x20);
    auVar20._12_4_ = uVar19;
    auVar11._8_4_ = SUB84(dVar17,0);
    auVar11._0_8_ = dVar15;
    auVar11._12_4_ = uVar19;
    auVar4 = blendpd(auVar11,auVar26,2);
    auVar6._8_4_ = SUB84(dStack_140,0);
    auVar6._0_8_ = dStack_140;
    auVar6._12_4_ = uVar32;
    auVar21._0_8_ = auVar20._8_8_ * local_158 - dVar15 * dStack_150;
    auVar21._8_8_ = auVar26._0_8_ * dStack_150 - dVar17 * local_148;
    auVar12._0_8_ = auVar4._0_8_ * local_148 - auVar26._0_8_ * dVar10;
    auVar12._8_8_ = auVar4._8_8_ * dStack_140 - auVar26._8_8_ * dVar31;
    local_1b0._s_0.X = dStack_140 * dVar15 + auVar22._0_8_ + auVar21._8_8_;
    local_1b0._s_0.Y = auVar6._8_8_ * dVar17 + dVar18 + auVar12._0_8_;
    auVar22 = blendpd(auVar21,auVar12,2);
    local_1b0._s_0.Z = dStack_140 * auVar26._0_8_ + dVar1 + auVar22._0_8_;
    dVar15 = local_118 * dVar16 * (this->Direction).field0_0x0._s_0.X * __real_3fe0000000000000;
    dVar17 = dStack_110 * dVar16 * (this->Direction).field0_0x0._s_0.Y * __real_3fe0000000000000;
    uVar19 = (undefined4)((ulonglong)dVar17 >> 0x20);
    dVar1 = dVar16 * (this->Direction).field0_0x0._s_0.Z * __real_3fe0000000000000 * local_108;
    dVar16 = dStack_100 * 0.0;
    auVar27._8_4_ = SUB84(dVar17,0);
    auVar27._0_8_ = dVar15;
    auVar27._12_4_ = uVar19;
    auVar7._8_4_ = SUB84(dVar17,0);
    auVar7._0_8_ = dVar15;
    auVar7._12_4_ = uVar19;
    auVar22._8_4_ = SUB84(dVar16,0);
    auVar22._0_8_ = dVar1;
    auVar22._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar22 = blendpd(auVar7,auVar22,2);
    auVar28._0_8_ = auVar27._8_8_ * local_158 - dVar15 * dStack_150;
    auVar28._8_8_ = dVar1 * dStack_150 - dVar17 * local_148;
    auVar8._0_8_ = auVar22._0_8_ * local_148 - dVar1 * dVar10;
    auVar8._8_8_ = auVar22._8_8_ * dStack_140 - dVar16 * dVar31;
    auVar22 = blendpd(auVar28,auVar8,2);
    dVar16 = auVar28._8_8_ + auVar28._8_8_;
    dVar18 = auVar8._0_8_ + auVar8._0_8_;
    auVar9._8_4_ = SUB84(dStack_140,0);
    auVar9._0_8_ = dStack_140;
    auVar9._12_4_ = uVar32;
    auVar29._0_8_ = auVar22._0_8_ + auVar22._0_8_;
    auVar29._8_8_ = auVar22._8_8_ + auVar22._8_8_;
    auVar23._8_4_ = SUB84(dVar18,0);
    auVar23._0_8_ = dVar16;
    uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
    auVar23._12_4_ = uVar19;
    auVar13._8_4_ = SUB84(dVar18,0);
    auVar13._0_8_ = dVar16;
    auVar13._12_4_ = uVar19;
    auVar22 = blendpd(auVar13,auVar29,2);
    auVar24._0_8_ = auVar23._8_8_ * local_158 - dVar16 * dStack_150;
    auVar24._8_8_ = auVar29._0_8_ * dStack_150 - dVar18 * local_148;
    auVar14._0_8_ = auVar22._0_8_ * local_148 - auVar29._0_8_ * dVar10;
    auVar14._8_8_ = auVar22._8_8_ * dStack_140 - auVar29._8_8_ * dVar31;
    local_1c8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1c8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_1f8._s_0.X = dStack_140 * dVar16 + dVar15 + auVar24._8_8_ + local_138;
    local_1f8._s_0.Y = auVar9._8_8_ * dVar18 + dVar17 + auVar14._0_8_ + dStack_130;
    auVar22 = blendpd(auVar24,auVar14,2);
    local_1f8._s_0.Z = dStack_140 * auVar29._0_8_ + dVar1 + auVar22._0_8_ + local_128;
    local_1c8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    dVar1 = UE::GizmoUtil::ClampRayOrigin
                      (param_1,(TVector<double> *)&local_1c8._s_0,param_4,__real_4130000000000000);
    dVar15 = local_1d0;
    dVar16 = local_1d8;
    GizmoMath::RayCylinderIntersection<double>
              ((TVector<double> *)&local_1f8._s_0,(TVector<double> *)&local_1b0._s_0,
               local_1d0 + local_1e0,local_1e0 + local_1e0 + local_1d8,
               (TVector<double> *)&local_1c8._s_0,param_4,local_208,&local_200);
    if (local_208[0] != false) {
      local_200 = local_200 + dVar1;
      (**(code **)(this->_padding_ + 0x6b0))(this,&local_198,local_200,param_5);
      dVar17 = (double)CONCAT44(uStack_f4,local_f8);
      dVar10 = (double)*(float *)((longlong)&this->_padding_ + 4) * dVar17;
      dVar16 = dVar10 + dVar10 + dVar16;
      dVar18 = dVar10 + dVar15;
      if (dVar10 + dVar15 <= dVar17) {
        dVar18 = dVar17;
      }
      if (dVar16 <= dVar17) {
        dVar16 = dVar17;
      }
      GizmoMath::RayCylinderIntersection<double>
                ((TVector<double> *)&local_1f8._s_0,(TVector<double> *)&local_1b0._s_0,dVar18,dVar16
                 ,(TVector<double> *)&local_1c8._s_0,param_4,local_208,&local_200);
      if (local_208[0] != false) {
        dStack_190 = dVar1 + local_200;
        param_5->bIsSurfaceHit = true;
      }
      *(undefined8 *)__return_storage_ptr__ = local_198;
      __return_storage_ptr__->HitDepth = dStack_190;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_188;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_180;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_178;
      __return_storage_ptr__->bHasHitNormal = (bool)(undefined1)uStack_170;
      *(undefined3 *)&__return_storage_ptr__->field_0x29 = uStack_170._1_3_;
      __return_storage_ptr__->HitIdentifier = uStack_170._4_4_;
      __return_storage_ptr__->HitOwner = local_168;
      (__return_storage_ptr__->HitObject).WeakPtr = FStack_160;
      return __return_storage_ptr__;
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496b96e0

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
UGizmoElementCylinder::Render
          (UGizmoElementCylinder *this,IToolsContextRenderAPI *param_1,
          FRenderTraversalState *param_2)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FWeakObjectPtr FVar6;
  undefined1 auVar7 [16];
  TTransform<double> *pTVar8;
  char cVar9;
  TTransform<double> *pTVar10;
  UMaterialInterface *pUVar11;
  TMatrix<double> *pTVar12;
  FPrimitiveDrawInterface *pFVar13;
  FMaterialRenderProxy *pFVar14;
  longlong lVar15;
  int iVar16;
  FRenderTraversalState *pFVar17;
  int iVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auStackY_418 [32];
  TVector<double>_u_0 local_3b0;
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_380;
  TVector<double>_u_0 local_368;
  TQuat<double> local_348;
  TTransform<double> local_328;
  undefined1 local_2c8 [72];
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TTransform<double> local_248;
  EGizmoElementInteractionState EStack_1e0;
  FGizmoElementMeshRenderStateAttributes FStack_1dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_418;
  lVar15 = 2;
  pTVar8 = &local_248;
  do {
    pFVar17 = param_2;
    pTVar10 = pTVar8;
    dVar4 = (pFVar17->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar26 = (pFVar17->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar28 = (pFVar17->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar17->MeshRenderState).HoverMaterial.bOverridesChildState;
    (pTVar10->Rotation).XY.m128d_f64[0] = (pFVar17->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    (pTVar10->Rotation).XY.m128d_f64[1] = dVar4;
    dVar4 = (pFVar17->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar23 = (pFVar17->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    (pTVar10->Rotation).ZW.m128d_f64[0] = dVar26;
    (pTVar10->Rotation).ZW.m128d_f64[1] = dVar28;
    dVar26 = (pFVar17->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar28 = (pFVar17->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    (pTVar10->Translation).XY.m128d_f64[0] = dVar4;
    (pTVar10->Translation).XY.m128d_f64[1] = dVar23;
    dVar4 = (pFVar17->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar23 = (pFVar17->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    (pTVar10->Translation).ZW.m128d_f64[0] = dVar26;
    (pTVar10->Translation).ZW.m128d_f64[1] = dVar28;
    dVar26 = (pFVar17->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar28 = (pFVar17->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    (pTVar10->Scale3D).XY.m128d_f64[0] = dVar4;
    (pTVar10->Scale3D).XY.m128d_f64[1] = dVar23;
    dVar4 = pFVar17->PixelToWorldScale;
    dVar23 = *(double *)&pFVar17->InteractionState;
    (pTVar10->Scale3D).ZW.m128d_f64[0] = dVar26;
    (pTVar10->Scale3D).ZW.m128d_f64[1] = dVar28;
    dVar26 = *(double *)&(pFVar17->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar6 = (pFVar17->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pTVar10[1].Rotation.XY.m128d_f64[0] = dVar4;
    pTVar10[1].Rotation.XY.m128d_f64[1] = dVar23;
    pTVar10[1].Rotation.ZW.m128d_f64[0] = dVar26;
    *(FWeakObjectPtr *)(pTVar10[1].Rotation.ZW.m128d_f64 + 1) = FVar6;
    lVar15 = lVar15 + -1;
    pTVar8 = (TTransform<double> *)&pTVar10[1].Translation;
  } while (lVar15 != 0);
  dVar4 = *(double *)&(pFVar17->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar6 = (pFVar17->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar26 = *(double *)&(pFVar17->MeshRenderState).SelectMaterial.bOverridesChildState;
  pTVar10[1].Translation.XY.m128d_f64[0] = *(double *)param_2;
  pTVar10[1].Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&(pFVar17->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar28 = *(double *)&(pFVar17->MeshRenderState).VertexColor.Value.field0_0x0;
  pTVar10[1].Translation.ZW.m128d_f64[0] = (double)FVar6;
  pTVar10[1].Translation.ZW.m128d_f64[1] = dVar26;
  dVar26 = *(double *)((longlong)&(pFVar17->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar23 = *(double *)&(pFVar17->MeshRenderState).VertexColor.bHasValue;
  pTVar10[1].Scale3D.XY.m128d_f64[0] = dVar4;
  pTVar10[1].Scale3D.XY.m128d_f64[1] = dVar28;
  dVar4 = *(double *)((longlong)&(pFVar17->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar28 = *(double *)
            ((longlong)&(pFVar17->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pTVar10[1].Scale3D.ZW.m128d_f64[0] = dVar26;
  pTVar10[1].Scale3D.ZW.m128d_f64[1] = dVar23;
  dVar26 = *(double *)&(pFVar17->MeshRenderState).InteractVertexColor.Value.field0_0x0;
  dVar23 = *(double *)
            ((longlong)&(pFVar17->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8);
  pTVar10[2].Rotation.XY.m128d_f64[0] = dVar4;
  pTVar10[2].Rotation.XY.m128d_f64[1] = dVar28;
  dVar4 = *(double *)&(pFVar17->MeshRenderState).InteractVertexColor.bHasValue;
  dVar28 = *(double *)((longlong)&(pFVar17->MeshRenderState).SelectVertexColor.Value.field0_0x0 + 4)
  ;
  pTVar10[2].Rotation.ZW.m128d_f64[0] = dVar26;
  pTVar10[2].Rotation.ZW.m128d_f64[1] = dVar23;
  pTVar10[2].Translation.XY.m128d_f64[0] = dVar4;
  pTVar10[2].Translation.XY.m128d_f64[1] = dVar28;
  cVar9 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->Base,&local_248);
  if ((cVar9 != '\0') &&
     (pUVar11 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal(&FStack_1dc,EStack_1e0),
     pUVar11 != (UMaterialInterface *)0x0)) {
    pTVar12 = UE::Math::TRotationMatrix<double>::MakeFromZ
                        ((TMatrix<double> *)local_2c8,&this->Direction);
    UE::Math::TMatrix<double>::ToQuat(pTVar12,&local_348);
    dVar28 = _UNK_150689518;
    dVar26 = ___xmm_00000000000000003ff0000000000000;
    local_2c8._0_8_ = local_348.X;
    local_2c8._8_8_ = local_348.Y;
    local_2c8._16_8_ = local_348.Z;
    local_2c8._24_8_ = local_348.W;
    local_278 = ___xmm_00000000000000003ff0000000000000;
    dStack_270 = _UNK_150689518;
    dVar4 = (double)this->Height * __real_3fe0000000000000;
    local_2c8._40_8_ = dVar4 * (this->Direction).field0_0x0._s_0.Y;
    local_2c8._32_8_ = dVar4 * (this->Direction).field0_0x0._s_0.X;
    local_2c8._48_8_ = dVar4 * (this->Direction).field0_0x0._s_0.Z;
    dStack_280 = _UNK_150689688;
    local_2c8._64_8_ = ___xmm_3ff00000000000003ff0000000000000;
    local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2c8._56_8_ = 0.0;
    local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_328.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_328.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_328.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_328,(TTransform<double> *)local_2c8,&local_248);
    pFVar13 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this->bIsDashed == false) {
      pFVar14 = (FMaterialRenderProxy *)(**(code **)(pUVar11->_padding_ + 0x310))(pUVar11);
      fVar31 = this->Radius;
      uVar2 = this->NumSides;
      local_380._s_0.X = 0.0;
      local_380._s_0.Y = 0.0;
      local_380._s_0.Z = __real_3ff0000000000000;
      local_398._s_0.Z = 0.0;
      local_3b0._s_0.Z = 0.0;
      local_398._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_398._s_0.Y = _UNK_15061cbc8;
      local_3b0._s_0.X = dVar26;
      local_3b0._s_0.Y = dVar28;
      pTVar12 = UE::Math::TTransform<double>::ToMatrixWithScale
                          (&local_328,(TMatrix<double> *)local_2c8);
      DrawCylinder(pFVar13,pTVar12,&UE::Math::TVector<double>::ZeroVector,
                   (TVector<double> *)&local_3b0._s_0,(TVector<double> *)&local_398._s_0,
                   (TVector<double> *)&local_380._s_0,(double)fVar31,dVar4,uVar2,pFVar14,'\x01');
    }
    else {
      fVar31 = this->DashLength;
      fVar25 = this->Height - fVar31;
      fVar1 = this->DashGapLength;
      fVar24 = fVar1 + fVar31;
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      iVar16 = -((int)ROUND(__real_bf000000 - (fVar25 + fVar25) / fVar24) >> 1);
      if (iVar16 < 2) {
        iVar16 = 2;
      }
      iVar5 = iVar16;
      if (0x200 < iVar16) {
        iVar5 = 0x200;
      }
      iVar18 = 0;
      fVar25 = fVar25 / ((float)(iVar16 + -1) * fVar24 + fVar31);
      fVar31 = fVar31 * fVar25;
      fVar24 = fVar31 * __real_3f000000;
      if (-1 < iVar5) {
        do {
          pFVar14 = (FMaterialRenderProxy *)(**(code **)(pUVar11->_padding_ + 0x310))(pUVar11);
          auVar30._8_8_ = local_328.Scale3D.XY.m128d_f64[1];
          auVar30._0_8_ = local_328.Scale3D.XY.m128d_f64[0];
          auVar7._8_8_ = local_328.Scale3D.ZW.m128d_f64[1];
          auVar7._0_8_ = local_328.Scale3D.ZW.m128d_f64[0];
          local_3b0._s_0.X = 0.0;
          local_3b0._s_0.Y = 0.0;
          local_398._s_0.X = ___xmm_3ff00000000000000000000000000000;
          local_398._s_0.Y = _UNK_15061cbc8;
          dVar3 = local_328.Rotation.XY.m128d_f64[1] + local_328.Rotation.XY.m128d_f64[1];
          local_3b0._s_0.Z = __real_3ff0000000000000;
          dVar29 = local_328.Rotation.XY.m128d_f64[0] *
                   (local_328.Rotation.XY.m128d_f64[0] + local_328.Rotation.XY.m128d_f64[0]);
          local_398._s_0.Z = 0.0;
          local_380._s_0.Z = 0.0;
          dVar23 = (double)((float)iVar18 * (fVar1 * fVar25 + fVar31) + fVar24);
          local_368._s_0.X =
               (dVar23 - dVar4 * __real_3ff0000000000000) *
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
          local_368._s_0.Y =
               (dVar23 - dVar4 * __real_3ff0000000000000) *
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
          dVar20 = local_328.Rotation.ZW.m128d_f64[0] + local_328.Rotation.ZW.m128d_f64[0];
          local_368._s_0.Z =
               (dVar23 - dVar4 * __real_3ff0000000000000) *
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
          auVar22._8_4_ = SUB84(local_328.Rotation.ZW.m128d_f64[1],0);
          auVar22._0_8_ = local_328.Rotation.ZW.m128d_f64[1];
          auVar22._12_4_ = (int)((ulonglong)local_328.Rotation.ZW.m128d_f64[1] >> 0x20);
          dVar21 = local_328.Rotation.ZW.m128d_f64[1] * dVar20;
          dVar23 = auVar22._8_8_ *
                   (local_328.Rotation.XY.m128d_f64[0] + local_328.Rotation.XY.m128d_f64[0]);
          auVar27._8_4_ = SUB84(dVar23,0);
          auVar27._0_8_ = dVar21;
          auVar27._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          local_2c8._0_8_ =
               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
               (local_328.Rotation.ZW.m128d_f64[0] * dVar20 +
               local_328.Rotation.XY.m128d_f64[1] * dVar3)) * local_328.Scale3D.XY.m128d_f64[0];
          local_2c8._40_8_ =
               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
               (local_328.Rotation.ZW.m128d_f64[0] * dVar20 + dVar29)) *
               local_328.Scale3D.XY.m128d_f64[1];
          local_278 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                      (dVar29 + local_328.Rotation.XY.m128d_f64[1] * dVar3)) *
                      local_328.Scale3D.ZW.m128d_f64[0];
          local_2c8._32_8_ =
               local_328.Scale3D.XY.m128d_f64[1] *
               (dVar3 * local_328.Rotation.XY.m128d_f64[0] - dVar21);
          dVar23 = local_328.Scale3D.ZW.m128d_f64[0] *
                   (dVar20 * local_328.Rotation.XY.m128d_f64[1] - dVar23);
          local_2c8._8_8_ =
               (dVar21 + dVar3 * local_328.Rotation.XY.m128d_f64[0]) *
               local_328.Scale3D.XY.m128d_f64[0];
          dVar29 = (auVar27._8_8_ + dVar20 * local_328.Rotation.XY.m128d_f64[1]) *
                   local_328.Scale3D.XY.m128d_f64[1];
          auVar30 = blendpd(auVar30,auVar7,2);
          local_2c8._16_8_ =
               auVar30._0_8_ *
               (local_328.Rotation.XY.m128d_f64[0] * dVar20 -
               dVar3 * local_328.Rotation.ZW.m128d_f64[1]);
          auVar19._8_4_ = SUB84(dVar29,0);
          auVar19._0_8_ = local_2c8._8_8_;
          auVar19._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
          local_2c8._48_8_ = auVar19._8_8_;
          uStack_250 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          uStack_24c = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          local_2c8._56_8_ = 0.0;
          local_268 = local_328.Translation.XY.m128d_f64[0];
          dStack_260 = local_328.Translation.XY.m128d_f64[1];
          local_2c8._24_8_ = 0.0;
          unique0x1000075f = SUB84(dVar23,0);
          local_2c8._64_8_ =
               (dVar3 * local_328.Rotation.ZW.m128d_f64[1] +
               local_328.Rotation.XY.m128d_f64[0] * dVar20) * local_328.Scale3D.ZW.m128d_f64[0];
          unique0x10000763 = (int)((ulonglong)dVar23 >> 0x20);
          dStack_270 = 0.0;
          local_258 = local_328.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_254 = local_328.Translation.ZW.m128d_f64[0]._4_4_;
          local_380._s_0.X = dVar26;
          local_380._s_0.Y = dVar28;
          DrawCylinder(pFVar13,(TMatrix<double> *)local_2c8,(TVector<double> *)&local_368._s_0,
                       (TVector<double> *)&local_380._s_0,(TVector<double> *)&local_398._s_0,
                       (TVector<double> *)&local_3b0._s_0,(double)this->Radius,(double)fVar24,
                       this->NumSides,pFVar14,'\x01');
          iVar18 = iVar18 + 1;
          dVar26 = ___xmm_00000000000000003ff0000000000000;
          dVar28 = _UNK_150689518;
        } while (iVar18 <= iVar5);
      }
    }
  }
  return;
}

// SetBase @ 1496bd2c0

void __thiscall UGizmoElementCylinder::SetBase(UGizmoElementCylinder *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Base).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Base).field0_0x0._s_0.Y = dVar1;
  (this->Base).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetDashParameters @ 1496bd400

void __thiscall
UGizmoElementCylinder::SetDashParameters
          (UGizmoElementCylinder *this,float param_1,TOptional<float> *param_2)

{
  this->DashLength = param_1;
  if (param_2->bIsSet != false) {
    this->DashGapLength = param_2->TypedValue;
    return;
  }
  this->DashGapLength = param_1 * __real_3f000000;
  return;
}

// SetDirection @ 1496bd4a0

void __thiscall
UGizmoElementCylinder::SetDirection(UGizmoElementCylinder *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Direction).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Direction).field0_0x0._s_0.Y = dVar1;
  (this->Direction).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->Direction,__real_3e45798ee0000000);
  return;
}

// SetHeight @ 1496bd980

void __thiscall UGizmoElementCylinder::SetHeight(UGizmoElementCylinder *this,float param_1)

{
  this->Height = param_1;
  return;
}

// SetIsDashed @ 1496bdbd0

void __thiscall UGizmoElementCylinder::SetIsDashed(UGizmoElementCylinder *this,bool param_1)

{
  this->bIsDashed = param_1;
  return;
}

// SetNumSides @ 1496bdcd0

void __thiscall UGizmoElementCylinder::SetNumSides(UGizmoElementCylinder *this,int param_1)

{
  this->NumSides = param_1;
  return;
}

// SetRadius @ 1496bf980

void __thiscall UGizmoElementCylinder::SetRadius(UGizmoElementCylinder *this,float param_1)

{
  this->Radius = param_1;
  return;
}

// StaticRegisterNativesUGizmoElementCylinder @ 1496c2950

void __cdecl UGizmoElementCylinder::StaticRegisterNativesUGizmoElementCylinder(void)

{
  return;
}

