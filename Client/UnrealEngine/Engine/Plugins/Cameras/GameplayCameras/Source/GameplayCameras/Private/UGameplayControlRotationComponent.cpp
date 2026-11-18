// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 17

// StaticClass @ 14d5e34b0

UClass * __cdecl UGameplayControlRotationComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayControlRotationComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayControlRotationComponent",
               &Z_Registration_Info_UClass_UGameplayControlRotationComponent.InnerSingleton,
               StaticRegisterNativesUGameplayControlRotationComponent,0x108,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayControlRotationComponent>,
               InternalVTableHelperCtorCaller<UGameplayControlRotationComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayControlRotationComponent.InnerSingleton;
}

// UGameplayControlRotationComponent @ 14d5fe930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameplayControlRotationComponent * __thiscall
UGameplayControlRotationComponent::UGameplayControlRotationComponent
          (UGameplayControlRotationComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->AxisActionAngularSpeedThreshold = 20.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->AxisActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisActions).ArrayNum = 0;
  (this->AxisActions).ArrayMax = 0;
  (this->PlayerController).field0_0x0.DebugPtr = (APlayerController *)0x0;
  *(undefined8 *)&this->CameraSystemHost = 0;
  *(undefined8 *)&(this->CameraSystemHost).field_0x8 = 0;
  (this->ControlRotationService).Object = (FPlayerControlRotationEvaluationService *)0x0;
  (this->ControlRotationService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AxisActionMagnitudeThreshold = 0.1;
  return this;
}

