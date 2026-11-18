// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e10c300

UClass * __cdecl UOptimusTransientBufferDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusTransientBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusTransientBufferDataProvider,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusTransientBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusTransientBufferDataProvider>,local_res8,
               UOptimusRawBufferDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.InnerSingleton;
}

// UOptimusTransientBufferDataProvider @ 14e15d6a0

UOptimusTransientBufferDataProvider * __thiscall
UOptimusTransientBufferDataProvider::UOptimusTransientBufferDataProvider
          (UOptimusTransientBufferDataProvider *this,FVTableHelper *param_1)

{
  UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this,param_1);
  this->bZeroInitForAtomicWrites = false;
  this->_padding_ = (longlong)&___7UOptimusTransientBufferDataProvider__6B_;
  return this;
}

// UOptimusTransientBufferDataProvider @ 14e15d6d0

UOptimusTransientBufferDataProvider * __thiscall
UOptimusTransientBufferDataProvider::UOptimusTransientBufferDataProvider
          (UOptimusTransientBufferDataProvider *this,FObjectInitializer *param_1)

{
  UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this,param_1);
  this->bZeroInitForAtomicWrites = false;
  this->_padding_ = (longlong)&___7UOptimusTransientBufferDataProvider__6B_;
  return this;
}

// ~UOptimusTransientBufferDataProvider @ 14e1641f0

void __thiscall
UOptimusTransientBufferDataProvider::~UOptimusTransientBufferDataProvider
          (UOptimusTransientBufferDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusTransientBufferDataProvider__6B_;
  UOptimusRawBufferDataProvider::~UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d99c0

UClass * __cdecl UOptimusTransientBufferDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusTransientBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusTransientBufferDataProvider,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusTransientBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusTransientBufferDataProvider>,local_res8,
               UOptimusRawBufferDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1df4d0

FComputeDataProviderRenderProxy * __thiscall
UOptimusTransientBufferDataProvider::GetRenderProxy(UOptimusTransientBufferDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  FComputeDataProviderRenderProxy *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar8 != (UObject *)0x0) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar9 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar8 + 0x2d0))(pUVar8,pUVar9);
      bVar7 = Optimus::EvaluateExecutionDomainExpressionParseResult
                        ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                          *)&this->_padding_,
                         (TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>)
                         this->_padding_,
                         (TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr>)this->_padding_,
                         &local_48);
      if (bVar7) goto LAB_14e1df577;
    }
  }
  uVar6 = local_48._8_8_;
  iVar4 = local_48.ArrayMax;
  local_48._8_8_ = (ulonglong)(uint)local_48.ArrayMax << 0x20;
  if (((longlong)uVar6 < 0) && (iVar4 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
  }
LAB_14e1df577:
  pFVar10 = ::operator_new(0x40);
  FVar12.Data = local_48.AllocatorInstance.Data;
  if (pFVar10 == (FComputeDataProviderRenderProxy *)0x0) {
    pFVar10 = (FComputeDataProviderRenderProxy *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    bVar7 = this->bZeroInitForAtomicWrites;
    lVar5 = this->_padding_;
    lVar11 = (longlong)local_48.ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = local_48.ArrayNum;
    if (local_48.ArrayNum == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_48.ArrayNum,0,&local_38,local_48.ArrayNum,&local_2c);
      memcpy(local_38.Data,FVar12.Data,lVar11 << 2);
    }
    FVar12.Data = local_38.Data;
    pFVar1 = pFVar10 + 1;
    *pFVar1 = (FComputeDataProviderRenderProxy)0x0;
    *pFVar10 = (FComputeDataProviderRenderProxy)&___7FOptimusTransientBufferDataProviderProxy__6B_;
    lVar11 = (longlong)local_30;
    *(int *)(pFVar10 + 2) = local_30;
    if (local_30 == 0) {
      *(undefined4 *)&pFVar10[2].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_30,0,(ForAnyElementType *)pFVar1,local_30,(int *)&pFVar10[2].field_0x4);
      memcpy(*(FScriptContainerElement **)pFVar1,FVar12.Data,lVar11 << 2);
    }
    *(int *)&pFVar10[3].field_0x4 = (int)lVar5;
    *(undefined4 *)(pFVar10 + 4) = uVar3;
    *(undefined4 *)(pFVar10 + 3) = 0;
    pFVar10[4].field_0x4 = bVar7;
    FVar12.Data = *(FScriptContainerElement **)pFVar1;
    iVar4 = *(int *)(pFVar10 + 2);
    pFVar2 = FVar12.Data + (longlong)iVar4 * 4;
    while( true ) {
      if (*(int *)(pFVar10 + 2) != iVar4) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar12.Data == pFVar2) break;
      *(int *)(pFVar10 + 3) = *(int *)(pFVar10 + 3) + *(int *)FVar12.Data;
      FVar12.Data = FVar12.Data + 4;
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return pFVar10;
}

// StaticRegisterNativesUOptimusTransientBufferDataProvider @ 14e225f70

void __cdecl
UOptimusTransientBufferDataProvider::StaticRegisterNativesUOptimusTransientBufferDataProvider(void)

{
  return;
}

