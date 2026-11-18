// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147513b80

UClass * __cdecl UAnalysisProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnalysisProperties",
               &Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton,
               StaticRegisterNativesUAnalysisProperties,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnalysisProperties>,
               InternalVTableHelperCtorCaller<UAnalysisProperties>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton;
}

// UAnalysisProperties @ 147531e10

UAnalysisProperties * __thiscall
UAnalysisProperties::UAnalysisProperties(UAnalysisProperties *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnalysisProperties__6B_;
  ::FString::FString(&this->Function,L"None");
  return this;
}

// UAnalysisProperties @ 147531e50

UAnalysisProperties * __thiscall
UAnalysisProperties::UAnalysisProperties(UAnalysisProperties *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnalysisProperties__6B_;
  ::FString::FString(&this->Function,L"None");
  return this;
}

// ~UAnalysisProperties @ 147533970

void __thiscall UAnalysisProperties::~UAnalysisProperties(UAnalysisProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnalysisProperties__6B_;
  pFVar1 = (this->Function).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14755e860

UClass * __cdecl UAnalysisProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnalysisProperties",
               &Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton,
               StaticRegisterNativesUAnalysisProperties,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnalysisProperties>,
               InternalVTableHelperCtorCaller<UAnalysisProperties>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnalysisProperties.InnerSingleton;
}

// InitializeFromCache @ 147565d30

void __thiscall
UAnalysisProperties::InitializeFromCache
          (UAnalysisProperties *this,TObjectPtr<UCachedAnalysisProperties> param_1)

{
  return;
}

// MakeCache @ 14756b800

void __thiscall
UAnalysisProperties::MakeCache
          (UAnalysisProperties *this,TObjectPtr<UCachedAnalysisProperties> *param_1,
          UBlendSpace *param_2)

{
  return;
}

// StaticRegisterNativesUAnalysisProperties @ 14757abd0

void __cdecl UAnalysisProperties::StaticRegisterNativesUAnalysisProperties(void)

{
  return;
}

