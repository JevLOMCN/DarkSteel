// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 36

// FAnalysisSession @ 14d3cb8f0

FAnalysisSession * __thiscall
TraceServices::FAnalysisSession::FAnalysisSession
          (FAnalysisSession *this,uint param_1,wchar_t *param_2,
          TUniquePtr<UE::Trace::IInDataStream,TDefaultDelete<UE::Trace::IInDataStream>_> *param_3)

{
  wchar_t *pwVar1;
  
  this->_padding_ = (longlong)&___7FAnalysisSession_TraceServices__6B_;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  ::FString::FString(&this->Name,param_2);
  this->TraceId = param_1;
  this->DurationSeconds = 0.0;
  this->BaseDateTime = 0.0;
  *(undefined8 *)&this->Metadata = 0;
  *(undefined8 *)&(this->Metadata).field_0x8 = 0;
  *(undefined8 *)&(this->Metadata).field_0x20 = 0;
  *(undefined4 *)&(this->Metadata).field_0x28 = 0;
  *(undefined4 *)&(this->Metadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->Metadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Metadata).field_0x34 = 0;
  *(undefined8 *)&(this->Metadata).field_0x40 = 0;
  *(undefined4 *)&(this->Metadata).field_0x48 = 0;
  (this->Allocator)._padding_ = (longlong)&___7FSlabAllocator_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Allocator).Cs,4000);
  (this->Allocator).Slabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).Slabs.ArrayNum = 0;
  (this->Allocator).Slabs.ArrayMax = 0;
  (this->Allocator).CurrentSlab = (uchar *)0x0;
  (this->Allocator).SlabSize = 0x2000000;
  (this->Allocator).CurrentSlabAllocatedSize = 0;
  (this->Allocator).TotalUsedSize = 0;
  (this->Allocator).TotalAllocatedSize = 0;
  (this->StringStore)._padding_ = (longlong)&___7FStringStore_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->StringStore).Cs,4000);
  *(undefined8 *)&(this->StringStore).StoredStrings = 0;
  *(undefined8 *)&(this->StringStore).StoredStrings.field_0x8 = 0;
  *(undefined8 *)&(this->StringStore).StoredStrings.field_0x20 = 0;
  (this->StringStore).Allocator = &this->Allocator;
  *(undefined4 *)&(this->StringStore).StoredStrings.field_0x28 = 0;
  *(undefined4 *)&(this->StringStore).StoredStrings.field_0x2c = 0x80;
  *(undefined4 *)&(this->StringStore).StoredStrings.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringStore).StoredStrings.field_0x34 = 0;
  *(undefined8 *)&(this->StringStore).StoredStrings.field_0x40 = 0;
  *(undefined4 *)&(this->StringStore).StoredStrings.field_0x48 = 0;
  (this->StringStore).FindStoredStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringStore).FindStoredStrings.ArrayNum = 0;
  (this->StringStore).FindStoredStrings.ArrayMax = 0;
  (this->StringStore).BufferPtr = (wchar_t *)0x0;
  (this->StringStore).BufferLeft = 0;
  (this->StringStore).BlockCount = 0;
  if ((this->Name).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
  }
  FAnalysisCache::FAnalysisCache(&this->Cache,pwVar1);
  (this->Analyzers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Analyzers).ArrayNum = 0;
  (this->Analyzers).ArrayMax = 0;
  *(undefined8 *)&this->Providers = 0;
  *(undefined8 *)&(this->Providers).field_0x8 = 0;
  *(undefined8 *)&(this->Providers).field_0x20 = 0;
  *(undefined4 *)&(this->Providers).field_0x28 = 0;
  *(undefined4 *)&(this->Providers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Providers).field_0x34 = 0;
  *(undefined4 *)&(this->Providers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Providers).field_0x40 = 0;
  *(undefined4 *)&(this->Providers).field_0x48 = 0;
  (this->PendingMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingMessages).ArrayNum = 0;
  (this->PendingMessages).ArrayMax = 0;
  this->PendingMessagesCount = (atomic<unsigned_int>)0x0;
  (this->DataStream).Ptr = param_3->Ptr;
  param_3->Ptr = (IInDataStream *)0x0;
  (this->Processor).Impl = (FImpl *)0x0;
  return this;
}

// ~FAnalysisSession @ 14d3cf450

void __thiscall TraceServices::FAnalysisSession::~FAnalysisSession(FAnalysisSession *this)

