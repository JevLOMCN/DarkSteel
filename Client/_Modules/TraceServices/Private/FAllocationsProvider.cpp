// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 50

// FAllocationsProvider @ 14d3caf20

FAllocationsProvider * __thiscall
TraceServices::FAllocationsProvider::FAllocationsProvider
          (FAllocationsProvider *this,IAnalysisSession *param_1,FMetadataProvider *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ILinearAllocator *pIVar4;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *pTVar5;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *pTVar6;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *pTVar7;
  
  pTVar7 = (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)0x0;
  piVar1 = &(this->HeapSpecs).ArrayNum;
  piVar2 = &(this->HeapSpecs).ArrayMax;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IAllocationsProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  this->Session = param_1;
  *(undefined8 *)&(this->TagTracker).TrackerThreadStates = 0;
  *(undefined8 *)&(this->TagTracker).TrackerThreadStates.field_0x8 = 0;
  *(undefined8 *)&(this->TagTracker).TrackerThreadStates.field_0x20 = 0;
  (this->TagTracker).Session = param_1;
  this->MetadataProvider = param_2;
  this->InitTime = 0.0;
  this->PlatformPageSize = 0;
  this->MinAlignment = '\0';
  this->SizeShift = '\0';
  this->SummarySizeShift = '\0';
  this->bInitialized = false;
  *(undefined4 *)&(this->TagTracker).TrackerThreadStates.field_0x28 = 0;
  *(undefined4 *)&(this->TagTracker).TrackerThreadStates.field_0x2c = 0x80;
  *(undefined4 *)&(this->TagTracker).TrackerThreadStates.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagTracker).TrackerThreadStates.field_0x34 = 0;
  *(undefined8 *)&(this->TagTracker).TrackerThreadStates.field_0x40 = 0;
  *(undefined4 *)&(this->TagTracker).TrackerThreadStates.field_0x48 = 0;
  *(undefined8 *)&(this->TagTracker).TagMap = 0;
  *(undefined8 *)&(this->TagTracker).TagMap.field_0x8 = 0;
  *(undefined8 *)&(this->TagTracker).TagMap.field_0x20 = 0;
  *(undefined4 *)&(this->TagTracker).TagMap.field_0x28 = 0;
  *(undefined4 *)&(this->TagTracker).TagMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TagTracker).TagMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagTracker).TagMap.field_0x34 = 0;
  *(undefined8 *)&(this->TagTracker).TagMap.field_0x40 = 0;
  *(undefined4 *)&(this->TagTracker).TagMap.field_0x48 = 0;
  (this->TagTracker).PendingTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagTracker).PendingTags.ArrayNum = 0;
  (this->TagTracker).PendingTags.ArrayMax = 0;
  (this->TagTracker).CustomNameTag = 0xffffffff;
  (this->TagTracker).NumErrors = 0;
  (this->TagTracker).NumWarnings = 0;
  (this->HeapSpecs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->RootHeaps[0] = (FRootHeap *)0x0;
  this->RootHeaps[1] = (FRootHeap *)0x0;
  this->RootHeaps[2] = (FRootHeap *)0x0;
  this->RootHeaps[3] = (FRootHeap *)0x0;
  this->RootHeaps[4] = (FRootHeap *)0x0;
  this->RootHeaps[5] = (FRootHeap *)0x0;
  this->RootHeaps[6] = (FRootHeap *)0x0;
  this->RootHeaps[7] = (FRootHeap *)0x0;
  this->RootHeaps[8] = (FRootHeap *)0x0;
  this->RootHeaps[9] = (FRootHeap *)0x0;
  this->RootHeaps[10] = (FRootHeap *)0x0;
  this->RootHeaps[0xb] = (FRootHeap *)0x0;
  this->RootHeaps[0xc] = (FRootHeap *)0x0;
  this->RootHeaps[0xd] = (FRootHeap *)0x0;
  this->RootHeaps[0xe] = (FRootHeap *)0x0;
  this->RootHeaps[0xf] = (FRootHeap *)0x0;
  this->AllocCount = 0;
  this->FreeCount = 0;
  this->HeapCount = 0;
  this->AllocEvents = 0;
  this->FreeEvents = 0;
  this->HeapEvents = 0;
  this->SwapOpEvents = 0;
  this->MiscWarnings = 0;
  this->MiscErrors = 0;
  this->HeapWarnings = 0;
  this->HeapErrors = 0;
  this->AllocWarnings = 0;
  this->AllocErrors = 0;
  this->FreeWarnings = 0;
  this->FreeErrors = 0;
  this->SwapWarnings = 0;
  this->SwapErrors = 0;
  this->TotalAllocatedMemory = 0;
  this->TotalLiveAllocations = 0;
  this->TotalSwapMemory = 0;
  this->TotalCompressedSwapMemory = 0;
  this->SampleStartTimestamp = 0.0;
  this->SampleEndTimestamp = 0.0;
  pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (this->Timeline).Allocator = pIVar4;
  (this->Timeline).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timeline).PagesArray.ArrayNum = 0;
  (this->Timeline).PagesArray.ArrayMax = 0;
  (this->Timeline).FirstPage = (TPagedArrayPage<double> *)0x0;
  (this->Timeline).LastPage = (TPagedArrayPage<double> *)0x0;
  (this->Timeline).PageSize = 0x400;
  (this->Timeline).TotalItemCount = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU64[0] = pTVar6;
  this->SampleValuesU64[0] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU64[1] = pTVar6;
  this->SampleValuesU64[1] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU64[2] = pTVar6;
  this->SampleValuesU64[2] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU64[3] = pTVar6;
  this->SampleValuesU64[3] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU64[4] = pTVar6;
  this->SampleValuesU64[4] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU64[5] = pTVar6;
  this->SampleValuesU64[5] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU32[0] =
       (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)pTVar6;
  this->SampleValuesU32[0] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU32[1] =
       (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)pTVar6;
  this->SampleValuesU32[1] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU32[2] =
       (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)pTVar6;
  this->SampleValuesU32[2] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU32[3] =
       (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)pTVar6;
  this->SampleValuesU32[3] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU32[4] =
       (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)pTVar6;
  this->SampleValuesU32[4] = 0;
  pTVar5 = ::operator_new(0x38);
  pTVar6 = pTVar7;
  if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar5->Allocator = pIVar4;
    (pTVar5->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->PagesArray).ArrayNum = 0;
    (pTVar5->PagesArray).ArrayMax = 0;
    pTVar5->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar5->PageSize = 0x400;
    pTVar5->TotalItemCount = 0;
    pTVar6 = pTVar5;
  }
  this->ValueTimelinesU32[5] =
       (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)pTVar6;
  this->SampleValuesU32[5] = 0;
  pTVar6 = ::operator_new(0x38);
  if (pTVar6 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    pIVar4 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar6->Allocator = pIVar4;
    (pTVar6->PagesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar6->PagesArray).ArrayNum = 0;
    (pTVar6->PagesArray).ArrayMax = 0;
    pTVar6->FirstPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar6->LastPage = (TPagedArrayPage<unsigned___int64> *)0x0;
    pTVar6->PageSize = 0x400;
    pTVar6->TotalItemCount = 0;
    pTVar7 = pTVar6;
  }
  this->ValueTimelinesU32[6] =
       (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)pTVar7;
  this->SampleValuesU32[6] = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0x400,&(this->HeapSpecs).AllocatorInstance,piVar1,piVar2);
  memset((this->HeapSpecs).AllocatorInstance.Data + (longlong)iVar3 * 8,0,0x2000);
  return this;
}

// ~FAllocationsProvider @ 14d3cef30

void __thiscall
TraceServices::FAllocationsProvider::~FAllocationsProvider(FAllocationsProvider *this)

{
  TArray<TraceServices::IAllocationsProvider::FHeapSpec_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FRootHeap *pFVar3;
  FSbTree *this_00;
  FLiveAllocCollection *this_01;
  void *pvVar4;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *pTVar5;
  TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *pTVar6;
  code *pcVar7;
  BOOLEAN BVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FRootHeap **ppFVar13;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> **ppTVar14;
  TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> **ppTVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IAllocationsProvider__;
  ppFVar13 = this->RootHeaps;
  lVar12 = 0x10;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  do {
    pFVar3 = *ppFVar13;
    if (pFVar3 != (FRootHeap *)0x0) {
      this_00 = pFVar3->SbTree;
      pFVar3->HeapSpec = (FHeapSpec *)0x0;
      if (this_00 != (FSbTree *)0x0) {
        FSbTree::~FSbTree(this_00);
        ::operator_delete(this_00,0x48);
        pFVar3->SbTree = (FSbTree *)0x0;
      }
      this_01 = pFVar3->LiveAllocs;
      if (this_01 != (FLiveAllocCollection *)0x0) {
        FLiveAllocCollection::~FLiveAllocCollection(this_01);
        ::operator_delete(this_01,0x138);
        pFVar3->LiveAllocs = (FLiveAllocCollection *)0x0;
      }
      ::operator_delete(pFVar3,0x2b8);
      *ppFVar13 = (FRootHeap *)0x0;
    }
    ppFVar13 = ppFVar13 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  pTVar1 = &this->HeapSpecs;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  iVar2 = (this->HeapSpecs).ArrayNum;
  pFVar11 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->HeapSpecs).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TraceServices::IAllocationsProvider::FHeapSpec_*,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    pvVar4 = *(void **)pFVar10;
    if (pvVar4 != (void *)0x0) {
      if (*(void **)((longlong)pvVar4 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar4 + 0x10));
      }
      ::operator_delete(pvVar4,0x30);
    }
    pFVar10 = pFVar10 + 8;
  }
  (this->HeapSpecs).ArrayNum = 0;
  if ((this->HeapSpecs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->HeapSpecs).ArrayMax);
  }
  ppTVar14 = this->ValueTimelinesU64;
  lVar12 = 6;
  do {
    pTVar5 = *ppTVar14;
    if (pTVar5 != (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *
                  )0x0) {
      iVar2 = (pTVar5->PagesArray).ArrayNum;
      pFVar11 = (pTVar5->PagesArray).AllocatorInstance.Data;
      pFVar10 = pFVar11 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((pTVar5->PagesArray).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TraceServices::TPagedArrayPage<unsigned___int64>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar10) break;
        pFVar11 = pFVar11 + 0x10;
      }
      pFVar11 = (pTVar5->PagesArray).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      ::operator_delete(pTVar5,0x38);
      *ppTVar14 = (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *
                  )0x0;
    }
    ppTVar14 = ppTVar14 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  ppTVar15 = this->ValueTimelinesU32;
  lVar12 = 7;
  do {
    pTVar6 = *ppTVar15;
    if (pTVar6 != (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)0x0) {
      iVar2 = (pTVar6->PagesArray).ArrayNum;
      pFVar11 = (pTVar6->PagesArray).AllocatorInstance.Data;
      pFVar10 = pFVar11 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((pTVar6->PagesArray).ArrayNum != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TraceServices::TPagedArrayPage<unsigned_int>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar11 == pFVar10) break;
        pFVar11 = pFVar11 + 0x10;
      }
      pFVar11 = (pTVar6->PagesArray).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      ::operator_delete(pTVar6,0x38);
      *ppTVar15 = (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)0x0;
    }
    ppTVar15 = ppTVar15 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::
  ~TPagedArray<double,TraceServices::TPagedArrayPage<double>_>(&this->Timeline);
  pFVar11 = (pTVar1->AllocatorInstance).Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  FTagTracker::~FTagTracker(&this->TagTracker);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  return;
}

// operator() @ 14d3d18d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::<lambda_1>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulong64 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  uStack_20 = param_1->SizeAndAlignment & 0xffffffffffffff;
  **(longlong **)this = **(longlong **)this + uStack_20;
  local_28 = param_1->Address;
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  pFVar3 = pFVar2->Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     (lVar7 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4),
     (FScriptContainerElement *)&local_28 < pFVar3 + lVar7 * 0x10)) {
    local_40 = (longlong)*(int *)&pFVar2[1].Data;
    local_38 = 0x10;
    local_58 = &local_28;
    local_50 = pFVar3;
    local_48 = lVar7;
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
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(ulong64 *)(pFVar3 + (longlong)iVar6 * 0x10) = local_28;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_20;
  return;
}

// AddHeapSpec @ 14d3d37a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FAllocationsProvider::AddHeapSpec
          (FAllocationsProvider *this,uint param_1,uint param_2,TStringView<wchar_t> *param_3,
          EMemoryTraceHeapFlags param_4)

