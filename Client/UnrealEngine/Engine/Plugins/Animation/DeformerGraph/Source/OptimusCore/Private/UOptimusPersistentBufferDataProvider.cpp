// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e10e810

UClass * __cdecl UOptimusPersistentBufferDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPersistentBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusPersistentBufferDataProvider,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusPersistentBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusPersistentBufferDataProvider>,local_res8,
               UOptimusRawBufferDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.InnerSingleton;
}

// UOptimusPersistentBufferDataProvider @ 14e15c570

UOptimusPersistentBufferDataProvider * __thiscall
UOptimusPersistentBufferDataProvider::UOptimusPersistentBufferDataProvider
          (UOptimusPersistentBufferDataProvider *this,FVTableHelper *param_1)

{
  UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusRawBufferDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPersistentBufferProvider__;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
  (this->BufferPool).Object = (FOptimusPersistentBufferPool *)0x0;
  (this->BufferPool).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UOptimusPersistentBufferDataProvider @ 14e15c5c0

UOptimusPersistentBufferDataProvider * __thiscall
UOptimusPersistentBufferDataProvider::UOptimusPersistentBufferDataProvider
          (UOptimusPersistentBufferDataProvider *this,FObjectInitializer *param_1)

{
  UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusRawBufferDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPersistentBufferProvider__;
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
  (this->BufferPool).Object = (FOptimusPersistentBufferPool *)0x0;
  (this->BufferPool).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UOptimusPersistentBufferDataProvider @ 14e163c60

void __thiscall
UOptimusPersistentBufferDataProvider::~UOptimusPersistentBufferDataProvider
          (UOptimusPersistentBufferDataProvider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UOptimusRawBufferDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPersistentBufferProvider__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BufferPool).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IOptimusPersistentBufferProvider__6B_;
  UOptimusRawBufferDataProvider::~UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d84e0

UClass * __cdecl UOptimusPersistentBufferDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPersistentBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusPersistentBufferDataProvider,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusPersistentBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusPersistentBufferDataProvider>,local_res8,
               UOptimusRawBufferDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd5d0

FComputeDataProviderRenderProxy * __thiscall
UOptimusPersistentBufferDataProvider::GetRenderProxy(UOptimusPersistentBufferDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  FName FVar4;
  FComputeDataProviderRenderProxy FVar5;
  FComputeDataProviderRenderProxy FVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  FComputeDataProviderRenderProxy *pFVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  FComputeDataProviderRenderProxy *pFVar15;
  undefined4 local_res8 [2];
  FScriptContainerElement *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  pFVar15 = (FComputeDataProviderRenderProxy *)0x0;
  local_res8[0] = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar10 != (UObject *)0x0) &&
     (pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_), pUVar11 != (UObject *)0x0))
  {
    local_res8[0] = (**(code **)(*(longlong *)pUVar10 + 0x2d0))(pUVar10,pUVar11);
    bVar9 = Optimus::EvaluateExecutionDomainExpressionParseResult
                      ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                        *)&this->_padding_,
                       (TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>)
                       this->_padding_,
                       (TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr>)this->_padding_,
                       &local_58);
    if (bVar9) goto LAB_14e1dd67e;
  }
  uVar8 = local_58._8_8_;
  iVar3 = local_58.ArrayMax;
  local_58._8_8_ = (ulonglong)(uint)local_58.ArrayMax << 0x20;
  if (((longlong)uVar8 < 0) && (iVar3 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
LAB_14e1dd67e:
  pFVar12 = ::operator_new(0x60);
  FVar13.Data = local_58.AllocatorInstance.Data;
  if (pFVar12 != (FComputeDataProviderRenderProxy *)0x0) {
    FVar4 = this->ResourceName;
    FVar5 = (FComputeDataProviderRenderProxy)
            (this->BufferPool).SharedReferenceCount.ReferenceController;
    FVar6 = (FComputeDataProviderRenderProxy)(this->BufferPool).Object;
    if (FVar5 != (FComputeDataProviderRenderProxy)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar5 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5 + 8) + 1);
      UNLOCK();
    }
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar7 = this->_padding_;
    lVar14 = (longlong)local_58.ArrayNum;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = local_58.ArrayNum;
    if (local_58.ArrayNum == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58.ArrayNum,0,&local_48,local_58.ArrayNum,&local_3c);
      memcpy(local_48.Data,FVar13.Data,lVar14 << 2);
    }
    pFVar15 = pFVar12 + 1;
    *pFVar15 = (FComputeDataProviderRenderProxy)0x0;
    *pFVar12 = (FComputeDataProviderRenderProxy)&___7FOptimusPersistentBufferDataProviderProxy__6B_;
    lVar14 = (longlong)local_40;
    local_res10 = local_48.Data;
    *(int *)(pFVar12 + 2) = local_40;
    if (local_40 == 0) {
      *(undefined4 *)&pFVar12[2].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_40,0,(ForAnyElementType *)pFVar15,local_40,(int *)&pFVar12[2].field_0x4);
      memcpy(*(FScriptContainerElement **)pFVar15,local_res10,lVar14 << 2);
    }
    *(undefined4 *)(pFVar12 + 3) = 0;
    pFVar12[5] = FVar6;
    *(int *)&pFVar12[3].field_0x4 = (int)lVar7;
    *(undefined4 *)(pFVar12 + 4) = uVar2;
    pFVar12[6] = FVar5;
    if (FVar5 != (FComputeDataProviderRenderProxy)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar5 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5 + 8) + 1);
      UNLOCK();
    }
    *(FName *)(pFVar12 + 7) = FVar4;
    *(undefined4 *)(pFVar12 + 8) = local_res8[0];
    pFVar12[10] = (FComputeDataProviderRenderProxy)0x0;
    pFVar12[0xb] = (FComputeDataProviderRenderProxy)0x0;
    FVar13.Data = *(FScriptContainerElement **)pFVar15;
    iVar3 = *(int *)(pFVar12 + 2);
    pFVar1 = FVar13.Data + (longlong)iVar3 * 4;
    while( true ) {
      if (*(int *)(pFVar12 + 2) != iVar3) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar13.Data == pFVar1) break;
      *(int *)(pFVar12 + 3) = *(int *)(pFVar12 + 3) + *(int *)FVar13.Data;
      FVar13.Data = FVar13.Data + 4;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar5);
    pFVar15 = pFVar12;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return pFVar15;
}

// SetBufferPool @ 14e21bed0

void __thiscall
UOptimusPersistentBufferDataProvider::SetBufferPool
          (UOptimusPersistentBufferDataProvider *this,
          TSharedPtr<FOptimusPersistentBufferPool,1> *param_1)

{
  FOptimusPersistentBufferPool *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pFVar1;
  this->_padding_ = (longlong)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUOptimusPersistentBufferDataProvider @ 14e225db0

void __cdecl
UOptimusPersistentBufferDataProvider::StaticRegisterNativesUOptimusPersistentBufferDataProvider
          (void)

{
  return;
}

// _getUObject @ 14e239050

UObject * __thiscall
UOptimusPersistentBufferDataProvider::_getUObject(UOptimusPersistentBufferDataProvider *this)

{
  return (UObject *)&this[-1]._padding_;
}

