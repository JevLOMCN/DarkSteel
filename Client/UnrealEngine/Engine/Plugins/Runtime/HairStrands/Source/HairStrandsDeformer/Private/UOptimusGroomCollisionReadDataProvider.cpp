// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 7

// StaticClass @ 14e258d80

UClass * __cdecl UOptimusGroomCollisionReadDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomCollisionReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomCollisionReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomCollisionReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomCollisionReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataProvider.InnerSingleton;
}

// UOptimusGroomCollisionReadDataProvider @ 14e26ab40

UOptimusGroomCollisionReadDataProvider * __thiscall
UOptimusGroomCollisionReadDataProvider::UOptimusGroomCollisionReadDataProvider
          (UOptimusGroomCollisionReadDataProvider *this,FVTableHelper *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomCollisionReadDataProvider__6B_;
  (this->SolverComponent).field0_0x0.DebugPtr = (UGroomSolverComponent *)0x0;
  return this;
}

// UOptimusGroomCollisionReadDataProvider @ 14e26ab70

UOptimusGroomCollisionReadDataProvider * __thiscall
UOptimusGroomCollisionReadDataProvider::UOptimusGroomCollisionReadDataProvider
          (UOptimusGroomCollisionReadDataProvider *this,FObjectInitializer *param_1)

{
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomCollisionReadDataProvider__6B_;
  (this->SolverComponent).field0_0x0.DebugPtr = (UGroomSolverComponent *)0x0;
  return this;
}

// ~UOptimusGroomCollisionReadDataProvider @ 14e26b370

void __thiscall
UOptimusGroomCollisionReadDataProvider::~UOptimusGroomCollisionReadDataProvider
          (UOptimusGroomCollisionReadDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomCollisionReadDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e282950

UClass * __cdecl UOptimusGroomCollisionReadDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomCollisionReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGroomCollisionReadDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomCollisionReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGroomCollisionReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e283940

FComputeDataProviderRenderProxy * __thiscall
UOptimusGroomCollisionReadDataProvider::GetRenderProxy(UOptimusGroomCollisionReadDataProvider *this)

{
  UGroomSolverComponent *pUVar1;
  FComputeDataProviderRenderProxy *pFVar2;
  
  pFVar2 = ::operator_new(0x70);
  if (pFVar2 != (FComputeDataProviderRenderProxy *)0x0) {
    pUVar1 = (this->SolverComponent).field0_0x0.DebugPtr;
    *pFVar2 = (FComputeDataProviderRenderProxy)&___7FOptimusGroomCollisionReadDataProviderProxy__6B_
    ;
    pFVar2[1] = (FComputeDataProviderRenderProxy)0x0;
    pFVar2[2] = (FComputeDataProviderRenderProxy)0x0;
    pFVar2[5] = (FComputeDataProviderRenderProxy)0x0;
    *(undefined4 *)(pFVar2 + 6) = 0;
    *(undefined4 *)&pFVar2[6].field_0x4 = 0x80;
    *(undefined4 *)(pFVar2 + 7) = 0xffffffff;
    *(undefined4 *)&pFVar2[7].field_0x4 = 0;
    pFVar2[9] = (FComputeDataProviderRenderProxy)0x0;
    *(undefined4 *)(pFVar2 + 10) = 0;
    pFVar2[0xb] = (FComputeDataProviderRenderProxy)0x0;
    pFVar2[0xc] = (FComputeDataProviderRenderProxy)0x0;
    pFVar2[0xd] = (FComputeDataProviderRenderProxy)0x0;
    if ((pUVar1 != (UGroomSolverComponent *)0x0) &&
       ((TMap<TObjectPtr<UMeshComponent>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>_>
         *)(pFVar2 + 1) != &pUVar1->CollisionComponents)) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(pFVar2 + 8),(int *)(pFVar2 + 10),
                 (ForElementType<FSetElementId> *)&(pUVar1->CollisionComponents).field_0x38,
                 *(int *)&(pUVar1->CollisionComponents).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(pFVar2 + 1),
                  (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pUVar1->CollisionComponents);
    }
    return pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusGroomCollisionReadDataProvider @ 14e289770

void __cdecl
UOptimusGroomCollisionReadDataProvider::StaticRegisterNativesUOptimusGroomCollisionReadDataProvider
          (void)

{
  return;
}

