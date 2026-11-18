// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 14962d4f0

UClass * __cdecl UBrushStampIndicator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushStampIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushStampIndicator",
               &Z_Registration_Info_UClass_UBrushStampIndicator.InnerSingleton,
               StaticRegisterNativesUBrushStampIndicator,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushStampIndicator>,
               InternalVTableHelperCtorCaller<UBrushStampIndicator>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushStampIndicator.InnerSingleton;
}

// UBrushStampIndicator @ 149639550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrushStampIndicator * __thiscall
UBrushStampIndicator::UBrushStampIndicator(UBrushStampIndicator *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  this->bVisible = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->BrushRadius = 1.0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->BrushFalloff = 0.5;
  this->BrushStrength = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BrushPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BrushPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->BrushPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->BrushNormal).field0_0x0._s_0.Z = 1.0;
  (this->BrushNormal).field0_0x0._s_0.X = 0.0;
  (this->BrushNormal).field0_0x0._s_0.Y = 0.0;
  this->bDrawIndicatorLines = true;
  this->bDrawRadiusCircle = true;
  this->bScaleNormalByStrength = false;
  this->SampleStepCount = 0x20;
  (this->LineColor).field0_0x0._s_0.R = 0.06;
  (this->LineColor).field0_0x0._s_0.G = 0.96;
  (this->LineColor).field0_0x0._s_0.B = 0.06;
  (this->LineColor).field0_0x0._s_0.A = 1.0;
  this->LineThickness = 2.0;
  this->bDepthTested = false;
  this->bDrawSecondaryLines = true;
  this->SecondaryLineThickness = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.R = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.G = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.B = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.A = 0.5;
  (this->AttachedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  this->ScaleInitializedComponent = (UPrimitiveComponent *)0x0;
  return this;
}

// UBrushStampIndicator @ 149639660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrushStampIndicator * __thiscall
UBrushStampIndicator::UBrushStampIndicator(UBrushStampIndicator *this)

{
  undefined8 uVar1;
  
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  this->bVisible = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->BrushRadius = 1.0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->BrushFalloff = 0.5;
  this->BrushStrength = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BrushPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BrushPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->BrushPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->BrushNormal).field0_0x0._s_0.Z = 1.0;
  (this->BrushNormal).field0_0x0._s_0.X = 0.0;
  (this->BrushNormal).field0_0x0._s_0.Y = 0.0;
  this->bDrawIndicatorLines = true;
  this->bDrawRadiusCircle = true;
  this->bScaleNormalByStrength = false;
  this->SampleStepCount = 0x20;
  (this->LineColor).field0_0x0._s_0.R = 0.06;
  (this->LineColor).field0_0x0._s_0.G = 0.96;
  (this->LineColor).field0_0x0._s_0.B = 0.06;
  (this->LineColor).field0_0x0._s_0.A = 1.0;
  this->LineThickness = 2.0;
  this->bDepthTested = false;
  this->bDrawSecondaryLines = true;
  this->SecondaryLineThickness = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.R = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.G = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.B = 0.5;
  (this->SecondaryLineColor).field0_0x0._s_0.A = 0.5;
  (this->AttachedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  this->ScaleInitializedComponent = (UPrimitiveComponent *)0x0;
  return this;
}

// ~UBrushStampIndicator @ 14963e100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrushStampIndicator::~UBrushStampIndicator(UBrushStampIndicator *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// GetPrivateStaticClass @ 149655a10

UClass * __cdecl UBrushStampIndicator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushStampIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushStampIndicator",
               &Z_Registration_Info_UClass_UBrushStampIndicator.InnerSingleton,
               StaticRegisterNativesUBrushStampIndicator,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushStampIndicator>,
               InternalVTableHelperCtorCaller<UBrushStampIndicator>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushStampIndicator.InnerSingleton;
}

// Render @ 14965f490

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

