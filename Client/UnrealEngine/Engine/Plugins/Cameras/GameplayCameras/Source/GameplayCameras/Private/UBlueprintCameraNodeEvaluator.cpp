// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 25

// StaticClass @ 14d643ec0

UClass * __cdecl UBlueprintCameraNodeEvaluator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraNodeEvaluator",
               &Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraNodeEvaluator,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraNodeEvaluator>,
               InternalVTableHelperCtorCaller<UBlueprintCameraNodeEvaluator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton;
}

// UBlueprintCameraNodeEvaluator @ 14d6568d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UBlueprintCameraNodeEvaluator * __thiscall
UBlueprintCameraNodeEvaluator::UBlueprintCameraNodeEvaluator
          (UBlueprintCameraNodeEvaluator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsFirstFrame = false;
  this->bIsActiveCameraRig = false;
  this->_padding_ = (longlong)&___7UBlueprintCameraNodeEvaluator__6B_;
  (this->EvaluationContextOwner).field0_0x0.DebugPtr = (UObject *)0x0;
  FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&this->CameraData);
  (this->CameraPose).Location.field0_0x0._s_0.X = 0.0;
  (this->CameraPose).TargetDistance = 1000.0;
  (this->CameraPose).Location.field0_0x0._s_0.Y = 0.0;
  (this->CameraPose).Location.field0_0x0._s_0.Z = 0.0;
  (this->CameraPose).Rotation.Pitch = 0.0;
  (this->CameraPose).Rotation.Yaw = 0.0;
  (this->CameraPose).Rotation.Roll = 0.0;
  (this->CameraPose).FieldOfView = -1.0;
  (this->CameraPose).FocalLength = 35.0;
  (this->CameraPose).OrthographicWidth = 1536.0;
  (this->CameraPose).Aperture = 2.8;
  (this->CameraPose).ShutterSpeed = 60.0;
  (this->CameraPose).FocusDistance = -1.0;
  (this->CameraPose).SensorWidth = 24.89;
  (this->CameraPose).SensorHeight = 18.67;
  (this->CameraPose).SensorHorizontalOffset = 0.0;
  (this->CameraPose).SensorVerticalOffset = 0.0;
  (this->CameraPose).ISO = 100.0;
  (this->CameraPose).SqueezeFactor = 1.0;
  (this->CameraPose).Overscan = 0.0;
  (this->CameraPose).DiaphragmBladeCount = 8;
  (this->CameraPose).NearClippingPlane = 10.0;
  (this->CameraPose).FarClippingPlane = -1.0;
  (this->CameraPose).PhysicalCameraBlendWeight = 0.0;
  (this->CameraPose).EnablePhysicalCamera = false;
  (this->CameraPose).ConstrainAspectRatio = false;
  (this->CameraPose).OverrideAspectRatioAxisConstraint = false;
  (this->CameraPose).AspectRatioAxisConstraint = '\0';
  (this->CameraPose).ProjectionMode.Value = '\0';
  FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&this->VariableTable);
  (this->CurrentContext).Object = (FCameraEvaluationContext *)0x0;
  (this->CurrentContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakCachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this->BlueprintNode = (UBlueprintCameraNode *)0x0;
  return this;
}

