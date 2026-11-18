// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 48

// TModuleProvider<TraceServices::FDbgHelpResolver> @ 14d41f420

TModuleProvider<TraceServices::FDbgHelpResolver> * __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::
TModuleProvider<TraceServices::FDbgHelpResolver>
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,IAnalysisSession *param_1)

{
  TUniquePtr<TraceServices::FDbgHelpResolver,TDefaultDelete<TraceServices::FDbgHelpResolver>_>
  *pTVar1;
  ILinearAllocator *pIVar2;
  IAnalysisCache *pIVar3;
  FDbgHelpResolver *pFVar4;
  FDbgHelpResolver *pFVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->ModulesLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar2 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  pFVar5 = (FDbgHelpResolver *)0x0;
  (this->Modules).PageSize = 0x80;
  (this->Modules).Allocator = pIVar2;
  (this->Modules).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).PagesArray.ArrayNum = 0;
  (this->Modules).PagesArray.ArrayMax = 0;
  (this->Modules).FirstPage = (TPagedArrayPage<TraceServices::FModule> *)0x0;
  (this->Modules).LastPage = (TPagedArrayPage<TraceServices::FModule> *)0x0;
  (this->Modules).TotalItemCount = 0;
  (this->SymbolsLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar3 = (IAnalysisCache *)(**(code **)((longlong)*param_1 + 0xd8))(param_1);
  TCachedStringStore<wchar_t>::TCachedStringStore<wchar_t>
            (&this->Strings,L"ModuleProvider.Strings",pIVar3);
  pIVar2 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->SymbolCache).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->Resolver;
  (this->SymbolCache).Allocator = pIVar2;
  (this->SymbolCache).PagesArray.ArrayNum = 0;
  (this->SymbolCache).PagesArray.ArrayMax = 0;
  (this->SymbolCache).FirstPage = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0;
  (this->SymbolCache).LastPage = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0;
  (this->SymbolCache).PageSize = 0x100000;
  (this->SymbolCache).TotalItemCount = 0;
  *(undefined8 *)&this->SymbolCacheLookup = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x8 = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x20 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x28 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x34 = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x40 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x48 = 0;
  this->NumCachedSymbols = 0;
  this->SymbolsDiscovered = (atomic<unsigned_int>)0x0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  pTVar1->Ptr = (FDbgHelpResolver *)0x0;
  (this->LoadSymbolsTask).Reference = (FBaseGraphTask *)0x0;
  this->Session = param_1;
  this->LoadSymbolsAbort = false;
  FResolvedSymbolFilter::FResolvedSymbolFilter(&this->SymbolFilter);
  pFVar4 = ::operator_new(0xf0);
  if (pFVar4 != (FDbgHelpResolver *)0x0) {
    pFVar5 = FDbgHelpResolver::FDbgHelpResolver
                       (pFVar4,param_1,(IResolvedSymbolFilter *)&this->SymbolFilter);
  }
  if (pTVar1 == (TUniquePtr<TraceServices::FDbgHelpResolver,TDefaultDelete<TraceServices::FDbgHelpResolver>_>
                 *)local_18) {
    if (pFVar5 == (FDbgHelpResolver *)0x0) goto LAB_14d41f5c1;
    lVar6 = *(longlong *)pFVar5;
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar4 == (FDbgHelpResolver *)0x0) goto LAB_14d41f5c1;
    lVar6 = *(longlong *)pFVar4;
    pFVar5 = pFVar4;
  }
  (**(code **)(lVar6 + 0x28))(pFVar5,1);
LAB_14d41f5c1:
  pIVar3 = (IAnalysisCache *)(**(code **)((longlong)*param_1 + 0xd8))(param_1);
  LoadSymbolsFromCache(this,pIVar3);
  return this;
}

// TModuleProvider<TraceServices::FPsymResolver> @ 14d41f600

TModuleProvider<TraceServices::FPsymResolver> * __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::
TModuleProvider<TraceServices::FPsymResolver>
          (TModuleProvider<TraceServices::FPsymResolver> *this,IAnalysisSession *param_1)

{
  TUniquePtr<TraceServices::FPsymResolver,TDefaultDelete<TraceServices::FPsymResolver>_> *pTVar1;
  ILinearAllocator *pIVar2;
  IAnalysisCache *pIVar3;
  FPsymResolver *pFVar4;
  FPsymResolver *pFVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->ModulesLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar2 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  pFVar5 = (FPsymResolver *)0x0;
  (this->Modules).PageSize = 0x80;
  (this->Modules).Allocator = pIVar2;
  (this->Modules).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).PagesArray.ArrayNum = 0;
  (this->Modules).PagesArray.ArrayMax = 0;
  (this->Modules).FirstPage = (TPagedArrayPage<TraceServices::FModule> *)0x0;
  (this->Modules).LastPage = (TPagedArrayPage<TraceServices::FModule> *)0x0;
  (this->Modules).TotalItemCount = 0;
  (this->SymbolsLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar3 = (IAnalysisCache *)(**(code **)((longlong)*param_1 + 0xd8))(param_1);
  TCachedStringStore<wchar_t>::TCachedStringStore<wchar_t>
            (&this->Strings,L"ModuleProvider.Strings",pIVar3);
  pIVar2 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->SymbolCache).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->Resolver;
  (this->SymbolCache).Allocator = pIVar2;
  (this->SymbolCache).PagesArray.ArrayNum = 0;
  (this->SymbolCache).PagesArray.ArrayMax = 0;
  (this->SymbolCache).FirstPage = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0;
  (this->SymbolCache).LastPage = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0;
  (this->SymbolCache).PageSize = 0x100000;
  (this->SymbolCache).TotalItemCount = 0;
  *(undefined8 *)&this->SymbolCacheLookup = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x8 = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x20 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x28 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x34 = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x40 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x48 = 0;
  this->NumCachedSymbols = 0;
  this->SymbolsDiscovered = (atomic<unsigned_int>)0x0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  pTVar1->Ptr = (FPsymResolver *)0x0;
  (this->LoadSymbolsTask).Reference = (FBaseGraphTask *)0x0;
  this->Session = param_1;
  this->LoadSymbolsAbort = false;
  FResolvedSymbolFilter::FResolvedSymbolFilter(&this->SymbolFilter);
  pFVar4 = ::operator_new(0x140);
  if (pFVar4 != (FPsymResolver *)0x0) {
    pFVar5 = FPsymResolver::FPsymResolver
                       (pFVar4,param_1,(IResolvedSymbolFilter *)&this->SymbolFilter);
  }
  if (pTVar1 == (TUniquePtr<TraceServices::FPsymResolver,TDefaultDelete<TraceServices::FPsymResolver>_>
                 *)local_18) {
    if (pFVar5 == (FPsymResolver *)0x0) goto LAB_14d41f7a1;
    lVar6 = *(longlong *)pFVar5;
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar4 == (FPsymResolver *)0x0) goto LAB_14d41f7a1;
    lVar6 = *(longlong *)pFVar4;
    pFVar5 = pFVar4;
  }
  (**(code **)(lVar6 + 0x28))(pFVar5,1);
LAB_14d41f7a1:
  pIVar3 = (IAnalysisCache *)(**(code **)((longlong)*param_1 + 0xd8))(param_1);
  LoadSymbolsFromCache(this,pIVar3);
  return this;
}

// TModuleProvider<TraceServices::FSymslibResolver> @ 14d41f7e0

TModuleProvider<TraceServices::FSymslibResolver> * __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::
TModuleProvider<TraceServices::FSymslibResolver>
          (TModuleProvider<TraceServices::FSymslibResolver> *this,IAnalysisSession *param_1)

{
  TUniquePtr<TraceServices::FSymslibResolver,TDefaultDelete<TraceServices::FSymslibResolver>_>
  *pTVar1;
  ILinearAllocator *pIVar2;
  IAnalysisCache *pIVar3;
  FSymslibResolver *pFVar4;
  FSymslibResolver *this_00;
  undefined8 local_18 [2];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->ModulesLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar2 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  this_00 = (FSymslibResolver *)0x0;
  (this->Modules).PageSize = 0x80;
  (this->Modules).Allocator = pIVar2;
  (this->Modules).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).PagesArray.ArrayNum = 0;
  (this->Modules).PagesArray.ArrayMax = 0;
  (this->Modules).FirstPage = (TPagedArrayPage<TraceServices::FModule> *)0x0;
  (this->Modules).LastPage = (TPagedArrayPage<TraceServices::FModule> *)0x0;
  (this->Modules).TotalItemCount = 0;
  (this->SymbolsLock).Mutex.Mutex.Ptr = (void *)0x0;
  pIVar3 = (IAnalysisCache *)(**(code **)((longlong)*param_1 + 0xd8))(param_1);
  TCachedStringStore<wchar_t>::TCachedStringStore<wchar_t>
            (&this->Strings,L"ModuleProvider.Strings",pIVar3);
  pIVar2 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->SymbolCache).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->Resolver;
  (this->SymbolCache).Allocator = pIVar2;
  (this->SymbolCache).PagesArray.ArrayNum = 0;
  (this->SymbolCache).PagesArray.ArrayMax = 0;
  (this->SymbolCache).FirstPage = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0;
  (this->SymbolCache).LastPage = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0;
  (this->SymbolCache).PageSize = 0x100000;
  (this->SymbolCache).TotalItemCount = 0;
  *(undefined8 *)&this->SymbolCacheLookup = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x8 = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x20 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x28 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x34 = 0;
  *(undefined8 *)&(this->SymbolCacheLookup).field_0x40 = 0;
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x48 = 0;
  this->NumCachedSymbols = 0;
  this->SymbolsDiscovered = (atomic<unsigned_int>)0x0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  pTVar1->Ptr = (FSymslibResolver *)0x0;
  (this->LoadSymbolsTask).Reference = (FBaseGraphTask *)0x0;
  this->Session = param_1;
  this->LoadSymbolsAbort = false;
  FResolvedSymbolFilter::FResolvedSymbolFilter(&this->SymbolFilter);
  pFVar4 = ::operator_new(0x8150);
  if (pFVar4 != (FSymslibResolver *)0x0) {
    this_00 = FSymslibResolver::FSymslibResolver
                        (pFVar4,param_1,(IResolvedSymbolFilter *)&this->SymbolFilter);
  }
  if (pTVar1 == (TUniquePtr<TraceServices::FSymslibResolver,TDefaultDelete<TraceServices::FSymslibResolver>_>
                 *)local_18) {
    if (this_00 == (FSymslibResolver *)0x0) goto LAB_14d41f990;
    FSymslibResolver::~FSymslibResolver(this_00);
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar4 == (FSymslibResolver *)0x0) goto LAB_14d41f990;
    FSymslibResolver::~FSymslibResolver(pFVar4);
    this_00 = pFVar4;
  }
  ::operator_delete(this_00,0x8150);
LAB_14d41f990:
  pIVar3 = (IAnalysisCache *)(**(code **)((longlong)*param_1 + 0xd8))(param_1);
  LoadSymbolsFromCache(this,pIVar3);
  return this;
}

