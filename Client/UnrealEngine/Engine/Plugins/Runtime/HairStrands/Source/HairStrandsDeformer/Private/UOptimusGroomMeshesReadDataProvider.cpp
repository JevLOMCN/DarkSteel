// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e259080

UClass * __cdecl UOptimusGroomMeshesReadDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomMeshesReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomMeshesReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomMeshesReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomMeshesReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomMeshesReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomMeshesReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomMeshesReadDataProvider.InnerSingleton;
}

// UOptimusGroomMeshesReadDataProvider @ 14e26aea0

UOptimusGroomMeshesReadDataProvider * __thiscall
UOptimusGroomMeshesReadDataProvider::UOptimusGroomMeshesReadDataProvider
          (UOptimusGroomMeshesReadDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomMeshesReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// UOptimusGroomMeshesReadDataProvider @ 14e26aed0

UOptimusGroomMeshesReadDataProvider * __thiscall
UOptimusGroomMeshesReadDataProvider::UOptimusGroomMeshesReadDataProvider
          (UOptimusGroomMeshesReadDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomMeshesReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// ~UOptimusGroomMeshesReadDataProvider @ 14e26b470

void __thiscall
UOptimusGroomMeshesReadDataProvider::~UOptimusGroomMeshesReadDataProvider
          (UOptimusGroomMeshesReadDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomMeshesReadDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e282f50

UClass * __cdecl UOptimusGroomMeshesReadDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomMeshesReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomMeshesReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomMeshesReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomMeshesReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomMeshesReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomMeshesReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomMeshesReadDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e283ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomMeshesReadDataProvider::GetRenderProxy(UOptimusGroomMeshesReadDataProvider *this)

{
  FOptimusGroomMeshesReadDataProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x70);
  if (pFVar1 != (FOptimusGroomMeshesReadDataProviderProxy *)0x0) {
    pFVar1 = FOptimusGroomMeshesReadDataProviderProxy::FOptimusGroomMeshesReadDataProviderProxy
                       (pFVar1,(this->MeshComponent).field0_0x0.DebugPtr);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomMeshesReadDataProvider @ 14e2897f0

void __cdecl
UOptimusGroomMeshesReadDataProvider::StaticRegisterNativesUOptimusGroomMeshesReadDataProvider(void)

{
  return;
}

