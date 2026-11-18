// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 25

// FSymslibResolver @ 14d426080

/* WARNING: Enum "Type": Some values do not have unique names */

FSymslibResolver * __thiscall
TraceServices::FSymslibResolver::FSymslibResolver
          (FSymslibResolver *this,IAnalysisSession *param_1,IResolvedSymbolFilter *param_2)

{
  ILinearAllocator *pIVar1;
  
  (this->ModulesLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Modules).PageSize = 0x80;
  (this->Modules).Allocator = pIVar1;
  (this->Modules).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).PagesArray.ArrayNum = 0;
  (this->Modules).PagesArray.ArrayMax = 0;
  (this->Modules).FirstPage = (TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry> *)0x0;
  (this->Modules).LastPage = (TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry> *)0x0;
  (this->Modules).TotalItemCount = 0;
  (this->SortedModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedModules).ArrayNum = 0;
  (this->SortedModules).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SymbolsQueueLock,4000);
  (this->ResolveQueue).AllocatorInstance.SecondaryData =
       (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0;
  (this->ResolveQueue).ArrayNum = 0;
  *(undefined8 *)&(this->ResolveQueue).ArrayMax = 0x800;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CleanupLock,4000);
  (this->CleanupTask).Reference = (FBaseGraphTask *)0x0;
  (this->ModuleReloadTask).Reference = (FBaseGraphTask *)0x0;
  this->CancelTasks = (atomic<bool>)0x0;
  (this->CustomSymbolSearchPathsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->CustomSymbolSearchPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomSymbolSearchPaths).ArrayNum = 0;
  (this->CustomSymbolSearchPaths).ArrayMax = 0;
  (this->ConfigSymbolSearchPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigSymbolSearchPaths).ArrayNum = 0;
  (this->ConfigSymbolSearchPaths).ArrayMax = 0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  (this->AppName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AppName).Data.ArrayNum = 0;
  (this->AppName).Data.ArrayMax = 0;
  this->ModulesDiscovered = (atomic<unsigned_int>)0x0;
  this->ModulesFailed = (atomic<unsigned_int>)0x0;
  this->ModulesLoaded = (atomic<unsigned_int>)0x0;
  this->AlreadyResolvedSymbols = (atomic<unsigned_int>)0x0;
  this->NoModuleSymbols = (atomic<unsigned_int>)0x0;
  this->SymbolBytesAllocated = (atomic<unsigned___int64>)0x0;
  this->SymbolBytesWasted = (atomic<unsigned___int64>)0x0;
  this->Session = param_1;
  this->SymbolFilter = param_2;
  FSymbolHelper::GetSymbolSearchPaths
            ((FLogCategoryBase *)&LogSymslib,&this->ConfigSymbolSearchPaths);
  UpdateSessionInfo(this);
  return this;
}

// ~FSymslibResolver @ 14d42c9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FSymslibResolver::~FSymslibResolver(FSymslibResolver *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> FVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  
  LOCK();
  this->CancelTasks = (atomic<bool>)0x1;
  UNLOCK();
  pFVar3 = (this->CleanupTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait(pFVar3,AnyNormalThreadNormalTask);
  }
  pFVar3 = (this->ModuleReloadTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait(pFVar3,AnyNormalThreadNormalTask);
  }
  pFVar4 = (this->AppName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->ConfigSymbolSearchPaths).AllocatorInstance.Data,
             (this->ConfigSymbolSearchPaths).ArrayNum);
  pFVar4 = (this->ConfigSymbolSearchPaths).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->CustomSymbolSearchPaths).AllocatorInstance.Data,
             (this->CustomSymbolSearchPaths).ArrayNum);
  pFVar4 = (this->CustomSymbolSearchPaths).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  }
  pFVar3 = (this->ModuleReloadTask).Reference;
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
  pFVar3 = (this->CleanupTask).Reference;
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
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CleanupLock);
  FVar5 = (this->ResolveQueue).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SymbolsQueueLock);
  pFVar4 = (this->SortedModules).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TPagedArray<TraceServices::FSymslibResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>_>
  ::
  ~TPagedArray<TraceServices::FSymslibResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>_>
            (&this->Modules);
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d42cb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
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