// ~TModuleProvider<TraceServices::FDbgHelpResolver> @ 14d427a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::
~TModuleProvider<TraceServices::FDbgHelpResolver>
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FDbgHelpResolver *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  BOOLEAN BVar8;
  bool bVar9;
  IAnalysisCache *pIVar10;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  pFVar3 = (this->LoadSymbolsTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    this->LoadSymbolsAbort = true;
    FBaseGraphTask::Wait(pFVar3,AnyNormalThreadNormalTask);
  }
  pFVar4 = (this->Resolver).Ptr;
  if (pFVar4 != (FDbgHelpResolver *)0x0) {
    (this->Resolver).Ptr = (FDbgHelpResolver *)0x0;
    (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4,1);
  }
  pIVar10 = (IAnalysisCache *)(**(code **)((longlong)*this->Session + 0xd8))();
  SaveSymbolsToCache(this,pIVar10);
  (this->SymbolFilter)._padding_ = (longlong)&___7FResolvedSymbolFilter_TraceServices__6B_;
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByFilePath.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByFunctionName.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByModuleName.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar3 = (this->LoadSymbolsTask).Reference;
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
  pFVar4 = (this->Resolver).Ptr;
  if (pFVar4 != (FDbgHelpResolver *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4,1);
  }
  pFVar5 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x48 = 0;
  pvVar6 = *(void **)&(this->SymbolCacheLookup).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SymbolCacheLookup);
  TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
  ::
  ~TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
            (&this->SymbolCache);
  TCachedStringStore<wchar_t>::~TCachedStringStore<wchar_t>(&this->Strings);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  if (BVar8 == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  }
  TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>::
  ~TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>
            (&this->Modules);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  if (BVar8 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d427c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
    return;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// ~TModuleProvider<TraceServices::FPsymResolver> @ 14d427c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::
~TModuleProvider<TraceServices::FPsymResolver>(TModuleProvider<TraceServices::FPsymResolver> *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FPsymResolver *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  BOOLEAN BVar8;
  bool bVar9;
  IAnalysisCache *pIVar10;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  pFVar3 = (this->LoadSymbolsTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    this->LoadSymbolsAbort = true;
    FBaseGraphTask::Wait(pFVar3,AnyNormalThreadNormalTask);
  }
  pFVar4 = (this->Resolver).Ptr;
  if (pFVar4 != (FPsymResolver *)0x0) {
    (this->Resolver).Ptr = (FPsymResolver *)0x0;
    (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4,1);
  }
  pIVar10 = (IAnalysisCache *)(**(code **)((longlong)*this->Session + 0xd8))();
  SaveSymbolsToCache(this,pIVar10);
  (this->SymbolFilter)._padding_ = (longlong)&___7FResolvedSymbolFilter_TraceServices__6B_;
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByFilePath.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByFunctionName.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByModuleName.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar3 = (this->LoadSymbolsTask).Reference;
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
  pFVar4 = (this->Resolver).Ptr;
  if (pFVar4 != (FPsymResolver *)0x0) {
    (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4,1);
  }
  pFVar5 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x48 = 0;
  pvVar6 = *(void **)&(this->SymbolCacheLookup).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SymbolCacheLookup);
  TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
  ::
  ~TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
            (&this->SymbolCache);
  TCachedStringStore<wchar_t>::~TCachedStringStore<wchar_t>(&this->Strings);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  if (BVar8 == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  }
  TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>::
  ~TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>
            (&this->Modules);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  if (BVar8 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d427dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
    return;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// ~TModuleProvider<TraceServices::FSymslibResolver> @ 14d427e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::
~TModuleProvider<TraceServices::FSymslibResolver>
          (TModuleProvider<TraceServices::FSymslibResolver> *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FSymslibResolver *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  BOOLEAN BVar8;
  bool bVar9;
  IAnalysisCache *pIVar10;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  pFVar3 = (this->LoadSymbolsTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    this->LoadSymbolsAbort = true;
    FBaseGraphTask::Wait(pFVar3,AnyNormalThreadNormalTask);
  }
  pFVar4 = (this->Resolver).Ptr;
  if (pFVar4 != (FSymslibResolver *)0x0) {
    (this->Resolver).Ptr = (FSymslibResolver *)0x0;
    FSymslibResolver::~FSymslibResolver(pFVar4);
    ::operator_delete(pFVar4,0x8150);
  }
  pIVar10 = (IAnalysisCache *)(**(code **)((longlong)*this->Session + 0xd8))();
  SaveSymbolsToCache(this,pIVar10);
  (this->SymbolFilter)._padding_ = (longlong)&___7FResolvedSymbolFilter_TraceServices__6B_;
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByFilePath.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByFunctionName.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SymbolFilter).IgnoreSymbolsByModuleName.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar3 = (this->LoadSymbolsTask).Reference;
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
  pFVar4 = (this->Resolver).Ptr;
  if (pFVar4 != (FSymslibResolver *)0x0) {
    FSymslibResolver::~FSymslibResolver(pFVar4);
    ::operator_delete(pFVar4,0x8150);
  }
  pFVar5 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->SymbolCacheLookup).field_0x48 = 0;
  pvVar6 = *(void **)&(this->SymbolCacheLookup).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SymbolCacheLookup);
  TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
  ::
  ~TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
            (&this->SymbolCache);
  TCachedStringStore<wchar_t>::~TCachedStringStore<wchar_t>(&this->Strings);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  if (BVar8 == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  }
  TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>::
  ~TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>
            (&this->Modules);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  if (BVar8 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d427fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
    return;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// operator() @ 14d432650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

void __thiscall
`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()(void *this)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  FModule *pFVar2;
  FDbgHelpResolver *this_00;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  EModuleStatus EVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined4 local_res8 [2];
  FScriptContainerElement *local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  FString local_b0;
  FString local_a0;
  ulong64 local_90;
  longlong lStack_88;
  code *local_78 [5];
  undefined8 *local_50;
  
  uVar12 = 0;
  local_res8[0] = 0;
  pFVar13 = *(FScriptContainerElement **)this;
  local_res10 = pFVar13;
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (*(int *)((longlong)this + 0x18) == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = *(wchar_t **)((longlong)this + 0x10);
  }
  EVar6 = ``TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::
          LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::
          operator()(&local_res10,*(FModule **)((longlong)this + 8),pwVar16);
  if (EVar6 == Loaded) {
    this_01 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_01);
    cVar7 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10);
    if (cVar7 == '\0') {
      pFVar11 = FPaths::GetPath(&local_a0,(FString *)((longlong)this + 0x10));
      bVar4 = false;
      bVar8 = true;
    }
    else {
      iVar9 = *(int *)((longlong)this + 0x18);
      _Src = *(void **)((longlong)this + 0x10);
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_b0.Data.ArrayMax = 0;
        pFVar11 = &local_b0;
        bVar4 = true;
        bVar8 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&local_b0,iVar9,&local_b0.Data.ArrayMax);
        memcpy(local_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        pFVar11 = &local_b0;
        bVar4 = true;
        bVar8 = false;
      }
    }
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = (pFVar11->Data).ArrayNum;
    lVar14 = (longlong)local_b8;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (local_b8 == 0) {
      local_b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8,0,&local_c0,local_b8,&local_b4);
      memcpy(local_c0.Data,pFVar1,lVar14 * 2);
    }
    if ((bVar8) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    lVar14 = *(longlong *)this;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    lVar17 = *(longlong *)this;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      do {
        local_c8 = *(longlong *)
                    (*(longlong *)(lVar17 + 0x30) + (uVar12 / *(ulonglong *)(lVar17 + 0x40)) * 0x10)
                   + (uVar12 % *(ulonglong *)(lVar17 + 0x40)) * 0x40;
        if ((local_c8 != *(longlong *)((longlong)this + 8)) && (2 < *(byte *)(local_c8 + 0x1d))) {
          if ((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
             (((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)local_d0._4_4_ * 8
              && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)local_d0;
          if ((int)local_d0 == local_d0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar9 + 1);
          *(longlong *)(local_d8.Data + (longlong)iVar9 * 8) = local_c8;
        }
        lVar17 = *(longlong *)this;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        pFVar13 = local_res10;
      } while (uVar12 < *(ulonglong *)(lVar17 + 0x48));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    fVar5 = __real_3dcccccd;
    iVar9 = (int)local_d0;
    uVar12 = (ulonglong)(int)local_d0;
    local_res10 = local_d8.Data + uVar12 * 8;
    FVar15.Data = local_d8.Data;
    while( true ) {
      pFVar1 = local_res10;
      if ((int)uVar12 != iVar9) {
        `TCheckedPointerIterator<TraceServices::FModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar1) {
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        if (local_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data);
        }
        goto LAB_14d432a5a;
      }
      pFVar2 = *(FModule **)FVar15.Data;
      if (*(char *)(*(longlong *)this + 400) != '\0') break;
      local_a0.Data.ArrayNum = *(int *)&(pFVar2->Stats).Discovered;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_b8 != 0) {
        FVar18.Data = local_c0.Data;
      }
      local_90 = pFVar2->Base;
      this_00 = *(FDbgHelpResolver **)(pFVar13 + 0x180);
      lStack_88 = pFVar2->Size + local_90;
      local_78[0] = (code *)0x0;
      local_50 = (undefined8 *)0x0;
      local_a0.Data.AllocatorInstance.Data = pFVar13;
      local_50 = FMemory::Malloc(0x28,8);
      *local_50 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
      ;
      local_50[1] = local_a0.Data.AllocatorInstance.Data;
      local_50[2] = CONCAT44(local_a0.Data.ArrayMax,local_a0.Data.ArrayNum);
      local_50[3] = local_90;
      local_50[4] = lStack_88;
      if (local_50 + 1 != (undefined8 *)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
                      ::Call;
      }
      TraceServices::FDbgHelpResolver::QueueModuleReload
                (this_00,pFVar2,(wchar_t *)FVar18.Data,
                 (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
                  *)local_78);
      do {
        FWindowsPlatformProcess::Sleep(fVar5);
      } while (pFVar2->Status == (atomic<TraceServices::EModuleStatus>)0x1);
      uVar12 = local_d0 & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else {
LAB_14d432a5a:
    if (3 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// operator() @ 14d432ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

void __thiscall
`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13
::<lambda_1>::operator()(void *this)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  FModule *pFVar2;
  FPsymResolver *this_00;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  EModuleStatus EVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined4 local_res8 [2];
  FScriptContainerElement *local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  FString local_b0;
  FString local_a0;
  ulong64 local_90;
  longlong lStack_88;
  code *local_78 [5];
  undefined8 *local_50;
  
  uVar12 = 0;
  local_res8[0] = 0;
  pFVar13 = *(FScriptContainerElement **)this;
  local_res10 = pFVar13;
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (*(int *)((longlong)this + 0x18) == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = *(wchar_t **)((longlong)this + 0x10);
  }
  EVar6 = ``TraceServices::TModuleProvider<TraceServices::FPsymResolver>::
          LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::
          operator()(&local_res10,*(FModule **)((longlong)this + 8),pwVar16);
  if (EVar6 == Loaded) {
    this_01 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_01);
    cVar7 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10);
    if (cVar7 == '\0') {
      pFVar11 = FPaths::GetPath(&local_a0,(FString *)((longlong)this + 0x10));
      bVar4 = false;
      bVar8 = true;
    }
    else {
      iVar9 = *(int *)((longlong)this + 0x18);
      _Src = *(void **)((longlong)this + 0x10);
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_b0.Data.ArrayMax = 0;
        pFVar11 = &local_b0;
        bVar4 = true;
        bVar8 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&local_b0,iVar9,&local_b0.Data.ArrayMax);
        memcpy(local_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        pFVar11 = &local_b0;
        bVar4 = true;
        bVar8 = false;
      }
    }
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = (pFVar11->Data).ArrayNum;
    lVar14 = (longlong)local_b8;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (local_b8 == 0) {
      local_b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8,0,&local_c0,local_b8,&local_b4);
      memcpy(local_c0.Data,pFVar1,lVar14 * 2);
    }
    if ((bVar8) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    lVar14 = *(longlong *)this;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    lVar17 = *(longlong *)this;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      do {
        local_c8 = *(longlong *)
                    (*(longlong *)(lVar17 + 0x30) + (uVar12 / *(ulonglong *)(lVar17 + 0x40)) * 0x10)
                   + (uVar12 % *(ulonglong *)(lVar17 + 0x40)) * 0x40;
        if ((local_c8 != *(longlong *)((longlong)this + 8)) && (2 < *(byte *)(local_c8 + 0x1d))) {
          if ((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
             (((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)local_d0._4_4_ * 8
              && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)local_d0;
          if ((int)local_d0 == local_d0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar9 + 1);
          *(longlong *)(local_d8.Data + (longlong)iVar9 * 8) = local_c8;
        }
        lVar17 = *(longlong *)this;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        pFVar13 = local_res10;
      } while (uVar12 < *(ulonglong *)(lVar17 + 0x48));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    fVar5 = __real_3dcccccd;
    iVar9 = (int)local_d0;
    uVar12 = (ulonglong)(int)local_d0;
    local_res10 = local_d8.Data + uVar12 * 8;
    FVar15.Data = local_d8.Data;
    while( true ) {
      pFVar1 = local_res10;
      if ((int)uVar12 != iVar9) {
        `TCheckedPointerIterator<TraceServices::FModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar1) {
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        if (local_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data);
        }
        goto LAB_14d432eca;
      }
      pFVar2 = *(FModule **)FVar15.Data;
      if (*(char *)(*(longlong *)this + 400) != '\0') break;
      local_a0.Data.ArrayNum = *(int *)&(pFVar2->Stats).Discovered;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_b8 != 0) {
        FVar18.Data = local_c0.Data;
      }
      local_90 = pFVar2->Base;
      this_00 = *(FPsymResolver **)(pFVar13 + 0x180);
      lStack_88 = pFVar2->Size + local_90;
      local_78[0] = (code *)0x0;
      local_50 = (undefined8 *)0x0;
      local_a0.Data.AllocatorInstance.Data = pFVar13;
      local_50 = FMemory::Malloc(0x28,8);
      *local_50 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
      ;
      local_50[1] = local_a0.Data.AllocatorInstance.Data;
      local_50[2] = CONCAT44(local_a0.Data.ArrayMax,local_a0.Data.ArrayNum);
      local_50[3] = local_90;
      local_50[4] = lStack_88;
      if (local_50 + 1 != (undefined8 *)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
                      ::Call;
      }
      TraceServices::FPsymResolver::QueueModuleReload
                (this_00,pFVar2,(wchar_t *)FVar18.Data,
                 (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
                  *)local_78);
      do {
        FWindowsPlatformProcess::Sleep(fVar5);
      } while (pFVar2->Status == (atomic<TraceServices::EModuleStatus>)0x1);
      uVar12 = local_d0 & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else {
LAB_14d432eca:
    if (3 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// operator() @ 14d432f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

void __thiscall
`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()(void *this)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  FModule *pFVar2;
  FSymslibResolver *this_00;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  EModuleStatus EVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined4 local_res8 [2];
  FScriptContainerElement *local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  FString local_b0;
  FString local_a0;
  ulong64 local_90;
  longlong lStack_88;
  code *local_78 [5];
  undefined8 *local_50;
  
  uVar12 = 0;
  local_res8[0] = 0;
  pFVar13 = *(FScriptContainerElement **)this;
  local_res10 = pFVar13;
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (*(int *)((longlong)this + 0x18) == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = *(wchar_t **)((longlong)this + 0x10);
  }
  EVar6 = ``TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::
          LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::
          operator()(&local_res10,*(FModule **)((longlong)this + 8),pwVar16);
  if (EVar6 == Loaded) {
    this_01 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_01);
    cVar7 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10);
    if (cVar7 == '\0') {
      pFVar11 = FPaths::GetPath(&local_a0,(FString *)((longlong)this + 0x10));
      bVar4 = false;
      bVar8 = true;
    }
    else {
      iVar9 = *(int *)((longlong)this + 0x18);
      _Src = *(void **)((longlong)this + 0x10);
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_b0.Data.ArrayMax = 0;
        pFVar11 = &local_b0;
        bVar4 = true;
        bVar8 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&local_b0,iVar9,&local_b0.Data.ArrayMax);
        memcpy(local_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        pFVar11 = &local_b0;
        bVar4 = true;
        bVar8 = false;
      }
    }
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = (pFVar11->Data).ArrayNum;
    lVar14 = (longlong)local_b8;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (local_b8 == 0) {
      local_b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8,0,&local_c0,local_b8,&local_b4);
      memcpy(local_c0.Data,pFVar1,lVar14 * 2);
    }
    if ((bVar8) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    lVar14 = *(longlong *)this;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    lVar17 = *(longlong *)this;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      do {
        local_c8 = *(longlong *)
                    (*(longlong *)(lVar17 + 0x30) + (uVar12 / *(ulonglong *)(lVar17 + 0x40)) * 0x10)
                   + (uVar12 % *(ulonglong *)(lVar17 + 0x40)) * 0x40;
        if ((local_c8 != *(longlong *)((longlong)this + 8)) && (2 < *(byte *)(local_c8 + 0x1d))) {
          if ((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
             (((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)local_d0._4_4_ * 8
              && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)local_d0;
          if ((int)local_d0 == local_d0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar9 + 1);
          *(longlong *)(local_d8.Data + (longlong)iVar9 * 8) = local_c8;
        }
        lVar17 = *(longlong *)this;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        pFVar13 = local_res10;
      } while (uVar12 < *(ulonglong *)(lVar17 + 0x48));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    fVar5 = __real_3dcccccd;
    iVar9 = (int)local_d0;
    uVar12 = (ulonglong)(int)local_d0;
    local_res10 = local_d8.Data + uVar12 * 8;
    FVar15.Data = local_d8.Data;
    while( true ) {
      pFVar1 = local_res10;
      if ((int)uVar12 != iVar9) {
        `TCheckedPointerIterator<TraceServices::FModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar1) {
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        if (local_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data);
        }
        goto LAB_14d43333a;
      }
      pFVar2 = *(FModule **)FVar15.Data;
      if (*(char *)(*(longlong *)this + 400) != '\0') break;
      local_a0.Data.ArrayNum = *(int *)&(pFVar2->Stats).Discovered;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_b8 != 0) {
        FVar18.Data = local_c0.Data;
      }
      local_90 = pFVar2->Base;
      this_00 = *(FSymslibResolver **)(pFVar13 + 0x180);
      lStack_88 = pFVar2->Size + local_90;
      local_78[0] = (code *)0x0;
      local_50 = (undefined8 *)0x0;
      local_a0.Data.AllocatorInstance.Data = pFVar13;
      local_50 = FMemory::Malloc(0x28,8);
      *local_50 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
      ;
      local_50[1] = local_a0.Data.AllocatorInstance.Data;
      local_50[2] = CONCAT44(local_a0.Data.ArrayMax,local_a0.Data.ArrayNum);
      local_50[3] = local_90;
      local_50[4] = lStack_88;
      if (local_50 + 1 != (undefined8 *)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
                      ::Call;
      }
      TraceServices::FSymslibResolver::QueueModuleReload
                (this_00,pFVar2,(wchar_t *)FVar18.Data,
                 (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
                  *)local_78);
      do {
        FWindowsPlatformProcess::Sleep(fVar5);
      } while (pFVar2->Status == (atomic<TraceServices::EModuleStatus>)0x1);
      uVar12 = local_d0 & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else {
LAB_14d43333a:
    if (3 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// EnumerateModules @ 14d45ac00

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::EnumerateModules
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FModule_const_&)> *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  if (uVar1 < (this->Modules).TotalItemCount) {
    do {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      uVar1 = (ulonglong)((int)uVar1 + 1);
    } while (uVar1 < (this->Modules).TotalItemCount);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d45ac72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return;
}

// EnumerateModules @ 14d45ac80

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::EnumerateModules
          (TModuleProvider<TraceServices::FPsymResolver> *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FModule_const_&)> *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  if (uVar1 < (this->Modules).TotalItemCount) {
    do {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      uVar1 = (ulonglong)((int)uVar1 + 1);
    } while (uVar1 < (this->Modules).TotalItemCount);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d45acf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return;
}

// EnumerateModules @ 14d45ad00

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::EnumerateModules
          (TModuleProvider<TraceServices::FSymslibResolver> *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::FModule_const_&)> *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  if (uVar1 < (this->Modules).TotalItemCount) {
    do {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      uVar1 = (ulonglong)((int)uVar1 + 1);
    } while (uVar1 < (this->Modules).TotalItemCount);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d45ad72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return;
}

// EnumerateSymbolSearchPaths @ 14d45c800

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::EnumerateSymbolSearchPaths
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,
          TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_1)

{
  FDbgHelpResolver *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_18;
  
  pFVar1 = (this->Resolver).Ptr;
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->CustomSymbolSearchPathsLock);
  local_18._0_8_ = uVar2;
  local_18._8_8_ = uVar3;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&pFVar1->CustomSymbolSearchPaths,&local_18);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->CustomSymbolSearchPathsLock);
  local_18._0_8_ = uVar2;
  local_18._8_8_ = uVar3;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&pFVar1->ConfigSymbolSearchPaths,&local_18);
  return;
}

// EnumerateSymbolSearchPaths @ 14d45c890

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::EnumerateSymbolSearchPaths
          (TModuleProvider<TraceServices::FPsymResolver> *this,
          TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_1)

{
  FPsymResolver *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_18;
  
  pFVar1 = (this->Resolver).Ptr;
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->CustomSymbolSearchPathsLock);
  local_18._0_8_ = uVar2;
  local_18._8_8_ = uVar3;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&pFVar1->CustomSymbolSearchPaths,&local_18);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->CustomSymbolSearchPathsLock);
  local_18._0_8_ = uVar2;
  local_18._8_8_ = uVar3;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&pFVar1->ConfigSymbolSearchPaths,&local_18);
  return;
}

