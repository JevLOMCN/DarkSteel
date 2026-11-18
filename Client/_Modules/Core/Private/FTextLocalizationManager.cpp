// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 60

// FTextLocalizationManager @ 1417377f0

FTextLocalizationManager * __thiscall
FTextLocalizationManager::FTextLocalizationManager(FTextLocalizationManager *this)

{
  FLocalizationResourceTextSource *pFVar1;
  FPolyglotTextSource *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FTextLocalizationManager *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<ILocalizedTextSource,1> local_38;
  TSharedRef<ILocalizedTextSource,1> local_28;
  
  this->InitializedFlags = (atomic<ETextLocalizationManagerInitializedFlags>)0x0;
  (this->DisplayStringTableRW).Mutex.Mutex.Ptr = (void *)0x0;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->DisplayStringLookupTable = 0;
  *(undefined8 *)&(this->DisplayStringLookupTable).field_0x8 = 0;
  *(undefined8 *)&(this->DisplayStringLookupTable).field_0x20 = 0;
  *(undefined4 *)&(this->DisplayStringLookupTable).field_0x28 = 0;
  *(undefined4 *)&(this->DisplayStringLookupTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->DisplayStringLookupTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisplayStringLookupTable).field_0x34 = 0;
  *(undefined8 *)&(this->DisplayStringLookupTable).field_0x40 = 0;
  *(undefined4 *)&(this->DisplayStringLookupTable).field_0x48 = 0;
  (this->DisplayStringsByLocalizationTargetId).LocalizationTargets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DisplayStringsByLocalizationTargetId).LocalizationTargets.ArrayNum = 0;
  (this->DisplayStringsByLocalizationTargetId).LocalizationTargets.ArrayMax = 0;
  *(undefined8 *)&(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds = 0;
  *(undefined8 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x8 = 0;
  *(undefined8 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x20 = 0;
  *(undefined4 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x28 = 0;
  *(undefined4 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x34 = 0;
  *(undefined8 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x40 = 0;
  *(undefined4 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x48 = 0;
  (this->TextRevisionRW).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->LocalTextRevisions = 0;
  *(undefined8 *)&(this->LocalTextRevisions).field_0x8 = 0;
  *(undefined8 *)&(this->LocalTextRevisions).field_0x20 = 0;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x28 = 0;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x34 = 0;
  *(undefined8 *)&(this->LocalTextRevisions).field_0x40 = 0;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x48 = 0;
  *(undefined8 *)&this->OnTextRevisionChangedEvent = 0;
  *(undefined8 *)&(this->OnTextRevisionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnTextRevisionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnTextRevisionChangedEvent).field_0x18 = 2;
  (this->LocalizedTextSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizedTextSources).ArrayNum = 0;
  (this->LocalizedTextSources).ArrayMax = 0;
  this->TextRevisionCounter = 1;
  pTVar5 = ::operator_new(0x28);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->LocResTextSource).Object = (FLocalizationResourceTextSource *)0x10;
    (this->LocResTextSource).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar5 = pTVar7;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLocalizationResourceTextSource___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FLocalizationResourceTextSource__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    if ((FLocalizationResourceTextSource *)(pTVar5 + 1) == (FLocalizationResourceTextSource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FTextLocalizationManager *)(*pcVar3)();
        return pFVar6;
      }
    }
    (this->LocResTextSource).Object = (FLocalizationResourceTextSource *)(pTVar5 + 1);
    (this->LocResTextSource).SharedReferenceCount.ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = ::operator_new(0xe0);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->PolyglotTextSource).Object = (FPolyglotTextSource *)0x10;
    (this->PolyglotTextSource).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPolyglotTextSource___00_SharedPointerInternals__6B_;
    memset(pTVar5 + 1,0,0xd0);
    pTVar5[1]._padding_ = (longlong)&___7FPolyglotTextSource__6B_;
    *(undefined4 *)((longlong)&pTVar5[4]._padding_ + 4) = 0x80;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    *(undefined4 *)((longlong)&pTVar5[9]._padding_ + 4) = 0x80;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0xffffffff;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar5[0xb].SharedReferenceCount,4000);
    if ((FPolyglotTextSource *)(pTVar5 + 1) == (FPolyglotTextSource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FTextLocalizationManager *)(*pcVar3)();
        return pFVar6;
      }
    }
    (this->PolyglotTextSource).Object = (FPolyglotTextSource *)(pTVar5 + 1);
    (this->PolyglotTextSource).SharedReferenceCount.ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  (this->AsyncLocalizationTask).Reference = (FBaseGraphTask *)0x0;
  if ((this->LocResTextSource).Object == (FLocalizationResourceTextSource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTextLocalizationManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar7 = (this->LocResTextSource).SharedReferenceCount.ReferenceController;
  pFVar1 = (this->LocResTextSource).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FLocalizationResourceTextSource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTextLocalizationManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (ILocalizedTextSource *)pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar7;
  RegisterTextSource(this,&local_38,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((this->PolyglotTextSource).Object == (FPolyglotTextSource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTextLocalizationManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar7 = (this->PolyglotTextSource).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->PolyglotTextSource).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FPolyglotTextSource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTextLocalizationManager *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (ILocalizedTextSource *)pFVar2;
  local_28.SharedReferenceCount.ReferenceController = pTVar7;
  RegisterTextSource(this,&local_28,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~<lambda_1> @ 141737cf0

void __thiscall
`FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>::~<lambda_1>
          (void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)this,*(int *)((longlong)this + 8));
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~<lambda_1> @ 141737d80

void __thiscall
`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>::
~<lambda_1>(void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)this,*(int *)((longlong)this + 8));
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// ~FTextLocalizationManager @ 1417396e0

void __thiscall FTextLocalizationManager::~FTextLocalizationManager(FTextLocalizationManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  
  pFVar3 = (this->AsyncLocalizationTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PolyglotTextSource).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocResTextSource).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            ((TSharedPtr<ILocalizedTextSource,1> *)
             (this->LocalizedTextSources).AllocatorInstance.Data,
             (this->LocalizedTextSources).ArrayNum);
  pFVar4 = (this->LocalizedTextSources).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTextRevisionChangedEvent).field_0x8,
             *(int *)&(this->OnTextRevisionChangedEvent).field_0x10);
  pvVar5 = *(void **)&(this->OnTextRevisionChangedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextRevisionChangedEvent);
  *(undefined4 *)&(this->LocalTextRevisions).field_0x48 = 0;
  pvVar5 = *(void **)&(this->LocalTextRevisions).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextId,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextId,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextId,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalTextRevisions);
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  if (BVar7 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  }
  *(undefined4 *)
   &(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.field_0x48 = 0;
  pvVar5 = *(void **)&(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds.
                      field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DisplayStringsByLocalizationTargetId).LocalizationTargetPathsToIds);
  DestructItems<FTextLocalizationManager::FDisplayStringsForLocalizationTarget,int>
            ((FDisplayStringsForLocalizationTarget *)
             (this->DisplayStringsByLocalizationTargetId).LocalizationTargets.AllocatorInstance.Data
             ,(this->DisplayStringsByLocalizationTargetId).LocalizationTargets.ArrayNum);
  pFVar4 = (this->DisplayStringsByLocalizationTargetId).LocalizationTargets.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->DisplayStringLookupTable).field_0x48 = 0;
  pvVar5 = *(void **)&(this->DisplayStringLookupTable).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DisplayStringLookupTable);
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
  if (BVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141739861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
    return;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// operator() @ 14173bb70

void __thiscall
`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>::operator()
          (void *this,FTextId *param_1,TDisplayStringRef<FString_const_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTextKey local_res8 [2];
  FTextKey local_res10 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((*param_2 == (TDisplayStringRef<FString_const_>)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                         ,0x9d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0].Index = (param_1->Key).Index;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res8,&local_48);
  local_res10[0].Index = (param_1->Namespace).Index;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res10,&local_58);
  ::FString::PrintfImpl
            (&local_38,L"LiveTableEntry: Namespace: \'%s\', Key: \'%s\', DisplayString: \'%s\'");
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(*(FString **)this,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(*(FString **)this,L"\r\n",2);
  return;
}

// operator() @ 14173bcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>::operator()
          (void *this,FTextId *param_1,TDisplayStringRef<FString_const_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTextKey local_res8 [2];
  FTextKey local_res20 [2];
  FString local_48;
  FString local_38;
  
  if ((3 < (*(byte **)this)[3]) && (3 < **(byte **)this)) {
    if ((*param_2 == (TDisplayStringRef<FString_const_>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0x9d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res8[0].Index = (param_1->Key).Index;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FTextKey::AppendString(local_res8,&local_38);
    local_res20[0].Index = (param_1->Namespace).Index;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FTextKey::AppendString(local_res20,&local_48);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,*(FLogCategoryBase **)this);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14173cbb0

void __thiscall
`FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>::operator()
          (void *this)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  IFileManager *pIVar9;
  FString *pFVar10;
  FTextLocalizationManager *this_00;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  FString *pFVar15;
  FString *pFVar16;
  int iVar17;
  FScriptContainerElement *_Src;
  bool bVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  FString local_108;
  FTextLocalizationMetaDataResource local_f8;
  FString local_c0;
  FString *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  FString *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TSharedPtr<ILocalizedTextSource,1> *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_78;
  FString local_68;
  TArrayView<FString_const_,int> local_58;
  TArrayView<FString_const_,int> local_48;
  
  local_res10 = *(uint *)((longlong)this + 0x18);
  uVar8 = (ulonglong)(int)local_res10;
  pFVar15 = *(FString **)((longlong)this + 0x10);
  uVar4 = local_78._12_4_;
  pFVar16 = pFVar15 + uVar8;
  do {
    if (*(int *)((longlong)this + 0x18) != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar16) {
      if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
        pcVar3 = *(code **)((longlong)this + 0x40);
        plVar13 = (longlong *)((longlong)this + 0x50);
        if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
          plVar13 = *(longlong **)((longlong)this + 0x68);
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        (*pcVar3)(uVar11);
      }
      return;
    }
    pIVar9 = IFileManager::Get();
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar9 + 0x58))(pIVar9,pwVar14);
    if (cVar5 != '\0') {
      local_f8.NativeCulture.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.NativeCulture.Data.ArrayNum = 0;
      local_f8.NativeCulture.Data.ArrayMax = 0;
      local_f8.NativeLocRes.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.NativeLocRes.Data.ArrayNum = 0;
      local_f8.NativeLocRes.Data.ArrayMax = 0;
      local_f8.CompiledCultures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.CompiledCultures.ArrayNum = 0;
      local_f8.CompiledCultures.ArrayMax = 0;
      local_f8.bIsUGC = false;
      pFVar10 = FPaths::GetBaseFilename(&local_68,pFVar15,true);
      ::FString::ConcatFC(&local_c0,pFVar10,L".locmeta");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      iVar2 = (pFVar15->Data).ArrayNum;
      iVar17 = local_c0.Data.ArrayNum + -1;
      if (local_c0.Data.ArrayNum == 0) {
        iVar17 = 0;
      }
      local_108.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar17 != -1)) {
        iVar7 = iVar17 + 2;
        _Src = (pFVar15->Data).AllocatorInstance.Data;
LAB_14173ccdb:
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar7 != 0) goto LAB_14173cce5;
        local_108.Data.ArrayMax = 0;
      }
      else {
        iVar7 = iVar17 + 1;
        _Src = (pFVar15->Data).AllocatorInstance.Data;
        if (iVar2 == 0) goto LAB_14173ccdb;
LAB_14173cce5:
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar12 = iVar2 + iVar7;
        if ((int)uVar12 < iVar2) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar12,0,(ForAnyElementType *)&local_108,iVar2,&local_108.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_108.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
      }
      ::FString::PathAppend(&local_108,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar17);
      FTextLocalizationMetaDataResource::LoadFromFile(&local_f8,&local_108);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      bVar18 = local_f8.bIsUGC != false;
      EVar1 = *(ELocalizationLoadFlags *)((longlong)this + 0x30);
      this_00 = FTextLocalizationManager::Get();
      local_98 = *(FString **)((longlong)this + 0x20);
      iVar2 = *(int *)((longlong)this + 0x28);
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_88 = *(TSharedPtr<ILocalizedTextSource,1> **)this;
      iVar17 = *(int *)((longlong)this + 8);
      iStack_a8 = 1;
      uStack_a4 = uVar4;
      local_b0 = pFVar15;
      iStack_90 = iVar2;
      if ((iVar17 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58._12_4_ = uStack_8c;
      local_58.ArrayNum = iStack_90;
      local_48._12_4_ = uStack_a4;
      local_48.ArrayNum = iStack_a8;
      local_58.DataPtr = local_98;
      local_78._12_4_ = uStack_7c;
      local_78.ArrayNum = iVar17;
      local_78.DataPtr = local_88;
      local_48.DataPtr = local_b0;
      iStack_80 = iVar17;
      FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Sync
                (this_00,&local_78,&local_48,&local_58,-bVar18 & SkipExisting | EVar1);
      DestructItems<FString,int>
                ((FString *)local_f8.CompiledCultures.AllocatorInstance.Data,
                 local_f8.CompiledCultures.ArrayNum);
      if (local_f8.CompiledCultures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.CompiledCultures.AllocatorInstance.Data);
      }
      if (local_f8.NativeLocRes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.NativeLocRes.Data.AllocatorInstance.Data);
      }
      if (local_f8.NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.NativeCulture.Data.AllocatorInstance.Data);
      }
    }
    uVar8 = (ulonglong)local_res10;
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// operator() @ 14173cef0

void __thiscall
`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::__l2::<lambda_1>::operator()
          (void *this)

{
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  FTextLocalizationManager *this_01;
  FDisplayStringsForLocalizationTarget *pFVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 *puVar15;
  FTextId *pFVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FLLMScope local_128 [2];
  FDisplayStringsForLocalizationTarget *local_120;
  undefined8 *local_118;
  int local_110;
  int local_10c;
  FTextLocalizationManager *local_108;
  FTextCache *local_100;
  undefined8 *local_f8;
  FMemScope local_f0;
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78 [2];
  undefined4 local_4c;
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1326,
               "FTextLocalizationManager::HandleLocalizationTargetsUnmounted",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x52e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1326);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1327,L"Localization/DisplayStrings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_128,LLMScope_Name1327,false,None,Default,true);
  FMemScope::FMemScope(&local_f0,&LLMScope_Name1327,true);
  this_01 = FTextLocalizationManager::Get();
  local_108 = this_01;
  local_100 = FTextCache::Get();
  AcquireSRWLockExclusive((PSRWLOCK)&this_01->DisplayStringTableRW);
  iVar2 = *(int *)((longlong)this + 8);
  puVar17 = *(undefined8 **)this;
  local_f8 = puVar17 + (longlong)iVar2 * 2;
  puVar15 = local_f8;
  do {
    while( true ) {
      local_118 = puVar17;
      if (*(int *)((longlong)this + 8) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar17 == puVar15) {
        FTextLocalizationManager::DirtyTextRevision(this_01);
        if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
          pcVar6 = *(code **)((longlong)this + 0x10);
          plVar13 = (longlong *)((longlong)this + 0x20);
          if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
            plVar13 = *(longlong **)((longlong)this + 0x38);
          }
          uVar11 = (**(code **)(*plVar13 + 8))();
          (*pcVar6)(uVar11);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&this_01->DisplayStringTableRW);
        FMemScope::~FMemScope(&local_f0);
        FLLMScope::~FLLMScope(local_128);
        if (bVar25) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      local_88 = (wchar_t *)*puVar17;
      iStack_80 = *(int *)(puVar17 + 1) + -1;
      if (*(int *)(puVar17 + 1) == 0) {
        iStack_80 = 0;
      }
      local_78[0]._12_4_ = uStack_7c;
      local_78[0].Size = iStack_80;
      local_78[0].DataPtr = local_88;
      pFVar10 = FTextLocalizationManager::FDisplayStringsByLocalizationTargetId::FindOrAdd
                          (&this_01->DisplayStringsByLocalizationTargetId,local_78,(int *)0x0);
      local_120 = pFVar10;
      if (pFVar10->bIsMounted != false) break;
      puVar17 = puVar17 + 2;
    }
    this_00 = &pFVar10->TextIds;
    iStack_e0 = 0;
    iVar3 = *(int *)&(pFVar10->TextIds).Elements.field_0x28;
    local_d8 = &(pFVar10->TextIds).Elements.field_0x10;
    local_c8 = 0;
    uStack_dc = 1;
    iStack_cc = 0;
    if (iVar3 != 0) {
      puVar4 = *(uint **)&(pFVar10->TextIds).Elements.field_0x20;
      puVar21 = (uint *)local_d8;
      if (puVar4 != (uint *)0x0) {
        puVar21 = puVar4;
      }
      uVar23 = *puVar21;
      while (uVar23 == 0) {
        lVar12 = (longlong)iStack_e0;
        local_c8 = local_c8 + 0x20;
        iStack_e0 = iStack_e0 + 1;
        iStack_cc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14173d0df;
        uVar23 = puVar21[lVar12 + 1];
      }
      uStack_dc = -uVar23 & uVar23;
      uVar1 = (ulonglong)uStack_dc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_110 = (int)lVar12;
      iStack_cc = local_c8 + -1 + local_110;
      if (iVar3 < iStack_cc) {
        iStack_cc = iVar3;
      }
    }
LAB_14173d0df:
    uStack_c4 = local_4c;
    uVar23 = *(uint *)&(pFVar10->TextIds).Elements.field_0x28;
    iStack_c0 = *(int *)&(pFVar10->TextIds).Elements.field_0x8 -
                *(int *)&(pFVar10->TextIds).Elements.field_0x34;
    uVar22 = uVar23 & 0xffffffe0;
    puVar18 = &(pFVar10->TextIds).Elements.field_0x10;
    TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
    uStack_d0 = 0xffffffff;
    TStack_b0.CurrentBitIndex = iStack_cc;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar23 >> 5;
    TStack_b0._28_4_ = local_4c;
    TStack_b0.BaseBitIndex = local_c8;
    uStack_90 = CONCAT44(uStack_bc,iStack_c0);
    local_e8 = this_00;
    local_b8 = this_00;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
    if ((((int)uVar23 < 0) || (iVar3 < (int)uVar23)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01 = local_108;
    uVar9 = *(uint *)&(pFVar10->TextIds).Elements.field_0x28;
    if (uVar23 != uVar9) {
      puVar5 = *(undefined1 **)&(pFVar10->TextIds).Elements.field_0x20;
      puVar20 = puVar18;
      if (puVar5 != (undefined1 *)0x0) {
        puVar20 = puVar5;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar14 * 4);
      while (uVar23 == 0) {
        lVar12 = (longlong)iVar14;
        uVar22 = uVar22 + 0x20;
        iVar14 = iVar14 + 1;
        uVar23 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14173d200;
        uVar23 = *(uint *)(puVar20 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_10c = (int)lVar12;
      uVar23 = local_10c + -1 + uVar22;
      if ((int)uVar9 < (int)uVar23) {
        uVar23 = uVar9;
      }
    }
LAB_14173d200:
    while( true ) {
      pTVar7 = local_b8;
      if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
          (int)uStack_90) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_b0.CurrentBitIndex == uVar23) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) &&
         (pTVar7 == this_00)) break;
      pFVar16 = (FTextId *)
                ((longlong)TStack_b0.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
      if (*(int *)&(this_01->DisplayStringLookupTable).field_0x8 !=
          *(int *)&(this_01->DisplayStringLookupTable).field_0x34) {
        uVar22 = ::GetTypeHash(&pFVar16->Key);
        uVar9 = ::GetTypeHash((FTextKey *)pFVar16);
        uVar19 = uVar9 - uVar22 ^ uVar22 >> 0xd;
        uVar9 = (-0x61c88647 - uVar19) - uVar22 ^ uVar19 << 8;
        uVar24 = (uVar22 - uVar9) - uVar19 ^ uVar9 >> 0xd;
        uVar19 = (uVar19 - uVar24) - uVar9 ^ uVar24 >> 0xc;
        uVar22 = (uVar9 - uVar19) - uVar24 ^ uVar19 << 0x10;
        uVar24 = (uVar24 - uVar22) - uVar19 ^ uVar22 >> 5;
        uVar9 = (uVar19 - uVar24) - uVar22 ^ uVar24 >> 3;
        uVar22 = (uVar22 - uVar9) - uVar24 ^ uVar9 << 10;
        TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FTextId>
                  ((TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
                    *)&this_01->DisplayStringLookupTable,uVar22 >> 0xf ^ (uVar24 - uVar22) - uVar9,
                   pFVar16);
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    FTextCache::RemoveCache(local_100,this_00);
    bVar8 = 1 < (pFVar10->TextIds).HashSize;
    if (!bVar8) {
      TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    }
    puVar18 = &(pFVar10->TextIds).Elements.field_0xc;
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x8 = 0;
    if (*(int *)puVar18 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar18);
    }
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x34 = 0;
    iVar3 = *(int *)&(pFVar10->TextIds).Elements.field_0x2c;
    *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(pFVar10->TextIds).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar10->TextIds).Elements.field_0x10,0);
    }
    if (bVar8) {
      (pFVar10->TextIds).HashSize = 1;
      TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
    puVar17 = local_118 + 2;
    local_120->bIsMounted = false;
    puVar15 = local_f8;
  } while( true );
}

// operator() @ 14173d710

void __thiscall
`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FTextLocalizationManager *this_00;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_18;
  
  this_00 = FTextLocalizationManager::Get();
  local_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)this;
  iVar1 = *(int *)((longlong)this + 8);
  iVar2 = *(int *)((longlong)this + 0x10);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  FTextLocalizationManager::LoadChunkedLocalizationResources_Sync
            (this_00,&local_18,iVar2,(FString *)((longlong)this + 0x18));
  return;
}

