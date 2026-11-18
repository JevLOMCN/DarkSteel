// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 7

// StaticClass @ 146abf810

UClass * __cdecl URestrictedGameplayTagsList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"RestrictedGameplayTagsList",
               &Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton,
               StaticRegisterNativesURestrictedGameplayTagsList,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"GameplayTags",InternalConstructor<URestrictedGameplayTagsList>,
               InternalVTableHelperCtorCaller<URestrictedGameplayTagsList>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton;
}

// URestrictedGameplayTagsList @ 146acd2c0

URestrictedGameplayTagsList * __thiscall
URestrictedGameplayTagsList::URestrictedGameplayTagsList
          (URestrictedGameplayTagsList *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URestrictedGameplayTagsList__6B_;
  (this->ConfigFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigFileName).Data.ArrayNum = 0;
  (this->ConfigFileName).Data.ArrayMax = 0;
  (this->RestrictedGameplayTagList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestrictedGameplayTagList).ArrayNum = 0;
  (this->RestrictedGameplayTagList).ArrayMax = 0;
  return this;
}

// URestrictedGameplayTagsList @ 146acd300

URestrictedGameplayTagsList * __thiscall
URestrictedGameplayTagsList::URestrictedGameplayTagsList
          (URestrictedGameplayTagsList *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URestrictedGameplayTagsList__6B_;
  (this->ConfigFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigFileName).Data.ArrayNum = 0;
  (this->ConfigFileName).Data.ArrayMax = 0;
  (this->RestrictedGameplayTagList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestrictedGameplayTagList).ArrayNum = 0;
  (this->RestrictedGameplayTagList).ArrayMax = 0;
  return this;
}

// ~URestrictedGameplayTagsList @ 146acdf10

void __thiscall
URestrictedGameplayTagsList::~URestrictedGameplayTagsList(URestrictedGameplayTagsList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URestrictedGameplayTagsList__6B_;
  DestructItems<FRestrictedGameplayTagTableRow,int>
            ((FRestrictedGameplayTagTableRow *)
             (this->RestrictedGameplayTagList).AllocatorInstance.Data,
             (this->RestrictedGameplayTagList).ArrayNum);
  pFVar1 = (this->RestrictedGameplayTagList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfigFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146adf8a0

UClass * __cdecl URestrictedGameplayTagsList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"RestrictedGameplayTagsList",
               &Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton,
               StaticRegisterNativesURestrictedGameplayTagsList,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"GameplayTags",InternalConstructor<URestrictedGameplayTagsList>,
               InternalVTableHelperCtorCaller<URestrictedGameplayTagsList>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton;
}

// SortTags @ 146aed840

void __thiscall URestrictedGameplayTagsList::SortTags(URestrictedGameplayTagsList *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FRestrictedGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_>_>
            ((FRestrictedGameplayTagTableRow *)
             (this->RestrictedGameplayTagList).AllocatorInstance.Data,
             (this->RestrictedGameplayTagList).ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  return;
}

// StaticRegisterNativesURestrictedGameplayTagsList @ 146aedba0

void __cdecl URestrictedGameplayTagsList::StaticRegisterNativesURestrictedGameplayTagsList(void)

{
  return;
}