// UBlueprintCameraNodeEvaluator @ 14d656a00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UBlueprintCameraNodeEvaluator * __thiscall
UBlueprintCameraNodeEvaluator::UBlueprintCameraNodeEvaluator
          (UBlueprintCameraNodeEvaluator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsFirstFrame = false;
  this->bIsActiveCameraRig = false;
  this->_padding_ = (longlong)&___7UBlueprintCameraNodeEvaluator__6B_;
  (this->EvaluationContextOwner).field0_0x0.DebugPtr = (UObject *)0x0;
  FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&this->CameraData);
  (this->CameraPose).Location.field0_0x0._s_0.X = 0.0;
  (this->CameraPose).TargetDistance = 1000.0;
  (this->CameraPose).Location.field0_0x0._s_0.Y = 0.0;
  (this->CameraPose).Location.field0_0x0._s_0.Z = 0.0;
  (this->CameraPose).Rotation.Pitch = 0.0;
  (this->CameraPose).Rotation.Yaw = 0.0;
  (this->CameraPose).Rotation.Roll = 0.0;
  (this->CameraPose).FieldOfView = -1.0;
  (this->CameraPose).FocalLength = 35.0;
  (this->CameraPose).OrthographicWidth = 1536.0;
  (this->CameraPose).Aperture = 2.8;
  (this->CameraPose).ShutterSpeed = 60.0;
  (this->CameraPose).FocusDistance = -1.0;
  (this->CameraPose).SensorWidth = 24.89;
  (this->CameraPose).SensorHeight = 18.67;
  (this->CameraPose).SensorHorizontalOffset = 0.0;
  (this->CameraPose).SensorVerticalOffset = 0.0;
  (this->CameraPose).ISO = 100.0;
  (this->CameraPose).SqueezeFactor = 1.0;
  (this->CameraPose).Overscan = 0.0;
  (this->CameraPose).DiaphragmBladeCount = 8;
  (this->CameraPose).NearClippingPlane = 10.0;
  (this->CameraPose).FarClippingPlane = -1.0;
  (this->CameraPose).PhysicalCameraBlendWeight = 0.0;
  (this->CameraPose).EnablePhysicalCamera = false;
  (this->CameraPose).ConstrainAspectRatio = false;
  (this->CameraPose).OverrideAspectRatioAxisConstraint = false;
  (this->CameraPose).AspectRatioAxisConstraint = '\0';
  (this->CameraPose).ProjectionMode.Value = '\0';
  FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&this->VariableTable);
  (this->CurrentContext).Object = (FCameraEvaluationContext *)0x0;
  (this->CurrentContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakCachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this->BlueprintNode = (UBlueprintCameraNode *)0x0;
  return this;
}

// ~UBlueprintCameraNodeEvaluator @ 14d6581f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::~UBlueprintCameraNodeEvaluator(UBlueprintCameraNodeEvaluator *this)

