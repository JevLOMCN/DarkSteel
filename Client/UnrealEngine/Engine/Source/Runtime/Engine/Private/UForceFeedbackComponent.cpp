// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// StaticClass @ 147889e90

UClass * __cdecl UForceFeedbackComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UForceFeedbackComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ForceFeedbackComponent",
               &Z_Registration_Info_UClass_UForceFeedbackComponent.InnerSingleton,
               StaticRegisterNativesUForceFeedbackComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UForceFeedbackComponent>,
               InternalVTableHelperCtorCaller<UForceFeedbackComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UForceFeedbackComponent.InnerSingleton;
}

// UForceFeedbackComponent @ 1478a8e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UForceFeedbackComponent * __thiscall
UForceFeedbackComponent::UForceFeedbackComponent
          (UForceFeedbackComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->ForceFeedbackEffect).field0_0x0.DebugPtr = (UForceFeedbackEffect *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (UForceFeedbackAttenuation *)0x0;
  FBaseAttenuationSettings::FBaseAttenuationSettings
            ((FBaseAttenuationSettings *)&this->AttenuationOverrides);
  *(undefined ***)&this->AttenuationOverrides = &___7FForceFeedbackAttenuationSettings__6B_;
  *(undefined8 *)&this->OnForceFeedbackFinished = 0;
  *(undefined8 *)&(this->OnForceFeedbackFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnForceFeedbackFinished).field_0x10 = 0;
  return this;
}

// UForceFeedbackComponent @ 1478a8e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UForceFeedbackComponent * __thiscall
UForceFeedbackComponent::UForceFeedbackComponent
          (UForceFeedbackComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->ForceFeedbackEffect).field0_0x0.DebugPtr = (UForceFeedbackEffect *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (UForceFeedbackAttenuation *)0x0;
  FBaseAttenuationSettings::FBaseAttenuationSettings
            ((FBaseAttenuationSettings *)&this->AttenuationOverrides);
  *(undefined ***)&this->AttenuationOverrides = &___7FForceFeedbackAttenuationSettings__6B_;
  this->bLooping = '\x01';
  this->field_0x9a = this->field_0x9a | 8;
  *(undefined8 *)&this->OnForceFeedbackFinished = 0;
  *(undefined8 *)&(this->OnForceFeedbackFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnForceFeedbackFinished).field_0x10 = 0;
  this->IntensityMultiplier = 1.0;
  return this;
}

// ~UForceFeedbackComponent @ 1478abc30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UForceFeedbackComponent::~UForceFeedbackComponent(UForceFeedbackComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnForceFeedbackFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnForceFeedbackFinished);
  FBaseAttenuationSettings::~FBaseAttenuationSettings
            ((FBaseAttenuationSettings *)&this->AttenuationOverrides);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// Activate @ 1478b1920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UForceFeedbackComponent::Activate(UForceFeedbackComponent *this,bool param_1)

{
  char cVar1;
  
  if (!param_1) {
    cVar1 = (**(code **)(*(longlong *)this + 0x330))();
    if (cVar1 != '\x01') goto LAB_1478b1950;
  }
  (**(code **)(*(longlong *)this + 0x640))(this,0);
LAB_1478b1950:
  UActorComponent::Activate((UActorComponent *)this,param_1);
  return;
}

// AdditionalStatObject @ 1478b3580

UObject * __thiscall UForceFeedbackComponent::AdditionalStatObject(UForceFeedbackComponent *this)

{
  return (UObject *)(this->ForceFeedbackEffect).field0_0x0.DebugPtr;
}

// AdjustAttenuation @ 1478b3590

void __thiscall
UForceFeedbackComponent::AdjustAttenuation
          (UForceFeedbackComponent *this,FForceFeedbackAttenuationSettings *param_1)

{
  this->bOverrideAttenuation = '\x01';
  FForceFeedbackAttenuationSettings::operator=(&this->AttenuationOverrides,param_1);
  return;
}

// Advance @ 1478b3660

bool __thiscall UForceFeedbackComponent::Advance(UForceFeedbackComponent *this,float param_1)

