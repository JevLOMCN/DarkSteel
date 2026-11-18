// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 54

// StaticClass @ 14d5e4ba0

UClass * __cdecl UGameplayCameraComponentBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraComponentBase",
               &Z_Registration_Info_UClass_UGameplayCameraComponentBase.InnerSingleton,
               StaticRegisterNativesUGameplayCameraComponentBase,0x2b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraComponentBase>,
               InternalVTableHelperCtorCaller<UGameplayCameraComponentBase>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraComponentBase.InnerSingleton;
}

// UGameplayCameraComponentBase @ 14d5fe3a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayCameraComponentBase * __thiscall
UGameplayCameraComponentBase::UGameplayCameraComponentBase
          (UGameplayCameraComponentBase *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraComponentBase__6B_;
  *(undefined8 *)&this->field_0x258 = 0;
  *(undefined8 *)&this->field_0x260 = 0;
  *(undefined8 *)&this->field_0x268 = 0;
  this->bSetControlRotationWhenViewTarget = false;
  (this->OutputCameraComponent).field0_0x0.DebugPtr = (UCineCameraComponent *)0x0;
  (this->EvaluationContext).Object = (FGameplayCameraComponentEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PendingDeactivateCameraSystemEvaluator).Object = (FCameraSystemEvaluator *)0x0;
  (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsCameraCutNextFrame = false;
  this->bIsPendingDeactivate = false;
  return this;
}

// UGameplayCameraComponentBase @ 14d5fe440

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayCameraComponentBase * __thiscall
UGameplayCameraComponentBase::UGameplayCameraComponentBase
          (UGameplayCameraComponentBase *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->field_0x1aa = this->field_0x1aa | 8;
  this->field_0x42 = this->field_0x42 | 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraComponentBase__6B_;
  *(undefined8 *)&this->field_0x258 = 0;
  *(undefined8 *)&this->field_0x260 = 0;
  *(undefined8 *)&this->field_0x268 = 0;
  (this->OutputCameraComponent).field0_0x0.DebugPtr = (UCineCameraComponent *)0x0;
  (this->EvaluationContext).Object = (FGameplayCameraComponentEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PendingDeactivateCameraSystemEvaluator).Object = (FCameraSystemEvaluator *)0x0;
  (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->field_0x40 = 4;
  this->bSetControlRotationWhenViewTarget = false;
  this->bIsCameraCutNextFrame = false;
  this->bIsPendingDeactivate = false;
  return this;
}

// ~UGameplayCameraComponentBase @ 14d600a00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::~UGameplayCameraComponentBase(UGameplayCameraComponentBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraComponentBase__6B_;
  pTVar3 = (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EvaluationContext).SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0x250 = &___7IGameplayCameraSystemHost__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x260);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// Activate @ 14d605d40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::Activate(UGameplayCameraComponentBase *this,bool param_1)

{
  char cVar1;
  IGameplayCameraSystemHost *pIVar2;
  
  if (!param_1) {
    cVar1 = (**(code **)(*(longlong *)this + 0x330))();
    if (cVar1 == '\0') goto LAB_14d605daf;
  }
  if ((this->field_0x9b & 0x20) != 0) {
    UActorComponent::Activate((UActorComponent *)this,param_1);
    DeactivateCameraEvaluationContext(this,true);
    EnsureCameraSystemHost(this);
    pIVar2 = (IGameplayCameraSystemHost *)&this->field_0x250;
    if (this == (UGameplayCameraComponentBase *)0x0) {
      pIVar2 = (IGameplayCameraSystemHost *)0x0;
    }
    ActivateCameraEvaluationContext(this,(APlayerController *)0x0,pIVar2,Push);
    return;
  }
LAB_14d605daf:
  UActorComponent::Activate((UActorComponent *)this,param_1);
  return;
}

// ActivateCameraEvaluationContext @ 14d605dd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::ActivateCameraEvaluationContext
          (UGameplayCameraComponentBase *this,APlayerController *param_1,
          IGameplayCameraSystemHost *param_2,EGameplayCameraComponentActivationMode param_3)

{
  atomic<int> *paVar1;
  TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *this_00;
  atomic<int> aVar2;
  FCameraSystemEvaluator *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *pTVar8;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar9;
  FCameraEvaluationContext *pFVar10;
  ForAnyElementType FVar11;
  FCameraEvaluationContextStack *this_01;
  FName local_res18 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  FString local_188;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_178;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_168;
  FName local_158;
  FName local_150;
  FString local_148;
  FString local_138;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_128;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_118;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_108;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_f8;
  FString local_e8;
  TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> local_d8;
  TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> local_c8;
  TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> local_b8;
  TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> local_a8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_58;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_48;
  undefined8 local_38 [2];
  
  if (param_2 == (IGameplayCameraSystemHost *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5863620769908522752>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCameraComponentBase.cpp"
                       ,0x100,"Host");
    if (!bVar7) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  CreateCameraEvaluationContext(this,param_1);
  this_00 = &this->EvaluationContext;
  if ((this_00->Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this_00->Object->field_0xae1 != '\0') {
    if (*(longlong *)&this->field_0xa8 == 0) {
      ::FString::FString(&local_198,L"None");
    }
    else {
      local_res18[0] = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(local_res18,&local_198);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar11.Data = local_198.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_98,(wchar_t *)FVar11.Data);
    local_158.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_158.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_158,&local_138);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar11.Data = local_138.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_78,(wchar_t *)FVar11.Data);
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_1a8.AllocatorInstance,2,&local_1a8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1a8.AllocatorInstance.Data,&local_98,2);
    ::FString::FormatImpl
              (&local_148,
               L"Can\'t activate Gameplay Camera component \'{0}.{1}\': it is already active!",
               &local_1a8);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar11.Data = local_148.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Error,(FName)0x0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
    if ((FStringFormatArg *)local_1a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_198.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
    return;
  }
  if (4 < (byte)LogCameraSystem._0_1_) {
    UEnum::GetValueAsString<enum_EGameplayCameraComponentActivationMode>(&local_e8,param_3);
    if (this == (UGameplayCameraComponentBase *)0x0) {
      ::FString::FString(&local_188,L"None");
    }
    else {
      local_150.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_150.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_150,&local_188);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = (param_2->CameraSystemEvaluator).Object;
  pTVar4 = (param_2->CameraSystemEvaluator).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FCameraSystemEvaluator *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = &pFVar3->ContextStack;
  if (param_3 == Push) {
    pTVar8 = TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::ToSharedRef
                       (this_00,&local_a8);
    local_f8.Object = (FCameraEvaluationContext *)pTVar8->Object;
    local_f8.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Cameras::FCameraEvaluationContextStack::PushContext(this_01,&local_f8);
    local_178.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
  }
  else if (param_3 == PushAndInsert) {
    UE::Cameras::FCameraEvaluationContextStack::GetActiveContext(this_01,&local_168);
    pTVar8 = TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::ToSharedRef
                       (this_00,&local_b8);
    local_108.Object = (FCameraEvaluationContext *)pTVar8->Object;
    local_108.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Cameras::FCameraEvaluationContextStack::PushContext(this_01,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    local_178.SharedReferenceCount.ReferenceController =
         local_168.SharedReferenceCount.ReferenceController;
    if (local_168.Object != (FCameraEvaluationContext *)0x0) {
      pTVar9 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
                         (&local_168,&local_58);
      UE::Cameras::FCameraEvaluationContextStack::RemoveContext(this_01,pTVar9);
      pFVar10 = (FCameraEvaluationContext *)
                TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::operator->
                          (this_00);
      pTVar9 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
                         (&local_168,&local_48);
      UE::Cameras::FCameraEvaluationContext::AddChildContext(pFVar10,pTVar9);
      local_178.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    if (param_3 != InsertOrPush) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5863620769908522693>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCameraComponentBase.cpp"
                         ,0x13b,"false");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14d6062c0;
    }
    UE::Cameras::FCameraEvaluationContextStack::GetActiveContext(this_01,&local_178);
    if (local_178.Object == (FCameraEvaluationContext *)0x0) {
      pTVar8 = TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::ToSharedRef
                         (this_00,&local_c8);
      local_118.Object = (FCameraEvaluationContext *)pTVar8->Object;
      local_118.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UE::Cameras::FCameraEvaluationContextStack::PushContext(this_01,&local_118);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar10 = local_178.Object;
      if ((local_178.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), pFVar10 = local_178.Object, bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar8 = TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::ToSharedRef
                         (this_00,&local_d8);
      local_128.Object = (FCameraEvaluationContext *)pTVar8->Object;
      local_128.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UE::Cameras::FCameraEvaluationContext::AddChildContext(pFVar10,&local_128);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
LAB_14d6062c0:
  if (&this->PendingDeactivateCameraSystemEvaluator !=
      (TWeakPtr<UE::Cameras::FCameraSystemEvaluator,1> *)local_38) {
    pTVar5 = (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController;
    (this->PendingDeactivateCameraSystemEvaluator).Object = (FCameraSystemEvaluator *)0x0;
    (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  this->bIsPendingDeactivate = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// ActivateCameraForPlayerController @ 14d606340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::ActivateCameraForPlayerController
          (UGameplayCameraComponentBase *this,APlayerController *param_1,bool param_2,
          EGameplayCameraComponentActivationMode param_3)

{
  APlayerCameraManager *this_00;
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  IGameplayCameraSystemHost *pIVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_148 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_b8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  UActorComponent::Activate((UActorComponent *)this,false);
  DeactivateCameraEvaluationContext(this,true);
  if (((param_2) && (param_1 != (APlayerController *)0x0)) &&
     (this_00 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr,
     this_00 != (APlayerCameraManager *)0x0)) {
    pUVar2 = Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
    if (pIVar3 != (IGameplayCameraSystemHost *)0x0) {
      IGameplayCameraSystemHost::DestroyCameraSystem
                ((IGameplayCameraSystemHost *)&this->field_0x250);
      ActivateCameraEvaluationContext(this,param_1,pIVar3,param_3);
      return;
    }
  }
  if (param_3 != Push) {
    if (*(longlong *)&this->field_0xa8 == 0) {
      ::FString::FString(&local_f0,L"None");
    }
    else {
      local_f8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(&local_f8,&local_f0);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar5.Data = local_f0.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_a8,(wchar_t *)FVar5.Data);
    local_f8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_f8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_f8,&local_d0);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar5.Data = local_d0.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_88,(wchar_t *)FVar5.Data);
    pFVar4 = UEnum::GetValueAsString<enum_EGameplayCameraComponentActivationMode>(&local_b8,param_3)
    ;
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_68,pwVar6);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_108.AllocatorInstance,3,&local_108.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_108.AllocatorInstance.Data,&local_a8,3);
    ::FString::FormatImpl
              (&local_e0,
               L"Gameplay Camera component \'{0}.{1}\' cannot activate with mode \'{2}\' because no camera system was found on the given player controller, or no player controller was specified."
               ,&local_108);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar5.Data = local_e0.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Warning,(FName)0x0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
    }
    if ((void *)CONCAT44(local_b8.Data.AllocatorInstance.Data._4_4_,
                         local_b8.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_b8.Data.AllocatorInstance.Data._4_4_,
                                     local_b8.Data.AllocatorInstance.Data._0_4_));
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  EnsureCameraSystemHost(this);
  pIVar3 = (IGameplayCameraSystemHost *)&this->field_0x250;
  if (this == (UGameplayCameraComponentBase *)0x0) {
    pIVar3 = (IGameplayCameraSystemHost *)0x0;
  }
  ActivateCameraEvaluationContext(this,param_1,pIVar3,Push);
  if ((param_2) && (param_1 != (APlayerController *)0x0)) {
    local_108.ArrayMax = local_108.ArrayMax & 0xfffffffe;
    pFVar1 = (FScriptContainerElement *)
             CONCAT35((int3)((ulonglong)local_108.AllocatorInstance.Data >> 0x28),0x100000000);
    local_108.ArrayNum = 0x40000000;
    local_108.AllocatorInstance.Data._4_4_ = (undefined4)((ulonglong)pFVar1 >> 0x20);
    local_b8.Data.AllocatorInstance.Data._0_4_ = 0;
    local_b8.Data.AllocatorInstance.Data._4_4_ = local_108.AllocatorInstance.Data._4_4_;
    local_b8.Data.ArrayNum = 0x40000000;
    local_108.AllocatorInstance.Data = pFVar1;
    local_b8.Data.ArrayMax = local_108.ArrayMax;
    (**(code **)(param_1->_padding_ + 0xef8))(param_1,*(undefined8 *)&this->field_0xa8,&local_b8);
  }
  return;
}

// ActivateCameraForPlayerIndex @ 14d606630

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::ActivateCameraForPlayerIndex
          (UGameplayCameraComponentBase *this,int param_1,bool param_2,
          EGameplayCameraComponentActivationMode param_3)

{
  APlayerController *pAVar1;
  
  pAVar1 = UGameplayStatics::GetPlayerController((UObject *)this,param_1);
  ActivateCameraForPlayerController(this,pAVar1,param_2,param_3);
  return;
}

// ActivatePersistentBaseCameraRig @ 14d606e60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::ActivatePersistentBaseCameraRig
          (UGameplayCameraComponentBase *this,UCameraRigAsset *param_1)

{
  ForAnyElementType FVar1;
  FCameraEvaluationContext *pFVar2;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar2 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
  if (pFVar2 != (FCameraEvaluationContext *)0x0) {
    local_58.SharedReferenceCount.ReferenceController =
         (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar2;
    IGameplayCameraSystemHost::ActivateCameraRig
              ((IGameplayCameraSystemHost *)&this->field_0x250,param_1,&local_58,Base);
    return;
  }
  if (*(longlong *)&this->field_0xa8 == 0) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    local_res8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
    ::FName::ToString(&local_res8,&local_78);
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar1.Data = local_78.Data.AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)FVar1.Data);
  local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res8.Number = *(uint *)&this->field_0x1c;
  ::FName::ToString(&local_res8,(FString *)&local_58);
  pFVar2 = (FCameraEvaluationContext *)L"";
  if ((int)local_58.SharedReferenceCount.ReferenceController != 0) {
    pFVar2 = local_58.Object;
  }
  FStringFormatArg::FStringFormatArg(&local_28,(wchar_t *)pFVar2);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl
            (&local_68,
             L"\"Can\'t activate base camera rig\" on Gameplay Camera component \'{0}.{1}\': it isn\'t active."
             ,&local_88);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage((wchar_t *)FVar1.Data,Error,(FName)0x0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.Object != (FCameraEvaluationContext *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// ActivatePersistentGlobalCameraRig @ 14d6070a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::ActivatePersistentGlobalCameraRig
          (UGameplayCameraComponentBase *this,UCameraRigAsset *param_1)

{
  ForAnyElementType FVar1;
  FCameraEvaluationContext *pFVar2;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar2 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
  if (pFVar2 != (FCameraEvaluationContext *)0x0) {
    local_58.SharedReferenceCount.ReferenceController =
         (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar2;
    IGameplayCameraSystemHost::ActivateCameraRig
              ((IGameplayCameraSystemHost *)&this->field_0x250,param_1,&local_58,Global);
    return;
  }
  if (*(longlong *)&this->field_0xa8 == 0) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    local_res8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
    ::FName::ToString(&local_res8,&local_78);
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar1.Data = local_78.Data.AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)FVar1.Data);
  local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res8.Number = *(uint *)&this->field_0x1c;
  ::FName::ToString(&local_res8,(FString *)&local_58);
  pFVar2 = (FCameraEvaluationContext *)L"";
  if ((int)local_58.SharedReferenceCount.ReferenceController != 0) {
    pFVar2 = local_58.Object;
  }
  FStringFormatArg::FStringFormatArg(&local_28,(wchar_t *)pFVar2);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl
            (&local_68,
             L"\"Can\'t activate global camera rig\" on Gameplay Camera component \'{0}.{1}\': it isn\'t active."
             ,&local_88);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage((wchar_t *)FVar1.Data,Error,(FName)0x0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.Object != (FCameraEvaluationContext *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// ActivatePersistentVisualCameraRig @ 14d6072e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::ActivatePersistentVisualCameraRig
          (UGameplayCameraComponentBase *this,UCameraRigAsset *param_1)

{
  ForAnyElementType FVar1;
  FCameraEvaluationContext *pFVar2;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar2 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
  if (pFVar2 != (FCameraEvaluationContext *)0x0) {
    local_58.SharedReferenceCount.ReferenceController =
         (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar2;
    IGameplayCameraSystemHost::ActivateCameraRig
              ((IGameplayCameraSystemHost *)&this->field_0x250,param_1,&local_58,Visual);
    return;
  }
  if (*(longlong *)&this->field_0xa8 == 0) {
    ::FString::FString(&local_78,L"None");
  }
  else {
    local_res8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
    ::FName::ToString(&local_res8,&local_78);
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar1.Data = local_78.Data.AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)FVar1.Data);
  local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res8.Number = *(uint *)&this->field_0x1c;
  ::FName::ToString(&local_res8,(FString *)&local_58);
  pFVar2 = (FCameraEvaluationContext *)L"";
  if ((int)local_58.SharedReferenceCount.ReferenceController != 0) {
    pFVar2 = local_58.Object;
  }
  FStringFormatArg::FStringFormatArg(&local_28,(wchar_t *)pFVar2);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl
            (&local_68,
             L"\"Can\'t activate visual camera rig\" on Gameplay Camera component \'{0}.{1}\': it isn\'t active."
             ,&local_88);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage((wchar_t *)FVar1.Data,Error,(FName)0x0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.Object != (FCameraEvaluationContext *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// AddReferencedObjects @ 14d607880

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UActorComponent::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UGameplayCameraComponentBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    if (*(longlong *)(param_1 + 0xf) != 0) {
      UE::Cameras::FCameraSystemEvaluator::AddReferencedObjects
                (*(FCameraSystemEvaluator **)(param_1 + 0xf),param_2);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      UE::Cameras::FCameraEvaluationContext::AddReferencedObjects
                (*(FCameraEvaluationContext **)(param_1 + 0x10),param_2);
    }
    return;
  }
  pFVar3 = GetTypeName<UGameplayCameraComponentBase>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// BeginDestroy @ 14d60cb30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraComponentBase::BeginDestroy(UGameplayCameraComponentBase *this)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(longlong *)&this->field_0x268 != 0) {
    UDebugDrawService::Unregister((FDelegateHandle)*(ulong64 *)&this->field_0x268);
    *(undefined8 *)&this->field_0x268 = 0;
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x258 != &local_28) {
    *(undefined8 *)&this->field_0x258 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x260,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->EvaluationContext !=
      (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)&local_18) {
    (this->EvaluationContext).Object = (FGameplayCameraComponentEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  USceneComponent::BeginDestroy((USceneComponent *)this);
  return;
}

// BeginPlay @ 14d60cc10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraComponentBase::BeginPlay(UGameplayCameraComponentBase *this)

{
  ENetMode EVar1;
  APlayerController *pAVar2;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (((this->field_0x9a & 0x10) != 0) &&
     ((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0)) {
    if ((this->AutoActivateForPlayer).Value != '\0') {
      EVar1 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
      if (EVar1 != NM_DedicatedServer) {
        pAVar2 = UGameplayStatics::GetPlayerController
                           ((UObject *)this,(this->AutoActivateForPlayer).Value - 1);
        ActivateCameraForPlayerController(this,pAVar2,true,Push);
        return;
      }
    }
    ActivateCameraForPlayerController(this,(APlayerController *)0x0,false,Push);
    return;
  }
  return;
}

// CalcCamera @ 14d60dea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UGameplayCameraComponentBase::CalcCamera
          (UGameplayCameraComponentBase *this,float param_1,FMinimalViewInfo *param_2)

{
  if (*(FCameraSystemEvaluator **)&this->field_0x258 != (FCameraSystemEvaluator *)0x0) {
    UE::Cameras::FCameraSystemEvaluator::GetEvaluatedCameraView
              (*(FCameraSystemEvaluator **)&this->field_0x258,param_2);
    return true;
  }
  return false;
}

// CanRunCameraSystem @ 14d60df30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall UGameplayCameraComponentBase::CanRunCameraSystem(UGameplayCameraComponentBase *this)

{
  return true;
}

// CheckPendingDeactivation @ 14d60df40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::CheckPendingDeactivation(UGameplayCameraComponentBase *this)

{
  atomic<int> *paVar1;
  TWeakPtr<UE::Cameras::FCameraSystemEvaluator,1> *pTVar2;
  TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *pTVar3;
  atomic<int> aVar4;
  FCameraEvaluationContext *pFVar5;
  FRootCameraNodeEvaluator *this_00;
  TReferenceControllerBase<1> *pTVar6;
  atomic<int> aVar7;
  FCameraSystemEvaluator *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_28;
  undefined8 local_18 [2];
  
  if (this->bIsPendingDeactivate == false) {
    return;
  }
  pFVar8 = (FCameraSystemEvaluator *)0x0;
  pTVar2 = &this->PendingDeactivateCameraSystemEvaluator;
  pTVar9 = (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d60df94;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar10 = aVar4 == aVar7;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar10);
    pFVar8 = pTVar2->Object;
  }
LAB_14d60df94:
  pTVar3 = &this->EvaluationContext;
  pFVar5 = (FCameraEvaluationContext *)pTVar3->Object;
  if ((pFVar5 != (FCameraEvaluationContext *)0x0) && (pFVar8 != (FCameraSystemEvaluator *)0x0)) {
    this_00 = pFVar8->RootEvaluator;
    local_28.SharedReferenceCount.ReferenceController =
         (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = pFVar5;
    bVar10 = UE::Cameras::FRootCameraNodeEvaluator::HasAnyRunningCameraRig(this_00,&local_28);
    if (bVar10) goto LAB_14d60e061;
  }
  IGameplayCameraSystemHost::DestroyCameraSystem((IGameplayCameraSystemHost *)&this->field_0x250);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)&local_38) {
    pTVar3->Object = (FGameplayCameraComponentEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  UActorComponent::Deactivate((UActorComponent *)this);
  if (pTVar2 != (TWeakPtr<UE::Cameras::FCameraSystemEvaluator,1> *)local_18) {
    pTVar6 = (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (FCameraSystemEvaluator *)0x0;
    (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  this->bIsPendingDeactivate = false;
LAB_14d60e061:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// CreateCameraEvaluationContext @ 14d611d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::CreateCameraEvaluationContext
          (UGameplayCameraComponentBase *this,APlayerController *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UCameraAsset *this_00;
  UObject *pUVar5;
  UCameraRigAsset *pUVar6;
  UClass *pUVar7;
  UCameraDirector *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  FGameplayCameraComponentEvaluationContext *pFVar11;
  undefined1 auStackY_1c8 [32];
  FGameplayCameraComponentEvaluationContext *local_198;
  FSharedReferencer<1> local_190;
  FString local_188;
  FName local_178;
  FName local_170;
  FString local_168;
  TObjectPtr<UObject>_u_0 local_158;
  UCameraAsset *local_150;
  APlayerController *local_148;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->EvaluationContext).Object != (FGameplayCameraComponentEvaluationContext *)0x0)
  goto LAB_14d61211e;
  this_00 = (UCameraAsset *)(**(code **)(*(longlong *)this + 0x640))();
  if (this_00 == (UCameraAsset *)0x0) {
    if (2 < (byte)LogCameraSystem._0_1_) {
      if (*(longlong *)&this->field_0xa8 == 0) {
        ::FString::FString(&local_188,L"None");
      }
      else {
        local_178 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
        ::FName::ToString(&local_178,&local_188);
      }
      local_170.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_170.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_170,&local_168);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    pUVar5 = GetTransientPackageAsObject();
    pUVar6 = NewObject<UCameraRigAsset>(pUVar5);
    pUVar5 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_USingleCameraDirector_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar7);
    local_138._8_8_ = pUVar5;
    pUVar8 = (UCameraDirector *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar10 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCameraRigAsset *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pUVar8[1]._padding_ = (longlong)pUVar6;
    pUVar5 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UCameraAsset_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar7);
    local_b8._8_8_ = pUVar5;
    this_00 = (UCameraAsset *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    UCameraAsset::SetCameraDirector(this_00,pUVar8);
  }
  pTVar9 = ::operator_new(0xb00);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = (FGameplayCameraComponentEvaluationContext *)&DAT_00000010;
LAB_14d611faa:
    if (((*(longlong *)&pFVar11->field_0x10 == 0) || (*(longlong *)&pFVar11->field_0x18 == 0)) ||
       (*(int *)(*(longlong *)&pFVar11->field_0x18 + 8) < 1)) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FGameplayCameraComponentEvaluationContext **)&pFVar11->field_0x10 = pFVar11;
      if (pTVar9 != *(TReferenceControllerBase<1> **)&pFVar11->field_0x18) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar10 = *(longlong **)&pFVar11->field_0x18;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar11->field_0x18 = pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGameplayCameraComponentEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar9 + 1,0,0xaf0);
    UE::Cameras::FCameraEvaluationContext::FCameraEvaluationContext
              ((FCameraEvaluationContext *)(pTVar9 + 1));
    pFVar11 = (FGameplayCameraComponentEvaluationContext *)(pTVar9 + 1);
    pTVar9[1]._padding_ = (longlong)&___7FGameplayCameraComponentEvaluationContext_Cameras_UE__6B_;
    if (pFVar11 != (FGameplayCameraComponentEvaluationContext *)0x0) goto LAB_14d611faa;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_198 = pFVar11;
  local_190.ReferenceController = pTVar9;
  if (&this->EvaluationContext !=
      (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)&local_198) {
    (this->EvaluationContext).Object = pFVar11;
    local_198 = (FGameplayCameraComponentEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,&local_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_158 = (TObjectPtr<UObject>_u_0)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UCameraAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_150 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_148 = param_1;
  if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Cameras::FCameraEvaluationContext::Initialize
            ((FCameraEvaluationContext *)(this->EvaluationContext).Object,
             (FCameraEvaluationContextInitializeParams *)&local_158.ObjectPtr);
  UpdateCameraEvaluationContext(this,true);
LAB_14d61211e:
  if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5863620769908522645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCameraComponentBase.cpp"
                         ,0x16b,"EvaluationContext.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// Deactivate @ 14d612590

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraComponentBase::Deactivate(UGameplayCameraComponentBase *this)

{
  DeactivateCameraEvaluationContext(this,true);
  UActorComponent::Deactivate((UActorComponent *)this);
  return;
}

// DeactivateCamera @ 14d6125c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::DeactivateCamera(UGameplayCameraComponentBase *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FGameplayCameraComponentEvaluationContext *pFVar3;
  FCameraEvaluationContext *pFVar4;
  FRootCameraNodeEvaluator *this_00;
  FCameraEvaluationContext *pFVar5;
  UCineCameraComponent *this_01;
  code *pcVar6;
  FCameraSystemEvaluator *this_02;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  atomic<int> aVar9;
  ForAnyElementType FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStackY_1d8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_198;
  TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> TStack_188;
  FString FStack_178;
  FName FStack_168;
  FName FStack_160;
  FName FStack_158;
  FString FStack_150;
  FString FStack_140;
  FString FStack_130;
  undefined8 uStack_120;
  FSharedReferencer<1> FStack_118;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> TStack_110;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> TStack_100;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> TStack_f0;
  FStringFormatArg FStack_d8;
  FStringFormatArg FStack_b8;
  TTransform<double> TStack_98;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((!param_1) && (*(longlong *)&this->field_0x258 != 0)) {
    if (*(longlong *)&this->field_0xa8 == 0) {
      ::FString::FString(&FStack_178,L"None");
    }
    else {
      FStack_168 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(&FStack_168,&FStack_178);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_178.Data.ArrayNum != 0) {
      FVar10.Data = FStack_178.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&FStack_d8,(wchar_t *)FVar10.Data);
    FStack_160.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    FStack_160.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&FStack_160,&FStack_140);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_140.Data.ArrayNum != 0) {
      FVar10.Data = FStack_140.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&FStack_b8,(wchar_t *)FVar10.Data);
    TStack_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_198.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&TStack_198.AllocatorInstance,2,&TStack_198.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (TStack_198.AllocatorInstance.Data,&FStack_d8,2);
    ::FString::FormatImpl
              (&FStack_150,
               L"Can\'t deactivate Gameplay Camera component \'{0}.{1}\' with bImmediately set to false: this component is running its own camera system and cannot therefore blend out from itself."
               ,&TStack_198);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (FStack_150.Data.ArrayNum != 0) {
      FVar10.Data = FStack_150.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)TStack_198.AllocatorInstance.Data,TStack_198.ArrayNum);
    if ((FStringFormatArg *)TStack_198.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(TStack_198.AllocatorInstance.Data);
    }
    if (FStack_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.StringValue.Data.AllocatorInstance.Data);
    }
    if (FStack_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d8.StringValue.Data.AllocatorInstance.Data);
    }
    if (FStack_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_140.Data.AllocatorInstance.Data);
    }
    if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
    }
    param_1 = true;
  }
  pFVar3 = (this->EvaluationContext).Object;
  if ((pFVar3 == (FGameplayCameraComponentEvaluationContext *)0x0) || (pFVar3->field_0xae1 == '\0'))
  goto LAB_14d612b5f;
  if (4 < (byte)LogCameraSystem._0_1_) {
    FStack_158.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    FStack_158.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&FStack_158,&FStack_130);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (FStack_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_130.Data.AllocatorInstance.Data);
    }
  }
  if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Cameras::FCameraEvaluationContext::GetCameraSystemEvaluator
            ((FCameraEvaluationContext *)(this->EvaluationContext).Object,&TStack_188);
  if ((TStack_188.Object == (FCameraSystemEvaluator *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5863620769908522835>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCameraComponentBase.cpp"
                         ,0xad,"HostEvaluator"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->EvaluationContext).Object;
  pTVar12 = *(TReferenceControllerBase<1> **)&pFVar3->field_0xa78;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d6128f4:
    if ((TStack_188.Object == (FCameraSystemEvaluator *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_02 = TStack_188.Object;
    if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar11 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar4 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FCameraEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    TStack_100.Object = pFVar4;
    TStack_100.SharedReferenceCount.ReferenceController = pTVar11;
    UE::Cameras::FCameraSystemEvaluator::RemoveEvaluationContext(this_02,&TStack_100);
  }
  else {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d6128f4;
      }
      LOCK();
      aVar9 = pTVar12->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar8);
    pFVar4 = *(FCameraEvaluationContext **)&pFVar3->field_0xa70;
    if (pFVar4 == (FCameraEvaluationContext *)0x0) goto LAB_14d6128f4;
    if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar11 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar5 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FCameraEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    TStack_110.Object = pFVar5;
    TStack_110.SharedReferenceCount.ReferenceController = pTVar11;
    UE::Cameras::FCameraEvaluationContext::RemoveChildContext(pFVar4,&TStack_110);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FVar7.ReferenceController = TStack_188.SharedReferenceCount.ReferenceController;
  if (param_1 == false) {
    (this->PendingDeactivateCameraSystemEvaluator).Object = TStack_188.Object;
    if (TStack_188.SharedReferenceCount.ReferenceController !=
        (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController) {
      if (TStack_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_188.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(TStack_188.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.
                ReferenceController;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar12->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
        }
      }
      (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController =
           FVar7.ReferenceController;
    }
    this->bIsPendingDeactivate = true;
  }
  else {
    if ((TStack_188.Object == (FCameraSystemEvaluator *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (TStack_188.Object)->RootEvaluator;
    TStack_f0.Object = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
    TStack_f0.SharedReferenceCount.ReferenceController =
         (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (TStack_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Cameras::FRootCameraNodeEvaluator::DeactivateAllCameraRigs(this_00,&TStack_f0,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_188.SharedReferenceCount.ReferenceController);
LAB_14d612b5f:
  if (param_1 != false) {
    this_01 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
    if (this_01 != (UCineCameraComponent *)0x0) {
      TStack_98.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      TStack_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      TStack_98.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      TStack_98.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      TStack_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      TStack_98.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      TStack_98.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      TStack_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      TStack_98.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      TStack_98.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      TStack_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      TStack_98.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      TStack_98.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      TStack_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      TStack_98.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      TStack_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      TStack_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      TStack_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this_01,&TStack_98,false,(FHitResult *)0x0,None);
    }
    IGameplayCameraSystemHost::DestroyCameraSystem((IGameplayCameraSystemHost *)&this->field_0x250);
    uStack_120 = 0;
    FStack_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->EvaluationContext !=
        (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)&uStack_120) {
      (this->EvaluationContext).Object = (FGameplayCameraComponentEvaluationContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EvaluationContext).SharedReferenceCount,&FStack_118);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_118.ReferenceController);
  }
  return;
}

// DeactivateCameraEvaluationContext @ 14d6125d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::DeactivateCameraEvaluationContext
          (UGameplayCameraComponentBase *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FGameplayCameraComponentEvaluationContext *pFVar3;
  FCameraEvaluationContext *pFVar4;
  FRootCameraNodeEvaluator *this_00;
  FCameraEvaluationContext *pFVar5;
  UCineCameraComponent *this_01;
  code *pcVar6;
  FCameraSystemEvaluator *this_02;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  atomic<int> aVar9;
  ForAnyElementType FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStackY_1d8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_198;
  TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> local_188;
  FString local_178;
  FName local_168;
  FName local_160;
  FName local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  undefined8 local_120;
  FSharedReferencer<1> FStack_118;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_110;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_100;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_f0;
  FStringFormatArg local_d8;
  FStringFormatArg local_b8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((!param_1) && (*(longlong *)&this->field_0x258 != 0)) {
    if (*(longlong *)&this->field_0xa8 == 0) {
      ::FString::FString(&local_178,L"None");
    }
    else {
      local_168 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(&local_168,&local_178);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar10.Data = local_178.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_d8,(wchar_t *)FVar10.Data);
    local_160.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_160.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_160,&local_140);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar10.Data = local_140.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_b8,(wchar_t *)FVar10.Data);
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_198.AllocatorInstance,2,&local_198.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_198.AllocatorInstance.Data,&local_d8,2);
    ::FString::FormatImpl
              (&local_150,
               L"Can\'t deactivate Gameplay Camera component \'{0}.{1}\' with bImmediately set to false: this component is running its own camera system and cannot therefore blend out from itself."
               ,&local_198);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar10.Data = local_150.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
    if ((FStringFormatArg *)local_198.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    param_1 = true;
  }
  pFVar3 = (this->EvaluationContext).Object;
  if ((pFVar3 == (FGameplayCameraComponentEvaluationContext *)0x0) || (pFVar3->field_0xae1 == '\0'))
  goto LAB_14d612b5f;
  if (4 < (byte)LogCameraSystem._0_1_) {
    local_158.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_158.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_158,&local_130);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Cameras::FCameraEvaluationContext::GetCameraSystemEvaluator
            ((FCameraEvaluationContext *)(this->EvaluationContext).Object,&local_188);
  if ((local_188.Object == (FCameraSystemEvaluator *)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5863620769908522835>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCameraComponentBase.cpp"
                         ,0xad,"HostEvaluator"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->EvaluationContext).Object;
  pTVar12 = *(TReferenceControllerBase<1> **)&pFVar3->field_0xa78;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d6128f4:
    if ((local_188.Object == (FCameraSystemEvaluator *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_02 = local_188.Object;
    if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar11 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar4 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FCameraEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_100.Object = pFVar4;
    local_100.SharedReferenceCount.ReferenceController = pTVar11;
    UE::Cameras::FCameraSystemEvaluator::RemoveEvaluationContext(this_02,&local_100);
  }
  else {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d6128f4;
      }
      LOCK();
      aVar9 = pTVar12->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar8);
    pFVar4 = *(FCameraEvaluationContext **)&pFVar3->field_0xa70;
    if (pFVar4 == (FCameraEvaluationContext *)0x0) goto LAB_14d6128f4;
    if (((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar11 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar5 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FCameraEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_110.Object = pFVar5;
    local_110.SharedReferenceCount.ReferenceController = pTVar11;
    UE::Cameras::FCameraEvaluationContext::RemoveChildContext(pFVar4,&local_110);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FVar7.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
  if (param_1 == false) {
    (this->PendingDeactivateCameraSystemEvaluator).Object = local_188.Object;
    if (local_188.SharedReferenceCount.ReferenceController !=
        (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController) {
      if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_188.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_188.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.
                ReferenceController;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar12->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
        }
      }
      (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController =
           FVar7.ReferenceController;
    }
    this->bIsPendingDeactivate = true;
  }
  else {
    if ((local_188.Object == (FCameraSystemEvaluator *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (local_188.Object)->RootEvaluator;
    local_f0.Object = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
    local_f0.SharedReferenceCount.ReferenceController =
         (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::Cameras::FRootCameraNodeEvaluator::DeactivateAllCameraRigs(this_00,&local_f0,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
LAB_14d612b5f:
  if (param_1 != false) {
    this_01 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
    if (this_01 != (UCineCameraComponent *)0x0) {
      local_98.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_98.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_98.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_98.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_98.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_98.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this_01,&local_98,false,(FHitResult *)0x0,None);
    }
    IGameplayCameraSystemHost::DestroyCameraSystem((IGameplayCameraSystemHost *)&this->field_0x250);
    local_120 = 0;
    FStack_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->EvaluationContext !=
        (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)&local_120) {
      (this->EvaluationContext).Object = (FGameplayCameraComponentEvaluationContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EvaluationContext).SharedReferenceCount,&FStack_118);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_118.ReferenceController);
  }
  return;
}

// DestroyCameraEvaluationContext @ 14d612f50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::DestroyCameraEvaluationContext(UGameplayCameraComponentBase *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->EvaluationContext !=
      (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)&local_18) {
    (this->EvaluationContext).Object = (FGameplayCameraComponentEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// EndPlay @ 14d615400

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::EndPlay(UGameplayCameraComponentBase *this,Type param_1)

{
  DeactivateCameraEvaluationContext(this,true);
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  return;
}

// EnsureCameraSystemHost @ 14d6156b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::EnsureCameraSystemHost(UGameplayCameraComponentBase *this)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  FString local_78;
  FName local_68 [2];
  TObjectPtr<UObject>_u_0 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (*(longlong *)&this->field_0x258 == 0) {
    if (4 < (byte)LogCameraSystem._0_1_) {
      if (*(longlong *)&this->field_0xa8 == 0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_68[0] = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
        ::FName::ToString(local_68,&local_78);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    local_50 = 0;
    local_48 = 0;
    local_20 = (longlong *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UGameplayCameraComponentBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_58 = (TObjectPtr<UObject>_u_0)this;
    IGameplayCameraSystemHost::InitializeCameraSystem
              ((IGameplayCameraSystemHost *)&this->field_0x250,
               (FCameraSystemEvaluatorCreateParams *)&local_58.ObjectPtr);
    if (local_48 != 0) {
      plVar1 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar1 = local_20;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// GetAsObject @ 14d618760

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall UGameplayCameraComponentBase::GetAsObject(UGameplayCameraComponentBase *this)

{
  return (UObject *)&this[-1].field_0x60;
}

// GetCameraAsset @ 14d618fc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAsset * __thiscall
UGameplayCameraComponentBase::GetCameraAsset(UGameplayCameraComponentBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\GameFramework\\GameplayCameraComponentBase.h"
             ,0xb7,L"Pure virtual not implemented (%s)");
  return (UCameraAsset *)0x0;
}

// GetConditionalResult @ 14d619cd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __thiscall
UGameplayCameraComponentBase::GetConditionalResult
          (UGameplayCameraComponentBase *this,
          FBlueprintCameraEvaluationDataRef *__return_storage_ptr__,
          ECameraEvaluationDataCondition param_1)

{
  FCameraEvaluationContext *this_00;
  FCameraNodeEvaluationResult *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  this_00 = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
  if (this_00 == (FCameraEvaluationContext *)0x0) {
    if (*(longlong *)&this->field_0xa8 == 0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      local_res8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(&local_res8,&local_78);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar2.Data = local_78.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)FVar2.Data);
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar2.Data = local_58.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_28,(wchar_t *)FVar2.Data);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_88.AllocatorInstance.Data,&local_48,2);
    ::FString::FormatImpl
              (&local_68,
               L"\"Can\'t get conditional camera data\" on Gameplay Camera component \'{0}.{1}\': it isn\'t active."
               ,&local_88);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar2.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Error,(FName)0x0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(__return_storage_ptr__);
  }
  else {
    pFVar1 = UE::Cameras::FCameraEvaluationContext::GetOrAddConditionalResult(this_00,param_1);
    FBlueprintCameraEvaluationDataRef::MakeExternalRef(__return_storage_ptr__,pFVar1);
  }
  return __return_storage_ptr__;
}

// GetEvaluatedCameraRotation @ 14d61a230

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TRotator<double> * __thiscall
UGameplayCameraComponentBase::GetEvaluatedCameraRotation
          (UGameplayCameraComponentBase *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = *(longlong *)&this->field_0x258;
  if (lVar2 != 0) {
    dVar3 = *(double *)(lVar2 + 0xac0);
    dVar1 = *(double *)(lVar2 + 0xac8);
    __return_storage_ptr__->Pitch = *(double *)(lVar2 + 0xab8);
    __return_storage_ptr__->Yaw = dVar3;
    __return_storage_ptr__->Roll = dVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Pitch = 0.0;
  __return_storage_ptr__->Yaw = 0.0;
  __return_storage_ptr__->Roll = 0.0;
  return __return_storage_ptr__;
}

// GetEvaluationContext @ 14d61a270

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> * __thiscall
UGameplayCameraComponentBase::GetEvaluationContext
          (UGameplayCameraComponentBase *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
  pTVar1 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetEvaluationContext @ 14d61a2a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> * __thiscall
UGameplayCameraComponentBase::GetEvaluationContext
          (UGameplayCameraComponentBase *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (FCameraEvaluationContext *)(this->EvaluationContext).Object;
  pTVar1 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInitialResult @ 14d61aa40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __thiscall
UGameplayCameraComponentBase::GetInitialResult
          (UGameplayCameraComponentBase *this,
          FBlueprintCameraEvaluationDataRef *__return_storage_ptr__)

{
  FGameplayCameraComponentEvaluationContext *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar1 = (this->EvaluationContext).Object;
  if (pFVar1 == (FGameplayCameraComponentEvaluationContext *)0x0) {
    if (*(longlong *)&this->field_0xa8 == 0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      local_res8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(&local_res8,&local_78);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar2.Data = local_78.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)FVar2.Data);
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,&local_58);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar2.Data = local_58.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_28,(wchar_t *)FVar2.Data);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_88.AllocatorInstance.Data,&local_48,2);
    ::FString::FormatImpl
              (&local_68,
               L"\"Can\'t get shared camera data\" on Gameplay Camera component \'{0}.{1}\': it isn\'t active."
               ,&local_88);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar2.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Error,(FName)0x0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(__return_storage_ptr__);
  }
  else {
    FBlueprintCameraEvaluationDataRef::MakeExternalRef
              (__return_storage_ptr__,(FCameraNodeEvaluationResult *)&pFVar1->field_0x40);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d61c5a0

UClass * __cdecl UGameplayCameraComponentBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraComponentBase",
               &Z_Registration_Info_UClass_UGameplayCameraComponentBase.InnerSingleton,
               StaticRegisterNativesUGameplayCameraComponentBase,0x2b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraComponentBase>,
               InternalVTableHelperCtorCaller<UGameplayCameraComponentBase>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraComponentBase.InnerSingleton;
}

// IsEditorWorld @ 14d620f70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall UGameplayCameraComponentBase::IsEditorWorld(UGameplayCameraComponentBase *this)

{
  return false;
}

// OnComponentDestroyed @ 14d625fc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::OnComponentDestroyed(UGameplayCameraComponentBase *this,bool param_1)

{
  UCineCameraComponent *pUVar1;
  
  pUVar1 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UCineCameraComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
  }
  USceneComponent::OnComponentDestroyed((USceneComponent *)this,param_1);
  return;
}

// OnRegister @ 14d6292b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UGameplayCameraComponentBase::OnRegister(UGameplayCameraComponentBase *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UCineCameraComponent *pUVar4;
  UWorld *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  USceneComponent::OnRegister((USceneComponent *)this);
  if ((this->OutputCameraComponent).field0_0x0.DebugPtr == (UCineCameraComponent *)0x0) {
    pFVar2 = ::FName::FName(local_a8,L"OutputCameraComponent");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_TextExportTransient|RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar4 = (UCineCameraComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UCineCameraComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_a8[0].ComparisonIndex.Value = 0;
    local_a8[0].Number = 0;
    (this->OutputCameraComponent).field0_0x0.DebugPtr = pUVar4;
    USceneComponent::SetupAttachment((USceneComponent *)pUVar4,(USceneComponent *)this,(FName)0x0);
    ((this->OutputCameraComponent).field0_0x0.DebugPtr)->field_0xb9 = this->field_0xb9;
    pUVar5 = *(UWorld **)&this->field_0xb0;
    pUVar4 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)pUVar4,pUVar5,(FRegisterComponentContext *)0x0);
  }
  return;
}

// OnUpdateCameraEvaluationContext @ 14d62e170

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::OnUpdateCameraEvaluationContext
          (UGameplayCameraComponentBase *this,bool param_1)

{
  return;
}

// OnUpdateTransform @ 14d62e280

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::OnUpdateTransform
          (UGameplayCameraComponentBase *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  USceneComponent::OnUpdateTransform((USceneComponent *)this,param_1,param_2);
  if (((this->EvaluationContext).Object != (FGameplayCameraComponentEvaluationContext *)0x0) &&
     (param_2 != None)) {
    this->bIsCameraCutNextFrame = true;
  }
  return;
}

// StaticRegisterNativesUGameplayCameraComponentBase @ 14d639210

void __cdecl UGameplayCameraComponentBase::StaticRegisterNativesUGameplayCameraComponentBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UGameplayCameraComponentBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14d639c30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::TickComponent
          (UGameplayCameraComponentBase *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  atomic<int> *paVar1;
  TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *pTVar2;
  TWeakPtr<UE::Cameras::FCameraSystemEvaluator,1> *pTVar3;
  atomic<int> aVar4;
  longlong lVar5;
  FCameraEvaluationContext *pFVar6;
  FRootCameraNodeEvaluator *this_00;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  int iVar9;
  UObject *pUVar10;
  IGameplayCameraSystemHost *pIVar11;
  longlong lVar12;
  FCameraSystemEvaluator *pFVar13;
  FCameraSystemEvaluator *pFVar14;
  FCameraSystemEvaluator *pFVar15;
  bool bVar16;
  FCameraSystemEvaluationParams local_res8 [2];
  longlong local_68;
  FSharedReferencer<1> FStack_60;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_58;
  double local_48;
  undefined8 local_40 [5];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pTVar2 = &this->EvaluationContext;
  if (pTVar2->Object != (FGameplayCameraComponentEvaluationContext *)0x0) {
    UpdateCameraEvaluationContext(this,false);
  }
  if (*(FCameraSystemEvaluator **)&this->field_0x258 != (FCameraSystemEvaluator *)0x0) {
    local_res8[0].DeltaTime = param_1;
    UE::Cameras::FCameraSystemEvaluator::Update
              (*(FCameraSystemEvaluator **)&this->field_0x258,local_res8);
  }
  if (((((*(longlong *)&this->field_0x258 != 0) &&
        (pTVar2->Object != (FGameplayCameraComponentEvaluationContext *)0x0)) &&
       (this->bSetControlRotationWhenViewTarget != false)) &&
      ((pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pTVar2->Object->field_0x28),
       pUVar10 != (UObject *)0x0 &&
       (pIVar11 = Cast<IGameplayCameraSystemHost,APlayerCameraManager>
                            ((TObjectPtr<APlayerCameraManager> *)&pUVar10[0x16].field_0x20),
       pIVar11 == (IGameplayCameraSystemHost *)0x0)))) &&
     ((*(longlong *)&this->field_0x258 != 0 &&
      ((lVar5 = *(longlong *)&this->field_0xa8, lVar5 != 0 &&
       (lVar12 = (**(code **)(*(longlong *)pUVar10 + 0x7e0))(pUVar10), lVar12 == lVar5)))))) {
    pFVar13 = TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>::operator->
                        ((TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)&this->field_0x258);
    local_58.Object =
         (FCameraEvaluationContext *)(pFVar13->PreVisualResult).CameraPose.Rotation.Pitch;
    local_58.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(pFVar13->PreVisualResult).CameraPose.Rotation.Yaw;
    local_48 = (pFVar13->PreVisualResult).CameraPose.Rotation.Roll;
    (**(code **)(*(longlong *)pUVar10 + 0x7b0))(pUVar10,&local_58);
  }
  UpdateOutputCameraComponent(this);
  if (this->bIsPendingDeactivate == false) {
    return;
  }
  pTVar3 = &this->PendingDeactivateCameraSystemEvaluator;
  pFVar13 = (FCameraSystemEvaluator *)
            (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController;
  pFVar14 = (FCameraSystemEvaluator *)0x0;
  pFVar15 = pFVar13;
  if (pFVar13 != (FCameraSystemEvaluator *)0x0) {
    iVar8 = (int)pFVar13->_padding_;
    do {
      pFVar14 = (FCameraSystemEvaluator *)0x0;
      pFVar15 = (FCameraSystemEvaluator *)0x0;
      if (iVar8 == 0) goto LAB_14d639d85;
      LOCK();
      iVar9 = (int)pFVar13->_padding_;
      bVar16 = iVar8 == iVar9;
      if (bVar16) {
        *(int *)&pFVar13->_padding_ = iVar8 + 1;
        iVar9 = iVar8;
      }
      UNLOCK();
      iVar8 = iVar9;
    } while (!bVar16);
    pFVar14 = pTVar3->Object;
    pFVar15 = pFVar13;
  }
LAB_14d639d85:
  pFVar6 = (FCameraEvaluationContext *)pTVar2->Object;
  if ((pFVar6 != (FCameraEvaluationContext *)0x0) && (pFVar14 != (FCameraSystemEvaluator *)0x0)) {
    this_00 = pFVar14->RootEvaluator;
    local_58.SharedReferenceCount.ReferenceController =
         (this->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar6;
    bVar16 = UE::Cameras::FRootCameraNodeEvaluator::HasAnyRunningCameraRig(this_00,&local_58);
    if (bVar16) goto LAB_14d639e3b;
  }
  IGameplayCameraSystemHost::DestroyCameraSystem((IGameplayCameraSystemHost *)&this->field_0x250);
  local_68 = 0;
  FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)&local_68) {
    pTVar2->Object = (FGameplayCameraComponentEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,&FStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
  UActorComponent::Deactivate((UActorComponent *)this);
  if (pTVar3 != (TWeakPtr<UE::Cameras::FCameraSystemEvaluator,1> *)local_40) {
    pTVar7 = (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController;
    pTVar3->Object = (FCameraSystemEvaluator *)0x0;
    (this->PendingDeactivateCameraSystemEvaluator).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
  this->bIsPendingDeactivate = false;
LAB_14d639e3b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar15);
  return;
}

// UpdateCameraEvaluationContext @ 14d63b230

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::UpdateCameraEvaluationContext
          (UGameplayCameraComponentBase *this,bool param_1)

{
  FGameplayCameraComponentEvaluationContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> local_68;
  
  if ((this->EvaluationContext).Object == (FGameplayCameraComponentEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_68.Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
  local_68.Rotation.XY.m128d_f64[1] = *(double *)&this->field_0x1f8;
  local_68.Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x200;
  local_68.Rotation.ZW.m128d_f64[1] = *(double *)&this->field_0x208;
  pFVar1 = (this->EvaluationContext).Object;
  local_68.Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
  local_68.Translation.XY.m128d_f64[1] = *(double *)&this->field_0x218;
  local_68.Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
  local_68.Translation.ZW.m128d_f64[1] = *(double *)&this->field_0x228;
  local_68.Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
  local_68.Scale3D.XY.m128d_f64[1] = *(double *)&this->field_0x238;
  local_68.Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
  local_68.Scale3D.ZW.m128d_f64[1] = *(double *)&this->field_0x248;
  FCameraPose::SetTransform((FCameraPose *)&pFVar1->field_0x40,&local_68,true);
  *(undefined2 *)&pFVar1->field_0xa20 = 0x100;
  if (this->bIsCameraCutNextFrame != false) {
    pFVar1->field_0xa20 = 1;
    this->bIsCameraCutNextFrame = false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d63b316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x648))(this,param_1);
  return;
}

// UpdateControlRotationIfNeeded @ 14d63b360

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::UpdateControlRotationIfNeeded(UGameplayCameraComponentBase *this)

{
  undefined1 *this_00;
  FGameplayCameraComponentEvaluationContext *pFVar1;
  longlong lVar2;
  UObject *pUVar3;
  IGameplayCameraSystemHost *pIVar4;
  longlong lVar5;
  FCameraSystemEvaluator *pFVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  this_00 = &this->field_0x258;
  if (((((*(longlong *)this_00 != 0) &&
        (pFVar1 = (this->EvaluationContext).Object,
        pFVar1 != (FGameplayCameraComponentEvaluationContext *)0x0)) &&
       (this->bSetControlRotationWhenViewTarget != false)) &&
      ((pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pFVar1->field_0x28),
       pUVar3 != (UObject *)0x0 &&
       (pIVar4 = Cast<IGameplayCameraSystemHost,APlayerCameraManager>
                           ((TObjectPtr<APlayerCameraManager> *)&pUVar3[0x16].field_0x20),
       pIVar4 == (IGameplayCameraSystemHost *)0x0)))) &&
     ((*(longlong *)this_00 != 0 &&
      ((lVar2 = *(longlong *)&this->field_0xa8, lVar2 != 0 &&
       (lVar5 = (**(code **)(*(longlong *)pUVar3 + 0x7e0))(pUVar3), lVar5 == lVar2)))))) {
    pFVar6 = TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>::operator->
                       ((TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)this_00);
    local_28 = *(undefined4 *)&(pFVar6->PreVisualResult).CameraPose.Rotation.Pitch;
    uStack_24 = *(undefined4 *)((longlong)&(pFVar6->PreVisualResult).CameraPose.Rotation.Pitch + 4);
    uStack_20 = *(undefined4 *)&(pFVar6->PreVisualResult).CameraPose.Rotation.Yaw;
    uStack_1c = *(undefined4 *)((longlong)&(pFVar6->PreVisualResult).CameraPose.Rotation.Yaw + 4);
    local_18 = (pFVar6->PreVisualResult).CameraPose.Rotation.Roll;
    (**(code **)(*(longlong *)pUVar3 + 0x7b0))(pUVar3,&local_28);
  }
  return;
}

// UpdateOutputCameraComponent @ 14d63b570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponentBase::UpdateOutputCameraComponent(UGameplayCameraComponentBase *this)

{
  byte bVar1;
  FRootCameraNodeEvaluator *this_00;
  UCineCameraComponent *pUVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FCameraSystemEvaluator *pFVar6;
  TTransform<double> *pTVar7;
  ECameraFocusMethod EVar8;
  undefined1 auStack_b8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->OutputCameraComponent).field0_0x0.DebugPtr != (UCineCameraComponent *)0x0) {
    if (((*(longlong *)&this->field_0x258 == 0) ||
        (this_00 = *(FRootCameraNodeEvaluator **)(*(longlong *)&this->field_0x258 + 0x98),
        this_00 == (FRootCameraNodeEvaluator *)0x0)) ||
       (bVar5 = UE::Cameras::FRootCameraNodeEvaluator::HasAnyActiveCameraRig(this_00), !bVar5)) {
      local_88.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_88.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_88.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_88.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_88.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_88.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)(this->OutputCameraComponent).field0_0x0.DebugPtr,&local_88,
                 false,(FHitResult *)0x0,None);
    }
    else {
      pFVar6 = TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>::operator->
                         ((TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)&this->field_0x258);
      pUVar2 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
      pTVar7 = FCameraPose::GetTransform(&(pFVar6->Result).CameraPose,&local_88);
      USceneComponent::SetWorldTransform
                ((USceneComponent *)pUVar2,pTVar7,false,(FHitResult *)0x0,None);
      pUVar2 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
      pcVar3 = *(code **)(*(longlong *)pUVar2 + 0x640);
      dVar4 = FCameraPose::GetEffectiveFieldOfView(&(pFVar6->Result).CameraPose,true);
      (*pcVar3)(pUVar2,(float)dVar4);
      ((this->OutputCameraComponent).field0_0x0.DebugPtr)->CurrentAperture =
           (pFVar6->Result).CameraPose.Aperture;
      (((this->OutputCameraComponent).field0_0x0.DebugPtr)->Filmback).SensorWidth =
           (pFVar6->Result).CameraPose.SensorWidth;
      (((this->OutputCameraComponent).field0_0x0.DebugPtr)->Filmback).SensorHeight =
           (pFVar6->Result).CameraPose.SensorHeight;
      (((this->OutputCameraComponent).field0_0x0.DebugPtr)->Filmback).SensorHorizontalOffset =
           (pFVar6->Result).CameraPose.SensorHorizontalOffset;
      (((this->OutputCameraComponent).field0_0x0.DebugPtr)->Filmback).SensorVerticalOffset =
           (pFVar6->Result).CameraPose.SensorVerticalOffset;
      *(float *)&((this->OutputCameraComponent).field0_0x0.DebugPtr)->field_0x27c =
           (pFVar6->Result).CameraPose.Overscan;
      pUVar2 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
      bVar1 = pUVar2->field_0x279;
      pUVar2->field_0x279 = (bVar1 ^ (pFVar6->Result).CameraPose.ConstrainAspectRatio) & 1 ^ bVar1;
      pUVar2 = (this->OutputCameraComponent).field0_0x0.DebugPtr;
      bVar1 = pUVar2->field_0x279;
      pUVar2->field_0x279 =
           ((pFVar6->Result).CameraPose.OverrideAspectRatioAxisConstraint * '\x02' ^ bVar1) & 2 ^
           bVar1;
      ((this->OutputCameraComponent).field0_0x0.DebugPtr)->field_0x278 =
           (pFVar6->Result).CameraPose.AspectRatioAxisConstraint.Value;
      (((this->OutputCameraComponent).field0_0x0.DebugPtr)->FocusSettings).ManualFocusDistance =
           (pFVar6->Result).CameraPose.FocusDistance;
      if (((pFVar6->Result).CameraPose.EnablePhysicalCamera == false) ||
         ((pFVar6->Result).CameraPose.FocusDistance <= 0.0)) {
        EVar8 = DoNotOverride;
      }
      else {
        EVar8 = Manual;
      }
      (((this->OutputCameraComponent).field0_0x0.DebugPtr)->FocusSettings).FocusMethod = EVar8;
      ((this->OutputCameraComponent).field0_0x0.DebugPtr)->ExposureMethod =
           (pFVar6->Result).CameraPose.EnablePhysicalCamera != false;
      ((this->OutputCameraComponent).field0_0x0.DebugPtr)->field_0x293 =
           (pFVar6->Result).CameraPose.ProjectionMode.Value;
      *(float *)&((this->OutputCameraComponent).field0_0x0.DebugPtr)->field_0x25c =
           (pFVar6->Result).CameraPose.OrthographicWidth;
      FPostProcessSettings::operator=
                ((FPostProcessSettings *)
                 &((this->OutputCameraComponent).field0_0x0.DebugPtr)->field_0x330,
                 &(pFVar6->Result).PostProcessSettings.PostProcessSettings);
      *(undefined4 *)&((this->OutputCameraComponent).field0_0x0.DebugPtr)->field_0x300 = 0x3f800000;
    }
  }
  return;
}

// _getUObject @ 14d63f2f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall UGameplayCameraComponentBase::_getUObject(UGameplayCameraComponentBase *this)

{
  return (UObject *)&this[-1].EvaluationContext.SharedReferenceCount;
}

// _getUObject`adjustor{552}' @ 14d63f2fc

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGameplayCameraComponentBase::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UGameplayCameraComponentBase::_getUObject_adjustor_552__(UGameplayCameraComponentBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGameplayCameraComponentBase *)&this[-1].field_0x88);
  return (UObject *)pUVar1;
}

// execActivateCameraForPlayerController @ 14d63f340

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::execActivateCameraForPlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  EGameplayCameraComponentActivationMode local_res10 [16];
  int local_res20 [2];
  APlayerController *local_28 [2];
  
  local_28[0] = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_res10[0] = Push;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ActivateCameraForPlayerController
            ((UGameplayCameraComponentBase *)param_1,local_28[0],bVar2,local_res10[0]);
  return;
}

// execActivateCameraForPlayerIndex @ 14d63f460

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
UGameplayCameraComponentBase::execActivateCameraForPlayerIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EGameplayCameraComponentActivationMode EVar2;
  APlayerController *pAVar3;
  bool bVar4;
  EGameplayCameraComponentActivationMode local_res10 [16];
  int local_res20 [2];
  int local_28 [4];
  
  local_28[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_res10[0] = Push;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar3 = UGameplayStatics::GetPlayerController(param_1,local_28[0]);
  ActivateCameraForPlayerController((UGameplayCameraComponentBase *)param_1,pAVar3,bVar4,EVar2);
  return;
}

// execActivatePersistentBaseCameraRig @ 14d63fdd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::execActivatePersistentBaseCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
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
  ActivatePersistentBaseCameraRig((UGameplayCameraComponentBase *)param_1,local_res10);
  return;
}

// execActivatePersistentGlobalCameraRig @ 14d63ff30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::execActivatePersistentGlobalCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
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
  ActivatePersistentGlobalCameraRig((UGameplayCameraComponentBase *)param_1,local_res10);
  return;
}

// execActivatePersistentVisualCameraRig @ 14d640090

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::execActivatePersistentVisualCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
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
  ActivatePersistentVisualCameraRig((UGameplayCameraComponentBase *)param_1,local_res10);
  return;
}

// execDeactivateCamera @ 14d640120

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::execDeactivateCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeactivateCameraEvaluationContext((UGameplayCameraComponentBase *)param_1,local_res10[0] != 0);
  return;
}

// execGetConditionalResult @ 14d640300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::execGetConditionalResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCameraNodeEvaluationResult *pFVar2;
  ForAnyElementType FVar3;
  ECameraEvaluationDataCondition local_res8 [8];
  FName local_res10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FBlueprintCameraEvaluationDataRef local_a8;
  FString local_90;
  FString local_80;
  FString local_70;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  
  local_res8[0] = ActiveCameraRig;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraEvaluationContext **)(param_1 + 0x10) == (FCameraEvaluationContext *)0x0) {
    if (*(longlong *)&param_1[4].field_0x8 == 0) {
      ::FString::FString(&local_90,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)&param_1[4].field_0x8 + 0x18);
      ::FName::ToString(&local_res10,&local_90);
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar3.Data = local_90.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_58,(wchar_t *)FVar3.Data);
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,&local_70);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar3.Data = local_70.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_38,(wchar_t *)FVar3.Data);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_b8.AllocatorInstance.Data,&local_58,2);
    ::FString::FormatImpl
              (&local_80,
               L"\"Can\'t get conditional camera data\" on Gameplay Camera component \'{0}.{1}\': it isn\'t active."
               ,&local_b8);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar3.Data = local_80.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar3.Data,Error,(FName)0x0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&local_a8);
  }
  else {
    pFVar2 = UE::Cameras::FCameraEvaluationContext::GetOrAddConditionalResult
                       (*(FCameraEvaluationContext **)(param_1 + 0x10),local_res8[0]);
    FBlueprintCameraEvaluationDataRef::MakeExternalRef(&local_a8,pFVar2);
  }
  *(FCameraNodeEvaluationResult **)param_3 = local_a8.Result;
  if ((TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *)((longlong)param_3 + 8) !=
      &local_a8.SharedResult) {
    *(FCameraNodeEvaluationResult **)((longlong)param_3 + 8) = local_a8.SharedResult.Object;
    local_a8.SharedResult.Object = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),
               &local_a8.SharedResult.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedResult.SharedReferenceCount.ReferenceController);
  return;
}

