// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e10ce80

UClass * __cdecl UOptimusDuplicateVerticesDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDuplicateVerticesDataProvider",
               &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDuplicateVerticesDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDuplicateVerticesDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusDuplicateVerticesDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.InnerSingleton;
}

// UOptimusDuplicateVerticesDataProvider @ 14e159e50

UOptimusDuplicateVerticesDataProvider * __thiscall
UOptimusDuplicateVerticesDataProvider::UOptimusDuplicateVerticesDataProvider
          (UOptimusDuplicateVerticesDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDuplicateVerticesDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UOptimusDuplicateVerticesDataProvider @ 14e159e90

UOptimusDuplicateVerticesDataProvider * __thiscall
UOptimusDuplicateVerticesDataProvider::UOptimusDuplicateVerticesDataProvider
          (UOptimusDuplicateVerticesDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDuplicateVerticesDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UOptimusDuplicateVerticesDataProvider @ 14e162b50

void __thiscall
UOptimusDuplicateVerticesDataProvider::~UOptimusDuplicateVerticesDataProvider
          (UOptimusDuplicateVerticesDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusDuplicateVerticesDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d5d70

UClass * __cdecl UOptimusDuplicateVerticesDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDuplicateVerticesDataProvider",
               &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDuplicateVerticesDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDuplicateVerticesDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusDuplicateVerticesDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd0c0

FComputeDataProviderRenderProxy * __thiscall
UOptimusDuplicateVerticesDataProvider::GetRenderProxy(UOptimusDuplicateVerticesDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 == (FComputeDataProviderRenderProxy *)0x0) {
    return (FComputeDataProviderRenderProxy *)0x0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
  *pFVar1 = (FComputeDataProviderRenderProxy)&___7FOptimusDuplicateVerticesDataProviderProxy__6B_;
  if (pUVar2 != (UObject *)0x0) {
    pFVar1[1] = *(FComputeDataProviderRenderProxy *)&pUVar2[0x33].field_0x18;
    return pFVar1;
  }
  pFVar1[1] = (FComputeDataProviderRenderProxy)0x0;
  return pFVar1;
}

// StaticRegisterNativesUOptimusDuplicateVerticesDataProvider @ 14e2259d0

void __cdecl
UOptimusDuplicateVerticesDataProvider::StaticRegisterNativesUOptimusDuplicateVerticesDataProvider
          (void)

{
  return;
}

