// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 15

// FImgMediaGlobalCache @ 14ea38430

FImgMediaGlobalCache * __thiscall
FImgMediaGlobalCache::FImgMediaGlobalCache(FImgMediaGlobalCache *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->MapSequenceToMostRecentEntry = 0;
  *(undefined8 *)&(this->MapSequenceToMostRecentEntry).field_0x8 = 0;
  *(undefined8 *)&(this->MapSequenceToMostRecentEntry).field_0x20 = 0;
  this->LeastRecent = (FImgMediaGlobalCacheEntry *)0x0;
  this->MostRecent = (FImgMediaGlobalCacheEntry *)0x0;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x28 = 0;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x34 = 0;
  *(undefined8 *)&(this->MapSequenceToMostRecentEntry).field_0x40 = 0;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x48 = 0;
  *(undefined8 *)&this->MapLeastRecentToSequence = 0;
  *(undefined8 *)&(this->MapLeastRecentToSequence).field_0x8 = 0;
  *(undefined8 *)&(this->MapLeastRecentToSequence).field_0x20 = 0;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x28 = 0;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x34 = 0;
  *(undefined8 *)&(this->MapLeastRecentToSequence).field_0x40 = 0;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x48 = 0;
  *(undefined8 *)&this->MapFrameToEntry = 0;
  *(undefined8 *)&(this->MapFrameToEntry).field_0x8 = 0;
  *(undefined8 *)&(this->MapFrameToEntry).field_0x20 = 0;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x28 = 0;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x34 = 0;
  *(undefined8 *)&(this->MapFrameToEntry).field_0x40 = 0;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x48 = 0;
  this->CurrentSize = 0;
  this->MaxSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~FImgMediaGlobalCache @ 14ea3a8d0

void __thiscall FImgMediaGlobalCache::~FImgMediaGlobalCache(FImgMediaGlobalCache *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Empty(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(undefined4 *)&(this->MapFrameToEntry).field_0x48 = 0;
    pvVar3 = *(void **)&(this->MapFrameToEntry).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->MapFrameToEntry);
    *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x48 = 0;
    pvVar3 = *(void **)&(this->MapLeastRecentToSequence).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->MapLeastRecentToSequence);
    *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x48 = 0;
    pvVar3 = *(void **)&(this->MapSequenceToMostRecentEntry).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->MapSequenceToMostRecentEntry);
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddFrame @ 14ea40ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImgMediaGlobalCache::AddFrame
          (FImgMediaGlobalCache *this,FString *param_1,FName *param_2,int param_3,
          TSharedPtr<FImgMediaFrame,1> *param_4,bool param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FImgMediaFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FImgMediaGlobalCacheEntry *local_58;
  FName local_50;
  int local_48;
  FName *local_40;
  FImgMediaGlobalCacheEntry **local_38;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((param_4->Object == (FImgMediaFrame *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = param_4->Object;
    lpCriticalSection_00 = &pFVar1->InfoCriticalSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      uVar5 = (pFVar1->Info).UncompressedSize;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (param_5) {
        uVar5 = (uVar5 * 4) / 3;
      }
      if (this->MaxSize < uVar5) {
        if (2 < (byte)LogImgMedia._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
        }
      }
      else {
        EnforceMaxSize(this,uVar5);
        local_58 = ::operator_new(0x50);
        if (local_58 != (FImgMediaGlobalCacheEntry *)0x0) {
          ::FString::FString(&local_58->FileName,param_1);
          local_58->FrameSize = uVar5;
          local_58->Index = param_3;
          (local_58->Frame).Object = param_4->Object;
          pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
          (local_58->Frame).SharedReferenceCount.ReferenceController = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_58->LessRecent = (FImgMediaGlobalCacheEntry *)0x0;
          local_58->LessRecentSequence = (FImgMediaGlobalCacheEntry *)0x0;
          local_58->MoreRecent = (FImgMediaGlobalCacheEntry *)0x0;
          local_58->MoreRecentSequence = (FImgMediaGlobalCacheEntry *)0x0;
        }
        local_50 = *param_2;
        local_40 = &local_50;
        local_38 = &local_58;
        local_48 = param_3;
        TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TTuple<FName,int>_&&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&>_>
                  ((TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
                    *)&this->MapFrameToEntry,
                   (TPairInitializer<TTuple<FName,int>_&&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&>
                    *)&stack0x00000008,(bool *)&local_40);
        MarkAsRecent(this,param_2,local_58);
        this->CurrentSize = this->CurrentSize + uVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x00014ea40e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Contains @ 14ea45ae0

bool __thiscall
FImgMediaGlobalCache::Contains(FImgMediaGlobalCache *this,FName *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar1 = *param_1;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = FVar1.Number + uVar3;
  if (*(int *)&(this->MapFrameToEntry).field_0x8 != *(int *)&(this->MapFrameToEntry).field_0x34) {
    puVar6 = *(undefined1 **)&(this->MapFrameToEntry).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MapFrameToEntry).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->MapFrameToEntry).field_0x48 - 1U &
                              (uVar3 * 0x40 + -0x61c88647 + param_2 + (uVar3 >> 2) ^ uVar3)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->MapFrameToEntry;
      do {
        lVar5 = (longlong)iVar4 * 0x20;
        if ((*(FName *)(lVar5 + lVar2) == FVar1) && (*(int *)(lVar5 + 8 + lVar2) == param_2))
        goto LAB_14ea45bb1;
        iVar4 = *(int *)(lVar5 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14ea45bb1:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar4 != -1;
}

// Empty @ 14ea47e10

void __thiscall FImgMediaGlobalCache::Empty(FImgMediaGlobalCache *this)

{
  undefined1 *puVar1;
  int iVar2;
  FImgMediaGlobalCacheEntry *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  TMap<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
  *this_00;
  
  pFVar3 = this->LeastRecent;
  while (pFVar3 != (FImgMediaGlobalCacheEntry *)0x0) {
    this->LeastRecent = pFVar3->MoreRecent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->Frame).SharedReferenceCount.ReferenceController);
    pFVar4 = (pFVar3->FileName).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x50);
    pFVar3 = this->LeastRecent;
  }
  this->MostRecent = (FImgMediaGlobalCacheEntry *)0x0;
  this->CurrentSize = 0;
  bVar5 = 1 < *(int *)&(this->MapSequenceToMostRecentEntry).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
                      *)&this->MapSequenceToMostRecentEntry);
  }
  puVar1 = &(this->MapSequenceToMostRecentEntry).field_0xc;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->MapSequenceToMostRecentEntry,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x34 = 0;
  iVar2 = *(int *)&(this->MapSequenceToMostRecentEntry).field_0x2c;
  *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->MapSequenceToMostRecentEntry).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->MapSequenceToMostRecentEntry).field_0x48 = 1;
    TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
              *)&this->MapSequenceToMostRecentEntry);
  }
  bVar5 = 1 < *(int *)&(this->MapLeastRecentToSequence).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
                      *)&this->MapLeastRecentToSequence);
  }
  puVar1 = &(this->MapLeastRecentToSequence).field_0xc;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->MapLeastRecentToSequence,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x34 = 0;
  iVar2 = *(int *)&(this->MapLeastRecentToSequence).field_0x2c;
  *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapLeastRecentToSequence).field_0x10,
               0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->MapLeastRecentToSequence).field_0x48 = 1;
    TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
              *)&this->MapLeastRecentToSequence);
  }
  this_00 = &this->MapFrameToEntry;
  bVar5 = 1 < *(int *)&(this->MapFrameToEntry).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->MapFrameToEntry).field_0xc;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MapFrameToEntry).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x34 = 0;
  iVar2 = *(int *)&(this->MapFrameToEntry).field_0x2c;
  *(undefined4 *)&(this->MapFrameToEntry).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MapFrameToEntry).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapFrameToEntry).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->MapFrameToEntry).field_0x48 = 1;
    TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// EmptyCache @ 14ea48030

