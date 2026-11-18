// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4f5660

UClass * __cdecl ADS_MountActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_MountActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountActor",
               &Z_Registration_Info_UClass_ADS_MountActor.InnerSingleton,
               StaticRegisterNativesADS_MountActor,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_MountActor>,
               InternalVTableHelperCtorCaller<ADS_MountActor>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_MountActor.InnerSingleton;
}

// ADS_MountActor @ 14b4f7290

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_MountActor * __thiscall
ADS_MountActor::ADS_MountActor(ADS_MountActor *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_MountActor__6B_;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MountAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->MountPresetTableID = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate = 0;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~ADS_MountActor @ 14b4f82a0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_MountActor::~ADS_MountActor(ADS_MountActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ADS_MountActor__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AttachFinishDelegate).Delegate.field_0x8,
             *(int *)&(this->AttachFinishDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->AttachFinishDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AttachFinishDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActorMountedDelegate).Delegate.field_0x8,
             *(int *)&(this->OnActorMountedDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnActorMountedDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActorMountedDelegate);
  ADS_PartsSystemActor::~ADS_PartsSystemActor((ADS_PartsSystemActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f98f0

UClass * __cdecl ADS_MountActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_MountActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountActor",
               &Z_Registration_Info_UClass_ADS_MountActor.InnerSingleton,
               StaticRegisterNativesADS_MountActor,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_MountActor>,
               InternalVTableHelperCtorCaller<ADS_MountActor>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_MountActor.InnerSingleton;
}

// StaticRegisterNativesADS_MountActor @ 14b4fa760

void __cdecl ADS_MountActor::StaticRegisterNativesADS_MountActor(void)

{
  return;
}

// ADS_MountActor @ 14bc818d0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_MountActor * __thiscall
ADS_MountActor::ADS_MountActor(ADS_MountActor *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_MountActor__6B_;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MountAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->MountPresetTableID = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActorMountedDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate = 0;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->AttachFinishDelegate).Delegate.field_0x18 = 2;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

