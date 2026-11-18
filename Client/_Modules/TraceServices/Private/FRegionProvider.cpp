// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 32

// ~FRegionProvider @ 14d3d0fe0

void __thiscall TraceServices::FRegionProvider::~FRegionProvider(FRegionProvider *this)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IRegionProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableRegionProvider__;
  DestructItems<TraceServices::FRegionLane,int>
            ((FRegionLane *)(this->AllRegionsTimeline).Lanes.AllocatorInstance.Data,
             (this->AllRegionsTimeline).Lanes.ArrayNum);
  pFVar6 = (this->AllRegionsTimeline).Lanes.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  *(undefined4 *)&(this->OpenRegionsById).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OpenRegionsById).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OpenRegionsById);
  *(undefined4 *)&(this->OpenRegionsByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OpenRegionsByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OpenRegionsByName);
  *(undefined4 *)&(this->TimersByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TimersByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TimersByName);
  *(undefined4 *)&(this->CategoriesByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CategoriesByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CategoriesByName);
  iVar1 = (this->Timers).PagesArray.ArrayNum;
  pFVar6 = (this->Timers).PagesArray.AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Timers).PagesArray.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar8) break;
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar6 = (this->Timers).PagesArray.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  iVar1 = (this->Categories).PagesArray.ArrayNum;
  pFVar6 = (this->Categories).PagesArray.AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Categories).PagesArray.ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar8) break;
    lVar7 = *(longlong *)pFVar6;
    lVar9 = *(longlong *)(pFVar6 + 8) * 0x38 + lVar7;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x38) {
      DestructItems<TraceServices::FRegionLane,int>
                (*(FRegionLane **)(lVar7 + 0x28),*(int *)(lVar7 + 0x30));
      if (*(void **)(lVar7 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar7 + 0x28));
      }
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar6 = (this->Categories).PagesArray.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d3d1199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// BeginEdit @ 14d3d5600

void __thiscall TraceServices::FRegionProvider::BeginEdit(FRegionProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bd0))
  ;
  return;
}

// BeginRead @ 14d3d5c20

void __thiscall TraceServices::FRegionProvider::BeginRead(FRegionProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bd0));
  return;
}

// EditAccessCheck @ 14d3d8d60

void __thiscall TraceServices::FRegionProvider::EditAccessCheck(FRegionProvider *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((longlong *)*(undefined1 **)(lVar1 + 0x9bd0) != &this->_padding_) ||
     (*(int *)(lVar1 + 0x9bdc) < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.Lock == this && (State.WriteLockCount > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x11,L"Trying to WRITE to provider outside of an EDIT/WRITE scope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// EndEdit @ 14d3db470

void __thiscall TraceServices::FRegionProvider::EndEdit(FRegionProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bd0));
  return;
}

// EndRead @ 14d3dbc60

void __thiscall TraceServices::FRegionProvider::EndRead(FRegionProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bd0));
  return;
}

// GetLaneCount @ 14d3e0da0

int __thiscall TraceServices::FRegionProvider::GetLaneCount(FRegionProvider *this)

{
  int iVar1;
  
  (**(code **)(this->_padding_ + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00014d3e0dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->AllRegionsTimeline)._padding_ + 0x10))();
  return iVar1;
}

// GetUncategorizedRegionCategoryName @ 14d3e39c0

wchar_t * __thiscall
TraceServices::FRegionProvider::GetUncategorizedRegionCategoryName(FRegionProvider *this)

{
  return this->UncategorizedName;
}

// GetUpdateCounter @ 14d3e3a70

ulong64 __thiscall TraceServices::FRegionProvider::GetUpdateCounter(FRegionProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return this->UpdateCounter;
}

// ReadAccessCheck @ 14d3fcfd0