void __thiscall FImgMediaGlobalCache::EmptyCache(FImgMediaGlobalCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Empty(this);
                    /* WARNING: Could not recover jumptable at 0x00014ea48067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EnforceMaxSize @ 14ea480e0

void __thiscall FImgMediaGlobalCache::EnforceMaxSize(FImgMediaGlobalCache *this,ulong64 param_1)

{
  longlong lVar1;
  FImgMediaGlobalCacheEntry *pFVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  undefined1 *puVar8;
  FName FVar9;
  FName local_res8;
  FName local_28;
  int local_20;
  
  if (this->MaxSize < this->CurrentSize + param_1) {
    FVar9.ComparisonIndex.Value = 0;
    FVar9.Number = 0;
    do {
      pFVar2 = this->LeastRecent;
      uVar6 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      local_res8 = FVar9;
      if (*(int *)&(this->MapLeastRecentToSequence).field_0x8 !=
          *(int *)&(this->MapLeastRecentToSequence).field_0x34) {
        puVar3 = *(undefined1 **)&(this->MapLeastRecentToSequence).field_0x40;
        puVar8 = &(this->MapLeastRecentToSequence).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar8 = puVar3;
        }
        iVar5 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(this->MapLeastRecentToSequence).field_0x48 - 1U &
                                  (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *(longlong *)&this->MapLeastRecentToSequence + (longlong)iVar5 * 0x18;
            if (*(FImgMediaGlobalCacheEntry **)
                 (*(longlong *)&this->MapLeastRecentToSequence + (longlong)iVar5 * 0x18) == pFVar2)
            {
              FVar7 = (FName)(lVar1 + 8);
              if (lVar1 == 0) {
                FVar7 = FVar9;
              }
              if (FVar7 != (FName)0x0) {
                local_res8 = *(FName *)FVar7;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x10);
          } while (iVar5 != -1);
        }
      }
      Unlink(this,&local_res8,pFVar2);
      this->CurrentSize = this->CurrentSize - pFVar2->FrameSize;
      local_28 = local_res8;
      local_20 = pFVar2->Index;
      TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
                *)&this->MapFrameToEntry,(TTuple<FName,int> *)&local_28);
      if (pFVar2 != (FImgMediaGlobalCacheEntry *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar2->Frame).SharedReferenceCount.ReferenceController);
        pFVar4 = (pFVar2->FileName).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar2,0x50);
      }
    } while (this->MaxSize < this->CurrentSize + param_1);
  }
  return;
}

// FindAndTouch @ 14ea49450

TSharedPtr<FImgMediaFrame,1> * __thiscall
FImgMediaGlobalCache::FindAndTouch(FImgMediaGlobalCache *this,FName *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  FImgMediaFrame *pFVar2;
  uint uVar3;
  FName *pFVar4;
  undefined1 *puVar5;
  TSharedPtr<FImgMediaFrame,1> *pTVar6;
  TSharedPtr<FImgMediaFrame,1> *pTVar8;
  TSharedPtr<FImgMediaFrame,1> *pTVar7;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar1 = *param_1;
  pTVar7 = (TSharedPtr<FImgMediaFrame,1> *)0x0;
  pTVar6 = (TSharedPtr<FImgMediaFrame,1> *)0x0;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar1.Number;
  pTVar8 = pTVar7;
  if (*(int *)&(this->MapFrameToEntry).field_0x8 != *(int *)&(this->MapFrameToEntry).field_0x34) {
    puVar5 = *(undefined1 **)&(this->MapFrameToEntry).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->MapFrameToEntry).field_0x38;
    }
    uVar3 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->MapFrameToEntry).field_0x48 - 1U &
                               (uVar3 * 0x40 + -0x61c88647 + param_2 + (uVar3 >> 2) ^ uVar3)) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->MapFrameToEntry);
        if ((*pFVar4 == FVar1) && (pFVar4[1].ComparisonIndex.Value == param_2)) {
          pTVar8 = pTVar6;
          if (uVar3 != 0xffffffff) {
            pTVar6 = (TSharedPtr<FImgMediaFrame,1> *)(pFVar4 + 2);
            if (pFVar4 == (FName *)0x0) {
              pTVar6 = pTVar7;
            }
            if ((pTVar6 != (TSharedPtr<FImgMediaFrame,1> *)0x0) &&
               (pFVar2 = pTVar6->Object, pFVar2 != (FImgMediaFrame *)0x0)) {
              Unlink(this,param_1,(FImgMediaGlobalCacheEntry *)pFVar2);
              MarkAsRecent(this,param_1,(FImgMediaGlobalCacheEntry *)pTVar6->Object);
              pTVar8 = (TSharedPtr<FImgMediaFrame,1> *)((longlong)&pFVar2->MipTilesPresent + 8);
            }
          }
          break;
        }
        uVar3 = pFVar4[3].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pTVar8;
}

// GetIndices @ 14ea4c770

void __thiscall
FImgMediaGlobalCache::GetIndices
          (FImgMediaGlobalCache *this,FName *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FImgMediaGlobalCacheEntry *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FImgMediaGlobalCacheEntry **ppFVar7;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar7 = TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
            ::Find((TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
                    *)&this->MapSequenceToMostRecentEntry,*param_1);
  if (ppFVar7 != (FImgMediaGlobalCacheEntry **)0x0) {
    for (pFVar2 = *ppFVar7; pFVar2 != (FImgMediaGlobalCacheEntry *)0x0;
        pFVar2 = pFVar2->LessRecentSequence) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      piVar1 = &pFVar2->Index;
      if (((pFVar3 <= piVar1) && (piVar1 < pFVar3 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *piVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ea4c884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Initialize @ 14ea51240

void __thiscall FImgMediaGlobalCache::Initialize(FImgMediaGlobalCache *this)

{
  UClass *this_00;
  longlong lVar1;
  float fVar2;
  
  this_00 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  lVar1 = 0;
  fVar2 = *(float *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1c *
          __real_4e800000;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  this->MaxSize = (longlong)fVar2 + lVar1;
  EnforceMaxSize(this,0);
  return;
}

// MarkAsRecent @ 14ea53290

void __thiscall
FImgMediaGlobalCache::MarkAsRecent
          (FImgMediaGlobalCache *this,FName *param_1,FImgMediaGlobalCacheEntry *param_2)

{
  FImgMediaGlobalCacheEntry *pFVar1;
  FImgMediaGlobalCacheEntry **ppFVar2;
  TPairInitializer<FName_const_&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&&> local_res8;
  FName *local_28;
  FName *local_20;
  
  param_2->LessRecent = this->MostRecent;
  if (this->MostRecent != (FImgMediaGlobalCacheEntry *)0x0) {
    this->MostRecent->MoreRecent = param_2;
  }
  this->MostRecent = param_2;
  ppFVar2 = TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
            ::Find((TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
                    *)&this->MapSequenceToMostRecentEntry,*param_1);
  if (ppFVar2 == (FImgMediaGlobalCacheEntry **)0x0) {
    param_2->LessRecentSequence = (FImgMediaGlobalCacheEntry *)0x0;
  }
  else {
    pFVar1 = *ppFVar2;
    param_2->LessRecentSequence = pFVar1;
    if (pFVar1 != (FImgMediaGlobalCacheEntry *)0x0) {
      pFVar1->MoreRecentSequence = param_2;
      goto LAB_14ea53313;
    }
  }
  local_28 = (FName *)&local_res8.Value;
  local_res8.Value = (FImgMediaGlobalCacheEntry **)param_2;
  local_20 = param_1;
  TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&&,FName_const_&>_>
            ((TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
              *)&this->MapLeastRecentToSequence,
             (TPairInitializer<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&&,FName_const_&> *
             )&local_res8,(bool *)&local_28);
LAB_14ea53313:
  local_20 = (FName *)&local_res8.Value;
  local_res8.Value = (FImgMediaGlobalCacheEntry **)param_2;
  local_28 = param_1;
  TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&&>_>
            ((TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
              *)&this->MapSequenceToMostRecentEntry,&local_res8,(bool *)&local_28);
  if (this->LeastRecent == (FImgMediaGlobalCacheEntry *)0x0) {
    this->LeastRecent = param_2;
  }
  return;
}

// Remove @ 14ea5a6f0

void __thiscall
FImgMediaGlobalCache::Remove
          (FImgMediaGlobalCache *this,FName *param_1,FImgMediaGlobalCacheEntry *param_2)

{
  FScriptContainerElement *pFVar1;
  FName local_18;
  int local_10;
  
  Unlink(this,param_1,param_2);
  this->CurrentSize = this->CurrentSize - param_2->FrameSize;
  local_18 = *param_1;
  local_10 = param_2->Index;
  TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,int>,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
            *)&this->MapFrameToEntry,(TTuple<FName,int> *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->Frame).SharedReferenceCount.ReferenceController);
  pFVar1 = (param_2->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ::operator_delete(param_2,0x50);
  return;
}

// Shutdown @ 14ea5c060

void __thiscall FImgMediaGlobalCache::Shutdown(FImgMediaGlobalCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Empty(this);
                    /* WARNING: Could not recover jumptable at 0x00014ea5c097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Unlink @ 14ea5e8d0

void __thiscall
FImgMediaGlobalCache::Unlink
          (FImgMediaGlobalCache *this,FName *param_1,FImgMediaGlobalCacheEntry *param_2)

{
  FImgMediaGlobalCacheEntry **ppFVar1;
  FImgMediaGlobalCacheEntry *pFVar2;
  FImgMediaGlobalCacheEntry **ppFVar3;
  uint uVar4;
  TPairInitializer<FName_const_&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&> local_res18;
  FName *local_38;
  FName *local_30;
  
  if (param_2->LessRecent == (FImgMediaGlobalCacheEntry *)0x0) {
    if (this->LeastRecent == param_2) {
      this->LeastRecent = param_2->MoreRecent;
    }
  }
  else {
    param_2->LessRecent->MoreRecent = param_2->MoreRecent;
  }
  if (param_2->MoreRecent == (FImgMediaGlobalCacheEntry *)0x0) {
    if (this->MostRecent == param_2) {
      this->MostRecent = param_2->LessRecent;
    }
  }
  else {
    param_2->MoreRecent->LessRecent = param_2->LessRecent;
  }
  ppFVar1 = &param_2->LessRecentSequence;
  param_2->LessRecent = (FImgMediaGlobalCacheEntry *)0x0;
  param_2->MoreRecent = (FImgMediaGlobalCacheEntry *)0x0;
  if (param_2->LessRecentSequence == (FImgMediaGlobalCacheEntry *)0x0) {
    local_res18.Key = (FName *)param_2;
    if (*(int *)&(this->MapLeastRecentToSequence).field_0x8 !=
        *(int *)&(this->MapLeastRecentToSequence).field_0x34) {
      uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
      ::RemoveImpl<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_const_*>
                ((TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
                  *)&this->MapLeastRecentToSequence,uVar4 >> 0x10 ^ uVar4,
                 (FImgMediaGlobalCacheEntry **)&local_res18);
    }
    if (param_2->MoreRecentSequence != (FImgMediaGlobalCacheEntry *)0x0) {
      local_38 = (FName *)&param_2->MoreRecentSequence;
      local_30 = param_1;
      TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&,FName_const_&>_>
                ((TSet<TTuple<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName>,TDefaultMapHashableKeyFuncs<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FName,0>,FDefaultSetAllocator>
                  *)&this->MapLeastRecentToSequence,
                 (TPairInitializer<FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&,FName_const_&>
                  *)&local_res18,(bool *)&local_38);
    }
  }
  else {
    param_2->LessRecentSequence->MoreRecentSequence = param_2->MoreRecentSequence;
  }
  pFVar2 = param_2->MoreRecentSequence;
  if (pFVar2 == (FImgMediaGlobalCacheEntry *)0x0) {
    ppFVar3 = TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
              ::Find((TMapBase<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>_>
                      *)&this->MapSequenceToMostRecentEntry,*param_1);
    if ((ppFVar3 != (FImgMediaGlobalCacheEntry **)0x0) && (*ppFVar3 == param_2)) {
      local_38 = param_1;
      local_30 = (FName *)ppFVar1;
      TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FName_const_&,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*_&>_>
                ((TSet<TTuple<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*>,TDefaultMapHashableKeyFuncs<FName,FImgMediaGlobalCache::FImgMediaGlobalCacheEntry_*,0>,FDefaultSetAllocator>
                  *)&this->MapSequenceToMostRecentEntry,&local_res18,(bool *)&local_38);
    }
  }
  else {
    pFVar2->LessRecentSequence = *ppFVar1;
  }
  param_2->LessRecent = (FImgMediaGlobalCacheEntry *)0x0;
  param_2->MoreRecent = (FImgMediaGlobalCacheEntry *)0x0;
  *ppFVar1 = (FImgMediaGlobalCacheEntry *)0x0;
  param_2->MoreRecentSequence = (FImgMediaGlobalCacheEntry *)0x0;
  return;
}

// UpdateSettings @ 14ea601a0

void __thiscall
FImgMediaGlobalCache::UpdateSettings(FImgMediaGlobalCache *this,UImgMediaSettings *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = 0;
  fVar2 = param_1->GlobalCacheSizeGB * __real_4e800000;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  this->MaxSize = (longlong)fVar2 + lVar1;
  EnforceMaxSize(this,0);
  return;
}

