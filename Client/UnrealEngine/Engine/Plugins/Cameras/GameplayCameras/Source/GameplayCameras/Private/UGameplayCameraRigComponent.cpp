// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 14

// StaticClass @ 14d5e4de0

UClass * __cdecl UGameplayCameraRigComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameplayCameraComponentBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraRigComponent",
               &Z_Registration_Info_UClass_UGameplayCameraRigComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraRigComponent,0x400,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraRigComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraRigComponent>,local_res8,
               UGameplayCameraComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraRigComponent.InnerSingleton;
}

// UGameplayCameraRigComponent @ 14d5fe5f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UGameplayCameraRigComponent * __thiscall
UGameplayCameraRigComponent::UGameplayCameraRigComponent
          (UGameplayCameraRigComponent *this,FVTableHelper *param_1)

{
  UGameplayCameraComponentBase::UGameplayCameraComponentBase
            ((UGameplayCameraComponentBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraRigComponent__6B_;
  FCameraRigAssetReference::FCameraRigAssetReference(&this->CameraRigReference);
  (this->GeneratedCameraAsset).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->CachedParameterOverrides).Value);
  this->bIsBuildingGeneratedCameraAsset = false;
  return this;
}

// UGameplayCameraRigComponent @ 14d5fe670

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UGameplayCameraRigComponent * __thiscall
UGameplayCameraRigComponent::UGameplayCameraRigComponent
          (UGameplayCameraRigComponent *this,FObjectInitializer *param_1)

{
  UGameplayCameraComponentBase::UGameplayCameraComponentBase
            ((UGameplayCameraComponentBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraRigComponent__6B_;
  FCameraRigAssetReference::FCameraRigAssetReference(&this->CameraRigReference);
  (this->GeneratedCameraAsset).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->CachedParameterOverrides).Value);
  this->bIsBuildingGeneratedCameraAsset = false;
  return this;
}

// ~UGameplayCameraRigComponent @ 14d600b50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraRigComponent::~UGameplayCameraRigComponent(UGameplayCameraRigComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraRigComponent__6B_;
  FInstancedStruct::Reset(&(this->CachedParameterOverrides).Value);
  FCameraRigParameterOverrides::~FCameraRigParameterOverrides
            (&(this->CameraRigReference).ParameterOverrides_DEPRECATED);
  pFVar1 = (this->CameraRigReference).ParameterOverrideGuids_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CameraRigReference)._padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  pvVar2 = (void *)(this->CameraRigReference)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->CameraRigReference)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraRigReference)._padding_);
  UGameplayCameraComponentBase::~UGameplayCameraComponentBase((UGameplayCameraComponentBase *)this);
  return;
}

// BuildGeneratedCamera @ 14d60d120

void __thiscall UGameplayCameraRigComponent::BuildGeneratedCamera(UGameplayCameraRigComponent *this)

{
  bool bVar1;
  FCameraAssetBuilder local_48;
  FCameraBuildLog local_38;
  
  if ((this->GeneratedCameraAsset).field0_0x0.DebugPtr != (UCameraAsset *)0x0) {
    bVar1 = this->bIsBuildingGeneratedCameraAsset;
    this->bIsBuildingGeneratedCameraAsset = true;
    local_38.Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Messages.ArrayNum = 0;
    local_38.Messages.ArrayMax = 0;
    local_38.LoggingPrefix.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.LoggingPrefix.Data.ArrayNum = 0;
    local_38.LoggingPrefix.Data.ArrayMax = 0;
    local_38.bForwardToLogging = true;
    local_38.bHasWarnings = false;
    local_38.bHasErrors = false;
    UE::Cameras::FCameraBuildLog::SetForwardMessagesToLogging(&local_38,true);
    UE::Cameras::FCameraAssetBuilder::FCameraAssetBuilder(&local_48,&local_38);
    UE::Cameras::FCameraAssetBuilder::BuildCamera
              (&local_48,(this->GeneratedCameraAsset).field0_0x0.DebugPtr,false);
    if (local_38.LoggingPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.LoggingPrefix.Data.AllocatorInstance.Data);
    }
    DestructItems<UE::Cameras::FCameraBuildLogMessage,int>
              ((FCameraBuildLogMessage *)local_38.Messages.AllocatorInstance.Data,
               local_38.Messages.ArrayNum);
    if ((FCameraBuildLogMessage *)local_38.Messages.AllocatorInstance.Data !=
        (FCameraBuildLogMessage *)0x0) {
      FMemory::Free(local_38.Messages.AllocatorInstance.Data);
    }
    this->bIsBuildingGeneratedCameraAsset = bVar1;
  }
  return;
}