{
  int *piVar1;
  FRootHeap *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  FHeapSpec *pFVar9;
  FHeapSpec *pFVar10;
  FHeapSpec *local_38 [2];
  
  pwVar8 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,param_3);
  if (0xf < param_1) {
    pFVar9 = GetOrCreateHeapSpec(this,param_2);
    if (pFVar9->Name == GDefaultHeapName) {
      if ((param_2 < 0x10) && (this->RootHeaps[param_2] == (FRootHeap *)0x0)) {
        CreateRootHeap(this,param_2);
      }
      this->HeapWarnings = this->HeapWarnings + 1;
      if ((this->HeapWarnings < 0x65) && (2 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    bVar5 = IsValidHeap(this,param_1);
    if ((((bVar5) &&
         (pFVar10 = GetHeapSpecUnchecked(this,param_1), pFVar10->Name != GDefaultHeapName)) &&
        (this->HeapWarnings = this->HeapWarnings + 1, this->HeapWarnings < 0x65)) &&
       (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    local_38[0] = GetOrCreateHeapSpec(this,param_1);
    local_38[0]->Parent = pFVar9;
    local_38[0]->Name = pwVar8;
    local_38[0]->Flags = param_4;
    pFVar3 = (pFVar9->Children).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(pFVar9->Children).ArrayMax * 8))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (pFVar9->Children).ArrayNum;
    piVar1 = &(pFVar9->Children).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar9->Children).AllocatorInstance,piVar1);
    }
    (pFVar9->Children).ArrayNum = iVar7 + 1;
    *(FHeapSpec **)((pFVar9->Children).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    return;
  }
  uVar6 = 0;
  if ((int)param_1 < (this->HeapSpecs).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = this->RootHeaps[param_1];
  pFVar9 = *(FHeapSpec **)((this->HeapSpecs).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pFVar2 == (FRootHeap *)0x0) {
    if ((pFVar9 != (FHeapSpec *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapSpec == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0x7fe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    CreateRootHeap(this,param_1);
    uVar6 = 0;
    if ((int)param_1 < (this->HeapSpecs).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = *(FHeapSpec **)((this->HeapSpecs).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
    if ((pFVar9 == (FHeapSpec *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapSpec != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0x803,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((pFVar9 == (FHeapSpec *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapSpec != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0x7e6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar9->Id != param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapSpec->Id == Id",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0x7e7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar2->HeapSpec != pFVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootHeapPtr->HeapSpec == HeapSpec",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0x7e9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar2->SbTree == (FSbTree *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootHeapPtr->SbTree != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0x7ea,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar2->LiveAllocs == (FLiveAllocCollection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootHeapPtr->LiveAllocs != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0x7eb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_1 != 0) && (this->HeapWarnings = this->HeapWarnings + 1, this->HeapWarnings < 0x65))
       && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  pFVar9->Flags = param_4;
  pFVar9->Name = pwVar8;
  return;
}

// AdvanceTimelines @ 14d3d4910

void __thiscall
TraceServices::FAllocationsProvider::AdvanceTimelines(FAllocationsProvider *this,double param_1)

{
  int *piVar1;
  uint uVar2;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *pTVar3;
  TPagedArrayPage<unsigned___int64> *pTVar4;
  ulong64 uVar5;
  TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *pTVar6;
  TPagedArrayPage<unsigned_int> *pTVar7;
  int iVar8;
  ulong64 *puVar9;
  uint *puVar10;
  TPagedArrayPage<unsigned___int64> *pTVar11;
  TPagedArrayPage<unsigned_int> *pTVar12;
  ulong64 *puVar13;
  TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> **ppTVar14;
  longlong lVar15;
  uint *puVar16;
  longlong local_res8;
  longlong local_res10;
  
  if (__real_3f1a36e2eb1c432d < param_1 - this->SampleStartTimestamp) {
    TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::EmplaceBack<double_&>
              (&this->Timeline,&this->SampleStartTimestamp);
    lVar15 = 6;
    local_res8 = 6;
    puVar13 = this->SampleValuesU64;
    do {
      pTVar3 = (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
               puVar13[0x11];
      if ((pTVar3->LastPage == (TPagedArrayPage<unsigned___int64> *)0x0) ||
         (pTVar3->LastPage->Count == pTVar3->PageSize)) {
        iVar8 = (pTVar3->PagesArray).ArrayNum;
        piVar1 = &(pTVar3->PagesArray).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pTVar3->PagesArray).AllocatorInstance,piVar1);
        }
        (pTVar3->PagesArray).ArrayNum = iVar8 + 1;
        pTVar11 = (TPagedArrayPage<unsigned___int64> *)
                  ((pTVar3->PagesArray).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
        DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned___int64>,int>(pTVar11,1);
        pTVar4 = (TPagedArrayPage<unsigned___int64> *)(pTVar3->PagesArray).AllocatorInstance.Data;
        pTVar3->LastPage = pTVar11;
        pTVar3->FirstPage = pTVar4;
        puVar9 = (ulong64 *)
                 (**(code **)((longlong)*pTVar3->Allocator + 8))
                           (pTVar3->Allocator,pTVar3->PageSize << 3);
        pTVar3->LastPage->Items = puVar9;
      }
      pTVar3->TotalItemCount = pTVar3->TotalItemCount + 1;
      uVar5 = *puVar13;
      puVar13 = puVar13 + 1;
      pTVar3->LastPage->Items[pTVar3->LastPage->Count] = uVar5;
      puVar9 = &pTVar3->LastPage->Count;
      *puVar9 = *puVar9 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = 7;
    puVar16 = this->SampleValuesU32;
    local_res10 = 7;
    ppTVar14 = this->ValueTimelinesU32;
    do {
      pTVar6 = *ppTVar14;
      if ((pTVar6->LastPage == (TPagedArrayPage<unsigned_int> *)0x0) ||
         (pTVar6->LastPage->Count == pTVar6->PageSize)) {
        iVar8 = (pTVar6->PagesArray).ArrayNum;
        piVar1 = &(pTVar6->PagesArray).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pTVar6->PagesArray).AllocatorInstance,piVar1);
        }
        (pTVar6->PagesArray).ArrayNum = iVar8 + 1;
        pTVar12 = (TPagedArrayPage<unsigned_int> *)
                  ((pTVar6->PagesArray).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
        DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned_int>,int>(pTVar12,1);
        pTVar7 = (TPagedArrayPage<unsigned_int> *)(pTVar6->PagesArray).AllocatorInstance.Data;
        pTVar6->LastPage = pTVar12;
        pTVar6->FirstPage = pTVar7;
        puVar10 = (uint *)(**(code **)((longlong)*pTVar6->Allocator + 8))
                                    (pTVar6->Allocator,pTVar6->PageSize << 2);
        pTVar6->LastPage->Items = puVar10;
      }
      ppTVar14 = ppTVar14 + 1;
      pTVar6->TotalItemCount = pTVar6->TotalItemCount + 1;
      uVar2 = *puVar16;
      puVar16 = puVar16 + 1;
      pTVar6->LastPage->Items[pTVar6->LastPage->Count] = uVar2;
      puVar13 = &pTVar6->LastPage->Count;
      *puVar13 = *puVar13 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    this->SampleStartTimestamp = param_1;
    this->SampleValuesU64[0] = this->TotalAllocatedMemory;
    this->SampleValuesU64[1] = this->TotalAllocatedMemory;
    this->SampleValuesU32[0] = this->TotalLiveAllocations;
    this->SampleValuesU32[1] = this->TotalLiveAllocations;
    uVar5 = this->TotalSwapMemory;
    this->SampleValuesU64[2] = uVar5;
    this->SampleValuesU64[3] = uVar5;
    uVar5 = this->TotalCompressedSwapMemory;
    this->SampleValuesU64[4] = uVar5;
    this->SampleValuesU64[5] = uVar5;
    this->SampleValuesU32[2] = 0;
    this->SampleValuesU32[3] = 0;
    this->SampleValuesU32[4] = 0;
    this->SampleValuesU32[5] = 0;
    this->SampleValuesU32[6] = 0;
    if (__real_3f1a36e2eb1c432d < param_1 - this->SampleEndTimestamp) {
      TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::EmplaceBack<double_&>
                (&this->Timeline,&this->SampleEndTimestamp);
      puVar13 = this->SampleValuesU64;
      do {
        pTVar3 = (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                 puVar13[0x11];
        if ((pTVar3->LastPage == (TPagedArrayPage<unsigned___int64> *)0x0) ||
           (pTVar3->LastPage->Count == pTVar3->PageSize)) {
          iVar8 = (pTVar3->PagesArray).ArrayNum;
          piVar1 = &(pTVar3->PagesArray).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(pTVar3->PagesArray).AllocatorInstance,piVar1);
          }
          (pTVar3->PagesArray).ArrayNum = iVar8 + 1;
          pTVar11 = (TPagedArrayPage<unsigned___int64> *)
                    ((pTVar3->PagesArray).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
          DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned___int64>,int>(pTVar11,1);
          pTVar4 = (TPagedArrayPage<unsigned___int64> *)(pTVar3->PagesArray).AllocatorInstance.Data;
          pTVar3->LastPage = pTVar11;
          pTVar3->FirstPage = pTVar4;
          puVar9 = (ulong64 *)
                   (**(code **)((longlong)*pTVar3->Allocator + 8))
                             (pTVar3->Allocator,pTVar3->PageSize << 3);
          pTVar3->LastPage->Items = puVar9;
        }
        pTVar3->TotalItemCount = pTVar3->TotalItemCount + 1;
        uVar5 = *puVar13;
        puVar13 = puVar13 + 1;
        pTVar3->LastPage->Items[pTVar3->LastPage->Count] = uVar5;
        puVar9 = &pTVar3->LastPage->Count;
        *puVar9 = *puVar9 + 1;
        local_res8 = local_res8 + -1;
      } while (local_res8 != 0);
      puVar16 = this->SampleValuesU32;
      ppTVar14 = this->ValueTimelinesU32;
      do {
        pTVar6 = *ppTVar14;
        if ((pTVar6->LastPage == (TPagedArrayPage<unsigned_int> *)0x0) ||
           (pTVar6->LastPage->Count == pTVar6->PageSize)) {
          iVar8 = (pTVar6->PagesArray).ArrayNum;
          piVar1 = &(pTVar6->PagesArray).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(pTVar6->PagesArray).AllocatorInstance,piVar1);
          }
          (pTVar6->PagesArray).ArrayNum = iVar8 + 1;
          pTVar12 = (TPagedArrayPage<unsigned_int> *)
                    ((pTVar6->PagesArray).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
          DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned_int>,int>(pTVar12,1);
          pTVar7 = (TPagedArrayPage<unsigned_int> *)(pTVar6->PagesArray).AllocatorInstance.Data;
          pTVar6->LastPage = pTVar12;
          pTVar6->FirstPage = pTVar7;
          puVar10 = (uint *)(**(code **)((longlong)*pTVar6->Allocator + 8))
                                      (pTVar6->Allocator,pTVar6->PageSize << 2);
          pTVar6->LastPage->Items = puVar10;
        }
        ppTVar14 = ppTVar14 + 1;
        pTVar6->TotalItemCount = pTVar6->TotalItemCount + 1;
        uVar2 = *puVar16;
        puVar16 = puVar16 + 1;
        pTVar6->LastPage->Items[pTVar6->LastPage->Count] = uVar2;
        puVar13 = &pTVar6->LastPage->Count;
        *puVar13 = *puVar13 + 1;
        local_res10 = local_res10 + -1;
      } while (local_res10 != 0);
    }
    this->SampleEndTimestamp = param_1;
    return;
  }
  this->SampleEndTimestamp = param_1;
  return;
}

// AllocInternal @ 14d3d4d50

/* WARNING: Enum "Type": Some values do not have unique names */

FAllocationItem * __thiscall
TraceServices::FAllocationsProvider::AllocInternal
          (FAllocationsProvider *this,uint param_1,double param_2,uint param_3,ulong64 param_4,
          ulong64 param_5,uint param_6,uint param_7)

{
  FRootHeap *pFVar1;
  FLiveAllocCollection *pFVar2;
  FNode *pFVar3;
  FNode *pFVar4;
  FAllocationItem *pFVar5;
  FMetadataProvider *pFVar6;
  longlong lVar7;
  code *pcVar8;
  int *piVar9;
  ulong64 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FAllocationItem *pFVar15;
  FAllocationItem *pFVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  FAllocationItem *local_58;
  FAllocationItem *local_50;
  FAllocationItem **local_48;
  
  uVar20 = param_7;
  uVar10 = param_4;
  if ((param_4 == 0) && (param_7 == 0)) {
    if (((param_5 != 0) &&
        (this->AllocWarnings = this->AllocWarnings + 1, this->AllocWarnings < 0x65)) &&
       (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    if ((param_7 < 0x10) && (pFVar1 = this->RootHeaps[param_7], pFVar1 != (FRootHeap *)0x0)) {
      FSbTree::SetTimeForEvent(pFVar1->SbTree,pFVar1->EventIndex,param_2);
      AdvanceTimelines(this,param_2);
      uVar12 = 0;
      if (*(int *)&(this->TagTracker).TrackerThreadStates.field_0x8 !=
          *(int *)&(this->TagTracker).TrackerThreadStates.field_0x34) {
        puVar21 = *(undefined1 **)&(this->TagTracker).TrackerThreadStates.field_0x40;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = &(this->TagTracker).TrackerThreadStates.field_0x38;
        }
        uVar13 = *(uint *)(puVar21 +
                          (ulonglong)
                          (*(int *)&(this->TagTracker).TrackerThreadStates.field_0x48 - 1U &
                          param_1 & 0xffffff) * 4);
        if (uVar13 != 0xffffffff) {
          do {
            puVar17 = (uint *)((longlong)(int)uVar13 * 0x20 +
                              *(longlong *)&(this->TagTracker).TrackerThreadStates);
            if (*puVar17 == (param_1 & 0xffffff)) {
              puVar22 = puVar17 + 2;
              if (puVar17 == (uint *)0x0) {
                puVar22 = (uint *)0x0;
              }
              if ((puVar22 != (uint *)0x0) && (uVar13 = puVar22[2], uVar13 != 0)) {
                if ((int)(uVar13 - 1) < (int)uVar13) {
                  uVar12 = ~(uVar13 - 1) >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  pFVar16 = (FAllocationItem *)(*pcVar8)();
                  return pFVar16;
                }
                uVar12 = *(uint *)(*(longlong *)puVar22 + -8 + (longlong)(int)puVar22[2] * 8);
              }
              break;
            }
            uVar13 = puVar17[6];
          } while (uVar13 != 0xffffffff);
        }
      }
      pFVar2 = pFVar1->LiveAllocs;
      pFVar15 = ::operator_new(0x40);
      pFVar16 = (FAllocationItem *)0x0;
      if (pFVar15 != (FAllocationItem *)0x0) {
        pFVar15->SizeAndAlignment = 0;
        pFVar15->StartEventIndex = 0;
        pFVar15->EndEventIndex = 0;
        pFVar15->StartTime = 0.0;
        pFVar15->EndTime = 0.0;
        pFVar15->AllocThreadId = 0;
        pFVar15->FreeThreadId = 0;
        pFVar15->AllocCallstackId = 0;
        pFVar15->FreeCallstackId = 0;
        pFVar15->MetadataId = 0;
        pFVar15->Tag = 0;
        pFVar15->RootHeap = '\0';
        pFVar15->Flags = None;
        *(undefined2 *)&pFVar15->field_0x3e = 0;
        pFVar16 = pFVar15;
      }
      pFVar16->Address = uVar10;
      uVar13 = pFVar2->TotalAllocCount + 1;
      pFVar2->TotalAllocCount = uVar13;
      if (pFVar2->MaxAllocCount < uVar13) {
        pFVar2->MaxAllocCount = uVar13;
      }
      pFVar15 = pFVar2->LastAlloc;
      pFVar2->LastAlloc = pFVar16;
      if (pFVar15 != (FAllocationItem *)0x0) {
        pFVar3 = (pFVar2->ShortLivingAllocs).FirstUnusedNode;
        if (pFVar3 == (FNode *)0x0) {
          pFVar3 = (pFVar2->ShortLivingAllocs).OldestAllocNode;
          pFVar4 = pFVar3->Next;
          pFVar5 = pFVar3->Alloc;
          (pFVar2->ShortLivingAllocs).OldestAllocNode = pFVar4;
          pFVar4->Prev = (FNode *)0x0;
          pFVar3->Alloc = pFVar15;
          pFVar3->Next = (FNode *)0x0;
          pFVar3->Prev = (pFVar2->ShortLivingAllocs).LastAddedAllocNode;
          ((pFVar2->ShortLivingAllocs).LastAddedAllocNode)->Next = pFVar3;
          (pFVar2->ShortLivingAllocs).LastAddedAllocNode = pFVar3;
          if (pFVar5 != (FAllocationItem *)0x0) {
            local_48 = &local_58;
            local_58 = pFVar5;
            local_50 = pFVar5;
            TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FAllocationItem_*_const_&>_>
                      ((TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
                        *)&pFVar2->LongLivingAllocs,
                       (TPairInitializer<unsigned___int64_const_&,TraceServices::FAllocationItem_*_const_&>
                        *)&param_4,(bool *)&local_50);
          }
        }
        else {
          piVar9 = &(pFVar2->ShortLivingAllocs).AllocCount;
          *piVar9 = *piVar9 + 1;
          (pFVar2->ShortLivingAllocs).FirstUnusedNode = pFVar3->Next;
          pFVar3->Alloc = pFVar15;
          pFVar3->Next = (FNode *)0x0;
          pFVar3->Prev = (pFVar2->ShortLivingAllocs).LastAddedAllocNode;
          pFVar4 = (pFVar2->ShortLivingAllocs).LastAddedAllocNode;
          if (pFVar4 == (FNode *)0x0) {
            (pFVar2->ShortLivingAllocs).OldestAllocNode = pFVar3;
          }
          else {
            pFVar4->Next = pFVar3;
          }
          (pFVar2->ShortLivingAllocs).LastAddedAllocNode = pFVar3;
        }
      }
      pFVar6 = this->MetadataProvider;
      (**(code **)(pFVar6->_padding_ + 8))(&pFVar6->_padding_);
      plVar18 = &this->MetadataProvider->_padding_;
      uVar13 = (**(code **)(*plVar18 + 0x60))(plVar18,param_1);
      (**(code **)(pFVar6->_padding_ + 0x10))(&pFVar6->_padding_);
      uVar10 = param_5;
      pFVar16->SizeAndAlignment = (ulonglong)(byte)param_6 << 0x38 | param_5;
      pFVar16->StartEventIndex = pFVar1->EventIndex;
      pFVar16->EndTime = INFINITY;
      pFVar16->StartTime = param_2;
      pFVar16->EndEventIndex = 0xffffffff;
      pFVar16->AllocThreadId = (ushort)param_1;
      if (((param_1 & 0xffff) != param_1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("uint32(Allocation.AllocThreadId) == ThreadId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                              ,0x63e,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FAllocationItem *)(*pcVar8)();
        return pFVar16;
      }
      pFVar16->Tag = uVar12;
      pFVar16->FreeThreadId = 0;
      pFVar16->FreeCallstackId = 0;
      pFVar16->Flags = None;
      pFVar16->AllocCallstackId = param_3;
      pFVar16->MetadataId = uVar13;
      pFVar16->RootHeap = (uchar)uVar20;
      if (pFVar1->MaxAllocSize < uVar10) {
        pFVar1->MaxAllocSize = uVar10;
      }
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (int)lVar7;
      if (uVar10 == 0) {
        iVar14 = -1;
      }
      pFVar1->AllocSizeHistogramPow2[iVar14 + 1] = pFVar1->AllocSizeHistogramPow2[iVar14 + 1] + 1;
      this->TotalAllocatedMemory = this->TotalAllocatedMemory + uVar10;
      this->TotalLiveAllocations = this->TotalLiveAllocations + 1;
      uVar20 = this->TotalLiveAllocations;
      uVar19 = this->TotalAllocatedMemory;
      if (this->TotalAllocatedMemory < this->SampleValuesU64[1]) {
        uVar19 = this->SampleValuesU64[1];
      }
      this->SampleValuesU64[1] = uVar19;
      if (uVar20 < this->SampleValuesU32[1]) {
        uVar20 = this->SampleValuesU32[1];
      }
      this->SampleValuesU32[1] = uVar20;
      this->SampleValuesU32[2] = this->SampleValuesU32[2] + 1;
      this->AllocCount = this->AllocCount + 1;
      if (pFVar1->EventIndex != 0xffffffff) {
        pFVar1->EventIndex = pFVar1->EventIndex + 1;
        return pFVar16;
      }
      if (1 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      this->bInitialized = false;
      return pFVar16;
    }
    this->AllocWarnings = this->AllocWarnings + 1;
    if ((this->AllocWarnings < 0x65) && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return (FAllocationItem *)0x0;
}

// BeginEdit @ 14d3d5490

void __thiscall TraceServices::FAllocationsProvider::BeginEdit(FAllocationsProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b70))
  ;
  return;
}

// BeginRead @ 14d3d5920

void __thiscall TraceServices::FAllocationsProvider::BeginRead(FAllocationsProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b70));
  return;
}

// CancelQuery @ 14d3d60b0

void __thiscall
TraceServices::FAllocationsProvider::CancelQuery(FAllocationsProvider *this,ulong64 param_1)

{
  FAllocationsQuery::Cancel((FAllocationsQuery *)param_1);
  return;
}

// CreateRootHeap @ 14d3d7250

void __thiscall
TraceServices::FAllocationsProvider::CreateRootHeap(FAllocationsProvider *this,uint param_1)

{
  FRootHeap *pFVar1;
  FHeapSpec *pFVar2;
  FSbTree *this_00;
  ILinearAllocator *pIVar3;
  FRootHeap *pFVar4;
  FRootHeap *pFVar5;
  
  pFVar1 = ::operator_new(0x2b8);
  pFVar4 = (FRootHeap *)0x0;
  pFVar5 = pFVar4;
  if (pFVar1 != (FRootHeap *)0x0) {
    pFVar1->HeapSpec = (FHeapSpec *)0x0;
    (((TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_> *)&pFVar1->EventIndex)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (((TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_> *)&pFVar1->LiveAllocs)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar1->SbTree = (FSbTree *)0x0;
    pFVar1->MaxAllocSize = 0;
    memset((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2,0,0x208);
    *(undefined4 *)
     ((longlong)
      ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0x20) + 8) = 0
    ;
    *(undefined8 *)
     ((longlong)
      ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0x20) + 0xc) =
         0;
    *(undefined8 *)
     ((longlong)
      ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0x21) + 4) = 0
    ;
    pFVar1->EventDistanceHistogramPow2[4] = 0;
    pFVar1->EventDistanceHistogramPow2[5] = 0;
    pFVar1->EventDistanceHistogramPow2[6] = 0;
    pFVar1->EventDistanceHistogramPow2[7] = 0;
    pFVar1->EventDistanceHistogramPow2[8] = 0;
    pFVar1->EventDistanceHistogramPow2[9] = 0;
    pFVar1->EventDistanceHistogramPow2[10] = 0;
    pFVar1->EventDistanceHistogramPow2[0xb] = 0;
    pFVar1->EventDistanceHistogramPow2[0xc] = 0;
    pFVar1->EventDistanceHistogramPow2[0xd] = 0;
    pFVar1->EventDistanceHistogramPow2[0xe] = 0;
    pFVar1->EventDistanceHistogramPow2[0xf] = 0;
    pFVar1->EventDistanceHistogramPow2[0x10] = 0;
    pFVar1->EventDistanceHistogramPow2[0x11] = 0;
    pFVar1->EventDistanceHistogramPow2[0x12] = 0;
    pFVar1->EventDistanceHistogramPow2[0x13] = 0;
    pFVar1->EventDistanceHistogramPow2[0x14] = 0;
    pFVar1->EventDistanceHistogramPow2[0x15] = 0;
    pFVar1->EventDistanceHistogramPow2[0x16] = 0;
    pFVar1->EventDistanceHistogramPow2[0x17] = 0;
    pFVar1->EventDistanceHistogramPow2[0x18] = 0;
    pFVar1->EventDistanceHistogramPow2[0x19] = 0;
    pFVar1->EventDistanceHistogramPow2[0x1a] = 0;
    pFVar1->EventDistanceHistogramPow2[0x1b] = 0;
    pFVar1->EventDistanceHistogramPow2[0x1c] = 0;
    pFVar1->EventDistanceHistogramPow2[0x1d] = 0;
    pFVar1->EventDistanceHistogramPow2[0x1e] = 0;
    pFVar1->EventDistanceHistogramPow2[0x1f] = 0;
    pFVar1->EventDistanceHistogramPow2[0x20] = 0;
    pFVar5 = pFVar1;
  }
  pFVar2 = GetOrCreateHeapSpec(this,param_1);
  pFVar5->HeapSpec = pFVar2;
  this_00 = ::operator_new(0x48);
  pFVar1 = pFVar4;
  if (this_00 != (FSbTree *)0x0) {
    pIVar3 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pFVar1 = (FRootHeap *)FSbTree::FSbTree(this_00,pIVar3,0x11);
  }
  pFVar5->SbTree = (FSbTree *)pFVar1;
  pFVar1 = ::operator_new(0x138);
  if (pFVar1 != (FRootHeap *)0x0) {
    pFVar1->HeapSpec = (FHeapSpec *)0x0;
    FShortLivingAllocs::FShortLivingAllocs((FShortLivingAllocs *)&pFVar1->LiveAllocs);
    *(int *)(pFVar1->AllocSizeHistogramPow2 + 1) = 0;
    *(int *)((longlong)(pFVar1->AllocSizeHistogramPow2 + 1) + 4) = 0;
    ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2)[1].
    AllocatorInstance = 0;
    *(undefined8 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 2) +
     8) = 0;
    *(undefined4 *)
     ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 3) = 0;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 3) +
     4) = 0x80;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 3) +
     8) = 0xffffffff;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 3) +
     0xc) = 0;
    *(undefined8 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 4) +
     8) = 0;
    *(undefined4 *)
     ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 5) = 0;
    *(undefined8 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 5) +
     8) = 0;
    ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2)[6].
    AllocatorInstance = 0;
    *(undefined8 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 7) +
     8) = 0;
    *(undefined4 *)
     ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 8) = 0;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 8) +
     4) = 0x80;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 8) +
     8) = 0xffffffff;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 8) +
     0xc) = 0;
    *(undefined8 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 9) +
     8) = 0;
    *(undefined4 *)
     ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 10) = 0;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 10)
     + 8) = 0;
    ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2)[0xb].
    AllocatorInstance = 0;
    *(undefined8 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0xb)
     + 8) = 0;
    ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2)[0xd].
    AllocatorInstance = 0;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0xd)
     + 8) = 0;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0xd)
     + 0xc) = 0x80;
    *(undefined4 *)
     ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0xe) =
         0xffffffff;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0xe)
     + 4) = 0;
    ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2)[0xf].
    AllocatorInstance = 0;
    *(undefined4 *)
     ((longlong)((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0xf)
     + 8) = 0;
    *(undefined4 *)
     ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0x10) = 0;
    *(undefined8 *)
     ((longlong)
      ((TArray<double,TSizedDefaultAllocator<32>_> *)pFVar1->AllocSizeHistogramPow2 + 0x10) + 8) = 0
    ;
    pFVar4 = pFVar1;
  }
  (((TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_> *)&pFVar5->LiveAllocs)->
  AllocatorInstance).Data = (FScriptContainerElement *)pFVar4;
  this->RootHeaps[param_1] = pFVar5;
  return;
}

