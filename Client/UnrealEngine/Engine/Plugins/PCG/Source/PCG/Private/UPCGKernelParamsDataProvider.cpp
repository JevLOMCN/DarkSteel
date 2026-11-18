// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 14972a030

UClass * __cdecl UPCGKernelParamsDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGKernelParamsDataProvider",
               &Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGKernelParamsDataProvider,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGKernelParamsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGKernelParamsDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton;
}

// UPCGKernelParamsDataProvider @ 14973bce0

UPCGKernelParamsDataProvider * __thiscall
UPCGKernelParamsDataProvider::UPCGKernelParamsDataProvider
          (UPCGKernelParamsDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined ***)this = &___7UPCGKernelParamsDataProvider__6B_;
  return this;
}

// UPCGKernelParamsDataProvider @ 14973bd10

UPCGKernelParamsDataProvider * __thiscall
UPCGKernelParamsDataProvider::UPCGKernelParamsDataProvider
          (UPCGKernelParamsDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined ***)this = &___7UPCGKernelParamsDataProvider__6B_;
  return this;
}

// ~UPCGKernelParamsDataProvider @ 14973e310

void __thiscall
UPCGKernelParamsDataProvider::~UPCGKernelParamsDataProvider(UPCGKernelParamsDataProvider *this)

{
  *(undefined ***)this = &___7UPCGComputeDataProvider__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975c040

UClass * __cdecl UPCGKernelParamsDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGKernelParamsDataProvider",
               &Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGKernelParamsDataProvider,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGKernelParamsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGKernelParamsDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGKernelParamsDataProvider.InnerSingleton;
}

// StaticRegisterNativesUPCGKernelParamsDataProvider @ 149778790

void __cdecl UPCGKernelParamsDataProvider::StaticRegisterNativesUPCGKernelParamsDataProvider(void)

{
  return;
}

