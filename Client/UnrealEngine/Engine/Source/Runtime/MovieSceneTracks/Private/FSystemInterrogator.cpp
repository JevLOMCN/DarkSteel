// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 21

// FSystemInterrogator @ 146616bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FSystemInterrogator * __thiscall
UE::MovieScene::FSystemInterrogator::FSystemInterrogator(FSystemInterrogator *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TSharedPtr<UE::MovieScene::FInitialValueCache,1> *pTVar1;
  uint *puVar2;
  FInitialValueCache *pFVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension> TVar8;
  TEntitySystemLinkerExtensionID<UE::MovieScene::FInitialValueCache> TVar9;
  TSharedPtr<UE::MovieScene::FInitialValueCache,1> *pTVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  UMovieSceneEntitySystemLinker *pUVar13;
  undefined4 extraout_var;
  FSystemInterrogator *pFVar14;
  undefined4 extraout_var_00;
  FSparseArrayAllocationInfo *pFVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ForElementType<unsigned_int> FVar20;
  undefined1 auStack_108 [40];
  TSharedPtr<UE::MovieScene::FInitialValueCache,1> local_e0;
  FSparseArrayAllocationInfo local_d0;
  FSparseArrayAllocationInfo local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  *(undefined8 *)&(this->Channels).ObjectToChannel = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__MovieScene__IInterrogationExtension__;
  this_00 = &(this->Channels).ActiveChannelBits;
  *(undefined8 *)&(this->Channels).ObjectToChannel.field_0x8 = 0;
  *(undefined8 *)&(this->Channels).ObjectToChannel.field_0x20 = 0;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x28 = 0;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x2c = 0x80;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x34 = 0;
  *(undefined8 *)&(this->Channels).ObjectToChannel.field_0x40 = 0;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x48 = 0;
  (this->Channels).SparseChannelInfo.ChannelInfo.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Channels).SparseChannelInfo.ChannelInfo.Pairs.ArrayNum = 0;
  (this->Channels).SparseChannelInfo.ChannelInfo.Pairs.ArrayMax = 0;
  (this->Channels).ActiveChannelBits.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Channels).ActiveChannelBits.NumBits = 0;
  (this->Channels).ActiveChannelBits.MaxBits = 0x80;
  (this->Channels).Interrogations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).Interrogations.ArrayNum = 0;
  (this->Channels).Interrogations.ArrayMax = 0;
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
  FVar20 = (this->Channels).ActiveChannelBits.AllocatorInstance.SecondaryData;
  uVar18 = iVar7 >> 0x1f & 0x1f;
  iVar7 = iVar7 + uVar18;
  if (FVar20 == (ForElementType<unsigned_int>)0x0) {
    FVar20 = (ForElementType<unsigned_int>)this_00;
  }
  puVar2 = (uint *)((longlong)FVar20 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar18 & 0x1f));
  *(undefined8 *)&(this->EntitiesScratch).Elements = 0;
  *(undefined8 *)&(this->EntitiesScratch).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EntitiesScratch).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x34 = 0;
  (this->EntitiesScratch).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EntitiesScratch).HashSize = 0;
  FMovieSceneEntityComponentField::FMovieSceneEntityComponentField(&this->EntityComponentField);
  (this->EntityTracker).Ptr = (FSystemInterrogatorEntityTracker *)0x0;
  pTVar1 = &this->InitialValueCache;
  pTVar1->Object = (FInitialValueCache *)0x0;
  (this->InitialValueCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  *(undefined8 *)&this->ExtraMetaData = 0;
  *(undefined8 *)&(this->ExtraMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->ExtraMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->ExtraMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->ExtraMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtraMetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtraMetaData).field_0x34 = 0;
  pTVar10 = FInitialValueCache::GetGlobalInitialValues(&local_e0);
  if (pTVar1 != pTVar10) {
    pTVar1->Object = pTVar10->Object;
    pTVar10->Object = (FInitialValueCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InitialValueCache).SharedReferenceCount,&pTVar10->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.SharedReferenceCount.ReferenceController);
  pUVar11 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar11,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar12);
  local_a8._8_8_ = pUVar11;
  pUVar13 = (UMovieSceneEntitySystemLinker *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar16 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar13);
  }
  pvVar5 = ThreadLocalStoragePointer;
  uVar17 = (ulonglong)_tls_index;
  (this->Linker).field0_0x0.DebugPtr = pUVar13;
  pUVar13->Role = Interrogation;
  pUVar13 = (this->Linker).field0_0x0.DebugPtr;
  if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar17 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ExcludedFromInterrogation = UMovieSceneEntitySystem::RegisterCustomSystemCategory();
    _Init_thread_footer(&::_TSS0);
  }
  FSystemFilter::DisallowCategory(&pUVar13->SystemFilter,ExcludedFromInterrogation);
  pUVar13 = (this->Linker).field0_0x0.DebugPtr;
  plVar16 = &this->_padding_;
  if (this == (FSystemInterrogator *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  TVar8 = IInterrogationExtension::GetExtensionID();
  uVar18 = *(uint *)CONCAT44(extraout_var,TVar8);
  if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)&(pUVar13->ExtensionsByID).field_0x28)) {
    if ((*(int *)&(pUVar13->ExtensionsByID).field_0x28 <= (int)uVar18) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FSystemInterrogator *)(*pcVar4)();
      return pFVar14;
    }
    puVar19 = *(undefined1 **)&(pUVar13->ExtensionsByID).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(pUVar13->ExtensionsByID).field_0x10;
    }
    if ((*(uint *)(puVar19 + (longlong)((int)(uVar18 + ((int)uVar18 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar18 & 0x1f) & 1) != 0) {
      if (((longlong *)
           *(undefined1 **)(*(longlong *)&pUVar13->ExtensionsByID + (longlong)(int)uVar18 * 8) !=
           plVar16) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExtensionsByID[Index] == InExtension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                             ,0xfd,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FSystemInterrogator *)(*pcVar4)();
        return pFVar14;
      }
      goto LAB_146616f37;
    }
  }
  pFVar15 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                      ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                       &pUVar13->ExtensionsByID,&local_d0,uVar18);
  if (pFVar15->Pointer != (undefined8 *)0x0) {
    *(longlong **)pFVar15->Pointer = plVar16;
  }
LAB_146616f37:
  pUVar13 = (this->Linker).field0_0x0.DebugPtr;
  pFVar3 = pTVar1->Object;
  TVar9 = FInitialValueCache::GetExtensionID();
  uVar18 = *(uint *)CONCAT44(extraout_var_00,TVar9);
  if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)&(pUVar13->ExtensionsByID).field_0x28)) {
    if ((*(int *)&(pUVar13->ExtensionsByID).field_0x28 <= (int)uVar18) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FSystemInterrogator *)(*pcVar4)();
      return pFVar14;
    }
    puVar19 = *(undefined1 **)&(pUVar13->ExtensionsByID).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(pUVar13->ExtensionsByID).field_0x10;
    }
    if ((*(uint *)(puVar19 + (longlong)((int)(uVar18 + ((int)uVar18 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar18 & 0x1f) & 1) != 0) {
      if (*(FInitialValueCache **)
           (*(longlong *)&pUVar13->ExtensionsByID + (longlong)(int)uVar18 * 8) == pFVar3) {
        return this;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExtensionsByID[Index] == InExtension",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0xfd,L"");
      if (!bVar6) {
        return this;
      }
      pcVar4 = (code *)swi(3);
      pFVar14 = (FSystemInterrogator *)(*pcVar4)();
      return pFVar14;
    }
  }
  pFVar15 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                      ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                       &pUVar13->ExtensionsByID,&local_c0,uVar18);
  if (pFVar15->Pointer != (longlong *)0x0) {
    *(FInitialValueCache **)pFVar15->Pointer = pFVar3;
  }
  return this;
}

// ~FSystemInterrogator @ 1466211c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSystemInterrogator::~FSystemInterrogator(FSystemInterrogator *this)

{
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__MovieScene__IInterrogationExtension__;
  TSparseArray<UE::MovieScene::FSystemInterrogator::FExtraMetaData,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FSystemInterrogator::FExtraMetaData,FDefaultSparseArrayAllocator>
            (&this->ExtraMetaData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitialValueCache).SharedReferenceCount.ReferenceController);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this->EntityTracker).Ptr;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField(&this->EntityComponentField);
  (this->EntitiesScratch).HashSize = 0;
  FVar1 = (this->EntitiesScratch).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EntitiesScratch).Elements);
  pFVar2 = (this->Channels).Interrogations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->Channels).ActiveChannelBits.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar2 = (this->Channels).SparseChannelInfo.ChannelInfo.Pairs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x48 = 0;
  pvVar4 = *(void **)&(this->Channels).ObjectToChannel.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Channels);
  this->_padding_ = (longlong)&___7IInterrogationExtension_MovieScene_UE__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddInterrogation @ 146638c40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FSystemInterrogator::AddInterrogation
          (FSystemInterrogator *this,FInterrogationParams *param_1)

