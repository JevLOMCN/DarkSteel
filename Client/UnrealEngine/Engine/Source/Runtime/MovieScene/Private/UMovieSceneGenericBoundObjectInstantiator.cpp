// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 146062120

UClass * __cdecl UMovieSceneGenericBoundObjectInstantiator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneGenericBoundObjectInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton,
               StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator,0x48,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGenericBoundObjectInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneGenericBoundObjectInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton;
}

// UMovieSceneGenericBoundObjectInstantiator @ 146095650

UMovieSceneGenericBoundObjectInstantiator * __thiscall
UMovieSceneGenericBoundObjectInstantiator::UMovieSceneGenericBoundObjectInstantiator
          (UMovieSceneGenericBoundObjectInstantiator *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneGenericBoundObjectInstantiator__6B_;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(TComponentTypeID<FGuid> *)&this->field_0x30 = pFVar2->GenericObjectBinding;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = (pFVar2->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// UMovieSceneGenericBoundObjectInstantiator @ 146095700

UMovieSceneGenericBoundObjectInstantiator * __thiscall
UMovieSceneGenericBoundObjectInstantiator::UMovieSceneGenericBoundObjectInstantiator
          (UMovieSceneGenericBoundObjectInstantiator *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneGenericBoundObjectInstantiator__6B_;
  return this;
}

// ~UMovieSceneGenericBoundObjectInstantiator @ 146098520

void __thiscall
UMovieSceneGenericBoundObjectInstantiator::~UMovieSceneGenericBoundObjectInstantiator
          (UMovieSceneGenericBoundObjectInstantiator *this)

{
  *(undefined ***)this = &___7UMovieSceneGenericBoundObjectInstantiator__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 1460cf830

UClass * __cdecl UMovieSceneGenericBoundObjectInstantiator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneGenericBoundObjectInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton,
               StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator,0x48,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGenericBoundObjectInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneGenericBoundObjectInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGenericBoundObjectInstantiator.InnerSingleton;
}

// OnRun @ 1460dc500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneGenericBoundObjectInstantiator::OnRun
          (UMovieSceneGenericBoundObjectInstantiator *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  ForAnyElementType FVar1;
  int iVar2;
  FBuiltInComponentTypes *pFVar3;
  FScriptContainerElement *this_00;
  FEntityManager *pFVar4;
  undefined1 auStackY_408 [32];
  FComponentTypeID local_3c8;
  ushort uStack_3c6;
  FComponentTypeID local_3c4;
  FComponentTypeID local_3c2 [5];
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  undefined8 local_3a0;
  TStatIdData *pTStack_398;
  byte local_390;
  undefined7 uStack_38f;
  undefined4 uStack_388;
  uint uStack_384;
  undefined2 local_380;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_37e;
  TComponentTypeID<FGuid> TStack_37c;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> TStack_37a;
  undefined2 uStack_378;
  undefined6 uStack_376;
  undefined1 local_348 [32];
  void *local_328;
  undefined4 local_320;
  uint local_31c;
  undefined4 local_318;
  undefined4 local_314;
  void *local_308;
  undefined4 local_300;
  undefined1 local_2f8 [32];
  void *local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  ForAnyElementType local_298;
  undefined8 local_290;
  UMovieSceneEntitySystemLinker *local_288;
  undefined1 local_278 [2];
  FComponentAccess FStack_276;
  FComponentAccess aFStack_274 [6];
  undefined8 local_268;
  TStatIdData *pTStack_260;
  ulonglong local_258;
  undefined8 uStack_250;
  FEntityComponentFilter local_248;
  TBitArray<TFixedAllocator<12>_> local_1c8;
  TBitArray<TFixedAllocator<12>_> local_190;
  undefined1 local_158 [32];
  ulonglong local_138;
  undefined8 uStack_130;
  TBitArray<TFixedAllocator<12>_> local_128;
  TBitArray<TFixedAllocator<12>_> local_f0;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  TBitArray<TFixedAllocator<12>_> local_a8;
  TBitArray<TFixedAllocator<12>_> local_70;
  FEntityManager *local_38;
  FEntityAllocationWriteContext local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings
            ((UMovieSceneEntityInstantiatorSystem *)this,pFVar3->GenericObjectBinding);
  local_288 = *(UMovieSceneEntitySystemLinker **)&this->field_0x28;
  local_348._0_8_ = (FScriptContainerElement *)0x0;
  pTStack_398 = &TStatId::TStatId_NAME_None;
  local_348._8_8_ = 0;
  local_328 = (void *)0x0;
  local_320 = 0;
  local_31c = 0x80;
  local_318 = 0xffffffff;
  local_314 = 0;
  local_308 = (void *)0x0;
  local_300 = 0;
  local_2f8._0_8_ = (FScriptContainerElement *)0x0;
  local_2f8._8_8_ = 0;
  local_2d8 = (void *)0x0;
  local_2d0 = 0;
  local_2cc = 0x80;
  local_2c8 = 0xffffffff;
  local_2c4 = 0;
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0._0_4_ = 0;
  local_2a0._4_4_ = 0;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290._0_4_ = 0;
  local_290._4_4_ = 0;
  TStack_37a = pFVar3->BoundObjectResolver;
  TStack_37e = pFVar3->InstanceHandle;
  TStack_37c = pFVar3->GenericObjectBinding;
  uStack_378 = 0x7fff;
  FStack_276.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_37e;
  local_278 = local_380;
  aFStack_274[0].ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_37c;
  unique0x10000462 = TStack_37a;
  aFStack_274._6_6_ = uStack_376;
  aFStack_274[2].ComponentType.Value = (FComponentTypeID)0x7fff;
  local_3a0 = 0;
  uStack_388 = 0x6ff;
  uStack_384 = uStack_384 & 0xffffff00;
  local_258 = CONCAT71(uStack_38f,local_390) & 0xffffffffffffffe0;
  uStack_250._4_4_ = uStack_384;
  uStack_250._0_4_ = 0x6ff;
  _local_3c8 = CONCAT22((pFVar3->Tags).HasUnresolvedBinding.Value,(pFVar3->Tags).NeedsLink.Value);
  local_268 = 0;
  pTStack_260 = &TStatId::TStatId_NAME_None;
  local_248.AllMask.Bits.NumBits = 0;
  local_248.AllMask.Bits.MaxBits = 0x180;
  local_248.NoneMask.Bits.NumBits = 0;
  local_248.NoneMask.Bits.MaxBits = 0x180;
  local_248.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ComplexMasks.ArrayNum = 0;
  local_248.ComplexMasks.ArrayMax = 0;
  local_1c8.NumBits = 0;
  local_1c8.MaxBits = 0x180;
  local_190.NumBits = 0;
  local_190.MaxBits = 0x180;
  local_390 = local_390 & 0xe0;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 2),&local_248);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 4),&local_248);
  iVar2 = local_248.ComplexMasks.ArrayNum;
  if (local_248.ComplexMasks.ArrayNum == local_248.ComplexMasks.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_248.ComplexMasks.AllocatorInstance,
                       &local_248.ComplexMasks.ArrayMax);
  }
  local_248.ComplexMasks.ArrayNum = iVar2 + 1;
  local_3b8._First = &local_3c8;
  this_00 = local_248.ComplexMasks.AllocatorInstance.Data + (longlong)iVar2 * 0x3c;
  local_3b8._Last = &local_3c4;
  *(int *)&this_00[0x30].field_0x0 = 0;
  *(int *)&this_00[0x34].field_0x0 = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_3b8);
  local_3c4.Value = (pFVar3->Tags).NeedsUnlink.Value;
  local_3b8._First = &local_3c4;
  local_3b8._Last = local_3c2;
  UE::MovieScene::FComponentMask::SetAll(&local_248.NoneMask,&local_3b8);
  pFVar4 = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
  if (FStack_276.ComponentType.Value != 0xffff && aFStack_274[0].ComponentType.Value != 0xffff) {
    local_158._0_8_ = _local_278;
    local_158._8_2_ = aFStack_274[2].ComponentType.Value;
    local_158._10_2_ = aFStack_274[3].ComponentType.Value;
    local_158._12_2_ = aFStack_274[4].ComponentType.Value;
    local_158._14_2_ = aFStack_274[5].ComponentType.Value;
    local_138 = local_258;
    uStack_130 = uStack_250;
    local_158._16_8_ = local_268;
    local_158._24_8_ = pTStack_260;
    local_128.NumBits = 0;
    local_128.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0x30),
               (TBitArray<TFixedAllocator<12>_> *)&local_248);
    local_f0.NumBits = 0;
    local_f0.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0x68),&local_248.NoneMask.Bits);
    FVar1.Data = local_248.ComplexMasks.AllocatorInstance.Data;
    iVar2 = local_248.ComplexMasks.ArrayNum;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = local_248.ComplexMasks.ArrayNum;
    if (local_248.ComplexMasks.ArrayNum == 0) {
      local_ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,local_248.ComplexMasks.ArrayNum,0,(ForAnyElementType *)(local_158 + 0xa0),
                 local_248.ComplexMasks.ArrayNum,(int *)(local_158 + 0xac));
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                (local_b8.Data,(FComplexMask *)FVar1.Data,iVar2);
    }
    local_a8.NumBits = 0;
    local_a8.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0xb0),&local_1c8);
    local_70.NumBits = 0;
    local_70.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0xe8),&local_190);
    local_38 = pFVar4;
    UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
              ((FEntityAllocationWriteContext *)(local_158 + 0x128),pFVar4);
    UE::MovieScene::
    TEntityAllocationTaskBase<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
    ::Run((TEntityAllocationTaskBase<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
           *)local_158,(FBoundObjectTask *)local_348);
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  if ((FComplexMask *)local_248.ComplexMasks.AllocatorInstance.Data != (FComplexMask *)0x0) {
    FMemory::Free(local_248.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  local_2b0 = 0;
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2f8,0,local_2f8._8_4_);
  iVar2 = SUB84(local_2f8._8_8_,4);
  local_2f8._8_8_ = local_2f8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)local_2f8,0,(int *)(local_2f8 + 0xc));
  }
  local_2c8 = 0xffffffff;
  local_2c4 = 0;
  local_2d0 = 0;
  if (0x80 < local_2cc) {
    local_2cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10),0);
  }
  if (local_2d8 != (void *)0x0) {
    FMemory::Free(local_2d8);
  }
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_300 = 0;
  if (local_308 != (void *)0x0) {
    FMemory::Free(local_308);
  }
  iVar2 = SUB84(local_348._8_8_,4);
  local_348._8_8_ = local_348._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_348,0,(int *)(local_348 + 0xc));
  }
  local_314 = 0;
  local_320 = 0;
  local_318 = 0xffffffff;
  if (0x80 < local_31c) {
    local_31c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_348 + 0x10),0);
  }
  if (local_328 != (void *)0x0) {
    FMemory::Free(local_328);
  }
  if ((FScriptContainerElement *)local_348._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_348._0_8_);
  }
  return;
}

// StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator @ 1460fa270

void __cdecl
UMovieSceneGenericBoundObjectInstantiator::
StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator(void)

{
  return;
}

