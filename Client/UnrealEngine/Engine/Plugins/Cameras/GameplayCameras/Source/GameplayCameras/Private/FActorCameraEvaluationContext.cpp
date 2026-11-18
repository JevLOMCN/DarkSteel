// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// FActorCameraEvaluationContext @ 14d58be90

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FActorCameraEvaluationContext * __thiscall
UE::Cameras::FActorCameraEvaluationContext::FActorCameraEvaluationContext
          (FActorCameraEvaluationContext *this,AActor *param_1)

{
  UClass *pUVar1;
  UCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  TObjectPtr<UObject>_u_0 local_c0;
  UCameraAsset *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FCameraEvaluationContext::FCameraEvaluationContext((FCameraEvaluationContext *)this);
  *(undefined ***)this = &___7FActorCameraEvaluationContext_Cameras_UE__6B_;
  local_b0 = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_c8 = 0;
  local_c0 = (TObjectPtr<UObject>_u_0)param_1;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCalcCameraActorCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  pUVar2 = (UCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_b8 = MakeSimpleCameraAsset((UObject *)param_1,pUVar2);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UCameraAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)local_b8);
  }
  FCameraEvaluationContext::Initialize
            ((FCameraEvaluationContext *)this,
             (FCameraEvaluationContextInitializeParams *)&local_c0.ObjectPtr);
  return this;
}

// FActorCameraEvaluationContext @ 14d58bfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorCameraEvaluationContext * __thiscall
UE::Cameras::FActorCameraEvaluationContext::FActorCameraEvaluationContext
          (FActorCameraEvaluationContext *this,UCameraComponent *param_1)

{
  UClass *pUVar1;
  UCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  TObjectPtr<UObject>_u_0 local_c0;
  UCameraAsset *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FCameraEvaluationContext::FCameraEvaluationContext((FCameraEvaluationContext *)this);
  *(undefined ***)this = &___7FActorCameraEvaluationContext_Cameras_UE__6B_;
  local_b0 = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_c8 = 0;
  local_c0 = (TObjectPtr<UObject>_u_0)param_1;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCameraComponentCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  pUVar2 = (UCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_b8 = MakeSimpleCameraAsset((UObject *)param_1,pUVar2);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UCameraAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)local_b8);
  }
  FCameraEvaluationContext::Initialize
            ((FCameraEvaluationContext *)this,
             (FCameraEvaluationContextInitializeParams *)&local_c0.ObjectPtr);
  return this;
}

// FActorCameraEvaluationContext @ 14d58c130

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FActorCameraEvaluationContext * __thiscall
UE::Cameras::FActorCameraEvaluationContext::FActorCameraEvaluationContext
          (FActorCameraEvaluationContext *this)

{
  FCameraEvaluationContext::FCameraEvaluationContext((FCameraEvaluationContext *)this);
  *(undefined ***)this = &___7FActorCameraEvaluationContext_Cameras_UE__6B_;
  return this;
}

