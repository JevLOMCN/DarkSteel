// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 8

// FD3D12PipelineState @ 1459eeb90

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PipelineState * __thiscall
FD3D12PipelineState::FD3D12PipelineState(FD3D12PipelineState *this,FD3D12Adapter *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FD3D12PipelineState *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumPSOs> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)param_1;
  iVar4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(int *)&this->_padding_ = iVar4;
  *(int *)((longlong)&this->_padding_ + 4) = iVar4;
  if ((iVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeMask.Intersects(VisibiltyMask)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x9e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12PipelineState *)(*pcVar2)();
    return pFVar5;
  }
  this->_padding_ = (longlong)&___7FD3D12PipelineState__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->PipelineState).Reference = (ID3D12PipelineState *)0x0;
  this->Worker = (FAsyncTask<FD3D12PipelineStateWorker> *)0x0;
  (this->GetPipelineStateMutex).Mutex.Mutex.Ptr = (void *)0x0;
  this->InitState = Uninitialized;
  this->ContextSortKey = 0;
  FVar7 = StatPtr_STAT_D3D12NumPSOs;
  if (StatPtr_STAT_D3D12NumPSOs == (FThreadSafeStaticStat<FStat_STAT_D3D12NumPSOs>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_D3D12NumPSOs");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumPSOs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumPSOs,*pFVar6,
                       L"Num pipeline state objects (PSOs)","STATGROUP_D3D12RHI","STATCAT_Advanced",
                       L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~FD3D12PipelineState @ 1459f85f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12PipelineState::~FD3D12PipelineState(FD3D12PipelineState *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FAsyncTask<FD3D12PipelineStateWorker> *pFVar2;
  ID3D12PipelineState *pIVar3;
  FName FVar4;
  code *pcVar5;
  FD3D12DynamicRHI *pFVar6;
  bool bVar7;
  BOOLEAN BVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumPSOs> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar12;
  FName local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FD3D12PipelineState__6B_;
  bVar7 = PipelineStateCache::IsPSOPrecachingEnabled();
  if ((((bVar7) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
      (GLowLevelCacheKeepUsedPSOs == false)) && ((int)this->_padding_ != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!UsePSORefCounting() || GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                       ,0x135,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->Worker != (FAsyncTask<FD3D12PipelineStateWorker> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Worker,true,false);
    pFVar2 = this->Worker;
    if (pFVar2 != (FAsyncTask<FD3D12PipelineStateWorker> *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    this->Worker = (FAsyncTask<FD3D12PipelineStateWorker> *)0x0;
  }
  bVar7 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((bVar7) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
     (GLowLevelCacheKeepUsedPSOs == false)) {
    (**(code **)((longlong)*(this->PipelineState).Reference + 8))();
    pFVar6 = FD3D12DynamicRHI::SingleD3DRHI;
    lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar9 = (pFVar6->ObjectsToDelete).ArrayNum;
    piVar1 = &(pFVar6->ObjectsToDelete).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar6->ObjectsToDelete).AllocatorInstance,piVar1);
    }
    (pFVar6->ObjectsToDelete).ArrayNum = iVar9 + 1;
    pIVar3 = (this->PipelineState).Reference;
    pFVar12 = (pFVar6->ObjectsToDelete).AllocatorInstance.Data + (longlong)iVar9 * 0x30;
    *(undefined4 *)pFVar12 = 1;
    *(ID3D12PipelineState **)(pFVar12 + 8) = pIVar3;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  FVar11 = StatPtr_STAT_D3D12NumPSOs;
  if (StatPtr_STAT_D3D12NumPSOs == (FThreadSafeStaticStat<FStat_STAT_D3D12NumPSOs>)0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_D3D12NumPSOs");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumPSOs>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumPSOs,*pFVar10,
                        L"Num pipeline state objects (PSOs)","STATGROUP_D3D12RHI","STATCAT_Advanced"
                        ,L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar11;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res10 = FVar4;
    local_28.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res10,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->GetPipelineStateMutex);
  if (BVar8 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->GetPipelineStateMutex);
  }
  pIVar3 = (this->PipelineState).Reference;
  if (pIVar3 != (ID3D12PipelineState *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

// InternalGetPipelineState @ 145a1f710

/* WARNING: Enum "Type": Some values do not have unique names */

ID3D12PipelineState * __thiscall
FD3D12PipelineState::InternalGetPipelineState(FD3D12PipelineState *this)

{
  FAsyncTask<FD3D12PipelineStateWorker> *pFVar1;
  ID3D12PipelineState *pIVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  PSOInitState PVar8;
  ID3D12PipelineState *pIVar9;
  longlong lVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->GetPipelineStateMutex);
  if (this->Worker == (FAsyncTask<FD3D12PipelineStateWorker> *)0x0) {
    if (this->InitState == Uninitialized) {
      QueryPerformanceCounter(&local_res8);
      pTVar6 = CVarPSOStallWarningThresholdInMs.Ref;
      dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      bVar7 = IsInParallelGameThread();
      if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
        lVar10 = 0;
      }
      else {
        lVar10 = 4;
      }
      dVar4 = (double)*(float *)((longlong)pTVar6->ShadowedValue + lVar10) * __real_3f50624dd2f1a9fc
      ;
      PVar8 = this->InitState;
      while (PVar8 == Uninitialized) {
        QueryPerformanceCounter(&local_res10);
        if (dVar4 < (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) {
          if (4 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          dVar4 = dVar4 + dVar4;
        }
        PVar8 = this->InitState;
      }
    }
  }
  else {
    if ((this->InitState != Uninitialized) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InitState == PSOInitState::Uninitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                           ,0x159,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pIVar9 = (ID3D12PipelineState *)(*pcVar3)();
      return pIVar9;
    }
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->Worker,true,false);
    if (((int)this->Worker->_padding_ != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Worker->IsWorkDone()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                           ,0x15c,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pIVar9 = (ID3D12PipelineState *)(*pcVar3)();
      return pIVar9;
    }
    pFVar1 = this->Worker;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar1);
    pIVar9 = (pFVar1->Task).PSO.Reference;
    pIVar2 = (this->PipelineState).Reference;
    if (pIVar2 != pIVar9) {
      (this->PipelineState).Reference = pIVar9;
      if (pIVar9 != (ID3D12PipelineState *)0x0) {
        (**(code **)((longlong)*pIVar9 + 8))();
      }
      if (pIVar2 != (ID3D12PipelineState *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    pFVar1 = this->Worker;
    if (pFVar1 != (FAsyncTask<FD3D12PipelineStateWorker> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    pIVar9 = (this->PipelineState).Reference;
    this->Worker = (FAsyncTask<FD3D12PipelineStateWorker> *)0x0;
    PVar8 = CreationFailed;
    if (pIVar9 != (ID3D12PipelineState *)0x0) {
      PVar8 = Initialized;
    }
    this->InitState = PVar8;
  }
  pIVar9 = (this->PipelineState).Reference;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->GetPipelineStateMutex);
  return pIVar9;
}

// UsePSORefCounting @ 145a37710

bool __cdecl FD3D12PipelineState::UsePSORefCounting(void)

{
  bool bVar1;
  
  bVar1 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (((!bVar1) || (GLowLevelCacheKeepPrecachedPSOs != false)) &&
     (GLowLevelCacheKeepUsedPSOs != false)) {
    return false;
  }
  return true;
}

// Create @ 145a9e1a0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PipelineState::Create(FD3D12PipelineState *this,ComputePipelineCreationArgs *param_1)

{
  ID3D12PipelineState *pIVar1;
  FD3D12Adapter *pFVar2;
  code *pcVar3;
  bool bVar4;
  PSOInitState PVar5;
  
  if ((this->PipelineState).Reference != (ID3D12PipelineState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PipelineState.GetReference() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,0x3dc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar1 = (this->PipelineState).Reference;
  pFVar2 = (FD3D12Adapter *)this->_padding_;
  if (pIVar1 != (ID3D12PipelineState *)0x0) {
    (this->PipelineState).Reference = (ID3D12PipelineState *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  CreateComputePipelineState(&(this->PipelineState).Reference,pFVar2,&param_1->Args);
  PVar5 = CreationFailed;
  if ((this->PipelineState).Reference != (ID3D12PipelineState *)0x0) {
    PVar5 = Initialized;
  }
  this->InitState = PVar5;
  return;
}

// Create @ 145a9e280

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PipelineState::Create(FD3D12PipelineState *this,GraphicsPipelineCreationArgs *param_1)

{
  ID3D12PipelineState *pIVar1;
  FD3D12Adapter *pFVar2;
  code *pcVar3;
  bool bVar4;
  PSOInitState PVar5;
  
  if ((this->PipelineState).Reference != (ID3D12PipelineState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PipelineState.GetReference() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,0x3ed,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar1 = (this->PipelineState).Reference;
  pFVar2 = (FD3D12Adapter *)this->_padding_;
  if (pIVar1 != (ID3D12PipelineState *)0x0) {
    (this->PipelineState).Reference = (ID3D12PipelineState *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  CreateGraphicsPipelineState(&(this->PipelineState).Reference,pFVar2,&param_1->Args);
  PVar5 = CreationFailed;
  if ((this->PipelineState).Reference != (ID3D12PipelineState *)0x0) {
    PVar5 = Initialized;
  }
  this->InitState = PVar5;
  return;
}

// CreateAsync @ 145a9e480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PipelineState::CreateAsync(FD3D12PipelineState *this,ComputePipelineCreationArgs *param_1)

{
  FD3D12Adapter *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAsyncTask<FD3D12PipelineStateWorker> *this_00;
  FName *pFVar4;
  TStatIdData *pTVar5;
  FName local_res8;
  
  if (((this->PipelineState).Reference != (ID3D12PipelineState *)0x0) ||
     (this->Worker != (FAsyncTask<FD3D12PipelineStateWorker> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PipelineState.GetReference() == nullptr && Worker == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,0x3e3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = ::operator_new(0x90);
  if (this_00 == (FAsyncTask<FD3D12PipelineStateWorker> *)0x0) {
    this->Worker = (FAsyncTask<FD3D12PipelineStateWorker> *)0x0;
  }
  else {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (FD3D12Adapter *)this->_padding_;
    this_00->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    *(undefined2 *)&this_00->_padding_ = 3;
    this_00->_padding_ = 0;
    ((TStatId *)&this_00->_padding_)->StatIdPtr = &TStatId::TStatId_NAME_None;
    ((FThreadSafeCounter *)&this_00->_padding_)->Counter = 0;
    this_00->_padding_ = (longlong)&___7__FAsyncTask_UFD3D12PipelineStateWorker____6B_;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = -1;
    this_00->_padding_ = 0;
    FD3D12PipelineStateWorker::FD3D12PipelineStateWorker(&this_00->Task,pFVar1,param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'::
        __l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        FThreadSafeStaticStat<`FD3D12PipelineStateWorker::GetStatId'::__l2::FStat_FD3D12PipelineStateWorker>
        ::
        FThreadSafeStaticStat<_FD3D12PipelineStateWorker::GetStatId_::__l2::FStat_FD3D12PipelineStateWorker>
                  (&`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                    ::__l2::StatPtr_FD3D12PipelineStateWorker);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pTVar5 = _StatPtr_FD3D12PipelineStateWorker;
    if (_StatPtr_FD3D12PipelineStateWorker == (TStatIdData *)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"FD3D12PipelineStateWorker");
      pTVar5 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                           ::__l2::StatPtr_FD3D12PipelineStateWorker,*pFVar4,
                          L"FD3D12PipelineStateWorker","STATGROUP_ThreadPoolAsyncTasks",
                          "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    ((TStatId *)&this_00->_padding_)->StatIdPtr = pTVar5;
    this->Worker = this_00;
    FAsyncTaskBase::Start((FAsyncTaskBase *)this_00,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0)
    ;
  }
  return;
}

// CreateAsync @ 145a9e690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PipelineState::CreateAsync(FD3D12PipelineState *this,GraphicsPipelineCreationArgs *param_1)

{
  FD3D12Adapter *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAsyncTask<FD3D12PipelineStateWorker> *this_00;
  FName *pFVar4;
  TStatIdData *pTVar5;
  FName local_res8;
  
  if (((this->PipelineState).Reference != (ID3D12PipelineState *)0x0) ||
     (this->Worker != (FAsyncTask<FD3D12PipelineStateWorker> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PipelineState.GetReference() == nullptr && Worker == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                       ,0x3f4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = ::operator_new(0x90);
  if (this_00 == (FAsyncTask<FD3D12PipelineStateWorker> *)0x0) {
    this->Worker = (FAsyncTask<FD3D12PipelineStateWorker> *)0x0;
  }
  else {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (FD3D12Adapter *)this->_padding_;
    this_00->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    *(undefined2 *)&this_00->_padding_ = 3;
    this_00->_padding_ = 0;
    ((TStatId *)&this_00->_padding_)->StatIdPtr = &TStatId::TStatId_NAME_None;
    ((FThreadSafeCounter *)&this_00->_padding_)->Counter = 0;
    this_00->_padding_ = (longlong)&___7__FAsyncTask_UFD3D12PipelineStateWorker____6B_;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = -1;
    this_00->_padding_ = 0;
    FD3D12PipelineStateWorker::FD3D12PipelineStateWorker(&this_00->Task,pFVar1,param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'::
        __l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        FThreadSafeStaticStat<`FD3D12PipelineStateWorker::GetStatId'::__l2::FStat_FD3D12PipelineStateWorker>
        ::
        FThreadSafeStaticStat<_FD3D12PipelineStateWorker::GetStatId_::__l2::FStat_FD3D12PipelineStateWorker>
                  (&`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                    ::__l2::StatPtr_FD3D12PipelineStateWorker);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pTVar5 = _StatPtr_FD3D12PipelineStateWorker;
    if (_StatPtr_FD3D12PipelineStateWorker == (TStatIdData *)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"FD3D12PipelineStateWorker");
      pTVar5 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_struct_TStatId___cdecl_FD3D12PipelineStateWorker::GetStatId(void)const___ptr64'
                           ::__l2::StatPtr_FD3D12PipelineStateWorker,*pFVar4,
                          L"FD3D12PipelineStateWorker","STATGROUP_ThreadPoolAsyncTasks",
                          "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
    ((TStatId *)&this_00->_padding_)->StatIdPtr = pTVar5;
    this->Worker = this_00;
    FAsyncTaskBase::Start((FAsyncTaskBase *)this_00,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0)
    ;
  }
  return;
}