// EnumerateSymbolSearchPaths @ 14d45c920

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::EnumerateSymbolSearchPaths
          (TModuleProvider<TraceServices::FSymslibResolver> *this,
          TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_1)

{
  FSymslibResolver *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_18;
  
  pFVar1 = (this->Resolver).Ptr;
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->CustomSymbolSearchPathsLock);
  local_18._0_8_ = uVar2;
  local_18._8_8_ = uVar3;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&pFVar1->CustomSymbolSearchPaths,&local_18);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->CustomSymbolSearchPathsLock);
  local_18._0_8_ = uVar2;
  local_18._8_8_ = uVar3;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&pFVar1->ConfigSymbolSearchPaths,&local_18);
  return;
}

// GetNumCachedSymbolsFromModule @ 14d469f40

uint __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::GetNumCachedSymbolsFromModule
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,ulong64 param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res20 = param_2 + param_1;
  uVar10 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  puVar3 = &(this->SymbolCacheLookup).field_0x10;
  iVar13 = 0;
  iVar4 = *(int *)&(this->SymbolCacheLookup).field_0x28;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->SymbolCacheLookup).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar3;
    }
    uVar16 = *puVar15;
    iVar14 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar13) goto LAB_14d46a010;
      uVar16 = puVar15[lVar11 + 1];
    }
    uVar8 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar11;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14d46a010:
  uVar16 = *(uint *)&(this->SymbolCacheLookup).field_0x28;
  TStack_70._padding_ = CONCAT44(uVar8,iVar13);
  uVar8 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->SymbolCacheLookup).field_0x8 -
                       *(int *)&(this->SymbolCacheLookup).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  uVar1 = local_res20;
  uVar5 = *(uint *)&(this->SymbolCacheLookup).field_0x28;
  if (uVar16 != uVar5) {
    puVar12 = *(undefined1 **)&(this->SymbolCacheLookup).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar3;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar8 = uVar8 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14d46a130;
      uVar16 = *(uint *)(puVar12 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14d46a130:
  while( true ) {
    uVar8 = uVar10;
    if (*(int *)&(this->SymbolCacheLookup).field_0x8 - *(int *)&(this->SymbolCacheLookup).field_0x34
        != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == uVar16) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    uVar2 = *(ulonglong *)
             (*(longlong *)&this->SymbolCacheLookup + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((uVar2 < param_1) || (uVar1 <= uVar2)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    uVar10 = uVar8 + 1;
    if (!bVar7) {
      uVar10 = uVar8;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  return uVar8;
}

// GetNumCachedSymbolsFromModule @ 14d46a1c0

uint __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::GetNumCachedSymbolsFromModule
          (TModuleProvider<TraceServices::FPsymResolver> *this,ulong64 param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res20 = param_2 + param_1;
  uVar10 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  puVar3 = &(this->SymbolCacheLookup).field_0x10;
  iVar13 = 0;
  iVar4 = *(int *)&(this->SymbolCacheLookup).field_0x28;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->SymbolCacheLookup).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar3;
    }
    uVar16 = *puVar15;
    iVar14 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar13) goto LAB_14d46a290;
      uVar16 = puVar15[lVar11 + 1];
    }
    uVar8 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar11;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14d46a290:
  uVar16 = *(uint *)&(this->SymbolCacheLookup).field_0x28;
  TStack_70._padding_ = CONCAT44(uVar8,iVar13);
  uVar8 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->SymbolCacheLookup).field_0x8 -
                       *(int *)&(this->SymbolCacheLookup).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  uVar1 = local_res20;
  uVar5 = *(uint *)&(this->SymbolCacheLookup).field_0x28;
  if (uVar16 != uVar5) {
    puVar12 = *(undefined1 **)&(this->SymbolCacheLookup).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar3;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar8 = uVar8 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14d46a3b0;
      uVar16 = *(uint *)(puVar12 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14d46a3b0:
  while( true ) {
    uVar8 = uVar10;
    if (*(int *)&(this->SymbolCacheLookup).field_0x8 - *(int *)&(this->SymbolCacheLookup).field_0x34
        != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == uVar16) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    uVar2 = *(ulonglong *)
             (*(longlong *)&this->SymbolCacheLookup + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((uVar2 < param_1) || (uVar1 <= uVar2)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    uVar10 = uVar8 + 1;
    if (!bVar7) {
      uVar10 = uVar8;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  return uVar8;
}

// GetNumCachedSymbolsFromModule @ 14d46a440

uint __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::GetNumCachedSymbolsFromModule
          (TModuleProvider<TraceServices::FSymslibResolver> *this,ulong64 param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res20 = param_2 + param_1;
  uVar10 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  puVar3 = &(this->SymbolCacheLookup).field_0x10;
  iVar13 = 0;
  iVar4 = *(int *)&(this->SymbolCacheLookup).field_0x28;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->SymbolCacheLookup).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar3;
    }
    uVar16 = *puVar15;
    iVar14 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar13) goto LAB_14d46a510;
      uVar16 = puVar15[lVar11 + 1];
    }
    uVar8 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar11;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14d46a510:
  uVar16 = *(uint *)&(this->SymbolCacheLookup).field_0x28;
  TStack_70._padding_ = CONCAT44(uVar8,iVar13);
  uVar8 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->SymbolCacheLookup).field_0x8 -
                       *(int *)&(this->SymbolCacheLookup).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  uVar1 = local_res20;
  uVar5 = *(uint *)&(this->SymbolCacheLookup).field_0x28;
  if (uVar16 != uVar5) {
    puVar12 = *(undefined1 **)&(this->SymbolCacheLookup).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar3;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar8 = uVar8 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13) goto LAB_14d46a630;
      uVar16 = *(uint *)(puVar12 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14d46a630:
  while( true ) {
    uVar8 = uVar10;
    if (*(int *)&(this->SymbolCacheLookup).field_0x8 - *(int *)&(this->SymbolCacheLookup).field_0x34
        != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == uVar16) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    uVar2 = *(ulonglong *)
             (*(longlong *)&this->SymbolCacheLookup + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((uVar2 < param_1) || (uVar1 <= uVar2)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    uVar10 = uVar8 + 1;
    if (!bVar7) {
      uVar10 = uVar8;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  return uVar8;
}

// GetNumModules @ 14d46a6c0

uint __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::GetNumModules
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this)

{
  ulong64 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  uVar1 = (this->Modules).TotalItemCount;
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return (uint)uVar1;
}

// GetNumModules @ 14d46a700

uint __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::GetNumModules
          (TModuleProvider<TraceServices::FPsymResolver> *this)

{
  ulong64 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  uVar1 = (this->Modules).TotalItemCount;
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return (uint)uVar1;
}

// GetNumModules @ 14d46a740

uint __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::GetNumModules
          (TModuleProvider<TraceServices::FSymslibResolver> *this)

{
  ulong64 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  uVar1 = (this->Modules).TotalItemCount;
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return (uint)uVar1;
}

// GetStats @ 14d46ce00

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::GetStats
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,FStats *param_1)

{
  FDbgHelpResolver *pFVar1;
  ulonglong uVar2;
  FModule *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  
  pFVar1 = (this->Resolver).Ptr;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->ModulesLock);
  uVar4 = 0;
  param_1->ModulesDiscovered = 0;
  param_1->ModulesLoaded = 0;
  param_1->ModulesFailed = 0;
  param_1->SymbolsDiscovered = 0;
  param_1->SymbolsCached = 0;
  param_1->SymbolsResolved = 0;
  uVar5 = 0;
  param_1->SymbolsFailed = 0;
  if ((pFVar1->Modules).TotalItemCount != 0) {
    do {
      uVar5 = uVar5 + 1;
      uVar2 = (pFVar1->Modules).PageSize;
      pFVar3 = (pFVar1->Modules).FirstPage[uVar4 / uVar2].Items[uVar4 % uVar2].Module;
      param_1->SymbolsDiscovered = param_1->SymbolsDiscovered + (int)(pFVar3->Stats).Discovered;
      param_1->SymbolsCached = param_1->SymbolsCached + (int)(pFVar3->Stats).Cached;
      param_1->SymbolsResolved = param_1->SymbolsResolved + (int)(pFVar3->Stats).Resolved;
      param_1->SymbolsFailed = param_1->SymbolsFailed + (int)(pFVar3->Stats).Failed;
      uVar4 = (ulonglong)uVar5;
    } while (uVar4 < (pFVar1->Modules).TotalItemCount);
  }
  param_1->SymbolsFailed = param_1->SymbolsFailed + (int)pFVar1->NoModuleSymbols;
  param_1->ModulesDiscovered = (uint)pFVar1->ModulesDiscovered;
  param_1->ModulesFailed = (uint)pFVar1->ModulesFailed;
  param_1->ModulesLoaded = (uint)pFVar1->ModulesLoaded;
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->ModulesLock);
  param_1->SymbolsDiscovered = (int)this->SymbolsDiscovered + this->NumCachedSymbols;
  param_1->SymbolsCached = this->NumCachedSymbols;
  return;
}

// GetStats @ 14d46cf00

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::GetStats
          (TModuleProvider<TraceServices::FPsymResolver> *this,FStats *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FPsymResolver *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->Resolver).Ptr;
  lpCriticalSection = &pFVar2->ModulesCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->ModulesDiscovered = 0;
    param_1->ModulesLoaded = 0;
    param_1->ModulesFailed = 0;
    param_1->SymbolsDiscovered = 0;
    param_1->SymbolsCached = 0;
    param_1->SymbolsResolved = 0;
    param_1->SymbolsFailed = 0;
    iVar1 = (pFVar2->LoadedModules).ArrayNum;
    pFVar4 = (pFVar2->LoadedModules).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x38;
    while( true ) {
      if ((pFVar2->LoadedModules).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TraceServices::FPsymResolver::FModuleEntry_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      lVar3 = *(longlong *)(pFVar4 + 0x20);
      param_1->SymbolsDiscovered = param_1->SymbolsDiscovered + *(int *)(lVar3 + 0x28);
      param_1->SymbolsCached = param_1->SymbolsCached + *(int *)(lVar3 + 0x2c);
      param_1->SymbolsResolved = param_1->SymbolsResolved + *(int *)(lVar3 + 0x30);
      param_1->SymbolsFailed = param_1->SymbolsFailed + *(int *)(lVar3 + 0x34);
      pFVar4 = pFVar4 + 0x38;
    }
    param_1->SymbolsFailed = param_1->SymbolsFailed + (int)pFVar2->NoModuleSymbols;
    param_1->ModulesDiscovered = (uint)pFVar2->ModulesDiscovered;
    param_1->ModulesFailed = (uint)pFVar2->ModulesFailed;
    param_1->ModulesLoaded = (uint)pFVar2->ModulesLoaded;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->SymbolsDiscovered = (int)this->SymbolsDiscovered + this->NumCachedSymbols;
    param_1->SymbolsCached = this->NumCachedSymbols;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStats @ 14d46d000

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::GetStats
          (TModuleProvider<TraceServices::FSymslibResolver> *this,FStats *param_1)

{
  FSymslibResolver *SRWLock;
  ulonglong uVar1;
  FModule *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  
  SRWLock = (this->Resolver).Ptr;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar3 = 0;
  param_1->ModulesDiscovered = 0;
  param_1->ModulesLoaded = 0;
  param_1->ModulesFailed = 0;
  param_1->SymbolsDiscovered = 0;
  param_1->SymbolsCached = 0;
  param_1->SymbolsResolved = 0;
  uVar4 = 0;
  param_1->SymbolsFailed = 0;
  if ((SRWLock->Modules).TotalItemCount != 0) {
    do {
      uVar4 = uVar4 + 1;
      uVar1 = (SRWLock->Modules).PageSize;
      pFVar2 = (SRWLock->Modules).FirstPage[uVar3 / uVar1].Items[uVar3 % uVar1].Module;
      param_1->SymbolsDiscovered = param_1->SymbolsDiscovered + (int)(pFVar2->Stats).Discovered;
      param_1->SymbolsCached = param_1->SymbolsCached + (int)(pFVar2->Stats).Cached;
      param_1->SymbolsResolved = param_1->SymbolsResolved + (int)(pFVar2->Stats).Resolved;
      param_1->SymbolsFailed = param_1->SymbolsFailed + (int)(pFVar2->Stats).Failed;
      uVar3 = (ulonglong)uVar4;
    } while (uVar3 < (SRWLock->Modules).TotalItemCount);
  }
  param_1->SymbolsFailed = param_1->SymbolsFailed + (int)SRWLock->NoModuleSymbols;
  param_1->ModulesDiscovered = (uint)SRWLock->ModulesDiscovered;
  param_1->ModulesFailed = (uint)SRWLock->ModulesFailed;
  param_1->ModulesLoaded = (uint)SRWLock->ModulesLoaded;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  param_1->SymbolsDiscovered = (int)this->SymbolsDiscovered + this->NumCachedSymbols;
  param_1->SymbolsCached = this->NumCachedSymbols;
  return;
}

// GetSymbol @ 14d46d430

FResolvedSymbol * __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::GetSymbol
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,ulong64 param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar4;
  ILinearAllocator *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FResolvedSymbol **ppFVar9;
  FResolvedSymbol *pFVar10;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar11;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_const_&>
  local_res8;
  FResolvedSymbol *local_res18;
  FResolvedSymbol ***local_38;
  FResolvedSymbol **local_30;
  
  local_res8.Value = (FResolvedSymbol **)param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->SymbolsLock);
  ppFVar9 = TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
                    *)&this->SymbolCacheLookup,(ulong64)local_res8.Value);
  if (ppFVar9 != (FResolvedSymbol **)0x0) {
    pFVar10 = *ppFVar9;
    ReleaseSRWLockShared((PSRWLOCK)&this->SymbolsLock);
    return pFVar10;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->SymbolsLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  pFVar10 = TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
            ::FindRef((TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
                       *)&this->SymbolCacheLookup,(ulong64)local_res8.Value);
  if (pFVar10 != (FResolvedSymbol *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
    return pFVar10;
  }
  pTVar4 = (this->SymbolCache).LastPage;
  if ((pTVar4 == (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0) ||
     (pTVar4->Count == (this->SymbolCache).PageSize)) {
    pTVar3 = &(this->SymbolCache).PagesArray;
    iVar8 = (this->SymbolCache).PagesArray.ArrayNum;
    piVar1 = &(this->SymbolCache).PagesArray.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->SymbolCache).PagesArray.ArrayNum = iVar8 + 1;
    pTVar11 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int>
              (pTVar11,1);
    pTVar4 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)(pTVar3->AllocatorInstance).Data;
    pIVar5 = (this->SymbolCache).Allocator;
    (this->SymbolCache).LastPage = pTVar11;
    (this->SymbolCache).FirstPage = pTVar4;
    pFVar10 = (FResolvedSymbol *)
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->SymbolCache).PageSize << 5);
    ((this->SymbolCache).LastPage)->Items = pFVar10;
  }
  pTVar4 = (this->SymbolCache).LastPage;
  puVar2 = &(this->SymbolCache).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  local_res18 = pTVar4->Items + pTVar4->Count;
  local_res18->Module = (wchar_t *)0x0;
  local_res18->Name = (wchar_t *)0x0;
  local_res18->File = (wchar_t *)0x0;
  local_res18->Line = 0;
  local_res18->Result = (atomic<TraceServices::ESymbolQueryResult>)0x0;
  local_res18->FilterStatus = (atomic<TraceServices::EResolvedSymbolFilterStatus>)0x0;
  puVar2 = &((this->SymbolCache).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  local_38 = &local_res8.Value;
  local_30 = &local_res18;
  TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
              *)&this->SymbolCacheLookup,&local_res8,(bool *)&local_38);
  LOCK();
  this->SymbolsDiscovered = (atomic<unsigned_int>)((int)this->SymbolsDiscovered + 1);
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  if (local_res18 == (FResolvedSymbol *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResolvedSymbol",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\ModuleProvider.cpp"
                       ,0xb5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FResolvedSymbol *)(*pcVar6)();
      return pFVar10;
    }
  }
  FDbgHelpResolver::QueueSymbolResolve((this->Resolver).Ptr,(ulong64)local_res8.Value,local_res18);
  return local_res18;
}