// GetCameraAsset @ 14d618ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAsset * __thiscall
UGameplayCameraRigComponent::GetCameraAsset(UGameplayCameraRigComponent *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UCameraDirector *pUVar6;
  UObject *pUVar7;
  UCameraRigAsset *pUVar8;
  UCameraAsset *pUVar9;
  longlong *plVar10;
  undefined1 auStackY_1e8 [32];
  FCameraBuildLog local_1b8;
  FString local_190;
  FName local_180;
  FName local_178;
  FString local_170;
  FName local_160;
  FName local_158;
  FCameraAssetBuilder local_150;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->GeneratedCameraAsset).field0_0x0.DebugPtr != (UCameraAsset *)0x0) {
    return (this->GeneratedCameraAsset).field0_0x0.DebugPtr;
  }
  pFVar4 = ::FName::FName(&local_160,L"GeneratedCameraDirector");
  FVar1 = *pFVar4;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = Z_Construct_UClass_USingleCameraDirector_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar5);
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._24_4_ = RF_Transient;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_138._8_8_ = this;
  local_138._16_8_ = FVar1;
  pUVar6 = (UCameraDirector *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar10 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  pUVar8 = (this->CameraRigReference).CameraRig.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UCameraRigAsset *)0x0)) {
    pUVar6[1]._padding_ = (longlong)pUVar8;
    if (pUVar8 != (UCameraRigAsset *)0x0) goto LAB_14d6191c8;
    if (2 < (byte)LogCameraSystem._0_1_) {
      local_180.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_180.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_180,&local_170);
      if (*(longlong *)&this->field_0xa8 == 0) {
        ::FString::FString(&local_190,L"None");
      }
      else {
        local_178 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
        ::FName::ToString(&local_178,&local_190);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    pUVar7 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UCameraRigAsset>(pUVar7);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UCameraRigAsset *)0x0))
    goto LAB_14d6191bc;
  }
  else {
LAB_14d6191bc:
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar6[1]._padding_ = (longlong)pUVar8;
LAB_14d6191c8:
  pFVar4 = ::FName::FName(&local_158,L"GeneratedCameraAsset");
  FVar1 = *pFVar4;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = Z_Construct_UClass_UCameraAsset_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  local_b8._16_8_ = FVar1;
  pUVar9 = (UCameraAsset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UCameraAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->GeneratedCameraAsset).field0_0x0.DebugPtr = pUVar9;
  UCameraAsset::SetCameraDirector(pUVar9,pUVar6);
  if ((this->bIsBuildingGeneratedCameraAsset != false) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2676192339726172226>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCameraRigComponent.cpp"
                         ,0x42,"!bIsBuildingGeneratedCameraAsset"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar9 = (UCameraAsset *)(*pcVar2)();
    return pUVar9;
  }
  if ((this->GeneratedCameraAsset).field0_0x0.DebugPtr != (UCameraAsset *)0x0) {
    bVar3 = this->bIsBuildingGeneratedCameraAsset;
    this->bIsBuildingGeneratedCameraAsset = true;
    local_1b8.Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Messages.ArrayNum = 0;
    local_1b8.Messages.ArrayMax = 0;
    local_1b8.LoggingPrefix.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.LoggingPrefix.Data.ArrayNum = 0;
    local_1b8.LoggingPrefix.Data.ArrayMax = 0;
    local_1b8.bForwardToLogging = true;
    local_1b8.bHasWarnings = false;
    local_1b8.bHasErrors = false;
    UE::Cameras::FCameraBuildLog::SetForwardMessagesToLogging(&local_1b8,true);
    UE::Cameras::FCameraAssetBuilder::FCameraAssetBuilder(&local_150,&local_1b8);
    UE::Cameras::FCameraAssetBuilder::BuildCamera
              (&local_150,(this->GeneratedCameraAsset).field0_0x0.DebugPtr,false);
    if (local_1b8.LoggingPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.LoggingPrefix.Data.AllocatorInstance.Data);
    }
    DestructItems<UE::Cameras::FCameraBuildLogMessage,int>
              ((FCameraBuildLogMessage *)local_1b8.Messages.AllocatorInstance.Data,
               local_1b8.Messages.ArrayNum);
    if ((FCameraBuildLogMessage *)local_1b8.Messages.AllocatorInstance.Data !=
        (FCameraBuildLogMessage *)0x0) {
      FMemory::Free(local_1b8.Messages.AllocatorInstance.Data);
    }
    this->bIsBuildingGeneratedCameraAsset = bVar3;
  }
  FBaseCameraObjectReference::RebuildParametersIfNeeded
            ((FBaseCameraObjectReference *)&this->CameraRigReference);
  if (*(longlong *)&this->field_0x280 != 0) {
    UGameplayCameraComponentBase::UpdateCameraEvaluationContext
              ((UGameplayCameraComponentBase *)this,true);
  }
  return (this->GeneratedCameraAsset).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14d61c720

