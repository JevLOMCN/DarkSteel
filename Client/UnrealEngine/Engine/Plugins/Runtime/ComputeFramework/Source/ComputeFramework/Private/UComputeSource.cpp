// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 8

// StaticClass @ 1494bda30

UClass * __cdecl UComputeSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeSource",
               &Z_Registration_Info_UClass_UComputeSource.InnerSingleton,
               StaticRegisterNativesUComputeSource,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeSource>,
               InternalVTableHelperCtorCaller<UComputeSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeSource.InnerSingleton;
}

// UComputeSource @ 1494c4fc0

UComputeSource * __thiscall
UComputeSource::UComputeSource(UComputeSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeSource__6B_;
  (this->AdditionalSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSources).ArrayNum = 0;
  (this->AdditionalSources).ArrayMax = 0;
  return this;
}

// UComputeSource @ 1494c5000

UComputeSource * __thiscall
UComputeSource::UComputeSource(UComputeSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeSource__6B_;
  (this->AdditionalSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSources).ArrayNum = 0;
  (this->AdditionalSources).ArrayMax = 0;
  return this;
}

// ~UComputeSource @ 1494c5fb0

void __thiscall UComputeSource::~UComputeSource(UComputeSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UComputeSource__6B_;
  pFVar1 = (this->AdditionalSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1494d0ac0

UClass * __cdecl UComputeSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeSource",
               &Z_Registration_Info_UClass_UComputeSource.InnerSingleton,
               StaticRegisterNativesUComputeSource,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeSource>,
               InternalVTableHelperCtorCaller<UComputeSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeSource.InnerSingleton;
}

// GetSource @ 1494d1830

FString * __thiscall UComputeSource::GetSource(UComputeSource *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVirtualPath @ 1494d34f0

FString * __thiscall
UComputeSource::GetVirtualPath(UComputeSource *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"/Engine/Generated/%s.ush");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUComputeSource @ 1494d7ef0

void __cdecl UComputeSource::StaticRegisterNativesUComputeSource(void)

{
  return;
}

