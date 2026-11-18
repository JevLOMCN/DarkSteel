// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 149671d50

UClass * __cdecl UGizmoElementCircle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCircle",
               &Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton,
               StaticRegisterNativesUGizmoElementCircle,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementCircle>,
               InternalVTableHelperCtorCaller<UGizmoElementCircle>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton;
}

// UGizmoElementCircle @ 149684750

UGizmoElementCircle * __thiscall
UGizmoElementCircle::UGizmoElementCircle(UGizmoElementCircle *this,FVTableHelper *param_1)

{
  UGizmoElementCircleBase::UGizmoElementCircleBase((UGizmoElementCircleBase *)this,param_1);
  this->bDrawMesh = true;
  this->bDrawLine = false;
  this->bHitMesh = true;
  this->bHitLine = false;
  this->_padding_ = (longlong)&___7UGizmoElementCircle__6B_;
  return this;
}

// UGizmoElementCircle @ 149684790

UGizmoElementCircle * __thiscall
UGizmoElementCircle::UGizmoElementCircle(UGizmoElementCircle *this,FObjectInitializer *param_1)

{
  UGizmoElementCircleBase::UGizmoElementCircleBase((UGizmoElementCircleBase *)this,param_1);
  this->bDrawMesh = true;
  this->bDrawLine = false;
  this->bHitMesh = true;
  this->bHitLine = false;
  this->_padding_ = (longlong)&___7UGizmoElementCircle__6B_;
  return this;
}

// ~UGizmoElementCircle @ 149689a00

void __thiscall UGizmoElementCircle::~UGizmoElementCircle(UGizmoElementCircle *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDrawLine @ 1496a0ec0

bool __thiscall UGizmoElementCircle::GetDrawLine(UGizmoElementCircle *this)

{
  return this->bDrawLine;
}

// GetDrawMesh @ 1496a0ef0

bool __thiscall UGizmoElementCircle::GetDrawMesh(UGizmoElementCircle *this)

{
  return this->bDrawMesh;
}

// GetHitLine @ 1496a2d90

bool __thiscall UGizmoElementCircle::GetHitLine(UGizmoElementCircle *this)

{
  return this->bHitLine;
}

// GetHitMesh @ 1496a2db0

bool __thiscall UGizmoElementCircle::GetHitMesh(UGizmoElementCircle *this)

{
  return this->bHitMesh;
}

// GetPrivateStaticClass @ 1496a4ef0

UClass * __cdecl UGizmoElementCircle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementCircle",
               &Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton,
               StaticRegisterNativesUGizmoElementCircle,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementCircle>,
               InternalVTableHelperCtorCaller<UGizmoElementCircle>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementCircle.InnerSingleton;
}

