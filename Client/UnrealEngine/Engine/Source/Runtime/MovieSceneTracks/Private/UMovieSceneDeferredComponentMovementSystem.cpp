// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 16

// StaticClass @ 1467ce730

UClass * __cdecl UMovieSceneDeferredComponentMovementSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDeferredComponentMovementSystem",
               &Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.InnerSingleton
               ,StaticRegisterNativesUMovieSceneDeferredComponentMovementSystem,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDeferredComponentMovementSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneDeferredComponentMovementSystem>,local_res8
               ,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.InnerSingleton;
}

// UMovieSceneDeferredComponentMovementSystem @ 146808b70

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneDeferredComponentMovementSystem * __thiscall
UMovieSceneDeferredComponentMovementSystem::UMovieSceneDeferredComponentMovementSystem
          (UMovieSceneDeferredComponentMovementSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDeferredComponentMovementSystem__6B_;
  TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
            (&this->ScopedUpdates,0);
  return this;
}

// UMovieSceneDeferredComponentMovementSystem @ 146808bb0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneDeferredComponentMovementSystem * __thiscall
UMovieSceneDeferredComponentMovementSystem::UMovieSceneDeferredComponentMovementSystem
          (UMovieSceneDeferredComponentMovementSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneDeferredComponentMovementSystem__6B_;
  TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
            (&this->ScopedUpdates,0);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0x2c;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = (pFVar2->ComponentTransform).PropertyTag.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->AttachParent;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneDeferredComponentMovementSystem @ 14680f530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::~UMovieSceneDeferredComponentMovementSystem
          (UMovieSceneDeferredComponentMovementSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneDeferredComponentMovementSystem__6B_;
  TIndirectArray<TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->ScopedUpdates).Chunks,0);
  pFVar1 = (this->ScopedUpdates).Chunks.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// ApplyMovementUpdates @ 14681cfc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::ApplyMovementUpdates
          (UMovieSceneDeferredComponentMovementSystem *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScopedMovementUpdate *this_00;
  
  OutputDeferredMovements(this);
  uVar1 = (this->ScopedUpdates).NumElements;
  while( true ) {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      TIndirectArray<TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::Empty(&(this->ScopedUpdates).Chunks,((this->ScopedUpdates).NumElements + 4) / 5);
      (this->ScopedUpdates).NumElements = 0;
      return;
    }
    uVar5 = uVar1 / 5;
    uVar4 = 0;
    if ((int)uVar5 < (this->ScopedUpdates).Chunks.Array.ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    this_00 = (FScopedMovementUpdate *)
              (*(longlong *)
                ((this->ScopedUpdates).Chunks.Array.AllocatorInstance.Data + (ulonglong)uVar5 * 8) +
              (ulonglong)(uVar1 % 5) * 0x620);
    if (*(char *)&this_00[1].Owner != '\0') {
      FScopedMovementUpdate::~FScopedMovementUpdate(this_00);
      *(undefined1 *)&this_00[1].Owner = 0;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// BeginDestroy @ 14681dd80

void __thiscall
UMovieSceneDeferredComponentMovementSystem::BeginDestroy
          (UMovieSceneDeferredComponentMovementSystem *this)

{
  EnsureMovementsFlushed(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// DeferMovementUpdates @ 1468249c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::DeferMovementUpdates
          (UMovieSceneDeferredComponentMovementSystem *this,USceneComponent *param_1)

{
  TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
  *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer> *this_01;
  ulonglong uVar7;
  void *local_18 [2];
  
  if ((param_1->ScopedMovementStack).ArrayNum < 1) {
    this_00 = &this->ScopedUpdates;
    iVar1 = (this->ScopedUpdates).NumElements;
    (this->ScopedUpdates).NumElements = iVar1 + 1;
    iVar4 = (iVar1 + 5) / 5;
    iVar6 = (this->ScopedUpdates).Chunks.Array.ArrayNum;
    if (iVar6 < iVar4) {
      uVar7 = (ulonglong)(uint)(iVar4 - iVar6);
      do {
        local_18[0] = ::operator_new(0x1ea0);
        if (local_18[0] != (void *)0x0) {
          *(undefined1 *)((longlong)local_18[0] + 0x610) = 0;
          *(undefined1 *)((longlong)local_18[0] + 0xc30) = 0;
          *(undefined1 *)((longlong)local_18[0] + 0x1250) = 0;
          *(undefined1 *)((longlong)local_18[0] + 0x1870) = 0;
          *(undefined1 *)((longlong)local_18[0] + 0x1e90) = 0;
        }
        pFVar2 = (this_00->Chunks).Array.AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar2 + (longlong)(this->ScopedUpdates).Chunks.Array.ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->ScopedUpdates).Chunks.Array.ArrayNum;
        if (iVar6 == (this->ScopedUpdates).Chunks.Array.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this_00,
                             &(this->ScopedUpdates).Chunks.Array.ArrayMax);
        }
        (this->ScopedUpdates).Chunks.Array.ArrayNum = iVar6 + 1;
        *(void **)((this_00->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) =
             local_18[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    this_01 = TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
              ::operator[](this_00,iVar1);
    if (this_01->bIsSet != false) {
      FScopedMovementUpdate::~FScopedMovementUpdate((FScopedMovementUpdate *)this_01);
    }
    FScopedMovementUpdate::FScopedMovementUpdate
              ((FScopedMovementUpdate *)this_01,param_1,DeferredUpdates,true);
    this_01->bIsSet = true;
  }
  return;
}

// EnsureMovementsFlushed @ 146827ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::EnsureMovementsFlushed
          (UMovieSceneDeferredComponentMovementSystem *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScopedMovementUpdate *this_00;
  undefined1 local_res8 [8];
  
  if ((this->ScopedUpdates).NumElements != 0) {
    local_res8[0] = 0;
    bVar3 = `UMovieSceneDeferredComponentMovementSystem::EnsureMovementsFlushed'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar3) {
      uVar1 = (this->ScopedUpdates).NumElements;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        uVar5 = uVar1 / 5;
        uVar4 = 0;
        if ((int)uVar5 < (this->ScopedUpdates).Chunks.Array.ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FScopedMovementUpdate *)
                  (*(longlong *)
                    ((this->ScopedUpdates).Chunks.Array.AllocatorInstance.Data +
                    (ulonglong)uVar5 * 8) + (ulonglong)(uVar1 % 5) * 0x620);
        if (*(char *)&this_00[1].Owner != '\0') {
          FScopedMovementUpdate::~FScopedMovementUpdate(this_00);
          *(undefined1 *)&this_00[1].Owner = 0;
        }
      }
      TIndirectArray<TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::Empty(&(this->ScopedUpdates).Chunks,0);
      (this->ScopedUpdates).NumElements = 0;
    }
  }
  return;
}

// GetPrivateStaticClass @ 146835820

UClass * __cdecl UMovieSceneDeferredComponentMovementSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDeferredComponentMovementSystem",
               &Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.InnerSingleton
               ,StaticRegisterNativesUMovieSceneDeferredComponentMovementSystem,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDeferredComponentMovementSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneDeferredComponentMovementSystem>,local_res8
               ,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.InnerSingleton;
}

// IsRelevantImpl @ 14683f0c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneDeferredComponentMovementSystem::IsRelevantImpl
          (UMovieSceneDeferredComponentMovementSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ushort uVar1;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> TVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  FComponentMask *pFVar4;
  
  if (!UE::MovieScene::GDeferSequencerMovementUpdates) {
    return false;
  }
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  uVar1 = (pFVar3->ComponentTransform).PropertyTag.Value;
  pFVar4 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    TVar2 = pFVar3->AttachParent;
    pFVar4 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
    if (((TVar2 == (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>)0xffff) ||
        ((pFVar4->Bits).NumBits <= (int)(uint)(ushort)TVar2)) ||
       ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
         ((ushort)TVar2 & 0x1f) & 1) == 0)) {
      return false;
    }
  }
  return true;
}

// OnRun @ 146844ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::OnRun
          (UMovieSceneDeferredComponentMovementSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  ESystemPhase EVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScopedMovementUpdate *this_00;
  undefined1 auStack_398 [32];
  ulonglong local_378;
  longlong local_370;
  FComponentTypeID local_368;
  FComponentTypeID local_366;
  FComponentTypeID local_364;
  FComponentTypeID local_362;
  FComponentTypeID local_360;
  ushort local_35e;
  FComponentTypeID local_35c [2];
  <lambda_1> local_358 [2];
  undefined8 local_348;
  TStatIdData *pTStack_340;
  byte local_338;
  undefined7 uStack_337;
  undefined4 uStack_330;
  uint uStack_32c;
  undefined8 local_320;
  TStatIdData *pTStack_318;
  byte local_310;
  undefined7 uStack_30f;
  undefined4 uStack_308;
  uint uStack_304;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2d8;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_2c8;
  TComponentTypeID<UObject_*> local_2b8;
  undefined6 uStack_2b6;
  undefined8 uStack_2b0;
  TStatIdData *pTStack_2a8;
  ulonglong uStack_2a0;
  undefined8 uStack_298;
  TComponentTypeID<UObject_*> local_290;
  undefined6 uStack_28e;
  undefined8 uStack_288;
  TStatIdData *pTStack_280;
  ulonglong uStack_278;
  undefined8 uStack_270;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>
  local_268;
  FEntityComponentFilter local_240;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_158;
  undefined4 local_154;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>
  local_148;
  FEntityComponentFilter local_120;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_398;
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_2c8);
  EVar1 = (local_2c8.Object)->CurrentPhase;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_358[0].__this = this;
  if (EVar1 == Instantiation) {
    local_368.Value = *(ushort *)&pFVar9->AttachParent;
    pTStack_340 = &TStatId::TStatId_NAME_None;
    local_2b8 = pFVar8->BoundObject;
    local_348 = 0;
    uStack_32c = uStack_32c & 0xffffff00;
    uStack_330 = 0x6ff;
    uStack_2a0 = CONCAT71(uStack_337,local_338) & 0xffffffffffffffe0;
    uStack_298._4_4_ = uStack_32c;
    uStack_298._0_4_ = AnyHiPriThreadHiPriTask;
    uStack_2b0 = 0;
    pTStack_2a8 = &TStatId::TStatId_NAME_None;
    local_240.AllMask.Bits.NumBits = 0;
    local_268._2_6_ = uStack_2b6;
    local_268.Accessors = (TTuple<UE::MovieScene::TReadAccess<UObject_*>_>)local_2b8;
    local_240.AllMask.Bits.MaxBits = 0x180;
    local_240.NoneMask.Bits.NumBits = 0;
    local_240.NoneMask.Bits.MaxBits = 0x180;
    local_268.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
    local_268.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
    local_240.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.ComplexMasks.ArrayNum = 0;
    local_240.ComplexMasks.ArrayMax = 0;
    local_190 = 0;
    local_18c = 0x180;
    local_158 = 0;
    local_154 = 0x180;
    local_338 = local_338 & 0xe0;
    local_268.CommonParams.TaskParams._16_8_ = uStack_2a0;
    local_268.CommonParams._24_8_ = uStack_298;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)&local_268,&local_240);
    local_2f8._First = &local_368;
    local_2f8._Last = &local_366;
    UE::MovieScene::FComponentMask::SetAll(&local_240.AllMask,&local_2f8);
    local_360.Value = (pFVar8->Tags).NeedsLink.Value;
    local_35e = (pFVar8->Tags).NeedsUnlink.Value;
    iVar6 = local_240.ComplexMasks.ArrayNum;
    if (local_240.ComplexMasks.ArrayNum == local_240.ComplexMasks.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&local_240.ComplexMasks.AllocatorInstance,
                         &local_240.ComplexMasks.ArrayMax);
    }
    local_240.ComplexMasks.ArrayNum = iVar6 + 1;
    local_2e8._First = &local_360;
    pFVar10 = local_240.ComplexMasks.AllocatorInstance.Data + (longlong)iVar6 * 0x3c;
    local_2e8._Last = local_35c;
    *(int *)(pFVar10 + 0x30) = 0;
    *(int *)(pFVar10 + 0x34) = 0x180;
    pFVar10[0x38] = (FScriptContainerElement)0x2;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar10,&local_2e8);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>::
    Iterate_PerEntityImpl<_UMovieSceneDeferredComponentMovementSystem::OnRun_::__l2::<lambda_1>_&>
              (&local_268,(FEntityManager *)(this->_padding_ + 0x28),&local_240,local_358);
    if (local_240.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.ComplexMasks.AllocatorInstance.Data);
    }
  }
  else if (EVar1 == Evaluation) {
    local_290 = pFVar8->BoundObject;
    pTStack_318 = &TStatId::TStatId_NAME_None;
    local_364.Value = (pFVar9->ComponentTransform).PropertyTag.Value;
    local_320 = 0;
    uStack_304 = uStack_304 & 0xffffff00;
    uStack_308 = 0x6ff;
    uStack_278 = CONCAT71(uStack_30f,local_310) & 0xffffffffffffffe0;
    uStack_270._4_4_ = uStack_304;
    uStack_270._0_4_ = AnyHiPriThreadHiPriTask;
    uStack_288 = 0;
    pTStack_280 = &TStatId::TStatId_NAME_None;
    local_120.AllMask.Bits.NumBits = 0;
    local_148._2_6_ = uStack_28e;
    local_148.Accessors = (TTuple<UE::MovieScene::TReadAccess<UObject_*>_>)local_290;
    local_120.AllMask.Bits.MaxBits = 0x180;
    local_120.NoneMask.Bits.NumBits = 0;
    local_120.NoneMask.Bits.MaxBits = 0x180;
    local_148.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
    local_148.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
    local_120.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ComplexMasks.ArrayNum = 0;
    local_120.ComplexMasks.ArrayMax = 0;
    local_70 = 0;
    local_6c = 0x180;
    local_38 = 0;
    local_34 = 0x180;
    local_310 = local_310 & 0xe0;
    local_148.CommonParams.TaskParams._16_8_ = uStack_278;
    local_148.CommonParams._24_8_ = uStack_270;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)&local_148,&local_120);
    iVar6 = local_120.ComplexMasks.ArrayNum;
    if (local_120.ComplexMasks.ArrayNum == local_120.ComplexMasks.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&local_120.ComplexMasks.AllocatorInstance,
                         &local_120.ComplexMasks.ArrayMax);
    }
    local_120.ComplexMasks.ArrayNum = iVar6 + 1;
    local_2d8._First = &local_364;
    pFVar10 = local_120.ComplexMasks.AllocatorInstance.Data + (longlong)iVar6 * 0x3c;
    local_2d8._Last = &local_362;
    *(int *)(pFVar10 + 0x30) = 0;
    *(int *)(pFVar10 + 0x34) = 0x180;
    pFVar10[0x38] = (FScriptContainerElement)0x2;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar10,&local_2d8);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>::
    Iterate_PerEntityImpl<_UMovieSceneDeferredComponentMovementSystem::OnRun_::__l2::<lambda_1>_&>
              (&local_148,(FEntityManager *)(this->_padding_ + 0x28),&local_120,local_358);
    if (local_120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.ComplexMasks.AllocatorInstance.Data);
    }
  }
  else if (EVar1 == Finalization) {
    OutputDeferredMovements(this);
    uVar2 = (this->ScopedUpdates).NumElements;
    lVar4 = local_370;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      iVar6 = (this->ScopedUpdates).Chunks.Array.ArrayNum;
      local_370 = (longlong)iVar6;
      uVar11 = uVar2 / 5;
      uVar7 = 0;
      if ((int)uVar11 < iVar6) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_378 = (ulonglong)uVar11;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        lVar4 = local_370;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_370 = lVar4;
      this_00 = (FScopedMovementUpdate *)
                (*(longlong *)
                  ((this->ScopedUpdates).Chunks.Array.AllocatorInstance.Data + (ulonglong)uVar11 * 8
                  ) + (ulonglong)(uVar2 % 5) * 0x620);
      lVar4 = local_370;
      if (*(char *)&this_00[1].Owner != '\0') {
        FScopedMovementUpdate::~FScopedMovementUpdate(this_00);
        *(undefined1 *)&this_00[1].Owner = 0;
        lVar4 = local_370;
      }
    }
    local_370 = lVar4;
    TIndirectArray<TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty(&(this->ScopedUpdates).Chunks,((this->ScopedUpdates).NumElements + 4) / 5);
    (this->ScopedUpdates).NumElements = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c8.SharedReferenceCount.ReferenceController);
  return;
}

// OnSchedulePersistentTasks @ 14684c800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::OnSchedulePersistentTasks
          (UMovieSceneDeferredComponentMovementSystem *this,IEntitySystemScheduler *param_1)

{
  byte bVar1;
  int iVar2;
  FBuiltInComponentTypes *pFVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  FScriptContainerElement *this_00;
  undefined1 auStackY_248 [32];
  FComponentTypeID local_208;
  FComponentTypeID local_206 [3];
  UMovieSceneDeferredComponentMovementSystem *local_200;
  TStatIdData *pTStack_1f8;
  byte local_1f0;
  undefined7 uStack_1ef;
  undefined1 local_1e8 [16];
  ulonglong local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  undefined1 local_1b8 [32];
  byte local_198;
  undefined7 uStack_197;
  undefined4 uStack_190;
  uint uStack_18c;
  TComponentTypeID<UObject_*> local_188;
  undefined6 uStack_186;
  undefined8 uStack_180;
  TStatIdData *pTStack_178;
  ulonglong uStack_170;
  ForElementType<unsigned_int> FStack_168;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  ForElementType<unsigned_int> local_138;
  FEntityComponentFilter local_130;
  int local_80;
  int local_7c;
  int local_48;
  int local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  bVar1 = local_1f0;
  local_1b8._16_8_ = 0;
  uStack_190 = 0x6ff;
  uStack_18c = uStack_18c & 0xffffff00;
  uStack_170 = CONCAT71(uStack_197,local_198) & 0xffffffffffffffe0;
  FStack_168._4_4_ = uStack_18c;
  FStack_168._0_4_ = 0x6ff;
  local_200 = (UMovieSceneDeferredComponentMovementSystem *)0x1513352e0;
  local_1b8._24_8_ = &TStatId::TStatId_NAME_None;
  pTStack_1f8 = &TStatId::TStatId_NAME_None;
  local_188 = pFVar3->BoundObject;
  uStack_180 = 0;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_208.Value = (pFVar4->ComponentTransform).PropertyTag.Value;
  local_158._2_6_ = uStack_186;
  local_158._0_2_ = local_188;
  local_1d8 = CONCAT71(uStack_1ef,local_1f0) & 0xffffffffffffffe1 | 9;
  local_130.AllMask.Bits.NumBits = 0;
  uStack_150 = (UMovieSceneDeferredComponentMovementSystem *)0x0;
  local_148 = &TStatId::TStatId_NAME_None;
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
  local_1f0 = local_1f0 & 0xe1 | 1;
  local_198 = local_198 & 0xe0;
  uStack_140 = uStack_170;
  local_138 = FStack_168;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_158,&local_130);
  iVar2 = local_130.ComplexMasks.ArrayNum;
  if (local_130.ComplexMasks.ArrayNum == local_130.ComplexMasks.ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_130.ComplexMasks.AllocatorInstance,
                       &local_130.ComplexMasks.ArrayMax);
  }
  local_130.ComplexMasks.ArrayNum = iVar2 + 1;
  local_1c8._First = &local_208;
  this_00 = local_130.ComplexMasks.AllocatorInstance.Data + (longlong)iVar2 * 0x3c;
  local_1c8._Last = local_206;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_1c8);
  uStack_150 = local_200;
  local_1e8._8_8_ = pTStack_1f8;
  local_1e8._0_8_ =
       L"struct UMovieSceneDeferredComponentMovementSystem::OnSchedulePersistentTasks::FCacheDeferredUpdates"
  ;
  local_200 = (UMovieSceneDeferredComponentMovementSystem *)
              UE::MovieScene::
              TScheduledEntityTask<`UMovieSceneDeferredComponentMovementSystem::OnSchedulePersistentTasks'::__l2::FCacheDeferredUpdates,UE::MovieScene::TReadAccess<UObject_*>_>
              ::ScheduledRun_PerEntity;
  uStack_140 = local_1d8;
  local_1d8 = CONCAT71(local_1d8._1_7_,bVar1) & 0xffffffffffffffe1 | 0xb;
  local_148 = pTStack_1f8;
  pTStack_1f8 = (TStatIdData *)CONCAT71(pTStack_1f8._1_7_,3);
  local_1c8._First = (FComponentTypeID *)this;
  UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>_>::
  ScheduleImpl<_UMovieSceneDeferredComponentMovementSystem::OnSchedulePersistentTasks_::__l2::FCacheDeferredUpdates,UMovieSceneDeferredComponentMovementSystem_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>_> *)local_158,
             (FEntityManager *)local_1b8,(IEntitySystemScheduler *)(this->_padding_ + 0x28),
             (FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_1e8,&local_200);
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnUnlink @ 146851930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::OnUnlink
          (UMovieSceneDeferredComponentMovementSystem *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScopedMovementUpdate *this_00;
  undefined1 auStackX_8 [8];
  
  if ((this->ScopedUpdates).NumElements != 0) {
    auStackX_8[0] = 0;
    bVar3 = `UMovieSceneDeferredComponentMovementSystem::EnsureMovementsFlushed'::__l3::<lambda_1>::
            operator()(auStackX_8);
    if (!bVar3) {
      uVar1 = (this->ScopedUpdates).NumElements;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        uVar5 = uVar1 / 5;
        uVar4 = 0;
        if ((int)uVar5 < (this->ScopedUpdates).Chunks.Array.ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FScopedMovementUpdate *)
                  (*(longlong *)
                    ((this->ScopedUpdates).Chunks.Array.AllocatorInstance.Data +
                    (ulonglong)uVar5 * 8) + (ulonglong)(uVar1 % 5) * 0x620);
        if (*(char *)&this_00[1].Owner != '\0') {
          FScopedMovementUpdate::~FScopedMovementUpdate(this_00);
          *(undefined1 *)&this_00[1].Owner = 0;
        }
      }
      TIndirectArray<TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::Empty(&(this->ScopedUpdates).Chunks,0);
      (this->ScopedUpdates).NumElements = 0;
    }
  }
  return;
}

// OutputDeferredMovements @ 146851d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneDeferredComponentMovementSystem::OutputDeferredMovements
          (UMovieSceneDeferredComponentMovementSystem *this)

{
  longlong *plVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  longlong *local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((UE::MovieScene::GDeferredMovementOutputMode != 0) && (4 < (byte)LogMovieScene._0_1_)) &&
     ((this->ScopedUpdates).NumElements != 0)) {
    if (UE::MovieScene::GDeferredMovementOutputMode == 1) {
      UE::MovieScene::GDeferredMovementOutputMode = 0;
    }
    uVar6 = (this->ScopedUpdates).NumElements;
    pFVar8 = (this->ScopedUpdates).Chunks.Array.AllocatorInstance.Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    if (uVar6 != 0) {
      uVar11 = (ulonglong)uVar6;
      uVar9 = 0;
      do {
        puVar7 = (undefined8 *)(uVar9 * 0x620 + *(longlong *)pFVar8);
        if ((*(char *)(puVar7 + 0xc2) == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_88 = (longlong *)*puVar7;
        iVar5 = (**(code **)(*local_88 + 0x5e0))();
        if (((iVar5 - 1U & 0xfffffff9) == 0) && (iVar5 != 7)) {
          if (((local_a8.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < local_a8.Data + (longlong)local_a0._4_4_ * 8))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)local_a0;
          if ((int)local_a0 == local_a0._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar5 + 1);
          FVar10.Data = local_a8.Data;
        }
        else {
          if ((local_98.Data <= (FScriptContainerElement *)&local_88) &&
             (((FScriptContainerElement *)&local_88 < local_98.Data + (longlong)local_90._4_4_ * 8
              && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)))) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)local_90;
          if ((int)local_90 == local_90._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_98,(int *)((longlong)&local_90 + 4));
          }
          local_90 = CONCAT44(local_90._4_4_,iVar5 + 1);
          FVar10.Data = local_98.Data;
        }
        *(longlong **)(FVar10.Data + (longlong)iVar5 * 8) = local_88;
        uVar6 = (int)uVar9 + 1;
        uVar9 = 0;
        pFVar3 = pFVar8 + 8;
        if (uVar6 < 5) {
          uVar9 = (ulonglong)uVar6;
          pFVar3 = pFVar8;
        }
        pFVar8 = pFVar3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (4 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
    if ((int)local_a0 != 0) {
      if (4 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      iVar5 = (int)local_a0;
      pFVar8 = local_a8.Data + (longlong)(int)local_a0 * 8;
      FVar10.Data = local_a8.Data;
      while( true ) {
        if ((int)local_a0 != iVar5) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar10.Data == pFVar8) break;
        plVar1 = *(longlong **)FVar10.Data;
        if (4 < (byte)LogMovieScene._0_1_) {
          local_res20 = *(FName *)(plVar1 + 3);
          ::FName::ToString(&local_res20,&local_58);
          local_80 = *(FName *)(plVar1[0x15] + 0x18);
          ::FName::ToString(&local_80,&local_68);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        FVar10.Data = FVar10.Data + 8;
      }
    }
    if ((int)local_90 != 0) {
      if (4 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      iVar5 = (int)local_90;
      pFVar8 = local_98.Data + (longlong)(int)local_90 * 8;
      FVar10.Data = local_98.Data;
      while( true ) {
        if ((int)local_90 != iVar5) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar10.Data == pFVar8) break;
        plVar1 = *(longlong **)FVar10.Data;
        if (4 < (byte)LogMovieScene._0_1_) {
          local_78 = *(FName *)(plVar1 + 3);
          ::FName::ToString(&local_78,&local_38);
          local_70 = *(FName *)(plVar1[0x15] + 0x18);
          ::FName::ToString(&local_70,&local_48);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        FVar10.Data = FVar10.Data + 8;
      }
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneDeferredComponentMovementSystem @ 14686ca70

void __cdecl
UMovieSceneDeferredComponentMovementSystem::
StaticRegisterNativesUMovieSceneDeferredComponentMovementSystem(void)

{
  return;
}

// operator() @ 1504f4600

bool __thiscall
`UMovieSceneDeferredComponentMovementSystem::EnsureMovementsFlushed'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2121865984850526129>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2121865984850526129>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