// operator() @ 14173d7b0

bool __thiscall
`FTextLocalizationManager::LoadChunkedLocalizationResources_Sync'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  this_00 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)this;
  pTVar3 = &FPaths::ProjectContentDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar3,0xe - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_38,L"Localization",0xc);
  iVar2 = (param_1->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if ((local_38.ArrayNum != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,&local_38,iVar4 + iVar2);
  ::FString::PathAppend
            ((FString *)&local_28,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
  bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (this_00,(FString *)&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return !bVar1;
}

// operator() @ 14173d8a0

void __thiscall
`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::__l2::<lambda_1>::operator()
          (void *this)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TLazySingleton<FTextLocalizationManager> *this_00;
  FTextLocalizationManager *this_01;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_18;
  
  this_00 = TLazySingleton<FTextLocalizationManager>::GetLazy
                      (FLazySingleton::Construct<FTextLocalizationManager>);
  this_01 = TLazySingleton<FTextLocalizationManager>::GetValue(this_00);
  local_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)this;
  iVar2 = *(int *)((longlong)this + 8);
  EVar1 = *(ELocalizationLoadFlags *)((longlong)this + 0x20);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar2;
  FTextLocalizationManager::LoadLocalizationResourcesForCulture_Sync
            (this_01,&local_18,(FString *)((longlong)this + 0x10),EVar1);
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x30));
    pcVar3 = *(code **)((longlong)this + 0x30);
    plVar6 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar6 = *(longlong **)((longlong)this + 0x58);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(uVar5);
  }
  return;
}

// operator() @ 14173d980

void __thiscall
`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::__l2::<lambda_1>
::operator()(void *this)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  TSharedPtr<ILocalizedTextSource,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FTextLocalizationManager *this_00;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FString_const_,int> local_28;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_18;
  
  this_00 = FTextLocalizationManager::Get();
  pFVar4 = *(FString **)((longlong)this + 0x10);
  iVar2 = *(int *)((longlong)this + 0x18);
  EVar1 = *(ELocalizationLoadFlags *)((longlong)this + 0x20);
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = *(TSharedPtr<ILocalizedTextSource,1> **)this;
  iVar3 = *(int *)((longlong)this + 8);
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar2;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar3;
  local_28.DataPtr = pFVar4;
  local_18.DataPtr = pTVar5;
  FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Sync
            (this_00,&local_18,&local_28,EVar1);
  return;
}

// operator() @ 14173da60

void __thiscall
`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>::
operator()(void *this)

{
  ELocalizationLoadFlags EVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FString *pFVar6;
  TSharedPtr<ILocalizedTextSource,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  FTextLocalizationManager *this_00;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TArrayView<FString_const_,int> local_38;
  TArrayView<FString_const_,int> local_28;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_18;
  
  this_00 = FTextLocalizationManager::Get();
  pFVar5 = *(FString **)((longlong)this + 0x20);
  iVar2 = *(int *)((longlong)this + 0x28);
  EVar1 = *(ELocalizationLoadFlags *)((longlong)this + 0x30);
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar6 = *(FString **)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x18);
  if (iVar3 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar7 = *(TSharedPtr<ILocalizedTextSource,1> **)this;
  iVar4 = *(int *)((longlong)this + 8);
  if (iVar4 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_38._12_4_ = uStack_5c;
  local_38.ArrayNum = iVar2;
  local_28._12_4_ = uStack_4c;
  local_28.ArrayNum = iVar3;
  local_18._12_4_ = uStack_3c;
  local_18.ArrayNum = iVar4;
  local_38.DataPtr = pFVar5;
  local_28.DataPtr = pFVar6;
  local_18.DataPtr = pTVar7;
  FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Sync
            (this_00,&local_18,&local_28,&local_38,EVar1);
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
    pcVar8 = *(code **)((longlong)this + 0x40);
    plVar11 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x68);
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    (*pcVar8)(uVar10);
  }
  return;
}

// operator() @ 14173e590

bool __thiscall
`FTextLocalizationManager::RegisterTextSource'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<ILocalizedTextSource,1> *param_1,
          TSharedPtr<ILocalizedTextSource,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1->Object == (ILocalizedTextSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar4 = (**(code **)((longlong)*param_1->Object + 8))();
  if (param_2->Object == (ILocalizedTextSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar5 = (**(code **)((longlong)*param_2->Object + 8))();
  return iVar5 < iVar4;
}

// operator() @ 14173f1b0

bool __thiscall
`FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::operator()
          (void *this,FTextId *param_1,FTextId *param_2)

{
  ForAnyElementType FVar1;
  int iVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FTextKey local_res10 [2];
  FString local_48;
  FString local_38;
  
  local_res10[0].Index = (param_2->Namespace).Index;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res10,&local_48);
  local_res10[0].Index = (param_1->Namespace).Index;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res10,&local_38);
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  iVar2 = wcscmp((wchar_t *)FVar3.Data,(wchar_t *)FVar5.Data);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (iVar2 == 0) {
    local_res10[0].Index = (param_2->Key).Index;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FTextKey::AppendString(local_res10,&local_48);
    local_res10[0].Index = (param_1->Key).Index;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FTextKey::AppendString(local_res10,&local_38);
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar2 = wcscmp((wchar_t *)FVar3.Data,(wchar_t *)FVar5.Data);
    bVar4 = SUB41((uint)iVar2 >> 0x1f,0);
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = SUB41((uint)iVar2 >> 0x1f,0);
  }
  return bVar4;
}

// AddOrUpdateDisplayStringInLiveTable @ 141742a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::AddOrUpdateDisplayStringInLiveTable
          (FTextLocalizationManager *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDisplayStringRef<FString_const_> TVar3;
  code *pcVar4;
  longlong lVar5;
  FTextKey FVar6;
  int iVar7;
  FTextKeyState *pFVar8;
  ulong64 uVar10;
  FDisplayStringEntry *pFVar11;
  TDisplayStringRef<FString_const_> TVar12;
  ushort *puVar13;
  TDisplayStringRef<FString> TVar14;
  ushort uVar15;
  wchar_t *pwVar17;
  FRefCountedDisplayString *pFVar18;
  bool bVar19;
  undefined2 local_res10 [4];
  FString *local_res18;
  FString *local_res20;
  ForAnyElementType local_118;
  undefined8 local_110;
  FRefCountedDisplayString *local_108;
  int iStack_100;
  uint uStack_fc;
  FTextKey local_f8;
  FTextKey local_f4;
  FTextId local_f0;
  FLLMScope local_e8;
  undefined1 local_e4 [12];
  FMemScope local_d8;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> local_d0;
  undefined1 local_c8 [8];
  FTextId *local_c0;
  undefined2 *local_b8;
  FString local_b0;
  FTextId *local_a0;
  FRefCountedDisplayString **local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  undefined4 local_5c;
  uint local_4c;
  size_t sVar9;
  ushort uVar16;
  
  iVar1 = (param_2->Data).ArrayNum;
  pFVar18 = (FRefCountedDisplayString *)(param_2->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uStack_fc = local_5c;
  local_f8.Index = -1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (iVar7 != 0) {
    local_108 = pFVar18;
    iStack_100 = iVar7;
    pFVar8 = FTextKeyState::GetState();
    if (pFVar18 == (FRefCountedDisplayString *)0x0) {
      pFVar18 = (FRefCountedDisplayString *)0x0;
      iVar7 = 0;
    }
    else {
      if ((0 < iVar7) && (*(wchar_t *)((longlong)pFVar18 + ((longlong)iVar7 + -1) * 2) == L'\0')) {
        iVar7 = iVar7 + -1;
      }
      if (iVar7 == -1) {
        sVar9 = wcslen((wchar_t *)pFVar18);
        iVar7 = (int)sVar9;
      }
    }
    uVar10 = CityHash64((char *)pFVar18,iVar7 * 2);
    local_88._12_4_ = uStack_fc;
    local_88.Size = iStack_100;
    local_88.DataPtr = (wchar_t *)local_108;
    FTextKeyState::FindOrAddImpl
              (pFVar8,&local_88,(int)(uVar10 >> 0x20) * 0x17 + (int)uVar10,&local_f8);
  }
  FVar6.Index = local_f8.Index;
  iVar1 = (param_1->Data).ArrayNum;
  pFVar18 = (FRefCountedDisplayString *)(param_1->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uStack_fc = local_4c;
  local_f4.Index = -1;
  local_108 = pFVar18;
  iStack_100 = iVar7;
  if (iVar7 != 0) {
    pFVar8 = FTextKeyState::GetState();
    if (pFVar18 == (FRefCountedDisplayString *)0x0) {
      pFVar18 = (FRefCountedDisplayString *)0x0;
      iVar7 = 0;
    }
    else {
      if ((0 < iVar7) && (*(short *)((longlong)pFVar18 + (longlong)iVar7 * 2 + -2) == 0)) {
        iVar7 = iVar7 + -1;
      }
      if (iVar7 == -1) {
        sVar9 = wcslen((wchar_t *)pFVar18);
        iVar7 = (int)sVar9;
      }
    }
    uVar10 = CityHash64((char *)pFVar18,iVar7 * 2);
    local_78._12_4_ = uStack_fc;
    local_78.Size = iStack_100;
    local_78.DataPtr = (wchar_t *)local_108;
    FTextKeyState::FindOrAddImpl
              (pFVar8,&local_78,(int)(uVar10 >> 0x20) * 0x17 + (int)uVar10,&local_f4);
  }
  local_f0.Namespace.Index = local_f4.Index;
  local_f0.Key.Index = FVar6.Index;
  AcquireSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
  pFVar11 = TMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
            ::Find((TMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
                    *)&this->DisplayStringLookupTable,&local_f0);
  if (pFVar11 == (FDisplayStringEntry *)0x0) {
    if (param_4 == (FString *)0x0) {
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
    }
    else {
      ::FString::FString(&local_b0,param_3);
      TVar14 = MakeTextDisplayString((FString *)local_c8);
      pFVar18 = *(FRefCountedDisplayString **)TVar14;
      if (pFVar18 != (FRefCountedDisplayString *)0x0) {
        LOCK();
        *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
        UNLOCK();
      }
      if ((param_4->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      }
      local_d0.Reference = pFVar18;
      uStack_fc = FCrc::StrCrc32<wchar_t>(pwVar17,0);
      if (pFVar18 != (FRefCountedDisplayString *)0x0) {
        LOCK();
        *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
        UNLOCK();
      }
      iStack_100 = -1;
      local_108 = pFVar18;
      TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::
      ~TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>(&local_d0);
      TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::
      ~TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>
                ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)local_c8);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      local_a0 = &local_f0;
      local_98 = &local_108;
      TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FTextId_const_&,FTextLocalizationManager::FDisplayStringEntry_&&>_>
                ((TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
                  *)&this->DisplayStringLookupTable,
                 (TPairInitializer<FTextId_const_&,FTextLocalizationManager::FDisplayStringEntry_&&>
                  *)(local_e4 + 4),(bool *)&local_a0);
      pFVar18 = local_108;
      if (local_108 != (FRefCountedDisplayString *)0x0) {
        LOCK();
        lVar5 = local_108->_padding_;
        *(int *)&local_108->_padding_ = (int)local_108->_padding_ + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          pFVar2 = (local_108->DisplayString).Data.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar18,0x18);
        }
      }
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
    }
  }
  else {
    iVar7 = (param_3->Data).ArrayNum;
    pFVar2 = (param_3->Data).AllocatorInstance.Data;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = CONCAT44(local_110._4_4_,iVar7);
    if (iVar7 == 0) {
      local_110 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_118,iVar7,(int *)((longlong)&local_110 + 4));
      memcpy(local_118.Data,pFVar2,(longlong)iVar7 * 2);
    }
    TVar12 = (TDisplayStringRef<FString_const_>)::operator_new(0x18);
    if (TVar12 == (TDisplayStringRef<FString_const_>)0x0) {
      TVar12 = (TDisplayStringRef<FString_const_>)0x0;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("this->IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                          ,0xb0,L"");
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      *(int *)TVar12 = 0;
      *(FScriptContainerElement **)((longlong)TVar12 + 8) = local_118.Data;
      local_118.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)TVar12 + 0x10) = (int)local_110;
      *(int *)((longlong)TVar12 + 0x14) = local_110._4_4_;
      local_110 = 0;
      LOCK();
      *(int *)TVar12 = *(int *)TVar12 + 1;
      UNLOCK();
      LOCK();
      *(int *)TVar12 = *(int *)TVar12 + 1;
      UNLOCK();
      LOCK();
      iVar7 = *(int *)TVar12;
      *(int *)TVar12 = *(int *)TVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        if (*(void **)((longlong)TVar12 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)TVar12 + 8));
        }
        ::operator_delete((void *)TVar12,0x18);
      }
    }
    TVar3 = pFVar11->DisplayString;
    if (TVar3 != TVar12) {
      pFVar11->DisplayString = TVar12;
      if (TVar12 != (TDisplayStringRef<FString_const_>)0x0) {
        LOCK();
        *(int *)TVar12 = *(int *)TVar12 + 1;
        UNLOCK();
      }
      if (TVar3 != (TDisplayStringRef<FString_const_>)0x0) {
        LOCK();
        iVar7 = *(int *)TVar3;
        *(int *)TVar3 = *(int *)TVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          if (*(void **)((longlong)TVar3 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)TVar3 + 8));
          }
          ::operator_delete((void *)TVar3,0x18);
        }
      }
    }
    if (TVar12 != (TDisplayStringRef<FString_const_>)0x0) {
      LOCK();
      iVar7 = *(int *)TVar12;
      *(int *)TVar12 = *(int *)TVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        if (*(void **)((longlong)TVar12 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)TVar12 + 8));
        }
        ::operator_delete((void *)TVar12,0x18);
      }
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    bVar19 = -1 < CpuChannel->Enabled;
    if (bVar19) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1752,
                 "FTextLocalizationManager::DirtyLocalRevisionForTextId",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                 ,0x6d8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1752);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name1753,L"Localization/DisplayStrings");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(&local_e8,LLMScope_Name1753,false,None,Default,true);
    FMemScope::FMemScope(&local_d8,&LLMScope_Name1753,true);
    AcquireSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
    puVar13 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
              ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                      *)&this->LocalTextRevisions,&local_f0);
    if (puVar13 == (ushort *)0x0) {
      local_res10[0] = 1;
      local_c0 = &local_f0;
      local_b8 = local_res10;
      TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FTextId_const_&,unsigned_short_&&>_>
                ((TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
                  *)&this->LocalTextRevisions,
                 (TPairInitializer<FTextId_const_&,unsigned_short_&&> *)local_e4,(bool *)&local_c0);
    }
    else {
      uVar16 = *puVar13;
      do {
        uVar15 = uVar16 + 1;
        uVar16 = 0;
      } while (uVar15 == 0);
      *puVar13 = uVar15;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
    FMemScope::~FMemScope(&local_d8);
    FLLMScope::~FLLMScope(&local_e8);
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
  return;
}

// CompactDataStructures @ 14174c5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextLocalizationManager::CompactDataStructures(FTextLocalizationManager *this)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18 [2];
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId730,"FTextLocalizationManager::CompactDataStructures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x2da);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId730);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name731,L"Localization/DisplayStrings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name731,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name731,true);
  QueryPerformanceCounter(&local_res10);
  AcquireSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
  TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
            *)&this->DisplayStringLookupTable);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
  AcquireSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
            *)&this->LocalTextRevisions);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  FTextKeyState::GetState();
  if (4 < (byte)LogTextLocalizationManager._0_1_) {
    QueryPerformanceCounter(&local_res10);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager)
    ;
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DirtyLocalRevisionForTextId @ 141751480

