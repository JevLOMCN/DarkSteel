// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// StaticClass @ 146ac0b10

UClass * __cdecl UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoTagsMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.
                InnerSingleton,StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch,
               0x48,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_NoTagsMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoTagsMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.InnerSingleton;
}

// UEditableGameplayTagQueryExpression_NoTagsMatch @ 146acc8b0

UEditableGameplayTagQueryExpression_NoTagsMatch * __thiscall
UEditableGameplayTagQueryExpression_NoTagsMatch::UEditableGameplayTagQueryExpression_NoTagsMatch
          (UEditableGameplayTagQueryExpression_NoTagsMatch *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_NoTagsMatch__6B_;
  (this->Tags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).GameplayTags.ArrayNum = 0;
  (this->Tags).GameplayTags.ArrayMax = 0;
  (this->Tags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ParentTags.ArrayNum = 0;
  (this->Tags).ParentTags.ArrayMax = 0;
  return this;
}

// UEditableGameplayTagQueryExpression_NoTagsMatch @ 146acc8f0

UEditableGameplayTagQueryExpression_NoTagsMatch * __thiscall
UEditableGameplayTagQueryExpression_NoTagsMatch::UEditableGameplayTagQueryExpression_NoTagsMatch
          (UEditableGameplayTagQueryExpression_NoTagsMatch *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_NoTagsMatch__6B_;
  (this->Tags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).GameplayTags.ArrayNum = 0;
  (this->Tags).GameplayTags.ArrayMax = 0;
  (this->Tags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ParentTags.ArrayNum = 0;
  (this->Tags).ParentTags.ArrayMax = 0;
  return this;
}

// ~UEditableGameplayTagQueryExpression_NoTagsMatch @ 146acdb30

void __thiscall
UEditableGameplayTagQueryExpression_NoTagsMatch::~UEditableGameplayTagQueryExpression_NoTagsMatch
          (UEditableGameplayTagQueryExpression_NoTagsMatch *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_NoTagsMatch__6B_;
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

// GetPrivateStaticClass @ 146adf440

UClass * __cdecl UEditableGameplayTagQueryExpression_NoTagsMatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoTagsMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.
                InnerSingleton,StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch,
               0x48,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_NoTagsMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoTagsMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.InnerSingleton;
}

// StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch @ 146aedb10

void __cdecl
UEditableGameplayTagQueryExpression_NoTagsMatch::
StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(void)

{
  return;
}

