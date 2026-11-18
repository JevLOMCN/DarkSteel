// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 22

// StaticClass @ 14acd47c0

UClass * __cdecl UWN_SKMReactComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_SKMReactComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_SKMReact",L"WN_SKMReactComponent",
               &Z_Registration_Info_UClass_UWN_SKMReactComponent.InnerSingleton,
               StaticRegisterNativesUWN_SKMReactComponent,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_SKMReactComponent>,
               InternalVTableHelperCtorCaller<UWN_SKMReactComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_SKMReactComponent.InnerSingleton;
}

// UWN_SKMReactComponent @ 14acd5910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_SKMReactComponent * __thiscall
UWN_SKMReactComponent::UWN_SKMReactComponent(UWN_SKMReactComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->FootprintDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->FootprintDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->FootprintDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo.field_0x8 = 0;
  *(undefined8 *)&(this->FootprintDelegate).field_0x8 = 0;
  (this->SKMReact).UseFootprint = true;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo = 0;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo.field_0x20 = 0;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x28 = 0;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x2c = 0x80;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x34 = 0;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo.field_0x40 = 0;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x48 = 0;
  (this->SKMReact).LocationOffset.field0_0x0._s_0.X = 0.0;
  (this->SKMReact).LocationOffset.field0_0x0._s_0.Y = 0.0;
  (this->SKMReact).LocationOffset.field0_0x0._s_0.Z = 0.0;
  (this->SKMReact).RotationOffset.Pitch = 0.0;
  (this->SKMReact).RotationOffset.Yaw = 0.0;
  (this->SKMReact).RotationOffset.Roll = 0.0;
  (this->SKMReact).DelayToStartFading = 5.0;
  (this->SKMReact).FadeDuration = 10.0;
  (this->SKMReact).FadeDistance = 0.0001;
  *(undefined8 *)&this->BoneSocketSettings = 0;
  *(undefined8 *)&(this->BoneSocketSettings).field_0x20 = 0;
  (this->SKMReact).Size.field0_0x0._s_0.X = 8.0;
  (this->SKMReact).Size.field0_0x0._s_0.Y = 16.0;
  (this->SKMReact).Size.field0_0x0._s_0.Z = 16.0;
  *(undefined8 *)&(this->BoneSocketSettings).field_0x8 = 0;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x28 = 0;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x34 = 0;
  *(undefined8 *)&(this->BoneSocketSettings).field_0x40 = 0;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x48 = 0;
  (this->ParticlesSounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlesSounds).ArrayNum = 0;
  (this->ParticlesSounds).ArrayMax = 0;
  (this->Bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bones).ArrayNum = 0;
  (this->Bones).ArrayMax = 0;
  (this->AnimNotifySetting).SpawnParticle = true;
  (this->AnimNotifySetting).SpawnSound = true;
  (this->AnimNotifySetting)._padding_ = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x10 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x18 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x38 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x48 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x8 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x20 = 0;
  (this->AnimNotifySetting).SoundSelection = 0;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x28 = 0;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x34 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x40 = 0;
  (this->AnimNotifySetting).VolumeMultiplier = 1.0;
  *(undefined8 *)&(this->AnimNotifySetting).PitchMultiplier = 0x3f800000;
  *(undefined8 *)&(this->OwnerActor).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->Mesh).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->Animation).WeakPtr.ObjectSerialNumber = 0;
  (this->PhysMaterial).WeakPtr.ObjectSerialNumber = 0;
  (this->BoneSocket).ComparisonIndex = 0;
  (this->BoneSocket).Number = 0;
  (this->ParticleType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleType).Data.ArrayNum = 0;
  (this->ParticleType).Data.ArrayMax = 0;
  this->DetectedParticleSoundIndex = 0;
  return this;
}

// UWN_SKMReactComponent @ 14acd5b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_SKMReactComponent * __thiscall
UWN_SKMReactComponent::UWN_SKMReactComponent
          (UWN_SKMReactComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->FootprintDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->FootprintDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->FootprintDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo.field_0x8 = 0;
  *(undefined8 *)&(this->FootprintDelegate).field_0x8 = 0;
  (this->SKMReact).UseFootprint = true;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo = 0;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo.field_0x20 = 0;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x28 = 0;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x2c = 0x80;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x34 = 0;
  *(undefined8 *)&(this->SKMReact).SKMReactInfo.field_0x40 = 0;
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x48 = 0;
  (this->SKMReact).LocationOffset.field0_0x0._s_0.X = 0.0;
  (this->SKMReact).LocationOffset.field0_0x0._s_0.Y = 0.0;
  (this->SKMReact).LocationOffset.field0_0x0._s_0.Z = 0.0;
  (this->SKMReact).RotationOffset.Pitch = 0.0;
  (this->SKMReact).RotationOffset.Yaw = 0.0;
  (this->SKMReact).RotationOffset.Roll = 0.0;
  (this->SKMReact).DelayToStartFading = 5.0;
  (this->SKMReact).FadeDuration = 10.0;
  (this->SKMReact).FadeDistance = 0.0001;
  *(undefined8 *)&this->BoneSocketSettings = 0;
  *(undefined8 *)&(this->BoneSocketSettings).field_0x20 = 0;
  (this->SKMReact).Size.field0_0x0._s_0.X = 8.0;
  (this->SKMReact).Size.field0_0x0._s_0.Y = 16.0;
  (this->SKMReact).Size.field0_0x0._s_0.Z = 16.0;
  *(undefined8 *)&(this->BoneSocketSettings).field_0x8 = 0;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x28 = 0;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x34 = 0;
  *(undefined8 *)&(this->BoneSocketSettings).field_0x40 = 0;
  *(undefined4 *)&(this->BoneSocketSettings).field_0x48 = 0;
  (this->ParticlesSounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlesSounds).ArrayNum = 0;
  (this->ParticlesSounds).ArrayMax = 0;
  (this->Bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bones).ArrayNum = 0;
  (this->Bones).ArrayMax = 0;
  (this->AnimNotifySetting).SpawnParticle = true;
  (this->AnimNotifySetting).SpawnSound = true;
  (this->AnimNotifySetting)._padding_ = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x10 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x18 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x38 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x48 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x8 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x20 = 0;
  (this->AnimNotifySetting).SoundSelection = 0;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x28 = 0;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x34 = 0;
  *(undefined8 *)&(this->AnimNotifySetting).FloatParameter.field_0x40 = 0;
  (this->AnimNotifySetting).VolumeMultiplier = 1.0;
  *(undefined8 *)&(this->AnimNotifySetting).PitchMultiplier = 0x3f800000;
  *(undefined8 *)&(this->OwnerActor).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->Mesh).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->Animation).WeakPtr.ObjectSerialNumber = 0;
  (this->PhysMaterial).WeakPtr.ObjectSerialNumber = 0;
  (this->BoneSocket).ComparisonIndex = 0;
  (this->BoneSocket).Number = 0;
  (this->ParticleType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleType).Data.ArrayNum = 0;
  (this->ParticleType).Data.ArrayMax = 0;
  this->DetectedParticleSoundIndex = 0;
  return this;
}