UClass * __cdecl UGameplayCameraRigComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraRigComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameplayCameraComponentBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraRigComponent",
               &Z_Registration_Info_UClass_UGameplayCameraRigComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraRigComponent,0x400,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayCameraRigComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraRigComponent>,local_res8,
               UGameplayCameraComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraRigComponent.InnerSingleton;
}

// NotifyChangeCameraRigReference @ 14d621ad0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraRigComponent::NotifyChangeCameraRigReference(UGameplayCameraRigComponent *this)

{
  FInstancedPropertyBag *this_00;
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  lVar2 = *(longlong *)&this->field_0x280;
  if (lVar2 != 0) {
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x288;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    this_00 = &this->CachedParameterOverrides;
    FCameraRigAssetReference::ApplyParameterOverrides
              (&this->CameraRigReference,this_00,(FCameraNodeEvaluationResult *)(lVar2 + 0x40));
    plVar1 = &(this->CameraRigReference)._padding_;
    if (this_00 != (FInstancedPropertyBag *)plVar1) {
      FInstancedStruct::InitializeAs
                (&this_00->Value,(UScriptStruct *)*plVar1,
                 (uchar *)(this->CameraRigReference)._padding_);
    }
  }
  return;
}

// OnCameraRigAssetBuiltImpl @ 14d625f80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraRigComponent::OnCameraRigAssetBuiltImpl(UGameplayCameraRigComponent *this)

{
  FBaseCameraObjectReference::RebuildParametersIfNeeded
            ((FBaseCameraObjectReference *)&this->CameraRigReference);
  if (*(longlong *)&this->field_0x280 != 0) {
    UGameplayCameraComponentBase::UpdateCameraEvaluationContext
              ((UGameplayCameraComponentBase *)this,true);
    return;
  }
  return;
}

// OnRegister @ 14d629420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UGameplayCameraRigComponent::OnRegister(UGameplayCameraRigComponent *this)

{
  FName FVar1;
  UActorComponent *this_00;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *this_01;
  UWorld *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FName aFStack_a8 [2];
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  USceneComponent::OnRegister((USceneComponent *)this);
  if (*(longlong *)&this->field_0x278 == 0) {
    pFVar2 = ::FName::FName(aFStack_a8,L"OutputCameraComponent");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar3);
    auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_98._56_8_ = (UPackage *)0x0;
    auStack_98._24_4_ = RF_TextExportTransient|RF_Transient;
    auStack_98._40_8_ = (UObject *)0x0;
    auStack_98[0x20] = false;
    auStack_98._8_8_ = this;
    auStack_98._16_8_ = FVar1;
    this_01 = (USceneComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar5 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    aFStack_a8[0].ComparisonIndex.Value = 0;
    aFStack_a8[0].Number = 0;
    *(USceneComponent **)&this->field_0x278 = this_01;
    USceneComponent::SetupAttachment(this_01,(USceneComponent *)this,(FName)0x0);
    *(undefined1 *)(*(longlong *)&this->field_0x278 + 0xb9) = this->field_0xb9;
    pUVar4 = *(UWorld **)&this->field_0xb0;
    this_00 = *(UActorComponent **)&this->field_0x278;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UActorComponent::RegisterComponentWithWorld(this_00,pUVar4,(FRegisterComponentContext *)0x0);
  }
  return;
}

// OnUnregister @ 14d62e0c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraRigComponent::OnUnregister(UGameplayCameraRigComponent *this)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// OnUpdateCameraEvaluationContext @ 14d62e180

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraRigComponent::OnUpdateCameraEvaluationContext
          (UGameplayCameraRigComponent *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x288;
  lVar2 = *(longlong *)&this->field_0x280;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1) {
    FCameraRigAssetReference::ApplyParameterOverrides
              (&this->CameraRigReference,(FCameraNodeEvaluationResult *)(lVar2 + 0x40),false);
  }
  return;
}

// StaticRegisterNativesUGameplayCameraRigComponent @ 14d639290

void __cdecl UGameplayCameraRigComponent::StaticRegisterNativesUGameplayCameraRigComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGameplayCameraRigComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execNotifyChangeCameraRigReference @ 14d640ac0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraRigComponent::execNotifyChangeCameraRigReference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0x10].field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this = &param_1[0x18].field_0x20;
    FCameraRigAssetReference::ApplyParameterOverrides
              ((FCameraRigAssetReference *)(param_1 + 0x11),(FInstancedPropertyBag *)this,
               (FCameraNodeEvaluationResult *)(lVar1 + 0x40));
    if (this != &param_1[0x11].field_0x8) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)this,*(UScriptStruct **)&param_1[0x11].field_0x8,
                 *(uchar **)&param_1[0x11].field_0x10);
    }
  }
  return;
}

