// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 19

// FDbgHelpResolver @ 14d421190

/* WARNING: Enum "Type": Some values do not have unique names */

FDbgHelpResolver * __thiscall
TraceServices::FDbgHelpResolver::FDbgHelpResolver
          (FDbgHelpResolver *this,IAnalysisSession *param_1,IResolvedSymbolFilter *param_2)

{
  ILinearAllocator *pIVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FRunnableThread *pFVar5;
  
  *(undefined ***)this = &___7FDbgHelpResolver_TraceServices__6B_;
  (this->ModulesLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  pTVar4 = (TNode *)0x0;
  (this->Modules).PageSize = 0x80;
  (this->Modules).Allocator = pIVar1;
  (this->Modules).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).PagesArray.ArrayNum = 0;
  (this->Modules).PagesArray.ArrayMax = 0;
  (this->Modules).FirstPage = (TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry> *)0x0;
  (this->Modules).LastPage = (TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry> *)0x0;
  (this->Modules).TotalItemCount = 0;
  (this->SortedModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedModules).ArrayNum = 0;
  (this->SortedModules).ArrayMax = 0;
  pTVar2 = ::operator_new(0x28);
  pTVar3 = pTVar4;
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Module = (FModule *)0x0;
    (pTVar2->Item).Path = (wchar_t *)0x0;
    (pTVar2->Item).ImageId.DataPtr = (uchar *)0x0;
    *(undefined8 *)&(pTVar2->Item).ImageId.ArrayNum = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).ImageId.DataPtr = (uchar *)0x0;
    (pTVar2->Item).ImageId.ArrayNum = 0;
    pTVar3 = pTVar2;
  }
  (this->LoadSymbolsQueue).Tail = pTVar3;
  (this->LoadSymbolsQueue).Head = pTVar3;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Module = (FModule *)0x0;
    (pTVar3->Item).Path = (wchar_t *)0x0;
    pTVar3->NextNode = (TNode *)0x0;
    pTVar4 = pTVar3;
  }
  (this->ResolveQueue).Tail = (TNode *)pTVar4;
  (this->ResolveQueue).Head = (TNode *)pTVar4;
  (this->CustomSymbolSearchPathsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->CustomSymbolSearchPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomSymbolSearchPaths).ArrayNum = 0;
  (this->CustomSymbolSearchPaths).ArrayMax = 0;
  (this->ConfigSymbolSearchPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigSymbolSearchPaths).ArrayNum = 0;
  (this->ConfigSymbolSearchPaths).ArrayMax = 0;
  this->ModulesDiscovered = (atomic<unsigned_int>)0x0;
  this->ModulesFailed = (atomic<unsigned_int>)0x0;
  this->ModulesLoaded = (atomic<unsigned_int>)0x0;
  this->AlreadyResolvedSymbols = (atomic<unsigned_int>)0x0;
  this->NoModuleSymbols = (atomic<unsigned_int>)0x0;
  this->Session = param_1;
  this->SymbolFilter = param_2;
  this->bRunWorkerThread = false;
  this->bDrainThenStop = false;
  FSymbolHelper::GetSymbolSearchPaths
            ((FLogCategoryBase *)&LogDbgHelp,&this->ConfigSymbolSearchPaths);
  this->bRunWorkerThread = true;
  pFVar5 = FRunnableThread::Create
                     ((FRunnable *)this,L"DbgHelpWorker",0,TPri_Normal,0xffffffffffffffff,None);
  this->Thread = pFVar5;
  return this;
}

// ~FDbgHelpResolver @ 14d42b660