// ~UWN_SKMReactComponent @ 14acd5f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_SKMReactComponent::~UWN_SKMReactComponent(UWN_SKMReactComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ParticleType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AnimNotifySetting).FloatParameter.field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnimNotifySetting).FloatParameter.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AnimNotifySetting).FloatParameter);
  pFVar1 = (this->Bones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_SKMReact_Particle,int>
            ((FWN_SKMReact_Particle *)(this->ParticlesSounds).AllocatorInstance.Data,
             (this->ParticlesSounds).ArrayNum);
  pFVar1 = (this->ParticlesSounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BoneSocketSettings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoneSocketSettings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FWN_SKMReact_BoneTraceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FWN_SKMReact_BoneTraceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FWN_SKMReact_BoneTraceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneSocketSettings);
  *(undefined4 *)&(this->SKMReact).SKMReactInfo.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SKMReact).SKMReactInfo.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FWN_SKMReactInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SKMReact).SKMReactInfo);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->FootprintDelegate).field_0x8,*(int *)&(this->FootprintDelegate).field_0x10);
  pvVar2 = *(void **)&(this->FootprintDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FootprintDelegate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BeginPlay @ 14acd65b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_SKMReactComponent::BeginPlay(UWN_SKMReactComponent *this)

{
  UObject *local_res8 [4];
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  local_res8[0] = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// CheckIfPhysicalMatNameFoundInArray @ 14acd6600

bool __thiscall
UWN_SKMReactComponent::CheckIfPhysicalMatNameFoundInArray
          (UWN_SKMReactComponent *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  bVar2 = TWeakObjectPtr<UPhysicalMaterial,FWeakObjectPtr>::UEOpEquals
                    (&this->PhysMaterial,(void *)0x0);
  if (bVar2) {
    return false;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->PhysMaterial).WeakPtr);
  UKismetSystemLibrary::GetDisplayName(&local_28,pUVar3);
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    bVar2 = UKismetStringLibrary::Contains(&local_28,(FString *)pFVar4,false,false);
    if (bVar2) {
      ::FString::operator=(&this->ParticleType,(FString *)pFVar4);
      bVar2 = true;
LAB_14acd66a6:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return bVar2;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  bVar2 = false;
  goto LAB_14acd66a6;
}

// ClearBones @ 14acd66e0

void __thiscall UWN_SKMReactComponent::ClearBones(UWN_SKMReactComponent *this)

{
  int *piVar1;
  
  piVar1 = &(this->Bones).ArrayMax;
  (this->Bones).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Bones).AllocatorInstance,0,piVar1);
  }
  return;
}

// Debugger @ 14acd6720

void __thiscall UWN_SKMReactComponent::Debugger(UWN_SKMReactComponent *this)

{
  return;
}

// DetectSurfaceAssignParticleAndSound @ 14acd6810

void __thiscall
UWN_SKMReactComponent::DetectSurfaceAssignParticleAndSound(UWN_SKMReactComponent *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  FString *pFVar7;
  FString *pFVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  FString local_38;
  
  uVar9 = 0;
  this->DetectedParticleSoundIndex = 0;
  if (0 < (this->ParticlesSounds).ArrayNum) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->ParticlesSounds).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ParticlesSounds).AllocatorInstance.Data;
      bVar4 = TWeakObjectPtr<UPhysicalMaterial,FWeakObjectPtr>::UEOpEquals
                        (&this->PhysMaterial,(void *)0x0);
      if (!bVar4) {
        pUVar6 = FWeakObjectPtr::Get(&(this->PhysMaterial).WeakPtr);
        UKismetSystemLibrary::GetDisplayName(&local_38,pUVar6);
        iVar1 = *(int *)(pFVar2 + lVar10 + 0x18);
        pFVar7 = *(FString **)(pFVar2 + lVar10 + 0x10);
        pFVar8 = pFVar7 + iVar1;
        while( true ) {
          if (*(int *)(pFVar2 + lVar10 + 0x18) != iVar1) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar7 == pFVar8) break;
          bVar4 = UKismetStringLibrary::Contains(&local_38,pFVar7,false,false);
          if (bVar4) {
            ::FString::operator=(&this->ParticleType,pFVar7);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            this->DetectedParticleSoundIndex = uVar9;
            return;
          }
          pFVar7 = pFVar7 + 1;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0xa0;
    } while ((int)uVar9 < (this->ParticlesSounds).ArrayNum);
  }
  return;
}

// Footstep @ 14acd6ca0

void __thiscall UWN_SKMReactComponent::Footstep(UWN_SKMReactComponent *this)

{
  SpawnFootstepParticleAndAudio(this,(this->AnimNotifySetting).SpawnSound);
  return;
}

// FootstepGeneration @ 14acd6cc0

void __thiscall UWN_SKMReactComponent::FootstepGeneration(UWN_SKMReactComponent *this)

{
  SpawnFootstepParticleAndAudio(this,(this->AnimNotifySetting).SpawnSound);
  return;
}

// GetPrivateStaticClass @ 14acd6da0

UClass * __cdecl UWN_SKMReactComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_SKMReactComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_SKMReact",L"WN_SKMReactComponent",
               &Z_Registration_Info_UClass_UWN_SKMReactComponent.InnerSingleton,
               StaticRegisterNativesUWN_SKMReactComponent,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_SKMReactComponent>,
               InternalVTableHelperCtorCaller<UWN_SKMReactComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_SKMReactComponent.InnerSingleton;
}

