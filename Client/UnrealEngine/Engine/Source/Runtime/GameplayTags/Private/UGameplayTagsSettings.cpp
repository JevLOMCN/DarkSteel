// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// StaticClass @ 146ac0230

UClass * __cdecl UGameplayTagsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsSettings",
               &Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton,
               StaticRegisterNativesUGameplayTagsSettings,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"GameplayTags",
               InternalConstructor<UGameplayTagsSettings>,
               InternalVTableHelperCtorCaller<UGameplayTagsSettings>,local_res8,
               UGameplayTagsList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton;
}

// UGameplayTagsSettings @ 146acd0c0

UGameplayTagsSettings * __thiscall
UGameplayTagsSettings::UGameplayTagsSettings(UGameplayTagsSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTagsSettings__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ClearInvalidTags = false;
  (this->InvalidTagCharacters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidTagCharacters).Data.ArrayNum = 0;
  (this->InvalidTagCharacters).Data.ArrayMax = 0;
  (this->CategoryRemapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryRemapping).ArrayNum = 0;
  (this->CategoryRemapping).ArrayMax = 0;
  (this->GameplayTagTableList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagTableList).ArrayNum = 0;
  (this->GameplayTagTableList).ArrayMax = 0;
  (this->CommonlyReplicatedTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommonlyReplicatedTags).ArrayNum = 0;
  (this->CommonlyReplicatedTags).ArrayMax = 0;
  (this->RestrictedConfigFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestrictedConfigFiles).ArrayNum = 0;
  (this->RestrictedConfigFiles).ArrayMax = 0;
  return this;
}

// UGameplayTagsSettings @ 146acd140

UGameplayTagsSettings * __thiscall
UGameplayTagsSettings::UGameplayTagsSettings
          (UGameplayTagsSettings *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_28;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&___7UGameplayTagsSettings__6B_;
  pFVar2 = &this->InvalidTagCharacters;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ClearInvalidTags = false;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidTagCharacters).Data.ArrayNum = 0;
  (this->InvalidTagCharacters).Data.ArrayMax = 0;
  (this->CategoryRemapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryRemapping).ArrayNum = 0;
  (this->CategoryRemapping).ArrayMax = 0;
  (this->GameplayTagTableList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagTableList).ArrayNum = 0;
  (this->GameplayTagTableList).ArrayMax = 0;
  (this->CommonlyReplicatedTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommonlyReplicatedTags).ArrayNum = 0;
  (this->CommonlyReplicatedTags).ArrayMax = 0;
  (this->RestrictedConfigFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestrictedConfigFiles).ArrayNum = 0;
  (this->RestrictedConfigFiles).ArrayMax = 0;
  pFVar4 = UObject::GetDefaultConfigFilename((UObject *)this,&local_18);
  if ((FString *)plVar1 != pFVar4) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)(pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this->_padding_ = (pFVar4->Data).ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->ImportTagsFromConfig = true;
  this->WarnOnInvalidTags = true;
  this->AllowEditorTagUnloading = true;
  this->AllowGameTagUnloading = false;
  this->FastReplication = false;
  this->bDynamicReplication = false;
  ::FString::FString(&local_28,"\"\',");
  if (pFVar2 != &local_28) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->InvalidTagCharacters).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->InvalidTagCharacters).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->NumBitsForContainerSize = 6;
  this->NetIndexFirstBitSegment = 0x10;
  return this;
}

// ~UGameplayTagsSettings @ 146acde20

void __thiscall UGameplayTagsSettings::~UGameplayTagsSettings(UGameplayTagsSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGameplayTagsSettings__6B_;
  DestructItems<FRestrictedConfigInfo,int>
            ((FRestrictedConfigInfo *)(this->RestrictedConfigFiles).AllocatorInstance.Data,
             (this->RestrictedConfigFiles).ArrayNum);
  pFVar1 = (this->RestrictedConfigFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CommonlyReplicatedTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->GameplayTagTableList).AllocatorInstance.Data,
             (this->GameplayTagTableList).ArrayNum);
  pFVar1 = (this->GameplayTagTableList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameplayTagCategoryRemap,int>
            ((FGameplayTagCategoryRemap *)(this->CategoryRemapping).AllocatorInstance.Data,
             (this->CategoryRemapping).ArrayNum);
  pFVar1 = (this->CategoryRemapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InvalidTagCharacters).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGameplayTagsList__6B_;
  DestructItems<FGameplayTagTableRow,int>
            ((FGameplayTagTableRow *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146adf7e0

UClass * __cdecl UGameplayTagsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsSettings",
               &Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton,
               StaticRegisterNativesUGameplayTagsSettings,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"GameplayTags",
               InternalConstructor<UGameplayTagsSettings>,
               InternalVTableHelperCtorCaller<UGameplayTagsSettings>,local_res8,
               UGameplayTagsList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton;
}

// StaticRegisterNativesUGameplayTagsSettings @ 146aedb90

void __cdecl UGameplayTagsSettings::StaticRegisterNativesUGameplayTagsSettings(void)

{
  return;
}