void __thiscall TraceServices::FRegionProvider::ReadAccessCheck(FRegionProvider *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((FProviderLock *)*(undefined1 **)(lVar1 + 0x9bd0) != &this->Lock) ||
     ((*(int *)(lVar1 + 0x9bd8) < 1 && (*(int *)(lVar1 + 0x9bdc) < 1)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.Lock == this && (State.ReadLockCount > 0 || State.WriteLockCount > 0)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0xb,L"Trying to READ from provider outside of a READ scope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RegisterRegionCategory @ 14d3fd1f0

FRegionCategory * __thiscall
TraceServices::FRegionProvider::RegisterRegionCategory(FRegionProvider *this,wchar_t *param_1)

{
  FRegionCategoryImpl *pFVar1;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar1 = GetOrAddRegionCategory((FRegionProvider *)&this[-1].NumWarnings,param_1);
  return (FRegionCategory *)pFVar1;
}

// RegisterRegionTimer @ 14d3fd230

FRegionTimer * __thiscall
TraceServices::FRegionProvider::RegisterRegionTimer
          (FRegionProvider *this,wchar_t *param_1,FRegionCategory *param_2)

{
  FRegionTimer *pFVar1;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar1 = (FRegionTimer *)
           GetOrAddRegionTimer((FRegionProvider *)&this[-1].NumWarnings,param_1,param_2);
  return pFVar1;
}

// operator()<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>_> @ 14d4078c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TraceServices::FRegionProvider::OnAnalysisSessionEnded'::__l2::<lambda_1>::
operator()<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>_>
          (void *this,
          TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  *(int *)(*(longlong *)this + 0x210) = *(int *)(*(longlong *)this + 0x210) + 1;
  if (*(uint *)(*(longlong *)this + 0x210) < 0x65) {
    if ((*(longlong *)&param_1->field_0x10 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("KV.Value.Region",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                           ,0x236,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((longlong *)**(longlong **)&param_1->field_0x10 == (longlong *)0x0) ||
        (*(longlong *)**(longlong **)&param_1->field_0x10 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Region.Timer && Region.Timer->Name",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                           ,0x238,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// operator()<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>_> @ 14d4079b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TraceServices::FRegionProvider::OnAnalysisSessionEnded'::__l2::<lambda_1>::
operator()<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>_>
          (void *this,TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  
  *(int *)(*(longlong *)this + 0x210) = *(int *)(*(longlong *)this + 0x210) + 1;
  if (*(uint *)(*(longlong *)this + 0x210) < 0x65) {
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("KV.Value.Region",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                           ,0x236,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((longlong *)**(longlong **)&param_1->field_0x8 == (longlong *)0x0) ||
        (*(longlong *)**(longlong **)&param_1->field_0x8 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Region.Timer && Region.Timer->Name",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                           ,0x238,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// FRegionProvider @ 14d424970

FRegionProvider * __thiscall
TraceServices::FRegionProvider::FRegionProvider(FRegionProvider *this,IAnalysisSession *param_1)

{
  ILinearAllocator *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IRegionProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableRegionProvider__;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  this->Session = param_1;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Categories).PageSize = 0x400;
  (this->Categories).Allocator = pIVar1;
  (this->Categories).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).PagesArray.ArrayNum = 0;
  (this->Categories).PagesArray.ArrayMax = 0;
  (this->Categories).FirstPage = (TPagedArrayPage<TraceServices::FRegionCategoryImpl> *)0x0;
  (this->Categories).LastPage = (TPagedArrayPage<TraceServices::FRegionCategoryImpl> *)0x0;
  (this->Categories).TotalItemCount = 0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Timers).Allocator = pIVar1;
  (this->Timers).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timers).PagesArray.ArrayNum = 0;
  (this->Timers).PagesArray.ArrayMax = 0;
  (this->Timers).FirstPage = (TPagedArrayPage<TraceServices::FRegionTimerImpl> *)0x0;
  (this->Timers).LastPage = (TPagedArrayPage<TraceServices::FRegionTimerImpl> *)0x0;
  (this->Timers).TotalItemCount = 0;
  (this->Timers).PageSize = 0x400;
  *(undefined8 *)&this->CategoriesByName = 0;
  *(undefined8 *)&(this->CategoriesByName).field_0x8 = 0;
  *(undefined8 *)&(this->CategoriesByName).field_0x20 = 0;
  *(undefined4 *)&(this->CategoriesByName).field_0x28 = 0;
  *(undefined4 *)&(this->CategoriesByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->CategoriesByName).field_0x34 = 0;
  *(undefined4 *)&(this->CategoriesByName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CategoriesByName).field_0x40 = 0;
  *(undefined4 *)&(this->CategoriesByName).field_0x48 = 0;
  *(undefined8 *)&this->TimersByName = 0;
  *(undefined8 *)&(this->TimersByName).field_0x8 = 0;
  *(undefined8 *)&(this->TimersByName).field_0x20 = 0;
  *(undefined4 *)&(this->TimersByName).field_0x28 = 0;
  *(undefined4 *)&(this->TimersByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimersByName).field_0x34 = 0;
  *(undefined4 *)&(this->TimersByName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TimersByName).field_0x40 = 0;
  *(undefined4 *)&(this->TimersByName).field_0x48 = 0;
  *(undefined8 *)&this->OpenRegionsByName = 0;
  *(undefined8 *)&(this->OpenRegionsByName).field_0x8 = 0;
  *(undefined8 *)&(this->OpenRegionsByName).field_0x20 = 0;
  *(undefined4 *)&(this->OpenRegionsByName).field_0x28 = 0;
  *(undefined4 *)&(this->OpenRegionsByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->OpenRegionsByName).field_0x34 = 0;
  *(undefined4 *)&(this->OpenRegionsByName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OpenRegionsByName).field_0x40 = 0;
  *(undefined4 *)&(this->OpenRegionsByName).field_0x48 = 0;
  *(undefined8 *)&this->OpenRegionsById = 0;
  *(undefined8 *)&(this->OpenRegionsById).field_0x8 = 0;
  *(undefined8 *)&(this->OpenRegionsById).field_0x20 = 0;
  *(undefined4 *)&(this->OpenRegionsById).field_0x28 = 0;
  *(undefined4 *)&(this->OpenRegionsById).field_0x2c = 0x80;
  *(undefined4 *)&(this->OpenRegionsById).field_0x34 = 0;
  *(undefined4 *)&(this->OpenRegionsById).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OpenRegionsById).field_0x40 = 0;
  *(undefined4 *)&(this->OpenRegionsById).field_0x48 = 0;
  (this->AllRegionsTimeline)._padding_ = (longlong)&___7FRegionTimeline_TraceServices__6B_;
  this->UncategorizedName = L"Uncategorized";
  (this->AllRegionsTimeline).Session = param_1;
  (this->AllRegionsTimeline).Category = (FRegionCategoryImpl *)0x0;
  (this->AllRegionsTimeline).Lanes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllRegionsTimeline).Lanes.ArrayNum = 0;
  (this->AllRegionsTimeline).Lanes.ArrayMax = 0;
  this->NumWarnings = 0;
  this->NumErrors = 0;
  (this->AllRegionsTimeline).Provider = this;
  this->UpdateCounter = 0xffffffffffffffff;
  return this;
}

// AddRegionToTimelines @ 14d43bc00

FOpenRegions * __thiscall
TraceServices::FRegionProvider::AddRegionToTimelines
          (FRegionProvider *this,FOpenRegions *__return_storage_ptr__,double param_1,
          wchar_t *param_2,ulong64 param_3,wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FRegionCategoryImpl *pFVar4;
  FRegionTimerImpl *pFVar5;
  FTimeRegion *pFVar6;
  FOpenRegions *pFVar7;
  
  if (param_4 == (wchar_t *)0x0) {
    pwVar3 = this->UncategorizedName;
  }
  else {
    pwVar3 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))();
  }
  pFVar4 = GetOrAddRegionCategory(this,pwVar3);
  pwVar3 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_2);
  pFVar5 = GetOrAddRegionTimer(this,pwVar3,(FRegionCategory *)pFVar4);
  pFVar6 = FRegionTimeline::InsertNewRegion(&this->AllRegionsTimeline,pFVar5,param_1,param_3);
  __return_storage_ptr__->Region = pFVar6;
  if (pFVar6 == (FTimeRegion *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OpenRegions.Region",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                       ,0x19a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FOpenRegions *)(*pcVar1)();
      return pFVar7;
    }
  }
  pFVar6 = FRegionTimeline::InsertNewRegion(&pFVar4->Timeline,pFVar5,param_1,param_3);
  __return_storage_ptr__->CategoryRegion = pFVar6;
  if (pFVar6 == (FTimeRegion *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OpenRegions.CategoryRegion",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                       ,0x19e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FOpenRegions *)(*pcVar1)();
      return pFVar7;
    }
  }
  return __return_storage_ptr__;
}

// AppendRegionBegin @ 14d440db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FRegionProvider::AppendRegionBegin
          (FRegionProvider *this,wchar_t *param_1,double param_2,wchar_t *param_3)

{
  undefined1 *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  int iVar8;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  int local_70;
  FOpenRegions local_68;
  wchar_t **local_58;
  FOpenRegions *local_50;
  TStringView<wchar_t> local_48 [2];
  
  (**(code **)(this->_padding_ + 0x18))();
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                         ,0x1a9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &(this->TimersByName).field_0x48;
  iVar8 = 0;
  local_88.Size = iVar8;
  local_88.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_88.Size = (int)sVar6;
  }
  local_48[0]._12_4_ = local_88._12_4_;
  local_48[0].Size = local_88.Size;
  local_48[0].DataPtr = local_88.DataPtr;
  uVar4 = ::GetTypeHash(local_48);
  iVar5 = TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,&local_88);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)this_00 + (longlong)iVar5 * 0x28;
    lVar7 = lVar1 + 0x10;
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      *(int *)&this->UpdateCounter = (int)this->UpdateCounter + 1;
      if (((uint)this->UpdateCounter < 0x65) && (2 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      (**(code **)(this->_padding_ + 0x40))(this,param_1,SUB84(param_2,0));
    }
  }
  AddRegionToTimelines((FRegionProvider *)&this[-1].NumWarnings,&local_68,param_2,param_1,0,param_3)
  ;
  local_78 = (local_68.Region)->Timer->Name;
  if (local_78 != (wchar_t *)0x0) {
    sVar6 = wcslen(local_78);
    iVar8 = (int)sVar6;
  }
  local_58 = &local_78;
  local_50 = &local_68;
  local_70 = iVar8;
  TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TStringView<wchar_t>_&&,TraceServices::FRegionProvider::FOpenRegions_const_&>_>
            ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<TStringView<wchar_t>_&&,TraceServices::FRegionProvider::FOpenRegions_const_&>
              *)&stack0x00000008,(bool *)&local_58);
  this->UncategorizedName = (wchar_t *)((longlong)this->UncategorizedName + 1);
  return;
}