void __thiscall
UBrushStampIndicator::Render(UBrushStampIndicator *this,IToolsContextRenderAPI *param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  undefined1 auStackY_1c8 [32];
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  FToolDataVisualizer local_158;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->bVisible != false) && (this->bDrawIndicatorLines != false)) {
    FToolDataVisualizer::FToolDataVisualizer(&local_158);
    FToolDataVisualizer::BeginFrame(&local_158,param_1);
    fVar3 = __real_3f800000;
    if (this->bDrawSecondaryLines != false) {
      if ((this->bDrawRadiusCircle == false) ||
         (__real_322bcc77 <
          (float)((uint)(this->BrushFalloff - __real_3f800000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        local_188._s_0.X = (this->BrushNormal).field0_0x0._s_0.X;
        local_188._s_0.Y = (this->BrushNormal).field0_0x0._s_0.Y;
        local_188._s_0.Z = (this->BrushNormal).field0_0x0._s_0.Z;
        local_170 = (this->BrushPosition).field0_0x0._s_0.X;
        dStack_168 = (this->BrushPosition).field0_0x0._s_0.Y;
        local_160 = (this->BrushPosition).field0_0x0._s_0.Z;
        (**(code **)(local_158._padding_ + 0x20))
                  (&local_158,&local_170,&local_188,this->BrushFalloff * this->BrushRadius);
      }
      if (this->bScaleNormalByStrength != false) {
        fVar3 = this->BrushStrength;
      }
      dVar2 = (double)this->BrushRadius;
      dVar1 = (double)fVar3;
      local_188._s_0.X =
           dVar2 * (this->BrushNormal).field0_0x0._s_0.X * dVar1 +
           (this->BrushPosition).field0_0x0._s_0.X;
      local_188._s_0.Y =
           dVar2 * (this->BrushNormal).field0_0x0._s_0.Y * dVar1 +
           (this->BrushPosition).field0_0x0._s_0.Y;
      local_188._s_0.Z =
           dVar2 * (this->BrushNormal).field0_0x0._s_0.Z * dVar1 +
           (this->BrushPosition).field0_0x0._s_0.Z;
      FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
                (&local_158,&this->BrushPosition,(TVector<double> *)&local_188._s_0,
                 &this->SecondaryLineColor,this->SecondaryLineThickness,this->bDepthTested);
    }
    if (this->bDrawRadiusCircle != false) {
      local_170 = (this->BrushNormal).field0_0x0._s_0.X;
      dStack_168 = (this->BrushNormal).field0_0x0._s_0.Y;
      local_160 = (this->BrushNormal).field0_0x0._s_0.Z;
      local_188._s_0.X = (this->BrushPosition).field0_0x0._s_0.X;
      local_188._s_0.Y = (this->BrushPosition).field0_0x0._s_0.Y;
      local_188._s_0.Z = (this->BrushPosition).field0_0x0._s_0.Z;
      (**(code **)(local_158._padding_ + 0x20))(&local_158,&local_188,&local_170,this->BrushRadius);
    }
    FToolDataVisualizer::EndFrame(&local_158);
    FToolDataVisualizer::~FToolDataVisualizer(&local_158);
  }
  return;
}

// Setup @ 149664470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrushStampIndicator::Setup(UBrushStampIndicator *this)

{
  return;
}

// Shutdown @ 149664890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrushStampIndicator::Shutdown(UBrushStampIndicator *this)

{
  return;
}

// StaticRegisterNativesUBrushStampIndicator @ 1496649e0

void __cdecl UBrushStampIndicator::StaticRegisterNativesUBrushStampIndicator(void)

{
  return;
}

// Tick @ 149664dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrushStampIndicator::Tick(UBrushStampIndicator *this,float param_1)

{
  return;
}

// Update @ 149665340

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

void __thiscall
UBrushStampIndicator::Update
          (UBrushStampIndicator *this,float param_1,TTransform<double> *param_2,float param_3)

{
  TVector<double> *pTVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  UPrimitiveComponent *this_00;
  undefined1 auStack_138 [32];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  dVar5 = __real_3ff0000000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_e8._s_0.Z = __real_3ff0000000000000;
  this->BrushRadius = param_1;
  dVar2 = (param_2->Translation).ZW.m128d_f64[0];
  dVar4 = (param_2->Translation).XY.m128d_f64[1];
  (this->BrushPosition).field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  (this->BrushPosition).field0_0x0._s_0.Y = dVar4;
  (this->BrushPosition).field0_0x0._s_0.Z = dVar2;
  local_c8.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_c8.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_c8.X = (param_2->Rotation).XY.m128d_f64[0];
  local_c8.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_e8._s_0.X = 0.0;
  local_e8._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_c8,(TVector<double> *)&local_108._s_0,(TVector<double> *)&local_e8._s_0);
  this_00 = (this->AttachedComponent).field0_0x0.DebugPtr;
  this->BrushFalloff = param_3;
  (this->BrushNormal).field0_0x0._s_0.X = local_108._s_0.X;
  (this->BrushNormal).field0_0x0._s_0.Y = local_108._s_0.Y;
  (this->BrushNormal).field0_0x0._s_0.Z = local_108._s_0.Z;
  if (this_00 != (UPrimitiveComponent *)0x0) {
    pTVar1 = &this->InitialComponentScale;
    local_a8.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    local_a8.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
    local_a8.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    local_a8.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
    if (this_00 != this->ScaleInitializedComponent) {
      dVar2 = *(double *)&this_00->field_0x240;
      dVar4 = *(double *)&this_00->field_0x238;
      (pTVar1->field0_0x0)._s_0.X = *(double *)&this_00->field_0x230;
      (this->InitialComponentScale).field0_0x0._s_0.Y = dVar4;
      (this->InitialComponentScale).field0_0x0._s_0.Z = dVar2;
      dVar2 = (this->InitialComponentScale).field0_0x0._s_0.Z;
      dVar5 = dVar5 / dVar2;
      dVar4 = (this->InitialComponentScale).field0_0x0._s_0.Y * dVar5;
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = (pTVar1->field0_0x0)._s_0.X * dVar5;
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])&pTVar1->field0_0x0 = auVar3;
      (this->InitialComponentScale).field0_0x0._s_0.Z = dVar5 * dVar2;
      this_00 = (this->AttachedComponent).field0_0x0.DebugPtr;
      this->ScaleInitializedComponent = this_00;
    }
    dVar5 = (double)param_1;
    dVar2 = dVar5 * (this->InitialComponentScale).field0_0x0._s_0.Y;
    local_a8.Scale3D.ZW.m128d_f64[0] = dVar5 * (this->InitialComponentScale).field0_0x0._s_0.Z;
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
    local_a8.Scale3D.XY.m128d_f64[0] = dVar5 * (pTVar1->field0_0x0)._s_0.X;
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[1] = 0.0;
    USceneComponent::SetWorldTransform
              ((USceneComponent *)this_00,&local_a8,false,(FHitResult *)0x0,None);
  }
  return;
}

