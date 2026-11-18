// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// StaticClass @ 146100980

UClass * __cdecl UMovieSceneEvaluationHookSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvaluationHookSystem",
               &Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEvaluationHookSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEvaluationHookSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEvaluationHookSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton;
}

// UMovieSceneEvaluationHookSystem @ 14611b890

UMovieSceneEvaluationHookSystem * __thiscall
UMovieSceneEvaluationHookSystem::UMovieSceneEvaluationHookSystem
          (UMovieSceneEvaluationHookSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7UMovieSceneEvaluationHookSystem__6B_;
  *(undefined8 *)&this->PendingEventsByRootInstance = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x8 = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x20 = 0;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x28 = 0;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x34 = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x40 = 0;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x48 = 0;
  return this;
}

// UMovieSceneEvaluationHookSystem @ 14611b900

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEvaluationHookSystem * __thiscall
UMovieSceneEvaluationHookSystem::UMovieSceneEvaluationHookSystem
          (UMovieSceneEvaluationHookSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEvaluationHookSystem__6B_;
  *(undefined8 *)&this->PendingEventsByRootInstance = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x8 = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x20 = 0;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x28 = 0;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x34 = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x40 = 0;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x48 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0x2c;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->EvalTime;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneEvaluationHookSystem @ 14611e890

void __thiscall
UMovieSceneEvaluationHookSystem::~UMovieSceneEvaluationHookSystem
          (UMovieSceneEvaluationHookSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneEvaluationHookSystem__6B_;
  *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingEventsByRootInstance).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingEventsByRootInstance);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddEvent @ 146122fa0

void __thiscall
UMovieSceneEvaluationHookSystem::AddEvent
          (UMovieSceneEvaluationHookSystem *this,FInstanceHandle param_1,
          FMovieSceneEvaluationHookEvent *param_2)

{
  TMap<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort uVar5;
  undefined1 *puVar6;
  FInstanceHandle local_res8 [2];
  FInstanceHandle local_res10 [2];
  FInstanceHandle *local_res18;
  
  this_00 = &this->PendingEventsByRootInstance;
  uVar5 = param_1.InstanceID;
  local_res8[0] = param_1;
  local_res10[0] = param_1;
  if (*(int *)&(this->PendingEventsByRootInstance).field_0x8 !=
      *(int *)&(this->PendingEventsByRootInstance).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PendingEventsByRootInstance).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PendingEventsByRootInstance).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + ((ulonglong)
                               (*(int *)&(this->PendingEventsByRootInstance).field_0x48 - 1) &
                              (ulonglong)uVar5) * 4);
    if (iVar3 != -1) {
      local_res10[0].InstanceSerial = param_1.InstanceSerial;
      do {
        puVar4 = (undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (((ushort)*puVar4 == uVar5) &&
           ((ushort)((uint)*puVar4 >> 0x10) == local_res10[0].InstanceSerial)) {
          if ((iVar3 != -1) && (puVar4 != (undefined4 *)0x0)) goto LAB_146123055;
          break;
        }
        iVar3 = puVar4[6];
      } while (iVar3 != -1);
    }
  }
  local_res18 = local_res8;
  TSet<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMovieSceneEvaluationInstanceKey_&&>_>
            ((TSet<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,
             (TKeyInitializer<FMovieSceneEvaluationInstanceKey_&&> *)(ulonglong)uVar5,
             (bool *)&local_res18);
  puVar4 = (undefined4 *)((longlong)(int)local_res10[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_146123055:
  if (((*(FMovieSceneEvaluationHookEvent **)(puVar4 + 2) <= param_2) &&
      (param_2 < *(FMovieSceneEvaluationHookEvent **)(puVar4 + 2) + (int)puVar4[5])) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = puVar4[4];
  if (iVar3 == puVar4[5]) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)(puVar4 + 2),puVar4 + 5);
  }
  puVar4[4] = iVar3 + 1;
  FMovieSceneEvaluationHookEvent::FMovieSceneEvaluationHookEvent
            ((FMovieSceneEvaluationHookEvent *)
             (((ForAnyElementType *)(puVar4 + 2))->Data + (longlong)iVar3 * 0x40),param_2);
  return;
}

// GetPrivateStaticClass @ 14613c440

UClass * __cdecl UMovieSceneEvaluationHookSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvaluationHookSystem",
               &Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEvaluationHookSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEvaluationHookSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEvaluationHookSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.InnerSingleton;
}

// HasEvents @ 14613dc60

bool __thiscall UMovieSceneEvaluationHookSystem::HasEvents(UMovieSceneEvaluationHookSystem *this)

{
  return *(int *)&(this->PendingEventsByRootInstance).field_0x8 !=
         *(int *)&(this->PendingEventsByRootInstance).field_0x34;
}