{
  int *piVar1;
  TArray<UE::MovieScene::FInterrogationParams,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  code *pcVar7;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  TRange<FFrameNumber> local_d8;
  int local_c8;
  FEntityManager *local_c0;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if ((this->Channels).Interrogations.ArrayNum == 0x7fffffff) {
    local_res8[0] = 0;
    bVar9 = `UE::MovieScene::FInterrogationChannels::AddInterrogation'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar9) {
      return -1;
    }
  }
  iVar10 = (this->Channels).Interrogations.ArrayNum;
  pTVar2 = &(this->Channels).Interrogations;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= param_1) &&
      (param_1 < pFVar5 + (longlong)(this->Channels).Interrogations.ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar10 = (*pcVar7)();
    return iVar10;
  }
  iVar11 = (this->Channels).Interrogations.ArrayNum;
  piVar1 = &(this->Channels).Interrogations.ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Channels).Interrogations.ArrayNum = iVar11 + 1;
  *(FFrameTime *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = param_1->Time;
  if (iVar10 == -1) {
    return -1;
  }
  iVar11 = 0;
  local_c0 = GEntityManagerForDebuggingVisualizers;
  GEntityManagerForDebuggingVisualizers = &((this->Linker).field0_0x0.DebugPtr)->EntityManager;
  this_00 = &this->EntitiesScratch;
  local_d8.LowerBound.Type.Value = '\x02';
  local_d8.LowerBound.Value.Value = 0;
  local_d8.UpperBound.Type.Value = '\x02';
  local_d8.UpperBound.Value.Value = 0;
  if (*(int *)&(this->EntitiesScratch).Elements.field_0x8 !=
      *(int *)&(this->EntitiesScratch).Elements.field_0x34) {
    TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    iVar13 = *(int *)&(this->EntitiesScratch).Elements.field_0xc;
    *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x8 = 0;
    if (iVar13 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->EntitiesScratch).Elements.field_0xc);
    }
    *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x28 = 0;
  }
  FMovieSceneEntityComponentField::QueryPersistentEntities
            (&this->EntityComponentField,(FFrameNumber)(param_1->Time).FrameNumber.Value,&local_d8,
             this_00);
  local_a8 = &(this->EntitiesScratch).Elements.field_0x10;
  iVar13 = *(int *)&(this->EntitiesScratch).Elements.field_0x28;
  uStack_ac = 1;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar13 != 0) {
    puVar16 = *(uint **)&(this->EntitiesScratch).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_a8;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar11;
      local_98 = local_98 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146638e63;
      uVar14 = puVar16[lVar12 + 1];
    }
    uStack_ac = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_c8 = (int)lVar12;
    iStack_9c = local_98 + -1 + local_c8;
    if (iVar13 < iStack_9c) {
LAB_146638e63:
      iStack_9c = iVar13;
    }
  }
  puVar18 = &(this->EntitiesScratch).Elements.field_0x10;
  uVar14 = *(uint *)&(this->EntitiesScratch).Elements.field_0x28;
  uVar17 = uVar14 & 0xffffffe0;
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->EntitiesScratch).Elements.field_0x8 -
              *(int *)&(this->EntitiesScratch).Elements.field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_ac,iVar11);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_res20 = iVar10;
  local_b8 = this_00;
  iStack_b0 = iVar11;
  local_88 = this_00;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
  if (((int)uVar14 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar10 = (*pcVar7)();
    return iVar10;
  }
  iVar10 = local_res20;
  uVar4 = *(uint *)&(this->EntitiesScratch).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar6 = *(undefined1 **)&(this->EntitiesScratch).Elements.field_0x20;
    puVar15 = puVar18;
    if (puVar6 != (undefined1 *)0x0) {
      puVar15 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146638f70;
      uVar14 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_146638f70:
  while( true ) {
    pTVar8 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_80.CurrentBitIndex == uVar14) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) && (pTVar8 == this_00)
       ) break;
    InterrogateEntity(this,iVar10,
                      (FMovieSceneEvaluationFieldEntityQuery *)
                      ((longlong)TStack_80.CurrentBitIndex * 0x1c + *(longlong *)&pTVar8->Elements))
    ;
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  GEntityManagerForDebuggingVisualizers = local_c0;
  return iVar10;
}

// AddReferencedObjects @ 14663ad40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemInterrogator::AddReferencedObjects
          (FSystemInterrogator *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014663ad56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Linker,0,0);
  return;
}

// FindEntityFromOwner @ 146672280

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::FSystemInterrogator::FindEntityFromOwner
          (FSystemInterrogator *this,FInterrogationKey param_1,UObject *param_2,uint param_3)

{
  TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
  *this_00;
  UObject *pUVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_register_0000008c;
  UObject *local_res8;
  uint in_stack_00000028;
  FWeakObjectPtr local_28;
  FImportedInterrogationEntityKey local_1c;
  
  pUVar1 = (UObject *)CONCAT44(in_register_0000008c,param_3);
  if ((this->EntityTracker).Ptr == (FSystemInterrogatorEntityTracker *)0x0) {
    bVar2 = `UE::MovieScene::FSystemInterrogator::FindEntityFromOwner'::__l3::<lambda_1>::operator()
                      (&local_res8);
    if (!bVar2) {
      *(undefined2 *)param_1 = 0xffff;
      goto LAB_1466723ec;
    }
  }
  this_00 = (TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
             *)(this->EntityTracker).Ptr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res8 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
  uVar7 = local_28.ObjectSerialNumber ^ local_28.ObjectIndex ^ in_stack_00000028;
  local_1c.Entity.EntityOwner.WeakPtr = local_28;
  uVar8 = ((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) - uVar7 ^ uVar7 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar8 ^ uVar8 << 8;
  uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar7 ^ uVar8 << 10;
  local_1c.InterrogationKey = (FInterrogationKey)param_2;
  iVar4 = TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FImportedInterrogationEntityKey>
                    (this_00,(uVar7 - uVar6) - uVar8 ^ uVar6 >> 0xf,&local_1c);
  if ((iVar4 == -1) ||
     (lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&this_00->Elements, lVar5 == 0)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *(undefined2 *)(lVar5 + 0x14);
  }
  *(undefined2 *)param_1 = uVar3;
LAB_1466723ec:
  return (FMovieSceneEntityID)param_1.Channel.Value._0_2_;
}

// FindPropertyOutputEntityIDs @ 1466770d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemInterrogator::FindPropertyOutputEntityIDs
          (FSystemInterrogator *this,FPropertyDefinition *param_1,FInterrogationChannel param_2,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  UMovieSceneEntitySystemLinker *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UMovieSceneEntitySystem *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  FString *pFVar12;
  UMovieSceneEntitySystem *pUVar13;
  ushort *puVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  TObjectPtr<UMovieSceneEntitySystemLinker> *pTVar19;
  uint uVar20;
  longlong local_res8;
  UClass *local_80;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00 = (this->Linker).field0_0x0.DebugPtr;
  local_80 = UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_80);
  }
  pUVar9 = UMovieSceneEntitySystemLinker::LinkSystem
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_80);
  if (pUVar9 == (UMovieSceneEntitySystem *)0x0) {
    pFVar12 = GetTypeName<UMovieSceneInterrogatedPropertyInstantiatorSystem>(&local_68);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar18);
  }
  pUVar10 = UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass();
  iVar15 = (int)pUVar10->_padding_;
  if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar15) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar15 * 8)
      != &pUVar10->_padding_)) {
    pFVar12 = GetTypeName<UMovieSceneInterrogatedPropertyInstantiatorSystem>(&local_58);
    pwVar18 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_48,pUVar9);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar18,pwVar17);
  }
  uVar5 = (this->Channels).Interrogations.ArrayNum;
  if (((int)uVar5 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  if (iVar15 < (int)uVar5) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar5 - iVar15,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    DefaultConstructItems<UE::MovieScene::FMovieSceneEntityID,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar8 * 2,uVar5 - iVar15);
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar15) {
      iVar15 = iVar15 - uVar5;
      if (iVar15 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else if (iVar15 == 0) goto LAB_146677273;
      _Dst = (param_3->AllocatorInstance).Data + (longlong)(int)uVar5 * 2;
      iVar8 = (*piVar1 - iVar15) - uVar5;
      if (iVar8 != 0) {
        memmove(_Dst,_Dst + (longlong)iVar15 * 2,(longlong)iVar8 * 2);
      }
      *piVar1 = *piVar1 - iVar15;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
    }
  }