// LineTrace @ 1496aec90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputRayHit * __thiscall
UGizmoElementCircle::LineTrace
          (UGizmoElementCircle *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1
          ,FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
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
  undefined8 uVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  double dVar38;
  undefined4 uVar40;
  double dVar39;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined1 auStackY_228 [32];
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1d8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  void *local_1a8;
  FWeakObjectPtr FStack_1a0;
  double local_198;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
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
  double local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_228;
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
  local_f8 = param_2->PixelToWorldScale;
  uStack_f0._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_f0._1_1_ = param_2->HitSortType;
  uStack_f0._2_6_ = *(undefined6 *)&param_2->field_0x6a;
  local_108 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_100 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
  cVar10 = (**(code **)(this->_padding_ + 0x6a8))(this,param_1,&this->_padding_,&local_158);
  if (cVar10 != '\0') {
    auVar9._8_8_ = dStack_140;
    auVar9._0_8_ = local_148;
    auVar8._8_8_ = dStack_150;
    auVar8._0_8_ = local_158;
    auVar23._0_8_ = this->_padding_;
    auVar23._8_8_ = this->_padding_;
    dVar1 = (double)this->_padding_;
    local_178._s_0.Z = local_128;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = dVar1;
    auVar19 = blendpd(auVar23,auVar45,2);
    uVar37 = (undefined4)((ulonglong)local_148 >> 0x20);
    auVar45 = blendpd(auVar8,auVar9,2);
    auVar11._8_4_ = SUB84(local_148,0);
    auVar11._0_8_ = dStack_150;
    auVar11._12_4_ = uVar37;
    local_178._s_0.X = local_138;
    local_178._s_0.Y = dStack_130;
    auVar47._0_8_ = (double)auVar23._8_8_ * local_158 - dStack_150 * (double)auVar23._0_8_;
    auVar47._8_8_ = dVar1 * dStack_150 - auVar11._8_8_ * (double)auVar23._8_8_;
    dVar36 = auVar45._0_8_;
    dVar41 = auVar45._8_8_;
    auVar20._0_8_ = auVar19._0_8_ * local_148 - dVar36 * dVar1;
    auVar20._8_8_ = auVar19._8_8_ * dStack_140 - dVar41 * 0.0;
    auVar19 = blendpd(auVar47,auVar20,2);
    dVar4 = auVar47._8_8_ + auVar47._8_8_;
    dVar39 = auVar20._0_8_ + auVar20._0_8_;
    uVar40 = SUB84(dVar39,0);
    uVar49 = (undefined4)((ulonglong)dVar39 >> 0x20);
    auVar48._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar48._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar28._8_4_ = uVar40;
    auVar28._0_8_ = dVar4;
    auVar28._12_4_ = uVar49;
    auVar12._8_4_ = uVar40;
    auVar12._0_8_ = dVar4;
    auVar12._12_4_ = uVar49;
    auVar21._8_4_ = uVar40;
    auVar21._0_8_ = dVar4;
    auVar21._12_4_ = uVar49;
    auVar19 = blendpd(auVar21,auVar48,2);
    auVar29._0_8_ = auVar28._8_8_ * local_158 - dVar4 * dStack_150;
    auVar29._8_8_ = auVar48._0_8_ * dStack_150 - auVar12._8_8_ * local_148;
    auVar13._8_4_ = SUB84(auVar48._8_8_,0);
    auVar13._0_8_ = auVar48._0_8_;
    auVar13._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar22._0_8_ = auVar19._0_8_ * local_148 - auVar48._0_8_ * dVar36;
    auVar22._8_8_ = auVar19._8_8_ * dStack_140 - auVar13._8_8_ * dVar41;
    auVar14._8_4_ = SUB84(auVar29._8_8_,0);
    auVar14._0_8_ = auVar29._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
    auVar45 = blendpd(auVar29,auVar22,2);
    auVar19._0_8_ = this->_padding_;
    auVar19._8_8_ = this->_padding_;
    dVar42 = dVar4 * dStack_140 + (double)auVar23._0_8_ + auVar14._8_8_;
    dVar39 = dVar39 * dStack_140 + (double)auVar23._8_8_ + auVar22._0_8_;
    dVar4 = (double)this->_padding_;
    auVar15._8_4_ = SUB84(local_148,0);
    auVar15._0_8_ = dStack_150;
    auVar15._12_4_ = uVar37;
    dVar46 = auVar48._0_8_ * dStack_140 + dVar1 + auVar45._0_8_;
    auVar43._0_8_ = (double)auVar19._8_8_ * local_158 - dStack_150 * (double)auVar19._0_8_;
    auVar43._8_8_ = dVar4 * dStack_150 - auVar15._8_8_ * (double)auVar19._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar4;
    auVar23 = blendpd(auVar19,auVar2,2);
    auVar24._0_8_ = auVar23._0_8_ * local_148 - dVar36 * dVar4;
    auVar24._8_8_ = auVar23._8_8_ * dStack_140 - dVar41 * 0.0;
    auVar23 = blendpd(auVar43,auVar24,2);
    dVar35 = auVar43._8_8_ + auVar43._8_8_;
    dVar38 = auVar24._0_8_ + auVar24._0_8_;
    auVar44._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar44._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    uVar37 = SUB84(dVar38,0);
    auVar30._8_4_ = uVar37;
    auVar30._0_8_ = dVar35;
    uVar40 = (undefined4)((ulonglong)dVar38 >> 0x20);
    auVar30._12_4_ = uVar40;
    auVar16._8_4_ = uVar37;
    auVar16._0_8_ = dVar35;
    auVar16._12_4_ = uVar40;
    auVar25._8_4_ = uVar37;
    auVar25._0_8_ = dVar35;
    auVar25._12_4_ = uVar40;
    auVar23 = blendpd(auVar25,auVar44,2);
    auVar31._0_8_ = auVar30._8_8_ * local_158 - dVar35 * dStack_150;
    auVar31._8_8_ = auVar44._0_8_ * dStack_150 - auVar16._8_8_ * local_148;
    auVar17._8_4_ = SUB84(auVar44._8_8_,0);
    auVar17._0_8_ = auVar44._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
    dVar3 = local_118 * (double)this->_padding_;
    auVar26._0_8_ = auVar23._0_8_ * local_148 - auVar44._0_8_ * dVar36;
    auVar26._8_8_ = auVar23._8_8_ * dStack_140 - auVar17._8_8_ * dVar41;
    dVar1 = (param_4->field0_0x0)._s_0.Z;
    auVar18._8_4_ = SUB84(auVar31._8_8_,0);
    auVar18._0_8_ = auVar31._0_8_;
    auVar18._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    auVar23 = blendpd(auVar31,auVar26,2);
    dVar41 = auVar44._0_8_ * dStack_140 + dVar4 + auVar23._0_8_;
    auVar5._4_8_ = auVar23._8_8_;
    auVar5._0_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar32._0_8_ = auVar5._0_8_ << 0x20;
    auVar32._8_4_ = SUB84(dVar39,0);
    auVar32._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    dVar4 = (param_4->field0_0x0)._s_0.Y;
    dVar36 = dVar35 * dStack_140 + (double)auVar19._0_8_ + auVar18._8_8_;
    dVar39 = dVar38 * dStack_140 + (double)auVar19._8_8_ + auVar26._0_8_;
    auVar6._4_8_ = auVar26._8_8_;
    auVar6._0_4_ = (int)((ulonglong)dVar36 >> 0x20);
    auVar27._0_8_ = auVar6._0_8_ << 0x20;
    auVar27._8_4_ = SUB84(dVar39,0);
    auVar27._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    local_190._s_0.X = dVar41 * auVar32._8_8_ - dVar46 * auVar27._8_8_;
    local_1d8._s_0.Z = local_108;
    local_190._s_0.Z = dVar42 * auVar27._8_8_ - auVar32._8_8_ * dVar36;
    dVar39 = (param_4->field0_0x0)._s_0.X;
    local_190._s_0.Y = dVar46 * dVar36 - dVar41 * dVar42;
    dVar41 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_f8;
    dVar42 = dVar4 * local_190._s_0.Y + dVar39 * local_190._s_0.X + dVar1 * local_190._s_0.Z;
    dVar36 = (double)*(float *)&this->_padding_ * local_f8;
    local_198 = dVar41;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      if (this->bHitMesh == false) {
        if (this->bHitLine != false) {
          dVar41 = (param_3->field0_0x0)._s_0.X;
          dVar35 = (param_3->field0_0x0)._s_0.Y;
          dVar38 = (param_3->field0_0x0)._s_0.Z;
          dVar46 = local_138 * local_190._s_0.X + dStack_130 * local_190._s_0.Y +
                   local_128 * local_190._s_0.Z;
          dVar42 = ((dVar46 * local_190._s_0.X - dVar41) * local_190._s_0.X +
                    (dVar46 * local_190._s_0.Y - dVar35) * local_190._s_0.Y +
                   (dVar46 * local_190._s_0.Z - dVar38) * local_190._s_0.Z) / dVar42;
          if (__real_3e45798ee2308c3a <= dVar42) {
            local_1f8._s_0.Y = dVar4 * dVar42 + dVar35;
            local_1f8._s_0.X = dVar39 * dVar42 + dVar41;
            uVar34 = 0;
            local_1f8._s_0.Z = dVar1 * dVar42 + dVar38;
            GizmoMath::ClosetPointOnCircle
                      ((TVector<double> *)&local_1f8._s_0,(TVector<double> *)&local_178._s_0,
                       (TVector<double> *)&local_190._s_0,(float)dVar3,
                       (TVector<double> *)&local_1d8._s_0);
            auVar23 = *(undefined1 (*) [16])&param_3->field0_0x0;
            dVar4 = auVar23._0_8_;
            dVar39 = (param_4->field0_0x0)._s_0.X;
            dVar3 = (param_4->field0_0x0)._s_0.Y;
            auVar7._4_8_ = uVar34;
            auVar7._0_4_ = auVar23._4_4_;
            auVar33._0_8_ = auVar7._0_8_ << 0x20;
            auVar33._8_4_ = auVar23._8_4_;
            auVar33._12_4_ = auVar23._12_4_;
            dVar1 = (param_3->field0_0x0)._s_0.Z;
            dStack_1b0 = (param_4->field0_0x0)._s_0.Z;
            dVar41 = auVar33._8_8_;
            dVar35 = (local_1d8._s_0.Y - dVar41) * dVar3 + (local_1d8._s_0.X - dVar4) * dVar39 +
                     (local_1d8._s_0.Z - dVar1) * dStack_1b0;
            dVar42 = dVar1;
            if (0.0 <= dVar35) {
              dVar4 = dVar4 + dVar39 * dVar35;
              dVar41 = dVar41 + dVar3 * dVar35;
              dVar42 = dVar1 + dStack_1b0 * dVar35;
            }
            dVar4 = SQRT((dVar41 - local_1d8._s_0.Y) * (dVar41 - local_1d8._s_0.Y) +
                         (dVar4 - local_1d8._s_0.X) * (dVar4 - local_1d8._s_0.X) +
                         (dVar42 - local_1d8._s_0.Z) * (dVar42 - local_1d8._s_0.Z));
            local_1d8._s_0.Z = dVar1;
            if (dVar4 <= (double)*(float *)((longlong)&this->_padding_ + 4) + dVar36) {
              (**(code **)(this->_padding_ + 0x6b0))(this,&local_1d8);
              local_198 = (double)*(float *)((longlong)&this->_padding_ + 4) + local_198;
              if (local_198 <= local_f8) {
                local_198 = local_f8;
              }
              param_5->bIsSurfaceHit = dVar4 < local_198;
              goto LAB_1496af0ac;
            }
          }
        }
      }
      else {
        local_1f8._s_0.Y = ___xmm_ffefffffffffffff7fefffffffffffff;
        local_1f8._s_0.Z = _UNK_150a9e6d8;
        IntersectionUtil::RayCircleIntersection<double>
                  (param_3,param_4,(TVector<double> *)&local_178._s_0,dVar3 + dVar36,
                   (TVector<double> *)&local_190._s_0,(FLinearIntersection *)&local_1f8._s_0);
        if (local_1f8._0_1_ != '\0') {
          (**(code **)(this->_padding_ + 0x6b0))(this,&local_1d8,local_1f8._s_0.Y,param_5);
          IntersectionUtil::RayCircleIntersection<double>
                    (param_3,param_4,(TVector<double> *)&local_178._s_0,dVar3 + dVar41,
                     (TVector<double> *)&local_190._s_0,(FLinearIntersection *)&local_1f8._s_0);
          param_5->bIsSurfaceHit = (bool)local_1f8._0_1_;
LAB_1496af0ac:
          *(double *)__return_storage_ptr__ = local_1d8._s_0.X;
          __return_storage_ptr__->HitDepth = local_1d8._s_0.Y;
          (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_1d8._s_0.Z;
          (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_1c0;
          (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_1b8;
          *(double *)&__return_storage_ptr__->bHasHitNormal = dStack_1b0;
          __return_storage_ptr__->HitOwner = local_1a8;
          (__return_storage_ptr__->HitObject).WeakPtr = FStack_1a0;
          return __return_storage_ptr__;
        }
      }
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496b89b0

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
UGizmoElementCircle::Render
          (UGizmoElementCircle *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined8 uVar11;
  FWeakObjectPtr FVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  EGizmoElementInteractionState EVar16;
  int iVar17;
  bool bVar18;
  undefined2 uVar19;
  FRenderTraversalState *pFVar20;
  bool bVar21;
  char cVar22;
  FRenderTraversalState *pFVar23;
  FPrimitiveDrawInterface *pFVar24;
  UMaterialInterface *pUVar25;
  FMaterialRenderProxy *pFVar26;
  FLinearColor *pFVar27;
  longlong lVar28;
  FRenderTraversalState *pFVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
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
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auStackY_318 [32];
  FColor local_2b8;
  double local_2b0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  FLinearColor local_260;
  double local_250;
  double dStack_248;
  double local_240;
  FLinearColor local_238;
  FRenderTraversalState local_228;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if (param_1 == (IToolsContextRenderAPI *)0x0) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4230156943877996618>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementCircle.cpp"
                        ,0x4a,"RenderAPI");
    if (bVar21) {
code_r0x0001496b8e32:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar28 = 2;
    pFVar20 = &local_228;
    do {
      pFVar29 = param_2;
      pFVar23 = pFVar20;
      pFVar20 = (FRenderTraversalState *)
                &(pFVar23->MeshRenderState).HoverMaterial.bOverridesChildState;
      dVar1 = (pFVar29->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
      dVar3 = (pFVar29->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
      dVar4 = (pFVar29->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
      param_2 = (FRenderTraversalState *)
                &(pFVar29->MeshRenderState).HoverMaterial.bOverridesChildState;
      (pFVar23->LocalToWorldTransform).Rotation.XY.m128d_f64[0] =
           (pFVar29->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
      (pFVar23->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (pFVar29->LocalToWorldTransform).Translation.XY.m128d_f64[0];
      dVar5 = (pFVar29->LocalToWorldTransform).Translation.XY.m128d_f64[1];
      (pFVar23->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = dVar3;
      (pFVar23->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar4;
      dVar3 = (pFVar29->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
      dVar4 = (pFVar29->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
      (pFVar23->LocalToWorldTransform).Translation.XY.m128d_f64[0] = dVar1;
      (pFVar23->LocalToWorldTransform).Translation.XY.m128d_f64[1] = dVar5;
      dVar1 = (pFVar29->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
      dVar5 = (pFVar29->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
      (pFVar23->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = dVar3;
      (pFVar23->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = dVar4;
      dVar3 = (pFVar29->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
      dVar4 = (pFVar29->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
      (pFVar23->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = dVar1;
      (pFVar23->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = dVar5;
      dVar1 = pFVar29->PixelToWorldScale;
      EVar16 = pFVar29->InteractionState;
      iVar17 = (pFVar29->MeshRenderState).Material.Value.WeakPtr.ObjectIndex;
      (pFVar23->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = dVar3;
      (pFVar23->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
      uVar11 = *(undefined8 *)&(pFVar29->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
      FVar12 = (pFVar29->MeshRenderState).HoverMaterial.Value.WeakPtr;
      pFVar23->PixelToWorldScale = dVar1;
      pFVar23->InteractionState = EVar16;
      (pFVar23->MeshRenderState).Material.Value.WeakPtr.ObjectIndex = iVar17;
      *(undefined8 *)&(pFVar23->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber = uVar11;
      (pFVar23->MeshRenderState).HoverMaterial.Value.WeakPtr = FVar12;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    uVar11 = *(undefined8 *)
              &(pFVar29->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
    FVar12 = (pFVar29->MeshRenderState).SelectMaterial.Value.WeakPtr;
    uVar13 = *(undefined8 *)&(pFVar29->MeshRenderState).SelectMaterial.bOverridesChildState;
    *(undefined8 *)pFVar20 = *(undefined8 *)param_2;
    *(undefined8 *)&(pFVar23->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar11;
    uVar11 = *(undefined8 *)
              &(pFVar29->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
    uVar14 = *(undefined8 *)&(pFVar29->MeshRenderState).VertexColor.Value.field0_0x0;
    (pFVar23->MeshRenderState).SelectMaterial.Value.WeakPtr = FVar12;
    *(undefined8 *)&(pFVar23->MeshRenderState).SelectMaterial.bOverridesChildState = uVar13;
    uVar13 = *(undefined8 *)((longlong)&(pFVar29->MeshRenderState).VertexColor.Value.field0_0x0 + 8)
    ;
    uVar15 = *(undefined8 *)&(pFVar29->MeshRenderState).VertexColor.bHasValue;
    *(undefined8 *)&(pFVar23->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber =
         uVar11;
    *(undefined8 *)&(pFVar23->MeshRenderState).VertexColor.Value.field0_0x0 = uVar14;
    uVar11 = *(undefined8 *)
              ((longlong)&(pFVar29->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
    uVar14 = *(undefined8 *)
              ((longlong)&(pFVar29->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
    *(undefined8 *)((longlong)&(pFVar23->MeshRenderState).VertexColor.Value.field0_0x0 + 8) = uVar13
    ;
    *(undefined8 *)&(pFVar23->MeshRenderState).VertexColor.bHasValue = uVar15;
    uVar13 = *(undefined8 *)&(pFVar29->MeshRenderState).InteractVertexColor.Value.field0_0x0;
    uVar15 = *(undefined8 *)
              ((longlong)&(pFVar29->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8);
    *(undefined8 *)((longlong)&(pFVar23->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4) =
         uVar11;
    *(undefined8 *)((longlong)&(pFVar23->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc) =
         uVar14;
    bVar21 = (pFVar29->MeshRenderState).InteractVertexColor.bHasValue;
    bVar18 = (pFVar29->MeshRenderState).InteractVertexColor.bOverridesChildState;
    uVar19 = *(undefined2 *)&(pFVar29->MeshRenderState).InteractVertexColor.field_0x12;
    fVar30 = (pFVar29->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
    fVar31 = (pFVar29->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
    fVar10 = (pFVar29->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
    *(undefined8 *)&(pFVar23->MeshRenderState).InteractVertexColor.Value.field0_0x0 = uVar13;
    *(undefined8 *)((longlong)&(pFVar23->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8)
         = uVar15;
    (pFVar23->MeshRenderState).InteractVertexColor.bHasValue = bVar21;
    (pFVar23->MeshRenderState).InteractVertexColor.bOverridesChildState = bVar18;
    *(undefined2 *)&(pFVar23->MeshRenderState).InteractVertexColor.field_0x12 = uVar19;
    (pFVar23->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R = fVar30;
    (pFVar23->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G = fVar31;
    (pFVar23->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B = fVar10;
    cVar22 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->_padding_,&local_228);
    if (cVar22 != '\0') {
      local_250 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0];
      dStack_248 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1];
      local_240 = local_228.LocalToWorldTransform.Scale3D.ZW.m128d_f64[0];
      dVar5 = UGizmoElementCircleBase::GetCurrentRadius((UGizmoElementCircleBase *)this);
      auVar59._0_8_ =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z *
           local_228.LocalToWorldTransform.Scale3D.ZW.m128d_f64[0];
      auVar59._8_8_ = local_228.LocalToWorldTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar8 = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[0];
      dVar7 = local_228.LocalToWorldTransform.Rotation.XY.m128d_f64[1];
      auVar66 = blendpd((undefined1  [16])local_228.LocalToWorldTransform.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64,2);
      dVar50 = local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0] *
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1] =
           local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1] *
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar32 = (undefined4)
               ((ulonglong)local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1] >> 0x20);
      dVar9 = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1];
      auVar56._8_4_ = SUB84(local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1],0);
      auVar56._0_8_ = dVar50;
      auVar56._12_4_ = uVar32;
      auVar39._8_4_ = SUB84(local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1],0);
      auVar39._0_8_ = dVar50;
      auVar39._12_4_ = uVar32;
      auVar33 = blendpd(auVar39,auVar59,2);
      dVar6 = local_228.LocalToWorldTransform.Rotation.XY.m128d_f64[0];
      auVar57._0_8_ = auVar56._8_8_ * dVar6 - dVar7 * dVar50;
      auVar57._8_8_ =
           auVar59._0_8_ * dVar7 - dVar8 * local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1];
      dVar3 = auVar66._0_8_;
      dVar4 = auVar66._8_8_;
      auVar51._8_4_ = SUB84(auVar57._8_8_,0);
      auVar51._0_8_ = auVar57._0_8_;
      auVar51._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar34._0_8_ = auVar33._0_8_ * dVar8 - dVar3 * auVar59._0_8_;
      auVar34._8_8_ = auVar33._8_8_ * dVar9 - dVar4 * auVar59._8_8_;
      auVar33 = blendpd(auVar57,auVar34,2);
      auVar58._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar58._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      dVar49 = auVar51._8_8_ + auVar51._8_8_;
      dVar55 = auVar34._0_8_ + auVar34._0_8_;
      auVar43._8_4_ = SUB84(dVar55,0);
      auVar43._0_8_ = dVar49;
      uVar32 = (undefined4)((ulonglong)dVar55 >> 0x20);
      auVar43._12_4_ = uVar32;
      auVar35._8_4_ = SUB84(dVar55,0);
      auVar35._0_8_ = dVar49;
      auVar35._12_4_ = uVar32;
      auVar33 = blendpd(auVar35,auVar58,2);
      auVar44._0_8_ = auVar43._8_8_ * dVar6 - dVar49 * dVar7;
      auVar44._8_8_ = auVar58._0_8_ * dVar7 - dVar55 * dVar8;
      auVar36._0_8_ = auVar33._0_8_ * dVar8 - auVar58._0_8_ * dVar3;
      auVar36._8_8_ = auVar33._8_8_ * dVar9 - auVar58._8_8_ * dVar4;
      dVar1 = (double)this->_padding_;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = dVar1;
      auVar33 = blendpd(auVar44,auVar36,2);
      local_278._s_0.Z =
           auVar58._0_8_ * dVar9 + auVar59._0_8_ + auVar33._0_8_ +
           local_228.LocalToWorldTransform.Translation.ZW.m128d_f64[0];
      auVar33._0_8_ = this->_padding_;
      auVar33._8_8_ = this->_padding_;
      local_278._s_0.X =
           dVar49 * dVar9 + dVar50 + auVar44._8_8_ +
           local_228.LocalToWorldTransform.Translation.XY.m128d_f64[0];
      local_278._s_0.Y =
           dVar55 * dVar9 + local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[1] + auVar36._0_8_
           + local_228.LocalToWorldTransform.Translation.XY.m128d_f64[1];
      auVar66 = blendpd(auVar33,auVar60,2);
      auVar63._0_8_ = (double)auVar33._8_8_ * dVar6 - dVar7 * (double)auVar33._0_8_;
      auVar63._8_8_ = dVar1 * dVar7 - dVar8 * (double)auVar33._8_8_;
      auVar37._0_8_ = auVar66._0_8_ * dVar8 - dVar3 * dVar1;
      auVar37._8_8_ = auVar66._8_8_ * dVar9 - dVar4 * 0.0;
      auVar52._8_4_ = SUB84(auVar63._8_8_,0);
      auVar52._0_8_ = auVar63._0_8_;
      auVar52._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
      auVar66 = blendpd(auVar63,auVar37,2);
      dVar50 = auVar52._8_8_ + auVar52._8_8_;
      dVar49 = auVar37._0_8_ + auVar37._0_8_;
      auVar64._0_8_ = auVar66._0_8_ + auVar66._0_8_;
      auVar64._8_8_ = auVar66._8_8_ + auVar66._8_8_;
      auVar45._8_4_ = SUB84(dVar49,0);
      auVar45._0_8_ = dVar50;
      uVar32 = (undefined4)((ulonglong)dVar49 >> 0x20);
      auVar45._12_4_ = uVar32;
      auVar38._8_4_ = SUB84(dVar49,0);
      auVar38._0_8_ = dVar50;
      auVar38._12_4_ = uVar32;
      auVar39 = blendpd(auVar38,auVar64,2);
      auVar66._0_8_ = this->_padding_;
      auVar66._8_8_ = this->_padding_;
      auVar46._0_8_ = auVar45._8_8_ * dVar6 - dVar50 * dVar7;
      auVar46._8_8_ = auVar64._0_8_ * dVar7 - dVar49 * dVar8;
      auVar40._0_8_ = auVar39._0_8_ * dVar8 - auVar64._0_8_ * dVar3;
      auVar40._8_8_ = auVar39._8_8_ * dVar9 - auVar64._8_8_ * dVar4;
      local_290._s_0.X = dVar50 * dVar9 + (double)auVar33._0_8_ + auVar46._8_8_;
      local_290._s_0.Y = dVar49 * dVar9 + (double)auVar33._8_8_ + auVar40._0_8_;
      auVar33 = blendpd(auVar46,auVar40,2);
      local_290._s_0.Z = auVar64._0_8_ * dVar9 + dVar1 + auVar33._0_8_;
      dVar1 = (double)this->_padding_;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = dVar1;
      auVar33 = blendpd(auVar66,auVar65,2);
      auVar61._0_8_ = (double)auVar66._8_8_ * dVar6 - dVar7 * (double)auVar66._0_8_;
      auVar61._8_8_ = dVar1 * dVar7 - dVar8 * (double)auVar66._8_8_;
      auVar41._0_8_ = auVar33._0_8_ * dVar8 - dVar3 * dVar1;
      auVar41._8_8_ = auVar33._8_8_ * dVar9 - dVar4 * 0.0;
      dVar50 = auVar61._8_8_ + auVar61._8_8_;
      dVar49 = auVar41._0_8_ + auVar41._0_8_;
      uVar32 = (undefined4)((ulonglong)dVar49 >> 0x20);
      auVar33 = blendpd(auVar61,auVar41,2);
      auVar62._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar62._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      auVar42._8_4_ = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1]._0_4_;
      auVar42._0_8_ = dVar9;
      auVar42._12_4_ = local_228.LocalToWorldTransform.Rotation.ZW.m128d_f64[1]._4_4_;
      auVar53._8_4_ = SUB84(dVar49,0);
      auVar53._0_8_ = dVar50;
      auVar53._12_4_ = uVar32;
      auVar47._8_4_ = SUB84(dVar49,0);
      auVar47._0_8_ = dVar50;
      auVar47._12_4_ = uVar32;
      auVar33 = blendpd(auVar47,auVar62,2);
      auVar54._0_8_ = auVar53._8_8_ * dVar6 - dVar7 * dVar50;
      auVar54._8_8_ = auVar62._0_8_ * dVar7 - dVar8 * dVar49;
      auVar48._0_8_ = auVar33._0_8_ * dVar8 - dVar3 * auVar62._0_8_;
      auVar48._8_8_ = auVar33._8_8_ * dVar9 - dVar4 * auVar62._8_8_;
      auVar33 = blendpd(auVar54,auVar48,2);
      local_2a8._s_0.X = dVar9 * dVar50 + (double)auVar66._0_8_ + auVar54._8_8_;
      local_2a8._s_0.Y = auVar42._8_8_ * dVar49 + (double)auVar66._8_8_ + auVar48._0_8_;
      local_2a8._s_0.Z = dVar9 * auVar62._0_8_ + dVar1 + auVar33._0_8_;
      pFVar24 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
      lVar28 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
      if (lVar28 == 0) {
        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4230156943877996635>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementCircle.cpp"
                            ,0x5b,"View");
        if (bVar21) goto code_r0x0001496b8e32;
      }
      else {
        fVar30 = (float)(**(code **)(this->_padding_ + 0x6b8))
                                  (this,*(double *)(lVar28 + 0x428) <= __real_3ff0000000000000 &&
                                        __real_3ff0000000000000 != *(double *)(lVar28 + 0x428));
        if ((this->bDrawMesh != false) &&
           (pUVar25 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal
                                (&local_228.MeshRenderState,local_228.InteractionState),
           pUVar25 != (UMaterialInterface *)0x0)) {
          if (this->bDrawLine != false) {
            fVar31 = (float)(**(code **)(this->_padding_ + 0x498))(this);
            local_2b0 = (double)(fVar31 - fVar30);
            (**(code **)(this->_padding_ + 0x688))(this,lVar28,&local_2b0,&local_228);
          }
          FGizmoElementMeshRenderStateAttributes::GetVertexColorInternal
                    (&local_228.MeshRenderState,&local_260,local_228.InteractionState);
          FLinearColor::ToFColorSRGB(&local_260);
          pFVar26 = (FMaterialRenderProxy *)(**(code **)(pUVar25->_padding_ + 0x310))(pUVar25);
          UE::InteractiveToolsFramework::Private::GizmoElementCircleLocals::DrawDisc
                    (pFVar24,(TVector<double> *)&local_278._s_0,(TVector<double> *)&local_290._s_0,
                     (TVector<double> *)&local_2a8._s_0,local_2b8,
                     dVar5 * local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0],
                     (int)this->_padding_,pFVar26,'\x01');
        }
        if (this->bDrawLine != false) {
          pFVar27 = UGizmoElementBase::FRenderTraversalState::GetCurrentLineColor
                              (&local_228,&local_238);
          DrawCircle(pFVar24,(TVector<double> *)&local_278._s_0,(TVector<double> *)&local_290._s_0,
                     (TVector<double> *)&local_2a8._s_0,pFVar27,
                     dVar5 * local_228.LocalToWorldTransform.Scale3D.XY.m128d_f64[0],
                     (int)this->_padding_,'\x01',fVar30,fVar30 + __real_3f800000,
                     SUB81(this->_padding_,0));
        }
      }
    }
  }
  return;
}

// SetDrawLine @ 1496bd4d0

void __thiscall UGizmoElementCircle::SetDrawLine(UGizmoElementCircle *this,bool param_1)

{
  this->bDrawLine = param_1;
  return;
}

// SetDrawMesh @ 1496bd500

void __thiscall UGizmoElementCircle::SetDrawMesh(UGizmoElementCircle *this,bool param_1)

{
  this->bDrawMesh = param_1;
  return;
}

// SetHitLine @ 1496bd9a0

void __thiscall UGizmoElementCircle::SetHitLine(UGizmoElementCircle *this,bool param_1)

{
  this->bHitLine = param_1;
  return;
}

// SetHitMesh @ 1496bd9c0

void __thiscall UGizmoElementCircle::SetHitMesh(UGizmoElementCircle *this,bool param_1)

{
  this->bHitMesh = param_1;
  return;
}

// StaticRegisterNativesUGizmoElementCircle @ 1496c2920

void __cdecl UGizmoElementCircle::StaticRegisterNativesUGizmoElementCircle(void)

{
  return;
}

