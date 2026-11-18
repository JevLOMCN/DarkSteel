// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 24

// StaticClass @ 149670a20

UClass * __cdecl UGizmoElementTorus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementTorus",
               &Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton,
               StaticRegisterNativesUGizmoElementTorus,0x2f0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementTorus>,
               InternalVTableHelperCtorCaller<UGizmoElementTorus>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton;
}

// UGizmoElementTorus @ 149685350

UGizmoElementTorus * __thiscall
UGizmoElementTorus::UGizmoElementTorus(UGizmoElementTorus *this,FVTableHelper *param_1)

{
  UGizmoElementCircleBase::UGizmoElementCircleBase((UGizmoElementCircleBase *)this,param_1);
  this->NumInnerSlices = 8;
  this->_padding_ = (longlong)&___7UGizmoElementTorus__6B_;
  this->InnerRadius = 5.0;
  (this->InnerRadiusMultiplier).Default.bIsSet = false;
  (this->InnerRadiusMultiplier).Hover.bIsSet = false;
  (this->InnerRadiusMultiplier).Interact.bIsSet = false;
  (this->InnerRadiusMultiplier).Select.bIsSet = false;
  (this->InnerRadiusMultiplier).Subdue.bIsSet = false;
  this->bEndCaps = false;
  return this;
}

// UGizmoElementTorus @ 1496853c0

UGizmoElementTorus * __thiscall
UGizmoElementTorus::UGizmoElementTorus(UGizmoElementTorus *this,FObjectInitializer *param_1)

{
  UGizmoElementCircleBase::UGizmoElementCircleBase((UGizmoElementCircleBase *)this,param_1);
  this->NumInnerSlices = 8;
  this->_padding_ = (longlong)&___7UGizmoElementTorus__6B_;
  this->InnerRadius = 5.0;
  (this->InnerRadiusMultiplier).Default.bIsSet = false;
  (this->InnerRadiusMultiplier).Hover.bIsSet = false;
  (this->InnerRadiusMultiplier).Interact.bIsSet = false;
  (this->InnerRadiusMultiplier).Select.bIsSet = false;
  (this->InnerRadiusMultiplier).Subdue.bIsSet = false;
  this->bEndCaps = false;
  return this;
}

// ~UGizmoElementTorus @ 149689ca0

