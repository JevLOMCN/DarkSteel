// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e10e1b0

UClass * __cdecl UOptimusSkinnedMeshReadDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshReadDataProvider,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.InnerSingleton;
}

// UOptimusSkinnedMeshReadDataProvider @ 14e15d260

UOptimusSkinnedMeshReadDataProvider * __thiscall
UOptimusSkinnedMeshReadDataProvider::UOptimusSkinnedMeshReadDataProvider
          (UOptimusSkinnedMeshReadDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)&local_res8);
  this->InputMask = 0;
  this->LastLodIndexCachedByRenderProxy = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WeakDeformerInstance).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UOptimusSkinnedMeshReadDataProvider @ 14e15d2d0

UOptimusSkinnedMeshReadDataProvider * __thiscall
UOptimusSkinnedMeshReadDataProvider::UOptimusSkinnedMeshReadDataProvider
          (UOptimusSkinnedMeshReadDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)&local_res8);
  this->InputMask = 0;
  this->LastLodIndexCachedByRenderProxy = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WeakDeformerInstance).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UOptimusSkinnedMeshReadDataProvider @ 14e1640c0

void __thiscall
UOptimusSkinnedMeshReadDataProvider::~UOptimusSkinnedMeshReadDataProvider
          (UOptimusSkinnedMeshReadDataProvider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&___7IOptimusDeformerInstanceAccessor__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9480

UClass * __cdecl UOptimusSkinnedMeshReadDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshReadDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshReadDataProvider,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshReadDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshReadDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1df080

FComputeDataProviderRenderProxy * __thiscall
UOptimusSkinnedMeshReadDataProvider::GetRenderProxy(UOptimusSkinnedMeshReadDataProvider *this)

{
  FComputeDataProviderRenderProxy FVar1;
  code *pcVar2;
  bool bVar3;
  FComputeDataProviderRenderProxy *pFVar4;
  UObject *pUVar5;
  FComputeDataProviderRenderProxy FVar6;
  undefined1 uVar7;
  
  pFVar4 = ::operator_new(0x50);
  if (pFVar4 == (FComputeDataProviderRenderProxy *)0x0) {
    return (FComputeDataProviderRenderProxy *)0x0;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->WeakDeformerInstance).WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&(this->WeakDeformerInstance).WeakPtr);
    uVar7 = pUVar5[1].field_0x4;
  }
  else {
    uVar7 = 0;
  }
  FVar1 = (FComputeDataProviderRenderProxy)this->InputMask;
  pUVar5 = FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
  *pFVar4 = (FComputeDataProviderRenderProxy)&___7FOptimusSkinnedMeshReadDataProviderProxy__6B_;
  FVar6 = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[1] = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[2] = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[3] = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[5] = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[6] = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[7] = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[8] = (FComputeDataProviderRenderProxy)0x0;
  pFVar4[9] = (FComputeDataProviderRenderProxy)0x0;
  if (pUVar5 != (UObject *)0x0) {
    FVar6 = *(FComputeDataProviderRenderProxy *)&pUVar5[0x33].field_0x18;
  }
  pFVar4[2] = FVar1;
  *(undefined1 *)(pFVar4 + 4) = uVar7;
  pFVar4[3] = (FComputeDataProviderRenderProxy)&this->LastLodIndexCachedByRenderProxy;
  pFVar4[1] = FVar6;
  if (&this->LastLodIndexCachedByRenderProxy == (int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LastLodIndexPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinnedMeshRead.cpp"
                       ,0xba,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FComputeDataProviderRenderProxy *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// SetDeformerInstance @ 14e21de40

void __thiscall
UOptimusSkinnedMeshReadDataProvider::SetDeformerInstance
          (UOptimusSkinnedMeshReadDataProvider *this,UOptimusDeformerInstance *param_1)

{
  UOptimusDeformerInstance *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UOptimusDeformerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)((longlong)&this->_padding_ + 4),(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUOptimusSkinnedMeshReadDataProvider @ 14e225f00

void __cdecl
UOptimusSkinnedMeshReadDataProvider::StaticRegisterNativesUOptimusSkinnedMeshReadDataProvider(void)

{
  return;
}

// _getUObject @ 14e239070

UObject * __thiscall
UOptimusSkinnedMeshReadDataProvider::_getUObject(UOptimusSkinnedMeshReadDataProvider *this)

{
  return (UObject *)&this[-1]._padding_;
}