// operator() @ 14d430d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TraceServices::FSymslibResolver::OnAnalysisComplete'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 local_res8 [8];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x8090);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar3 = *(longlong *)this;
    do {
      iVar2 = *(int *)(lVar3 + 0x8088);
      FWindowsPlatformProcess::Sleep(0.0);
    } while (iVar2 != 0);
    SRWLock = *(PSRWLOCK *)this;
    AcquireSRWLockShared(SRWLock);
    lVar3 = *(longlong *)this;
    uVar5 = 0;
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      do {
        lVar3 = *(longlong *)
                 (*(longlong *)(lVar3 + 0x20) + (uVar5 / *(ulonglong *)(lVar3 + 0x30)) * 0x10) +
                (uVar5 % *(ulonglong *)(lVar3 + 0x30)) * 0x68;
        puVar4 = *(undefined8 **)(lVar3 + 0x18);
        iVar2 = *(int *)(lVar3 + 0x20);
        puVar1 = puVar4 + iVar2;
        while( true ) {
          if (*(int *)(lVar3 + 0x20) != iVar2) {
            `TCheckedPointerIterator<SYMS_DefArena_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (puVar4 == puVar1) break;
          syms_arena_def_release(*puVar4);
          puVar4 = puVar4 + 1;
        }
        *(undefined4 *)(lVar3 + 0x20) = 0;
        if (*(int *)(lVar3 + 0x24) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)(lVar3 + 0x18),0,(int *)(lVar3 + 0x24));
        }
        lVar3 = *(longlong *)this;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while (uVar5 < *(ulonglong *)(lVar3 + 0x38));
    }
    ReleaseSRWLockShared(SRWLock);
    if (3 < (byte)LogSymslib._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d430f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 14d430f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TraceServices::FSymslibResolver::QueueModuleReload'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  ulong64 uVar4;
  char cVar5;
  size_t sVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  FString *pFVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar16;
  bool bVar17;
  undefined4 local_res8 [2];
  FString local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FSymbolStringAllocator local_58;
  
  uVar16 = 0;
  local_res8[0] = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x8090);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  local_98.Data.AllocatorInstance.Data = *(FScriptContainerElement **)((longlong)this + 0x10);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen((wchar_t *)local_98.Data.AllocatorInstance.Data);
    uVar16 = (undefined4)sVar6;
  }
  local_98.Data.ArrayNum = uVar16;
  local_88.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_88.Size = uVar16;
  local_88._12_4_ = local_98.Data.ArrayMax;
  TraceServices::FSymslibResolver::LoadModuleTracked
            (*(FSymslibResolver **)this,*(FModuleEntry **)((longlong)this + 8),&local_88);
  if (*(char *)(**(longlong **)((longlong)this + 8) + 0x1d) == '\x02') {
    lVar13 = *(longlong *)this;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0x80d0));
    this_00 = FPlatformFileManager::Get();
    pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
    cVar5 = (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,*(undefined8 *)((longlong)this + 0x10));
    bVar17 = cVar5 == '\0';
    if (bVar17) {
      ::FString::FString((FString *)&local_88,*(wchar_t **)((longlong)this + 0x10));
      pFVar8 = FPaths::GetPath(&local_78,(FString *)&local_88);
    }
    else {
      pFVar8 = ::FString::FString(&local_68,*(wchar_t **)((longlong)this + 0x10));
    }
    local_98.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_98.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if ((bVar17) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((bVar17) && ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_88.DataPtr);
    }
    if ((!bVar17) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (1 < local_98.Data.ArrayNum) {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x80d8),
                 &local_98);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0x80d0));
    lVar13 = **(longlong **)((longlong)this + 8);
    LOCK();
    *(undefined4 *)(lVar13 + 0x28) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(lVar13 + 0x30) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(lVar13 + 0x34) = 0;
    UNLOCK();
    local_58.Allocator =
         (ILinearAllocator *)(**(code **)(**(longlong **)(*(longlong *)this + 0x8140) + 0xb8))();
    local_58.Block = (wchar_t *)0x0;
    local_58.BlockSize = 0x8000;
    local_58.BlockRemaining = 0;
    local_58.NumAllocatedBlocks = 0;
    local_58.TotalAllocatedSize = 0;
    local_58.TotalUsedSize = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
    pcVar3 = *(code **)((longlong)this + 0x20);
    plVar11 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x48);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar3)(uVar9,&local_98);
    iVar2 = local_98.Data.ArrayNum;
    uVar10 = (ulonglong)local_98.Data.ArrayNum;
    pFVar15 = local_98.Data.AllocatorInstance.Data + uVar10 * 0x10;
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar2) {
        `TCheckedPointerIterator<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      uVar4 = local_58.TotalAllocatedSize;
      if (FVar12.Data == pFVar15) break;
      if (*(char *)(*(longlong *)this + 0x80c8) != '\0') break;
      TraceServices::FSymslibResolver::ResolveSymbolTracked
                (*(FSymslibResolver **)this,*(ulong64 *)FVar12.Data,
                 *(FResolvedSymbol **)(FVar12.Data + 8),&local_58);
      uVar10 = local_98.Data._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x10;
    }
    lVar13 = local_58.TotalAllocatedSize - local_58.TotalUsedSize;
    if (6 < (byte)LogSymslib._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
    LOCK();
    *(longlong *)(*(longlong *)this + 0x8130) = *(longlong *)(*(longlong *)this + 0x8130) + uVar4;
    UNLOCK();
    LOCK();
    *(longlong *)(*(longlong *)this + 0x8138) = *(longlong *)(*(longlong *)this + 0x8138) + lVar13;
    UNLOCK();
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    lVar13 = *(longlong *)this;
    if (*(longlong *)(lVar13 + 0x80b8) != 0) {
      do {
        iVar2 = *(int *)(lVar13 + 0x8088);
        FWindowsPlatformProcess::Sleep(0.0);
      } while (iVar2 != 0);
      lVar13 = *(longlong *)((longlong)this + 8);
      puVar14 = *(undefined8 **)(lVar13 + 0x18);
      iVar2 = *(int *)(lVar13 + 0x20);
      puVar1 = puVar14 + iVar2;
      while( true ) {
        if (*(int *)(lVar13 + 0x20) != iVar2) {
          `TCheckedPointerIterator<SYMS_DefArena_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar14 == puVar1) break;
        syms_arena_def_release(*puVar14);
        puVar14 = puVar14 + 1;
      }
      lVar13 = *(longlong *)((longlong)this + 8);
      *(undefined4 *)(lVar13 + 0x20) = 0;
      if (*(int *)(lVar13 + 0x24) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(lVar13 + 0x18),0,(int *)(lVar13 + 0x24));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d431383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// operator() @ 14d431530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TraceServices::FSymslibResolver::DispatchQueuedAddresses'::__l5::<lambda_1>::operator()
          (void *this,uint param_1)

{
  uint uVar1;
  longlong *plVar2;
  FSymslibResolver *this_00;
  code *pcVar3;
  uint uVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  ulong64 *puVar8;
  longlong lVar9;
  ulong64 *puVar10;
  uint uVar11;
  FSymbolStringAllocator local_48;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar11 = *(int *)((longlong)this + 0x10) * param_1;
  uVar1 = *(uint *)(plVar2 + 1);
  uVar7 = *(int *)((longlong)this + 0x10) + uVar11;
  uVar4 = uVar1;
  if (uVar7 < uVar1) {
    uVar4 = uVar7;
  }
  uVar7 = 0;
  if ((int)uVar11 < (int)uVar1) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar8 = (ulong64 *)((longlong)(int)uVar11 * 0x10 + *plVar2);
  if (((int)(uVar4 - uVar11) < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = *(FSymslibResolver **)this;
  local_48.Allocator = (ILinearAllocator *)(**(code **)((longlong)*this_00->Session + 0xb8))();
  puVar10 = puVar8 + (longlong)(int)(uVar4 - uVar11) * 2;
  local_48.Block = (wchar_t *)0x0;
  local_48.BlockSize = 0x8000;
  local_48.BlockRemaining = 0;
  local_48.NumAllocatedBlocks = 0;
  local_48.TotalAllocatedSize = 0;
  local_48.TotalUsedSize = 0;
  uVar5 = local_48.TotalAllocatedSize;
  while ((local_48.TotalAllocatedSize = uVar5, puVar8 != puVar10 &&
         (this_00->CancelTasks == (atomic<bool>)0x0))) {
    TraceServices::FSymslibResolver::ResolveSymbolTracked
              (this_00,*puVar8,(FResolvedSymbol *)puVar8[1],&local_48);
    puVar8 = puVar8 + 2;
    uVar5 = local_48.TotalAllocatedSize;
  }
  lVar9 = uVar5 - local_48.TotalUsedSize;
  if (6 < (byte)LogSymslib._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
  }
  LOCK();
  this_00->SymbolBytesAllocated =
       (atomic<unsigned___int64>)((longlong)this_00->SymbolBytesAllocated + uVar5);
  UNLOCK();
  LOCK();
  this_00->SymbolBytesWasted =
       (atomic<unsigned___int64>)((longlong)this_00->SymbolBytesWasted + lVar9);
  UNLOCK();
  LOCK();
  *(int *)(*(longlong *)this + 0x8088) = *(int *)(*(longlong *)this + 0x8088) + -1;
  UNLOCK();
  return;
}

// operator() @ 14d433d70

void __thiscall
`TraceServices::FSymslibResolver::LoadModule'::__l15::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  LPVOID pvVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong *puVar29;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined1 local_70 [56];
  
  lVar26 = (longlong)param_1;
  pvVar16 = TlsGetValue(*(DWORD *)((longlong)this + 0x10));
  if ((int)pvVar16 == 0) {
    puVar3 = *(uint **)((longlong)this + 0x18);
    LOCK();
    uVar24 = *puVar3;
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    TlsSetValue(*(DWORD *)((longlong)this + 0x10),(LPVOID)(ulonglong)(uVar24 + 1));
    syms_set_lane(uVar24);
    uVar17 = syms_arena_def_alloc();
    plVar21 = *(longlong **)this;
    uVar28 = 0;
    if ((int)uVar24 < (int)plVar21[1]) {
      uVar28 = ~uVar24 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)(*plVar21 + (longlong)(int)uVar24 * 8) = uVar17;
  }
  else {
    uVar28 = (int)pvVar16 - 1;
    syms_set_lane(uVar28);
    plVar21 = *(longlong **)this;
    uVar24 = 0;
    if ((int)uVar28 < (int)plVar21[1]) {
      uVar24 = ~uVar28 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar17 = *(undefined8 *)(*plVar21 + (longlong)(int)uVar28 * 8);
  }
  puVar18 = (undefined8 *)syms_get_scratch(local_d8,0,0);
  lVar27 = *(longlong *)this;
  uVar6 = *puVar18;
  uVar7 = puVar18[1];
  uVar24 = 0;
  if (param_1 < *(int *)(lVar27 + 0x18)) {
    uVar24 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar29 = (ulonglong *)(lVar26 * 0x50 + *(longlong *)(lVar27 + 0x10));
  uVar19 = syms_group_proc_map_from_uid(*(undefined8 *)((longlong)this + 8),lVar26 + 1);
  puVar20 = (undefined4 *)syms_spatial_map_1d_copy(local_c8,uVar17,uVar19);
  uVar8 = puVar20[1];
  uVar9 = puVar20[2];
  uVar10 = puVar20[3];
  *(undefined4 *)puVar29 = *puVar20;
  *(undefined4 *)((longlong)puVar29 + 4) = uVar8;
  *(undefined4 *)(puVar29 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar29 + 0xc) = uVar10;
  uVar19 = syms_group_file_table_from_uid_with_fallbacks
                     (*(undefined8 *)((longlong)this + 8),lVar26 + 1);
  puVar20 = (undefined4 *)syms_string_array_copy(local_b8,uVar17,0,uVar19);
  uVar8 = puVar20[1];
  uVar9 = puVar20[2];
  uVar10 = puVar20[3];
  *(undefined4 *)(puVar29 + 2) = *puVar20;
  *(undefined4 *)((longlong)puVar29 + 0x14) = uVar8;
  *(undefined4 *)(puVar29 + 3) = uVar9;
  *(undefined4 *)((longlong)puVar29 + 0x1c) = uVar10;
  uVar19 = syms_group_line_parse_from_uid(*(undefined8 *)((longlong)this + 8),lVar26 + 1);
  puVar20 = (undefined4 *)syms_line_table_with_indexes_from_parse(local_70,uVar17,uVar19);
  uVar8 = puVar20[1];
  uVar9 = puVar20[2];
  uVar10 = puVar20[3];
  uVar11 = puVar20[4];
  uVar12 = puVar20[5];
  uVar13 = puVar20[6];
  uVar14 = puVar20[7];
  *(undefined4 *)(puVar29 + 4) = *puVar20;
  *(undefined4 *)((longlong)puVar29 + 0x24) = uVar8;
  *(undefined4 *)(puVar29 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar29 + 0x2c) = uVar10;
  *(undefined4 *)(puVar29 + 6) = uVar11;
  *(undefined4 *)((longlong)puVar29 + 0x34) = uVar12;
  *(undefined4 *)(puVar29 + 7) = uVar13;
  *(undefined4 *)((longlong)puVar29 + 0x3c) = uVar14;
  uVar19 = syms_group_line_sequence_map_from_uid(*(undefined8 *)((longlong)this + 8),lVar26 + 1);
  puVar20 = (undefined4 *)syms_spatial_map_1d_copy(local_a8,uVar17,uVar19);
  uVar8 = puVar20[1];
  uVar9 = puVar20[2];
  uVar10 = puVar20[3];
  *(undefined4 *)(puVar29 + 8) = *puVar20;
  *(undefined4 *)((longlong)puVar29 + 0x44) = uVar8;
  *(undefined4 *)(puVar29 + 9) = uVar9;
  *(undefined4 *)((longlong)puVar29 + 0x4c) = uVar10;
  uVar19 = syms_group_unit_from_uid(*(undefined8 *)((longlong)this + 8),lVar26 + 1);
  puVar20 = (undefined4 *)syms_id_map_alloc(local_88,uVar6,0xffd);
  local_108 = *puVar20;
  uStack_104 = puVar20[1];
  uStack_100 = puVar20[2];
  uStack_fc = puVar20[3];
  local_f8 = *(undefined8 *)(puVar20 + 4);
  plVar21 = (longlong *)
            syms_group_proc_sid_array_from_uid(*(undefined8 *)((longlong)this + 8),lVar26 + 1);
  lVar26 = plVar21[1];
  puVar22 = (undefined4 *)syms_arena_def_push(uVar17,lVar26 * 8);
  puVar20 = puVar22;
  for (lVar27 = lVar26; lVar27 != 0; lVar27 = lVar27 + -1) {
    uVar4 = *(undefined8 *)((longlong)puVar20 + (*plVar21 - (longlong)puVar22));
    puVar23 = (undefined4 *)
              syms_group_symbol_name_from_sid
                        (local_98,uVar17,*(undefined8 *)((longlong)this + 8),uVar19,uVar4);
    uVar8 = puVar23[1];
    *puVar20 = *puVar23;
    puVar20[1] = uVar8;
    syms_id_map_insert(uVar6,&local_108,uVar4,puVar20);
    puVar20 = puVar20 + 2;
  }
  uVar25 = *puVar29;
  uVar2 = uVar25 + puVar29[1] * 0x18;
  for (; uVar25 < uVar2; uVar25 = uVar25 + 0x18) {
    uVar17 = syms_id_map_ptr_from_u64(&local_108,*(undefined8 *)(uVar25 + 0x10));
    *(undefined8 *)(uVar25 + 0x10) = uVar17;
  }
  local_e8 = uVar6;
  uStack_e0 = uVar7;
  syms_arena_temp_end(&local_e8);
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 0x20) + 0x10);
  *piVar1 = *piVar1 + (int)lVar26;
  UNLOCK();
  return;
}

// DispatchQueuedAddresses @ 14d44f780

void __thiscall TraceServices::FSymslibResolver::DispatchQueuedAddresses(FSymslibResolver *this)

{
  int *piVar1;
  uint uVar2;
  ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> _Src;
  longlong lVar3;
  <lambda_1> local_res8;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  FSymslibResolver **local_40;
  FSymslibResolver *local_38;
  ForAnyElementType *local_30;
  uint local_28;
  
  local_60 = (this->ResolveQueue).ArrayNum;
  lVar3 = (longlong)local_60;
  if (local_60 != 0) {
    _Src = (this->ResolveQueue).AllocatorInstance.SecondaryData;
    local_68.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_60,0,&local_68,local_60,&local_5c);
    if (_Src == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
      _Src = (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)&this->ResolveQueue;
    }
    memcpy(local_68.Data,(void *)_Src,lVar3 << 4);
    uVar2 = (local_60 - 1U >> 3) + 1;
    local_28 = 4;
    if (4 < uVar2) {
      local_28 = uVar2;
    }
    uVar2 = (local_60 + -1 + local_28) / local_28;
    LOCK();
    this->TasksInFlight = (atomic<unsigned_int>)((int)this->TasksInFlight + uVar2);
    UNLOCK();
    local_30 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FSymslibResolver::DispatchQueuedAddresses'::__l5::<lambda_1>,void,int>
               ::Call;
    local_40 = &local_38;
    local_58.DataPtr = (void **)0x0;
    local_58.ArrayNum = 0;
    local_38 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",uVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_48,local_res8,
               BackgroundPriority,&local_58);
    piVar1 = &(this->ResolveQueue).ArrayMax;
    (this->ResolveQueue).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_>
                (0x10,8,0,&(this->ResolveQueue).AllocatorInstance,0,piVar1);
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return;
}

// EnumerateSymbolSearchPaths @ 14d45cad0

void __thiscall
TraceServices::FSymslibResolver::EnumerateSymbolSearchPaths
          (FSymslibResolver *this,TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_1)

{
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_18;
  
  AcquireSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&this->CustomSymbolSearchPaths,&local_18);
  ReleaseSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&this->ConfigSymbolSearchPaths,&local_18);
  return;
}

// GetModuleEntry @ 14d4698b0

FModuleEntry * __thiscall
TraceServices::FSymslibResolver::GetModuleEntry(FSymslibResolver *this,FModule *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FModuleEntry *pFVar4;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)this);
  pFVar3 = (this->SortedModules).AllocatorInstance.Data;
  iVar2 = (this->SortedModules).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SortedModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FSymslibResolver::FModuleEntry_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar4 = *(FModuleEntry **)pFVar3;
    if (pFVar4->Module == param_1) goto LAB_14d469904;
    pFVar3 = pFVar3 + 8;
  }
  pFVar4 = (FModuleEntry *)0x0;