// Update @ 149665520

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

void __thiscall
UBrushStampIndicator::Update
          (UBrushStampIndicator *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4,float param_5)

{
  TVector<double> *pTVar1;
  UPrimitiveComponent *pUVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_148 [32];
  TVector<double>_u_0 local_118;
  TQuat<double> local_f8;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_148;
  pUVar2 = (this->AttachedComponent).field0_0x0.DebugPtr;
  this->BrushRadius = param_1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  (this->BrushPosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->BrushPosition).field0_0x0._s_0.Y = dVar4;
  (this->BrushPosition).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  (this->BrushNormal).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->BrushNormal).field0_0x0._s_0.Y = dVar4;
  (this->BrushNormal).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  this->BrushStrength = param_5;
  this->BrushFalloff = param_4;
  dVar4 = __real_3ff0000000000000;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    pTVar1 = &this->InitialComponentScale;
    dVar5 = *(double *)&pUVar2->field_0x1f0;
    dVar6 = *(double *)&pUVar2->field_0x1f8;
    local_d8.Rotation.XY.m128d_f64[0] = *(double *)&pUVar2->field_0x1f0;
    local_d8.Rotation.XY.m128d_f64[1] = *(double *)&pUVar2->field_0x1f8;
    dVar7 = *(double *)&pUVar2->field_0x200;
    dVar8 = *(double *)&pUVar2->field_0x208;
    local_d8.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar2->field_0x200;
    local_d8.Rotation.ZW.m128d_f64[1] = *(double *)&pUVar2->field_0x208;
    dVar10 = *(double *)&pUVar2->field_0x238;
    local_d8.Scale3D.XY.m128d_f64[0] = *(double *)&pUVar2->field_0x230;
    local_d8.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar2->field_0x238;
    local_d8.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar2->field_0x240;
    local_d8.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar2->field_0x248;
    if (pUVar2 != this->ScaleInitializedComponent) {
      (pTVar1->field0_0x0)._s_0.X = *(double *)&pUVar2->field_0x230;
      (this->InitialComponentScale).field0_0x0._s_0.Y = dVar10;
      (this->InitialComponentScale).field0_0x0._s_0.Z = local_d8.Scale3D.ZW.m128d_f64[0];
      dVar10 = (this->InitialComponentScale).field0_0x0._s_0.Z;
      dVar9 = dVar4 / dVar10;
      dVar11 = (this->InitialComponentScale).field0_0x0._s_0.Y * dVar9;
      auVar3._8_4_ = SUB84(dVar11,0);
      auVar3._0_8_ = (pTVar1->field0_0x0)._s_0.X * dVar9;
      auVar3._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])&pTVar1->field0_0x0 = auVar3;
      (this->InitialComponentScale).field0_0x0._s_0.Z = dVar9 * dVar10;
      this->ScaleInitializedComponent = (UPrimitiveComponent *)(this->AttachedComponent).field0_0x0;
    }
    local_d8.Translation.XY.m128d_f64[0] = (this->BrushPosition).field0_0x0._s_0.X;
    local_d8.Translation.XY.m128d_f64[1] = (this->BrushPosition).field0_0x0._s_0.Y;
    local_d8.Translation.ZW.m128d_f64[0] = (this->BrushPosition).field0_0x0._s_0.Z;
    local_d8.Translation.ZW.m128d_f64[1] = 0.0;
    dVar11 = dVar6 + dVar6;
    dVar10 = (double)CONCAT44((uint)((ulonglong)(dVar5 + dVar5) >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar5 + dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000)
    ;
    local_118._s_0.X = dVar11 * dVar8 - dVar7 * dVar10;
    local_118._s_0.Y = dVar11 * dVar7 + dVar8 * dVar10;
    local_118._s_0.Z = (dVar5 * dVar10 - dVar11 * dVar6) + dVar4;
    UE::Math::TQuat<double>::FindBetweenVectors
              (&local_f8,(TVector<double> *)&local_118._s_0,&this->BrushNormal);
    dVar4 = local_f8.X * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            local_f8.W * dVar6 +
            dVar8 * local_f8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            local_f8.Z * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
    local_d8.Rotation.XY.m128d_f64[0] =
         local_f8.X * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         local_f8.W * dVar5 +
         dVar7 * local_f8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         local_f8.Z * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar10 = (double)param_1;
    dVar4 = dVar10 * (this->InitialComponentScale).field0_0x0._s_0.Y;
    local_d8.Scale3D.ZW.m128d_f64[0] = dVar10 * (this->InitialComponentScale).field0_0x0._s_0.Z;
    dVar11 = local_f8.X * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar8 * local_f8.W +
             local_f8.Y * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             local_f8.Z * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
    local_d8.Scale3D.XY.m128d_f64[0] = dVar10 * (pTVar1->field0_0x0)._s_0.X;
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_d8.Rotation.ZW.m128d_f64[0] =
         local_f8.X * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar7 * local_f8.W +
         local_f8.Y * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         local_f8.Z * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
    USceneComponent::SetWorldTransform
              ((USceneComponent *)(this->AttachedComponent).field0_0x0.DebugPtr,&local_d8,false,
               (FHitResult *)0x0,None);
  }
  return;
}