// IsRelevantImpl @ 1461414a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEvaluationHookSystem::IsRelevantImpl
          (UMovieSceneEvaluationHookSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  TComponentTypeID<FMovieSceneEvaluationHookComponent> TVar1;
  FBuiltInComponentTypes *pFVar2;
  FComponentMask *pFVar3;
  
  if (*(int *)&(this->PendingEventsByRootInstance).field_0x8 ==
      *(int *)&(this->PendingEventsByRootInstance).field_0x34) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    TVar1 = pFVar2->EvaluationHook;
    pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
    if (((TVar1 == (TComponentTypeID<FMovieSceneEvaluationHookComponent>)0xffff) ||
        ((pFVar3->Bits).NumBits <= (int)(uint)(ushort)TVar1)) ||
       ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[(ushort)TVar1 >> 5].Pad >>
         ((ushort)TVar1 & 0x1f) & 1) == 0)) {
      return false;
    }
  }
  return true;
}

// OnRun @ 146146a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEvaluationHookSystem::OnRun
          (UMovieSceneEvaluationHookSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  Type TVar4;
  longlong lVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  FBuiltInComponentTypes *pFVar12;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
  *pTVar13;
  undefined1 auStackY_428 [32];
  FComponentTypeID local_3e8;
  FComponentTypeID local_3e6;
  FComponentTypeID local_3e4;
  FComponentTypeID local_3e2;
  FInstanceRegistry *local_3e0;
  UMovieSceneEvaluationHookSystem *local_3d8;
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [4];
  TComponentTypeID<FFrameTime> local_3c4;
  TComponentTypeID<UE::MovieScene::FEvaluationHookFlags> local_3c2;
  undefined8 local_3c0;
  TStatIdData *pTStack_3b8;
  undefined8 local_3b0;
  ulonglong uStack_3a8;
  undefined8 local_398;
  TStatIdData *pTStack_390;
  byte local_388;
  uchar auStack_387 [7];
  ForElementType<unsigned_int> aFStack_380 [2];
  undefined1 local_370 [16];
  byte local_360;
  undefined7 uStack_35f;
  undefined4 uStack_358;
  uint uStack_354;
  undefined8 local_348;
  TStatIdData *pTStack_340;
  byte local_338;
  undefined7 uStack_337;
  undefined4 uStack_330;
  uint uStack_32c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_328;
  <lambda_1> local_318;
  initializer_list<UE::MovieScene::FComponentTypeID> local_308;
  <lambda_2> local_2f8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_2e8;
  TComponentTypeID<FFrameTime> local_2e6;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> local_2e4;
  undefined8 local_2e0;
  TStatIdData *pTStack_2d8;
  ulonglong local_2d0;
  undefined8 uStack_2c8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_2c0;
  TComponentTypeID<FFrameTime> local_2be;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> local_2bc;
  undefined8 local_2b8;
  TStatIdData *pTStack_2b0;
  ulonglong local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [168];
  void *local_1f0;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
  local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  lVar5 = this->_padding_;
  if (*(longlong *)(lVar5 + 0x610) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar5 + 0x610);
  pTVar7 = *(TReferenceControllerBase<1> **)(lVar5 + 0x618);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar6 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  cVar3 = *(char *)(lVar6 + 0x84);
  if (cVar3 == '\x04') {
    pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
    lVar5 = this->_padding_;
    if (*(longlong *)(lVar5 + 0x580) == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_318.InstanceRegistry = *(FInstanceRegistry **)(lVar5 + 0x580);
    local_2e8 = pFVar12->InstanceHandle;
    local_2e6 = pFVar12->EvalTime;
    local_2e4 = pFVar12->EvaluationHook;
    local_3e8.Value = (pFVar12->Tags).NeedsLink.Value;
    local_328._First = &local_3e8;
    local_328._Last = &local_3e6;
    local_398 = 0;
    pTStack_390 = &TStatId::TStatId_NAME_None;
    aFStack_380[0]._0_4_ = 0x6ff;
    aFStack_380[0]._4_4_ = aFStack_380[0]._4_4_ & 0xffffff00;
    local_2d0 = CONCAT71(auStack_387,local_388) & 0xffffffffffffffe0;
    uStack_2c8._4_4_ = aFStack_380[0]._4_4_;
    uStack_2c8._0_4_ = 0x6ff;
    local_2e0 = 0;
    pTStack_2d8 = &TStatId::TStatId_NAME_None;
    local_388 = local_388 & 0xe0;
    local_318.__this = this;
    local_2f8.__this = this;
    local_2f8.InstanceRegistry = local_318.InstanceRegistry;
    pTVar13 = UE::MovieScene::
              TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
              ::FilterAny((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                           *)&local_2e8,
                          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                           *)(local_298 + 0x10),&local_328);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
    ::Iterate_PerAllocationImpl<_UMovieSceneEvaluationHookSystem::UpdateHooks_::__l2::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                *)pTVar13,(FEntityManager *)(this->_padding_ + 0x28),&pTVar13->Filter,&local_318);
    if (local_1f0 != (void *)0x0) {
      FMemory::Free(local_1f0);
    }
    local_2c0 = pFVar12->InstanceHandle;
    local_2be = pFVar12->EvalTime;
    local_2bc = pFVar12->EvaluationHook;
    local_3e4.Value = (pFVar12->Tags).Finished.Value;
    local_308._First = &local_3e4;
    local_308._Last = &local_3e2;
    local_370._0_8_ = 0;
    local_370._8_8_ = &TStatId::TStatId_NAME_None;
    uStack_358 = 0x6ff;
    uStack_354 = uStack_354 & 0xffffff00;
    local_2a8 = CONCAT71(uStack_35f,local_360) & 0xffffffffffffffe0;
    uStack_2a0._4_4_ = uStack_354;
    uStack_2a0._0_4_ = 0x6ff;
    local_2b8 = 0;
    pTStack_2b0 = &TStatId::TStatId_NAME_None;
    local_360 = local_360 & 0xe0;
    pTVar13 = UE::MovieScene::
              TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
              ::FilterAny((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                           *)&local_2c0,&local_168,&local_308);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
    ::Iterate_PerAllocationImpl<_UMovieSceneEvaluationHookSystem::UpdateHooks_::__l2::<lambda_2>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                *)pTVar13,(FEntityManager *)(this->_padding_ + 0x28),&pTVar13->Filter,&local_2f8);
    if (local_168.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Filter.ComplexMasks.AllocatorInstance.Data);
    }
  }
  else if (cVar3 == '\x10') {
    pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
    uVar9 = uStack_32c;
    uStack_330 = 0x6ff;
    pTStack_340 = &TStatId::TStatId_NAME_None;
    local_3c8._0_2_ = pFVar12->InstanceHandle;
    local_338 = local_338 & 0xe0;
    local_3c8._2_2_ = pFVar12->EvaluationHook;
    local_3c4 = pFVar12->EvalTime;
    local_3c2 = pFVar12->EvaluationHookFlags;
    uStack_32c = uStack_32c & 0xffffff00;
    local_348 = 0;
    TVar4 = (((UMovieSceneEntitySystemLinker *)this->_padding_)->EntityManager).DispatchThread;
    uStack_3a8 = CONCAT44(uVar9,TVar4) & 0xffffff00ffffffff;
    local_3c0 = 0;
    pTStack_3b8 = &TStatId::TStatId_NAME_None;
    if ((TVar4 == GameThread) || (TVar4 == GameThread_Local)) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    local_3b0._1_7_ = uStack_337;
    local_3b0._0_1_ = local_338 | bVar11;
    local_3e0 = UMovieSceneEntitySystemLinker::GetInstanceRegistry
                          ((UMovieSceneEntitySystemLinker *)this->_padding_);
    local_3d8 = this;
    UE::MovieScene::
    TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
    ::
    Dispatch_PerAllocation<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*>
              ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                *)local_3c8,(FEntityManager *)local_3d0,
               (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
               (FSystemSubsequentTasks *)param_1,(UMovieSceneEvaluationHookSystem **)param_2,
               (FInstanceRegistry **)&local_3d8);
    if (local_3d0 != (undefined1  [8])0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_3d0 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_3d0)(local_3d0,1);
      }
    }
  }
  else if (*(int *)&(this->PendingEventsByRootInstance).field_0x8 !=
           *(int *)&(this->PendingEventsByRootInstance).field_0x34) {
    if (cVar3 != ' ') {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3515976446025662328>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEvaluationHookSystem.cpp"
                          ,0x88,"CurrentPhase == ESystemPhase::Finalization");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (*(char *)(lVar6 + 0x90) == '\0') {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bCanQueueEventTriggers",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemRunner.cpp"
                          ,0x58f,L"Can\'t queue event triggers at this point in the update loop.");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UMovieSceneEvaluationHookSystem>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (lVar6 + 0x58),(UMovieSceneEvaluationHookSystem *)local_298,(pmf_356a2711)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// OnSchedulePersistentTasks @ 146148b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEvaluationHookSystem::OnSchedulePersistentTasks
          (UMovieSceneEvaluationHookSystem *this,IEntitySystemScheduler *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  UMovieSceneEvaluationHookSystem *local_res20;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_98;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> local_96;
  TComponentTypeID<FFrameTime> local_94;
  TComponentTypeID<UE::MovieScene::FEvaluationHookFlags> local_92;
  undefined8 local_90;
  TStatIdData *pTStack_88;
  byte local_80;
  undefined7 uStack_7f;
  ulonglong uStack_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined8 local_50;
  TStatIdData *pTStack_48;
  byte local_40;
  undefined7 uStack_3f;
  undefined4 uStack_38;
  uint uStack_34;
  UMovieSceneEvaluationHookSystem *local_30;
  undefined1 local_28;
  
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar3 = uStack_34;
  pTStack_48 = &TStatId::TStatId_NAME_None;
  local_40 = local_40 & 0xe0;
  local_50 = 0;
  local_94 = pFVar5->EvalTime;
  local_98 = pFVar5->InstanceHandle;
  local_96 = pFVar5->EvaluationHook;
  local_92 = pFVar5->EvaluationHookFlags;
  uStack_38 = 0x6ff;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_7f = uStack_3f;
  local_90 = 0;
  pTStack_88 = &TStatId::TStatId_NAME_None;
  iVar1 = *(int *)(this->_padding_ + 0x2cc);
  uStack_78 = CONCAT44(uVar3,iVar1) & 0xffffff00ffffffff;
  if ((iVar1 == 1) || (iVar1 == 0x101)) {
    local_80 = 1;
  }
  else {
    local_80 = 0;
  }
  local_80 = local_40 | local_80;
  if (*(longlong *)(this->_padding_ + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_60 = CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffd;
  local_70._8_8_ = pTStack_88;
  local_70._0_8_ = L"struct UE::MovieScene::FEvaluationHookUpdater";
  local_30 = (UMovieSceneEvaluationHookSystem *)
             UE::MovieScene::
             TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
             ::ScheduledRun_PerAllocation;
  local_28 = 3;
  local_res20 = this;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
  ::
  ScheduleImpl<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
              *)&local_98,(FEntityManager *)&stack0x00000008,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_70,&local_30,(FInstanceRegistry **)&local_res20);
  return;
}

// SortEvents @ 1461551c0

void __thiscall UMovieSceneEvaluationHookSystem::SortEvents(UMovieSceneEvaluationHookSystem *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  FMovieSceneEvaluationHookEvent *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  TLess<void> local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = this->_padding_;
  if ((*(longlong *)(lVar4 + 0x580) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = *(int *)&(this->PendingEventsByRootInstance).field_0x28;
  puVar1 = &(this->PendingEventsByRootInstance).field_0x10;
  lVar4 = *(longlong *)(lVar4 + 0x580);
  iVar14 = 0;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->PendingEventsByRootInstance).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14615529d;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar16 + -1 + local_res10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14615529d:
  uVar13 = *(uint *)&(this->PendingEventsByRootInstance).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PendingEventsByRootInstance).field_0x8 -
                       *(int *)&(this->PendingEventsByRootInstance).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->PendingEventsByRootInstance).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->PendingEventsByRootInstance).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1461553a1;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_1461553a1:
  while( true ) {
    if (*(int *)&(this->PendingEventsByRootInstance).field_0x8 -
        *(int *)&(this->PendingEventsByRootInstance).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)&this->PendingEventsByRootInstance;
    lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x20;
    iVar3 = *(int *)(lVar11 + 0x10 + lVar10);
    pFVar5 = *(FMovieSceneEvaluationHookEvent **)(lVar11 + 8 + lVar10);
    if (*(int *)((ulonglong)*(ushort *)(lVar11 + lVar10) * 0x140 + 0x88 + *(longlong *)(lVar4 + 8))
        == 0) {
      AlgoImpl::
      IntroSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TLess<void>_>
                (pFVar5,iVar3,
                 (TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>)0x2c,
                 local_res8[0]);
    }
    else {
      AlgoImpl::
      IntroSortInternal<FMovieSceneEvaluationHookEvent,int,UE::Core::Private::TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>,TGreater<void>_>
                (pFVar5,iVar3,
                 (TProjectionMemberData<FFrameTime_FMovieSceneEvaluationHookEvent::*>)0x2c,
                 (TGreater<void>)local_res8[0]);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// StaticRegisterNativesUMovieSceneEvaluationHookSystem @ 146155800

void __cdecl
UMovieSceneEvaluationHookSystem::StaticRegisterNativesUMovieSceneEvaluationHookSystem(void)

{
  return;
}

// TriggerAllEvents @ 146158920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEvaluationHookSystem::TriggerAllEvents(UMovieSceneEvaluationHookSystem *this)

{
  FMovieSceneSequenceID FVar1;
  FName FVar2;
  FMovieSceneNestedSequenceTransform *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSharedPlaybackState *pFVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_MovieSceneECS_GenericHooks> FVar19;
  ulonglong uVar20;
  ushort *puVar21;
  longlong lVar22;
  longlong *plVar23;
  ushort *puVar24;
  uint uVar25;
  longlong *plVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  UObject *pUVar30;
  uint uVar31;
  longlong lVar32;
  longlong *plVar33;
  undefined1 auStackY_398 [32];
  undefined1 local_337;
  undefined1 local_336 [2];
  uint local_334;
  FColor_u_0 local_330 [2];
  FName local_328;
  ushort local_320 [4];
  uint local_318;
  uint uStack_314;
  longlong *local_310;
  longlong local_308;
  FName local_300;
  longlong local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  ForAnyElementType local_2b0;
  int local_2a8;
  int local_2a4;
  FMovieSceneWarpCounter local_2a0;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  byte local_26c;
  int local_268;
  undefined4 local_264;
  FName local_258;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  FName local_200;
  int local_1f8;
  int local_1f4;
  FMovieSceneWarpCounter local_1f0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  byte local_1bc;
  FPreAnimatedEvaluationHookCaptureSources *local_1b8;
  longlong *local_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  FSharedPlaybackState *local_150;
  TReferenceControllerBase<1> *local_148;
  FSharedPlaybackState *local_140;
  TReferenceControllerBase<1> *local_138;
  FSharedPlaybackState *local_130;
  TReferenceControllerBase<1> *local_128;
  FSharedPlaybackState *local_120;
  TReferenceControllerBase<1> *local_118;
  FName local_110 [4];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint uStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  undefined8 uStack_a0;
  FScopedPreAnimatedCaptureSource local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_398;
  uVar28 = 0;
  FVar19 = StatPtr_MovieSceneECS_GenericHooks;
  if (StatPtr_MovieSceneECS_GenericHooks ==
      (FThreadSafeStaticStat<FStat_MovieSceneECS_GenericHooks>)0x0) {
    pFVar18 = ::FName::FName(local_110,"MovieSceneECS_GenericHooks");
    FVar19 = (FThreadSafeStaticStat<FStat_MovieSceneECS_GenericHooks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneECS_GenericHooks,*pFVar18,
                        L"Generic Hooks","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar2 = *(FName *)FVar19;
  bVar11 = false;
  bVar12 = false;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_330[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_330[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_328 = FVar2;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_328,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEvaluationHookSystem.cpp"
                   ,0xe8);
        bVar11 = true;
        bVar12 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_318 = FVar2.ComparisonIndex.Value.Value;
      uStack_314 = FVar2.Number;
      local_300 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar15 = true;
      goto LAB_146158aa6;
    }
  }
  bVar12 = bVar16;
  bVar11 = bVar15;
  bVar15 = false;
  local_300 = local_258;
LAB_146158aa6:
  lVar32 = this->_padding_;
  if ((*(longlong *)(lVar32 + 0x580) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar32 = *(longlong *)(lVar32 + 0x580);
  local_308 = lVar32;
  local_1b8 = UE::MovieScene::FPreAnimatedStateExtension::GetEvaluationHookMetaData
                        ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468));
  uVar14 = local_e8._24_8_;
  uVar13 = local_e8._16_8_;
  local_c8 = *(uint **)&(this->PendingEventsByRootInstance).field_0x20;
  uVar10 = *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x28;
  uVar25 = (uint)uVar10;
  local_e8._0_8_ = *(undefined8 *)&this->PendingEventsByRootInstance;
  puVar7 = &(this->PendingEventsByRootInstance).field_0x8;
  iStack_188 = *(int *)puVar7;
  local_e8._8_8_ = *(undefined8 *)puVar7;
  uStack_1a4 = 1;
  local_b8 = *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x30;
  iStack_b4 = *(int *)&(this->PendingEventsByRootInstance).field_0x34;
  uVar8 = *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x38;
  uVar9 = *(undefined4 *)&(this->PendingEventsByRootInstance).field_0x3c;
  uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
  lVar22 = uStack_a0;
  _uStack_c0 = uVar10;
  local_e8._16_8_ = *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x10;
  local_e8._24_8_ = *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x18;
  local_a8 = *(void **)&(this->PendingEventsByRootInstance).field_0x40;
  *(undefined8 *)&this->PendingEventsByRootInstance = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x8 = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x10 = uVar13;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x18 = uVar14;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x20 = 0;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x28 = 0x8000000000;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x30 = 0xffffffff;
  *(ulonglong *)&(this->PendingEventsByRootInstance).field_0x38 = CONCAT44(uStack_ac,uStack_b0);
  uStack_b0 = uVar8;
  uStack_ac = uVar9;
  uStack_a0 = *(ulonglong *)&(this->PendingEventsByRootInstance).field_0x48;
  *(undefined8 *)&(this->PendingEventsByRootInstance).field_0x40 = 0;
  *(longlong *)&(this->PendingEventsByRootInstance).field_0x48 = lVar22;
  uStack_194 = uVar28;
  local_190 = uVar28;
  if (uVar25 != 0) {
    puVar29 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar29 = local_c8;
    }
    uVar31 = *puVar29;
    local_190 = 0;
    uVar28 = 0;
    while (uVar31 == 0) {
      lVar22 = (longlong)(int)uVar28;
      local_190 = local_190 + 0x20;
      uVar28 = uVar28 + 1;
      uStack_194 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
      goto LAB_146158c40;
      uVar31 = puVar29[lVar22 + 1];
    }
    uStack_1a4 = -uVar31 & uVar31;
    uVar20 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_310 = (longlong *)CONCAT44(local_310._4_4_,(int)lVar22);
    uStack_194 = (int)lVar22 + -1 + local_190;
    if ((int)uVar25 < (int)uStack_194) {
      uStack_194 = uVar25;
    }
  }
LAB_146158c40:
  local_1b0 = (longlong *)local_e8;
  local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uStack_18c = local_ec;
  uVar31 = uVar25 & 0xffffffe0;
  uStack_198 = 0xffffffff;
  uStack_1a8 = uVar28;
  local_180 = (longlong *)local_e8;
  TStack_178._padding_ = CONCAT44(uStack_1a4,uVar28);
  iVar27 = (int)uVar25 >> 5;
  iStack_188 = iStack_188 - iStack_b4;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  TStack_178.UnvisitedBitMask = 0xffffffff;
  TStack_178.CurrentBitIndex = uStack_194;
  TStack_178.BaseBitIndex = local_190;
  TStack_178._28_4_ = local_ec;
  uStack_158 = CONCAT44(uStack_184,iStack_188);
  uVar28 = uVar25;
  local_334 = uVar25;
  if ((int)uVar25 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar28 = uStack_c0;
  }
  if (uVar25 != uVar28) {
    puVar29 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar29 = local_c8;
    }
    uVar25 = -1 << ((byte)uVar10 & 0x1f) & puVar29[iVar27];
    while (uVar25 == 0) {
      lVar22 = (longlong)iVar27;
      uVar31 = uVar31 + 0x20;
      iVar27 = iVar27 + 1;
      uVar25 = uVar28;
      local_334 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_146158d93;
      uVar25 = puVar29[lVar22 + 1];
    }
    uVar20 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar25 = (uVar31 - 1) + (int)lVar22;
    local_334 = uVar25;
    if ((int)uVar28 < (int)uVar25) {
      uVar25 = uVar28;
      local_334 = uVar28;
    }
  }
LAB_146158d93:
  while( true ) {
    plVar26 = local_180;
    if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_337);
    }
    FVar2 = local_300;
    if (((TStack_178.CurrentBitIndex == uVar25) &&
        (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar26 == (longlong *)local_e8)) break;
    puVar24 = (ushort *)((longlong)TStack_178.CurrentBitIndex * 0x20 + *plVar26);
    local_330[0] = (FColor_u_0)((FColor_u_0 *)(puVar24 + 8))->Bits;
    uVar20 = (ulonglong)(int)local_330[0].Bits;
    plVar33 = *(longlong **)(puVar24 + 4);
    local_310 = plVar33 + uVar20 * 8;
    plVar26 = plVar33 + 2;
    while( true ) {
      plVar23 = local_310;
      if (*(int *)(puVar24 + 8) != (int)uVar20) {
        `TCheckedPointerIterator<FMovieSceneEvaluationHookEvent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_336);
      }
      if (plVar33 == plVar23) break;
      lVar32 = (ulonglong)*puVar24 * 0x140 + *(longlong *)(lVar32 + 8);
      local_238 = *(undefined8 *)(lVar32 + 0x68);
      uStack_230 = *(undefined8 *)(lVar32 + 0x70);
      local_228 = *(undefined8 *)(lVar32 + 0x78);
      uStack_220 = *(undefined8 *)(lVar32 + 0x80);
      local_218 = *(undefined8 *)(lVar32 + 0x88);
      uStack_210 = *(undefined8 *)(lVar32 + 0x90);
      local_208 = *(undefined4 *)(lVar32 + 0x98);
      local_200.ComparisonIndex.Value = 0;
      local_200.Number = 0;
      iVar27 = *(int *)(lVar32 + 0xa8);
      pFVar3 = *(FMovieSceneNestedSequenceTransform **)(lVar32 + 0xa0);
      local_1f8 = iVar27;
      if (iVar27 == 0) {
        local_1f4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar27,0,(ForAnyElementType *)&local_200,iVar27,&local_1f4);
        ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                  ((void *)local_200,pFVar3,iVar27);
      }
      FMovieSceneWarpCounter::FMovieSceneWarpCounter
                (&local_1f0,(FMovieSceneWarpCounter *)(lVar32 + 0xb0));
      local_1c8 = *(undefined4 *)(lVar32 + 0xd8);
      local_1c4 = *(undefined4 *)(lVar32 + 0xdc);
      local_1c0 = *(undefined4 *)(lVar32 + 0xe0);
      local_1bc = *(byte *)(lVar32 + 0xe4) & 1 | local_1bc & 0xfe;
      local_1bc = (local_1bc ^ *(byte *)(lVar32 + 0xe4)) & 2 ^ local_1bc;
      local_1bc = (local_1bc ^ *(byte *)(lVar32 + 0xe4)) & 4 ^ local_1bc;
      local_1bc = (local_1bc ^ *(byte *)(lVar32 + 0xe4)) & 8 ^ local_1bc;
      local_1bc = (local_1bc ^ *(byte *)(lVar32 + 0xe4)) & 0x10 ^ local_1bc;
      local_1bc = (local_1bc ^ *(byte *)(lVar32 + 0xe4)) & 0x20 ^ local_1bc;
      local_1bc = (local_1bc ^ *(byte *)(lVar32 + 0xe4)) & 0x40 ^ local_1bc;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar32 + 0x120);
      pFVar5 = *(FSharedPlaybackState **)(lVar32 + 0x118);
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        uVar17 = (undefined1)plVar26[5];
        FVar1.Value = *(uint *)((longlong)plVar26 + 0x14);
        pUVar30 = (UObject *)*plVar33;
      }
      else {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        uVar17 = (undefined1)plVar26[5];
        FVar1.Value = *(uint *)((longlong)plVar26 + 0x14);
        pUVar30 = (UObject *)*plVar33;
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_248.Object = pFVar5;
      local_248.SharedReferenceCount.ReferenceController = pTVar4;
      FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                (&local_98,&local_248,pUVar30,FVar1,(bool)uVar17);
      iVar27 = local_1f8;
      local_2f8 = *plVar26;
      lStack_2f0 = plVar26[1];
      local_2e8 = local_238;
      uStack_2e0 = uStack_230;
      local_2b8 = local_208;
      local_2d8 = local_228;
      uStack_2d0 = uStack_220;
      local_2c8 = local_218;
      uStack_2c0 = uStack_210;
      local_2b0.Data = (FScriptContainerElement *)0x0;
      local_328 = local_200;
      local_2a8 = local_1f8;
      if (local_1f8 == 0) {
        local_2a4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,local_1f8,0,&local_2b0,local_1f8,&local_2a4);
        ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                  (local_2b0.Data,(FMovieSceneNestedSequenceTransform *)local_328,iVar27);
      }
      FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_2a0,&local_1f0);
      local_278 = local_1c8;
      local_274 = local_1c4;
      local_270 = local_1c0;
      local_268 = *(int *)((longlong)plVar26 + 0x14);
      local_26c = local_26c & 0x80 | local_1bc & 0x7f;
      local_264 = (int)plVar26[3];
      if (*(int *)((longlong)plVar26 + 0x14) != 0) {
        plVar23 = *(longlong **)(lVar32 + 0x108);
        if (plVar23 == (longlong *)0x0) {
          local_320[0] = 0xffff;
          local_320[1] = 0;
          puVar21 = local_320;
        }
        else {
          puVar21 = (ushort *)(**(code **)(*plVar23 + 0x58))(plVar23,&local_318);
        }
        if (*puVar21 != 0xffff) {
          lVar32 = (ulonglong)*puVar21 * 0x140 + *(longlong *)(local_308 + 8);
          local_2e8 = *(undefined8 *)(lVar32 + 0x68);
          uStack_2e0 = *(undefined8 *)(lVar32 + 0x70);
          local_2d8 = *(undefined8 *)(lVar32 + 0x78);
          uStack_2d0 = *(undefined8 *)(lVar32 + 0x80);
          local_2c8 = *(undefined8 *)(lVar32 + 0x88);
          uStack_2c0 = *(undefined8 *)(lVar32 + 0x90);
          local_2b8 = *(undefined4 *)(lVar32 + 0x98);
          if (&local_2b0 != (ForAnyElementType *)(lVar32 + 0xa0)) {
            DestructItems<FMovieSceneNestedSequenceTransform,int>
                      ((FMovieSceneNestedSequenceTransform *)local_2b0.Data,local_2a8);
            local_328 = *(FName *)(lVar32 + 0xa0);
            iVar27 = *(int *)(lVar32 + 0xa8);
            local_2a8 = iVar27;
            if ((iVar27 == 0) && (local_2a4 == 0)) {
              local_2a4 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar27,local_2a4,&local_2b0,iVar27,&local_2a4);
              ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                        (local_2b0.Data,(FMovieSceneNestedSequenceTransform *)local_328,iVar27);
            }
          }
          FMovieSceneWarpCounter::operator=(&local_2a0,(FMovieSceneWarpCounter *)(lVar32 + 0xb0));
          local_278 = *(undefined4 *)(lVar32 + 0xd8);
          local_274 = *(undefined4 *)(lVar32 + 0xdc);
          local_270 = *(undefined4 *)(lVar32 + 0xe0);
          local_26c = local_26c & 0xfe | *(byte *)(lVar32 + 0xe4) & 1;
          local_26c = (local_26c ^ *(byte *)(lVar32 + 0xe4)) & 2 ^ local_26c;
          local_26c = (local_26c ^ *(byte *)(lVar32 + 0xe4)) & 4 ^ local_26c;
          local_26c = (local_26c ^ *(byte *)(lVar32 + 0xe4)) & 8 ^ local_26c;
          local_26c = (local_26c ^ *(byte *)(lVar32 + 0xe4)) & 0x10 ^ local_26c;
          local_26c = (local_26c ^ *(byte *)(lVar32 + 0xe4)) & 0x20 ^ local_26c;
          local_26c = (local_26c ^ *(byte *)(lVar32 + 0xe4)) & 0x40 ^ local_26c;
        }
      }
      iVar27 = *(int *)((longlong)plVar26 + 0x24);
      if (iVar27 == 0) {
        if (*plVar33 == 0) {
          plVar23 = (longlong *)0x0;
        }
        else {
          plVar23 = (longlong *)plVar26[-1];
        }
        lVar32 = *plVar23;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_120 = pFVar5;
        local_118 = pTVar4;
        (**(code **)(lVar32 + 0x18))(plVar23,&local_120,&local_2f8);
      }
      else if (iVar27 == 1) {
        if (*plVar33 == 0) {
          plVar23 = (longlong *)0x0;
        }
        else {
          plVar23 = (longlong *)plVar26[-1];
        }
        lVar32 = *plVar23;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_130 = pFVar5;
        local_128 = pTVar4;
        (**(code **)(lVar32 + 0x28))(plVar23,&local_130,&local_2f8);
      }
      else if (iVar27 == 2) {
        if (*plVar33 == 0) {
          plVar23 = (longlong *)0x0;
        }
        else {
          plVar23 = (longlong *)plVar26[-1];
        }
        lVar32 = *plVar23;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_140 = pFVar5;
        local_138 = pTVar4;
        (**(code **)(lVar32 + 0x38))(plVar23,&local_140,&local_2f8);
        if (local_1b8 != (FPreAnimatedEvaluationHookCaptureSources *)0x0) {
          UE::MovieScene::FPreAnimatedEvaluationHookCaptureSources::StopTrackingCaptureSource
                    (local_1b8,(UObject *)*plVar33,*(FRootInstanceHandle *)(plVar26 + 2),
                     (FMovieSceneSequenceID)*(uint *)((longlong)plVar26 + 0x14));
        }
      }
      else if (iVar27 == 3) {
        if (*plVar33 == 0) {
          plVar23 = (longlong *)0x0;
        }
        else {
          plVar23 = (longlong *)plVar26[-1];
        }
        lVar32 = *plVar23;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_150 = pFVar5;
        local_148 = pTVar4;
        (**(code **)(lVar32 + 0x48))(plVar23,&local_150,&local_2f8);
      }
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_2a0);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)local_2b0.Data,local_2a8);
      if ((FMovieSceneNestedSequenceTransform *)local_2b0.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_2b0.Data);
      }
      FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_1f0);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)local_200,local_1f8);
      if (local_200 != (FName)0x0) {
        FMemory::Free((void *)local_200);
      }
      plVar33 = plVar33 + 8;
      uVar20 = (ulonglong)local_330[0].Bits;
      plVar26 = plVar26 + 8;
      lVar32 = local_308;
    }
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    uVar25 = local_334;
  }
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationInstanceKey,FMovieSceneEvaluationHookEventContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar2,CycleScopeEnd);
  }
  return;
}

// UpdateHooks @ 146160430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEvaluationHookSystem::UpdateHooks(UMovieSceneEvaluationHookSystem *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FBuiltInComponentTypes *pFVar4;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
  *pTVar5;
  undefined1 auStack_378 [32];
  FComponentTypeID local_358;
  FComponentTypeID local_356;
  FComponentTypeID local_354;
  FComponentTypeID local_352 [5];
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
  <lambda_1> local_2e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2d8;
  <lambda_2> local_2c8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_2b8;
  TComponentTypeID<FFrameTime> local_2b6;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> local_2b4;
  undefined8 local_2b0;
  TStatIdData *pTStack_2a8;
  ulonglong local_2a0;
  undefined8 uStack_298;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_290;
  TComponentTypeID<FFrameTime> local_28e;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> local_28c;
  undefined8 local_288;
  TStatIdData *pTStack_280;
  ulonglong local_278;
  undefined8 uStack_270;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
  local_268;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
  local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar1 = this->_padding_;
  if (*(longlong *)(lVar1 + 0x580) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_2e8.InstanceRegistry = *(FInstanceRegistry **)(lVar1 + 0x580);
  local_2b8 = pFVar4->InstanceHandle;
  local_2b6 = pFVar4->EvalTime;
  local_2b4 = pFVar4->EvaluationHook;
  local_358.Value = (pFVar4->Tags).NeedsLink.Value;
  local_2f8._First = &local_358;
  local_2f8._Last = &local_356;
  local_348 = 0;
  pTStack_340 = &TStatId::TStatId_NAME_None;
  uStack_330 = 0x6ff;
  uStack_32c = uStack_32c & 0xffffff00;
  local_2a0 = CONCAT71(uStack_337,local_338) & 0xffffffffffffffe0;
  uStack_298._4_4_ = uStack_32c;
  uStack_298._0_4_ = 0x6ff;
  local_2b0 = 0;
  pTStack_2a8 = &TStatId::TStatId_NAME_None;
  local_338 = local_338 & 0xe0;
  local_2e8.__this = this;
  local_2c8.__this = this;
  local_2c8.InstanceRegistry = local_2e8.InstanceRegistry;
  pTVar5 = UE::MovieScene::
           TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
           ::FilterAny((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                        *)&local_2b8,&local_268,&local_2f8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
  ::Iterate_PerAllocationImpl<_UMovieSceneEvaluationHookSystem::UpdateHooks_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
              *)pTVar5,(FEntityManager *)(this->_padding_ + 0x28),&pTVar5->Filter,&local_2e8);
  if (local_268.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  local_290 = pFVar4->InstanceHandle;
  local_28e = pFVar4->EvalTime;
  local_28c = pFVar4->EvaluationHook;
  local_354.Value = (pFVar4->Tags).Finished.Value;
  local_2d8._First = &local_354;
  local_2d8._Last = local_352;
  local_320 = 0;
  pTStack_318 = &TStatId::TStatId_NAME_None;
  uStack_308 = 0x6ff;
  uStack_304 = uStack_304 & 0xffffff00;
  local_278 = CONCAT71(uStack_30f,local_310) & 0xffffffffffffffe0;
  uStack_270._4_4_ = uStack_304;
  uStack_270._0_4_ = 0x6ff;
  local_288 = 0;
  pTStack_280 = &TStatId::TStatId_NAME_None;
  local_310 = local_310 & 0xe0;
  pTVar5 = UE::MovieScene::
           TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
           ::FilterAny((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
                        *)&local_290,&local_148,&local_2d8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
  ::Iterate_PerAllocationImpl<_UMovieSceneEvaluationHookSystem::UpdateHooks_::__l2::<lambda_2>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>_>
              *)pTVar5,(FEntityManager *)(this->_padding_ + 0x28),&pTVar5->Filter,&local_2c8);
  if (local_148.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