// GetSymbol @ 14d46d630

FResolvedSymbol * __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::GetSymbol
          (TModuleProvider<TraceServices::FPsymResolver> *this,ulong64 param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar4;
  ILinearAllocator *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FResolvedSymbol **ppFVar9;
  FResolvedSymbol *pFVar10;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar11;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_const_&>
  local_res8;
  FResolvedSymbol *local_res18;
  FResolvedSymbol ***local_38;
  FResolvedSymbol **local_30;
  
  local_res8.Value = (FResolvedSymbol **)param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->SymbolsLock);
  ppFVar9 = TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
                    *)&this->SymbolCacheLookup,(ulong64)local_res8.Value);
  if (ppFVar9 != (FResolvedSymbol **)0x0) {
    pFVar10 = *ppFVar9;
    ReleaseSRWLockShared((PSRWLOCK)&this->SymbolsLock);
    return pFVar10;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->SymbolsLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  pFVar10 = TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
            ::FindRef((TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
                       *)&this->SymbolCacheLookup,(ulong64)local_res8.Value);
  if (pFVar10 != (FResolvedSymbol *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
    return pFVar10;
  }
  pTVar4 = (this->SymbolCache).LastPage;
  if ((pTVar4 == (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0) ||
     (pTVar4->Count == (this->SymbolCache).PageSize)) {
    pTVar3 = &(this->SymbolCache).PagesArray;
    iVar8 = (this->SymbolCache).PagesArray.ArrayNum;
    piVar1 = &(this->SymbolCache).PagesArray.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->SymbolCache).PagesArray.ArrayNum = iVar8 + 1;
    pTVar11 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int>
              (pTVar11,1);
    pTVar4 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)(pTVar3->AllocatorInstance).Data;
    pIVar5 = (this->SymbolCache).Allocator;
    (this->SymbolCache).LastPage = pTVar11;
    (this->SymbolCache).FirstPage = pTVar4;
    pFVar10 = (FResolvedSymbol *)
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->SymbolCache).PageSize << 5);
    ((this->SymbolCache).LastPage)->Items = pFVar10;
  }
  pTVar4 = (this->SymbolCache).LastPage;
  puVar2 = &(this->SymbolCache).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  local_res18 = pTVar4->Items + pTVar4->Count;
  local_res18->Module = (wchar_t *)0x0;
  local_res18->Name = (wchar_t *)0x0;
  local_res18->File = (wchar_t *)0x0;
  local_res18->Line = 0;
  local_res18->Result = (atomic<TraceServices::ESymbolQueryResult>)0x0;
  local_res18->FilterStatus = (atomic<TraceServices::EResolvedSymbolFilterStatus>)0x0;
  puVar2 = &((this->SymbolCache).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  local_38 = &local_res8.Value;
  local_30 = &local_res18;
  TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
              *)&this->SymbolCacheLookup,&local_res8,(bool *)&local_38);
  LOCK();
  this->SymbolsDiscovered = (atomic<unsigned_int>)((int)this->SymbolsDiscovered + 1);
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  if (local_res18 == (FResolvedSymbol *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResolvedSymbol",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\ModuleProvider.cpp"
                       ,0xb5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FResolvedSymbol *)(*pcVar6)();
      return pFVar10;
    }
  }
  FPsymResolver::QueueSymbolResolve((this->Resolver).Ptr,(ulong64)local_res8.Value,local_res18);
  return local_res18;
}

// GetSymbol @ 14d46d830

FResolvedSymbol * __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::GetSymbol
          (TModuleProvider<TraceServices::FSymslibResolver> *this,ulong64 param_1)

{
  ulong64 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TraceServices::FSymslibResolver::FQueuedAddress,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int *piVar4;
  undefined4 *puVar5;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar6;
  ILinearAllocator *pIVar7;
  FSymslibResolver *this_00;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FResolvedSymbol **ppFVar11;
  FResolvedSymbol *pFVar12;
  ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> FVar13;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar14;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_const_&>
  local_res8;
  FResolvedSymbol *local_res18;
  undefined8 local_48;
  undefined8 uStack_40;
  FResolvedSymbol ***local_38;
  FResolvedSymbol **local_30;
  
  local_res8.Value = (FResolvedSymbol **)param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->SymbolsLock);
  ppFVar11 = TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
             ::Find((TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
                     *)&this->SymbolCacheLookup,(ulong64)local_res8.Value);
  if (ppFVar11 != (FResolvedSymbol **)0x0) {
    pFVar12 = *ppFVar11;
    ReleaseSRWLockShared((PSRWLOCK)&this->SymbolsLock);
    return pFVar12;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->SymbolsLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  pFVar12 = TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
            ::FindRef((TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
                       *)&this->SymbolCacheLookup,(ulong64)local_res8.Value);
  if (pFVar12 != (FResolvedSymbol *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
    return pFVar12;
  }
  pTVar6 = (this->SymbolCache).LastPage;
  if ((pTVar6 == (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0) ||
     (pTVar6->Count == (this->SymbolCache).PageSize)) {
    pTVar3 = &(this->SymbolCache).PagesArray;
    iVar10 = (this->SymbolCache).PagesArray.ArrayNum;
    piVar4 = &(this->SymbolCache).PagesArray.ArrayMax;
    if (iVar10 == *piVar4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar4);
    }
    (this->SymbolCache).PagesArray.ArrayNum = iVar10 + 1;
    pTVar14 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int>
              (pTVar14,1);
    pTVar6 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)(pTVar3->AllocatorInstance).Data;
    pIVar7 = (this->SymbolCache).Allocator;
    (this->SymbolCache).LastPage = pTVar14;
    (this->SymbolCache).FirstPage = pTVar6;
    pFVar12 = (FResolvedSymbol *)
              (**(code **)((longlong)*pIVar7 + 8))(pIVar7,(this->SymbolCache).PageSize << 5);
    ((this->SymbolCache).LastPage)->Items = pFVar12;
  }
  pTVar6 = (this->SymbolCache).LastPage;
  puVar1 = &(this->SymbolCache).TotalItemCount;
  *puVar1 = *puVar1 + 1;
  local_res18 = pTVar6->Items + pTVar6->Count;
  local_res18->Module = (wchar_t *)0x0;
  local_res18->Name = (wchar_t *)0x0;
  local_res18->File = (wchar_t *)0x0;
  local_res18->Line = 0;
  local_res18->Result = (atomic<TraceServices::ESymbolQueryResult>)0x0;
  local_res18->FilterStatus = (atomic<TraceServices::EResolvedSymbolFilterStatus>)0x0;
  puVar1 = &((this->SymbolCache).LastPage)->Count;
  *puVar1 = *puVar1 + 1;
  local_38 = &local_res8.Value;
  local_30 = &local_res18;
  TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
              *)&this->SymbolCacheLookup,&local_res8,(bool *)&local_38);
  LOCK();
  this->SymbolsDiscovered = (atomic<unsigned_int>)((int)this->SymbolsDiscovered + 1);
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->SymbolsLock);
  if (local_res18 == (FResolvedSymbol *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResolvedSymbol",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\ModuleProvider.cpp"
                       ,0xb5,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FResolvedSymbol *)(*pcVar8)();
      return pFVar12;
    }
  }
  pFVar12 = local_res18;
  ppFVar11 = local_res8.Value;
  this_00 = (this->Resolver).Ptr;
  lpCriticalSection = &this_00->SymbolsQueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this_00->CleanupTask).Reference != (FBaseGraphTask *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CleanupTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                         ,0x2a2,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FResolvedSymbol *)(*pcVar8)();
        return pFVar12;
      }
    }
    if (((atomic<unsigned_int>)((int)this_00->ModulesDiscovered - (int)this_00->ModulesFailed) ==
         this_00->ModulesLoaded) && (0x7ff < (uint)(this_00->ResolveQueue).ArrayNum)) {
      FSymslibResolver::DispatchQueuedAddresses(this_00);
    }
    FVar13 = (this_00->ResolveQueue).AllocatorInstance.SecondaryData;
    pTVar2 = &this_00->ResolveQueue;
    local_48 = ppFVar11;
    uStack_40 = pFVar12;
    if (FVar13 == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
      FVar13 = (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)pTVar2;
    }
    if (((ulonglong)FVar13 <= &local_48) &&
       (&local_48 <
        (undefined8 *)((longlong)(this_00->ResolveQueue).ArrayMax * 0x10 + (longlong)FVar13))) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FResolvedSymbol *)(*pcVar8)();
        return pFVar12;
      }
    }
    iVar10 = (this_00->ResolveQueue).ArrayNum;
    piVar4 = &(this_00->ResolveQueue).ArrayMax;
    if (iVar10 == *piVar4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_>
                         (0x810,&pTVar2->AllocatorInstance,piVar4);
    }
    (this_00->ResolveQueue).ArrayNum = iVar10 + 1;
    FVar13 = (this_00->ResolveQueue).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)0x0) {
      FVar13 = (ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>)pTVar2;
    }
    puVar5 = (undefined4 *)((longlong)FVar13 + (longlong)iVar10 * 0x10);
    *puVar5 = (undefined4)local_48;
    puVar5[1] = local_48._4_4_;
    puVar5[2] = (undefined4)uStack_40;
    puVar5[3] = uStack_40._4_4_;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return local_res18;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HasFinishedResolving @ 14d471c10

bool __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::HasFinishedResolving
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this)