// AppendRegionBeginWithId @ 14d440f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FRegionProvider::AppendRegionBeginWithId
          (FRegionProvider *this,wchar_t *param_1,ulong64 param_2,double param_3,wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  FOpenRegions *pFVar3;
  ulong64 uVar4;
  ulong64 local_res18;
  ulong64 *local_58;
  FOpenRegions *local_50;
  FOpenRegions local_48 [2];
  
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 0x18))();
  if (((param_1 == (wchar_t *)0x0) || (local_res18 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name && Id",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                         ,0x1c6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = local_res18;
  pFVar3 = TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
           ::Find((TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
                   *)&(this->OpenRegionsByName).field_0x48,local_res18);
  if (pFVar3 != (FOpenRegions *)0x0) {
    *(int *)&this->UpdateCounter = (int)this->UpdateCounter + 1;
    if (((uint)this->UpdateCounter < 0x65) && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      uVar4 = local_res18;
    }
    (**(code **)(this->_padding_ + 0x48))(this,uVar4,SUB84(param_3,0));
    uVar4 = local_res18;
  }
  AddRegionToTimelines
            ((FRegionProvider *)&this[-1].NumWarnings,local_48,param_3,param_1,uVar4,param_4);
  local_58 = &local_res18;
  local_50 = local_48;
  TSet<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FRegionProvider::FOpenRegions_const_&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
              *)&(this->OpenRegionsByName).field_0x48,
             (TPairInitializer<unsigned___int64_const_&,TraceServices::FRegionProvider::FOpenRegions_const_&>
              *)&stack0x00000008,(bool *)&local_58);
  this->UncategorizedName = (wchar_t *)((longlong)this->UncategorizedName + 1);
  return;
}