LAB_146677273:
  uVar20 = 0;
  if ((int)uVar5 < 1) {
    return;
  }
  local_res8 = 0;
LAB_1466772c0:
  if ((int)pUVar9[3]._padding_ != *(int *)((longlong)&pUVar9[3].StatID.StatIdPtr + 4)) {
    pUVar13 = pUVar9 + 4;
    if ((UMovieSceneEntitySystem *)pUVar9[4]._padding_ != (UMovieSceneEntitySystem *)0x0) {
      pUVar13 = (UMovieSceneEntitySystem *)pUVar9[4]._padding_;
    }
    iVar15 = *(int *)((longlong)&pUVar13->_padding_ +
                     (ulonglong)((int)pUVar9[4]._padding_ - 1U & (uVar20 ^ param_2.Value)) * 4);
    if (iVar15 != -1) {
      lVar16 = pUVar9[3]._padding_;
      do {
        lVar11 = (longlong)iVar15;
        if ((*(int *)(lVar16 + lVar11 * 0x14) == param_2.Value) &&
           (*(uint *)(lVar16 + 4 + lVar11 * 0x14) == uVar20)) {
          if ((iVar15 == -1) ||
             ((lVar16 = lVar16 + (longlong)iVar15 * 0x14, lVar16 == 0 ||
              (puVar14 = (ushort *)(lVar16 + 8), puVar14 == (ushort *)0x0)))) break;
          uVar2 = *puVar14;
          if ((int)(uint)uVar2 < *(int *)&pUVar9[4].StatID.StatIdPtr) {
            if ((*(int *)&pUVar9[4].StatID.StatIdPtr <= (int)(uint)uVar2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar19 = &pUVar9[4].Linker;
            if (*(TObjectPtr<UMovieSceneEntitySystemLinker> **)&pUVar9[4].SystemCategories !=
                (TObjectPtr<UMovieSceneEntitySystemLinker> *)0x0) {
              pTVar19 = *(TObjectPtr<UMovieSceneEntitySystemLinker> **)&pUVar9[4].SystemCategories;
            }
            if ((*(uint *)((longlong)&pTVar19->field0_0x0 + (ulonglong)(uVar2 >> 5) * 4) >>
                 (uVar2 & 0x1f) & 1) != 0) {
              lVar16 = pUVar9[4]._padding_ + 8 + (ulonglong)*puVar14 * 0x1c;
              if (lVar16 != 0) {
                sVar3 = *(short *)(lVar16 + 0xc);
                if (sVar3 != -1) {
                  if ((*piVar1 <= (int)uVar20) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(short *)((param_3->AllocatorInstance).Data + local_res8) = sVar3;
                  goto LAB_146677526;
                }
                local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_78.ArrayNum = 0;
                local_78.ArrayMax = 0;
                if ((int)pUVar9[3]._padding_ == *(int *)((longlong)&pUVar9[3].StatID.StatIdPtr + 4))
                goto LAB_1466774e2;
                pUVar13 = pUVar9 + 4;
                if ((UMovieSceneEntitySystem *)pUVar9[4]._padding_ != (UMovieSceneEntitySystem *)0x0
                   ) {
                  pUVar13 = (UMovieSceneEntitySystem *)pUVar9[4]._padding_;
                }
                iVar15 = *(int *)((longlong)&pUVar13->_padding_ +
                                 (ulonglong)
                                 ((int)pUVar9[4]._padding_ - 1U & (uVar20 ^ param_2.Value)) * 4);
                if (iVar15 == -1) goto LAB_1466774e2;
                lVar16 = pUVar9[3]._padding_;
                goto LAB_1466774c0;
              }
              break;
            }
          }
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1936009250870394530>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                             ,0x15e,"Outputs.IsValidIndex(*OutputIndex)");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          break;
        }
        iVar15 = *(int *)(lVar16 + 0xc + lVar11 * 0x14);
      } while (iVar15 != -1);
    }
  }
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4998157698391344190>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                     ,0x43e,"PropertyInfo");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  goto LAB_146677526;
  while (iVar15 = *(int *)(lVar16 + 0xc + lVar11 * 0x14), iVar15 != -1) {
LAB_1466774c0:
    lVar11 = (longlong)iVar15;
    if ((*(int *)(lVar16 + lVar11 * 0x14) == param_2.Value) &&
       (*(uint *)(lVar16 + 4 + lVar11 * 0x14) == uVar20)) {
      if ((iVar15 != -1) &&
         ((lVar16 = lVar16 + (longlong)iVar15 * 0x14, lVar16 != 0 &&
          (puVar14 = (ushort *)(lVar16 + 8), puVar14 != (ushort *)0x0)))) {
        TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
        ::MultiFind<TSizedDefaultAllocator<32>_>
                  ((TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
                    *)&pUVar9[2]._padding_,*puVar14,&local_78,false);
        if (local_78.ArrayNum == 1) {
          uVar4 = *(undefined2 *)local_78.AllocatorInstance.Data;
          if ((*piVar1 <= (int)uVar20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined2 *)((param_3->AllocatorInstance).Data + local_res8) = uVar4;
          goto LAB_14667750f;
        }
      }
      break;
    }
  }
LAB_1466774e2:
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4998157698391344200>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                     ,0x448,"InputEntityIDs.Num() == 1");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14667750f:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
LAB_146677526:
  local_res8 = local_res8 + 2;
  uVar20 = uVar20 + 1;
  if ((int)uVar5 <= (int)uVar20) {
    return;
  }
  goto LAB_1466772c0;
}

// GetExcludedFromInterrogationCategory @ 146689f50

EEntitySystemCategory __cdecl
UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ExcludedFromInterrogation = UMovieSceneEntitySystem::RegisterCustomSystemCategory();
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ExcludedFromInterrogation;
}

// GetHierarchy @ 14668a330

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSequenceHierarchy * __thiscall
UE::MovieScene::FSystemInterrogator::GetHierarchy(FSystemInterrogator *this)

{
  return (FMovieSceneSequenceHierarchy *)(this->InitialValueCache).Object;
}

