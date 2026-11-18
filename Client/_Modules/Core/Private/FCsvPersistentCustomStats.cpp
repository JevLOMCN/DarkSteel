// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// GetOrCreatePersistentCustomStat<int> @ 14190f3f0

/* WARNING: Enum "Type": Some values do not have unique names */

TCsvPersistentCustomStat<int> * __thiscall
FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<int>
          (FCsvPersistentCustomStats *this,FName param_1,int param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TCsvPersistentCustomStat<int> *pTVar6;
  FCsvPersistentCustomStatBase **ppFVar7;
  TPairInitializer<unsigned___int64_const_&,FCsvPersistentCustomStatBase_*_&&> local_res8;
  FLLMScope local_res18 [2];
  TCsvPersistentCustomStat<int> *local_68;
  ulonglong local_60;
  TCsvPersistentCustomStat<int> *local_58;
  FMemScope local_50;
  ulonglong *local_48;
  TCsvPersistentCustomStat<int> **local_40;
  FString local_38;
  
  local_res8.Value = (FCsvPersistentCustomStatBase **)param_1;
  FLLMScope::FLLMScope(local_res18,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_50,CsvProfiler,true);
  if ((this == (FCsvPersistentCustomStats *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TCsvPersistentCustomStat<int> *)(*pcVar3)();
    return pTVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((0x7ff < (uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCategoryIndex < CSV_MAX_CATEGORY_COUNT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x132,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TCsvPersistentCustomStat<int> *)(*pcVar3)();
    return pTVar6;
  }
  local_60 = ((ulonglong)(param_2 & 0x7ff) | (longlong)local_res8.Value << 0xb) << 2 | 1;
  ppFVar7 = TMapBase<unsigned___int64,FCsvPersistentCustomStatBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>_>
            ::Find((TMapBase<unsigned___int64,FCsvPersistentCustomStatBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>_>
                    *)&this->StatLookup,local_60);
  if (ppFVar7 != (FCsvPersistentCustomStatBase **)0x0) {
    pTVar6 = (TCsvPersistentCustomStat<int> *)*ppFVar7;
    if (pTVar6->field_0xd == Int) goto LAB_14190f63b;
    ::FName::ToString((FName *)&local_res8.Value,&local_38);
    UE::Logging::Private::BasicFatalLog
              (&`public:_class_TCsvPersistentCustomStat<int>*___ptr64___cdecl_FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<int>(FName,int,bool)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar6 = ::operator_new(0x14);
  if (pTVar6 == (TCsvPersistentCustomStat<int> *)0x0) {
    pTVar6 = (TCsvPersistentCustomStat<int> *)0x0;
  }
  else {
    *(FCsvPersistentCustomStatBase ***)pTVar6 = local_res8.Value;
    *(undefined4 *)&(pTVar6->Value).field_0x0 = 0;
    *(int *)&pTVar6->field_0x8 = param_2;
    pTVar6->field_0xc = param_3;
    pTVar6->field_0xd = Int;
  }
  local_48 = &local_60;
  local_40 = &local_58;
  local_58 = pTVar6;
  TSet<TTuple<unsigned___int64,FCsvPersistentCustomStatBase_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,FCsvPersistentCustomStatBase_*_&&>_>
            ((TSet<TTuple<unsigned___int64,FCsvPersistentCustomStatBase_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>,FDefaultSetAllocator>
              *)&this->StatLookup,&local_res8,(bool *)&local_48);
  pFVar2 = (this->Stats).AllocatorInstance.Data;
  local_68 = pTVar6;
  if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)(this->Stats).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TCsvPersistentCustomStat<int> *)(*pcVar3)();
    return pTVar6;
  }
  iVar5 = (this->Stats).ArrayNum;
  piVar1 = &(this->Stats).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Stats).AllocatorInstance,piVar1);
  }
  (this->Stats).ArrayNum = iVar5 + 1;
  *(TCsvPersistentCustomStat<int> **)((this->Stats).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_68;
LAB_14190f63b:
  if (this != (FCsvPersistentCustomStats *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res18);
  return pTVar6;
}

// GetOrCreatePersistentCustomStat<float> @ 14190f680

/* WARNING: Enum "Type": Some values do not have unique names */

TCsvPersistentCustomStat<float> * __thiscall
FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<float>
          (FCsvPersistentCustomStats *this,FName param_1,int param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TCsvPersistentCustomStat<float> *pTVar6;
  FCsvPersistentCustomStatBase **ppFVar7;
  TPairInitializer<unsigned___int64_const_&,FCsvPersistentCustomStatBase_*_&&> local_res8;
  FLLMScope local_res18 [2];
  TCsvPersistentCustomStat<float> *local_68;
  ulonglong local_60;
  TCsvPersistentCustomStat<float> *local_58;
  FMemScope local_50;
  ulonglong *local_48;
  TCsvPersistentCustomStat<float> **local_40;
  FString local_38;
  
  local_res8.Value = (FCsvPersistentCustomStatBase **)param_1;
  FLLMScope::FLLMScope(local_res18,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_50,CsvProfiler,true);
  if ((this == (FCsvPersistentCustomStats *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TCsvPersistentCustomStat<float> *)(*pcVar3)();
    return pTVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((0x7ff < (uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCategoryIndex < CSV_MAX_CATEGORY_COUNT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x132,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TCsvPersistentCustomStat<float> *)(*pcVar3)();
    return pTVar6;
  }
  local_60 = ((ulonglong)(param_2 & 0x7ff) | (longlong)local_res8.Value << 0xb) << 2 | 1;
  ppFVar7 = TMapBase<unsigned___int64,FCsvPersistentCustomStatBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>_>
            ::Find((TMapBase<unsigned___int64,FCsvPersistentCustomStatBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>_>
                    *)&this->StatLookup,local_60);
  if (ppFVar7 != (FCsvPersistentCustomStatBase **)0x0) {
    pTVar6 = (TCsvPersistentCustomStat<float> *)*ppFVar7;
    if (pTVar6->field_0xd == Float) goto LAB_14190f8cb;
    ::FName::ToString((FName *)&local_res8.Value,&local_38);
    UE::Logging::Private::BasicFatalLog
              (&`public:_class_TCsvPersistentCustomStat<float>*___ptr64___cdecl_FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<float>(FName,int,bool)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar6 = ::operator_new(0x14);
  if (pTVar6 == (TCsvPersistentCustomStat<float> *)0x0) {
    pTVar6 = (TCsvPersistentCustomStat<float> *)0x0;
  }
  else {
    *(FCsvPersistentCustomStatBase ***)pTVar6 = local_res8.Value;
    *(undefined4 *)&(pTVar6->Value).field_0x0 = 0;
    *(int *)&pTVar6->field_0x8 = param_2;
    pTVar6->field_0xc = param_3;
    pTVar6->field_0xd = Float;
  }
  local_48 = &local_60;
  local_40 = &local_58;
  local_58 = pTVar6;
  TSet<TTuple<unsigned___int64,FCsvPersistentCustomStatBase_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,FCsvPersistentCustomStatBase_*_&&>_>
            ((TSet<TTuple<unsigned___int64,FCsvPersistentCustomStatBase_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>,FDefaultSetAllocator>
              *)&this->StatLookup,&local_res8,(bool *)&local_48);
  pFVar2 = (this->Stats).AllocatorInstance.Data;
  local_68 = pTVar6;
  if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)(this->Stats).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TCsvPersistentCustomStat<float> *)(*pcVar3)();
    return pTVar6;
  }
  iVar5 = (this->Stats).ArrayNum;
  piVar1 = &(this->Stats).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Stats).AllocatorInstance,piVar1);
  }
  (this->Stats).ArrayNum = iVar5 + 1;
  *(TCsvPersistentCustomStat<float> **)((this->Stats).AllocatorInstance.Data + (longlong)iVar5 * 8)
       = local_68;