// AppendRegionEnd @ 14d4410f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FRegionProvider::AppendRegionEnd
          (FRegionProvider *this,wchar_t *param_1,double param_2)

{
  undefined1 *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38 [2];
  
  (**(code **)(this->_padding_ + 0x18))();
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                         ,0x1e3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar8 = (longlong *)0x0;
  this_00 = &(this->TimersByName).field_0x48;
  iVar7 = 0;
  local_88.Size = iVar7;
  local_88.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_88.Size = (int)sVar6;
  }
  local_58._12_4_ = local_88._12_4_;
  local_58.Size = local_88.Size;
  local_58.DataPtr = local_88.DataPtr;
  uVar4 = ::GetTypeHash(&local_58);
  iVar5 = TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,&local_88);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)this_00 + (longlong)iVar5 * 0x28;
    plVar9 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar9 = plVar8;
    }
    if (plVar9 != (longlong *)0x0) goto LAB_14d44129d;
  }
  *(int *)&this->UpdateCounter = (int)this->UpdateCounter + 1;
  if (((uint)this->UpdateCounter < 0x65) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  (**(code **)(this->_padding_ + 0x30))(this,param_1,SUB84(param_2,0),0);
  local_78.Size = 0;
  local_78.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_78.Size = (int)sVar6;
  }
  local_48._12_4_ = local_78._12_4_;
  local_48.Size = local_78.Size;
  local_48.DataPtr = local_78.DataPtr;
  uVar4 = ::GetTypeHash(&local_48);
  iVar5 = TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,&local_78);
  plVar9 = plVar8;
  if (iVar5 != -1) {
    lVar1 = *(longlong *)this_00 + (longlong)iVar5 * 0x28;
    plVar9 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar9 = plVar8;
    }
    if (plVar9 != (longlong *)0x0) goto LAB_14d44129d;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("OpenRegionsPos",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                     ,0x1f0,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d44129d:
  if ((*plVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenRegionsPos->Region",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                         ,499,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(double *)(*plVar9 + 0x10) = param_2;
  if ((plVar9[1] == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenRegionsPos->CategoryRegion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                         ,0x1f6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(double *)(plVar9[1] + 0x10) = param_2;
  local_68.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar7 = (int)sVar6;
  }
  if (*(int *)&this->OpenRegionsByName != *(int *)&(this->OpenRegionsByName).field_0x2c) {
    local_38[0]._12_4_ = local_68._12_4_;
    local_38[0].Size = iVar7;
    local_38[0].DataPtr = local_68.DataPtr;
    local_68.Size = iVar7;
    uVar4 = ::GetTypeHash(local_38);
    TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
    ::RemoveImpl<TStringView<wchar_t>_>
              ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
                *)this_00,uVar4,&local_68);
  }
  this->UncategorizedName = (wchar_t *)((longlong)this->UncategorizedName + 1);
  return;
}

// AppendRegionEndWithId @ 14d441380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FRegionProvider::AppendRegionEndWithId
          (FRegionProvider *this,ulong64 param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  FOpenRegions *pFVar3;
  ForAnyElementType FVar4;
  FString local_28 [2];
  
  (**(code **)(this->_padding_ + 0x18))();
  if (param_1 == 0) {
    *(int *)&this->UpdateCounter = (int)this->UpdateCounter + 1;
    if (((uint)this->UpdateCounter < 0x65) && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    pFVar3 = TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
             ::Find((TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
                     *)&(this->OpenRegionsByName).field_0x48,param_1);
    if (pFVar3 == (FOpenRegions *)0x0) {
      *(int *)&this->UpdateCounter = (int)this->UpdateCounter + 1;
      if (((uint)this->UpdateCounter < 0x65) && (2 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      ::FString::PrintfImpl(local_28,L"Unknown Region (missing begin, Id=%llu)");
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_28[0].Data.ArrayNum != 0) {
        FVar4.Data = local_28[0].Data.AllocatorInstance.Data;
      }
      (**(code **)(this->_padding_ + 0x38))(this,FVar4.Data,param_1,SUB84(param_2,0),0);
      pFVar3 = TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
               ::Find((TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
                       *)&(this->OpenRegionsByName).field_0x48,param_1);
      if (pFVar3 == (FOpenRegions *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpenRegionsPos",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                           ,0x21d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    if (pFVar3->Region == (FTimeRegion *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenRegionsPos->Region",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                         ,0x220,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3->Region->EndTime = param_2;
    if (pFVar3->CategoryRegion == (FTimeRegion *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenRegionsPos->CategoryRegion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                         ,0x223,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3->CategoryRegion->EndTime = param_2;
    TSet<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>,FDefaultSetAllocator>
              *)&(this->OpenRegionsByName).field_0x48,param_1);
    this->UncategorizedName = (wchar_t *)((longlong)this->UncategorizedName + 1);
  }
  return;
}

// EnumerateCategories @ 14d452000

bool __thiscall
TraceServices::FRegionProvider::EnumerateCategories
          (FRegionProvider *this,
          TFunctionRef<bool___cdecl(TraceServices::FRegionCategory_const_&)> *param_1)

{
  char cVar1;
  TPagedArrayPage<TraceServices::FRegionCategoryImpl> *pTVar2;
  TPagedArrayIterator<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
  local_48;
  
  (**(code **)(this->_padding_ + 0x18))();
  TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
  ::GetIterator(&this->Categories,&local_48);
  do {
    while( true ) {
      if (local_48.CurrentItem == (FRegionCategoryImpl *)0x0) {
        return true;
      }
      cVar1 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_48.CurrentItem);
      if (cVar1 == '\0') {
        return false;
      }
      if (local_48.CurrentItem == local_48.CurrentPageLastItem) break;
      local_48.CurrentItem = local_48.CurrentItem + 1;
    }
    if (local_48.CurrentPageIndex == (longlong)(((local_48.Outer)->PagesArray).ArrayNum + -1)) {
      return true;
    }
    local_48.CurrentPageIndex = local_48.CurrentPageIndex + 1;
    pTVar2 = (local_48.Outer)->FirstPage + local_48.CurrentPageIndex;
    local_48.CurrentItem = pTVar2->Items;
    if (local_48.CurrentItem == (FRegionCategoryImpl *)0x0) {
      local_48.CurrentPageLastItem = (FRegionCategoryImpl *)0x0;
    }
    else {
      local_48.CurrentPageLastItem = local_48.CurrentItem + (pTVar2->Count - 1);
    }
  } while (pTVar2 != (TPagedArrayPage<TraceServices::FRegionCategoryImpl> *)0x0);
  return true;
}

// EnumerateLanes @ 14d45a450

void __thiscall
TraceServices::FRegionProvider::EnumerateLanes
          (FRegionProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FRegionLane_const_&,int)> *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_18 = *(undefined8 *)param_1;
  local_10 = *(undefined8 *)&param_1->field_0x8;
  (**(code **)((this->AllRegionsTimeline)._padding_ + 0x30))(&this->AllRegionsTimeline,&local_18);
  return;
}

// EnumerateRegions @ 14d45b6b0

bool __thiscall
TraceServices::FRegionProvider::EnumerateRegions
          (FRegionProvider *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)> *param_3)

{
  undefined1 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_38 = *(undefined8 *)param_3;
  local_30 = *(undefined8 *)&param_3->field_0x8;
  uVar1 = (**(code **)((this->AllRegionsTimeline)._padding_ + 0x20))
                    (&this->AllRegionsTimeline,SUB84(param_1,0),SUB84(param_2,0),&local_38);
  return (bool)uVar1;
}

// EnumerateTimelinesByCategory @ 14d45d910

void __thiscall
TraceServices::FRegionProvider::EnumerateTimelinesByCategory
          (FRegionProvider *this,
          TFunctionRef<void___cdecl(TraceServices::IRegionTimeline_const_&,wchar_t_const_*)>
          *param_1)

{
  TPagedArrayPage<TraceServices::FRegionCategoryImpl> *pTVar1;
  longlong local_res8;
  TPagedArrayIterator<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
  local_48;
  
  (**(code **)(this->_padding_ + 0x18))();
  TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
  ::GetIterator(&this->Categories,&local_48);
  while( true ) {
    while( true ) {
      if (local_48.CurrentItem == (FRegionCategoryImpl *)0x0) {
        return;
      }
      local_res8 = (local_48.CurrentItem)->_padding_;
      (**(code **)param_1)
                (*(undefined8 *)&param_1->field_0x8,&(local_48.CurrentItem)->Timeline,&local_res8);
      if (local_48.CurrentItem == local_48.CurrentPageLastItem) break;
      local_48.CurrentItem = local_48.CurrentItem + 1;
    }
    if (local_48.CurrentPageIndex == (longlong)(((local_48.Outer)->PagesArray).ArrayNum + -1))
    break;
    local_48.CurrentPageIndex = local_48.CurrentPageIndex + 1;
    pTVar1 = (local_48.Outer)->FirstPage + local_48.CurrentPageIndex;
    local_48.CurrentItem = pTVar1->Items;
    if (local_48.CurrentItem == (FRegionCategoryImpl *)0x0) {
      local_48.CurrentPageLastItem = (FRegionCategoryImpl *)0x0;
    }
    else {
      local_48.CurrentPageLastItem = local_48.CurrentItem + (pTVar1->Count - 1);
    }
    if (pTVar1 == (TPagedArrayPage<TraceServices::FRegionCategoryImpl> *)0x0) {
      return;
    }
  }
  return;
}

// EnumerateTimers @ 14d45da00

bool __thiscall
TraceServices::FRegionProvider::EnumerateTimers
          (FRegionProvider *this,
          TFunctionRef<bool___cdecl(TraceServices::FRegionTimer_const_&)> *param_1)

{
  TPagedArrayPage<TraceServices::FRegionTimerImpl> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  FRegionTimerImpl *pFVar7;
  longlong lVar8;
  FRegionTimerImpl *pFVar9;
  longlong lVar10;
  
  (**(code **)(this->_padding_ + 0x18))();
  lVar8 = 0;
  if ((this->Timers).TotalItemCount != 0) {
    if (((this->Timers).PagesArray.ArrayNum == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar1 = (this->Timers).FirstPage;
    if (pTVar1->Items == (FRegionTimerImpl *)0x0) {
      pFVar9 = (FRegionTimerImpl *)0x0;
    }
    else {
      pFVar9 = pTVar1->Items + (pTVar1->Count - 1);
    }
    if ((pTVar1->Count == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar7 = pTVar1->Items;
    if (pFVar7 != (FRegionTimerImpl *)0x0) {
      lVar10 = 0;
      do {
        cVar5 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar7);
        if (cVar5 == '\0') {
          return false;
        }
        if (pFVar7 == pFVar9) {
          if (lVar8 == (this->Timers).PagesArray.ArrayNum + -1) {
            return true;
          }
          plVar6 = (longlong *)((longlong)&(this->Timers).FirstPage[1].Items + lVar10);
          lVar8 = lVar8 + 1;
          pFVar7 = (FRegionTimerImpl *)*plVar6;
          if (pFVar7 == (FRegionTimerImpl *)0x0) {
            pFVar9 = (FRegionTimerImpl *)0x0;
          }
          else {
            pFVar9 = pFVar7 + plVar6[1] + -1;
          }
          lVar10 = lVar10 + 0x10;
          if (plVar6 == (longlong *)0x0) {
            return true;
          }
        }
        else {
          pFVar7 = pFVar7 + 1;
        }
      } while (pFVar7 != (FRegionTimerImpl *)0x0);
    }
  }
  return true;
}

// GetDefaultTimeline @ 14d464b30

IRegionTimeline * __thiscall
TraceServices::FRegionProvider::GetDefaultTimeline(FRegionProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (IRegionTimeline *)&this->AllRegionsTimeline;
}

// GetLane @ 14d468c80

FRegionLane * __thiscall TraceServices::FRegionProvider::GetLane(FRegionProvider *this,int param_1)

{
  FRegionLane *pFVar1;
  
  (**(code **)(this->_padding_ + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00014d468cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FRegionLane *)
           (**(code **)((this->AllRegionsTimeline)._padding_ + 0x18))
                     (&this->AllRegionsTimeline,param_1);
  return pFVar1;
}

// GetOrAddRegionCategory @ 14d46a950

FRegionCategoryImpl * __thiscall
TraceServices::FRegionProvider::GetOrAddRegionCategory(FRegionProvider *this,wchar_t *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FRegionCategoryImpl> *pTVar3;
  IAnalysisSession *pIVar4;
  ILinearAllocator *pIVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FRegionCategoryImpl *pFVar10;
  size_t sVar11;
  longlong lVar12;
  undefined8 *puVar13;
  TPagedArrayPage<TraceServices::FRegionCategoryImpl> *pTVar14;
  int iVar15;
  TPairInitializer<TStringView<wchar_t>_&&,TraceServices::FRegionCategoryImpl_*_&&> local_res8;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  int local_50;
  wchar_t **local_48;
  FRegionCategoryImpl ***local_40;
  TStringView<wchar_t> local_38;
  
  if (param_1 == (wchar_t *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CategoryName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                       ,0x169,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRegionCategoryImpl *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar15 = 0;
  local_68.Size = iVar15;
  local_68.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar11 = wcslen(param_1);
    local_68.Size = (int)sVar11;
  }
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = local_68.Size;
  local_38.DataPtr = local_68.DataPtr;
  uVar8 = ::GetTypeHash(&local_38);
  iVar9 = TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*,0>,FDefaultSetAllocator>
                      *)&this->CategoriesByName,uVar8,&local_68);
  if (iVar9 != -1) {
    lVar12 = (longlong)iVar9 * 0x20 + *(longlong *)&(this->CategoriesByName).field_0x0;
    puVar13 = (undefined8 *)(lVar12 + 0x10);
    if (lVar12 == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    if (puVar13 != (undefined8 *)0x0) {
      return (FRegionCategoryImpl *)*puVar13;
    }
  }
  pTVar3 = (this->Categories).LastPage;
  pIVar4 = this->Session;
  if ((pTVar3 == (TPagedArrayPage<TraceServices::FRegionCategoryImpl> *)0x0) ||
     (pTVar3->Count == (this->Categories).PageSize)) {
    iVar9 = (this->Categories).PagesArray.ArrayNum;
    piVar1 = &(this->Categories).PagesArray.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Categories).PagesArray.AllocatorInstance,piVar1);
    }
    (this->Categories).PagesArray.ArrayNum = iVar9 + 1;
    pTVar14 = (TPagedArrayPage<TraceServices::FRegionCategoryImpl> *)
              ((this->Categories).PagesArray.AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>,int>
              (pTVar14,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FRegionCategoryImpl> *)
             (this->Categories).PagesArray.AllocatorInstance.Data;
    pIVar5 = (this->Categories).Allocator;
    (this->Categories).LastPage = pTVar14;
    (this->Categories).FirstPage = pTVar3;
    pFVar10 = (FRegionCategoryImpl *)
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->Categories).PageSize * 0x38);
    ((this->Categories).LastPage)->Items = pFVar10;
  }
  pTVar3 = (this->Categories).LastPage;
  puVar2 = &(this->Categories).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pFVar10 = pTVar3->Items + pTVar3->Count;
  pFVar10->_padding_ = 0;
  (pFVar10->Timeline).Session = pIVar4;
  (pFVar10->Timeline)._padding_ = (longlong)&___7FRegionTimeline_TraceServices__6B_;
  (pFVar10->Timeline).Provider = this;
  (pFVar10->Timeline).Category = pFVar10;
  (pFVar10->Timeline).Lanes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar10->Timeline).Lanes.ArrayNum = 0;
  (pFVar10->Timeline).Lanes.ArrayMax = 0;
  puVar2 = &((this->Categories).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar10->_padding_ = (longlong)param_1;
  local_res8.Value = (FRegionCategoryImpl **)pFVar10;
  local_58 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar11 = wcslen(param_1);
    iVar15 = (int)sVar11;
  }
  local_48 = &local_58;
  local_40 = &local_res8.Value;
  local_50 = iVar15;
  TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TStringView<wchar_t>_&&,TraceServices::FRegionCategoryImpl_*_&&>_>
            ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*,0>,FDefaultSetAllocator>
              *)&this->CategoriesByName,&local_res8,(bool *)&local_48);
  return pFVar10;
}