// execGetEvaluatedCameraRotation @ 14d640550

void __cdecl
UGameplayCameraComponentBase::execGetEvaluatedCameraRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(param_1 + 0xf);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0xac0);
    uVar1 = *(undefined8 *)(lVar2 + 0xac8);
    *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0xab8);
    *(undefined8 *)((longlong)param_3 + 8) = uVar3;
    *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  return;
}

// execGetInitialResult @ 14d6405c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponentBase::execGetInitialResult(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType FVar1;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FBlueprintCameraEvaluationDataRef local_98;
  FString local_80;
  FString local_70;
  FString local_60;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (*(longlong *)&param_1[4].field_0x8 == 0) {
      ::FString::FString(&local_80,L"None");
    }
    else {
      local_res8 = *(FName *)(*(longlong *)&param_1[4].field_0x8 + 0x18);
      ::FName::ToString(&local_res8,&local_80);
    }
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar1.Data = local_80.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)FVar1.Data);
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_60);
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar1.Data = local_60.Data.AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_28,(wchar_t *)FVar1.Data);
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_a8.AllocatorInstance.Data,&local_48,2);
    ::FString::FormatImpl
              (&local_70,
               L"\"Can\'t get shared camera data\" on Gameplay Camera component \'{0}.{1}\': it isn\'t active."
               ,&local_a8);
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar1.Data = local_70.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar1.Data,Error,(FName)0x0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef(&local_98);
  }
  else {
    FBlueprintCameraEvaluationDataRef::MakeExternalRef
              (&local_98,(FCameraNodeEvaluationResult *)(*(longlong *)(param_1 + 0x10) + 0x40));
  }
  *(FCameraNodeEvaluationResult **)param_3 = local_98.Result;
  if ((TSharedPtr<UE::Cameras::FCameraNodeEvaluationResult,1> *)((longlong)param_3 + 8) !=
      &local_98.SharedResult) {
    *(FCameraNodeEvaluationResult **)((longlong)param_3 + 8) = local_98.SharedResult.Object;
    local_98.SharedResult.Object = (FCameraNodeEvaluationResult *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),
               &local_98.SharedResult.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedResult.SharedReferenceCount.ReferenceController);
  return;
}

// execGetOutputCameraComponent @ 14d6407e0

void __cdecl
UGameplayCameraComponentBase::execGetOutputCameraComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xf].field_0x20;
  return;
}

