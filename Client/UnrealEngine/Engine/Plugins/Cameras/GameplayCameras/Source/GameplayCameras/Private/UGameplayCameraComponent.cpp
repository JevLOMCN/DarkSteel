// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// StaticClass @ 14d5e5160

UClass * __cdecl UGameplayCameraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameplayCameraComponentBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraComponent",
               &Z_Registration_Info_UClass_UGameplayCameraComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraComponent,0x300,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGameplayCameraComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraComponent>,local_res8,
               UGameplayCameraComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraComponent.InnerSingleton;
}

// UGameplayCameraComponent @ 14d5fe2c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UGameplayCameraComponent * __thiscall
UGameplayCameraComponent::UGameplayCameraComponent
          (UGameplayCameraComponent *this,FVTableHelper *param_1)

{
  UGameplayCameraComponentBase::UGameplayCameraComponentBase
            ((UGameplayCameraComponentBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraComponent__6B_;
  FCameraAssetReference::FCameraAssetReference(&this->CameraReference);
  FInstancedStruct::FInstancedStruct(&(this->CachedParameterOverrides).Value);
  (this->Camera_DEPRECATED).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  return this;
}

// UGameplayCameraComponent @ 14d5fe330

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UGameplayCameraComponent * __thiscall
UGameplayCameraComponent::UGameplayCameraComponent
          (UGameplayCameraComponent *this,FObjectInitializer *param_1)

{
  UGameplayCameraComponentBase::UGameplayCameraComponentBase
            ((UGameplayCameraComponentBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraComponent__6B_;
  FCameraAssetReference::FCameraAssetReference(&this->CameraReference);
  FInstancedStruct::FInstancedStruct(&(this->CachedParameterOverrides).Value);
  (this->Camera_DEPRECATED).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  return this;
}

// ~UGameplayCameraComponent @ 14d600970

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UGameplayCameraComponent::~UGameplayCameraComponent(UGameplayCameraComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UGameplayCameraComponent__6B_;
  FInstancedStruct::Reset(&(this->CachedParameterOverrides).Value);
  pFVar1 = (this->CameraReference).ParameterOverrideGuids_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraReference).Parameters.OverridenPropertyIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraReference).Parameters);
  UGameplayCameraComponentBase::~UGameplayCameraComponentBase((UGameplayCameraComponentBase *)this);
  return;
}

// GetCameraAsset @ 14d618fb0

UCameraAsset * __thiscall UGameplayCameraComponent::GetCameraAsset(UGameplayCameraComponent *this)

{
  return (this->CameraReference).CameraAsset.field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14d61c4e0

UClass * __cdecl UGameplayCameraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameplayCameraComponentBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraComponent",
               &Z_Registration_Info_UClass_UGameplayCameraComponent.InnerSingleton,
               StaticRegisterNativesUGameplayCameraComponent,0x300,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGameplayCameraComponent>,
               InternalVTableHelperCtorCaller<UGameplayCameraComponent>,local_res8,
               UGameplayCameraComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCameraComponent.InnerSingleton;
}

// NotifyChangeCameraReference @ 14d621a50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponent::NotifyChangeCameraReference(UGameplayCameraComponent *this)

{
  FInstancedPropertyBag *this_00;
  FInstancedOverridablePropertyBag *pFVar1;
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
    FCameraAssetReference::ApplyParameterOverrides
              (&this->CameraReference,this_00,(FCameraNodeEvaluationResult *)(lVar2 + 0x40));
    pFVar1 = &(this->CameraReference).Parameters;
    if ((FInstancedOverridablePropertyBag *)this_00 != pFVar1) {
      FInstancedStruct::InitializeAs
                (&this_00->Value,(UScriptStruct *)pFVar1->_padding_,
                 (uchar *)(this->CameraReference).Parameters._padding_);
    }
  }
  return;
}

// OnRegister @ 14d6292a0

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

void __thiscall UGameplayCameraComponent::OnRegister(UGameplayCameraComponent *this)

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

// OnUnregister @ 14d62e0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraComponent::OnUnregister(UGameplayCameraComponent *this)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// OnUpdateCameraEvaluationContext @ 14d62e0d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UGameplayCameraComponent::OnUpdateCameraEvaluationContext
          (UGameplayCameraComponent *this,bool param_1)

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
    FCameraAssetReference::ApplyParameterOverrides
              (&this->CameraReference,(FCameraNodeEvaluationResult *)(lVar2 + 0x40),false);
  }
  return;
}

// PostLoad @ 14d62e570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayCameraComponent::PostLoad(UGameplayCameraComponent *this)

{
  UCameraAsset *pUVar1;
  UCameraAsset *pUVar2;
  bool bVar3;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  pUVar1 = (this->Camera_DEPRECATED).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UCameraAsset *)0x0;
  if (pUVar1 != (UCameraAsset *)0x0) {
    pUVar2 = (this->CameraReference).CameraAsset.field0_0x0.DebugPtr;
    if (pUVar2 != (UCameraAsset *)0x0) {
      bVar3 = pUVar2 == pUVar1;
    }
    if (!bVar3) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      (this->CameraReference).CameraAsset.field0_0x0.DebugPtr = pUVar1;
      FCameraAssetReference::RebuildParameters(&this->CameraReference);
    }
    (this->Camera_DEPRECATED).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  }
  return;
}

// StaticRegisterNativesUGameplayCameraComponent @ 14d6391d0

void __cdecl UGameplayCameraComponent::StaticRegisterNativesUGameplayCameraComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGameplayCameraComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execNotifyChangeCameraReference @ 14d640a20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UGameplayCameraComponent::execNotifyChangeCameraReference
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
    this = &param_1[0x12].field_0x10;
    FCameraAssetReference::ApplyParameterOverrides
              ((FCameraAssetReference *)(param_1 + 0x11),(FInstancedPropertyBag *)this,
               (FCameraNodeEvaluationResult *)(lVar1 + 0x40));
    if (this != &param_1[0x11].field_0x8) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)this,*(UScriptStruct **)&param_1[0x11].field_0x8,
                 *(uchar **)&param_1[0x11].field_0x10);
    }
  }
  return;
}