// GetOrAddRegionTimer @ 14d46ab50

FRegionTimerImpl * __thiscall
TraceServices::FRegionProvider::GetOrAddRegionTimer
          (FRegionProvider *this,wchar_t *param_1,FRegionCategory *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FRegionTimerImpl> *pTVar3;
  ILinearAllocator *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FRegionTimerImpl *pFVar9;
  size_t sVar10;
  longlong lVar11;
  undefined8 *puVar12;
  TPagedArrayPage<TraceServices::FRegionTimerImpl> *pTVar13;
  int iVar14;
  TPairInitializer<TStringView<wchar_t>_&&,TraceServices::FRegionTimerImpl_*_&&> local_res8;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  int local_50;
  wchar_t **local_48;
  FRegionTimerImpl ***local_40;
  TStringView<wchar_t> local_38;
  
  if (param_1 == (wchar_t *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimerName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Regions.cpp"
                       ,0x17c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRegionTimerImpl *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar14 = 0;
  local_68.Size = iVar14;
  local_68.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    local_68.Size = (int)sVar10;
  }
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = local_68.Size;
  local_38.DataPtr = local_68.DataPtr;
  uVar7 = ::GetTypeHash(&local_38);
  iVar8 = TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*,0>,FDefaultSetAllocator>
                      *)&this->TimersByName,uVar7,&local_68);
  if (iVar8 != -1) {
    lVar11 = (longlong)iVar8 * 0x20 + *(longlong *)&(this->TimersByName).field_0x0;
    puVar12 = (undefined8 *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    if (puVar12 != (undefined8 *)0x0) {
      return (FRegionTimerImpl *)*puVar12;
    }
  }
  pTVar3 = (this->Timers).LastPage;
  if ((pTVar3 == (TPagedArrayPage<TraceServices::FRegionTimerImpl> *)0x0) ||
     (pTVar3->Count == (this->Timers).PageSize)) {
    iVar8 = (this->Timers).PagesArray.ArrayNum;
    piVar1 = &(this->Timers).PagesArray.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Timers).PagesArray.AllocatorInstance,piVar1);
    }
    (this->Timers).PagesArray.ArrayNum = iVar8 + 1;
    pTVar13 = (TPagedArrayPage<TraceServices::FRegionTimerImpl> *)
              ((this->Timers).PagesArray.AllocatorInstance.Data + (longlong)iVar8 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>,int>
              (pTVar13,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FRegionTimerImpl> *)
             (this->Timers).PagesArray.AllocatorInstance.Data;
    pIVar4 = (this->Timers).Allocator;
    (this->Timers).LastPage = pTVar13;
    (this->Timers).FirstPage = pTVar3;
    pFVar9 = (FRegionTimerImpl *)
             (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->Timers).PageSize << 4);
    ((this->Timers).LastPage)->Items = pFVar9;
  }
  pTVar3 = (this->Timers).LastPage;
  puVar2 = &(this->Timers).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pFVar9 = pTVar3->Items + pTVar3->Count;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)&pFVar9->field_0x8 = 0;
  puVar2 = &((this->Timers).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  *(wchar_t **)pFVar9 = param_1;
  *(FRegionCategory **)&pFVar9->field_0x8 = param_2;
  local_res8.Value = (FRegionTimerImpl **)pFVar9;
  local_58 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    iVar14 = (int)sVar10;
  }
  local_48 = &local_58;
  local_40 = &local_res8.Value;
  local_50 = iVar14;
  TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TStringView<wchar_t>_&&,TraceServices::FRegionTimerImpl_*_&&>_>
            ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionTimerImpl_*,0>,FDefaultSetAllocator>
              *)&this->TimersByName,&local_res8,(bool *)&local_48);
  return pFVar9;
}