// GetInterrogationCategory @ 14668a510

EEntitySystemCategory __cdecl UE::MovieScene::FSystemInterrogator::GetInterrogationCategory(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Interrogation = UMovieSceneEntitySystem::RegisterCustomSystemCategory();
      _Init_thread_footer(&::_TSS0);
    }
  }
  return Interrogation;
}

// GetReferencerName @ 146697380

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::FSystemInterrogator::GetReferencerName
          (FSystemInterrogator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSystemInterrogator");
  return __return_storage_ptr__;
}

// GetSparseChannelInfo @ 146697da0

/* WARNING: Enum "Type": Some values do not have unique names */

FSparseInterrogationChannelInfo * __thiscall
UE::MovieScene::FSystemInterrogator::GetSparseChannelInfo(FSystemInterrogator *this)

{
  return (FSparseInterrogationChannelInfo *)&(this->Channels).ObjectToChannel.field_0x40;
}

// ImportLocalTransforms @ 14669c820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FInterrogationChannel __thiscall
UE::MovieScene::FSystemInterrogator::ImportLocalTransforms
          (FSystemInterrogator *this,USceneComponent *param_1,IMovieScenePlayer *param_2,
          FMovieSceneSequenceID param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  FMovieSceneEvaluationState *this_00;
  bool bVar3;
  int iVar4;
  FInterrogationChannel FVar5;
  UMovieSceneSequence *pUVar6;
  TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *pTVar7;
  FName *pFVar8;
  undefined4 extraout_var;
  UMovieScene *pUVar9;
  FMovieSceneBinding *pFVar10;
  uint uVar11;
  undefined4 in_register_0000008c;
  IMovieScenePlayer *pIVar12;
  IMovieScenePlayer *local_res20;
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  FGuid local_b8;
  FGuid local_a8;
  UObject *local_98;
  FWeakObjectPtr local_90;
  IMovieScenePlayer *local_88;
  FWeakObjectPtr local_80;
  FMovieSceneEvaluationState *local_78;
  FString local_70;
  FName local_60;
  FMovieScenePropertyBinding local_58;
  
  pIVar12 = (IMovieScenePlayer *)CONCAT44(in_register_0000008c,param_3.Value);
  local_res20 = pIVar12;
  if ((param_2 == (IMovieScenePlayer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                         ,0x3e4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return (FInterrogationChannel)iVar4;
  }
  local_78 = IMovieScenePlayer::GetEvaluationState(pIVar12);
  pUVar6 = FMovieSceneEvaluationState::FindSequence
                     (local_78,(FMovieSceneSequenceID *)&stack0x00000028);
  if (pUVar6 == (UMovieSceneSequence *)0x0) {
LAB_14669caff:
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  }
  else {
    pUVar1 = *(UObject **)&(param_2->State).ObjectCaches.field_0x20;
    uVar11 = 0xffffffff;
    if (pUVar1 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar1);
      }
      local_c8.ObjectIndex = 0;
      local_c8.ObjectSerialNumber = 0;
      local_98 = pUVar1;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_98);
      local_90 = local_c8;
      pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                       *)&this->Channels,(FObjectKey *)&local_90);
      if (pTVar7 != (TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *)0x0) {
        uVar11 = *(uint *)&pTVar7->field_0x8;
      }
    }
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    local_88 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_88);
    local_80 = local_c0;
    pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                     *)&this->Channels,(FObjectKey *)&local_80);
    if ((pTVar7 == (TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *)0x0) ||
       (FVar5.Value = *(int *)&pTVar7->field_0x8, FVar5.Value == -1)) {
      ::FString::FString(&local_70,L"Transform");
      pFVar8 = ::FName::FName(&local_60,"Transform");
      FMovieScenePropertyBinding::FMovieScenePropertyBinding(&local_58,*pFVar8,&local_70);
      FVar5 = FInterrogationChannels::AllocateChannel
                        (&this->Channels,(UObject *)&stack0x00000018,(int)param_2,
                         (FMovieScenePropertyBinding *)(ulonglong)uVar11);
      FVar5.Value = *(int *)CONCAT44(extraout_var,FVar5.Value);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (FVar5.Value == -1) goto LAB_14669caff;
    }
    this_00 = local_78;
    pIVar12 = local_res20;
    FMovieSceneEvaluationState::FindCachedObjectId
              (local_78,&local_b8,(UObject *)param_2,(FMovieSceneSequenceID *)&stack0x00000028,
               local_res20);
    if (((local_b8.C != 0 || local_b8.D != 0) || local_b8.B != 0) || local_b8.A != 0) {
      pUVar9 = (UMovieScene *)(**(code **)(pUVar6->_padding_ + 0x2f8))(pUVar6);
      pFVar10 = UMovieScene::FindBinding(pUVar9,&local_b8);
      if (pFVar10 == (FMovieSceneBinding *)0x0) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4998157698391344131>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                           ,0x403,"Binding");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return (FInterrogationChannel)iVar4;
        }
      }
      else {
        ImportTransformTracks(this,pFVar10,FVar5);
      }
    }
    pUVar1 = *(UObject **)&(param_2->State).PersistentSharedData.field_0x48;
    if ((param_2 == *(IMovieScenePlayer **)(pUVar1 + 0xb)) &&
       (FMovieSceneEvaluationState::FindCachedObjectId
                  (this_00,&local_a8,pUVar1,(FMovieSceneSequenceID *)&stack0x00000028,pIVar12),
       ((local_a8.D != 0 || local_a8.C != 0) || local_a8.B != 0) || local_a8.A != 0)) {
      pUVar9 = (UMovieScene *)(**(code **)(pUVar6->_padding_ + 0x2f8))(pUVar6);
      pFVar10 = UMovieScene::FindBinding(pUVar9,&local_a8);
      if (pFVar10 == (FMovieSceneBinding *)0x0) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4998157698391344145>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                           ,0x411,"Binding");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return (FInterrogationChannel)iVar4;
        }
      }
      else {
        ImportTransformTracks(this,pFVar10,FVar5);
      }
    }
    *(int *)&param_1->_padding_ = FVar5.Value;
  }
  return (FInterrogationChannel)(int)param_1;
}