LAB_14d469904:
  ReleaseSRWLockShared((PSRWLOCK)this);
  return pFVar4;
}

// GetModuleForAddress @ 14d469b00

FModuleEntry * __thiscall
TraceServices::FSymslibResolver::GetModuleForAddress(FSymslibResolver *this,ulong64 param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FModuleEntry *pFVar4;
  int iVar5;
  FModuleEntry *pFVar6;
  uint uVar7;
  uint uVar8;
  
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar1 = (this->SortedModules).ArrayNum;
  pFVar4 = (FModuleEntry *)0x0;
  iVar5 = 0;
  pFVar6 = pFVar4;
  uVar7 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar8 = uVar7 >> 1;
      iVar5 = uVar8 + (int)pFVar6;
      if (*(ulonglong *)
           (**(longlong **)((this->SortedModules).AllocatorInstance.Data + (longlong)iVar5 * 8) +
           0x10) < param_1) {
        pFVar6 = (FModuleEntry *)(ulonglong)(iVar5 + (uVar7 & 1));
      }
      iVar5 = (int)pFVar6;
      uVar7 = uVar8;
    } while (uVar8 != 0);
  }
  iVar5 = iVar5 + -1;
  if ((-1 < iVar5) && (iVar5 < (int)uVar1)) {
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FModuleEntry *)(*pcVar2)();
      return pFVar4;
    }
    pFVar4 = *(FModuleEntry **)((this->SortedModules).AllocatorInstance.Data + (longlong)iVar5 * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)this);
  return pFVar4;
}

// GetStats @ 14d46d2a0

void __thiscall TraceServices::FSymslibResolver::GetStats(FSymslibResolver *this,FStats *param_1)