{
  undefined8 *puVar1;
  IInDataStream *pIVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  BOOLEAN BVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = (this->Analyzers).ArrayNum - 1;
  this->_padding_ = (longlong)&___7FAnalysisSession_TraceServices__6B_;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Analyzers).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar1 = *(undefined8 **)((this->Analyzers).AllocatorInstance.Data + lVar9);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar9 = lVar9 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  UE::Trace::FAnalysisProcessor::~FAnalysisProcessor(&this->Processor);
  pIVar2 = (this->DataStream).Ptr;
  if (pIVar2 != (IInDataStream *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  DestructItems<TraceServices::FAnalysisMessage,int>
            ((FAnalysisMessage *)(this->PendingMessages).AllocatorInstance.Data,
             (this->PendingMessages).ArrayNum);
  pFVar3 = (this->PendingMessages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->Providers).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Providers).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Providers);
  pFVar3 = (this->Analyzers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FAnalysisCache::~FAnalysisCache(&this->Cache);
  (this->StringStore)._padding_ = (longlong)&___7FStringStore_TraceServices__6B_;
  pFVar3 = (this->StringStore).FindStoredStrings.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->StringStore).StoredStrings.field_0x48 = 0;
  pvVar4 = *(void **)&(this->StringStore).StoredStrings.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StringStore).StoredStrings);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->StringStore).Cs);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  *(undefined4 *)&(this->Metadata).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Metadata).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::FTraceSessionMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::FTraceSessionMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::FTraceSessionMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Metadata);
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar7 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (!bVar6) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d3cf651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  return;
}

// AddAnalyzer @ 14d3d3130