{
  UForceFeedbackEffect *this_00;
  atomic<double> aVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (this->ForceFeedbackEffect).field0_0x0.DebugPtr;
  if (this_00 != (UForceFeedbackEffect *)0x0) {
    fVar2 = UForceFeedbackEffect::GetDuration(this_00);
    aVar1 = FApp::DeltaTime;
    if (this->bIgnoreTimeDilation == '\0') {
      aVar1 = (atomic<double>)(double)param_1;
    }
    fVar3 = (float)((double)this->PlayTime + (double)aVar1);
    this->PlayTime = fVar3;
    if ((fVar3 <= fVar2) || ((this->bLooping != '\0' && (fVar2 != 0.0)))) {
      return true;
    }
  }
  return false;
}

// BP_GetAttenuationSettingsToApply @ 1478b5440

bool __thiscall
UForceFeedbackComponent::BP_GetAttenuationSettingsToApply
          (UForceFeedbackComponent *this,FForceFeedbackAttenuationSettings *param_1)

{
  UForceFeedbackAttenuation *pUVar1;
  FForceFeedbackAttenuationSettings *pFVar2;
  
  if (this->bOverrideAttenuation == '\0') {
    pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
    if (pUVar1 == (UForceFeedbackAttenuation *)0x0) {
      return false;
    }
    pFVar2 = &pUVar1->Attenuation;
  }
  else {
    pFVar2 = &this->AttenuationOverrides;
  }
  if (pFVar2 == (FForceFeedbackAttenuationSettings *)0x0) {
    return false;
  }
  FForceFeedbackAttenuationSettings::operator=(param_1,pFVar2);
  return true;
}

// CollectAttenuationShapesForVisualization @ 1478b9a60

void __thiscall
UForceFeedbackComponent::CollectAttenuationShapesForVisualization
          (UForceFeedbackComponent *this,
          TMultiMap<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>_>
          *param_1)

{
  UForceFeedbackAttenuation *pUVar1;
  FForceFeedbackAttenuationSettings *pFVar2;
  
  if (this->bOverrideAttenuation == '\0') {
    pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
    if (pUVar1 == (UForceFeedbackAttenuation *)0x0) {
      return;
    }
    pFVar2 = &pUVar1->Attenuation;
  }
  else {
    pFVar2 = &this->AttenuationOverrides;
  }
  if (pFVar2 == (FForceFeedbackAttenuationSettings *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478b9a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar2 + 8))();
  return;
}

// Deactivate @ 1478c2520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UForceFeedbackComponent::Deactivate(UForceFeedbackComponent *this)

