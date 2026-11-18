// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 8

// StaticClass @ 14e1078c0

UClass * __cdecl UOptimusCustomComputeKernelDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusCustomComputeKernelDataProvider",
               &Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusCustomComputeKernelDataProvider,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusCustomComputeKernelDataProvider>
               ,InternalVTableHelperCtorCaller<UOptimusCustomComputeKernelDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.InnerSingleton;
}

// UOptimusCustomComputeKernelDataProvider @ 14e158d70

UOptimusCustomComputeKernelDataProvider * __thiscall
UOptimusCustomComputeKernelDataProvider::UOptimusCustomComputeKernelDataProvider
          (UOptimusCustomComputeKernelDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusCustomComputeKernelDataProvider__6B_;
  (this->WeakComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WeakComponent).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->WeakComponentSource).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WeakComponentSource).WeakPtr,(FObjectPtr)&local_res8);
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  *(undefined4 *)&(this->ParseResult)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ParseResult)._padding_ + 4) = 8;
  (this->ParseResult).TypeIndex = '\0';
  return this;
}

// UOptimusCustomComputeKernelDataProvider @ 14e158e10

UOptimusCustomComputeKernelDataProvider * __thiscall
UOptimusCustomComputeKernelDataProvider::UOptimusCustomComputeKernelDataProvider
          (UOptimusCustomComputeKernelDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusCustomComputeKernelDataProvider__6B_;
  (this->WeakComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->WeakComponent).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->WeakComponentSource).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WeakComponentSource).WeakPtr,(FObjectPtr)&local_res8);
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  (this->ParseResult)._padding_ = 0;
  *(undefined4 *)&(this->ParseResult)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ParseResult)._padding_ + 4) = 8;
  (this->ParseResult).TypeIndex = '\0';
  return this;
}

// ~UOptimusCustomComputeKernelDataProvider @ 14e1625d0

void __thiscall
UOptimusCustomComputeKernelDataProvider::~UOptimusCustomComputeKernelDataProvider
          (UOptimusCustomComputeKernelDataProvider *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  this->_padding_ = (longlong)&___7UOptimusCustomComputeKernelDataProvider__6B_;
  uVar3 = (ulonglong)(this->ParseResult).TypeIndex;
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
              ::__l2::Destructors)[uVar3])(&this->ParseResult);
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d53b0

UClass * __cdecl UOptimusCustomComputeKernelDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusCustomComputeKernelDataProvider",
               &Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusCustomComputeKernelDataProvider,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusCustomComputeKernelDataProvider>
               ,InternalVTableHelperCtorCaller<UOptimusCustomComputeKernelDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dcf80

FComputeDataProviderRenderProxy * __thiscall
UOptimusCustomComputeKernelDataProvider::GetRenderProxy
          (UOptimusCustomComputeKernelDataProvider *this)

{
  FComputeDataProviderRenderProxy FVar1;
  int iVar2;
  FComputeDataProviderRenderProxy *pFVar3;
  FComputeDataProviderRenderProxy *pFVar4;
  FComputeDataProviderRenderProxy FVar5;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Optimus::EvaluateExecutionDomainExpressionParseResult
            (&this->ParseResult,
             (TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>)
             (this->WeakComponentSource).WeakPtr,
             (TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr>)(this->WeakComponent).WeakPtr,
             &local_18);
  pFVar3 = ::operator_new(0x20);
  pFVar4 = (FComputeDataProviderRenderProxy *)0x0;
  if (pFVar3 != (FComputeDataProviderRenderProxy *)0x0) {
    *pFVar3 = (FComputeDataProviderRenderProxy)
              &___7FOptimusCustomComputeKernelDataProviderProxy__6B_;
    pFVar3[1] = (FComputeDataProviderRenderProxy)local_18.AllocatorInstance.Data;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar3 + 2) = local_18.ArrayNum;
    *(int *)&pFVar3[2].field_0x4 = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    *(undefined4 *)(pFVar3 + 3) = 0;
    FVar5 = pFVar3[1];
    iVar2 = *(int *)(pFVar3 + 2);
    FVar1 = (FComputeDataProviderRenderProxy)((longlong)FVar5 + (longlong)iVar2 * 4);
    while( true ) {
      if (*(int *)(pFVar3 + 2) != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      pFVar4 = pFVar3;
      if (FVar5 == FVar1) break;
      *(int *)(pFVar3 + 3) = *(int *)(pFVar3 + 3) + *(int *)FVar5;
      FVar5 = (FComputeDataProviderRenderProxy)((longlong)FVar5 + 4);
    }
  }
  if ((FComputeDataProviderRenderProxy)local_18.AllocatorInstance.Data !=
      (FComputeDataProviderRenderProxy)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pFVar4;
}

// InitFromDataInterface @ 14e1ebe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusCustomComputeKernelDataProvider::InitFromDataInterface
          (UOptimusCustomComputeKernelDataProvider *this,
          UOptimusCustomComputeKernelDataInterface *param_1,UObject *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UOptimusComponentSourceBinding *this_00;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar5;
  undefined1 auStack_c8 [32];
  UObject *local_a8;
  UOptimusComponentSource *local_a0;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_98;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14e1ebe75;
  }
  param_2 = (UObject *)0x0;
LAB_14e1ebe75:
  local_a8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&(this->WeakComponent).WeakPtr,(FObjectPtr)&local_a8);
  this_00 = (UOptimusComponentSourceBinding *)
            FWeakObjectPtr::Get(&(param_1->ComponentSourceBinding).WeakPtr);
  local_a0 = UOptimusComponentSourceBinding::GetComponentSource(this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a0 != (UOptimusComponentSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  FWeakObjectPtr::operator=(&(this->WeakComponentSource).WeakPtr,(FObjectPtr)&local_a0);
  pTVar5 = Optimus::ParseExecutionDomainExpression
                     (&local_98,&param_1->NumThreadsExpression,
                      (TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>)
                      (this->WeakComponentSource).WeakPtr);
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::operator=
            (&this->ParseResult,pTVar5);
  if (1 < (ulonglong)local_98.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_98.TypeIndex])(&local_98);
  return;
}

// StaticRegisterNativesUOptimusCustomComputeKernelDataProvider @ 14e2258a0

void __cdecl
UOptimusCustomComputeKernelDataProvider::
StaticRegisterNativesUOptimusCustomComputeKernelDataProvider(void)

{
  return;
}

