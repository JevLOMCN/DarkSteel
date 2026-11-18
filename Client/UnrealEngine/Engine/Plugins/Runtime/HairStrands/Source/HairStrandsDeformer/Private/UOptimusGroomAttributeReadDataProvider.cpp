// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e258580

UClass * __cdecl UOptimusGroomAttributeReadDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomAttributeReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomAttributeReadDataProvider,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomAttributeReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomAttributeReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataProvider.InnerSingleton;
}

// UOptimusGroomAttributeReadDataProvider @ 14e26aa00

UOptimusGroomAttributeReadDataProvider * __thiscall
UOptimusGroomAttributeReadDataProvider::UOptimusGroomAttributeReadDataProvider
          (UOptimusGroomAttributeReadDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomAttributeReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  (this->GroomAttributeName).ComparisonIndex = 0;
  (this->GroomAttributeName).Number = 0;
  this->GroomAttributeGroup = GuidesPoints;
  this->GroomAttributeType = Float;
  return this;
}

// UOptimusGroomAttributeReadDataProvider @ 14e26aa40

UOptimusGroomAttributeReadDataProvider * __thiscall
UOptimusGroomAttributeReadDataProvider::UOptimusGroomAttributeReadDataProvider
          (UOptimusGroomAttributeReadDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomAttributeReadDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  (this->GroomAttributeName).ComparisonIndex = 0;
  (this->GroomAttributeName).Number = 0;
  this->GroomAttributeGroup = GuidesPoints;
  this->GroomAttributeType = Float;
  return this;
}

// ~UOptimusGroomAttributeReadDataProvider @ 14e26b310

void __thiscall
UOptimusGroomAttributeReadDataProvider::~UOptimusGroomAttributeReadDataProvider
          (UOptimusGroomAttributeReadDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomAttributeReadDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e282710

UClass * __cdecl UOptimusGroomAttributeReadDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomAttributeReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomAttributeReadDataProvider,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomAttributeReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomAttributeReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e2838f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomAttributeReadDataProvider::GetRenderProxy(UOptimusGroomAttributeReadDataProvider *this)

{
  FOptimusGroomAttributeReadProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x80);
  if (pFVar1 != (FOptimusGroomAttributeReadProviderProxy *)0x0) {
    pFVar1 = FOptimusGroomAttributeReadProviderProxy::FOptimusGroomAttributeReadProviderProxy
                       (pFVar1,(this->MeshComponent).field0_0x0.DebugPtr,&this->GroomAttributeName,
                        this->GroomAttributeGroup,this->GroomAttributeType);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomAttributeReadDataProvider @ 14e289740

void __cdecl
UOptimusGroomAttributeReadDataProvider::StaticRegisterNativesUOptimusGroomAttributeReadDataProvider
          (void)

{
  return;
}