{
  this->_padding_ = (longlong)&___7UBlueprintCameraNodeEvaluator__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VariableTable).SharedResult.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CameraData).SharedResult.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// FindEvaluationContextOwnerActor @ 14d65f5e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UBlueprintCameraNodeEvaluator::FindEvaluationContextOwnerActor
          (UBlueprintCameraNodeEvaluator *this,TSubclassOf<AActor> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  
  if ((this->CurrentContext).Object == (FCameraEvaluationContext *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Can\'t access evaluation context outside of RunCameraDirector",Error,(FName)0x0);
    return (AActor *)0x0;
  }
  pUVar5 = FWeakObjectPtr::Get(&(((this->CurrentContext).Object)->WeakOwner).WeakPtr);
  if (pUVar5 == (UObject *)0x0) {
LAB_14d65f65c:
    if (((this->CurrentContext).Object == (FCameraEvaluationContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pAVar7 = (AActor *)(*pcVar3)();
      return pAVar7;
    }
    pAVar7 = (AActor *)FWeakObjectPtr::Get(&(((this->CurrentContext).Object)->WeakOwner).WeakPtr);
    if (pAVar7 == (AActor *)0x0) {
      return (AActor *)0x0;
    }
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (*(int *)(pAVar7->_padding_ + 0x38) < iVar1) {
      return (AActor *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_) {
      return (AActor *)0x0;
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14d65f65c;
    pAVar7 = *(AActor **)&pUVar5[4].field_0x8;
    if (pAVar7 == (AActor *)0x0) {
      return (AActor *)0x0;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return pAVar7;
  }
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
    return pAVar7;
  }
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return pAVar7;
  }
  pUVar5 = *(UObject **)param_1.Class.field0_0x0;
  if (pUVar5 == (UObject *)0x0) {
    return pAVar7;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d65f74e;
  }
  pUVar5 = (UObject *)0x0;
LAB_14d65f74e:
  if ((*(int *)&pUVar5[1].field_0x10 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
     (*(undefined1 **)
       (*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)*(int *)&pUVar5[1].field_0x10 * 8) ==
      &pUVar5[1].field_0x8)) {
    return pAVar7;
  }
  return (AActor *)0x0;
}

// GetCurrentCameraPose @ 14d65fba0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraPose * __thiscall
UBlueprintCameraNodeEvaluator::GetCurrentCameraPose
          (UBlueprintCameraNodeEvaluator *this,FBlueprintCameraPose *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar17;
  TEnumAsByte<ECameraProjectionMode::Type> TVar18;
  undefined7 uVar19;
  FBlueprintCameraPose *pFVar20;
  FBlueprintCameraPose local_98;
  
  pFVar20 = UBlueprintCameraEvaluationDataFunctionLibrary::GetCameraPose
                      (&local_98,&this->CameraData);
  dVar1 = (pFVar20->Location).field0_0x0._s_0.Y;
  dVar2 = (pFVar20->Location).field0_0x0._s_0.Z;
  dVar3 = (pFVar20->Rotation).Pitch;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (pFVar20->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  dVar1 = (pFVar20->Rotation).Yaw;
  dVar4 = (pFVar20->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Rotation).Pitch = dVar3;
  dVar2 = pFVar20->TargetDistance;
  fVar5 = pFVar20->FieldOfView;
  fVar6 = pFVar20->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar1;
  (__return_storage_ptr__->Rotation).Roll = dVar4;
  fVar7 = pFVar20->OrthographicWidth;
  fVar8 = pFVar20->Aperture;
  fVar9 = pFVar20->ShutterSpeed;
  fVar10 = pFVar20->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar2;
  __return_storage_ptr__->FieldOfView = fVar5;
  __return_storage_ptr__->FocalLength = fVar6;
  fVar5 = pFVar20->SensorWidth;
  fVar6 = pFVar20->SensorHeight;
  fVar11 = pFVar20->SensorHorizontalOffset;
  fVar12 = pFVar20->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar7;
  __return_storage_ptr__->Aperture = fVar8;
  __return_storage_ptr__->ShutterSpeed = fVar9;
  __return_storage_ptr__->FocusDistance = fVar10;
  fVar7 = pFVar20->ISO;
  fVar8 = pFVar20->SqueezeFactor;
  fVar9 = pFVar20->Overscan;
  iVar13 = pFVar20->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar5;
  __return_storage_ptr__->SensorHeight = fVar6;
  __return_storage_ptr__->SensorHorizontalOffset = fVar11;
  __return_storage_ptr__->SensorVerticalOffset = fVar12;
  fVar5 = pFVar20->NearClippingPlane;
  fVar6 = pFVar20->FarClippingPlane;
  fVar10 = pFVar20->PhysicalCameraBlendWeight;
  bVar14 = pFVar20->EnablePhysicalCamera;
  bVar15 = pFVar20->ConstrainAspectRatio;
  bVar16 = pFVar20->OverrideAspectRatioAxisConstraint;
  TVar17.Value = (pFVar20->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar7;
  __return_storage_ptr__->SqueezeFactor = fVar8;
  __return_storage_ptr__->Overscan = fVar9;
  __return_storage_ptr__->DiaphragmBladeCount = iVar13;
  TVar18.Value = (pFVar20->ProjectionMode).Value;
  uVar19 = *(undefined7 *)&pFVar20->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar5;
  __return_storage_ptr__->FarClippingPlane = fVar6;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar10;
  __return_storage_ptr__->EnablePhysicalCamera = bVar14;
  __return_storage_ptr__->ConstrainAspectRatio = bVar15;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar16;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar17.Value;
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar18.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar19;
  return __return_storage_ptr__;
}

// GetPlayerController @ 14d660140

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UBlueprintCameraNodeEvaluator::GetPlayerController(UBlueprintCameraNodeEvaluator *this)

{
  FCameraEvaluationContext *pFVar1;
  APlayerController *pAVar2;
  
  pFVar1 = (this->CurrentContext).Object;
  if (pFVar1 != (FCameraEvaluationContext *)0x0) {
    pAVar2 = (APlayerController *)FWeakObjectPtr::Get(&(pFVar1->WeakPlayerController).WeakPtr);
    return pAVar2;
  }
  return (APlayerController *)0x0;
}

// GetPrivateStaticClass @ 14d6603a0

UClass * __cdecl UBlueprintCameraNodeEvaluator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraNodeEvaluator",
               &Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraNodeEvaluator,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraNodeEvaluator>,
               InternalVTableHelperCtorCaller<UBlueprintCameraNodeEvaluator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton;
}

// GetWorld @ 14d661e00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UBlueprintCameraNodeEvaluator::GetWorld(UBlueprintCameraNodeEvaluator *this)

{
  longlong *plVar1;
  UWorld *pUVar2;
  UWorld *local_res8;
  
  pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->WeakCachedWorld).WeakPtr);
  if (pUVar2 == (UWorld *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      for (plVar1 = (longlong *)this->_padding_; plVar1 != (longlong *)0x0;
          plVar1 = (longlong *)plVar1[4]) {
        pUVar2 = (UWorld *)(**(code **)(*plVar1 + 0x180))(plVar1);
        if (pUVar2 != (UWorld *)0x0) {
          local_res8 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=(&(this->WeakCachedWorld).WeakPtr,(FObjectPtr)&local_res8);
          return pUVar2;
        }
      }
    }
    pUVar2 = (UWorld *)0x0;
  }
  return pUVar2;
}

// InitializeCameraNode @ 14d6625a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::InitializeCameraNode(UBlueprintCameraNodeEvaluator *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraNodeEvaluator_InitializeCameraNode);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d6625cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// NativeInitializeCameraNode @ 14d6634a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::NativeInitializeCameraNode
          (UBlueprintCameraNodeEvaluator *this,UBlueprintCameraNode *param_1,
          FCameraNodeEvaluatorInitializeParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  if (this->BlueprintNode != (UBlueprintCameraNode *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5807300082072026948>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Utility\\BlueprintCameraNode.cpp"
                       ,0xbc,"BlueprintNode == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->BlueprintNode = param_1;
  local_18.Object = (param_2->EvaluationContext).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetupExecution(this,&local_18,param_3);
  this->bIsFirstFrame = true;
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraNodeEvaluator_InitializeCameraNode);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,0);
  TeardownExecution(this);
  return;
}

// NativeRunCameraNode @ 14d663580

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::NativeRunCameraNode
          (UBlueprintCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  UFunction *pUVar1;
  float local_res8 [2];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  local_18.Object = (param_1->EvaluationContext).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetupExecution(this,&local_18,param_2);
  this->bIsFirstFrame = param_1->bIsFirstFrame;
  this->bIsActiveCameraRig = param_1->bIsActiveCameraRig;
  local_res8[0] = param_1->DeltaTime;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraNodeEvaluator_TickCameraNode);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  TeardownExecution(this);
  return;
}

// SetCurrentCameraPose @ 14d671cb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::SetCurrentCameraPose
          (UBlueprintCameraNodeEvaluator *this,FBlueprintCameraPose *param_1)

{
  UBlueprintCameraEvaluationDataFunctionLibrary::SetCameraPose(&this->CameraData,param_1);
  return;
}

// SetDefaultOwningCameraRigParameters @ 14d671cc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::SetDefaultOwningCameraRigParameters
          (UBlueprintCameraNodeEvaluator *this,FBlueprintCameraEvaluationDataRef *param_1)

{
  FCameraNodeEvaluationResult *pFVar1;
  UBlueprintCameraNode *this_00;
  UClass *pUVar2;
  UBaseCameraObject *pUVar3;
  
  pFVar1 = param_1->Result;
  if (pFVar1 != (FCameraNodeEvaluationResult *)0x0) {
    this_00 = this->BlueprintNode;
    pUVar2 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    pUVar3 = (UBaseCameraObject *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2);
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultParameters
              (pUVar3,&pFVar1->VariableTable,&pFVar1->ContextDataTable);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedResult).SharedReferenceCount.ReferenceController);
  return;
}

// SetupExecution @ 14d671e50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::SetupExecution
          (UBlueprintCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *pTVar1;
  TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCameraEvaluationContext *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  UObject *pUVar8;
  FBlueprintCameraEvaluationDataRef *pFVar9;
  FBlueprintCameraEvaluationDataRef local_38;
  FBlueprintCameraEvaluationDataRef local_20;
  
  if (param_1->Object == (FCameraEvaluationContext *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar8 = FWeakObjectPtr::Get(&(param_1->Object->WeakOwner).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  (this->EvaluationContextOwner).field0_0x0.DebugPtr = pUVar8;
  if ((this->CameraData).Result != (FCameraNodeEvaluationResult *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5807300082072026918>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Utility\\BlueprintCameraNode.cpp"
                       ,0xda,"!CameraData.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = FBlueprintCameraEvaluationDataRef::MakeExternalRef(&local_38,param_2);
  pTVar1 = &pFVar9->SharedResult;
  (this->CameraData).Result = pFVar9->Result;
  pTVar2 = &(this->CameraData).SharedResult;
  if (pTVar2 != pTVar1) {
    pTVar2->Object = pTVar1->Object;
    pTVar1->Object = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CameraData).SharedResult.SharedReferenceCount,
               &(pFVar9->SharedResult).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedResult.SharedReferenceCount.ReferenceController);
  pFVar9 = FBlueprintCameraEvaluationDataRef::MakeExternalRef(&local_20,param_2);
  pTVar1 = &pFVar9->SharedResult;
  (this->VariableTable).Result = pFVar9->Result;
  pTVar2 = &(this->VariableTable).SharedResult;
  if (pTVar2 != pTVar1) {
    pTVar2->Object = pTVar1->Object;
    pTVar1->Object = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VariableTable).SharedResult.SharedReferenceCount,
               &(pFVar9->SharedResult).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.SharedResult.SharedReferenceCount.ReferenceController);
  if ((this->CurrentContext).Object != (FCameraEvaluationContext *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5807300082072026914>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Utility\\BlueprintCameraNode.cpp"
                       ,0xde,"!CurrentContext.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->CurrentContext).SharedReferenceCount.ReferenceController;
  (this->CurrentContext).Object = pFVar4;
  (this->CurrentContext).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUBlueprintCameraNodeEvaluator @ 14d6732e0

void __cdecl UBlueprintCameraNodeEvaluator::StaticRegisterNativesUBlueprintCameraNodeEvaluator(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeardownExecution @ 14d673820

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::TeardownExecution(UBlueprintCameraNodeEvaluator *this)

{
  TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *pTVar1;
  TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *pTVar2;
  FBlueprintCameraEvaluationDataRef *pFVar3;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FBlueprintCameraEvaluationDataRef local_28;
  
  pFVar3 = FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&local_28);
  pTVar2 = &(this->VariableTable).SharedResult;
  (this->VariableTable).Result = pFVar3->Result;
  pTVar1 = &pFVar3->SharedResult;
  if (pTVar2 != pTVar1) {
    pTVar2->Object = pTVar1->Object;
    pTVar1->Object = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VariableTable).SharedResult.SharedReferenceCount,
               &(pFVar3->SharedResult).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedResult.SharedReferenceCount.ReferenceController);
  pFVar3 = FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&local_28);
  pTVar1 = &pFVar3->SharedResult;
  (this->CameraData).Result = pFVar3->Result;
  pTVar2 = &(this->CameraData).SharedResult;
  if (pTVar2 != pTVar1) {
    pTVar2->Object = pTVar1->Object;
    pTVar1->Object = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CameraData).SharedResult.SharedReferenceCount,
               &(pFVar3->SharedResult).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedResult.SharedReferenceCount.ReferenceController);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CurrentContext !=
      (TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)&local_38) {
    (this->CurrentContext).Object = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentContext).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// TickCameraNode @ 14d673900

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraNodeEvaluator::TickCameraNode(UBlueprintCameraNodeEvaluator *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraNodeEvaluator_TickCameraNode);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// execFindEvaluationContextOwnerActor @ 14d6764a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UBlueprintCameraNodeEvaluator::execFindEvaluationContextOwnerActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *pAVar2;
  UObject *local_res10;
  UObject *local_res18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pAVar2 = FindEvaluationContextOwnerActor
                     ((UBlueprintCameraNodeEvaluator *)param_1,(TSubclassOf<AActor>)local_res18);
  *(AActor **)param_3 = pAVar2;
  return;
}

// execGetCameraPose @ 14d676550

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraNodeEvaluator::execGetCameraPose(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FBlueprintCameraPose *pFVar17;
  FBlueprintCameraPose local_c8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar17 = UBlueprintCameraEvaluationDataFunctionLibrary::GetCameraPose
                      (&local_c8,(FBlueprintCameraEvaluationDataRef *)&param_1[1].field_0x10);
  uVar2 = *(undefined8 *)&pFVar17->SensorWidth;
  uVar3 = *(undefined8 *)&pFVar17->SensorHorizontalOffset;
  uVar4 = *(undefined8 *)&pFVar17->ISO;
  uVar5 = *(undefined8 *)&pFVar17->Overscan;
  uVar6 = *(undefined8 *)&pFVar17->NearClippingPlane;
  uVar7 = *(undefined8 *)&pFVar17->PhysicalCameraBlendWeight;
  dVar8 = (pFVar17->Location).field0_0x0._s_0.Y;
  dVar9 = (pFVar17->Location).field0_0x0._s_0.Z;
  dVar10 = (pFVar17->Rotation).Pitch;
  dVar11 = (pFVar17->Rotation).Yaw;
  dVar12 = (pFVar17->Rotation).Roll;
  dVar13 = pFVar17->TargetDistance;
  uVar14 = *(undefined8 *)&pFVar17->FieldOfView;
  uVar15 = *(undefined8 *)&pFVar17->OrthographicWidth;
  uVar16 = *(undefined8 *)&pFVar17->ShutterSpeed;
  uVar1 = *(undefined8 *)&pFVar17->ProjectionMode;
  *(double *)param_3 = (pFVar17->Location).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar8;
  *(double *)((longlong)param_3 + 0x10) = dVar9;
  *(double *)((longlong)param_3 + 0x18) = dVar10;
  *(double *)((longlong)param_3 + 0x20) = dVar11;
  *(double *)((longlong)param_3 + 0x28) = dVar12;
  *(double *)((longlong)param_3 + 0x30) = dVar13;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar14;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar1;
  return;
}

// execGetCurrentCameraPose @ 14d676600

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraNodeEvaluator::execGetCurrentCameraPose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FBlueprintCameraPose *pFVar17;
  FBlueprintCameraPose local_c8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar17 = UBlueprintCameraEvaluationDataFunctionLibrary::GetCameraPose
                      (&local_c8,(FBlueprintCameraEvaluationDataRef *)&param_1[1].field_0x10);
  uVar2 = *(undefined8 *)&pFVar17->SensorWidth;
  uVar3 = *(undefined8 *)&pFVar17->SensorHorizontalOffset;
  uVar4 = *(undefined8 *)&pFVar17->ISO;
  uVar5 = *(undefined8 *)&pFVar17->Overscan;
  uVar6 = *(undefined8 *)&pFVar17->NearClippingPlane;
  uVar7 = *(undefined8 *)&pFVar17->PhysicalCameraBlendWeight;
  dVar8 = (pFVar17->Location).field0_0x0._s_0.Y;
  dVar9 = (pFVar17->Location).field0_0x0._s_0.Z;
  dVar10 = (pFVar17->Rotation).Pitch;
  dVar11 = (pFVar17->Rotation).Yaw;
  dVar12 = (pFVar17->Rotation).Roll;
  dVar13 = pFVar17->TargetDistance;
  uVar14 = *(undefined8 *)&pFVar17->FieldOfView;
  uVar15 = *(undefined8 *)&pFVar17->OrthographicWidth;
  uVar16 = *(undefined8 *)&pFVar17->ShutterSpeed;
  uVar1 = *(undefined8 *)&pFVar17->ProjectionMode;
  *(double *)param_3 = (pFVar17->Location).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar8;
  *(double *)((longlong)param_3 + 0x10) = dVar9;
  *(double *)((longlong)param_3 + 0x18) = dVar10;
  *(double *)((longlong)param_3 + 0x20) = dVar11;
  *(double *)((longlong)param_3 + 0x28) = dVar12;
  *(double *)((longlong)param_3 + 0x30) = dVar13;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar14;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar1;
  return;
}

// execGetPlayerController @ 14d6766b0

void __cdecl
UBlueprintCameraNodeEvaluator::execGetPlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 6) != 0) {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(param_1 + 6) + 0x28));
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetCameraPose @ 14d676700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraNodeEvaluator::execSetCameraPose(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 *pTVar2;
  TVector<double>_u_0 local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_98._s_0.Z = 0.0;
  uStack_80 = 0;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_68 = __real_408f400000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_60 = 0xbf800000;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar2 = &local_98;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar2 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UBlueprintCameraEvaluationDataFunctionLibrary::SetCameraPose
            ((FBlueprintCameraEvaluationDataRef *)&param_1[1].field_0x10,
             (FBlueprintCameraPose *)&pTVar2->_s_0);
  return;
}

