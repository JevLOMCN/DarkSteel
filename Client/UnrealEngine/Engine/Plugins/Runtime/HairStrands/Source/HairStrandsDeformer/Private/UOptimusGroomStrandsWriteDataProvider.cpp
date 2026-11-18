// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e258f00

UClass * __cdecl UOptimusGroomStrandsWriteDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsWriteDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsWriteDataProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsWriteDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsWriteDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataProvider.InnerSingleton;
}

// UOptimusGroomStrandsWriteDataProvider @ 14e26b180

UOptimusGroomStrandsWriteDataProvider * __thiscall
UOptimusGroomStrandsWriteDataProvider::UOptimusGroomStrandsWriteDataProvider
          (UOptimusGroomStrandsWriteDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomStrandsWriteDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  this->OutputMask = 0;
  return this;
}

// UOptimusGroomStrandsWriteDataProvider @ 14e26b1c0

UOptimusGroomStrandsWriteDataProvider * __thiscall
UOptimusGroomStrandsWriteDataProvider::UOptimusGroomStrandsWriteDataProvider
          (UOptimusGroomStrandsWriteDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomStrandsWriteDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  this->OutputMask = 0;
  return this;
}

// ~UOptimusGroomStrandsWriteDataProvider @ 14e26b550

void __thiscall
UOptimusGroomStrandsWriteDataProvider::~UOptimusGroomStrandsWriteDataProvider
          (UOptimusGroomStrandsWriteDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomStrandsWriteDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e283490

UClass * __cdecl UOptimusGroomStrandsWriteDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsWriteDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsWriteDataProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsWriteDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsWriteDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e284410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomStrandsWriteDataProvider::GetRenderProxy(UOptimusGroomStrandsWriteDataProvider *this)

{
  FOptimusGroomStrandsWriteProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x48);
  if (pFVar1 != (FOptimusGroomStrandsWriteProviderProxy *)0x0) {
    pFVar1 = FOptimusGroomStrandsWriteProviderProxy::FOptimusGroomStrandsWriteProviderProxy
                       (pFVar1,(this->MeshComponent).field0_0x0.DebugPtr,this->OutputMask);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomStrandsWriteDataProvider @ 14e289860

void __cdecl
UOptimusGroomStrandsWriteDataProvider::StaticRegisterNativesUOptimusGroomStrandsWriteDataProvider
          (void)

{
  return;
}

