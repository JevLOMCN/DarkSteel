// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 11

// FFileReadScheduler @ 142ad64b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FFileReadScheduler * __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::FFileReadScheduler
          (FFileReadScheduler *this,int param_1,bool param_2,bool param_3)

{
  TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>,TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>_>_>
  *pTVar1;
  uint uVar2;
  atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
  aVar3;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *pTVar4;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_00;
  undefined8 local_28 [2];
  
  this_00 = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)
            0x0;
  *(undefined8 *)&this->DirectoryReadsToSchedule = 0;
  *(undefined8 *)&(this->DirectoryReadsToSchedule).field_0x8 = 0;
  *(undefined8 *)&(this->DirectoryReadsToSchedule).field_0x20 = 0;
  *(undefined4 *)&(this->DirectoryReadsToSchedule).field_0x28 = 0;
  *(undefined4 *)&(this->DirectoryReadsToSchedule).field_0x2c = 0x80;
  *(undefined4 *)&(this->DirectoryReadsToSchedule).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirectoryReadsToSchedule).field_0x34 = 0;
  *(undefined8 *)&(this->DirectoryReadsToSchedule).field_0x40 = 0;
  *(undefined4 *)&(this->DirectoryReadsToSchedule).field_0x48 = 0;
  (this->ReadyReadContexts).Head =
       (atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
        )0x0;
  aVar3 = (atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
           )FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar3 = 0;
  (this->ReadyReadContexts).Head = aVar3;
  (this->ReadyReadContexts).Tail = (FNode *)aVar3;
  *(undefined8 *)&this->ReadTaskLoaderFreeList = 0;
  *(undefined8 *)&(this->ReadTaskLoaderFreeList).field_0x8 = 0;
  *(undefined8 *)&this->ReadTaskLoaderFreeList = 0;
  *(undefined8 *)&(this->ReadTaskLoaderFreeList).field_0x8 = 0;
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  *(ulonglong *)&this->ReadTaskLoaderFreeList =
       *(ulonglong *)&this->ReadTaskLoaderFreeList & 0xfffffffffc000000 | (ulonglong)uVar2;
  *(ulonglong *)&(this->ReadTaskLoaderFreeList).field_0x8 =
       *(ulonglong *)&(this->ReadTaskLoaderFreeList).field_0x8 & 0xfffffffffc000000 |
       (ulonglong)uVar2;
  Tasks::FTaskConcurrencyLimiter::FTaskConcurrencyLimiter
            (&this->ReadConcurrencyLimiter,param_1,BackgroundLow);
  pTVar1 = &this->ScheduledDirectories;
  this->NumReadTaskThreads = param_1;
  pTVar1->Ptr = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                 *)0x0;
  this->bGatherAssetPackageData = param_2;
  this->bGatherDependsData = param_3;
  pTVar4 = ::operator_new(0x30);
  if (pTVar4 != (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                 *)0x0) {
    (pTVar4->Root).RelPaths.Ptr = (FString *)0x0;
    (pTVar4->Root).ChildNodes.Ptr = (FTreeNode *)0x0;
    (pTVar4->Root).NumChildNodesAndFlags = 0;
    (pTVar4->Root).CapacityChildNodes = 0;
    pTVar4->NumPaths = 0;
    pTVar4->PathSeparator = L'/';
    pTVar4->bPathSeparatorInitialized = false;
    pTVar4->bNeedDriveWithoutPathFixup = false;
    this_00 = pTVar4;
  }
  if (pTVar1 == (TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>,TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>_>_>
                 *)local_28) {
    if (this_00 ==
        (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)0x0)
    {
      return this;
    }
    TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
    ~FTreeNode(&this_00->Root);
  }
  else {
    pTVar4 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pTVar4 == (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                   *)0x0) {
      return this;
    }
    TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
    ~FTreeNode(&pTVar4->Root);
    this_00 = pTVar4;
  }
  ::operator_delete(this_00,0x30);
  return this;
}

// ~FFileReadScheduler @ 142adaa10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::~FFileReadScheduler(FFileReadScheduler *this)

{
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_00;
  void *pvVar1;
  
  Tasks::TaskConcurrencyLimiter_Private::FPimpl::Wait
            ((this->ReadConcurrencyLimiter).Pimpl.Object,(FTimespan)0x7fffffffffffffff);
  FreeReadTaskLoaders(this);
  this_00 = (this->ScheduledDirectories).Ptr;
  if (this_00 !=
      (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)0x0) {
    TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
    ~FTreeNode(&this_00->Root);
    ::operator_delete(this_00,0x30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReadConcurrencyLimiter).Pimpl.SharedReferenceCount.ReferenceController);
  FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::
  ~FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>
            ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
             &this->ReadTaskLoaderFreeList);
  TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
  ::
  ~TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
            (&this->ReadyReadContexts);
  *(undefined4 *)&(this->DirectoryReadsToSchedule).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DirectoryReadsToSchedule).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddFile @ 142ae9190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::AddFile
          (FFileReadScheduler *this,FName param_1,FGatheredPathData *param_2)