// execSetCurrentCameraPose @ 14d676820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraNodeEvaluator::execSetCurrentCameraPose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 *pTVar2;
  TVector<double>_u_0 local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_98._s_0.Z = 0.0;
  uStack_80 = 0;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_68 = __real_408f400000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_60 = 0xbf800000;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar2 = &local_98;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar2 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UBlueprintCameraEvaluationDataFunctionLibrary::SetCameraPose
            ((FBlueprintCameraEvaluationDataRef *)&param_1[1].field_0x10,
             (FBlueprintCameraPose *)&pTVar2->_s_0);
  return;
}

// execSetDefaultOwningCameraRigParameters @ 14d676940

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraNodeEvaluator::execSetDefaultOwningCameraRigParameters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  FSharedReferencer<1> FVar2;
  UClass *pUVar3;
  UBaseCameraObject *pUVar4;
  FBlueprintCameraEvaluationDataRef local_28;
  
  FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&local_28);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2.ReferenceController = local_28.SharedResult.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28.SharedResult.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedResult.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedResult.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_28.Result != (FCameraNodeEvaluationResult *)0x0) {
    this = *(UObjectBaseUtility **)&param_1[6].field_0x18;
    pUVar3 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    pUVar4 = (UBaseCameraObject *)UObjectBaseUtility::GetTypedOuter(this,pUVar3);
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultParameters
              (pUVar4,&(local_28.Result)->VariableTable,&(local_28.Result)->ContextDataTable);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedResult.SharedReferenceCount.ReferenceController);
  return;
}