void __thiscall
FTextLocalizationManager::DirtyLocalRevisionForTextId
          (FTextLocalizationManager *this,FTextId *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar4;
  undefined2 local_res8 [4];
  FLLMScope local_res18 [2];
  ELLMTagSet local_res20 [8];
  FMemScope local_38;
  FTextId *local_30;
  undefined2 *local_28;
  ushort uVar3;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1752,"FTextLocalizationManager::DirtyLocalRevisionForTextId"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x6d8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1752);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1753,L"Localization/DisplayStrings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name1753,false,None,Default,true);
  FMemScope::FMemScope(&local_38,&LLMScope_Name1753,true);
  AcquireSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  puVar1 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
           ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                   *)&this->LocalTextRevisions,param_1);
  if (puVar1 == (ushort *)0x0) {
    local_res8[0] = 1;
    local_28 = local_res8;
    local_30 = param_1;
    TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTextId_const_&,unsigned_short_&&>_>
              ((TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
                *)&this->LocalTextRevisions,
               (TPairInitializer<FTextId_const_&,unsigned_short_&&> *)&local_res18[2].TagSet,
               (bool *)&local_30);
  }
  else {
    uVar3 = *puVar1;
    do {
      uVar2 = uVar3 + 1;
      uVar3 = 0;
    } while (uVar2 == 0);
    *puVar1 = uVar2;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DirtyTextRevision @ 141751620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTextLocalizationManager::DirtyTextRevision(FTextLocalizationManager *this)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  TMap<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
  *this_00;
  atomic<int> aVar3;
  int iVar4;
  bool bVar5;
  ushort uVar6;
  FTSTicker *this_01;
  undefined ***pppuVar8;
  bool bVar9;
  undefined1 auStackY_b8 [32];
  FLLMScope local_84;
  FMemScope local_80;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  code *local_68 [2];
  undefined **local_58 [3];
  undefined ***local_40;
  ulonglong local_38;
  ushort uVar7;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1770,"FTextLocalizationManager::DirtyTextRevision",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x6ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1770);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1771,L"Localization/DisplayStrings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_84,LLMScope_Name1771,false,None,Default,true);
  FMemScope::FMemScope(&local_80,&LLMScope_Name1771,true);
  AcquireSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  uVar7 = this->TextRevisionCounter;
  do {
    uVar6 = uVar7 + 1;
    uVar7 = 0;
  } while (uVar6 == 0);
  this_00 = &this->LocalTextRevisions;
  this->TextRevisionCounter = uVar6;
  bVar5 = 1 < *(int *)&(this->LocalTextRevisions).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->LocalTextRevisions).field_0xc;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->LocalTextRevisions).field_0x34 = 0;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x28 = 0;
  *(undefined4 *)&(this->LocalTextRevisions).field_0x30 = 0xffffffff;
  iVar4 = *(int *)&(this->LocalTextRevisions).field_0x2c;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->LocalTextRevisions).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LocalTextRevisions).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->LocalTextRevisions).field_0x48 = 1;
    TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FTextId,unsigned_short>,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>,FDefaultSetAllocator>
              *)this_00);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TextRevisionRW);
  bVar5 = IsInGameThread();
  if (bVar5) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnTextRevisionChangedEvent);
  }
  else {
    this_01 = FTSTicker::GetCoreTicker();
    local_40 = (undefined ***)0x0;
    local_58[0] = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::`10'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                   ::_vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::__l10::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
    FTSTicker::AddTicker
              (this_01,&local_78,L"OnTextRevisionChangedEventBroadcastGT",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_68);
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar8 = local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar8 = local_40;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(&local_84);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DumpLiveTable @ 141751930

void __thiscall
FTextLocalizationManager::DumpLiveTable
          (FTextLocalizationManager *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  IFileManager *pIVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t **local_res10 [3];
  wchar_t *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = &local_28;
  local_18._8_8_ = local_res10;
  local_28 = (wchar_t *)0x0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>,void,FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&>
       ::Call;
  local_20 = 0;
  DumpLiveTableImpl(this,param_2,param_3,param_4,
                    (TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>
                     *)local_18);
  pIVar1 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = (int)local_20 + -1;
  if ((int)local_20 == 0) {
    iVar2 = 0;
  }
  local_18._8_4_ = iVar2;
  local_18._0_8_ = local_28;
  FFileHelper::SaveStringToFile
            ((TStringView<wchar_t> *)local_18,pwVar3,ForceUTF8WithoutBOM,pIVar1,0);
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// DumpLiveTable @ 141751a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::DumpLiveTable
          (FTextLocalizationManager *this,FString *param_1,FString *param_2,FString *param_3,
          FLogCategoryBase *param_4)

{
  FLogCategoryLogLocalization *pFVar1;
  code *local_18;
  FLogCategoryBase **local_10;
  
  pFVar1 = &LogLocalization;
  if (param_4 != (FLogCategoryBase *)0x0) {
    pFVar1 = (FLogCategoryLogLocalization *)param_4;
  }
  if ((Warning < ((FLogCategoryBase *)pFVar1)->CompileTimeVerbosity) &&
     (Warning < ((FLogCategoryBase *)pFVar1)->Verbosity)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)pFVar1);
  }
  local_10 = &param_4;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>,void,FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&>
             ::Call;
  param_4 = (FLogCategoryBase *)pFVar1;
  DumpLiveTableImpl(this,param_1,param_2,param_3,
                    (TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>
                     *)&local_18);
  if ((Warning < ((FLogCategoryBase *)pFVar1)->CompileTimeVerbosity) &&
     (Warning < ((FLogCategoryBase *)pFVar1)->Verbosity)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)pFVar1);
  }
  return;
}

// DumpLiveTableImpl @ 141751ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::DumpLiveTableImpl
          (FTextLocalizationManager *this,FString *param_1,FString *param_2,FString *param_3,
          TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>
          *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMap<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
  *pTVar5;
  FTextId *pFVar6;
  FDisplayStringEntry *pFVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FThreadHeartBeat *pFVar12;
  ulonglong uVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  FTextKey *pFVar29;
  undefined1 auStack_2e8 [32];
  char local_2c8;
  undefined1 local_2c7;
  FIdentityFunctor local_2c6;
  undefined1 local_2c5;
  int local_2c4;
  FTextLocalizationManager *local_2c0;
  FTextKey local_2b8;
  FTextKey local_2b4;
  FString *local_2b0;
  int local_2a8;
  uint uStack_2a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a0;
  undefined4 local_298;
  uint uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  int local_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_280;
  undefined4 local_278;
  uint uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  TMap<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
  *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 local_240;
  TPairInitializer<FTextId_const_&,FTextLocalizationManager::FDisplayStringEntry_const_&> local_238;
  FString local_228;
  FString local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>
  *local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  TMap<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
  *local_1d8;
  FPlatformRWLock *local_1d0;
  FIdentityFunctor *local_1c8;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b8;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  FIdentityFunctor **local_140;
  TMap<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  int *local_108;
  int *local_100;
  FString local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  bVar4 = false;
  bVar10 = false;
  local_1e8 = param_4;
  local_2c4 = 0;
  local_2c8 = '\0';
  local_2c0 = this;
  local_2b0 = param_2;
  local_238.Key = (FTextId *)param_1;
  local_238.Value = (FDisplayStringEntry *)param_3;
  pFVar12 = FThreadHeartBeat::GetNoInit();
  if (pFVar12 != (FThreadHeartBeat *)0x0) {
    local_2c8 = '\x01';
    FThreadHeartBeat::SuspendHeartBeat(pFVar12,false);
  }
  local_a8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_1d0 = &this->DisplayStringTableRW;
  local_7c = 0x80;
  local_78 = -1;
  AcquireSRWLockShared((PSRWLOCK)local_1d0);
  uVar21 = *(int *)&(this->DisplayStringLookupTable).field_0x8 -
           *(int *)&(this->DisplayStringLookupTable).field_0x34;
  uVar22 = 1;
  if ((uint)(local_a8._8_4_ - local_74) < uVar21) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,uVar21);
    if (3 < uVar21) {
      uVar27 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_1e0 = (undefined4)lVar17;
      uVar22 = 1 << ((byte)lVar17 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar22)) {
      local_60 = uVar22;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar22 != 0) {
        uVar21 = uVar22;
        if (uVar22 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar21 = 0;
            goto LAB_141751c51;
          }
        }
        else {
LAB_141751c51:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar21,4)
          ;
        }
        if (0 < (int)uVar22) {
          uVar27 = 0;
          uVar28 = (ulonglong)uVar22;
          do {
            FVar16.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_68.Data;
            }
            uVar13 = (longlong)(int)uVar22 - 1U & uVar27;
            uVar27 = uVar27 + 1;
            *(undefined4 *)(FVar16.Data + uVar13 * 4) = 0xffffffff;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
        uStack_2a4 = 1;
        local_2a8 = 0;
        uStack_294 = 0;
        iStack_290 = 0;
        if (local_80 != 0) {
          FVar20 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_88;
          }
          uVar21 = *(uint *)FVar20;
          iStack_290 = 0;
          local_2a8 = 0;
          while (uVar21 == 0) {
            iStack_290 = iStack_290 + 0x20;
            lVar17 = (longlong)local_2a8;
            local_2a8 = local_2a8 + 1;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2a8)
            goto LAB_141751d6f;
            uVar21 = ((uint *)((longlong)FVar20 + 4))[lVar17];
          }
          uStack_2a4 = -uVar21 & uVar21;
          uVar27 = (ulonglong)uStack_2a4 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_1dc = (int)lVar17;
          uStack_294 = local_1dc + -1 + iStack_290;
          if ((int)local_80 < (int)uStack_294) {
LAB_141751d6f:
            uStack_294 = local_80;
          }
        }
        local_298 = 0xffffffff;
        local_1c0 = (longlong *)local_a8;
        local_1b8._padding_ = CONCAT44(uStack_2a4,local_2a8);
        local_1b8.CurrentBitIndex = uStack_294;
        local_1b8.UnvisitedBitMask = 0xffffffff;
        local_1b8._28_4_ = uStack_28c;
        local_1b8.BaseBitIndex = iStack_290;
        param_2 = local_2b0;
        uVar21 = uStack_294;
        local_1b8.Array = pTStack_2a0;
        if ((int)uStack_294 < (int)local_80) {
          do {
            pFVar29 = (FTextKey *)((longlong)(int)uVar21 * 0x20 + *local_1c0);
            uVar22 = ::GetTypeHash(pFVar29 + 1);
            uVar11 = ::GetTypeHash(pFVar29);
            uVar25 = uVar11 - uVar22 ^ uVar22 >> 0xd;
            uVar11 = (-0x61c88647 - uVar22) - uVar25 ^ uVar25 << 8;
            uVar23 = (uVar22 - uVar11) - uVar25 ^ uVar11 >> 0xd;
            uVar25 = (uVar25 - uVar23) - uVar11 ^ uVar23 >> 0xc;
            uVar22 = (uVar11 - uVar25) - uVar23 ^ uVar25 << 0x10;
            uVar11 = (uVar23 - uVar22) - uVar25 ^ uVar22 >> 5;
            uVar23 = (uVar25 - uVar11) - uVar22 ^ uVar11 >> 3;
            uVar22 = (uVar22 - uVar23) - uVar11 ^ uVar23 << 10;
            uVar22 = ((uVar11 - uVar22) - uVar23 ^ uVar22 >> 0xf) & local_60 - 1;
            pFVar29[7].Index = uVar22;
            FVar16.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_68.Data;
            }
            uVar27 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar22;
            pFVar29[6].Index = *(int *)(FVar16.Data + uVar27 * 4);
            *(uint *)(FVar16.Data + uVar27 * 4) = uVar21;
            local_1b8.UnvisitedBitMask = local_1b8.UnvisitedBitMask & ~local_1b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b8);
            param_2 = local_2b0;
            this = local_2c0;
            uVar21 = local_1b8.CurrentBitIndex;
          } while (local_1b8.CurrentBitIndex < (local_1b8.Array)->NumBits);
        }
      }
    }
  }
  local_208._padding_._4_4_ = 1;
  local_1d8 = &this->DisplayStringLookupTable;
  local_208._padding_._0_4_ = 0;
  puVar1 = &(this->DisplayStringLookupTable).field_0x10;
  local_208.UnvisitedBitMask = 0xffffffff;
  local_208.CurrentBitIndex = 0;
  local_208.BaseBitIndex = 0;
  local_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->DisplayStringLookupTable).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
  }
  local_268 = &this->DisplayStringLookupTable;
  TStack_260._padding_ = CONCAT44(local_208._padding_._4_4_,(undefined4)local_208._padding_);
  TStack_260.CurrentBitIndex = local_208.CurrentBitIndex;
  TStack_260.UnvisitedBitMask = local_208.UnvisitedBitMask;
  TStack_260._28_4_ = local_208._28_4_;
  TStack_260.BaseBitIndex = local_208.BaseBitIndex;
  TStack_260.Array = local_208.Array;
  local_240 = CONCAT44(local_240._4_4_,
                       *(int *)&(this->DisplayStringLookupTable).field_0x8 -
                       *(int *)&(this->DisplayStringLookupTable).field_0x34);
  TStack_130.Array = local_208.Array;
  uStack_110 = local_240;
  local_138 = local_268;
  TStack_130._padding_ = TStack_260._padding_;
  TStack_130._16_8_ = TStack_260._16_8_;
  TStack_130._24_8_ = TStack_260._24_8_;
  pTVar14 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_e8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->DisplayStringLookupTable).field_0x28);
  pFVar7 = local_238.Value;
  pFVar6 = local_238.Key;
  TStack_260._padding_ = pTVar14->_padding_;
  local_2c0 = (FTextLocalizationManager *)pTVar14->Array;
  TStack_260.UnvisitedBitMask = pTVar14->UnvisitedBitMask;
  TStack_260.CurrentBitIndex = pTVar14->CurrentBitIndex;
  TStack_260.BaseBitIndex = pTVar14->BaseBitIndex;
  TStack_260._28_4_ = *(undefined4 *)&pTVar14->field_0x1c;
  local_2c4 = TStack_260.CurrentBitIndex;
  TStack_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c0;
  while( true ) {
    pTVar5 = local_138;
    iVar19 = local_2c4;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_2c7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2c7);
    }
    if (((TStack_130.CurrentBitIndex == iVar19) &&
        ((FTextLocalizationManager *)TStack_130.Array == local_2c0)) && (pTVar5 == local_1d8))
    break;
    iVar19 = 0;
    piVar24 = (int *)(*(longlong *)pTVar5 + (longlong)TStack_130.CurrentBitIndex * 0x20);
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    local_2b8.Index = *piVar24;
    FTextKey::AppendString(&local_2b8,&local_218);
    if (pFVar6 == (FTextId *)0x0) {
LAB_14175200c:
      local_2b4.Index = piVar24[1];
      bVar4 = true;
      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Data.ArrayNum = 0;
      local_228.Data.ArrayMax = 0;
      FTextKey::AppendString(&local_2b4,&local_228);
      if (param_2 != (FString *)0x0) {
        iVar2 = (param_2->Data).ArrayNum;
        if (iVar2 == 0) {
          pwVar18 = L"";
          iVar2 = iVar19;
        }
        else {
          pwVar18 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          iVar2 = iVar2 + -1;
        }
        bVar9 = ::FString::MatchesWildcard(&local_228,pwVar18,iVar2,IgnoreCase);
        if (!bVar9) goto LAB_1417520eb;
      }
      if ((*(longlong *)(piVar24 + 2) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                              ,0x9d,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)(piVar24 + 2) + 0x10) == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *(wchar_t **)(*(longlong *)(piVar24 + 2) + 8);
      }
      ::FString::FString(&local_f8,pwVar18);
      bVar4 = true;
      bVar10 = true;
      if (pFVar7 != (FDisplayStringEntry *)0x0) {
        if (pFVar7->LocalizationTargetPathId == 0) {
          pwVar18 = L"";
          iVar2 = iVar19;
        }
        else {
          pwVar18 = (wchar_t *)
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->DisplayString)->
                    AllocatorInstance).Data;
          iVar2 = pFVar7->LocalizationTargetPathId + -1;
        }
        bVar9 = ::FString::MatchesWildcard(&local_f8,pwVar18,iVar2,IgnoreCase);
        if (!bVar9) goto LAB_1417520eb;
      }
      iVar19 = 1;
    }
    else {
      iVar2 = pFVar6[1].Namespace.Index;
      if (iVar2 == 0) {
        pwVar18 = L"";
        iVar2 = iVar19;
      }
      else {
        pwVar18 = *(wchar_t **)pFVar6;
        iVar2 = iVar2 + -1;
      }
      bVar9 = ::FString::MatchesWildcard(&local_218,pwVar18,iVar2,IgnoreCase);
      if (bVar9) goto LAB_14175200c;
    }
LAB_1417520eb:
    if ((bVar10) &&
       (bVar10 = false, local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if ((bVar4) &&
       (bVar4 = false, local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if ((char)iVar19 != '\0') {
      local_100 = piVar24 + 2;
      local_108 = piVar24;
      TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FTextId_const_&,FTextLocalizationManager::FDisplayStringEntry_const_&>_>
                ((TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
                  *)local_a8,&local_238,(bool *)&local_108);
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  ReleaseSRWLockShared((PSRWLOCK)local_1d0);
  local_1c8 = &local_2c6;
  local_140 = &local_1c8;
  if (0 < local_a8._8_4_ - local_74) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8);
    uVar8 = local_a8._0_8_;
    iVar19 = local_a8._8_4_ - local_74;
    if ((iVar19 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<_FTextLocalizationManager::DumpLiveTableImpl_::__l2::<lambda_2>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar8,iVar19,local_2c6,
               (FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<_private:_void___cdecl_FTextLocalizationManager::DumpLiveTableImpl(FString_const_*,FString_const_*,FString_const_*,TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>)const_::_2_::<lambda_2>_>_>
                *)&local_140);
  }
  uVar21 = local_60;
  uVar27 = (ulonglong)local_60;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar21 == 0) goto LAB_1417522bd;
  uVar22 = uVar21;
  if (uVar21 < 2) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar22 = 0;
      goto LAB_14175225f;
    }
  }
  else {
LAB_14175225f:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar22,4);
  }
  if (0 < (int)uVar21) {
    uVar28 = 0;
    do {
      FVar16.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_68.Data;
      }
      uVar13 = (longlong)(int)uVar21 - 1U & uVar28;
      uVar28 = uVar28 + 1;
      *(undefined4 *)(FVar16.Data + uVar13 * 4) = 0xffffffff;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
LAB_1417522bd:
  uVar21 = 0;
  if (local_60 != 0) {
    uStack_284 = 1;
    local_288 = 0;
    pTStack_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uStack_274 = 0;
    iStack_270 = 0;
    if (local_80 != 0) {
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_88;
      }
      uVar22 = *(uint *)FVar20;
      local_288 = 0;
      iStack_270 = 0;
      while (uVar22 == 0) {
        iStack_270 = iStack_270 + 0x20;
        lVar17 = (longlong)local_288;
        local_288 = local_288 + 1;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < local_288)
        goto LAB_14175237d;
        uVar22 = ((uint *)((longlong)FVar20 + 4))[lVar17];
      }
      uStack_284 = -uVar22 & uVar22;
      uVar27 = (ulonglong)uStack_284 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uStack_274 = iStack_270 + -1 + (int)lVar17;
      local_238.Value = (FDisplayStringEntry *)CONCAT44(local_238.Value._4_4_,(int)lVar17);
      if ((int)local_80 < (int)uStack_274) {
LAB_14175237d:
        uStack_274 = local_80;
      }
    }
    local_278 = 0xffffffff;
    local_198 = (longlong *)local_a8;
    local_190._padding_ = CONCAT44(uStack_284,local_288);
    local_190.CurrentBitIndex = uStack_274;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_26c;
    local_190.BaseBitIndex = iStack_270;
    uVar22 = uStack_274;
    local_190.Array = pTStack_280;
    if ((int)uStack_274 < (int)local_80) {
      do {
        pFVar29 = (FTextKey *)((longlong)(int)uVar22 * 0x20 + *local_198);
        uVar11 = ::GetTypeHash(pFVar29 + 1);
        uVar23 = ::GetTypeHash(pFVar29);
        uVar26 = uVar23 - uVar11 ^ uVar11 >> 0xd;
        uVar23 = (-0x61c88647 - uVar11) - uVar26 ^ uVar26 << 8;
        uVar25 = (uVar11 - uVar23) - uVar26 ^ uVar23 >> 0xd;
        uVar26 = (uVar26 - uVar25) - uVar23 ^ uVar25 >> 0xc;
        uVar11 = (uVar23 - uVar26) - uVar25 ^ uVar26 << 0x10;
        uVar23 = (uVar25 - uVar11) - uVar26 ^ uVar11 >> 5;
        uVar25 = (uVar26 - uVar23) - uVar11 ^ uVar23 >> 3;
        uVar11 = (uVar11 - uVar25) - uVar23 ^ uVar25 << 10;
        uVar11 = ((uVar23 - uVar11) - uVar25 ^ uVar11 >> 0xf) & local_60 - 1;
        pFVar29[7].Index = uVar11;
        FVar16.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_68.Data;
        }
        uVar27 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar11;
        pFVar29[6].Index = *(int *)(FVar16.Data + uVar27 * 4);
        *(uint *)(FVar16.Data + uVar27 * 4) = uVar22;
        local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
        uVar22 = local_190.CurrentBitIndex;
      } while (local_190.CurrentBitIndex < (local_190.Array)->NumBits);
    }
  }
  uVar22 = local_80;
  uStack_154 = uVar21;
  local_150 = uVar21;
  uStack_164 = 1;
  if (local_80 != 0) {
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_88;
    }
    uVar11 = *(uint *)FVar20;
    uVar21 = 0;
    local_150 = 0;
    while (uVar11 == 0) {
      lVar17 = (longlong)(int)uVar21;
      local_150 = local_150 + 0x20;
      uVar21 = uVar21 + 1;
      uStack_154 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
      goto LAB_141752524;
      uVar11 = ((uint *)((longlong)FVar20 + 4))[lVar17];
    }
    uStack_164 = -uVar11 & uVar11;
    uVar27 = (ulonglong)uStack_164 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uStack_154 = (local_150 - 1) + (int)lVar17;
    local_2b0 = (FString *)CONCAT44(local_2b0._4_4_,(int)lVar17);
    if ((int)local_80 < (int)uStack_154) {
      uStack_154 = local_80;
    }
  }
LAB_141752524:
  local_268 = (TMap<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
               *)local_a8;
  uStack_14c = local_ac;
  TStack_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar11 = local_80 & 0xffffffe0;
  iStack_148 = local_a8._8_4_ - local_74;
  uStack_158 = 0xffffffff;
  TStack_260.CurrentBitIndex = uStack_154;
  TStack_260.UnvisitedBitMask = 0xffffffff;
  TStack_260._padding_ = CONCAT44(uStack_164,uVar21);
  iVar19 = (int)local_80 >> 5;
  TStack_260._28_4_ = local_ac;
  TStack_260.BaseBitIndex = local_150;
  local_240 = CONCAT44(uStack_144,iStack_148);
  bVar15 = (byte)local_80;
  local_170 = (longlong *)local_268;
  uStack_168 = uVar21;
  local_160 = TStack_260.Array;
  if (((int)local_80 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar22 != local_80) {
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_88;
    }
    uVar21 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar19 * 4);
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar19;
      uVar11 = uVar11 + 0x20;
      iVar19 = iVar19 + 1;
      uVar22 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_141752660;
      uVar21 = ((uint *)((longlong)FVar20 + 4))[lVar17];
    }
    uVar27 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar22 = (uVar11 - 1) + (int)lVar17;
    if ((int)local_80 < (int)uVar22) {
      uVar22 = local_80;
    }
  }
LAB_141752660:
  while( true ) {
    pTVar5 = local_268;
    if ((int)*(longlong *)((longlong)local_268 + 8) - *(int *)((longlong)local_268 + 0x34) !=
        (int)local_240) {
      `TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2c5);
    }
    if (((TStack_260.CurrentBitIndex == uVar22) &&
        (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (pTVar5 == (TMap<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
                   *)local_a8)) break;
    lVar17 = (longlong)TStack_260.CurrentBitIndex * 0x20 + *(longlong *)pTVar5;
    (**(code **)local_1e8)(*(undefined8 *)&local_1e8->field_0x8,lVar17,lVar17 + 8);
    TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if ((local_2c8 != '\0') &&
     (pFVar12 = FThreadHeartBeat::GetNoInit(), pFVar12 != (FThreadHeartBeat *)0x0)) {
    FThreadHeartBeat::ResumeHeartBeat(pFVar12,false);
  }
  return;
}

// DumpMemoryInfo @ 141752740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextLocalizationManager::DumpMemoryInfo(FTextLocalizationManager *this)

{
  AcquireSRWLockShared((PSRWLOCK)&this->DisplayStringTableRW);
  if (4 < (byte)LogTextLocalizationManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager)
    ;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->DisplayStringTableRW);
  AcquireSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
  if (4 < (byte)LogTextLocalizationManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x000141752841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
  return;
}

// FindDisplayString @ 141756800

TDisplayStringPtr<FString_const_> __thiscall
FTextLocalizationManager::FindDisplayString
          (FTextLocalizationManager *this,FTextKey *param_1,FTextKey *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  TDisplayStringPtr<FString_const_> TVar3;
  bool bVar4;
  int local_res20;
  undefined4 local_res24;
  longlong in_stack_00000028;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1051,"FTextLocalizationManager::FindDisplayString",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x41b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1051);
  }
  if (*(int *)&(param_3->Data).AllocatorInstance.Data == -1) {
LAB_1417568f9:
    *(undefined8 *)param_1 = 0;
  }
  else {
    if ((TextLocalizationManager::DisplayStringSupport != 0) &&
       (TextLocalizationManager::DisplayStringSupport != 1)) {
      if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_1417568f9;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                         ,0x2b7,L"Unknown EDisplayStringSupport!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (TDisplayStringPtr<FString_const_>)(*pcVar1)();
        return TVar3;
      }
    }
    if (((in_stack_00000028 == 0) &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0)) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(``FTextLocalizationManager::FindDisplayString'::__l2::<lambda_1>::operator()'::__l2::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
    local_res20 = param_2->Index;
    local_res24 = *(undefined4 *)&(param_3->Data).AllocatorInstance.Data;
    FindDisplayString_Internal(this,(FTextId *)param_1,(FString *)&local_res20);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TDisplayStringPtr<FString_const_>)param_1;
}

