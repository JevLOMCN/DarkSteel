// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b8e70

UClass * __cdecl UPlayerMappableKeySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerMappableKeySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"PlayerMappableKeySettings",
               &Z_Registration_Info_UClass_UPlayerMappableKeySettings.InnerSingleton,
               StaticRegisterNativesUPlayerMappableKeySettings,0x88,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPlayerMappableKeySettings>,
               InternalVTableHelperCtorCaller<UPlayerMappableKeySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerMappableKeySettings.InnerSingleton;
}

// UPlayerMappableKeySettings @ 14a6cdd20

UPlayerMappableKeySettings * __thiscall
UPlayerMappableKeySettings::UPlayerMappableKeySettings
          (UPlayerMappableKeySettings *this,FVTableHelper *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlayerMappableKeySettings__6B_;
  (this->Metadata).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  FText::FText(&this->DisplayName);
  pFVar2 = FText::GetEmpty();
  (this->DisplayCategory).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (this->DisplayCategory).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->DisplayCategory).Flags = pFVar2->Flags;
  (this->SupportedKeyProfiles).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedKeyProfiles).GameplayTags.ArrayNum = 0;
  (this->SupportedKeyProfiles).GameplayTags.ArrayMax = 0;
  (this->SupportedKeyProfiles).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedKeyProfiles).ParentTags.ArrayNum = 0;
  (this->SupportedKeyProfiles).ParentTags.ArrayMax = 0;
  (this->SupportedKeyProfileIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedKeyProfileIds).ArrayNum = 0;
  (this->SupportedKeyProfileIds).ArrayMax = 0;
  return this;
}

// UPlayerMappableKeySettings @ 14a6cddc0

UPlayerMappableKeySettings * __thiscall
UPlayerMappableKeySettings::UPlayerMappableKeySettings
          (UPlayerMappableKeySettings *this,FObjectInitializer *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlayerMappableKeySettings__6B_;
  (this->Metadata).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  FText::FText(&this->DisplayName);
  pFVar2 = FText::GetEmpty();
  (this->DisplayCategory).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (this->DisplayCategory).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->DisplayCategory).Flags = pFVar2->Flags;
  (this->SupportedKeyProfiles).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedKeyProfiles).GameplayTags.ArrayNum = 0;
  (this->SupportedKeyProfiles).GameplayTags.ArrayMax = 0;
  (this->SupportedKeyProfiles).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedKeyProfiles).ParentTags.ArrayNum = 0;
  (this->SupportedKeyProfiles).ParentTags.ArrayMax = 0;
  (this->SupportedKeyProfileIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedKeyProfileIds).ArrayNum = 0;
  (this->SupportedKeyProfileIds).ArrayMax = 0;
  return this;
}

// ~UPlayerMappableKeySettings @ 14a6cfca0

void __thiscall
UPlayerMappableKeySettings::~UPlayerMappableKeySettings(UPlayerMappableKeySettings *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UPlayerMappableKeySettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->SupportedKeyProfileIds).AllocatorInstance.Data,
             (this->SupportedKeyProfileIds).ArrayNum);
  pFVar1 = (this->SupportedKeyProfileIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SupportedKeyProfiles).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SupportedKeyProfiles).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DisplayCategory).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetMappingName @ 14a6dfce0

FName __thiscall UPlayerMappableKeySettings::GetMappingName(UPlayerMappableKeySettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetPrivateStaticClass @ 14a6e24f0

UClass * __cdecl UPlayerMappableKeySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerMappableKeySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"PlayerMappableKeySettings",
               &Z_Registration_Info_UClass_UPlayerMappableKeySettings.InnerSingleton,
               StaticRegisterNativesUPlayerMappableKeySettings,0x88,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPlayerMappableKeySettings>,
               InternalVTableHelperCtorCaller<UPlayerMappableKeySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerMappableKeySettings.InnerSingleton;
}

// MakeMappingName @ 14a6e6680

FName __thiscall
UPlayerMappableKeySettings::MakeMappingName
          (UPlayerMappableKeySettings *this,FEnhancedActionKeyMapping *param_1)

{
  (**(code **)(this->_padding_ + 0x2b8))();
  return (FName)param_1;
}

// StaticRegisterNativesUPlayerMappableKeySettings @ 14a6fb820

void __cdecl UPlayerMappableKeySettings::StaticRegisterNativesUPlayerMappableKeySettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

