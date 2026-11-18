// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e10cd80

UClass * __cdecl UOptimusImplicitPersistentBufferDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusImplicitPersistentBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.
                InnerSingleton,StaticRegisterNativesUOptimusImplicitPersistentBufferDataProvider,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusImplicitPersistentBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusImplicitPersistentBufferDataProvider>,
               local_res8,UOptimusRawBufferDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.InnerSingleton;
}

// UOptimusImplicitPersistentBufferDataProvider @ 14e15a3d0

UOptimusImplicitPersistentBufferDataProvider * __thiscall
UOptimusImplicitPersistentBufferDataProvider::UOptimusImplicitPersistentBufferDataProvider
          (UOptimusImplicitPersistentBufferDataProvider *this,FVTableHelper *param_1)

{
  UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this,param_1);
  this->bZeroInitForAtomicWrites = false;
  this->_padding_ = (longlong)&_vftable__for__UOptimusRawBufferDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPersistentBufferProvider__;
  (this->DataInterfaceName).ComparisonIndex = 0;
  (this->DataInterfaceName).Number = 0;
  (this->BufferPool).Object = (FOptimusPersistentBufferPool *)0x0;
  (this->BufferPool).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UOptimusImplicitPersistentBufferDataProvider @ 14e15a430

UOptimusImplicitPersistentBufferDataProvider * __thiscall
UOptimusImplicitPersistentBufferDataProvider::UOptimusImplicitPersistentBufferDataProvider
          (UOptimusImplicitPersistentBufferDataProvider *this,FObjectInitializer *param_1)

