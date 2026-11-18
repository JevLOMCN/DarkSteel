// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e11ad50

UClass * __cdecl UOptimusKernelSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusKernelSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusKernelSource",
               &Z_Registration_Info_UClass_UOptimusKernelSource.InnerSingleton,
               StaticRegisterNativesUOptimusKernelSource,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusKernelSource>,
               InternalVTableHelperCtorCaller<UOptimusKernelSource>,local_res8,
               UComputeKernelSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusKernelSource.InnerSingleton;
}

// UOptimusKernelSource @ 14e15a490

UOptimusKernelSource * __thiscall
UOptimusKernelSource::UOptimusKernelSource(UOptimusKernelSource *this,FVTableHelper *param_1)

{
  UComputeKernelSource::UComputeKernelSource((UComputeKernelSource *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusKernelSource__6B_;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  return this;
}

// UOptimusKernelSource @ 14e15a4d0

UOptimusKernelSource * __thiscall
UOptimusKernelSource::UOptimusKernelSource(UOptimusKernelSource *this,FObjectInitializer *param_1)

{
  UComputeKernelSource::UComputeKernelSource((UComputeKernelSource *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusKernelSource__6B_;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  return this;
}

// ~UOptimusKernelSource @ 14e162da0

void __thiscall UOptimusKernelSource::~UOptimusKernelSource(UOptimusKernelSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusKernelSource__6B_;
  pFVar1 = (this->Source).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UComputeKernelSource::~UComputeKernelSource((UComputeKernelSource *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d64f0

UClass * __cdecl UOptimusKernelSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusKernelSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusKernelSource",
               &Z_Registration_Info_UClass_UOptimusKernelSource.InnerSingleton,
               StaticRegisterNativesUOptimusKernelSource,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusKernelSource>,
               InternalVTableHelperCtorCaller<UOptimusKernelSource>,local_res8,
               UComputeKernelSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusKernelSource.InnerSingleton;
}

// GetSource @ 14e1e3d50

FString * __thiscall
UOptimusKernelSource::GetSource(UOptimusKernelSource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Source);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUOptimusKernelSource @ 14e225aa0

void __cdecl UOptimusKernelSource::StaticRegisterNativesUOptimusKernelSource(void)

{
  return;
}

