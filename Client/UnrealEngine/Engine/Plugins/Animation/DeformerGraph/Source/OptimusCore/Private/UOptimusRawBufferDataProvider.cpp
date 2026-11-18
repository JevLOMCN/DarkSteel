// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e10bbe0

UClass * __cdecl UOptimusRawBufferDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusRawBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusRawBufferDataProvider,0xb8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusRawBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusRawBufferDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.InnerSingleton;
}

// UOptimusRawBufferDataProvider @ 14e15c7f0

UOptimusRawBufferDataProvider * __thiscall
UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
          (UOptimusRawBufferDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataProvider__6B_;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ComponentSource).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ComponentSource).WeakPtr,(FObjectPtr)&local_res8);
  this->ElementStride = 4;
  this->RawStride = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  *(undefined4 *)&(this->DataDomainExpressionParseResult)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->DataDomainExpressionParseResult)._padding_ + 4) = 8;
  (this->DataDomainExpressionParseResult).TypeIndex = '\0';
  return this;
}

// UOptimusRawBufferDataProvider @ 14e15c8a0

UOptimusRawBufferDataProvider * __thiscall
UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
          (UOptimusRawBufferDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataProvider__6B_;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ComponentSource).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ComponentSource).WeakPtr,(FObjectPtr)&local_res8);
  this->ElementStride = 4;
  this->RawStride = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  (this->DataDomainExpressionParseResult)._padding_ = 0;
  *(undefined4 *)&(this->DataDomainExpressionParseResult)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->DataDomainExpressionParseResult)._padding_ + 4) = 8;
  (this->DataDomainExpressionParseResult).TypeIndex = '\0';
  return this;
}

// ~UOptimusRawBufferDataProvider @ 14e163d40

void __thiscall
UOptimusRawBufferDataProvider::~UOptimusRawBufferDataProvider(UOptimusRawBufferDataProvider *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataProvider__6B_;
  uVar3 = (ulonglong)(this->DataDomainExpressionParseResult).TypeIndex;
  if (1 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&this->DataDomainExpressionParseResult);
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetLodAndInvocationElementCounts @ 14e1c90b0

bool __thiscall
UOptimusRawBufferDataProvider::GetLodAndInvocationElementCounts
          (UOptimusRawBufferDataProvider *this,int *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->ComponentSource).WeakPtr);
  if ((pUVar3 != (UObject *)0x0) &&
     (pUVar4 = FWeakObjectPtr::Get(&(this->Component).WeakPtr), pUVar4 != (UObject *)0x0)) {
    iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2d0))(pUVar3,pUVar4);
    *param_1 = iVar2;
    bVar1 = Optimus::EvaluateExecutionDomainExpressionParseResult
                      (&this->DataDomainExpressionParseResult,
                       (TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>)
                       (this->ComponentSource).WeakPtr,
                       (TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr>)
                       (this->Component).WeakPtr,param_2);
    return bVar1;
  }
  return false;
}

// GetPrivateStaticClass @ 14e1d88a0

UClass * __cdecl UOptimusRawBufferDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusRawBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusRawBufferDataProvider,0xb8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusRawBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusRawBufferDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusRawBufferDataProvider @ 14e225e00

void __cdecl UOptimusRawBufferDataProvider::StaticRegisterNativesUOptimusRawBufferDataProvider(void)

{
  return;
}