{
  code *pcVar1;
  FName FVar2;
  char cVar3;
  bool bVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  cVar3 = (**(code **)(*(longlong *)this + 0x330))();
  if (cVar3 == '\0') {
    (**(code **)(*(longlong *)this + 0x648))(this);
    if ((this->field_0x9a & 0x10) == 0) {
      local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this->field_0xbb != '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) <
            `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__) {
          _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
          if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::_thread_safe_static_guard_0__ == -1) {
            ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                            ::__l2::DelegateFName,"OnComponentDeactivated");
            _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
        }
        FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                ::__l2::DelegateFName;
        bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
        if (!bVar4) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L"");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_18,(UObject *)this,FVar2)
        ;
        local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
        local_38 = pTVar5->Object;
        if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
        if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FActorComponentDeactivateSignature_DelegateWrapper(local_38,(UActorComponent *)this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
    }
  }
  return;
}

// GetAttenuationSettingsToApply @ 1478cfa20

FForceFeedbackAttenuationSettings * __thiscall
UForceFeedbackComponent::GetAttenuationSettingsToApply(UForceFeedbackComponent *this)

{
  UForceFeedbackAttenuation *pUVar1;
  FForceFeedbackAttenuationSettings *pFVar2;
  
  if (this->bOverrideAttenuation != '\0') {
    return &this->AttenuationOverrides;
  }
  pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
  pFVar2 = (FForceFeedbackAttenuationSettings *)0x0;
  if (pUVar1 != (UForceFeedbackAttenuation *)0x0) {
    pFVar2 = &pUVar1->Attenuation;
  }
  return pFVar2;
}

// GetPrivateStaticClass @ 1478d9170

UClass * __cdecl UForceFeedbackComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UForceFeedbackComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ForceFeedbackComponent",
               &Z_Registration_Info_UClass_UForceFeedbackComponent.InnerSingleton,
               StaticRegisterNativesUForceFeedbackComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UForceFeedbackComponent>,
               InternalVTableHelperCtorCaller<UForceFeedbackComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UForceFeedbackComponent.InnerSingleton;
}

// IsReadyForOwnerToAutoDestroy @ 1478e1960

bool __thiscall UForceFeedbackComponent::IsReadyForOwnerToAutoDestroy(UForceFeedbackComponent *this)

{
  return (bool)((byte)~this->field_0x9a >> 4 & 1);
}

// OnUnregister @ 1478e64c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UForceFeedbackComponent::OnUnregister(UForceFeedbackComponent *this)

{
  USceneComponent::OnUnregister((USceneComponent *)this);
  if ((*(longlong *)&this->field_0xa8 != 0) && (this->bStopWhenOwnerDestroyed == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478e64ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x648))(this);
  return;
}

// Play @ 1478e72c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UForceFeedbackComponent::Play(UForceFeedbackComponent *this,float param_1)

{
  undefined1 uVar1;
  UWorld *pUVar2;
  FForceFeedbackManager *pFVar3;
  TObjectPtr<UForceFeedbackComponent>_u_0 local_res8;
  
  pUVar2 = *(UWorld **)&this->field_0xb0;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if ((this->field_0x9a & 0x10) != 0) {
    this->bAutoDestroy = '\0';
    (**(code **)(*(longlong *)this + 0x648))(this);
    this->field_0x258 = (this->bAutoDestroy ^ this->bAutoDestroy) & 1 ^ this->field_0x258;
  }
  if (((this->ForceFeedbackEffect).field0_0x0.DebugPtr != (UForceFeedbackEffect *)0x0) &&
     (pUVar2 != (UWorld *)0x0)) {
    UActorComponent::SetActiveFlag((UActorComponent *)this,true);
    this->PlayTime = param_1;
    local_res8.DebugPtr = this;
    pFVar3 = FForceFeedbackManager::Get(pUVar2,true);
    TArray<TObjectPtr<UForceFeedbackComponent>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UForceFeedbackComponent>_const_&>
              (&pFVar3->ActiveForceFeedbackComponents,
               (TObjectPtr<UForceFeedbackComponent> *)&local_res8.ObjectPtr);
  }
  return;
}

// SetForceFeedbackEffect @ 1478f28d0

void __thiscall
UForceFeedbackComponent::SetForceFeedbackEffect
          (UForceFeedbackComponent *this,UForceFeedbackEffect *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  
  bVar2 = this->field_0x9a;
  this->bAutoDestroy = '\0';
  (**(code **)(*(longlong *)this + 0x648))();
  this->field_0x258 = (this->bAutoDestroy ^ this->bAutoDestroy) & 1 ^ this->field_0x258;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UForceFeedbackEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ForceFeedbackEffect).field0_0x0.DebugPtr = param_1;
  if ((bVar2 & 0x10) != 0) {
    (**(code **)(*(longlong *)this + 0x640))(this,0);
  }
  return;
}

// SetIntensityMultiplier @ 1478f2f60

void __thiscall
UForceFeedbackComponent::SetIntensityMultiplier(UForceFeedbackComponent *this,float param_1)

{
  this->IntensityMultiplier = param_1;
  return;
}

// StaticRegisterNativesUForceFeedbackComponent @ 1478f7e50

void __cdecl UForceFeedbackComponent::StaticRegisterNativesUForceFeedbackComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UForceFeedbackComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 1478f8370

void __thiscall UForceFeedbackComponent::Stop(UForceFeedbackComponent *this)

{
  if ((this->field_0x9a & 0x10) != 0) {
    StopInternal(this,true);
    return;
  }
  return;
}

// StopInternal @ 1478f8390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UForceFeedbackComponent::StopInternal(UForceFeedbackComponent *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UWorld *pUVar3;
  int iVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  TObjectPtr<UForceFeedbackComponent>_u_0 local_res8;
  undefined1 local_res10 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnForceFeedbackFinished,&local_38);
  iVar4 = *(int *)&(this->OnForceFeedbackFinished).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar4) {
    local_res8.DebugPtr = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnForceFeedbackFinished,&local_res8);
  }
  UActorComponent::SetActiveFlag((UActorComponent *)this,false);
  this->PlayTime = 0.0;
  if (param_1) {
    pUVar3 = *(UWorld **)&this->field_0xb0;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    iVar4 = FForceFeedbackManager::PerWorldForceFeedbackManagers.ArrayNum;
    pFVar1 = FForceFeedbackManager::PerWorldForceFeedbackManagers.AllocatorInstance.Data +
             (longlong)iVar4 * 8;
    uVar5 = FForceFeedbackManager::PerWorldForceFeedbackManagers._8_8_;
    FVar6.Data = FForceFeedbackManager::PerWorldForceFeedbackManagers.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar4) {
        `TCheckedPointerIterator<FForceFeedbackManager_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        uVar5 = FForceFeedbackManager::PerWorldForceFeedbackManagers._8_8_;
      }
      if (FVar6.Data == pFVar1) goto LAB_1478f8491;
      lVar2 = *(longlong *)FVar6.Data;
      if (*(UWorld **)(lVar2 + 0x18) == (UWorld *)0x0) {
        bVar7 = pUVar3 == (UWorld *)0x0;
      }
      else {
        bVar7 = *(UWorld **)(lVar2 + 0x18) == pUVar3;
      }
      if (bVar7) break;
      FVar6.Data = FVar6.Data + 8;
    }
    if (lVar2 != 0) {
      local_res8.DebugPtr = this;
      TArray<TObjectPtr<UForceFeedbackComponent>,TSizedDefaultAllocator<32>_>::RemoveSwap
                ((TArray<TObjectPtr<UForceFeedbackComponent>,TSizedDefaultAllocator<32>_> *)
                 (lVar2 + 0x20),(TObjectPtr<UForceFeedbackComponent> *)&local_res8.ObjectPtr,Default
                );
    }
  }