// LineTrace @ 14acd6e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_SKMReactComponent::LineTrace(UWN_SKMReactComponent *this)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  FLinearColor FVar17;
  bool bVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  ETraceTypeQuery EVar22;
  uint uVar23;
  FWN_SKMReact_BoneTraceInfo *pFVar24;
  TVector<double>_u_0 *pTVar25;
  UObject *pUVar26;
  UWorld *pUVar27;
  undefined1 *puVar28;
  longlong lVar29;
  FName *pFVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 local_res8 [8];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  FLinearColor_u_0 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined2 uStack_2bb;
  undefined1 uStack_2b9;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278;
  FDestructionSentinel local_258;
  FLinearColor_u_0 local_238;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  undefined1 local_1f8 [24];
  double dStack_1e0;
  double local_1d8;
  double local_1a0;
  double dStack_198;
  double local_190;
  int local_154;
  byte local_14b;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr FStack_138;
  IActorInstanceManagerInterface *local_130;
  undefined8 uStack_128;
  TVector<double> local_f8;
  TVector<double> local_e0 [7];
  
  iVar2 = (this->Bones).ArrayNum;
  if (iVar2 != 0) {
    pFVar30 = (FName *)(this->Bones).AllocatorInstance.Data;
    pFVar1 = pFVar30 + iVar2;
    while( true ) {
      if ((this->Bones).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (pFVar30 == pFVar1) break;
      FVar3 = *pFVar30;
      uVar20 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      if (*(int *)&(this->BoneSocketSettings).field_0x8 ==
          *(int *)&(this->BoneSocketSettings).field_0x34) {
LAB_14acd724c:
        pFVar30 = pFVar30 + 1;
      }
      else {
        puVar4 = *(undefined1 **)&(this->BoneSocketSettings).field_0x40;
        puVar28 = &(this->BoneSocketSettings).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar28 = puVar4;
        }
        iVar21 = *(int *)(puVar28 +
                         (ulonglong)
                         (*(int *)&(this->BoneSocketSettings).field_0x48 - 1U &
                         FVar3.Number + uVar20) * 4);
        if (iVar21 == -1) goto LAB_14acd724c;
        do {
          if (*(FName *)((longlong)iVar21 * 0x68 + *(longlong *)&this->BoneSocketSettings) == FVar3)
          {
            pFVar24 = TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
                      ::FindChecked((TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
                                     *)&this->BoneSocketSettings,FVar3);
            lVar29 = this->_padding_;
            uVar31 = 0;
            uVar32 = 0;
            uVar33 = 0;
            uVar34 = 0;
            local_2f8 = 0.0;
            local_308 = 0.0;
            dStack_300 = 0.0;
            if (lVar29 == 0) {
              return;
            }
            if (pFVar24->TraceDirection == UpDown) {
              if (*(USceneComponent **)(lVar29 + 0x1b8) == (USceneComponent *)0x0) {
                pTVar25 = &local_210;
                local_210._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
                local_210._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
                local_210._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
              }
              else {
                pTVar25 = &USceneComponent::GetUpVector
                                     (*(USceneComponent **)(lVar29 + 0x1b8),local_e0)->field0_0x0;
              }
LAB_14acd706f:
              uVar31 = *(undefined4 *)&(pTVar25->_s_0).X;
              uVar32 = *(undefined4 *)((longlong)&(pTVar25->_s_0).X + 4);
              local_308 = (((TVector<double>_u_0 *)&(pTVar25->_s_0).X)->_s_0).X;
              uVar33 = *(undefined4 *)&(pTVar25->_s_0).Y;
              uVar34 = *(undefined4 *)((longlong)&(pTVar25->_s_0).Y + 4);
              dStack_300 = (pTVar25->_s_0).Y;
              local_2f8 = (pTVar25->_s_0).Z;
            }
            else if (pFVar24->TraceDirection == ForwardBackward) {
              if (*(USceneComponent **)(lVar29 + 0x1b8) == (USceneComponent *)0x0) {
                pTVar25 = &local_228;
                local_228._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
                local_228._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
                local_228._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
              }
              else {
                pTVar25 = &USceneComponent::GetForwardVector
                                     (*(USceneComponent **)(lVar29 + 0x1b8),&local_f8)->field0_0x0;
              }
              goto LAB_14acd706f;
            }
            pUVar26 = FWeakObjectPtr::Get(&(this->Mesh).WeakPtr);
            (**(code **)(*(longlong *)pUVar26 + 0x528))(pUVar26,&local_2b8,FVar3);
            dVar13 = local_2b8 + (pFVar24->TraceStartOffset).field0_0x0._s_0.X;
            dVar14 = local_2b0 + (pFVar24->TraceStartOffset).field0_0x0._s_0.Y;
            dVar15 = local_2a8 + (pFVar24->TraceStartOffset).field0_0x0._s_0.Z;
            dVar10 = local_2b8 + (pFVar24->TraceEndOffset).field0_0x0._s_0.X;
            dVar11 = local_2b0 + (pFVar24->TraceEndOffset).field0_0x0._s_0.Y;
            dVar12 = local_2a8 + (pFVar24->TraceEndOffset).field0_0x0._s_0.Z;
            dVar8 = (double)pFVar24->TraceDistance;
            dVar9 = local_2f8 * dVar8;
            memset(local_1f8,0,0x100);
            FVar17 = FLinearColor::Green;
            uStack_2bb = 0;
            uStack_2b9 = 0;
            local_2d8 = 0;
            uStack_2d0 = 0;
            local_2c8 = 0;
            local_140.ObjectIndex = 0;
            local_140.ObjectSerialNumber = 0;
            FStack_138.ObjectIndex = 0;
            FStack_138.ObjectSerialNumber = 0;
            uStack_2c0 = 0xffffffff;
            uStack_2bc = 0;
            uStack_128._0_4_ = -1;
            uStack_128._4_1_ = Invalid;
            uStack_128._5_3_ = 0;
            local_1f8._4_4_ = 1.0;
            local_154 = -1;
            local_130 = (IActorInstanceManagerInterface *)0x0;
            local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_318.ArrayNum = 0;
            local_318.ArrayMax = 0;
            local_2e8 = FLinearColor::Red.field0_0x0;
            EVar22 = UEngineTypes::ConvertToTraceType(ECC_Visibility);
            pUVar27 = (UWorld *)this->_padding_;
            if (pUVar27 == (UWorld *)0x0) {
              pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
            }
            local_298._s_0.X = (double)CONCAT44(uVar32,uVar31) * dVar8 + dVar10;
            local_298._s_0.Y = (double)CONCAT44(uVar34,uVar33) * dVar8 + dVar11;
            local_298._s_0.Z = dVar9 + dVar12;
            local_238 = FVar17.field0_0x0;
            local_278._s_0.X = dVar13;
            local_278._s_0.Y = dVar14;
            local_278._s_0.Z = dVar15;
            UKismetSystemLibrary::LineTraceSingle
                      ((UObject *)pUVar27,(TVector<double> *)&local_278._s_0,
                       (TVector<double> *)&local_298._s_0,EVar22,false,&local_318,None,
                       (FHitResult *)local_1f8,true,(FLinearColor *)&local_2e8._s_0,
                       (FLinearColor *)&local_238._s_0,__real_40a00000);
            if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.AllocatorInstance.Data);
            }
            if ((local_14b & 1) != 0) {
              (this->HitLocation).field0_0x0._s_0.X = (double)local_1f8._16_8_;
              (this->HitLocation).field0_0x0._s_0.Y = dStack_1e0;
              (this->PhysMaterial).WeakPtr = local_148;
              this->BoneSocket = FVar3;
              (this->HitLocation).field0_0x0._s_0.Z = local_1d8;
              (this->ImpactNormal).field0_0x0._s_0.X = local_1a0;
              (this->ImpactNormal).field0_0x0._s_0.Y = dStack_198;
              (this->ImpactNormal).field0_0x0._s_0.Z = local_190;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &this->FootprintDelegate,(FWriteAccessScope *)&local_258);
              puVar4 = &(this->FootprintDelegate).field_0x1c;
              *(int *)puVar4 = *(int *)puVar4 + 1;
              bVar16 = false;
              uVar20 = *(int *)&(this->FootprintDelegate).field_0x10 - 1;
              if (-1 < (int)uVar20) {
                lVar29 = (longlong)(int)uVar20 << 4;
                bVar16 = false;
                do {
                  uVar23 = 0;
                  if ((int)uVar20 < *(int *)&(this->FootprintDelegate).field_0x10) {
                    uVar23 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar5 = *(longlong *)&(this->FootprintDelegate).field_0x8;
                  if (((*(int *)(lVar29 + 8 + lVar5) == 0) ||
                      (plVar6 = *(longlong **)(lVar29 + lVar5), plVar6 == (longlong *)0x0)) ||
                     (cVar19 = (**(code **)(*plVar6 + 0x68))(), cVar19 == '\0')) {
                    bVar16 = true;
                  }
                  lVar29 = lVar29 + -0x10;
                  uVar20 = uVar20 - 1;
                } while (-1 < (int)uVar20);
              }
              puVar4 = &(this->FootprintDelegate).field_0x1c;
              *(int *)puVar4 = *(int *)puVar4 + -1;
              if (bVar16) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &this->FootprintDelegate,false);
              }
              if (local_258.bDestroyed != false) {
                return;
              }
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
              return;
            }
            goto LAB_14acd724c;
          }
          iVar21 = *(int *)((longlong)iVar21 * 0x68 + 0x60 + *(longlong *)&this->BoneSocketSettings)
          ;
        } while (iVar21 != -1);
        pFVar30 = pFVar30 + 1;
      }
    }
  }
  return;
}