LAB_14190f8cb:
  if (this != (FCsvPersistentCustomStats *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res18);
  return pTVar6;
}

// RecordStats @ 141960f20

void __thiscall FCsvPersistentCustomStats::RecordStats(FCsvPersistentCustomStats *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  uint uVar3;
  FName *pFVar4;
  FBlock *pFVar5;
  code *pcVar6;
  LARGE_INTEGER LVar7;
  bool bVar8;
  FCsvProfilerThreadData *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint local_res8 [2];
  uint local_res10;
  FName *local_res18;
  LARGE_INTEGER local_res20;
  
  if (this == (FCsvPersistentCustomStats *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  local_res10 = (this->Stats).ArrayNum;
  uVar10 = (ulonglong)(int)local_res10;
  pFVar12 = (this->Stats).AllocatorInstance.Data;
  pFVar1 = pFVar12 + uVar10 * 8;
LAB_141960fac:
  do {
    if ((this->Stats).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FCsvPersistentCustomStatBase_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      if (this != (FCsvPersistentCustomStats *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
      return;
    }
    pFVar4 = *(FName **)pFVar12;
    cVar2 = *(char *)((longlong)&pFVar4[1].Number + 1);
    if (cVar2 == '\0') {
      FCsvProfiler::RecordCustomStat
                (pFVar4,pFVar4[1].ComparisonIndex.Value,(float)pFVar4[2].ComparisonIndex.Value,Set);
      if ((char)pFVar4[1].Number != '\0') {
        pFVar4[2].ComparisonIndex.Value = 0;
      }
    }
    else if (cVar2 == '\x01') {
      local_res8[0] = pFVar4[2].ComparisonIndex.Value;
      if ((GCsvProfilerIsCapturing != false) &&
         (uVar3 = pFVar4[1].ComparisonIndex.Value, GCsvCategoriesEnabled[uVar3] != false)) {
        if (pFVar4->Number != 0) {
          local_res18 = pFVar4;
          `ValidateFName'::__l2::<lambda_1>::operator()(&local_res18);
        }
        pFVar9 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
        if (pFVar9 == (FCsvProfilerThreadData *)0x0) {
          pFVar9 = FCsvProfilerThreadData::CreateTLSData();
        }
        uVar10 = (pFVar9->CustomStats).Counter;
        uVar11 = uVar10 & 0xff;
        if ((char)uVar10 == '\0') {
          TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock(&pFVar9->CustomStats);
        }
        pFVar5 = (pFVar9->CustomStats).TailBlock;
        QueryPerformanceCounter(&local_res20);
        LVar7 = local_res20;
        FCsvProfilerTrace::OutputCustomStat(pFVar4,uVar3,local_res8[0],'\0',local_res20.QuadPart);
        pFVar5->Entries[uVar11]._padding_ = (longlong)*pFVar4;
        pFVar5->Entries[uVar11].Value.AsInt = local_res8[0];
        ((LARGE_INTEGER *)(pFVar5->Entries + uVar11))->QuadPart = (LONGLONG)LVar7;
        *(uint *)&pFVar5->Entries[uVar11]._padding_ = uVar3;
        *(undefined2 *)((longlong)&pFVar5->Entries[uVar11]._padding_ + 4) = 0xd00;
        (pFVar9->CustomStats).Counter = (pFVar9->CustomStats).Counter + 1;
      }
      if ((char)pFVar4[1].Number != '\0') {
        uVar10 = (ulonglong)local_res10;
        pFVar12 = pFVar12 + 8;
        pFVar4[2].ComparisonIndex.Value = 0;
        goto LAB_141960fac;
      }
    }
    uVar10 = (ulonglong)local_res10;
    pFVar12 = pFVar12 + 8;
  } while( true );
}