void __thiscall
TraceServices::FAnalysisSession::AddAnalyzer(FAnalysisSession *this,IAnalyzer *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UE::Trace::IAnalyzer_*,TSizedDefaultAllocator<32>_> *pTVar6;
  IAnalyzer *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (IAnalyzer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Analyzer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0xdc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = &this->Analyzers;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Analyzers).ArrayMax * 8)) {
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
  iVar5 = (this->Analyzers).ArrayNum;
  piVar1 = &(this->Analyzers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->Analyzers).ArrayNum = iVar5 + 1;
  *(IAnalyzer **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// AddAnalyzer @ 14d3d3220

void __thiscall
TraceServices::FAnalysisSession::AddAnalyzer
          (FAnalysisSession *this,TSharedRef<UE::Trace::IAnalyzer,1> *param_1)

{
  int *piVar1;
  TArray<UE::Trace::IAnalyzer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  IAnalyzer *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *local_18 [2];
  
  pTVar2 = &this->Analyzers;
  puVar9 = ::operator_new(0x18);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar4 = param_1->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      *puVar9 = &___7FAnalyzerWrapper_TraceServices__6B_;
      puVar9[1] = pIVar4;
      puVar9[2] = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      *puVar9 = &___7FAnalyzerWrapper_TraceServices__6B_;
      puVar9[1] = pIVar4;
      puVar9[2] = pTVar3;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = puVar9;
  if ((pFVar5 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5 + (longlong)(this->Analyzers).ArrayMax * 8)) {
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
  iVar8 = (this->Analyzers).ArrayNum;
  piVar1 = &(this->Analyzers).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Analyzers).ArrayNum = iVar8 + 1;
  *(undefined8 **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddMetadata @ 14d3d3c60

void __thiscall
TraceServices::FAnalysisSession::AddMetadata(FAnalysisSession *this,FName param_1,double param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res10;
  FName *local_res18 [2];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_1;
  if (((FAnalysisSessionLock *)*(undefined1 **)(lVar1 + 0x9b68) != &this->Lock) ||
     (*(int *)(lVar1 + 0x9b60) < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x50,L"Trying to write to session outside of an EditScope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res18[0] = &local_res10;
  TSet<TTuple<FName,TraceServices::FTraceSessionMetadata>,TDefaultMapHashableKeyFuncs<FName,TraceServices::FTraceSessionMetadata,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,TraceServices::FTraceSessionMetadata>,TDefaultMapHashableKeyFuncs<FName,TraceServices::FTraceSessionMetadata,0>,FDefaultSetAllocator>
              *)&this->Metadata,&local_res8,(bool *)local_res18);
  lVar1 = *(longlong *)&this->Metadata;
  lVar4 = (longlong)(int)local_res8.Key * 0x38;
  *(double *)(lVar4 + 0x18 + lVar1) = param_2;
  *(FName *)(lVar4 + 8 + lVar1) = local_res10;
  *(undefined4 *)(lVar4 + 0x10 + lVar1) = 1;
  return;
}

// AddMetadata @ 14d3d3d20

void __thiscall
TraceServices::FAnalysisSession::AddMetadata(FAnalysisSession *this,FName param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res10;
  FName *local_res18;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_1;
  if (((FAnalysisSessionLock *)*(undefined1 **)(lVar5 + 0x9b68) != &this->Lock) ||
     (*(int *)(lVar5 + 0x9b60) < 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x50,L"Trying to write to session outside of an EditScope");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FName,TraceServices::FTraceSessionMetadata>,TDefaultMapHashableKeyFuncs<FName,TraceServices::FTraceSessionMetadata,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,TraceServices::FTraceSessionMetadata>,TDefaultMapHashableKeyFuncs<FName,TraceServices::FTraceSessionMetadata,0>,FDefaultSetAllocator>
              *)&this->Metadata,&local_res8,(bool *)&local_res18);
  lVar5 = (longlong)(int)local_res8.Key * 0x38 + *(longlong *)&this->Metadata;
  *(FName *)(lVar5 + 8) = local_res10;
  *(undefined4 *)(lVar5 + 0x10) = 2;
  iVar1 = (param_2->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange
            ((FString *)(lVar5 + 0x20),(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddMetadata @ 14d3d3e00

void __thiscall
TraceServices::FAnalysisSession::AddMetadata(FAnalysisSession *this,FName param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res10;
  FName *local_res18;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_1;
  if (((FAnalysisSessionLock *)*(undefined1 **)(lVar3 + 0x9b68) != &this->Lock) ||
     (*(int *)(lVar3 + 0x9b60) < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x50,L"Trying to write to session outside of an EditScope");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FName,TraceServices::FTraceSessionMetadata>,TDefaultMapHashableKeyFuncs<FName,TraceServices::FTraceSessionMetadata,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,TraceServices::FTraceSessionMetadata>,TDefaultMapHashableKeyFuncs<FName,TraceServices::FTraceSessionMetadata,0>,FDefaultSetAllocator>
              *)&this->Metadata,&local_res8,(bool *)&local_res18);
  lVar3 = (longlong)(int)local_res8.Key * 0x38 + *(longlong *)&this->Metadata;
  *(FName *)(lVar3 + 8) = local_res10;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(long64 *)(lVar3 + 0x18) = param_2;
  return;
}

// AddProvider @ 14d3d3ec0

void __thiscall
TraceServices::FAnalysisSession::AddProvider
          (FAnalysisSession *this,FName *param_1,TSharedPtr<TraceServices::IProvider,1> *param_2,
          TSharedPtr<TraceServices::IEditableProvider,1> *param_3)

{
  FName *local_38;
  undefined8 *local_30;
  IProvider *local_28;
  TReferenceControllerBase<1> *local_20;
  IEditableProvider *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_28 = param_2->Object;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = param_3->Object;
  local_10 = (param_3->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = &local_28;
  local_38 = param_1;
  TSet<TTuple<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>_&&>_>
            ((TSet<TTuple<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>,FDefaultSetAllocator>
              *)&this->Providers,
             (TPairInitializer<FName_const_&,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>_&&>
              *)&stack0x00000008,(bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// BeginEdit @ 14d3d54f0

void __thiscall TraceServices::FAnalysisSession::BeginEdit(FAnalysisSession *this)

{
  FAnalysisSessionLock::BeginEdit(&this->Lock);
  return;
}

// BeginRead @ 14d3d5980

void __thiscall TraceServices::FAnalysisSession::BeginRead(FAnalysisSession *this)

{
  FAnalysisSessionLock *SRWLock;
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulong uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar5 = _tls_index;
  SRWLock = &this->Lock;
  uVar7 = (ulonglong)_tls_index;
  puVar2 = *(undefined1 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9b68)
  ;
  if ((puVar2 != (undefined1 *)0x0) && ((FAnalysisSessionLock *)puVar2 != SRWLock)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GThreadCurrentSessionLock || GThreadCurrentSessionLock == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x55,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9b60) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentWriteLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x56,L"Trying to lock for read while holding write access");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar5 * 8);
  iVar1 = *(int *)(lVar3 + 0x9b64);
  *(int *)(lVar3 + 0x9b64) = iVar1 + 1;
  if (iVar1 == 0) {
    *(FAnalysisSessionLock **)(lVar3 + 0x9b68) = SRWLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// DrainPendingMessages @ 14d3d8c30

TArray<TraceServices::FAnalysisMessage,TSizedDefaultAllocator<32>_> * __thiscall
TraceServices::FAnalysisSession::DrainPendingMessages
          (FAnalysisSession *this,
          TArray<TraceServices::FAnalysisMessage,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TraceServices::FAnalysisMessage,TSizedDefaultAllocator<32>_> *pTVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (((FAnalysisSessionLock *)*(undefined1 **)(lVar1 + 0x9b68) != &this->Lock) ||
     (*(int *)(lVar1 + 0x9b60) < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x50,L"Trying to write to session outside of an EditScope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<TraceServices::FAnalysisMessage,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  LOCK();
  this->PendingMessagesCount = (atomic<unsigned_int>)0x0;
  UNLOCK();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->PendingMessages).AllocatorInstance.Data;
  (this->PendingMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (this->PendingMessages).ArrayNum;
  __return_storage_ptr__->ArrayMax = (this->PendingMessages).ArrayMax;
  (this->PendingMessages).ArrayNum = 0;
  (this->PendingMessages).ArrayMax = 0;
  return __return_storage_ptr__;
}

// EditProviderPrivate @ 14d3d9ad0

IEditableProvider * __thiscall
TraceServices::FAnalysisSession::EditProviderPrivate(FAnalysisSession *this,FName *param_1)

{
  TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
  *pTVar1;
  
  pTVar1 = TMapBase<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>_>
           ::Find((TMapBase<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>_>
                   *)&this->Providers,*param_1);
  if (pTVar1 != (TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
                 *)0x0) {
    return *(IEditableProvider **)&pTVar1->field_0x10;
  }
  return (IEditableProvider *)0x0;
}

// EndEdit @ 14d3db3c0

void __thiscall TraceServices::FAnalysisSession::EndEdit(FAnalysisSession *this)

{
  FAnalysisSessionLock::EndEdit(&this->Lock);
  return;
}

// EndRead @ 14d3dba90

void __thiscall TraceServices::FAnalysisSession::EndRead(FAnalysisSession *this)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9b64) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentReadLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x60,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
  piVar1 = (int *)(lVar2 + 0x9b64);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
    *(undefined8 *)(lVar2 + 0x9b68) = 0;
  }
  return;
}

// EnumerateMetadata @ 14d3dc840

void __thiscall
TraceServices::FAnalysisSession::EnumerateMetadata
          (FAnalysisSession *this,
          TFunctionRef<void___cdecl(TraceServices::FTraceSessionMetadata_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FAnalysisSessionLock::ReadAccessCheck(&this->Lock);
  iVar3 = *(int *)&(this->Metadata).field_0x28;
  puVar1 = &(this->Metadata).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Metadata).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d3dc8ed;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14d3dc8ed:
  uVar10 = *(uint *)&(this->Metadata).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Metadata).field_0x8 - *(int *)&(this->Metadata).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Metadata).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Metadata).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d3dc9f0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14d3dc9f0:
  while( true ) {
    if (*(int *)&(this->Metadata).field_0x8 - *(int *)&(this->Metadata).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TraceServices::FTraceSessionMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,
               *(longlong *)&this->Metadata + (longlong)TStack_60.CurrentBitIndex * 0x38 + 8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetBaseDateTime @ 14d3e0010

double __thiscall TraceServices::FAnalysisSession::GetBaseDateTime(FAnalysisSession *this)

{
  return this->BaseDateTime;
}

// GetCache @ 14d3e0380

IAnalysisCache * __thiscall TraceServices::FAnalysisSession::GetCache(FAnalysisSession *this)

{
  return (IAnalysisCache *)&this->Cache;
}

// GetDurationSeconds @ 14d3e07b0

double __thiscall TraceServices::FAnalysisSession::GetDurationSeconds(FAnalysisSession *this)

{
  FAnalysisSessionLock::ReadAccessCheck(&this->Lock);
  return this->DurationSeconds;
}

// GetLinearAllocator @ 14d3e0dd0

ILinearAllocator * __thiscall
TraceServices::FAnalysisSession::GetLinearAllocator(FAnalysisSession *this)

{
  return (ILinearAllocator *)&this->Allocator;
}

// GetMetadataCount @ 14d3e0e20

uint __thiscall TraceServices::FAnalysisSession::GetMetadataCount(FAnalysisSession *this)

{
  FAnalysisSessionLock::ReadAccessCheck(&this->Lock);
  return *(int *)&(this->Metadata).field_0x8 - *(int *)&(this->Metadata).field_0x34;
}

// GetName @ 14d3e0e60

wchar_t * __thiscall TraceServices::FAnalysisSession::GetName(FAnalysisSession *this)

{
  if ((this->Name).Data.ArrayNum != 0) {
    return (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
  }
  return L"";
}

// GetNumPendingMessages @ 14d3e0eb0

uint __thiscall TraceServices::FAnalysisSession::GetNumPendingMessages(FAnalysisSession *this)

{
  return (uint)this->PendingMessagesCount;
}

// GetStringStore @ 14d3e2af0

IStringStore * __thiscall TraceServices::FAnalysisSession::GetStringStore(FAnalysisSession *this)

{
  return (IStringStore *)&this->StringStore;
}

// GetTraceId @ 14d3e3900

uint __thiscall TraceServices::FAnalysisSession::GetTraceId(FAnalysisSession *this)

{
  return this->TraceId;
}

// IsAnalysisComplete @ 14d3e6b00

bool __thiscall TraceServices::FAnalysisSession::IsAnalysisComplete(FAnalysisSession *this)

{
  bool bVar1;
  
  bVar1 = UE::Trace::FAnalysisProcessor::IsActive(&this->Processor);
  return !bVar1;
}

// OnAnalysisMessage @ 14d3ead80

/* WARNING: Removing unreachable block (ram,0x00014d3eaf22) */

void __thiscall
TraceServices::FAnalysisSession::OnAnalysisMessage
          (FAnalysisSession *this,EAnalysisMessageSeverity param_1,TStringView<wchar_t> *param_2)

{
  int *piVar1;
  TArray<TraceServices::FAnalysisMessage,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  undefined4 uVar8;
  FString local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined4 local_38 [2];
  FString local_30;
  
  uVar8 = 4;
  if (param_1 != Info) {
    if (param_1 == Warning) {
      uVar8 = 3;
    }
    else if (param_1 == Error) {
      uVar8 = 1;
    }
  }
  FAnalysisSessionLock::BeginEdit(&this->Lock);
  local_48 = param_2->DataPtr;
  uStack_40 = *(undefined8 *)&param_2->Size;
  pTVar2 = &this->PendingMessages;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_38[0] = uVar8;
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_58,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_30 != pFVar7) {
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    local_30.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_30.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar3 + (longlong)(this->PendingMessages).ArrayMax * 0x18)) &&
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
  iVar6 = (this->PendingMessages).ArrayNum;
  piVar1 = &(this->PendingMessages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingMessages).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
  *(undefined4 *)pFVar3 = local_38[0];
  *(undefined8 *)(pFVar3 + 8) = 0;
  *(FScriptContainerElement **)(pFVar3 + 8) = local_30.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 0x10) = local_30.Data.ArrayNum;
  *(int *)(pFVar3 + 0x14) = local_30.Data.ArrayMax;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  LOCK();
  this->PendingMessagesCount = (atomic<unsigned_int>)((int)this->PendingMessagesCount + 1);
  UNLOCK();
  FAnalysisSessionLock::EndEdit(&this->Lock);
  return;
}

// ReadAccessCheck @ 14d3fcf00

void __thiscall TraceServices::FAnalysisSession::ReadAccessCheck(FAnalysisSession *this)

{
  FAnalysisSessionLock::ReadAccessCheck(&this->Lock);
  return;
}

// ReadProviderPrivate @ 14d3fd1c0

IProvider * __thiscall
TraceServices::FAnalysisSession::ReadProviderPrivate(FAnalysisSession *this,FName *param_1)

{
  TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
  *pTVar1;
  
  pTVar1 = TMapBase<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>_>
           ::Find((TMapBase<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>_>
                   *)&this->Providers,*param_1);
  if (pTVar1 != (TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
                 *)0x0) {
    return *(IProvider **)pTVar1;
  }
  return (IProvider *)0x0;
}

// SetBaseDateTime @ 14d4021e0

void __thiscall
TraceServices::FAnalysisSession::SetBaseDateTime(FAnalysisSession *this,double param_1)

{
  this->BaseDateTime = param_1;
  return;
}

// Start @ 14d402560

void __thiscall TraceServices::FAnalysisSession::Start(FAnalysisSession *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FAnalysisProcessor FVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  FAnalysisProcessor local_res10;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType FStack_90;
  int local_88;
  undefined1 local_80 [8];
  FDelegateAllocation local_78;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_b0 = (this->Analyzers).ArrayNum;
  lVar10 = (longlong)local_b0;
  pFVar1 = (this->Analyzers).AllocatorInstance.Data;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_88 = 0;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_90.Data = (FScriptContainerElement *)0x0;
  if (local_b0 == 0) {
    local_ac = 0;
    iVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_b0,0,&local_b8,local_b0,&local_ac);
    memcpy(local_b8.Data,pFVar1,lVar10 << 3);
    iVar8 = local_b0;
  }
  pFVar1 = local_b8.Data + (longlong)iVar8 * 8;
  FVar7.Data = local_b8.Data;
  iVar9 = iVar8;
  while( true ) {
    if (iVar9 != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    UE::Trace::FAnalysisContext::AddAnalyzer((FAnalysisContext *)local_a8,*(IAnalyzer **)FVar7.Data)
    ;
    FVar7.Data = FVar7.Data + 8;
    iVar9 = local_b0;
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_80 = (undefined1  [8])0x0;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_78;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_78);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAnalysisSession_TraceServices____A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnAnalysisMessage;
    puVar4[3] = this;
    if (this == (FAnalysisSession *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  UE::Trace::FAnalysisContext::SetMessageDelegate
            ((FAnalysisContext *)local_a8,
             (TDelegate<void___cdecl(UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
              *)local_80);
  FVar6 = UE::Trace::FAnalysisContext::Process
                    ((FAnalysisContext *)local_a8,(IInDataStream *)&local_res10);
  UE::Trace::FAnalysisProcessor::operator=(&this->Processor,(FAnalysisProcessor *)FVar6.Impl);
  UE::Trace::FAnalysisProcessor::~FAnalysisProcessor(&local_res10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_68);
  if ((local_88 != 0) && (FStack_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return;
}

// Stop @ 14d4036e0

void __thiscall TraceServices::FAnalysisSession::Stop(FAnalysisSession *this,bool param_1)

{
  (**(code **)((longlong)*(this->DataStream).Ptr + 0x10))();
  UE::Trace::FAnalysisProcessor::Stop(&this->Processor);
  if (param_1) {
    (**(code **)(this->_padding_ + 0x10))(this);
  }
  return;
}

// StoreString @ 14d403af0

wchar_t * __thiscall
TraceServices::FAnalysisSession::StoreString(FAnalysisSession *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d403afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)((this->StringStore)._padding_ + 0x18))();
  return pwVar1;
}

// StoreString @ 14d403b10

wchar_t * __thiscall
TraceServices::FAnalysisSession::StoreString(FAnalysisSession *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d403b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)((this->StringStore)._padding_ + 0x20))();
  return pwVar1;
}

// UpdateDurationSeconds @ 14d4061f0

void __thiscall
TraceServices::FAnalysisSession::UpdateDurationSeconds(FAnalysisSession *this,double param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (((FAnalysisSessionLock *)*(undefined1 **)(lVar1 + 0x9b68) != &this->Lock) ||
     (*(int *)(lVar1 + 0x9b60) < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x50,L"Trying to write to session outside of an EditScope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar4 = this->DurationSeconds;
  if (this->DurationSeconds <= param_1) {
    dVar4 = param_1;
  }
  this->DurationSeconds = dVar4;
  return;
}

// Wait @ 14d406630

void __thiscall TraceServices::FAnalysisSession::Wait(FAnalysisSession *this)

{
  UE::Trace::FAnalysisProcessor::Wait(&this->Processor);
  return;
}

// WriteAccessCheck @ 14d406650

void __thiscall TraceServices::FAnalysisSession::WriteAccessCheck(FAnalysisSession *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (((FAnalysisSessionLock *)*(undefined1 **)(lVar1 + 0x9b68) != &this->Lock) ||
     (*(int *)(lVar1 + 0x9b60) < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x50,L"Trying to write to session outside of an EditScope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