// OnChangedPreset @ 14acd7680

void __thiscall UWN_SKMReactComponent::OnChangedPreset(UWN_SKMReactComponent *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UDataTable *this_00;
  FString *pFVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  undefined1 local_res18 [16];
  TArray<FWN_SKMReact_TableRow_*,TSizedDefaultAllocator<32>_> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_28.Size = 0x3d;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28.DataPtr = L"/Game/FootstepSoundComponent/Data/SKMReactTable.SKMReactTable";
  pUVar3 = Z_Construct_UClass_UDataTable_NoRegister();
  this_00 = (UDataTable *)
            StaticLoadObject(pUVar3,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if (this_00 != (UDataTable *)0x0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pwVar6 = L"";
    pFVar4 = ::FString::FString((FString *)&local_28,L"");
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    UDataTable::GetAllRows<FWN_SKMReact_TableRow>(this_00,pwVar6,&local_48);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    iVar2 = local_48.ArrayNum;
    uVar5 = (ulonglong)local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + uVar5 * 8;
    FVar7.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar2) {
        `TCheckedPointerIterator<FWN_SKMReact_TableRow_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        uVar5 = local_48._8_8_ & 0xffffffff;
      }
      if (FVar7.Data == pFVar1) goto LAB_14acd7798;
      if (*(FName *)(*(longlong *)FVar7.Data + 8) == *param_1) break;
      FVar7.Data = FVar7.Data + 8;
    }
    SetParticleAndSounds
              (this,(TArray<FWN_SKMReact_Consumer,TSizedDefaultAllocator<32>_> *)
                    (*(longlong *)FVar7.Data + 0x10));
LAB_14acd7798:
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// OnFootprint @ 14acd77d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_SKMReactComponent::OnFootprint(UWN_SKMReactComponent *this)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  UMaterialInterface *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FString *pFVar11;
  UObject *pUVar12;
  FWN_SKMReactInfo *pFVar13;
  TRotator<double> *pTVar14;
  UWorld *pUVar15;
  UDecalComponent *this_00;
  UMaterialInstanceDynamic *this_01;
  FName *pFVar16;
  wchar_t *pwVar17;
  uint uVar18;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  FName local_res18 [2];
  TRotator<double> local_218;
  TVector<double>_u_0 local_1f8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FLinearColor_u_0 local_1a8;
  TRotator<double> local_198;
  TRotator<double> local_178;
  TRotator<double> local_158;
  TRotator<double> local_138;
  TRotator<double> local_118;
  TVector<double>_u_0 local_f8;
  TRotator<double> local_d8 [6];
  
  if ((this->SKMReact).UseFootprint != false) {
    pFVar11 = ::FName::ToString(&this->BoneSocket,&local_1d8);
    iVar10 = (pFVar11->Data).ArrayNum;
    if (iVar10 == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    uVar9 = iVar10 - 1;
    if (iVar10 == 0) {
      uVar9 = 0;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,pwVar17);
    iVar10 = TSet<TTuple<FString,FWN_SKMReactInfo>,TDefaultMapHashableKeyFuncs<FString,FWN_SKMReactInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FWN_SKMReactInfo>,TDefaultMapHashableKeyFuncs<FString,FWN_SKMReactInfo,0>,FDefaultSetAllocator>
                         *)&(this->SKMReact).SKMReactInfo,uVar9,pFVar11);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (iVar10 == -1) {
      if (4 < (byte)LogLevel._0_1_) {
        ::FName::ToString(&this->BoneSocket,&local_1c8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
    }
    else if ((this->DetectedParticleSoundIndex < 0) ||
            ((this->ParticlesSounds).ArrayNum <= this->DetectedParticleSoundIndex)) {
      if (4 < (byte)LogLevel._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
      }
    }
    else {
      bVar8 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->OwnerActor,(void *)0x0);
      if (!bVar8) {
        pUVar12 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        local_res10 = *(UObject **)(pUVar12 + 0xb);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res10);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res10);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        bVar8 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *)&local_res8,(void *)0x0
                          );
        if (!bVar8) {
          pFVar11 = ::FName::ToString(&this->BoneSocket,&local_1b8);
          pFVar13 = TMapBase<FString,FWN_SKMReactInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_SKMReactInfo,0>_>
                    ::FindChecked((TMapBase<FString,FWN_SKMReactInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_SKMReactInfo,0>_>
                                   *)&(this->SKMReact).SKMReactInfo,pFVar11);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          local_198.Pitch = (pFVar13->Rotation).Pitch;
          local_198.Yaw = (pFVar13->Rotation).Yaw;
          local_198.Roll = (pFVar13->Rotation).Roll;
          local_178.Pitch = (this->SKMReact).RotationOffset.Pitch;
          local_178.Yaw = (this->SKMReact).RotationOffset.Yaw;
          local_178.Roll = (this->SKMReact).RotationOffset.Roll;
          UKismetMathLibrary::ComposeRotators(&local_218,&local_178,&local_198);
          pUVar12 = FWeakObjectPtr::Get(&local_res8);
          local_158.Pitch = *(double *)&pUVar12[8].field_0x20;
          local_158.Yaw = *(double *)(pUVar12 + 9);
          local_158.Roll = *(double *)&pUVar12[9].field_0x8;
          local_138.Pitch = local_218.Pitch;
          local_138.Yaw = local_218.Yaw;
          local_138.Roll = local_218.Roll;
          pTVar14 = UKismetMathLibrary::ComposeRotators(local_d8,&local_138,&local_158);
          fVar2 = (this->SKMReact).DelayToStartFading;
          fVar3 = (this->SKMReact).FadeDuration;
          local_f8._s_0.X = (this->SKMReact).Size.field0_0x0._s_0.X;
          local_f8._s_0.Y = (this->SKMReact).Size.field0_0x0._s_0.Y;
          local_218.Pitch = pTVar14->Pitch;
          local_218.Yaw = pTVar14->Yaw;
          local_f8._s_0.Z = (this->SKMReact).Size.field0_0x0._s_0.Z;
          local_218.Roll = pTVar14->Roll;
          local_118.Pitch = pTVar14->Pitch;
          local_118.Yaw = pTVar14->Yaw;
          pUVar4 = (pFVar13->FootprintMaterialInterface).field0_0x0.DebugPtr;
          local_118.Roll = pTVar14->Roll;
          pUVar15 = (UWorld *)this->_padding_;
          local_1f8._s_0.X =
               (pFVar13->Location).field0_0x0._s_0.X + (this->HitLocation).field0_0x0._s_0.X +
               (this->SKMReact).LocationOffset.field0_0x0._s_0.X;
          local_1f8._s_0.Y =
               (pFVar13->Location).field0_0x0._s_0.Y + (this->HitLocation).field0_0x0._s_0.Y +
               (this->SKMReact).LocationOffset.field0_0x0._s_0.Y;
          local_1f8._s_0.Z =
               (pFVar13->Location).field0_0x0._s_0.Z + (this->HitLocation).field0_0x0._s_0.Z +
               (this->SKMReact).LocationOffset.field0_0x0._s_0.Z;
          if (pUVar15 == (UWorld *)0x0) {
            pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          }
          this_00 = UGameplayStatics::SpawnDecalAtLocation
                              ((UObject *)pUVar15,pUVar4,(TVector<double> *)&local_f8._s_0,
                               (TVector<double> *)&local_1f8._s_0,&local_118,fVar2 + fVar3);
          if ((this_00 != (UDecalComponent *)0x0) &&
             (this_01 = (UMaterialInstanceDynamic *)
                        (**(code **)(*(longlong *)this_00 + 0x640))(this_00),
             this_01 != (UMaterialInstanceDynamic *)0x0)) {
            UDecalComponent::SetFadeScreenSize(this_00,(this->SKMReact).FadeDistance);
            uVar9 = this->DetectedParticleSoundIndex;
            uVar18 = 0;
            if ((int)uVar9 < (this->ParticlesSounds).ArrayNum) {
              uVar18 = ~uVar9 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar1 = (this->ParticlesSounds).AllocatorInstance.Data +
                     (longlong)(int)uVar9 * 0xa0 + 0x8c;
            uVar6 = *(undefined8 *)pFVar1;
            uVar7 = *(undefined8 *)(pFVar1 + 8);
            pFVar16 = ::FName::FName(local_res18,L"Color");
            local_1a8._0_8_ = uVar6;
            local_1a8._8_8_ = uVar7;
            UMaterialInstanceDynamic::SetVectorParameterValue
                      (this_01,*pFVar16,(FLinearColor *)&local_1a8._s_0);
            UDecalComponent::SetFadeOut
                      (this_00,(this->SKMReact).DelayToStartFading,(this->SKMReact).FadeDuration,
                       false);
          }
        }
      }
    }
  }
  return;
}

// SetAnimation @ 14acd7cd0

void __thiscall
UWN_SKMReactComponent::SetAnimation(UWN_SKMReactComponent *this,UAnimSequenceBase *param_1)

{
  UAnimSequenceBase *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Animation).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetParticleAndSounds @ 14acd7d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UWN_SKMReactComponent::SetParticleAndSounds
          (UWN_SKMReactComponent *this,
          TArray<FWN_SKMReact_Consumer,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  int *piVar3;
  TArray<FWN_SKMReact_Particle,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FName _Src;
  FString *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  TObjectPtr<UParticleSystem>_u_0 TVar11;
  UClass *pUVar12;
  TObjectPtr<UNiagaraSystem>_u_0 TVar13;
  ulonglong uVar14;
  FSoftObjectPath *this_00;
  longlong lVar15;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [4];
  uint local_104;
  TVector4<float>_u_0 local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  TObjectPtr<UParticleSystem>_u_0 local_78;
  TObjectPtr<UNiagaraSystem>_u_0 TStack_70;
  float local_68;
  float local_64;
  undefined2 local_60;
  FLinearColor_u_0 local_5c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar4 = &this->ParticlesSounds;
  DestructItems<FWN_SKMReact_Particle,int>
            ((FWN_SKMReact_Particle *)(pTVar4->AllocatorInstance).Data,
             (this->ParticlesSounds).ArrayNum);
  piVar1 = &(this->ParticlesSounds).ArrayMax;
  (this->ParticlesSounds).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  uVar9 = _UNK_151e4ec98;
  uVar8 = ___xmm_3f666666000000000000000000000000;
  local_104 = param_1->ArrayNum;
  uVar14 = (ulonglong)(int)local_104;
  pFVar6 = (param_1->AllocatorInstance).Data;
  lVar15 = uVar14 * 0xe0;
  this_00 = (FSoftObjectPath *)(pFVar6 + 0x78);
  do {
    if (param_1->ArrayNum != (int)uVar14) {
      `TCheckedPointerIterator<FWN_SKMReact_Consumer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    pFVar2 = &this_00[-4].AssetPath.AssetName;
    if (pFVar2 == (FName *)(pFVar6 + lVar15)) {
      return;
    }
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_78.DebugPtr = (UParticleSystem *)0x0;
    TStack_70.DebugPtr = (UNiagaraSystem *)0x0;
    local_e8._8_4_ = 0;
    local_e8._12_4_ = 0;
    local_e8._16_8_ = (FScriptContainerElement *)0x0;
    local_e8._24_4_ = 0;
    local_e8._28_4_ = 0;
    local_c8._0_8_ = (FScriptContainerElement *)0x0;
    local_c8._8_8_ = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_9c = 0x80;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = (ForElementType<FSetElementId>)0x0;
    local_80 = 0;
    local_68 = 1.0;
    local_64 = 1.0;
    local_60._0_1_ = false;
    local_60._1_1_ = true;
    local_f8._0_8_ = uVar8;
    local_f8._8_8_ = uVar9;
    FLinearColor::FLinearColor((FLinearColor *)&local_5c._s_0,(TVector4<float> *)&local_f8._s_0);
    if ((FName *)local_e8 != pFVar2) {
      iVar10 = *(int *)&this_00[-4].SubPathString.Data.AllocatorInstance.Data;
      _Src = *pFVar2;
      local_e8._8_4_ = iVar10;
      if ((iVar10 == 0) && (local_e8._12_4_ == 0)) {
        local_e8._8_4_ = 0;
        local_e8._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar10,local_e8._12_4_,(ForAnyElementType *)local_e8,iVar10,
                   (int *)(local_e8 + 0xc));
        if (iVar10 != 0) {
          memcpy((void *)local_e8._0_8_,(void *)_Src,(longlong)iVar10 * 2);
        }
      }
    }
    piVar3 = &this_00[-4].SubPathString.Data.ArrayNum;
    if ((int *)(local_e8 + 0x10) != piVar3) {
      DestructItems<FString,int>((FString *)local_e8._16_8_,local_e8._24_4_);
      uVar5 = this_00[-3].AssetPath.PackageName.ComparisonIndex.Value;
      pFVar7 = *(FString **)piVar3;
      local_e8._24_4_ = uVar5;
      if ((uVar5 == 0) && (local_e8._28_4_ == 0)) {
        local_e8._24_4_ = 0;
        local_e8._28_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar5,local_e8._28_4_,(ForAnyElementType *)(local_e8 + 0x10),uVar5,
                   (int *)(local_e8 + 0x1c));
        ConstructItems<FString,FString,int>((void *)local_e8._16_8_,pFVar7,uVar5);
      }
    }
    TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)local_c8,
                (TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)&this_00[-3].AssetPath.AssetName);
    TVar11.DebugPtr =
         (UParticleSystem *)
         TPersistentObjectPtr<FSoftObjectPath>::Get
                   ((TPersistentObjectPtr<FSoftObjectPath> *)
                    &this_00[-1].SubPathString.Data.ArrayNum);
    if (TVar11.DebugPtr == (UParticleSystem *)0x0) {
      if ((this_00->AssetPath).PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
        TVar11.DebugPtr =
             (UParticleSystem *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)
                        &this_00[-1].SubPathString.Data.ArrayNum);
        goto LAB_14acd7f6a;
      }