{
  FDbgHelpResolver *pFVar1;
  
  pFVar1 = (this->Resolver).Ptr;
  if ((((pFVar1->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0) &&
     (((pFVar1->ResolveQueue).Tail)->NextNode == (TNode *)0x0)) {
    return true;
  }
  return false;
}

// HasFinishedResolving @ 14d471c40

bool __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::HasFinishedResolving
          (TModuleProvider<TraceServices::FPsymResolver> *this)

{
  FPsymResolver *pFVar1;
  
  pFVar1 = (this->Resolver).Ptr;
  if ((((pFVar1->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0) &&
     (((pFVar1->ResolveQueue).Tail)->NextNode == (TNode *)0x0)) {
    return true;
  }
  return false;
}

// HasFinishedResolving @ 14d471c70

bool __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::HasFinishedResolving
          (TModuleProvider<TraceServices::FSymslibResolver> *this)

{
  FBaseGraphTask *pFVar1;
  
  pFVar1 = (((this->Resolver).Ptr)->CleanupTask).Reference;
  if (pFVar1 != (FBaseGraphTask *)0x0) {
    return (bool)pFVar1->field_0xd0;
  }
  return false;
}

// LoadSymbolsForModuleUsingPath @ 14d477a50

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,ulong64 param_1,wchar_t *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FBaseGraphTask *pFVar7;
  ForAnyElementType _Src;
  TRefCountPtr<FBaseGraphTask> TVar8;
  TRefCountPtr<FBaseGraphTask> *pTVar9;
  FModule *pFVar10;
  wchar_t *in_R9;
  ulonglong uVar11;
  undefined8 *local_res8;
  FString local_88;
  undefined1 local_78 [16];
  FString local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  uVar5 = (this->Modules).TotalItemCount;
  uVar11 = 0;
  if (uVar5 != 0) {
    uVar6 = (this->Modules).PageSize;
    do {
      pFVar10 = (this->Modules).FirstPage[uVar11 / uVar6].Items + uVar11 % uVar6;
      if ((wchar_t *)pFVar10->Base == param_2) {
        if (pFVar10 != (FModule *)0x0) {
          ::FString::FString((FString *)local_78,in_R9);
          FPaths::ConvertRelativePathToFull(&local_88,(FString *)local_78);
          if ((TModuleProvider<TraceServices::FDbgHelpResolver> *)local_78._0_8_ !=
              (TModuleProvider<TraceServices::FDbgHelpResolver> *)0x0) {
            FMemory::Free((void *)local_78._0_8_);
          }
          _Src.Data = local_88.Data.AllocatorInstance.Data;
          if ((((this->Resolver).Ptr != (FDbgHelpResolver *)0x0) && (1 < local_88.Data.ArrayNum)) &&
             (pFVar10->Status != (atomic<TraceServices::EModuleStatus>)0x2)) {
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_78._0_8_ = this;
            local_78._8_8_ = pFVar10;
            if (local_88.Data.ArrayNum == 0) {
              local_68.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                         local_88.Data.ArrayNum,&local_68.Data.ArrayMax);
              memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,
                     (longlong)local_88.Data.ArrayNum * 2);
            }
            local_58[0] = (code *)0x0;
            local_30 = FMemory::Malloc(0x28,8);
            puVar1 = local_30 + 1;
            *local_30 = &
                        ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
            ;
            *puVar1 = local_78._0_8_;
            local_30[2] = local_78._8_8_;
            ::FString::FString((FString *)(local_30 + 3),&local_68);
            if (puVar1 != (undefined8 *)0x0) {
              local_58[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,void>
                            ::Call;
            }
            TVar8 = FFunctionGraphTask::CreateAndDispatchWhenReady
                              ((TUniqueFunction<void___cdecl(void)> *)&local_res8,
                               (TStatIdData *)local_58,
                               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                *)&TStatId::TStatId_NAME_None,MainQueue);
            pTVar9 = &this->LoadSymbolsTask;
            if ((FBaseGraphTask *)pTVar9 != TVar8.Reference) {
              pFVar7 = pTVar9->Reference;
                    /* WARNING: Load size is inaccurate */
              pTVar9->Reference = *TVar8.Reference;
              *(undefined8 *)TVar8.Reference = 0;
              if (pFVar7 != (FBaseGraphTask *)0x0) {
                LOCK();
                puVar2 = &pFVar7->field_0x30;
                iVar4 = *(int *)puVar2;
                *(int *)puVar2 = *(int *)puVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
                }
              }
            }
            if (local_res8 != (undefined8 *)0x0) {
              LOCK();
              piVar3 = (int *)(local_res8 + 6);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if ((iVar4 == 1) && (local_res8 != (undefined8 *)0x0)) {
                (**(code **)*local_res8)(local_res8,1);
              }
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            pFVar7 = pTVar9->Reference;
            *(FBaseGraphTask **)param_1 = pFVar7;
            if (pFVar7 != (FBaseGraphTask *)0x0) {
              LOCK();
              *(int *)&pFVar7->field_0x30 = *(int *)&pFVar7->field_0x30 + 1;
              UNLOCK();
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            goto LAB_14d477c96;
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
    } while (uVar11 < uVar5);
  }
  *(undefined8 *)param_1 = 0;
LAB_14d477c96:
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// LoadSymbolsForModuleUsingPath @ 14d477cd0

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath
          (TModuleProvider<TraceServices::FPsymResolver> *this,ulong64 param_1,wchar_t *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FBaseGraphTask *pFVar7;
  ForAnyElementType _Src;
  TRefCountPtr<FBaseGraphTask> TVar8;
  TRefCountPtr<FBaseGraphTask> *pTVar9;
  FModule *pFVar10;
  wchar_t *in_R9;
  ulonglong uVar11;
  undefined8 *local_res8;
  FString local_88;
  undefined1 local_78 [16];
  FString local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  uVar5 = (this->Modules).TotalItemCount;
  uVar11 = 0;
  if (uVar5 != 0) {
    uVar6 = (this->Modules).PageSize;
    do {
      pFVar10 = (this->Modules).FirstPage[uVar11 / uVar6].Items + uVar11 % uVar6;
      if ((wchar_t *)pFVar10->Base == param_2) {
        if (pFVar10 != (FModule *)0x0) {
          ::FString::FString((FString *)local_78,in_R9);
          FPaths::ConvertRelativePathToFull(&local_88,(FString *)local_78);
          if ((TModuleProvider<TraceServices::FPsymResolver> *)local_78._0_8_ !=
              (TModuleProvider<TraceServices::FPsymResolver> *)0x0) {
            FMemory::Free((void *)local_78._0_8_);
          }
          _Src.Data = local_88.Data.AllocatorInstance.Data;
          if ((((this->Resolver).Ptr != (FPsymResolver *)0x0) && (1 < local_88.Data.ArrayNum)) &&
             (pFVar10->Status != (atomic<TraceServices::EModuleStatus>)0x2)) {
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_78._0_8_ = this;
            local_78._8_8_ = pFVar10;
            if (local_88.Data.ArrayNum == 0) {
              local_68.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                         local_88.Data.ArrayNum,&local_68.Data.ArrayMax);
              memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,
                     (longlong)local_88.Data.ArrayNum * 2);
            }
            local_58[0] = (code *)0x0;
            local_30 = FMemory::Malloc(0x28,8);
            puVar1 = local_30 + 1;
            *local_30 = &
                        ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
            ;
            *puVar1 = local_78._0_8_;
            local_30[2] = local_78._8_8_;
            ::FString::FString((FString *)(local_30 + 3),&local_68);
            if (puVar1 != (undefined8 *)0x0) {
              local_58[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,void>
                            ::Call;
            }
            TVar8 = FFunctionGraphTask::CreateAndDispatchWhenReady
                              ((TUniqueFunction<void___cdecl(void)> *)&local_res8,
                               (TStatIdData *)local_58,
                               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                *)&TStatId::TStatId_NAME_None,MainQueue);
            pTVar9 = &this->LoadSymbolsTask;
            if ((FBaseGraphTask *)pTVar9 != TVar8.Reference) {
              pFVar7 = pTVar9->Reference;
                    /* WARNING: Load size is inaccurate */
              pTVar9->Reference = *TVar8.Reference;
              *(undefined8 *)TVar8.Reference = 0;
              if (pFVar7 != (FBaseGraphTask *)0x0) {
                LOCK();
                puVar2 = &pFVar7->field_0x30;
                iVar4 = *(int *)puVar2;
                *(int *)puVar2 = *(int *)puVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
                }
              }
            }
            if (local_res8 != (undefined8 *)0x0) {
              LOCK();
              piVar3 = (int *)(local_res8 + 6);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if ((iVar4 == 1) && (local_res8 != (undefined8 *)0x0)) {
                (**(code **)*local_res8)(local_res8,1);
              }
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            pFVar7 = pTVar9->Reference;
            *(FBaseGraphTask **)param_1 = pFVar7;
            if (pFVar7 != (FBaseGraphTask *)0x0) {
              LOCK();
              *(int *)&pFVar7->field_0x30 = *(int *)&pFVar7->field_0x30 + 1;
              UNLOCK();
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            goto LAB_14d477f16;
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
    } while (uVar11 < uVar5);
  }
  *(undefined8 *)param_1 = 0;
LAB_14d477f16:
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// LoadSymbolsForModuleUsingPath @ 14d477f50

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath
          (TModuleProvider<TraceServices::FSymslibResolver> *this,ulong64 param_1,wchar_t *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FBaseGraphTask *pFVar7;
  ForAnyElementType _Src;
  TRefCountPtr<FBaseGraphTask> TVar8;
  TRefCountPtr<FBaseGraphTask> *pTVar9;
  FModule *pFVar10;
  wchar_t *in_R9;
  ulonglong uVar11;
  undefined8 *local_res8;
  FString local_88;
  undefined1 local_78 [16];
  FString local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ModulesLock);
  uVar5 = (this->Modules).TotalItemCount;
  uVar11 = 0;
  if (uVar5 != 0) {
    uVar6 = (this->Modules).PageSize;
    do {
      pFVar10 = (this->Modules).FirstPage[uVar11 / uVar6].Items + uVar11 % uVar6;
      if ((wchar_t *)pFVar10->Base == param_2) {
        if (pFVar10 != (FModule *)0x0) {
          ::FString::FString((FString *)local_78,in_R9);
          FPaths::ConvertRelativePathToFull(&local_88,(FString *)local_78);
          if ((TModuleProvider<TraceServices::FSymslibResolver> *)local_78._0_8_ !=
              (TModuleProvider<TraceServices::FSymslibResolver> *)0x0) {
            FMemory::Free((void *)local_78._0_8_);
          }
          _Src.Data = local_88.Data.AllocatorInstance.Data;
          if ((((this->Resolver).Ptr != (FSymslibResolver *)0x0) && (1 < local_88.Data.ArrayNum)) &&
             (pFVar10->Status != (atomic<TraceServices::EModuleStatus>)0x2)) {
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_78._0_8_ = this;
            local_78._8_8_ = pFVar10;
            if (local_88.Data.ArrayNum == 0) {
              local_68.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                         local_88.Data.ArrayNum,&local_68.Data.ArrayMax);
              memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,
                     (longlong)local_88.Data.ArrayNum * 2);
            }
            local_58[0] = (code *)0x0;
            local_30 = FMemory::Malloc(0x28,8);
            puVar1 = local_30 + 1;
            *local_30 = &
                        ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
            ;
            *puVar1 = local_78._0_8_;
            local_30[2] = local_78._8_8_;
            ::FString::FString((FString *)(local_30 + 3),&local_68);
            if (puVar1 != (undefined8 *)0x0) {
              local_58[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,void>
                            ::Call;
            }
            TVar8 = FFunctionGraphTask::CreateAndDispatchWhenReady
                              ((TUniqueFunction<void___cdecl(void)> *)&local_res8,
                               (TStatIdData *)local_58,
                               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                *)&TStatId::TStatId_NAME_None,MainQueue);
            pTVar9 = &this->LoadSymbolsTask;
            if ((FBaseGraphTask *)pTVar9 != TVar8.Reference) {
              pFVar7 = pTVar9->Reference;
                    /* WARNING: Load size is inaccurate */
              pTVar9->Reference = *TVar8.Reference;
              *(undefined8 *)TVar8.Reference = 0;
              if (pFVar7 != (FBaseGraphTask *)0x0) {
                LOCK();
                puVar2 = &pFVar7->field_0x30;
                iVar4 = *(int *)puVar2;
                *(int *)puVar2 = *(int *)puVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
                }
              }
            }
            if (local_res8 != (undefined8 *)0x0) {
              LOCK();
              piVar3 = (int *)(local_res8 + 6);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if ((iVar4 == 1) && (local_res8 != (undefined8 *)0x0)) {
                (**(code **)*local_res8)(local_res8,1);
              }
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            pFVar7 = pTVar9->Reference;
            *(FBaseGraphTask **)param_1 = pFVar7;
            if (pFVar7 != (FBaseGraphTask *)0x0) {
              LOCK();
              *(int *)&pFVar7->field_0x30 = *(int *)&pFVar7->field_0x30 + 1;
              UNLOCK();
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            goto LAB_14d478196;
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
    } while (uVar11 < uVar5);
  }
  *(undefined8 *)param_1 = 0;
LAB_14d478196:
  ReleaseSRWLockShared((PSRWLOCK)&this->ModulesLock);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// LoadSymbolsFromCache @ 14d4781d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsFromCache
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,IAnalysisCache *param_1)

{
  ulong64 *puVar1;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  longlong *plVar4;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar5;
  ILinearAllocator *pIVar6;
  code *pcVar7;
  ulong64 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FSavedSymbol *pFVar12;
  longlong lVar13;
  FResolvedSymbol *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  FResolvedSymbol *local_res8;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_&&> local_res18;
  ulonglong local_b8;
  TModuleProvider<TraceServices::FDbgHelpResolver> *local_b0;
  FSavedSymbol *local_a8;
  FResolvedSymbol **local_a0;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TModuleProvider<TraceServices::FDbgHelpResolver> **local_80;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
  local_78;
  
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
  ::
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
            (&local_78,L"ModuleProvider.Symbols",param_1,0xffffffff);
  local_b8 = 0;
  if (*local_78.ElementCount != 0) {
    if ((*local_78.ElementCount == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < *ElementCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                           ,0x4a,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    do {
      uVar15 = (uint)(local_b8 >> 10);
      uVar10 = 0;
      if ((int)uVar15 < local_78.Pages.ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = *(FSavedSymbol **)
                 (local_78.Pages.AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
      if (pFVar12 == (FSavedSymbol *)0x0) {
        pFVar12 = TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
                  ::GetPage(&local_78,uVar15);
      }
      iVar11 = (this->Strings).Blocks.ArrayNum;
      pTVar2 = &(this->Strings).Blocks;
      uVar15 = (uint)local_b8 & 0x3ff;
      uVar10 = pFVar12[uVar15].ModuleOffset;
      local_res18.Value = (FResolvedSymbol **)(pFVar12 + uVar15);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
          iVar11 = (this->Strings).Blocks.ArrayNum;
        }
        pwVar18 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar18 = (wchar_t *)0x0;
      }
      uVar10 = *(uint *)((longlong)local_res18.Value + 0xc);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
          iVar11 = (this->Strings).Blocks.ArrayNum;
        }
        pwVar19 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar19 = (wchar_t *)0x0;
      }
      uVar10 = *(uint *)((longlong)local_res18.Value + 0x10);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
        }
        pwVar16 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar16 = (wchar_t *)0x0;
      }
      if (((pwVar18 == (wchar_t *)0x0) || (pwVar19 == (wchar_t *)0x0)) ||
         (pwVar16 == (wchar_t *)0x0)) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsFromCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      else {
        pTVar5 = (this->SymbolCache).LastPage;
        local_res8 = (FResolvedSymbol *)
                     CONCAT62(local_res8._2_6_,(short)*(uint *)((longlong)local_res18.Value + 0x14))
        ;
        if ((pTVar5 == (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0) ||
           (pTVar5->Count == (this->SymbolCache).PageSize)) {
          iVar11 = (this->SymbolCache).PagesArray.ArrayNum;
          piVar3 = &(this->SymbolCache).PagesArray.ArrayMax;
          if (iVar11 == *piVar3) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->SymbolCache).PagesArray.AllocatorInstance,piVar3);
            (this->SymbolCache).PagesArray.ArrayNum = iVar11;
          }
          pTVar17 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
                    ((this->SymbolCache).PagesArray.AllocatorInstance.Data + (longlong)iVar11 * 0x10
                    );
          (this->SymbolCache).PagesArray.ArrayNum = iVar11 + 1;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int>
                    (pTVar17,1);
          pTVar5 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
                   (this->SymbolCache).PagesArray.AllocatorInstance.Data;
          pIVar6 = (this->SymbolCache).Allocator;
          (this->SymbolCache).LastPage = pTVar17;
          (this->SymbolCache).FirstPage = pTVar5;
          pFVar14 = (FResolvedSymbol *)
                    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,(this->SymbolCache).PageSize << 5);
          ((this->SymbolCache).LastPage)->Items = pFVar14;
        }
        pTVar5 = (this->SymbolCache).LastPage;
        puVar1 = &(this->SymbolCache).TotalItemCount;
        *puVar1 = *puVar1 + 1;
        pFVar14 = pTVar5->Items + pTVar5->Count;
        pFVar14->Line = (ushort)local_res8;
        pFVar14->Module = pwVar18;
        pFVar14->Name = pwVar19;
        pFVar14->File = pwVar16;
        pFVar14->Result = (atomic<TraceServices::ESymbolQueryResult>)0x1;
        pFVar14->FilterStatus = (atomic<TraceServices::EResolvedSymbolFilterStatus>)0x0;
        puVar1 = &((this->SymbolCache).LastPage)->Count;
        *puVar1 = *puVar1 + 1;
        local_a0 = &local_res8;
        local_res8 = pFVar14;
        local_a8 = (FSavedSymbol *)local_res18.Value;
        TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_&&>_>
                  ((TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
                    *)&this->SymbolCacheLookup,&local_res18,(bool *)&local_a8);
      }
      local_b8 = local_b8 + 1;
    } while (local_b8 < *local_78.ElementCount);
  }
  uVar8 = (this->SymbolCache).TotalItemCount;
  this->NumCachedSymbols =
       *(int *)&(this->SymbolCacheLookup).field_0x8 - *(int *)&(this->SymbolCacheLookup).field_0x34;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsFromCache'::__l2::<lambda_1>,void,int>
             ::Call;
  local_80 = &local_b0;
  local_98.DataPtr = (void **)0x0;
  local_98.ArrayNum = 0;
  local_b0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)uVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_88,
             local_res8._0_1_,BackgroundPriority,&local_98);
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsFromCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                ::__l25::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_78.ResidentPages.AllocatorInstance.Data,
             local_78.ResidentPages.ArrayNum);
  if (local_78.ResidentPages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ResidentPages.AllocatorInstance.Data);
  }
  if (local_78.Pages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Pages.AllocatorInstance.Data);
  }
  return;
}

// LoadSymbolsFromCache @ 14d478660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsFromCache
          (TModuleProvider<TraceServices::FPsymResolver> *this,IAnalysisCache *param_1)

{
  ulong64 *puVar1;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  longlong *plVar4;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar5;
  ILinearAllocator *pIVar6;
  code *pcVar7;
  ulong64 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FSavedSymbol *pFVar12;
  longlong lVar13;
  FResolvedSymbol *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  FResolvedSymbol *local_res8;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_&&> local_res18;
  ulonglong local_b8;
  TModuleProvider<TraceServices::FPsymResolver> *local_b0;
  FSavedSymbol *local_a8;
  FResolvedSymbol **local_a0;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TModuleProvider<TraceServices::FPsymResolver> **local_80;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
  local_78;
  
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
  ::
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
            (&local_78,L"ModuleProvider.Symbols",param_1,0xffffffff);
  local_b8 = 0;
  if (*local_78.ElementCount != 0) {
    if ((*local_78.ElementCount == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < *ElementCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                           ,0x4a,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    do {
      uVar15 = (uint)(local_b8 >> 10);
      uVar10 = 0;
      if ((int)uVar15 < local_78.Pages.ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = *(FSavedSymbol **)
                 (local_78.Pages.AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
      if (pFVar12 == (FSavedSymbol *)0x0) {
        pFVar12 = TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
                  ::GetPage(&local_78,uVar15);
      }
      iVar11 = (this->Strings).Blocks.ArrayNum;
      pTVar2 = &(this->Strings).Blocks;
      uVar15 = (uint)local_b8 & 0x3ff;
      uVar10 = pFVar12[uVar15].ModuleOffset;
      local_res18.Value = (FResolvedSymbol **)(pFVar12 + uVar15);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
          iVar11 = (this->Strings).Blocks.ArrayNum;
        }
        pwVar18 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar18 = (wchar_t *)0x0;
      }
      uVar10 = *(uint *)((longlong)local_res18.Value + 0xc);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
          iVar11 = (this->Strings).Blocks.ArrayNum;
        }
        pwVar19 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar19 = (wchar_t *)0x0;
      }
      uVar10 = *(uint *)((longlong)local_res18.Value + 0x10);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
        }
        pwVar16 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar16 = (wchar_t *)0x0;
      }
      if (((pwVar18 == (wchar_t *)0x0) || (pwVar19 == (wchar_t *)0x0)) ||
         (pwVar16 == (wchar_t *)0x0)) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsFromCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      else {
        pTVar5 = (this->SymbolCache).LastPage;
        local_res8 = (FResolvedSymbol *)
                     CONCAT62(local_res8._2_6_,(short)*(uint *)((longlong)local_res18.Value + 0x14))
        ;
        if ((pTVar5 == (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0) ||
           (pTVar5->Count == (this->SymbolCache).PageSize)) {
          iVar11 = (this->SymbolCache).PagesArray.ArrayNum;
          piVar3 = &(this->SymbolCache).PagesArray.ArrayMax;
          if (iVar11 == *piVar3) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->SymbolCache).PagesArray.AllocatorInstance,piVar3);
            (this->SymbolCache).PagesArray.ArrayNum = iVar11;
          }
          pTVar17 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
                    ((this->SymbolCache).PagesArray.AllocatorInstance.Data + (longlong)iVar11 * 0x10
                    );
          (this->SymbolCache).PagesArray.ArrayNum = iVar11 + 1;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int>
                    (pTVar17,1);
          pTVar5 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
                   (this->SymbolCache).PagesArray.AllocatorInstance.Data;
          pIVar6 = (this->SymbolCache).Allocator;
          (this->SymbolCache).LastPage = pTVar17;
          (this->SymbolCache).FirstPage = pTVar5;
          pFVar14 = (FResolvedSymbol *)
                    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,(this->SymbolCache).PageSize << 5);
          ((this->SymbolCache).LastPage)->Items = pFVar14;
        }
        pTVar5 = (this->SymbolCache).LastPage;
        puVar1 = &(this->SymbolCache).TotalItemCount;
        *puVar1 = *puVar1 + 1;
        pFVar14 = pTVar5->Items + pTVar5->Count;
        pFVar14->Line = (ushort)local_res8;
        pFVar14->Module = pwVar18;
        pFVar14->Name = pwVar19;
        pFVar14->File = pwVar16;
        pFVar14->Result = (atomic<TraceServices::ESymbolQueryResult>)0x1;
        pFVar14->FilterStatus = (atomic<TraceServices::EResolvedSymbolFilterStatus>)0x0;
        puVar1 = &((this->SymbolCache).LastPage)->Count;
        *puVar1 = *puVar1 + 1;
        local_a0 = &local_res8;
        local_res8 = pFVar14;
        local_a8 = (FSavedSymbol *)local_res18.Value;
        TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_&&>_>
                  ((TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
                    *)&this->SymbolCacheLookup,&local_res18,(bool *)&local_a8);
      }
      local_b8 = local_b8 + 1;
    } while (local_b8 < *local_78.ElementCount);
  }
  uVar8 = (this->SymbolCache).TotalItemCount;
  this->NumCachedSymbols =
       *(int *)&(this->SymbolCacheLookup).field_0x8 - *(int *)&(this->SymbolCacheLookup).field_0x34;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsFromCache'::__l2::<lambda_1>,void,int>
             ::Call;
  local_80 = &local_b0;
  local_98.DataPtr = (void **)0x0;
  local_98.ArrayNum = 0;
  local_b0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)uVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_88,
             local_res8._0_1_,BackgroundPriority,&local_98);
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsFromCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                ::__l25::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_78.ResidentPages.AllocatorInstance.Data,
             local_78.ResidentPages.ArrayNum);
  if (local_78.ResidentPages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ResidentPages.AllocatorInstance.Data);
  }
  if (local_78.Pages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Pages.AllocatorInstance.Data);
  }
  return;
}

