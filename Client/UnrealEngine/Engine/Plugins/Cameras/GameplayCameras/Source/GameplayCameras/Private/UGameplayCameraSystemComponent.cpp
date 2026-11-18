// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 27

// StaticClass @ 14d5e4490

UClass * __cdecl UGameplayCameraSystemComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraSystemComponent",
               &Z_Registration_Info_UClass_UGameplayCameraSystemComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraSystemComponent,0x280,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraSystemComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraSystemComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraSystemComponent.InnerSingleton;
}

// UGameplayCameraSystemComponent @ 14d5fe6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayCameraSystemComponent * __thiscall
UGameplayCameraSystemComponent::UGameplayCameraSystemComponent
          (UGameplayCameraSystemComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UGameplayCameraSystemComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bSetPlayerControllerRotation = false;
  (this->WeakPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UGameplayCameraSystemComponent @ 14d5fe760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayCameraSystemComponent * __thiscall
UGameplayCameraSystemComponent::UGameplayCameraSystemComponent
          (UGameplayCameraSystemComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UGameplayCameraSystemComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bSetPlayerControllerRotation = false;
  (this->WeakPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UGameplayCameraSystemComponent @ 14d600c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraSystemComponent::~UGameplayCameraSystemComponent
          (UGameplayCameraSystemComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7IGameplayCameraSystemHost__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// ActivateCameraSystemForPlayerController @ 14d606c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameplayCameraSystemComponent::ActivateCameraSystemForPlayerController
          (UGameplayCameraSystemComponent *this,APlayerController *param_1)

{
  APlayerController *pAVar1;
  APlayerController *local_res10;
  undefined4 local_18;
  undefined1 uStack_14;
  undefined3 uStack_13;
  undefined4 uStack_10;
  uint uStack_c;
  
  if (param_1 == (APlayerController *)0x0) {
    local_res10 = (APlayerController *)0x0;
    FFrame::KismetExecutionMessage
              (L"Can\'t activate gameplay camera system: invalid player controller given!",Error,
               (FName)0x0);
    return;
  }
  pAVar1 = (APlayerController *)FWeakObjectPtr::Get(&(this->WeakPlayerController).WeakPtr);
  if ((pAVar1 != (APlayerController *)0x0) && (pAVar1 != param_1)) {
    DeactivateCameraSystem(this,(AActor *)0x0);
  }
  IGameplayCameraSystemHost::EnsureCameraSystemInitialized
            ((IGameplayCameraSystemHost *)&this->_padding_);
  if (this->_padding_ == 0) {
    local_res10 = (APlayerController *)0x0;
    FFrame::KismetExecutionMessage
              (L"Can\'t activate gameplay camera system: no owning actor found!",Error,(FName)0x0);
    return;
  }
  uStack_c = uStack_c & 0xfffffffe;
  _uStack_14 = CONCAT31(uStack_13,1);
  local_18 = 0;
  uStack_10 = 0x40000000;
  (**(code **)(param_1->_padding_ + 0xef8))(param_1,this->_padding_,&local_18);
  local_res10 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakPlayerController).WeakPtr,(FObjectPtr)&local_res10);
                    /* WARNING: Could not recover jumptable at 0x00014d606d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  return;
}

// ActivateCameraSystemForPlayerIndex @ 14d606d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameplayCameraSystemComponent::ActivateCameraSystemForPlayerIndex
          (UGameplayCameraSystemComponent *this,int param_1)

{
  APlayerController *pAVar1;
  
  pAVar1 = UGameplayStatics::GetPlayerController((UObject *)this,param_1);
  if (pAVar1 == (APlayerController *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Can\'t activate gameplay camera system: no player controller found!",Error,
               (FName)0x0);
    return;
  }
  ActivateCameraSystemForPlayerController(this,pAVar1);
  return;
}

// BeginPlay @ 14d60ce90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraSystemComponent::BeginPlay(UGameplayCameraSystemComponent *this)

{
  ENetMode EVar1;
  APlayerController *pAVar2;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (((this->_padding_ & 0x100000) != 0) && ((this->AutoActivateForPlayer).Value != '\0')) {
    EVar1 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if (EVar1 != NM_DedicatedServer) {
      pAVar2 = UGameplayStatics::GetPlayerController
                         ((UObject *)this,(this->AutoActivateForPlayer).Value - 1);
      if (pAVar2 == (APlayerController *)0x0) {
        FFrame::KismetExecutionMessage
                  (L"Can\'t activate gameplay camera system: no player controller found!",Error,
                   (FName)0x0);
        return;
      }
      ActivateCameraSystemForPlayerController(this,pAVar2);
      return;
    }
  }
  return;
}

// DeactivateCameraSystem @ 14d612c40

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
UGameplayCameraSystemComponent::DeactivateCameraSystem
          (UGameplayCameraSystemComponent *this,AActor *param_1)

{
  UObject *pUVar1;
  undefined4 local_18;
  undefined1 uStack_14;
  undefined3 uStack_13;
  undefined4 uStack_10;
  uint uStack_c;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakPlayerController).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    uStack_c = uStack_c & 0xfffffffe;
    _uStack_14 = CONCAT31(uStack_13,1);
    local_18 = 0;
    uStack_10 = 0x40000000;
    (**(code **)(*(longlong *)pUVar1 + 0xef8))(pUVar1,param_1,&local_18);
    (this->WeakPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// EndPlay @ 14d6155f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraSystemComponent::EndPlay(UGameplayCameraSystemComponent *this,Type param_1)

{
  UObject *pUVar1;
  undefined4 local_18;
  undefined1 uStack_14;
  undefined3 uStack_13;
  undefined4 uStack_10;
  uint uStack_c;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakPlayerController).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    uStack_c = uStack_c & 0xfffffffe;
    _uStack_14 = CONCAT31(uStack_13,1);
    local_18 = 0;
    uStack_10 = 0x40000000;
    (**(code **)(*(longlong *)pUVar1 + 0xef8))(pUVar1,0,&local_18);
    (this->WeakPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  }
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  return;
}

// GetAsObject @ 14d618770

UObject * __thiscall
UGameplayCameraSystemComponent::GetAsObject(UGameplayCameraSystemComponent *this)

{
  return (UObject *)&this[-1]._padding_;
}

// GetCameraView @ 14d619bb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraSystemComponent::GetCameraView
          (UGameplayCameraSystemComponent *this,float param_1,FMinimalViewInfo *param_2)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FCameraSystemEvaluator *pFVar4;
  FCameraSystemEvaluationParams local_res8 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  this_00 = &this->_padding_;
  if ((FCameraSystemEvaluator *)*this_00 != (FCameraSystemEvaluator *)0x0) {
    local_res8[0].DeltaTime = param_1;
    UE::Cameras::FCameraSystemEvaluator::Update((FCameraSystemEvaluator *)*this_00,local_res8);
    if (*this_00 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UE::Cameras::FCameraSystemEvaluator::GetEvaluatedCameraView
              ((FCameraSystemEvaluator *)*this_00,param_2);
    if (this->bSetPlayerControllerRotation != false) {
      pUVar3 = FWeakObjectPtr::Get(&(this->WeakPlayerController).WeakPtr);
      if (pUVar3 != (UObject *)0x0) {
        pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x7b0);
        pFVar4 = TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>::operator->
                           ((TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)this_00);
        local_28 = *(undefined4 *)&(pFVar4->Result).CameraPose.Rotation.Pitch;
        uStack_24 = *(undefined4 *)((longlong)&(pFVar4->Result).CameraPose.Rotation.Pitch + 4);
        uStack_20 = *(undefined4 *)&(pFVar4->Result).CameraPose.Rotation.Yaw;
        uStack_1c = *(undefined4 *)((longlong)&(pFVar4->Result).CameraPose.Rotation.Yaw + 4);
        local_18 = (pFVar4->Result).CameraPose.Rotation.Roll;
        (*pcVar1)(pUVar3,&local_28);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14d61c7e0

UClass * __cdecl UGameplayCameraSystemComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraSystemComponent",
               &Z_Registration_Info_UClass_UGameplayCameraSystemComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraSystemComponent,0x280,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraSystemComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraSystemComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraSystemComponent.InnerSingleton;
}

// IsCameraSystemActiveForPlayController @ 14d620ed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameplayCameraSystemComponent::IsCameraSystemActiveForPlayController
          (UGameplayCameraSystemComponent *this,APlayerController *param_1)

{
  AActor *pAVar1;
  APlayerCameraManager *this_00;
  APlayerController *pAVar2;
  AActor *pAVar3;
  
  pAVar2 = (APlayerController *)FWeakObjectPtr::Get(&(this->WeakPlayerController).WeakPtr);
  if ((((pAVar2 != (APlayerController *)0x0) && (pAVar2 == param_1)) &&
      (pAVar1 = (AActor *)this->_padding_, pAVar1 != (AActor *)0x0)) &&
     ((this->_padding_ != 0 &&
      (this_00 = (pAVar2->PlayerCameraManager).field0_0x0.DebugPtr,
      this_00 != (APlayerCameraManager *)0x0)))) {
    pAVar3 = APlayerCameraManager::GetViewTarget(this_00);
    return pAVar3 == pAVar1;
  }
  return false;
}

// OnRegister @ 14d629430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraSystemComponent::OnRegister(UGameplayCameraSystemComponent *this)

{
  byte *pbVar1;
  char cVar2;
  UWorld *pUVar3;
  ULevel *pUVar4;
  FLevelCollection *pFVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId846,"USceneComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x34e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId846);
  }
  pFVar5 = (FLevelCollection *)0x0;
  if ((this->_padding_ != 0) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x508))
                        (this,this->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,
                         this->_padding_), cVar2 == '\0')) {
    this->_padding_ = 0;
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x3f;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfc;
    this->_padding_ = 0;
  }
  if ((this->_padding_ != 0) ||
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 != (UWorld *)0x0)
     ) {
    pUVar4 = UActorComponent::GetComponentLevel((UActorComponent *)this);
    if (pUVar4 != (ULevel *)0x0) {
      pFVar5 = pUVar4->CachedLevelCollection;
    }
    this->_padding_ = (longlong)pFVar5;
  }
  UActorComponent::OnRegister((UActorComponent *)this);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StartGlobalCameraModifierRig @ 14d636b30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
UGameplayCameraSystemComponent::StartGlobalCameraModifierRig
          (UGameplayCameraSystemComponent *this,UCameraRigAsset *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FCameraRigInstanceID FVar3;
  FSharedReferencer<1> FVar4;
  wchar_t *in_R9;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  if ((FCameraSystemEvaluator *)this->_padding_ == (FCameraSystemEvaluator *)0x0) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
    return (FCameraRigInstanceID)param_1;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            ((FCameraSystemEvaluator *)this->_padding_,&local_18,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_18.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_18.Object != (FCameraModifierService *)0x0)
    goto LAB_14d636bce;
  }
  in_R9 = L"";
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FCameraRigInstanceID)(*pcVar1)();
    return FVar3;
  }
LAB_14d636bce:
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            ((FCameraModifierService *)local_18.Object,param_1,(ECameraRigLayer)param_2,
             (int)CONCAT71((int7)((ulonglong)in_R9 >> 8),3));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return (FCameraRigInstanceID)param_1;
}

// StartVisualCameraModifierRig @ 14d637af0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
UGameplayCameraSystemComponent::StartVisualCameraModifierRig
          (UGameplayCameraSystemComponent *this,UCameraRigAsset *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FCameraRigInstanceID FVar3;
  FSharedReferencer<1> FVar4;
  wchar_t *in_R9;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  if ((FCameraSystemEvaluator *)this->_padding_ == (FCameraSystemEvaluator *)0x0) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
    return (FCameraRigInstanceID)param_1;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            ((FCameraSystemEvaluator *)this->_padding_,&local_18,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_18.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_18.Object != (FCameraModifierService *)0x0)
    goto LAB_14d637b84;
  }
  in_R9 = L"";
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FCameraRigInstanceID)(*pcVar1)();
    return FVar3;
  }
LAB_14d637b84:
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            ((FCameraModifierService *)local_18.Object,param_1,(ECameraRigLayer)param_2,
             (int)CONCAT71((int7)((ulonglong)in_R9 >> 8),4));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return (FCameraRigInstanceID)param_1;
}

// StaticRegisterNativesUGameplayCameraSystemComponent @ 14d6392d0

void __cdecl
UGameplayCameraSystemComponent::StaticRegisterNativesUGameplayCameraSystemComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UGameplayCameraSystemComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopCameraModifierRig @ 14d6396c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraSystemComponent::StopCameraModifierRig
          (UGameplayCameraSystemComponent *this,FCameraRigInstanceID param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> FVar3;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  if ((FCameraSystemEvaluator *)this->_padding_ == (FCameraSystemEvaluator *)0x0) {
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            ((FCameraSystemEvaluator *)this->_padding_,&local_18,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_18.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar3.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_18.Object != (FCameraModifierService *)0x0)
    goto LAB_14d639756;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14d639756:
  UE::Cameras::FCameraModifierService::StopCameraModifierRig
            ((FCameraModifierService *)local_18.Object,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// _getUObject @ 14d63f310

UObject * __thiscall
UGameplayCameraSystemComponent::_getUObject(UGameplayCameraSystemComponent *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{552}' @ 14d63f31c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGameplayCameraSystemComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UGameplayCameraSystemComponent::_getUObject_adjustor_552__(UGameplayCameraSystemComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGameplayCameraSystemComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execActivateCameraSystemForPlayerController @ 14d63f580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UGameplayCameraSystemComponent::execActivateCameraSystemForPlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res10 [2];
  UObject *local_res20;
  undefined4 local_28;
  undefined1 uStack_24;
  undefined3 uStack_23;
  undefined4 uStack_20;
  uint uStack_1c;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (UObject *)0x0) {
    local_res20 = (UObject *)0x0;
    FFrame::KismetExecutionMessage
              (L"Can\'t activate gameplay camera system: invalid player controller given!",Error,
               (FName)0x0);
    return;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0xf].field_0x1c);
  if ((pUVar3 != (UObject *)0x0) && (pUVar3 != pUVar2)) {
    DeactivateCameraSystem((UGameplayCameraSystemComponent *)param_1,(AActor *)0x0);
  }
  IGameplayCameraSystemHost::EnsureCameraSystemInitialized
            ((IGameplayCameraSystemHost *)&param_1[0xe].field_0x20);
  if (*(longlong *)&param_1[4].field_0x8 == 0) {
    local_res20 = (UObject *)0x0;
    FFrame::KismetExecutionMessage
              (L"Can\'t activate gameplay camera system: no owning actor found!",Error,(FName)0x0);
    return;
  }
  uStack_1c = uStack_1c & 0xfffffffe;
  _uStack_24 = CONCAT31(uStack_23,1);
  local_28 = 0;
  uStack_20 = 0x40000000;
  (**(code **)(*(longlong *)pUVar2 + 0xef8))(pUVar2,*(longlong *)&param_1[4].field_0x8,&local_28);
  local_res20 = pUVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0xf].field_0x1c,(FObjectPtr)&local_res20);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,0);
  return;
}

// execActivateCameraSystemForPlayerIndex @ 14d63f6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UGameplayCameraSystemComponent::execActivateCameraSystemForPlayerIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  APlayerController *local_res20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = UGameplayStatics::GetPlayerController(param_1,local_res10[0]);
  if (local_res20 == (APlayerController *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Can\'t activate gameplay camera system: no player controller found!",Error,
               (FName)0x0);
    return;
  }
  ActivateCameraSystemForPlayerController((UGameplayCameraSystemComponent *)param_1,local_res20);
  return;
}

// execDeactivateCameraSystem @ 14d6401b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UGameplayCameraSystemComponent::execDeactivateCameraSystem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *local_res10;
  
  local_res10 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeactivateCameraSystem((UGameplayCameraSystemComponent *)param_1,local_res10);
  return;
}

// execIsCameraSystemActiveForPlayController @ 14d640940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraSystemComponent::execIsCameraSystemActiveForPlayController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *pAVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  AActor *pAVar5;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0xf].field_0x1c);
  if ((((pUVar4 == (UObject *)0x0) || (pUVar4 != pUVar3)) ||
      (pAVar2 = *(AActor **)&param_1[4].field_0x8, pAVar2 == (AActor *)0x0)) ||
     ((*(longlong *)(param_1 + 0xf) == 0 ||
      (*(APlayerCameraManager **)&pUVar4[0x16].field_0x20 == (APlayerCameraManager *)0x0)))) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    pAVar5 = APlayerCameraManager::GetViewTarget(*(APlayerCameraManager **)&pUVar4[0x16].field_0x20)
    ;
    *(bool *)param_3 = pAVar5 == pAVar2;
  }
  return;
}

// execStartGlobalCameraModifierRig @ 14d6411f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraSystemComponent::execStartGlobalCameraModifierRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FCameraModifierService *this;
  FSharedReferencer<1> FVar5;
  wchar_t *in_R9;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  uint uStackX_14;
  longlong local_res18;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_38;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  lVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraSystemEvaluator **)(param_1 + 0xf) == (FCameraSystemEvaluator *)0x0) {
    local_res10 = 0xffffffff;
    uStackX_14 = uStackX_14 & 0xffffff00;
    goto LAB_14d64135c;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)(param_1 + 0xf),&local_38,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_38.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)(FCameraModifierService *)0x0;
LAB_14d641307:
    in_R9 = L"";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((FCameraModifierService *)local_38.SharedReferenceCount.ReferenceController !=
        (FCameraModifierService *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)local_38.Object;
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_38.Object == (FCameraModifierService *)0x0)
    goto LAB_14d641307;
  }
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            (this,(UCameraRigAsset *)&local_res10,(ECameraRigLayer)lVar3,
             (int)CONCAT71((int7)((ulonglong)in_R9 >> 8),3));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
LAB_14d64135c:
  *(ulonglong *)param_3 = CONCAT44(uStackX_14,local_res10);
  return;
}

// execStartVisualCameraModifierRig @ 14d6415a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraSystemComponent::execStartVisualCameraModifierRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  wchar_t *in_R9;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  uint uStackX_14;
  longlong local_res18;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_28;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  lVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraSystemEvaluator **)(param_1 + 0xf) == (FCameraSystemEvaluator *)0x0) {
    local_res10 = 0xffffffff;
    uStackX_14 = uStackX_14 & 0xffffff00;
    goto LAB_14d641700;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)(param_1 + 0xf),&local_28,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_28.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14d6416a8:
    in_R9 = L"";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    FVar5.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_28.Object == (FCameraModifierService *)0x0)
    goto LAB_14d6416a8;
  }
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            ((FCameraModifierService *)local_28.Object,(UCameraRigAsset *)&local_res10,
             (ECameraRigLayer)lVar3,(int)CONCAT71((int7)((ulonglong)in_R9 >> 8),4));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
LAB_14d641700:
  *(ulonglong *)param_3 = CONCAT44(uStackX_14,local_res10);
  return;
}

// execStopCameraModifierRig @ 14d641a00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraSystemComponent::execStopCameraModifierRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FCameraRigInstanceID FVar3;
  bool bVar4;
  FCameraModifierService *this;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  int local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_28;
  
  local_res10 = 0xffffffff;
  uStackX_14 = uStackX_14 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3._4_4_ = uStackX_14;
  FVar3.Value = local_res10;
  if (*(FCameraSystemEvaluator **)(param_1 + 0xf) == (FCameraSystemEvaluator *)0x0) {
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)(param_1 + 0xf),&local_28,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_28.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)(FCameraModifierService *)0x0;
  }
  else {
    if ((FCameraModifierService *)local_28.SharedReferenceCount.ReferenceController !=
        (FCameraModifierService *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)local_28.Object;
    FVar5.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_28.Object != (FCameraModifierService *)0x0)
    goto LAB_14d641b36;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d641b36:
  UE::Cameras::FCameraModifierService::StopCameraModifierRig(this,FVar3,bVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

