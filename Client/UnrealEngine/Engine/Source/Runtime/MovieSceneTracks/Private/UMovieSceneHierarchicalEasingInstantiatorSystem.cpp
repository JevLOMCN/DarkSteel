// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 14687d990

UClass * __cdecl UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalEasingInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneHierarchicalEasingInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingInstantiatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.InnerSingleton;
}

// UMovieSceneHierarchicalEasingInstantiatorSystem @ 14689e380

UMovieSceneHierarchicalEasingInstantiatorSystem * __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::UMovieSceneHierarchicalEasingInstantiatorSystem
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneHierarchicalEasingInstantiatorSystem__6B_;
  *(undefined8 *)&this->CachedInstanceIDToChannel = 0;
  *(undefined8 *)&(this->CachedInstanceIDToChannel).field_0x8 = 0;
  *(undefined8 *)&(this->CachedInstanceIDToChannel).field_0x20 = 0;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x28 = 0;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x34 = 0;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->CachedHierarchicalBlendTargetChannels = 0;
  *(undefined8 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x8 = 0;
  *(undefined8 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x20 = 0;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x28 = 0;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x34 = 0;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x40 = 0;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x48 = 0;
  (this->EvaluatorSystem).field0_0x0.DebugPtr = (UWeightAndEasingEvaluatorSystem *)0x0;
  return this;
}

// UMovieSceneHierarchicalEasingInstantiatorSystem @ 14689e420

UMovieSceneHierarchicalEasingInstantiatorSystem * __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::UMovieSceneHierarchicalEasingInstantiatorSystem
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UClass *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneHierarchicalEasingInstantiatorSystem__6B_;
  *(undefined8 *)&this->CachedInstanceIDToChannel = 0;
  *(undefined8 *)&(this->CachedInstanceIDToChannel).field_0x8 = 0;
  *(undefined8 *)&(this->CachedInstanceIDToChannel).field_0x20 = 0;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x28 = 0;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x34 = 0;
  *(undefined8 *)&this->CachedHierarchicalBlendTargetChannels = 0;
  *(undefined8 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x8 = 0;
  *(undefined8 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x20 = 0;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x28 = 0;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x34 = 0;
  *(undefined8 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x40 = 0;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x48 = 0;
  (this->EvaluatorSystem).field0_0x0.DebugPtr = (UWeightAndEasingEvaluatorSystem *)0x0;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(undefined4 *)&this->_padding_ = 2;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneHierarchicalEasingInstantiatorSystem @ 1468a0ba0

void __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::~UMovieSceneHierarchicalEasingInstantiatorSystem
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneHierarchicalEasingInstantiatorSystem__6B_;
  *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedHierarchicalBlendTargetChannels).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedHierarchicalBlendTargetChannels);
  TSparseArray<unsigned_short,FDefaultSparseArrayAllocator>::
  ~TSparseArray<unsigned_short,FDefaultSparseArrayAllocator>(&this->CachedInstanceIDToChannel);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// FinalizeBlendTargets @ 1468b27e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this)

{
  int *piVar1;
  TMap<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  FHierarchicalBlendTarget *this_01;
  ulonglong uVar3;
  short sVar4;
  undefined2 uVar5;
  UWeightAndEasingEvaluatorSystem *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  FBuiltInComponentTypes *pFVar16;
  FHBiasChannelData *pFVar17;
  TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>
  *pTVar18;
  undefined1 *puVar19;
  byte bVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  short *psVar24;
  undefined1 *puVar25;
  TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
  *this_02;
  FHierarchicalEasingChannelBuffer *this_03;
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  uint uVar29;
  short *psVar30;
  undefined1 auStackY_778 [32];
  undefined1 local_738;
  undefined1 local_737;
  undefined1 local_736 [2];
  uint local_734;
  FComponentTypeID local_730;
  FComponentTypeID local_72e;
  FComponentTypeID local_72c;
  FComponentTypeID local_72a;
  short local_728 [2];
  FComponentTypeID local_724;
  FComponentTypeID local_722;
  undefined2 local_720 [2];
  FComponentTypeID local_71c;
  ushort local_71a;
  FComponentTypeID local_718;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> local_716;
  FComponentTypeID local_714 [2];
  undefined8 local_710;
  UMovieSceneHierarchicalEasingInstantiatorSystem *local_708;
  undefined1 *local_700;
  uint uStack_6f8;
  uint uStack_6f4;
  undefined8 local_6f0;
  undefined4 uStack_6e8;
  uint uStack_6e4;
  uint local_6e0;
  undefined4 uStack_6dc;
  int iStack_6d8;
  undefined4 uStack_6d4;
  FBuiltInComponentTypes *local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  int local_6a4;
  TPairInitializer<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>_&&,unsigned_short_const_&>
  local_6a0;
  short *local_690;
  FEasingChannelMutationBase local_688;
  TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *local_660;
  TMap<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>_>
  *local_658;
  undefined1 *local_650;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_648;
  undefined8 uStack_628;
  undefined1 *local_620;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_618;
  undefined8 uStack_5f8;
  undefined8 local_5e8;
  TStatIdData *pTStack_5e0;
  byte local_5d8;
  undefined7 uStack_5d7;
  undefined4 uStack_5d0;
  uint uStack_5cc;
  short *local_5c8;
  undefined2 *local_5c0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_598;
  initializer_list<UE::MovieScene::FComponentTypeID> local_588;
  initializer_list<UE::MovieScene::FComponentTypeID> local_578;
  initializer_list<UE::MovieScene::FComponentTypeID> local_568;
  TArrayView<short_const_,int> local_558;
  TArrayView<short_const_,int> local_548;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> local_538;
  undefined6 uStack_536;
  undefined8 uStack_530;
  TStatIdData *pTStack_528;
  ulonglong uStack_520;
  undefined8 uStack_518;
  undefined4 local_4f4;
  undefined4 local_4d4;
  FComponentTypeID local_4d0;
  TComponentTypeID<FMovieSceneSequenceID> local_4ce;
  ushort local_4cc;
  FComponentTypeID local_4ca;
  undefined1 local_4c8 [64];
  undefined1 *local_488;
  uint local_480;
  undefined4 local_47c;
  undefined1 local_478 [24];
  short local_460 [4];
  FHierarchicalBlendTarget local_458;
  FEntityComponentFilter local_448;
  undefined1 local_3c8 [408];
  uint *local_230;
  uint local_228;
  undefined8 uStack_220;
  int iStack_21c;
  void *local_1f8;
  undefined4 local_1f0;
  FEntityComponentFilter local_1e8;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FHierarchicalBlendTarget>_>
  local_168;
  FEntityComponentFilter local_140;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_778;
  local_708 = this;
  pFVar16 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_1e8.AllMask.Bits.MaxBits = 0x180;
  local_1e8.AllMask.Bits.NumBits = 0;
  local_1e8.NoneMask.Bits.NumBits = 0;
  local_1e8.NoneMask.Bits.MaxBits = 0x180;
  local_1e8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ComplexMasks.ArrayNum = 0;
  local_1e8.ComplexMasks.ArrayMax = 0;
  local_71c.Value = *(ushort *)&pFVar16->HierarchicalBlendTarget;
  local_71a = (pFVar16->Tags).NeedsLink.Value;
  local_588._First = &local_71c;
  local_588._Last = &local_718;
  local_6d0 = pFVar16;
  UE::MovieScene::FComponentMask::SetAll(&local_1e8.AllMask,&local_588);
  if ((this->bChannelsHaveBeenInvalidated != false) ||
     (bVar15 = UE::MovieScene::FEntityManager::Contains
                         ((FEntityManager *)(this->_padding_ + 0x28),&local_1e8), bVar15)) {
    pUVar6 = (this->EvaluatorSystem).field0_0x0.DebugPtr;
    this_03 = &pUVar6->PreAllocatedComputationData;
    local_710 = 1;
    lVar28 = (longlong)(pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
    local_488 = (undefined1 *)0x0;
    local_480 = 0;
    local_47c = 0x10;
    local_3c8._384_8_ = 0;
    local_3c8._392_4_ = 0;
    local_3c8._396_4_ = 0x10;
    local_230 = (uint *)0x0;
    _local_228 = ___xmm_00000000ffffffff0000002000000000;
    uStack_220 = _UNK_150631d78;
    local_1f8 = (void *)0x0;
    local_1f0 = 0;
    if (this->bChannelsHaveBeenInvalidated != false) {
      uVar26 = (pUVar6->PreAllocatedComputationData).BlendTargetStartIndex;
      if (uVar26 != 0xffffffff) {
        uVar22 = (pUVar6->PreAllocatedComputationData).Channels.ArrayNum - uVar26;
        if (((int)(uVar22 | uVar26) < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (uVar22 != 0) {
          TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(&this_03->Channels,uVar26,uVar22);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(ForAnyElementType *)this_03,
                     (pUVar6->PreAllocatedComputationData).Channels.ArrayNum,
                     &(pUVar6->PreAllocatedComputationData).Channels.ArrayMax);
        }
        (pUVar6->PreAllocatedComputationData).BlendTargetStartIndex = -1;
      }
      this_00 = &this->CachedHierarchicalBlendTargetChannels;
      bVar15 = 1 < *(int *)&(this->CachedHierarchicalBlendTargetChannels).field_0x48;
      if (!bVar15) {
        TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,
                        *(int *)&(this->CachedHierarchicalBlendTargetChannels).field_0x8);
      puVar25 = &(this->CachedHierarchicalBlendTargetChannels).field_0xc;
      *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x8 = 0;
      if (*(int *)puVar25 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar25);
      }
      *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x34 = 0;
      iVar23 = *(int *)&(this->CachedHierarchicalBlendTargetChannels).field_0x2c;
      *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x28 = 0;
      if ((iVar23 < 0) || (0x80 < iVar23)) {
        *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->CachedHierarchicalBlendTargetChannels).field_0x10,0);
      }
      if (bVar15) {
        *(undefined4 *)&(this->CachedHierarchicalBlendTargetChannels).field_0x48 = 1;
        TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
    pTStack_5e0 = &TStatId::TStatId_NAME_None;
    local_538 = pFVar16->HierarchicalBlendTarget;
    local_730.Value = (pFVar16->Tags).NeedsUnlink.Value;
    local_5e8 = 0;
    uStack_5d0 = 0x6ff;
    uStack_5cc = uStack_5cc & 0xffffff00;
    uStack_520 = CONCAT71(uStack_5d7,local_5d8) & 0xffffffffffffffe0;
    uStack_518._4_4_ = uStack_5cc;
    uStack_518._0_4_ = AnyHiPriThreadHiPriTask;
    uStack_530 = 0;
    pTStack_528 = &TStatId::TStatId_NAME_None;
    uVar26 = 0;
    local_140.AllMask.Bits.NumBits = 0;
    local_168._2_6_ = uStack_536;
    local_168.Accessors =
         (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FHierarchicalBlendTarget>_>)local_538;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    local_168.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
    local_168.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    local_5d8 = local_5d8 & 0xe0;
    local_168.CommonParams.TaskParams._16_8_ = uStack_520;
    local_168.CommonParams._24_8_ = uStack_518;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)&local_168,&local_140);
    local_578._First = &local_730;
    local_578._Last = &local_72e;
    UE::MovieScene::FComponentMask::SetAll(&local_140.NoneMask,&local_578);
    if (this->bChannelsHaveBeenInvalidated == false) {
      local_72c.Value = (pFVar16->Tags).NeedsLink.Value;
      local_568._First = &local_72c;
      local_568._Last = &local_72a;
      UE::MovieScene::FComponentMask::SetAll(&local_140.AllMask,&local_568);
    }
    local_6a0.Value = (ushort *)local_3c8;
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FHierarchicalBlendTarget>_>
    ::
    Iterate_PerEntityImpl<_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets_::__l9::<lambda_1>_>
              (&local_168,(FEntityManager *)(this->_padding_ + 0x28),&local_140,
               (<lambda_1> *)&local_6a0.Value);
    uVar22 = local_228;
    local_6e0 = 0;
    uStack_6f4 = 1;
    uStack_6e4 = local_6e0;
    if (local_228 != 0) {
      puVar27 = (uint *)(local_3c8 + 400);
      if (local_230 != (uint *)0x0) {
        puVar27 = local_230;
      }
      uStack_6f4 = *puVar27;
      local_6e0 = 0;
      uVar26 = 0;
      while (uStack_6f4 == 0) {
        lVar21 = (longlong)(int)uVar26;
        local_6e0 = local_6e0 + 0x20;
        uVar26 = uVar26 + 1;
        uStack_6f4 = 1;
        uStack_6e4 = local_228;
        if ((int)((local_228 - 1) + ((int)(local_228 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
        goto LAB_1468b2c90;
        uStack_6f4 = (puVar27 + 1)[lVar21];
      }
      uStack_6f4 = -uStack_6f4 & uStack_6f4;
      uVar3 = (ulonglong)uStack_6f4 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_6b0 = (int)lVar21;
      uStack_6e4 = local_6b0 + -1 + local_6e0;
      if ((int)local_228 < (int)uStack_6e4) {
        uStack_6e4 = local_228;
      }
    }
LAB_1468b2c90:
    local_700 = local_3c8;
    uStack_6dc = local_4f4;
    local_6f0 = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                (local_3c8 + 400);
    uVar29 = local_228 & 0xffffffe0;
    iStack_6d8 = local_3c8._392_4_ - iStack_21c;
    uStack_6e8 = 0xffffffff;
    TStack_648.CurrentBitIndex = uStack_6e4;
    TStack_648.UnvisitedBitMask = 0xffffffff;
    TStack_648._padding_ = CONCAT44(uStack_6f4,uVar26);
    iVar23 = (int)local_228 >> 5;
    TStack_648._28_4_ = local_4f4;
    TStack_648.BaseBitIndex = local_6e0;
    uStack_628 = CONCAT44(uStack_6d4,iStack_6d8);
    bVar20 = (byte)_local_228;
    uStack_6f8 = uVar26;
    local_650 = local_700;
    TStack_648.Array = local_6f0;
    if ((int)local_228 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (uVar22 != local_228) {
      puVar27 = (uint *)(local_3c8 + 400);
      if (local_230 != (uint *)0x0) {
        puVar27 = local_230;
      }
      uVar26 = -1 << (bVar20 & 0x1f) & puVar27[iVar23];
      while (uVar26 == 0) {
        lVar21 = (longlong)iVar23;
        uVar29 = uVar29 + 0x20;
        iVar23 = iVar23 + 1;
        uVar22 = local_228;
        if ((int)((local_228 - 1) + ((int)(local_228 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_1468b2db1;
        uVar26 = (puVar27 + 1)[lVar21];
      }
      uVar3 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_6ac = (int)lVar21;
      uVar22 = local_6ac + -1 + uVar29;
      if ((int)local_228 < (int)uVar22) {
        uVar22 = local_228;
      }
    }
LAB_1468b2db1:
    while( true ) {
      puVar25 = local_650;
      if (*(int *)(local_650 + 0x188) - *(int *)(local_650 + 0x1ac) != (int)uStack_628) {
        local_738 = 0;
        `TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_738);
      }
      if (((TStack_648.CurrentBitIndex == uVar22) &&
          (TStack_648.Array ==
           (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)(local_3c8 + 400))
          ) && (puVar25 == local_3c8)) break;
      if (*(undefined1 **)(puVar25 + 0x180) != (undefined1 *)0x0) {
        puVar25 = *(undefined1 **)(puVar25 + 0x180);
      }
      UE::MovieScene::FHierarchicalBlendTarget::AsArray
                ((FHierarchicalBlendTarget *)(puVar25 + (longlong)TStack_648.CurrentBitIndex * 0x18)
                 ,&local_558);
      psVar30 = local_558.DataPtr + local_558.ArrayNum;
      for (psVar24 = local_558.DataPtr; psVar24 != psVar30; psVar24 = psVar24 + 1) {
        local_728[0] = *psVar24;
        pFVar17 = TSortedMap<short,`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l5::FHBiasChannelData,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TGreater<void>_>
                  ::Find(local_4c8,local_728[0]);
        if (pFVar17 == (FHBiasChannelData *)0x0) {
          pTVar18 = TSortedMap<short,`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l5::FHBiasChannelData,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TGreater<void>_>
                    ::AllocateMemoryForEmplace<short_const_&>(local_4c8,local_728);
          *(short *)pTVar18 = local_728[0];
          *(undefined2 *)&pTVar18->field_0x2 = 0xffff;
        }
      }
      TStack_648._padding_._4_4_ = (uint)((ulonglong)TStack_648._padding_ >> 0x20);
      TStack_648.UnvisitedBitMask = TStack_648.UnvisitedBitMask & ~TStack_648._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit(&TStack_648);
    }
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
    uVar26 = local_480;
    uVar12 = _UNK_150689688;
    uVar11 = ___xmm_3ff00000000000003ff0000000000000;
    puVar25 = local_4c8;
    if (local_488 != (undefined1 *)0x0) {
      puVar25 = local_488;
    }
    puVar19 = puVar25 + (longlong)(int)local_480 * 4;
    while( true ) {
      if (local_480 != uVar26) {
        local_737 = 0;
        `TCheckedPointerIterator<TTuple<short,`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l5::FHBiasChannelData>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_737);
      }
      if (puVar25 == puVar19) break;
      uStack_6b4 = 0;
      local_6c8 = uVar11;
      uStack_6c0 = uVar12;
      local_6b8 = 0xffffffff;
      if ((pUVar6->PreAllocatedComputationData).BlendTargetStartIndex == -1) {
        (pUVar6->PreAllocatedComputationData).BlendTargetStartIndex =
             (pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
      }
      iVar23 = (pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
      piVar1 = &(pUVar6->PreAllocatedComputationData).Channels.ArrayMax;
      iVar10 = (pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)this_03,piVar1);
      }
      (pUVar6->PreAllocatedComputationData).Channels.ArrayNum = iVar23 + 1;
      pFVar7 = (this_03->Channels).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)iVar23 * 0x18;
      *(undefined8 *)pFVar2 = uVar11;
      *(undefined8 *)(pFVar2 + 8) = uVar12;
      *(ulonglong *)(pFVar7 + (longlong)iVar23 * 0x18 + 0x10) = CONCAT44(uStack_6b4,local_6b8);
      *(short *)(puVar25 + 2) = (short)iVar10;
      puVar25 = puVar25 + 4;
    }
    uVar26 = 0;
    if (0 < lVar28) {
      lVar21 = 0;
      puVar25 = local_488;
      do {
        uVar29 = 0;
        uVar22 = 0;
        if ((int)uVar26 < (pUVar6->PreAllocatedComputationData).Channels.ArrayNum) {
          uVar22 = ~uVar26 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), puVar25 = local_488, bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar2 = (this_03->Channels).AllocatorInstance.Data;
        puVar19 = local_4c8;
        if (puVar25 != (undefined1 *)0x0) {
          puVar19 = puVar25;
        }
        sVar4 = *(short *)(pFVar2 + lVar21 + 0x14);
        uVar22 = local_480;
        if (0 < (int)local_480) {
          do {
            iVar23 = (uVar22 >> 1) + uVar29;
            if (sVar4 < *(short *)(puVar19 + (longlong)iVar23 * 4)) {
              uVar29 = iVar23 + (uVar22 & 1);
            }
            uVar9 = uVar22 >> 1;
            uVar22 = uVar22 >> 1;
          } while (uVar9 != 0);
        }
        if ((int)uVar29 < (int)local_480) {
          puVar19 = local_4c8;
          if (puVar25 != (undefined1 *)0x0) {
            puVar19 = puVar25;
          }
          if ((sVar4 <= *(short *)(puVar19 + (longlong)(int)uVar29 * 4)) && (uVar29 != 0xffffffff))
          {
            uVar22 = 0;
            if ((int)uVar29 < (int)local_480) {
              uVar22 = ~uVar29 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               puVar25 = local_488, bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar19 = local_4c8;
            if (puVar25 != (undefined1 *)0x0) {
              puVar19 = puVar25;
            }
            if ((undefined2 *)(puVar19 + (longlong)(int)uVar29 * 4 + 2) != (undefined2 *)0x0) {
              *(undefined2 *)(pFVar2 + lVar21 + 0x12) =
                   *(undefined2 *)(puVar19 + (longlong)(int)uVar29 * 4 + 2);
              puVar25 = local_488;
            }
          }
        }
        uVar26 = uVar26 + 1;
        lVar21 = lVar21 + 0x18;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
    uVar26 = local_228;
    uStack_6f8 = 0;
    local_6e0 = 0;
    uStack_6e4 = 0;
    if (local_228 == 0) {
LAB_1468b3161:
      uStack_6f4 = (uint)local_710;
    }
    else {
      puVar27 = (uint *)(local_3c8 + 400);
      if (local_230 != (uint *)0x0) {
        puVar27 = local_230;
      }
      uStack_6f4 = *puVar27;
      while (uStack_6f4 == 0) {
        lVar28 = (longlong)(int)uStack_6f8;
        local_6e0 = local_6e0 + 0x20;
        uStack_6f8 = uStack_6f8 + 1;
        uStack_6e4 = local_228;
        if ((int)((local_228 - 1) + ((int)(local_228 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_6f8)
        goto LAB_1468b3161;
        uStack_6f4 = (puVar27 + 1)[lVar28];
      }
      uStack_6f4 = -uStack_6f4 & uStack_6f4;
      uVar3 = (ulonglong)uStack_6f4 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_6a8 = (int)lVar28;
      uStack_6e4 = local_6e0 + -1 + local_6a8;
      if ((int)local_228 < (int)uStack_6e4) {
        uStack_6e4 = local_228;
      }
    }
    local_700 = local_3c8;
    uStack_6dc = local_4d4;
    local_6f0 = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                (local_3c8 + 400);
    iStack_6d8 = local_3c8._392_4_ - iStack_21c;
    uVar22 = local_228 & 0xffffffe0;
    uStack_6e8 = 0xffffffff;
    TStack_618.CurrentBitIndex = uStack_6e4;
    TStack_618.UnvisitedBitMask = 0xffffffff;
    local_734 = -1 << ((byte)_local_228 & 0x1f);
    TStack_618._padding_ = CONCAT44(uStack_6f4,uStack_6f8);
    iVar23 = (int)local_228 >> 5;
    local_710 = CONCAT44(local_710._4_4_,local_228);
    TStack_618._28_4_ = local_4d4;
    TStack_618.BaseBitIndex = local_6e0;
    uStack_5f8 = CONCAT44(uStack_6d4,iStack_6d8);
    local_620 = local_700;
    TStack_618.Array = local_6f0;
    if ((int)local_228 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (uVar26 != local_228) {
      puVar27 = (uint *)(local_3c8 + 400);
      if (local_230 != (uint *)0x0) {
        puVar27 = local_230;
      }
      uVar26 = local_734 & puVar27[iVar23];
      while (uVar26 == 0) {
        lVar28 = (longlong)iVar23;
        uVar22 = uVar22 + 0x20;
        iVar23 = iVar23 + 1;
        if ((int)((local_228 - 1) + ((int)(local_228 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) {
          local_710 = CONCAT44(local_710._4_4_,local_228);
          uVar26 = local_228;
          goto LAB_1468b32a0;
        }
        uVar26 = (puVar27 + 1)[lVar28];
      }
      uVar3 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_6a4 = (int)lVar28;
      uVar26 = (uVar22 - 1) + local_6a4;
      if ((int)local_228 < (int)uVar26) {
        uVar26 = local_228;
      }
      local_710 = CONCAT44(local_710._4_4_,uVar26);
    }
LAB_1468b32a0:
    while( true ) {
      puVar25 = local_620;
      if (*(int *)(local_620 + 0x188) - *(int *)(local_620 + 0x1ac) != (int)uStack_5f8) {
        local_736[0] = 0;
        `TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_736);
      }
      if (((TStack_618.CurrentBitIndex == uVar26) &&
          (TStack_618.Array ==
           (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)(local_3c8 + 400))
          ) && (puVar25 == local_3c8)) break;
      if (*(undefined1 **)(puVar25 + 0x180) != (undefined1 *)0x0) {
        puVar25 = *(undefined1 **)(puVar25 + 0x180);
      }
      this_01 = (FHierarchicalBlendTarget *)(puVar25 + (longlong)TStack_618.CurrentBitIndex * 0x18);
      uVar22 = UE::MovieScene::FHierarchicalBlendTarget::Num(this_01);
      local_734 = uVar22;
      UE::MovieScene::FHierarchicalBlendTarget::AsArray(this_01,&local_548);
      local_690 = local_548.DataPtr + local_548.ArrayNum;
      if (local_548.DataPtr != local_690) {
        this_02 = (TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                   *)&local_708->CachedHierarchicalBlendTargetChannels;
        psVar30 = local_548.DataPtr;
        do {
          sVar4 = *psVar30;
          local_478._0_2_ = sVar4;
          UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget
                    ((FHierarchicalBlendTarget *)(local_478 + 8),this_01);
          uVar29 = (uint)(short)local_478._0_2_;
          uVar26 = UE::MovieScene::GetTypeHash((FHierarchicalBlendTarget *)(local_478 + 8));
          iVar23 = TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>_>
                             (this_02,uVar29 * 0x40 + (uVar29 >> 2) + uVar26 + 0x9e3779b9 ^ uVar29,
                              (TTuple<short,UE::MovieScene::FHierarchicalBlendTarget> *)local_478);
          UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget
                    ((FHierarchicalBlendTarget *)(local_478 + 8));
          if (iVar23 == -1) {
            local_6f0._0_6_ = CONCAT42(0xffff,(undefined2)local_6f0);
            pFVar17 = TSortedMap<short,`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l5::FHBiasChannelData,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TGreater<void>_>
                      ::Find(local_4c8,sVar4);
            if ((pFVar17 == (FHBiasChannelData *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Value != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                                    ,0x141,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar13 = local_6f0;
            local_6f0 = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                        CONCAT62(local_6f0._2_6_,pFVar17->AccumulatorChannelID);
            uVar14 = local_6f0;
            local_6f0._7_1_ = SUB81(uVar13,7);
            local_6f0._0_6_ = (undefined6)uVar14;
            local_6f0._0_7_ = CONCAT16(1,(undefined6)local_6f0);
            if ((pUVar6->PreAllocatedComputationData).BlendTargetStartIndex == -1) {
              (pUVar6->PreAllocatedComputationData).BlendTargetStartIndex =
                   (pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
            }
            iVar23 = (pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
            piVar1 = &(pUVar6->PreAllocatedComputationData).Channels.ArrayMax;
            uVar5 = (undefined2)(pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
            if (iVar23 == *piVar1) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,(ForAnyElementType *)this_03,piVar1);
            }
            (pUVar6->PreAllocatedComputationData).Channels.ArrayNum = iVar23 + 1;
            pFVar7 = (this_03->Channels).AllocatorInstance.Data;
            pFVar2 = pFVar7 + (longlong)iVar23 * 0x18;
            *(undefined8 *)pFVar2 = uVar11;
            *(undefined8 *)(pFVar2 + 8) = uVar12;
            *(TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> **)
             (pFVar7 + (longlong)iVar23 * 0x18 + 0x10) = local_6f0;
            local_720[0] = uVar5;
            if (local_734 != uVar22) {
              iVar23 = (pUVar6->PreAllocatedComputationData).Channels.ArrayNum;
              uVar29 = iVar23 - 2;
              uVar26 = 0;
              if ((int)uVar29 < iVar23) {
                uVar26 = ~uVar29 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined2 *)
               ((this_03->Channels).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x18 + 0x12) =
                   uVar5;
            }
            local_460[0] = sVar4;
            UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_458,this_01);
            local_5c8 = local_460;
            local_5c0 = local_720;
            this_02 = (TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                       *)&local_708->CachedHierarchicalBlendTargetChannels;
            TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>_&&,unsigned_short_const_&>_>
                      (this_02,&local_6a0,(bool *)&local_5c8);
            UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_458);
            uVar22 = uVar22 - 1;
          }
          psVar30 = psVar30 + 1;
        } while (psVar30 != local_690);
        uVar26 = (uint)local_710;
      }
      TStack_618.UnvisitedBitMask = TStack_618.UnvisitedBitMask & ~TStack_618._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit(&TStack_618);
    }
    local_1f0 = 0;
    if (local_1f8 != (void *)0x0) {
      FMemory::Free(local_1f8);
    }
    TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ((TSparseArray<TSparseSetElement<UE::MovieScene::FHierarchicalBlendTarget>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *)local_3c8);
    pFVar16 = local_6d0;
    this = local_708;
    if (local_488 != (undefined1 *)0x0) {
      FMemory::Free(local_488);
      pFVar16 = local_6d0;
      this = local_708;
    }
  }
  local_718.Value = *(ushort *)&pFVar16->InstanceHandle;
  local_716 = pFVar16->HierarchicalBlendTarget;
  local_5b8._First = &local_718;
  local_5b8._Last = local_714;
  local_448.AllMask.Bits.NumBits = 0;
  local_448.AllMask.Bits.MaxBits = 0x180;
  local_448.NoneMask.Bits.NumBits = 0;
  local_448.NoneMask.Bits.MaxBits = 0x180;
  local_448.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_448.ComplexMasks.ArrayNum = 0;
  local_448.ComplexMasks.ArrayMax = 0;
  UE::MovieScene::FComponentMask::SetAll(&local_448.AllMask,&local_5b8);
  if (this->bChannelsHaveBeenInvalidated == false) {
    local_724.Value = (pFVar16->Tags).NeedsLink.Value;
    local_5a8._First = &local_724;
    local_5a8._Last = &local_722;
    UE::MovieScene::FComponentMask::SetAll(&local_448.AllMask,&local_5a8);
  }
  local_4d0.Value = (pFVar16->Tags).NeedsUnlink.Value;
  local_4ce = pFVar16->HierarchicalEasingProvider;
  local_4cc = (pFVar16->Tags).ImportedEntity.Value;
  local_598._First = &local_4d0;
  local_598._Last = &local_4ca;
  UE::MovieScene::FComponentMask::SetAll(&local_448.NoneMask,&local_598);
  lVar28 = this->_padding_;
  local_688.StaleEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.StaleEntities.ArrayNum = 0;
  local_688.StaleEntities.ArrayMax = 0;
  local_688.BuiltInComponents = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_688.Factories = *(FEntityFactories **)(lVar28 + 0x288);
  local_688._padding_ = (longlong)&___7FConsumerEasingChannelMutation_MovieScene_UE__6B_;
  local_660 = &this->CachedInstanceIDToChannel;
  local_658 = &this->CachedHierarchicalBlendTargetChannels;
  UE::MovieScene::FEntityManager::MutateConditional
            ((FEntityManager *)(this->_padding_ + 0x28),&local_448,
             (IMovieSceneConditionalEntityMutation *)&local_688,All);
  if (((this->bChannelsHaveBeenInvalidated == false) && (local_688.StaleEntities.ArrayNum != 0)) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5842741950335157247>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                          ,0x3ff,
                          "bChannelsHaveBeenInvalidated || !ConsumerMutation.HasStaleComponents()"),
     bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UE::MovieScene::FEasingChannelMutationBase::RemoveStaleComponents
            (&local_688,(UMovieSceneEntitySystemLinker *)this->_padding_);
  if (local_688.StaleEntities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.StaleEntities.AllocatorInstance.Data);
  }
  local_688._padding_ = (longlong)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
  if (local_448.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_1e8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 1468b7a40

UClass * __cdecl UMovieSceneHierarchicalEasingInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalEasingInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneHierarchicalEasingInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingInstantiatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.InnerSingleton;
}

// IsRelevantImpl @ 1468bc940

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::IsRelevantImpl
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this,
          UMovieSceneEntitySystemLinker *param_1)

{
  TComponentTypeID<FMovieSceneSequenceID> TVar1;
  ushort uVar2;
  FBuiltInComponentTypes *pFVar3;
  FComponentMask *pFVar4;
  
  if (*(int *)&(this->CachedInstanceIDToChannel).field_0x8 ==
      *(int *)&(this->CachedInstanceIDToChannel).field_0x34) {
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    TVar1 = pFVar3->HierarchicalEasingProvider;
    pFVar4 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
    if (((TVar1 == (TComponentTypeID<FMovieSceneSequenceID>)0xffff) ||
        ((pFVar4->Bits).NumBits <= (int)(uint)(ushort)TVar1)) ||
       ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[(ushort)TVar1 >> 5].Pad >>
         ((ushort)TVar1 & 0x1f) & 1) == 0)) {
      pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
      uVar2 = (pFVar3->Tags).BlendHierarchicalBias.Value;
      pFVar4 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
      if (((uVar2 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar2)) ||
         ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) &
          1) == 0)) {
        return false;
      }
    }
  }
  return true;
}

// OnLink @ 1468c0ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::OnLink
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *this_00;
  UWeightAndEasingEvaluatorSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = UWeightAndEasingEvaluatorSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UWeightAndEasingEvaluatorSystem *)
           UMovieSceneEntitySystemLinker::LinkSystem
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar2 != (UWeightAndEasingEvaluatorSystem *)0x0) {
    pUVar3 = UWeightAndEasingEvaluatorSystem::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->EvaluatorSystem).field0_0x0.DebugPtr = pUVar2;
      FMovieSceneEntitySystemGraph::AddReference
                ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
                 (UMovieSceneEntitySystem *)this,(UMovieSceneEntitySystem *)pUVar2);
      return;
    }
    pFVar4 = GetTypeName<UWeightAndEasingEvaluatorSystem>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                       (&local_18,(UMovieSceneEntitySystem *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UWeightAndEasingEvaluatorSystem>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// OnRun @ 1468c13f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::OnRun
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  undefined1 *puVar1;
  TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *pTVar2;
  ushort uVar3;
  longlong lVar4;
  FInstanceRegistry *pFVar5;
  UWeightAndEasingEvaluatorSystem *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FBuiltInComponentTypes *pFVar12;
  FScriptContainerElement *this_00;
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  FVar13;
  ForAnyElementType FVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined1 auStackY_15c8 [32];
  FComponentTypeID local_1598;
  FComponentTypeID local_1596;
  FComponentTypeID local_1594;
  FComponentTypeID local_1592;
  FComponentTypeID local_1590;
  FComponentTypeID local_158e;
  FComponentTypeID local_158c;
  FComponentTypeID local_158a;
  FComponentTypeID local_1588;
  FComponentTypeID local_1586;
  undefined4 local_1584;
  FComponentTypeID local_1580;
  FComponentTypeID local_157e;
  FComponentTypeID local_157c;
  ushort local_157a;
  FComponentTypeID local_1578;
  ushort local_1576;
  FComponentTypeID local_1574;
  TComponentTypeID<FMovieSceneSequenceID> local_1572;
  FComponentTypeID local_1570 [4];
  FBuiltInComponentTypes *local_1568;
  UMovieSceneHierarchicalEasingInstantiatorSystem *local_1560;
  FEasingChannelMutationBase local_1558;
  TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
  *local_1530;
  FEasingChannelMutationBase local_1528;
  TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *local_1500;
  undefined8 local_14f8;
  FEasingChannelMutationBase local_14f0;
  TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *local_14c8;
  undefined8 local_14c0;
  undefined8 local_14b0;
  TStatIdData *pTStack_14a8;
  byte local_14a0;
  undefined7 uStack_149f;
  undefined4 uStack_1498;
  uint uStack_1494;
  undefined8 local_1488;
  TStatIdData *pTStack_1480;
  byte local_1478;
  undefined7 uStack_1477;
  undefined4 uStack_1470;
  uint uStack_146c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1468;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1458;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1448;
  <lambda_1> local_1438;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1428;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1418;
  <lambda_2> local_1408;
  initializer_list<UE::MovieScene::FComponentTypeID> local_13f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_13e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_13d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_13c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_13b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_13a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1388;
  undefined2 local_1378;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_1376;
  TComponentTypeID<FMovieSceneSequenceID> TStack_1374;
  undefined2 uStack_1372;
  undefined8 uStack_1370;
  TStatIdData *pTStack_1368;
  ulonglong uStack_1360;
  undefined8 uStack_1358;
  undefined2 local_1350;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_134e;
  TComponentTypeID<FMovieSceneSequenceID> TStack_134c;
  undefined2 uStack_134a;
  undefined8 uStack_1348;
  TStatIdData *pTStack_1340;
  ulonglong uStack_1338;
  undefined8 uStack_1330;
  FComponentTypeID local_1328;
  TComponentTypeID<unsigned_short> local_1326;
  ushort local_1324;
  FComponentTypeID local_1322;
  FComponentTypeID local_1320;
  TComponentTypeID<FMovieSceneSequenceID> local_131e;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> local_131c;
  ushort local_131a;
  FComponentTypeID local_1318;
  TComponentTypeID<FMovieSceneSequenceID> local_1316;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> local_1314;
  ushort local_1312;
  FComponentTypeID local_1310 [4];
  FEntityComponentFilter local_1308;
  FEntityComponentFilter local_1288;
  FEntityComponentFilter local_1208;
  FEntityComponentFilter local_1188;
  undefined1 local_1108 [4];
  FComponentAccess aFStack_1104 [2];
  wchar_t *pwStack_1100;
  TStatIdData *local_10f8;
  ulonglong uStack_10f0;
  undefined8 local_10e8;
  FEntityComponentFilter local_10e0;
  undefined4 local_1030;
  undefined4 local_102c;
  undefined4 local_ff8;
  undefined4 local_ff4;
  FEntityComponentFilter local_fe8;
  FEntityComponentFilter local_f68;
  undefined1 local_ee8 [4];
  FComponentAccess aFStack_ee4 [2];
  wchar_t *pwStack_ee0;
  TStatIdData *local_ed8;
  ulonglong uStack_ed0;
  undefined8 local_ec8;
  FEntityComponentFilter local_ec0;
  undefined4 local_e10;
  undefined4 local_e0c;
  undefined4 local_dd8;
  undefined4 local_dd4;
  TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
  local_dc8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_15c8;
  local_1560 = this;
  pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar4 = this->_padding_;
  local_1568 = pFVar12;
  if ((*(longlong *)(lVar4 + 0x580) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = *(FInstanceRegistry **)(lVar4 + 0x580);
  local_1308.AllMask.Bits.MaxBits = 0x180;
  local_1308.AllMask.Bits.NumBits = 0;
  local_1308.NoneMask.Bits.NumBits = 0;
  local_1308.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1308.ComplexMasks.ArrayNum = 0;
  local_1308.ComplexMasks.ArrayMax = 0;
  local_1308.NoneMask.Bits.MaxBits = 0x180;
  local_1594.Value = *(ushort *)&pFVar12->HierarchicalEasingProvider;
  local_1398._First = &local_1594;
  local_1398._Last = &local_1592;
  UE::MovieScene::FComponentMask::SetAll(&local_1308.AllMask,&local_1398);
  local_157c.Value = (pFVar12->Tags).NeedsLink.Value;
  local_157a = (pFVar12->Tags).NeedsUnlink.Value;
  iVar11 = local_1308.ComplexMasks.ArrayNum;
  if (local_1308.ComplexMasks.ArrayNum == local_1308.ComplexMasks.ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x43c,&local_1308.ComplexMasks.AllocatorInstance,
                        &local_1308.ComplexMasks.ArrayMax);
  }
  local_1308.ComplexMasks.ArrayNum = iVar11 + 1;
  local_1388._First = &local_157c;
  this_00 = local_1308.ComplexMasks.AllocatorInstance.Data + (longlong)iVar11 * 0x3c;
  local_1388._Last = &local_1578;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_1388);
  local_f68.AllMask.Bits.NumBits = 0;
  local_f68.AllMask.Bits.MaxBits = 0x180;
  local_f68.NoneMask.Bits.NumBits = 0;
  local_f68.NoneMask.Bits.MaxBits = 0x180;
  local_f68.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f68.ComplexMasks.ArrayNum = 0;
  local_f68.ComplexMasks.ArrayMax = 0;
  local_1578.Value = (pFVar12->Tags).SubInstance.Value;
  local_1576 = (pFVar12->Tags).NeedsLink.Value;
  local_1468._First = &local_1578;
  local_1468._Last = &local_1574;
  UE::MovieScene::FComponentMask::SetAll(&local_f68.AllMask,&local_1468);
  local_fe8.AllMask.Bits.NumBits = 0;
  local_fe8.AllMask.Bits.MaxBits = 0x180;
  local_fe8.NoneMask.Bits.NumBits = 0;
  local_fe8.NoneMask.Bits.MaxBits = 0x180;
  local_fe8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_fe8.ComplexMasks.ArrayNum = 0;
  local_fe8.ComplexMasks.ArrayMax = 0;
  local_1328.Value = (pFVar12->Tags).SubInstance.Value;
  local_1326 = pFVar12->HierarchicalEasingChannel;
  local_1324 = (pFVar12->Tags).NeedsUnlink.Value;
  local_1458._First = &local_1328;
  local_1458._Last = &local_1322;
  UE::MovieScene::FComponentMask::SetAll(&local_fe8.AllMask,&local_1458);
  bVar9 = UE::MovieScene::FEntityManager::Contains
                    ((FEntityManager *)(this->_padding_ + 0x28),&local_1308);
  if (((bVar9) ||
      (bVar9 = UE::MovieScene::FEntityManager::Contains
                         ((FEntityManager *)(this->_padding_ + 0x28),&local_f68), bVar9)) ||
     (bVar10 = UE::MovieScene::FEntityManager::Contains
                         ((FEntityManager *)(this->_padding_ + 0x28),&local_fe8), bVar9 = false,
     bVar10)) {
    bVar9 = true;
  }
  this->bChannelsHaveBeenInvalidated = bVar9;
  if (bVar9 == false) {
    local_1584 = CONCAT22((pFVar12->Tags).NeedsLink.Value,pFVar12->InstanceHandle);
    local_13b8._First = (FComponentTypeID *)&local_1584;
    local_13b8._Last = &local_1580;
    local_1188.AllMask.Bits.NumBits = 0;
    local_1188.AllMask.Bits.MaxBits = 0x180;
    local_1188.NoneMask.Bits.NumBits = 0;
    local_1188.NoneMask.Bits.MaxBits = 0x180;
    local_1188.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1188.ComplexMasks.ArrayNum = 0;
    local_1188.ComplexMasks.ArrayMax = 0;
    UE::MovieScene::FComponentMask::SetAll(&local_1188.AllMask,&local_13b8);
    local_1320.Value = (pFVar12->Tags).NeedsUnlink.Value;
    local_131e = pFVar12->HierarchicalEasingProvider;
    local_131c = pFVar12->HierarchicalBlendTarget;
    local_131a = (pFVar12->Tags).ImportedEntity.Value;
    local_13a8._First = &local_1320;
    local_13a8._Last = &local_1318;
    UE::MovieScene::FComponentMask::SetAll(&local_1188.NoneMask,&local_13a8);
    lVar4 = this->_padding_;
    local_14f0.StaleEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_14f0.StaleEntities.ArrayNum = 0;
    local_14f0.StaleEntities.ArrayMax = 0;
    local_14f0.BuiltInComponents = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_14f0.Factories = *(FEntityFactories **)(lVar4 + 0x288);
    local_14c0 = 0;
    local_14f0._padding_ = (longlong)&___7FConsumerEasingChannelMutation_MovieScene_UE__6B_;
    local_14c8 = &this->CachedInstanceIDToChannel;
    UE::MovieScene::FEntityManager::MutateConditional
              ((FEntityManager *)(this->_padding_ + 0x28),&local_1188,
               (IMovieSceneConditionalEntityMutation *)&local_14f0,All);
    UE::MovieScene::FEasingChannelMutationBase::RemoveStaleComponents
              (&local_14f0,(UMovieSceneEntitySystemLinker *)this->_padding_);
    if (local_14f0.StaleEntities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14f0.StaleEntities.AllocatorInstance.Data);
    }
    local_14f0._padding_ = (longlong)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
    FVar14.Data = local_1188.ComplexMasks.AllocatorInstance.Data;
  }
  else {
    local_1438.SequenceDataMap = &local_dc8;
    local_1408.SequenceDataMap = &local_dc8;
    TStack_1376 = pFVar12->RootInstanceHandle;
    TStack_1374 = pFVar12->HierarchicalEasingProvider;
    local_1590.Value = (pFVar12->Tags).NeedsUnlink.Value;
    local_1488 = 0;
    pTStack_1480 = &TStatId::TStatId_NAME_None;
    uStack_1470 = 0x6ff;
    uStack_146c = uStack_146c & 0xffffff00;
    uStack_1360 = CONCAT71(uStack_1477,local_1478) & 0xffffffffffffffe0;
    uStack_1358._4_4_ = uStack_146c;
    uStack_1358._0_4_ = AnyHiPriThreadHiPriTask;
    uStack_1370 = 0;
    pTStack_1368 = &TStatId::TStatId_NAME_None;
    local_ee8._2_2_ = TStack_1376;
    local_ee8._0_2_ = local_1378;
    unique0x100006fa = TStack_1374;
    unique0x100006fc = uStack_1372;
    local_dc8.Pairs.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
          )0x0;
    local_dc8.Pairs.ArrayNum = 0;
    local_dc8.Pairs.ArrayMax = 8;
    pwStack_ee0 = (wchar_t *)0x0;
    local_ed8 = &TStatId::TStatId_NAME_None;
    local_ec0.AllMask.Bits.NumBits = 0;
    local_ec0.AllMask.Bits.MaxBits = 0x180;
    local_ec0.NoneMask.Bits.NumBits = 0;
    local_ec0.NoneMask.Bits.MaxBits = 0x180;
    local_ec0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ec0.ComplexMasks.ArrayNum = 0;
    local_ec0.ComplexMasks.ArrayMax = 0;
    local_e10 = 0;
    local_e0c = 0x180;
    local_dd8 = 0;
    local_dd4 = 0x180;
    local_1478 = local_1478 & 0xe0;
    local_1438.InstanceRegistry = pFVar5;
    local_1408.InstanceRegistry = pFVar5;
    uStack_ed0 = uStack_1360;
    local_ec8 = uStack_1358;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_ee8 + 2),&local_ec0);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_ee8 + 4),&local_ec0);
    local_1448._First = &local_1590;
    local_1448._Last = &local_158e;
    UE::MovieScene::FComponentMask::SetAll(&local_ec0.NoneMask,&local_1448);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
    ::
    Iterate_PerEntityImpl<_UMovieSceneHierarchicalEasingInstantiatorSystem::OnRun_::__l5::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
                *)local_ee8,(FEntityManager *)(this->_padding_ + 0x28),&local_ec0,&local_1438);
    if (local_ec0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ec0.ComplexMasks.AllocatorInstance.Data);
    }
    TStack_134e = pFVar12->RootInstanceHandle;
    TStack_134c = pFVar12->SequenceID;
    local_158c.Value = (pFVar12->Tags).SubInstance.Value;
    local_14b0 = 0;
    pTStack_14a8 = &TStatId::TStatId_NAME_None;
    uStack_1498 = 0x6ff;
    uStack_1494 = uStack_1494 & 0xffffff00;
    uStack_1338 = CONCAT71(uStack_149f,local_14a0) & 0xffffffffffffffe0;
    uStack_1330._4_4_ = uStack_1494;
    uStack_1330._0_4_ = AnyHiPriThreadHiPriTask;
    uStack_1348 = 0;
    pTStack_1340 = &TStatId::TStatId_NAME_None;
    local_10e0.AllMask.Bits.NumBits = 0;
    local_1108._2_2_ = TStack_134e;
    local_1108._0_2_ = local_1350;
    unique0x1000070c = TStack_134c;
    unique0x1000070e = uStack_134a;
    local_10e0.AllMask.Bits.MaxBits = 0x180;
    local_10e0.NoneMask.Bits.NumBits = 0;
    local_10e0.NoneMask.Bits.MaxBits = 0x180;
    pwStack_1100 = (wchar_t *)0x0;
    local_10f8 = &TStatId::TStatId_NAME_None;
    local_10e0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_10e0.ComplexMasks.ArrayNum = 0;
    local_10e0.ComplexMasks.ArrayMax = 0;
    local_1030 = 0;
    local_102c = 0x180;
    local_ff8 = 0;
    local_ff4 = 0x180;
    local_14a0 = local_14a0 & 0xe0;
    uStack_10f0 = uStack_1338;
    local_10e8 = uStack_1330;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1108 + 2),&local_10e0);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1108 + 4),&local_10e0);
    local_1428._First = &local_158c;
    local_1428._Last = &local_158a;
    UE::MovieScene::FComponentMask::SetAll(&local_10e0.AllMask,&local_1428);
    local_1588.Value = (pFVar12->Tags).NeedsUnlink.Value;
    local_1418._First = &local_1588;
    local_1418._Last = &local_1586;
    UE::MovieScene::FComponentMask::SetAll(&local_10e0.NoneMask,&local_1418);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
    ::
    Iterate_PerEntityImpl<_UMovieSceneHierarchicalEasingInstantiatorSystem::OnRun_::__l5::<lambda_2>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
                *)local_1108,(FEntityManager *)(this->_padding_ + 0x28),&local_10e0,&local_1408);
    if (local_10e0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10e0.ComplexMasks.AllocatorInstance.Data);
    }
    pUVar6 = (this->EvaluatorSystem).field0_0x0.DebugPtr;
    piVar15 = &(pUVar6->PreAllocatedComputationData).Channels.ArrayMax;
    (pUVar6->PreAllocatedComputationData).Channels.ArrayNum = 0;
    if (*piVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&pUVar6->PreAllocatedComputationData,0,piVar15);
    }
    pTVar2 = &this->CachedInstanceIDToChannel;
    (pUVar6->PreAllocatedComputationData).BlendTargetStartIndex = -1;
    puVar1 = &(this->CachedInstanceIDToChannel).field_0xc;
    *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x34 = 0;
    iVar11 = *(int *)&(this->CachedInstanceIDToChannel).field_0x2c;
    *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x28 = 0;
    if ((iVar11 < 0) || (0x80 < iVar11)) {
      *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->CachedInstanceIDToChannel).field_0x10,0);
    }
    uVar16 = (ulonglong)local_dc8.Pairs.ArrayNum;
    local_1584 = local_dc8.Pairs.ArrayNum;
    FVar13 = (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
              )&local_dc8;
    if (local_dc8.Pairs.AllocatorInstance.SecondaryData !=
        (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
         )0x0) {
      FVar13 = local_dc8.Pairs.AllocatorInstance.SecondaryData;
    }
    lVar4 = uVar16 * 0x1b0;
    piVar15 = (int *)((longlong)FVar13 + 0x1a0);
    while( true ) {
      if (local_dc8.Pairs.ArrayNum != (uint)uVar16) {
        `TCheckedPointerIterator<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1570);
      }
      pFVar12 = local_1568;
      if ((TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *)
          (piVar15 + -0x68) ==
          (TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *)
          ((longlong)FVar13 + lVar4)) break;
      uVar3 = *(ushort *)(piVar15 + 2);
      iVar11 = 0;
      lVar7 = *(longlong *)(*(longlong *)(piVar15 + -0x66) + 8);
      if (0 < *piVar15) {
        do {
          UE::MovieScene::FRootSequenceData::ProduceChannelForIndex
                    ((FRootSequenceData *)(piVar15 + -0x66),iVar11,
                     (FSequenceInstance *)((ulonglong)uVar3 * 0x140 + lVar7),pTVar2,
                     &pUVar6->PreAllocatedComputationData);
          iVar11 = iVar11 + 1;
        } while (iVar11 < *piVar15);
      }
      uVar16 = (ulonglong)local_1584;
      piVar15 = piVar15 + 0x6c;
    }
    local_1288.AllMask.Bits.NumBits = 0;
    local_1288.AllMask.Bits.MaxBits = 0x180;
    local_1288.NoneMask.Bits.NumBits = 0;
    local_1574.Value = *(ushort *)&local_1568->RootInstanceHandle;
    local_1572 = local_1568->HierarchicalEasingProvider;
    local_13f8._First = &local_1574;
    local_13f8._Last = local_1570;
    local_1288.NoneMask.Bits.MaxBits = 0x180;
    local_1288.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1288.ComplexMasks.ArrayNum = 0;
    local_1288.ComplexMasks.ArrayMax = 0;
    UE::MovieScene::FComponentMask::SetAll(&local_1288.AllMask,&local_13f8);
    local_1598.Value = (pFVar12->Tags).NeedsUnlink.Value;
    local_13e8._First = &local_1598;
    local_13e8._Last = &local_1596;
    UE::MovieScene::FComponentMask::SetAll(&local_1288.NoneMask,&local_13e8);
    this = local_1560;
    local_1558.StaleEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1558.StaleEntities.ArrayNum = 0;
    local_1558.StaleEntities.ArrayMax = 0;
    lVar4 = local_1560->_padding_;
    local_1558.BuiltInComponents = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_1558.Factories = *(FEntityFactories **)(lVar4 + 0x288);
    local_1558._padding_ = (longlong)&___7FProviderEasingChannelMutation_MovieScene_UE__6B_;
    local_1530 = &local_dc8;
    UE::MovieScene::FEntityManager::MutateConditional
              ((FEntityManager *)(this->_padding_ + 0x28),&local_1288,
               (IMovieSceneConditionalEntityMutation *)&local_1558,All);
    UE::MovieScene::FEasingChannelMutationBase::RemoveStaleComponents
              (&local_1558,(UMovieSceneEntitySystemLinker *)this->_padding_);
    if (local_1558.StaleEntities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1558.StaleEntities.AllocatorInstance.Data);
    }
    local_1558._padding_ = (longlong)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
    if (local_1288.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1288.ComplexMasks.AllocatorInstance.Data);
    }
    local_1580.Value = *(ushort *)&pFVar12->InstanceHandle;
    local_13d8._First = &local_1580;
    local_1208.AllMask.Bits.NumBits = 0;
    local_13d8._Last = &local_157e;
    local_1208.AllMask.Bits.MaxBits = 0x180;
    local_1208.NoneMask.Bits.NumBits = 0;
    local_1208.NoneMask.Bits.MaxBits = 0x180;
    local_1208.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1208.ComplexMasks.ArrayNum = 0;
    local_1208.ComplexMasks.ArrayMax = 0;
    UE::MovieScene::FComponentMask::SetAll(&local_1208.AllMask,&local_13d8);
    local_1318.Value = (pFVar12->Tags).NeedsUnlink.Value;
    local_1316 = pFVar12->HierarchicalEasingProvider;
    local_1314 = pFVar12->HierarchicalBlendTarget;
    local_1312 = (pFVar12->Tags).ImportedEntity.Value;
    local_13c8._First = &local_1318;
    local_13c8._Last = local_1310;
    UE::MovieScene::FComponentMask::SetAll(&local_1208.NoneMask,&local_13c8);
    lVar4 = this->_padding_;
    local_1528.StaleEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1528.StaleEntities.ArrayNum = 0;
    local_1528.StaleEntities.ArrayMax = 0;
    local_1528.BuiltInComponents = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_1528.Factories = *(FEntityFactories **)(lVar4 + 0x288);
    local_1528._padding_ = (longlong)&___7FConsumerEasingChannelMutation_MovieScene_UE__6B_;
    local_14f8 = 0;
    local_1500 = pTVar2;
    UE::MovieScene::FEntityManager::MutateConditional
              ((FEntityManager *)(this->_padding_ + 0x28),&local_1208,
               (IMovieSceneConditionalEntityMutation *)&local_1528,All);
    UE::MovieScene::FEasingChannelMutationBase::RemoveStaleComponents
              (&local_1528,(UMovieSceneEntitySystemLinker *)this->_padding_);
    if (local_1528.StaleEntities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1528.StaleEntities.AllocatorInstance.Data);
    }
    local_1528._padding_ = (longlong)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
    if (local_1208.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1208.ComplexMasks.AllocatorInstance.Data);
    }
    FVar13 = (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
              )&local_dc8;
    if (local_dc8.Pairs.AllocatorInstance.SecondaryData !=
        (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
         )0x0) {
      FVar13 = local_dc8.Pairs.AllocatorInstance.SecondaryData;
    }
    DestructItems<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,int>
              ((TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *)
               FVar13,local_dc8.Pairs.ArrayNum);
    FVar14.Data = (FScriptContainerElement *)local_dc8.Pairs.AllocatorInstance.SecondaryData;
  }
  if ((ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
       )FVar14.Data !=
      (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
       )0x0) {
    FMemory::Free(FVar14.Data);
  }
  FinalizeBlendTargets(this);
  if (local_fe8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fe8.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_f68.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f68.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_1308.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1308.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnUnlink @ 1468c4200

void __thiscall
UMovieSceneHierarchicalEasingInstantiatorSystem::OnUnlink
          (UMovieSceneHierarchicalEasingInstantiatorSystem *this)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &(this->CachedInstanceIDToChannel).field_0xc;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->CachedInstanceIDToChannel,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x34 = 0;
  iVar2 = *(int *)&(this->CachedInstanceIDToChannel).field_0x2c;
  *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CachedInstanceIDToChannel).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedInstanceIDToChannel).field_0x10
               ,0);
  }
  return;
}

// StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem @ 1468d0140

void __cdecl
UMovieSceneHierarchicalEasingInstantiatorSystem::
StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem(void)

{
  return;
}