// LoadSymbolsFromCache @ 14d478af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsFromCache
          (TModuleProvider<TraceServices::FSymslibResolver> *this,IAnalysisCache *param_1)

{
  ulong64 *puVar1;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  longlong *plVar4;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar5;
  ILinearAllocator *pIVar6;
  code *pcVar7;
  ulong64 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FSavedSymbol *pFVar12;
  longlong lVar13;
  FResolvedSymbol *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  TPagedArrayPage<TraceServices::FResolvedSymbol> *pTVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  FResolvedSymbol *local_res8;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_&&> local_res18;
  ulonglong local_b8;
  TModuleProvider<TraceServices::FSymslibResolver> *local_b0;
  FSavedSymbol *local_a8;
  FResolvedSymbol **local_a0;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TModuleProvider<TraceServices::FSymslibResolver> **local_80;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
  local_78;
  
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
  ::
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
            (&local_78,L"ModuleProvider.Symbols",param_1,0xffffffff);
  local_b8 = 0;
  if (*local_78.ElementCount != 0) {
    if ((*local_78.ElementCount == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < *ElementCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\CachedPagedArray.h"
                           ,0x4a,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    do {
      uVar15 = (uint)(local_b8 >> 10);
      uVar10 = 0;
      if ((int)uVar15 < local_78.Pages.ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = *(FSavedSymbol **)
                 (local_78.Pages.AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
      if (pFVar12 == (FSavedSymbol *)0x0) {
        pFVar12 = TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
                  ::GetPage(&local_78,uVar15);
      }
      iVar11 = (this->Strings).Blocks.ArrayNum;
      pTVar2 = &(this->Strings).Blocks;
      uVar15 = (uint)local_b8 & 0x3ff;
      uVar10 = pFVar12[uVar15].ModuleOffset;
      local_res18.Value = (FResolvedSymbol **)(pFVar12 + uVar15);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
          iVar11 = (this->Strings).Blocks.ArrayNum;
        }
        pwVar18 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar18 = (wchar_t *)0x0;
      }
      uVar10 = *(uint *)((longlong)local_res18.Value + 0xc);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
          iVar11 = (this->Strings).Blocks.ArrayNum;
        }
        pwVar19 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar19 = (wchar_t *)0x0;
      }
      uVar10 = *(uint *)((longlong)local_res18.Value + 0x10);
      uVar15 = uVar10 >> 0xd;
      if ((int)uVar15 < iVar11) {
        plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar15 * 8);
        if (plVar4 == (longlong *)0x0) {
          lVar13 = 0;
        }
        else {
          if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          lVar13 = plVar4[1];
        }
        pwVar16 = (wchar_t *)((ulonglong)(uVar10 & 0x1fff) + lVar13);
      }
      else {
        pwVar16 = (wchar_t *)0x0;
      }
      if (((pwVar18 == (wchar_t *)0x0) || (pwVar19 == (wchar_t *)0x0)) ||
         (pwVar16 == (wchar_t *)0x0)) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsFromCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      else {
        pTVar5 = (this->SymbolCache).LastPage;
        local_res8 = (FResolvedSymbol *)
                     CONCAT62(local_res8._2_6_,(short)*(uint *)((longlong)local_res18.Value + 0x14))
        ;
        if ((pTVar5 == (TPagedArrayPage<TraceServices::FResolvedSymbol> *)0x0) ||
           (pTVar5->Count == (this->SymbolCache).PageSize)) {
          iVar11 = (this->SymbolCache).PagesArray.ArrayNum;
          piVar3 = &(this->SymbolCache).PagesArray.ArrayMax;
          if (iVar11 == *piVar3) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->SymbolCache).PagesArray.AllocatorInstance,piVar3);
            (this->SymbolCache).PagesArray.ArrayNum = iVar11;
          }
          pTVar17 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
                    ((this->SymbolCache).PagesArray.AllocatorInstance.Data + (longlong)iVar11 * 0x10
                    );
          (this->SymbolCache).PagesArray.ArrayNum = iVar11 + 1;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int>
                    (pTVar17,1);
          pTVar5 = (TPagedArrayPage<TraceServices::FResolvedSymbol> *)
                   (this->SymbolCache).PagesArray.AllocatorInstance.Data;
          pIVar6 = (this->SymbolCache).Allocator;
          (this->SymbolCache).LastPage = pTVar17;
          (this->SymbolCache).FirstPage = pTVar5;
          pFVar14 = (FResolvedSymbol *)
                    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,(this->SymbolCache).PageSize << 5);
          ((this->SymbolCache).LastPage)->Items = pFVar14;
        }
        pTVar5 = (this->SymbolCache).LastPage;
        puVar1 = &(this->SymbolCache).TotalItemCount;
        *puVar1 = *puVar1 + 1;
        pFVar14 = pTVar5->Items + pTVar5->Count;
        pFVar14->Line = (ushort)local_res8;
        pFVar14->Module = pwVar18;
        pFVar14->Name = pwVar19;
        pFVar14->File = pwVar16;
        pFVar14->Result = (atomic<TraceServices::ESymbolQueryResult>)0x1;
        pFVar14->FilterStatus = (atomic<TraceServices::EResolvedSymbolFilterStatus>)0x0;
        puVar1 = &((this->SymbolCache).LastPage)->Count;
        *puVar1 = *puVar1 + 1;
        local_a0 = &local_res8;
        local_res8 = pFVar14;
        local_a8 = (FSavedSymbol *)local_res18.Value;
        TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FResolvedSymbol_const_*_&&>_>
                  ((TSet<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>,FDefaultSetAllocator>
                    *)&this->SymbolCacheLookup,&local_res18,(bool *)&local_a8);
      }
      local_b8 = local_b8 + 1;
    } while (local_b8 < *local_78.ElementCount);
  }
  uVar8 = (this->SymbolCache).TotalItemCount;
  this->NumCachedSymbols =
       *(int *)&(this->SymbolCacheLookup).field_0x8 - *(int *)&(this->SymbolCacheLookup).field_0x34;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsFromCache'::__l2::<lambda_1>,void,int>
             ::Call;
  local_80 = &local_b0;
  local_98.DataPtr = (void **)0x0;
  local_98.ArrayNum = 0;
  local_b0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)uVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_88,
             local_res8._0_1_,BackgroundPriority,&local_98);
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsFromCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                ::__l25::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_78.ResidentPages.AllocatorInstance.Data,
             local_78.ResidentPages.ArrayNum);
  if (local_78.ResidentPages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ResidentPages.AllocatorInstance.Data);
  }
  if (local_78.Pages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Pages.AllocatorInstance.Data);
  }
  return;
}

// OnAnalysisComplete @ 14d47a690

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnAnalysisComplete
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this)

{
  ((this->Resolver).Ptr)->bDrainThenStop = true;
  return;
}

// OnAnalysisComplete @ 14d47a6b0

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnAnalysisComplete
          (TModuleProvider<TraceServices::FPsymResolver> *this)

{
  ((this->Resolver).Ptr)->bDrainThenStop = true;
  return;
}