// GetRegionCount @ 14d46c290

ulong64 __thiscall TraceServices::FRegionProvider::GetRegionCount(FRegionProvider *this)

{
  ulong64 local_res8;
  ulong64 *local_res10 [3];
  code *local_18;
  undefined8 **local_10;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_res10[0] = &local_res8;
  local_res8 = 0;
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::FRegionProvider::GetRegionCount'::__l2::<lambda_1>,void,TraceServices::FRegionLane_const_&,int>
             ::Call;
  (**(code **)((this->AllRegionsTimeline)._padding_ + 0x30))(&this->AllRegionsTimeline,&local_18);
  return local_res8;
}

// GetTimelineForCategory @ 14d46e520

IRegionTimeline * __thiscall
TraceServices::FRegionProvider::GetTimelineForCategory(FRegionProvider *this,wchar_t *param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  longlong *plVar5;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (param_1 == (wchar_t *)0x0) {
    return (IRegionTimeline *)&this->AllRegionsTimeline;
  }
  local_28.DataPtr = param_1;
  sVar3 = wcslen(param_1);
  local_28.Size = (int)sVar3;
  local_18._12_4_ = local_28._12_4_;
  local_18.Size = local_28.Size;
  local_18.DataPtr = local_28.DataPtr;
  uVar1 = ::GetTypeHash(&local_18);
  iVar2 = TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionCategoryImpl_*,0>,FDefaultSetAllocator>
                      *)&this->CategoriesByName,uVar1,&local_28);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&this->CategoriesByName;
    plVar5 = (longlong *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      return (IRegionTimeline *)(*plVar5 + 8);
    }
  }
  return (IRegionTimeline *)0x0;
}

// OnAnalysisSessionEnded @ 14d47ac20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FRegionProvider::OnAnalysisSessionEnded(FRegionProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  Algo::
  ForEach<TMap<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>_&,_TraceServices::FRegionProvider::OnAnalysisSessionEnded_::__l2::<lambda_1>_>
            ((TMap<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
              *)&(this->OpenRegionsByName).field_0x48,(<lambda_1>)&this[-1].NumWarnings);
  Algo::
  ForEach<TMap<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>_>_&,_TraceServices::FRegionProvider::OnAnalysisSessionEnded_::__l2::<lambda_1>_>
            ((TMap<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>_>
              *)&(this->TimersByName).field_0x48,(<lambda_1>)&this[-1].NumWarnings);
  if (((int)this->UpdateCounter != 0) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if ((*(int *)((longlong)&this->UpdateCounter + 4) != 0) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  (**(code **)(*(longlong *)&this[-1].NumWarnings + 0x50))(&this[-1].NumWarnings);
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

