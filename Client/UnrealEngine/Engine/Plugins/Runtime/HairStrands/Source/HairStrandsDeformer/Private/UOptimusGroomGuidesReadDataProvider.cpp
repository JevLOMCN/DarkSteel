// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e258640

UClass * __cdecl UOptimusGroomGuidesReadDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomGuidesReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomGuidesReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomGuidesReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomGuidesReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomGuidesReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomGuidesReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomGuidesReadDataProvider.InnerSingleton;
}

// UOptimusGroomGuidesReadDataProvider @ 14e26ad00

UOptimusGroomGuidesReadDataProvider * __thiscall
UOptimusGroomGuidesReadDataProvider::UOptimusGroomGuidesReadDataProvider
          (UOptimusGroomGuidesReadDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomGuidesReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// UOptimusGroomGuidesReadDataProvider @ 14e26ad30

UOptimusGroomGuidesReadDataProvider * __thiscall
UOptimusGroomGuidesReadDataProvider::UOptimusGroomGuidesReadDataProvider
          (UOptimusGroomGuidesReadDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomGuidesReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// ~UOptimusGroomGuidesReadDataProvider @ 14e26b3f0

void __thiscall
UOptimusGroomGuidesReadDataProvider::~UOptimusGroomGuidesReadDataProvider
          (UOptimusGroomGuidesReadDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomGuidesReadDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e282c50

UClass * __cdecl UOptimusGroomGuidesReadDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomGuidesReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomGuidesReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomGuidesReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomGuidesReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomGuidesReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomGuidesReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomGuidesReadDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e283a50

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomGuidesReadDataProvider::GetRenderProxy(UOptimusGroomGuidesReadDataProvider *this)

{
  FOptimusGroomGuidesReadDataProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 != (FOptimusGroomGuidesReadDataProviderProxy *)0x0) {
    pFVar1 = FOptimusGroomGuidesReadDataProviderProxy::FOptimusGroomGuidesReadDataProviderProxy
                       (pFVar1,(this->MeshComponent).field0_0x0.DebugPtr);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomGuidesReadDataProvider @ 14e2897b0

void __cdecl
UOptimusGroomGuidesReadDataProvider::StaticRegisterNativesUOptimusGroomGuidesReadDataProvider(void)

{
  return;
}

