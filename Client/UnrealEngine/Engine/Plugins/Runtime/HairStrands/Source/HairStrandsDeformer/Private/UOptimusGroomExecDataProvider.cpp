// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e258340

UClass * __cdecl UOptimusGroomExecDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomExecDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomExecDataProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomExecDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomExecDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.InnerSingleton;
}

// UOptimusGroomExecDataProvider @ 14e26ac20

UOptimusGroomExecDataProvider * __thiscall
UOptimusGroomExecDataProvider::UOptimusGroomExecDataProvider
          (UOptimusGroomExecDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->Domain = ControlPoint;
  this->_padding_ = (longlong)&___7UOptimusGroomExecDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// UOptimusGroomExecDataProvider @ 14e26ac60

UOptimusGroomExecDataProvider * __thiscall
UOptimusGroomExecDataProvider::UOptimusGroomExecDataProvider
          (UOptimusGroomExecDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->Domain = ControlPoint;
  this->_padding_ = (longlong)&___7UOptimusGroomExecDataProvider__6B_;
  (this->MeshComponent).field0_0x0.DebugPtr = (UMeshComponent *)0x0;
  return this;
}

// ~UOptimusGroomExecDataProvider @ 14e26b3b0

void __thiscall
UOptimusGroomExecDataProvider::~UOptimusGroomExecDataProvider(UOptimusGroomExecDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomExecDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e282ad0

UClass * __cdecl UOptimusGroomExecDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomExecDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomExecDataProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomExecDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomExecDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e283a10

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomExecDataProvider::GetRenderProxy(UOptimusGroomExecDataProvider *this)

{
  FOptimusGroomExecDataProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FOptimusGroomExecDataProviderProxy *)0x0) {
    pFVar1 = FOptimusGroomExecDataProviderProxy::FOptimusGroomExecDataProviderProxy
                       (pFVar1,(this->MeshComponent).field0_0x0.DebugPtr,this->Domain);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomExecDataProvider @ 14e289790

void __cdecl UOptimusGroomExecDataProvider::StaticRegisterNativesUOptimusGroomExecDataProvider(void)

{
  return;
}

