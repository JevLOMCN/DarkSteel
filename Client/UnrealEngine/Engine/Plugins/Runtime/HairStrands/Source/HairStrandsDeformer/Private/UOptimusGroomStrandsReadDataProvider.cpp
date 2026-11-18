// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e2587c0

UClass * __cdecl UOptimusGroomStrandsReadDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataProvider.InnerSingleton;
}

// UOptimusGroomStrandsReadDataProvider @ 14e26b0c0

UOptimusGroomStrandsReadDataProvider * __thiscall
UOptimusGroomStrandsReadDataProvider::UOptimusGroomStrandsReadDataProvider
          (UOptimusGroomStrandsReadDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomStrandsReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// UOptimusGroomStrandsReadDataProvider @ 14e26b0f0

UOptimusGroomStrandsReadDataProvider * __thiscall
UOptimusGroomStrandsReadDataProvider::UOptimusGroomStrandsReadDataProvider
          (UOptimusGroomStrandsReadDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomStrandsReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// ~UOptimusGroomStrandsReadDataProvider @ 14e26b510

void __thiscall
UOptimusGroomStrandsReadDataProvider::~UOptimusGroomStrandsReadDataProvider
          (UOptimusGroomStrandsReadDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomStrandsReadDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e283310

UClass * __cdecl UOptimusGroomStrandsReadDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e2843d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomStrandsReadDataProvider::GetRenderProxy(UOptimusGroomStrandsReadDataProvider *this)

{
  FOptimusGroomStrandsReadProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x50);
  if (pFVar1 != (FOptimusGroomStrandsReadProviderProxy *)0x0) {
    pFVar1 = FOptimusGroomStrandsReadProviderProxy::FOptimusGroomStrandsReadProviderProxy
                       (pFVar1,(this->MeshComponent).field0_0x0.DebugPtr);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomStrandsReadDataProvider @ 14e289840

void __cdecl
UOptimusGroomStrandsReadDataProvider::StaticRegisterNativesUOptimusGroomStrandsReadDataProvider
          (void)

{
  return;
}