LAB_1478f8491:
  if (this->bAutoDestroy == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478f84b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x4a0))(this,0);
  return;
}

// Update @ 1478fafb0

void __thiscall
UForceFeedbackComponent::Update
          (UForceFeedbackComponent *this,TVector<double> *param_1,FForceFeedbackValues *param_2,
          FPlatformUserId param_3)

{
  float fVar1;
  UForceFeedbackEffect *this_00;
  UForceFeedbackAttenuation *pUVar2;
  FBaseAttenuationSettings *this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  TVector<double>_u_0 local_58 [3];
  
  this_00 = (this->ForceFeedbackEffect).field0_0x0.DebugPtr;
  if (this_00 == (UForceFeedbackEffect *)0x0) {
    return;
  }
  fVar3 = UForceFeedbackEffect::GetDuration(this_00);
  fVar1 = this->PlayTime;
  fVar5 = this->IntensityMultiplier;
  auVar6 = roundps(in_XMM3,ZEXT416((uint)(fVar1 / fVar3)),1);
  if (fVar5 <= 0.0) {
    return;
  }
  if (this->bOverrideAttenuation == '\0') {
    pUVar2 = (this->AttenuationSettings).field0_0x0.DebugPtr;
    if (pUVar2 == (UForceFeedbackAttenuation *)0x0) goto LAB_1478fb088;
    this_01 = (FBaseAttenuationSettings *)&pUVar2->Attenuation;
  }
  else {
    this_01 = (FBaseAttenuationSettings *)&this->AttenuationOverrides;
  }
  if (this_01 != (FBaseAttenuationSettings *)0x0) {
    local_58[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_58[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    local_58[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
    fVar4 = FBaseAttenuationSettings::Evaluate
                      (this_01,(TTransform<double> *)&this->field_0x1f0,
                       (TVector<double> *)&local_58[0]._s_0,__real_3f800000);
    fVar5 = fVar4 * fVar5;
    if (fVar5 <= 0.0) {
      return;
    }
  }
LAB_1478fb088:
  UForceFeedbackEffect::GetValues
            ((this->ForceFeedbackEffect).field0_0x0.DebugPtr,fVar1 - auVar6._0_4_ * fVar3,param_2,
             param_3,fVar5);
  return;
}

// execAdjustAttenuation @ 147901ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UForceFeedbackComponent::execAdjustAttenuation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBaseAttenuationSettings *pFVar2;
  undefined1 auStack_f8 [32];
  FBaseAttenuationSettings local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FBaseAttenuationSettings::FBaseAttenuationSettings(&local_d8);
  local_d8._padding_ = (longlong)&___7FForceFeedbackAttenuationSettings__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pFVar2 = &local_d8;
  if ((FBaseAttenuationSettings *)param_2->MostRecentPropertyAddress !=
      (FBaseAttenuationSettings *)0x0) {
    pFVar2 = (FBaseAttenuationSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 0x10;
  FForceFeedbackAttenuationSettings::operator=
            ((FForceFeedbackAttenuationSettings *)&param_1[0xf].field_0x10,
             (FForceFeedbackAttenuationSettings *)pFVar2);
  FBaseAttenuationSettings::~FBaseAttenuationSettings(&local_d8);
  return;
}

// execBP_GetAttenuationSettingsToApply @ 147901e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UForceFeedbackComponent::execBP_GetAttenuationSettingsToApply
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FBaseAttenuationSettings *this;
  FForceFeedbackAttenuationSettings *pFVar3;
  undefined1 auStack_108 [32];
  FBaseAttenuationSettings local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FBaseAttenuationSettings::FBaseAttenuationSettings(&local_e8);
  local_e8._padding_ = (longlong)&___7FForceFeedbackAttenuationSettings__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  this = &local_e8;
  if ((FBaseAttenuationSettings *)param_2->MostRecentPropertyAddress !=
      (FBaseAttenuationSettings *)0x0) {
    this = (FBaseAttenuationSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(byte *)(param_1 + 0xf) & 0x10) == 0) {
    if (*(longlong *)&param_1[0xf].field_0x8 != 0) {
      pFVar3 = (FForceFeedbackAttenuationSettings *)(*(longlong *)&param_1[0xf].field_0x8 + 0x28);
      goto LAB_147901ef4;
    }
  }
  else {
    pFVar3 = (FForceFeedbackAttenuationSettings *)&param_1[0xf].field_0x10;
LAB_147901ef4:
    if (pFVar3 != (FForceFeedbackAttenuationSettings *)0x0) {
      FForceFeedbackAttenuationSettings::operator=((FForceFeedbackAttenuationSettings *)this,pFVar3)
      ;
      uVar2 = 1;
      goto LAB_147901f04;
    }
  }
  uVar2 = 0;
LAB_147901f04:
  *(undefined1 *)param_3 = uVar2;
  FBaseAttenuationSettings::~FBaseAttenuationSettings(&local_e8);
  return;
}

// execPlay @ 147907700

void __cdecl UForceFeedbackComponent::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x640))(param_1,local_res8[0]);
  return;
}

// execSetForceFeedbackEffect @ 14790d330

void __cdecl
UForceFeedbackComponent::execSetForceFeedbackEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  FProperty *pFVar3;
  UObject *pUVar4;
  UObject *local_res8;
  
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
  pUVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = *(byte *)(param_1 + 0xf);
  bVar2 = param_1[3].field_0x22;
  *(byte *)(param_1 + 0xf) = bVar1 & 0xfe;
  (**(code **)(*(longlong *)param_1 + 0x648))(param_1);
  *(byte *)(param_1 + 0xf) = (*(byte *)(param_1 + 0xf) ^ bVar1) & 1 ^ *(byte *)(param_1 + 0xf);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&param_1[0xe].field_0x20 = pUVar4;
  if ((bVar2 & 0x10) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x640))(param_1,0);
  }
  return;
}

// execSetIntensityMultiplier @ 14790e310

void __cdecl
UForceFeedbackComponent::execSetIntensityMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x4 = local_res8[0];
  return;
}

// execStop @ 147913ce0

void __cdecl UForceFeedbackComponent::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147913cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x648))();
  return;
}

