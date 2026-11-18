// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e117bd0

UClass * __cdecl UOptimusSkinnedMeshWriteDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshWriteDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshWriteDataProvider,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshWriteDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshWriteDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.InnerSingleton;
}

// UOptimusSkinnedMeshWriteDataProvider @ 14e15d4e0

UOptimusSkinnedMeshWriteDataProvider * __thiscall
UOptimusSkinnedMeshWriteDataProvider::UOptimusSkinnedMeshWriteDataProvider
          (UOptimusSkinnedMeshWriteDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerGeometryReadbackProvider__;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)&local_res8);
  this->OutputMask = 0;
  this->LastLodIndexCachedByRenderProxy = 0;
  return this;
}

// GetPrivateStaticClass @ 14e1d9780

UClass * __cdecl UOptimusSkinnedMeshWriteDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshWriteDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshWriteDataProvider,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshWriteDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshWriteDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1df420

FComputeDataProviderRenderProxy * __thiscall
UOptimusSkinnedMeshWriteDataProvider::GetRenderProxy(UOptimusSkinnedMeshWriteDataProvider *this)

{
  bool bVar1;
  FComputeDataProviderRenderProxy FVar2;
  UObject *pUVar3;
  FComputeDataProviderRenderProxy FVar4;
  FComputeDataProviderRenderProxy FVar5;
  
  FVar2 = (FComputeDataProviderRenderProxy)::operator_new(0x50);
  FVar5 = (FComputeDataProviderRenderProxy)0x0;
  FVar4 = FVar5;
  if (FVar2 != (FComputeDataProviderRenderProxy)0x0) {
    *(undefined8 *)((longlong)FVar2 + 8) = 0;
    *(undefined ***)FVar2 = &___7FOptimusSkinnedMeshWriteDataProviderProxy__6B_;
    *(undefined8 *)((longlong)FVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x20) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x28) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x30) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x38) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x40) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x48) = 0;
    FVar4 = FVar2;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->SkinnedMesh).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
    FVar5 = *(FComputeDataProviderRenderProxy *)&pUVar3[0x33].field_0x18;
  }
  *(FComputeDataProviderRenderProxy *)((longlong)FVar4 + 8) = FVar5;
  *(ulong64 *)((longlong)FVar4 + 0x10) = this->OutputMask;
  *(int **)((longlong)FVar4 + 0x18) = &this->LastLodIndexCachedByRenderProxy;
  return (FComputeDataProviderRenderProxy *)FVar4;
}

// StaticRegisterNativesUOptimusSkinnedMeshWriteDataProvider @ 14e225f40

void __cdecl
UOptimusSkinnedMeshWriteDataProvider::StaticRegisterNativesUOptimusSkinnedMeshWriteDataProvider
          (void)

{
  return;
}

// _getUObject @ 14e2390a0

UObject * __thiscall
UOptimusSkinnedMeshWriteDataProvider::_getUObject(UOptimusSkinnedMeshWriteDataProvider *this)

{
  return (UObject *)&this[-1]._padding_;
}

