// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// <lambda_invoker_cdecl> @ 147aa9b40

EQueuedWorkPriority __cdecl
`FDistanceFieldAsyncQueue::FDistanceFieldAsyncQueue'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (EQueuedWorkPriority param_1)

{
  return Lowest;
}

// FDistanceFieldAsyncQueue @ 147abb830

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FDistanceFieldAsyncQueue * __thiscall
FDistanceFieldAsyncQueue::FDistanceFieldAsyncQueue(FDistanceFieldAsyncQueue *this)

{
  FQueuedThreadPool *pFVar1;
  FText *pFVar2;
  FQueuedThreadPoolWrapper *pFVar3;
  atomic<int> *paVar4;
  FAssetCompilingManager *pFVar5;
  FQueuedThreadPoolWrapper *pFVar6;
  FQueuedThreadPoolWrapper *pFVar7;
  FDelegateHandle FVar8;
  FTextFormat local_58;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  pFVar7 = (FQueuedThreadPoolWrapper *)0x0;
  this->_padding_ = (longlong)&___7FDistanceFieldAsyncQueue__6B_;
  (this->ThreadPool).Ptr = (FQueuedThreadPool *)0x0;
  *(undefined8 *)&(this->ReferencedTasks).Elements = 0;
  *(undefined8 *)&(this->ReferencedTasks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedTasks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x34 = 0;
  (this->ReferencedTasks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedTasks).HashSize = 0;
  *(undefined8 *)&(this->PendingTasks).Elements = 0;
  *(undefined8 *)&(this->PendingTasks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingTasks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingTasks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingTasks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingTasks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingTasks).Elements.field_0x34 = 0;
  (this->PendingTasks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingTasks).HashSize = 0;
  *(undefined8 *)&(this->CompletedTasks).Elements = 0;
  *(undefined8 *)&(this->CompletedTasks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CompletedTasks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CompletedTasks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CompletedTasks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompletedTasks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompletedTasks).Elements.field_0x34 = 0;
  (this->CompletedTasks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CompletedTasks).HashSize = 0;
  (this->PostReachabilityAnalysisHandle).ID = 0;
  this->MeshUtilities = (atomic<IMeshUtilities_*>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"DistanceField",L"MeshDistanceFieldNameFormat",
                      L"{0}|plural(one=Mesh Distance Field,other=Mesh Distance Fields)");
  FTextFormat::FTextFormat(&local_58,pFVar2,Default);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pFVar3 = ::operator_new(0x18);
  pFVar6 = pFVar7;
  if (pFVar3 != (FQueuedThreadPoolWrapper *)0x0) {
    if (local_58.TextFormatData.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      paVar4 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar4 = &(local_58.TextFormatData.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount;
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    *(undefined4 *)pFVar3 = 0xffffffff;
    (pFVar3->Lock).CriticalSection.Opaque1[0] = local_58.TextFormatData.Object;
    *(TReferenceControllerBase<1> **)(pFVar3->Lock).CriticalSection.Opaque2 =
         local_58.TextFormatData.SharedReferenceCount.ReferenceController;
    if (local_58.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.TextFormatData.SharedReferenceCount.ReferenceController);
    pFVar6 = pFVar3;
  }
  (this->Notification).Ptr = (FAsyncCompilationNotification *)pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.TextFormatData.SharedReferenceCount.ReferenceController);
  pFVar5 = FAssetCompilingManager::Get();
  FAssetCompilingManager::RegisterManager(pFVar5,(IAssetCompilingManager *)this);
  pFVar5 = FAssetCompilingManager::Get();
  TMulticastDelegateRegistration<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FDistanceFieldAsyncQueue>
            ((TMulticastDelegateRegistration<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
              *)&pFVar5->AssetPostCompileEvent,(FDistanceFieldAsyncQueue *)&stack0x00000008,
             (pmf_96d120cb)this);
  pFVar1 = GThreadPool;
  if (GThreadPool != (FQueuedThreadPool *)0x0) {
    pFVar6 = ::operator_new(0x160);
    if (pFVar6 != (FQueuedThreadPoolWrapper *)0x0) {
      local_10 = 0;
      local_28 = &
                 ___7__TFunction_OwnedObject_P6A_AW4EQueuedWorkPriority__W41__Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_20 = `FDistanceFieldAsyncQueue::FDistanceFieldAsyncQueue'::__l5::<lambda_1>::
                 <lambda_invoker_cdecl>;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),enum_EQueuedWorkPriority,enum_EQueuedWorkPriority>
                    ::Call;
      pFVar7 = FQueuedThreadPoolWrapper::FQueuedThreadPoolWrapper
                         (pFVar6,pFVar1,1,
                          (TFunction<EQueuedWorkPriority___cdecl(EQueuedWorkPriority)> *)local_38);
    }
    pFVar1 = (this->ThreadPool).Ptr;
    (this->ThreadPool).Ptr = (FQueuedThreadPool *)pFVar7;
    if (pFVar1 != (FQueuedThreadPool *)0x0) {
      (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,1);
    }
  }
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FDistanceFieldAsyncQueue>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreUObjectDelegates::PostReachabilityAnalysis,
                     (FDistanceFieldAsyncQueue *)&stack0x00000008,(pmf_8f99e96e)this);
                    /* WARNING: Load size is inaccurate */
  (this->PostReachabilityAnalysisHandle).ID = *FVar8.ID;
  return this;
}

// ~FDistanceFieldAsyncQueue @ 147abef70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FDistanceFieldAsyncQueue::~FDistanceFieldAsyncQueue(FDistanceFieldAsyncQueue *this)

{
  FDelegateHandle FVar1;
  FAsyncCompilationNotification *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FQueuedThreadPool *pFVar4;
  FAssetCompilingManager *pFVar5;
  
  this->_padding_ = (longlong)&___7FDistanceFieldAsyncQueue__6B_;
  pFVar5 = FAssetCompilingManager::Get();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&pFVar5->AssetPostCompileEvent,
             this);
  pFVar5 = FAssetCompilingManager::Get();
  FAssetCompilingManager::UnregisterManager(pFVar5,(IAssetCompilingManager *)this);
  FVar1.ID = (this->PostReachabilityAnalysisHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PostReachabilityAnalysis,FVar1);
  }
  pFVar2 = (this->Notification).Ptr;
  if (pFVar2 != (FAsyncCompilationNotification *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar2->AssetNameFormat).TextFormatData.SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar2,0x18);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  (this->CompletedTasks).HashSize = 0;
  FVar3 = (this->CompletedTasks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CompletedTasks).Elements);
  (this->PendingTasks).HashSize = 0;
  FVar3 = (this->PendingTasks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingTasks).Elements);
  (this->ReferencedTasks).HashSize = 0;
  FVar3 = (this->ReferencedTasks).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedTasks).Elements);
  pFVar4 = (this->ThreadPool).Ptr;
  if (pFVar4 != (FQueuedThreadPool *)0x0) {
    (**(code **)((longlong)*pFVar4 + 0x30))(pFVar4,1);
  }
  this->_padding_ = (longlong)&___7IAssetCompilingManager__6B_;
  return;
}

// operator() @ 147ac16e0

bool __thiscall
`FDistanceFieldAsyncQueue::CancelBuilds'::__l2::<lambda_1>::operator()
          (void *this,FAsyncDistanceFieldTask *param_1)

{
  longlong *plVar1;
  UStaticMesh *pUVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar1 = *(longlong **)this;
  pUVar2 = param_1->GenerateSource;
  uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(UStaticMesh **)(*plVar1 + (longlong)iVar5 * 0x10) == pUVar2) {
          if (iVar5 != -1) {
            return true;
          }
          break;
        }
        iVar5 = *(int *)(*plVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  pUVar2 = param_1->StaticMesh;
  uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(UStaticMesh **)(*plVar1 + (longlong)iVar5 * 0x10) == pUVar2) {
          return true;
        }
        iVar5 = *(int *)(*plVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  return false;
}

// operator() @ 147ac1d20

void __thiscall
`FDistanceFieldAsyncQueue::CancelAndDeleteTaskByPredicate'::__l5::<lambda_1>::operator()
          (void *this,
          TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  char cVar2;
  FAsyncDistanceFieldTask *local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined1 local_40 [12];
  uint local_34;
  longlong local_30;
  uint local_28;
  int local_24;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_18;
  
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_40,param_1);
  if (local_24 < *(int *)(local_30 + 0x18)) {
    do {
      iVar1 = local_24;
      local_res20 = *(undefined8 *)(*(longlong *)local_40._0_8_ + (longlong)local_24 * 0x10);
      local_48 = local_res20;
      cVar2 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_res20);
      if (cVar2 != '\0') {
        TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
        ::Emplace<FAsyncDistanceFieldTask_*_const_&>
                  (*(TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
                     **)((longlong)this + 8),&local_res18,(bool *)&local_48);
        TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(local_18,iVar1);
      }
      local_28 = local_28 & ~local_34;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_40 + 8));
    } while (local_24 < *(int *)(local_30 + 0x18));
  }
  return;
}

