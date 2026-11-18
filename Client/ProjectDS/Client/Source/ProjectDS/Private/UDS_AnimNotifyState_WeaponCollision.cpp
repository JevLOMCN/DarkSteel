// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b416ab0

UClass * __cdecl UDS_AnimNotifyState_WeaponCollision::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_WeaponCollision.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_WeaponCollision",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_WeaponCollision.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_WeaponCollision,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_WeaponCollision>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_WeaponCollision>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_WeaponCollision.InnerSingleton;
}

// UDS_AnimNotifyState_WeaponCollision @ 14b41b160

UDS_AnimNotifyState_WeaponCollision * __thiscall
UDS_AnimNotifyState_WeaponCollision::UDS_AnimNotifyState_WeaponCollision
          (UDS_AnimNotifyState_WeaponCollision *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_WeaponCollision__6B_;
  (this->CollectedNotifyState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectedNotifyState).ArrayNum = 0;
  (this->CollectedNotifyState).ArrayMax = 0;
  return this;
}

// ~UDS_AnimNotifyState_WeaponCollision @ 14b41bad0

void __thiscall
UDS_AnimNotifyState_WeaponCollision::~UDS_AnimNotifyState_WeaponCollision
          (UDS_AnimNotifyState_WeaponCollision *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_WeaponCollision__6B_;
  pFVar1 = (this->CollectedNotifyState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d550

UClass * __cdecl UDS_AnimNotifyState_WeaponCollision::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_WeaponCollision.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_WeaponCollision",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_WeaponCollision.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_WeaponCollision,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_WeaponCollision>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_WeaponCollision>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_WeaponCollision.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotifyState_WeaponCollision @ 14b41e1d0

void __cdecl
UDS_AnimNotifyState_WeaponCollision::StaticRegisterNativesUDS_AnimNotifyState_WeaponCollision(void)

{
  return;
}

// UDS_AnimNotifyState_WeaponCollision @ 14b8b2110

UDS_AnimNotifyState_WeaponCollision * __thiscall
UDS_AnimNotifyState_WeaponCollision::UDS_AnimNotifyState_WeaponCollision
          (UDS_AnimNotifyState_WeaponCollision *this,FObjectInitializer *param_1)

{
  UDS_AnimNotifyState::UDS_AnimNotifyState((UDS_AnimNotifyState *)this,param_1);
  this->NotUseDuplicate = true;
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_WeaponCollision__6B_;
  (this->CollectedNotifyState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectedNotifyState).ArrayNum = 0;
  (this->CollectedNotifyState).ArrayMax = 0;
  return this;
}

// NotifyBegin @ 14b8d39d0

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
UDS_AnimNotifyState_WeaponCollision::NotifyBegin
          (UDS_AnimNotifyState_WeaponCollision *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// NotifyEnd @ 14b8d3e20

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
UDS_AnimNotifyState_WeaponCollision::NotifyEnd
          (UDS_AnimNotifyState_WeaponCollision *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

