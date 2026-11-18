// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// StaticClass @ 1461672d0

UClass * __cdecl UMovieSceneTrackInstanceSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstanceSystem",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackInstanceSystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrackInstanceSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton;
}

// UMovieSceneTrackInstanceSystem @ 146183710

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTrackInstanceSystem * __thiscall
UMovieSceneTrackInstanceSystem::UMovieSceneTrackInstanceSystem
          (UMovieSceneTrackInstanceSystem *this,FObjectInitializer *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceSystem__6B_;
  (this->Instantiator).field0_0x0.DebugPtr = (UMovieSceneTrackInstanceInstantiator *)0x0;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(TComponentTypeID<FMovieSceneTrackInstanceComponent> *)&this->_padding_ = pFVar1->TrackInstance;
  return this;
}

// UMovieSceneTrackInstanceSystem @ 146183760

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTrackInstanceSystem * __thiscall
UMovieSceneTrackInstanceSystem::UMovieSceneTrackInstanceSystem
          (UMovieSceneTrackInstanceSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceSystem__6B_;
  (this->Instantiator).field0_0x0.DebugPtr = (UMovieSceneTrackInstanceInstantiator *)0x0;
  return this;
}

// ~UMovieSceneTrackInstanceSystem @ 146185ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstanceSystem::~UMovieSceneTrackInstanceSystem
          (UMovieSceneTrackInstanceSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneTrackInstanceSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// EvaluateAllInstances @ 1461a2660

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UMovieSceneTrackInstanceSystem::EvaluateAllInstances(UMovieSceneTrackInstanceSystem *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  UMovieSceneTrackInstanceInstantiator *pUVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  pUVar5 = (this->Instantiator).field0_0x0.DebugPtr;
  uStack_84 = 1;
  local_88 = 0;
  iVar3 = *(int *)&(pUVar5->TrackInstances).field_0x28;
  puVar2 = &(pUVar5->TrackInstances).field_0x10;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(pUVar5->TrackInstances).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1461a2717;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1461a2717:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(pUVar5->TrackInstances).field_0x28;
  local_40 = *(int *)&(pUVar5->TrackInstances).field_0x8 -
             *(int *)&(pUVar5->TrackInstances).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar10 = (int)uVar11 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar14 = uVar11 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(pUVar5->TrackInstances).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(pUVar5->TrackInstances).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1461a2810;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar11 = local_res18 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1461a2810:
  while( true ) {
    if (*(int *)&(pUVar5->TrackInstances).field_0x8 - *(int *)&(pUVar5->TrackInstances).field_0x34
        != local_40) {
      local_res8[0] = 0;
      `TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator>::
      TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar6 = *(longlong **)
              (*(longlong *)&pUVar5->TrackInstances + 8 + (longlong)local_60.CurrentBitIndex * 0x10)
    ;
    if (plVar6 == (longlong *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1070267865472434504>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\TrackInstance\\MovieSceneTrackInstanceSystem.cpp"
                         ,0x148,"Entry.TrackInstance");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x2b8))();
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// GetPrivateStaticClass @ 1461b3240

UClass * __cdecl UMovieSceneTrackInstanceSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTrackInstanceSystem",
               &Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackInstanceSystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTrackInstanceSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackInstanceSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.InnerSingleton;
}

// OnLink @ 1461bf940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTrackInstanceSystem::OnLink(UMovieSceneTrackInstanceSystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *this_00;
  UMovieSceneTrackInstanceInstantiator *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = UMovieSceneTrackInstanceInstantiator::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UMovieSceneTrackInstanceInstantiator *)
           UMovieSceneEntitySystemLinker::LinkSystem
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar2 != (UMovieSceneTrackInstanceInstantiator *)0x0) {
    pUVar3 = UMovieSceneTrackInstanceInstantiator::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->Instantiator).field0_0x0.DebugPtr = pUVar2;
      FMovieSceneEntitySystemGraph::AddReference
                ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
                 (UMovieSceneEntitySystem *)this,(UMovieSceneEntitySystem *)pUVar2);
      return;
    }
    pFVar4 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_28);
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
  pFVar4 = GetTypeName<UMovieSceneTrackInstanceInstantiator>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// OnRun @ 1461c0a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTrackInstanceSystem::OnRun
          (UMovieSceneTrackInstanceSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int iVar1;
  UMovieSceneTrackInstanceInstantiator *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  LARGE_INTEGER LVar6;
  EEntityThreadingModel EVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstances> FVar9;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstanceTask> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar12;
  int *piVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_78;
  code *local_68 [2];
  undefined **local_58;
  UMovieSceneTrackInstanceSystem *local_50;
  undefined8 local_40;
  
  FVar14.Value = 0;
  FVar9 = StatPtr_MovieSceneEval_GenericTrackInstances;
  if (StatPtr_MovieSceneEval_GenericTrackInstances ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstances>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"MovieSceneEval_GenericTrackInstances");
    FVar9 = (FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstances>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GenericTrackInstances,
                       *pFVar8,L"Generic Track Instances","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar9;
  bVar3 = false;
  bVar5 = false;
  if ((LVar12.s.LowPart != 0) || (LVar12.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\TrackInstance\\MovieSceneTrackInstanceSystem.cpp"
                   ,0x134);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar12;
      FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
      bVar4 = true;
      FVar14.Value = LVar12.s.LowPart;
      goto LAB_1461c0bde;
    }
  }
  bVar4 = false;
  LVar12._0_4_ = 0;
  LVar12._4_4_ = 0;
LAB_1461c0bde:
  pUVar2 = (this->Instantiator).field0_0x0.DebugPtr;
  if (*(int *)&(pUVar2->TrackInstances).field_0x8 != *(int *)&(pUVar2->TrackInstances).field_0x34) {
    EVar7 = UE::MovieScene::FEntityManager::GetThreadingModel
                      ((FEntityManager *)(this->_padding_ + 0x28));
    if (EVar7 == NoThreading) {
      EvaluateAllInstances(this);
    }
    else {
      pTVar10 = UE::MovieScene::FSystemTaskPrerequisites::All(param_1);
      FVar11 = StatPtr_MovieSceneEval_GenericTrackInstanceTask;
      if (StatPtr_MovieSceneEval_GenericTrackInstanceTask ==
          (FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstanceTask>)0x0) {
        pFVar8 = ::FName::FName((FName *)&local_res8.s,"MovieSceneEval_GenericTrackInstanceTask");
        FVar11 = (FThreadSafeStaticStat<FStat_MovieSceneEval_GenericTrackInstanceTask>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_MovieSceneEval_GenericTrackInstanceTask,*pFVar8,
                            L"Generic Track Instances Task","STATGROUP_MovieSceneECS",
                            "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                            true,false,MCR_Invalid);
      }
      local_40 = 0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMovieSceneTrackInstanceSystem::OnRun'::`10'::<lambda_1>,1,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMovieSceneTrackInstanceSystem::OnRun'::__l10::<lambda_1>,void>
                    ::Call;
      local_50 = this;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_res8.s,(TStatIdData *)local_68,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)FVar11,(Type)pTVar10);
      LVar6 = local_res8;
      if ((FName)local_res8.QuadPart == (FName)0x0) {
        piVar13 = (int *)&DAT_00000030;
      }
      else {
        piVar13 = (int *)(local_res8.QuadPart + 0x30);
        LOCK();
        *piVar13 = *piVar13 + 1;
        UNLOCK();
      }
      UE::MovieScene::FSystemSubsequentTasks::AddRootTask(param_2,(FBaseGraphTask *)&local_res8);
      if ((FName)LVar6.QuadPart != (FName)0x0) {
        LOCK();
        iVar1 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (*(code *)**(undefined8 **)LVar6)(LVar6.QuadPart,1);
        }
      }
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = LVar12.s.HighPart & 0xffff6fffU | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_78.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_78);
      piVar13 = &this_00->ScopeCount;
      *piVar13 = *piVar13 + -1;
      if (*piVar13 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 1461c0e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMovieSceneTrackInstanceSystem::OnSchedulePersistentTasks
          (UMovieSceneTrackInstanceSystem *this,IEntitySystemScheduler *param_1)

{
  UMovieSceneTrackInstanceInstantiator *pUVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 local_48 [16];
  TReferenceControllerBase<1> *pTStack_38;
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_30;
  byte local_20;
  code *local_18;
  undefined1 local_10;
  
  pUVar1 = (this->Instantiator).field0_0x0.DebugPtr;
  if (*(int *)&(pUVar1->TrackInstances).field_0x8 != *(int *)&(pUVar1->TrackInstances).field_0x34) {
    local_10 = 0;
    local_30.Object = (ITaskContext *)0x15120ee28;
    local_30.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
    local_20 = local_20 & 0xe1 | 1;
    local_18 = UE::MovieScene::TMemberFunctionTaskWrapper<UMovieSceneTrackInstanceSystem>::Execute;
    pTVar4 = ::operator_new(0x28);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_48._8_8_ = ___xmm_00000000000000000000000000000010;
      pTStack_38 = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_U__TMemberFunctionTaskWrapper_VUMovieSceneTrackInstanceSystem___MovieScene_UE___00_SharedPointerInternals__6B_
      ;
      pTVar4[1]._padding_ =
           (longlong)
           &___7__TMemberFunctionTaskWrapper_VUMovieSceneTrackInstanceSystem___MovieScene_UE__6B_;
      *(UMovieSceneTrackInstanceSystem **)&pTVar4[1].SharedReferenceCount = this;
      pTVar4[2]._padding_ = (longlong)EvaluateAllInstances;
      if ((TStatIdData *)(pTVar4 + 1) == (TStatIdData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_48._8_8_ = (TStatIdData *)(pTVar4 + 1);
      pTStack_38 = pTVar4;
    }
    UE::MovieScene::IEntitySystemScheduler::AddTask
              (param_1,(FTaskParams *)local_48,&local_30,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)(local_48 + 8));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// StaticRegisterNativesUMovieSceneTrackInstanceSystem @ 1461d49a0

void __cdecl
UMovieSceneTrackInstanceSystem::StaticRegisterNativesUMovieSceneTrackInstanceSystem(void)

{
  return;
}