LAB_14acd7f92:
      TVar11.DebugPtr = (UParticleSystem *)0x0;
    }
    else {
LAB_14acd7f6a:
      if (TVar11.DebugPtr == (UParticleSystem *)0x0) goto LAB_14acd7f92;
      pUVar12 = Z_Construct_UClass_UParticleSystem_NoRegister();
      iVar10 = (int)pUVar12->_padding_;
      if ((*(int *)((TVar11.DebugPtr)->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar12->_padding_)) goto LAB_14acd7f92;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar11.DebugPtr != (UParticleSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
    }
    local_78 = TVar11;
    TVar13.DebugPtr =
         (UNiagaraSystem *)
         TPersistentObjectPtr<FSoftObjectPath>::Get
                   ((TPersistentObjectPtr<FSoftObjectPath> *)(this_00 + 1));
    if (TVar13.DebugPtr == (UNiagaraSystem *)0x0) {
      if (this_00[1].AssetPath.AssetName != (FName)0x0) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&this_00[1].AssetPath.AssetName,
                   (FUObjectSerializeContext *)0x0);
        TVar13.DebugPtr =
             (UNiagaraSystem *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)(this_00 + 1));
        goto LAB_14acd7fdc;
      }
LAB_14acd8004:
      TVar13.DebugPtr = (UNiagaraSystem *)0x0;
    }
    else {
LAB_14acd7fdc:
      if (TVar13.DebugPtr == (UNiagaraSystem *)0x0) goto LAB_14acd8004;
      pUVar12 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar10 = (int)pUVar12->_padding_;
      if ((*(int *)((TVar13.DebugPtr)->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar12->_padding_)) goto LAB_14acd8004;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar13.DebugPtr != (UNiagaraSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
    }
    local_68 = (float)this_00[2].AssetPath.AssetName.ComparisonIndex.Value;
    local_64 = (float)this_00[2].AssetPath.AssetName.Number;
    local_60 = *(undefined2 *)&this_00[2].SubPathString.Data.AllocatorInstance.Data;
    local_5c._0_8_ =
         *(undefined8 *)((longlong)&this_00[2].SubPathString.Data.AllocatorInstance.Data + 4);
    local_5c._8_8_ = *(undefined8 *)&this_00[2].SubPathString.Data.ArrayMax;
    iVar10 = (this->ParticlesSounds).ArrayNum;
    TStack_70 = TVar13;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8a0,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->ParticlesSounds).ArrayNum = iVar10 + 1;
    FWN_SKMReact_Particle::FWN_SKMReact_Particle
              ((FWN_SKMReact_Particle *)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 0xa0)
               ,(FWN_SKMReact_Particle *)local_e8);
    local_80 = 0;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88);
    }
    iVar10 = SUB84(local_c8._8_8_,4);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    DestructItems<FString,int>((FString *)local_e8._16_8_,local_e8._24_4_);
    if ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._16_8_);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    uVar14 = (ulonglong)local_104;
    this_00 = this_00 + 7;
  } while( true );
}