// ImportTrack @ 14669cb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemInterrogator::ImportTrack
          (FSystemInterrogator *this,UMovieSceneTrack *param_1,FGuid *param_2,
          FInterrogationChannel param_3,FMovieSceneSequenceID param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  UObjectBaseUtility *this_00;
  code *pcVar3;
  FInterrogationChannels *pFVar4;
  UMovieSceneTrack *this_01;
  FSystemInterrogator *pFVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FMovieSceneTrackEvaluationField *pFVar11;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  FSparseArrayAllocationInfo *pFVar15;
  ulonglong uVar16;
  longlong *plVar17;
  FFrameNumber *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  ForElementType<unsigned_int> FVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  FMovieSceneTrackEvaluationField *local_1f0;
  uint local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  undefined1 local_1d8 [24];
  FUtf8String local_1c0;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FName local_1a0;
  FFrameNumber local_198;
  FScriptContainerElement local_194;
  byte local_193;
  UMovieSceneTrack *local_188;
  UMovieSceneCondition *local_180;
  undefined8 uStack_178;
  FSystemInterrogator *local_170;
  FEntityManager *local_168;
  FSparseArrayAllocationInfo local_160;
  FMovieSceneEntityComponentFieldBuilder local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e4 = param_3.Value;
  local_188 = param_1;
  local_170 = this;
  bVar6 = UMovieSceneTrack::IsEvalDisabled(param_1,true);
  if (bVar6) {
    return;
  }
  local_168 = GEntityManagerForDebuggingVisualizers;
  GEntityManagerForDebuggingVisualizers = &((this->Linker).field0_0x0.DebugPtr)->EntityManager;
  pFVar11 = UMovieSceneTrack::GetEvaluationField(param_1);
  local_1f0 = pFVar11;
  FMovieSceneEntityComponentFieldBuilder::FMovieSceneEntityComponentFieldBuilder
            (&local_150,&this->EntityComponentField);
  local_180 = *(UMovieSceneCondition **)param_2;
  uStack_178._0_4_ = param_2->C;
  uStack_178._4_4_ = param_2->D;
  pFVar12 = FMovieSceneEntityComponentFieldBuilder::GetSharedMetaData(&local_150);
  *(UMovieSceneCondition **)&pFVar12->ObjectBindingID = local_180;
  (pFVar12->ObjectBindingID).C = (undefined4)uStack_178;
  (pFVar12->ObjectBindingID).D = uStack_178._4_4_;
  uVar8 = FMovieSceneEntityComponentFieldBuilder::GetSharedMetaDataIndex(&local_150);
  pUVar13 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar13);
  if (((int)uVar8 < 0) || (*(int *)&(this->ExtraMetaData).field_0x28 <= (int)uVar8)) {
LAB_14669ccc2:
    pFVar15 = TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                        ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&this->ExtraMetaData
                         ,&local_160,uVar8);
    puVar2 = pFVar15->Pointer;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = pUVar14;
      *(int *)(puVar2 + 1) = param_3.Value;
      *(uint *)((longlong)puVar2 + 0xc) = param_4.Value;
    }
  }
  else {
    if ((*(int *)&(this->ExtraMetaData).field_0x28 <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar20 = *(undefined1 **)&(this->ExtraMetaData).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->ExtraMetaData).field_0x10;
    }
    if ((*(uint *)(puVar20 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) == 0) goto LAB_14669ccc2;
    if (((*(UObject **)(*(longlong *)&this->ExtraMetaData + (longlong)(int)uVar8 * 0x10) != pUVar14)
        || (*(int *)(*(longlong *)&this->ExtraMetaData + 8 + (longlong)(int)uVar8 * 0x10) !=
            param_3.Value)) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4998157698391343925>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                           ,0x335,
                           "InterrogationMetaData.InterrogationInstance.Sequence == OwningSequence && InterrogationMetaData.InterrogationChannel == InChannel"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_01 = local_188;
  local_1e8 = (pFVar11->Entries).ArrayNum;
  uVar16 = (ulonglong)(int)local_1e8;
  pFVar19 = (pFVar11->Entries).AllocatorInstance.Data;
  pFVar22 = pFVar19 + uVar16 * 0x20;
  while( true ) {
    if ((pFVar11->Entries).ArrayNum != (int)uVar16) {
      local_1f8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_1f8);
    }
    pFVar5 = local_170;
    iVar9 = local_1e4;
    if (pFVar19 == pFVar22) break;
    this_00 = *(UObjectBaseUtility **)pFVar19;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar13 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
      plVar17 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar13);
      pFVar11 = local_1f0;
      if (plVar17 != (longlong *)0x0) {
        if ((pFVar19[8] == (FScriptContainerElement)0x2) ||
           (pFVar19[0x10] == (FScriptContainerElement)0x2)) {
LAB_14669cd99:
          bVar6 = UMovieSceneTrack::IsRowEvalDisabled
                            (this_01,*(int *)(*(longlong *)pFVar19 + 0xd0),true);
          pFVar11 = local_1f0;
          if (!bVar6) {
            local_1e0 = 0;
            local_1d8._16_8_ = 0;
            local_1d8._8_8_ = 0;
            local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1c0.Data.ArrayNum = 0;
            local_1c0.Data.ArrayMax = 0;
            local_1d8._0_8_ = 0;
            FUtf8String::Reset(&local_1c0,0);
            local_198.Value = *(int *)(pFVar19 + 0x18);
            local_194 = pFVar19[0x1c];
            local_1b0.Data = (FScriptContainerElement *)0x0;
            local_1a8._0_4_ = 0;
            local_1a8._4_4_ = 0;
            local_1a0.ComparisonIndex.Value = 0;
            local_1a0.Number = 0;
            local_193 = (this_01->EvalOptions).bEvaluateInPostroll * '\x02' |
                        (this_01->EvalOptions).bEvaluateInPreroll | local_193 & 0xfc;
            local_180 = MovieSceneHelpers::GetSequenceCondition
                                  (this_01,*(UMovieSceneSection **)pFVar19,false);
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_180 != (UMovieSceneCondition *)0x0)) {
              GC::MarkAsReachable((UObject *)local_180);
            }
            FSoftObjectPtr::operator=((FSoftObjectPtr *)local_1d8,(FObjectPtr)&local_180);
            cVar7 = (**(code **)(*plVar17 + 0x20))(plVar17,pFVar19 + 8,local_1d8,&local_150);
            if (cVar7 == '\0') {
              iVar9 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                                (&local_150,*(UObject **)pFVar19,0);
              iVar10 = FMovieSceneEntityComponentFieldBuilder::AddMetaData
                                 (&local_150,(FMovieSceneEvaluationFieldEntityMetaData *)local_1d8);
              FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                        (&local_150,(TRange<FFrameNumber> *)(pFVar19 + 8),iVar9,iVar10);
            }
            if (local_1b0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data);
            }
            pFVar11 = local_1f0;
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              pFVar11 = local_1f0;
            }
          }
        }
        else if (*(int *)(pFVar19 + 0xc) <= *(int *)(pFVar19 + 0x14)) {
          pFVar18 = TRangeBound<FFrameNumber>::GetValue
                              ((TRangeBound<FFrameNumber> *)(pFVar19 + 0x10));
          iVar9 = pFVar18->Value;
          pFVar18 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)(pFVar19 + 8));
          if ((pFVar18->Value != iVar9) ||
             ((pFVar11 = local_1f0, pFVar19[8] != (FScriptContainerElement)0x0 &&
              (pFVar19[0x10] != (FScriptContainerElement)0x0)))) goto LAB_14669cd99;
        }
      }
    }
    uVar16 = (ulonglong)local_1e8;
    pFVar19 = pFVar19 + 0x20;
  }
  pFVar4 = &local_170->Channels;
  if (local_1e4 == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if ((-1 < local_1e4) && (local_1e4 < (local_170->Channels).ActiveChannelBits.NumBits))
  goto LAB_14669cf68;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index>=0 && Index<NumBits",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                     ,0x5be,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14669cf68:
  FVar21 = (pFVar5->Channels).ActiveChannelBits.AllocatorInstance.SecondaryData;
  if (FVar21 == (ForElementType<unsigned_int>)0x0) {
    FVar21 = (ForElementType<unsigned_int>)&pFVar4->ActiveChannelBits;
  }
  puVar1 = (uint *)((longlong)FVar21 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder(&local_150);
  GEntityManagerForDebuggingVisualizers = local_168;
  return;
}

// ImportTrack @ 14669cfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemInterrogator::ImportTrack
          (FSystemInterrogator *this,UMovieSceneTrack *param_1,FInterrogationChannel param_2,
          FMovieSceneSequenceID param_3)

{
  FGuid *pFVar1;
  FGuid local_18;
  
  pFVar1 = UMovieSceneTrack::FindObjectBindingGuid(param_1,&local_18);
  ImportTrack(this,param_1,pFVar1,param_2,param_3);
  return;
}

// ImportTransformHierarchy @ 14669d030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInterrogationChannel __thiscall
UE::MovieScene::FSystemInterrogator::ImportTransformHierarchy
          (FSystemInterrogator *this,USceneComponent *param_1,IMovieScenePlayer *param_2,
          FMovieSceneSequenceID param_3)

{
  IMovieScenePlayer *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_2 == (IMovieScenePlayer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                       ,0x41d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FInterrogationChannel)iVar4;
    }
  }
  pIVar1 = *(IMovieScenePlayer **)&(param_2->State).ObjectCaches.field_0x20;
  if (pIVar1 != (IMovieScenePlayer *)0x0) {
    ImportTransformHierarchy(this,(USceneComponent *)&stack0x00000010,pIVar1,param_3);
  }
  ImportLocalTransforms(this,param_1,param_2,param_3);
  return (FInterrogationChannel)(int)param_1;
}