// operator() @ 147ac1de0

bool __thiscall
`FDistanceFieldAsyncQueue::MarkCompilationAsCanceled'::__l12::<lambda_1>::operator()
          (void *this,FAsyncDistanceFieldTask *param_1)

{
  FAsyncTask<FAsyncDistanceFieldTaskWorker> *this_00;
  longlong *plVar1;
  UStaticMesh *pUVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  
  this_00 = (param_1->AsyncTask).Ptr;
  if (this_00 != (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) {
    if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) {
      return false;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
  }
  plVar1 = *(longlong **)this;
  pUVar2 = param_1->GenerateSource;
  uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(UStaticMesh **)(*plVar1 + (longlong)iVar5 * 0x10) == pUVar2) {
          if (iVar5 != -1) {
            return true;
          }
          break;
        }
        iVar5 = *(int *)(*plVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  pUVar2 = param_1->StaticMesh;
  uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(UStaticMesh **)(*plVar1 + (longlong)iVar5 * 0x10) == pUVar2) {
          return true;
        }
        iVar5 = *(int *)(*plVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  return false;
}

// AddTask @ 147ac5b50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::AddTask(FDistanceFieldAsyncQueue *this,FAsyncDistanceFieldTask *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  return;
}

// BlockUntilAllBuildsComplete @ 147ac7970

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::BlockUntilAllBuildsComplete(FDistanceFieldAsyncQueue *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  float fVar7;
  FQueuedThreadPool *pFVar8;
  FDistanceFieldAsyncQueue *pFVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  FDistanceFieldAsyncQueue *local_res8;
  char local_res10;
  int local_res18;
  int local_res20;
  undefined4 local_bc;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  local_res8 = this;
  if (CpuChannel->Enabled < 0) {
    local_res10 = '\0';
  }
  else {
    local_res10 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId872,"FDistanceFieldAsyncQueue::BlockUntilAllBuildsComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x368);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId872);
  }
  pFVar9 = local_res8;
  fVar7 = __real_3c23d70a;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  puVar1 = &(local_res8->ReferencedTasks).Elements.field_0x10;
  do {
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x28;
    iVar15 = 0;
    iVar17 = 0;
    uVar12 = 1;
    iVar13 = 0;
    if (iVar3 != 0) {
      puVar4 = *(uint **)&(pFVar9->ReferencedTasks).Elements.field_0x20;
      puVar18 = (uint *)puVar1;
      if (puVar4 != (uint *)0x0) {
        puVar18 = puVar4;
      }
      uVar19 = *puVar18;
      while (uVar19 == 0) {
        lVar14 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar13 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147ac7aaf;
        uVar19 = puVar18[lVar14 + 1];
      }
      uVar12 = -uVar19 & uVar19;
      uVar2 = (ulonglong)uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res18 = (int)lVar14;
      iVar13 = local_res18 + -1 + iVar17;
      if (iVar3 < iVar13) {
        iVar13 = iVar3;
      }
    }
LAB_147ac7aaf:
    uVar19 = *(uint *)&(pFVar9->ReferencedTasks).Elements.field_0x28;
    uVar20 = uVar19 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uVar12,iVar15);
    TStack_80.CurrentBitIndex = iVar13;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar19 >> 5;
    TStack_80._28_4_ = local_bc;
    TStack_80.BaseBitIndex = iVar17;
    uStack_60 = CONCAT44(uStack_8c,
                         *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x8 -
                         *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x34);
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = *(uint *)&(pFVar9->ReferencedTasks).Elements.field_0x28;
    if (uVar19 != uVar12) {
      puVar5 = *(undefined1 **)&(pFVar9->ReferencedTasks).Elements.field_0x20;
      puVar16 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar16 = puVar5;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar19 == 0) {
        lVar14 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar19 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147ac7bc0;
        uVar19 = *(uint *)(puVar16 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      uVar19 = local_res20 + -1 + uVar20;
      if ((int)uVar12 < (int)uVar19) {
        uVar19 = uVar12;
      }
    }
LAB_147ac7bc0:
    while( true ) {
      if (*(int *)&(pFVar9->ReferencedTasks).Elements.field_0x8 -
          *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x34 != (int)uStack_60) {
        local_res8 = (FDistanceFieldAsyncQueue *)((ulonglong)local_res8 & 0xffffffffffffff00);
        `TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      pFVar8 = GThreadPool;
      if ((TStack_80.CurrentBitIndex == uVar19) &&
         (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar14 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)&(pFVar9->ReferencedTasks).Elements +
                  (longlong)TStack_80.CurrentBitIndex * 0x10) + 0x88);
      if (((lVar14 != 0) && (*(char *)(lVar14 + 0x50) != '\0')) &&
         ((*(longlong **)(lVar14 + 0x48) != (longlong *)0x0 &&
          (cVar11 = (**(code **)(**(longlong **)(lVar14 + 0x48) + 0x20))(), cVar11 != '\0')))) {
        *(FQueuedThreadPool **)(lVar14 + 0x48) = pFVar8;
        *(undefined1 *)(lVar14 + 0x50) = 0;
        (**(code **)((longlong)*pFVar8 + 0x18))(pFVar8);
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&pFVar9->CriticalSection;
    LeaveCriticalSection(lpCriticalSection);
    (**(code **)(pFVar9->_padding_ + 0x48))(pFVar9,0);
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x8;
    iVar17 = *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x34;
    LeaveCriticalSection(lpCriticalSection);
    if (iVar3 - iVar17 < 1) {
      if (local_res10 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    FWindowsPlatformProcess::Sleep(fVar7);
  } while( true );
}

// BlockUntilBuildComplete @ 147ac7cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::BlockUntilBuildComplete
          (FDistanceFieldAsyncQueue *this,UStaticMesh *param_1,bool param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  FQueuedThreadPool *pFVar11;
  UStaticMesh *pUVar12;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *pTVar13;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *pTVar14;
  char cVar15;
  longlong lVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a6;
  char local_1a5;
  int local_1a4;
  int local_1a0;
  UStaticMesh *local_198;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_190;
  LPCRITICAL_SECTION local_188;
  LARGE_INTEGER local_180;
  FDistanceFieldAsyncQueue *local_178;
  FName local_170;
  LARGE_INTEGER local_168;
  FString local_160;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined4 local_d4;
  TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar22 = -1 < CpuChannel->Enabled;
  local_1a5 = param_2;
  local_198 = param_1;
  local_178 = this;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId784,"FDistanceFieldAsyncQueue::BlockUntilBuildComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x310);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId784);
  }
  fVar10 = __real_3c23d70a;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  bVar9 = false;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_188 = lpCriticalSection;
  do {
    (**(code **)(this->_padding_ + 0x48))(this,0);
    bVar8 = false;
    if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
      TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator>::UnhashElements
                (&local_c8);
      bVar23 = (longlong)local_c8.Elements._8_8_ < 0;
      local_c8.Elements._8_8_ = local_c8.Elements._8_8_ & 0xffffffff00000000;
      if (bVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)&local_c8,0,(int *)&local_c8.Elements.field_0xc);
      }
      local_c8.Elements._48_4_ = 0xffffffff;
      local_c8.Elements._52_4_ = 0;
      local_c8.Elements._40_4_ = 0;
    }
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)&(this->ReferencedTasks).Elements.field_0x28;
    puVar2 = &(this->ReferencedTasks).Elements.field_0x10;
    local_130 = 0;
    local_190 = &this->ReferencedTasks;
    uStack_144 = 1;
    iStack_134 = 0;
    iStack_148 = 0;
    if (iVar3 != 0) {
      puVar5 = *(uint **)&(this->ReferencedTasks).Elements.field_0x20;
      puVar19 = (uint *)puVar2;
      if (puVar5 != (uint *)0x0) {
        puVar19 = puVar5;
      }
      uVar20 = *puVar19;
      while (uVar20 == 0) {
        lVar16 = (longlong)iStack_148;
        local_130 = local_130 + 0x20;
        iStack_148 = iStack_148 + 1;
        iStack_134 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_147ac7ed0;
        uVar20 = puVar19[lVar16 + 1];
      }
      uStack_144 = -uVar20 & uVar20;
      uVar1 = (ulonglong)uStack_144 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_1a4 = (int)lVar16;
      iStack_134 = local_130 + -1 + local_1a4;
      if (iVar3 < iStack_134) {
        iStack_134 = iVar3;
      }
    }