void __thiscall TraceServices::FDbgHelpResolver::~FDbgHelpResolver(FDbgHelpResolver *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  
  this->bRunWorkerThread = false;
  *(undefined ***)this = &___7FDbgHelpResolver_TraceServices__6B_;
  if (this->Thread != (FRunnableThread *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x20))();
  }
  DestructItems<FString,int>
            ((FString *)(this->ConfigSymbolSearchPaths).AllocatorInstance.Data,
             (this->ConfigSymbolSearchPaths).ArrayNum);
  pFVar1 = (this->ConfigSymbolSearchPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->CustomSymbolSearchPaths).AllocatorInstance.Data,
             (this->CustomSymbolSearchPaths).ArrayNum);
  pFVar1 = (this->CustomSymbolSearchPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  }
  pTVar2 = (this->ResolveQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->ResolveQueue).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->ResolveQueue).Tail;
  }
  pTVar3 = (this->LoadSymbolsQueue).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->LoadSymbolsQueue).Tail = pTVar3->NextNode;
    ::operator_delete(pTVar3,0x28);
    pTVar3 = (this->LoadSymbolsQueue).Tail;
  }
  pFVar1 = (this->SortedModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPagedArray<TraceServices::FDbgHelpResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>_>
  ::
  ~TPagedArray<TraceServices::FDbgHelpResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>_>
            (&this->Modules);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// EnumerateSymbolSearchPaths @ 14d45c9b0

void __thiscall
TraceServices::FDbgHelpResolver::EnumerateSymbolSearchPaths
          (FDbgHelpResolver *this,TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_1)

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

// FreeSyms @ 14d461510

void __thiscall TraceServices::FDbgHelpResolver::FreeSyms(FDbgHelpResolver *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d461517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SymCleanup(this->Handle);
  return;
}

// GetModuleEntry @ 14d469820

FModuleEntry * __thiscall
TraceServices::FDbgHelpResolver::GetModuleEntry(FDbgHelpResolver *this,FModule *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FModuleEntry *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  pFVar4 = (this->SortedModules).AllocatorInstance.Data;
  iVar2 = (this->SortedModules).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SortedModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FDbgHelpResolver::FModuleEntry_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = *(FModuleEntry **)pFVar4;
    if (pFVar3->Module == param_1) goto LAB_14d469877;
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (FModuleEntry *)0x0;
LAB_14d469877:
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return pFVar3;
}

// GetModuleForAddress @ 14d469930

FModuleEntry * __thiscall
TraceServices::FDbgHelpResolver::GetModuleForAddress(FDbgHelpResolver *this,ulong64 param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FModuleEntry *pFVar4;
  int iVar5;
  FModuleEntry *pFVar6;
  uint uVar7;
  uint uVar8;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
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
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FModuleEntry *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = *(FModuleEntry **)((this->SortedModules).AllocatorInstance.Data + (longlong)iVar5 * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return pFVar4;
}

// GetStats @ 14d46d0f0

void __thiscall TraceServices::FDbgHelpResolver::GetStats(FDbgHelpResolver *this,FStats *param_1)

{
  ulonglong uVar1;
  FModule *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
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
                    /* WARNING: Could not recover jumptable at 0x00014d46d1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return;
}

// HasFinishedResolving @ 14d471ca0

bool __thiscall TraceServices::FDbgHelpResolver::HasFinishedResolving(FDbgHelpResolver *this)

{
  if ((((this->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0) &&
     (((this->ResolveQueue).Tail)->NextNode == (TNode *)0x0)) {
    return true;
  }
  return false;
}

// LoadModuleSymbols @ 14d4769c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FDbgHelpResolver::LoadModuleSymbols
          (FDbgHelpResolver *this,FModule *param_1,wchar_t *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  TArrayView<unsigned_char_const_,int> *pTVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  void *pvVar8;
  ulong64 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  ulong64 uVar12;
  atomic<TraceServices::EModuleStatus> aVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_1fd8 [32];
  ulong64 local_1fb8;
  uint local_1fb0;
  undefined8 local_1fa8;
  undefined4 local_1fa0;
  undefined1 local_1f98;
  undefined1 local_1f97 [3];
  uint local_1f94;
  FString local_1f90;
  ulong64 local_1f80;
  TArrayView<unsigned_char_const_,int> *local_1f78;
  FString local_1f70;
  wchar_t *local_1f60;
  undefined4 local_1f58;
  TStringBuilderBase<wchar_t> local_1f48;
  wchar_t local_1f28 [256];
  TStringBuilderBase<wchar_t> local_1d28;
  wchar_t local_1d08 [1024];
  wchar_t local_1508 [16];
  int local_14e8;
  int local_884;
  int local_880;
  int local_87c;
  int local_878;
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1fd8;
  local_1f78 = param_3;
  if ((param_1 == (FModule *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Module",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\DbgHelpResolver.cpp"
                         ,0x1aa,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_1f80 = param_1->Base;
  local_1f94 = param_1->Size;
  local_1d28.Base = local_1d08;
  local_1d28.End = local_1508;
  local_1d28.bIsDynamic = false;
  local_1d28.bIsExternal = false;
  local_1d28.CurPos = local_1d08;
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    AcquireSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
    iVar6 = (this->CustomSymbolSearchPaths).ArrayNum;
    pFVar14 = (this->CustomSymbolSearchPaths).AllocatorInstance.Data;
    pFVar15 = pFVar14 + (longlong)iVar6 * 0x10;
    while( true ) {
      if ((this->CustomSymbolSearchPaths).ArrayNum != iVar6) {
        local_1f98 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1f98);
      }
      if (pFVar14 == pFVar15) break;
      if (1 < *(int *)(pFVar14 + 8)) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_1d28,*(wchar_t **)pFVar14,*(int *)(pFVar14 + 8) + -1);
        if (local_1d28.End < local_1d28.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_1d28,1);
        }
        *local_1d28.CurPos = L';';
        local_1d28.CurPos = local_1d28.CurPos + 1;
      }
      pFVar14 = pFVar14 + 0x10;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
    ::FString::FString(&local_1f70,param_1->FullName);
    FPaths::GetPath(&local_1f90,&local_1f70);
    if (local_1f70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f70.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeDirectoryName(&local_1f90);
    FVar3.Data = local_1f90.Data.AllocatorInstance.Data;
    if (1 < local_1f90.Data.ArrayNum) {
      iVar6 = local_1f90.Data.ArrayNum + -1;
      if (local_1f90.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      uVar12 = (ulong64)iVar6;
      if (local_1d28.End < local_1d28.CurPos + uVar12) {
        TStringBuilderBase<wchar_t>::Extend(&local_1d28,uVar12);
      }
      if (iVar6 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_1d28.CurPos,FVar3.Data,uVar12 * 2);
        local_1d28.CurPos = (wchar_t *)((longlong)pvVar8 + uVar12 * 2);
      }
      if (local_1d28.End < local_1d28.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_1d28,1);
      }
      *local_1d28.CurPos = L';';
      local_1d28.CurPos = local_1d28.CurPos + 1;
    }
    iVar6 = (this->ConfigSymbolSearchPaths).ArrayNum;
    pFVar14 = (this->ConfigSymbolSearchPaths).AllocatorInstance.Data;
    pFVar15 = pFVar14 + (longlong)iVar6 * 0x10;
    while( true ) {
      if ((this->ConfigSymbolSearchPaths).ArrayNum != iVar6) {
        local_1f97[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1f97);
      }
      if (pFVar14 == pFVar15) break;
      if (1 < *(int *)(pFVar14 + 8)) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_1d28,*(wchar_t **)pFVar14,*(int *)(pFVar14 + 8) + -1);
        if (local_1d28.End < local_1d28.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_1d28,1);
        }
        *local_1d28.CurPos = L';';
        local_1d28.CurPos = local_1d28.CurPos + 1;
      }
      pFVar14 = pFVar14 + 0x10;
    }
    if (local_1f90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f90.Data.AllocatorInstance.Data);
    }
  }
  else {
    sVar7 = wcslen(param_2);
    uVar12 = (ulong64)(int)sVar7;
    pwVar11 = local_1d08;
    if (local_1508 < local_1d08 + uVar12) {
      TStringBuilderBase<wchar_t>::Extend(&local_1d28,uVar12);
      pwVar11 = local_1d28.CurPos;
    }
    if ((int)sVar7 != 0) {
      pvVar8 = FGenericPlatformString::Memcpy(pwVar11,param_2,uVar12 * 2);
      pwVar11 = (wchar_t *)((longlong)pvVar8 + uVar12 * 2);
      local_1d28.CurPos = pwVar11;
    }
    if (local_1d28.End < pwVar11 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_1d28,1);
      pwVar11 = local_1d28.CurPos;
    }
    *pwVar11 = L';';
    local_1d28.CurPos = local_1d28.CurPos + 1;
  }
  if (local_1d28.End < local_1d28.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_1d28,1);
  }
  *local_1d28.CurPos = L'\0';
  iVar6 = SymSetSearchPathW(this->Handle,local_1d28.Base);
  if ((iVar6 == 0) && (2 < (byte)LogDbgHelp._0_1_)) {
    if (local_1d28.End < local_1d28.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_1d28,1);
    }
    *local_1d28.CurPos = L'\0';
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDbgHelp);
  }
  SymGetSearchPathW(this->Handle,local_848,0x400);
  if (3 < (byte)LogDbgHelp._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDbgHelp);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1d28);
  uVar12 = local_1f80;
  local_1fa0 = 0;
  local_1fa8 = 0;
  local_1fb0 = local_1f94;
  local_1fb8 = local_1f80;
  uVar9 = SymLoadModuleExW(this->Handle,0,param_1->Name,0);
  bVar5 = true;
  if (uVar12 == uVar9) {
    local_1508[0] = L'ೀ';
    local_1508[1] = L'\0';
    SymGetModuleInfoW64(this->Handle,uVar12,local_1508);
    pTVar4 = local_1f78;
    if (local_14e8 == 3) {
      if (local_1f78->ArrayNum == 0) goto LAB_14d476fe1;
      if ((local_1f78->ArrayNum != 0x14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ImageId.Num() == 20",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\DbgHelpResolver.cpp"
                             ,0x1fd,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar1 = (int *)pTVar4->DataPtr;
      bVar5 = ((local_878 == piVar1[3] && local_87c == piVar1[2]) && local_880 == piVar1[1]) &&
              local_884 == *piVar1;
      goto LAB_14d47700b;
    }
LAB_14d476ec0:
    local_1f48.End = (wchar_t *)&local_1d28;
    local_1f48.Base = local_1f28;
    local_1f48.bIsDynamic = false;
    local_1f48.bIsExternal = false;
    local_1f48.CurPos = local_1f48.Base;
    SymUnloadModule64(this->Handle,uVar12);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_1f48,L"Unable to load symbols for %s");
    aVar13 = (atomic<TraceServices::EModuleStatus>)0x5;
  }
  else {
LAB_14d476fe1:
    if (uVar12 != uVar9) goto LAB_14d476ec0;
LAB_14d47700b:
    local_1f48.End = (wchar_t *)&local_1d28;
    local_1f48.CurPos = local_1f28;
    local_1f48.Base = local_1f28;
    local_1f48.bIsDynamic = false;
    local_1f48.bIsExternal = false;
    if (bVar5) {
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_1f48,L"Loaded symbols for %s from %s.");
      lVar10 = 0xb0;
      aVar13 = (atomic<TraceServices::EModuleStatus>)0x2;
      goto LAB_14d476eeb;
    }
    SymUnloadModule64(this->Handle,uVar12);
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_1f48,L"Unable to load symbols for %s, pdb signature does not match.");
    aVar13 = (atomic<TraceServices::EModuleStatus>)0x3;
  }
  lVar10 = 0xac;
LAB_14d476eeb:
  LOCK();
  *(int *)(&this->field_0x0 + lVar10) = *(int *)(&this->field_0x0 + lVar10) + 1;
  UNLOCK();
  local_1f60 = local_1f48.Base;
  local_1f58 = (undefined4)((longlong)local_1f48.CurPos - (longlong)local_1f48.Base >> 1);
  pwVar11 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_1f60);
  param_1->StatusMessage = pwVar11;
  LOCK();
  param_1->Status = aVar13;
  UNLOCK();
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1f48);
  return;
}

// OnAnalysisComplete @ 14d47a7d0

void __thiscall TraceServices::FDbgHelpResolver::OnAnalysisComplete(FDbgHelpResolver *this)

{
  this->bDrainThenStop = true;
  return;
}

// QueueModuleLoad @ 14d47fb70

void __thiscall
TraceServices::FDbgHelpResolver::QueueModuleLoad
          (FDbgHelpResolver *this,uchar *param_1,uint param_2,FModule *param_3)

{
  ulong64 *puVar1;
  int *piVar2;
  TQueue<TraceServices::FDbgHelpResolver::FQueuedModule,0> *pTVar3;
  TNode *pTVar4;
  ILinearAllocator *pIVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FModuleEntry *pFVar11;
  TNode *pTVar12;
  TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry> *pTVar13;
  FIdentityFunctor local_res18;
  FModuleEntry *local_68;
  TArrayView<unsigned_char_const_,int> local_60;
  FModule *local_50;
  wchar_t *pwStack_48;
  FScriptContainerElement *local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if (param_3 == (FModule *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Module != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\DbgHelpResolver.cpp"
                       ,0x4d,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar11 = GetModuleEntry(this,param_3);
  if (pFVar11 != (FModuleEntry *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1012122516614807474>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\DbgHelpResolver.cpp"
                       ,0x4e,"GetModuleEntry(Module) == nullptr");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  pTVar13 = (this->Modules).LastPage;
  if ((pTVar13 == (TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry> *)0x0) ||
     (pTVar13->Count == (this->Modules).PageSize)) {
    iVar10 = (this->Modules).PagesArray.ArrayNum;
    piVar2 = &(this->Modules).PagesArray.ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->Modules).PagesArray.AllocatorInstance,piVar2);
    }
    (this->Modules).PagesArray.ArrayNum = iVar10 + 1;
    pTVar13 = (TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry> *)
              ((this->Modules).PagesArray.AllocatorInstance.Data + (longlong)iVar10 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>,int>
              (pTVar13,1);
    pIVar5 = (this->Modules).Allocator;
    (this->Modules).FirstPage =
         (TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry> *)
         (this->Modules).PagesArray.AllocatorInstance.Data;
    (this->Modules).LastPage = pTVar13;
    pFVar11 = (FModuleEntry *)
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->Modules).PageSize * 0x18);
    ((this->Modules).LastPage)->Items = pFVar11;
  }
  pTVar13 = (this->Modules).LastPage;
  puVar1 = &(this->Modules).TotalItemCount;
  *puVar1 = *puVar1 + 1;
  uVar6 = pTVar13->Count;
  local_68 = pTVar13->Items;
  local_68[uVar6].Module = (FModule *)0x0;
  local_68[uVar6].ImageId.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[uVar6].ImageId.ArrayNum = 0;
  local_68[uVar6].ImageId.ArrayMax = 0;
  local_68 = local_68 + uVar6;
  puVar1 = &((this->Modules).LastPage)->Count;
  *puVar1 = *puVar1 + 1;
  local_68->Module = param_3;
  local_60.DataPtr = param_1;
  local_60.ArrayNum = param_2;
  if ((int)param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
            (&local_68->ImageId,&local_60);
  pFVar7 = (this->SortedModules).AllocatorInstance.Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar7 + (longlong)(this->SortedModules).ArrayMax * 8))
  {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->SortedModules).ArrayNum;
  piVar2 = &(this->SortedModules).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->SortedModules).AllocatorInstance,piVar2);
  }
  (this->SortedModules).ArrayNum = iVar10 + 1;
  *(FModuleEntry **)((this->SortedModules).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_68
  ;
  AlgoImpl::
  IntroSortInternal<TraceServices::FDbgHelpResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FDbgHelpResolver::QueueModuleLoad_::__l2::<lambda_1>_>
            ((FModuleEntry **)(this->SortedModules).AllocatorInstance.Data,
             (this->SortedModules).ArrayNum,local_res18,(<lambda_1>)local_res18);
  LOCK();
  this->ModulesDiscovered = (atomic<unsigned_int>)((int)this->ModulesDiscovered + 1);
  UNLOCK();
  LOCK();
  param_3->Status = (atomic<TraceServices::EModuleStatus>)0x1;
  UNLOCK();
  pTVar3 = &this->LoadSymbolsQueue;
  pwStack_48 = (wchar_t *)0x0;
  local_40 = (local_68->ImageId).AllocatorInstance.Data;
  iStack_38 = (local_68->ImageId).ArrayNum;
  local_50 = param_3;
  if (iStack_38 < 0) {
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
  pTVar12 = ::operator_new(0x28);
  if (pTVar12 != (TNode *)0x0) {
    pTVar12->NextNode = (TNode *)0x0;
    (pTVar12->Item).Module = local_50;
    (pTVar12->Item).Path = pwStack_48;
    (pTVar12->Item).ImageId.DataPtr = (uchar *)local_40;
    *(ulonglong *)&(pTVar12->Item).ImageId.ArrayNum = CONCAT44(uStack_34,iStack_38);
    if (((ulonglong)pTVar3 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar4 = pTVar3->Head;
    pTVar3->Head = pTVar12;
    UNLOCK();
    if (((ulonglong)pTVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar4->NextNode = pTVar12;
    UNLOCK();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  return;
}

// QueueModuleReload @ 14d480500

void __thiscall
TraceServices::FDbgHelpResolver::QueueModuleReload
          (FDbgHelpResolver *this,FModule *param_1,wchar_t *param_2,
          TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
          *param_3)

{
  TQueue<TraceServices::FDbgHelpResolver::FQueuedModule,0> *pTVar1;
  atomic<TraceServices::EModuleStatus> aVar2;
  TNode *pTVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  FModuleEntry *pFVar7;
  TNode *pTVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  FRunnableThread *pFVar11;
  longlong *plVar12;
  ulong64 *puVar13;
  ulong64 *puVar14;
  undefined1 local_98 [8];
  ulong64 *local_90;
  ulonglong local_88;
  FString local_80;
  FScriptContainerElement *local_70;
  int local_68;
  FModule *local_60;
  wchar_t *pwStack_58;
  FScriptContainerElement *local_50;
  int iStack_48;
  undefined4 uStack_44;
  
  if ((param_1 == (FModule *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Module != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\DbgHelpResolver.cpp"
                         ,0x68,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = GetModuleEntry(this,param_1);
  if ((pFVar7 == (FModuleEntry *)0x0) ||
     (param_1->Status == (atomic<TraceServices::EModuleStatus>)0x2)) {
    if (*(longlong *)param_3 != 0) {
      plVar12 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar12 + 0x10))();
      return;
    }
  }
  else {
    LOCK();
    aVar2 = param_1->Status;
    param_1->Status = (atomic<TraceServices::EModuleStatus>)0x1;
    UNLOCK();
    if (2 < (byte)aVar2) {
      LOCK();
      this->ModulesFailed = (atomic<unsigned_int>)((int)this->ModulesFailed + -1);
      UNLOCK();
    }
    ::FString::FString(&local_80,param_2);
    FPaths::NormalizeDirectoryName(&local_80);
    pTVar1 = &this->LoadSymbolsQueue;
    local_70 = local_80.Data.AllocatorInstance.Data;
    local_68 = local_80.Data.ArrayNum + -1;
    if (local_80.Data.ArrayNum == 0) {
      local_68 = 0;
    }
    local_60 = param_1;
    pwStack_58 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_70);
    iStack_48 = (pFVar7->ImageId).ArrayNum;
    local_50 = (pFVar7->ImageId).AllocatorInstance.Data;
    if ((iStack_48 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = ::operator_new(0x28);
    if (pTVar8 != (TNode *)0x0) {
      pTVar8->NextNode = (TNode *)0x0;
      (pTVar8->Item).Module = local_60;
      (pTVar8->Item).Path = pwStack_58;
      (pTVar8->Item).ImageId.DataPtr = (uchar *)local_50;
      *(ulonglong *)&(pTVar8->Item).ImageId.ArrayNum = CONCAT44(uStack_44,iStack_48);
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar3 = pTVar1->Head;
      pTVar1->Head = pTVar8;
      UNLOCK();
      if (((ulonglong)pTVar3 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar3->NextNode = pTVar8;
      UNLOCK();
    }
    local_90 = (ulong64 *)0x0;
    local_88 = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar4 = *(code **)param_3;
    plVar12 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_3->field_0x28;
    }
    uVar9 = (**(code **)(*plVar12 + 8))();
    (*pcVar4)(uVar9,&local_90);
    iVar5 = (int)local_88;
    uVar10 = (ulonglong)(int)local_88;
    puVar14 = local_90 + uVar10 * 2;
    puVar13 = local_90;
    while( true ) {
      if ((int)uVar10 != iVar5) {
        `TCheckedPointerIterator<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_98);
      }
      if (puVar13 == puVar14) break;
      QueueSymbolResolve(this,*puVar13,(FResolvedSymbol *)puVar13[1]);
      uVar10 = local_88 & 0xffffffff;
      puVar13 = puVar13 + 2;
    }
    if ((this->bRunWorkerThread == false) && (this->Thread != (FRunnableThread *)0x0)) {
      this->bRunWorkerThread = true;
      pFVar11 = FRunnableThread::Create
                          ((FRunnable *)this,L"DbgHelpWorker",0,TPri_Normal,0xffffffffffffffff,None)
      ;
      this->Thread = pFVar11;
    }
    if (local_90 != (ulong64 *)0x0) {
      FMemory::Free(local_90);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (*(longlong *)param_3 != 0) {
      plVar12 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return;
}

// QueueSymbolResolve @ 14d480d80

void __thiscall
TraceServices::FDbgHelpResolver::QueueSymbolResolve
          (FDbgHelpResolver *this,ulong64 param_1,FResolvedSymbol *param_2)

{
  TQueue<TraceServices::FDbgHelpResolver::FQueuedAddress,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->ResolveQueue;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Address = param_1;
    (pTVar3->Item).Target = param_2;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  return;
}

// ResolveSymbol @ 14d487250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FDbgHelpResolver::ResolveSymbol
          (FDbgHelpResolver *this,ulong64 param_1,FResolvedSymbol *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_508 [32];
  longlong local_4e8;
  longlong local_4e0;
  undefined1 local_4d8 [8];
  undefined4 local_4d0 [4];
  ushort local_4c0;
  undefined8 local_4b8;
  undefined4 local_4a8 [20];
  undefined4 local_458;
  undefined1 local_454 [1036];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_508;
  if (param_2->Result == (atomic<TraceServices::ESymbolQueryResult>)0x1) {
    LOCK();
    this->AlreadyResolvedSymbols = (atomic<unsigned_int>)((int)this->AlreadyResolvedSymbols + 1);
    UNLOCK();
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
    uVar2 = (this->SortedModules).ArrayNum;
    iVar8 = 0;
    uVar11 = uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar12 = uVar11 >> 1;
        if (*(ulonglong *)
             (**(longlong **)
                ((this->SortedModules).AllocatorInstance.Data + (longlong)(int)(uVar12 + iVar8) * 8)
             + 0x10) < param_1) {
          iVar8 = uVar12 + iVar8 + (uVar11 & 1);
        }
        uVar11 = uVar12;
      } while (uVar12 != 0);
    }
    iVar8 = iVar8 + -1;
    if ((iVar8 < 0) || ((int)uVar2 <= iVar8)) {
      ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
    }
    else {
      if (iVar8 < 0) {
        local_4e8 = (longlong)iVar8;
        local_4e0 = (longlong)(int)uVar2;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      plVar3 = *(longlong **)((this->SortedModules).AllocatorInstance.Data + (longlong)iVar8 * 8);
      ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
      if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)*plVar3;
        LOCK();
        *(int *)(puVar4 + 5) = *(int *)(puVar4 + 5) + 1;
        UNLOCK();
        cVar1 = *(char *)((longlong)puVar4 + 0x1d);
        if (cVar1 != '\x02') {
          LOCK();
          *(int *)((longlong)puVar4 + 0x34) = *(int *)((longlong)puVar4 + 0x34) + 1;
          pwVar9 = GUnknownModuleTextDbgHelp;
          UNLOCK();
          param_2->Module = GUnknownModuleTextDbgHelp;
          param_2->Name = pwVar9;
          param_2->File = pwVar9;
          param_2->Line = 0;
          param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)((cVar1 == '\x03') + '\x02');
          (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
          return;
        }
        local_4a8[0] = 0x58;
        local_458 = 0x200;
        iVar8 = SymFromAddrW(this->Handle,param_1,0,local_4a8);
        if (iVar8 == 0) {
          LOCK();
          *(int *)((longlong)puVar4 + 0x34) = *(int *)((longlong)puVar4 + 0x34) + 1;
          UNLOCK();
          param_2->Module = (wchar_t *)*puVar4;
          pwVar9 = GUnknownModuleTextDbgHelp;
          param_2->Name = GUnknownModuleTextDbgHelp;
          param_2->File = pwVar9;
          param_2->Line = 0;
          param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x4;
          (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
          return;
        }
        pwVar9 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,local_454);
        local_4d0[0] = 0x28;
        iVar8 = SymGetLineFromAddrW64(this->Handle,param_1,local_4d8,local_4d0);
        if (iVar8 == 0) {
          LOCK();
          *(int *)((longlong)puVar4 + 0x34) = *(int *)((longlong)puVar4 + 0x34) + 1;
          pwVar5 = GUnknownModuleTextDbgHelp;
          UNLOCK();
          param_2->Module = (wchar_t *)*puVar4;
          param_2->File = pwVar5;
          param_2->Name = pwVar9;
          param_2->Line = 0;
          param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x1;
          (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
          return;
        }
        pwVar10 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,local_4b8)
        ;
        LOCK();
        *(int *)(puVar4 + 6) = *(int *)(puVar4 + 6) + 1;
        UNLOCK();
        pwVar5 = (wchar_t *)*puVar4;
        param_2->File = pwVar10;
        param_2->Line = local_4c0;
        param_2->Module = pwVar5;
        param_2->Name = pwVar9;
        param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x1;
        (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
        return;
      }
    }
    if (2 < (byte)LogDbgHelp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDbgHelp);
    }
    pwVar9 = GUnknownModuleTextDbgHelp;
    param_2->Module = GUnknownModuleTextDbgHelp;
    param_2->Name = pwVar9;
    param_2->File = pwVar9;
    param_2->Line = 0;
    param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x4;
    (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
    LOCK();
    this->NoModuleSymbols = (atomic<unsigned_int>)((int)this->NoModuleSymbols + 1);
    UNLOCK();
  }
  return;
}

// Run @ 14d488890

uint __thiscall TraceServices::FDbgHelpResolver::Run(FDbgHelpResolver *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FModule *pFVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  FResolvedSymbol *pFVar8;
  uchar *puVar9;
  undefined8 uVar10;
  float fVar11;
  int iVar12;
  TArrayView<unsigned_char_const_,int> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  BaseHandle = BaseHandle + 1;
  this->Handle = BaseHandle;
  SymSetOptions(0x1432);
  iVar12 = SymInitialize(this->Handle,0,0);
  fVar11 = __real_3e4ccccd;
  if (iVar12 != 0) {
    while (this->bRunWorkerThread != false) {
      pTVar1 = ((this->LoadSymbolsQueue).Tail)->NextNode;
      while ((pTVar1 != (TNode *)0x0 && (this->bRunWorkerThread != false))) {
        pTVar1 = ((this->LoadSymbolsQueue).Tail)->NextNode;
        if (pTVar1 != (TNode *)0x0) {
          pFVar5 = (pTVar1->Item).Module;
          pwVar6 = (pTVar1->Item).Path;
          pTVar2 = (this->LoadSymbolsQueue).Tail;
          puVar9 = (pTVar1->Item).ImageId.DataPtr;
          uVar10._0_4_ = (pTVar1->Item).ImageId.ArrayNum;
          uVar10._4_4_ = *(undefined4 *)&(pTVar1->Item).ImageId.field_0xc;
          (this->LoadSymbolsQueue).Tail = pTVar1;
          local_58.DataPtr = (uchar *)0x0;
          local_58.ArrayNum = 0;
          local_58._12_4_ = 0;
          uStack_40 = 0;
          local_48 = 0;
          (pTVar1->Item).Module = (FModule *)0x0;
          (pTVar1->Item).Path = (wchar_t *)0x0;
          (pTVar1->Item).ImageId.DataPtr = (uchar *)0x0;
          *(undefined8 *)&(pTVar1->Item).ImageId.ArrayNum = 0;
          ::operator_delete(pTVar2,0x28);
          local_58.DataPtr = puVar9;
          local_58._8_8_ = uVar10;
          LoadModuleSymbols(this,pFVar5,pwVar6,&local_58);
        }
        pTVar1 = ((this->LoadSymbolsQueue).Tail)->NextNode;
      }
      pTVar3 = ((this->ResolveQueue).Tail)->NextNode;
      while (((pTVar3 != (TNode *)0x0 && (((this->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0)
              ) && (this->bRunWorkerThread != false))) {
        pTVar3 = ((this->ResolveQueue).Tail)->NextNode;
        if (pTVar3 != (TNode *)0x0) {
          uVar7 = (pTVar3->Item).Address;
          pFVar8 = (pTVar3->Item).Target;
          pTVar4 = (this->ResolveQueue).Tail;
          (this->ResolveQueue).Tail = pTVar3;
          (pTVar3->Item).Address = 0;
          (pTVar3->Item).Target = (FResolvedSymbol *)0x0;
          ::operator_delete(pTVar4,0x18);
          ResolveSymbol(this,uVar7,pFVar8);
        }
        pTVar3 = ((this->ResolveQueue).Tail)->NextNode;
      }
      if (((this->bDrainThenStop != false) &&
          (((this->ResolveQueue).Tail)->NextNode == (TNode *)0x0)) &&
         (((this->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0)) {
        this->bRunWorkerThread = false;
      }
      FWindowsPlatformProcess::Sleep(fVar11);
    }
  }
  SymCleanup(this->Handle);
  return 0;
}

// SetupSyms @ 14d48bd70

bool __thiscall TraceServices::FDbgHelpResolver::SetupSyms(FDbgHelpResolver *this)

{
  int iVar1;
  
  BaseHandle = BaseHandle + 1;
  this->Handle = BaseHandle;
  SymSetOptions(0x1432);
  iVar1 = SymInitialize(this->Handle,0,0);
  return iVar1 != 0;
}

// Start @ 14d48c1f0

void __thiscall TraceServices::FDbgHelpResolver::Start(FDbgHelpResolver *this)

{
  FRunnableThread *pFVar1;
  
  this->bRunWorkerThread = true;
  pFVar1 = FRunnableThread::Create
                     ((FRunnable *)this,L"DbgHelpWorker",0,TPri_Normal,0xffffffffffffffff,None);
  this->Thread = pFVar1;
  return;
}

// Stop @ 14d48c3a0

void __thiscall TraceServices::FDbgHelpResolver::Stop(FDbgHelpResolver *this)

{
  this->bRunWorkerThread = false;
  return;
}

// UpdateResolvedSymbol @ 14d48f220

void __cdecl
TraceServices::FDbgHelpResolver::UpdateResolvedSymbol
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