// SetSkmReactSetting @ 14acd8180

void __thiscall
UWN_SKMReactComponent::SetSkmReactSetting
          (UWN_SKMReactComponent *this,FWN_SKMReact_AnimNotifySetting *param_1)

{
  FWN_SKMReact_AnimNotifySetting::operator=(&this->AnimNotifySetting,param_1);
  return;
}

// SpawnFootstepParticle @ 14acd81a0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UWN_SKMReactComponent::SpawnFootstepParticle(UWN_SKMReactComponent *this)

{
  undefined8 uVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UWorld *pUVar11;
  UObject *pUVar12;
  FWN_SKMReact_BoneTraceInfo *pFVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_2a8 [32];
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_218;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  TRotator<double> local_1c8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  TTransform<double> local_148;
  undefined1 local_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar9 = this->DetectedParticleSoundIndex;
  if (((-1 < (int)uVar9) && ((int)uVar9 < (this->ParticlesSounds).ArrayNum)) &&
     ((this->AnimNotifySetting).SpawnParticle != false)) {
    uVar14 = 0;
    if ((int)uVar9 < (this->ParticlesSounds).ArrayNum) {
      uVar14 = ~uVar9 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->ParticlesSounds).AllocatorInstance.Data[(longlong)(int)uVar9 * 0xa0 + 0x88] ==
        (FScriptContainerElement)0x1) {
      bVar8 = TWeakObjectPtr<UMeshComponent,FWeakObjectPtr>::UEOpEquals(&this->Mesh,(void *)0x0);
      if (bVar8) {
        return;
      }
      pUVar11 = (UWorld *)this->_padding_;
      if ((pUVar11 == (UWorld *)0x0) &&
         (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar11 == (UWorld *)0x0)) {
        return;
      }
      pUVar12 = FWeakObjectPtr::Get(&(this->Mesh).WeakPtr);
      (**(code **)(*(longlong *)pUVar12 + 0x520))(pUVar12,&local_148,this->BoneSocket,0);
      FVar2 = this->BoneSocket;
      uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(this->BoneSocketSettings).field_0x8 !=
          *(int *)&(this->BoneSocketSettings).field_0x34) {
        puVar15 = *(undefined1 **)&(this->BoneSocketSettings).field_0x40;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = &(this->BoneSocketSettings).field_0x38;
        }
        iVar10 = *(int *)(puVar15 +
                         (ulonglong)
                         (*(int *)&(this->BoneSocketSettings).field_0x48 - 1U & FVar2.Number + uVar9
                         ) * 4);
        if (iVar10 != -1) {
          lVar3 = *(longlong *)&this->BoneSocketSettings;
          do {
            if (*(FName *)((longlong)iVar10 * 0x68 + lVar3) == FVar2) {
              pFVar13 = TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
                        ::FindChecked((TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
                                       *)&this->BoneSocketSettings,this->BoneSocket);
              uVar19 = *(undefined4 *)&(pFVar13->ParticleSpawnOffset).field0_0x0;
              uVar20 = *(undefined4 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 4);
              uVar21 = *(undefined4 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 8);
              uVar22 = *(undefined4 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 0xc);
              uVar1 = *(undefined8 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 0x10);
              uVar16 = (undefined4)uVar1;
              uVar17 = (undefined4)((ulonglong)uVar1 >> 0x20);
              goto LAB_14acd835b;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x68 + 0x60 + lVar3);
          } while (iVar10 != -1);
        }
      }
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      local_1e8 = 0;
      uVar16 = 0;
      uVar17 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