{
  UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider
            ((UOptimusRawBufferDataProvider *)this,param_1);
  this->bZeroInitForAtomicWrites = false;
  this->_padding_ = (longlong)&_vftable__for__UOptimusRawBufferDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPersistentBufferProvider__;
  (this->DataInterfaceName).ComparisonIndex = 0;
  (this->DataInterfaceName).Number = 0;
  (this->BufferPool).Object = (FOptimusPersistentBufferPool *)0x0;
  (this->BufferPool).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UOptimusImplicitPersistentBufferDataProvider @ 14e162d50

void __thiscall
UOptimusImplicitPersistentBufferDataProvider::~UOptimusImplicitPersistentBufferDataProvider
          (UOptimusImplicitPersistentBufferDataProvider *this)

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

// GetPrivateStaticClass @ 14e1d6430

UClass * __cdecl UOptimusImplicitPersistentBufferDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusImplicitPersistentBufferDataProvider",
               &Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.
                InnerSingleton,StaticRegisterNativesUOptimusImplicitPersistentBufferDataProvider,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusImplicitPersistentBufferDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusImplicitPersistentBufferDataProvider>,
               local_res8,UOptimusRawBufferDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd240

FComputeDataProviderRenderProxy * __thiscall
UOptimusImplicitPersistentBufferDataProvider::GetRenderProxy
          (UOptimusImplicitPersistentBufferDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FComputeDataProviderRenderProxy FVar3;
  FName FVar4;
  FComputeDataProviderRenderProxy FVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  FComputeDataProviderRenderProxy *pFVar11;
  ForAnyElementType FVar12;
  FComputeDataProviderRenderProxy *pFVar13;
  longlong lVar14;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  FScriptContainerElement *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  pFVar13 = (FComputeDataProviderRenderProxy *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  uVar8 = local_res8[0];
  if ((pUVar9 != (UObject *)0x0) &&
     (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_), uVar8 = local_res8[0],
     pUVar10 != (UObject *)0x0)) {
    uVar8 = (**(code **)(*(longlong *)pUVar9 + 0x2d0))(pUVar9,pUVar10);
    bVar7 = Optimus::EvaluateExecutionDomainExpressionParseResult
                      ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                        *)&this->_padding_,
                       (TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr>)
                       this->_padding_,
                       (TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr>)this->_padding_,
                       &local_58);
    if (bVar7) goto LAB_14e1dd2f5;
  }
  uVar6 = local_58._8_8_;
  iVar2 = local_58.ArrayMax;
  local_58._8_8_ = (ulonglong)(uint)local_58.ArrayMax << 0x20;
  if (((longlong)uVar6 < 0) && (iVar2 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
LAB_14e1dd2f5:
  pFVar11 = ::operator_new(0x60);
  FVar12.Data = local_58.AllocatorInstance.Data;
  if (pFVar11 != (FComputeDataProviderRenderProxy *)0x0) {
    FVar3 = (FComputeDataProviderRenderProxy)
            (this->BufferPool).SharedReferenceCount.ReferenceController;
    FVar4 = this->DataInterfaceName;
    FVar5 = (FComputeDataProviderRenderProxy)(this->BufferPool).Object;
    if (FVar3 != (FComputeDataProviderRenderProxy)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar3 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
      UNLOCK();
    }
    local_res10 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    bVar7 = this->bZeroInitForAtomicWrites;
    local_res8[0] = (undefined4)this->_padding_;
    lVar14 = (longlong)local_58.ArrayNum;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = local_58.ArrayNum;
    if (local_58.ArrayNum == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58.ArrayNum,0,&local_48,local_58.ArrayNum,&local_3c);
      memcpy(local_48.Data,FVar12.Data,lVar14 << 2);
    }
    pFVar13 = pFVar11 + 1;
    *pFVar13 = (FComputeDataProviderRenderProxy)0x0;
    *pFVar11 = (FComputeDataProviderRenderProxy)
               &___7FOptimusImplicitPersistentBufferDataProviderProxy__6B_;
    lVar14 = (longlong)local_40;
    local_res18 = local_48.Data;
    *(int *)(pFVar11 + 2) = local_40;
    if (local_40 == 0) {
      *(undefined4 *)&pFVar11[2].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_40,0,(ForAnyElementType *)pFVar13,local_40,(int *)&pFVar11[2].field_0x4);
      memcpy(*(FScriptContainerElement **)pFVar13,local_res18,lVar14 << 2);
    }
    *(undefined4 *)&pFVar11[3].field_0x4 = local_res8[0];
    *(undefined4 *)(pFVar11 + 3) = 0;
    pFVar11[4].field_0x4 = bVar7;
    pFVar11[5] = FVar5;
    *(undefined4 *)(pFVar11 + 4) = local_res10;
    pFVar11[6] = FVar3;
    if (FVar3 != (FComputeDataProviderRenderProxy)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar3 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
      UNLOCK();
    }
    *(undefined4 *)(pFVar11 + 8) = uVar8;
    *(FName *)(pFVar11 + 7) = FVar4;
    FVar12.Data = *(FScriptContainerElement **)pFVar13;
    iVar2 = *(int *)(pFVar11 + 2);
    pFVar1 = FVar12.Data + (longlong)iVar2 * 4;
    while( true ) {
      if (*(int *)(pFVar11 + 2) != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar12.Data == pFVar1) break;
      *(int *)(pFVar11 + 3) = *(int *)(pFVar11 + 3) + *(int *)FVar12.Data;
      FVar12.Data = FVar12.Data + 4;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar3);
    pFVar13 = pFVar11;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return pFVar13;
}

// SetBufferPool @ 14e21be80

void __thiscall
UOptimusImplicitPersistentBufferDataProvider::SetBufferPool
          (UOptimusImplicitPersistentBufferDataProvider *this,
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

// StaticRegisterNativesUOptimusImplicitPersistentBufferDataProvider @ 14e225a90

void __cdecl
UOptimusImplicitPersistentBufferDataProvider::
StaticRegisterNativesUOptimusImplicitPersistentBufferDataProvider(void)

{
  return;
}

// _getUObject @ 14e238dc0

UObject * __thiscall
UOptimusImplicitPersistentBufferDataProvider::_getUObject
          (UOptimusImplicitPersistentBufferDataProvider *this)

{
  return (UObject *)&this[-1]._padding_;
}