LAB_147ac7ed0:
    uStack_12c = local_d4;
    iStack_128 = *(int *)&(this->ReferencedTasks).Elements.field_0x8 -
                 *(int *)&(this->ReferencedTasks).Elements.field_0x34;
    uVar20 = *(uint *)&(this->ReferencedTasks).Elements.field_0x28;
    uVar21 = uVar20 & 0xffffffe0;
    TStack_118._padding_ = CONCAT44(uStack_144,iStack_148);
    uStack_138 = 0xffffffff;
    TStack_118.CurrentBitIndex = iStack_134;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar20 >> 5;
    TStack_118._28_4_ = local_d4;
    TStack_118.BaseBitIndex = local_130;
    uStack_f8 = CONCAT44(uStack_124,iStack_128);
    local_150 = local_190;
    local_140 = puVar2;
    local_120 = local_190;
    TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar23)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar13 = local_190;
    pUVar12 = local_198;
    uVar4 = *(uint *)&(this->ReferencedTasks).Elements.field_0x28;
    if (uVar20 != uVar4) {
      puVar6 = *(undefined1 **)&(this->ReferencedTasks).Elements.field_0x20;
      puVar18 = puVar2;
      if (puVar6 != (undefined1 *)0x0) {
        puVar18 = puVar6;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
      while (uVar20 == 0) {
        lVar16 = (longlong)iVar17;
        uVar21 = uVar21 + 0x20;
        iVar17 = iVar17 + 1;
        uVar20 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_147ac7ff0;
        uVar20 = *(uint *)(puVar18 + lVar16 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_1a0 = (int)lVar16;
      uVar20 = local_1a0 + -1 + uVar21;
      if ((int)uVar4 < (int)uVar20) {
        uVar20 = uVar4;
      }
    }
LAB_147ac7ff0:
    while( true ) {
      pTVar14 = local_120;
      if (*(int *)&(local_120->Elements).field_0x8 - *(int *)&(local_120->Elements).field_0x34 !=
          (int)uStack_f8) {
        local_1a6 = 0;
        `TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a6);
      }
      lpCriticalSection = local_188;
      pFVar11 = GThreadPool;
      if (((TStack_118.CurrentBitIndex == uVar20) &&
          (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar14 == pTVar13)) break;
      lVar16 = *(longlong *)
                (*(longlong *)&pTVar14->Elements + (longlong)TStack_118.CurrentBitIndex * 0x10);
      if ((*(UStaticMesh **)(lVar16 + 0x50) == pUVar12) ||
         (*(UStaticMesh **)(lVar16 + 0x58) == pUVar12)) {
        lVar16 = *(longlong *)(lVar16 + 0x88);
        bVar8 = true;
        if ((lVar16 != 0) &&
           (((*(char *)(lVar16 + 0x50) != '\0' && (*(longlong **)(lVar16 + 0x48) != (longlong *)0x0)
             ) && (cVar15 = (**(code **)(**(longlong **)(lVar16 + 0x48) + 0x20))(), cVar15 != '\0'))
           )) {
          *(FQueuedThreadPool **)(lVar16 + 0x48) = pFVar11;
          *(undefined1 *)(lVar16 + 0x50) = 0;
          (**(code **)((longlong)*pFVar11 + 0x18))(pFVar11);
        }
      }
      TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    }
    LeaveCriticalSection(local_188);
    if (!bVar8) {
      if (((bVar9) && (local_1a5 != '\0')) && (3 < (byte)LogStaticMesh._0_1_)) {
        local_170 = (FName)pUVar12->_padding_;
        ::FName::ToString(&local_170,&local_160);
        QueryPerformanceCounter(&local_168);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      local_c8.HashSize = 0;
      if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_c8.Elements);
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if (!bVar9) {
      QueryPerformanceCounter(&local_180);
    }
    bVar9 = true;
    FWindowsPlatformProcess::Sleep(fVar10);
    this = local_178;
  } while( true );
}

// Build @ 147ac8720

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::Build
          (FDistanceFieldAsyncQueue *this,FAsyncDistanceFieldTask *param_1,
          FQueuedThreadPool *param_2)

{
  return;
}

// CancelAllOutstandingBuilds @ 147ac9270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FDistanceFieldAsyncQueue::CancelAllOutstandingBuilds(FDistanceFieldAsyncQueue *this)

{
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 *puVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar3;
  bool bVar4;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uchar local_50 [4];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId762,"FDistanceFieldAsyncQueue::CancelAllOutstandingBuilds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x2fa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId762);
  }
  local_5c = 0x80;
  lpCriticalSection = &this->CriticalSection;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->PendingTasks).Elements.field_0x8 !=
      *(int *)&(this->PendingTasks).Elements.field_0x34) {
    TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->PendingTasks);
    iVar3 = *(int *)&(this->PendingTasks).Elements.field_0xc;
    *(undefined4 *)&(this->PendingTasks).Elements.field_0x8 = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->PendingTasks,0,
                 (int *)&(this->PendingTasks).Elements.field_0xc);
    }
    *(undefined4 *)&(this->PendingTasks).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingTasks).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->PendingTasks).Elements.field_0x28 = 0;
  }
  pTVar1 = &this->ReferencedTasks;
  if ((TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
       *)local_88 != pTVar1) {
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    local_88._0_8_ = *(undefined8 *)&pTVar1->Elements;
    puVar2 = &(this->ReferencedTasks).Elements.field_0x10;
    *(undefined8 *)&pTVar1->Elements = 0;
    local_88._8_8_ = *(undefined8 *)&(this->ReferencedTasks).Elements.field_0x8;
    *(undefined8 *)&(this->ReferencedTasks).Elements.field_0x8 = 0;
    if (local_88 + 0x10 != puVar2) {
      if (*(longlong *)&(this->ReferencedTasks).Elements.field_0x20 == 0) {
        local_88._16_8_ = *(undefined8 *)puVar2;
        local_88._24_8_ = *(undefined8 *)&(this->ReferencedTasks).Elements.field_0x18;
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      local_68 = *(void **)&(this->ReferencedTasks).Elements.field_0x20;
      *(undefined8 *)&(this->ReferencedTasks).Elements.field_0x20 = 0;
      local_60 = *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x28;
      local_5c = *(uint *)&(this->ReferencedTasks).Elements.field_0x2c;
      *(undefined8 *)&(this->ReferencedTasks).Elements.field_0x28 = 0;
    }
    local_58 = *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x30;
    local_54 = *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x34;
    *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->ReferencedTasks).Elements.field_0x30 = 0xffffffff;
    if ((this->ReferencedTasks).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      local_50 = *&(this->ReferencedTasks).Hash.InlineData;
    }
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    local_48 = (this->ReferencedTasks).Hash.SecondaryData;
    (this->ReferencedTasks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_40 = (this->ReferencedTasks).HashSize;
    (this->ReferencedTasks).HashSize = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  CancelAndDeleteTask(this,(TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
                            *)local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CancelAndDeleteTask @ 147ac9530

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::CancelAndDeleteTask
          (FDistanceFieldAsyncQueue *this,
          TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FAsyncTaskBase *this_00;
  FQueuedThreadPool *pFVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 local_res20 [8];
  undefined1 local_188;
  undefined1 local_187 [7];
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  undefined4 local_3c;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId605,"FDistanceFieldAsyncQueue::CancelAndDeleteTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x25d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId605);
  }
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar16 = 0;
  uStack_144 = 1;
  iVar13 = 0;
  iVar15 = 0;
  iStack_134 = iVar13;
  iStack_148 = iVar13;
  local_130 = iVar15;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar20 = *puVar18;
    local_130 = iVar16;
    iStack_148 = iVar16;
    while (uVar20 == 0) {
      lVar12 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_147ac961f;
      uVar20 = puVar18[lVar12 + 1];
    }
    uStack_144 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_144 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_120 = (int)lVar12;
    iStack_134 = local_130 + -1 + local_120;
    if (iVar3 < iStack_134) {
      iStack_134 = iVar3;
    }
  }
LAB_147ac961f:
  uStack_12c = local_5c;
  iStack_128 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar20 = *(uint *)&(param_1->Elements).field_0x28;
  TStack_100._padding_ = CONCAT44(uStack_144,iStack_148);
  uVar19 = uVar20 & 0xffffffe0;
  uStack_138 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_134;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar20 >> 5;
  TStack_100._28_4_ = local_5c;
  TStack_100.BaseBitIndex = local_130;
  uStack_e0 = CONCAT44(uStack_124,iStack_128);
  local_150 = param_1;
  local_140 = puVar1;
  local_108 = param_1;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar20 != uVar4) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147ac9740;
      uVar20 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_11c = (int)lVar12;
    uVar20 = local_11c + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_147ac9740:
  while( true ) {
    pTVar9 = local_108;
    if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
        (int)uStack_e0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_100.CurrentBitIndex == uVar20) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1)
       ) break;
    this_00 = *(FAsyncTaskBase **)
               (*(longlong *)
                 (*(longlong *)&pTVar9->Elements + (longlong)TStack_100.CurrentBitIndex * 0x10) +
               0x88);
    if ((this_00 != (FAsyncTaskBase *)0x0) &&
       (pFVar5 = this_00->QueuedPool, pFVar5 != (FQueuedThreadPool *)0x0)) {
      cVar11 = (**(code **)((longlong)*pFVar5 + 0x20))(pFVar5,this_00);
      iVar3 = (this_00->WorkNotFinishedCounter).Counter;
      if (cVar11 == '\0') {
        if (iVar3 != 0) {
          (**(code **)(this_00->_padding_ + 0x40))(this_00);
        }
      }
      else {
        if ((iVar3 != 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("WorkNotFinishedCounter.GetValue() == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                                ,0x1e8,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        (this_00->WorkNotFinishedCounter).Counter = (this_00->WorkNotFinishedCounter).Counter + -1;
        UNLOCK();
        FAsyncTaskBase::FinishThreadedWork(this_00);
        this_00->QueuedPool = (FQueuedThreadPool *)0x0;
      }
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  uStack_174 = 1;
  iStack_164 = iVar15;
  local_160 = iVar15;
  iStack_178 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar20 = *puVar18;
    local_160 = iVar16;
    while (uVar20 == 0) {
      lVar12 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      iStack_164 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_147ac988f;
      uVar20 = puVar18[lVar12 + 1];
    }
    uStack_174 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_174 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_118 = (int)lVar12;
    iStack_164 = local_160 + -1 + local_118;
    if (iVar3 < iStack_164) {
      iStack_164 = iVar3;
    }
  }
LAB_147ac988f:
  iStack_15c = local_3c;
  uVar20 = *(uint *)&(param_1->Elements).field_0x28;
  uVar19 = uVar20 & 0xffffffe0;
  iStack_158 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_168 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_d0.CurrentBitIndex = iStack_164;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar20 >> 5;
  TStack_d0._28_4_ = local_3c;
  TStack_d0.BaseBitIndex = local_160;
  uStack_b0 = CONCAT44(uStack_154,iStack_158);
  local_180 = param_1;
  local_170 = puVar1;
  local_d8 = param_1;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar20 != uVar4) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147ac99b0;
      uVar20 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_114 = (int)lVar12;
    uVar20 = local_114 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_147ac99b0:
  while( true ) {
    pTVar9 = local_d8;
    if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
        (int)uStack_b0) {
      local_188 = 0;
      `TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_188);
    }
    if (((TStack_d0.CurrentBitIndex == uVar20) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1))
    break;
    lVar12 = *(longlong *)
              (*(longlong *)&pTVar9->Elements + (longlong)TStack_d0.CurrentBitIndex * 0x10);
    if (*(FAsyncTaskBase **)(lVar12 + 0x88) != (FAsyncTaskBase *)0x0) {
      FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar12 + 0x88),true,false);
      plVar6 = *(longlong **)(lVar12 + 0x88);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(lVar12 + 0x88) = 0;
        (**(code **)(*plVar6 + 0x28))(plVar6,1);
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  uStack_174 = 1;
  iStack_164 = iVar15;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar20 = *puVar18;
    iVar13 = iVar16;
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_164 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147ac9aad;
      uVar20 = puVar18[lVar12 + 1];
    }
    uStack_174 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_174 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_110 = (int)lVar12;
    iStack_164 = local_110 + -1 + iVar16;
    if (iVar3 < iStack_164) {
      iStack_164 = iVar3;
    }
  }
