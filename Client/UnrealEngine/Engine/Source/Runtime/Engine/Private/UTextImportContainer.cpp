// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148875bb0

UClass * __cdecl UTextImportContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextImportContainer",
               &Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton,
               StaticRegisterNativesUTextImportContainer,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextImportContainer>,
               InternalVTableHelperCtorCaller<UTextImportContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton;
}

// UTextImportContainer @ 14887dfc0

UTextImportContainer * __thiscall
UTextImportContainer::UTextImportContainer(UTextImportContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTextImportContainer__6B_;
  (this->ResultStruct).EmbeddedFlags = TestStructDefault;
  (this->ResultStruct).TestInt = 1;
  ::FString::FString(&(this->ResultStruct).TestString,"DefaultString");
  return this;
}

// UTextImportContainer @ 14887e010

UTextImportContainer * __thiscall
UTextImportContainer::UTextImportContainer(UTextImportContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTextImportContainer__6B_;
  (this->ResultStruct).EmbeddedFlags = TestStructDefault;
  (this->ResultStruct).TestInt = 1;
  ::FString::FString(&(this->ResultStruct).TestString,"DefaultString");
  return this;
}

// ~UTextImportContainer @ 14887eec0

void __thiscall UTextImportContainer::~UTextImportContainer(UTextImportContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTextImportContainer__6B_;
  pFVar1 = (this->ResultStruct).TestString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14888f930

UClass * __cdecl UTextImportContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextImportContainer",
               &Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton,
               StaticRegisterNativesUTextImportContainer,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextImportContainer>,
               InternalVTableHelperCtorCaller<UTextImportContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextImportContainer.InnerSingleton;
}

// StaticRegisterNativesUTextImportContainer @ 14889bb30

void __cdecl UTextImportContainer::StaticRegisterNativesUTextImportContainer(void)

{
  return;
}