// FindDisplayString_Internal @ 141756960

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TDisplayStringPtr<FString_const_> __thiscall
FTextLocalizationManager::FindDisplayString_Internal
          (FTextLocalizationManager *this,FTextId *param_1,FString *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCulture *this_00;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInternationalization *pFVar7;
  TDisplayStringPtr<FString_const_> TVar8;
  FString *pFVar9;
  FString *pFVar10;
  FDisplayStringEntry *pFVar11;
  TDisplayStringRef<FString> TVar12;
  FTextId FVar13;
  FTextId FVar14;
  undefined8 *in_R9;
  FTextKey local_res8 [2];
  FTextKey local_a8 [2];
  FString *local_a0;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  TSharedRef<FCulture,1> local_60;
  FString local_50;
  
  if (this->InitializedFlags == (atomic<ETextLocalizationManagerInitializedFlags>)0x0) {
    param_1->Namespace = 0;
    param_1->Key = 0;
    return (TDisplayStringPtr<FString_const_>)param_1;
  }
  pFVar7 = FInternationalization::Get();
  local_a0 = FLeetCulture::StaticGetName();
  if (((pFVar7->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar8 = (TDisplayStringPtr<FString_const_>)(*pcVar3)();
    return TVar8;
  }
  pTVar2 = (pFVar7->CurrentLanguage).SharedReferenceCount.ReferenceController;
  this_00 = (pFVar7->CurrentLanguage).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FCulture *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar8 = (TDisplayStringPtr<FString_const_>)(*pcVar3)();
    return TVar8;
  }
  pFVar9 = FCulture::GetName(this_00);
  iVar5 = (pFVar9->Data).ArrayNum;
  iVar1 = (local_a0->Data).ArrayNum;
  if (iVar5 == iVar1) {
    if (iVar5 < 2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      goto LAB_141756c01;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                       (wchar_t *)(local_a0->Data).AllocatorInstance.Data);
    bVar4 = iVar5 == 0;
  }
  else {
    bVar4 = iVar1 + iVar5 == 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar4) {
LAB_141756c01:
    iVar5 = *(int *)(in_R9 + 1);
    FVar14.Namespace.Index = 0;
    FVar14.Key.Index = 0;
    _Src = (void *)*in_R9;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = CONCAT44(local_88._4_4_,iVar5);
    if (iVar5 == 0) {
      local_88 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_90,iVar5,(int *)((longlong)&local_88 + 4));
      memcpy(local_90.Data,_Src,(longlong)iVar5 * 2);
    }
    FVar13 = (FTextId)::operator_new(0x18);
    if (FVar13 == (FTextId)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("this->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                         ,0xb0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8 = (TDisplayStringPtr<FString_const_>)(*pcVar3)();
        return TVar8;
      }
    }
    else {
      *(int *)FVar13 = 0;
      *(FScriptContainerElement **)((longlong)FVar13 + 8) = local_90.Data;
      local_90.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)FVar13 + 0x10) = (int)local_88;
      *(int *)((longlong)FVar13 + 0x14) = local_88._4_4_;
      local_88 = 0;
      LOCK();
      *(int *)FVar13 = *(int *)FVar13 + 1;
      UNLOCK();
      LOCK();
      *(int *)FVar13 = *(int *)FVar13 + 1;
      UNLOCK();
      LOCK();
      iVar5 = *(int *)FVar13;
      *(int *)FVar13 = *(int *)FVar13 + -1;
      UNLOCK();
      FVar14 = FVar13;
      if (iVar5 == 1) {
        if (*(void **)((longlong)FVar13 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)FVar13 + 8));
        }
        ::operator_delete((void *)FVar13,0x18);
      }
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    if ((FVar14 == (FTextId)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0x9d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TDisplayStringPtr<FString_const_>)(*pcVar3)();
      return TVar8;
    }
    FInternationalization::Leetify((FString *)((longlong)FVar14 + 8));
    *param_1 = FVar14;
    if (FVar14 != (FTextId)0x0) {
      LOCK();
      *(int *)FVar14 = *(int *)FVar14 + 1;
      UNLOCK();
      LOCK();
      iVar5 = *(int *)FVar14;
      *(int *)FVar14 = *(int *)FVar14 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        if (*(void **)((longlong)FVar14 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)FVar14 + 8));
        }
        ::operator_delete((void *)FVar14,0x18);
      }
    }
    return (TDisplayStringPtr<FString_const_>)param_1;
  }
  pFVar9 = FKeysCulture::StaticGetName();
  TSharedPtr<FCulture,1>::ToSharedRef(&pFVar7->CurrentLanguage,&local_60);
  pFVar10 = FCulture::GetName(local_60.Object);
  iVar5 = (pFVar9->Data).ArrayNum;
  iVar1 = (pFVar10->Data).ArrayNum;
  if (iVar1 == iVar5) {
    if (iVar1 < 2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
      goto LAB_141756b39;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                       (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
    bVar4 = iVar5 == 0;
  }
  else {
    bVar4 = iVar5 + iVar1 == 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  if (!bVar4) {
    AcquireSRWLockShared((PSRWLOCK)&this->DisplayStringTableRW);
    pFVar11 = TMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
              ::Find((TMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
                      *)&this->DisplayStringLookupTable,(FTextId *)param_2);
    if ((pFVar11 != (FDisplayStringEntry *)0x0) &&
       ((*(int *)(in_R9 + 1) < 2 ||
        (uVar6 = FCrc::StrCrc32<wchar_t>((wchar_t *)*in_R9,0), pFVar11->SourceStringHash == uVar6)))
       ) {
      param_1->Namespace = 0;
      param_1->Key = 0;
      FVar14 = *(FTextId *)&pFVar11->DisplayString;
      *param_1 = FVar14;
      if (FVar14 != (FTextId)0x0) {
        LOCK();
        *(int *)FVar14 = *(int *)FVar14 + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)&this->DisplayStringTableRW);
      return (TDisplayStringPtr<FString_const_>)param_1;
    }
    param_1->Namespace = 0;
    param_1->Key = 0;
    ReleaseSRWLockShared((PSRWLOCK)&this->DisplayStringTableRW);
    return (TDisplayStringPtr<FString_const_>)param_1;
  }
LAB_141756b39:
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_res8[0].Index = *(int *)&(param_2->Data).AllocatorInstance.Data;
  FTextKey::AppendString(local_res8,&local_70);
  local_a8[0].Index = *(int *)((longlong)&(param_2->Data).AllocatorInstance.Data + 4);
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  FTextKey::AppendString(local_a8,&local_80);
  ::FString::PrintfImpl(&local_50,L"%s, %s");
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  TVar12 = MakeTextDisplayString((FString *)local_98);
  param_1->Namespace = 0;
  param_1->Key = 0;
  FVar14 = *(FTextId *)TVar12;
  *param_1 = FVar14;
  if (FVar14 != (FTextId)0x0) {
    LOCK();
    *(int *)FVar14 = *(int *)FVar14 + 1;
    UNLOCK();
  }
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::
  ~TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>
            ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)local_98);
  if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return (TDisplayStringPtr<FString_const_>)param_1;
  }
  FMemory::Free(local_50.Data.AllocatorInstance.Data);
  return (TDisplayStringPtr<FString_const_>)param_1;
}

// Get @ 14175b760

FTextLocalizationManager * __cdecl FTextLocalizationManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FTextLocalizationManager *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FTextLocalizationManager
              ((FTextLocalizationManager *)
               &`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154eb5200 =
         &`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FTextLocalizationManager>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FTextLocalizationManager *)DAT_154eb5200 == (FTextLocalizationManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTextLocalizationManager *)(*pcVar1)();
    return pFVar3;
  }
  return (FTextLocalizationManager *)DAT_154eb5200;
}

// GetDisplayString @ 14175ca80

TDisplayStringPtr<FString_const_> __thiscall
FTextLocalizationManager::GetDisplayString
          (FTextLocalizationManager *this,FTextKey *param_1,FTextKey *param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  TDisplayStringPtr<FString_const_> TVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  int local_res20;
  undefined4 local_res24;
  FString *in_stack_00000028;
  undefined1 local_38 [8];
  FTextId local_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1074,"FTextLocalizationManager::GetDisplayString",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x432);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1074);
  }
  if (*(int *)&(param_3->Data).AllocatorInstance.Data == -1) {
LAB_14175cd5d:
    *(undefined8 *)param_1 = 0;
    if (!bVar8) {
      return (TDisplayStringPtr<FString_const_>)param_1;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return (TDisplayStringPtr<FString_const_>)param_1;
  }
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_14175cd5d;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TDisplayStringPtr<FString_const_>)(*pcVar2)();
      return TVar4;
    }
  }
  local_res20 = param_2->Index;
  local_res24 = *(undefined4 *)&(param_3->Data).AllocatorInstance.Data;
  uVar6 = (ulonglong)_tls_index;
  if (in_stack_00000028 == (FString *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(``FTextLocalizationManager::GetDisplayString'::__l2::<lambda_1>::operator()'::__l2::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
    in_stack_00000028 = &::EmptyString;
  }
  FindDisplayString_Internal(this,&local_30,(FString *)&local_res20);
  if (local_30 == (FTextId)0x0) {
    bVar3 = FCommandLine::IsInitialized();
    if (bVar3) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pwVar5 = FCommandLine::Get();
        bShouldLEETIFYUnlocalizedString = FParse::Param(pwVar5,L"LEETIFYUnlocalized");
        _Init_thread_footer(&::_TSS0);
      }
      if (bShouldLEETIFYUnlocalizedString != false) {
        local_20 = (in_stack_00000028->Data).ArrayNum;
        lVar7 = (longlong)local_20;
        _Src = (in_stack_00000028->Data).AllocatorInstance.Data;
        local_28.Data = (FScriptContainerElement *)0x0;
        if (local_20 == 0) {
          local_1c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_20,0,&local_28,local_20,&local_1c);
          memcpy(local_28.Data,_Src,lVar7 * 2);
        }
        MakeTextDisplayString((FString *)local_38);
        if (local_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data);
        }
        if ((local_38 == (undefined1  [8])0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                               ,0x9d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar4 = (TDisplayStringPtr<FString_const_>)(*pcVar2)();
          return TVar4;
        }
        FInternationalization::Leetify((FString *)((longlong)local_38 + 8));
        *(undefined1 (*) [8])param_1 = local_38;
        if (local_38 != (undefined1  [8])0x0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + 1;
          UNLOCK();
          LOCK();
          iVar1 = *(int *)local_38;
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            if (*(void **)((longlong)local_38 + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)local_38 + 8));
            }
            ::operator_delete((void *)local_38,0x18);
          }
        }
        goto LAB_14175cd32;
      }
    }
    local_30.Namespace.Index = 0;
    local_30.Key.Index = 0;
  }
  *(FTextId *)param_1 = local_30;
LAB_14175cd32:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TDisplayStringPtr<FString_const_>)param_1;
}

// GetLocalRevisionForTextId @ 14175ebf0

ushort __thiscall
FTextLocalizationManager::GetLocalRevisionForTextId(FTextLocalizationManager *this,FTextId *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (((param_1->Namespace).Index != -1) || ((param_1->Key).Index != -1)) {
    AcquireSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
    puVar2 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
             ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                     *)&this->LocalTextRevisions,param_1);
    if (puVar2 != (ushort *)0x0) {
      uVar1 = *puVar2;
      ReleaseSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
      return uVar1;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
  }
  return 0;
}

// GetLocalizationTargetPathId @ 14175ed70

int __thiscall
FTextLocalizationManager::GetLocalizationTargetPathId
          (FTextLocalizationManager *this,TStringView<wchar_t> *param_1)

{
  int local_res8 [2];
  TStringView<wchar_t> local_18;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8[0] = -1;
  FDisplayStringsByLocalizationTargetId::FindOrAdd
            (&this->DisplayStringsByLocalizationTargetId,&local_18,local_res8);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
  return local_res8[0];
}