// DebugPrint @ 14d3d75a0

void __thiscall TraceServices::FAllocationsProvider::DebugPrint(FAllocationsProvider *this)

{
  FRootHeap **ppFVar1;
  longlong lVar2;
  
  (**(code **)(this->_padding_ + 0x18))();
  ppFVar1 = this->RootHeaps;
  lVar2 = 0x10;
  do {
    if (*ppFVar1 != (FRootHeap *)0x0) {
      FSbTree::DebugPrint((*ppFVar1)->SbTree);
    }
    ppFVar1 = ppFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// EditAccessCheck @ 14d3d8ce0

void __thiscall TraceServices::FAllocationsProvider::EditAccessCheck(FAllocationsProvider *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((longlong *)*(undefined1 **)(lVar1 + 0x9b70) != &this->_padding_) ||
     (*(int *)(lVar1 + 0x9b7c) < 1)) {
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

// EditAlloc @ 14d3d8e20

void __thiscall
TraceServices::FAllocationsProvider::EditAlloc
          (FAllocationsProvider *this,uint param_1,double param_2,uint param_3,ulong64 param_4,
          ulong64 param_5,uint param_6,uint param_7)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized != false) {
    this->AllocEvents = this->AllocEvents + 1;
    AllocInternal(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// EditFree @ 14d3d8ec0

void __thiscall
TraceServices::FAllocationsProvider::EditFree
          (FAllocationsProvider *this,uint param_1,double param_2,uint param_3,ulong64 param_4,
          uint param_5)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized != false) {
    this->FreeEvents = this->FreeEvents + 1;
    FreeInternal(this,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// EditHeapSpec @ 14d3d8f40

void __thiscall
TraceServices::FAllocationsProvider::EditHeapSpec
          (FAllocationsProvider *this,uint param_1,uint param_2,TStringView<wchar_t> *param_3,
          EMemoryTraceHeapFlags param_4)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  AddHeapSpec(this,param_1,param_2,param_3,param_4);
  return;
}

// EditInit @ 14d3d8fa0

void __thiscall
TraceServices::FAllocationsProvider::EditInit
          (FAllocationsProvider *this,double param_1,uchar param_2,ulong64 param_3)

{
  TStringView<wchar_t> local_28 [2];
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized == false) {
    this->InitTime = param_1;
    local_28[0].DataPtr = L"System memory";
    this->PlatformPageSize = param_3;
    this->MinAlignment = param_2;
    local_28[0].Size = 0xd;
    AddHeapSpec(this,0,0,local_28,Root);
    this->bInitialized = true;
    AdvanceTimelines(this,param_1);
  }
  return;
}

// EditMarkAllocationAsHeap @ 14d3d9040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FAllocationsProvider::EditMarkAllocationAsHeap
          (FAllocationsProvider *this,uint param_1,double param_2,uint param_3,ulong64 param_4,
          uint param_5,EMemoryTraceHeapAllocationFlags param_6)

{
  int *piVar1;
  FLiveAllocCollection *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRootHeap *pFVar7;
  FNode *pFVar8;
  FList *pFVar9;
  ulonglong uVar10;
  ulong64 *puVar11;
  FAllocationItem *pFVar12;
  FAllocationItem *local_60;
  FAllocationItem *local_58 [4];
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized == false) {
    return;
  }
  this->HeapEvents = this->HeapEvents + 1;
  bVar5 = IsValidHeap(this,param_5);
  if (!bVar5) {
    this->HeapErrors = this->HeapErrors + 1;
    if (100 < this->HeapErrors) {
      return;
    }
    if ((byte)LogTraceServices._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    return;
  }
  GetHeapSpecUnchecked(this,param_5);
  pFVar7 = FindParentRootHeapUnchecked(this,param_5);
  pFVar2 = pFVar7->LiveAllocs;
  pFVar12 = pFVar2->LastAlloc;
  if ((pFVar12 == (FAllocationItem *)0x0) || (pFVar12->Address != param_4)) {
    for (pFVar3 = (pFVar2->ShortLivingAllocs).LastAddedAllocNode; pFVar3 != (FNode *)0x0;
        pFVar3 = pFVar3->Prev) {
      if (pFVar3->Alloc->Address == param_4) {
        piVar1 = &(pFVar2->ShortLivingAllocs).AllocCount;
        *piVar1 = *piVar1 + -1;
        if (pFVar3->Prev == (FNode *)0x0) {
          (pFVar2->ShortLivingAllocs).OldestAllocNode = pFVar3->Next;
        }
        else {
          pFVar3->Prev->Next = pFVar3->Next;
        }
        if (pFVar3->Next == (FNode *)0x0) {
          (pFVar2->ShortLivingAllocs).LastAddedAllocNode = pFVar3->Prev;
        }
        else {
          pFVar3->Next->Prev = pFVar3->Prev;
        }
        pFVar3->Next = (pFVar2->ShortLivingAllocs).FirstUnusedNode;
        (pFVar2->ShortLivingAllocs).FirstUnusedNode = pFVar3;
        pFVar12 = pFVar3->Alloc;
        if (pFVar12 != (FAllocationItem *)0x0) {
          pFVar2->TotalAllocCount = pFVar2->TotalAllocCount - 1;
          goto LAB_14d3d931b;
        }
        break;
      }
    }
    bVar5 = TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
            ::RemoveAndCopyValue(&(pFVar2->LongLivingAllocs).AllocsMap,param_4,&local_60);
    if (((!bVar5) || (local_60 == (FAllocationItem *)0x0)) ||
       (pFVar2->TotalAllocCount = pFVar2->TotalAllocCount - 1, pFVar12 = local_60,
       local_60 == (FAllocationItem *)0x0)) {
      puVar11 = &this->HeapErrors;
      *puVar11 = *puVar11 + 1;
      if ((*puVar11 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      AllocInternal(this,param_1,param_2,param_3,param_4,0,0,pFVar7->HeapSpec->Id);
      FSbTree::SetTimeForEvent(pFVar7->SbTree,pFVar7->EventIndex,param_2);
      pFVar2 = pFVar7->LiveAllocs;
      pFVar12 = pFVar2->LastAlloc;
      if ((pFVar12 == (FAllocationItem *)0x0) || (pFVar12->Address != param_4)) {
        for (pFVar3 = (pFVar2->ShortLivingAllocs).LastAddedAllocNode; pFVar3 != (FNode *)0x0;
            pFVar3 = pFVar3->Prev) {
          if (pFVar3->Alloc->Address == param_4) {
            piVar1 = &(pFVar2->ShortLivingAllocs).AllocCount;
            *piVar1 = *piVar1 + -1;
            if (pFVar3->Prev == (FNode *)0x0) {
              (pFVar2->ShortLivingAllocs).OldestAllocNode = pFVar3->Next;
            }
            else {
              pFVar3->Prev->Next = pFVar3->Next;
            }
            if (pFVar3->Next == (FNode *)0x0) {
              (pFVar2->ShortLivingAllocs).LastAddedAllocNode = pFVar3->Prev;
            }
            else {
              pFVar3->Next->Prev = pFVar3->Prev;
            }
            pFVar3->Next = (pFVar2->ShortLivingAllocs).FirstUnusedNode;
            (pFVar2->ShortLivingAllocs).FirstUnusedNode = pFVar3;
            pFVar12 = pFVar3->Alloc;
            if (pFVar12 != (FAllocationItem *)0x0) {
              pFVar2->TotalAllocCount = pFVar2->TotalAllocCount - 1;
              goto LAB_14d3d931b;
            }
            break;
          }
        }
        bVar5 = TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
                ::RemoveAndCopyValue(&(pFVar2->LongLivingAllocs).AllocsMap,param_4,local_58);
        if (((!bVar5) || (local_58[0] == (FAllocationItem *)0x0)) ||
           (pFVar2->TotalAllocCount = pFVar2->TotalAllocCount - 1, pFVar12 = local_58[0],
           local_58[0] == (FAllocationItem *)0x0)) {
          uVar10 = this->HeapErrors + 1;
          this->HeapErrors = uVar10;
          if ((uVar10 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          goto LAB_14d3d956c;
        }
      }
      else {
        pFVar2->TotalAllocCount = pFVar2->TotalAllocCount - 1;
        pFVar2->LastAlloc = (FAllocationItem *)0x0;
      }
    }
  }
  else {
    pFVar2->TotalAllocCount = pFVar2->TotalAllocCount - 1;
    pFVar2->LastAlloc = (FAllocationItem *)0x0;
  }
LAB_14d3d931b:
  puVar11 = &this->HeapErrors;
  if ((param_4 != pFVar12->Address) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Address == Alloc->Address",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                         ,0x878,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((pFVar12->Flags & Heap) != None) && (*puVar11 = *puVar11 + 1, *puVar11 < 0x65)) &&
     (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (((param_6 & Heap) == None) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<463216517843076>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                         ,0x884,"EnumHasAnyFlags(Flags, EMemoryTraceHeapAllocationFlags::Heap)"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar12->RootHeap = (uchar)param_5;
  pFVar12->Flags = param_6 | Heap;
  if (param_3 != 0) {
    pFVar12->AllocCallstackId = param_3;
  }
  pFVar2 = pFVar7->LiveAllocs;
  uVar6 = pFVar2->TotalAllocCount + 1;
  pFVar2->TotalAllocCount = uVar6;
  if (pFVar2->MaxAllocCount < uVar6) {
    pFVar2->MaxAllocCount = uVar6;
  }
  pFVar8 = ::operator_new(0x18);
  if (pFVar8 == (FNode *)0x0) {
    pFVar8 = (FNode *)0x0;
  }
  else {
    pFVar8->Prev = (FNode *)0x0;
  }
  pFVar8->Alloc = pFVar12;
  pFVar8->Next = (FNode *)0x0;
  pFVar9 = TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                       *)&pFVar2->HeapAllocs,
                      (int)(pFVar12->Address >> 0x20) * 0x17 + (int)pFVar12->Address,
                      &pFVar12->Address);
  if (pFVar9->Last == (FNode *)0x0) {
    pFVar9->First = pFVar8;
  }
  else {
    pFVar9->Last->Next = pFVar8;
  }
  pFVar8->Prev = pFVar9->Last;
  pFVar9->Last = pFVar8;
  piVar1 = &(pFVar2->HeapAllocs).AllocCount;
  *piVar1 = *piVar1 + 1;
  uVar10 = pFVar12->SizeAndAlignment;
  this->TotalLiveAllocations = this->TotalLiveAllocations - 1;
  this->TotalAllocatedMemory = this->TotalAllocatedMemory - (uVar10 & 0xffffffffffffff);
  uVar10 = this->TotalAllocatedMemory;
  if (this->SampleValuesU64[0] < this->TotalAllocatedMemory) {
    uVar10 = this->SampleValuesU64[0];
  }
  this->SampleValuesU64[0] = uVar10;
  uVar6 = this->TotalLiveAllocations;
  if (this->SampleValuesU32[0] < this->TotalLiveAllocations) {
    uVar6 = this->SampleValuesU32[0];
  }
  this->SampleValuesU32[0] = uVar6;
LAB_14d3d956c:
  this->HeapCount = this->HeapCount + 1;
  return;
}

// EditOnAnalysisCompleted @ 14d3d95c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FAllocationsProvider::EditOnAnalysisCompleted
          (FAllocationsProvider *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FRootHeap **ppFVar5;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized == false) {
    if (((this->TagTracker).NumErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    AdvanceTimelines(this,__real_7ff0000000000000);
    ppFVar5 = this->RootHeaps;
    lVar3 = 0x10;
    do {
      if (*ppFVar5 != (FRootHeap *)0x0) {
        FSbTree::Validate((*ppFVar5)->SbTree);
      }
      ppFVar5 = ppFVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (((((this->AllocWarnings != 0) || (this->FreeWarnings != 0)) || (this->HeapWarnings != 0)) ||
        ((this->SwapWarnings != 0 || (this->MiscWarnings != 0)))) &&
       (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if (((this->TagTracker).NumWarnings != 0) && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if ((this->AllocErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if ((this->FreeErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if ((this->HeapErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if ((this->SwapErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u__MemAlloc__SWAP_152b11e28,
                 (FLogCategoryBase *)&LogTraceServices);
    }
    if ((this->MiscErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if (((this->TagTracker).NumErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    pFVar4 = (this->HeapSpecs).AllocatorInstance.Data;
    iVar2 = (this->HeapSpecs).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->HeapSpecs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TraceServices::IAllocationsProvider::FHeapSpec_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pFVar4 = pFVar4 + 8;
    }
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if ((4 < (byte)LogTraceServices._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices),
       4 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// EditPopTag @ 14d3d9a30

void __thiscall
TraceServices::FAllocationsProvider::EditPopTag
          (FAllocationsProvider *this,uint param_1,uchar param_2)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  FTagTracker::PopTag(&this->TagTracker,param_1,param_2);
  return;
}

// EditPopTagFromPtr @ 14d3d9a80

void __thiscall
TraceServices::FAllocationsProvider::EditPopTagFromPtr
          (FAllocationsProvider *this,uint param_1,uchar param_2)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  FTagTracker::PopTagFromPtr(&this->TagTracker,param_1,param_2);
  return;
}

// EditPushTag @ 14d3d9b00

void __thiscall
TraceServices::FAllocationsProvider::EditPushTag
          (FAllocationsProvider *this,uint param_1,uchar param_2,uint param_3)

{
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  FTagTracker::PushTag(&this->TagTracker,param_1,param_2,param_3);
  return;
}

// EditPushTagFromPtr @ 14d3d9b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FAllocationsProvider::EditPushTagFromPtr
          (FAllocationsProvider *this,uint param_1,uchar param_2,ulong64 param_3,uint param_4)

{
  longlong lVar1;
  FLiveAllocCollection *pFVar2;
  FNode *pFVar3;
  longlong lVar4;
  int iVar5;
  FAllocationItem *pFVar6;
  undefined1 *puVar7;
  FAllocationItem *pFVar8;
  FAllocationItem *pFVar9;
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized == false) {
    FTagTracker::PushTagFromPtr(&this->TagTracker,param_1,param_2,0);
  }
  else {
    pFVar8 = (FAllocationItem *)0x0;
    if ((param_4 < 0x10) && (this->RootHeaps[param_4] != (FRootHeap *)0x0)) {
      pFVar2 = this->RootHeaps[param_4]->LiveAllocs;
      pFVar9 = pFVar2->LastAlloc;
      if ((pFVar9 == (FAllocationItem *)0x0) || (pFVar9->Address != param_3)) {
        for (pFVar3 = (pFVar2->ShortLivingAllocs).LastAddedAllocNode; pFVar3 != (FNode *)0x0;
            pFVar3 = pFVar3->Prev) {
          pFVar6 = pFVar3->Alloc;
          if (pFVar6->Address == param_3) {
            if (pFVar6 != (FAllocationItem *)0x0) goto LAB_14d3d9c78;
            break;
          }
        }
        pFVar9 = (FAllocationItem *)0x0;
        if (*(int *)&(pFVar2->LongLivingAllocs).AllocsMap.field_0x8 !=
            *(int *)&(pFVar2->LongLivingAllocs).AllocsMap.field_0x34) {
          puVar7 = *(undefined1 **)&(pFVar2->LongLivingAllocs).AllocsMap.field_0x40;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &(pFVar2->LongLivingAllocs).AllocsMap.field_0x38;
          }
          iVar5 = *(int *)(puVar7 + ((ulonglong)
                                     (*(int *)&(pFVar2->LongLivingAllocs).AllocsMap.field_0x48 - 1)
                                    & param_3 >> 6 & 0xffffffff) * 4);
          if (iVar5 != -1) {
            lVar4 = *(longlong *)&(pFVar2->LongLivingAllocs).AllocsMap;
            do {
              lVar1 = lVar4 + (longlong)iVar5 * 0x18;
              pFVar9 = pFVar8;
              if (*(ulong64 *)(lVar4 + (longlong)iVar5 * 0x18) == param_3) {
                if ((lVar1 != 0) &&
                   (pFVar6 = *(FAllocationItem **)(lVar1 + 8), pFVar6 != (FAllocationItem *)0x0)) {
LAB_14d3d9c78:
                  pFVar9 = pFVar6;
                }
                break;
              }
              iVar5 = *(int *)(lVar1 + 0x10);
            } while (iVar5 != -1);
          }
        }
      }
      if (pFVar9 != (FAllocationItem *)0x0) {
        FTagTracker::PushTagFromPtr(&this->TagTracker,param_1,param_2,pFVar9->Tag);
        return;
      }
    }
    else {
      this->MiscErrors = this->MiscErrors + 1;
      if ((this->MiscErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    FTagTracker::PushTagFromPtr(&this->TagTracker,param_1,param_2,0);
    this->MiscErrors = this->MiscErrors + 1;
    if ((this->MiscErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// EditSwapOp @ 14d3d9d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FAllocationsProvider::EditSwapOp
          (FAllocationsProvider *this,uint param_1,double param_2,ulong64 param_3,
          EMemoryTraceSwapOperation param_4,ulong64 param_5,uint param_6)

{
  int *piVar1;
  FRootHeap *pFVar2;
  FNode *pFVar3;
  FLiveAllocCollection *pFVar4;
  FNode *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FList *pFVar9;
  FAllocationItem *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FAllocationItem *pFVar14;
  FAllocationItem *pFVar15;
  FList local_48 [2];
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized == false) {
    return;
  }
  this->SwapOpEvents = this->SwapOpEvents + 1;
  pFVar2 = this->RootHeaps[0];
  if (pFVar2 == (FRootHeap *)0x0) {
    return;
  }
  uVar13 = ~(this->PlatformPageSize - 1) & param_3;
  if ((param_4 == PageOut) &&
     (pFVar9 = TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
               ::Find((TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                       *)&pFVar2->LiveAllocs->SwapAllocs,uVar13), pFVar9 != (FList *)0x0)) {
    for (pFVar3 = pFVar9->Last; pFVar3 != (FNode *)0x0; pFVar3 = pFVar3->Prev) {
      if (uVar13 == pFVar3->Alloc->Address) {
        if (pFVar3->Alloc != (FAllocationItem *)0x0) {
          this->SwapErrors = this->SwapErrors + 1;
          if ((this->SwapErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          EditSwapOp(this,param_1,param_2,param_3,PageIn,param_5,param_6);
        }
        break;
      }
    }
  }
  FSbTree::SetTimeForEvent(pFVar2->SbTree,pFVar2->EventIndex,param_2);
  AdvanceTimelines(this,param_2);
  if (param_4 == PageOut) {
    this->SampleValuesU32[5] = this->SampleValuesU32[5] + 1;
  }
  else if (param_4 == PageIn) {
    this->SampleValuesU32[4] = this->SampleValuesU32[4] + 1;
  }
  else if (param_4 == FreeInSwap) {
    this->SampleValuesU32[6] = this->SampleValuesU32[6] + 1;
  }
  if (uVar13 != 0) {
    if (param_4 == PageOut) {
      this->TotalCompressedSwapMemory = this->TotalCompressedSwapMemory + param_5;
      this->TotalSwapMemory = this->TotalSwapMemory + this->PlatformPageSize;
      uVar11 = this->TotalCompressedSwapMemory;
      uVar12 = this->TotalSwapMemory;
      if (this->TotalSwapMemory < this->SampleValuesU64[3]) {
        uVar12 = this->SampleValuesU64[3];
      }
      this->SampleValuesU64[3] = uVar12;
      if (uVar11 < this->SampleValuesU64[5]) {
        uVar11 = this->SampleValuesU64[5];
      }
      this->SampleValuesU64[5] = uVar11;
      pFVar4 = pFVar2->LiveAllocs;
      pFVar10 = ::operator_new(0x40);
      pFVar14 = (FAllocationItem *)0x0;
      pFVar15 = pFVar14;
      if (pFVar10 != (FAllocationItem *)0x0) {
        pFVar10->SizeAndAlignment = 0;
        pFVar10->StartEventIndex = 0;
        pFVar10->EndEventIndex = 0;
        pFVar10->StartTime = 0.0;
        pFVar10->EndTime = 0.0;
        pFVar10->AllocThreadId = 0;
        pFVar10->FreeThreadId = 0;
        pFVar10->AllocCallstackId = 0;
        pFVar10->FreeCallstackId = 0;
        pFVar10->MetadataId = 0;
        pFVar10->Tag = 0;
        pFVar10->RootHeap = '\0';
        pFVar10->Flags = None;
        *(undefined2 *)&pFVar10->field_0x3e = 0;
        pFVar15 = pFVar10;
      }
      pFVar15->Address = uVar13;
      uVar8 = pFVar4->TotalAllocCount + 1;
      pFVar4->TotalAllocCount = uVar8;
      if (pFVar4->MaxAllocCount < uVar8) {
        pFVar4->MaxAllocCount = uVar8;
      }
      pFVar10 = ::operator_new(0x18);
      if (pFVar10 != (FAllocationItem *)0x0) {
        pFVar10->StartEventIndex = 0;
        pFVar10->EndEventIndex = 0;
        pFVar14 = pFVar10;
      }
      pFVar14->Address = (ulong64)pFVar15;
      pFVar14->SizeAndAlignment = 0;
      pFVar9 = TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
               ::FindOrAddImpl<unsigned___int64_const_&>
                         ((TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                           *)&pFVar4->SwapAllocs,
                          (int)(pFVar15->Address >> 0x20) * 0x17 + (int)pFVar15->Address,
                          &pFVar15->Address);
      if (pFVar9->Last == (FNode *)0x0) {
        pFVar9->First = (FNode *)pFVar14;
      }
      else {
        pFVar9->Last->Next = (FNode *)pFVar14;
      }
      *(FNode **)&pFVar14->StartEventIndex = pFVar9->Last;
      pFVar9->Last = (FNode *)pFVar14;
      piVar1 = &(pFVar4->SwapAllocs).AllocCount;
      *piVar1 = *piVar1 + 1;
      pFVar15->SizeAndAlignment = param_5;
      pFVar15->StartEventIndex = pFVar2->EventIndex;
      pFVar15->EndTime = INFINITY;
      pFVar15->StartTime = param_2;
      pFVar15->EndEventIndex = 0xffffffff;
      pFVar15->AllocThreadId = (ushort)param_1;
      if (((param_1 & 0xffff) != param_1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("uint32(AllocationPtr->AllocThreadId) == ThreadId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                             ,0x754,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15->FreeThreadId = 0;
      pFVar15->AllocCallstackId = param_6;
      pFVar15->FreeCallstackId = 0;
      pFVar15->MetadataId = 0xffffffff;
      pFVar15->Tag = 0;
      pFVar15->RootHeap = '\0';
      pFVar15->Flags = Swap;
    }
    else if ((param_4 == PageIn) || (param_4 == FreeInSwap)) {
      uVar11 = this->TotalSwapMemory;
      if (this->PlatformPageSize <= uVar11) {
        uVar11 = uVar11 - this->PlatformPageSize;
        this->TotalSwapMemory = uVar11;
      }
      if (this->SampleValuesU64[2] < uVar11) {
        uVar11 = this->SampleValuesU64[2];
      }
      this->SampleValuesU64[2] = uVar11;
      pFVar4 = pFVar2->LiveAllocs;
      pFVar9 = TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
               ::Find((TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                       *)&pFVar4->SwapAllocs,uVar13);
      if (pFVar9 != (FList *)0x0) {
        if ((pFVar9->Last == (FNode *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ListPtr->Last != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                               ,0x3eb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = pFVar9->Last;
        pFVar15 = pFVar3->Alloc;
        if (pFVar9->First == pFVar3) {
          ::operator_delete(pFVar3,0x18);
          TMap<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
          ::FindAndRemoveChecked(&(pFVar4->SwapAllocs).AddressMap,local_48,uVar13);
        }
        else {
          pFVar5 = pFVar3->Prev;
          pFVar9->Last = pFVar5;
          pFVar5->Next = (FNode *)0x0;
          ::operator_delete(pFVar3,0x18);
        }
        piVar1 = &(pFVar4->SwapAllocs).AllocCount;
        *piVar1 = *piVar1 + -1;
        if (pFVar15 != (FAllocationItem *)0x0) {
          pFVar4->TotalAllocCount = pFVar4->TotalAllocCount - 1;
          uVar11 = pFVar15->SizeAndAlignment & 0xffffffffffffff;
          uVar13 = this->TotalCompressedSwapMemory;
          if (uVar11 <= uVar13) {
            uVar13 = uVar13 - uVar11;
            this->TotalCompressedSwapMemory = uVar13;
          }
          if (this->SampleValuesU64[4] < uVar13) {
            uVar13 = this->SampleValuesU64[4];
          }
          this->SampleValuesU64[4] = uVar13;
          if ((pFVar2->EventIndex <= pFVar15->StartEventIndex) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("RootHeap.EventIndex > AllocationPtr->StartEventIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                                 ,0x77b,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15->EndEventIndex = pFVar2->EventIndex;
          pFVar15->EndTime = param_2;
          pFVar15->FreeThreadId = (ushort)param_1;
          if (((param_1 & 0xffff) != param_1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("uint32(AllocationPtr->FreeThreadId) == ThreadId",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                                 ,0x77f,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15->FreeCallstackId = param_6;
          FSbTree::AddAlloc(pFVar2->SbTree,pFVar15);
          goto LAB_14d3da23f;
        }
      }
      this->SwapErrors = this->SwapErrors + 1;
      if ((this->SwapErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
  }
LAB_14d3da23f:
  if (pFVar2->EventIndex == 0xffffffff) {
    if (1 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    this->bInitialized = false;
  }
  else {
    pFVar2->EventIndex = pFVar2->EventIndex + 1;
  }
  return;
}

// EditUnmarkAllocationAsHeap @ 14d3da2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap
          (FAllocationsProvider *this,uint param_1,double param_2,uint param_3,ulong64 param_4,
          uint param_5)

{
  FAllocMap *pFVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  FLiveAllocCollection *pFVar5;
  FNode *pFVar6;
  FNode *pFVar7;
  undefined8 *puVar8;
  FAllocationItem *pFVar9;
  FNode *pFVar10;
  FNode *pFVar11;
  FAllocationItem *pFVar12;
  code *pcVar13;
  FLiveAllocCollection *pFVar14;
  FRootHeap *pFVar15;
  ForElementType<unsigned_int> FVar16;
  FHeapAllocs *pFVar17;
  FHeapAllocs *pFVar18;
  FAllocationItem **ppFVar19;
  bool bVar20;
  FList *pFVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  int iVar25;
  FAllocInHeap *pFVar26;
  uint uVar27;
  FAllocInHeap *pFVar28;
  uint uVar29;
  int iVar30;
  ForElementType<unsigned_int> FVar31;
  uint *puVar32;
  FAllocationItem *pFVar33;
  FIdentityFunctor local_res8;
  undefined1 local_298;
  undefined1 local_297 [7];
  FAllocationItem *local_290;
  undefined1 local_288;
  undefined1 local_287 [7];
  FLiveAllocCollection *local_280;
  FRootHeap *local_278;
  FAllocInHeap *local_270;
  undefined8 local_268;
  ulonglong local_260;
  ForElementType<unsigned_int> local_258;
  FHeapAllocs *local_250;
  int iStack_248;
  uint uStack_244;
  undefined1 *local_240;
  undefined4 uStack_238;
  int iStack_234;
  int local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  FHeapSpec *local_220;
  FHeapAllocs *local_218;
  undefined8 *local_210;
  FAllocInHeap **local_208;
  undefined8 local_200;
  FHeapAllocs *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  FAllocationItem *local_1a8;
  FAllocationItem *local_1a0;
  int local_198;
  ulonglong local_190;
  FAllocationsProvider *local_188;
  FAllocationItem *local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FAllocationItem_*_const_&> local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined1 local_130 [12];
  uint uStack_124;
  undefined1 *local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 uStack_108;
  FAllocationItem *local_100;
  FAllocationItem **local_f8;
  TRangedForConstIterator local_f0;
  FList local_c0 [2];
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->bInitialized == false) {
    return;
  }
  this->HeapEvents = this->HeapEvents + 1;
  bVar20 = IsValidHeap(this,param_5);
  if (!bVar20) {
    this->HeapErrors = this->HeapErrors + 1;
    if (100 < this->HeapErrors) {
      return;
    }
    if ((byte)LogTraceServices._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    return;
  }
  local_220 = GetHeapSpecUnchecked(this,param_5);
  local_278 = FindParentRootHeapUnchecked(this,param_5);
  pFVar5 = local_278->LiveAllocs;
  pFVar21 = TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                    *)&pFVar5->HeapAllocs,param_4);
  if (pFVar21 != (FList *)0x0) {
    if ((pFVar21->Last == (FNode *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ListPtr->Last != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                            ,0x3eb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar6 = pFVar21->Last;
    pFVar33 = pFVar6->Alloc;
    local_290 = pFVar33;
    if (pFVar21->First == pFVar6) {
      ::operator_delete(pFVar6,0x18);
      TMap<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
      ::FindAndRemoveChecked(&(pFVar5->HeapAllocs).AddressMap,local_c0,param_4);
    }
    else {
      pFVar7 = pFVar6->Prev;
      pFVar21->Last = pFVar7;
      pFVar7->Next = (FNode *)0x0;
      ::operator_delete(pFVar6,0x18);
    }
    piVar2 = &(pFVar5->HeapAllocs).AllocCount;
    *piVar2 = *piVar2 + -1;
    if (pFVar33 != (FAllocationItem *)0x0) {
      pFVar5->TotalAllocCount = pFVar5->TotalAllocCount - 1;
      goto LAB_14d3da757;
    }
  }
  pFVar5 = local_278->LiveAllocs;
  local_290 = pFVar5->LastAlloc;
  if ((local_290 == (FAllocationItem *)0x0) || (local_290->Address != param_4)) {
    for (pFVar10 = (pFVar5->ShortLivingAllocs).LastAddedAllocNode; pFVar10 != (FNode *)0x0;
        pFVar10 = pFVar10->Prev) {
      if (pFVar10->Alloc->Address == param_4) {
        piVar2 = &(pFVar5->ShortLivingAllocs).AllocCount;
        *piVar2 = *piVar2 + -1;
        if (pFVar10->Prev == (FNode *)0x0) {
          (pFVar5->ShortLivingAllocs).OldestAllocNode = pFVar10->Next;
        }
        else {
          pFVar10->Prev->Next = pFVar10->Next;
        }
        if (pFVar10->Next == (FNode *)0x0) {
          (pFVar5->ShortLivingAllocs).LastAddedAllocNode = pFVar10->Prev;
        }
        else {
          pFVar10->Next->Prev = pFVar10->Prev;
        }
        pFVar10->Next = (pFVar5->ShortLivingAllocs).FirstUnusedNode;
        (pFVar5->ShortLivingAllocs).FirstUnusedNode = pFVar10;
        local_290 = pFVar10->Alloc;
        if (local_290 != (FAllocationItem *)0x0) {
          pFVar5->TotalAllocCount = pFVar5->TotalAllocCount - 1;
          this->HeapErrors = this->HeapErrors + 1;
          uVar22 = this->HeapErrors;
          goto LAB_14d3da507;
        }
        break;
      }
    }
    bVar20 = TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
             ::RemoveAndCopyValue(&(pFVar5->LongLivingAllocs).AllocsMap,param_4,&local_1a8);
    if ((bVar20) && (local_290 = local_1a8, local_1a8 != (FAllocationItem *)0x0)) {
      pFVar5->TotalAllocCount = pFVar5->TotalAllocCount - 1;
      uVar22 = this->HeapErrors + 1;
      this->HeapErrors = uVar22;
      if (local_1a8 != (FAllocationItem *)0x0) goto LAB_14d3da507;
    }
    else {
      this->HeapErrors = this->HeapErrors + 1;
      uVar22 = this->HeapErrors;
    }
    if ((uVar22 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    pFVar15 = local_278;
    AllocInternal(this,param_1,param_2,param_3,param_4,0,0,local_278->HeapSpec->Id);
    FSbTree::SetTimeForEvent(pFVar15->SbTree,pFVar15->EventIndex,param_2);
    pFVar5 = pFVar15->LiveAllocs;
    local_290 = pFVar5->LastAlloc;
    if ((local_290 == (FAllocationItem *)0x0) || (local_290->Address != param_4)) {
      for (pFVar10 = (pFVar5->ShortLivingAllocs).LastAddedAllocNode; pFVar10 != (FNode *)0x0;
          pFVar10 = pFVar10->Prev) {
        if (pFVar10->Alloc->Address == param_4) {
          piVar2 = &(pFVar5->ShortLivingAllocs).AllocCount;
          *piVar2 = *piVar2 + -1;
          if (pFVar10->Prev == (FNode *)0x0) {
            (pFVar5->ShortLivingAllocs).OldestAllocNode = pFVar10->Next;
          }
          else {
            pFVar10->Prev->Next = pFVar10->Next;
          }
          if (pFVar10->Next == (FNode *)0x0) {
            (pFVar5->ShortLivingAllocs).LastAddedAllocNode = pFVar10->Prev;
          }
          else {
            pFVar10->Next->Prev = pFVar10->Prev;
          }
          pFVar10->Next = (pFVar5->ShortLivingAllocs).FirstUnusedNode;
          (pFVar5->ShortLivingAllocs).FirstUnusedNode = pFVar10;
          pFVar33 = pFVar10->Alloc;
          local_290 = pFVar33;
          if (pFVar33 != (FAllocationItem *)0x0) {
            pFVar5->TotalAllocCount = pFVar5->TotalAllocCount - 1;
            goto LAB_14d3da74a;
          }
          break;
        }
      }
      bVar20 = TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
               ::RemoveAndCopyValue(&(pFVar5->LongLivingAllocs).AllocsMap,param_4,&local_1a0);
      if ((bVar20) && (local_290 = local_1a0, local_1a0 != (FAllocationItem *)0x0)) {
        pFVar5->TotalAllocCount = pFVar5->TotalAllocCount - 1;
        pFVar33 = local_1a0;
        if (local_1a0 != (FAllocationItem *)0x0) goto LAB_14d3da74a;
      }
      else {
        local_290 = (FAllocationItem *)0x0;
      }
      pFVar33 = local_290;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Alloc != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                          ,0x8e2,L"");
      if (bVar20) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    else {
      pFVar5->TotalAllocCount = pFVar5->TotalAllocCount - 1;
      pFVar5->LastAlloc = (FAllocationItem *)0x0;
      pFVar33 = local_290;
    }
  }
  else {
    pFVar5->TotalAllocCount = pFVar5->TotalAllocCount - 1;
    pFVar5->LastAlloc = (FAllocationItem *)0x0;
    this->HeapErrors = this->HeapErrors + 1;
    uVar22 = this->HeapErrors;
LAB_14d3da507:
    pFVar33 = local_290;
    if ((uVar22 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
LAB_14d3da74a:
  pFVar33->Flags = pFVar33->Flags | Heap;
  pFVar33->RootHeap = (uchar)param_5;
  pFVar33->AllocCallstackId = param_3;
LAB_14d3da757:
  if ((param_4 != pFVar33->Address) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Address == Alloc->Address",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                          ,0x8fb,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((((pFVar33->Flags & Heap) == None) &&
      (this->HeapErrors = this->HeapErrors + 1, this->HeapErrors < 0x65)) &&
     (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if ((local_220->Flags & NeverFrees) != None) {
    iStack_248 = 0;
    local_190 = pFVar33->SizeAndAlignment & 0xffffffffffffff;
    local_260 = pFVar33->Address + local_190;
    uStack_244 = 1;
    local_200 = 0;
    local_230 = 0;
    local_270 = (FAllocInHeap *)0x0;
    local_268 = 0;
    local_280 = local_278->LiveAllocs;
    local_210 = &local_200;
    local_208 = &local_270;
    local_240 = &(local_280->HeapAllocs).AddressMap.field_0x10;
    iVar25 = *(int *)&(local_280->HeapAllocs).AddressMap.field_0x28;
    local_250 = &local_280->HeapAllocs;
    iStack_234 = local_230;
    if (iVar25 != 0) {
      puVar32 = *(uint **)&(local_280->HeapAllocs).AddressMap.field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)local_240;
      }
      uVar29 = *puVar32;
      local_230 = 0;
      while (uVar29 == 0) {
        lVar24 = (longlong)iStack_248;
        local_230 = local_230 + 0x20;
        iStack_248 = iStack_248 + 1;
        iStack_234 = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_248)
        goto LAB_14d3da8b2;
        uVar29 = puVar32[lVar24 + 1];
      }
      uStack_244 = -uVar29 & uVar29;
      uVar22 = (ulonglong)uStack_244 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_198 = (int)lVar24;
      iStack_234 = local_198 + -1 + local_230;
      if (iVar25 < iStack_234) {
        iStack_234 = iVar25;
      }
    }
LAB_14d3da8b2:
    uStack_22c = local_94;
    iStack_228 = *(int *)&(local_280->HeapAllocs).AddressMap.field_0x8 -
                 *(int *)&(local_280->HeapAllocs).AddressMap.field_0x34;
    uVar29 = *(uint *)&(local_280->HeapAllocs).AddressMap.field_0x28;
    local_258 = (ForElementType<unsigned_int>)&(local_280->HeapAllocs).AddressMap.field_0x10;
    uStack_238 = 0xffffffff;
    TStack_158.CurrentBitIndex = iStack_234;
    TStack_158.UnvisitedBitMask = 0xffffffff;
    TStack_158._padding_ = CONCAT44(uStack_244,iStack_248);
    uVar27 = uVar29 & 0xffffffe0;
    iVar25 = (int)uVar29 >> 5;
    TStack_158._28_4_ = local_94;
    TStack_158.BaseBitIndex = local_230;
    uStack_138 = CONCAT44(uStack_224,iStack_228);
    local_218 = local_250;
    local_168.Value = (FAllocationItem **)local_250;
    TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
    if (((int)uVar29 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar17 = local_218;
    FVar16 = local_258;
    uVar22 = local_260;
    uVar4 = *(int *)((longlong)local_258 + 0x18);
    if (uVar29 != uVar4) {
      FVar31 = local_258;
      if (*(ForElementType<unsigned_int> *)((longlong)local_258 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar31 = *(ForElementType<unsigned_int> *)((longlong)local_258 + 0x10);
      }
      uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)((longlong)FVar31 + (longlong)iVar25 * 4);
      while (uVar29 == 0) {
        lVar24 = (longlong)iVar25;
        uVar27 = uVar27 + 0x20;
        iVar25 = iVar25 + 1;
        uVar29 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
        goto LAB_14d3da9e0;
        uVar29 = *(uint *)((undefined1 *)((longlong)FVar31 + 4) + lVar24 * 4);
      }
      uVar3 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_178 = (int)lVar24;
      uVar29 = (uVar27 - 1) + local_178;
      if ((int)uVar4 < (int)uVar29) {
        uVar29 = uVar4;
      }
    }
LAB_14d3da9e0:
    while( true ) {
      ppFVar19 = local_168.Value;
      if (*(int *)&((TMap<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                     *)local_168.Value)->field_0x8 -
          *(int *)&((TMap<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                     *)local_168.Value)->field_0x34 != (int)uStack_138) {
        local_298 = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
      }
      if (((TStack_158.CurrentBitIndex == uVar29) &&
          ((ForElementType<unsigned_int>)TStack_158.Array == FVar16)) &&
         ((FHeapAllocs *)ppFVar19 == pFVar17)) break;
      lVar24 = *(longlong *)
                (TMap<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                 *)ppFVar19;
      uVar3 = *(ulonglong *)((longlong)TStack_158.CurrentBitIndex * 0x20 + lVar24);
      if ((param_4 <= uVar3) && (uVar3 < uVar22)) {
        for (puVar8 = *(undefined8 **)((longlong)TStack_158.CurrentBitIndex * 0x20 + 8 + lVar24);
            puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)puVar8[1]) {
          UE::Core::Private::Function::
          TFunctionRefCaller<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
          ::Call(&local_210,(FAllocationItem *)*puVar8);
        }
      }
      TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    }
    iStack_248 = 0;
    local_230 = 0;
    uStack_244 = 1;
    local_240 = &(local_280->SwapAllocs).AddressMap.field_0x10;
    iVar25 = *(int *)&(local_280->SwapAllocs).AddressMap.field_0x28;
    local_250 = &local_280->SwapAllocs;
    iStack_234 = 0;
    if (iVar25 != 0) {
      puVar32 = *(uint **)&(local_280->SwapAllocs).AddressMap.field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)local_240;
      }
      uVar29 = *puVar32;
      while (uVar29 == 0) {
        lVar24 = (longlong)iStack_248;
        local_230 = local_230 + 0x20;
        iStack_248 = iStack_248 + 1;
        iStack_234 = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_248)
        goto LAB_14d3dab13;
        uVar29 = (puVar32 + 1)[lVar24];
      }
      uStack_244 = -uVar29 & uVar29;
      uVar22 = (ulonglong)uStack_244 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_174 = (int)lVar24;
      iStack_234 = local_174 + -1 + local_230;
      if (iVar25 < iStack_234) {
        iStack_234 = iVar25;
      }
    }
LAB_14d3dab13:
    uStack_22c = local_74;
    iStack_228 = *(int *)&(local_280->SwapAllocs).AddressMap.field_0x8 -
                 *(int *)&(local_280->SwapAllocs).AddressMap.field_0x34;
    uVar29 = *(uint *)&(local_280->SwapAllocs).AddressMap.field_0x28;
    local_258 = (ForElementType<unsigned_int>)&(local_280->SwapAllocs).AddressMap.field_0x10;
    TStack_1f0._padding_ = CONCAT44(uStack_244,iStack_248);
    uStack_238 = 0xffffffff;
    TStack_1f0.CurrentBitIndex = iStack_234;
    TStack_1f0.UnvisitedBitMask = 0xffffffff;
    uVar27 = uVar29 & 0xffffffe0;
    TStack_1f0._28_4_ = local_74;
    TStack_1f0.BaseBitIndex = local_230;
    uStack_1d0 = CONCAT44(uStack_224,iStack_228);
    iVar25 = (int)uVar29 >> 5;
    local_218 = local_250;
    local_1f8 = local_250;
    TStack_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
    if (((int)uVar29 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar17 = local_218;
    FVar16 = local_258;
    uVar22 = local_260;
    uVar4 = *(int *)((longlong)local_258 + 0x18);
    if (uVar29 != uVar4) {
      FVar31 = local_258;
      if (*(ForElementType<unsigned_int> *)((longlong)local_258 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar31 = *(ForElementType<unsigned_int> *)((longlong)local_258 + 0x10);
      }
      uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)((longlong)FVar31 + (longlong)iVar25 * 4);
      while (uVar29 == 0) {
        lVar24 = (longlong)iVar25;
        uVar27 = uVar27 + 0x20;
        iVar25 = iVar25 + 1;
        uVar29 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
        goto LAB_14d3dac40;
        uVar29 = *(uint *)((undefined1 *)((longlong)FVar31 + 4) + lVar24 * 4);
      }
      uVar3 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_170 = (int)lVar24;
      uVar29 = local_170 + -1 + uVar27;
      if ((int)uVar4 < (int)uVar29) {
        uVar29 = uVar4;
      }
    }
LAB_14d3dac40:
    while( true ) {
      pFVar18 = local_1f8;
      if (*(int *)&(local_1f8->AddressMap).field_0x8 - *(int *)&(local_1f8->AddressMap).field_0x34
          != (int)uStack_1d0) {
        local_297[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_297);
      }
      pFVar5 = local_280;
      pFVar33 = local_290;
      if (((TStack_1f0.CurrentBitIndex == uVar29) &&
          ((ForElementType<unsigned_int>)TStack_1f0.Array == FVar16)) && (pFVar18 == pFVar17))
      break;
      lVar24 = *(longlong *)&pFVar18->AddressMap;
      uVar3 = *(ulonglong *)((longlong)TStack_1f0.CurrentBitIndex * 0x20 + lVar24);
      if ((param_4 <= uVar3) && (uVar3 < uVar22)) {
        for (puVar8 = *(undefined8 **)((longlong)TStack_1f0.CurrentBitIndex * 0x20 + 8 + lVar24);
            puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)puVar8[1]) {
          UE::Core::Private::Function::
          TFunctionRefCaller<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
          ::Call(&local_210,(FAllocationItem *)*puVar8);
        }
      }
      TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
    }
    pFVar9 = local_280->LastAlloc;
    if (((pFVar9 != (FAllocationItem *)0x0) && (param_4 <= pFVar9->Address)) &&
       (pFVar9->Address < local_260)) {
      UE::Core::Private::Function::
      TFunctionRefCaller<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
      ::Call(&local_210,pFVar9);
    }
    uVar22 = local_260;
    pFVar14 = local_280;
    for (pFVar10 = (pFVar5->ShortLivingAllocs).LastAddedAllocNode; local_280 = pFVar14,
        pFVar10 != (FNode *)0x0; pFVar10 = pFVar10->Prev) {
      uVar3 = pFVar10->Alloc->Address;
      if ((param_4 <= uVar3) && (uVar3 < uVar22)) {
        UE::Core::Private::Function::
        TFunctionRefCaller<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
        ::Call(&local_210,pFVar10->Alloc);
      }
      pFVar14 = local_280;
    }
    iVar25 = *(int *)&(pFVar5->LongLivingAllocs).AllocsMap.field_0x28;
    local_240 = &(pFVar5->LongLivingAllocs).AllocsMap.field_0x10;
    pFVar1 = &pFVar5->LongLivingAllocs;
    iStack_248 = 0;
    local_230 = 0;
    uStack_244 = 1;
    iStack_234 = 0;
    if (iVar25 != 0) {
      puVar32 = *(uint **)&(pFVar5->LongLivingAllocs).AllocsMap.field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)local_240;
      }
      uVar29 = *puVar32;
      while (uVar29 == 0) {
        lVar24 = (longlong)iStack_248;
        local_230 = local_230 + 0x20;
        iStack_248 = iStack_248 + 1;
        iStack_234 = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_248)
        goto LAB_14d3dadae;
        uVar29 = puVar32[lVar24 + 1];
      }
      uStack_244 = -uVar29 & uVar29;
      uVar22 = (ulonglong)uStack_244 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_16c = (int)lVar24;
      iStack_234 = local_16c + -1 + local_230;
      if (iVar25 < iStack_234) {
        iStack_234 = iVar25;
      }
    }
LAB_14d3dadae:
    uStack_238 = 0xffffffff;
    uVar29 = *(uint *)&(pFVar14->LongLivingAllocs).AllocsMap.field_0x28;
    local_1c8.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar14->LongLivingAllocs).AllocsMap.field_0x10;
    iStack_228 = *(int *)&(pFVar14->LongLivingAllocs).AllocsMap.field_0x8 -
                 *(int *)&(pFVar14->LongLivingAllocs).AllocsMap.field_0x34;
    bVar23 = (byte)uVar29 & 0x1f;
    uStack_118 = CONCAT44(iStack_234,0xffffffff);
    local_1c8._padding_._0_4_ = (int)uVar29 >> 5;
    local_1c8._padding_._4_4_ = 1 << bVar23;
    local_1c8.BaseBitIndex = uVar29 & 0xffffffe0;
    local_1c8.UnvisitedBitMask = -1 << bVar23;
    unique0x10000a6c = CONCAT44(uStack_244,iStack_248);
    local_110 = CONCAT44(local_54,local_230);
    uStack_108._4_4_ = uStack_224;
    uStack_108._0_4_ = iStack_228;
    local_250 = (FHeapAllocs *)pFVar1;
    local_1c8.CurrentBitIndex = uVar29;
    local_130._0_8_ = pFVar1;
    local_120 = local_240;
    if (((int)uVar29 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (uVar29 != *(uint *)&(pFVar14->LongLivingAllocs).AllocsMap.field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
    }
    TStack_1f0._padding_ = CONCAT44(local_1c8._padding_._4_4_,(int)local_1c8._padding_);
    TStack_1f0._16_8_ = CONCAT44(local_1c8.CurrentBitIndex,local_1c8.UnvisitedBitMask);
    TStack_1f0._24_8_ = CONCAT44(local_1c8._28_4_,local_1c8.BaseBitIndex);
    local_f0.InitialNum =
         *(int *)&(pFVar14->LongLivingAllocs).AllocsMap.field_0x8 -
         *(int *)&(pFVar14->LongLivingAllocs).AllocsMap.field_0x34;
    TStack_1f0.Array = local_1c8.Array;
    uStack_1d0._0_4_ = local_f0.InitialNum;
    local_f0._padding_ = (longlong)local_1c8.Array;
    local_f0._44_4_ = uStack_1d0._4_4_;
    local_1f8 = (FHeapAllocs *)pFVar1;
    local_f0._padding_ = (longlong)pFVar1;
    local_f0._padding_ = TStack_1f0._padding_;
    local_f0._padding_ = TStack_1f0._16_8_;
    local_f0._padding_ = TStack_1f0._24_8_;
    bVar20 = TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_130,&local_f0);
    uVar22 = local_260;
    if (bVar20) {
      do {
        pFVar9 = *(FAllocationItem **)
                  (*(longlong *)
                    (TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
                     *)local_130._0_8_ + 8 + (longlong)uStack_118._4_4_ * 0x18);
        uVar3 = pFVar9->Address;
        if ((param_4 <= uVar3) && (uVar3 < uVar22)) {
          UE::Core::Private::Function::
          TFunctionRefCaller<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
          ::Call(&local_210,pFVar9);
        }
        uStack_118 = CONCAT44(uStack_118._4_4_,(uint)uStack_118 & ~uStack_124);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_130 + 8));
        bVar20 = TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_130,&local_f0);
      } while (bVar20);
    }
    if (0 < (int)local_268) {
      if (((local_220->Flags & NeverFrees) == None) &&
         (this->HeapWarnings = this->HeapWarnings + 1, this->HeapWarnings < 0x65)) {
        if ((2 < (byte)LogTraceServices._0_1_) &&
           (UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u__MemAlloc__Heap_152b11778,
                       (FLogCategoryBase *)&LogTraceServices), 2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        local_res8 = SUB81(this,0);
        local_188 = this;
        AlgoImpl::
        IntroSortInternal<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,int,FIdentityFunctor,TDereferenceWrapper<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_[::E]::<lambda_2>_>_>
                  (local_270,(int)local_268,local_res8,(<lambda_2> *)&local_188);
        iVar25 = (int)local_268;
        iVar30 = 10;
        pFVar28 = local_270 + (int)local_268;
        pFVar26 = local_270;
        while( true ) {
          if ((int)local_268 != iVar25) {
            `TCheckedPointerIterator<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::FAllocInHeap,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_288);
          }
          if (pFVar26 == pFVar28) break;
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          iVar30 = iVar30 + -1;
          if (iVar30 < 1) break;
          pFVar26 = pFVar26 + 1;
        }
      }
      pFVar15 = local_278;
      iVar25 = (int)local_268;
      pFVar28 = local_270 + (int)local_268;
      pFVar26 = local_270;
      while( true ) {
        if ((int)local_268 != iVar25) {
          `TCheckedPointerIterator<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::FAllocInHeap,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_287);
        }
        pFVar33 = local_290;
        if (pFVar26 == pFVar28) break;
        FreeInternal(this,param_1,param_2,param_3,pFVar26->Address,pFVar15->HeapSpec->Id);
        pFVar26 = pFVar26 + 1;
      }
    }
    if (local_270 != (FAllocInHeap *)0x0) {
      FMemory::Free(local_270);
    }
  }
  uVar22 = pFVar33->SizeAndAlignment;
  uVar29 = pFVar33->AllocCallstackId;
  pFVar5 = local_278->LiveAllocs;
  uVar27 = pFVar5->TotalAllocCount + 1;
  pFVar5->TotalAllocCount = uVar27;
  if (pFVar5->MaxAllocCount < uVar27) {
    pFVar5->MaxAllocCount = uVar27;
  }
  pFVar9 = pFVar5->LastAlloc;
  pFVar5->LastAlloc = pFVar33;
  if (pFVar9 != (FAllocationItem *)0x0) {
    pFVar10 = (pFVar5->ShortLivingAllocs).FirstUnusedNode;
    if (pFVar10 == (FNode *)0x0) {
      pFVar10 = (pFVar5->ShortLivingAllocs).OldestAllocNode;
      pFVar11 = pFVar10->Next;
      pFVar12 = pFVar10->Alloc;
      (pFVar5->ShortLivingAllocs).OldestAllocNode = pFVar11;
      pFVar11->Prev = (FNode *)0x0;
      pFVar10->Alloc = pFVar9;
      pFVar10->Next = (FNode *)0x0;
      pFVar10->Prev = (pFVar5->ShortLivingAllocs).LastAddedAllocNode;
      ((pFVar5->ShortLivingAllocs).LastAddedAllocNode)->Next = pFVar10;
      (pFVar5->ShortLivingAllocs).LastAddedAllocNode = pFVar10;
      if (pFVar12 != (FAllocationItem *)0x0) {
        local_f8 = &local_180;
        local_180 = pFVar12;
        local_100 = pFVar12;
        TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FAllocationItem_*_const_&>_>
                  ((TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
                    *)&pFVar5->LongLivingAllocs,&local_168,(bool *)&local_100);
      }
    }
    else {
      piVar2 = &(pFVar5->ShortLivingAllocs).AllocCount;
      *piVar2 = *piVar2 + 1;
      (pFVar5->ShortLivingAllocs).FirstUnusedNode = pFVar10->Next;
      pFVar10->Alloc = pFVar9;
      pFVar10->Next = (FNode *)0x0;
      pFVar10->Prev = (pFVar5->ShortLivingAllocs).LastAddedAllocNode;
      pFVar11 = (pFVar5->ShortLivingAllocs).LastAddedAllocNode;
      if (pFVar11 == (FNode *)0x0) {
        (pFVar5->ShortLivingAllocs).OldestAllocNode = pFVar10;
      }
      else {
        pFVar11->Next = pFVar10;
      }
      (pFVar5->ShortLivingAllocs).LastAddedAllocNode = pFVar10;
    }
  }
  FTagTracker::PushTagFromPtr(&this->TagTracker,param_1,'\x01',pFVar33->Tag);
  pFVar15 = local_278;
  FreeInternal(this,param_1,param_2,param_3,param_4,local_278->HeapSpec->Id);
  AllocInternal(this,param_1,param_2,uVar29,param_4,uVar22 & 0xffffffffffffff,
                (uint)(byte)(uVar22 >> 0x38),pFVar15->HeapSpec->Id);
  FTagTracker::PopTagFromPtr(&this->TagTracker,param_1,'\x01');
  return;
}

// EditUpdateAlloc @ 14d3db290

void __thiscall
TraceServices::FAllocationsProvider::EditUpdateAlloc
          (FAllocationsProvider *this,uint param_1,double param_2,uint param_3,ulong64 param_4,
          uint param_5)

{
  FAllocationItem *pFVar1;
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if ((this->bInitialized != false) &&
     (pFVar1 = FreeInternal(this,param_1,param_2,param_3,param_4,param_5),
     pFVar1 != (FAllocationItem *)0x0)) {
    AllocInternal(this,param_1,param_2,pFVar1->AllocCallstackId,param_4,
                  pFVar1->SizeAndAlignment & 0xffffffffffffff,
                  (uint)(byte)(pFVar1->SizeAndAlignment >> 0x38),param_5);
  }
  return;
}

// EndEdit @ 14d3db360

void __thiscall TraceServices::FAllocationsProvider::EndEdit(FAllocationsProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b70));
  return;
}

// EndRead @ 14d3dba30

void __thiscall TraceServices::FAllocationsProvider::EndRead(FAllocationsProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b70));
  return;
}

// EnumerateHeaps @ 14d3dbef0

void __thiscall
TraceServices::FAllocationsProvider::EnumerateHeaps
          (FAllocationsProvider *this,
          TFunctionRef<void___cdecl(unsigned_int,TraceServices::IAllocationsProvider::FHeapSpec_const_&)>
          *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_res8 [2];
  
  (**(code **)(this->_padding_ + 0x18))();
  uVar1 = (this->HeapSpecs).ArrayNum;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->HeapSpecs).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar2 = *(undefined4 **)((this->HeapSpecs).AllocatorInstance.Data + (longlong)(int)uVar6 * 8)
      ;
      if ((puVar2 != (undefined4 *)0x0) && (*(longlong *)(puVar2 + 8) != 0)) {
        local_res8[0] = *puVar2;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return;
}

// EnumerateLiveAllocs @ 14d3dbfe0

void __thiscall
TraceServices::FAllocationsProvider::EnumerateLiveAllocs
          (FAllocationsProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FAllocationItem_const_&)> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1a8 [4];
  uint local_1a4;
  longlong *local_1a0;
  longlong *local_198;
  int iStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  longlong local_160;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_1a4 = 0;
  local_160 = 0x23;
  do {
    if ((&this->_padding_)[local_160] != 0) {
      plVar4 = *(longlong **)((&this->_padding_)[local_160] + 8);
      iStack_190 = 0;
      pcVar5 = *(code **)param_1;
      uVar6 = *(undefined8 *)&param_1->field_0x8;
      local_178 = 0;
      uStack_18c = 1;
      local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar4 + 0x12);
      iVar2 = (int)plVar4[0x15];
      local_1a0 = plVar4 + 0x10;
      iStack_17c = 0;
      if (iVar2 != 0) {
        pTVar16 = local_188;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[0x14] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[0x14];
        }
        uVar17 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
        while (uVar17 == 0) {
          lVar13 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iStack_17c = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_14d3dc0d1;
          uVar17 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_18c = -uVar17 & uVar17;
        uVar1 = (ulonglong)uStack_18c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_158 = (int)lVar13;
        iStack_17c = local_158 + -1 + local_178;
        if (iVar2 < iStack_17c) {
          iStack_17c = iVar2;
        }
      }
LAB_14d3dc0d1:
      uStack_174 = local_94;
      iStack_170 = (int)plVar4[0x11] - *(int *)((longlong)plVar4 + 0xb4);
      uVar17 = *(uint *)(plVar4 + 0x15);
      TStack_138._padding_ = CONCAT44(uStack_18c,iStack_190);
      uStack_180 = 0xffffffff;
      TStack_138.CurrentBitIndex = iStack_17c;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      uVar18 = uVar17 & 0xffffffe0;
      iVar14 = (int)uVar17 >> 5;
      TStack_138._28_4_ = local_94;
      TStack_138.BaseBitIndex = local_178;
      uStack_118 = CONCAT44(uStack_16c,iStack_170);
      local_198 = local_1a0;
      local_168 = plVar4;
      local_140 = local_1a0;
      TStack_138.Array = local_188;
      if ((((int)uVar17 < 0) || (iVar2 < (int)uVar17)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = local_1a0;
      uVar3 = *(uint *)(plVar4 + 0x15);
      if (uVar17 != uVar3) {
        pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar4 + 0x12);
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[0x14] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[0x14];
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                 *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar17 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14d3dc200;
          uVar17 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_154 = (int)lVar13;
        uVar17 = local_154 + -1 + uVar18;
        if ((int)uVar3 < (int)uVar17) {
          uVar17 = uVar3;
        }
      }
LAB_14d3dc200:
      while( true ) {
        plVar11 = local_140;
        if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        plVar10 = local_168;
        if (((TStack_138.CurrentBitIndex == uVar17) &&
            (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar4 + 0x12))) &&
           (plVar11 == plVar9)) break;
        for (puVar7 = *(undefined8 **)((longlong)TStack_138.CurrentBitIndex * 0x20 + 8 + *plVar11);
            puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)puVar7[1]) {
          (*pcVar5)(uVar6,*puVar7);
        }
        TStack_138._padding_._4_4_ = (uint)((ulonglong)TStack_138._padding_ >> 0x20);
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      }
      iStack_190 = 0;
      local_178 = 0;
      uStack_18c = 1;
      local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x1d);
      iVar2 = (int)local_168[0x20];
      local_1a0 = local_168 + 0x1b;
      iStack_17c = 0;
      if (iVar2 != 0) {
        pTVar16 = local_188;
        if ((TBitArray<FDefaultBitArrayAllocator> *)local_168[0x1f] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)local_168[0x1f];
        }
        uVar17 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
        while (uVar17 == 0) {
          lVar13 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iStack_17c = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_14d3dc311;
          uVar17 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_18c = -uVar17 & uVar17;
        uVar1 = (ulonglong)uStack_18c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_150 = (int)lVar13;
        iStack_17c = local_178 + -1 + local_150;
        if (iVar2 < iStack_17c) {
          iStack_17c = iVar2;
        }
      }
LAB_14d3dc311:
      uStack_174 = local_74;
      iStack_170 = (int)local_168[0x1c] - *(int *)((longlong)local_168 + 0x10c);
      uVar17 = *(uint *)(local_168 + 0x20);
      TStack_108._padding_ = CONCAT44(uStack_18c,iStack_190);
      uStack_180 = 0xffffffff;
      pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x1d);
      TStack_108.CurrentBitIndex = iStack_17c;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      uVar18 = uVar17 & 0xffffffe0;
      iVar14 = (int)uVar17 >> 5;
      TStack_108._28_4_ = local_74;
      TStack_108.BaseBitIndex = local_178;
      uStack_e8 = CONCAT44(uStack_16c,iStack_170);
      local_198 = local_1a0;
      local_110 = local_1a0;
      TStack_108.Array = local_188;
      if ((((int)uVar17 < 0) || (iVar2 < (int)uVar17)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar4 = local_1a0;
      uVar3 = *(uint *)(plVar10 + 0x20);
      if (uVar17 != uVar3) {
        pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)plVar10[0x1f];
        pTVar15 = pTVar16;
        if (pTVar8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar8;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                 *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar17 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14d3dc440;
          uVar17 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_14c = (int)lVar13;
        uVar17 = local_14c + -1 + uVar18;
        if ((int)uVar3 < (int)uVar17) {
          uVar17 = uVar3;
        }
      }
LAB_14d3dc440:
      while( true ) {
        plVar9 = local_110;
        if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        plVar11 = local_168;
        if (((TStack_108.CurrentBitIndex == uVar17) && (TStack_108.Array == pTVar16)) &&
           (plVar9 == plVar4)) break;
        for (puVar7 = *(undefined8 **)((longlong)TStack_108.CurrentBitIndex * 0x20 + 8 + *plVar9);
            puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)puVar7[1]) {
          (*pcVar5)(uVar6,*puVar7);
        }
        TStack_108._padding_._4_4_ = (uint)((ulonglong)TStack_108._padding_ >> 0x20);
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
      if (*local_168 != 0) {
        (*pcVar5)(uVar6);
      }
      for (puVar7 = (undefined8 *)plVar11[2]; puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)puVar7[2]) {
        (*pcVar5)(uVar6,*puVar7);
      }
      iVar2 = (int)plVar11[0xb];
      local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 8);
      iStack_190 = 0;
      local_1a0 = plVar11 + 6;
      local_178 = 0;
      uStack_18c = 1;
      iStack_17c = 0;
      if (iVar2 != 0) {
        pTVar16 = local_188;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[10] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[10];
        }
        uVar17 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
        while (uVar17 == 0) {
          lVar13 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iStack_17c = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_14d3dc570;
          uVar17 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_18c = -uVar17 & uVar17;
        uVar1 = (ulonglong)uStack_18c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_148 = (int)lVar13;
        iStack_17c = local_178 + -1 + local_148;
        if (iVar2 < iStack_17c) {
          iStack_17c = iVar2;
        }
      }
LAB_14d3dc570:
      iStack_170 = (int)plVar11[7] - *(int *)((longlong)plVar11 + 100);
      uVar17 = *(uint *)(plVar11 + 0xb);
      TStack_d8._padding_ = CONCAT44(uStack_18c,iStack_190);
      uStack_180 = 0xffffffff;
      TStack_d8.CurrentBitIndex = iStack_17c;
      TStack_d8.UnvisitedBitMask = 0xffffffff;
      uVar18 = uVar17 & 0xffffffe0;
      iVar14 = (int)uVar17 >> 5;
      TStack_d8._28_4_ = local_54;
      TStack_d8.BaseBitIndex = local_178;
      uStack_b8 = CONCAT44(uStack_16c,iStack_170);
      local_198 = local_1a0;
      local_e0 = local_1a0;
      TStack_d8.Array = local_188;
      if ((((int)uVar17 < 0) || (iVar2 < (int)uVar17)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar4 = local_1a0;
      uVar3 = *(uint *)(plVar11 + 0xb);
      if (uVar17 != uVar3) {
        pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 8);
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[10] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[10];
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                 *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar17 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14d3dc6a0;
          uVar17 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_144 = (int)lVar13;
        uVar17 = local_144 + -1 + uVar18;
        if ((int)uVar3 < (int)uVar17) {
          uVar17 = uVar3;
        }
      }
LAB_14d3dc6a0:
      while( true ) {
        plVar9 = local_e0;
        if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
          local_1a8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
        }
        if (((TStack_d8.CurrentBitIndex == uVar17) &&
            (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 8))) &&
           (plVar9 == plVar4)) break;
        (*pcVar5)(uVar6,*(undefined8 *)(*plVar9 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x18));
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      }
    }
    local_1a4 = local_1a4 + 1;
    local_160 = local_160 + 1;
    if (0xf < local_1a4) {
      return;
    }
  } while( true );
}

// EnumerateRootHeaps @ 14d3dcbf0

void __thiscall
TraceServices::FAllocationsProvider::EnumerateRootHeaps
          (FAllocationsProvider *this,
          TFunctionRef<void___cdecl(unsigned_int,TraceServices::IAllocationsProvider::FHeapSpec_const_&)>
          *param_1)

{
  FRootHeap *pFVar1;
  FHeapSpec *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FRootHeap **ppFVar6;
  uint local_res8 [2];
  
  ppFVar6 = this->RootHeaps;
  (**(code **)(this->_padding_ + 0x18))();
  lVar5 = 0x10;
  do {
    pFVar1 = *ppFVar6;
    if (pFVar1 != (FRootHeap *)0x0) {
      if (pFVar1->HeapSpec == (FHeapSpec *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootHeap->HeapSpec != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0xa98,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = pFVar1->HeapSpec;
      if (pFVar2->Parent != (FHeapSpec *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapSpec.Parent == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                           ,0xa9a,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pFVar2->Name != (wchar_t *)0x0) {
        local_res8[0] = pFVar2->Id;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8,pFVar2);
      }
    }
    ppFVar6 = ppFVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// EnumerateTags @ 14d3dcd10

void __thiscall
TraceServices::FAllocationsProvider::EnumerateTags
          (FAllocationsProvider *this,
          TFunctionRef<void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int)>
          *param_1)

{
  TFunctionRef<void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int)> local_18;
  
  (**(code **)(this->_padding_ + 0x18))();
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  FTagTracker::EnumerateTags(&this->TagTracker,&local_18);
  return;
}

// EnumerateTimeline @ 14d3dcfc0

void __thiscall
TraceServices::FAllocationsProvider::EnumerateTimeline
          (FAllocationsProvider *this,ETimelineU32 param_1,int param_2,int param_3,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_4)

{
  TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *pTVar1;
  TPagedArrayPage<unsigned_int> *pTVar2;
  code *pcVar3;
  TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *pTVar4;
  bool bVar5;
  double *pdVar6;
  uint *puVar7;
  uint *puVar8;
  double *pdVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulong64 uVar16;
  double dVar17;
  uint local_res8 [2];
  int local_res10;
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b8;
  uint local_b0 [2];
  TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> local_70;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (SwapFreeEvents < param_1) {
    return;
  }
  pTVar1 = this->ValueTimelinesU32[(int)param_1];
  if (pTVar1 == (TPagedArray<unsigned_int,TraceServices::TPagedArrayPage<unsigned_int>_> *)0x0) {
    return;
  }
  local_b8 = (int)(this->Timeline).TotalItemCount;
  iVar14 = 0;
  if (0 < param_2) {
    iVar14 = param_2;
  }
  local_res10 = local_b8;
  if (param_3 + 1 < local_b8) {
    local_res10 = param_3 + 1;
  }
  if (local_res10 <= iVar14) {
    return;
  }
  uVar15 = (ulonglong)iVar14;
  local_a8 = pTVar1;
  TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::GetIteratorFromItem
            (&this->Timeline,&local_70,uVar15);
  local_c8 = uVar15 / pTVar1->PageSize;
  if (uVar15 == pTVar1->TotalItemCount) {
    puVar8 = (uint *)0x0;
    puVar7 = (uint *)0x0;
  }
  else {
    if ((pTVar1->TotalItemCount <= uVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InItemIndex < Outer->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((ulonglong)(longlong)(pTVar1->PagesArray).ArrayNum <= local_c8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = pTVar1->FirstPage;
    if (pTVar2[local_c8].Items == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = pTVar2[local_c8].Items + (pTVar2[local_c8].Count - 1);
    }
    uVar15 = uVar15 % pTVar1->PageSize;
    if ((pTVar2[local_c8].Count <= uVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar7 = pTVar2[local_c8].Items + uVar15;
  }
  pTVar4 = local_a8;
  uVar10 = *puVar7;
  dVar17 = *local_70.CurrentItem;
  if (local_70.CurrentItem == local_70.CurrentPageLastItem) {
    if (local_70.CurrentPageIndex == (longlong)(((local_70.Outer)->PagesArray).ArrayNum + -1)) {
      pdVar6 = (double *)0x0;
    }
    else {
      local_70.CurrentPageIndex = local_70.CurrentPageIndex + 1;
      pdVar6 = (local_70.Outer)->FirstPage[local_70.CurrentPageIndex].Items;
      if (pdVar6 != (double *)0x0) {
        pdVar9 = pdVar6 + ((local_70.Outer)->FirstPage[local_70.CurrentPageIndex].Count - 1);
        uVar16 = local_70.CurrentPageIndex;
        goto LAB_14d3dd1a1;
      }
    }
    pdVar9 = (double *)0x0;
    uVar16 = local_70.CurrentPageIndex;
  }
  else {
    pdVar6 = local_70.CurrentItem + 1;
    pdVar9 = local_70.CurrentPageLastItem;
    uVar16 = local_70.CurrentPageIndex;
  }
LAB_14d3dd1a1:
  if (puVar7 == puVar8) {
    if (local_c8 == (longlong)((pTVar1->PagesArray).ArrayNum + -1)) {
      puVar7 = (uint *)0x0;
    }
    else {
      local_c8 = local_c8 + 1;
      puVar7 = pTVar1->FirstPage[local_c8].Items;
      if (puVar7 != (uint *)0x0) {
        puVar8 = puVar7 + (pTVar1->FirstPage[local_c8].Count - 1);
        goto LAB_14d3dd1e7;
      }
    }
    puVar8 = (uint *)0x0;
  }
  else {
    puVar7 = puVar7 + 1;
  }
LAB_14d3dd1e7:
  if (iVar14 + 1 < local_res10) {
    lVar12 = local_c8 << 4;
    local_c0 = (ulonglong)(uint)(local_res10 - (iVar14 + 1));
    do {
      local_a0 = *pdVar6 - dVar17;
      local_res8[0] = uVar10;
      local_98 = dVar17;
      (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_98,&local_a0,local_res8);
      dVar17 = *pdVar6;
      uVar10 = *puVar7;
      if (pdVar6 == pdVar9) {
        if (uVar16 == (longlong)(((local_70.Outer)->PagesArray).ArrayNum + -1)) {
          pdVar6 = (double *)0x0;
        }
        else {
          uVar16 = uVar16 + 1;
          pdVar6 = (local_70.Outer)->FirstPage[uVar16].Items;
          if (pdVar6 != (double *)0x0) {
            pdVar9 = pdVar6 + ((local_70.Outer)->FirstPage[uVar16].Count - 1);
            goto LAB_14d3dd28a;
          }
        }
        pdVar9 = (double *)0x0;
      }
      else {
        pdVar6 = pdVar6 + 1;
      }
LAB_14d3dd28a:
      if (puVar7 == puVar8) {
        if (local_c8 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
          puVar7 = (uint *)0x0;
          lVar13 = lVar12;
        }
        else {
          pTVar2 = pTVar4->FirstPage;
          lVar13 = lVar12 + 0x10;
          local_c8 = local_c8 + 1;
          puVar7 = *(uint **)((longlong)&pTVar2[1].Items + lVar12);
          if (puVar7 != (uint *)0x0) {
            puVar8 = puVar7 + *(longlong *)((longlong)&pTVar2[1].Count + lVar12) + -1;
            lVar12 = lVar13;
            goto LAB_14d3dd2d0;
          }
        }
        puVar8 = (uint *)0x0;
        lVar12 = lVar13;
      }
      else {
        puVar7 = puVar7 + 1;
      }
LAB_14d3dd2d0:
      local_c0 = local_c0 - 1;
    } while (local_c0 != 0);
    local_c0 = 0;
  }
  if (local_res10 < local_b8) {
    pdVar9 = &local_90;
    local_90 = *pdVar6 - dVar17;
    puVar11 = (ulonglong *)local_b0;
    pdVar6 = &local_88;
    local_b0[0] = uVar10;
    local_88 = dVar17;
  }
  else {
    pdVar9 = &local_80;
    local_c0 = CONCAT44(local_c0._4_4_,uVar10);
    pdVar6 = &local_78;
    local_80 = __real_7ff0000000000000;
    puVar11 = &local_c0;
    local_78 = dVar17;
  }
  (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,pdVar6,pdVar9,puVar11);
  return;
}

// EnumerateTimeline @ 14d3dd370

void __thiscall
TraceServices::FAllocationsProvider::EnumerateTimeline
          (FAllocationsProvider *this,ETimelineU64 param_1,int param_2,int param_3,
          TFunctionRef<void___cdecl(double,double,unsigned___int64)> *param_4)

{
  int iVar1;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *pTVar2;
  TPagedArrayPage<unsigned___int64> *pTVar3;
  code *pcVar4;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *pTVar5;
  bool bVar6;
  int iVar7;
  double *pdVar8;
  ulong64 *puVar9;
  ulong64 *puVar10;
  double *pdVar11;
  ulong64 uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulong64 uVar18;
  double dVar19;
  ulonglong local_c8;
  ulonglong local_c0;
  TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *local_b8;
  ulong64 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulong64 local_88;
  double local_80;
  double local_78;
  TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> local_70;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (MaxTotalCompressedSwapMemory < param_1) {
    return;
  }
  pTVar2 = this->ValueTimelinesU64[(int)param_1];
  if (pTVar2 == (TPagedArray<unsigned___int64,TraceServices::TPagedArrayPage<unsigned___int64>_> *)
                0x0) {
    return;
  }
  iVar1 = (int)(this->Timeline).TotalItemCount;
  iVar16 = 0;
  if (0 < param_2) {
    iVar16 = param_2;
  }
  iVar7 = iVar1;
  if (param_3 + 1 < iVar1) {
    iVar7 = param_3 + 1;
  }
  if (iVar7 <= iVar16) {
    return;
  }
  uVar17 = (ulonglong)iVar16;
  local_b8 = pTVar2;
  TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::GetIteratorFromItem
            (&this->Timeline,&local_70,uVar17);
  local_c8 = uVar17 / pTVar2->PageSize;
  if (uVar17 == pTVar2->TotalItemCount) {
    puVar10 = (ulong64 *)0x0;
    puVar9 = (ulong64 *)0x0;
  }
  else {
    if ((pTVar2->TotalItemCount <= uVar17) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InItemIndex < Outer->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((ulonglong)(longlong)(pTVar2->PagesArray).ArrayNum <= local_c8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = pTVar2->FirstPage;
    if (pTVar3[local_c8].Items == (ulong64 *)0x0) {
      puVar10 = (ulong64 *)0x0;
    }
    else {
      puVar10 = pTVar3[local_c8].Items + (pTVar3[local_c8].Count - 1);
    }
    uVar17 = uVar17 % pTVar2->PageSize;
    if ((pTVar3[local_c8].Count <= uVar17) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar9 = pTVar3[local_c8].Items + uVar17;
  }
  pTVar5 = local_b8;
  uVar12 = *puVar9;
  dVar19 = *local_70.CurrentItem;
  if (local_70.CurrentItem == local_70.CurrentPageLastItem) {
    if (local_70.CurrentPageIndex == (longlong)(((local_70.Outer)->PagesArray).ArrayNum + -1)) {
      pdVar8 = (double *)0x0;
    }
    else {
      local_70.CurrentPageIndex = local_70.CurrentPageIndex + 1;
      pdVar8 = (local_70.Outer)->FirstPage[local_70.CurrentPageIndex].Items;
      if (pdVar8 != (double *)0x0) {
        pdVar11 = pdVar8 + ((local_70.Outer)->FirstPage[local_70.CurrentPageIndex].Count - 1);
        uVar18 = local_70.CurrentPageIndex;
        goto LAB_14d3dd551;
      }
    }
    pdVar11 = (double *)0x0;
    uVar18 = local_70.CurrentPageIndex;
  }
  else {
    pdVar8 = local_70.CurrentItem + 1;
    pdVar11 = local_70.CurrentPageLastItem;
    uVar18 = local_70.CurrentPageIndex;
  }
LAB_14d3dd551:
  if (puVar9 == puVar10) {
    if (local_c8 == (longlong)((pTVar2->PagesArray).ArrayNum + -1)) {
      puVar9 = (ulong64 *)0x0;
    }
    else {
      local_c8 = local_c8 + 1;
      puVar9 = pTVar2->FirstPage[local_c8].Items;
      if (puVar9 != (ulong64 *)0x0) {
        puVar10 = puVar9 + (pTVar2->FirstPage[local_c8].Count - 1);
        goto LAB_14d3dd597;
      }
    }
    puVar10 = (ulong64 *)0x0;
  }
  else {
    puVar9 = puVar9 + 1;
  }
LAB_14d3dd597:
  if (iVar16 + 1 < iVar7) {
    lVar14 = local_c8 << 4;
    local_c0 = (ulonglong)(uint)(iVar7 - (iVar16 + 1));
    do {
      local_a8 = *pdVar8 - dVar19;
      local_b0 = uVar12;
      local_a0 = dVar19;
      (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_a0,&local_a8,&local_b0);
      dVar19 = *pdVar8;
      uVar12 = *puVar9;
      if (pdVar8 == pdVar11) {
        if (uVar18 == (longlong)(((local_70.Outer)->PagesArray).ArrayNum + -1)) {
          pdVar8 = (double *)0x0;
        }
        else {
          uVar18 = uVar18 + 1;
          pdVar8 = (local_70.Outer)->FirstPage[uVar18].Items;
          if (pdVar8 != (double *)0x0) {
            pdVar11 = pdVar8 + ((local_70.Outer)->FirstPage[uVar18].Count - 1);
            goto LAB_14d3dd63a;
          }
        }
        pdVar11 = (double *)0x0;
      }
      else {
        pdVar8 = pdVar8 + 1;
      }
LAB_14d3dd63a:
      if (puVar9 == puVar10) {
        if (local_c8 == (longlong)((pTVar5->PagesArray).ArrayNum + -1)) {
          puVar9 = (ulong64 *)0x0;
          lVar15 = lVar14;
        }
        else {
          pTVar3 = pTVar5->FirstPage;
          lVar15 = lVar14 + 0x10;
          local_c8 = local_c8 + 1;
          puVar9 = *(ulong64 **)((longlong)&pTVar3[1].Items + lVar14);
          if (puVar9 != (ulong64 *)0x0) {
            puVar10 = puVar9 + *(longlong *)((longlong)&pTVar3[1].Count + lVar14) + -1;
            lVar14 = lVar15;
            goto LAB_14d3dd680;
          }
        }
        puVar10 = (ulong64 *)0x0;
        lVar14 = lVar15;
      }
      else {
        puVar9 = puVar9 + 1;
      }
LAB_14d3dd680:
      local_c0 = local_c0 - 1;
    } while (local_c0 != 0);
    local_c0 = 0;
  }
  if (iVar7 < iVar1) {
    pdVar11 = &local_98;
    local_98 = *pdVar8 - dVar19;
    puVar13 = &local_c0;
    pdVar8 = &local_90;
    local_c0 = uVar12;
    local_90 = dVar19;
  }
  else {
    pdVar11 = &local_80;
    pdVar8 = &local_78;
    local_80 = __real_7ff0000000000000;
    puVar13 = &local_88;
    local_88 = uVar12;
    local_78 = dVar19;
  }
  (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,pdVar8,pdVar11,puVar13);
  return;
}

// FindParentRootHeapUnchecked @ 14d3de8d0

FRootHeap * __thiscall
TraceServices::FAllocationsProvider::FindParentRootHeapUnchecked
          (FAllocationsProvider *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRootHeap *pFVar5;
  uint *puVar6;
  
  uVar4 = 0;
  if ((int)param_1 < (this->HeapSpecs).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRootHeap *)(*pcVar2)();
      return pFVar5;
    }
  }
  puVar6 = *(uint **)((this->HeapSpecs).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  puVar1 = *(uint **)(puVar6 + 2);
  if (puVar1 != (uint *)0x0) {
    do {
      puVar6 = puVar1;
      puVar1 = *(uint **)(puVar6 + 2);
    } while (puVar1 != (uint *)0x0);
    return this->RootHeaps[*puVar6];
  }
  return this->RootHeaps[*puVar6];
}

// FreeInternal @ 14d3df7c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FAllocationItem * __thiscall
TraceServices::FAllocationsProvider::FreeInternal
          (FAllocationsProvider *this,uint param_1,double param_2,uint param_3,ulong64 param_4,
          uint param_5)

{
  ulonglong uVar1;
  FRootHeap *pFVar2;
  FLiveAllocCollection *pFVar3;
  FNode *pFVar4;
  FNode *pFVar5;
  longlong lVar6;
  code *pcVar7;
  int *piVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  FList *pFVar12;
  FAllocationItem *pFVar13;
  ulonglong uVar14;
  FAllocationItem *pFVar15;
  FAllocationItem *local_48;
  FAllocationItem *local_40 [3];
  
  uVar11 = param_5;
  uVar9 = param_4;
  if ((param_4 == 0) && (param_5 == 0)) {
    return (FAllocationItem *)0x0;
  }
  if ((0xf < param_5) || (pFVar2 = this->RootHeaps[param_5], pFVar2 == (FRootHeap *)0x0)) {
    this->FreeWarnings = this->FreeWarnings + 1;
    if (100 < this->FreeWarnings) {
      return (FAllocationItem *)0x0;
    }
    if ((byte)LogTraceServices._0_1_ < 3) {
      return (FAllocationItem *)0x0;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    return (FAllocationItem *)0x0;
  }
  FSbTree::SetTimeForEvent(pFVar2->SbTree,pFVar2->EventIndex,param_2);
  AdvanceTimelines(this,param_2);
  pFVar3 = pFVar2->LiveAllocs;
  pFVar13 = pFVar3->LastAlloc;
  if ((pFVar13 == (FAllocationItem *)0x0) || (pFVar13->Address != uVar9)) {
    for (pFVar4 = (pFVar3->ShortLivingAllocs).LastAddedAllocNode; pFVar4 != (FNode *)0x0;
        pFVar4 = pFVar4->Prev) {
      if (pFVar4->Alloc->Address == uVar9) {
        piVar8 = &(pFVar3->ShortLivingAllocs).AllocCount;
        *piVar8 = *piVar8 + -1;
        if (pFVar4->Prev == (FNode *)0x0) {
          (pFVar3->ShortLivingAllocs).OldestAllocNode = pFVar4->Next;
        }
        else {
          pFVar4->Prev->Next = pFVar4->Next;
        }
        if (pFVar4->Next == (FNode *)0x0) {
          (pFVar3->ShortLivingAllocs).LastAddedAllocNode = pFVar4->Prev;
        }
        else {
          pFVar4->Next->Prev = pFVar4->Prev;
        }
        pFVar4->Next = (pFVar3->ShortLivingAllocs).FirstUnusedNode;
        (pFVar3->ShortLivingAllocs).FirstUnusedNode = pFVar4;
        pFVar13 = pFVar4->Alloc;
        if (pFVar13 != (FAllocationItem *)0x0) {
          pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1;
          goto LAB_14d3dfb34;
        }
        break;
      }
    }
    bVar10 = TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
             ::RemoveAndCopyValue
                       (&(pFVar3->LongLivingAllocs).AllocsMap,uVar9,(FAllocationItem **)&param_4);
    if (((!bVar10) || (param_4 == 0)) ||
       (pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1, pFVar13 = (FAllocationItem *)param_4,
       param_4 == 0)) {
      pFVar12 = TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                ::Find((TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
                        *)&pFVar2->LiveAllocs->HeapAllocs,uVar9);
      pFVar15 = (FAllocationItem *)0x0;
      if (pFVar12 != (FList *)0x0) {
        for (pFVar5 = pFVar12->Last; pFVar5 != (FNode *)0x0; pFVar5 = pFVar5->Prev) {
          pFVar13 = pFVar5->Alloc;
          if (uVar9 == pFVar13->Address) {
            if (pFVar13 != (FAllocationItem *)0x0) {
              EditUnmarkAllocationAsHeap(this,param_1,param_2,param_3,uVar9,(uint)pFVar13->RootHeap)
              ;
              FSbTree::SetTimeForEvent(pFVar2->SbTree,pFVar2->EventIndex,param_2);
              pFVar3 = pFVar2->LiveAllocs;
              pFVar13 = pFVar3->LastAlloc;
              if ((pFVar13 == (FAllocationItem *)0x0) || (pFVar13->Address != uVar9)) {
                pFVar4 = (pFVar3->ShortLivingAllocs).LastAddedAllocNode;
                goto joined_r0x00014d3df9ae;
              }
              pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1;
              pFVar3->LastAlloc = (FAllocationItem *)0x0;
              goto LAB_14d3dfa3b;
            }
            break;
          }
        }
      }
      goto LAB_14d3dfa44;
    }
  }
  else {
    pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1;
    pFVar3->LastAlloc = (FAllocationItem *)0x0;
  }
  goto LAB_14d3dfb34;
joined_r0x00014d3df9ae:
  if (pFVar4 == (FNode *)0x0) goto LAB_14d3df9c1;
  if (pFVar4->Alloc->Address == uVar9) {
    piVar8 = &(pFVar3->ShortLivingAllocs).AllocCount;
    *piVar8 = *piVar8 + -1;
    if (pFVar4->Prev == (FNode *)0x0) {
      (pFVar3->ShortLivingAllocs).OldestAllocNode = pFVar4->Next;
    }
    else {
      pFVar4->Prev->Next = pFVar4->Next;
    }
    if (pFVar4->Next == (FNode *)0x0) {
      (pFVar3->ShortLivingAllocs).LastAddedAllocNode = pFVar4->Prev;
    }
    else {
      pFVar4->Next->Prev = pFVar4->Prev;
    }
    pFVar4->Next = (pFVar3->ShortLivingAllocs).FirstUnusedNode;
    (pFVar3->ShortLivingAllocs).FirstUnusedNode = pFVar4;
    pFVar13 = pFVar4->Alloc;
    if (pFVar13 != (FAllocationItem *)0x0) {
      pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1;
      goto LAB_14d3dfa3b;
    }
    goto LAB_14d3df9c1;
  }
  pFVar4 = pFVar4->Prev;
  goto joined_r0x00014d3df9ae;
LAB_14d3df9c1:
  bVar10 = TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
           ::RemoveAndCopyValue(&(pFVar3->LongLivingAllocs).AllocsMap,uVar9,&local_48);
  pFVar13 = pFVar15;
  if ((bVar10) && (local_48 != (FAllocationItem *)0x0)) {
    pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1;
    pFVar13 = local_48;
  }
LAB_14d3dfa3b:
  if (pFVar13 == (FAllocationItem *)0x0) {
LAB_14d3dfa44:
    this->FreeErrors = this->FreeErrors + 1;
    if ((this->FreeErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    AllocInternal(this,param_1,param_2,param_3,uVar9,0,0,uVar11);
    FSbTree::SetTimeForEvent(pFVar2->SbTree,pFVar2->EventIndex,param_2);
    pFVar3 = pFVar2->LiveAllocs;
    pFVar13 = pFVar3->LastAlloc;
    if ((pFVar13 == (FAllocationItem *)0x0) || (pFVar13->Address != uVar9)) {
      for (pFVar4 = (pFVar3->ShortLivingAllocs).LastAddedAllocNode; pFVar4 != (FNode *)0x0;
          pFVar4 = pFVar4->Prev) {
        if (pFVar4->Alloc->Address == uVar9) {
          piVar8 = &(pFVar3->ShortLivingAllocs).AllocCount;
          *piVar8 = *piVar8 + -1;
          if (pFVar4->Prev == (FNode *)0x0) {
            (pFVar3->ShortLivingAllocs).OldestAllocNode = pFVar4->Next;
          }
          else {
            pFVar4->Prev->Next = pFVar4->Next;
          }
          if (pFVar4->Next == (FNode *)0x0) {
            (pFVar3->ShortLivingAllocs).LastAddedAllocNode = pFVar4->Prev;
          }
          else {
            pFVar4->Next->Prev = pFVar4->Prev;
          }
          pFVar4->Next = (pFVar3->ShortLivingAllocs).FirstUnusedNode;
          (pFVar3->ShortLivingAllocs).FirstUnusedNode = pFVar4;
          pFVar13 = pFVar4->Alloc;
          if (pFVar13 != (FAllocationItem *)0x0) {
            pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1;
            goto LAB_14d3dfb34;
          }
          break;
        }
      }
      bVar10 = TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
               ::RemoveAndCopyValue(&(pFVar3->LongLivingAllocs).AllocsMap,uVar9,local_40);
      if (((!bVar10) || (local_40[0] == (FAllocationItem *)0x0)) ||
         (pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1, pFVar15 = local_40[0],
         pFVar13 = local_40[0], local_40[0] == (FAllocationItem *)0x0)) {
        this->FreeErrors = this->FreeErrors + 1;
        if ((this->FreeErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        goto LAB_14d3dfcd0;
      }
    }
    else {
      pFVar3->TotalAllocCount = pFVar3->TotalAllocCount - 1;
      pFVar3->LastAlloc = (FAllocationItem *)0x0;
    }
  }
LAB_14d3dfb34:
  pFVar15 = pFVar13;
  if ((pFVar2->EventIndex <= pFVar15->StartEventIndex) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RootHeap.EventIndex > AllocationPtr->StartEventIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                          ,0x6b9,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FAllocationItem *)(*pcVar7)();
    return pFVar13;
  }
  pFVar15->EndEventIndex = pFVar2->EventIndex;
  pFVar15->EndTime = param_2;
  pFVar15->FreeThreadId = (ushort)param_1;
  if (((param_1 & 0xffff) != param_1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("uint32(AllocationPtr->FreeThreadId) == ThreadId",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                          ,0x6be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FAllocationItem *)(*pcVar7)();
    return pFVar13;
  }
  uVar14 = pFVar15->SizeAndAlignment;
  pFVar15->FreeCallstackId = param_3;
  FSbTree::AddAlloc(pFVar2->SbTree,pFVar15);
  uVar11 = pFVar15->EndEventIndex - pFVar15->StartEventIndex;
  if (pFVar2->MaxEventDistance < uVar11) {
    pFVar2->MaxEventDistance = uVar11;
  }
  uVar1 = (ulonglong)uVar11 * 2 + 1;
  lVar6 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  pFVar2->EventDistanceHistogramPow2[lVar6] = pFVar2->EventDistanceHistogramPow2[lVar6] + 1;
  if ((pFVar15->Flags & Heap) == None) {
    this->TotalAllocatedMemory = this->TotalAllocatedMemory - (uVar14 & 0xffffffffffffff);
    this->TotalLiveAllocations = this->TotalLiveAllocations - 1;
    uVar14 = this->TotalAllocatedMemory;
    if (this->SampleValuesU64[0] < this->TotalAllocatedMemory) {
      uVar14 = this->SampleValuesU64[0];
    }
    this->SampleValuesU64[0] = uVar14;
    uVar11 = this->TotalLiveAllocations;
    if (this->SampleValuesU32[0] < this->TotalLiveAllocations) {
      uVar11 = this->SampleValuesU32[0];
    }
    this->SampleValuesU32[0] = uVar11;
  }
  this->SampleValuesU32[3] = this->SampleValuesU32[3] + 1;
LAB_14d3dfcd0:
  this->FreeCount = this->FreeCount + 1;
  if (pFVar2->EventIndex == 0xffffffff) {
    if (1 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    this->bInitialized = false;
  }
  else {
    pFVar2->EventIndex = pFVar2->EventIndex + 1;
  }
  return pFVar15;
}

// GetHeapSpecUnchecked @ 14d3e0af0

FHeapSpec * __thiscall
TraceServices::FAllocationsProvider::GetHeapSpecUnchecked(FAllocationsProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FHeapSpec *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->HeapSpecs).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHeapSpec *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FHeapSpec **)((this->HeapSpecs).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// GetNumLiveAllocs @ 14d3e0e80

uint __thiscall TraceServices::FAllocationsProvider::GetNumLiveAllocs(FAllocationsProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return this->TotalLiveAllocations;
}

// GetOrCreateHeapSpec @ 14d3e14e0

FHeapSpec * __thiscall
TraceServices::FAllocationsProvider::GetOrCreateHeapSpec(FAllocationsProvider *this,uint param_1)

{
  TArray<TraceServices::IAllocationsProvider::FHeapSpec_*,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  FHeapSpec *pFVar6;
  FHeapSpec *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(int)param_1;
  this_00 = &this->HeapSpecs;
  uVar1 = (this->HeapSpecs).ArrayNum;
  pFVar6 = (FHeapSpec *)0x0;
  uVar9 = 0;
  if (param_1 < uVar1) {
    uVar8 = ~param_1 >> 0x1f;
    uVar5 = uVar9;
    if ((int)param_1 < (int)uVar1) {
      uVar5 = uVar8;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FHeapSpec *)(*pcVar2)();
      return pFVar6;
    }
    if (*(longlong *)((this_00->AllocatorInstance).Data + lVar10 * 8) != 0) {
      if ((int)param_1 < (this->HeapSpecs).ArrayNum) {
        uVar9 = uVar8;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FHeapSpec *)(*pcVar2)();
        return pFVar6;
      }
      return *(FHeapSpec **)((this_00->AllocatorInstance).Data + lVar10 * 8);
    }
  }
  else {
    TArray<TraceServices::IAllocationsProvider::FHeapSpec_*,TSizedDefaultAllocator<32>_>::
    AddDefaulted(this_00,(param_1 - uVar1) + 1);
  }
  pFVar7 = ::operator_new(0x30);
  if (pFVar7 != (FHeapSpec *)0x0) {
    *(undefined4 *)&pFVar7->field_0x4 = 0;
    *(undefined4 *)&pFVar7->field_0x2a = 0;
    *(undefined2 *)&pFVar7->field_0x2e = 0;
    (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Children).ArrayNum = 0;
    (pFVar7->Children).ArrayMax = 0;
    pFVar6 = pFVar7;
  }
  pwVar3 = GDefaultHeapName;
  pFVar6->Parent = (FHeapSpec *)0x0;
  pFVar6->Flags = None;
  pFVar6->Name = pwVar3;
  pFVar6->Id = param_1;
  if ((int)param_1 < (this->HeapSpecs).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FHeapSpec *)(*pcVar2)();
    return pFVar6;
  }
  *(FHeapSpec **)((this_00->AllocatorInstance).Data + lVar10 * 8) = pFVar6;
  return pFVar6;
}

// GetPlatformPageSize @ 14d3e24f0

ulong64 __thiscall
TraceServices::FAllocationsProvider::GetPlatformPageSize(FAllocationsProvider *this)

{
  if (this->bInitialized != false) {
    return this->PlatformPageSize;
  }
  return 0x1000;
}

// GetTagFullPath @ 14d3e2c60

wchar_t * __thiscall
TraceServices::FAllocationsProvider::GetTagFullPath(FAllocationsProvider *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (*(int *)&(this->TagTracker).TagMap.field_0x8 != *(int *)&(this->TagTracker).TagMap.field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->TagTracker).TagMap.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TagTracker).TagMap.field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TagTracker).TagMap.field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)&(this->TagTracker).TagMap;
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x28;
        if (*(uint *)(lVar3 + (longlong)iVar2 * 0x28) == param_1) {
          lVar3 = lVar1 + 8;
          if (lVar1 == 0) {
            lVar3 = 0;
          }
          if (lVar3 == 0) {
            return L"Unknown";
          }
          return *(wchar_t **)(lVar3 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return L"Unknown";
}

// GetTagName @ 14d3e2d90

wchar_t * __thiscall
TraceServices::FAllocationsProvider::GetTagName(FAllocationsProvider *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (*(int *)&(this->TagTracker).TagMap.field_0x8 != *(int *)&(this->TagTracker).TagMap.field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->TagTracker).TagMap.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->TagTracker).TagMap.field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->TagTracker).TagMap.field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->TagTracker).TagMap;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x28) == param_1) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 == (undefined8 *)0x0) {
            return L"Unknown";
          }
          return (wchar_t *)*puVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return L"Unknown";
}

// GetTimelineIndexRange @ 14d3e3460

void __thiscall
TraceServices::FAllocationsProvider::GetTimelineIndexRange
          (FAllocationsProvider *this,double param_1,double param_2,int *param_3,int *param_4)

{
  int iVar1;
  TPagedArrayPage<double> *pTVar2;
  double *pdVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  pTVar2 = (this->Timeline).FirstPage;
  if (pTVar2 == (TPagedArrayPage<double> *)0x0) {
    *param_3 = -1;
    *param_4 = -1;
  }
  else {
    uVar9 = (this->Timeline).PagesArray.ArrayNum;
    iVar11 = 0;
    iVar13 = 0;
    iVar1 = (int)(this->Timeline).TotalItemCount;
    if (((int)uVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar14 = 0;
    uVar12 = uVar9;
    if (0 < (int)uVar9) {
      do {
        iVar10 = (uVar12 >> 1) + iVar14;
        iVar6 = iVar10 + (uVar12 & 1);
        if (param_1 < *pTVar2[iVar10].Items) {
          iVar6 = iVar14;
        }
        iVar14 = iVar6;
        uVar5 = uVar12 >> 1;
        uVar12 = uVar12 >> 1;
      } while (uVar5 != 0);
    }
    if (iVar14 + -1 < 0) {
      *param_3 = -1;
    }
    else {
      pdVar3 = pTVar2[(longlong)iVar14 + -1].Items;
      uVar12 = (uint)pTVar2[(longlong)iVar14 + -1].Count;
      if (((int)uVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = 0;
      if (0 < (int)uVar12) {
        do {
          iVar6 = (uVar12 >> 1) + iVar10;
          iVar7 = iVar6 + (uVar12 & 1);
          if (param_1 < pdVar3[iVar6]) {
            iVar7 = iVar10;
          }
          iVar10 = iVar7;
          uVar5 = uVar12 >> 1;
          uVar12 = uVar12 >> 1;
        } while (uVar5 != 0);
      }
      iVar10 = iVar10 + -1;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                             ,0xad0,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *param_3 = (iVar14 + -1) * (int)(this->Timeline).PageSize + iVar10;
      if ((iVar1 <= iVar10) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumPoints",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                             ,0xad2,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (0 < (int)uVar9) {
      do {
        iVar14 = (uVar9 >> 1) + iVar13;
        iVar10 = iVar14 + (uVar9 & 1);
        if (param_2 < *pTVar2[iVar14].Items) {
          iVar10 = iVar13;
        }
        iVar13 = iVar10;
        uVar12 = uVar9 >> 1;
        uVar9 = uVar9 >> 1;
      } while (uVar12 != 0);
    }
    if (iVar13 + -1 < 0) {
      *param_4 = -1;
    }
    else {
      uVar9 = (uint)pTVar2[(longlong)iVar13 + -1].Count;
      pdVar3 = pTVar2[(longlong)iVar13 + -1].Items;
      if (((int)uVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (0 < (int)uVar9) {
        do {
          iVar14 = (uVar9 >> 1) + iVar11;
          iVar10 = iVar14 + (uVar9 & 1);
          if (param_2 < pdVar3[iVar14]) {
            iVar10 = iVar11;
          }
          iVar11 = iVar10;
          uVar12 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar12 != 0);
      }
      iVar11 = iVar11 + -1;
      if ((iVar11 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                             ,0xadf,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *param_4 = (iVar13 + -1) * (int)(this->Timeline).PageSize + iVar11;
      if ((iVar1 <= iVar11) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumPoints",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\AllocationsProvider.cpp"
                             ,0xae1,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// GetTimelineNumPoints @ 14d3e37d0

int __thiscall TraceServices::FAllocationsProvider::GetTimelineNumPoints(FAllocationsProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (int)(this->Timeline).TotalItemCount;
}

// HasAllocationEvents @ 14d3e6760

bool __thiscall TraceServices::FAllocationsProvider::HasAllocationEvents(FAllocationsProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  if (((this->AllocEvents == 0) && (this->FreeEvents == 0)) && (this->HeapEvents == 0)) {
    return false;
  }
  return true;
}

// HasSwapOpEvents @ 14d3e67c0

bool __thiscall TraceServices::FAllocationsProvider::HasSwapOpEvents(FAllocationsProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return this->SwapOpEvents != 0;
}

// IsInitialized @ 14d3e6b30

bool __thiscall TraceServices::FAllocationsProvider::IsInitialized(FAllocationsProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return this->bInitialized;
}

// IsValidHeap @ 14d3e6b70

bool __thiscall
TraceServices::FAllocationsProvider::IsValidHeap(FAllocationsProvider *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = (this->HeapSpecs).ArrayNum;
  if (param_1 < uVar1) {
    uVar5 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(longlong *)((this->HeapSpecs).AllocatorInstance.Data + (longlong)(int)param_1 * 8) != 0) {
      return true;
    }
  }
  return false;
}

// PollQuery @ 14d3fb550

FQueryStatus * __thiscall
TraceServices::FAllocationsProvider::PollQuery
          (FAllocationsProvider *this,FQueryStatus *__return_storage_ptr__,ulong64 param_1)

{
  FAllocationsQuery::Poll((FAllocationsQuery *)param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ReadAccessCheck @ 14d3fce70

void __thiscall TraceServices::FAllocationsProvider::ReadAccessCheck(FAllocationsProvider *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((FProviderLock *)*(undefined1 **)(lVar1 + 0x9b70) != &this->Lock) ||
     ((*(int *)(lVar1 + 0x9b78) < 1 && (*(int *)(lVar1 + 0x9b7c) < 1)))) {
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

// StartQuery @ 14d403690

ulong64 __thiscall
TraceServices::FAllocationsProvider::StartQuery(FAllocationsProvider *this,FQueryParams *param_1)

{
  FAllocationsQuery *pFVar1;
  
  pFVar1 = ::operator_new(0x50);
  if (pFVar1 != (FAllocationsQuery *)0x0) {
    pFVar1 = FAllocationsQuery::FAllocationsQuery(pFVar1,this,param_1);
    return (ulong64)pFVar1;
  }
  return 0;
}