// ImportTransformTracks @ 14669d0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemInterrogator::ImportTransformTracks
          (FSystemInterrogator *this,FMovieSceneBinding *param_1,FInterrogationChannel param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieSceneTrack *pUVar4;
  longlong lVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar7 = (param_1->Tracks).AllocatorInstance.Data;
  iVar2 = (param_1->Tracks).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Tracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar1) break;
    pUVar4 = *(UMovieSceneTrack **)pFVar7;
    pUVar6 = Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();
    lVar5 = pUVar4->_padding_;
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(lVar5 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar6->_padding_)) {
      ImportTrack(this,pUVar4,&param_1->ObjectGuid,param_2,(FMovieSceneSequenceID)0xffffffff);
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// InterrogateEntity @ 1466a5070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemInterrogator::InterrogateEntity
          (FSystemInterrogator *this,int param_1,FMovieSceneEvaluationFieldEntityQuery *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UMovieSceneSection *this_01;
  UClass *pUVar7;
  IMovieSceneEntityProvider *this_02;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar8;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  uint local_f8;
  FInterrogationChannel local_f4;
  int iStack_f0;
  FInterrogationInstance local_e8;
  FEntityImportSequenceParams local_e0;
  undefined1 local_c8 [20];
  uint local_b4;
  undefined8 *local_b0;
  undefined1 *local_a8;
  FImportedEntity local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  this_01 = (UMovieSceneSection *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
  if (this_01 == (UMovieSceneSection *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
  this_02 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar7);
  if (this_02 == (IMovieSceneEntityProvider *)0x0) {
    return;
  }
  local_e0.bDynamicWeighting = false;
  local_e0.bPostRoll = false;
  local_e0.bPreRoll = false;
  local_f8 = (param_2->Entity).Key.EntityID;
  pFVar8 = (FMovieSceneEvaluationFieldEntityMetaData *)0x0;
  uVar1 = param_2->MetaDataIndex;
  local_e8.Sequence = (UMovieSceneSequence *)0x0;
  local_e0.HierarchicalBias = 0;
  local_e0.SequenceID.Value = 0;
  local_e0.InstanceHandle.InstanceID = 0xffff;
  local_e0.InstanceHandle.InstanceSerial = 0;
  local_e0.RootInstanceHandle = (FRootInstanceHandle)0xffff;
  local_e0.DefaultCompletionMode = KeepState;
  local_e0.SubSectionFlags = None;
  local_108._0_8_ = pFVar8;
  if (uVar1 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar1 < (this->EntityComponentField).EntityMetaData.ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_108._0_8_ =
         (FMovieSceneEvaluationFieldEntityMetaData *)
         ((this->EntityComponentField).EntityMetaData.AllocatorInstance.Data +
         (longlong)(int)uVar1 * 0x48);
  }
  uVar1 = (param_2->Entity).SharedMetaDataIndex;
  if (uVar1 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar1 < (this->EntityComponentField).SharedMetaData.ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = (FMovieSceneEvaluationFieldEntityMetaData *)
             ((this->EntityComponentField).SharedMetaData.AllocatorInstance.Data +
             (longlong)(int)uVar1 * 0x10);
  }
  uVar1 = (param_2->Entity).SharedMetaDataIndex;
  local_f4.Value = 0;
  local_108._8_8_ = pFVar8;
  iStack_f0 = param_1;
  if (uVar1 != 0xffffffff) {
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->ExtraMetaData).field_0x28)) {
      puVar3 = *(undefined1 **)&(this->ExtraMetaData).field_0x20;
      puVar11 = &(this->ExtraMetaData).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      if ((*(uint *)(puVar11 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar1 & 0x1f) & 1) != 0) {
        puVar10 = (undefined8 *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&this->ExtraMetaData);
        local_f4.Value = *(int *)(puVar10 + 1);
        local_e8.Sequence = (UMovieSceneSequence *)*puVar10;
        local_e0.SequenceID.Value = *(uint *)((longlong)puVar10 + 0xc);
        goto LAB_1466a52a2;
      }
    }
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4998157698391344004>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\EntitySystem\\Interrogation\\MovieSceneInterrogationLinker.cpp"
                       ,900,"ExtraMetaData.IsValidIndex(SharedMetaDataIndex)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_1466a52a2:
  local_a0.Builders.AllocatorInstance.SecondaryData =
       (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0;
  local_a0.Builders.ArrayNum = 0;
  local_a0.Builders.ArrayMax = 1;
  IMovieSceneEntityProvider::InterrogateEntity
            (this_02,(this->Linker).field0_0x0.DebugPtr,(FEntityImportParams *)local_108,&local_a0);
  if (local_a0.Builders.ArrayNum != 0) {
    pUVar7 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      UMovieSceneSection::BuildDefaultComponents
                (this_01,(this->Linker).field0_0x0.DebugPtr,(FEntityImportParams *)local_108,
                 &local_a0);
    }
    FImportedEntity::Manufacture
              (&local_a0,(FEntityImportParams *)local_118,(FEntityManager *)local_108);
    this_00 = (TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
               *)(this->EntityTracker).Ptr;
    if (this_00 !=
        (TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
         *)0x0) {
      local_c8._12_8_ = (param_2->Entity).Key.EntityOwner.WeakPtr;
      local_118._8_2_ = local_118._0_2_;
      local_c8._8_4_ = iStack_f0;
      local_c8._4_4_ = local_f4.Value;
      local_b4 = (param_2->Entity).Key.EntityID;
      local_b0 = (undefined8 *)(local_c8 + 4);
      local_a8 = local_118 + 8;
      TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::MovieScene::FImportedInterrogationEntityKey_&&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
                (this_00,(TPairInitializer<UE::MovieScene::FImportedInterrogationEntityKey_&&,UE::MovieScene::FMovieSceneEntityID_const_&>
                          *)local_c8,(bool *)&local_b0);
    }
  }
  FVar9 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)&local_a0;
  if (local_a0.Builders.AllocatorInstance.SecondaryData !=
      (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar9 = local_a0.Builders.AllocatorInstance.SecondaryData;
  }
  DestructItems<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>,int>
            ((TInlineValue<UE::MovieScene::IEntityBuilder,64,8> *)FVar9,local_a0.Builders.ArrayNum);
  if (local_a0.Builders.AllocatorInstance.SecondaryData !=
      (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FMemory::Free((void *)local_a0.Builders.AllocatorInstance.SecondaryData);
  }
  return;
}

// Reset @ 1466d96d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSystemInterrogator::Reset(FSystemInterrogator *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *this_01;
  TArray<FMovieSceneEvaluationFieldEntity,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FMovieSceneEvaluationFieldEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FMovieSceneEvaluationFieldEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FMovieSceneEvaluationFieldSharedEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FMovieSceneEvaluationFieldSharedEntityMetaData,TSizedDefaultAllocator<32>_> *pTVar7;
  uint *puVar8;
  TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
  *this_02;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  FMovieSceneEntityComponentField *pFVar12;
  uint uVar13;
  TArray<FMovieSceneEvaluationFieldEntity,TSizedDefaultAllocator<32>_> *pTVar14;
  ForElementType<unsigned_int> FVar15;
  FMovieSceneEntityComponentField local_f8;
  
  this_02 = (TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
             *)(this->EntityTracker).Ptr;
  if (this_02 !=
      (TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
       *)0x0) {
    TSet<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
    ::Reset(this_02);
  }
  this_01 = &this->EntitiesScratch;
  bVar10 = 1 < (this->EntitiesScratch).HashSize;
  if (!bVar10) {
    TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  puVar1 = &(this->EntitiesScratch).Elements.field_0xc;
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x34 = 0;
  iVar11 = *(int *)&(this->EntitiesScratch).Elements.field_0x2c;
  *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->EntitiesScratch).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntitiesScratch).Elements.field_0x10,
               0);
  }
  if (bVar10) {
    (this->EntitiesScratch).HashSize = 1;
    TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  memset(&local_f8,0,0xf0);
  pFVar12 = FMovieSceneEntityComponentField::FMovieSceneEntityComponentField(&local_f8);
  FMovieSceneEvaluationFieldEntityTree::operator=
            (&(this->EntityComponentField).PersistentEntityTree,&pFVar12->PersistentEntityTree);
  FMovieSceneEvaluationFieldEntityTree::operator=
            (&(this->EntityComponentField).OneShotEntityTree,&pFVar12->OneShotEntityTree);
  pTVar3 = &pFVar12->Entities;
  pTVar14 = &(this->EntityComponentField).Entities;
  if (pTVar14 != pTVar3) {
    pFVar9 = (pTVar14->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EntityComponentField).Entities.ArrayNum = (pFVar12->Entities).ArrayNum;
    (this->EntityComponentField).Entities.ArrayMax = (pFVar12->Entities).ArrayMax;
    (pFVar12->Entities).ArrayNum = 0;
    (pFVar12->Entities).ArrayMax = 0;
  }
  pTVar4 = &pFVar12->EntityMetaData;
  pTVar5 = &(this->EntityComponentField).EntityMetaData;
  if (pTVar5 != pTVar4) {
    DestructItems<FMovieSceneEvaluationFieldEntityMetaData,int>
              ((FMovieSceneEvaluationFieldEntityMetaData *)(pTVar5->AllocatorInstance).Data,
               (this->EntityComponentField).EntityMetaData.ArrayNum);
    pFVar9 = (pTVar5->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EntityComponentField).EntityMetaData.ArrayNum = (pFVar12->EntityMetaData).ArrayNum;
    (this->EntityComponentField).EntityMetaData.ArrayMax = (pFVar12->EntityMetaData).ArrayMax;
    (pFVar12->EntityMetaData).ArrayNum = 0;
    (pFVar12->EntityMetaData).ArrayMax = 0;
  }
  pTVar6 = &pFVar12->SharedMetaData;
  pTVar7 = &(this->EntityComponentField).SharedMetaData;
  if (pTVar7 != pTVar6) {
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar7->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EntityComponentField).SharedMetaData.ArrayNum = (pFVar12->SharedMetaData).ArrayNum;
    (this->EntityComponentField).SharedMetaData.ArrayMax = (pFVar12->SharedMetaData).ArrayMax;
    (pFVar12->SharedMetaData).ArrayNum = 0;
    (pFVar12->SharedMetaData).ArrayMax = 0;
  }
  FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField(&local_f8);
  piVar2 = &(this->Channels).Interrogations.ArrayMax;
  (this->Channels).Interrogations.ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Channels).Interrogations.AllocatorInstance,0,piVar2);
  }
  this_00 = &(this->Channels).ActiveChannelBits;
  iVar11 = (this->Channels).ActiveChannelBits.MaxBits;
  (this->Channels).ActiveChannelBits.NumBits = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    (this->Channels).ActiveChannelBits.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  }
  iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
  FVar15 = (this->Channels).ActiveChannelBits.AllocatorInstance.SecondaryData;
  uVar13 = iVar11 >> 0x1f & 0x1f;
  iVar11 = iVar11 + uVar13;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)this_00;
  }
  puVar8 = (uint *)((longlong)FVar15 + (longlong)(iVar11 >> 5) * 4);
  *puVar8 = *puVar8 & ~(1 << (((byte)iVar11 & 0x1f) - (char)uVar13 & 0x1f));
  bVar10 = 1 < *(int *)&(this->Channels).ObjectToChannel.field_0x48;
  if (!bVar10) {
    TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                      *)&this->Channels);
  }
  puVar1 = &(this->Channels).ObjectToChannel.field_0xc;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->Channels,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x34 = 0;
  iVar11 = *(int *)&(this->Channels).ObjectToChannel.field_0x2c;
  *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Channels).ObjectToChannel.field_0x10,
               0);
  }
  if (bVar10) {
    *(undefined4 *)&(this->Channels).ObjectToChannel.field_0x48 = 1;
    TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
              *)&this->Channels);
  }
  piVar2 = &(this->Channels).SparseChannelInfo.ChannelInfo.Pairs.ArrayMax;
  (this->Channels).SparseChannelInfo.ChannelInfo.Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)&(this->Channels).SparseChannelInfo,0,piVar2);
  }
  *(undefined4 *)&(this->ExtraMetaData).field_0x8 = 0;
  if (*(int *)&(this->ExtraMetaData).field_0xc < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->ExtraMetaData,0,
               (int *)&(this->ExtraMetaData).field_0xc);
  }
  *(undefined4 *)&(this->ExtraMetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtraMetaData).field_0x34 = 0;
  *(undefined4 *)&(this->ExtraMetaData).field_0x28 = 0;
  UMovieSceneEntitySystemLinker::Reset((this->Linker).field0_0x0.DebugPtr);
  return;
}

