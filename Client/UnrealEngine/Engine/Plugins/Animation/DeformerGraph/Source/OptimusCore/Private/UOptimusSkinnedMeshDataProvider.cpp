// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e105710

UClass * __cdecl UOptimusSkinnedMeshDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.InnerSingleton;
}

// UOptimusSkinnedMeshDataProvider @ 14e15d180

UOptimusSkinnedMeshDataProvider * __thiscall
UOptimusSkinnedMeshDataProvider::UOptimusSkinnedMeshDataProvider
          (UOptimusSkinnedMeshDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkinnedMeshDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UOptimusSkinnedMeshDataProvider @ 14e15d1c0

UOptimusSkinnedMeshDataProvider * __thiscall
UOptimusSkinnedMeshDataProvider::UOptimusSkinnedMeshDataProvider
          (UOptimusSkinnedMeshDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkinnedMeshDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UOptimusSkinnedMeshDataProvider @ 14e164080

void __thiscall
UOptimusSkinnedMeshDataProvider::~UOptimusSkinnedMeshDataProvider
          (UOptimusSkinnedMeshDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusSkinnedMeshDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9300

UClass * __cdecl UOptimusSkinnedMeshDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1df000

FComputeDataProviderRenderProxy * __thiscall
UOptimusSkinnedMeshDataProvider::GetRenderProxy(UOptimusSkinnedMeshDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  UObject *pUVar2;
  FComputeDataProviderRenderProxy FVar3;
  
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FComputeDataProviderRenderProxy *)0x0) {
    pUVar2 = FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
    *pFVar1 = (FComputeDataProviderRenderProxy)&___7FOptimusSkinnedMeshDataProviderProxy__6B_;
    FVar3 = (FComputeDataProviderRenderProxy)0x0;
    pFVar1[2] = (FComputeDataProviderRenderProxy)0x0;
    pFVar1[3] = (FComputeDataProviderRenderProxy)0x0;
    pFVar1[4] = (FComputeDataProviderRenderProxy)0x0;
    pFVar1[5] = (FComputeDataProviderRenderProxy)0x0;
    if (pUVar2 != (UObject *)0x0) {
      FVar3 = *(FComputeDataProviderRenderProxy *)&pUVar2[0x33].field_0x18;
    }
    pFVar1[1] = FVar3;
    return pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusSkinnedMeshDataProvider @ 14e225ee0

void __cdecl
UOptimusSkinnedMeshDataProvider::StaticRegisterNativesUOptimusSkinnedMeshDataProvider(void)

{
  return;
}