LAB_14acd835b:
      uVar9 = this->DetectedParticleSoundIndex;
      uVar14 = 0;
      if ((int)uVar9 < (this->ParticlesSounds).ArrayNum) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar18 = (double)CONCAT44(uVar20,uVar19) + local_148.Translation.XY.m128d_f64[0];
      local_180 = (double)CONCAT44(uVar17,uVar16) + local_148.Translation.ZW.m128d_f64[0];
      uVar14 = this->DetectedParticleSoundIndex;
      local_1a8 = local_148.Translation.XY.m128d_f64[0];
      dStack_1a0 = local_148.Translation.XY.m128d_f64[1];
      local_168 = (double)*(float *)((this->ParticlesSounds).AllocatorInstance.Data +
                                    (longlong)(int)uVar9 * 0xa0 + 0x80);
      uVar19 = (undefined4)((ulonglong)local_168 >> 0x20);
      uVar9 = 0;
      if ((int)uVar14 < (this->ParticlesSounds).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      local_148.Translation.ZW.m128d_f64[1] = 0.0;
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(local_168,0);
      local_148.Scale3D.XY.m128d_f64[0] = local_168;
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ = uVar19;
      local_148.Translation.XY.m128d_f64[1] =
           (double)CONCAT44(uVar22,uVar21) + local_148.Translation.XY.m128d_f64[1];
      uVar20 = SUB84(local_148.Translation.XY.m128d_f64[1],0);
      uVar21 = (undefined4)((ulonglong)local_148.Translation.XY.m128d_f64[1] >> 0x20);
      local_198 = local_148.Translation.ZW.m128d_f64[0];
      local_148.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_178._8_4_ = SUB84(local_168,0);
      local_178._0_8_ = local_168;
      local_178._12_4_ = uVar19;
      local_148.Translation.XY.m128d_f64[1]._0_4_ = uVar20;
      local_148.Translation.XY.m128d_f64[0] = dVar18;
      local_148.Translation.XY.m128d_f64[1]._4_4_ = uVar21;
      local_190._8_4_ = uVar20;
      local_190._0_8_ = dVar18;
      local_190._12_4_ = uVar21;
      local_148.Translation.ZW.m128d_f64[0] = local_180;
      local_148.Scale3D.ZW.m128d_f64[0] = local_168;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UGameplayStatics::SpawnEmitterAtLocation
                (pUVar11,*(UParticleSystem **)
                          ((this->ParticlesSounds).AllocatorInstance.Data +
                          (longlong)(int)uVar14 * 0xa0 + 0x70),&local_148,true,None,true);
    }
    uVar9 = this->DetectedParticleSoundIndex;
    uVar14 = 0;
    if ((int)uVar9 < (this->ParticlesSounds).ArrayNum) {
      uVar14 = ~uVar9 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((((this->ParticlesSounds).AllocatorInstance.Data[(longlong)(int)uVar9 * 0xa0 + 0x89] ==
          (FScriptContainerElement)0x1) &&
        (bVar8 = TWeakObjectPtr<UMeshComponent,FWeakObjectPtr>::UEOpEquals(&this->Mesh,(void *)0x0),
        !bVar8)) &&
       ((pUVar11 = (UWorld *)this->_padding_, pUVar11 != (UWorld *)0x0 ||
        (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar11 != (UWorld *)0x0)))) {
      pUVar12 = FWeakObjectPtr::Get(&(this->Mesh).WeakPtr);
      (**(code **)(*(longlong *)pUVar12 + 0x520))(pUVar12,local_e8,this->BoneSocket,0);
      FVar2 = this->BoneSocket;
      uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(this->BoneSocketSettings).field_0x8 !=
          *(int *)&(this->BoneSocketSettings).field_0x34) {
        puVar15 = *(undefined1 **)&(this->BoneSocketSettings).field_0x40;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = &(this->BoneSocketSettings).field_0x38;
        }
        iVar10 = *(int *)(puVar15 +
                         (ulonglong)
                         (*(int *)&(this->BoneSocketSettings).field_0x48 - 1U & FVar2.Number + uVar9
                         ) * 4);
        if (iVar10 != -1) {
          do {
            if (*(FName *)((longlong)iVar10 * 0x68 + *(longlong *)&this->BoneSocketSettings) ==
                FVar2) {
              pFVar13 = TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
                        ::FindChecked((TMapBase<FName,FWN_SKMReact_BoneTraceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FWN_SKMReact_BoneTraceInfo,0>_>
                                       *)&this->BoneSocketSettings,this->BoneSocket);
              uVar19 = *(undefined4 *)&(pFVar13->ParticleSpawnOffset).field0_0x0;
              uVar20 = *(undefined4 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 4);
              uVar21 = *(undefined4 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 8);
              uVar22 = *(undefined4 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 0xc);
              uVar1 = *(undefined8 *)((longlong)&(pFVar13->ParticleSpawnOffset).field0_0x0 + 0x10);
              uVar16 = (undefined4)uVar1;
              uVar17 = (undefined4)((ulonglong)uVar1 >> 0x20);
              goto LAB_14acd863b;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x68 + 0x60 +
                             *(longlong *)&this->BoneSocketSettings);
          } while (iVar10 != -1);
        }
      }
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      local_1d0 = 0;
      uVar16 = 0;
      uVar17 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
LAB_14acd863b:
      uVar9 = this->DetectedParticleSoundIndex;
      uVar14 = 0;
      if ((int)uVar9 < (this->ParticlesSounds).ArrayNum) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar7 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      dVar5 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      uVar14 = this->DetectedParticleSoundIndex;
      local_160 = local_c8;
      dStack_158 = dStack_c0;
      dVar18 = (double)*(float *)((this->ParticlesSounds).AllocatorInstance.Data +
                                 (longlong)(int)uVar9 * 0xa0 + 0x84);
      uVar9 = 0;
      if ((int)uVar14 < (this->ParticlesSounds).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      local_150 = local_b8;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_238._8_4_ = SUB84(dVar18,0);
      local_238._0_8_ = dVar18;
      local_238._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      local_1c8.Pitch = dVar5;
      local_1c8.Yaw = dVar6;
      local_1c8.Roll = dVar7;
      local_238._s_0.Z = dVar18;
      local_218._s_0.X = (double)CONCAT44(uVar20,uVar19) + local_c8;
      local_218._s_0.Y = (double)CONCAT44(uVar22,uVar21) + dStack_c0;
      local_218._s_0.Z = (double)CONCAT44(uVar17,uVar16) + local_b8;
      UNiagaraFunctionLibrary::SpawnSystemAtLocation
                ((UObject *)pUVar11,
                 *(UNiagaraSystem **)
                  ((this->ParticlesSounds).AllocatorInstance.Data +
                  (longlong)(int)uVar14 * 0xa0 + 0x78),(TVector<double> *)&local_218._s_0,&local_1c8
                 ,(TVector<double> *)&local_238._s_0,true,true,None,true);
    }
  }
  return;
}

// SpawnFootstepParticleAndAudio @ 14acd8860

void __thiscall
UWN_SKMReactComponent::SpawnFootstepParticleAndAudio(UWN_SKMReactComponent *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  FString *pFVar10;
  undefined1 local_res8 [8];
  bool local_res10;
  FString local_48;
  
  local_res10 = param_1;
  LineTrace(this);
  uVar8 = 0;
  this->DetectedParticleSoundIndex = 0;
  if (0 < (this->ParticlesSounds).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ParticlesSounds).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ParticlesSounds).AllocatorInstance.Data;
      bVar4 = TWeakObjectPtr<UPhysicalMaterial,FWeakObjectPtr>::UEOpEquals
                        (&this->PhysMaterial,(void *)0x0);
      if (!bVar4) {
        pUVar6 = FWeakObjectPtr::Get(&(this->PhysMaterial).WeakPtr);
        UKismetSystemLibrary::GetDisplayName(&local_48,pUVar6);
        iVar1 = *(int *)(pFVar2 + lVar9 + 0x18);
        pFVar7 = *(FString **)(pFVar2 + lVar9 + 0x10);
        pFVar10 = pFVar7 + iVar1;
        while( true ) {
          if (*(int *)(pFVar2 + lVar9 + 0x18) != iVar1) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar7 == pFVar10) break;
          bVar4 = UKismetStringLibrary::Contains(&local_48,pFVar7,false,false);
          if (bVar4) {
            ::FString::operator=(&this->ParticleType,pFVar7);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            this->DetectedParticleSoundIndex = uVar8;
            goto LAB_14acd89eb;
          }
          pFVar7 = pFVar7 + 1;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xa0;
    } while ((int)uVar8 < (this->ParticlesSounds).ArrayNum);
  }