// GetLocalizedCultureNames @ 14175f1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FTextLocalizationManager::GetLocalizedCultureNames
          (FTextLocalizationManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ELocalizationLoadFlags param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FInternationalization *this_00;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8;
  FIdentityFunctor local_b7 [7];
  FInternationalization *local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar1 = (this->LocalizedTextSources).ArrayNum;
  iVar10 = 0;
  pFVar8 = (this->LocalizedTextSources).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_a8 = __return_storage_ptr__;
  while( true ) {
    if ((this->LocalizedTextSources).ArrayNum != iVar1) {
      local_b8 = 0;
      `TCheckedPointerIterator<TSharedPtr<ILocalizedTextSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b8);
    }
    if (pFVar8 == pFVar9) break;
    if ((*(longlong *)pFVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    (**(code **)(**(longlong **)pFVar8 + 0x18))(*(longlong **)pFVar8,param_1,local_98);
    pFVar8 = pFVar8 + 0x10;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
             __return_storage_ptr__);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_b7[0],(TLess<void> *)local_b7);
  this_00 = FInternationalization::Get();
  iVar1 = __return_storage_ptr__->ArrayNum;
  local_b0 = this_00;
  if (iVar1 != 0) {
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    bVar4 = FInternationalization::IsCultureAllowed(this_00,(FString *)pFVar8);
    iVar7 = 0;
    do {
      iVar3 = iVar7;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        bVar5 = FInternationalization::IsCultureAllowed
                          (this_00,(FString *)(pFVar8 + (longlong)iVar3 * 0x10));
      } while (bVar4 == bVar5);
      iVar11 = iVar3 - iVar7;
      if (bVar4 == false) {
        DestructItems<FString,int>((FString *)(pFVar8 + (longlong)iVar7 * 0x10),iVar11);
      }
      else {
        if (iVar10 != iVar7) {
          memmove(pFVar8 + (longlong)iVar10 * 0x10,pFVar8 + (longlong)iVar7 * 0x10,
                  (longlong)iVar11 << 4);
        }
        iVar10 = iVar10 + iVar11;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      this_00 = local_b0;
      iVar7 = iVar3;
    } while (iVar3 < iVar1);
    local_a8->ArrayNum = iVar10;
    __return_storage_ptr__ = local_a8;
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  bVar4 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// GetNativeCultureName @ 14175fee0

FString * __thiscall
FTextLocalizationManager::GetNativeCultureName
          (FTextLocalizationManager *this,FString *__return_storage_ptr__,
          ELocalizedTextSourceCategory param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (this->LocalizedTextSources).ArrayNum;
  pFVar6 = (this->LocalizedTextSources).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LocalizedTextSources).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<ILocalizedTextSource,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    cVar4 = (**(code **)(**(longlong **)pFVar6 + 0x10))
                      (*(longlong **)pFVar6,param_1,__return_storage_ptr__);
    if (cVar4 != '\0') {
      return __return_storage_ptr__;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return __return_storage_ptr__;
}

// GetRequestedLanguageName @ 141760b30

FString * __thiscall
FTextLocalizationManager::GetRequestedLanguageName
          (FTextLocalizationManager *this,FString *__return_storage_ptr__)

{
  ERequestedCultureOverrideLevel local_res10 [24];
  
  local_res10[0] = Defaults;
  GetRequestedLanguage(__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// GetRequestedLocaleName @ 141760c50

FString * __thiscall
FTextLocalizationManager::GetRequestedLocaleName
          (FTextLocalizationManager *this,FString *__return_storage_ptr__)

{
  ERequestedCultureOverrideLevel local_res10 [24];
  
  local_res10[0] = Defaults;
  GetRequestedLocale(__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// GetTextRevision @ 141761890

ushort __thiscall FTextLocalizationManager::GetTextRevision(FTextLocalizationManager *this)

{
  ushort uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
  uVar1 = this->TextRevisionCounter;
  ReleaseSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
  return uVar1;
}

// GetTextRevisions @ 1417618e0

void __thiscall
FTextLocalizationManager::GetTextRevisions
          (FTextLocalizationManager *this,FTextId *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
  *param_2 = this->TextRevisionCounter;
  if (((param_1->Namespace).Index != -1) || ((param_1->Key).Index != -1)) {
    puVar2 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
             ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                     *)&this->LocalTextRevisions,param_1);
    if (puVar2 != (ushort *)0x0) {
      uVar1 = *puVar2;
      goto LAB_141761943;
    }
  }
  uVar1 = 0;
LAB_141761943:
  *param_3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000141761968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->TextRevisionRW);
  return;
}

// HandleLocalizationTargetsMounted @ 1417623b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::HandleLocalizationTargetsMounted
          (FTextLocalizationManager *this,TArrayView<FString_const_,int> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  int iVar1;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<ILocalizedTextSource,1> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FDisplayStringsForLocalizationTarget *pFVar7;
  FInternationalization *this_01;
  FInternationalization *pFVar8;
  FString *pFVar9;
  undefined8 uVar10;
  code **ppcVar11;
  void *pvVar12;
  longlong *plVar13;
  FString *pFVar14;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_138;
  undefined8 local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TStringView<wchar_t> local_f8;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->InitializedFlags == (atomic<ETextLocalizationManagerInitializedFlags>)0x0) ||
     (iVar1 = param_1->ArrayNum, iVar1 == 0)) {
    pvVar12 = *(void **)param_2;
  }
  else {
    bVar6 = IsDisplayStringSupportEnabled();
    if (bVar6) {
      AcquireSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
      pFVar9 = param_1->DataPtr;
      pFVar14 = pFVar9 + iVar1;
      for (; pFVar9 != pFVar14; pFVar9 = pFVar9 + 1) {
        local_108 = (pFVar9->Data).AllocatorInstance.Data;
        iVar1 = (pFVar9->Data).ArrayNum;
        iStack_100 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_100 = 0;
        }
        local_f8._12_4_ = uStack_fc;
        local_f8.Size = iStack_100;
        local_f8.DataPtr = (wchar_t *)local_108;
        pFVar7 = FDisplayStringsByLocalizationTargetId::FindOrAdd
                           (&this->DisplayStringsByLocalizationTargetId,&local_f8,(int *)0x0);
        pFVar7->bIsMounted = true;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->DisplayStringTableRW);
      this_01 = FInternationalization::Get();
      pFVar8 = FInternationalization::Get();
      if (((pFVar8->CurrentLanguage).Object == (FCulture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (pFVar8->CurrentLanguage).Object;
      pTVar2 = (pFVar8->CurrentLanguage).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FCulture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = FCulture::GetName(this_00);
      FInternationalization::GetPrioritizedCultureNames(this_01,&local_118,pFVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar1 = param_1->ArrayNum;
      local_128.Data = (FScriptContainerElement *)0x0;
      local_120 = CONCAT44(local_120._4_4_,iVar1);
      if (iVar1 == 0) {
        local_120 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,&local_128,iVar1,(int *)((longlong)&local_120 + 4));
        ConstructItems<FString,FString,int>(local_128.Data,param_1->DataPtr,iVar1);
      }
      iVar1 = local_118.ArrayNum;
      FVar5.Data = local_118.AllocatorInstance.Data;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = CONCAT44(local_130._4_4_,local_118.ArrayNum);
      if (local_118.ArrayNum == 0) {
        local_130 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_118.ArrayNum,0,&local_138,local_118.ArrayNum,
                   (int *)((longlong)&local_130 + 4));
        ConstructItems<FString,FString,int>(local_138.Data,(FString *)FVar5.Data,iVar1);
      }
      iVar1 = (this->LocalizedTextSources).ArrayNum;
      pTVar3 = (TSharedPtr<ILocalizedTextSource,1> *)
               (this->LocalizedTextSources).AllocatorInstance.Data;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = CONCAT44(local_e0._4_4_,iVar1);
      if (iVar1 == 0) {
        local_e0 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,&local_e8,iVar1,(int *)((longlong)&local_e0 + 4));
        ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
                  (local_e8.Data,pTVar3,iVar1);
      }
      local_a8 = *(code **)param_2;
      local_d8 = local_128.Data;
      local_d0._0_4_ = (int)local_120;
      local_d0._4_4_ = local_120._4_4_;
      local_c8 = local_138.Data;
      local_c0._0_4_ = (int)local_130;
      local_c0._4_4_ = local_130._4_4_;
      local_80 = *(code ***)&param_2->field_0x28;
      *(undefined8 *)&param_2->field_0x28 = 0;
      local_88 = *(code **)&param_2->field_0x20;
      local_128.Data = (FScriptContainerElement *)0x0;
      local_120 = 0;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      local_b8 = 0xd;
      local_98 = *(code **)&param_2->field_0x10;
      pcStack_90 = *(code **)&param_2->field_0x18;
      if (local_a8 != (code *)0x0) {
        *(undefined8 *)param_2 = 0;
      }
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x80,0x10);
      local_50[2] = (code *)0x0;
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      local_50[2] = (code *)local_e8.Data;
      local_e8.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_50 + 3) = (int)local_e0;
      *(undefined4 *)((longlong)local_50 + 0x1c) = local_e0._4_4_;
      local_e0 = 0;
      local_50[4] = (code *)0x0;
      local_50[4] = (code *)local_d8;
      local_d8 = (FScriptContainerElement *)0x0;
      *(int *)(local_50 + 5) = (int)local_d0;
      *(undefined4 *)((longlong)local_50 + 0x2c) = local_d0._4_4_;
      local_d0 = 0;
      local_50[6] = (code *)0x0;
      local_50[6] = (code *)local_c8;
      local_c8 = (FScriptContainerElement *)0x0;
      *(int *)(local_50 + 7) = (int)local_c0;
      *(undefined4 *)((longlong)local_50 + 0x3c) = local_c0._4_4_;
      local_c0 = 0;
      *(undefined1 *)(local_50 + 8) = local_b8;
      local_50[10] = local_a8;
      local_50[0xf] = (code *)local_80;
      local_80 = (code **)0x0;
      local_50[0xc] = local_98;
      local_50[0xd] = pcStack_90;
      local_50[0xe] = local_88;
      if (local_50[10] != (code *)0x0) {
        local_a8 = (code *)0x0;
      }
      if (local_50 + 2 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>,void>
                      ::Call;
      }
      QueueAsyncTask(this,(TUniqueFunction<void___cdecl(void)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar11 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar11 = local_50;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
      if (local_a8 != (code *)0x0) {
        ppcVar11 = &local_98;
        if (local_80 != (code **)0x0) {
          ppcVar11 = local_80;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
      DestructItems<FString,int>((FString *)local_c8,(int)local_c0);
      if (local_c8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8);
      }
      DestructItems<FString,int>((FString *)local_d8,(int)local_d0);
      if (local_d8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8);
      }
      DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
                ((TSharedPtr<ILocalizedTextSource,1> *)local_e8.Data,(int)local_e0);
      if ((TSharedPtr<ILocalizedTextSource,1> *)local_e8.Data !=
          (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      DestructItems<FString,int>((FString *)local_138.Data,(int)local_130);
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data);
      }
      DestructItems<FString,int>((FString *)local_128.Data,(int)local_120);
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if (local_118.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_118.AllocatorInstance.Data);
      return;
    }
    pvVar12 = *(void **)param_2;
  }
  if (pvVar12 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(pvVar12);
    pcVar4 = *(code **)param_2;
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    uVar10 = (**(code **)(*plVar13 + 8))();
    (*pcVar4)(uVar10);
  }
  return;
}

// HandleLocalizationTargetsUnmounted @ 1417628e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::HandleLocalizationTargetsUnmounted
          (FTextLocalizationManager *this,TArrayView<FString_const_,int> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  code **ppcVar5;
  longlong *plVar6;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FScriptContainerElement *local_a8;
  undefined8 local_a0;
  code *local_98;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((this->InitializedFlags == (atomic<ETextLocalizationManagerInitializedFlags>)0x0) ||
     (iVar1 = param_1->ArrayNum, iVar1 == 0)) {
    if (*(void **)param_2 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar6 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar6 = *(longlong **)&param_2->field_0x28;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar4);
    }
  }
  else {
    bVar3 = IsDisplayStringSupportEnabled();
    if (bVar3) {
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0._0_4_ = iVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_b8,iVar1,(int *)((longlong)&local_b0 + 4));
      ConstructItems<FString,FString,int>(local_b8.Data,param_1->DataPtr,iVar1);
      local_98 = *(code **)param_2;
      local_a8 = local_b8.Data;
      local_a0._0_4_ = (int)local_b0;
      local_a0._4_4_ = local_b0._4_4_;
      local_70 = *(code ***)&param_2->field_0x28;
      *(undefined8 *)&param_2->field_0x28 = 0;
      local_78 = *(code **)&param_2->field_0x20;
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = 0;
      local_88 = *(code **)&param_2->field_0x10;
      pcStack_80 = *(code **)&param_2->field_0x18;
      if (local_98 != (code *)0x0) {
        *(undefined8 *)param_2 = 0;
      }
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x50,0x10);
      local_40[2] = (code *)0x0;
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      local_40[2] = (code *)local_a8;
      local_a8 = (FScriptContainerElement *)0x0;
      *(int *)(local_40 + 3) = (int)local_a0;
      *(undefined4 *)((longlong)local_40 + 0x1c) = local_a0._4_4_;
      local_a0 = 0;
      local_40[4] = local_98;
      local_40[9] = (code *)local_70;
      local_70 = (code **)0x0;
      local_40[6] = local_88;
      local_40[7] = pcStack_80;
      local_40[8] = local_78;
      if (local_40[4] != (code *)0x0) {
        local_98 = (code *)0x0;
      }
      if (local_40 + 2 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::__l2::<lambda_1>,void>
                      ::Call;
      }
      QueueAsyncTask(this,(TUniqueFunction<void___cdecl(void)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        ppcVar5 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar5 = local_40;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
      if (local_98 != (code *)0x0) {
        ppcVar5 = &local_88;
        if (local_70 != (code **)0x0) {
          ppcVar5 = local_70;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
      DestructItems<FString,int>((FString *)local_a8,(int)local_a0);
      if (local_a8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8);
      }
      DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
    else if (*(longlong *)param_2 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(void)>
                  *)param_2);
    }
  }
  return;
}

// IsDisplayStringSupportEnabled @ 141766bd0

bool __cdecl FTextLocalizationManager::IsDisplayStringSupportEnabled(void)

{
  code *pcVar1;
  bool bVar2;
  
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) {
      return false;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return true;
}

// LoadChunkedLocalizationResources_Async @ 141768270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::LoadChunkedLocalizationResources_Async
          (FTextLocalizationManager *this,int param_1,FString *param_2)

{
  int iVar1;
  TSharedPtr<ILocalizedTextSource,1> *pTVar2;
  code **ppcVar3;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  int local_88;
  FString local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar1 = (this->LocalizedTextSources).ArrayNum;
  pTVar2 = (TSharedPtr<ILocalizedTextSource,1> *)(this->LocalizedTextSources).AllocatorInstance.Data
  ;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = CONCAT44(local_90._4_4_,iVar1);
  if (iVar1 == 0) {
    local_90 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_98,iVar1,(int *)((longlong)&local_90 + 4));
    ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
              (local_98.Data,pTVar2,iVar1);
  }
  local_88 = param_1;
  ::FString::FString(&local_80,param_2);
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x30,8);
  local_40[1] = (code *)0x0;
  ppcVar3 = local_40 + 1;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *ppcVar3 = (code *)local_98.Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_40 + 2) = (int)local_90;
  *(undefined4 *)((longlong)local_40 + 0x14) = local_90._4_4_;
  local_90 = 0;
  *(int *)(local_40 + 3) = local_88;
  ::FString::FString((FString *)(local_40 + 4),&local_80);
  if (ppcVar3 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::__l2::<lambda_1>,void>
                  ::Call;
  }
  QueueAsyncTask(this,(TUniqueFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar3 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar3 = local_40;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            ((TSharedPtr<ILocalizedTextSource,1> *)local_98.Data,(int)local_90);
  if ((TSharedPtr<ILocalizedTextSource,1> *)local_98.Data !=
      (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// LoadChunkedLocalizationResources_Sync @ 141768400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::LoadChunkedLocalizationResources_Sync
          (FTextLocalizationManager *this,
          TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> *param_1,int param_2,
          FString *param_3)

{
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  FLocalizationResourceTextSource *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  IFileManager *pIVar12;
  ulonglong uVar13;
  FInternationalization *this_01;
  FInternationalization *pFVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined **ppuVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  int iVar24;
  bool bVar25;
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1f0;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  FString local_1d0;
  int local_1c0;
  FString local_1b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1a8;
  FLLMScope local_198 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  int local_180 [2];
  int local_178 [2];
  uint local_170;
  int local_168 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_160;
  FTextLocalizationMetaDataResource local_150;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_118;
  FScriptContainerElement *local_110;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_e8;
  FScriptContainerElement *local_d8;
  FMemScope local_d0;
  FString local_c8;
  FString local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  TArrayView<FString_const_,int> local_78;
  TArrayView<FString_const_,int> local_68;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_58;
  
  FLLMScope::FLLMScope(local_198,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_d0,Localization,true);
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1566,
               "FTextLocalizationManager::LoadChunkedLocalizationResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x61e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1566);
  }
  if ((param_2 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkId != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                         ,0x620,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (5 < (byte)LogTextLocalizationManager._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager)
    ;
  }
  if (((this->LocResTextSource).Object == (FLocalizationResourceTextSource *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = (this->LocResTextSource).Object;
  pFVar16 = (pFVar9->ChunkIds).AllocatorInstance.Data;
  pFVar22 = pFVar16 + (longlong)(pFVar9->ChunkIds).ArrayNum * 4;
  for (; pFVar16 != pFVar22; pFVar16 = pFVar16 + 4) {
    if (*(int *)pFVar16 == param_2) {
      if (5 < (byte)LogTextLocalizationManager._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
      }
      goto LAB_141769094;
    }
  }
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) {
      if (((this->LocResTextSource).Object == (FLocalizationResourceTextSource *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_180[0] = param_2;
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&((this->LocResTextSource).Object)->ChunkIds,local_180);
      if (5 < (byte)LogTextLocalizationManager._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
      }
      goto LAB_141769094;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->InitializedFlags == (atomic<ETextLocalizationManagerInitializedFlags>)0x0) {
    local_178[0] = param_2;
    pFVar9 = TSharedPtr<FLocalizationResourceTextSource,1>::operator->(&this->LocResTextSource);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&pFVar9->ChunkIds,local_178)
    ;
    if (5 < (byte)LogTextLocalizationManager._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
    }
  }
  else {
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.ArrayNum = 0;
    local_160.ArrayMax = 0;
    pTVar10 = FPaths::GetGameLocalizationPaths();
    TArray<FString,TSizedDefaultAllocator<32>_>::operator+=(&local_160,pTVar10);
    FLocalizationResourceTextSource::GetChunkedLocalizationTargets(&local_190);
    FVar23.Data = local_190.AllocatorInstance.Data;
    local_118 = &local_160;
    local_1c0 = local_190.ArrayNum;
    if (local_190.ArrayNum != 0) {
      iVar21 = 0;
      bVar4 = `FTextLocalizationManager::LoadChunkedLocalizationResources_Sync'::__l2::<lambda_1>::
              operator()(&local_118,(FString *)local_190.AllocatorInstance.Data);
      bVar4 = !bVar4;
      iVar24 = local_190.ArrayNum;
      iVar7 = 0;
      do {
        iVar3 = iVar7;
        do {
          iVar3 = iVar3 + 1;
          if (iVar24 <= iVar3) break;
          bVar5 = `FTextLocalizationManager::LoadChunkedLocalizationResources_Sync'::__l2::
                  <lambda_1>::operator()
                            (&local_118,(FString *)(FVar23.Data + (longlong)iVar3 * 0x10));
        } while (bVar4 == !bVar5);
        iVar24 = iVar3 - iVar7;
        if (bVar4 == false) {
          DestructItems<FString,int>((FString *)(FVar23.Data + (longlong)iVar7 * 0x10),iVar24);
        }
        else {
          if (iVar21 != iVar7) {
            memmove(FVar23.Data + (longlong)iVar21 * 0x10,FVar23.Data + (longlong)iVar7 * 0x10,
                    (longlong)iVar24 << 4);
          }
          iVar21 = iVar21 + iVar24;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar24 = local_1c0;
        iVar7 = iVar3;
        local_190.ArrayNum = iVar21;
      } while (iVar3 < local_1c0);
    }
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 0x10;
    local_1d8 = 0;
    FVar23.Data = local_190.AllocatorInstance.Data;
    local_1c0 = local_190.ArrayNum;
    while( true ) {
      pFVar22 = local_d8;
      local_110 = FVar23.Data;
      if (local_190.ArrayNum != local_1c0) {
        local_1f8 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1f8);
      }
      if (FVar23.Data == pFVar22) break;
      TextLocalizationResourceUtil::GetLocalizationTargetNameForChunkId
                (&local_1d0,(FString *)FVar23.Data,param_2);
      pTVar11 = &FPaths::ProjectContentDir(&local_88)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_e8,pTVar11,0xe - (uint)(pTVar11->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_e8,L"Localization",0xc);
      iVar24 = local_1d0.Data.ArrayNum + -1;
      if (local_1d0.Data.ArrayNum == 0) {
        iVar24 = 0;
      }
      if ((local_e8.ArrayNum != 0) || (iVar7 = 1, iVar24 + 1 == 0)) {
        iVar7 = 0;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_1f0,&local_e8,iVar7 + iVar24 + 1);
      ::FString::PathAppend
                ((FString *)&local_1f0,(wchar_t *)local_1d0.Data.AllocatorInstance.Data,iVar24);
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pIVar12 = IFileManager::Get();
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_1f0.ArrayNum != 0) {
        FVar23.Data = local_1f0.AllocatorInstance.Data;
      }
      cVar6 = (**(code **)((longlong)*pIVar12 + 0x58))(pIVar12,FVar23.Data);
      if (cVar6 == '\0') {
        if (5 < (byte)LogTextLocalizationManager._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
        }
LAB_141768e61:
        local_f8.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
        if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.AllocatorInstance.Data);
          local_f8.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
        }
LAB_141769039:
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
        goto LAB_141769043;
      }
      local_150.NativeCulture.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.NativeCulture.Data.ArrayNum = 0;
      local_150.NativeCulture.Data.ArrayMax = 0;
      local_150.NativeLocRes.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.NativeLocRes.Data.ArrayNum = 0;
      local_150.NativeLocRes.Data.ArrayMax = 0;
      local_150.CompiledCultures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.CompiledCultures.ArrayNum = 0;
      local_150.CompiledCultures.ArrayMax = 0;
      local_150.bIsUGC = false;
      ::FString::PrintfImpl(&local_c8,L"%s.locmeta");
      FVar23.Data = local_1f0.AllocatorInstance.Data;
      iVar7 = local_1f0.ArrayNum;
      lVar20 = (longlong)local_1f0.ArrayNum;
      iVar24 = local_c8.Data.ArrayNum + -1;
      if (local_c8.Data.ArrayNum == 0) {
        iVar24 = 0;
      }
      iVar21 = iVar24 + 1;
      if ((local_1f0.ArrayNum == 0) && (iVar21 != 0)) {
        iVar21 = iVar24 + 2;
LAB_141768944:
        local_1b8.Data.ArrayNum = local_1f0.ArrayNum;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar21 != 0) goto LAB_14176894e;
        local_1b8.Data.ArrayMax = 0;
      }
      else {
        if (local_1f0.ArrayNum == 0) goto LAB_141768944;
LAB_14176894e:
        local_1b8.Data.ArrayNum = local_1f0.ArrayNum;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar8 = local_1f0.ArrayNum + iVar21;
        if ((int)uVar8 < local_1f0.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,0,(ForAnyElementType *)&local_1b8,local_1f0.ArrayNum,
                   &local_1b8.Data.ArrayMax);
        if (iVar7 != 0) {
          memcpy(local_1b8.Data.AllocatorInstance.Data,FVar23.Data,lVar20 * 2);
        }
      }
      ::FString::PathAppend(&local_1b8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar24);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      pIVar12 = IFileManager::Get();
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_1b8.Data.ArrayNum != 0) {
        FVar23.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      cVar6 = (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,FVar23.Data);
      if (cVar6 == '\0') {
        local_108.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        if (5 < (byte)LogTextLocalizationManager._0_1_) {
          ppuVar18 = (undefined **)&::LOG_Static;
LAB_141768dbc:
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)ppuVar18,
                     (FLogCategoryBase *)&LogTextLocalizationManager);
          local_108.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        }
LAB_141768ddb:
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_150.CompiledCultures.AllocatorInstance.Data,
                   local_150.CompiledCultures.ArrayNum);
        if (local_150.CompiledCultures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.CompiledCultures.AllocatorInstance.Data);
        }
        if (local_150.NativeLocRes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.NativeLocRes.Data.AllocatorInstance.Data);
        }
        if (local_150.NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.NativeCulture.Data.AllocatorInstance.Data);
        }
        goto LAB_141768e61;
      }
      bVar4 = FTextLocalizationMetaDataResource::LoadFromFile(&local_150,&local_1b8);
      if (!bVar4) {
        local_108.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        if (5 < (byte)LogTextLocalizationManager._0_1_) {
          ppuVar18 = &PTR_u_Skipped_loading_150674898;
          goto LAB_141768dbc;
        }
        goto LAB_141768ddb;
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      uVar13 = (ulonglong)local_150.CompiledCultures.ArrayNum;
      pFVar22 = local_150.CompiledCultures.AllocatorInstance.Data + uVar13 * 0x10;
      local_170 = local_150.CompiledCultures.ArrayNum;
      uVar17 = uVar13;
      FVar23.Data = local_150.CompiledCultures.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar13 != (int)uVar17) {
          local_1f7[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1f7);
        }
        if (FVar23.Data == pFVar22) break;
        ::FString::PrintfImpl(&local_b8,L"%s.locres");
        FVar19.Data = local_1f0.AllocatorInstance.Data;
        iVar7 = local_1f0.ArrayNum;
        lVar20 = (longlong)local_1f0.ArrayNum;
        iVar24 = *(int *)(FVar23.Data + 8) + -1;
        if (*(int *)(FVar23.Data + 8) == 0) {
          iVar24 = 0;
        }
        iVar21 = iVar24 + 1;
        if ((local_1f0.ArrayNum == 0) && (iVar21 != 0)) {
          iVar21 = iVar24 + 2;
LAB_141768aa4:
          local_1a8.ArrayNum = local_1f0.ArrayNum;
          local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (iVar21 != 0) goto LAB_141768aad;
          local_1a8.ArrayMax = 0;
        }
        else {
          if (local_1f0.ArrayNum == 0) goto LAB_141768aa4;
LAB_141768aad:
          local_1a8.ArrayNum = local_1f0.ArrayNum;
          local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar8 = local_1f0.ArrayNum + iVar21;
          if ((int)uVar8 < local_1f0.ArrayNum) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar8,0,&local_1a8.AllocatorInstance,local_1f0.ArrayNum,&local_1a8.ArrayMax
                    );
          if (iVar7 != 0) {
            memcpy(local_1a8.AllocatorInstance.Data,FVar19.Data,lVar20 * 2);
          }
        }
        ::FString::PathAppend((FString *)&local_1a8,*(wchar_t **)FVar23.Data,iVar24);
        iVar24 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar24 = 0;
        }
        if ((local_1a8.ArrayNum != 0) || (iVar7 = 1, iVar24 + 1 == 0)) {
          iVar7 = 0;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_108,&local_1a8,iVar24 + 1 + iVar7);
        ::FString::PathAppend
                  ((FString *)&local_108,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar24);
        if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        pIVar12 = IFileManager::Get();
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_108.ArrayNum != 0) {
          FVar19.Data = local_108.AllocatorInstance.Data;
        }
        cVar6 = (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,FVar19.Data);
        if (cVar6 == '\0') {
          if (5 < (byte)LogTextLocalizationManager._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
          }
          goto LAB_141768ddb;
        }
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        uVar13 = local_150.CompiledCultures._8_8_ & 0xffffffff;
        FVar23.Data = FVar23.Data + 0x10;
        uVar17 = (ulonglong)local_170;
      }
      if (((local_1e0.Data <= &local_1f0) &&
          (&local_1f0 <
           (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
           (local_1e0.Data + (longlong)local_1d8._4_4_ * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar24 = (int)local_1d8;
      if ((int)local_1d8 == local_1d8._4_4_) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1e0,(int *)((longlong)&local_1d8 + 4));
      }
      local_1d8 = CONCAT44(local_1d8._4_4_,iVar24 + 1);
      pFVar22 = local_1e0.Data + (longlong)iVar24 * 0x10;
      *(undefined8 *)pFVar22 = 0;
      *(FScriptContainerElement **)pFVar22 = local_1f0.AllocatorInstance.Data;
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar22 + 8) = local_1f0.ArrayNum;
      *(int *)(pFVar22 + 0xc) = local_1f0.ArrayMax;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      DestructItems<FString,int>
                ((FString *)local_150.CompiledCultures.AllocatorInstance.Data,
                 local_150.CompiledCultures.ArrayNum);
      if (local_150.CompiledCultures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.CompiledCultures.AllocatorInstance.Data);
      }
      if (local_150.NativeLocRes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.NativeLocRes.Data.AllocatorInstance.Data);
      }
      if (local_150.NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.NativeCulture.Data.AllocatorInstance.Data);
      }
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      FVar23.Data = local_110 + 0x10;
    }
    if (((this->LocResTextSource).Object == (FLocalizationResourceTextSource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_168[0] = param_2;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&((this->LocResTextSource).Object)->ChunkIds,local_168);
    if (((byte)this->InitializedFlags & 2) != 0) {
      this_01 = FInternationalization::Get();
      pFVar14 = FInternationalization::Get();
      if (((pFVar14->CurrentLanguage).Object == (FCulture *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (pFVar14->CurrentLanguage).Object;
      pTVar1 = (pFVar14->CurrentLanguage).SharedReferenceCount.ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FCulture *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = FCulture::GetName(this_00);
      FInternationalization::GetPrioritizedCultureNames(this_01,&local_f8,pFVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      iStack_a0 = local_f8.ArrayNum;
      local_a8 = local_f8.AllocatorInstance.Data;
      if ((local_f8.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar24 = (int)local_1d8;
      local_98 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_1e0.Data;
      if (((int)local_1d8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78._12_4_ = uStack_9c;
      local_78.ArrayNum = iStack_a0;
      local_78.DataPtr = (FString *)local_a8;
      iStack_90 = iVar24;
      local_68._12_4_ = uStack_8c;
      local_68.ArrayNum = iVar24;
      local_58.DataPtr = param_1->DataPtr;
      local_58.ArrayNum = param_1->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_68.DataPtr = (FString *)local_98;
      LoadLocalizationTargetsForPrioritizedCultures_Sync
                (this,&local_58,&local_68,&local_78,Game|Native);
      DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      goto LAB_141769039;
    }
LAB_141769043:
    DestructItems<FString,int>((FString *)local_1e0.Data,(int)local_1d8);
    if ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_1e0.Data !=
        (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
    DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
    if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
  }
LAB_141769094:
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_d0);
  FLLMScope::~FLLMScope(local_198);
  return;
}

// LoadLocalizationResourcesForCulture_Async @ 14176a720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async
          (FTextLocalizationManager *this,FString *param_1,ELocalizationLoadFlags param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  int iVar1;
  TSharedPtr<ILocalizedTextSource,1> *pTVar2;
  code **ppcVar3;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FString local_c8;
  ELocalizationLoadFlags local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar1 = (this->LocalizedTextSources).ArrayNum;
  pTVar2 = (TSharedPtr<ILocalizedTextSource,1> *)(this->LocalizedTextSources).AllocatorInstance.Data
  ;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = CONCAT44(local_d0._4_4_,iVar1);
  if (iVar1 == 0) {
    local_d0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_d8,iVar1,(int *)((longlong)&local_d0 + 4));
    ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
              (local_d8.Data,pTVar2,iVar1);
  }
  ::FString::FString(&local_c8,param_1);
  local_a8 = *(code **)param_3;
  local_80 = *(code ***)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_88 = *(code **)&param_3->field_0x20;
  local_98 = *(code **)&param_3->field_0x10;
  pcStack_90 = *(code **)&param_3->field_0x18;
  if (local_a8 != (code *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  local_78[0] = (code *)0x0;
  local_b8 = param_2;
  ppcVar3 = FMemory::Malloc(0x70,0x10);
  ppcVar3[2] = (code *)0x0;
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::`2'::<lambda_1>,1,1>
                      ::_vftable_;
  ppcVar3[2] = (code *)local_d8.Data;
  local_d8.Data = (FScriptContainerElement *)0x0;
  *(int *)(ppcVar3 + 3) = (int)local_d0;
  *(undefined4 *)((longlong)ppcVar3 + 0x1c) = local_d0._4_4_;
  local_d0 = 0;
  local_50 = ppcVar3;
  ::FString::FString((FString *)(ppcVar3 + 4),&local_c8);
  *(ELocalizationLoadFlags *)(ppcVar3 + 6) = local_b8;
  ppcVar3[8] = local_a8;
  ppcVar3[0xd] = (code *)local_80;
  local_80 = (code **)0x0;
  ppcVar3[10] = local_98;
  ppcVar3[0xb] = pcStack_90;
  ppcVar3[0xc] = local_88;
  if (ppcVar3[8] != (code *)0x0) {
    local_a8 = (code *)0x0;
  }
  if (ppcVar3 + 2 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::__l2::<lambda_1>,void>
                  ::Call;
  }
  QueueAsyncTask(this,(TUniqueFunction<void___cdecl(void)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    ppcVar3 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar3 = local_50;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    ppcVar3 = &local_98;
    if (local_80 != (code **)0x0) {
      ppcVar3 = local_80;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            ((TSharedPtr<ILocalizedTextSource,1> *)local_d8.Data,(int)local_d0);
  if ((TSharedPtr<ILocalizedTextSource,1> *)local_d8.Data !=
      (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// LoadLocalizationResourcesForCulture_Sync @ 14176a930

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::LoadLocalizationResourcesForCulture_Sync
          (FTextLocalizationManager *this,
          TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> *param_1,FString *param_2,
          ELocalizationLoadFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  FInternationalization *pFVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FLLMScope local_res18 [2];
  FMemScope local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TSharedPtr<FCulture,1> local_38;
  TArrayView<FString_const_,int> local_28;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_18;
  
  FLLMScope::FLLMScope(local_res18,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_68,Localization,true);
  if (1 < (param_2->Data).ArrayNum) {
    pFVar3 = FInternationalization::Get();
    FInternationalization::GetCulture(pFVar3,&local_38,param_2);
    if (local_38.Object != (FCulture *)0x0) {
      pFVar3 = FInternationalization::Get();
      pTVar4 = FInternationalization::GetPrioritizedCultureNames(pFVar3,&local_60,param_2);
      local_48 = (pTVar4->AllocatorInstance).Data;
      iStack_40 = pTVar4->ArrayNum;
      if (iStack_40 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_18.DataPtr = param_1->DataPtr;
      local_18.ArrayNum = param_1->ArrayNum;
      local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_28._12_4_ = uStack_3c;
      local_28.ArrayNum = iStack_40;
      local_28.DataPtr = (FString *)local_48;
      LoadLocalizationResourcesForPrioritizedCultures_Sync(this,&local_18,&local_28,param_3);
      DestructItems<FString,int>((FString *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// LoadLocalizationResourcesForPrioritizedCultures_Async @ 14176aa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async
          (FTextLocalizationManager *this,TArrayView<FString_const_,int> *param_1,
          ELocalizationLoadFlags param_2)

{
  int iVar1;
  FString *pFVar2;
  TSharedPtr<ILocalizedTextSource,1> *pTVar3;
  code **ppcVar4;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  ELocalizationLoadFlags local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = CONCAT44(local_a0._4_4_,iVar1);
  if (iVar1 == 0) {
    local_a0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_a8,iVar1,(int *)((longlong)&local_a0 + 4));
    ConstructItems<FString,FString,int>(local_a8.Data,pFVar2,iVar1);
  }
  iVar1 = (this->LocalizedTextSources).ArrayNum;
  pTVar3 = (TSharedPtr<ILocalizedTextSource,1> *)(this->LocalizedTextSources).AllocatorInstance.Data
  ;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = CONCAT44(local_90._4_4_,iVar1);
  if (iVar1 == 0) {
    local_90 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_98,iVar1,(int *)((longlong)&local_90 + 4));
    ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
              (local_98.Data,pTVar3,iVar1);
  }
  local_88 = local_a8.Data;
  local_80._0_4_ = (int)local_a0;
  local_80._4_4_ = local_a0._4_4_;
  local_a0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68[0] = (code *)0x0;
  local_78 = param_2;
  local_40 = FMemory::Malloc(0x30,8);
  local_40[1] = (code *)0x0;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_40[1] = (code *)local_98.Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_40 + 2) = (int)local_90;
  *(undefined4 *)((longlong)local_40 + 0x14) = local_90._4_4_;
  local_90 = 0;
  local_40[3] = (code *)0x0;
  local_40[3] = (code *)local_88;
  local_88 = (FScriptContainerElement *)0x0;
  *(int *)(local_40 + 4) = (int)local_80;
  *(undefined4 *)((longlong)local_40 + 0x24) = local_80._4_4_;
  local_80 = 0;
  *(ELocalizationLoadFlags *)(local_40 + 5) = local_78;
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::__l2::<lambda_1>,void>
                  ::Call;
  }
  QueueAsyncTask(this,(TUniqueFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar4 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar4 = local_40;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  DestructItems<FString,int>((FString *)local_88,(int)local_80);
  if (local_88 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            ((TSharedPtr<ILocalizedTextSource,1> *)local_98.Data,(int)local_90);
  if ((TSharedPtr<ILocalizedTextSource,1> *)local_98.Data !=
      (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
    FMemory::Free(local_98.Data);
  }
  DestructItems<FString,int>((FString *)local_a8.Data,(int)local_a0);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// LoadLocalizationResourcesForPrioritizedCultures_Sync @ 14176acb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Sync
          (FTextLocalizationManager *this,
          TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> *param_1,
          TArrayView<FString_const_,int> *param_2,ELocalizationLoadFlags param_3)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  TSharedPtr<ILocalizedTextSource,1> *pTVar4;
  TSharedPtr<ILocalizedTextSource,1> *pTVar5;
  bool bVar6;
  undefined1 auStackY_118 [32];
  FUpdateLiveTableOptions local_e8 [2];
  FLLMScope local_e4;
  FLLMScope local_e0 [2];
  FMemScope local_d8;
  FTextLocalizationManager *local_d0;
  FMemScope local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d0 = this;
  FLLMScope::FLLMScope(local_e0,Localization,false,None,Default,true);
  FMemScope::FMemScope(local_c8,Localization,true);
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1446,
               "FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x5a6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1446);
  }
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_14176af62;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar2 = ThreadLocalStoragePointer;
  if (param_2->ArrayNum != 0) {
    pTVar4 = param_1->DataPtr;
    pTVar5 = pTVar4 + param_1->ArrayNum;
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_a8._32_8_ = 0;
    local_a8._40_4_ = 0;
    local_a8._44_4_ = 0x80;
    local_a8._48_4_ = 0xffffffff;
    local_a8._52_4_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    for (; pTVar4 != pTVar5; pTVar4 = pTVar4 + 1) {
      if ((*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS1)
         && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&LLMScope_Name1460,L"Localization/DisplayStrings");
        _Init_thread_footer(&::_TSS1);
      }
      FLLMScope::FLLMScope(&local_e4,LLMScope_Name1460,false,None,Default,true);
      FMemScope::FMemScope(&local_d8,&LLMScope_Name1460,true);
      if ((pTVar4->Object == (ILocalizedTextSource *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_b8 = *(undefined4 *)&param_2->DataPtr;
      uStack_b4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
      iStack_b0 = param_2->ArrayNum;
      uStack_ac = *(undefined4 *)&param_2->field_0xc;
      (**(code **)((longlong)*pTVar4->Object + 0x20))(pTVar4->Object,param_3);
      FMemScope::~FMemScope(&local_d8);
      FLLMScope::~FLLMScope(&local_e4);
      this = local_d0;
    }
    local_e8[0].bDirtyTextRevision = true;
    local_e8[0].bReplaceExisting = (bool)(~(param_3 >> 6) & 1);
    UpdateLiveTable(this,(FTextLocalizationResource *)local_a8,local_e8);
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
LAB_14176af62:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_c8);
  FLLMScope::~FLLMScope(local_e0);
  return;
}

// LoadLocalizationTargetsForPrioritizedCultures_Async @ 14176afd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async
          (FTextLocalizationManager *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<FString_const_,int> *param_2,ELocalizationLoadFlags param_3,
          TUniqueFunction<void___cdecl(void)> *param_4)

{
  int iVar1;
  FString *pFVar2;
  TSharedPtr<ILocalizedTextSource,1> *pTVar3;
  code **ppcVar4;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  ELocalizationLoadFlags local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = CONCAT44(local_f0._4_4_,iVar1);
  if (iVar1 == 0) {
    local_f0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_f8,iVar1,(int *)((longlong)&local_f0 + 4));
    ConstructItems<FString,FString,int>(local_f8.Data,pFVar2,iVar1);
  }
  iVar1 = param_2->ArrayNum;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = CONCAT44(local_100._4_4_,iVar1);
  if (iVar1 == 0) {
    local_100 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_108,iVar1,(int *)((longlong)&local_100 + 4));
    ConstructItems<FString,FString,int>(local_108.Data,param_2->DataPtr,iVar1);
  }
  iVar1 = (this->LocalizedTextSources).ArrayNum;
  pTVar3 = (TSharedPtr<ILocalizedTextSource,1> *)(this->LocalizedTextSources).AllocatorInstance.Data
  ;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = CONCAT44(local_e0._4_4_,iVar1);
  if (iVar1 == 0) {
    local_e0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_e8,iVar1,(int *)((longlong)&local_e0 + 4));
    ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
              (local_e8.Data,pTVar3,iVar1);
  }
  local_a8 = *(code **)param_4;
  local_d8 = local_f8.Data;
  local_d0._0_4_ = (int)local_f0;
  local_d0._4_4_ = local_f0._4_4_;
  local_c8 = local_108.Data;
  local_c0._0_4_ = (int)local_100;
  local_c0._4_4_ = local_100._4_4_;
  local_80 = *(code ***)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  local_88 = *(code **)&param_4->field_0x20;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_98 = *(code **)&param_4->field_0x10;
  pcStack_90 = *(code **)&param_4->field_0x18;
  if (local_a8 != (code *)0x0) {
    *(undefined8 *)param_4 = 0;
  }
  local_78[0] = (code *)0x0;
  local_b8 = param_3;
  local_50 = FMemory::Malloc(0x80,0x10);
  local_50[2] = (code *)0x0;
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_50[2] = (code *)local_e8.Data;
  local_e8.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_50 + 3) = (int)local_e0;
  *(undefined4 *)((longlong)local_50 + 0x1c) = local_e0._4_4_;
  local_e0 = 0;
  local_50[4] = (code *)0x0;
  local_50[4] = (code *)local_d8;
  local_d8 = (FScriptContainerElement *)0x0;
  *(int *)(local_50 + 5) = (int)local_d0;
  *(undefined4 *)((longlong)local_50 + 0x2c) = local_d0._4_4_;
  local_d0 = 0;
  local_50[6] = (code *)0x0;
  local_50[6] = (code *)local_c8;
  local_c8 = (FScriptContainerElement *)0x0;
  *(int *)(local_50 + 7) = (int)local_c0;
  *(undefined4 *)((longlong)local_50 + 0x3c) = local_c0._4_4_;
  local_c0 = 0;
  *(ELocalizationLoadFlags *)(local_50 + 8) = local_b8;
  local_50[10] = local_a8;
  local_50[0xf] = (code *)local_80;
  local_80 = (code **)0x0;
  local_50[0xc] = local_98;
  local_50[0xd] = pcStack_90;
  local_50[0xe] = local_88;
  if (local_50[10] != (code *)0x0) {
    local_a8 = (code *)0x0;
  }
  if (local_50 + 2 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>,void>
                  ::Call;
  }
  QueueAsyncTask(this,(TUniqueFunction<void___cdecl(void)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    ppcVar4 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar4 = local_50;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    ppcVar4 = &local_98;
    if (local_80 != (code **)0x0) {
      ppcVar4 = local_80;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  DestructItems<FString,int>((FString *)local_c8,(int)local_c0);
  if (local_c8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8);
  }
  DestructItems<FString,int>((FString *)local_d8,(int)local_d0);
  if (local_d8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8);
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            ((TSharedPtr<ILocalizedTextSource,1> *)local_e8.Data,(int)local_e0);
  if ((TSharedPtr<ILocalizedTextSource,1> *)local_e8.Data !=
      (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  DestructItems<FString,int>((FString *)local_108.Data,(int)local_100);
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  DestructItems<FString,int>((FString *)local_f8.Data,(int)local_f0);
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// LoadLocalizationTargetsForPrioritizedCultures_Sync @ 14176b370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Sync
          (FTextLocalizationManager *this,
          TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> *param_1,
          TArrayView<FString_const_,int> *param_2,TArrayView<FString_const_,int> *param_3,
          ELocalizationLoadFlags param_4)

{
  FScriptContainerElement *pFVar1;
  ILocalizedTextSource *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  FString *pFVar9;
  TSharedPtr<ILocalizedTextSource,1> *pTVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  FTextLocalizationManager *this_00;
  void *pvVar13;
  bool bVar14;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188 [4];
  FUpdateLiveTableOptions local_184 [2];
  FLLMScope local_180;
  FLLMScope local_17c;
  FLLMScope local_178 [2];
  FTextLocalizationManager *local_170;
  TArray<FTextId,TSizedDefaultAllocator<32>_> local_168;
  FMemScope local_158;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> *local_150;
  FMemScope local_148;
  TSharedPtr<ILocalizedTextSource,1> *local_140;
  FMemScope local_138 [2];
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  TArrayView<FString_const_,int> local_118;
  TArrayView<FString_const_,int> local_108;
  TArrayView<FString_const_,int> local_f8;
  TArrayView<FString_const_,int> local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<FString_const_,int> local_c8;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_b8;
  undefined1 local_a8 [64];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_170 = this;
  local_150 = param_1;
  FLLMScope::FLLMScope(local_178,Localization,false,None,Default,true);
  FMemScope::FMemScope(local_138,Localization,true);
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1484,
               "FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x5cc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1484);
  }
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_14176b94c;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3->ArrayNum != 0) && (param_2->ArrayNum != 0)) {
    pFVar11 = param_2->DataPtr;
    pFVar9 = pFVar11 + param_2->ArrayNum;
    local_a8._44_4_ = 0x80;
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_a8._32_8_ = 0;
    local_a8._40_4_ = 0;
    local_a8._48_4_ = 0xffffffff;
    local_a8._52_4_ = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
      if (5 < (byte)LogTextLocalizationManager._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&LLMScope_Name1499,L"Localization/DisplayStrings");
      _Init_thread_footer(&::_TSS1);
    }
    FLLMScope::FLLMScope(&local_17c,LLMScope_Name1499,false,None,Default,true);
    FMemScope::FMemScope(&local_148,&LLMScope_Name1499,true);
    this_00 = local_170;
    if (((local_170->LocResTextSource).Object == (FLocalizationResourceTextSource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_118.DataPtr = param_3->DataPtr;
    local_118.ArrayNum = param_3->ArrayNum;
    local_118._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_f8.DataPtr = param_2->DataPtr;
    local_f8.ArrayNum = param_2->ArrayNum;
    local_f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_128 = 0;
    uStack_120 = 0;
    local_108._8_8_ = (ulonglong)uStack_11c << 0x20;
    local_108.DataPtr = (FString *)0x0;
    local_e8.DataPtr = local_f8.DataPtr;
    local_e8._8_8_ = local_f8._8_8_;
    FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths
              ((this_00->LocResTextSource).Object,&local_e8,&local_f8,&local_108,param_4,&local_118,
               (FTextLocalizationResource *)local_a8,(FTextLocalizationResource *)local_a8);
    FMemScope::~FMemScope(&local_148);
    FLLMScope::~FLLMScope(&local_17c);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    bVar4 = false;
    TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
                *)local_a8,&local_168);
    pTVar10 = param_1->DataPtr;
    local_140 = pTVar10 + param_1->ArrayNum;
    pvVar13 = ThreadLocalStoragePointer;
    if (pTVar10 != local_140) {
      do {
        if ((pTVar10->Object == (ILocalizedTextSource *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar2 = pTVar10->Object;
        if (((this_00->LocResTextSource).Object == (FLocalizationResourceTextSource *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (**(code **)(((this_00->LocResTextSource).Object)->_padding_ + 8))();
        iVar7 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
        if (iVar6 < iVar7) {
          if ((*(int *)(*(longlong *)((longlong)pvVar13 + (ulonglong)_tls_index * 8) + 0x9d4c) <
               ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
            ::FName::FName(&LLMScope_Name1518,L"Localization/DisplayStrings");
            _Init_thread_footer(&::_TSS3);
          }
          FLLMScope::FLLMScope(&local_180,LLMScope_Name1518,false,None,Default,true);
          FMemScope::FMemScope(&local_158,&LLMScope_Name1518,true);
          iVar6 = local_168.ArrayNum;
          uVar8 = (ulonglong)local_168.ArrayNum;
          pFVar1 = local_168.AllocatorInstance.Data + uVar8 * 8;
          FVar12.Data = local_168.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar8 != iVar6) {
              local_188[0] = 0;
              `TCheckedPointerIterator<FTextId,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_188);
            }
            if (FVar12.Data == pFVar1) break;
            if ((pTVar10->Object == (ILocalizedTextSource *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_d8 = *(undefined4 *)&param_3->DataPtr;
            uStack_d4 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
            iStack_d0 = param_3->ArrayNum;
            uStack_cc = *(undefined4 *)&param_3->field_0xc;
            cVar5 = (**(code **)((longlong)*pTVar10->Object + 0x28))(pTVar10->Object,param_4);
            if (cVar5 == '\x02') {
              bVar4 = true;
              FMemScope::~FMemScope(&local_158);
              FLLMScope::~FLLMScope(&local_180);
              this_00 = local_170;
              param_1 = local_150;
              goto LAB_14176b854;
            }
            uVar8 = local_168._8_8_ & 0xffffffff;
            FVar12.Data = FVar12.Data + 8;
          }
          FMemScope::~FMemScope(&local_158);
          FLLMScope::~FLLMScope(&local_180);
          pvVar13 = ThreadLocalStoragePointer;
        }
        pTVar10 = pTVar10 + 1;
        this_00 = local_170;
      } while (pTVar10 != local_140);
      bVar4 = false;
      param_1 = local_150;
    }
LAB_14176b854:
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (bVar4) {
      if (5 < (byte)LogTextLocalizationManager._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
      }
      local_c8.DataPtr = param_3->DataPtr;
      local_c8.ArrayNum = param_3->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&param_3->field_0xc;
      local_b8.DataPtr = param_1->DataPtr;
      local_b8.ArrayNum = param_1->ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
      LoadLocalizationResourcesForPrioritizedCultures_Sync(this_00,&local_b8,&local_c8,param_4);
    }
    else {
      local_184[0].bDirtyTextRevision = true;
      local_184[0].bReplaceExisting = (bool)(~(param_4 >> 6) & 1);
      if (5 < (byte)LogTextLocalizationManager._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationManager);
      }
      UpdateLiveTable(this_00,(FTextLocalizationResource *)local_a8,local_184);
    }
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
LAB_14176b94c:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_138);
  FLLMScope::~FLLMScope(local_178);
  return;
}

// NotifyWhenAsyncTasksCompleted @ 14176d600

void __thiscall
FTextLocalizationManager::NotifyWhenAsyncTasksCompleted
          (FTextLocalizationManager *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((this->AsyncLocalizationTask).Reference != (FBaseGraphTask *)0x0) {
    QueueAsyncTask(this,param_1);
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar2 = *(longlong **)&param_1->field_0x28;
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014176d652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// OnCultureChanged @ 14176d660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FTextLocalizationManager::OnCultureChanged(FTextLocalizationManager *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCulture *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FInternationalization *pFVar9;
  FString *pFVar10;
  FThreadHeartBeat *pFVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_60 = 0;
  if (this->InitializedFlags == (atomic<ETextLocalizationManagerInitializedFlags>)0x0) {
    return;
  }
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_14176d89f;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FLeetCulture::StaticGetName();
  pFVar9 = FInternationalization::Get();
  if (((pFVar9->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = (pFVar9->CurrentLanguage).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar9->CurrentLanguage).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FCulture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar10 = FCulture::GetName(pFVar3);
  iVar7 = (pFVar8->Data).ArrayNum;
  iVar1 = (pFVar10->Data).ArrayNum;
  if (iVar1 == iVar7) {
    if (1 < iVar1) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      bVar6 = iVar7 == 0;
      goto LAB_14176d791;
    }
LAB_14176d864:
    bVar6 = false;
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStack_5c,local_60);
LAB_14176d869:
    bVar14 = true;
    bVar5 = true;
    if (bVar6) goto LAB_14176d870;
  }
  else {
    bVar6 = iVar7 + iVar1 == 1;
LAB_14176d791:
    if (bVar6) goto LAB_14176d864;
    pFVar8 = FKeysCulture::StaticGetName();
    pFVar9 = FInternationalization::Get();
    if (((pFVar9->CurrentLanguage).Object == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pFVar9->CurrentLanguage).Object;
    pTVar13 = (pFVar9->CurrentLanguage).SharedReferenceCount.ReferenceController;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = FCulture::GetName(pFVar3);
    iVar7 = (pFVar8->Data).ArrayNum;
    iVar1 = (pFVar10->Data).ArrayNum;
    if (iVar1 == iVar7) {
      if (1 < iVar1) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
        bVar14 = iVar7 == 0;
        goto LAB_14176d847;
      }
      bVar6 = true;
      goto LAB_14176d869;
    }
    bVar14 = iVar7 + iVar1 == 1;
LAB_14176d847:
    bVar6 = true;
    if (bVar14) goto LAB_14176d869;
    bVar5 = false;
LAB_14176d870:
    bVar14 = bVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (!bVar14) {
    local_58._0_8_ = 0;
    local_30 = (longlong *)0x0;
    RefreshResources(this,(TUniqueFunction<void___cdecl(void)> *)local_58);
    if (local_58._0_8_ != 0) {
      plVar12 = (longlong *)(local_58 + 0x10);
      if (local_30 != (longlong *)0x0) {
        plVar12 = local_30;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (TextLocalizationManager::AsyncLoadLocalizationDataOnLanguageChange != false) {
      return;
    }
    pFVar11 = FThreadHeartBeat::GetNoInit();
    if (pFVar11 == (FThreadHeartBeat *)0x0) {
      WaitForAsyncTasks(this);
      return;
    }
    FThreadHeartBeat::SuspendHeartBeat(pFVar11,false);
    WaitForAsyncTasks(this);
    pFVar11 = FThreadHeartBeat::GetNoInit();
    if (pFVar11 == (FThreadHeartBeat *)0x0) {
      return;
    }
    FThreadHeartBeat::ResumeHeartBeat(pFVar11,false);
    return;
  }
LAB_14176d89f:
  DirtyTextRevision(this);
  return;
}

// OnPakFileMounted @ 14176d950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::OnPakFileMounted(FTextLocalizationManager *this,IPakFile *param_1)

{
  TSharedPtr<ILocalizedTextSource,1> *pTVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  code **ppcVar5;
  bool bVar6;
  undefined1 auStackY_108 [32];
  FLLMScope local_c8 [2];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  int local_b0;
  FString local_a8;
  FMemScope local_98;
  FScopedBootTiming local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1364,"FTextLocalizationManager::OnPakFileMounted",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x554);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1364);
  }
  FScopedBootTiming::FScopedBootTiming(&local_90,"FTextLocalizationManager::OnPakFileMounted");
  FLLMScope::FLLMScope(local_c8,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_98,Localization,true);
  iVar2 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((1 < iVar2 + 1U) && (iVar3 = (**(code **)((longlong)*param_1 + 0x28))(param_1), iVar3 != 0)) {
    pFVar4 = (FString *)(**(code **)*param_1)(param_1);
    iVar3 = (this->LocalizedTextSources).ArrayNum;
    pTVar1 = (TSharedPtr<ILocalizedTextSource,1> *)
             (this->LocalizedTextSources).AllocatorInstance.Data;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = CONCAT44(local_b8._4_4_,iVar3);
    if (iVar3 == 0) {
      local_b8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,0,&local_c0,iVar3,(int *)((longlong)&local_b8 + 4));
      ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
                (local_c0.Data,pTVar1,iVar3);
    }
    local_b0 = iVar2;
    ::FString::FString(&local_a8,pFVar4);
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x30,8);
    local_50[1] = (code *)0x0;
    ppcVar5 = local_50 + 1;
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    *ppcVar5 = (code *)local_c0.Data;
    local_c0.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_50 + 2) = (int)local_b8;
    *(undefined4 *)((longlong)local_50 + 0x14) = local_b8._4_4_;
    local_b8 = 0;
    *(int *)(local_50 + 3) = local_b0;
    ::FString::FString((FString *)(local_50 + 4),&local_a8);
    if (ppcVar5 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::__l2::<lambda_1>,void>
                    ::Call;
    }
    QueueAsyncTask(this,(TUniqueFunction<void___cdecl(void)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar5 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar5 = local_50;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
              ((TSharedPtr<ILocalizedTextSource,1> *)local_c0.Data,(int)local_b8);
    if ((TSharedPtr<ILocalizedTextSource,1> *)local_c0.Data !=
        (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_c8);
  FScopedBootTiming::~FScopedBootTiming(&local_90);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// QueueAsyncTask @ 14176ebd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::QueueAsyncTask
          (FTextLocalizationManager *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  undefined8 uVar7;
  longlong *plVar8;
  TRefCountPtr<FBaseGraphTask> *this_00;
  undefined8 *local_res18;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((!TextLocalizationManager::AsyncLoadLocalizationData) ||
     (bVar5 = FTaskGraphInterface::IsRunning(), !bVar5)) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar4 = *(code **)param_1;
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar4)(uVar7);
    return;
  }
  local_38[0] = *(longlong *)param_1;
  this_00 = &this->AsyncLocalizationTask;
  local_10 = *(undefined8 *)&param_1->field_0x28;
  pFVar3 = this_00->Reference;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_18 = *(undefined8 *)&param_1->field_0x20;
  local_28 = *(undefined8 *)&param_1->field_0x10;
  uStack_20 = *(undefined8 *)&param_1->field_0x18;
  if (pFVar3 == (FBaseGraphTask *)0x0) {
    if (local_38[0] != 0) {
      *(undefined8 *)param_1 = 0;
    }
    TVar6 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&local_res18,(TStatIdData *)local_38,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,MainQueue);
  }
  else {
    if (local_38[0] != 0) {
      *(undefined8 *)param_1 = 0;
    }
    TVar6 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&local_res18,(TStatIdData *)local_38,
                       (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)this_00);
  }
  TRefCountPtr<FBaseGraphTask>::operator=(this_00,(TRefCountPtr<FBaseGraphTask> *)TVar6.Reference);
  if (local_res18 == (undefined8 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(local_res18 + 6);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  if (local_res18 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*local_res18)(local_res18,1);
  return;
}

// RefreshResources @ 1417725f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::RefreshResources
          (FTextLocalizationManager *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  
  pFVar4 = FInternationalization::Get();
  if ((pFVar4->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (pFVar4->CurrentLanguage).Object;
  pTVar1 = (pFVar4->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = FCulture::GetName(this_00);
  LoadLocalizationResourcesForCulture_Async(this,pFVar5,Additional|Engine|Game|Native,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RegisterPolyglotTextData @ 141772b10

void __thiscall
FTextLocalizationManager::RegisterPolyglotTextData
          (FTextLocalizationManager *this,FPolyglotTextData *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uStack_1c;
  TArrayView<FPolyglotTextData_const_,int> local_18;
  
  if ((this->PolyglotTextSource).Object == (FPolyglotTextSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PolyglotTextSource.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x39d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = 1;
  local_18.DataPtr = param_1;
  RegisterPolyglotTextData(this,&local_18,param_2);
  return;
}

// RegisterPolyglotTextData @ 141772ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextLocalizationManager::RegisterPolyglotTextData
          (FTextLocalizationManager *this,TArrayView<FPolyglotTextData_const_,int> *param_1,
          bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FCulture *this_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FInternationalization *pFVar8;
  FString *pFVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar10;
  FPolyglotTextData *pFVar11;
  FTextKeyState *pFVar12;
  ulong64 uVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  int *piVar17;
  FPolyglotTextData *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_198 [32];
  undefined1 local_158;
  FUpdateLiveTableOptions local_157 [3];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  FTextKey local_130;
  FTextKey local_12c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  FTextKey local_118 [2];
  FPolyglotTextData *local_110;
  FTextLocalizationManager *local_108;
  wchar_t *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  undefined4 local_ac;
  undefined4 local_9c;
  TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  size_t sVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar18 = param_1->DataPtr;
  pFVar11 = pFVar18 + param_1->ArrayNum;
  local_108 = this;
  uVar3 = local_9c;
  uVar4 = local_ac;
  for (; pFVar18 != pFVar11; pFVar18 = pFVar18 + 1) {
    local_ac = uVar4;
    local_9c = uVar3;
    if ((1 < (pFVar18->Key).Data.ArrayNum) && (1 < (pFVar18->NativeString).Data.ArrayNum)) {
      if (((this->PolyglotTextSource).Object == (FPolyglotTextSource *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPolyglotTextSource::RegisterPolyglotTextData((this->PolyglotTextSource).Object,pFVar18);
    }
    uVar3 = local_9c;
    uVar4 = local_ac;
  }
  if (param_2) {
    pFVar18 = param_1->DataPtr;
    pFVar11 = pFVar18 + param_1->ArrayNum;
    local_98._0_8_ = 0;
    local_98._8_4_ = 0;
    local_98._12_4_ = 0;
    local_98._32_8_ = 0;
    local_98._40_4_ = 0;
    local_98._44_4_ = 0x80;
    local_98._48_4_ = 0xffffffff;
    local_98._52_4_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_110 = pFVar11;
    if (pFVar18 != pFVar11) {
      piVar17 = &(pFVar18->NativeString).Data.ArrayNum;
      do {
        if ((1 < piVar17[-4]) && (1 < *piVar17)) {
          local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_150.ArrayNum = 0;
          local_150.ArrayMax = 0;
          local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.Data.ArrayNum = 0;
          local_140.Data.ArrayMax = 0;
          pFVar8 = FInternationalization::Get();
          if (((pFVar8->CurrentLanguage).Object == (FCulture *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = (pFVar8->CurrentLanguage).SharedReferenceCount.ReferenceController;
          this_00 = (pFVar8->CurrentLanguage).Object;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_00 == (FCulture *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = FCulture::GetName(this_00);
          if (&local_140 != pFVar9) {
            iVar6 = (pFVar9->Data).ArrayNum;
            pFVar19 = (pFVar9->Data).AllocatorInstance.Data;
            local_140.Data.ArrayNum = iVar6;
            if ((iVar6 == 0) && (local_140.Data.ArrayMax == 0)) {
              local_140.Data.ArrayNum = 0;
              local_140.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar6,local_140.Data.ArrayMax,(ForAnyElementType *)&local_140,iVar6,
                         &local_140.Data.ArrayMax);
              if (iVar6 != 0) {
                memcpy(local_140.Data.AllocatorInstance.Data,pFVar19,(longlong)iVar6 * 2);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          if (local_140.Data.ArrayNum < 2) {
LAB_141772f21:
            if ((char)piVar17[0x16] == '\0') {
              if (&local_150 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar17 + -2)) {
                iVar6 = *piVar17;
                pFVar19 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar17 + -2))->
                          AllocatorInstance).Data;
                local_150.ArrayNum = iVar6;
                if ((iVar6 == 0) && (local_150.ArrayMax == 0)) {
                  local_150.ArrayNum = 0;
                  local_150.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar6,local_150.ArrayMax,&local_150.AllocatorInstance,iVar6,
                             &local_150.ArrayMax);
                  if (iVar6 != 0) {
                    memcpy(local_150.AllocatorInstance.Data,pFVar19,(longlong)iVar6 * 2);
                  }
                }
              }
              goto LAB_141773049;
            }
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
          }
          else {
            pFVar8 = FInternationalization::Get();
            FInternationalization::GetPrioritizedCultureNames(pFVar8,&local_128,&local_140);
            iVar6 = local_128.ArrayNum;
            pFVar19 = local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 0x10;
            FVar16.Data = local_128.AllocatorInstance.Data;
            while( true ) {
              if (local_128.ArrayNum != iVar6) {
                local_158 = 0;
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_158);
              }
              if (FVar16.Data == pFVar19) {
                DestructItems<FString,int>
                          ((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
                if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.AllocatorInstance.Data);
                }
                goto LAB_141772f21;
              }
              if ((*(int *)(FVar16.Data + 8) < 2) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!InCulture.IsEmpty()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                                     ,0x93,L"Culture name cannot be empty!"), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar10 = &TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                         ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                 *)(piVar17 + 2),(FString *)FVar16.Data)->Data;
              if (pTVar10 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) break;
              FVar16.Data = FVar16.Data + 0x10;
            }
            if (&local_150 != pTVar10) {
              iVar6 = pTVar10->ArrayNum;
              pFVar19 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar10->AllocatorInstance
                         )->AllocatorInstance).Data;
              local_150.ArrayNum = iVar6;
              if ((iVar6 == 0) && (local_150.ArrayMax == 0)) {
                local_150.ArrayNum = 0;
                local_150.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar6,local_150.ArrayMax,&local_150.AllocatorInstance,iVar6,
                           &local_150.ArrayMax);
                if (iVar6 != 0) {
                  memcpy(local_150.AllocatorInstance.Data,pFVar19,(longlong)iVar6 * 2);
                }
              }
            }
            DestructItems<FString,int>
                      ((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
            if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.AllocatorInstance.Data);
            }
LAB_141773049:
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            pwVar15 = *(wchar_t **)(piVar17 + -6);
            local_118[0].Index = -1;
            iVar6 = piVar17[-4] + -1;
            local_130.Index = -1;
            if (piVar17[-4] == 0) {
              iVar6 = 0;
            }
            local_f8 = pwVar15;
            iStack_f0 = iVar6;
            if (iVar6 != 0) {
              uStack_ec = uVar4;
              pFVar12 = FTextKeyState::GetState();
              if (pwVar15 == (wchar_t *)0x0) {
                pwVar15 = (wchar_t *)0x0;
                iVar6 = 0;
              }
              else {
                if ((0 < iVar6) && (pwVar15[(longlong)iVar6 + -1] == L'\0')) {
                  iVar6 = iVar6 + -1;
                }
                if (iVar6 == -1) {
                  sVar13 = wcslen(pwVar15);
                  iVar6 = (int)sVar13;
                }
              }
              uVar14 = CityHash64((char *)pwVar15,iVar6 * 2);
              local_d8._12_4_ = uStack_ec;
              local_d8.Size = iStack_f0;
              local_d8.DataPtr = local_f8;
              FTextKeyState::FindOrAddImpl
                        (pFVar12,&local_d8,(int)(uVar14 >> 0x20) * 0x17 + (int)uVar14,&local_130);
            }
            pwVar15 = *(wchar_t **)(piVar17 + -10);
            iVar6 = piVar17[-8] + -1;
            local_12c.Index = -1;
            if (piVar17[-8] == 0) {
              iVar6 = 0;
            }
            local_e8 = pwVar15;
            iStack_e0 = iVar6;
            if (iVar6 != 0) {
              uStack_dc = uVar3;
              pFVar12 = FTextKeyState::GetState();
              if (pwVar15 == (wchar_t *)0x0) {
                pwVar15 = (wchar_t *)0x0;
                iVar6 = 0;
              }
              else {
                if ((0 < iVar6) && (pwVar15[(longlong)iVar6 + -1] == L'\0')) {
                  iVar6 = iVar6 + -1;
                }
                if (iVar6 == -1) {
                  sVar13 = wcslen(pwVar15);
                  iVar6 = (int)sVar13;
                }
              }
              uVar14 = CityHash64((char *)pwVar15,iVar6 * 2);
              local_c8._12_4_ = uStack_dc;
              local_c8.Size = iStack_e0;
              local_c8.DataPtr = local_e8;
              FTextKeyState::FindOrAddImpl
                        (pFVar12,&local_c8,(int)(uVar14 >> 0x20) * 0x17 + (int)uVar14,&local_12c);
            }
            if (*piVar17 == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)
                        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar17 + -2))->
                        AllocatorInstance).Data;
            }
            uVar7 = FCrc::StrCrc32<wchar_t>(pwVar15,0);
            FTextLocalizationResource::AddEntry
                      ((FTextLocalizationResource *)&local_98,&local_12c,&local_130,uVar7,
                       (FString *)&local_150,0,local_118);
          }
          pFVar11 = local_110;
          if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.AllocatorInstance.Data);
            pFVar11 = local_110;
          }
        }
        pFVar18 = pFVar18 + 1;
        piVar17 = piVar17 + 0x2c;
        this = local_108;
      } while (pFVar18 != pFVar11);
    }
    if (local_98._8_4_ != local_98._52_4_) {
      local_157[0].bDirtyTextRevision = true;
      local_157[0].bReplaceExisting = true;
      UpdateLiveTable(this,(FTextLocalizationResource *)&local_98,local_157);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  return;
}

// RegisterTextSource @ 141773790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::RegisterTextSource
          (FTextLocalizationManager *this,TSharedRef<ILocalizedTextSource,1> *param_1,bool param_2)

{
  int *piVar1;
  TArray<TSharedPtr<ILocalizedTextSource,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_b8 [32];
  ILocalizedTextSource **local_98;
  FScriptContainerElement *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  FIdentityFunctor local_68 [8];
  ILocalizedTextSource *local_60;
  TReferenceControllerBase<1> *local_58;
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_60 = param_1->Object;
  pTVar2 = &this->LocalizedTextSources;
  local_58 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_60) &&
     (lVar7 = (longlong)(this->LocalizedTextSources).ArrayMax,
     (FScriptContainerElement *)&local_60 < pFVar8 + lVar7 * 0x10)) {
    local_80 = (longlong)(this->LocalizedTextSources).ArrayNum;
    local_78 = 0x10;
    local_98 = &local_60;
    local_90 = pFVar8;
    local_88 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LocalizedTextSources).ArrayNum;
  piVar1 = &(this->LocalizedTextSources).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LocalizedTextSources).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(ILocalizedTextSource **)pFVar8 = local_60;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_58;
  local_58 = (TReferenceControllerBase<1> *)0x0;
  local_60 = (ILocalizedTextSource *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  AlgoImpl::
  StableSortInternal<TSharedPtr<ILocalizedTextSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,_FTextLocalizationManager::RegisterTextSource_::__l2::<lambda_1>_>_>
            ((TSharedPtr<ILocalizedTextSource,1> *)(pTVar2->AllocatorInstance).Data,
             (this->LocalizedTextSources).ArrayNum,local_68[0],(<lambda_1> *)local_68);
  if (param_2) {
    local_48._0_8_ = 0;
    local_20 = (longlong *)0x0;
    RefreshResources(this,(TUniqueFunction<void___cdecl(void)> *)local_48);
    if (local_48._0_8_ != 0) {
      plVar6 = (longlong *)(local_48 + 0x10);
      if (local_20 != (longlong *)0x0) {
        plVar6 = local_20;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return;
}

// ShouldForceLoadGameLocalization @ 14177de70

bool __thiscall
FTextLocalizationManager::ShouldForceLoadGameLocalization(FTextLocalizationManager *this)

{
  return false;
}

// TearDown @ 14177ee80

void __cdecl FTextLocalizationManager::TearDown(void)

{
  FTextLocalizationManager *this;
  int *piVar1;
  
  this = Get();
  WaitForAsyncTasks(this);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154eb5db0 =
           (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
            *)0x0;
      atexit(`TLazySingleton<FTextCache>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_154eb5db0 !=
      (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
       *)0x0) {
    TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
    ::
    ~TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
              (DAT_154eb5db0);
    DAT_154eb5db0 =
         (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
          *)0x0;
  }
  if (*piVar1 < `private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154eb5200 = (FTextLocalizationManager *)0x0;
      atexit(`TLazySingleton<FTextLocalizationManager>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextLocalizationManager>&___ptr64___cdecl_TLazySingleton<FTextLocalizationManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_154eb5200 != (FTextLocalizationManager *)0x0) {
    ~FTextLocalizationManager(DAT_154eb5200);
    DAT_154eb5200 = (FTextLocalizationManager *)0x0;
  }
  if (*piVar1 < `private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154eb52a0 = 0;
      atexit(`TLazySingleton<FTextKeyState>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<FTextKeyState>::Reset
            ((TLazySingleton<FTextKeyState> *)
             &`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// UpdateFromLocalizationResource @ 141782470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::UpdateFromLocalizationResource
          (FTextLocalizationManager *this,FString *param_1)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  FUpdateLiveTableOptions local_78 [8];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  FTextLocalizationResource::LoadFromFile((FTextLocalizationResource *)local_68,param_1,0);
  local_78[0].bDirtyTextRevision = true;
  local_78[0].bReplaceExisting = true;
  UpdateLiveTable(this,(FTextLocalizationResource *)local_68,local_78);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// UpdateFromLocalizationResource @ 1417825a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextLocalizationManager::UpdateFromLocalizationResource
          (FTextLocalizationManager *this,FTextLocalizationResource *param_1)

{
  int iVar1;
  undefined1 auStackY_b8 [32];
  FUpdateLiveTableOptions local_88 [8];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88[0].bDirtyTextRevision = true;
  local_88[0].bReplaceExisting = true;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_30[0] = 0;
  if ((FTextLocalizationResource *)local_78 != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_40,local_30,(ForElementType<FSetElementId> *)&(param_1->Entries).field_0x38,
               *(int *)&(param_1->Entries).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_78,
                (TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1);
  }
  UpdateLiveTable(this,(FTextLocalizationResource *)local_78,local_88);
  local_30[0] = 0;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// UpdateLiveTable @ 1417826f0

void __thiscall
FTextLocalizationManager::UpdateLiveTable
          (FTextLocalizationManager *this,FTextLocalizationResource *param_1,
          FUpdateLiveTableOptions *param_2)

{
  TMap<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
  *this_00;
  FTextId *pFVar1;
  undefined1 *puVar2;
  FTextId FVar3;
  code *pcVar4;
  FTextLocalizationResource *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *this_01;
  bool bVar15;
  undefined1 local_148 [8];
  FTextId local_140;
  int local_138;
  int local_134;
  FLLMScope local_130;
  int local_12c;
  FTextId local_128;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  TPairInitializer<FTextId_const_&,FTextLocalizationManager::FDisplayStringEntry_&> local_f8;
  FMemScope local_e8;
  FTextLocalizationResource *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FTextId *local_b0;
  FTextId *local_a8;
  undefined1 local_a0 [40];
  int local_78;
  undefined4 uStack_74;
  longlong local_68;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1692,"FTextLocalizationManager::UpdateLiveTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x69c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1692);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1693,L"Localization/DisplayStrings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_130,LLMScope_Name1693,false,None,Default,true);
  FMemScope::FMemScope(&local_e8,&LLMScope_Name1693,true);
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) goto LAB_141782cf3;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)&(param_1->Entries).field_0x8 != *(int *)&(param_1->Entries).field_0x34) {
    local_f8.Value = (FDisplayStringEntry *)&this->DisplayStringTableRW;
    AcquireSRWLockExclusive((PSRWLOCK)local_f8.Value);
    this_00 = &this->DisplayStringLookupTable;
    TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
               *)this_00,
              *(int *)&(param_1->Entries).field_0x8 - *(int *)&(param_1->Entries).field_0x34);
    local_118._padding_._4_4_ = 1;
    puVar2 = &(param_1->Entries).field_0x10;
    local_118._padding_._0_4_ = 0;
    local_118.UnvisitedBitMask = 0xffffffff;
    local_118.CurrentBitIndex = 0;
    local_118.BaseBitIndex = 0;
    local_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (*(int *)&(param_1->Entries).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
    }
    TStack_d8._padding_ = CONCAT44(local_118._padding_._4_4_,(undefined4)local_118._padding_);
    TStack_d8.CurrentBitIndex = local_118.CurrentBitIndex;
    TStack_d8.UnvisitedBitMask = local_118.UnvisitedBitMask;
    TStack_d8._28_4_ = local_118._28_4_;
    TStack_d8.BaseBitIndex = local_118.BaseBitIndex;
    local_78 = *(int *)&(param_1->Entries).field_0x8 - *(int *)&(param_1->Entries).field_0x34;
    local_a0._16_8_ = local_118.Array;
    uStack_b8 = CONCAT44(uStack_74,local_78);
    TStack_d8.Array = local_118.Array;
    local_e0 = param_1;
    local_a0._0_8_ = param_1;
    local_a0._8_8_ = TStack_d8._padding_;
    local_a0._24_8_ = TStack_d8._16_8_;
    local_a0._32_8_ = TStack_d8._24_8_;
    pTVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
             TConstSetBitIterator<FDefaultBitArrayAllocator>
                       ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_a0,
                        (TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                        *(int *)&(param_1->Entries).field_0x28);
    local_68 = pTVar9->_padding_;
    local_120 = pTVar9->Array;
    local_58._0_4_ = pTVar9->UnvisitedBitMask;
    local_58._4_4_ = pTVar9->CurrentBitIndex;
    uStack_50 = *(undefined8 *)&pTVar9->BaseBitIndex;
    local_12c = local_58._4_4_;
    pTStack_60 = local_120;
    while( true ) {
      pFVar5 = local_e0;
      iVar13 = local_12c;
      if (*(int *)&(local_e0->Entries).field_0x8 - *(int *)&(local_e0->Entries).field_0x34 !=
          (int)uStack_b8) {
        local_148[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (((TStack_d8.CurrentBitIndex == iVar13) && (TStack_d8.Array == local_120)) &&
         (pFVar5 == param_1)) break;
      pFVar1 = (FTextId *)
               (*(longlong *)&pFVar5->Entries + (longlong)TStack_d8.CurrentBitIndex * 0x28);
      uVar7 = ::GetTypeHash(&pFVar1->Key);
      uVar8 = ::GetTypeHash((FTextKey *)pFVar1);
      uVar12 = uVar8 - uVar7 ^ uVar7 >> 0xd;
      uVar8 = (-0x61c88647 - uVar12) - uVar7 ^ uVar12 << 8;
      uVar14 = (uVar7 - uVar8) - uVar12 ^ uVar8 >> 0xd;
      uVar12 = (uVar12 - uVar14) - uVar8 ^ uVar14 >> 0xc;
      uVar7 = (uVar8 - uVar12) - uVar14 ^ uVar12 << 0x10;
      uVar14 = (uVar14 - uVar7) - uVar12 ^ uVar7 >> 5;
      uVar8 = (uVar12 - uVar14) - uVar7 ^ uVar14 >> 3;
      uVar7 = (uVar7 - uVar8) - uVar14 ^ uVar8 << 10;
      if (*(int *)&(this->DisplayStringLookupTable).field_0x8 !=
          *(int *)&(this->DisplayStringLookupTable).field_0x34) {
        puVar2 = *(undefined1 **)&(this->DisplayStringLookupTable).field_0x40;
        puVar11 = &(this->DisplayStringLookupTable).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        iVar13 = *(int *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->DisplayStringLookupTable).field_0x48 - 1U &
                         ((uVar14 - uVar7) - uVar8 ^ uVar7 >> 0xf)) * 4);
        if (iVar13 != -1) {
          do {
            piVar10 = (int *)((longlong)iVar13 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((*piVar10 == (pFVar1->Namespace).Index) && (piVar10[1] == (pFVar1->Key).Index)) {
              if (iVar13 != -1) {
                this_01 = (TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)(piVar10 + 2)
                ;
                if (piVar10 == (int *)0x0) {
                  this_01 = (TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)0x0;
                }
                if (this_01 != (TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)0x0) {
                  if (param_2->bReplaceExisting != false) {
                    *(int *)((longlong)&this_01[1].Reference + 4) = pFVar1[3].Namespace.Index;
                    if ((pFVar1[1] == (FTextId)0x0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("this->IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                                           ,0x11c,L""), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_128 = pFVar1[1];
                    if (local_128 == (FTextId)0x0) {
                      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("this->IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                                         ,0xb0,L"");
                      if (bVar6) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                    }
                    else {
                      LOCK();
                      *(int *)local_128 = *(int *)local_128 + 1;
                      UNLOCK();
                    }
                    TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
                              (this_01,(TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)
                                       &local_128);
                    FVar3 = local_128;
                    if (local_128 != (FTextId)0x0) {
                      LOCK();
                      iVar13 = *(int *)local_128;
                      *(int *)local_128 = *(int *)local_128 + -1;
                      UNLOCK();
                      if (iVar13 == 1) {
                        if (*(void **)((longlong)local_128 + 8) != (void *)0x0) {
                          FMemory::Free(*(void **)((longlong)local_128 + 8));
                        }
                        ::operator_delete((void *)FVar3,0x18);
                      }
                    }
                    FDisplayStringsByLocalizationTargetId::TrackTextId
                              (&this->DisplayStringsByLocalizationTargetId,
                               *(int *)&this_01[1].Reference,pFVar1[2].Key.Index,pFVar1);
                    *(int *)&this_01[1].Reference = pFVar1[2].Key.Index;
                  }
                  goto LAB_141782c82;
                }
              }
              break;
            }
            iVar13 = piVar10[6];
          } while (iVar13 != -1);
        }
      }
      if ((pFVar1[1] == (FTextId)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("this->IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                             ,0x11c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = pFVar1[1];
      if (FVar3 == (FTextId)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0xb0,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_138 = pFVar1[2].Key.Index;
        local_134 = pFVar1[3].Namespace.Index;
        local_140 = FVar3;
      }
      else {
        LOCK();
        *(int *)FVar3 = *(int *)FVar3 + 1;
        UNLOCK();
        local_138 = pFVar1[2].Key.Index;
        local_134 = pFVar1[3].Namespace.Index;
        LOCK();
        *(int *)FVar3 = *(int *)FVar3 + 1;
        UNLOCK();
        LOCK();
        iVar13 = *(int *)FVar3;
        *(int *)FVar3 = *(int *)FVar3 + -1;
        UNLOCK();
        local_140 = FVar3;
        if (iVar13 == 1) {
          if (*(void **)((longlong)FVar3 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)FVar3 + 8));
          }
          ::operator_delete((void *)FVar3,0x18);
        }
      }
      local_a8 = &local_140;
      local_b0 = pFVar1;
      TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FTextId_const_&,FTextLocalizationManager::FDisplayStringEntry_&>_>
                ((TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>
                  *)this_00,&local_f8,(bool *)&local_b0);
      FDisplayStringsByLocalizationTargetId::TrackTextId
                (&this->DisplayStringsByLocalizationTargetId,-1,pFVar1[2].Key.Index,pFVar1);
      FVar3 = local_140;
      if (local_140 != (FTextId)0x0) {
        LOCK();
        iVar13 = *(int *)local_140;
        *(int *)local_140 = *(int *)local_140 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          if (*(void **)((longlong)local_140 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)local_140 + 8));
          }
          ::operator_delete((void *)FVar3,0x18);
        }
      }
LAB_141782c82:
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
             *)param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)local_f8.Value);
    if (param_2->bDirtyTextRevision != false) {
      DirtyTextRevision(this);
    }
  }
LAB_141782cf3:
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(&local_130);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForAsyncTasks @ 141783a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextLocalizationManager::WaitForAsyncTasks(FTextLocalizationManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  FBaseGraphTask *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextLocalizationManager::WaitForAsyncTasks(void)_::_2_::FStat_STAT_WaitForAsyncLocalizationTasks>
  FVar11;
  FTaskGraphInterface *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  LARGE_INTEGER LVar14;
  bool bVar15;
  undefined1 auStackY_108 [32];
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_90;
  FScopedBootTiming local_80;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1198,"FTextLocalizationManager::WaitForAsyncTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x4ae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1198);
  }
  FScopedBootTiming::FScopedBootTiming(&local_80,"FTextLocalizationManager::WaitForAsyncTasks");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_WaitForAsyncLocalizationTasks ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FTextLocalizationManager::WaitForAsyncTasks(void)_::_2_::FStat_STAT_WaitForAsyncLocalizationTasks>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_a8.s,"STAT_WaitForAsyncLocalizationTasks");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitForAsyncLocalizationTasks,*pFVar10,
                 L"FTextLocalizationManager::WaitForAsyncTasks","STATGROUP_LoadTime",
                 "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_WaitForAsyncLocalizationTasks;
  if (StatPtr_STAT_WaitForAsyncLocalizationTasks ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextLocalizationManager::WaitForAsyncTasks(void)_::_2_::FStat_STAT_WaitForAsyncLocalizationTasks>
       )0x0) {
    pFVar10 = ::FName::FName((FName *)&local_90,"STAT_WaitForAsyncLocalizationTasks");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextLocalizationManager::WaitForAsyncTasks(void)_::_2_::FStat_STAT_WaitForAsyncLocalizationTasks>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitForAsyncLocalizationTasks,
                          *pFVar10,L"FTextLocalizationManager::WaitForAsyncTasks",
                          "STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,true,ST_int64,
                          true,false,MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_a0.s.LowPart = 0;
  local_a0.s.HighPart = 0;
  if ((LVar14.s.LowPart != 0) || (LVar14.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.QuadPart = local_a8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8 = LVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_a8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                   ,0x4af);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = LVar14;
      FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
      bVar7 = true;
      goto LAB_141783bfe;
    }
  }
  bVar7 = false;
  LVar14 = local_a0;
LAB_141783bfe:
  if ((this->AsyncLocalizationTask).Reference != (FBaseGraphTask *)0x0) {
    bVar9 = FTaskGraphInterface::IsRunning();
    if (bVar9) {
      pFVar12 = FTaskGraphInterface::Get();
      pcVar4 = *(code **)((longlong)*pFVar12 + 0x60);
      local_a8 = (LARGE_INTEGER)(this->AsyncLocalizationTask).Reference;
      if ((FName)local_a8.QuadPart != (FName)0x0) {
        LOCK();
        *(int *)(local_a8.QuadPart + 0x30) = *(int *)(local_a8.QuadPart + 0x30) + 1;
        UNLOCK();
      }
      local_68.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_40 = 1;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,1,0,&local_68,1,&local_3c);
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
      if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar13 = local_68.SecondaryData;
      }
      ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                ((void *)FVar13,(TRefCountPtr<FBaseGraphTask> *)&local_a8.s,1);
      (*pcVar4)(pFVar12,&local_68);
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
      if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar13 = local_68.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar13,local_40);
      if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
      if ((FName)local_a8.QuadPart != (FName)0x0) {
        LOCK();
        piVar1 = (int *)(local_a8.QuadPart + 0x30);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_a8)(local_a8.QuadPart,1);
        }
      }
    }
    pFVar5 = (this->AsyncLocalizationTask).Reference;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      (this->AsyncLocalizationTask).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar2 = &pFVar5->field_0x30;
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && ((FName)LVar14.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90.NameAndInfo.Index.Value = LVar14.s.LowPart;
      local_90.NameAndInfo.Number = LVar14.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_90.StatData.Pad = (uchar  [8])(local_a8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_90);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_80);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

