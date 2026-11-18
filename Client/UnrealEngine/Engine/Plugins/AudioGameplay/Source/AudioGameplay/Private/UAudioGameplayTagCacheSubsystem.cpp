// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 8

// StaticClass @ 14d982310

UClass * __cdecl UAudioGameplayTagCacheSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayTagCacheSubsystem",
               &Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioGameplayTagCacheSubsystem,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioGameplayTagCacheSubsystem>,
               InternalVTableHelperCtorCaller<UAudioGameplayTagCacheSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton;
}

// UAudioGameplayTagCacheSubsystem @ 14d987cc0

UAudioGameplayTagCacheSubsystem * __thiscall
UAudioGameplayTagCacheSubsystem::UAudioGameplayTagCacheSubsystem
          (UAudioGameplayTagCacheSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioGameplayTagCacheSubsystem__6B_;
  *(undefined8 *)&this->GameplayTagCache = 0;
  *(undefined8 *)&(this->GameplayTagCache).field_0x8 = 0;
  *(undefined8 *)&(this->GameplayTagCache).field_0x20 = 0;
  *(undefined4 *)&(this->GameplayTagCache).field_0x28 = 0;
  *(undefined4 *)&(this->GameplayTagCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameplayTagCache).field_0x34 = 0;
  *(undefined4 *)&(this->GameplayTagCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GameplayTagCache).field_0x40 = 0;
  *(undefined4 *)&(this->GameplayTagCache).field_0x48 = 0;
  return this;
}

// ~UAudioGameplayTagCacheSubsystem @ 14d988780

void __thiscall
UAudioGameplayTagCacheSubsystem::~UAudioGameplayTagCacheSubsystem
          (UAudioGameplayTagCacheSubsystem *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->GameplayTagCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GameplayTagCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GameplayTagCache);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// Deinitialize @ 14d98b100

void __thiscall UAudioGameplayTagCacheSubsystem::Deinitialize(UAudioGameplayTagCacheSubsystem *this)

{
  TMapAnyKey<FGameplayTag> *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->GameplayTagCache;
  bVar3 = 1 < *(int *)&(this->GameplayTagCache).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned_int,FGameplayTag>,TDefaultMapHashableKeyFuncs<unsigned_int,FGameplayTag,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FGameplayTag>,TDefaultMapHashableKeyFuncs<unsigned_int,FGameplayTag,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->GameplayTagCache).field_0xc;
  *(undefined4 *)&(this->GameplayTagCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GameplayTagCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameplayTagCache).field_0x34 = 0;
  iVar2 = *(int *)&(this->GameplayTagCache).field_0x2c;
  *(undefined4 *)&(this->GameplayTagCache).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->GameplayTagCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GameplayTagCache).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->GameplayTagCache).field_0x48 = 1;
    TSet<TTuple<unsigned_int,FGameplayTag>,TDefaultMapHashableKeyFuncs<unsigned_int,FGameplayTag,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FGameplayTag>,TDefaultMapHashableKeyFuncs<unsigned_int,FGameplayTag,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// Get @ 14d98d0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAudioGameplayTagCacheSubsystem * __cdecl UAudioGameplayTagCacheSubsystem::Get(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UAudioGameplayTagCacheSubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UAudioGameplayTagCacheSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14d98d128;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14d98d128:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14d98d158;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14d98d158:
  pUVar5 = (UAudioGameplayTagCacheSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetPrivateStaticClass @ 14d98dea0

UClass * __cdecl UAudioGameplayTagCacheSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayTagCacheSubsystem",
               &Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioGameplayTagCacheSubsystem,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioGameplayTagCacheSubsystem>,
               InternalVTableHelperCtorCaller<UAudioGameplayTagCacheSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton;
}

// ShouldCreateSubsystem @ 14d993190

bool __thiscall
UAudioGameplayTagCacheSubsystem::ShouldCreateSubsystem
          (UAudioGameplayTagCacheSubsystem *this,UObject *param_1)

{
  bool bVar1;
  
  if (AudioGameplayTagCacheConsoleVariables::bEnabled == 0) {
    return false;
  }
  bVar1 = UWorldSubsystem::ShouldCreateSubsystem((UWorldSubsystem *)this,param_1);
  return bVar1;
}

// StaticRegisterNativesUAudioGameplayTagCacheSubsystem @ 14d9936d0

void __cdecl
UAudioGameplayTagCacheSubsystem::StaticRegisterNativesUAudioGameplayTagCacheSubsystem(void)

{
  return;
}