void __thiscall UGizmoElementTorus::~UGizmoElementTorus(UGizmoElementTorus *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCurrentInnerRadius @ 1496a08d0

double __thiscall UGizmoElementTorus::GetCurrentInnerRadius(UGizmoElementTorus *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->InnerRadius;
  dVar2 = FGizmoPerStateValueDouble::GetValueForState
                    (&this->InnerRadiusMultiplier,(EGizmoElementInteractionState)this->_padding_);
  if (__real_3e45798ee0000000 < dVar1) {
    return (double)(float)(dVar1 * (double)(float)dVar2);
  }
  return (double)(float)dVar2;
}

// GetEndCaps @ 1496a2c40

bool __thiscall UGizmoElementTorus::GetEndCaps(UGizmoElementTorus *this)

{
  return this->bEndCaps;
}

// GetHoverInnerRadiusMultiplier @ 1496a2e10

double __thiscall UGizmoElementTorus::GetHoverInnerRadiusMultiplier(UGizmoElementTorus *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->InnerRadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->InnerRadiusMultiplier;
  }
  if ((this->InnerRadiusMultiplier).Hover.bIsSet != false) {
    return (this->InnerRadiusMultiplier).Hover.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// GetInnerRadius @ 1496a2f60

double __thiscall UGizmoElementTorus::GetInnerRadius(UGizmoElementTorus *this)

{
  return this->InnerRadius;
}

// GetInteractInnerRadiusMultiplier @ 1496a2fc0

double __thiscall UGizmoElementTorus::GetInteractInnerRadiusMultiplier(UGizmoElementTorus *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->InnerRadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->InnerRadiusMultiplier;
  }
  if ((this->InnerRadiusMultiplier).Interact.bIsSet != false) {
    return (this->InnerRadiusMultiplier).Interact.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// GetNumInnerSlices @ 1496a3880

int __thiscall UGizmoElementTorus::GetNumInnerSlices(UGizmoElementTorus *this)

{
  return this->NumInnerSlices;
}

// GetPrivateStaticClass @ 1496a57d0

UClass * __cdecl UGizmoElementTorus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementTorus",
               &Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton,
               StaticRegisterNativesUGizmoElementTorus,0x2f0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementTorus>,
               InternalVTableHelperCtorCaller<UGizmoElementTorus>,local_res8,
               UGizmoElementCircleBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementTorus.InnerSingleton;
}

// GetSelectInnerRadiusMultiplier @ 1496a7d80

double __thiscall UGizmoElementTorus::GetSelectInnerRadiusMultiplier(UGizmoElementTorus *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->InnerRadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->InnerRadiusMultiplier;
  }
  if ((this->InnerRadiusMultiplier).Select.bIsSet != false) {
    return (this->InnerRadiusMultiplier).Select.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// GetSubdueInnerRadiusMultiplier @ 1496a8d10

double __thiscall UGizmoElementTorus::GetSubdueInnerRadiusMultiplier(UGizmoElementTorus *this)

{
  FGizmoPerStateValueDouble *pFVar1;
  
  pFVar1 = (FGizmoPerStateValueDouble *)&FGizmoPerStateValueDouble::ValueDefault;
  if ((this->InnerRadiusMultiplier).Default.bIsSet != false) {
    pFVar1 = &this->InnerRadiusMultiplier;
  }
  if ((this->InnerRadiusMultiplier).Subdue.bIsSet != false) {
    return (this->InnerRadiusMultiplier).Subdue.TypedValue;
  }
  return (pFVar1->Default).TypedValue;
}

// IsGlancingAngle @ 1496ad3e0

bool __thiscall
UGizmoElementTorus::IsGlancingAngle
          (UGizmoElementTorus *this,UGizmoViewContext *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_48 [48];
  
  if ((param_1 == (UGizmoViewContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementTorus.cpp"
                         ,0xfb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(&param_1->field_0x28);
  if (cVar5 == '\0') {
    pdVar6 = (double *)
             (**(code **)(*(longlong *)&param_1->field_0x28 + 0x18))(&param_1->field_0x28,local_48);
    uVar10 = *pdVar6;
    uVar2 = pdVar6[1];
    uVar7 = pdVar6[2];
  }
  else {
    dVar14 = (param_2->field0_0x0)._s_0.X - (param_1->ViewLocation).field0_0x0._s_0.X;
    dVar13 = (param_2->field0_0x0)._s_0.Z - (param_1->ViewLocation).field0_0x0._s_0.Z;
    dVar11 = (param_2->field0_0x0)._s_0.Y - (param_1->ViewLocation).field0_0x0._s_0.Y;
    dVar12 = dVar11 * dVar11 + dVar14 * dVar14 + dVar13 * dVar13;
    uVar10 = dVar14;
    uVar2 = dVar11;
    uVar7 = dVar13;
    if ((dVar12 != __real_3ff0000000000000) &&
       (uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar12)) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      uVar10 = dVar14 * dVar12;
      uVar2 = dVar11 * dVar12;
      uVar7 = dVar13 * dVar12;
    }
  }
  dVar11 = this->InnerRadius;
  auVar8._0_8_ = (double)uVar7 * (param_3->field0_0x0)._s_0.Z;
  auVar8._8_8_ = 0;
  dVar12 = (double)uVar2 * (param_3->field0_0x0)._s_0.Y +
           (double)uVar10 * (param_3->field0_0x0)._s_0.X + auVar8._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar11 * dVar11 + (double)this->_padding_ * (double)this->_padding_;
  auVar9 = sqrtpd(auVar8,auVar9);
  dVar11 = (dVar11 * __real_3ff8000000000000) / auVar9._0_8_;
  if (dVar11 <= __real_3faa9fbe80000000) {
    dVar11 = __real_3faa9fbe80000000;
  }
  return (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar11;
}

// LineTrace @ 1496b0ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputRayHit * __thiscall
UGizmoElementTorus::LineTrace
          (UGizmoElementTorus *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1,
          FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  undefined1 *puVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  UGizmoViewContext *pUVar6;
  undefined8 uVar7;
  FLineTraceOutput *pFVar8;
  char cVar9;
  bool bVar10;
  TVector<double> *pTVar11;
  double *pdVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  byte bVar16;
  undefined4 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined4 uVar28;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
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
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar64;
  undefined4 uVar65;
  double dVar66;
  undefined4 uVar69;
  undefined1 auVar67 [16];
  undefined4 uVar70;
  undefined1 auVar68 [16];
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStackY_2e8 [32];
  bool local_2a8;
  byte local_2a7;
  undefined1 local_2a0 [24];
  double local_288;
  double local_280;
  double local_278;
  double dStack_270;
  undefined8 local_268;
  UGizmoViewContext *local_260;
  double local_258;
  TVector<double>_u_0 local_250;
  double local_238;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  double local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  FInputRayHit *local_1c8;
  FLineTraceOutput *local_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  void *local_178;
  FWeakObjectPtr FStack_170;
  double local_168;
  double dStack_160;
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
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_168 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_160 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_158 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_150 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_148 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_140 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_128 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_120 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_138 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_130 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_1c0 = param_5;
  local_108 = param_2->PixelToWorldScale;
  uStack_100._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_100._1_1_ = param_2->HitSortType;
  uStack_100._2_6_ = *(undefined6 *)&param_2->field_0x6a;
  local_118 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_110 = (param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
  local_260 = param_1;
  local_1c8 = __return_storage_ptr__;
  cVar9 = (**(code **)(this->_padding_ + 0x6a8))(this,param_1,&this->_padding_,&local_168);
  dVar50 = local_118;
  dVar58 = local_128;
  if (cVar9 == '\0') goto LAB_1496b1cdd;
  local_2a0._16_8_ = local_118;
  local_258 = (double)*(float *)&this->_padding_ * local_108;
  dVar18 = UGizmoElementCircleBase::GetCurrentRadius((UGizmoElementCircleBase *)this);
  local_2a0._16_8_ = dVar50;
  dVar18 = dVar18 * dVar58;
  local_280 = GetCurrentInnerRadius(this);
  auVar5._8_8_ = dStack_150;
  auVar5._0_8_ = local_158;
  auVar36._0_8_ = this->_padding_;
  auVar36._8_8_ = this->_padding_;
  dVar50 = (double)this->_padding_;
  local_280 = local_280 * dVar58;
  auVar4._8_8_ = dStack_160;
  auVar4._0_8_ = local_168;
  local_218._s_0.X = local_148;
  local_218._s_0.Y = dStack_140;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = dVar50;
  auVar32 = blendpd(auVar36,auVar67,2);
  local_218._s_0.Z = local_138;
  auVar67 = blendpd(auVar4,auVar5,2);
  auVar51._0_8_ = (double)auVar36._8_8_ * local_168 - (double)auVar36._0_8_ * dStack_160;
  auVar51._8_8_ = dVar50 * dStack_160 - (double)auVar36._8_8_ * local_158;
  dVar42 = auVar67._0_8_;
  dVar43 = auVar67._8_8_;
  auVar33._0_8_ = auVar32._0_8_ * local_158 - dVar50 * dVar42;
  auVar33._8_8_ = auVar32._8_8_ * dStack_150 - dVar43 * 0.0;
  auVar32 = blendpd(auVar51,auVar33,2);
  auVar52._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar52._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  dVar58 = auVar51._8_8_ + auVar51._8_8_;
  dVar31 = auVar33._0_8_ + auVar33._0_8_;
  uVar17 = SUB84(dVar31,0);
  uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar45._8_4_ = uVar17;
  auVar45._0_8_ = dVar58;
  auVar45._12_4_ = uVar28;
  auVar21._8_4_ = uVar17;
  auVar21._0_8_ = dVar58;
  auVar21._12_4_ = uVar28;
  auVar34._8_4_ = uVar17;
  auVar34._0_8_ = dVar58;
  auVar34._12_4_ = uVar28;
  auVar32 = blendpd(auVar34,auVar52,2);
  auVar46._0_8_ = auVar45._8_8_ * local_168 - dVar58 * dStack_160;
  auVar46._8_8_ = auVar52._0_8_ * dStack_160 - auVar21._8_8_ * local_158;
  auVar22._8_4_ = SUB84(auVar52._8_8_,0);
  auVar22._0_8_ = auVar52._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
  auVar35._0_8_ = auVar32._0_8_ * local_158 - auVar52._0_8_ * dVar42;
  auVar35._8_8_ = auVar32._8_8_ * dStack_150 - auVar22._8_8_ * dVar43;
  auVar23._8_4_ = SUB84(auVar46._8_8_,0);
  auVar23._0_8_ = auVar46._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
  auVar32 = blendpd(auVar46,auVar35,2);
  dVar50 = auVar52._0_8_ * dStack_150 + dVar50 + auVar32._0_8_;
  dVar55 = auVar52._8_8_ * dStack_150 + 0.0 + auVar32._8_8_;
  auVar32._0_8_ = this->_padding_;
  auVar32._8_8_ = this->_padding_;
  dVar20 = dVar58 * dStack_150 + (double)auVar36._0_8_ + auVar23._8_8_;
  dVar44 = dVar31 * dStack_150 + (double)auVar36._8_8_ + auVar35._0_8_;
  uVar64 = (undefined4)((ulonglong)dVar44 >> 0x20);
  dVar58 = (double)this->_padding_;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = dVar58;
  auVar36 = blendpd(auVar32,auVar53,2);
  auVar60._0_8_ = (double)auVar32._8_8_ * local_168 - (double)auVar32._0_8_ * dStack_160;
  auVar60._8_8_ = dVar58 * dStack_160 - (double)auVar32._8_8_ * local_158;
  local_2a0._8_4_ = SUB84(dVar44,0);
  local_2a0._0_8_ = dVar20;
  local_2a0._12_4_ = uVar64;
  puVar1 = &param_1->field_0x28;
  uVar17 = SUB84(__real_bff0000000000000,0);
  uVar28 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  local_2a7 = 0;
  auVar37._0_8_ = auVar36._0_8_ * local_158 - dVar58 * dVar42;
  auVar37._8_8_ = auVar36._8_8_ * dStack_150 - dVar43 * 0.0;
  auVar36 = blendpd(auVar60,auVar37,2);
  auVar61._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar61._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  dVar31 = auVar60._8_8_ + auVar60._8_8_;
  dVar66 = auVar37._0_8_ + auVar37._0_8_;
  uVar56 = SUB84(dVar66,0);
  uVar57 = (undefined4)((ulonglong)dVar66 >> 0x20);
  auVar47._8_4_ = uVar56;
  auVar47._0_8_ = dVar31;
  auVar47._12_4_ = uVar57;
  auVar24._8_4_ = uVar56;
  auVar24._0_8_ = dVar31;
  auVar24._12_4_ = uVar57;
  auVar38._8_4_ = uVar56;
  auVar38._0_8_ = dVar31;
  auVar38._12_4_ = uVar57;
  auVar36 = blendpd(auVar38,auVar61,2);
  auVar48._0_8_ = auVar47._8_8_ * local_168 - dVar31 * dStack_160;
  auVar48._8_8_ = auVar61._0_8_ * dStack_160 - auVar24._8_8_ * local_158;
  auVar25._8_4_ = SUB84(auVar61._8_8_,0);
  auVar25._0_8_ = auVar61._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar62._8_4_ = SUB84(dVar55,0);
  auVar62._0_8_ = dVar50;
  auVar62._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
  auVar39._0_8_ = auVar36._0_8_ * local_158 - auVar61._0_8_ * dVar42;
  auVar39._8_8_ = auVar36._8_8_ * dStack_150 - auVar25._8_8_ * dVar43;
  auVar26._8_4_ = SUB84(auVar48._8_8_,0);
  auVar26._0_8_ = auVar48._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  auVar36 = blendpd(auVar48,auVar39,2);
  local_250._s_0.Z = auVar61._0_8_ * dStack_150 + dVar58 + auVar36._0_8_;
  dVar58 = dVar31 * dStack_150 + (double)auVar32._0_8_ + auVar26._8_8_;
  dVar31 = dVar66 * dStack_150 + (double)auVar32._8_8_ + auVar39._0_8_;
  auVar2._4_8_ = auVar36._8_8_;
  auVar2._0_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar49._0_8_ = auVar2._0_8_ << 0x20;
  auVar49._8_4_ = SUB84(dVar44,0);
  auVar49._12_4_ = uVar64;
  auVar63._8_8_ = auVar62._8_8_;
  auVar3._4_8_ = auVar39._8_8_;
  auVar3._0_4_ = (int)((ulonglong)dVar58 >> 0x20);
  auVar40._0_8_ = auVar3._0_8_ << 0x20;
  auVar40._8_4_ = SUB84(dVar31,0);
  auVar40._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  dVar31 = local_250._s_0.Z * auVar49._8_8_ - dVar50 * auVar40._8_8_;
  auVar63._0_8_ = dVar50 * dVar58 - local_250._s_0.Z * dVar20;
  dVar66 = dVar20 * auVar40._8_8_ - auVar49._8_8_ * dVar58;
  local_2a0._16_8_ = dVar50;
  local_1f8._s_0.X = dVar31;
  local_1f8._s_0.Y = auVar63._0_8_;
  local_1f8._s_0.Z = dVar66;
  bVar10 = (bool)(**(code **)(*(longlong *)&param_1->field_0x28 + 0x40))(puVar1);
  pTVar11 = (TVector<double> *)(**(code **)(*(longlong *)puVar1 + 0x18))(puVar1,&local_250);
  pUVar6 = local_260;
  bVar10 = UGizmoElementCircleBase::IsPartial
                     ((UGizmoElementCircleBase *)this,(TVector<double> *)&local_218._s_0,
                      (TVector<double> *)&local_1f8._s_0,&local_260->ViewLocation,pTVar11,bVar10);
  dVar58 = (double)this->_padding_ - (double)this->_padding_;
  local_2a8 = bVar10;
  local_238 = dVar58;
  if (bVar10) {
    if (dVar58 <= 0.0) goto LAB_1496b1cdd;
    UE::Math::TVector<double>::RotateAngleAxisRad
              ((TVector<double> *)local_2a0,(TVector<double> *)&local_250._s_0,
               (double)this->_padding_ * __real_3f91df46a2529d39,(TVector<double> *)&local_1f8._s_0)
    ;
    pTVar11 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_250._s_0,(TVector<double> *)local_2a0,
                         __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    dVar20 = (pTVar11->field0_0x0)._s_0.X;
    dVar44 = *(double *)((longlong)&pTVar11->field0_0x0 + 8);
    dVar50 = (pTVar11->field0_0x0)._s_0.Z;
  }
  uVar56 = (undefined4)((ulonglong)dVar44 >> 0x20);
  unique0x1000082b = SUB84(dVar44,0);
  local_278 = dVar20;
  unique0x1000082f = uVar56;
  local_288 = dVar50;
  local_268 = dVar50;
  cVar9 = (**(code **)(*(longlong *)puVar1 + 0x40))(puVar1);
  uVar7 = local_218._s_0.Z;
  uVar19 = local_218._s_0.Y;
  uVar30 = local_218._s_0.X;
  if (cVar9 == '\0') {
    pdVar12 = (double *)(**(code **)(*(longlong *)puVar1 + 0x18))(puVar1,local_2a0);
    local_2a0._16_8_ = pdVar12[2];
    uVar29 = *pdVar12;
    uVar59 = pdVar12[1];
  }
  else {
    uVar29 = local_218._s_0.X - (pUVar6->ViewLocation).field0_0x0._s_0.X;
    uVar59 = local_218._s_0.Y - (pUVar6->ViewLocation).field0_0x0._s_0.Y;
    local_2a0._16_8_ = local_218._s_0.Z - (pUVar6->ViewLocation).field0_0x0._s_0.Z;
    dVar50 = (double)uVar59 * (double)uVar59 + (double)uVar29 * (double)uVar29 +
             (double)local_2a0._16_8_ * (double)local_2a0._16_8_;
    dVar58 = local_238;
    if (dVar50 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar50) {
        local_200 = __real_3ff0000000000000 / SQRT(dVar50);
        uVar29 = local_200 * (double)uVar29;
        local_2a0._16_8_ = local_200 * (double)local_2a0._16_8_;
        uVar59 = local_200 * (double)uVar59;
      }
      else {
        local_2a0._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar59 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
    }
  }
  dVar55 = __real_3e45798ee2308c3a;
  dVar50 = this->InnerRadius;
  auVar27._0_8_ = (double)local_2a0._16_8_ * dVar66;
  auVar27._8_8_ = 0;
  auVar54._0_8_ = dVar50 * dVar50 + (double)this->_padding_ * (double)this->_padding_;
  auVar54._8_8_ = 0;
  dVar42 = (double)uVar29 * dVar31 + auVar63._0_8_ * (double)uVar59 + auVar27._0_8_;
  auVar36 = sqrtpd(auVar27,auVar54);
  dVar50 = (dVar50 * __real_3ff8000000000000) / auVar36._0_8_;
  if (dVar50 <= __real_3faa9fbe80000000) {
    dVar50 = __real_3faa9fbe80000000;
  }
  if (dVar50 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar58 = (param_3->field0_0x0)._s_0.X;
    dVar50 = (param_3->field0_0x0)._s_0.Y;
    dVar20 = (param_4->field0_0x0)._s_0.X;
    dVar44 = (param_4->field0_0x0)._s_0.Y;
    dVar42 = (param_4->field0_0x0)._s_0.Z;
    dVar43 = (double)uVar30 * dVar31 + auVar63._0_8_ * (double)uVar19 + (double)uVar7 * dVar66;
    dVar31 = ((dVar43 * auVar63._0_8_ - dVar50) * auVar63._0_8_ +
              (dVar43 * dVar31 - dVar58) * dVar31 +
             (dVar43 * dVar66 - (param_3->field0_0x0)._s_0.Z) * dVar66) /
             (auVar63._0_8_ * dVar44 + dVar31 * dVar20 + dVar66 * dVar42);
    if (dVar31 < __real_3e45798ee2308c3a) goto LAB_1496b1cdd;
    local_2a0._16_8_ = dVar42 * dVar31 + (param_3->field0_0x0)._s_0.Z;
    local_2a0._8_8_ = dVar44 * dVar31 + dVar50;
    local_2a0._0_8_ = dVar20 * dVar31 + dVar58;
    GizmoMath::ClosetPointOnCircle
              ((TVector<double> *)local_2a0,(TVector<double> *)&local_218._s_0,
               (TVector<double> *)&local_1f8._s_0,(float)dVar18,(TVector<double> *)&local_250._s_0);
    dVar50 = (param_3->field0_0x0)._s_0.X;
    dVar31 = (param_3->field0_0x0)._s_0.Y;
    dVar66 = (param_4->field0_0x0)._s_0.X;
    dVar20 = (param_4->field0_0x0)._s_0.Y;
    local_198 = (param_3->field0_0x0)._s_0.Z;
    dStack_180 = (param_4->field0_0x0)._s_0.Z;
    dVar44 = (local_250._s_0.Y - dVar31) * dVar20 + (local_250._s_0.X - dVar50) * dVar66 +
             (local_250._s_0.Z - local_198) * dStack_180;
    dVar58 = local_198;
    if (0.0 <= dVar44) {
      dVar50 = dVar50 + dVar44 * dVar66;
      dVar31 = dVar31 + dVar44 * dVar20;
      dVar58 = local_198 + dVar44 * dStack_180;
    }
    dVar66 = SQRT((dVar31 - local_250._s_0.Y) * (dVar31 - local_250._s_0.Y) +
                  (dVar50 - local_250._s_0.X) * (dVar50 - local_250._s_0.X) +
                  (dVar58 - local_250._s_0.Z) * (dVar58 - local_250._s_0.Z));
    if (local_280 + local_258 < dVar66) goto LAB_1496b1cdd;
    dVar20 = local_108 * __real_4000000000000000;
    if (local_108 * __real_4000000000000000 <= local_280) {
      dVar20 = local_280;
    }
    bVar14 = dVar66 <= dVar20;
    if (bVar10) {
      local_2a0._16_8_ = local_250._s_0.Z - (double)uVar7;
      local_2a0._8_8_ = local_250._s_0.Y - (double)uVar19;
      local_2a0._0_8_ = local_250._s_0.X - (double)uVar30;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)local_2a0,(TVector<double> *)&local_250._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar66 = UE::Geometry::VectorUtil::PlaneAngleSignedR<double>
                         ((TVector<double> *)&local_278,(TVector<double> *)&local_250._s_0,
                          (TVector<double> *)&local_1f8._s_0);
      if (dVar66 < dVar55) {
        dVar66 = dVar66 + __real_401921fb54442d18;
      }
      if (local_238 < dVar66) goto LAB_1496b1cdd;
    }
    dVar31 = dVar31 - (param_3->field0_0x0)._s_0.Y;
    dVar50 = dVar50 - (param_3->field0_0x0)._s_0.X;
    dVar58 = dVar58 - (param_3->field0_0x0)._s_0.Z;
    dVar58 = SQRT(dVar31 * dVar31 + dVar50 * dVar50 + dVar58 * dVar58);
  }
  else {
    if (bVar10) {
      iVar15 = -((int)ROUND(__real_bfe0000000000000 - dVar58 * ___real_40145f306dc9c883) >> 1);
    }
    else {
      iVar15 = 0x10;
    }
    (**(code **)(*(longlong *)puVar1 + 0x18))(puVar1,&local_1a8);
    local_230._s_0.Z = local_288;
    local_230._8_4_ = SUB84(dVar44,0);
    local_230._0_8_ = dVar20;
    local_230._12_4_ = uVar56;
    UE::Math::TVector<double>::RotateAngleAxisRad
              ((TVector<double> *)&local_230._s_0,(TVector<double> *)&local_1e0._s_0,
               __real_3fd921fb54442d18,(TVector<double> *)&local_1f8._s_0);
    dVar58 = local_280;
    local_258 = local_280 + local_258;
    auVar68._8_8_ = local_1e0._s_0.Y;
    auVar68._0_8_ = local_1e0._s_0.X;
    uVar56 = SUB84(local_1e0._s_0.Y,0);
    uVar57 = (undefined4)((ulonglong)local_1e0._8_8_ >> 0x20);
    local_1b8._8_8_ = 0;
    local_1b8._0_8_ = local_1e0._s_0.X;
    local_280 = local_1e0._s_0.Z;
    auVar41._0_8_ =
         (local_1e0._s_0.Y - dVar44) * (local_1e0._s_0.Y - dVar44) +
         (local_1e0._s_0.X - dVar20) * (local_1e0._s_0.X - dVar20) +
         (local_1e0._s_0.Z - (double)local_268) * (local_1e0._s_0.Z - (double)local_268);
    auVar41._8_8_ = 0;
    auVar36 = sqrtpd(auVar63,auVar41);
    dVar50 = auVar36._0_8_ * dVar18;
    if ((double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee2308c3a) goto LAB_1496b1cdd;
    local_250._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_250._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_200 = (double)*(float *)((longlong)&this->_padding_ + 4) * local_108 + dVar58;
    if (local_200 <= local_108) {
      local_200 = local_108;
    }
    local_250._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_260 = (UGizmoViewContext *)
                UE::GizmoUtil::ClampRayOrigin
                          (local_260,(TVector<double> *)&local_250._s_0,param_4,
                           __real_4130000000000000);
    bVar10 = local_2a8;
    bVar16 = 0;
    iVar13 = 0;
    if (iVar15 < 1) goto LAB_1496b1cdd;
    uVar73 = SUB84(local_230._s_0.Z,0);
    uVar74 = (undefined4)((ulonglong)local_230._16_8_ >> 0x20);
    uVar69 = local_230._8_4_;
    uVar70 = local_230._12_4_;
    uVar64 = local_230._0_4_;
    uVar65 = local_230._4_4_;
    uVar71 = SUB84(local_1e0._s_0.Z,0);
    uVar72 = (undefined4)((ulonglong)local_1e0._16_8_ >> 0x20);
    do {
      if (iVar13 != 0) {
        local_230._s_0.Z = (double)CONCAT44(uVar72,uVar71);
        uVar64 = auVar68._0_4_;
        uVar65 = auVar68._4_4_;
        uVar69 = auVar68._8_4_;
        uVar70 = auVar68._12_4_;
        local_230._0_16_ = auVar68;
        pTVar11 = UE::Math::TVector<double>::RotateAngleAxisRad
                            ((TVector<double> *)&local_230._s_0,(TVector<double> *)&local_1e0._s_0,
                             __real_3fd921fb54442d18,(TVector<double> *)&local_1f8._s_0);
        uVar73 = SUB84(local_230._s_0.Z,0);
        uVar74 = (undefined4)((ulonglong)local_230._16_8_ >> 0x20);
        auVar68 = *(undefined1 (*) [16])&pTVar11->field0_0x0;
        local_1e0._s_0.X = (double)auVar68._0_8_;
        uVar56 = auVar68._8_4_;
        uVar57 = auVar68._12_4_;
        local_280 = *(double *)((longlong)&pTVar11->field0_0x0 + 0x10);
        uVar71 = SUB84(local_280,0);
        uVar72 = (undefined4)((ulonglong)local_280 >> 0x20);
        local_1e0._16_8_ = local_280;
        local_1b8 = auVar68;
      }
      if ((iVar13 == iVar15 + -1) && (bVar10 != false)) {
        dVar58 = FGenericPlatformMath::Fmod(local_238,__real_3fd921fb54442d18);
        dVar50 = dVar50 * dVar58;
      }
      local_278 = local_1e0._s_0.X - (double)CONCAT44(uVar65,uVar64);
      dStack_270 = (double)CONCAT44(uVar57,uVar56) - (double)CONCAT44(uVar70,uVar69);
      local_268 = local_280 - (double)CONCAT44(uVar74,uVar73);
      dVar58 = dStack_270 * dStack_270 + local_278 * local_278 +
               (double)local_268 * (double)local_268;
      if (dVar58 == __real_3ff0000000000000) {
        uVar30 = dStack_270;
        uVar19 = local_278;
      }
      else if (__real_3e45798ee0000000 <= dVar58) {
        dVar58 = __real_3ff0000000000000 / SQRT(dVar58);
        uVar19 = dVar58 * local_278;
        uVar30 = dVar58 * dStack_270;
        local_268 = dVar58 * (double)local_268;
        dStack_270 = (double)uVar30;
        local_278 = (double)uVar19;
      }
      else {
        local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dStack_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      local_2a8 = false;
      local_2a0._16_8_ =
           (double)CONCAT44(uVar74,uVar73) * dVar18 + local_218._s_0.Z +
           (double)local_268 * dVar50 * __real_3fe0000000000000;
      local_2a0._8_8_ =
           (double)CONCAT44(uVar70,uVar69) * dVar18 + local_218._s_0.Y +
           (double)uVar30 * dVar50 * __real_3fe0000000000000;
      local_2a0._0_8_ =
           (double)CONCAT44(uVar65,uVar64) * dVar18 + local_218._s_0.X +
           (double)uVar19 * dVar50 * __real_3fe0000000000000;
      local_288 = __real_bff0000000000000;
      GizmoMath::RayCylinderIntersection<double>
                ((TVector<double> *)local_2a0,(TVector<double> *)&local_278,local_258,dVar50,
                 (TVector<double> *)&local_250._s_0,param_4,&local_2a8,&local_288);
      bVar16 = bVar16 | local_2a8;
      if ((local_2a8 != false) &&
         (((double)CONCAT44(uVar28,uVar17) < __real_3e45798ee2308c3a ||
          (local_288 <= (double)CONCAT44(uVar28,uVar17) &&
           (double)CONCAT44(uVar28,uVar17) != local_288)))) {
        uVar17 = SUB84(local_288,0);
        uVar28 = (undefined4)((ulonglong)local_288 >> 0x20);
        GizmoMath::RayCylinderIntersection<double>
                  ((TVector<double> *)local_2a0,(TVector<double> *)&local_278,local_200,dVar50,
                   (TVector<double> *)&local_250._s_0,param_4,&local_2a8,&local_288);
        local_2a7 = local_2a8;
      }
      dVar58 = (double)CONCAT44(uVar28,uVar17);
      iVar13 = iVar13 + 1;
      local_1e0._s_0.X = (double)local_1b8._0_8_;
    } while (iVar13 < iVar15);
    __return_storage_ptr__ = local_1c8;
    bVar14 = local_2a7;
    if (bVar16 != 0) {
      dVar58 = (double)CONCAT44(uVar28,uVar17) + (double)local_260;
    }
  }
  pFVar8 = local_1c0;
  if (__real_3e45798ee2308c3a <= dVar58) {
    (**(code **)(this->_padding_ + 0x6b0))(this,&local_1a8);
    pFVar8->bIsSurfaceHit = (bool)bVar14;
    *(undefined8 *)__return_storage_ptr__ = local_1a8;
    __return_storage_ptr__->HitDepth = dStack_1a0;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_198;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_190;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_188;
    *(double *)&__return_storage_ptr__->bHasHitNormal = dStack_180;
    __return_storage_ptr__->HitOwner = local_178;
    (__return_storage_ptr__->HitObject).WeakPtr = FStack_170;
    return __return_storage_ptr__;
  }
LAB_1496b1cdd:
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496bad40

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
UGizmoElementTorus::Render
          (UGizmoElementTorus *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  FWeakObjectPtr FVar12;
  TTransform<double> *pTVar13;
  char cVar14;
  bool bVar15;
  TTransform<double> *pTVar16;
  UMaterialInterface *pUVar17;
  TVector<double>_u_0 *pTVar18;
  FPrimitiveDrawInterface *pFVar19;
  FMaterialRenderProxy *pFVar20;
  TMatrix<double> *pTVar21;
  longlong lVar22;
  FRenderTraversalState *pFVar23;
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
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined1 auStackY_3d8 [32];
  FColor local_368;
  TVector<double>_u_0 local_360;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  TVector<double>_u_0 local_2e8;
  TTransform<double> local_2c8;
  EGizmoElementInteractionState EStack_260;
  FGizmoElementMeshRenderStateAttributes FStack_25c;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  lVar22 = 2;
  pTVar13 = &local_2c8;
  do {
    pFVar23 = param_2;
    pTVar16 = pTVar13;
    dVar1 = (pFVar23->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar4 = (pFVar23->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar5 = (pFVar23->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar23->MeshRenderState).HoverMaterial.bOverridesChildState;
    (pTVar16->Rotation).XY.m128d_f64[0] = (pFVar23->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    (pTVar16->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pFVar23->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar6 = (pFVar23->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    (pTVar16->Rotation).ZW.m128d_f64[0] = dVar4;
    (pTVar16->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar4 = (pFVar23->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar5 = (pFVar23->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    (pTVar16->Translation).XY.m128d_f64[0] = dVar1;
    (pTVar16->Translation).XY.m128d_f64[1] = dVar6;
    dVar1 = (pFVar23->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar6 = (pFVar23->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    (pTVar16->Translation).ZW.m128d_f64[0] = dVar4;
    (pTVar16->Translation).ZW.m128d_f64[1] = dVar5;
    dVar4 = (pFVar23->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar5 = (pFVar23->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    (pTVar16->Scale3D).XY.m128d_f64[0] = dVar1;
    (pTVar16->Scale3D).XY.m128d_f64[1] = dVar6;
    dVar1 = pFVar23->PixelToWorldScale;
    dVar6 = *(double *)&pFVar23->InteractionState;
    (pTVar16->Scale3D).ZW.m128d_f64[0] = dVar4;
    (pTVar16->Scale3D).ZW.m128d_f64[1] = dVar5;
    dVar4 = *(double *)&(pFVar23->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar12 = (pFVar23->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pTVar16[1].Rotation.XY.m128d_f64[0] = dVar1;
    pTVar16[1].Rotation.XY.m128d_f64[1] = dVar6;
    pTVar16[1].Rotation.ZW.m128d_f64[0] = dVar4;
    *(FWeakObjectPtr *)(pTVar16[1].Rotation.ZW.m128d_f64 + 1) = FVar12;
    lVar22 = lVar22 + -1;
    pTVar13 = (TTransform<double> *)&pTVar16[1].Translation;
  } while (lVar22 != 0);
  dVar1 = *(double *)&(pFVar23->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar12 = (pFVar23->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar4 = *(double *)&(pFVar23->MeshRenderState).SelectMaterial.bOverridesChildState;
  pTVar16[1].Translation.XY.m128d_f64[0] = *(double *)param_2;
  pTVar16[1].Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)&(pFVar23->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar5 = *(double *)&(pFVar23->MeshRenderState).VertexColor.Value.field0_0x0;
  pTVar16[1].Translation.ZW.m128d_f64[0] = (double)FVar12;
  pTVar16[1].Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)((longlong)&(pFVar23->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar6 = *(double *)&(pFVar23->MeshRenderState).VertexColor.bHasValue;
  pTVar16[1].Scale3D.XY.m128d_f64[0] = dVar1;
  pTVar16[1].Scale3D.XY.m128d_f64[1] = dVar5;
  dVar1 = *(double *)((longlong)&(pFVar23->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar5 = *(double *)((longlong)&(pFVar23->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc)
  ;
  pTVar16[1].Scale3D.ZW.m128d_f64[0] = dVar4;
  pTVar16[1].Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar4 = *(double *)&(pFVar23->MeshRenderState).InteractVertexColor.Value.field0_0x0;
  dVar6 = *(double *)
           ((longlong)&(pFVar23->MeshRenderState).InteractVertexColor.Value.field0_0x0 + 8);
  pTVar16[2].Rotation.XY.m128d_f64[0] = dVar1;
  pTVar16[2].Rotation.XY.m128d_f64[1] = dVar5;
  uVar31 = *(undefined4 *)&(pFVar23->MeshRenderState).InteractVertexColor.bHasValue;
  fVar34 = (pFVar23->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar10 = (pFVar23->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar11 = (pFVar23->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  pTVar16[2].Rotation.ZW.m128d_f64[0] = dVar4;
  pTVar16[2].Rotation.ZW.m128d_f64[1] = dVar6;
  *(undefined4 *)pTVar16[2].Translation.XY.m128d_f64 = uVar31;
  *(float *)((longlong)pTVar16[2].Translation.XY.m128d_f64 + 4) = fVar34;
  *(float *)(pTVar16[2].Translation.XY.m128d_f64 + 1) = fVar10;
  *(float *)((longlong)pTVar16[2].Translation.XY.m128d_f64 + 0xc) = fVar11;
  cVar14 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->_padding_,&local_2c8);
  if ((cVar14 != '\0') &&
     (pUVar17 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal(&FStack_25c,EStack_260),
     pUVar17 != (UMaterialInterface *)0x0)) {
    local_300._s_0.X = local_2c8.Translation.XY.m128d_f64[0];
    local_300._s_0.Y = local_2c8.Translation.XY.m128d_f64[1];
    local_300._s_0.Z = local_2c8.Translation.ZW.m128d_f64[0];
    dVar1 = (double)this->_padding_;
    dVar8 = (double)this->_padding_ * (double)this->_padding_ -
            (double)this->_padding_ * (double)this->_padding_;
    dVar6 = local_2c8.Rotation.ZW.m128d_f64[1];
    dVar32 = local_2c8.Rotation.XY.m128d_f64[1];
    dVar9 = (double)this->_padding_ * (double)this->_padding_ - dVar1 * (double)this->_padding_;
    uVar31 = SUB84(dVar9,0);
    uVar38 = (undefined4)((ulonglong)dVar9 >> 0x20);
    dVar5 = local_2c8.Rotation.ZW.m128d_f64[0];
    dVar7 = dVar1 * (double)this->_padding_ - (double)this->_padding_ * (double)this->_padding_;
    auVar33 = blendpd((undefined1  [16])local_2c8.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_2c8.Rotation.ZW.m128d_f64,2);
    auVar35._8_4_ = uVar31;
    auVar35._0_8_ = dVar8;
    auVar35._12_4_ = uVar38;
    auVar24._8_4_ = uVar31;
    auVar24._0_8_ = dVar8;
    auVar24._12_4_ = uVar38;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar7;
    auVar25 = blendpd(auVar24,auVar25,2);
    local_360._8_4_ = uVar31;
    local_360._s_0.X = dVar8;
    local_360._12_4_ = uVar38;
    auVar36._0_8_ = auVar35._8_8_ * local_2c8.Rotation.XY.m128d_f64[0] - dVar32 * dVar8;
    auVar36._8_8_ = dVar7 * dVar32 - dVar5 * dVar9;
    auVar26._0_8_ = auVar25._0_8_ * dVar5 - auVar33._0_8_ * dVar7;
    auVar26._8_8_ = auVar25._8_8_ * dVar6 - auVar33._8_8_ * 0.0;
    dVar1 = auVar36._8_8_ + auVar36._8_8_;
    dVar4 = auVar26._0_8_ + auVar26._0_8_;
    uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar25 = blendpd(auVar36,auVar26,2);
    auVar37._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar37._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar29._8_4_ = SUB84(dVar4,0);
    auVar29._0_8_ = dVar1;
    auVar29._12_4_ = uVar31;
    auVar27._8_4_ = SUB84(dVar4,0);
    auVar27._0_8_ = dVar1;
    auVar27._12_4_ = uVar31;
    auVar25 = blendpd(auVar27,auVar37,2);
    auVar30._0_8_ = auVar29._8_8_ * local_2c8.Rotation.XY.m128d_f64[0] - dVar1 * dVar32;
    auVar30._8_8_ = auVar37._0_8_ * dVar32 - dVar4 * dVar5;
    auVar28._0_8_ = auVar25._0_8_ * dVar5 - auVar37._0_8_ * auVar33._0_8_;
    auVar28._8_8_ = auVar25._8_8_ * dVar6 - auVar37._8_8_ * auVar33._8_8_;
    dVar4 = dVar4 * dVar6 + dVar9 + auVar28._0_8_;
    local_2e8._8_4_ = SUB84(dVar4,0);
    local_2e8._0_8_ = dVar1 * dVar6 + dVar8 + auVar30._8_8_;
    local_2e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar25 = blendpd(auVar30,auVar28,2);
    local_2e8._s_0.Z = auVar37._0_8_ * dVar6 + dVar7 + auVar25._0_8_;
    local_360._s_0.Z = dVar7;
    lVar22 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
    local_348._s_0.Y = *(double *)(lVar22 + 0x560);
    local_348._s_0.X = *(double *)(lVar22 + 0x540);
    local_348._s_0.Z = *(double *)(lVar22 + 0x580);
    bVar15 = UGizmoElementCircleBase::IsPartial
                       ((UGizmoElementCircleBase *)this,(TVector<double> *)&local_300._s_0,
                        (TVector<double> *)&local_2e8._s_0,(TVector<double> *)(lVar22 + 0xc30),
                        (TVector<double> *)&local_348._s_0,
                        *(double *)(lVar22 + 0x428) <= __real_3ff0000000000000 &&
                        __real_3ff0000000000000 != *(double *)(lVar22 + 0x428));
    dVar1 = __real_3e45798ee0000000;
    if (bVar15) {
      UE::Math::TVector<double>::RotateAngleAxisRad
                ((TVector<double> *)&this->_padding_,(TVector<double> *)&local_300._s_0,
                 (double)this->_padding_ * __real_3f91df46a2529d39,
                 (TVector<double> *)&local_360._s_0);
      pTVar18 = &UE::Math::TVector<double>::GetSafeNormal
                           ((TVector<double> *)&local_300._s_0,(TVector<double> *)&local_360._s_0,
                            dVar1,&UE::Math::TVector<double>::ZeroVector)->field0_0x0;
    }
    else {
      pTVar18 = &local_360;
      local_360._s_0.X = (double)this->_padding_;
      local_360._s_0.Y = (double)this->_padding_;
      local_360._s_0.Z = (double)this->_padding_;
    }
    local_330._s_0.X = (((TVector<double>_u_0 *)&(pTVar18->_s_0).X)->_s_0).X;
    local_330._s_0.Y = (pTVar18->_s_0).Y;
    local_330._s_0.Z = (pTVar18->_s_0).Z;
    fVar34 = (float)((double)this->_padding_ - (double)this->_padding_);
    if (0.0 < fVar34) {
      pFVar19 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
      local_318._s_0.X = local_330._s_0.Z * dVar9 - local_330._s_0.Y * dVar7;
      local_318._s_0.Y = local_330._s_0.X * dVar7 - local_330._s_0.Z * dVar8;
      local_318._s_0.Z = local_330._s_0.Y * dVar8 - local_330._s_0.X * dVar9;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_318._s_0,dVar1);
      FGizmoElementMeshRenderStateAttributes::GetVertexColorInternal
                (&FStack_25c,(FLinearColor *)&local_348._s_0,EStack_260);
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_348._s_0);
      bVar2 = this->bEndCaps;
      pFVar20 = (FMaterialRenderProxy *)(**(code **)(pUVar17->_padding_ + 0x310))(pUVar17);
      iVar3 = this->NumInnerSlices;
      lVar22 = this->_padding_;
      dVar1 = GetCurrentInnerRadius(this);
      dVar4 = UGizmoElementCircleBase::GetCurrentRadius((UGizmoElementCircleBase *)this);
      pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_2c8,&local_158);
      DrawTorus(pFVar19,pTVar21,(TVector<double> *)&local_330._s_0,
                (TVector<double> *)&local_318._s_0,local_368,dVar4,dVar1,(int)lVar22,iVar3,pFVar20,
                '\x01',bVar15,fVar34,bVar2);
    }
  }
  return;
}

// SetEndCaps @ 1496bd5d0

void __thiscall UGizmoElementTorus::SetEndCaps(UGizmoElementTorus *this,bool param_1)

{
  this->bEndCaps = param_1;
  return;
}

// SetHoverInnerRadiusMultiplier @ 1496bda30

void __thiscall
UGizmoElementTorus::SetHoverInnerRadiusMultiplier(UGizmoElementTorus *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->InnerRadiusMultiplier).Hover;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->InnerRadiusMultiplier).Hover.bIsSet = true;
  }
  return;
}

// SetInnerRadius @ 1496bdb20

void __thiscall UGizmoElementTorus::SetInnerRadius(UGizmoElementTorus *this,double param_1)

{
  this->InnerRadius = param_1;
  return;
}

// SetInteractInnerRadiusMultiplier @ 1496bdb30

void __thiscall
UGizmoElementTorus::SetInteractInnerRadiusMultiplier(UGizmoElementTorus *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->InnerRadiusMultiplier).Interact;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->InnerRadiusMultiplier).Interact.bIsSet = true;
  }
  return;
}

// SetNumInnerSlices @ 1496bdca0

void __thiscall UGizmoElementTorus::SetNumInnerSlices(UGizmoElementTorus *this,int param_1)

{
  this->NumInnerSlices = param_1;
  return;
}

// SetSelectInnerRadiusMultiplier @ 1496bfb30

void __thiscall
UGizmoElementTorus::SetSelectInnerRadiusMultiplier(UGizmoElementTorus *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->InnerRadiusMultiplier).Select;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->InnerRadiusMultiplier).Select.bIsSet = true;
  }
  return;
}

// SetSubdueInnerRadiusMultiplier @ 1496bfe30

void __thiscall
UGizmoElementTorus::SetSubdueInnerRadiusMultiplier(UGizmoElementTorus *this,double param_1)

{
  TOptional<double> *pTVar1;
  undefined1 local_res10 [24];
  
  pTVar1 = &(this->InnerRadiusMultiplier).Subdue;
  if ((TOptional<double> *)local_res10 != pTVar1) {
    pTVar1->TypedValue = param_1;
    (this->InnerRadiusMultiplier).Subdue.bIsSet = true;
  }
  return;
}

// StaticRegisterNativesUGizmoElementTorus @ 1496c29e0

void __cdecl UGizmoElementTorus::StaticRegisterNativesUGizmoElementTorus(void)

{
  return;
}

