// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 6

// StaticClass @ 14a69b210

UClass * __cdecl UWN_CS_CharacterPart::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterPart",
               &Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterPart,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterPart>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterPart>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton;
}

// UWN_CS_CharacterPart @ 14a6a2430

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_CS_CharacterPart * __thiscall
UWN_CS_CharacterPart::UWN_CS_CharacterPart(UWN_CS_CharacterPart *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SlotName = Count;
  this->_padding_ = (longlong)&___7UWN_CS_CharacterPart__6B_;
  this->ResourceType = Custom;
  (this->Component).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined8 *)&this->HitSphereContainerMap = 0;
  *(undefined8 *)&(this->HitSphereContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HitSphereContainerMap).field_0x20 = 0;
  this->AttachedBoneIndex = -1;
  this->SocketIndex = -1;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HitSphereContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x48 = 0;
  *(undefined8 *)&this->ServerHitCapsuleContainerMap = 0;
  *(undefined8 *)&(this->ServerHitCapsuleContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ServerHitCapsuleContainerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerHitCapsuleContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x48 = 0;
  *(undefined8 *)&this->ColliderContainerMap = 0;
  *(undefined8 *)&(this->ColliderContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ColliderContainerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ColliderContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x48 = 0;
  return this;
}

// UWN_CS_CharacterPart @ 14a6a2520

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_CS_CharacterPart * __thiscall
UWN_CS_CharacterPart::UWN_CS_CharacterPart(UWN_CS_CharacterPart *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SlotName = Count;
  this->_padding_ = (longlong)&___7UWN_CS_CharacterPart__6B_;
  this->ResourceType = Custom;
  (this->Component).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  *(undefined8 *)&this->HitSphereContainerMap = 0;
  *(undefined8 *)&(this->HitSphereContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HitSphereContainerMap).field_0x20 = 0;
  this->AttachedBoneIndex = -1;
  this->SocketIndex = -1;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HitSphereContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x48 = 0;
  *(undefined8 *)&this->ServerHitCapsuleContainerMap = 0;
  *(undefined8 *)&(this->ServerHitCapsuleContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ServerHitCapsuleContainerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ServerHitCapsuleContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x48 = 0;
  *(undefined8 *)&this->ColliderContainerMap = 0;
  *(undefined8 *)&(this->ColliderContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ColliderContainerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ColliderContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x48 = 0;
  return this;
}

// ~UWN_CS_CharacterPart @ 14a6a2be0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_CS_CharacterPart::~UWN_CS_CharacterPart(UWN_CS_CharacterPart *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWN_CS_CharacterPart__6B_;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColliderContainerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ColliderContainerMap);
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ServerHitCapsuleContainerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ServerHitCapsuleContainerMap);
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HitSphereContainerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HitSphereContainerMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6a8b10

UClass * __cdecl UWN_CS_CharacterPart::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterPart",
               &Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton,
               StaticRegisterNativesUWN_CS_CharacterPart,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_CS_CharacterPart>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterPart>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton;
}

// StaticRegisterNativesUWN_CS_CharacterPart @ 14a6aad30

void __cdecl UWN_CS_CharacterPart::StaticRegisterNativesUWN_CS_CharacterPart(void)

{
  return;
}