// TrackImportedEntities @ 1466ff440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemInterrogator::TrackImportedEntities(FSystemInterrogator *this,bool param_1)

{
  TUniquePtr<UE::MovieScene::FSystemInterrogatorEntityTracker,TDefaultDelete<UE::MovieScene::FSystemInterrogatorEntityTracker>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  longlong local_18 [2];
  
  pTVar1 = &this->EntityTracker;
  this_01 = (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)pTVar1->Ptr;
  if (param_1) {
    if (this_01 ==
        (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)0x0) {
      this_01 = ::operator_new(0x50);
      if (this_01 !=
          (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) {
        *(undefined8 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x10 = 0;
        *(undefined8 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x18 = 0;
        *(undefined8 *)(this_01 + 1) = 0;
        *(undefined8 *)&this_01[1].field_0x10 = 0;
        *(undefined8 *)&this_01->field_0x0 = 0;
        *(undefined8 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x8 = 0;
        *(undefined8 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x20 = 0;
        *(undefined4 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x28 = 0;
        *(undefined4 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x2c = 0x80;
        *(undefined4 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x30 = 0xffffffff;
        *(undefined4 *)
         &((TMap<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID,0>_>
            *)&this_01->field_0x0)->field_0x34 = 0;
        *(undefined8 *)&this_01[1].field_0x8 = 0;
      }
      if (pTVar1 == (TUniquePtr<UE::MovieScene::FSystemInterrogatorEntityTracker,TDefaultDelete<UE::MovieScene::FSystemInterrogatorEntityTracker>_>
                     *)local_18) {
        if (this_01 !=
            (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)0x0) goto LAB_1466ff506;
      }
      else {
        this_00 = (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1->Ptr;
        pTVar1->Ptr = (FSystemInterrogatorEntityTracker *)this_01;
        if (this_00 !=
            (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)0x0) {
          *(undefined4 *)&this_00[1].field_0x10 = 0;
          if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
            FMemory::Free(*(void **)&this_00[1].field_0x8);
          }
          TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (this_00);
          ::operator_delete(this_00,0x50);
        }
      }
    }
  }
  else if (this_01 !=
           (TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0) {
    pTVar1->Ptr = (FSystemInterrogatorEntityTracker *)0x0;
LAB_1466ff506:
    *(undefined4 *)&this_01[1].field_0x10 = 0;
    if (*(void **)&this_01[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_01[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FImportedInterrogationEntityKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_01);
    ::operator_delete(this_01,0x50);
    return;
  }
  return;
}

// Update @ 146702070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FSystemInterrogator::Update(FSystemInterrogator *this)

{
  ulong64 *puVar1;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMovieSceneEntitySystemRunner *this_00;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FEntityManager *pFVar7;
  bool bVar8;
  FBuiltInComponentTypes *pFVar9;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar10;
  undefined1 auStack_398 [32];
  FComponentTypeID local_378;
  FComponentTypeID local_376;
  FComponentTypeID local_374;
  FComponentTypeID local_372;
  <lambda_1> local_370;
  <lambda_2> local_368;
  TArrayView<UE::MovieScene::FInterrogationParams_const_,int> local_360;
  wchar_t *local_348;
  TStatIdData *pTStack_340;
  byte local_338;
  undefined7 uStack_337;
  Type TStack_330;
  uint uStack_32c;
  wchar_t *local_320;
  TStatIdData *pTStack_318;
  byte local_310;
  undefined7 uStack_30f;
  Type TStack_308;
  uint uStack_304;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2e8;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_2d8;
  TComponentTypeID<UE::MovieScene::FInterrogationInstance> TStack_2d6;
  TComponentTypeID<double> TStack_2d4;
  undefined2 uStack_2d2;
  wchar_t *pwStack_2d0;
  TStatIdData *pTStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_2b0;
  TComponentTypeID<FFrameTime> TStack_2ae;
  undefined4 uStack_2ac;
  wchar_t *pwStack_2a8;
  TStatIdData *pTStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_288;
  undefined1 local_278 [4];
  FComponentAccess aFStack_274 [2];
  wchar_t *pwStack_270;
  TStatId local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  FEntityComponentFilter local_250;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_158 [8];
  wchar_t *pwStack_150;
  TStatId local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  pFVar7 = GEntityManagerForDebuggingVisualizers;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_398;
  GEntityManagerForDebuggingVisualizers = &((this->Linker).field0_0x0.DebugPtr)->EntityManager;
  FEntityManager::AddMutualComponents(&((this->Linker).field0_0x0.DebugPtr)->EntityManager);
  UMovieSceneEntitySystemLinker::LinkRelevantSystems((this->Linker).field0_0x0.DebugPtr);
  local_360.DataPtr = (FInterrogationParams *)(this->Channels).Interrogations.AllocatorInstance.Data
  ;
  local_360.ArrayNum = (this->Channels).Interrogations.ArrayNum;
  if (local_360.ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_338 = local_338 & 0xe0;
  pTStack_340 = &TStatId::TStatId_NAME_None;
  local_348 = (wchar_t *)0x0;
  TStack_330 = AnyHiPriThreadHiPriTask;
  uStack_32c = uStack_32c & 0xffffff00;
  pFVar9 = FBuiltInComponentTypes::Get();
  local_2b0 = (pFVar9->Interrogation).InputKey;
  pFVar9 = FBuiltInComponentTypes::Get();
  uStack_298._1_7_ = uStack_337;
  uStack_298._0_1_ = local_338;
  uVar5._4_4_ = uStack_32c;
  uVar5._0_4_ = TStack_330;
  TStack_2ae = pFVar9->EvalTime;
  pwStack_2a8 = local_348;
  pTStack_2a0 = pTStack_340;
  uStack_290 = uVar5;
  pFVar9 = FBuiltInComponentTypes::Get();
  local_158._2_2_ = TStack_2ae;
  local_158._0_2_ = local_2b0;
  local_158._4_4_ = uStack_2ac;
  local_378.Value = (pFVar9->Tags).FixedTime.Value;
  pwStack_150 = pwStack_2a8;
  local_148.StatIdPtr = pTStack_2a0;
  uStack_140 = uStack_298;
  local_130.AllMask.Bits.NumBits = 0;
  local_130.AllMask.Bits.MaxBits = 0x180;
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_7c = 0x180;
  local_48 = 0;
  local_44 = 0x180;
  local_138 = uVar5;
  AddAccessorToFilter((FComponentAccess *)local_158,&local_130);
  AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
  local_2f8._First = &local_378;
  local_2f8._Last = &local_376;
  FComponentMask::SetAll(&local_130.NoneMask,&local_2f8);
  local_370.Interrogations = &local_360;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TWriteAccess<FFrameTime>_>
  ::Iterate_PerEntityImpl<_UE::MovieScene::FSystemInterrogator::Update_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TWriteAccess<FFrameTime>_>
              *)local_158,&((this->Linker).field0_0x0.DebugPtr)->EntityManager,&local_130,&local_370
            );
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  local_310 = local_310 & 0xe0;
  local_320 = (wchar_t *)0x0;
  pTStack_318 = &TStatId::TStatId_NAME_None;
  TStack_308 = AnyHiPriThreadHiPriTask;
  uStack_304 = uStack_304 & 0xffffff00;
  pFVar9 = FBuiltInComponentTypes::Get();
  TVar2 = (pFVar9->Interrogation).InputKey;
  pFVar9 = FBuiltInComponentTypes::Get();
  TStack_2d6 = (pFVar9->Interrogation).Instance;
  local_2d8 = TVar2;
  pFVar9 = FBuiltInComponentTypes::Get();
  uStack_2c0._1_7_ = uStack_30f;
  uStack_2c0._0_1_ = local_310;
  uVar6._4_4_ = uStack_304;
  uVar6._0_4_ = TStack_308;
  TStack_2d4 = pFVar9->EvalSeconds;
  pwStack_2d0 = local_320;
  pTStack_2c8 = pTStack_318;
  uStack_2b8 = uVar6;
  pFVar9 = FBuiltInComponentTypes::Get();
  local_278._2_2_ = TStack_2d6;
  local_278._0_2_ = local_2d8;
  unique0x10000500 = TStack_2d4;
  unique0x10000502 = uStack_2d2;
  local_374.Value = (pFVar9->Tags).FixedTime.Value;
  pwStack_270 = pwStack_2d0;
  local_268.StatIdPtr = pTStack_2c8;
  uStack_260 = uStack_2c0;
  local_250.AllMask.Bits.NumBits = 0;
  local_250.AllMask.Bits.MaxBits = 0x180;
  local_250.NoneMask.Bits.NumBits = 0;
  local_250.NoneMask.Bits.MaxBits = 0x180;
  local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ComplexMasks.ArrayNum = 0;
  local_250.ComplexMasks.ArrayMax = 0;
  local_1a0 = 0;
  local_19c = 0x180;
  local_168 = 0;
  local_164 = 0x180;
  local_258 = uVar6;
  AddAccessorToFilter((FComponentAccess *)local_278,&local_250);
  AddAccessorToFilter((FComponentAccess *)(local_278 + 2),&local_250);
  AddAccessorToFilter((FComponentAccess *)(local_278 + 4),&local_250);
  local_2e8._First = &local_374;
  local_2e8._Last = &local_372;
  FComponentMask::SetAll(&local_250.NoneMask,&local_2e8);
  local_368.Interrogations = &local_360;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TWriteAccess<double>_>
  ::Iterate_PerEntityImpl<_UE::MovieScene::FSystemInterrogator::Update_::__l2::<lambda_2>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationInstance>,UE::MovieScene::TWriteAccess<double>_>
              *)local_278,&((this->Linker).field0_0x0.DebugPtr)->EntityManager,&local_250,&local_368
            );
  if (local_250.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
  }
  pTVar10 = UMovieSceneEntitySystemLinker::GetRunner((this->Linker).field0_0x0.DebugPtr,&local_288);
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  this_00 = pTVar10->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  if (this_00 == (FMovieSceneEntitySystemRunner *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FMovieSceneEntitySystemRunner::Flush(this_00,0.0,None);
  puVar1 = &(((this->Linker).field0_0x0.DebugPtr)->EntityManager).SystemSerialNumber;
  *puVar1 = *puVar1 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  GEntityManagerForDebuggingVisualizers = pFVar7;
  return;
}

// operator() @ 1504ef260

bool __thiscall
`UE::MovieScene::FSystemInterrogator::FindEntityFromOwner'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4998157698391344090>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4998157698391344090>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

