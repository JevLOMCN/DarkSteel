// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 9

// StaticClass @ 1494bde50

UClass * __cdecl UComputeDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataProvider",
               &Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton,
               StaticRegisterNativesUComputeDataProvider,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataProvider>,
               InternalVTableHelperCtorCaller<UComputeDataProvider>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton;
}

// UComputeDataProvider @ 1494c4a30

UComputeDataProvider * __thiscall
UComputeDataProvider::UComputeDataProvider(UComputeDataProvider *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UComputeDataProvider__6B_;
  return this;
}

// UComputeDataProvider @ 1494c4a60

UComputeDataProvider * __thiscall
UComputeDataProvider::UComputeDataProvider(UComputeDataProvider *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UComputeDataProvider__6B_;
  return this;
}

// ~UComputeDataProvider @ 1494c5d30

void __thiscall UComputeDataProvider::~UComputeDataProvider(UComputeDataProvider *this)

{
  *(undefined ***)this = &___7UComputeDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1494d05c0

UClass * __cdecl UComputeDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataProvider",
               &Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton,
               StaticRegisterNativesUComputeDataProvider,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataProvider>,
               InternalVTableHelperCtorCaller<UComputeDataProvider>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataProvider.InnerSingleton;
}

// GetRenderProxy @ 1494d0e20

FComputeDataProviderRenderProxy * __thiscall
UComputeDataProvider::GetRenderProxy(UComputeDataProvider *this)

{
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Initialize @ 1494d3cf0

void __thiscall
UComputeDataProvider::Initialize
          (UComputeDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  return;
}

// Reset @ 1494d6a30

void __thiscall UComputeDataProvider::Reset(UComputeDataProvider *this)

{
  return;
}

// StaticRegisterNativesUComputeDataProvider @ 1494d7e50

void __cdecl UComputeDataProvider::StaticRegisterNativesUComputeDataProvider(void)

{
  return;
}

