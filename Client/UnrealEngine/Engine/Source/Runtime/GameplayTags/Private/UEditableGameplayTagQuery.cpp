// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// StaticClass @ 146ac05b0

UClass * __cdecl UEditableGameplayTagQuery::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQuery",
               &Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton,
               StaticRegisterNativesUEditableGameplayTagQuery,0x98,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UEditableGameplayTagQuery>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQuery>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton;
}

// UEditableGameplayTagQuery @ 146acc3f0

UEditableGameplayTagQuery * __thiscall
UEditableGameplayTagQuery::UEditableGameplayTagQuery
          (UEditableGameplayTagQuery *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEditableGameplayTagQuery__6B_;
  (this->UserDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDescription).Data.ArrayNum = 0;
  (this->UserDescription).Data.ArrayMax = 0;
  (this->AutoDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoDescription).Data.ArrayNum = 0;
  (this->AutoDescription).Data.ArrayMax = 0;
  (this->RootExpression).field0_0x0.DebugPtr = (UEditableGameplayTagQueryExpression *)0x0;
  (this->TagQueryExportText_Helper).TokenStreamVersion = 0;
  (this->TagQueryExportText_Helper).TagDictionary.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).TagDictionary.ArrayNum = 0;
  (this->TagQueryExportText_Helper).TagDictionary.ArrayMax = 0;
  (this->TagQueryExportText_Helper).QueryTokenStream.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).QueryTokenStream.ArrayNum = 0;
  (this->TagQueryExportText_Helper).QueryTokenStream.ArrayMax = 0;
  (this->TagQueryExportText_Helper).UserDescription.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).UserDescription.Data.ArrayNum = 0;
  (this->TagQueryExportText_Helper).UserDescription.Data.ArrayMax = 0;
  (this->TagQueryExportText_Helper).AutoDescription.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).AutoDescription.Data.ArrayNum = 0;
  (this->TagQueryExportText_Helper).AutoDescription.Data.ArrayMax = 0;
  return this;
}

// UEditableGameplayTagQuery @ 146acc460

UEditableGameplayTagQuery * __thiscall
UEditableGameplayTagQuery::UEditableGameplayTagQuery
          (UEditableGameplayTagQuery *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEditableGameplayTagQuery__6B_;
  (this->UserDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDescription).Data.ArrayNum = 0;
  (this->UserDescription).Data.ArrayMax = 0;
  (this->AutoDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoDescription).Data.ArrayNum = 0;
  (this->AutoDescription).Data.ArrayMax = 0;
  (this->RootExpression).field0_0x0.DebugPtr = (UEditableGameplayTagQueryExpression *)0x0;
  (this->TagQueryExportText_Helper).TokenStreamVersion = 0;
  (this->TagQueryExportText_Helper).TagDictionary.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).TagDictionary.ArrayNum = 0;
  (this->TagQueryExportText_Helper).TagDictionary.ArrayMax = 0;
  (this->TagQueryExportText_Helper).QueryTokenStream.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).QueryTokenStream.ArrayNum = 0;
  (this->TagQueryExportText_Helper).QueryTokenStream.ArrayMax = 0;
  (this->TagQueryExportText_Helper).UserDescription.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).UserDescription.Data.ArrayNum = 0;
  (this->TagQueryExportText_Helper).UserDescription.Data.ArrayMax = 0;
  (this->TagQueryExportText_Helper).AutoDescription.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TagQueryExportText_Helper).AutoDescription.Data.ArrayNum = 0;
  (this->TagQueryExportText_Helper).AutoDescription.Data.ArrayMax = 0;
  return this;
}

// ~UEditableGameplayTagQuery @ 146acd890

void __thiscall
UEditableGameplayTagQuery::~UEditableGameplayTagQuery(UEditableGameplayTagQuery *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQuery__6B_;
  pFVar1 = (this->TagQueryExportText_Helper).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryExportText_Helper).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryExportText_Helper).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryExportText_Helper).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146adeda0

UClass * __cdecl UEditableGameplayTagQuery::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQuery",
               &Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton,
               StaticRegisterNativesUEditableGameplayTagQuery,0x98,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UEditableGameplayTagQuery>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQuery>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton;
}

// StaticRegisterNativesUEditableGameplayTagQuery @ 146aeda80

void __cdecl UEditableGameplayTagQuery::StaticRegisterNativesUEditableGameplayTagQuery(void)

{
  return;
}

