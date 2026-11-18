// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e258b80

UClass * __cdecl UOptimusGroomGuidesWriteDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomGuidesWriteDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomGuidesWriteDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomGuidesWriteDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomGuidesWriteDataProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomGuidesWriteDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomGuidesWriteDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomGuidesWriteDataProvider.InnerSingleton;
}

// UOptimusGroomGuidesWriteDataProvider @ 14e26adc0

UOptimusGroomGuidesWriteDataProvider * __thiscall
UOptimusGroomGuidesWriteDataProvider::UOptimusGroomGuidesWriteDataProvider
          (UOptimusGroomGuidesWriteDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomGuidesWriteDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  this->OutputMask = 0;
  return this;
}

// UOptimusGroomGuidesWriteDataProvider @ 14e26ae00

UOptimusGroomGuidesWriteDataProvider * __thiscall
UOptimusGroomGuidesWriteDataProvider::UOptimusGroomGuidesWriteDataProvider
          (UOptimusGroomGuidesWriteDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomGuidesWriteDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  this->OutputMask = 0;
  return this;
}

// ~UOptimusGroomGuidesWriteDataProvider @ 14e26b430

void __thiscall
UOptimusGroomGuidesWriteDataProvider::~UOptimusGroomGuidesWriteDataProvider
          (UOptimusGroomGuidesWriteDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomGuidesWriteDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e282dd0

UClass * __cdecl UOptimusGroomGuidesWriteDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomGuidesWriteDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomGuidesWriteDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomGuidesWriteDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomGuidesWriteDataProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomGuidesWriteDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomGuidesWriteDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomGuidesWriteDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e283a90

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomGuidesWriteDataProvider::GetRenderProxy(UOptimusGroomGuidesWriteDataProvider *this)

{
  FOptimusGroomGuidesWriteProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FOptimusGroomGuidesWriteProviderProxy *)0x0) {
    pFVar1 = FOptimusGroomGuidesWriteProviderProxy::FOptimusGroomGuidesWriteProviderProxy
                       (pFVar1,(this->MeshComponent).field0_0x0.DebugPtr,this->OutputMask);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomGuidesWriteDataProvider @ 14e2897d0

void __cdecl
UOptimusGroomGuidesWriteDataProvider::StaticRegisterNativesUOptimusGroomGuidesWriteDataProvider
          (void)

{
  return;
}