{
  ulonglong uVar1;
  FModule *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar3 = 0;
  param_1->ModulesDiscovered = 0;
  param_1->ModulesLoaded = 0;
  param_1->ModulesFailed = 0;
  param_1->SymbolsDiscovered = 0;
  param_1->SymbolsCached = 0;
  param_1->SymbolsResolved = 0;
  uVar4 = 0;
  param_1->SymbolsFailed = 0;
  if ((this->Modules).TotalItemCount != 0) {
    do {
      uVar4 = uVar4 + 1;
      uVar1 = (this->Modules).PageSize;
      pFVar2 = (this->Modules).FirstPage[uVar3 / uVar1].Items[uVar3 % uVar1].Module;
      param_1->SymbolsDiscovered = param_1->SymbolsDiscovered + (int)(pFVar2->Stats).Discovered;
      param_1->SymbolsCached = param_1->SymbolsCached + (int)(pFVar2->Stats).Cached;
      param_1->SymbolsResolved = param_1->SymbolsResolved + (int)(pFVar2->Stats).Resolved;
      param_1->SymbolsFailed = param_1->SymbolsFailed + (int)(pFVar2->Stats).Failed;
      uVar3 = (ulonglong)uVar4;
    } while (uVar3 < (this->Modules).TotalItemCount);
  }
  param_1->SymbolsFailed = param_1->SymbolsFailed + (int)this->NoModuleSymbols;
  param_1->ModulesDiscovered = (uint)this->ModulesDiscovered;
  param_1->ModulesFailed = (uint)this->ModulesFailed;
  param_1->ModulesLoaded = (uint)this->ModulesLoaded;
                    /* WARNING: Could not recover jumptable at 0x00014d46d348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)this);
  return;
}

// HasFinishedResolving @ 14d471d00

bool __thiscall TraceServices::FSymslibResolver::HasFinishedResolving(FSymslibResolver *this)

{
  FBaseGraphTask *pFVar1;
  
  pFVar1 = (this->CleanupTask).Reference;
  if (pFVar1 != (FBaseGraphTask *)0x0) {
    return (bool)pFVar1->field_0xd0;
  }
  return false;
}

// LoadModule @ 14d4761c0

/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

EModuleStatus __thiscall
TraceServices::FSymslibResolver::LoadModule
          (FSymslibResolver *this,FModuleEntry *param_1,TStringView<wchar_t> *param_2,
          TStringBuilderBase<wchar_t> *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  EModuleStatus EVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  DWORD dwTlsIndex;
  FString *pFVar13;
  undefined8 *puVar14;
  TStringBuilderBase<wchar_t> *pTVar15;
  size_t sVar16;
  FTaskGraphInterface *pFVar17;
  longlong lVar18;
  undefined4 *puVar19;
  FSymsSymbol *pFVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  ulong64 uVar23;
  FScriptContainerElement *pFVar24;
  wchar_t *pwVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  FSymsInstance *pFVar31;
  <lambda_1> local_res8;
  undefined4 local_res10 [2];
  SymbolStats *local_res18;
  TStringBuilderBase<wchar_t> *local_res20;
  FString local_198;
  TArray<TraceServices::_anonymous_namespace_::FAutoMappedFile,TSizedDefaultAllocator<32>_>
  local_188;
  int *local_178;
  TArrayView<std::nullptr_t,int> local_170;
  code *local_160;
  FSymsInstance **local_158;
  FSymsInstance *local_150;
  undefined8 *local_148;
  DWORD local_140;
  undefined4 *local_138;
  SymbolStats *local_130;
  FString local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  SYMS_ParseBundle local_f8;
  SYMS_ParseBundle local_c8;
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  local_98 = param_2->DataPtr;
  uStack_90 = *(undefined8 *)&param_2->Size;
  uVar27 = 0;
  uVar22 = *(undefined8 *)&param_2->Size;
  local_res18 = &param_1->Module->Stats;
  pwVar25 = param_2->DataPtr;
  LOCK();
  (param_1->Module->Stats).Available = (atomic<unsigned_int>)0x0;
  UNLOCK();
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  local_res20 = param_3;
  pFVar13 = ::FString::ConstructFromPtrSize(&local_128,pwVar25,(int)uVar22);
  if (&local_198 != pFVar13) {
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    local_198.Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  puVar14 = (undefined8 *)syms_group_alloc();
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  if ((this->Platform).Data.ArrayNum < 2) {
    UpdateSessionInfo(this);
  }
  bVar7 = TraceServices::`anonymous_namespace'::LoadBinary
                    (param_1->Module->FullName,(SYMS_DefArena *)*puVar14,&local_f8,&local_188,
                     &local_198,&this->Platform,&this->AppName);
  if (bVar7) {
    bVar7 = TraceServices::`anonymous_namespace'::LoadDebug
                      ((SYMS_DefArena *)*puVar14,&local_f8,&local_188,&local_198);
    if (bVar7) {
      if ((param_1->ImageId).ArrayNum != 0) {
        local_c8.bin_data.str = local_f8.bin_data.str;
        local_c8.bin_data.size = local_f8.bin_data.size;
        local_c8.dbg_data.str = local_f8.dbg_data.str;
        local_c8.dbg_data.size = local_f8.dbg_data.size;
        local_c8.bin = local_f8.bin;
        local_c8.dbg = local_f8.dbg;
        bVar7 = TraceServices::`anonymous_namespace'::MatchImageId(&param_1->ImageId,&local_c8);
        if (!bVar7) {
          syms_group_release(puVar14);
          pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_3,L"Symbols for \'",0xd);
          pwVar25 = param_1->Module->Name;
          iVar12 = 0;
          if (pwVar25 != (wchar_t *)0x0) {
            sVar16 = wcslen(pwVar25);
            iVar12 = (int)sVar16;
          }
          pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,pwVar25,iVar12);
          pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,L"\' found in \'",0xc);
          iVar12 = local_198.Data.ArrayNum + -1;
          if (local_198.Data.ArrayNum == 0) {
            iVar12 = 0;
          }
          pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              (pTVar15,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar12);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    (pTVar15,L"\' does not match trace binary.",0x1e);
          EVar8 = FailedStatusStart;
          goto LAB_14d47695b;
        }
      }
      pFVar31 = &param_1->Instance;
      syms_set_lane(0);
      syms_group_init(puVar14,&local_f8);
      uVar9 = syms_group_unit_count(puVar14);
      iVar12 = (param_1->Instance).Units.ArrayNum;
      piVar1 = &(param_1->Instance).Units.ArrayNum;
      if (iVar12 < (int)uVar9) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,uVar9 - iVar12,&(param_1->Instance).Units.AllocatorInstance,piVar1,
                   &(param_1->Instance).Units.ArrayMax);
      }
      else {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        if ((int)uVar9 < iVar12) {
          uVar10 = iVar12 - uVar9;
          if (((int)(uVar10 | uVar9) < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            EVar8 = (*pcVar2)();
            return EVar8;
          }
          if (uVar10 != 0) {
            pFVar24 = (param_1->Instance).Units.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50
            ;
            iVar12 = (*piVar1 - uVar10) - uVar9;
            if (iVar12 != 0) {
              memmove(pFVar24,pFVar24 + (longlong)(int)uVar10 * 0x50,(longlong)iVar12 * 0x50);
            }
            *piVar1 = *piVar1 - uVar10;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,&(param_1->Instance).Units.AllocatorInstance,*piVar1,
                       &(param_1->Instance).Units.ArrayMax);
          }
        }
      }
      pFVar17 = FTaskGraphInterface::Get();
      uVar10 = (**(code **)((longlong)*pFVar17 + 0x20))(pFVar17);
      iVar12 = (param_1->Instance).Arenas.ArrayNum;
      piVar1 = &(param_1->Instance).Arenas.ArrayNum;
      if ((int)uVar10 < 1) {
        uVar10 = 1;
      }
      local_178 = piVar1;
      if (iVar12 < (int)uVar10) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar10 - iVar12,(ForAnyElementType *)pFVar31,piVar1,
                            &(param_1->Instance).Arenas.ArrayMax);
        memset((pFVar31->Arenas).AllocatorInstance.Data + (longlong)iVar11 * 8,0,
               (longlong)(int)(uVar10 - iVar12) << 3);
      }
      else {
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if ((int)uVar10 < iVar12) {
          uVar26 = iVar12 - uVar10;
          if (((int)(uVar10 | uVar26) < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            EVar8 = (*pcVar2)();
            return EVar8;
          }
          if (uVar26 != 0) {
            pFVar24 = (pFVar31->Arenas).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
            iVar12 = (*piVar1 - uVar26) - uVar10;
            if (iVar12 != 0) {
              memmove(pFVar24,pFVar24 + (longlong)(int)uVar26 * 8,(longlong)iVar12 << 3);
            }
            *piVar1 = *piVar1 - uVar26;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(ForAnyElementType *)pFVar31,*piVar1,&(param_1->Instance).Arenas.ArrayMax
                      );
          }
        }
      }
      dwTlsIndex = TlsAlloc();
      local_res10[0] = 0;
      syms_group_begin_multilane(puVar14,(longlong)(int)uVar10);
      local_138 = local_res10;
      local_130 = local_res18;
      local_160 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FSymslibResolver::LoadModule'::__l15::<lambda_1>,void,int>
                  ::Call;
      local_158 = &local_150;
      local_170.DataPtr = (void **)0x0;
      local_170.ArrayNum = 0;
      local_150 = pFVar31;
      local_148 = puVar14;
      local_140 = dwTlsIndex;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",uVar9,1,(TFunctionRef<void___cdecl(int)> *)&local_160,
                 local_res8,None,&local_170);
      syms_group_end_multilane(puVar14);
      TlsFree(dwTlsIndex);
      if ((*piVar1 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        EVar8 = (*pcVar2)();
        return EVar8;
      }
      lVar18 = *(longlong *)(pFVar31->Arenas).AllocatorInstance.Data;
      if (lVar18 == 0) {
        lVar18 = syms_arena_def_alloc();
        if ((*piVar1 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          EVar8 = (*pcVar2)();
          return EVar8;
        }
        *(longlong *)(pFVar31->Arenas).AllocatorInstance.Data = lVar18;
      }
      puVar19 = (undefined4 *)syms_group_link_name_records(local_88,puVar14);
      uVar28 = *(ulonglong *)(puVar19 + 2);
      local_118 = *puVar19;
      uStack_114 = puVar19[1];
      uStack_110 = puVar19[2];
      uStack_10c = puVar19[3];
      pFVar20 = (FSymsSymbol *)syms_arena_def_push(lVar18,uVar28 * 8);
      if (uVar28 != 0) {
        puVar19 = (undefined4 *)CONCAT44(uStack_114,local_118);
        do {
          local_108 = *puVar19;
          uStack_104 = puVar19[1];
          uStack_100 = puVar19[2];
          uStack_fc = puVar19[3];
          puVar21 = (undefined4 *)syms_push_string_copy(local_78,lVar18,&local_108);
          puVar19 = puVar19 + 6;
          uVar3 = puVar21[1];
          *(undefined4 *)&pFVar20[uVar27].Name = *puVar21;
          *(undefined4 *)((longlong)&pFVar20[uVar27].Name + 4) = uVar3;
          uVar27 = uVar27 + 1;
        } while (uVar27 < uVar28);
      }
      uVar27 = 0;
      uVar22 = syms_group_link_name_spatial_map(puVar14);
      puVar19 = (undefined4 *)syms_spatial_map_1d_copy(local_68,lVar18,uVar22);
      uVar3 = *puVar19;
      uVar4 = puVar19[1];
      uVar5 = puVar19[2];
      uVar6 = puVar19[3];
      (param_1->Instance).StrippedSymbols = pFVar20;
      *(undefined4 *)&(param_1->Instance).StrippedMap.ranges = uVar3;
      *(undefined4 *)((longlong)&(param_1->Instance).StrippedMap.ranges + 4) = uVar4;
      *(undefined4 *)&(param_1->Instance).StrippedMap.count = uVar5;
      *(undefined4 *)((longlong)&(param_1->Instance).StrippedMap.count + 4) = uVar6;
      LOCK();
      local_res18->Available = (atomic<unsigned_int>)((int)local_res18->Available + (int)uVar28);
      UNLOCK();
      uVar22 = syms_group_unit_map(puVar14);
      puVar19 = (undefined4 *)syms_spatial_map_1d_copy(local_58,lVar18,uVar22);
      uVar3 = puVar19[1];
      uVar4 = puVar19[2];
      uVar5 = puVar19[3];
      *(undefined4 *)&(param_1->Instance).UnitMap.ranges = *puVar19;
      *(undefined4 *)((longlong)&(param_1->Instance).UnitMap.ranges + 4) = uVar3;
      *(undefined4 *)&(param_1->Instance).UnitMap.count = uVar4;
      *(undefined4 *)((longlong)&(param_1->Instance).UnitMap.count + 4) = uVar5;
      uVar23 = syms_group_default_vbase(puVar14);
      (param_1->Instance).DefaultBase = uVar23;
      syms_group_release(puVar14);
      iVar12 = (param_1->Instance).Arenas.ArrayNum;
      if (iVar12 != 0) {
        pFVar24 = (pFVar31->Arenas).AllocatorInstance.Data;
        local_res8 = (<lambda_1>)(*(longlong *)pFVar24 != 0);
        uVar28 = uVar27;
        uVar29 = uVar27;
        uVar30 = uVar27;
        do {
          uVar10 = (uint)uVar29;
          uVar9 = uVar10;
          do {
            uVar28 = uVar28 + 1;
            uVar9 = uVar9 + 1;
            uVar29 = (ulonglong)uVar9;
            if ((longlong)iVar12 <= (longlong)uVar28) break;
          } while (local_res8 == (<lambda_1>)(*(longlong *)(pFVar24 + uVar28 * 8) != 0));
          if (local_res8 != (<lambda_1>)0x0) {
            uVar26 = (uint)uVar30;
            if (uVar26 != uVar10) {
              memmove(pFVar24 + (longlong)(int)uVar26 * 8,pFVar24 + (longlong)(int)uVar10 * 8,
                      (longlong)(int)(uVar9 - uVar10) << 3);
            }
            uVar30 = (ulonglong)(uVar26 + (uVar9 - uVar10));
          }
          local_res8 = (<lambda_1>)((byte)local_res8 ^ 1);
        } while ((longlong)uVar28 < (longlong)iVar12);
        *local_178 = (int)uVar30;
      }
      uVar9 = 0;
      if ((int)(local_188.ArrayNum - 1U) < local_188.ArrayNum) {
        uVar9 = ~(local_188.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          EVar8 = (*pcVar2)();
          return EVar8;
        }
      }
      if (*(int *)(local_188.AllocatorInstance.Data + (longlong)local_188.ArrayNum * 0x20 + -0x18)
          == 0) {
        pwVar25 = L"";
LAB_14d47693d:
        sVar16 = wcslen(pwVar25);
        uVar27 = sVar16 & 0xffffffff;
      }
      else {
        pwVar25 = *(wchar_t **)
                   (local_188.AllocatorInstance.Data + (longlong)local_188.ArrayNum * 0x20 + -0x20);
        if (pwVar25 != (wchar_t *)0x0) goto LAB_14d47693d;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(local_res20,pwVar25,(int)uVar27);
      EVar8 = Loaded;
      goto LAB_14d47695b;
    }
    syms_group_release(puVar14);
    pwVar25 = L"Failed to load debug symbols for \'%s\' in \'%s\'.";
  }
  else {
    syms_group_release(puVar14);
    pwVar25 = L"Failed to load binary for \'%s\' in \'%s\'.";
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(param_3,pwVar25);
  EVar8 = Failed;
LAB_14d47695b:
  DestructItems<TraceServices::_anonymous_namespace_::FAutoMappedFile,int>
            ((FAutoMappedFile *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if ((FAutoMappedFile *)local_188.AllocatorInstance.Data != (FAutoMappedFile *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return EVar8;
}

// LoadModuleTracked @ 14d477490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EModuleStatus": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FSymslibResolver::LoadModuleTracked
          (FSymslibResolver *this,FModuleEntry *param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  FModule *pFVar2;
  code *pcVar3;
  atomic<TraceServices::EModuleStatus> aVar4;
  int iVar5;
  FString *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 auStackY_268 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_218;
  undefined1 local_208 [8];
  FString local_200;
  undefined1 local_1f0;
  undefined1 local_1ef [7];
  FString local_1e8;
  FModule *local_1d8;
  FString local_1d0;
  wchar_t *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  FString local_198;
  TStringView<wchar_t> local_188;
  wchar_t *local_178;
  undefined8 uStack_170;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_268;
  pFVar2 = param_1->Module;
  LOCK();
  (pFVar2->Stats).Discovered = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (pFVar2->Stats).Resolved = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (pFVar2->Stats).Failed = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (pFVar2->Stats).Available = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  pFVar2->Status = (atomic<TraceServices::EModuleStatus>)0x1;
  UNLOCK();
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  local_1d8 = pFVar2;
  if (param_2->Size == 0) {
    AcquireSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
    iVar5 = (this->CustomSymbolSearchPaths).ArrayNum;
    pFVar14 = (this->CustomSymbolSearchPaths).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->CustomSymbolSearchPaths).ArrayNum != iVar5) {
        local_208[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_208);
      }
      if (pFVar14 == pFVar13) break;
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&local_218,(FString *)pFVar14);
      pFVar14 = pFVar14 + 0x10;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
    ::FString::FString(&local_1d0,pFVar2->FullName);
    FPaths::GetPath(&local_1e8,&local_1d0);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeDirectoryName(&local_1e8);
    FVar12.Data = local_218.AllocatorInstance.Data;
    if (1 < local_1e8.Data.ArrayNum) {
      pFVar14 = local_218.AllocatorInstance.Data + (longlong)local_218.ArrayNum * 0x10;
      uVar10 = local_1e8.Data._8_8_;
      FVar11.Data = local_218.AllocatorInstance.Data;
      if (local_218.AllocatorInstance.Data != pFVar14) {
        do {
          iVar5 = *(int *)(FVar11.Data + 8);
          if (iVar5 == (int)uVar10) {
            if (1 < iVar5) {
              iVar5 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar11.Data,
                                 (wchar_t *)local_1e8.Data.AllocatorInstance.Data);
              bVar15 = iVar5 == 0;
              uVar10 = local_1e8.Data._8_8_;
              goto LAB_14d4775ec;
            }
LAB_14d4775fe:
            if ((int)((longlong)FVar11.Data - (longlong)FVar12.Data >> 4) != -1) goto LAB_14d47770a;
            break;
          }
          bVar15 = iVar5 + (int)uVar10 == 1;
LAB_14d4775ec:
          if (bVar15) goto LAB_14d4775fe;
          FVar11.Data = FVar11.Data + 0x10;
        } while (FVar11.Data != pFVar14);
      }
      iVar5 = local_218.ArrayNum;
      if ((local_218.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e8) &&
         ((FScriptContainerElement *)&local_1e8 <
          local_218.AllocatorInstance.Data + (longlong)local_218.ArrayMax * 0x10)) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_218.ArrayNum;
      }
      if (iVar5 == local_218.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_218.AllocatorInstance,&local_218.ArrayMax);
      }
      FVar12.Data = local_1e8.Data.AllocatorInstance.Data;
      local_218.ArrayNum = iVar5 + 1;
      pFVar14 = local_218.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(FScriptContainerElement **)pFVar14 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_1e8.Data.ArrayNum;
      if (local_1e8.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                   local_1e8.Data.ArrayNum,(int *)(pFVar14 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar14,FVar12.Data,(longlong)local_1e8.Data.ArrayNum * 2);
      }
    }
LAB_14d47770a:
    iVar5 = (this->ConfigSymbolSearchPaths).ArrayNum;
    pFVar14 = (this->ConfigSymbolSearchPaths).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->ConfigSymbolSearchPaths).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1f0);
      }
      if (pFVar14 == pFVar13) break;
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&local_218,(FString *)pFVar14);
      pFVar14 = pFVar14 + 0x10;
    }
  }
  else {
    local_178 = param_2->DataPtr;
    uStack_170 = *(undefined8 *)&param_2->Size;
    local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.Data.ArrayNum = 0;
    local_200.Data.ArrayMax = 0;
    pFVar6 = ::FString::ConstructFromPtrSize
                       (&local_198,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    if (&local_200 != pFVar6) {
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      local_200.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_200.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (((local_218.AllocatorInstance.Data <= (FScriptContainerElement *)&local_200) &&
        ((FScriptContainerElement *)&local_200 <
         local_218.AllocatorInstance.Data + (longlong)local_218.ArrayMax * 0x10)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = local_218.ArrayNum;
    if (local_218.ArrayNum == local_218.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_218.AllocatorInstance,&local_218.ArrayMax);
    }
    local_218.ArrayNum = iVar5 + 1;
    pFVar14 = local_218.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(FScriptContainerElement **)pFVar14 = local_200.Data.AllocatorInstance.Data;
    local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar14 + 8) = local_200.Data.ArrayNum;
    *(int *)(pFVar14 + 0xc) = local_200.Data.ArrayMax;
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.Data.ArrayNum = 0;
    local_200.Data.ArrayMax = 0;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  local_168.Base = local_148;
  aVar4 = (atomic<TraceServices::EModuleStatus>)0x5;
  local_168.CurPos = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.End = (wchar_t *)local_48;
  iVar5 = local_218.ArrayNum;
  uVar7 = (ulonglong)local_218.ArrayNum;
  pFVar14 = local_218.AllocatorInstance.Data + uVar7 * 0x10;
  FVar12.Data = local_218.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar5) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1ef);
    }
    if ((FVar12.Data == pFVar14) || (this->CancelTasks != (atomic<bool>)0x0)) break;
    local_168.CurPos = local_168.Base;
    local_1b8 = *(wchar_t **)FVar12.Data;
    iStack_1b0 = *(int *)(FVar12.Data + 8) + -1;
    if (*(int *)(FVar12.Data + 8) == 0) {
      iStack_1b0 = 0;
    }
    local_188._12_4_ = uStack_1ac;
    local_188.Size = iStack_1b0;
    local_188.DataPtr = local_1b8;
    aVar4 = (atomic<TraceServices::EModuleStatus>)LoadModule(this,param_1,&local_188,&local_168);
    if (3 < (byte)LogSymslib._0_1_) {
      if (local_168.End < local_168.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      *local_168.CurPos = L'\0';
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
    if (aVar4 == (atomic<TraceServices::EModuleStatus>)0x2) break;
    uVar7 = local_218._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 0x10;
  }
  lVar8 = 0x8120;
  if (aVar4 != (atomic<TraceServices::EModuleStatus>)0x2) {
    lVar8 = 0x811c;
  }
  LOCK();
  piVar1 = (int *)((longlong)
                   &(((FSymslibResolver *)(&this->SymbolsQueueLock + -2))->ModulesLock).Mutex.Mutex.
                    Ptr + lVar8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_1a8 = local_168.Base;
  local_1a0 = (undefined4)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
  pwVar9 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_1a8);
  local_1d8->StatusMessage = pwVar9;
  LOCK();
  local_1d8->Status = aVar4;
  UNLOCK();
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  DestructItems<FString,int>((FString *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  return;
}

// MaybeDispatchQueuedAddresses @ 14d479460

void __thiscall
TraceServices::FSymslibResolver::MaybeDispatchQueuedAddresses(FSymslibResolver *this)

{
  int *piVar1;
  uint uVar2;
  ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> _Src;
  longlong lVar3;
  <lambda_1> <StackX_8;
  ForAnyElementType FStack_68;
  int iStack_60;
  int iStack_5c;
  TArrayView<std::nullptr_t,int> TStack_58;
  code *pcStack_48;
  FSymslibResolver **ppFStack_40;
  FSymslibResolver *pFStack_38;
  ForAnyElementType *pFStack_30;
  uint uStack_28;
  
  if (((atomic<unsigned_int>)((int)this->ModulesDiscovered - (int)this->ModulesFailed) ==
       this->ModulesLoaded) && (0x7ff < (uint)(this->ResolveQueue).ArrayNum)) {
    iStack_60 = (this->ResolveQueue).ArrayNum;
    lVar3 = (longlong)iStack_60;
    if (iStack_60 != 0) {
      _Src = (this->ResolveQueue).AllocatorInstance.SecondaryData;
      FStack_68.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iStack_60,0,&FStack_68,iStack_60,&iStack_5c);
      if (_Src == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
        _Src = (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)&this->ResolveQueue;
      }
      memcpy(FStack_68.Data,(void *)_Src,lVar3 << 4);
      uVar2 = (iStack_60 - 1U >> 3) + 1;
      uStack_28 = 4;
      if (4 < uVar2) {
        uStack_28 = uVar2;
      }
      uVar2 = (iStack_60 + -1 + uStack_28) / uStack_28;
      LOCK();
      this->TasksInFlight = (atomic<unsigned_int>)((int)this->TasksInFlight + uVar2);
      UNLOCK();
      pFStack_30 = &FStack_68;
      pcStack_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TraceServices::FSymslibResolver::DispatchQueuedAddresses'::__l5::<lambda_1>,void,int>
                   ::Call;
      ppFStack_40 = &pFStack_38;
      TStack_58.DataPtr = (void **)0x0;
      TStack_58.ArrayNum = 0;
      pFStack_38 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",uVar2,1,(TFunctionRef<void___cdecl(int)> *)&pcStack_48,
                 <StackX_8,BackgroundPriority,&TStack_58);
      piVar1 = &(this->ResolveQueue).ArrayMax;
      (this->ResolveQueue).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_>
                  (0x10,8,0,&(this->ResolveQueue).AllocatorInstance,0,piVar1);
      }
      if (FStack_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data);
      }
    }
    return;
  }
  return;
}

// OnAnalysisComplete @ 14d47a7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FSymslibResolver::OnAnalysisComplete(FSymslibResolver *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  int *piVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  undefined8 *local_res8;
  code *local_38 [2];
  undefined **local_28;
  FSymslibResolver *local_20;
  undefined8 local_10;
  
  lpCriticalSection = &this->SymbolsQueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DispatchQueuedAddresses(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`TraceServices::FSymslibResolver::OnAnalysisComplete'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FSymslibResolver::OnAnalysisComplete'::__l2::<lambda_1>,void>
                  ::Call;
    local_10 = 0;
    local_20 = this;
    TVar6 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,MainQueue);
    pTVar3 = &this->CleanupTask;
    if ((FBaseGraphTask *)pTVar3 != TVar6.Reference) {
      pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar6.Reference;
      *(undefined8 *)TVar6.Reference = 0;
      if (pFVar5 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar5->field_0x30;
        iVar4 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res8 + 6);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_res8 != (undefined8 *)0x0)) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// QueueModuleLoad @ 14d480180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FSymslibResolver::QueueModuleLoad
          (FSymslibResolver *this,uchar *param_1,uint param_2,FModule *param_3)

{
  ulong64 *puVar1;
  int *piVar2;
  TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry> *pTVar3;
  ILinearAllocator *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FModuleEntry *pFVar9;
  TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry> *pTVar10;
  undefined8 *local_res8;
  FIdentityFunctor local_res18;
  FModuleEntry *local_78;
  TArrayView<unsigned_char_const_,int> local_70;
  code *local_58 [2];
  undefined **local_48;
  FSymslibResolver *local_40;
  FModuleEntry *local_38;
  undefined8 local_30;
  
  if (param_3 == (FModule *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Module != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                       ,0x204,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar9 = GetModuleEntry(this,param_3);
  if (pFVar9 != (FModuleEntry *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7005703417737772539>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                       ,0x205,"GetModuleEntry(Module) == nullptr");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if ((this->CleanupTask).Reference != (FBaseGraphTask *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CleanupTask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                       ,0x209,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar3 = (this->Modules).LastPage;
  if ((pTVar3 == (TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry> *)0x0) ||
     (pTVar3->Count == (this->Modules).PageSize)) {
    iVar8 = (this->Modules).PagesArray.ArrayNum;
    piVar2 = &(this->Modules).PagesArray.ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Modules).PagesArray.AllocatorInstance,piVar2);
    }
    (this->Modules).PagesArray.ArrayNum = iVar8 + 1;
    pTVar10 = (TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry> *)
              ((this->Modules).PagesArray.AllocatorInstance.Data + (longlong)iVar8 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>,int>
              (pTVar10,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry> *)
             (this->Modules).PagesArray.AllocatorInstance.Data;
    pIVar4 = (this->Modules).Allocator;
    (this->Modules).LastPage = pTVar10;
    (this->Modules).FirstPage = pTVar3;
    pFVar9 = (FModuleEntry *)
             (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->Modules).PageSize * 0x68);
    ((this->Modules).LastPage)->Items = pFVar9;
  }
  pTVar3 = (this->Modules).LastPage;
  puVar1 = &(this->Modules).TotalItemCount;
  *puVar1 = *puVar1 + 1;
  local_78 = pTVar3->Items + pTVar3->Count;
  local_78->Module = (FModule *)0x0;
  (local_78->ImageId).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_78->ImageId).ArrayNum = 0;
  (local_78->ImageId).ArrayMax = 0;
  (local_78->Instance).Arenas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_78->Instance).Arenas.ArrayNum = 0;
  (local_78->Instance).Arenas.ArrayMax = 0;
  (local_78->Instance).Units.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_78->Instance).Units.ArrayNum = 0;
  (local_78->Instance).Units.ArrayMax = 0;
  (local_78->Instance).UnitMap.ranges = (SYMS_SpatialMap1DRange *)0x0;
  (local_78->Instance).UnitMap.count = 0;
  (local_78->Instance).StrippedMap.ranges = (SYMS_SpatialMap1DRange *)0x0;
  (local_78->Instance).StrippedMap.count = 0;
  (local_78->Instance).StrippedSymbols = (FSymsSymbol *)0x0;
  (local_78->Instance).DefaultBase = 0;
  puVar1 = &((this->Modules).LastPage)->Count;
  *puVar1 = *puVar1 + 1;
  local_78->Module = param_3;
  local_70.DataPtr = param_1;
  local_70.ArrayNum = param_2;
  if ((int)param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
            (&local_78->ImageId,&local_70);
  pFVar5 = (this->SortedModules).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)(this->SortedModules).ArrayMax * 8))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->SortedModules).ArrayNum;
  piVar2 = &(this->SortedModules).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->SortedModules).AllocatorInstance,piVar2);
  }
  (this->SortedModules).ArrayNum = iVar8 + 1;
  *(FModuleEntry **)((this->SortedModules).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_78;
  AlgoImpl::
  IntroSortInternal<TraceServices::FSymslibResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FSymslibResolver::QueueModuleLoad_::__l2::<lambda_1>_>
            ((FModuleEntry **)(this->SortedModules).AllocatorInstance.Data,
             (this->SortedModules).ArrayNum,local_res18,(<lambda_1>)local_res18);
  LOCK();
  this->ModulesDiscovered = (atomic<unsigned_int>)((int)this->ModulesDiscovered + 1);
  UNLOCK();
  LOCK();
  (param_3->Stats).Discovered = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (param_3->Stats).Resolved = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (param_3->Stats).Failed = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (param_3->Stats).Available = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  param_3->Status = (atomic<TraceServices::EModuleStatus>)0x1;
  UNLOCK();
  LOCK();
  this->TasksInFlight = (atomic<unsigned_int>)((int)this->TasksInFlight + 1);
  UNLOCK();
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleLoad'::`2'::<lambda_2>,1,0>
              ::_vftable_;
  local_38 = local_78;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FSymslibResolver::QueueModuleLoad'::__l2::<lambda_2>,void>
                ::Call;
  local_40 = this;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_58,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_res8 + 6);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// QueueModuleReload @ 14d480ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FSymslibResolver::QueueModuleReload
          (FSymslibResolver *this,FModule *param_1,wchar_t *param_2,
          TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
          *param_3)

{
  int *piVar1;
  atomic<TraceServices::EModuleStatus> aVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  code *pcVar5;
  bool bVar6;
  FModuleEntry *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FString local_f8;
  undefined8 *local_e8;
  FScriptContainerElement *local_e0;
  int local_d8;
  code *local_c8 [5];
  undefined8 *local_a0;
  FSymslibResolver *local_98;
  FModuleEntry *local_90;
  undefined8 local_88;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_1 == (FModule *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Module != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                       ,0x22e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = GetModuleEntry(this,param_1);
  if (pFVar7 != (FModuleEntry *)0x0) {
    if (pFVar7->Module != param_1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry->Module == Module",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                         ,0x236,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (param_1->Status != (atomic<TraceServices::EModuleStatus>)0x2) {
      LOCK();
      (param_1->Stats).Discovered = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      (param_1->Stats).Resolved = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      (param_1->Stats).Failed = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      (param_1->Stats).Available = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      aVar2 = param_1->Status;
      param_1->Status = (atomic<TraceServices::EModuleStatus>)0x1;
      UNLOCK();
      if (2 < (byte)aVar2) {
        LOCK();
        this->ModulesFailed = (atomic<unsigned_int>)((int)this->ModulesFailed + -1);
        UNLOCK();
      }
      ::FString::FString(&local_f8,param_2);
      FPaths::NormalizeDirectoryName(&local_f8);
      local_e0 = local_f8.Data.AllocatorInstance.Data;
      local_d8 = local_f8.Data.ArrayNum + -1;
      if (local_f8.Data.ArrayNum == 0) {
        local_d8 = 0;
      }
      local_88 = (**(code **)((longlong)*this->Session + 200))(this->Session,&local_e0);
      pFVar4 = (this->ModuleReloadTask).Reference;
      if ((pFVar4 != (FBaseGraphTask *)0x0) && (pFVar4->field_0xd0 == '\0')) {
        FBaseGraphTask::Wait((this->ModuleReloadTask).Reference,AnyNormalThreadNormalTask);
      }
      local_78 = *(longlong *)param_3;
      local_50 = (longlong *)0x0;
      local_98 = this;
      local_90 = pFVar7;
      if (local_78 != 0) {
        puVar8 = (undefined8 *)&param_3->field_0x10;
        if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)&param_3->field_0x28;
        }
        (**(code **)*puVar8)(puVar8,&local_68);
      }
      local_c8[0] = (code *)0x0;
      local_a0 = FMemory::Malloc(0x60,0x10);
      *local_a0 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleReload'::`2'::<lambda_1>,1,1>
                   ::_vftable_;
      local_a0[2] = local_98;
      local_a0[3] = local_90;
      local_a0[4] = local_88;
      local_a0[6] = local_78;
      local_a0[0xb] = local_50;
      local_50 = (longlong *)0x0;
      local_a0[8] = local_68;
      local_a0[9] = uStack_60;
      local_a0[10] = local_58;
      if (local_a0[6] != 0) {
        local_78 = 0;
      }
      if (local_a0 + 2 != (undefined8 *)0x0) {
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`TraceServices::FSymslibResolver::QueueModuleReload'::__l2::<lambda_1>,void>
                      ::Call;
      }
      local_108 = 0x8ff;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_e8,(TStatIdData *)local_c8,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&TStatId::TStatId_NAME_None,MainQueue);
      if (local_e8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_e8 + 6);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_e8)(local_e8,1);
        }
      }
      if (local_78 != 0) {
        plVar9 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar9 = local_50;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// QueueSymbolResolve @ 14d480ec0

void __thiscall
TraceServices::FSymslibResolver::QueueSymbolResolve
          (FSymslibResolver *this,ulong64 param_1,FResolvedSymbol *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TraceServices::FSymslibResolver::FQueuedAddress,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> FVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lpCriticalSection = &this->SymbolsQueueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CleanupTask).Reference != (FBaseGraphTask *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CleanupTask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                       ,0x2a2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((atomic<unsigned_int>)((int)this->ModulesDiscovered - (int)this->ModulesFailed) ==
       this->ModulesLoaded) && (0x7ff < (uint)(this->ResolveQueue).ArrayNum)) {
    DispatchQueuedAddresses(this);
  }
  FVar7 = (this->ResolveQueue).AllocatorInstance.SecondaryData;
  pTVar1 = &this->ResolveQueue;
  if (FVar7 == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
    FVar7 = (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)pTVar1;
  }
  local_18 = param_1;
  uStack_10 = param_2;
  if (((ulonglong)FVar7 <= &local_18) &&
     (&local_18 < (undefined8 *)((longlong)(this->ResolveQueue).ArrayMax * 0x10 + (longlong)FVar7)))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ResolveQueue).ArrayNum;
  piVar2 = &(this->ResolveQueue).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ResolveQueue).ArrayNum = iVar6 + 1;
  FVar7 = (this->ResolveQueue).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
    FVar7 = (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)pTVar1;
  }
  puVar3 = (undefined4 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar3 = (undefined4)local_18;
  puVar3[1] = local_18._4_4_;
  puVar3[2] = (undefined4)uStack_10;
  puVar3[3] = uStack_10._4_4_;
                    /* WARNING: Could not recover jumptable at 0x00014d48104a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ResolveSymbol @ 14d487a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TraceServices::FSymslibResolver::ResolveSymbol
          (FSymslibResolver *this,ulong64 param_1,FResolvedSymbol *param_2,
          FSymbolStringAllocator *param_3,FModuleEntry *param_4)

{
  atomic<TraceServices::EModuleStatus> aVar1;
  int iVar2;
  FModule *pFVar3;
  char *_Source;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  FSymsSymbol *pFVar10;
  longlong *plVar11;
  size_t sVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 auStack_b78 [32];
  longlong local_b58;
  longlong local_b50;
  undefined4 local_b48;
  FSymbolStringAllocator *local_b40;
  wchar_t *local_b38;
  uint uStack_b30;
  undefined4 uStack_b2c;
  wchar_t *local_b28;
  uint uStack_b20;
  undefined4 uStack_b1c;
  wchar_t *local_b18;
  uint uStack_b10;
  undefined4 uStack_b0c;
  TStringView<wchar_t> local_b08;
  TStringView<wchar_t> local_af8;
  TStringView<wchar_t> local_ae8;
  longlong local_ad8;
  undefined1 local_ac8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_aa8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_988;
  char local_868 [1023];
  undefined1 local_469;
  char local_468 [1023];
  undefined1 local_69;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_b78;
  local_b40 = param_3;
  while ((aVar1 = param_4->Module->Status, (byte)aVar1 < 2 &&
         (this->CancelTasks == (atomic<bool>)0x0))) {
    FWindowsPlatformProcess::YieldThread();
  }
  pFVar3 = param_4->Module;
  if (aVar1 == (atomic<TraceServices::EModuleStatus>)0x3) {
    param_2->Module = pFVar3->Name;
    pwVar13 = GUnknownModuleTextSymsLib;
    param_2->Name = GUnknownModuleTextSymsLib;
    param_2->File = pwVar13;
    param_2->Line = 0;
    param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x3;
LAB_14d487e63:
    (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
    return false;
  }
  if (aVar1 == (atomic<TraceServices::EModuleStatus>)0x5) {
    param_2->Module = pFVar3->Name;
    pwVar13 = GUnknownModuleTextSymsLib;
    param_2->Name = GUnknownModuleTextSymsLib;
    param_2->File = pwVar13;
    param_2->Line = 0;
    param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x2;
    goto LAB_14d487e63;
  }
  lVar18 = ((param_4->Instance).DefaultBase - pFVar3->Base) + param_1;
  uVar15 = 0;
  local_b48 = 0;
  lVar9 = syms_spatial_map_1d_value_from_point(&(param_4->Instance).UnitMap,lVar18);
  if (lVar9 == 0) {
LAB_14d487c3b:
    lVar9 = syms_spatial_map_1d_value_from_point(&(param_4->Instance).StrippedMap,lVar18);
    if (lVar9 == 0) goto LAB_14d487e0f;
    pFVar10 = (param_4->Instance).StrippedSymbols + lVar9 + -1;
    local_b28 = param_4->Module->Name;
    uStack_b20 = uVar15;
    if (local_b28 != (wchar_t *)0x0) {
      sVar12 = wcslen(local_b28);
      uStack_b20 = (uint)sVar12;
    }
    local_af8._12_4_ = uStack_b1c;
    local_af8.Size = uStack_b20;
    local_af8.DataPtr = local_b28;
    pwVar13 = FSymbolStringAllocator::Store(param_3,&local_af8);
    uVar5 = local_b48;
    if (pFVar10 == (FSymsSymbol *)0x0) goto LAB_14d487e0f;
  }
  else {
    iVar2 = (param_4->Instance).Units.ArrayNum;
    uVar16 = (int)lVar9 - 1;
    uVar8 = uVar15;
    if ((int)uVar16 < iVar2) {
      uVar8 = ~uVar16 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_b58 = (longlong)(int)uVar16;
      local_b50 = (longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    pFVar17 = (param_4->Instance).Units.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x50;
    pFVar10 = (FSymsSymbol *)syms_spatial_map_1d_value_from_point(pFVar17,lVar18);
    param_3 = local_b40;
    if (pFVar10 == (FSymsSymbol *)0x0) goto LAB_14d487c3b;
    lVar9 = syms_spatial_map_1d_value_from_point(pFVar17 + 0x40,lVar18);
    if (lVar9 == 0) goto LAB_14d487e0f;
    plVar11 = (longlong *)syms_line_from_sequence_voff(local_ac8,pFVar17 + 0x20,lVar9,lVar18);
    lVar9 = plVar11[1];
    local_ad8 = plVar11[2];
    if (*plVar11 == 0) goto LAB_14d487e0f;
    strncpy(local_468,*(char **)(*(longlong *)(pFVar17 + 0x10) + -0x10 + *plVar11 * 0x10),0x400);
    local_69 = 0;
    local_aa8._padding_ = 0;
    sVar12 = strlen(local_468);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_aa8,local_468,(int)sVar12,Yes);
    local_b38 = local_aa8.Ptr;
    uStack_b30 = uVar15;
    if (local_aa8.Ptr != (wchar_t *)0x0) {
      sVar12 = wcslen(local_aa8.Ptr);
      uStack_b30 = (uint)sVar12;
    }
    local_b08._12_4_ = uStack_b2c;
    local_b08.Size = uStack_b30;
    local_b08.DataPtr = local_b38;
    pwVar13 = FSymbolStringAllocator::Store(local_b40,&local_b08);
    uVar5 = (int)lVar9;
    if ((void *)local_aa8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_aa8._padding_);
    }
  }
  local_b48 = uVar5;
  if (pwVar13 != (wchar_t *)0x0) {
    _Source = pFVar10->Name;
    if (*_Source != '\0') {
      if (*_Source == '?') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
             ::__l5::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
                                 ::__l5::_thread_safe_static_guard_0__),
           `void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
           ::__l5::_thread_safe_static_guard_0__ == -1)) {
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)
                     &`void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
                      ::__l5::Cs,4000);
          atexit(`TraceServices::UndecorateAndCopySymbolName'::__l5::
                 _dynamic_atexit_destructor_for__Cs__);
          _Init_thread_footer(&`void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
                               ::__l5::_thread_safe_static_guard_0__);
        }
        EnterCriticalSection
                  ((LPCRITICAL_SECTION)
                   &`void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
                    ::__l5::Cs);
        UnDecorateSymbolName(_Source,local_868,0x400,0x7fe);
        LeaveCriticalSection
                  ((LPCRITICAL_SECTION)
                   &`void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
                    ::__l5::Cs);
      }
      else {
        strncpy(local_868,_Source,0x400);
      }
      local_469 = 0;
      local_988._padding_ = 0;
      sVar12 = strlen(local_868);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_988,local_868,(int)sVar12,Yes);
      local_b18 = local_988.Ptr;
      if (local_988.Ptr != (wchar_t *)0x0) {
        sVar12 = wcslen(local_988.Ptr);
        uVar15 = (uint)sVar12;
      }
      local_ae8._12_4_ = uStack_b0c;
      local_ae8.Size = uVar15;
      local_ae8.DataPtr = local_b18;
      uStack_b10 = uVar15;
      pwVar14 = FSymbolStringAllocator::Store(local_b40,&local_ae8);
      if ((void *)local_988._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_988._padding_);
      }
      param_2->Module = param_4->Module->Name;
      param_2->Name = pwVar14;
      param_2->File = pwVar13;
      param_2->Line = (ushort)local_b48;
      param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x1;
      (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
      return true;
    }
  }
LAB_14d487e0f:
  pwVar14 = GUnknownModuleTextSymsLib;
  pwVar13 = param_4->Module->Name;
  param_2->Name = GUnknownModuleTextSymsLib;
  param_2->File = pwVar14;
  param_2->Module = pwVar13;
  param_2->Line = 0;
  param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x4;
  (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
  return false;
}

// ResolveSymbolTracked @ 14d487ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FSymslibResolver::ResolveSymbolTracked
          (FSymslibResolver *this,ulong64 param_1,FResolvedSymbol *param_2,
          FSymbolStringAllocator *param_3)

{
  atomic<unsigned_int> *paVar1;
  uint uVar2;
  FModuleEntry *pFVar3;
  FModule *pFVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (param_2->Result == (atomic<TraceServices::ESymbolQueryResult>)0x1) {
    LOCK();
    this->AlreadyResolvedSymbols = (atomic<unsigned_int>)((int)this->AlreadyResolvedSymbols + 1);
    UNLOCK();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  uVar2 = (this->SortedModules).ArrayNum;
  iVar10 = 0;
  uVar8 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar9 = uVar8 >> 1;
      if (*(ulonglong *)
           (**(longlong **)
              ((this->SortedModules).AllocatorInstance.Data + (longlong)(int)(uVar9 + iVar10) * 8) +
           0x10) < param_1) {
        iVar10 = uVar9 + iVar10 + (uVar8 & 1);
      }
      uVar8 = uVar9;
    } while (uVar9 != 0);
  }
  iVar10 = iVar10 + -1;
  if ((iVar10 < 0) || ((int)uVar2 <= iVar10)) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  else {
    if ((iVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = *(FModuleEntry **)((this->SortedModules).AllocatorInstance.Data + (longlong)iVar10 * 8)
    ;
    ReleaseSRWLockShared((PSRWLOCK)this);
    if (pFVar3 != (FModuleEntry *)0x0) {
      pFVar4 = pFVar3->Module;
      LOCK();
      (pFVar4->Stats).Discovered = (atomic<unsigned_int>)((int)(pFVar4->Stats).Discovered + 1);
      UNLOCK();
      bVar7 = ResolveSymbol(this,param_1,param_2,param_3,pFVar3);
      if (!bVar7) {
        LOCK();
        paVar1 = &(pFVar4->Stats).Failed;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
        UNLOCK();
        return;
      }
      LOCK();
      paVar1 = &(pFVar4->Stats).Resolved;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
      UNLOCK();
      return;
    }
  }
  if (2 < (byte)LogSymslib._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
  }
  pwVar6 = GUnknownModuleTextSymsLib;
  param_2->Module = GUnknownModuleTextSymsLib;
  param_2->Name = pwVar6;
  param_2->File = pwVar6;
  param_2->Line = 0;
  param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x2;
  (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
  LOCK();
  this->NoModuleSymbols = (atomic<unsigned_int>)((int)this->NoModuleSymbols + 1);
  UNLOCK();
  return;
}

// ResolveSymbols @ 14d4880a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FSymslibResolver::ResolveSymbols
          (FSymslibResolver *this,
          TArrayView<TraceServices::FSymslibResolver::FQueuedAddress,int> *param_1)

{
  ulong64 uVar1;
  FQueuedAddress *pFVar2;
  longlong lVar3;
  FQueuedAddress *pFVar4;
  FSymbolStringAllocator local_38;
  
  local_38.Allocator = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pFVar4 = param_1->DataPtr;
  pFVar2 = pFVar4 + param_1->ArrayNum;
  local_38.Block = (wchar_t *)0x0;
  local_38.BlockSize = 0x8000;
  local_38.BlockRemaining = 0;
  local_38.NumAllocatedBlocks = 0;
  local_38.TotalAllocatedSize = 0;
  local_38.TotalUsedSize = 0;
  uVar1 = local_38.TotalAllocatedSize;
  while ((local_38.TotalAllocatedSize = uVar1, pFVar4 != pFVar2 &&
         (this->CancelTasks == (atomic<bool>)0x0))) {
    ResolveSymbolTracked(this,pFVar4->Address,pFVar4->Target,&local_38);
    pFVar4 = pFVar4 + 1;
    uVar1 = local_38.TotalAllocatedSize;
  }
  lVar3 = uVar1 - local_38.TotalUsedSize;
  if (6 < (byte)LogSymslib._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
  }
  LOCK();
  this->SymbolBytesAllocated =
       (atomic<unsigned___int64>)((longlong)this->SymbolBytesAllocated + uVar1);
  UNLOCK();
  LOCK();
  this->SymbolBytesWasted = (atomic<unsigned___int64>)((longlong)this->SymbolBytesWasted + lVar3);
  UNLOCK();
  return;
}

// UpdateResolvedSymbol @ 14d48f280

void __cdecl
TraceServices::FSymslibResolver::UpdateResolvedSymbol
          (FResolvedSymbol *param_1,ESymbolQueryResult param_2,wchar_t *param_3,wchar_t *param_4,
          wchar_t *param_5,ushort param_6)

{
  param_1->File = param_5;
  param_1->Line = param_6;
  param_1->Module = param_3;
  param_1->Name = param_4;
  param_1->Result = (atomic<TraceServices::ESymbolQueryResult>)param_2;
  return;
}

// UpdateSessionInfo @ 14d48f2b0

void __thiscall TraceServices::FSymslibResolver::UpdateSessionInfo(FSymslibResolver *this)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  IAnalysisSession *pIVar4;
  IAnalysisSession *pIVar5;
  ForAnyElementType FVar6;
  char cVar7;
  longlong *plVar8;
  FString *pFVar9;
  FName local_res8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined8 local_30;
  FScriptContainerElement *pFStack_28;
  
  pIVar4 = this->Session;
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4);
  pIVar5 = this->Session;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"DiagnosticsProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_res8 = ::Name;
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar5 + 0xf8))(pIVar5,&local_res8);
  if ((plVar8 != (longlong *)0x0) && (cVar7 = (**(code **)(*plVar8 + 0x20))(plVar8), cVar7 != '\0'))
  {
    pFVar9 = (FString *)(**(code **)(*plVar8 + 0x28))(plVar8);
    ::FString::FString(&local_a8,pFVar9);
    ::FString::FString(&local_98,pFVar9 + 1);
    ::FString::FString(&local_88,pFVar9 + 2);
    ::FString::FString(&local_78,pFVar9 + 3);
    ::FString::FString(&local_68,pFVar9 + 4);
    ::FString::FString(&local_58,pFVar9 + 5);
    ::FString::FString(&local_48,pFVar9 + 6);
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
    local_38 = *(undefined4 *)&pFVar9[7].Data.AllocatorInstance.Data;
    pFVar2 = &this->Platform;
    local_34 = *(undefined1 *)((longlong)&pFVar9[7].Data.AllocatorInstance.Data + 4);
    local_33 = *(undefined1 *)((longlong)&pFVar9[7].Data.AllocatorInstance.Data + 5);
    local_30._0_4_ = pFVar9[7].Data.ArrayNum;
    local_30._4_4_ = pFVar9[7].Data.ArrayMax;
    pFStack_28 = pFVar9[8].Data.AllocatorInstance.Data;
    if (pFVar2 != &local_a8) {
      piVar1 = &(this->Platform).Data.ArrayMax;
      iVar3 = *piVar1;
      (this->Platform).Data.ArrayNum = local_a8.Data.ArrayNum;
      if ((local_a8.Data.ArrayNum == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar2,
                   local_a8.Data.ArrayNum,piVar1);
        if (local_a8.Data.ArrayNum != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,FVar6.Data,
                 (longlong)local_a8.Data.ArrayNum * 2);
        }
      }
    }
    FVar6.Data = local_98.Data.AllocatorInstance.Data;
    pFVar2 = &this->AppName;
    if (pFVar2 != &local_98) {
      piVar1 = &(this->AppName).Data.ArrayMax;
      iVar3 = *piVar1;
      (this->AppName).Data.ArrayNum = local_98.Data.ArrayNum;
      if ((local_98.Data.ArrayNum == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_98.Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar2,
                   local_98.Data.ArrayNum,piVar1);
        if (local_98.Data.ArrayNum != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,FVar6.Data,
                 (longlong)local_98.Data.ArrayNum * 2);
        }
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d48f526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar4 + 0x90))(pIVar4);
  return;
}

// WaitForTasks @ 14d490040

void __thiscall TraceServices::FSymslibResolver::WaitForTasks(FSymslibResolver *this)

{
  atomic<unsigned_int> aVar1;
  
  do {
    aVar1 = this->TasksInFlight;
    FWindowsPlatformProcess::Sleep(0.0);
  } while (aVar1 != (atomic<unsigned_int>)0x0);
  return;
}