// UGameplayControlRotationComponent @ 14d5fe9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameplayControlRotationComponent * __thiscall
UGameplayControlRotationComponent::UGameplayControlRotationComponent
          (UGameplayControlRotationComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  (this->AxisActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisActions).ArrayNum = 0;
  (this->AxisActions).ArrayMax = 0;
  (this->PlayerController).field0_0x0.DebugPtr = (APlayerController *)0x0;
  *(undefined8 *)&this->CameraSystemHost = 0;
  *(undefined8 *)&(this->CameraSystemHost).field_0x8 = 0;
  (this->ControlRotationService).Object = (FPlayerControlRotationEvaluationService *)0x0;
  (this->ControlRotationService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AxisActionAngularSpeedThreshold = 20.0;
  this->AxisActionMagnitudeThreshold = 0.1;
  return this;
}

// ~UGameplayControlRotationComponent @ 14d600ca0

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
UGameplayControlRotationComponent::~UGameplayControlRotationComponent
          (UGameplayControlRotationComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ControlRotationService).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->AxisActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// ActivateControlRotationManagementForPlayerController @ 14d606dc0

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
UGameplayControlRotationComponent::ActivateControlRotationManagementForPlayerController
          (UGameplayControlRotationComponent *this,APlayerController *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FCameraSystemEvaluator *this_00;
  code *pcVar4;
  bool bVar5;
  IGameplayCameraSystemHost *pIVar6;
  UObject *this_01;
  UClass *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> *pTVar9;
  FPlayerControlRotationEvaluationService *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName FStackX_8;
  FName FStackX_18;
  FPlayerControlRotationEvaluationService *pFStack_a8;
  FSharedReferencer<1> FStack_a0;
  FString FStack_98;
  FString FStack_88;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> TStack_78;
  TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> TStack_68;
  FPlayerControlRotationParams FStack_58;
  
  if ((this->ControlRotationService).Object != (FPlayerControlRotationEvaluationService *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    FStackX_8 = (FName)this->_padding_;
    ::FName::ToString(&FStackX_8,&FStack_98);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (FStack_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    return;
  }
  if (param_1 == (APlayerController *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    FStackX_18 = (FName)this->_padding_;
    ::FName::ToString(&FStackX_18,&FStack_88);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (FStack_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
    return;
  }
  pIVar6 = IGameplayCameraSystemHost::FindActiveHost(param_1);
  if (pIVar6 == (IGameplayCameraSystemHost *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PlayerController).field0_0x0.DebugPtr = param_1;
  this_01 = (UObject *)(**(code **)(pIVar6->_padding_ + 0x10))(pIVar6);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar11;
  if (this_01 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_01);
    }
    pUVar7 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
    pTVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar7);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this_01);
  }
  *(UObject **)&this->CameraSystemHost = this_01;
  *(TReferenceControllerBase<1> **)&(this->CameraSystemHost).field_0x8 = pTVar8;
  FStack_58.AxisActionAngularSpeedThreshold = (double)this->AxisActionAngularSpeedThreshold;
  FStack_58.bApplyControlRotation = true;
  FStack_58.AxisActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.AxisActions.ArrayNum = 0;
  FStack_58.AxisActions.ArrayMax = 0;
  FStack_58.AxisActionMagnitudeThreshold = (double)this->AxisActionMagnitudeThreshold;
  TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_>::operator=
            (&FStack_58.AxisActions,&this->AxisActions);
  FStack_58.bApplyControlRotation = false;
  pTVar8 = ::operator_new(0x180);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FPlayerControlRotationEvaluationService *)&DAT_00000010;
    pTVar8 = pTVar11;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPlayerControlRotationEvaluationService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FPlayerControlRotationEvaluationService::FPlayerControlRotationEvaluationService
              ((FPlayerControlRotationEvaluationService *)(pTVar8 + 1),&FStack_58);
    pFVar10 = (FPlayerControlRotationEvaluationService *)(pTVar8 + 1);
    if (pFVar10 == (FPlayerControlRotationEvaluationService *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14d620558;
    }
  }
  if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
     (*(int *)(pFVar10->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar10->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar10->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d620558:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_a8 = pFVar10;
  FStack_a0.ReferenceController = pTVar8;
  if (&this->ControlRotationService !=
      (TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1> *)&pFStack_a8) {
    (this->ControlRotationService).Object = pFVar10;
    pFStack_a8 = (FPlayerControlRotationEvaluationService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ControlRotationService).SharedReferenceCount,&FStack_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (*(longlong *)&this->CameraSystemHost != 0) {
    pTVar11 = *(TReferenceControllerBase<1> **)&(this->CameraSystemHost).field_0x8;
  }
  pTVar8 = (TReferenceControllerBase<1> *)pTVar11[1]._padding_;
  this_00 = *(FCameraSystemEvaluator **)&pTVar11->SharedReferenceCount;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FCameraSystemEvaluator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1>::ToSharedRef
                     (&this->ControlRotationService,&TStack_68);
  TStack_78.Object = (FCameraEvaluationService *)pTVar9->Object;
  TStack_78.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (TStack_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Cameras::FCameraSystemEvaluator::RegisterEvaluationService(this_00,&TStack_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (FStack_58.AxisActions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.AxisActions.AllocatorInstance.Data);
  }
  return;
}

// ActivateControlRotationManagementForPlayerIndex @ 14d606dd0

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
UGameplayControlRotationComponent::ActivateControlRotationManagementForPlayerIndex
          (UGameplayControlRotationComponent *this,int param_1)

{
  APlayerController *pAVar1;
  
  pAVar1 = UGameplayStatics::GetPlayerController((UObject *)this,param_1);
  InitializeControlRotationService(this,pAVar1);
  return;
}

// BeginPlay @ 14d60cf10

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
UGameplayControlRotationComponent::BeginPlay(UGameplayControlRotationComponent *this)

{
  ENetMode EVar1;
  APlayerController *pAVar2;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (((this->_padding_ & 0x100000) != 0) && ((this->AutoActivateForPlayer).Value != '\0')) {
    EVar1 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if (EVar1 != NM_DedicatedServer) {
      pAVar2 = UGameplayStatics::GetPlayerController
                         ((UObject *)this,(this->AutoActivateForPlayer).Value - 1);
      InitializeControlRotationService(this,pAVar2);
      return;
    }
  }
  return;
}

// DeactivateControlRotationManagement @ 14d612cc0

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
UGameplayControlRotationComponent::DeactivateControlRotationManagement
          (UGameplayControlRotationComponent *this)

{
  TeardownControlRotationService(this,false);
  return;
}

// EndPlay @ 14d615680

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
UGameplayControlRotationComponent::EndPlay(UGameplayControlRotationComponent *this,Type param_1)

{
  TeardownControlRotationService(this,true);
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14d61ca20

UClass * __cdecl UGameplayControlRotationComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayControlRotationComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayControlRotationComponent",
               &Z_Registration_Info_UClass_UGameplayControlRotationComponent.InnerSingleton,
               StaticRegisterNativesUGameplayControlRotationComponent,0x108,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayControlRotationComponent>,
               InternalVTableHelperCtorCaller<UGameplayControlRotationComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayControlRotationComponent.InnerSingleton;
}

// InitializeControlRotationService @ 14d620280

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
UGameplayControlRotationComponent::InitializeControlRotationService
          (UGameplayControlRotationComponent *this,APlayerController *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FCameraSystemEvaluator *this_00;
  code *pcVar4;
  bool bVar5;
  IGameplayCameraSystemHost *pIVar6;
  UObject *this_01;
  UClass *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> *pTVar9;
  FPlayerControlRotationEvaluationService *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName local_res8;
  FName local_res18;
  FPlayerControlRotationEvaluationService *local_a8;
  FSharedReferencer<1> local_a0;
  FString local_98;
  FString local_88;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_78;
  TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> local_68;
  FPlayerControlRotationParams local_58;
  
  if ((this->ControlRotationService).Object != (FPlayerControlRotationEvaluationService *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_98);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
    return;
  }
  if (param_1 == (APlayerController *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    local_res18 = (FName)this->_padding_;
    ::FName::ToString(&local_res18,&local_88);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
    return;
  }
  pIVar6 = IGameplayCameraSystemHost::FindActiveHost(param_1);
  if (pIVar6 == (IGameplayCameraSystemHost *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PlayerController).field0_0x0.DebugPtr = param_1;
  this_01 = (UObject *)(**(code **)(pIVar6->_padding_ + 0x10))(pIVar6);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar11;
  if (this_01 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_01);
    }
    pUVar7 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
    pTVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar7);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this_01);
  }
  *(UObject **)&this->CameraSystemHost = this_01;
  *(TReferenceControllerBase<1> **)&(this->CameraSystemHost).field_0x8 = pTVar8;
  local_58.AxisActionAngularSpeedThreshold = (double)this->AxisActionAngularSpeedThreshold;
  local_58.bApplyControlRotation = true;
  local_58.AxisActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.AxisActions.ArrayNum = 0;
  local_58.AxisActions.ArrayMax = 0;
  local_58.AxisActionMagnitudeThreshold = (double)this->AxisActionMagnitudeThreshold;
  TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_>::operator=
            (&local_58.AxisActions,&this->AxisActions);
  local_58.bApplyControlRotation = false;
  pTVar8 = ::operator_new(0x180);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FPlayerControlRotationEvaluationService *)&DAT_00000010;
    pTVar8 = pTVar11;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPlayerControlRotationEvaluationService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FPlayerControlRotationEvaluationService::FPlayerControlRotationEvaluationService
              ((FPlayerControlRotationEvaluationService *)(pTVar8 + 1),&local_58);
    pFVar10 = (FPlayerControlRotationEvaluationService *)(pTVar8 + 1);
    if (pFVar10 == (FPlayerControlRotationEvaluationService *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14d620558;
    }
  }
  if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
     (*(int *)(pFVar10->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar10->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar10->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d620558:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = pFVar10;
  local_a0.ReferenceController = pTVar8;
  if (&this->ControlRotationService !=
      (TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1> *)&local_a8) {
    (this->ControlRotationService).Object = pFVar10;
    local_a8 = (FPlayerControlRotationEvaluationService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ControlRotationService).SharedReferenceCount,&local_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (*(longlong *)&this->CameraSystemHost != 0) {
    pTVar11 = *(TReferenceControllerBase<1> **)&(this->CameraSystemHost).field_0x8;
  }
  pTVar8 = (TReferenceControllerBase<1> *)pTVar11[1]._padding_;
  this_00 = *(FCameraSystemEvaluator **)&pTVar11->SharedReferenceCount;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FCameraSystemEvaluator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1>::ToSharedRef
                     (&this->ControlRotationService,&local_68);
  local_78.Object = (FCameraEvaluationService *)pTVar9->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Cameras::FCameraSystemEvaluator::RegisterEvaluationService(this_00,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (local_58.AxisActions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AxisActions.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUGameplayControlRotationComponent @ 14d639330

void __cdecl
UGameplayControlRotationComponent::StaticRegisterNativesUGameplayControlRotationComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UGameplayControlRotationComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeardownControlRotationService @ 14d639a20

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
UGameplayControlRotationComponent::TeardownControlRotationService
          (UGameplayControlRotationComponent *this,bool param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraSystemEvaluator *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FPlayerControlRotationEvaluationService *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName local_res8;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  FString local_48;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_38;
  
  if ((((this->ControlRotationService).Object == (FPlayerControlRotationEvaluationService *)0x0) ||
      (*(longlong *)&this->CameraSystemHost == 0)) ||
     (*(longlong *)&(this->CameraSystemHost).field_0x8 == 0)) {
    if ((!param_1) && (1 < (byte)LogCameraSystem._0_1_)) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  lVar1 = *(longlong *)&(this->CameraSystemHost).field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x10);
  this_00 = *(FCameraSystemEvaluator **)(lVar1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FCameraSystemEvaluator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ControlRotationService).Object == (FPlayerControlRotationEvaluationService *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar3 = (this->ControlRotationService).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->ControlRotationService).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar4 == (FPlayerControlRotationEvaluationService *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (FCameraEvaluationService *)pFVar4;
  local_38.SharedReferenceCount.ReferenceController = pTVar3;
  UE::Cameras::FCameraSystemEvaluator::UnregisterEvaluationService(this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ControlRotationService !=
      (TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1> *)&local_58) {
    (this->ControlRotationService).Object = (FPlayerControlRotationEvaluationService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ControlRotationService).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  *(undefined8 *)&this->CameraSystemHost = 0;
  *(undefined8 *)&(this->CameraSystemHost).field_0x8 = 0;
  (this->PlayerController).field0_0x0.DebugPtr = (APlayerController *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// TickComponent @ 14d639e80

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
UGameplayControlRotationComponent::TickComponent
          (UGameplayControlRotationComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  APlayerController *pAVar1;
  FPlayerControlRotationEvaluationService *pFVar2;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pAVar1 = (this->PlayerController).field0_0x0.DebugPtr;
  if ((pAVar1 != (APlayerController *)0x0) &&
     (pFVar2 = (this->ControlRotationService).Object,
     pFVar2 != (FPlayerControlRotationEvaluationService *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014d639eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pAVar1->_padding_ + 0x7b0))(pAVar1,&pFVar2->CurrentControlRotation);
    return;
  }
  return;
}

// execActivateControlRotationManagementForPlayerController @ 14d63f7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayControlRotationComponent::execActivateControlRotationManagementForPlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  FCameraSystemEvaluator *this;
  bool bVar6;
  UClass *pUVar7;
  longlong *plVar8;
  UObjectBaseUtility *pUVar9;
  UObject *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  UObject *local_res8;
  FName local_res10 [2];
  FName local_res20;
  TReferenceControllerBase<1> *local_b8;
  FSharedReferencer<1> local_b0;
  UClass *local_a8;
  FString local_a0;
  FString local_90;
  FPlayerControlRotationParams local_80;
  TSharedRef<UE::Cameras::FCameraEvaluationService,1> local_58;
  TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> local_48;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[6].field_0x8 != 0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10[0].Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(local_res10,&local_a0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    return;
  }
  if (local_res8 == (UObject *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_90);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_90.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
    return;
  }
  pUVar9 = *(UObjectBaseUtility **)&local_res8[0x16].field_0x20;
  if (pUVar9 == (UObjectBaseUtility *)0x0) {
LAB_14d63f922:
    plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x7e0))(pUVar10);
    if (plVar8 == (longlong *)0x0) {
LAB_14d63fc14:
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
    pcVar4 = *(code **)(*plVar8 + 0x740);
    local_a8 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8);
    }
    pUVar9 = (UObjectBaseUtility *)(*pcVar4)(plVar8,&local_a8);
    if (pUVar9 == (UObjectBaseUtility *)0x0) goto LAB_14d63fc14;
    pUVar7 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress(pUVar9,pUVar7);
    if (plVar8 == (longlong *)0x0) goto LAB_14d63fc14;
  }
  else {
    pUVar7 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress(pUVar9,pUVar7);
    if (plVar8 == (longlong *)0x0) goto LAB_14d63f922;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  *(UObject **)&param_1[5].field_0x18 = pUVar10;
  pUVar10 = (UObject *)(**(code **)(*plVar8 + 0x10))(plVar8);
  pTVar11 = pTVar14;
  if (pUVar10 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    pUVar7 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
    pTVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar10,pUVar7);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  *(UObject **)&param_1[5].field_0x20 = pUVar10;
  *(TReferenceControllerBase<1> **)(param_1 + 6) = pTVar11;
  local_80.AxisActionAngularSpeedThreshold = (double)*(float *)&param_1[5].field_0x8;
  local_80.bApplyControlRotation = true;
  local_80.AxisActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.AxisActions.ArrayNum = 0;
  local_80.AxisActions.ArrayMax = 0;
  local_80.AxisActionMagnitudeThreshold = (double)*(float *)&param_1[5].field_0xc;
  TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_>::operator=
            (&local_80.AxisActions,
             (TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_> *)&param_1[4].field_0x20)
  ;
  local_80.bApplyControlRotation = false;
  pTVar11 = ::operator_new(0x180);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar11 = pTVar14;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPlayerControlRotationEvaluationService_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FPlayerControlRotationEvaluationService::FPlayerControlRotationEvaluationService
              ((FPlayerControlRotationEvaluationService *)(pTVar11 + 1),&local_80);
    pTVar13 = pTVar11 + 1;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14d63fb2b;
    }
  }
  lVar5._0_4_ = pTVar13->SharedReferenceCount;
  lVar5._4_4_ = pTVar13->WeakReferenceCount;
  if (((lVar5 == 0) || (pTVar13[1]._padding_ == 0)) || (*(int *)(pTVar13[1]._padding_ + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar13->SharedReferenceCount = pTVar13;
    if (pTVar11 != (TReferenceControllerBase<1> *)pTVar13[1]._padding_) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar8 = (longlong *)pTVar13[1]._padding_;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      pTVar13[1]._padding_ = (longlong)pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14d63fb2b:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = pTVar13;
  local_b0.ReferenceController = pTVar11;
  if ((TReferenceControllerBase<1> **)&param_1[6].field_0x8 != &local_b8) {
    *(TReferenceControllerBase<1> **)&param_1[6].field_0x8 = pTVar13;
    local_b8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_1[6].field_0x10,&local_b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (*(longlong *)&param_1[5].field_0x20 != 0) {
    pTVar14 = *(TReferenceControllerBase<1> **)(param_1 + 6);
  }
  pTVar11 = (TReferenceControllerBase<1> *)pTVar14[1]._padding_;
  this = *(FCameraSystemEvaluator **)&pTVar14->SharedReferenceCount;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (FCameraSystemEvaluator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar12 = TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1>::ToSharedRef
                      ((TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1> *)
                       &param_1[6].field_0x8,&local_48);
  local_58.Object = (FCameraEvaluationService *)pTVar12->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Cameras::FCameraSystemEvaluator::RegisterEvaluationService(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (local_80.AxisActions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AxisActions.AllocatorInstance.Data);
  }
  return;
}

// execActivateControlRotationManagementForPlayerIndex @ 14d63fc60

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
UGameplayControlRotationComponent::execActivateControlRotationManagementForPlayerIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerController *pAVar2;
  int local_res10 [2];
  
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
  pAVar2 = UGameplayStatics::GetPlayerController(param_1,local_res10[0]);
  InitializeControlRotationService((UGameplayControlRotationComponent *)param_1,pAVar2);
  return;
}

// execDeactivateControlRotationManagement @ 14d640240

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
UGameplayControlRotationComponent::execDeactivateControlRotationManagement
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TeardownControlRotationService((UGameplayControlRotationComponent *)param_1,false);
  return;
}