{
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  FTreeNode *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *pTVar9;
  FReadContext *pFVar10;
  FTaskEventBase *pFVar11;
  TStringView<wchar_t> *pTVar12;
  FName *pFVar13;
  FReadContext *pFVar14;
  wchar_t wVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  FGatheredPathData *pFVar18;
  undefined1 auStackY_1a8 [32];
  bool local_178 [8];
  undefined1 local_170 [32];
  FSharedReferencer<1> FStack_150;
  FFileReadScheduler *local_148;
  TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
  local_140;
  FGatheredPathData *local_138;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> local_f8;
  FName local_e8 [2];
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [16];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_148 = this;
  local_138 = param_2;
  FPaths::GetPath((FString *)local_170,&param_2->LocalAbsPath);
  pwVar17 = L"";
  if (((param_2->LocalAbsPath).Data.ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AssetFileData.LocalAbsPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1761,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((int)local_170._8_4_ < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!DirectoryPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1762,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = local_170._0_8_;
  pFVar14 = (FReadContext *)0x0;
  this_00 = (this->ScheduledDirectories).Ptr;
  local_128 = (FScriptContainerElement *)local_170._0_8_;
  iVar8 = 0;
  iStack_120 = local_170._8_4_ + -1;
  if (local_170._8_4_ == 0) {
    iStack_120 = iVar8;
  }
  uVar2._4_4_ = uStack_11c;
  uVar2._0_4_ = iStack_120;
  local_118.DataPtr = (wchar_t *)local_170._0_8_;
  local_118._8_8_ = uVar2;
  if (iStack_120 == 0) {
    uVar6 = (this_00->Root).NumChildNodesAndFlags;
    local_178[0] = SUB41(uVar6 >> 0x1f,0);
    pTVar9 = this_00;
    if (-1 < (int)uVar6) {
      (this_00->Root).NumChildNodesAndFlags = uVar6 | 0x80000000;
      (this_00->Root).Value.Pad[0] = '\0';
      (this_00->Root).Value.Pad[1] = '\0';
      (this_00->Root).Value.Pad[2] = '\0';
      (this_00->Root).Value.Pad[3] = '\0';
      (this_00->Root).Value.Pad[4] = '\0';
      (this_00->Root).Value.Pad[5] = '\0';
      (this_00->Root).Value.Pad[6] = '\0';
      (this_00->Root).Value.Pad[7] = '\0';
      pFVar3 = &this_00->Root;
      (pFVar3->Value).Pad[8] = '\0';
      (pFVar3->Value).Pad[9] = '\0';
      (pFVar3->Value).Pad[10] = '\0';
      (pFVar3->Value).Pad[0xb] = '\0';
      (pFVar3->Value).Pad[0xc] = '\0';
      (pFVar3->Value).Pad[0xd] = '\0';
      (pFVar3->Value).Pad[0xe] = '\0';
      (pFVar3->Value).Pad[0xf] = '\0';
      this_00->NumPaths = this_00->NumPaths + 1;
    }
    goto LAB_142ae9366;
  }
  if (this_00->bPathSeparatorInitialized == false) {
    local_d8.DataPtr = (wchar_t *)local_170._0_8_;
    local_d8._8_8_ = uVar2;
    iVar7 = String::FindFirstChar(&local_d8,L'/',CaseSensitive);
    if (iVar7 == -1) {
      local_c8.DataPtr = (wchar_t *)uVar4;
      local_c8._8_8_ = uVar2;
      iVar7 = String::FindFirstChar(&local_c8,L'\\',CaseSensitive);
      if (iVar7 == -1) goto LAB_142ae92f5;
      wVar15 = L'\\';
    }
    else {
      wVar15 = L'/';
    }
    TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
    InitializePathSeparator(this_00,wVar15);
  }
LAB_142ae92f5:
  local_98.Base = local_78;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)local_58;
  bVar5 = TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
          NormalizePathForReading(this_00,&local_118,&local_98);
  if (bVar5) {
    this_00->bNeedDriveWithoutPathFixup = this_00->bPathSeparatorInitialized == false;
  }
  local_b8.DataPtr = local_118.DataPtr;
  local_b8.Size = local_118.Size;
  local_b8._12_4_ = local_118._12_4_;
  pTVar9 = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)
           TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
           FTreeNode::FindOrAdd(&this_00->Root,&local_b8,local_178);
  if (local_178[0] == false) {
    this_00->NumPaths = this_00->NumPaths + 1;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
LAB_142ae9366:
  if (local_178[0] == false) {
    if ((*(longlong *)(pTVar9->Root).Value.Pad != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!DirectoryReadTaskData.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x1768,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar10 = ::operator_new(0x28);
    if (pFVar10 == (FReadContext *)0x0) {
      local_170._24_8_ = ___xmm_00000000000000000000000000000010;
      pFVar18 = (FGatheredPathData *)&DAT_00000010;
      FStack_150.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
      pFVar10 = pFVar14;
    }
    else {
      (pFVar10->Extension).ComparisonIndex.Value = 1;
      (pFVar10->Extension).Number = 1;
      pFVar10->PackageName =
           (FName)&
                  ___7__TIntrusiveReferenceController_UFDirectoryReadTaskData_Private_AssetDataGather_UE___00_SharedPointerInternals__6B_
      ;
      pFVar11 = Tasks::Private::FTaskEventBase::Create(L"UnblockingDirectoryReadTaskEvent");
      (pFVar10->AssetFileData).LocalAbsPath.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFVar11;
      pFVar18 = &pFVar10->AssetFileData;
      (pFVar10->AssetFileData).LocalAbsPath.Data.ArrayNum = 0;
      (pFVar10->AssetFileData).LocalAbsPath.Data.ArrayMax = 0;
      *(undefined4 *)&(pFVar10->AssetFileData).LongPackageName.Data.AllocatorInstance.Data = 0;
      *(undefined1 *)
       ((longlong)&(pFVar10->AssetFileData).LongPackageName.Data.AllocatorInstance.Data + 4) = 0;
      if ((pFVar18 == (FGatheredPathData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      (pFVar10->Extension).ComparisonIndex.Value = (pFVar10->Extension).ComparisonIndex.Value + 1;
      UNLOCK();
      FStack_150.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      local_170._24_8_ = pFVar18;
    }
    if (pTVar9 != (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                   *)(local_170 + 0x18)) {
      *(FGatheredPathData **)(pTVar9->Root).Value.Pad = pFVar18;
      local_170._24_8_ = (FGatheredPathData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((pTVar9->Root).Value.Pad + 8),&FStack_150);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_150.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    this = local_148;
  }
  iVar7 = iVar8;
  if (local_170._8_4_ != 0) {
    pwVar17 = (wchar_t *)local_170._0_8_;
    iVar7 = local_170._8_4_ + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar17);
  iVar7 = TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this,uVar6,(FString *)local_170);
  if ((iVar7 == -1) ||
     (lVar16 = *(longlong *)&this->DirectoryReadsToSchedule + (longlong)iVar7 * 0x28, lVar16 == 0))
  {
    local_140.Ptr = (FTreeNode *)local_170;
    TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(int)local_170 + 0x10,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,
               (bool *)&local_140);
    lVar16 = *(longlong *)&this->DirectoryReadsToSchedule + (longlong)(int)local_170._16_4_ * 0x28;
  }
  pFVar10 = ::operator_new(0x158);
  pFVar18 = local_138;
  if (pFVar10 != (FReadContext *)0x0) {
    local_f8.Object = *(FDirectoryReadTaskData **)(pTVar9->Root).Value.Pad;
    local_f8.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((pTVar9->Root).Value.Pad + 8);
    if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_108.DataPtr = (wchar_t *)(local_138->LocalAbsPath).Data.AllocatorInstance.Data;
    iVar7 = (local_138->LocalAbsPath).Data.ArrayNum;
    local_108.Size = iVar7 + -1;
    if (iVar7 == 0) {
      local_108.Size = iVar8;
    }
    pTVar12 = FPathViews::GetExtension(&local_a8,&local_108,false);
    pFVar13 = ::FName::FName(local_e8,(int)*(undefined8 *)&pTVar12->Size,pTVar12->DataPtr,FNAME_Add)
    ;
    pFVar14 = FReadContext::FReadContext(pFVar10,param_1,*pFVar13,pFVar18,&local_f8);
  }
  iVar8 = *(int *)(lVar16 + 0x18);
  if (iVar8 == *(int *)(lVar16 + 0x1c)) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar16 + 0x10),(int *)(lVar16 + 0x1c));
  }
  *(int *)(lVar16 + 0x18) = iVar8 + 1;
  *(FReadContext **)(*(longlong *)(lVar16 + 0x10) + (longlong)iVar8 * 8) = pFVar14;
  if ((FScriptContainerElement *)local_170._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_170._0_8_);
  }
  return;
}

// CollectCompletedReads @ 142aed5b0

/* WARNING: Removing unreachable block (ram,0x000142aed7f7) */
/* WARNING: Removing unreachable block (ram,0x000142aed800) */
/* WARNING: Removing unreachable block (ram,0x000142aed825) */
/* WARNING: Removing unreachable block (ram,0x000142aed826) */
/* WARNING: Removing unreachable block (ram,0x000142aed82f) */
/* WARNING: Removing unreachable block (ram,0x000142aed854) */
/* WARNING: Removing unreachable block (ram,0x000142aed855) */
/* WARNING: Removing unreachable block (ram,0x000142aed862) */
/* WARNING: Removing unreachable block (ram,0x000142aed887) */
/* WARNING: Removing unreachable block (ram,0x000142aed888) */
/* WARNING: Removing unreachable block (ram,0x000142aed891) */
/* WARNING: Removing unreachable block (ram,0x000142aed8b6) */
/* WARNING: Removing unreachable block (ram,0x000142aed8b7) */
/* WARNING: Removing unreachable block (ram,0x000142aed8eb) */
/* WARNING: Removing unreachable block (ram,0x000142aed8f0) */
/* WARNING: Removing unreachable block (ram,0x000142aed902) */
/* WARNING: Removing unreachable block (ram,0x000142aed907) */
/* WARNING: Removing unreachable block (ram,0x000142aed910) */
/* WARNING: Removing unreachable block (ram,0x000142aed915) */
/* WARNING: Removing unreachable block (ram,0x000142aed91e) */
/* WARNING: Removing unreachable block (ram,0x000142aed923) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::CollectCompletedReads
          (FFileReadScheduler *this,
          TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  longlong *plVar2;
  atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
  aVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  void *local_28 [2];
  
  do {
    local_28[0] = (void *)0x0;
    aVar3 = ((this->ReadyReadContexts).Tail)->Next;
    if (aVar3 == (atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
                  )0x0) {
      return;
    }
    pvVar4 = *(void **)((longlong)aVar3 + 8);
    *(undefined8 *)((longlong)aVar3 + 8) = 0;
    FMemory::Free((this->ReadyReadContexts).Tail);
    pvVar7 = local_28[0];
    (this->ReadyReadContexts).Tail = (FNode *)aVar3;
    if (local_28[0] != (void *)0x0) {
      plVar2 = (longlong *)((longlong)local_28[0] + 0x140);
      local_28[0] = pvVar4;
      if (*plVar2 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirectoryReadTaskData.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                           ,0xbf,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(longlong *)((longlong)pvVar7 + 0x140) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)pvVar7 + 0x140) + 0x10) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirectoryReadTaskData->OutstandingReads > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                             ,0xc0,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(longlong *)((longlong)pvVar7 + 0x140) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar1 = (int *)(*(longlong *)((longlong)pvVar7 + 0x140) + 0x10);
      *piVar1 = *piVar1 + -1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar7 + 0x148));
      DestructItems<FString,int>
                (*(FString **)((longlong)pvVar7 + 0x130),*(int *)((longlong)pvVar7 + 0x138));
      if (*(void **)((longlong)pvVar7 + 0x130) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 0x130));
      }
      FPackageDependencyData::~FPackageDependencyData
                ((FPackageDependencyData *)((longlong)pvVar7 + 0x50));
      if (*(void **)((longlong)pvVar7 + 0x40) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 0x40));
      }
      if (*(void **)((longlong)pvVar7 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 0x20));
      }
      if (*(void **)((longlong)pvVar7 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 0x10));
      }
      ::operator_delete(pvVar7,0x158);
      pvVar4 = local_28[0];
    }
    local_28[0] = pvVar4;
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar9;
    }
    param_1->ArrayNum = iVar9 + 1;
    *(void **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_28[0];
  } while( true );
}

// FreeReadTaskLoaders @ 142af91e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::FreeReadTaskLoaders(FFileReadScheduler *this)

{
  FScriptContainerElement *pFVar1;
  FNonBufferingReadOnlyArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  FNonBufferingReadOnlyArchive *local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  local_28 = FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::Pop
                       ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
                        &this->ReadTaskLoaderFreeList);
  FVar7.Data = local_20.Data;
  while( true ) {
    local_20.Data = FVar7.Data;
    if (local_28 == (FNonBufferingReadOnlyArchive *)0x0) {
      iVar5 = (int)local_18;
      pFVar1 = FVar7.Data + (longlong)(int)local_18 * 8;
      local_28 = (FNonBufferingReadOnlyArchive *)0x0;
      while( true ) {
        if ((int)local_18 != iVar5) {
          `TCheckedPointerIterator<FNonBufferingReadOnlyArchive_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar7.Data == pFVar1) break;
        pFVar2 = *(FNonBufferingReadOnlyArchive **)FVar7.Data;
        if (pFVar2 != (FNonBufferingReadOnlyArchive *)0x0) {
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
        FVar7.Data = FVar7.Data + 8;
      }
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
      return;
    }
    if (((FVar7.Data <= (FScriptContainerElement *)&local_28) &&
        (local_18._4_4_ = (int)((ulonglong)local_18 >> 0x20), lVar6 = (longlong)local_18._4_4_,
        (FScriptContainerElement *)&local_28 < FVar7.Data + lVar6 * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = (int)local_18;
    if ((int)local_18 == local_18._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_20,(int *)((longlong)&local_18 + 4));
    }
    local_18 = CONCAT44(local_18._4_4_,iVar5 + 1);
    *(FNonBufferingReadOnlyArchive **)(local_20.Data + (longlong)iVar5 * 8) = local_28;
    local_28 = FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::Pop
                         ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
                          &this->ReadTaskLoaderFreeList);
    FVar7.Data = local_20.Data;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ProcessReadContexts @ 142b0ca10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::ProcessReadContexts
          (FFileReadScheduler *this,
          TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
  aVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  EOpenPackageResult EVar7;
  bool bVar8;
  char cVar9;
  IPlatformFile *pIVar10;
  FPlatformFileManager *this_00;
  FNonBufferingReadOnlyArchive *pFVar11;
  atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
  aVar12;
  int iVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStackY_418 [32];
  EOpenPackageResult local_3e8;
  char local_3e7;
  uint local_3e4;
  FNonBufferingReadOnlyArchive *local_3e0;
  IPlatformFile *local_3d8;
  IPlatformFile *local_3d0;
  LARGE_INTEGER local_3c8;
  LARGE_INTEGER local_3c0;
  wchar_t *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  wchar_t *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  int iStack_390;
  undefined4 uStack_38c;
  wchar_t *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  int iStack_370;
  undefined4 uStack_36c;
  TStringView<wchar_t> local_368;
  TStringView<wchar_t> local_358;
  undefined4 local_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  TStringView<wchar_t> local_338;
  undefined4 local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  FPackageReader local_318;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_418;
  bVar21 = -1 < CpuChannel->Enabled;
  local_3e7 = param_2;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5878,"FAssetDataGatherer::ReadDirectoryAssetFiles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0x16f6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5878);
  }
  pIVar10 = IPlatformFile::GetPlatformPhysical();
  local_3d0 = pIVar10;
  this_00 = FPlatformFileManager::Get();
  local_3d8 = FPlatformFileManager::GetPlatformFile(this_00);
  QueryPerformanceCounter(&local_3c8);
  uVar15 = 0;
  local_3e4 = 0;
  local_3e0 = (FNonBufferingReadOnlyArchive *)0x0;
  dVar5 = (double)local_3c8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((pIVar10 == local_3d8) &&
     (local_3e0 = FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::Pop
                            ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
                             &this->ReadTaskLoaderFreeList),
     local_3e0 == (FNonBufferingReadOnlyArchive *)0x0)) {
    pFVar11 = ::operator_new(0xe0);
    if (pFVar11 == (FNonBufferingReadOnlyArchive *)0x0) {
      local_3e0 = (FNonBufferingReadOnlyArchive *)0x0;
    }
    else {
      local_3e0 = FNonBufferingReadOnlyArchive::FNonBufferingReadOnlyArchive(pFVar11,0x100000,0);
    }
  }
  dVar6 = __real_3ff0000000000000;
  uVar17 = uVar15;
  uVar20 = uVar15;
  pFVar11 = local_3e0;
  if (0 < param_1->ArrayNum) {
    do {
      uVar18 = (uint)uVar20;
      if ((param_2 != false) && (local_3e4 = (int)uVar17 + 1, 0x20 < (int)uVar17)) {
        QueryPerformanceCounter(&local_3c0);
        if (dVar6 <= (double)local_3c0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) {
          iVar13 = param_1->ArrayNum;
          if ((int)uVar18 < iVar13) {
            lVar16 = (longlong)(int)uVar18 * 8;
            do {
              uVar19 = (uint)uVar20;
              uVar18 = 0;
              if ((int)uVar19 < iVar13) {
                uVar18 = ~uVar19 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (param_1->AllocatorInstance).Data;
              *(undefined1 *)(*(longlong *)(pFVar2 + lVar16) + 0x153) = 1;
              aVar12 = (atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
                        )FMemory::Malloc(0x10,8);
              uVar20 = (ulonglong)(uVar19 + 1);
              *(undefined8 *)aVar12 = 0;
              *(undefined8 *)((longlong)aVar12 + 8) = *(undefined8 *)(pFVar2 + lVar16);
              *(undefined8 *)(pFVar2 + lVar16) = 0;
              lVar16 = lVar16 + 8;
              LOCK();
              aVar1 = (this->ReadyReadContexts).Head;
              (this->ReadyReadContexts).Head = aVar12;
              UNLOCK();
              *(atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
                *)aVar1 = aVar12;
              iVar13 = param_1->ArrayNum;
              pFVar11 = local_3e0;
            } while ((int)(uVar19 + 1) < iVar13);
          }
          break;
        }
        local_3e4 = 0;
      }
      uVar19 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      FPackageReader::FPackageReader(&local_318);
      lVar16 = *(longlong *)(pFVar2 + uVar15);
      if (local_3d0 == local_3d8) {
        if (*(int *)(lVar16 + 0x18) == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = *(wchar_t **)(lVar16 + 0x10);
        }
        bVar8 = FNonBufferingReadOnlyArchive::OpenFile(pFVar11,pwVar14);
        if (bVar8) {
          local_388 = *(wchar_t **)(*(longlong *)(pFVar2 + uVar15) + 0x20);
          iVar13 = *(int *)(*(longlong *)(pFVar2 + uVar15) + 0x28);
          iStack_380 = iVar13 + -1;
          if (iVar13 == 0) {
            iStack_380 = 0;
          }
          local_338._12_4_ = uStack_37c;
          local_338.Size = iStack_380;
          local_338.DataPtr = local_388;
          FPackageReader::OpenPackageFile(&local_318,(FArchive *)pFVar11,&local_338,&local_3e8);
          EVar7 = local_3e8;
          if (local_3e8 == Success) {
            lVar16 = *(longlong *)(pFVar2 + uVar15);
            bVar8 = FAssetDataGatherer::ReadAssetFile
                              (&local_318,
                               (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(lVar16 + 0x40),
                               (FPackageDependencyData *)(lVar16 + 0x50),
                               (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar16 + 0x130),
                               -(uint)(this->bGatherDependsData != false) & Dependencies |
                               (uint)(this->bGatherAssetPackageData != false));
            *(bool *)(*(longlong *)(pFVar2 + uVar15) + 0x152) = bVar8;
          }
          else {
            bVar8 = IsEngineStartupModuleLoadingComplete();
            if (EVar7 == CustomVersionMissing) {
              *(bool *)(*(longlong *)(pFVar2 + uVar15) + 0x151) = !bVar8;
              if ((bVar8) && (3 < (byte)LogAssetRegistry._0_1_)) {
                Logging::Private::BasicLog<4>
                          ((FStaticBasicLogRecord *)&PTR_u_Package__s_uses_1509924d0,
                           (FLogCategoryBase *)&LogAssetRegistry);
                *(undefined1 *)(*(longlong *)(pFVar2 + uVar15) + 0x152) = 0;
                goto LAB_142b0cf36;
              }
            }
            else {
              *(undefined1 *)(*(longlong *)(pFVar2 + uVar15) + 0x151) = 0;
            }
            *(undefined1 *)(*(longlong *)(pFVar2 + uVar15) + 0x152) = 0;
          }
LAB_142b0cf36:
          if ((*(char *)(*(longlong *)(pFVar2 + uVar15) + 0x152) != '\0') &&
             (bBlockPackagesWithMarkOfTheWeb != false)) {
            pIVar10 = IPlatformFile::GetPlatformPhysical();
            uVar3 = *(undefined8 *)(*(longlong *)(pFVar2 + uVar15) + 0x10);
            iVar13 = *(int *)(*(longlong *)(pFVar2 + uVar15) + 0x18);
            iStack_370 = iVar13 + -1;
            if (iVar13 == 0) {
              iStack_370 = 0;
            }
            local_378._0_4_ = (undefined4)uVar3;
            local_378._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_328 = (undefined4)local_378;
            uStack_324 = local_378._4_4_;
            uStack_31c = uStack_36c;
            local_378 = uVar3;
            iStack_320 = iStack_370;
            cVar9 = (**(code **)((longlong)*pIVar10 + 0xd8))(pIVar10,&local_328,0);
            *(char *)(*(longlong *)(pFVar2 + uVar15) + 0x150) = (cVar9 != '\0') + '\x01';
          }
          pFVar11 = local_3e0;
          FNonBufferingReadOnlyArchive::Close(local_3e0);
        }
        else {
          if (2 < (byte)LogAssetRegistry._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
          *(undefined1 *)(*(longlong *)(pFVar2 + uVar15) + 0x152) = 0;
        }
      }
      else {
        local_3b8 = *(wchar_t **)(lVar16 + 0x10);
        iStack_3b0 = *(int *)(lVar16 + 0x18) + -1;
        local_3a8 = *(wchar_t **)(lVar16 + 0x20);
        if (*(int *)(lVar16 + 0x18) == 0) {
          iStack_3b0 = 0;
        }
        local_368._12_4_ = uStack_3ac;
        local_368.Size = iStack_3b0;
        iStack_3a0 = *(int *)(lVar16 + 0x28) + -1;
        if (*(int *)(lVar16 + 0x28) == 0) {
          iStack_3a0 = 0;
        }
        local_358._12_4_ = uStack_39c;
        local_358.Size = iStack_3a0;
        local_368.DataPtr = local_3b8;
        local_358.DataPtr = local_3a8;
        FPackageReader::OpenPackageFile(&local_318,&local_358,&local_368,&local_3e8);
        EVar7 = local_3e8;
        if (local_3e8 == Success) {
          lVar16 = *(longlong *)(pFVar2 + uVar15);
          bVar8 = FAssetDataGatherer::ReadAssetFile
                            (&local_318,
                             (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(lVar16 + 0x40),
                             (FPackageDependencyData *)(lVar16 + 0x50),
                             (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar16 + 0x130),
                             -(uint)(this->bGatherDependsData != false) & Dependencies |
                             (uint)(this->bGatherAssetPackageData != false));
          *(bool *)(*(longlong *)(pFVar2 + uVar15) + 0x152) = bVar8;
        }
        else {
          bVar8 = IsEngineStartupModuleLoadingComplete();
          if (EVar7 == CustomVersionMissing) {
            *(bool *)(*(longlong *)(pFVar2 + uVar15) + 0x151) = !bVar8;
            if ((bVar8) && (3 < (byte)LogAssetRegistry._0_1_)) {
              Logging::Private::BasicLog<4>
                        ((FStaticBasicLogRecord *)&PTR_u_Package__s_uses_1509924d0,
                         (FLogCategoryBase *)&LogAssetRegistry);
              *(undefined1 *)(*(longlong *)(pFVar2 + uVar15) + 0x152) = 0;
              goto LAB_142b0cd47;
            }
          }
          else {
            *(undefined1 *)(*(longlong *)(pFVar2 + uVar15) + 0x151) = 0;
          }
          *(undefined1 *)(*(longlong *)(pFVar2 + uVar15) + 0x152) = 0;
        }
LAB_142b0cd47:
        pFVar11 = local_3e0;
        if ((*(char *)(*(longlong *)(pFVar2 + uVar15) + 0x152) != '\0') &&
           (bBlockPackagesWithMarkOfTheWeb != false)) {
          pIVar10 = IPlatformFile::GetPlatformPhysical();
          uVar3 = *(undefined8 *)(*(longlong *)(pFVar2 + uVar15) + 0x10);
          iVar13 = *(int *)(*(longlong *)(pFVar2 + uVar15) + 0x18);
          iStack_390 = iVar13 + -1;
          if (iVar13 == 0) {
            iStack_390 = 0;
          }
          local_398._0_4_ = (undefined4)uVar3;
          local_398._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_348 = (undefined4)local_398;
          uStack_344 = local_398._4_4_;
          uStack_33c = uStack_38c;
          local_398 = uVar3;
          iStack_340 = iStack_390;
          cVar9 = (**(code **)((longlong)*pIVar10 + 0xd8))(pIVar10,&local_348,0);
          *(char *)(*(longlong *)(pFVar2 + uVar15) + 0x150) = (cVar9 != '\0') + '\x01';
          pFVar11 = local_3e0;
        }
      }
      aVar12 = (atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
                )FMemory::Malloc(0x10,8);
      *(undefined8 *)aVar12 = 0;
      *(undefined8 *)((longlong)aVar12 + 8) = *(undefined8 *)(pFVar2 + uVar15);
      *(undefined8 *)(pFVar2 + uVar15) = 0;
      LOCK();
      aVar1 = (this->ReadyReadContexts).Head;
      (this->ReadyReadContexts).Head = aVar12;
      UNLOCK();
      *(atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
        *)aVar1 = aVar12;
      FPackageReader::~FPackageReader(&local_318);
      uVar15 = uVar15 + 8;
      if (param_1->ArrayNum <= (int)(uVar18 + 1)) break;
      uVar17 = (ulonglong)local_3e4;
      uVar20 = (ulonglong)(uVar18 + 1);
      param_2 = (bool)local_3e7;
    } while( true );
  }
  if (local_3d0 == local_3d8) {
    FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::Push
              ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
               &this->ReadTaskLoaderFreeList,pFVar11);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveScheduledDirectory @ 142b16960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::RemoveScheduledDirectory
          (FFileReadScheduler *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_b8 [32];
  bool local_98 [16];
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = (param_1->Data).AllocatorInstance.Data;
  this_00 = (this->ScheduledDirectories).Ptr;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_80 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_80 = 0;
  }
  local_78._12_4_ = uStack_7c;
  local_78.Size = iStack_80;
  local_78.DataPtr = (wchar_t *)local_88;
  if (iStack_80 == 0) {
    uVar2 = (this_00->Root).NumChildNodesAndFlags;
    local_98[0] = (bool)-(char)((int)uVar2 >> 0x1f);
    if (local_98[0] != false) {
      (this_00->Root).NumChildNodesAndFlags = uVar2 & 0x7fffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((this_00->Root).Value.Pad + 8));
    }
  }
  else {
    local_58.Base = local_38;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    local_58.CurPos = local_38;
    local_58.End = (wchar_t *)local_18;
    TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
    NormalizePathForReading(this_00,&local_78,&local_58);
    local_68.DataPtr = local_78.DataPtr;
    local_68.Size = local_78.Size;
    local_68._12_4_ = local_78._12_4_;
    TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
    Remove(&this_00->Root,&local_68,local_98);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  if (local_98[0] != false) {
    if (this_00->NumPaths < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPaths > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x205,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00->NumPaths = this_00->NumPaths + -1;
  }
  return;
}

// Schedule @ 142b1c5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::Schedule
          (FFileReadScheduler *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FString *pFVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_00;
  longlong lVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 auStack_188 [32];
  undefined1 local_158 [4];
  uint local_154;
  TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
  local_150;
  TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
  local_140;
  TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
  local_130;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_f0;
  FFileReadScheduler *local_e8;
  char local_e0;
  char local_df;
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_80;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [16];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  local_154 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_154;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar12 + uVar9 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar9) {
      local_158[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_158);
    }
    if (pFVar12 == pFVar14) {
      TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_a8,
                 (TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this);
      local_118 = (longlong *)local_a8._0_8_;
      auStack_110._0_8_ = local_a8._8_8_;
      stack0xfffffffffffffef8 = local_a8._16_16_;
      local_f8 = local_88;
      pTStack_f0 = pTStack_80;
      local_df = '\0';
      uVar9 = local_a8._24_8_ >> 0x20;
      local_e8 = this;
      if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
        do {
          lVar10 = (longlong)(int)uVar9;
          lVar3 = *local_118;
          local_130.AllocatorInstance.Data =
               *(FScriptContainerElement **)(lVar3 + 0x10 + lVar10 * 0x28);
          *(undefined8 *)(lVar3 + 0x10 + lVar10 * 0x28) = 0;
          local_130.ArrayNum = *(int *)(lVar3 + 0x18 + lVar10 * 0x28);
          pFVar2 = (FString *)(lVar3 + lVar10 * 0x28);
          local_130.ArrayMax = pFVar2[1].Data.ArrayMax;
          pFVar2[1].Data.ArrayNum = 0;
          pFVar2[1].Data.ArrayMax = 0;
          ScheduleDirectory(this,&this->ReadConcurrencyLimiter,pFVar2,&local_130,false);
          TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_f0,(int)uVar9);
          FVar13.Data = local_130.AllocatorInstance.Data;
          local_e0 = '\x01';
          DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
                    ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                      *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
          }
          uStack_100 = uStack_100 & ~auStack_110._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
          uVar9 = (ulonglong)uStack_fc;
        } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
        if ((local_e0 != '\0') && (local_df != '\0')) {
          uVar7 = *(int *)&(local_e8->DirectoryReadsToSchedule).field_0x8 -
                  *(int *)&(local_e8->DirectoryReadsToSchedule).field_0x34;
          if (uVar7 < 4) {
            iVar8 = 1;
          }
          else {
            uVar9 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar9 != 0) {
              for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            local_154 = (uint)lVar3;
            iVar8 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar7) &&
              (*(int *)&(local_e8->DirectoryReadsToSchedule).field_0x48 < iVar8)) ||
             (iVar8 < *(int *)&(local_e8->DirectoryReadsToSchedule).field_0x48)) {
            *(int *)&(local_e8->DirectoryReadsToSchedule).field_0x48 = iVar8;
            TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_e8);
          }
        }
      }
      if ((*(int *)&(this->DirectoryReadsToSchedule).field_0x8 !=
           *(int *)&(this->DirectoryReadsToSchedule).field_0x34) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirectoryReadsToSchedule.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x1800,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      return;
    }
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar8 = 0;
    iVar15 = 0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    if (*(int *)(pFVar12 + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)&pFVar12->field_0x0;
      iVar8 = *(int *)(pFVar12 + 8) + -1;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
    iVar8 = TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this,uVar7,(FString *)pFVar12);
    if (iVar8 == -1) {
      local_d8 = *(wchar_t **)&pFVar12->field_0x0;
      this_00 = (this->ScheduledDirectories).Ptr;
      iStack_d0 = *(int *)(pFVar12 + 8) + -1;
      if (*(int *)(pFVar12 + 8) == 0) {
        iStack_d0 = 0;
      }
      local_c8._12_4_ = uStack_cc;
      local_c8.Size = iStack_d0;
      FVar13.Data = (FScriptContainerElement *)0x0;
      local_c8.DataPtr = local_d8;
      if (iStack_d0 == 0) {
        iVar8 = 0;
        if (-1 < (int)(this_00->Root).NumChildNodesAndFlags) goto LAB_142b1c7c2;
      }
      else {
        local_78.Base = local_58;
        local_78.bIsDynamic = false;
        local_78.bIsExternal = false;
        local_78.CurPos = local_58;
        local_78.End = (wchar_t *)local_38;
        TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
        NormalizePathForReading(this_00,&local_c8,&local_78);
        local_b8.DataPtr = local_c8.DataPtr;
        local_b8.Size = local_c8.Size;
        local_b8._12_4_ = local_c8._12_4_;
        this_00 = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                   *)TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                     ::FTreeNode::Find(&this_00->Root,&local_b8);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
      }
      iVar8 = iVar15;
      if (this_00 !=
          (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)0x0
         ) {
        local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.ArrayNum = 0;
        local_140.ArrayMax = 0;
        ScheduleDirectory(this,&this->ReadConcurrencyLimiter,(FString *)pFVar12,&local_140,true);
        FVar5.Data = local_140.AllocatorInstance.Data;
        DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
                  ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                    *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
        FVar13.Data = (FScriptContainerElement *)0x0;
        if (FVar5.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar5.Data);
        }
      }
    }
    else {
      pTVar1 = (TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
                *)(*(longlong *)&this->DirectoryReadsToSchedule + ((longlong)iVar8 * 5 + 2) * 8);
      if (&local_150 != pTVar1) {
        DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
                  ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                    *)0x0,0);
        local_150.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_150.ArrayNum = pTVar1->ArrayNum;
        local_150.ArrayMax = pTVar1->ArrayMax;
        pTVar1->ArrayNum = 0;
        pTVar1->ArrayMax = 0;
      }
      TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       *)this,iVar8);
      ScheduleDirectory(this,&this->ReadConcurrencyLimiter,(FString *)pFVar12,&local_150,true);
      FVar13.Data = local_150.AllocatorInstance.Data;
      iVar8 = local_150.ArrayNum;
    }
LAB_142b1c7c2:
    DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
              ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                *)FVar13.Data,iVar8);
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
    uVar9 = (ulonglong)local_154;
    pFVar12 = pFVar12 + 0x10;
  } while( true );
}

// ScheduleDirectory @ 142b1c9c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "ETaskFlags": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory
          (FFileReadScheduler *this,FTaskConcurrencyLimiter *param_1,FString *param_2,
          TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
          *param_3,bool param_4)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FTaskBase *pFVar5;
  FTaskEvent FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDirectoryReadTaskData *pFVar8;
  FPimpl *this_00;
  TReferenceControllerBase<1> *pTVar9;
  FTask *this_01;
  code *pcVar10;
  bool bVar11;
  TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *pTVar12;
  FTaskBase *this_02;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar13;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *pTVar14;
  FTaskBase *pFVar15;
  FTaskBase *this_03;
  int iVar16;
  FTaskBase *pFVar17;
  FDirectoryReadTaskData *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FTaskBase *local_b8;
  FPimpl *local_b0;
  FPimpl *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FTask *local_98;
  TReferenceControllerBase<1> *local_90;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295> local_78;
  TStringView<wchar_t> local_68;
  TSharedRef<LowLevelTasks::FTask,1> local_58;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> local_48;
  
  local_88 = (param_2->Data).AllocatorInstance.Data;
  pFVar15 = (FTaskBase *)0x0;
  iVar4 = (param_2->Data).ArrayNum;
  iStack_80 = iVar4 + -1;
  if (iVar4 == 0) {
    iStack_80 = 0;
  }
  local_68._12_4_ = uStack_7c;
  local_68.Size = iStack_80;
  local_68.DataPtr = (wchar_t *)local_88;
  pTVar12 = TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
            Find((this->ScheduledDirectories).Ptr,&local_68);
  if (pTVar12 != (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)0x0) {
    if ((pTVar12->Object == (FDirectoryReadTaskData *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("DirectoryReadTaskData->IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                            ,0x177a,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((pTVar12->Object == (FDirectoryReadTaskData *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar5 = (pTVar12->Object->LastScheduledReadTask).Pimpl.Reference;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
      UNLOCK();
    }
    this_03 = pFVar15;
    if (param_3->ArrayNum != 0) {
      if ((pTVar12->Object == (FDirectoryReadTaskData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar17 = (FTaskBase *)(param_3->AllocatorInstance).Data;
      local_78.Elements[1] = *(FTaskBase **)&pTVar12->Object->UnblockRead;
      (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar4 = param_3->ArrayMax;
      iVar16 = param_3->ArrayNum;
      param_3->ArrayNum = 0;
      param_3->ArrayMax = 0;
      local_78.Elements[0] = pFVar5;
      this_02 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&Tasks::Private::SmallTaskAllocator);
      if (this_02 != (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::FTaskBase(this_02,2,true);
        this_02->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::`15'::<lambda_1>,void,void>
              ::_vftable_;
        Tasks::Private::FTaskBase::Init
                  (this_02,L"ReadDirectoryAssetFiles",!param_4 + BackgroundNormal,None,None);
        this_02[1]._padding_ = (longlong)this;
        this_02[1]._padding_ = (longlong)pFVar17;
        *(int *)((longlong)&this_02[1]._padding_ + 4) = iVar4;
        *(int *)&this_02[1]._padding_ = iVar16;
        this_02->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::`15'::<lambda_1>_>
              ::_vftable_;
        this_03 = this_02;
        pFVar17 = pFVar15;
        iVar16 = 0;
      }
      Tasks::Private::FTaskBase::
      AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,2,4294967295>,0>
                (this_03,&local_78,true);
      Tasks::Private::FTaskBase::TryLaunch(this_03,0x100);
      DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
                ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                  *)pFVar17,iVar16);
      if (pFVar17 != (FTaskBase *)0x0) {
        FMemory::Free(pFVar17);
      }
      if ((pTVar12->Object == (FDirectoryReadTaskData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar15 = (pTVar12->Object->LastScheduledReadTask).Pimpl.Reference;
      if (pFVar15 != this_03) {
        (pTVar12->Object->LastScheduledReadTask).Pimpl.Reference = this_03;
        if (this_03 != (FTaskBase *)0x0) {
          LOCK();
          this_03->RefCount = (atomic<unsigned_int>)((int)this_03->RefCount + 1);
          UNLOCK();
        }
        if (pFVar15 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &pFVar15->RefCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar15->_padding_)(pFVar15,1);
          }
        }
      }
    }
    if (param_4) {
      if ((pTVar12->Object == (FDirectoryReadTaskData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar6 = pTVar12->Object->UnblockRead;
      if ((FVar6 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar6 + 0xd0) == '\0')) {
        FVar6 = pTVar12->Object->UnblockRead;
        LOCK();
        aVar2 = *(atomic<bool> *)((longlong)FVar6 + 0x45);
        *(atomic<bool> *)((longlong)FVar6 + 0x45) = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar2 == (atomic<bool>)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) =
               (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) + 1);
          UNLOCK();
          Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar6,0xd8);
        }
      }
    }
    else if (this_03 != (FTaskBase *)0x0) {
      pTVar7 = (pTVar12->SharedReferenceCount).ReferenceController;
      pFVar8 = pTVar12->Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      LOCK();
      this_03->RefCount = (atomic<unsigned_int>)((int)this_03->RefCount + 1);
      UNLOCK();
      this_00 = (param_1->Pimpl).Object;
      pTVar13 = MakeShared<LowLevelTasks::FTask,1>(&local_58);
      pTVar9 = (pTVar13->SharedReferenceCount).ReferenceController;
      this_01 = pTVar13->Object;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if ((this_01 == (FTask *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar14 = TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::AsShared
                          ((TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *)
                           this_00,&local_48);
      local_a8 = pTVar14->Object;
      local_a0 = (pTVar14->SharedReferenceCount).ReferenceController;
      if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8 = pFVar8;
      local_c0 = pTVar7;
      local_b8 = this_03;
      local_b0 = this_00;
      local_98 = this_01;
      local_90 = pTVar9;
      LowLevelTasks::FTask::
      Init<_UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<_UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory_::__l22::<lambda_2>_>_::__l2::<lambda_1>_>
                (this_01,L"TriggerReadDirectoryAssetFiles",this_00->TaskPriority,
                 (<lambda_1> *)&local_c8,AllowEverything);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
      if (local_b8 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &local_b8->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)local_b8->_padding_)(local_b8,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      Tasks::TaskConcurrencyLimiter_Private::FPimpl::AddWorkItem(this_00,this_01);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar5->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    if (this_03 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &this_03->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_03->_padding_)(this_03,1);
      }
    }
  }
  return;
}

// Shrink @ 142b21cc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::AssetDataGather::Private::FFileReadScheduler::Shrink(FFileReadScheduler *this)

{
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
  Shrink(&((this->ScheduledDirectories).Ptr)->Root);
  return;
}

// WaitOnDirectoriesAndUpdateWaitList @ 142b2deb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "ETaskFlags": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList
          (FFileReadScheduler *this,
          TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
          *param_1)

{
  TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined1 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMoviePipelinePanoramicBlenderBase *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FTask *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  FPimpl *this_01;
  longlong *plVar8;
  bool bVar9;
  void *pvVar10;
  FString *pFVar11;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *pTVar12;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar13;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *pTVar14;
  TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
  *pTVar15;
  byte bVar16;
  float fVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulong64 uVar20;
  wchar_t *pwVar21;
  float fVar22;
  double *pdVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ForAnyElementType FVar27;
  int iVar28;
  undefined1 *puVar29;
  ForElementType<unsigned_int> FVar30;
  uint *puVar31;
  FScriptContainerElement *pFVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  FFileReadScheduler *this_02;
  uint uVar34;
  int iVar35;
  bool bVar36;
  undefined1 auStackY_10b8 [32];
  undefined1 local_1087;
  undefined1 local_1086;
  undefined1 local_1085;
  uint local_1084;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1080;
  TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
  local_1070;
  FFileReadScheduler *local_1060;
  FString local_1058;
  undefined1 local_1048;
  FString local_1040;
  undefined1 local_1030;
  TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
  *local_1028;
  FString local_1020;
  FTaskConcurrencyLimiter local_1010;
  TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
  *local_1000;
  int iStack_ff8;
  uint uStack_ff4;
  undefined1 *local_ff0;
  undefined4 uStack_fe8;
  int iStack_fe4;
  int local_fe0;
  undefined4 uStack_fdc;
  int iStack_fd8;
  undefined4 uStack_fd4;
  int local_fd0;
  int local_fcc;
  undefined1 local_fc8 [16];
  TBitArray<FDefaultBitArrayAllocator> *local_fb8;
  longlong *local_fb0;
  uint uStack_fa8;
  uint uStack_fa4;
  TBitArray<FDefaultBitArrayAllocator> *local_fa0;
  undefined4 uStack_f98;
  uint uStack_f94;
  uint local_f90;
  int iStack_f8c;
  int iStack_f88;
  undefined4 uStack_f84;
  TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
  *local_f80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f78;
  undefined8 uStack_f58;
  longlong *local_f50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f48;
  undefined8 uStack_f28;
  undefined1 local_f20 [96];
  double dStack_ec0;
  FScriptContainerElement *local_eb8;
  float fStack_eb0;
  float fStack_eac;
  undefined1 local_ea8 [16];
  TVector<double>_u_0 local_e98;
  undefined1 local_e80 [24];
  TSharedRef<LowLevelTasks::FTask,1> local_e68;
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> local_e58;
  FString local_e48;
  undefined1 local_e38 [16];
  FString local_e28 [2];
  undefined4 local_dfc;
  undefined1 local_df8 [16];
  TBitArray<FDefaultBitArrayAllocator> local_de8;
  undefined4 local_dc8;
  int local_dc4;
  ForElementType<FSetElementId> local_db8;
  int local_db0;
  undefined1 local_da8 [32];
  undefined8 local_d88;
  undefined4 local_d80;
  undefined4 local_d7c;
  undefined4 local_d78;
  undefined4 local_d74;
  ForElementType<FSetElementId> local_d68;
  int local_d60;
  TStringBuilderBase<wchar_t> local_d58;
  wchar_t local_d38 [16];
  TStringBuilderBase<wchar_t> local_d18;
  wchar_t local_cf8 [16];
  TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
  local_cd8;
  TStringBuilderBase<wchar_t> local_c88;
  wchar_t local_c68 [512];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_10b8;
  if (*(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34) {
    return;
  }
  bVar36 = -1 < CpuChannel->Enabled;
  local_1060 = this;
  local_1028 = param_1;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6059,
               "FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0x17ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6059);
  }
  local_de8.MaxBits = 0x80;
  local_df8._0_8_ = 0;
  local_df8._8_8_ = 0;
  local_de8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  iVar28 = 0;
  local_de8.NumBits = 0;
  local_dc4 = 0;
  local_db8 = (ForElementType<FSetElementId>)0x0;
  local_db0 = 0;
  local_dc8 = 0xffffffff;
  TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
  ::operator=((TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
               *)local_df8,param_1);
  iVar26 = *(int *)&(param_1->Elements).field_0x28;
  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uStack_ff4 = 1;
  local_fe0 = 0;
  iStack_fe4 = local_fe0;
  if (iVar26 != 0) {
    puVar31 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)pTVar33;
    }
    uVar24 = *puVar31;
    local_fe0 = 0;
    iVar28 = 0;
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar28;
      local_fe0 = local_fe0 + 0x20;
      iVar28 = iVar28 + 1;
      iStack_fe4 = iVar26;
      if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_142b2e03e;
      uVar24 = puVar31[lVar18 + 1];
    }
    uStack_ff4 = -uVar24 & uVar24;
    uVar19 = (ulonglong)uStack_ff4 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_fd0 = (int)lVar18;
    iStack_fe4 = local_fd0 + -1 + local_fe0;
    if (iVar26 < iStack_fe4) {
      iStack_fe4 = iVar26;
    }
  }
LAB_142b2e03e:
  uVar24 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_fdc = local_dfc;
  iStack_fd8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar34 = uVar24 & 0xffffffe0;
  uStack_fe8 = 0xffffffff;
  TStack_f78._padding_ = CONCAT44(uStack_ff4,iVar28);
  TStack_f78.CurrentBitIndex = iStack_fe4;
  TStack_f78.UnvisitedBitMask = 0xffffffff;
  iVar26 = (int)uVar24 >> 5;
  TStack_f78._28_4_ = local_dfc;
  TStack_f78.BaseBitIndex = local_fe0;
  uStack_f58 = CONCAT44(uStack_fd4,iStack_fd8);
  local_1084 = uVar24;
  local_1000 = param_1;
  iStack_ff8 = iVar28;
  local_ff0 = (undefined1 *)pTVar33;
  local_fb8 = pTVar33;
  local_f80 = param_1;
  TStack_f78.Array = pTVar33;
  if (((int)uVar24 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar25 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar24 != uVar25) {
    puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
    puVar29 = (undefined1 *)pTVar33;
    if (puVar2 != (undefined1 *)0x0) {
      puVar29 = puVar2;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar26 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar26;
      uVar34 = uVar34 + 0x20;
      iVar26 = iVar26 + 1;
      uVar24 = uVar25;
      local_1084 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
      goto LAB_142b2e160;
      uVar24 = *(uint *)(puVar29 + lVar18 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_fcc = (int)lVar18;
    uVar24 = local_fcc + -1 + uVar34;
    local_1084 = uVar24;
    if ((int)uVar25 < (int)uVar24) {
      uVar24 = uVar25;
      local_1084 = uVar25;
    }
  }
LAB_142b2e160:
  do {
    pTVar15 = local_f80;
    if (*(int *)&(local_f80->Elements).field_0x8 - *(int *)&(local_f80->Elements).field_0x34 !=
        (int)uStack_f58) {
      local_1087 = 0;
      `TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1087);
    }
    this_02 = local_1060;
    if (((TStack_f78.CurrentBitIndex == uVar24) && (TStack_f78.Array == pTVar33)) &&
       (pTVar15 == local_1028)) break;
    pdVar23 = (double *)
              ((longlong)TStack_f78.CurrentBitIndex * 0x20 + *(longlong *)&pTVar15->Elements);
    if (*(char *)(pdVar23 + 2) != '\0') {
      local_f20._72_8_ = *pdVar23;
      pTVar12 = (this->ScheduledDirectories).Ptr;
      local_1080.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1080.ArrayNum = 0;
      local_1080.ArrayMax = 0;
      local_d58.bIsDynamic = false;
      local_d58.bIsExternal = false;
      local_f20._80_4_ = *(int *)(pdVar23 + 1) + -1;
      if (*(int *)(pdVar23 + 1) == 0) {
        local_f20._80_4_ = 0;
      }
      local_d58.Base = local_d38;
      local_d58.CurPos = local_d38;
      dStack_ec0 = (double)CONCAT44(local_f20._84_4_,local_f20._80_4_);
      local_d58.End = (wchar_t *)&local_d18;
      local_f20._88_8_ = local_f20._72_8_;
      TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
      NormalizePathForReading(pTVar12,(TStringView<wchar_t> *)(local_f20 + 0x58),&local_d58);
      local_868.Base = local_848;
      local_868.CurPos = local_848;
      local_868.End = (wchar_t *)local_48;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      local_e38._0_8_ = local_f20._88_8_;
      local_e38._8_8_ = dStack_ec0;
      bVar9 = TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
              FTreeNode::TryGetChildren
                        (&pTVar12->Root,&local_868,pTVar12->PathSeparator,
                         (TStringView<wchar_t> *)local_e38,&local_1080,ImpliedParent|Recursive);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d58);
      if (bVar9) {
        iVar26 = local_1080.ArrayNum;
        uVar19 = (ulonglong)local_1080.ArrayNum;
        iVar28 = 0;
        if (local_1080.ArrayNum != 0) {
          local_c88.Base = local_c68;
          local_c88.CurPos = local_c68;
          local_c88.End = (wchar_t *)&local_868;
          local_c88.bIsDynamic = false;
          local_c88.bIsExternal = false;
          pFVar32 = local_1080.AllocatorInstance.Data + uVar19 * 0x10;
          FVar27.Data = local_1080.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar19 != iVar26) {
              local_1086 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_1086);
            }
            if (FVar27.Data == pFVar32) break;
            local_c88.CurPos = local_c88.Base;
            local_e98._s_0.X = *pdVar23;
            local_e98._s_0.Z = (double)*(undefined8 *)FVar27.Data;
            iVar28 = 0;
            local_e98._8_4_ = *(int *)(pdVar23 + 1) + -1;
            if (*(int *)(pdVar23 + 1) == 0) {
              local_e98._8_4_ = iVar28;
            }
            local_e80._0_4_ = *(int *)(FVar27.Data + 8) + -1;
            if (*(int *)(FVar27.Data + 8) == 0) {
              local_e80._0_4_ = iVar28;
            }
            FPaths::CombineInternal(&local_1020,(TStringView<wchar_t> *)&local_e98._s_0,2);
            FVar7.Data = local_1020.Data.AllocatorInstance.Data;
            iVar35 = local_1020.Data.ArrayNum + -1;
            if (local_1020.Data.ArrayNum == 0) {
              iVar35 = iVar28;
            }
            uVar20 = (ulong64)iVar35;
            if (local_c88.End < (TStringBuilderBase<wchar_t> *)(local_c88.CurPos + uVar20)) {
              TStringBuilderBase<wchar_t>::Extend(&local_c88,uVar20);
            }
            if (iVar35 != 0) {
              pvVar10 = FGenericPlatformString::Memcpy(local_c88.CurPos,FVar7.Data,uVar20 * 2);
              local_c88.CurPos = (wchar_t *)((longlong)pvVar10 + uVar20 * 2);
            }
            if (local_1020.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1020.Data.AllocatorInstance.Data);
            }
            local_1058.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1058.Data.ArrayNum = 0;
            local_1058.Data.ArrayMax = 0;
            pFVar11 = ::FString::ConstructFromPtrSize
                                (local_e28,local_c88.Base,
                                 (int)((longlong)local_c88.CurPos - (longlong)local_c88.Base >> 1));
            if (&local_1058 != pFVar11) {
              local_1058.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
              (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1058.Data.ArrayNum = (pFVar11->Data).ArrayNum;
              local_1058.Data.ArrayMax = (pFVar11->Data).ArrayMax;
              (pFVar11->Data).ArrayNum = 0;
              (pFVar11->Data).ArrayMax = 0;
            }
            if (local_e28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e28[0].Data.AllocatorInstance.Data);
            }
            local_1048 = 0;
            TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
            ::Emplace<UE::AssetDataGather::Private::FWaitBatchDirectory>
                      ((TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                        *)local_df8,(FWaitBatchDirectory *)local_fc8,(bool *)&local_1058);
            if (local_1058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1058.Data.AllocatorInstance.Data);
            }
            uVar19 = local_1080._8_8_ & 0xffffffff;
            FVar27.Data = FVar27.Data + 0x10;
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c88);
          this = local_1060;
          pTVar33 = local_fb8;
          uVar24 = local_1084;
          goto LAB_142b2e4b7;
        }
      }
      else {
LAB_142b2e4b7:
        iVar28 = local_1080.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_1080.AllocatorInstance.Data,iVar28);
      if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1080.AllocatorInstance.Data);
      }
    }
    TStack_f78.UnvisitedBitMask = TStack_f78.UnvisitedBitMask & ~TStack_f78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f78);
  } while( true );
  uVar24 = 0;
  local_d7c = 0x80;
  local_da8._0_8_ = (FTask *)0x0;
  local_da8._8_8_ = (TReferenceControllerBase<1> *)0x0;
  local_d88 = 0;
  local_d80 = 0;
  local_d78 = 0xffffffff;
  local_d74 = 0;
  local_d68 = (ForElementType<FSetElementId>)0x0;
  local_d60 = 0;
  Tasks::FTaskConcurrencyLimiter::FTaskConcurrencyLimiter
            (&local_1010,local_1060->NumReadTaskThreads,BackgroundHigh);
  uVar34 = local_de8.NumBits;
  uStack_fa4 = 1;
  uStack_f94 = uVar24;
  local_f90 = uVar24;
  if (local_de8.NumBits != 0) {
    FVar30 = (ForElementType<unsigned_int>)&local_de8;
    if (local_de8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_de8.AllocatorInstance.SecondaryData;
    }
    uVar25 = *(uint *)FVar30;
    while (uVar25 == 0) {
      lVar18 = (longlong)(int)uVar24;
      local_f90 = local_f90 + 0x20;
      uVar24 = uVar24 + 1;
      uStack_f94 = local_de8.NumBits;
      if ((int)((local_de8.NumBits - 1U) + ((int)(local_de8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          (int)uVar24) goto LAB_142b2e5d0;
      uVar25 = *(uint *)((longlong)FVar30 + (lVar18 + 1) * 4);
    }
    uStack_fa4 = -uVar25 & uVar25;
    uVar19 = (ulonglong)uStack_fa4 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_fc8._4_4_ = (undefined4)lVar18;
    uStack_f94 = (local_f90 - 1) + local_fc8._4_4_;
    if (local_de8.NumBits < (int)uStack_f94) {
      uStack_f94 = local_de8.NumBits;
    }
  }
LAB_142b2e5d0:
  local_fb0 = (longlong *)local_df8;
  iStack_f8c = iStack_fe4;
  local_fa0 = &local_de8;
  uVar25 = local_de8.NumBits & 0xffffffe0;
  iStack_f88 = local_df8._8_4_ - local_dc4;
  uStack_f98 = 0xffffffff;
  TStack_f48.CurrentBitIndex = uStack_f94;
  TStack_f48.UnvisitedBitMask = 0xffffffff;
  TStack_f48._padding_ = CONCAT44(uStack_fa4,uVar24);
  iVar26 = local_de8.NumBits >> 5;
  TStack_f48._28_4_ = iStack_fe4;
  TStack_f48.BaseBitIndex = local_f90;
  uStack_f28 = CONCAT44(uStack_f84,iStack_f88);
  bVar16 = (byte)local_de8.NumBits;
  local_1084 = local_de8.NumBits;
  uStack_fa8 = uVar24;
  local_f50 = local_fb0;
  TStack_f48.Array = local_fa0;
  if ((local_de8.NumBits < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar34 != local_de8.NumBits) {
    FVar30 = (ForElementType<unsigned_int>)&local_de8;
    if (local_de8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_de8.AllocatorInstance.SecondaryData;
    }
    uVar24 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar26 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar26;
      uVar25 = uVar25 + 0x20;
      iVar26 = iVar26 + 1;
      if ((int)((local_de8.NumBits - 1U) + ((int)(local_de8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar26) {
        local_1084 = local_de8.NumBits;
        uVar34 = local_de8.NumBits;
        goto LAB_142b2e700;
      }
      uVar24 = *(uint *)((longlong)FVar30 + (lVar18 + 1) * 4);
    }
    uVar19 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_fc8._8_4_ = (undefined4)lVar18;
    local_1084 = local_fc8._8_4_ + -1 + uVar25;
    uVar34 = local_1084;
    if (local_de8.NumBits < (int)local_1084) {
      uVar34 = local_de8.NumBits;
      local_1084 = local_de8.NumBits;
    }
  }
LAB_142b2e700:
  do {
    plVar8 = local_f50;
    if ((int)local_f50[1] - *(int *)((longlong)local_f50 + 0x34) != (int)uStack_f28) {
      local_1085 = 0;
      `TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1085);
    }
    if (((TStack_f48.CurrentBitIndex == uVar34) && (TStack_f48.Array == &local_de8)) &&
       (plVar8 == (longlong *)local_df8)) {
      Tasks::TaskConcurrencyLimiter_Private::FPimpl::Wait
                (local_1010.Pimpl.Object,(FTimespan)0x7fffffffffffffff);
      pTVar15 = TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                ::Difference((TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                              *)local_df8,&local_cd8,
                             (TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                              *)local_da8);
      if (local_1028 != pTVar15) {
        TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
        ::
        Move<TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>_>
                  (local_1028,pTVar15);
      }
      local_cd8.HashSize = 0;
      if (local_cd8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_cd8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_cd8.Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1010.Pimpl.SharedReferenceCount.ReferenceController);
      local_d60 = 0;
      if (local_d68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d68);
      }
      TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_da8);
      local_db0 = 0;
      if (local_db8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_db8);
      }
      TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_df8);
      if (!bVar36) {
        return;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
    local_1070.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = (FString *)((longlong)TStack_f48.CurrentBitIndex * 0x20 + *plVar8);
    local_1070.ArrayNum = 0;
    local_1070.ArrayMax = 0;
    iVar26 = (pFVar11->Data).ArrayNum;
    fVar22 = 0.0;
    if (iVar26 == 0) {
      pwVar21 = L"";
      fVar17 = fVar22;
    }
    else {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      fVar17 = (float)(iVar26 + -1);
    }
    uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>((int)fVar17,pwVar21);
    iVar26 = TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)this_02,uVar24,pFVar11);
    if (iVar26 == -1) {
LAB_142b2e815:
      local_eb8 = (pFVar11->Data).AllocatorInstance.Data;
      pTVar12 = (this_02->ScheduledDirectories).Ptr;
      iVar26 = (pFVar11->Data).ArrayNum;
      fStack_eb0 = (float)(iVar26 + -1);
      if (iVar26 == 0) {
        fStack_eb0 = fVar22;
      }
      local_ea8._8_8_ = CONCAT44(fStack_eac,fStack_eb0);
      local_ea8._0_8_ = local_eb8;
      if (fStack_eb0 == 0.0) {
        if ((int)(pTVar12->Root).NumChildNodesAndFlags < 0) goto LAB_142b2e98c;
      }
      else {
        local_d18.Base = local_cf8;
        local_d18.bIsDynamic = false;
        local_d18.bIsExternal = false;
        local_d18.CurPos = local_cf8;
        local_d18.End = (wchar_t *)&local_cd8;
        TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
        NormalizePathForReading(pTVar12,(TStringView<wchar_t> *)local_ea8,&local_d18);
        local_e80._8_8_ = local_ea8._0_8_;
        local_e80._16_8_ = local_ea8._8_8_;
        pTVar12 = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                   *)TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                     ::FTreeNode::Find(&pTVar12->Root,(TStringView<wchar_t> *)(local_e80 + 8));
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d18);
LAB_142b2e98c:
        if (pTVar12 !=
            (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)
            0x0) {
          if (*(longlong *)(pTVar12->Root).Value.Pad == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirectoryReadTaskData->IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                               ,0x17d0,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((*(longlong *)(pTVar12->Root).Value.Pad == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          this_01 = local_1010.Pimpl.Object;
          pTVar3 = *(TReferenceControllerBase<1> **)((pTVar12->Root).Value.Pad + 8);
          pFVar4 = *(FMoviePipelinePanoramicBlenderBase **)(pTVar12->Root).Value.Pad;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar32 = (pFVar4->TempBufferPool).AllocatorInstance.Data;
          if (pFVar32 != (FScriptContainerElement *)0x0) {
            LOCK();
            *(int *)(pFVar32 + 0x30) = *(int *)(pFVar32 + 0x30) + 1;
            UNLOCK();
          }
          pTVar13 = MakeShared<LowLevelTasks::FTask,1>(&local_e68);
          pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
          this_00 = pTVar13->Object;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e68.SharedReferenceCount.ReferenceController);
          if ((this_00 == (FTask *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar14 = TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::AsShared
                              ((TSharedFromThis<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>
                                *)this_01,&local_e58);
          local_f20._32_8_ = pTVar14->Object;
          local_f20._40_8_ = (pTVar14->SharedReferenceCount).ReferenceController;
          local_f20._24_8_ = this_01;
          if ((TReferenceControllerBase<1> *)local_f20._40_8_ != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            ((TReferenceControllerBase<1> *)local_f20._40_8_)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)local_f20._40_8_)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_f20._0_8_ = pFVar4;
          local_f20._8_8_ = pTVar3;
          local_f20._16_8_ = pFVar32;
          local_f20._48_8_ = this_00;
          local_f20._56_8_ = pTVar5;
          LowLevelTasks::FTask::
          Init<_UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<_UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList_::__l30::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this_00,L"WaitBatchTriggerReadDirectoryAssetFiles",this_01->TaskPriority,
                     (<lambda_1> *)local_f20,AllowEverything);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_f20._56_8_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_f20._40_8_);
          if ((FScriptContainerElement *)local_f20._16_8_ != (FScriptContainerElement *)0x0) {
            LOCK();
            pFVar32 = (FScriptContainerElement *)(local_f20._16_8_ + 0x30);
            iVar26 = *(int *)pFVar32;
            *(int *)pFVar32 = *(int *)pFVar32 + -1;
            UNLOCK();
            if (iVar26 == 1) {
              (*(code *)**(undefined8 **)local_f20._16_8_)(local_f20._16_8_,1);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_f20._8_8_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e58.SharedReferenceCount.ReferenceController);
          Tasks::TaskConcurrencyLimiter_Private::FPimpl::AddWorkItem(this_01,this_00);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          this_02 = local_1060;
          uVar34 = local_1084;
          goto LAB_142b2e8e1;
        }
      }
      iVar26 = (pFVar11->Data).ArrayNum;
      local_1040.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1040.Data.ArrayNum = 0;
      local_1040.Data.ArrayMax = 0;
      fVar17 = (float)(iVar26 + -1);
      if (iVar26 == 0) {
        fVar17 = fVar22;
      }
      pFVar11 = ::FString::ConstructFromPtrSize
                          (&local_e48,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,(int)fVar17)
      ;
      if (&local_1040 != pFVar11) {
        local_1040.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1040.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_1040.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e48.Data.AllocatorInstance.Data);
      }
      local_1030 = 0;
      TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
      ::Emplace<UE::AssetDataGather::Private::FWaitBatchDirectory>
                ((TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                  *)local_da8,(FWaitBatchDirectory *)(local_fc8 + 0xc),(bool *)&local_1040);
      if (local_1040.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1040.Data.AllocatorInstance.Data);
      }
    }
    else {
      pTVar1 = (TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
                *)(*(longlong *)&this_02->DirectoryReadsToSchedule + ((longlong)iVar26 * 5 + 2) * 8)
      ;
      if (&local_1070 != pTVar1) {
        DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
                  ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                    *)0x0,0);
        local_1070.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_1070.ArrayNum = pTVar1->ArrayNum;
        local_1070.ArrayMax = pTVar1->ArrayMax;
        pTVar1->ArrayNum = 0;
        pTVar1->ArrayMax = 0;
      }
      TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       *)this_02,iVar26);
      if (local_1070.ArrayNum == 0) goto LAB_142b2e815;
      ScheduleDirectory(this_02,&local_1010,pFVar11,&local_1070,false);
    }
LAB_142b2e8e1:
    FVar27.Data = local_1070.AllocatorInstance.Data;
    DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
              ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                *)local_1070.AllocatorInstance.Data,local_1070.ArrayNum);
    if (FVar27.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar27.Data);
    }
    TStack_f48.UnvisitedBitMask = TStack_f48.UnvisitedBitMask & ~TStack_f48._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f48);
  } while( true );
}