LAB_147ac9aad:
  uVar20 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_15c = iStack_134;
  iStack_158 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  uStack_168 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_174,iVar13);
  TStack_a0.CurrentBitIndex = iStack_164;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar20 >> 5;
  TStack_a0._28_4_ = iStack_134;
  TStack_a0.BaseBitIndex = iVar16;
  uStack_80 = CONCAT44(uStack_154,iStack_158);
  local_160 = iVar16;
  iStack_178 = iVar13;
  local_a8 = param_1;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (local_180 = param_1, local_170 = puVar1, iVar3 < (int)uVar20)) &&
     (local_180 = param_1, local_170 = puVar1,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar20 != uVar4) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147ac9bc0;
      uVar20 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar20 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_147ac9bc0:
  while( true ) {
    pTVar9 = local_a8;
    if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
        (int)uStack_80) {
      `TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_187);
    }
    if (((TStack_a0.CurrentBitIndex == uVar20) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1))
    break;
    puVar7 = *(undefined8 **)
              (*(longlong *)&pTVar9->Elements + (longlong)TStack_a0.CurrentBitIndex * 0x10);
    if ((FDeferredCleanupInterface *)puVar7[0x10] != (FDeferredCleanupInterface *)0x0) {
      BeginCleanup((FDeferredCleanupInterface *)puVar7[0x10]);
    }
    if (puVar7 != (undefined8 *)0x0) {
      plVar6 = (longlong *)puVar7[0x11];
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,1);
      }
      if ((void *)puVar7[0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar7[0xe]);
      }
      if ((void *)puVar7[8] != (void *)0x0) {
        FMemory::Free((void *)puVar7[8]);
      }
      if ((void *)puVar7[2] != (void *)0x0) {
        FMemory::Free((void *)puVar7[2]);
      }
      if ((void *)*puVar7 != (void *)0x0) {
        FMemory::Free((void *)*puVar7);
      }
      ::operator_delete(puVar7,0x98);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CancelAndDeleteTaskByPredicate @ 147ac9cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::CancelAndDeleteTaskByPredicate
          (FDistanceFieldAsyncQueue *this,
          TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  undefined1 auStackY_c8 [32];
  TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId571,
               "FDistanceFieldAsyncQueue::CancelAndDeleteTaskByPredicate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x23b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId571);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((*(int *)&(this->ReferencedTasks).Elements.field_0x8 ==
        *(int *)&(this->ReferencedTasks).Elements.field_0x34) &&
      (*(int *)&(this->PendingTasks).Elements.field_0x8 ==
       *(int *)&(this->PendingTasks).Elements.field_0x34)) &&
     (*(int *)&(this->CompletedTasks).Elements.field_0x8 ==
      *(int *)&(this->CompletedTasks).Elements.field_0x34)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    local_90 = local_88;
    local_5c = 0x80;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_58 = 0xffffffff;
    local_98 = param_1;
    `FDistanceFieldAsyncQueue::CancelAndDeleteTaskByPredicate'::__l5::<lambda_1>::operator()
              (&local_98,&this->PendingTasks);
    `FDistanceFieldAsyncQueue::CancelAndDeleteTaskByPredicate'::__l5::<lambda_1>::operator()
              (&local_98,&this->ReferencedTasks);
    `FDistanceFieldAsyncQueue::CancelAndDeleteTaskByPredicate'::__l5::<lambda_1>::operator()
              (&local_98,&this->CompletedTasks);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    CancelAndDeleteTask(this,(TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
                              *)local_88);
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    iVar1 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_54 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CancelBuild @ 147ac9ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::CancelBuild(FDistanceFieldAsyncQueue *this,UStaticMesh *param_1)

{
  undefined1 auStack_a8 [32];
  initializer_list<UStaticMesh_*> local_88;
  UStaticMesh *local_78;
  UStaticMesh *local_70;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88._First = &local_70;
  local_88._Last = (UStaticMesh **)&stack0xffffffffffffff98;
  local_70 = param_1;
  TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator>::
  TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator>
            ((TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator> *)
             &stack0xffffffffffffff98,&local_88);
  if (CpuChannel->Enabled < 0) {
    local_78 = (UStaticMesh *)&stack0xffffffffffffff98;
    local_88._Last = &local_78;
    local_88._First =
         (UStaticMesh **)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDistanceFieldAsyncQueue::CancelBuilds'::__l2::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
         ::Call;
    CancelAndDeleteTaskByPredicate
              (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_88);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId750,"FDistanceFieldAsyncQueue::CancelBuilds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x2ee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId750);
    local_78 = (UStaticMesh *)&stack0xffffffffffffff98;
    local_88._Last = &local_78;
    local_88._First =
         (UStaticMesh **)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDistanceFieldAsyncQueue::CancelBuilds'::__l2::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
         ::Call;
    CancelAndDeleteTaskByPredicate
              (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_88);
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&stack0xffffffffffffff98);
  return;
}

// CancelBuilds @ 147ac9ff0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::CancelBuilds
          (FDistanceFieldAsyncQueue *this,
          TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator> *param_1)

{
  TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator> *local_res10 [3];
  code *local_18;
  TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator> **local_10;
  
  local_res10[0] = param_1;
  if (CpuChannel->Enabled < 0) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FDistanceFieldAsyncQueue::CancelBuilds'::__l2::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
               ::Call;
    CancelAndDeleteTaskByPredicate
              (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_18);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId750,"FDistanceFieldAsyncQueue::CancelBuilds",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
             ,0x2ee);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId750);
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDistanceFieldAsyncQueue::CancelBuilds'::__l2::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
             ::Call;
  CancelAndDeleteTaskByPredicate
            (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_18);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// FinishAllCompilation @ 147adf180

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FDistanceFieldAsyncQueue::FinishAllCompilation(FDistanceFieldAsyncQueue *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  float fVar7;
  FQueuedThreadPool *pFVar8;
  FDistanceFieldAsyncQueue *pFVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  FDistanceFieldAsyncQueue *pFStackX_8;
  char cStackX_10;
  int iStackX_18;
  int iStackX_20;
  undefined4 uStack_bc;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  pFStackX_8 = this;
  if (CpuChannel->Enabled < 0) {
    cStackX_10 = '\0';
  }
  else {
    cStackX_10 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId872,"FDistanceFieldAsyncQueue::BlockUntilAllBuildsComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x368);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId872);
  }
  pFVar9 = pFStackX_8;
  fVar7 = __real_3c23d70a;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  puVar1 = &(pFStackX_8->ReferencedTasks).Elements.field_0x10;
  do {
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x28;
    iVar15 = 0;
    iVar17 = 0;
    uVar12 = 1;
    iVar13 = 0;
    if (iVar3 != 0) {
      puVar4 = *(uint **)&(pFVar9->ReferencedTasks).Elements.field_0x20;
      puVar18 = (uint *)puVar1;
      if (puVar4 != (uint *)0x0) {
        puVar18 = puVar4;
      }
      uVar19 = *puVar18;
      while (uVar19 == 0) {
        lVar14 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar13 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147ac7aaf;
        uVar19 = puVar18[lVar14 + 1];
      }
      uVar12 = -uVar19 & uVar19;
      uVar2 = (ulonglong)uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStackX_18 = (int)lVar14;
      iVar13 = iStackX_18 + -1 + iVar17;
      if (iVar3 < iVar13) {
        iVar13 = iVar3;
      }
    }
LAB_147ac7aaf:
    uVar19 = *(uint *)&(pFVar9->ReferencedTasks).Elements.field_0x28;
    uVar20 = uVar19 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uVar12,iVar15);
    TStack_80.CurrentBitIndex = iVar13;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar19 >> 5;
    TStack_80._28_4_ = uStack_bc;
    TStack_80.BaseBitIndex = iVar17;
    uStack_60 = CONCAT44(uStack_8c,
                         *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x8 -
                         *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x34);
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = *(uint *)&(pFVar9->ReferencedTasks).Elements.field_0x28;
    if (uVar19 != uVar12) {
      puVar5 = *(undefined1 **)&(pFVar9->ReferencedTasks).Elements.field_0x20;
      puVar16 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar16 = puVar5;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar19 == 0) {
        lVar14 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar19 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147ac7bc0;
        uVar19 = *(uint *)(puVar16 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStackX_20 = (int)lVar14;
      uVar19 = iStackX_20 + -1 + uVar20;
      if ((int)uVar12 < (int)uVar19) {
        uVar19 = uVar12;
      }
    }
LAB_147ac7bc0:
    while( true ) {
      if (*(int *)&(pFVar9->ReferencedTasks).Elements.field_0x8 -
          *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x34 != (int)uStack_60) {
        pFStackX_8 = (FDistanceFieldAsyncQueue *)((ulonglong)pFStackX_8 & 0xffffffffffffff00);
        `TSparseArray<TSparseSetElement<FAsyncDistanceFieldTask_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&pFStackX_8);
      }
      pFVar8 = GThreadPool;
      if ((TStack_80.CurrentBitIndex == uVar19) &&
         (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar14 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)&(pFVar9->ReferencedTasks).Elements +
                  (longlong)TStack_80.CurrentBitIndex * 0x10) + 0x88);
      if (((lVar14 != 0) && (*(char *)(lVar14 + 0x50) != '\0')) &&
         ((*(longlong **)(lVar14 + 0x48) != (longlong *)0x0 &&
          (cVar11 = (**(code **)(**(longlong **)(lVar14 + 0x48) + 0x20))(), cVar11 != '\0')))) {
        *(FQueuedThreadPool **)(lVar14 + 0x48) = pFVar8;
        *(undefined1 *)(lVar14 + 0x50) = 0;
        (**(code **)((longlong)*pFVar8 + 0x18))(pFVar8);
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&pFVar9->CriticalSection;
    LeaveCriticalSection(lpCriticalSection);
    (**(code **)(pFVar9->_padding_ + 0x48))(pFVar9,0);
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x8;
    iVar17 = *(int *)&(pFVar9->ReferencedTasks).Elements.field_0x34;
    LeaveCriticalSection(lpCriticalSection);
    if (iVar3 - iVar17 < 1) {
      if (cStackX_10 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    FWindowsPlatformProcess::Sleep(fVar7);
  } while( true );
}

// FinishCompilationForObjects @ 147adf190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::FinishCompilationForObjects
          (FDistanceFieldAsyncQueue *this,TArrayView<UObject_*_const,int> *param_1)

{
  UObject **ppUVar1;
  uint *puVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  code *pcVar5;
  FDistanceFieldAsyncQueue *this_00;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  ForElementType<unsigned_int> FVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  UObject **ppUVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [4];
  int local_164;
  int local_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  UObject *local_140;
  longlong *local_138;
  undefined1 local_130 [20];
  uint uStack_11c;
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  int local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  int local_d8;
  FDistanceFieldAsyncQueue *local_d0;
  FSparseArrayAllocationInfo local_c8;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar23 = -1 < CpuChannel->Enabled;
  local_d0 = this;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId510,"FDistanceFieldAsyncQueue::FinishCompilationForObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x1fe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId510);
  }
  ppUVar21 = param_1->DataPtr;
  uVar18 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  ppUVar1 = ppUVar21 + param_1->ArrayNum;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  for (; ppUVar21 != ppUVar1; ppUVar21 = ppUVar21 + 1) {
    pUVar3 = *ppUVar21;
    if (pUVar3 == (UObject *)0x0) {
LAB_147adf2b3:
      local_140 = (UObject *)0x0;
      if (pUVar3 != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        iVar17 = (int)pUVar9->_padding_;
        uVar18 = local_60;
        if ((iVar17 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar9->_padding_)) {
          pUVar4 = *(UObject **)(pUVar3 + 0x24);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar4 != (UObject *)0x0) goto LAB_147adf325;
          }
          else if (pUVar4 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar4);
LAB_147adf325:
            pUVar3 = *(UObject **)(pUVar3 + 0x24);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
            if (local_54 == 0) {
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                                  (int *)(local_88 + 0xc));
              iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
              FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar13 = local_68;
              }
              bVar11 = (byte)iVar8 & 0x1f;
              if (iVar8 < 0) {
                iVar8 = iVar8 + 0x1f;
                bVar11 = bVar11 - 0x20;
              }
              puVar2 = (uint *)((longlong)FVar13 + (longlong)(iVar8 >> 5) * 4);
              *puVar2 = *puVar2 & ~(1 << (bVar11 & 0x1f));
              iVar8 = local_58;
            }
            else {
              local_54 = local_54 + -1;
              iVar8 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
              iVar17 = local_58;
              if (local_54 != 0) {
                *(undefined4 *)(local_88._0_8_ + (longlong)iVar8 * 0x10) = 0xffffffff;
              }
            }
            local_58 = iVar8;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_88,&local_c8,iVar17);
            if (local_c8.Pointer != (ulonglong *)0x0) {
              *(UObject **)local_c8.Pointer = pUVar3;
              *(undefined4 *)((longlong)local_c8.Pointer + 8) = 0xffffffff;
            }
            uVar14 = *(ulonglong *)local_c8.Pointer;
            uVar18 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
            uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
            uVar18 = uVar18 >> 0x10 ^ uVar18;
            if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
              FVar12.Data = (FScriptContainerElement *)local_50;
              if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar12.Data = local_48.Data;
              }
              for (iVar17 = *(int *)((longlong)FVar12.Data + (ulonglong)(local_40 - 1 & uVar18) * 4)
                  ; iVar17 != -1; iVar17 = *(int *)(local_88._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
                if (*(ulonglong *)(local_88._0_8_ + (longlong)iVar17 * 0x10) == uVar14) {
                  if (iVar17 != -1) {
                    *(ulonglong *)(local_88._0_8_ + (longlong)iVar17 * 0x10) = uVar14;
                    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_88,local_c8.Index,1);
                    uVar18 = local_60;
                    goto LAB_147adf71a;
                  }
                  break;
                }
              }
            }
            uVar16 = 1;
            uVar22 = local_88._8_4_ - local_54;
            if (3 < uVar22) {
              uVar14 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
              lVar15 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              local_e0._4_4_ = (undefined4)lVar15;
              uVar16 = 1 << ((byte)lVar15 & 0x1f);
            }
            if (((int)uVar22 < 1) || ((int)uVar16 <= (int)local_40)) {
              uVar18 = local_40 - 1 & uVar18;
              *(uint *)((longlong)local_c8.Pointer + 0xc) = uVar18;
              FVar12.Data = (FScriptContainerElement *)local_50;
              if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar12.Data = local_48.Data;
              }
              lVar15 = (longlong)(int)(local_40 - 1 & uVar18);
              *(undefined4 *)((longlong)local_c8.Pointer + 8) =
                   *(undefined4 *)((longlong)FVar12.Data + lVar15 * 4);
              *(int *)((longlong)FVar12.Data + lVar15 * 4) = local_c8.Index;
              uVar18 = local_60;
            }
            else {
              local_40 = uVar16;
              if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,0,4);
              }
              if (uVar16 != 0) {
                uVar18 = uVar16;
                if (uVar16 < 2) {
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    uVar18 = 0;
                    goto LAB_147adf50c;
                  }
                }
                else {
LAB_147adf50c:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_48,0,uVar18,4);
                }
                if (0 < (int)uVar16) {
                  uVar14 = 0;
                  uVar19 = (ulonglong)uVar16;
                  do {
                    FVar12.Data = (FScriptContainerElement *)local_50;
                    if ((ForElementType<FSetElementId>)local_48.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar12.Data = local_48.Data;
                    }
                    uVar10 = (longlong)(int)uVar16 - 1U & uVar14;
                    uVar14 = uVar14 + 1;
                    *(undefined4 *)((longlong)FVar12.Data + uVar10 * 4) = 0xffffffff;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
              }
              uVar18 = local_60;
              if (local_40 != 0) {
                uStack_15c = 1;
                local_160 = 0;
                pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
                uStack_14c = 0;
                iStack_148 = 0;
                if (local_60 != 0) {
                  FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                  if (local_68 != (ForElementType<unsigned_int>)0x0) {
                    FVar13 = local_68;
                  }
                  uVar22 = *(uint *)FVar13;
                  local_160 = 0;
                  while (uVar22 == 0) {
                    iStack_148 = iStack_148 + 0x20;
                    lVar15 = (longlong)local_160;
                    local_160 = local_160 + 1;
                    if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        local_160) {
                      uStack_14c = local_60;
                      goto LAB_147adf601;
                    }
                    uVar22 = ((uint *)((longlong)FVar13 + 4))[lVar15];
                  }
                  uStack_15c = -uVar22 & uVar22;
                  uVar14 = (ulonglong)uStack_15c * 2 + 1;
                  lVar15 = 0x3f;
                  if (uVar14 != 0) {
                    for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                    }
                  }
                  local_d8 = (int)lVar15;
                  uStack_14c = iStack_148 + -1 + local_d8;
                  if ((int)local_60 < (int)uStack_14c) {
                    uStack_14c = local_60;
                  }
                }
LAB_147adf601:
                local_150 = 0xffffffff;
                uStack_11c = uStack_14c;
                local_130._16_4_ = 0xffffffff;
                unique0x10000517 = iStack_148;
                unique0x1000051b = uStack_144;
                local_138 = (longlong *)local_88;
                local_130._0_8_ = CONCAT44(uStack_15c,local_160);
                local_130._8_8_ = pTStack_158;
                uVar22 = uStack_14c;
                if ((int)uStack_14c < (int)local_60) {
                  do {
                    puVar20 = (ulonglong *)((longlong)(int)uVar22 * 0x10 + *local_138);
                    uVar18 = ((uint)(*puVar20 >> 0x14) & 0xffff ^ (uint)(*puVar20 >> 4)) *
                             -0x7a143595;
                    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                    uVar18 = (uVar18 >> 0x10 ^ uVar18) & local_40 - 1;
                    *(uint *)((longlong)puVar20 + 0xc) = uVar18;
                    FVar12.Data = (FScriptContainerElement *)local_50;
                    if ((ForElementType<FSetElementId>)local_48.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar12.Data = local_48.Data;
                    }
                    lVar15 = (longlong)(int)(local_40 - 1 & uVar18);
                    *(undefined4 *)(puVar20 + 1) =
                         *(undefined4 *)((longlong)FVar12.Data + lVar15 * 4);
                    *(uint *)((longlong)FVar12.Data + lVar15 * 4) = uVar22;
                    local_130._16_4_ = local_130._16_4_ & ~local_130._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_130);
                    uVar18 = local_60;
                    uVar22 = uStack_11c;
                  } while ((int)uStack_11c < *(int *)(local_130._8_8_ + 0x18));
                }
              }
            }
          }
        }
      }
    }
    else {
      pUVar9 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar17 = (int)pUVar9->_padding_;
      uVar18 = local_60;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar17) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
          &pUVar9->_padding_)) goto LAB_147adf2b3;
      local_140 = pUVar3;
      TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator>::
      Emplace<UStaticMesh_*_const_&>
                ((TSet<UStaticMesh_*,DefaultKeyFuncs<UStaticMesh_*,0>,FDefaultSetAllocator> *)
                 local_88,(UStaticMesh **)&local_e0,(bool *)&local_140);
      uVar18 = local_60;
    }
LAB_147adf71a:
  }
  iStack_108 = 0;
  local_f0 = 0;
  uStack_f4 = 0;
  uStack_104 = 1;
  if (uVar18 != 0) {
    FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_68;
    }
    uVar22 = *(uint *)FVar13;
    while (uVar22 == 0) {
      iStack_108 = iStack_108 + 1;
      local_f0 = local_f0 + 0x20;
      uStack_f4 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_108)
      goto LAB_147adf7a1;
      uVar22 = *(uint *)((longlong)FVar13 + (longlong)iStack_108 * 4);
    }
    uStack_104 = -uVar22 & uVar22;
    uVar14 = (ulonglong)uStack_104 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_164 = (int)lVar15;
    uStack_f4 = local_164 + -1 + local_f0;
    if ((int)uVar18 < (int)uStack_f4) {
      uStack_f4 = uVar18;
    }
  }
LAB_147adf7a1:
  local_110 = (longlong *)local_88;
  local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_e8 = local_88._8_4_ - local_54;
  uVar22 = uVar18 & 0xffffffe0;
  uStack_f8 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_f4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_104,iStack_108);
  iVar17 = (int)uVar18 >> 5;
  TStack_b0._28_4_ = uStack_f4;
  TStack_b0.BaseBitIndex = local_f0;
  uStack_90 = CONCAT44(uStack_e4,iStack_e8);
  uVar16 = uVar18;
  uStack_ec = uStack_f4;
  local_b8 = local_110;
  TStack_b0.Array = local_100;
  if (((int)uVar18 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), uVar16 = local_60, bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = local_d0;
  if (uVar18 != uVar16) {
    FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_68;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar13 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      iVar17 = iVar17 + 1;
      uVar22 = uVar22 + 0x20;
      uVar18 = uVar16;
      if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < iVar17)
      goto LAB_147adf8a0;
      uVar18 = *(uint *)((longlong)FVar13 + (longlong)iVar17 * 4);
    }
    uVar14 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = (int)lVar15 + -1 + uVar22;
    if ((int)uVar16 < (int)uVar18) {
      uVar18 = uVar16;
    }
  }
LAB_147adf8a0:
  while( true ) {
    plVar6 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_b0.CurrentBitIndex == uVar18) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar6 == (longlong *)local_88)) break;
    BlockUntilBuildComplete
              (this_00,*(UStaticMesh **)(*plVar6 + (longlong)TStack_b0.CurrentBitIndex * 0x10),false
              );
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UStaticMesh_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAssetNameFormat @ 147ae3a20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall
FDistanceFieldAsyncQueue::GetAssetNameFormat
          (FDistanceFieldAsyncQueue *this,FTextFormat *__return_storage_ptr__)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"DistanceField",L"MeshDistanceFieldNameFormat",
                      L"{0}|plural(one=Mesh Distance Field,other=Mesh Distance Fields)");
  FTextFormat::FTextFormat(__return_storage_ptr__,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetAssetTypeName @ 147ae3b00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall FDistanceFieldAsyncQueue::GetAssetTypeName(FDistanceFieldAsyncQueue *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"UE-MeshDistanceField");
  return in_RDX;
}

// GetDependentTypeNames @ 147ae6270

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TArrayView<FName,int> * __thiscall
FDistanceFieldAsyncQueue::GetDependentTypeNames
          (FDistanceFieldAsyncQueue *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FName *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNumRemainingAssets @ 147aea1b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall FDistanceFieldAsyncQueue::GetNumRemainingAssets(FDistanceFieldAsyncQueue *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = *(int *)&(this->ReferencedTasks).Elements.field_0x8;
    iVar2 = *(int *)&(this->ReferencedTasks).Elements.field_0x34;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1 - iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStaticAssetTypeName @ 147aed880

FName __cdecl FDistanceFieldAsyncQueue::GetStaticAssetTypeName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"UE-MeshDistanceField");
  return in_RCX;
}

// IsTaskInvalid @ 147af55a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FDistanceFieldAsyncQueue::IsTaskInvalid
          (FDistanceFieldAsyncQueue *this,FAsyncDistanceFieldTask *param_1)

{
  FUObjectItem *pFVar1;
  
  if ((param_1->StaticMesh != (UStaticMesh *)0x0) &&
     (pFVar1 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&param_1->StaticMesh->_padding_ + 4)),
     ((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
    return true;
  }
  if ((param_1->GenerateSource != (UStaticMesh *)0x0) &&
     (pFVar1 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&param_1->GenerateSource->_padding_ + 4)
                         ),
     ((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
    return true;
  }
  return false;
}

// MarkCompilationAsCanceled @ 147af9830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::MarkCompilationAsCanceled
          (FDistanceFieldAsyncQueue *this,TArrayView<UObject_*_const,int> *param_1)

{
  UObject **ppUVar1;
  uint *puVar2;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **ppTVar14;
  uint uVar15;
  UObject **ppUVar16;
  ulonglong uVar17;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **ppTVar18;
  FScriptContainerElement *pFVar19;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **ppTVar20;
  undefined1 auStackY_118 [32];
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_e8;
  code *local_e0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_d8;
  uint local_d0;
  uint uStack_cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c8;
  undefined4 local_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  ppUVar16 = param_1->DataPtr;
  ppTVar20 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)0x0;
  ppUVar1 = ppUVar16 + param_1->ArrayNum;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  do {
    if (ppUVar16 == ppUVar1) {
      if (local_88.Data.ArrayNum != local_88.NumFreeIndices) {
        if (CpuChannel->Enabled < 0) {
          local_e8 = &local_88;
          local_d8 = &local_e8;
          local_e0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FDistanceFieldAsyncQueue::MarkCompilationAsCanceled'::__l12::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
                     ::Call;
          CancelAndDeleteTaskByPredicate
                    (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_e0);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId547,
                     "FDistanceFieldAsyncQueue::MarkCompilationAsCanceled",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                     ,0x223);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId547);
          local_e8 = &local_88;
          local_d8 = &local_e8;
          local_e0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FDistanceFieldAsyncQueue::MarkCompilationAsCanceled'::__l12::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
                     ::Call;
          CancelAndDeleteTaskByPredicate
                    (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_e0);
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      iVar5 = local_88.Data.ArrayMax;
      local_88.Data._8_8_ = local_88.Data._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)&local_88,0,&local_88.Data.ArrayMax);
      }
      local_88.NumFreeIndices = 0;
      local_88.AllocationFlags.NumBits = 0;
      local_88.FirstFreeIndex = -1;
      if (0x80 < (uint)local_88.AllocationFlags.MaxBits) {
        local_88.AllocationFlags.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88.AllocationFlags,0);
      }
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocationFlags.AllocatorInstance.SecondaryData);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      return;
    }
    pTVar3 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)*ppUVar16;
    if (pTVar3 != (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)0x0) {
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      lVar11 = *(longlong *)(pTVar3->AllocationFlags).AllocatorInstance.InlineData;
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)(lVar11 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) {
        if (local_88.NumFreeIndices == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                             &local_88.Data.ArrayMax);
          iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            (&local_88.AllocationFlags,1);
          FVar13 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
          if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar8 = (byte)iVar4 & 0x1f;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0x1f;
            bVar8 = bVar8 - 0x20;
          }
          puVar2 = (uint *)((longlong)FVar13 + (longlong)(iVar4 >> 5) * 4);
          *puVar2 = *puVar2 & ~(1 << (bVar8 & 0x1f));
          iVar4 = local_88.FirstFreeIndex;
        }
        else {
          local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
          iVar4 = *(int *)(local_88.Data.AllocatorInstance.Data +
                          (longlong)local_88.FirstFreeIndex * 0x10 + 4);
          iVar5 = local_88.FirstFreeIndex;
          if (local_88.NumFreeIndices != 0) {
            *(undefined4 *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar4 * 0x10) =
                 0xffffffff;
          }
        }
        local_88.FirstFreeIndex = iVar4;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_88,(FSparseArrayAllocationInfo *)&local_e0,iVar5);
        ppTVar14 = ppTVar20;
        if (local_d8 !=
            (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)0x0) {
          *local_d8 = pTVar3;
          *(undefined4 *)(local_d8 + 1) = 0xffffffff;
          ppTVar14 = local_d8;
        }
        pTVar3 = *ppTVar14;
        uVar9 = ((uint)((ulonglong)pTVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar3 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = uVar9 >> 0x10 ^ uVar9;
        if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
           (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
          FVar10.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar10.Data = local_48.Data;
          }
          for (iVar5 = *(int *)(FVar10.Data + (ulonglong)(local_40 - 1 & uVar9) * 4); iVar5 != -1;
              iVar5 = *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8)) {
            if (*(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)(local_88.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10) == pTVar3) {
              if (iVar5 != -1) {
                *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)(local_88.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10) = pTVar3;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_88,(int)local_e0,1);
                goto LAB_147af9ce5;
              }
              break;
            }
          }
        }
        uVar15 = 1;
        uVar12 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
        if (3 < uVar12) {
          uVar17 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar15 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((int)uVar12 < 1) || ((int)uVar15 <= (int)local_40)) {
          uVar9 = local_40 - 1 & uVar9;
          *(uint *)((longlong)ppTVar14 + 0xc) = uVar9;
          FVar10.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar10.Data = local_48.Data;
          }
          lVar11 = (longlong)(int)(local_40 - 1 & uVar9);
          *(undefined4 *)(ppTVar14 + 1) = *(undefined4 *)(FVar10.Data + lVar11 * 4);
          *(int *)(FVar10.Data + lVar11 * 4) = (int)local_e0;
        }
        else {
          local_40 = uVar15;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar15 != 0) {
            uVar9 = uVar15;
            if (uVar15 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar9 = 0;
                goto LAB_147af9ad2;
              }
            }
            else {
LAB_147af9ad2:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar9,4);
            }
            if (0 < (int)uVar15) {
              uVar17 = (ulonglong)uVar15;
              ppTVar14 = ppTVar20;
              do {
                FVar10.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar10.Data = local_48.Data;
                }
                uVar7 = (longlong)(int)uVar15 - 1U & (ulonglong)ppTVar14;
                ppTVar14 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            **)((longlong)ppTVar14 + 1);
                *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
          }
          if (local_40 != 0) {
            pTStack_c8 = &local_88.AllocationFlags;
            local_d0 = 0;
            uStack_cc = 1;
            uStack_bc = 0;
            if (local_88.AllocationFlags.NumBits != 0) {
              FVar13 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
              if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar13 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar9 = *(uint *)FVar13;
              ppTVar14 = ppTVar20;
              ppTVar18 = ppTVar20;
              while (uVar9 == 0) {
                uVar9 = (int)ppTVar18 + 0x20;
                ppTVar18 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            **)(ulonglong)uVar9;
                iVar5 = (int)ppTVar14;
                local_d0 = iVar5 + 1;
                ppTVar14 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            **)(ulonglong)local_d0;
                uStack_bc = (ulonglong)uVar9 << 0x20;
                if ((int)(local_88.AllocationFlags.NumBits + -1 +
                         (local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_d0) {
                  uStack_bc = CONCAT44(uVar9,local_88.AllocationFlags.NumBits);
                  goto LAB_147af9bd1;
                }
                uVar9 = *(uint *)((uchar *)((longlong)FVar13 + 4) + (longlong)iVar5 * 4);
              }
              uStack_cc = -uVar9 & uVar9;
              uVar17 = (ulonglong)uStack_cc * 2 + 1;
              lVar11 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar5 = (int)lVar11 + -1 + (int)ppTVar18;
              if (local_88.AllocationFlags.NumBits < iVar5) {
                iVar5 = local_88.AllocationFlags.NumBits;
              }
              uStack_bc._4_4_ = (int)((ulonglong)uStack_bc >> 0x20);
              uStack_bc = CONCAT44(uStack_bc._4_4_,iVar5);
            }
LAB_147af9bd1:
            local_c0 = 0xffffffff;
            local_b0 = &local_88;
            local_a8._padding_ = CONCAT44(uStack_cc,local_d0);
            local_a8.UnvisitedBitMask = 0xffffffff;
            local_a8.CurrentBitIndex = (int)uStack_bc;
            local_a8.BaseBitIndex = uStack_bc._4_4_;
            local_a8._28_4_ = uStack_b4;
            local_a8.Array = pTStack_c8;
            if ((int)uStack_bc < local_88.AllocationFlags.NumBits) {
              do {
                pFVar19 = (local_b0->Data).AllocatorInstance.Data +
                          (longlong)local_a8.CurrentBitIndex * 0x10;
                uVar9 = ((uint)(*(ulonglong *)pFVar19 >> 0x14) & 0xffff ^
                        (uint)(*(ulonglong *)pFVar19 >> 4)) * -0x7a143595;
                uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_40 - 1;
                *(uint *)(pFVar19 + 0xc) = uVar9;
                FVar10.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar10.Data = local_48.Data;
                }
                lVar11 = (longlong)(int)(local_40 - 1 & uVar9);
                *(undefined4 *)(pFVar19 + 8) = *(undefined4 *)(FVar10.Data + lVar11 * 4);
                *(int *)(FVar10.Data + lVar11 * 4) = local_a8.CurrentBitIndex;
                local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
              } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
            }
          }
        }
      }
    }
LAB_147af9ce5:
    ppUVar16 = ppUVar16 + 1;
  } while( true );
}

// OnAssetPostCompile @ 147afb930

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::OnAssetPostCompile
          (FDistanceFieldAsyncQueue *this,
          TArray<FAssetCompileData,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr *this_00;
  undefined1 local_res10 [8];
  
  this_00 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAssetCompileData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == pFVar1) break;
    bVar4 = FWeakObjectPtr::IsValid(this_00);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(this_00);
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar6->_padding_)) {
        ProcessPendingTasks(this);
        return;
      }
    }
    this_00 = this_00 + 1;
  }
  return;
}

// OnPostReachabilityAnalysis @ 147afc040

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FDistanceFieldAsyncQueue::OnPostReachabilityAnalysis(FDistanceFieldAsyncQueue *this)

{
  FDistanceFieldAsyncQueue *local_res8 [4];
  code *local_18;
  FDistanceFieldAsyncQueue **local_10;
  
  local_res8[0] = this;
  if (CpuChannel->Enabled < 0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FDistanceFieldAsyncQueue::OnPostReachabilityAnalysis'::__l2::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
               ::Call;
    CancelAndDeleteTaskByPredicate
              (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_18);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&::__CpuProfilerEventSpecId456,"FDistanceFieldAsyncQueue::CancelUnreachableMeshes",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
             ,0x1c8);
  FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDistanceFieldAsyncQueue::OnPostReachabilityAnalysis'::__l2::<lambda_1>,bool,FAsyncDistanceFieldTask_*>
             ::Call;
  CancelAndDeleteTaskByPredicate
            (this,(TFunctionRef<bool___cdecl(FAsyncDistanceFieldTask_*)> *)&local_18);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ProcessAsyncTasks @ 147aff600

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::ProcessAsyncTasks(FDistanceFieldAsyncQueue *this,bool param_1)

{
  return;
}

// ProcessPendingTasks @ 147aff9e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FDistanceFieldAsyncQueue::ProcessPendingTasks(FDistanceFieldAsyncQueue *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<FAsyncTask<FAsyncDistanceFieldTaskWorker>,TDefaultDelete<FAsyncTask<FAsyncDistanceFieldTaskWorker>_>_>
  *pTVar1;
  FAsyncDistanceFieldTask *pFVar2;
  FAsyncTask<FAsyncDistanceFieldTaskWorker> *pFVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  FAsyncTask<FAsyncDistanceFieldTaskWorker> *pFVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_58 [8];
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  *local_28;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId677,"FDistanceFieldAsyncQueue::ProcessPendingTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
               ,0x2a5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId677);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_50,&this->PendingTasks);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar5 = local_34;
      pFVar2 = *(FAsyncDistanceFieldTask **)
                (*(longlong *)local_50._0_8_ + (longlong)local_34 * 0x10);
      if (((pFVar2->GenerateSource == (UStaticMesh *)0x0) ||
          (cVar6 = (**(code **)(pFVar2->GenerateSource->_padding_ + 0x10))(), cVar6 == '\0')) &&
         ((pFVar2->StaticMesh == (UStaticMesh *)0x0 ||
          (cVar6 = (**(code **)(pFVar2->StaticMesh->_padding_ + 0x10))(), cVar6 == '\0')))) {
        pTVar1 = &pFVar2->AsyncTask;
        if ((pTVar1->Ptr != (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Task->AsyncTask == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                               ,0x289,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = ::operator_new(0x78);
        if (pFVar8 == (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) {
          pFVar8 = (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0;
        }
        else {
          pFVar8 = FAsyncTask<FAsyncDistanceFieldTaskWorker>::
                   FAsyncTask<FAsyncDistanceFieldTaskWorker><FAsyncDistanceFieldTask_&>
                             (pFVar8,pFVar2);
        }
        if (pTVar1 == (TUniquePtr<FAsyncTask<FAsyncDistanceFieldTaskWorker>,TDefaultDelete<FAsyncTask<FAsyncDistanceFieldTaskWorker>_>_>
                       *)local_58) {
          if (pFVar8 != (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) {
            lVar9 = pFVar8->_padding_;
            goto LAB_147affb6b;
          }
        }
        else {
          pFVar3 = pTVar1->Ptr;
          pTVar1->Ptr = pFVar8;
          if (pFVar3 != (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) {
            lVar9 = pFVar3->_padding_;
            pFVar8 = pFVar3;
LAB_147affb6b:
            (**(code **)(lVar9 + 0x28))(pFVar8);
          }
        }
        FAsyncTaskBase::Start
                  ((FAsyncTaskBase *)(pFVar2->AsyncTask).Ptr,false,(this->ThreadPool).Ptr,Lowest,
                   DoNotRunInsideBusyWait,-1,L"DistanceField");
        TSet<FAsyncDistanceFieldTask_*,DefaultKeyFuncs<FAsyncDistanceFieldTask_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(local_28,iVar5);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RescheduleBackgroundTask @ 147b0d410

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::RescheduleBackgroundTask
          (FDistanceFieldAsyncQueue *this,FAsyncDistanceFieldTask *param_1,
          EQueuedWorkPriority param_2)

{
  FAsyncTask<FAsyncDistanceFieldTaskWorker> *pFVar1;
  longlong *plVar2;
  FQueuedThreadPool *pFVar3;
  char cVar4;
  
  pFVar3 = GThreadPool;
  pFVar1 = (param_1->AsyncTask).Ptr;
  if ((((pFVar1 != (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) &&
       ((EQueuedWorkPriority)pFVar1->_padding_ != param_2)) &&
      (plVar2 = (longlong *)pFVar1->_padding_, plVar2 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,pFVar1), cVar4 != '\0')) {
    pFVar1->_padding_ = (longlong)pFVar3;
    *(EQueuedWorkPriority *)&pFVar1->_padding_ = param_2;
    (**(code **)((longlong)*pFVar3 + 0x18))(pFVar3,pFVar1,param_2);
  }
  return;
}

// Shutdown @ 147b159a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDistanceFieldAsyncQueue::Shutdown(FDistanceFieldAsyncQueue *this)

{
  FQueuedThreadPool *pFVar1;
  
  CancelAllOutstandingBuilds(this);
  if (4 < (byte)LogStaticMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  }
  pFVar1 = (this->ThreadPool).Ptr;
  if (pFVar1 != (FQueuedThreadPool *)0x0) {
    (this->ThreadPool).Ptr = (FQueuedThreadPool *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000147b159e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,1);
    return;
  }
  return;
}

// StartBackgroundTask @ 147b16380

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDistanceFieldAsyncQueue::StartBackgroundTask
          (FDistanceFieldAsyncQueue *this,FAsyncDistanceFieldTask *param_1)

{
  TUniquePtr<FAsyncTask<FAsyncDistanceFieldTaskWorker>,TDefaultDelete<FAsyncTask<FAsyncDistanceFieldTaskWorker>_>_>
  *pTVar1;
  FAsyncTask<FAsyncDistanceFieldTaskWorker> *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAsyncTask<FAsyncDistanceFieldTaskWorker> *pFVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  pTVar1 = &param_1->AsyncTask;
  if (pTVar1->Ptr != (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Task->AsyncTask == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                       ,0x289,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = ::operator_new(0x78);
  if (pFVar5 == (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) {
    pFVar5 = (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0;
  }
  else {
    pFVar5 = FAsyncTask<FAsyncDistanceFieldTaskWorker>::
             FAsyncTask<FAsyncDistanceFieldTaskWorker><FAsyncDistanceFieldTask_&>(pFVar5,param_1);
  }
  if (pTVar1 == (TUniquePtr<FAsyncTask<FAsyncDistanceFieldTaskWorker>,TDefaultDelete<FAsyncTask<FAsyncDistanceFieldTaskWorker>_>_>
                 *)local_18) {
    if (pFVar5 == (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) goto LAB_147b16416;
    lVar6 = pFVar5->_padding_;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar2 == (FAsyncTask<FAsyncDistanceFieldTaskWorker> *)0x0) goto LAB_147b16416;
    lVar6 = pFVar2->_padding_;
    pFVar5 = pFVar2;
  }
  (**(code **)(lVar6 + 0x28))(pFVar5);
LAB_147b16416:
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)pTVar1->Ptr,false,(this->ThreadPool).Ptr,Lowest,
             DoNotRunInsideBusyWait,-1,L"DistanceField");
  return;
}

