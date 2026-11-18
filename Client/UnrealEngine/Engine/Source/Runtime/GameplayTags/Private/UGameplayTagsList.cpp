// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 7

// StaticClass @ 146abe690

UClass * __cdecl UGameplayTagsList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsList",
               &Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton,
               StaticRegisterNativesUGameplayTagsList,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"GameplayTagsList",InternalConstructor<UGameplayTagsList>,
               InternalVTableHelperCtorCaller<UGameplayTagsList>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton;
}

// UGameplayTagsList @ 146acca10

UGameplayTagsList * __thiscall
UGameplayTagsList::UGameplayTagsList(UGameplayTagsList *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTagsList__6B_;
  (this->ConfigFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigFileName).Data.ArrayNum = 0;
  (this->ConfigFileName).Data.ArrayMax = 0;
  (this->GameplayTagRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagRedirects).ArrayNum = 0;
  (this->GameplayTagRedirects).ArrayMax = 0;
  (this->GameplayTagList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagList).ArrayNum = 0;
  (this->GameplayTagList).ArrayMax = 0;
  return this;
}

// UGameplayTagsList @ 146acca60

UGameplayTagsList * __thiscall
UGameplayTagsList::UGameplayTagsList(UGameplayTagsList *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTagsList__6B_;
  (this->ConfigFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigFileName).Data.ArrayNum = 0;
  (this->ConfigFileName).Data.ArrayMax = 0;
  (this->GameplayTagRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagRedirects).ArrayNum = 0;
  (this->GameplayTagRedirects).ArrayMax = 0;
  (this->GameplayTagList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagList).ArrayNum = 0;
  (this->GameplayTagList).ArrayMax = 0;
  return this;
}

// ~UGameplayTagsList @ 146acdbd0

void __thiscall UGameplayTagsList::~UGameplayTagsList(UGameplayTagsList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGameplayTagsList__6B_;
  DestructItems<FGameplayTagTableRow,int>
            ((FGameplayTagTableRow *)(this->GameplayTagList).AllocatorInstance.Data,
             (this->GameplayTagList).ArrayNum);
  pFVar1 = (this->GameplayTagList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTagRedirects).AllocatorInstance.Data;
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

// GetPrivateStaticClass @ 146adf680

UClass * __cdecl UGameplayTagsList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsList",
               &Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton,
               StaticRegisterNativesUGameplayTagsList,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"GameplayTagsList",InternalConstructor<UGameplayTagsList>,
               InternalVTableHelperCtorCaller<UGameplayTagsList>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton;
}

// SortTags @ 146aed810

void __thiscall UGameplayTagsList::SortTags(UGameplayTagsList *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_>_>
            ((FGameplayTagTableRow *)(this->GameplayTagList).AllocatorInstance.Data,
             (this->GameplayTagList).ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  return;
}

// StaticRegisterNativesUGameplayTagsList @ 146aedb70

void __cdecl UGameplayTagsList::StaticRegisterNativesUGameplayTagsList(void)

{
  return;
}