// OnAnalysisComplete @ 14d47a6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnAnalysisComplete
          (TModuleProvider<TraceServices::FSymslibResolver> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  int *piVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int iVar4;
  FSymslibResolver *this_00;
  FBaseGraphTask *pFVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  undefined8 *local_res8;
  code *local_38 [2];
  undefined **local_28;
  FSymslibResolver *local_20;
  undefined8 local_10;
  
  this_00 = (this->Resolver).Ptr;
  lpCriticalSection = &this_00->SymbolsQueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSymslibResolver::DispatchQueuedAddresses(this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`TraceServices::FSymslibResolver::OnAnalysisComplete'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FSymslibResolver::OnAnalysisComplete'::__l2::<lambda_1>,void>
                  ::Call;
    local_10 = 0;
    local_20 = this_00;
    TVar6 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,MainQueue);
    pTVar3 = &this_00->CleanupTask;
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

// OnModuleLoad @ 14d47ad00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleLoad
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,TStringView<wchar_t> *param_1,
          ulong64 param_2,uint param_3,uchar *param_4,uint param_5)

{
  int *piVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  TPagedArrayPage<TraceServices::FModule> *pTVar4;
  ILinearAllocator *pIVar5;
  int iVar6;
  atomic<unsigned_int> aVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FModule *pFVar10;
  ulonglong uVar11;
  TPagedArrayPage<TraceServices::FModule> *pTVar12;
  ulonglong uVar13;
  TStringView<wchar_t> local_40;
  
  if (param_1->Size == 0) {
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    FPathViews::GetCleanFilename(&local_40,param_1);
    pwVar8 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_40);
    pwVar9 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))();
    AcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
    uVar13 = 0;
    if ((this->Modules).TotalItemCount != 0) {
      do {
        uVar3 = (this->Modules).PageSize;
        uVar11 = uVar13 % uVar3;
        pFVar10 = (this->Modules).FirstPage[uVar13 / uVar3].Items;
        if (((pFVar10[uVar11].Name == pwVar8) && (pFVar10[uVar11].Base == param_2)) &&
           (pFVar10[uVar11].Size == param_3)) {
          if (pFVar10[uVar11].bIsUnloaded == (atomic<bool>)0x0) {
            if (2 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                          ::__l50::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            }
          }
          else {
            if (4 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                          ::__l31::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            }
            LOCK();
            pFVar10[uVar11].bIsUnloaded = (atomic<bool>)0x0;
            UNLOCK();
          }
          goto LAB_14d47af8b;
        }
        if (((pFVar10[uVar11].bIsUnloaded == (atomic<bool>)0x0) &&
            (pFVar10[uVar11].Base < param_3 + param_2)) &&
           ((param_2 < pFVar10[uVar11].Base + (ulonglong)pFVar10[uVar11].Size &&
            (2 < (byte)LogTraceServices._0_1_)))) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                      ::__l70::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        uVar13 = (ulonglong)((int)uVar13 + 1);
      } while (uVar13 < (this->Modules).TotalItemCount);
    }
    pTVar4 = (this->Modules).LastPage;
    if ((pTVar4 == (TPagedArrayPage<TraceServices::FModule> *)0x0) ||
       (pTVar4->Count == (this->Modules).PageSize)) {
      iVar6 = (this->Modules).PagesArray.ArrayNum;
      piVar1 = &(this->Modules).PagesArray.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Modules).PagesArray.AllocatorInstance,piVar1);
      }
      (this->Modules).PagesArray.ArrayNum = iVar6 + 1;
      pTVar12 = (TPagedArrayPage<TraceServices::FModule> *)
                ((this->Modules).PagesArray.AllocatorInstance.Data + (longlong)iVar6 * 0x10);
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FModule>,int>(pTVar12,1);
      pTVar4 = (TPagedArrayPage<TraceServices::FModule> *)
               (this->Modules).PagesArray.AllocatorInstance.Data;
      pIVar5 = (this->Modules).Allocator;
      (this->Modules).LastPage = pTVar12;
      (this->Modules).FirstPage = pTVar4;
      pFVar10 = (FModule *)
                (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->Modules).PageSize << 6);
      ((this->Modules).LastPage)->Items = pFVar10;
    }
    pTVar4 = (this->Modules).LastPage;
    puVar2 = &(this->Modules).TotalItemCount;
    *puVar2 = *puVar2 + 1;
    pFVar10 = pTVar4->Items + pTVar4->Count;
    pFVar10->Name = pwVar8;
    pFVar10->FullName = pwVar9;
    pFVar10->Base = param_2;
    pFVar10->Size = param_3;
    pFVar10->bIsUnloaded = (atomic<bool>)0x0;
    pFVar10->Status = (atomic<TraceServices::EModuleStatus>)0x0;
    pFVar10->StatusMessage = (wchar_t *)0x0;
    (pFVar10->Stats).Discovered = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Cached = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Resolved = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Failed = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Available = (atomic<unsigned_int>)0x0;
    puVar2 = &((this->Modules).LastPage)->Count;
    *puVar2 = *puVar2 + 1;
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                  ::__l87::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    aVar7 = (atomic<unsigned_int>)GetNumCachedSymbolsFromModule(this,param_2,param_3);
    LOCK();
    (pFVar10->Stats).Cached = aVar7;
    UNLOCK();
    FDbgHelpResolver::QueueModuleLoad((this->Resolver).Ptr,param_4,param_5,pFVar10);
LAB_14d47af8b:
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  }
  return;
}

// OnModuleLoad @ 14d47b040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleLoad
          (TModuleProvider<TraceServices::FPsymResolver> *this,TStringView<wchar_t> *param_1,
          ulong64 param_2,uint param_3,uchar *param_4,uint param_5)

{
  int *piVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  TPagedArrayPage<TraceServices::FModule> *pTVar4;
  ILinearAllocator *pIVar5;
  int iVar6;
  atomic<unsigned_int> aVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FModule *pFVar10;
  ulonglong uVar11;
  TPagedArrayPage<TraceServices::FModule> *pTVar12;
  ulonglong uVar13;
  TStringView<wchar_t> local_40;
  
  if (param_1->Size == 0) {
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    FPathViews::GetCleanFilename(&local_40,param_1);
    pwVar8 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_40);
    pwVar9 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))();
    AcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
    uVar13 = 0;
    if ((this->Modules).TotalItemCount != 0) {
      do {
        uVar3 = (this->Modules).PageSize;
        uVar11 = uVar13 % uVar3;
        pFVar10 = (this->Modules).FirstPage[uVar13 / uVar3].Items;
        if (((pFVar10[uVar11].Name == pwVar8) && (pFVar10[uVar11].Base == param_2)) &&
           (pFVar10[uVar11].Size == param_3)) {
          if (pFVar10[uVar11].bIsUnloaded == (atomic<bool>)0x0) {
            if (2 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                          ::__l50::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            }
          }
          else {
            if (4 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                          ::__l31::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            }
            LOCK();
            pFVar10[uVar11].bIsUnloaded = (atomic<bool>)0x0;
            UNLOCK();
          }
          goto LAB_14d47b2cb;
        }
        if (((pFVar10[uVar11].bIsUnloaded == (atomic<bool>)0x0) &&
            (pFVar10[uVar11].Base < param_3 + param_2)) &&
           ((param_2 < pFVar10[uVar11].Base + (ulonglong)pFVar10[uVar11].Size &&
            (2 < (byte)LogTraceServices._0_1_)))) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                      ::__l70::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        uVar13 = (ulonglong)((int)uVar13 + 1);
      } while (uVar13 < (this->Modules).TotalItemCount);
    }
    pTVar4 = (this->Modules).LastPage;
    if ((pTVar4 == (TPagedArrayPage<TraceServices::FModule> *)0x0) ||
       (pTVar4->Count == (this->Modules).PageSize)) {
      iVar6 = (this->Modules).PagesArray.ArrayNum;
      piVar1 = &(this->Modules).PagesArray.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Modules).PagesArray.AllocatorInstance,piVar1);
      }
      (this->Modules).PagesArray.ArrayNum = iVar6 + 1;
      pTVar12 = (TPagedArrayPage<TraceServices::FModule> *)
                ((this->Modules).PagesArray.AllocatorInstance.Data + (longlong)iVar6 * 0x10);
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FModule>,int>(pTVar12,1);
      pTVar4 = (TPagedArrayPage<TraceServices::FModule> *)
               (this->Modules).PagesArray.AllocatorInstance.Data;
      pIVar5 = (this->Modules).Allocator;
      (this->Modules).LastPage = pTVar12;
      (this->Modules).FirstPage = pTVar4;
      pFVar10 = (FModule *)
                (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->Modules).PageSize << 6);
      ((this->Modules).LastPage)->Items = pFVar10;
    }
    pTVar4 = (this->Modules).LastPage;
    puVar2 = &(this->Modules).TotalItemCount;
    *puVar2 = *puVar2 + 1;
    pFVar10 = pTVar4->Items + pTVar4->Count;
    pFVar10->Name = pwVar8;
    pFVar10->FullName = pwVar9;
    pFVar10->Base = param_2;
    pFVar10->Size = param_3;
    pFVar10->bIsUnloaded = (atomic<bool>)0x0;
    pFVar10->Status = (atomic<TraceServices::EModuleStatus>)0x0;
    pFVar10->StatusMessage = (wchar_t *)0x0;
    (pFVar10->Stats).Discovered = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Cached = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Resolved = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Failed = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Available = (atomic<unsigned_int>)0x0;
    puVar2 = &((this->Modules).LastPage)->Count;
    *puVar2 = *puVar2 + 1;
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                  ::__l87::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    aVar7 = (atomic<unsigned_int>)GetNumCachedSymbolsFromModule(this,param_2,param_3);
    LOCK();
    (pFVar10->Stats).Cached = aVar7;
    UNLOCK();
    FPsymResolver::QueueModuleLoad((this->Resolver).Ptr,param_4,param_5,pFVar10);
LAB_14d47b2cb:
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  }
  return;
}

// OnModuleLoad @ 14d47b380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleLoad
          (TModuleProvider<TraceServices::FSymslibResolver> *this,TStringView<wchar_t> *param_1,
          ulong64 param_2,uint param_3,uchar *param_4,uint param_5)

{
  int *piVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  TPagedArrayPage<TraceServices::FModule> *pTVar4;
  ILinearAllocator *pIVar5;
  int iVar6;
  atomic<unsigned_int> aVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FModule *pFVar10;
  ulonglong uVar11;
  TPagedArrayPage<TraceServices::FModule> *pTVar12;
  ulonglong uVar13;
  TStringView<wchar_t> local_40;
  
  if (param_1->Size == 0) {
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    FPathViews::GetCleanFilename(&local_40,param_1);
    pwVar8 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_40);
    pwVar9 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))();
    AcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
    uVar13 = 0;
    if ((this->Modules).TotalItemCount != 0) {
      do {
        uVar3 = (this->Modules).PageSize;
        uVar11 = uVar13 % uVar3;
        pFVar10 = (this->Modules).FirstPage[uVar13 / uVar3].Items;
        if (((pFVar10[uVar11].Name == pwVar8) && (pFVar10[uVar11].Base == param_2)) &&
           (pFVar10[uVar11].Size == param_3)) {
          if (pFVar10[uVar11].bIsUnloaded == (atomic<bool>)0x0) {
            if (2 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                          ::__l50::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            }
          }
          else {
            if (4 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                          ::__l31::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            }
            LOCK();
            pFVar10[uVar11].bIsUnloaded = (atomic<bool>)0x0;
            UNLOCK();
          }
          goto LAB_14d47b60b;
        }
        if (((pFVar10[uVar11].bIsUnloaded == (atomic<bool>)0x0) &&
            (pFVar10[uVar11].Base < param_3 + param_2)) &&
           ((param_2 < pFVar10[uVar11].Base + (ulonglong)pFVar10[uVar11].Size &&
            (2 < (byte)LogTraceServices._0_1_)))) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                      ::__l70::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        uVar13 = (ulonglong)((int)uVar13 + 1);
      } while (uVar13 < (this->Modules).TotalItemCount);
    }
    pTVar4 = (this->Modules).LastPage;
    if ((pTVar4 == (TPagedArrayPage<TraceServices::FModule> *)0x0) ||
       (pTVar4->Count == (this->Modules).PageSize)) {
      iVar6 = (this->Modules).PagesArray.ArrayNum;
      piVar1 = &(this->Modules).PagesArray.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Modules).PagesArray.AllocatorInstance,piVar1);
      }
      (this->Modules).PagesArray.ArrayNum = iVar6 + 1;
      pTVar12 = (TPagedArrayPage<TraceServices::FModule> *)
                ((this->Modules).PagesArray.AllocatorInstance.Data + (longlong)iVar6 * 0x10);
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FModule>,int>(pTVar12,1);
      pTVar4 = (TPagedArrayPage<TraceServices::FModule> *)
               (this->Modules).PagesArray.AllocatorInstance.Data;
      pIVar5 = (this->Modules).Allocator;
      (this->Modules).LastPage = pTVar12;
      (this->Modules).FirstPage = pTVar4;
      pFVar10 = (FModule *)
                (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->Modules).PageSize << 6);
      ((this->Modules).LastPage)->Items = pFVar10;
    }
    pTVar4 = (this->Modules).LastPage;
    puVar2 = &(this->Modules).TotalItemCount;
    *puVar2 = *puVar2 + 1;
    pFVar10 = pTVar4->Items + pTVar4->Count;
    pFVar10->Name = pwVar8;
    pFVar10->FullName = pwVar9;
    pFVar10->Base = param_2;
    pFVar10->Size = param_3;
    pFVar10->bIsUnloaded = (atomic<bool>)0x0;
    pFVar10->Status = (atomic<TraceServices::EModuleStatus>)0x0;
    pFVar10->StatusMessage = (wchar_t *)0x0;
    (pFVar10->Stats).Discovered = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Cached = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Resolved = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Failed = (atomic<unsigned_int>)0x0;
    (pFVar10->Stats).Available = (atomic<unsigned_int>)0x0;
    puVar2 = &((this->Modules).LastPage)->Count;
    *puVar2 = *puVar2 + 1;
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleLoad(TStringView<wchar_t>_const&___ptr64,unsigned___int64,unsigned_int,unsigned_char_const*___ptr64,unsigned_int)___ptr64'
                  ::__l87::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    aVar7 = (atomic<unsigned_int>)GetNumCachedSymbolsFromModule(this,param_2,param_3);
    LOCK();
    (pFVar10->Stats).Cached = aVar7;
    UNLOCK();
    FSymslibResolver::QueueModuleLoad((this->Resolver).Ptr,param_4,param_5,pFVar10);
LAB_14d47b60b:
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  }
  return;
}

// OnModuleUnload @ 14d47b6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleUnload
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,ulong64 param_1)

{
  ulonglong uVar1;
  FModule *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  uVar4 = 0;
  if ((this->Modules).TotalItemCount != 0) {
    do {
      uVar1 = (this->Modules).PageSize;
      uVar3 = uVar4 % uVar1;
      pFVar2 = (this->Modules).FirstPage[uVar4 / uVar1].Items;
      if ((pFVar2[uVar3].Base == param_1) && (pFVar2[uVar3].bIsUnloaded == (atomic<bool>)0x0)) {
        LOCK();
        pFVar2[uVar3].bIsUnloaded = (atomic<bool>)0x1;
        UNLOCK();
        if (4 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleUnload(unsigned___int64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        goto LAB_14d47b745;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < (this->Modules).TotalItemCount);
  }
  if (2 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::OnModuleUnload(unsigned___int64)___ptr64'
                ::__l25::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
LAB_14d47b745:
                    /* WARNING: Could not recover jumptable at 0x00014d47b758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  return;
}

// OnModuleUnload @ 14d47b7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleUnload
          (TModuleProvider<TraceServices::FPsymResolver> *this,ulong64 param_1)

{
  ulonglong uVar1;
  FModule *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  uVar4 = 0;
  if ((this->Modules).TotalItemCount != 0) {
    do {
      uVar1 = (this->Modules).PageSize;
      uVar3 = uVar4 % uVar1;
      pFVar2 = (this->Modules).FirstPage[uVar4 / uVar1].Items;
      if ((pFVar2[uVar3].Base == param_1) && (pFVar2[uVar3].bIsUnloaded == (atomic<bool>)0x0)) {
        LOCK();
        pFVar2[uVar3].bIsUnloaded = (atomic<bool>)0x1;
        UNLOCK();
        if (4 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleUnload(unsigned___int64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        goto LAB_14d47b825;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < (this->Modules).TotalItemCount);
  }
  if (2 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::OnModuleUnload(unsigned___int64)___ptr64'
                ::__l25::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
LAB_14d47b825:
                    /* WARNING: Could not recover jumptable at 0x00014d47b838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  return;
}

// OnModuleUnload @ 14d47b880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleUnload
          (TModuleProvider<TraceServices::FSymslibResolver> *this,ulong64 param_1)

{
  ulonglong uVar1;
  FModule *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  uVar4 = 0;
  if ((this->Modules).TotalItemCount != 0) {
    do {
      uVar1 = (this->Modules).PageSize;
      uVar3 = uVar4 % uVar1;
      pFVar2 = (this->Modules).FirstPage[uVar4 / uVar1].Items;
      if ((pFVar2[uVar3].Base == param_1) && (pFVar2[uVar3].bIsUnloaded == (atomic<bool>)0x0)) {
        LOCK();
        pFVar2[uVar3].bIsUnloaded = (atomic<bool>)0x1;
        UNLOCK();
        if (4 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleUnload(unsigned___int64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        goto LAB_14d47b905;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < (this->Modules).TotalItemCount);
  }
  if (2 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::OnModuleUnload(unsigned___int64)___ptr64'
                ::__l25::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
LAB_14d47b905:
                    /* WARNING: Could not recover jumptable at 0x00014d47b918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ModulesLock);
  return;
}

// SaveSymbolsToCache @ 14d488cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::SaveSymbolsToCache
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,IAnalysisCache *param_1)

{
  TCachedStringStore<wchar_t> *this_00;
  ushort uVar1;
  uint uVar2;
  ulong64 uVar3;
  longlong lVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  size_t sVar9;
  TTuple<unsigned___int64,wchar_t_const_*> *pTVar10;
  FSavedSymbol *pFVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  uint uVar16;
  FResolvedSymbol *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStack_168 [32];
  <lambda_1> local_148;
  int local_144;
  undefined1 local_140 [16];
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  uint local_120;
  TModuleProvider<TraceServices::FDbgHelpResolver> *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
  local_c8;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar15 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar16 = *(int *)&(this->SymbolCacheLookup).field_0x8 -
           *(int *)&(this->SymbolCacheLookup).field_0x34;
  local_118 = this;
  if (uVar16 == 0) goto LAB_14d488f9b;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar16 <= (int)local_40)) goto LAB_14d488f9b;
  local_40 = uVar16;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar16 != 0) {
    uVar19 = uVar16;
    if (uVar16 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14d488dc0;
      }
    }
    else {
LAB_14d488dc0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar19,4);
    }
    if (0 < (int)uVar16) {
      uVar21 = (ulonglong)uVar16;
      uVar20 = uVar15;
      do {
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar7 = uVar20 & (longlong)(int)uVar16 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar14.Data + uVar7 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_40 != 0) {
    local_140._8_8_ = local_88 + 0x10;
    local_140._0_8_ = &DAT_100000000;
    uStack_12c = 0;
    uStack_128 = 0;
    if (local_60 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_68;
      }
      uVar16 = *(uint *)FVar22;
      uVar20 = uVar15;
      while (uVar16 == 0) {
        uStack_128 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_128;
        iVar12 = (int)uVar15;
        uVar16 = iVar12 + 1;
        uVar15 = (ulonglong)uVar16;
        local_140._4_4_ = (undefined4)((ulonglong)local_140._0_8_ >> 0x20);
        local_140._0_4_ = uVar16;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14d488ece;
        uVar16 = ((uint *)((longlong)FVar22 + 4))[iVar12];
      }
      local_140._4_4_ = -uVar16 & uVar16;
      uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_12c = (int)lVar4 + -1 + uStack_128;
      uVar15 = (ulonglong)uStack_12c;
      if ((int)local_60 < (int)uStack_12c) {
LAB_14d488ece:
        uVar15 = (ulonglong)local_60;
        uStack_12c = local_60;
      }
    }
    local_130 = 0xffffffff;
    local_110 = (longlong *)local_88;
    local_108.CurrentBitIndex = uStack_12c;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_124;
    local_108.BaseBitIndex = uStack_128;
    local_108._padding_ = local_140._0_8_;
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140._8_8_;
    if ((int)uVar15 < (int)local_60) {
      do {
        iVar12 = (int)uVar15;
        lVar4 = *local_110 + (longlong)iVar12 * 0x18;
        uVar15 = *(ulonglong *)(*local_110 + (longlong)iVar12 * 0x18);
        uVar16 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = (uVar16 >> 0x10 ^ uVar16) & local_40 - 1;
        *(uint *)(lVar4 + 0x14) = uVar16;
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar15 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(FVar14.Data + uVar15 * 4);
        *(int *)(FVar14.Data + uVar15 * 4) = iVar12;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar15 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14d488f9b:
  Algo::
  Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::SaveSymbolsToCache_::__l2::<lambda_1>_>
            (&this->SymbolCacheLookup,
             (TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>
              *)local_88,local_148);
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
  ::
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
            (&local_c8,L"ModuleProvider.Symbols",param_1,0xffffffff);
  local_144 = 0;
  local_120 = (uint)*local_c8.ElementCount;
  uVar16 = (uint)(this->SymbolCache).TotalItemCount;
  if (local_120 < uVar16) {
    uVar20 = (ulonglong)local_120;
    uVar15 = (ulonglong)(uVar16 - local_120);
    do {
      pFVar23 = (FScriptContainerElement *)0x0;
      uVar21 = (this->SymbolCache).PageSize;
      pFVar17 = (this->SymbolCache).FirstPage[uVar20 / uVar21].Items + uVar20 % uVar21;
      if (pFVar17->Result == (atomic<TraceServices::ESymbolQueryResult>)0x1) {
        uVar16 = ((uint)((ulonglong)pFVar17 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar17 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        pFVar8 = pFVar23;
        if (local_88._8_4_ != local_54) {
          FVar14.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_48.Data;
          }
          iVar12 = *(int *)(FVar14.Data + (ulonglong)(local_40 - 1 & (uVar16 >> 0x10 ^ uVar16)) * 4)
          ;
          while ((pFVar8 = pFVar23, iVar12 != -1 &&
                 (pFVar8 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar12 * 0x18),
                 *(FResolvedSymbol **)(local_88._0_8_ + (longlong)iVar12 * 0x18) != pFVar17))) {
            iVar12 = *(int *)((FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar12 * 0x18)
                             + 0x10);
          }
        }
        local_e8.DataPtr = pFVar17->Module;
        this_00 = &this->Strings;
        iVar12 = 0;
        pFVar18 = pFVar8 + 8;
        if (pFVar8 == (FScriptContainerElement *)0x0) {
          pFVar18 = pFVar23;
        }
        if (local_e8.DataPtr != (wchar_t *)0x0) {
          sVar9 = wcslen(local_e8.DataPtr);
          iVar12 = (int)sVar9;
        }
        local_e8.Size = iVar12;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal(this_00,&local_e8);
        local_d8.DataPtr = pFVar17->Name;
        uVar16 = *(uint *)pTVar10;
        iVar12 = 0;
        if (local_d8.DataPtr != (wchar_t *)0x0) {
          sVar9 = wcslen(local_d8.DataPtr);
          iVar12 = (int)sVar9;
        }
        local_d8.Size = iVar12;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal(this_00,&local_d8);
        local_140._0_8_ = pFVar17->File;
        uVar19 = *(uint *)pTVar10;
        uVar6 = 0;
        if ((wchar_t *)local_140._0_8_ != (wchar_t *)0x0) {
          sVar9 = wcslen((wchar_t *)local_140._0_8_);
          uVar6 = (undefined4)sVar9;
        }
        local_140._8_4_ = uVar6;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal
                            (this_00,(TStringView<wchar_t> *)local_140);
        uVar3 = *(ulong64 *)pFVar18;
        uVar1 = pFVar17->Line;
        uVar2 = *(uint *)pTVar10;
        pFVar11 = TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::FSavedSymbol,1024>
                  ::GetPageForNextItem(&local_c8);
        uVar5 = *local_c8.ElementCount;
        *local_c8.ElementCount = *local_c8.ElementCount + 1;
        uVar13 = (uint)uVar5 & 0x3ff;
        pFVar11[uVar13].Address = uVar3;
        pFVar11[uVar13].ModuleOffset = uVar16;
        pFVar11[uVar13].NameOffset = uVar19;
        pFVar11[uVar13].FileOffset = uVar2;
        pFVar11[uVar13].Line = (uint)uVar1;
        local_144 = local_144 + 1;
        this = local_118;
      }
      uVar20 = uVar20 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::SaveSymbolsToCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_c8.ResidentPages.AllocatorInstance.Data,
             local_c8.ResidentPages.ArrayNum);
  if (local_c8.ResidentPages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ResidentPages.AllocatorInstance.Data);
  }
  if (local_c8.Pages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Pages.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// SaveSymbolsToCache @ 14d489240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::SaveSymbolsToCache
          (TModuleProvider<TraceServices::FPsymResolver> *this,IAnalysisCache *param_1)

{
  TCachedStringStore<wchar_t> *this_00;
  ushort uVar1;
  uint uVar2;
  ulong64 uVar3;
  longlong lVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  size_t sVar9;
  TTuple<unsigned___int64,wchar_t_const_*> *pTVar10;
  FSavedSymbol *pFVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  uint uVar16;
  FResolvedSymbol *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStack_168 [32];
  <lambda_1> local_148;
  int local_144;
  undefined1 local_140 [16];
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  uint local_120;
  TModuleProvider<TraceServices::FPsymResolver> *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
  local_c8;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar15 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar16 = *(int *)&(this->SymbolCacheLookup).field_0x8 -
           *(int *)&(this->SymbolCacheLookup).field_0x34;
  local_118 = this;
  if (uVar16 == 0) goto LAB_14d48950b;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar16 <= (int)local_40)) goto LAB_14d48950b;
  local_40 = uVar16;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar16 != 0) {
    uVar19 = uVar16;
    if (uVar16 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14d489330;
      }
    }
    else {
LAB_14d489330:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar19,4);
    }
    if (0 < (int)uVar16) {
      uVar21 = (ulonglong)uVar16;
      uVar20 = uVar15;
      do {
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar7 = uVar20 & (longlong)(int)uVar16 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar14.Data + uVar7 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_40 != 0) {
    local_140._8_8_ = local_88 + 0x10;
    local_140._0_8_ = &DAT_100000000;
    uStack_12c = 0;
    uStack_128 = 0;
    if (local_60 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_68;
      }
      uVar16 = *(uint *)FVar22;
      uVar20 = uVar15;
      while (uVar16 == 0) {
        uStack_128 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_128;
        iVar12 = (int)uVar15;
        uVar16 = iVar12 + 1;
        uVar15 = (ulonglong)uVar16;
        local_140._4_4_ = (undefined4)((ulonglong)local_140._0_8_ >> 0x20);
        local_140._0_4_ = uVar16;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14d48943e;
        uVar16 = ((uint *)((longlong)FVar22 + 4))[iVar12];
      }
      local_140._4_4_ = -uVar16 & uVar16;
      uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_12c = (int)lVar4 + -1 + uStack_128;
      uVar15 = (ulonglong)uStack_12c;
      if ((int)local_60 < (int)uStack_12c) {
LAB_14d48943e:
        uVar15 = (ulonglong)local_60;
        uStack_12c = local_60;
      }
    }
    local_130 = 0xffffffff;
    local_110 = (longlong *)local_88;
    local_108.CurrentBitIndex = uStack_12c;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_124;
    local_108.BaseBitIndex = uStack_128;
    local_108._padding_ = local_140._0_8_;
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140._8_8_;
    if ((int)uVar15 < (int)local_60) {
      do {
        iVar12 = (int)uVar15;
        lVar4 = *local_110 + (longlong)iVar12 * 0x18;
        uVar15 = *(ulonglong *)(*local_110 + (longlong)iVar12 * 0x18);
        uVar16 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = (uVar16 >> 0x10 ^ uVar16) & local_40 - 1;
        *(uint *)(lVar4 + 0x14) = uVar16;
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar15 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(FVar14.Data + uVar15 * 4);
        *(int *)(FVar14.Data + uVar15 * 4) = iVar12;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar15 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14d48950b:
  Algo::
  Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::SaveSymbolsToCache_::__l2::<lambda_1>_>
            (&this->SymbolCacheLookup,
             (TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>
              *)local_88,local_148);
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
  ::
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
            (&local_c8,L"ModuleProvider.Symbols",param_1,0xffffffff);
  local_144 = 0;
  local_120 = (uint)*local_c8.ElementCount;
  uVar16 = (uint)(this->SymbolCache).TotalItemCount;
  if (local_120 < uVar16) {
    uVar20 = (ulonglong)local_120;
    uVar15 = (ulonglong)(uVar16 - local_120);
    do {
      pFVar23 = (FScriptContainerElement *)0x0;
      uVar21 = (this->SymbolCache).PageSize;
      pFVar17 = (this->SymbolCache).FirstPage[uVar20 / uVar21].Items + uVar20 % uVar21;
      if (pFVar17->Result == (atomic<TraceServices::ESymbolQueryResult>)0x1) {
        uVar16 = ((uint)((ulonglong)pFVar17 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar17 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        pFVar8 = pFVar23;
        if (local_88._8_4_ != local_54) {
          FVar14.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_48.Data;
          }
          iVar12 = *(int *)(FVar14.Data + (ulonglong)(local_40 - 1 & (uVar16 >> 0x10 ^ uVar16)) * 4)
          ;
          while ((pFVar8 = pFVar23, iVar12 != -1 &&
                 (pFVar8 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar12 * 0x18),
                 *(FResolvedSymbol **)(local_88._0_8_ + (longlong)iVar12 * 0x18) != pFVar17))) {
            iVar12 = *(int *)((FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar12 * 0x18)
                             + 0x10);
          }
        }
        local_e8.DataPtr = pFVar17->Module;
        this_00 = &this->Strings;
        iVar12 = 0;
        pFVar18 = pFVar8 + 8;
        if (pFVar8 == (FScriptContainerElement *)0x0) {
          pFVar18 = pFVar23;
        }
        if (local_e8.DataPtr != (wchar_t *)0x0) {
          sVar9 = wcslen(local_e8.DataPtr);
          iVar12 = (int)sVar9;
        }
        local_e8.Size = iVar12;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal(this_00,&local_e8);
        local_d8.DataPtr = pFVar17->Name;
        uVar16 = *(uint *)pTVar10;
        iVar12 = 0;
        if (local_d8.DataPtr != (wchar_t *)0x0) {
          sVar9 = wcslen(local_d8.DataPtr);
          iVar12 = (int)sVar9;
        }
        local_d8.Size = iVar12;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal(this_00,&local_d8);
        local_140._0_8_ = pFVar17->File;
        uVar19 = *(uint *)pTVar10;
        uVar6 = 0;
        if ((wchar_t *)local_140._0_8_ != (wchar_t *)0x0) {
          sVar9 = wcslen((wchar_t *)local_140._0_8_);
          uVar6 = (undefined4)sVar9;
        }
        local_140._8_4_ = uVar6;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal
                            (this_00,(TStringView<wchar_t> *)local_140);
        uVar3 = *(ulong64 *)pFVar18;
        uVar1 = pFVar17->Line;
        uVar2 = *(uint *)pTVar10;
        pFVar11 = TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FPsymResolver>::FSavedSymbol,1024>
                  ::GetPageForNextItem(&local_c8);
        uVar5 = *local_c8.ElementCount;
        *local_c8.ElementCount = *local_c8.ElementCount + 1;
        uVar13 = (uint)uVar5 & 0x3ff;
        pFVar11[uVar13].Address = uVar3;
        pFVar11[uVar13].ModuleOffset = uVar16;
        pFVar11[uVar13].NameOffset = uVar19;
        pFVar11[uVar13].FileOffset = uVar2;
        pFVar11[uVar13].Line = (uint)uVar1;
        local_144 = local_144 + 1;
        this = local_118;
      }
      uVar20 = uVar20 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::SaveSymbolsToCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_c8.ResidentPages.AllocatorInstance.Data,
             local_c8.ResidentPages.ArrayNum);
  if (local_c8.ResidentPages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ResidentPages.AllocatorInstance.Data);
  }
  if (local_c8.Pages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Pages.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// SaveSymbolsToCache @ 14d4897b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::SaveSymbolsToCache
          (TModuleProvider<TraceServices::FSymslibResolver> *this,IAnalysisCache *param_1)

{
  TCachedStringStore<wchar_t> *this_00;
  ushort uVar1;
  uint uVar2;
  ulong64 uVar3;
  longlong lVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  size_t sVar9;
  TTuple<unsigned___int64,wchar_t_const_*> *pTVar10;
  FSavedSymbol *pFVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  uint uVar16;
  FResolvedSymbol *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStack_168 [32];
  <lambda_1> local_148;
  int local_144;
  undefined1 local_140 [16];
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  uint local_120;
  TModuleProvider<TraceServices::FSymslibResolver> *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
  local_c8;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar15 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar16 = *(int *)&(this->SymbolCacheLookup).field_0x8 -
           *(int *)&(this->SymbolCacheLookup).field_0x34;
  local_118 = this;
  if (uVar16 == 0) goto LAB_14d489a7b;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar16 <= (int)local_40)) goto LAB_14d489a7b;
  local_40 = uVar16;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar16 != 0) {
    uVar19 = uVar16;
    if (uVar16 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14d4898a0;
      }
    }
    else {
LAB_14d4898a0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar19,4);
    }
    if (0 < (int)uVar16) {
      uVar21 = (ulonglong)uVar16;
      uVar20 = uVar15;
      do {
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar7 = uVar20 & (longlong)(int)uVar16 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar14.Data + uVar7 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_40 != 0) {
    local_140._8_8_ = local_88 + 0x10;
    local_140._0_8_ = &DAT_100000000;
    uStack_12c = 0;
    uStack_128 = 0;
    if (local_60 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_68;
      }
      uVar16 = *(uint *)FVar22;
      uVar20 = uVar15;
      while (uVar16 == 0) {
        uStack_128 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_128;
        iVar12 = (int)uVar15;
        uVar16 = iVar12 + 1;
        uVar15 = (ulonglong)uVar16;
        local_140._4_4_ = (undefined4)((ulonglong)local_140._0_8_ >> 0x20);
        local_140._0_4_ = uVar16;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14d4899ae;
        uVar16 = ((uint *)((longlong)FVar22 + 4))[iVar12];
      }
      local_140._4_4_ = -uVar16 & uVar16;
      uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_12c = (int)lVar4 + -1 + uStack_128;
      uVar15 = (ulonglong)uStack_12c;
      if ((int)local_60 < (int)uStack_12c) {
LAB_14d4899ae:
        uVar15 = (ulonglong)local_60;
        uStack_12c = local_60;
      }
    }
    local_130 = 0xffffffff;
    local_110 = (longlong *)local_88;
    local_108.CurrentBitIndex = uStack_12c;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_124;
    local_108.BaseBitIndex = uStack_128;
    local_108._padding_ = local_140._0_8_;
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140._8_8_;
    if ((int)uVar15 < (int)local_60) {
      do {
        iVar12 = (int)uVar15;
        lVar4 = *local_110 + (longlong)iVar12 * 0x18;
        uVar15 = *(ulonglong *)(*local_110 + (longlong)iVar12 * 0x18);
        uVar16 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = (uVar16 >> 0x10 ^ uVar16) & local_40 - 1;
        *(uint *)(lVar4 + 0x14) = uVar16;
        FVar14.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_48.Data;
        }
        uVar15 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(FVar14.Data + uVar15 * 4);
        *(int *)(FVar14.Data + uVar15 * 4) = iVar12;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar15 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14d489a7b:
  Algo::
  Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::SaveSymbolsToCache_::__l2::<lambda_1>_>
            (&this->SymbolCacheLookup,
             (TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>
              *)local_88,local_148);
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
  ::
  TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
            (&local_c8,L"ModuleProvider.Symbols",param_1,0xffffffff);
  local_144 = 0;
  local_120 = (uint)*local_c8.ElementCount;
  uVar16 = (uint)(this->SymbolCache).TotalItemCount;
  if (local_120 < uVar16) {
    uVar20 = (ulonglong)local_120;
    uVar15 = (ulonglong)(uVar16 - local_120);
    do {
      pFVar23 = (FScriptContainerElement *)0x0;
      uVar21 = (this->SymbolCache).PageSize;
      pFVar17 = (this->SymbolCache).FirstPage[uVar20 / uVar21].Items + uVar20 % uVar21;
      if (pFVar17->Result == (atomic<TraceServices::ESymbolQueryResult>)0x1) {
        uVar16 = ((uint)((ulonglong)pFVar17 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar17 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        pFVar8 = pFVar23;
        if (local_88._8_4_ != local_54) {
          FVar14.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_48.Data;
          }
          iVar12 = *(int *)(FVar14.Data + (ulonglong)(local_40 - 1 & (uVar16 >> 0x10 ^ uVar16)) * 4)
          ;
          while ((pFVar8 = pFVar23, iVar12 != -1 &&
                 (pFVar8 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar12 * 0x18),
                 *(FResolvedSymbol **)(local_88._0_8_ + (longlong)iVar12 * 0x18) != pFVar17))) {
            iVar12 = *(int *)((FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar12 * 0x18)
                             + 0x10);
          }
        }
        local_e8.DataPtr = pFVar17->Module;
        this_00 = &this->Strings;
        iVar12 = 0;
        pFVar18 = pFVar8 + 8;
        if (pFVar8 == (FScriptContainerElement *)0x0) {
          pFVar18 = pFVar23;
        }
        if (local_e8.DataPtr != (wchar_t *)0x0) {
          sVar9 = wcslen(local_e8.DataPtr);
          iVar12 = (int)sVar9;
        }
        local_e8.Size = iVar12;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal(this_00,&local_e8);
        local_d8.DataPtr = pFVar17->Name;
        uVar16 = *(uint *)pTVar10;
        iVar12 = 0;
        if (local_d8.DataPtr != (wchar_t *)0x0) {
          sVar9 = wcslen(local_d8.DataPtr);
          iVar12 = (int)sVar9;
        }
        local_d8.Size = iVar12;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal(this_00,&local_d8);
        local_140._0_8_ = pFVar17->File;
        uVar19 = *(uint *)pTVar10;
        uVar6 = 0;
        if ((wchar_t *)local_140._0_8_ != (wchar_t *)0x0) {
          sVar9 = wcslen((wchar_t *)local_140._0_8_);
          uVar6 = (undefined4)sVar9;
        }
        local_140._8_4_ = uVar6;
        pTVar10 = TCachedStringStore<wchar_t>::StoreInternal
                            (this_00,(TStringView<wchar_t> *)local_140);
        uVar3 = *(ulong64 *)pFVar18;
        uVar1 = pFVar17->Line;
        uVar2 = *(uint *)pTVar10;
        pFVar11 = TCachedPagedArray<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::FSavedSymbol,1024>
                  ::GetPageForNextItem(&local_c8);
        uVar5 = *local_c8.ElementCount;
        *local_c8.ElementCount = *local_c8.ElementCount + 1;
        uVar13 = (uint)uVar5 & 0x3ff;
        pFVar11[uVar13].Address = uVar3;
        pFVar11[uVar13].ModuleOffset = uVar16;
        pFVar11[uVar13].NameOffset = uVar19;
        pFVar11[uVar13].FileOffset = uVar2;
        pFVar11[uVar13].Line = (uint)uVar1;
        local_144 = local_144 + 1;
        this = local_118;
      }
      uVar20 = uVar20 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (3 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::SaveSymbolsToCache(TraceServices::IAnalysisCache&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  DestructItems<FSharedBuffer,int>
            ((FSharedBuffer *)local_c8.ResidentPages.AllocatorInstance.Data,
             local_c8.ResidentPages.ArrayNum);
  if (local_c8.ResidentPages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ResidentPages.AllocatorInstance.Data);
  }
  if (local_c8.Pages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Pages.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