// ApplyMinimalViewInfo @ 14d599d90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UE::Cameras::FActorCameraEvaluationContext::ApplyMinimalViewInfo
          (FMinimalViewInfo *param_1,FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  EAspectRatioAxisConstraint EVar2;
  double dVar3;
  undefined1 *puVar4;
  bool bVar5;
  float fVar6;
  
  if ((((param_1->Location).field0_0x0._s_0.X != (param_2->CameraPose).Location.field0_0x0._s_0.X)
      || ((param_1->Location).field0_0x0._s_0.Y != (param_2->CameraPose).Location.field0_0x0._s_0.Y)
      ) || ((param_1->Location).field0_0x0._s_0.Z !=
            (param_2->CameraPose).Location.field0_0x0._s_0.Z)) {
    pFVar1->Location = true;
    dVar3 = (param_1->Location).field0_0x0._s_0.Y;
    (param_2->CameraPose).Location.field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
    (param_2->CameraPose).Location.field0_0x0._s_0.Y = dVar3;
    (param_2->CameraPose).Location.field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  }
  if ((((param_1->Rotation).Pitch != (param_2->CameraPose).Rotation.Pitch) ||
      ((param_1->Rotation).Yaw != (param_2->CameraPose).Rotation.Yaw)) ||
     ((param_1->Rotation).Roll != (param_2->CameraPose).Rotation.Roll)) {
    pFVar1->Rotation = true;
    dVar3 = (param_1->Rotation).Yaw;
    (param_2->CameraPose).Rotation.Pitch = (param_1->Rotation).Pitch;
    (param_2->CameraPose).Rotation.Yaw = dVar3;
    (param_2->CameraPose).Rotation.Roll = (param_1->Rotation).Roll;
  }
  fVar6 = param_1->FOV;
  if (fVar6 != (param_2->CameraPose).FieldOfView) {
    (param_2->CameraPose).ChangedFlags.FieldOfView = true;
    (param_2->CameraPose).FieldOfView = fVar6;
  }
  fVar6 = param_1->PerspectiveNearClipPlane;
  if (fVar6 != (param_2->CameraPose).NearClippingPlane) {
    (param_2->CameraPose).ChangedFlags.NearClippingPlane = true;
    (param_2->CameraPose).NearClippingPlane = fVar6;
  }
  fVar6 = param_1->AspectRatio * (param_2->CameraPose).SensorHeight;
  if (fVar6 != (param_2->CameraPose).SensorWidth) {
    pFVar1->SensorWidth = true;
    (param_2->CameraPose).SensorWidth = fVar6;
  }
  if (((param_1->AspectRatioAxisConstraint).bIsSet != false) &&
     (EVar2 = (param_1->AspectRatioAxisConstraint).TypedValue,
     (param_2->CameraPose).AspectRatioAxisConstraint.Value != EVar2)) {
    (param_2->CameraPose).AspectRatioAxisConstraint.Value = (uchar)EVar2;
    (param_2->CameraPose).ChangedFlags.AspectRatioAxisConstraint = true;
  }
  bVar5 = param_1->bConstrainAspectRatio;
  if ((param_2->CameraPose).ConstrainAspectRatio != bVar5) {
    (param_2->CameraPose).ChangedFlags.ConstrainAspectRatio = true;
    (param_2->CameraPose).ConstrainAspectRatio = bVar5;
  }
  if (param_1->PostProcessBlendWeight <= 0.0) {
    return;
  }
  FPostProcessUtils::BlendPostProcessSettings
            (&(param_2->PostProcessSettings).PostProcessSettings,&param_1->PostProcessSettings,
             param_1->PostProcessBlendWeight);
  return;
}

// GetTypeID @ 14d5abae0

FCameraObjectTypeID * __thiscall
UE::Cameras::FActorCameraEvaluationContext::GetTypeID(FActorCameraEvaluationContext *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b45e0

bool __thiscall
UE::Cameras::FActorCameraEvaluationContext::IsKindOf
          (FActorCameraEvaluationContext *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FActorCameraEvaluationContext>)param_1->ID != PrivateTypeID
      ) && ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationContext>)param_1->ID !=
            FCameraEvaluationContext::PrivateTypeID)) {
    return false;
  }
  return true;
}

// MakeCalcCameraActorCameraAsset @ 14d5b58b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraAsset * __cdecl
UE::Cameras::FActorCameraEvaluationContext::MakeCalcCameraActorCameraAsset(UObject *param_1)

{
  UClass *pUVar1;
  UCameraNode *pUVar2;
  UCameraAsset *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCalcCameraActorCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = param_1;
  pUVar2 = (UCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pUVar3 = MakeSimpleCameraAsset(param_1,pUVar2);
  return pUVar3;
}

// MakeCameraComponentCameraAsset @ 14d5b5990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraAsset * __cdecl
UE::Cameras::FActorCameraEvaluationContext::MakeCameraComponentCameraAsset(UObject *param_1)

{
  UClass *pUVar1;
  UCameraNode *pUVar2;
  UCameraAsset *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCameraComponentCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = param_1;
  pUVar2 = (UCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pUVar3 = MakeSimpleCameraAsset(param_1,pUVar2);
  return pUVar3;
}

// MakeSimpleCameraAsset @ 14d5b61b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraAsset * __cdecl
UE::Cameras::FActorCameraEvaluationContext::MakeSimpleCameraAsset
          (UObject *param_1,UCameraNode *param_2)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UCameraDirector *pUVar3;
  UCameraAsset *this;
  longlong *plVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_148 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCameraRigAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar1);
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._16_4_ = 0;
  local_138._20_4_ = 0;
  local_138._24_4_ = RF_Transient;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_138._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar4 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  *(UCameraNode **)(pUVar2 + 5) = param_2;
  local_148 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = USingleCameraDirector::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = param_1;
  pUVar3 = (UCameraDirector *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar4 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  pUVar3[1]._padding_ = (longlong)pUVar2;
  local_148 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UCameraAsset_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar1);
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._16_4_ = 0;
  local_138._20_4_ = 0;
  local_138._24_4_ = RF_Transient;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_138._8_8_ = param_1;
  this = (UCameraAsset *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar4 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  UCameraAsset::SetCameraDirector(this,pUVar3);
  return this;
}