LAB_14acd89eb:
  SpawnFootstepParticle(this);
  SpawnSound(this,local_res10);
  OnFootprint(this);
  return;
}

// SpawnSound @ 14acd8a20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_SKMReactComponent::SpawnSound(UWN_SKMReactComponent *this,bool param_1)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  UWorld *pUVar16;
  USoundBase **ppUVar17;
  UAudioComponent *pUVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint *puVar23;
  TVector<double>_u_0 local_118;
  undefined4 uStack_100;
  int iStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  TRotator<double> local_b8 [2];
  undefined4 local_7c;
  
  if (!param_1) {
    return;
  }
  if (this->DetectedParticleSoundIndex < 0) {
    return;
  }
  if ((this->ParticlesSounds).ArrayNum <= this->DetectedParticleSoundIndex) {
    return;
  }
  pUVar16 = (UWorld *)this->_padding_;
  if ((pUVar16 == (UWorld *)0x0) &&
     (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar16 == (UWorld *)0x0)) {
    return;
  }
  uVar20 = 0;
  uVar5 = this->DetectedParticleSoundIndex;
  uVar21 = uVar20;
  if ((int)uVar5 < (this->ParticlesSounds).ArrayNum) {
    uVar21 = ~uVar5 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->ParticlesSounds).AllocatorInstance.Data;
  uVar21 = (this->AnimNotifySetting).SoundSelection;
  lVar22 = (longlong)(int)uVar5 * 0xa0;
  if (*(int *)(pFVar6 + lVar22 + 0x28) == *(int *)(pFVar6 + lVar22 + 0x54)) {
    return;
  }
  pFVar19 = *(FScriptContainerElement **)(pFVar6 + lVar22 + 0x60);
  if (*(FScriptContainerElement **)(pFVar6 + lVar22 + 0x60) == (FScriptContainerElement *)0x0) {
    pFVar19 = pFVar6 + lVar22 + 0x58;
  }
  iVar14 = *(int *)(pFVar19 + (ulonglong)(*(int *)(pFVar6 + lVar22 + 0x68) - 1U & uVar21) * 4);
  if (iVar14 == -1) {
    return;
  }
  while (*(uint *)(*(longlong *)(pFVar6 + lVar22 + 0x20) + (longlong)iVar14 * 0x18) != uVar21) {
    iVar14 = *(int *)(*(longlong *)(pFVar6 + lVar22 + 0x20) + 0x10 + (longlong)iVar14 * 0x18);
    if (iVar14 == -1) {
      return;
    }
  }
  uVar5 = this->DetectedParticleSoundIndex;
  uVar21 = 0;
  uVar15 = uVar21;
  if ((int)uVar5 < (this->ParticlesSounds).ArrayNum) {
    uVar15 = ~uVar5 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppUVar17 = TMapBase<int,USoundBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>_>
             ::FindChecked((TMapBase<int,USoundBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>_>
                            *)((this->ParticlesSounds).AllocatorInstance.Data +
                              (longlong)(int)uVar5 * 0xa0 + 0x20),
                           (this->AnimNotifySetting).SoundSelection);
  dVar12 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar10 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  if (*ppUVar17 == (USoundBase *)0x0) {
    return;
  }
  uVar5 = this->DetectedParticleSoundIndex;
  fVar2 = (this->AnimNotifySetting).PitchMultiplier;
  fVar3 = (this->AnimNotifySetting).VolumeMultiplier;
  uVar15 = uVar21;
  if ((int)uVar5 < (this->ParticlesSounds).ArrayNum) {
    uVar15 = ~uVar5 >> 0x1f;
  }
  dVar4 = (this->HitLocation).field0_0x0._s_0.Z;
  dVar8 = (this->HitLocation).field0_0x0._s_0.X;
  dVar9 = (this->HitLocation).field0_0x0._s_0.Y;
  if ((uVar15 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppUVar17 = TMapBase<int,USoundBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>_>
             ::FindChecked((TMapBase<int,USoundBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>_>
                            *)((this->ParticlesSounds).AllocatorInstance.Data +
                              (longlong)(int)uVar5 * 0xa0 + 0x20),
                           (this->AnimNotifySetting).SoundSelection);
  local_b8[0].Pitch = dVar10;
  local_b8[0].Yaw = dVar11;
  local_b8[0].Roll = dVar12;
  local_118._s_0.X = dVar8;
  local_118._s_0.Y = dVar9;
  local_118._s_0.Z = dVar4;
  pUVar18 = UGameplayStatics::SpawnSoundAtLocation
                      ((UObject *)pUVar16,*ppUVar17,(TVector<double> *)&local_118._s_0,local_b8,
                       fVar3,fVar2,0.0,(USoundAttenuation *)0x0,(USoundConcurrency *)0x0,true);
  if (pUVar18 == (UAudioComponent *)0x0) {
    return;
  }
  local_118._s_0.X = (double)&(this->AnimNotifySetting).FloatParameter;
  local_118._12_4_ = 1;
  iVar14 = *(int *)&(this->AnimNotifySetting).FloatParameter.field_0x28;
  local_118._s_0.Z = (double)&(this->AnimNotifySetting).FloatParameter.field_0x10;
  iStack_fc = 0;
  if (iVar14 != 0) {
    puVar23 = *(uint **)&(this->AnimNotifySetting).FloatParameter.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_118._s_0.Z;
    }
    uVar5 = *puVar23;
    uVar21 = 0;
    uVar20 = 0;
    while (uVar5 == 0) {
      lVar22 = (longlong)(int)uVar20;
      uVar21 = uVar21 + 0x20;
      uVar20 = uVar20 + 1;
      iStack_fc = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar20) goto LAB_14acd8db8;
      uVar5 = puVar23[lVar22 + 1];
    }
    local_118._12_4_ = -uVar5 & uVar5;
    uVar1 = (ulonglong)(uint)local_118._12_4_ * 2 + 1;
    lVar22 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iStack_fc = (uVar21 - 1) + (int)lVar22;
    if (iVar14 < iStack_fc) {
      iStack_fc = iVar14;
    }
  }
LAB_14acd8db8:
  local_118._8_4_ = uVar20;
  uStack_100 = 0xffffffff;
  uStack_f4 = local_7c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._padding_ = (longlong)local_118._s_0.Y;
  TStack_e0._28_4_ = local_7c;
  TStack_e0.BaseBitIndex = uVar21;
  local_f8 = uVar21;
  local_e8 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
             local_118._s_0.X;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118._s_0.Z;
  TStack_e0.CurrentBitIndex = iStack_fc;
  if (iStack_fc < iVar14) {
    do {
      (**(code **)(*(longlong *)&pUVar18->field_0x250 + 0x40))
                (&pUVar18->field_0x250,
                 *(undefined8 *)(*(longlong *)local_e8 + (longlong)TStack_e0.CurrentBitIndex * 0x14)
                 ,*(undefined4 *)
                   (*(longlong *)local_e8 + 8 + (longlong)TStack_e0.CurrentBitIndex * 0x14));
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
  }
  return;
}

// StaticRegisterNativesUWN_SKMReactComponent @ 14acd8eb0

void __cdecl UWN_SKMReactComponent::StaticRegisterNativesUWN_SKMReactComponent(void)

{
  return;
}

