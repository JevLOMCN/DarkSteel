// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 6

// StaticClass @ 146b928f0

UClass * __cdecl UTranslationUnit::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TranslationEditor",L"TranslationUnit",
               &Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton,
               StaticRegisterNativesUTranslationUnit,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UTranslationUnit>,
               InternalVTableHelperCtorCaller<UTranslationUnit>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton;
}

// UTranslationUnit @ 146b98590

UTranslationUnit * __thiscall
UTranslationUnit::UTranslationUnit(UTranslationUnit *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTranslationUnit__6B_;
  (this->Namespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Namespace).Data.ArrayNum = 0;
  (this->Namespace).Data.ArrayMax = 0;
  (this->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Key).Data.ArrayNum = 0;
  (this->Key).Data.ArrayMax = 0;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  (this->Translation).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Translation).Data.ArrayNum = 0;
  (this->Translation).Data.ArrayMax = 0;
  (this->Contexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contexts).ArrayNum = 0;
  (this->Contexts).ArrayMax = 0;
  (this->TranslationBeforeImport).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslationBeforeImport).Data.ArrayNum = 0;
  (this->TranslationBeforeImport).Data.ArrayMax = 0;
  (this->LocresPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocresPath).Data.ArrayNum = 0;
  (this->LocresPath).Data.ArrayMax = 0;
  (this->KeyMetaDataObject).Object = (FLocMetadataObject *)0x0;
  (this->KeyMetaDataObject).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->TranslationUnitPropertyChangedEvent = 0;
  *(undefined8 *)&(this->TranslationUnitPropertyChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->TranslationUnitPropertyChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->TranslationUnitPropertyChangedEvent).field_0x18 = 2;
  return this;
}

// UTranslationUnit @ 146b98630

UTranslationUnit * __thiscall
UTranslationUnit::UTranslationUnit(UTranslationUnit *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTranslationUnit__6B_;
  (this->Namespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Namespace).Data.ArrayNum = 0;
  (this->Namespace).Data.ArrayMax = 0;
  (this->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Key).Data.ArrayNum = 0;
  (this->Key).Data.ArrayMax = 0;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  (this->Translation).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Translation).Data.ArrayNum = 0;
  (this->Translation).Data.ArrayMax = 0;
  (this->Contexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contexts).ArrayNum = 0;
  (this->Contexts).ArrayMax = 0;
  (this->TranslationBeforeImport).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslationBeforeImport).Data.ArrayNum = 0;
  (this->TranslationBeforeImport).Data.ArrayMax = 0;
  (this->LocresPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocresPath).Data.ArrayNum = 0;
  (this->LocresPath).Data.ArrayMax = 0;
  (this->KeyMetaDataObject).Object = (FLocMetadataObject *)0x0;
  (this->KeyMetaDataObject).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->TranslationUnitPropertyChangedEvent = 0;
  *(undefined8 *)&(this->TranslationUnitPropertyChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->TranslationUnitPropertyChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->TranslationUnitPropertyChangedEvent).field_0x18 = 2;
  return this;
}

// ~UTranslationUnit @ 146b994e0

void __thiscall UTranslationUnit::~UTranslationUnit(UTranslationUnit *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UTranslationUnit__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TranslationUnitPropertyChangedEvent).field_0x8,
             *(int *)&(this->TranslationUnitPropertyChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->TranslationUnitPropertyChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TranslationUnitPropertyChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeyMetaDataObject).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->LocresPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TranslationBeforeImport).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FTranslationContextInfo,int>
            ((FTranslationContextInfo *)(this->Contexts).AllocatorInstance.Data,
             (this->Contexts).ArrayNum);
  pFVar2 = (this->Contexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Translation).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Source).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Key).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Namespace).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146bafa10

UClass * __cdecl UTranslationUnit::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TranslationEditor",L"TranslationUnit",
               &Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton,
               StaticRegisterNativesUTranslationUnit,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UTranslationUnit>,
               InternalVTableHelperCtorCaller<UTranslationUnit>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton;
}

// StaticRegisterNativesUTranslationUnit @ 146bc0a00

void __cdecl UTranslationUnit::StaticRegisterNativesUTranslationUnit(void)

{
  return;
}

