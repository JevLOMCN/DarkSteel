// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// StaticClass @ 146ac0910

UClass * __cdecl UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllTagsMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.
                InnerSingleton,StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch
               ,0x48,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.InnerSingleton;
}

// UEditableGameplayTagQueryExpression_AllTagsMatch @ 146acc630

UEditableGameplayTagQueryExpression_AllTagsMatch * __thiscall
UEditableGameplayTagQueryExpression_AllTagsMatch::UEditableGameplayTagQueryExpression_AllTagsMatch
          (UEditableGameplayTagQueryExpression_AllTagsMatch *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AllTagsMatch__6B_;
  (this->Tags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).GameplayTags.ArrayNum = 0;
  (this->Tags).GameplayTags.ArrayMax = 0;
  (this->Tags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ParentTags.ArrayNum = 0;
  (this->Tags).ParentTags.ArrayMax = 0;
  return this;
}

// UEditableGameplayTagQueryExpression_AllTagsMatch @ 146acc670

UEditableGameplayTagQueryExpression_AllTagsMatch * __thiscall
UEditableGameplayTagQueryExpression_AllTagsMatch::UEditableGameplayTagQueryExpression_AllTagsMatch
          (UEditableGameplayTagQueryExpression_AllTagsMatch *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AllTagsMatch__6B_;
  (this->Tags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).GameplayTags.ArrayNum = 0;
  (this->Tags).GameplayTags.ArrayMax = 0;
  (this->Tags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ParentTags.ArrayNum = 0;
  (this->Tags).ParentTags.ArrayMax = 0;
  return this;
}

// ~UEditableGameplayTagQueryExpression_AllTagsMatch @ 146acd9c0

void __thiscall
UEditableGameplayTagQueryExpression_AllTagsMatch::~UEditableGameplayTagQueryExpression_AllTagsMatch
          (UEditableGameplayTagQueryExpression_AllTagsMatch *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AllTagsMatch__6B_;
  pFVar1 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146adf080

UClass * __cdecl UEditableGameplayTagQueryExpression_AllTagsMatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllTagsMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.
                InnerSingleton,StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch
               ,0x48,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.InnerSingleton;
}

// StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch @ 146aedac0

void __cdecl
UEditableGameplayTagQueryExpression_AllTagsMatch::
StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(void)

{
  return;
}

