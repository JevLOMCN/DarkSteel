// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 56

// EmplaceBack<double_&> @ 14d3c7790

double * __thiscall
TraceServices::TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::EmplaceBack<double_&>
          (TPagedArray<double,TraceServices::TPagedArrayPage<double>_> *this,double *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<double> *pTVar3;
  int iVar4;
  double *pdVar5;
  TPagedArrayPage<double> *pTVar6;
  
  if ((this->LastPage == (TPagedArrayPage<double> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar4 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar4 + 1;
    pTVar6 = (TPagedArrayPage<double> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar4 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<double>,int>(pTVar6,1);
    pTVar3 = (TPagedArrayPage<double> *)(this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar6;
    this->FirstPage = pTVar3;
    pdVar5 = (double *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    this->LastPage->Items = pdVar5;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pdVar5 = this->LastPage->Items + this->LastPage->Count;
  *pdVar5 = *param_1;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pdVar5;
}

// ~TPagedArray<double,TraceServices::TPagedArrayPage<double>_> @ 14d3cd730

void __thiscall
TraceServices::TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::
~TPagedArray<double,TraceServices::TPagedArrayPage<double>_>
          (TPagedArray<double,TraceServices::TPagedArrayPage<double>_> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<double>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetIteratorFromItem @ 14d3e0c60

TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> * __thiscall
TraceServices::TPagedArray<double,TraceServices::TPagedArrayPage<double>_>::GetIteratorFromItem
          (TPagedArray<double,TraceServices::TPagedArrayPage<double>_> *this,
          TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_>
          *__return_storage_ptr__,ulong64 param_1)

{
  TPagedArray<double,TraceServices::TPagedArrayPage<double>_> *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<double> *pTVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> *pTVar7;
  ulonglong uVar8;
  double *pdVar9;
  
  pdVar9 = (double *)0x0;
  __return_storage_ptr__->Outer = this;
  __return_storage_ptr__->CurrentPageFirstItem = (double *)0x0;
  __return_storage_ptr__->CurrentPageLastItem = (double *)0x0;
  __return_storage_ptr__->CurrentItem = (double *)0x0;
  uVar8 = this->PageSize;
  __return_storage_ptr__->CurrentItemIndex = param_1;
  __return_storage_ptr__->CurrentPageIndex = param_1 / uVar8;
  if (param_1 == this->TotalItemCount) {
    __return_storage_ptr__->CurrentItem = (double *)0x0;
    return __return_storage_ptr__;
  }
  if (this->TotalItemCount <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((ulonglong)(longlong)(__return_storage_ptr__->Outer->PagesArray).ArrayNum <=
      __return_storage_ptr__->CurrentPageIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar1 = __return_storage_ptr__->Outer;
  uVar2 = __return_storage_ptr__->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  pdVar4 = pTVar3[uVar2].Items;
  __return_storage_ptr__->CurrentPageFirstItem = pdVar4;
  if (pdVar4 != (double *)0x0) {
    pdVar9 = pdVar4 + (pTVar3[uVar2].Count - 1);
  }
  __return_storage_ptr__->CurrentPageLastItem = pdVar9;
  pTVar3 = pTVar1->FirstPage;
  uVar8 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<double,TraceServices::TPagedArrayPage<double>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->CurrentItem = pTVar3[uVar2].Items + uVar8;
  return __return_storage_ptr__;
}

// PushBack @ 14d3fc950

FNetProfilerContentEvent * __thiscall
TraceServices::
TPagedArray<TraceServices::FNetProfilerContentEvent,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>_>
::PushBack(TPagedArray<TraceServices::FNetProfilerContentEvent,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>_>
           *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *pTVar3;
  int iVar4;
  FNetProfilerContentEvent *pFVar5;
  TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *pTVar6;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar4 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar4 + 1;
    pTVar6 = (TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar4 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>,int>
              (pTVar6,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FNetProfilerContentEvent> *)
             (this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar6;
    this->FirstPage = pTVar3;
    pFVar5 = (FNetProfilerContentEvent *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 5);
    this->LastPage->Items = pFVar5;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar5 = this->LastPage->Items + this->LastPage->Count;
  pFVar5->StartPos = 0;
  pFVar5->EndPos = 0;
  pFVar5->Level = 0;
  pFVar5->Padding = 0;
  (pFVar5->BunchInfo).Value = 0;
  pFVar5->EventTypeIndex = 0;
  pFVar5->NameIndex = 0;
  *(undefined8 *)&pFVar5->ObjectInstanceIndex = 0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar5;
}

// PushBack @ 14d3fca20

FNetProfilerPacket * __thiscall
TraceServices::
TPagedArray<TraceServices::FNetProfilerPacket,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerPacket>_>
::PushBack(TPagedArray<TraceServices::FNetProfilerPacket,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerPacket>_>
           *this)

{
  int *piVar1;
  ulong64 *puVar2;
  int iVar3;
  FNetProfilerPacket *pFVar4;
  TPagedArrayPage<TraceServices::FNetProfilerPacket> *pTVar5;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar3 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar3 + 1;
    pTVar5 = (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar3 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerPacket>,int>
              (pTVar5,1);
    this->FirstPage =
         (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)
         (this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar5;
    pFVar4 = (FNetProfilerPacket *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize * 0x30);
    this->LastPage->Items = pFVar4;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar4 = this->LastPage->Items + this->LastPage->Count;
  pFVar4->TimeStamp = 0.0;
  pFVar4->SequenceNumber = 0;
  pFVar4->ContentSizeInBits = 0;
  pFVar4->TotalPacketSizeInBytes = 0;
  pFVar4->StartEventIndex = 0;
  pFVar4->EventCount = 0;
  pFVar4->StartStatsIndex = 0;
  pFVar4->StatsCount = 0;
  pFVar4->NetProfilerFrameIndex = 0;
  pFVar4->DeliveryStatus = Unknown;
  pFVar4->ConnectionState = USOCK_Invalid;
  *(undefined6 *)&pFVar4->field_0x2a = 0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar4;
}

// EmplaceBack<TraceServices::FMetadataSchema_const_&> @ 14d413fb0

FMetadataSchema * __thiscall
TraceServices::
TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
::EmplaceBack<TraceServices::FMetadataSchema_const_&>
          (TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
           *this,FMetadataSchema *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FMetadataSchema> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMetadataSchema *pFVar7;
  TPagedArrayPage<TraceServices::FMetadataSchema> *pTVar8;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FMetadataSchema> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar6 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar6 + 1;
    pTVar8 = (TPagedArrayPage<TraceServices::FMetadataSchema> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar6 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>,int>
              (pTVar8,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FMetadataSchema> *)
             (this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar8;
    this->FirstPage = pTVar3;
    pFVar7 = (FMetadataSchema *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 4);
    this->LastPage->Items = pFVar7;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar7 = this->LastPage->Items + this->LastPage->Count;
  (pFVar7->Fields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(pFVar7->Fields).ArrayMax;
  iVar6 = (param_1->Fields).ArrayNum;
  _Src = (param_1->Fields).AllocatorInstance.Data;
  (pFVar7->Fields).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar6,0,(ForAnyElementType *)pFVar7,iVar6,piVar1);
    memcpy((pFVar7->Fields).AllocatorInstance.Data,_Src,(longlong)iVar6 * 0xc);
  }
  if (0xff < (pFVar7->Fields).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Fields.Num() < 256",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\MetadataProvider.h"
                       ,0xf5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FMetadataSchema *)(*pcVar4)();
      return pFVar7;
    }
  }
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar7;
}

// EmplaceBack<TraceServices::FStackSamplesProviderThread> @ 14d414120

FStackSamplesProviderThread * __thiscall
TraceServices::
TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
::EmplaceBack<TraceServices::FStackSamplesProviderThread>
          (TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
           *this,FStackSamplesProviderThread *param_1)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  ulong64 *puVar3;
  TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *_Src;
  int iVar6;
  FStackSamplesProviderThread *pFVar7;
  TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *pTVar8;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar6 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar6 + 1;
    pTVar8 = (TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar6 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>,int>
              (pTVar8,1);
    pTVar4 = (TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *)
             (this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar8;
    this->FirstPage = pTVar4;
    pFVar7 = (FStackSamplesProviderThread *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize * 0x38);
    this->LastPage->Items = pFVar7;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar7 = this->LastPage->Items + this->LastPage->Count;
  pFVar7->SystemThreadId = param_1->SystemThreadId;
  pFVar7->Name = param_1->Name;
  (pFVar7->Timeline).Object = (param_1->Timeline).Object;
  pTVar5 = (param_1->Timeline).SharedReferenceCount.ReferenceController;
  (pFVar7->Timeline).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &pFVar7->LastSampleStack;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(pFVar7->LastSampleStack).ArrayMax;
  iVar6 = (param_1->LastSampleStack).ArrayNum;
  _Src = (param_1->LastSampleStack).AllocatorInstance.Data;
  (pFVar7->LastSampleStack).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar6 << 3);
  }
  pFVar7->LastSampleTime = param_1->LastSampleTime;
  puVar3 = &this->LastPage->Count;
  *puVar3 = *puVar3 + 1;
  return pFVar7;
}

// ~TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_> @ 14d4280c0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>::
~TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
          (TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FCallstack>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FClassInfo,TraceServices::TPagedArrayPage<TraceServices::FClassInfo>_> @ 14d428140

void __thiscall
TraceServices::
TPagedArray<TraceServices::FClassInfo,TraceServices::TPagedArrayPage<TraceServices::FClassInfo>_>::
~TPagedArray<TraceServices::FClassInfo,TraceServices::TPagedArrayPage<TraceServices::FClassInfo>_>
          (TPagedArray<TraceServices::FClassInfo,TraceServices::TPagedArrayPage<TraceServices::FClassInfo>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FClassInfo>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage> @ 14d4281c0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
::
~TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
          (TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x38;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> @ 14d428230

void __thiscall
TraceServices::TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
~TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
          (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FEventScopeEntryPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x40;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_> @ 14d4282b0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
::
~TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
          (TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_> @ 14d428330

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
::
~TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
          (TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FFileActivity>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FFileActivityProvider::FFileInfoInternal,TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>_> @ 14d4283b0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::FFileActivityProvider::FFileInfoInternal,TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>_>
::
~TPagedArray<TraceServices::FFileActivityProvider::FFileInfoInternal,TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>_>
          (TPagedArray<TraceServices::FFileActivityProvider::FFileInfoInternal,TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x20 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x20) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar2 + 0x18));
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>_> @ 14d428460

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>_>
::
~TPagedArray<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>_>
          (TPagedArray<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_> @ 14d4284e0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
::
~TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
          (TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x38 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x38) {
      if (*(void **)(lVar2 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x28));
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_> @ 14d428580

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
::
~TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
          (TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_> @ 14d428600

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
::
~TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
          (TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>_> @ 14d428680

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>_>
::
~TPagedArray<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>_>
          (TPagedArray<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FLogCategoryInfo,TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>_> @ 14d428700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLogCategoryInfo,TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>_>
::
~TPagedArray<TraceServices::FLogCategoryInfo,TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>_>
          (TPagedArray<TraceServices::FLogCategoryInfo,TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_> @ 14d428780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
::
~TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
          (TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FLogMessageSpec,TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>_> @ 14d428800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::FLogMessageSpec,TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>_>
::
~TPagedArray<TraceServices::FLogMessageSpec,TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>_>
          (TPagedArray<TraceServices::FLogMessageSpec,TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_> @ 14d428880

void __thiscall
TraceServices::
TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
::
~TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
          (TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_> @ 14d428900

void __thiscall
TraceServices::
TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
::
~TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
          (TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_> @ 14d428980

void __thiscall
TraceServices::
TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>::
~TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>
          (TPagedArray<TraceServices::FModule,TraceServices::TPagedArrayPage<TraceServices::FModule>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FModule>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FDbgHelpResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>_> @ 14d428a00

void __thiscall
TraceServices::
TPagedArray<TraceServices::FDbgHelpResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>_>
::
~TPagedArray<TraceServices::FDbgHelpResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>_>
          (TPagedArray<TraceServices::FDbgHelpResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>_>
           *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->PagesArray).ArrayNum;
  pFVar4 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    lVar3 = *(longlong *)pFVar4;
    lVar1 = lVar3 + *(longlong *)(pFVar4 + 8) * 0x18;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
      if (*(void **)(lVar3 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar3 + 8));
      }
    }
    pFVar4 = pFVar4 + 0x10;
  }
  pFVar4 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ~TPagedArray<TraceServices::FSymslibResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>_> @ 14d428ab0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FSymslibResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>_>
::
~TPagedArray<TraceServices::FSymslibResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>_>
          (TPagedArray<TraceServices::FSymslibResolver::FModuleEntry,TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x68 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x68) {
      if (*(void **)(lVar2 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x28));
      }
      if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x18));
      }
      if (*(void **)(lVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 8));
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_> @ 14d428b70

void __thiscall
TraceServices::
TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
::
~TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
          (TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_> @ 14d428bf0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
::
~TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
          (TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_> @ 14d428c70

void __thiscall
TraceServices::
TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_>
::
~TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_>
          (TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FPackageExportInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>_> @ 14d428cf0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FPackageExportInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>_>
::
~TPagedArray<TraceServices::FPackageExportInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>_>
          (TPagedArray<TraceServices::FPackageExportInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FPackageInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>_> @ 14d428d70

void __thiscall
TraceServices::
TPagedArray<TraceServices::FPackageInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>_>
::
~TPagedArray<TraceServices::FPackageInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>_>
          (TPagedArray<TraceServices::FPackageInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x50 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x50) {
      if (*(void **)(lVar2 + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x30));
      }
      if (*(void **)(lVar2 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x20));
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_> @ 14d428e30

void __thiscall
TraceServices::
TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
::
~TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
          (TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_> @ 14d428eb0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
::
~TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
          (TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x38 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x38) {
      DestructItems<TraceServices::FRegionLane,int>
                (*(FRegionLane **)(lVar2 + 0x28),*(int *)(lVar2 + 0x30));
      if (*(void **)(lVar2 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x28));
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FRegionTimerImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>_> @ 14d428f70

void __thiscall
TraceServices::
TPagedArray<TraceServices::FRegionTimerImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>_>
::
~TPagedArray<TraceServices::FRegionTimerImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>_>
          (TPagedArray<TraceServices::FRegionTimerImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_> @ 14d428ff0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
::
~TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
          (TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x30 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x30) {
      if (*(void **)(lVar2 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x20));
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_> @ 14d4290a0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
::
~TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
          (TPagedArray<TraceServices::FResolvedSymbol,TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_> @ 14d429120

void __thiscall
TraceServices::
TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_>
::
~TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_>
          (TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FStackFrame>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_> @ 14d4291a0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_>
::
~TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_>
          (TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_> @ 14d429220

void __thiscall
TraceServices::
TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
::
~TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
          (TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_> @ 14d4292a0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
::
~TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
          (TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_> @ 14d429320

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
::
~TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
          (TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x38 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x38) {
      if (*(void **)(lVar2 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x28));
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_> @ 14d4293c0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
::
~TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
          (TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
           *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_> @ 14d429440

void __thiscall
TraceServices::
TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
::
~TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
          (TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
           *this)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    puVar2 = *(undefined8 **)pFVar3;
    puVar4 = puVar2 + *(longlong *)(pFVar3 + 8) * 2;
    for (; puVar2 != puVar4; puVar2 = puVar2 + 2) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_> @ 14d4294f0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
::
~TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
          (TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
           *this)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    puVar2 = *(undefined8 **)pFVar3;
    puVar4 = puVar2 + *(longlong *)(pFVar3 + 8) * 2;
    for (; puVar2 != puVar4; puVar2 = puVar2 + 2) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_> @ 14d4295a0

void __thiscall
TraceServices::
TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
::
~TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
          (TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
           *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagesArray).ArrayNum;
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PagesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    lVar2 = *(longlong *)pFVar3;
    lVar4 = *(longlong *)(pFVar3 + 8) * 0x38 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x38) {
      if (*(void **)(lVar2 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar2 + 0x20));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar2 + 0x18));
    }
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PagesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetIterator @ 14d468690

TPagedArrayIterator<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
* __thiscall
TraceServices::
TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
::GetIterator(TPagedArray<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
              *this,TPagedArrayIterator<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
                    *__return_storage_ptr__)

{
  ulong64 uVar1;
  FRegionCategoryImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPagedArrayIterator<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
  *pTVar5;
  FRegionCategoryImpl *pFVar6;
  TPagedArrayPage<TraceServices::FRegionCategoryImpl> *pTVar7;
  
  uVar1 = this->TotalItemCount;
  pFVar6 = (FRegionCategoryImpl *)0x0;
  __return_storage_ptr__->Outer = this;
  __return_storage_ptr__->CurrentPageFirstItem = (FRegionCategoryImpl *)0x0;
  __return_storage_ptr__->CurrentPageLastItem = (FRegionCategoryImpl *)0x0;
  __return_storage_ptr__->CurrentItem = (FRegionCategoryImpl *)0x0;
  __return_storage_ptr__->CurrentPageIndex = 0;
  __return_storage_ptr__->CurrentItemIndex = 0;
  if (uVar1 == 0) {
    __return_storage_ptr__->CurrentItem = (FRegionCategoryImpl *)0x0;
    return __return_storage_ptr__;
  }
  if ((ulonglong)(longlong)(__return_storage_ptr__->Outer->PagesArray).ArrayNum <=
      __return_storage_ptr__->CurrentPageIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPagedArrayIterator<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  uVar1 = __return_storage_ptr__->CurrentPageIndex;
  pTVar7 = __return_storage_ptr__->Outer->FirstPage;
  pFVar2 = pTVar7[uVar1].Items;
  __return_storage_ptr__->CurrentPageFirstItem = pFVar2;
  if (pFVar2 != (FRegionCategoryImpl *)0x0) {
    pFVar6 = pFVar2 + (pTVar7[uVar1].Count - 1);
  }
  __return_storage_ptr__->CurrentPageLastItem = pFVar6;
  pTVar7 = __return_storage_ptr__->Outer->FirstPage + uVar1;
  if (pTVar7->Count == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPagedArrayIterator<TraceServices::FRegionCategoryImpl,TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->CurrentItem = pTVar7->Items;
  return __return_storage_ptr__;
}

// GetIteratorFromItem @ 14d4688b0

TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
* __thiscall
TraceServices::
TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
::GetIteratorFromItem
          (TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
           *this,TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                 *__return_storage_ptr__,ulong64 param_1)

{
  TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar3;
  FLoadTimeProfilerCpuEvent *pFVar4;
  code *pcVar5;
  bool bVar6;
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  *pTVar7;
  ulonglong uVar8;
  FLoadTimeProfilerCpuEvent *pFVar9;
  
  pFVar9 = (FLoadTimeProfilerCpuEvent *)0x0;
  __return_storage_ptr__->Outer = this;
  __return_storage_ptr__->CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
  __return_storage_ptr__->CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
  __return_storage_ptr__->CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
  uVar8 = this->PageSize;
  __return_storage_ptr__->CurrentItemIndex = param_1;
  __return_storage_ptr__->CurrentPageIndex = param_1 / uVar8;
  if (param_1 == this->TotalItemCount) {
    __return_storage_ptr__->CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
    return __return_storage_ptr__;
  }
  if (this->TotalItemCount <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((ulonglong)(longlong)(__return_storage_ptr__->Outer->PagesArray).ArrayNum <=
      __return_storage_ptr__->CurrentPageIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar1 = __return_storage_ptr__->Outer;
  uVar2 = __return_storage_ptr__->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  pFVar4 = pTVar3[uVar2].Items;
  __return_storage_ptr__->CurrentPageFirstItem = pFVar4;
  if (pFVar4 != (FLoadTimeProfilerCpuEvent *)0x0) {
    pFVar9 = pFVar4 + (pTVar3[uVar2].Count - 1);
  }
  __return_storage_ptr__->CurrentPageLastItem = pFVar9;
  pTVar3 = pTVar1->FirstPage;
  uVar8 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->CurrentItem = pTVar3[uVar2].Items + uVar8;
  return __return_storage_ptr__;
}

// GetIteratorFromItem @ 14d468a00

TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
* __thiscall
TraceServices::
TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
::GetIteratorFromItem
          (TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
           *this,TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
                 *__return_storage_ptr__,ulong64 param_1)

{
  TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *pTVar3;
  FMetadataEntry *pFVar4;
  code *pcVar5;
  bool bVar6;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
  *pTVar7;
  ulonglong uVar8;
  FMetadataEntry *pFVar9;
  
  pFVar9 = (FMetadataEntry *)0x0;
  __return_storage_ptr__->Outer = this;
  __return_storage_ptr__->CurrentPageFirstItem = (FMetadataEntry *)0x0;
  __return_storage_ptr__->CurrentPageLastItem = (FMetadataEntry *)0x0;
  __return_storage_ptr__->CurrentItem = (FMetadataEntry *)0x0;
  uVar8 = this->PageSize;
  __return_storage_ptr__->CurrentItemIndex = param_1;
  __return_storage_ptr__->CurrentPageIndex = param_1 / uVar8;
  if (param_1 == this->TotalItemCount) {
    __return_storage_ptr__->CurrentItem = (FMetadataEntry *)0x0;
    return __return_storage_ptr__;
  }
  if (this->TotalItemCount <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((ulonglong)(longlong)(__return_storage_ptr__->Outer->PagesArray).ArrayNum <=
      __return_storage_ptr__->CurrentPageIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar1 = __return_storage_ptr__->Outer;
  uVar2 = __return_storage_ptr__->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  pFVar4 = pTVar3[uVar2].Items;
  __return_storage_ptr__->CurrentPageFirstItem = pFVar4;
  if (pFVar4 != (FMetadataEntry *)0x0) {
    pFVar9 = pFVar4 + (pTVar3[uVar2].Count - 1);
  }
  __return_storage_ptr__->CurrentPageLastItem = pFVar9;
  pTVar3 = pTVar1->FirstPage;
  uVar8 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->CurrentItem = pTVar3[uVar2].Items + uVar8;
  return __return_storage_ptr__;
}

// GetIteratorFromItem @ 14d468b40

TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
* __thiscall
TraceServices::
TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
::GetIteratorFromItem
          (TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
           *this,TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                 *__return_storage_ptr__,ulong64 param_1)

{
  TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar3;
  FTimingProfilerEvent *pFVar4;
  code *pcVar5;
  bool bVar6;
  TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  *pTVar7;
  ulonglong uVar8;
  FTimingProfilerEvent *pFVar9;
  
  pFVar9 = (FTimingProfilerEvent *)0x0;
  __return_storage_ptr__->Outer = this;
  __return_storage_ptr__->CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
  __return_storage_ptr__->CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
  __return_storage_ptr__->CurrentItem = (FTimingProfilerEvent *)0x0;
  uVar8 = this->PageSize;
  __return_storage_ptr__->CurrentItemIndex = param_1;
  __return_storage_ptr__->CurrentPageIndex = param_1 / uVar8;
  if (param_1 == this->TotalItemCount) {
    __return_storage_ptr__->CurrentItem = (FTimingProfilerEvent *)0x0;
    return __return_storage_ptr__;
  }
  if (this->TotalItemCount <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((ulonglong)(longlong)(__return_storage_ptr__->Outer->PagesArray).ArrayNum <=
      __return_storage_ptr__->CurrentPageIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar1 = __return_storage_ptr__->Outer;
  uVar2 = __return_storage_ptr__->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  pFVar4 = pTVar3[uVar2].Items;
  __return_storage_ptr__->CurrentPageFirstItem = pFVar4;
  if (pFVar4 != (FTimingProfilerEvent *)0x0) {
    pFVar9 = pFVar4 + (pTVar3[uVar2].Count - 1);
  }
  __return_storage_ptr__->CurrentPageLastItem = pFVar9;
  pTVar3 = pTVar1->FirstPage;
  uVar8 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->CurrentItem = pTVar3[uVar2].Items + uVar8;
  return __return_storage_ptr__;
}

// PushBack @ 14d47d150

FCallstack * __thiscall
TraceServices::
TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>::
PushBack(TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
         *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FCallstack> *pTVar3;
  ulong64 uVar4;
  int iVar5;
  FCallstack *pFVar6;
  TPagedArrayPage<TraceServices::FCallstack> *pTVar7;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FCallstack> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar5 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar5 + 1;
    pTVar7 = (TPagedArrayPage<TraceServices::FCallstack> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar5 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FCallstack>,int>(pTVar7,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FCallstack> *)(this->PagesArray).AllocatorInstance.Data
    ;
    this->LastPage = pTVar7;
    this->FirstPage = pTVar3;
    pFVar6 = (FCallstack *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    this->LastPage->Items = pFVar6;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  uVar4 = this->LastPage->Count;
  pFVar6 = this->LastPage->Items;
  pFVar6[uVar4].CallstackLenIndex = 0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar6 + uVar4;
}

// PushBack @ 14d47d220

FContextSwitch * __thiscall
TraceServices::
TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
::PushBack(TPagedArray<TraceServices::FContextSwitch,TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>_>
           *this)

{
  int *piVar1;
  ulong64 *puVar2;
  ulong64 uVar3;
  FContextSwitch *pFVar4;
  int iVar5;
  FContextSwitch *pFVar6;
  TPagedArrayPage<TraceServices::FContextSwitch> *pTVar7;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FContextSwitch> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar5 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar5 + 1;
    pTVar7 = (TPagedArrayPage<TraceServices::FContextSwitch> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar5 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>,int>
              (pTVar7,1);
    this->FirstPage =
         (TPagedArrayPage<TraceServices::FContextSwitch> *)(this->PagesArray).AllocatorInstance.Data
    ;
    this->LastPage = pTVar7;
    pFVar6 = (FContextSwitch *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize * 0x18);
    this->LastPage->Items = pFVar6;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  uVar3 = this->LastPage->Count;
  pFVar4 = this->LastPage->Items;
  pFVar6 = pFVar4 + uVar3;
  pFVar6->Start = 0.0;
  pFVar6->End = 0.0;
  pFVar4 = pFVar4 + uVar3;
  *(undefined8 *)&pFVar4->CoreNumber = 0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar4;
}

// PushBack @ 14d47d300

FCpuCoreEvent * __thiscall
TraceServices::
TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
::PushBack(TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
           *this)

{
  int *piVar1;
  ulong64 *puVar2;
  ulong64 uVar3;
  FCpuCoreEvent *pFVar4;
  int iVar5;
  FCpuCoreEvent *pFVar6;
  TPagedArrayPage<TraceServices::FCpuCoreEvent> *pTVar7;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar5 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar5 + 1;
    pTVar7 = (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar5 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>,int>
              (pTVar7,1);
    this->FirstPage =
         (TPagedArrayPage<TraceServices::FCpuCoreEvent> *)(this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar7;
    pFVar6 = (FCpuCoreEvent *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize * 0x18);
    this->LastPage->Items = pFVar6;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  uVar3 = this->LastPage->Count;
  pFVar4 = this->LastPage->Items;
  pFVar6 = pFVar4 + uVar3;
  pFVar6->Start = 0.0;
  pFVar6->End = 0.0;
  pFVar4 = pFVar4 + uVar3;
  *(undefined8 *)&pFVar4->SystemThreadId = 0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar4;
}

// PushBack @ 14d47d3e0

FEventScopeEntry * __thiscall
TraceServices::TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
PushBack(TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *this)

{
  int *piVar1;
  ulong64 *puVar2;
  FEventScopeEntryPage *pFVar3;
  int iVar4;
  FEventScopeEntry *pFVar5;
  FEventScopeEntryPage *pFVar6;
  
  if ((this->LastPage == (FEventScopeEntryPage *)0x0) || (this->LastPage->Count == this->PageSize))
  {
    iVar4 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar4 + 1;
    pFVar6 = (FEventScopeEntryPage *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar4 * 0x40);
    DefaultConstructItems<TraceServices::FEventScopeEntryPage,int>(pFVar6,1);
    pFVar3 = (FEventScopeEntryPage *)(this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pFVar6;
    this->FirstPage = pFVar3;
    pFVar5 = (FEventScopeEntry *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize << 3);
    this->LastPage->Items = pFVar5;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar5 = this->LastPage->Items + this->LastPage->Count;
  pFVar5->Time = 0.0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar5;
}

// PushBack @ 14d47d4b0

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageInternal * __thiscall
TraceServices::
TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
::PushBack(TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
           *this)

{
  int *piVar1;
  ulong64 *puVar2;
  int iVar3;
  FLogMessageInternal *pFVar4;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar5;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FLogMessageInternal> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar3 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar3 + 1;
    pTVar5 = (TPagedArrayPage<TraceServices::FLogMessageInternal> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar3 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>,int>
              (pTVar5,1);
    this->FirstPage =
         (TPagedArrayPage<TraceServices::FLogMessageInternal> *)
         (this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar5;
    pFVar4 = (FLogMessageInternal *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize * 0x18);
    this->LastPage->Items = pFVar4;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar4 = this->LastPage->Items + this->LastPage->Count;
  pFVar4->Time = 0.0;
  pFVar4->Spec = (FLogMessageSpec *)0x0;
  pFVar4->Message = (wchar_t *)0x0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar4;
}

// PushBack @ 14d47d590

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FTimingProfilerButterflyNode * __thiscall
TraceServices::
TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
::PushBack(TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
           *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *pTVar3;
  int iVar4;
  FTimingProfilerButterflyNode *pFVar5;
  TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *pTVar6;
  
  if ((this->LastPage == (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)0x0) ||
     (this->LastPage->Count == this->PageSize)) {
    iVar4 = (this->PagesArray).ArrayNum;
    piVar1 = &(this->PagesArray).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PagesArray).AllocatorInstance,piVar1);
    }
    (this->PagesArray).ArrayNum = iVar4 + 1;
    pTVar6 = (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)
             ((this->PagesArray).AllocatorInstance.Data + (longlong)iVar4 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>,int>
              (pTVar6,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)
             (this->PagesArray).AllocatorInstance.Data;
    this->LastPage = pTVar6;
    this->FirstPage = pTVar3;
    pFVar5 = (FTimingProfilerButterflyNode *)
             (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,this->PageSize * 0x38);
    this->LastPage->Items = pFVar5;
  }
  this->TotalItemCount = this->TotalItemCount + 1;
  pFVar5 = this->LastPage->Items + this->LastPage->Count;
  pFVar5->Timer = (FTimingProfilerTimer *)0x0;
  pFVar5->Count = 0;
  pFVar5->InclusiveTime = 0.0;
  pFVar5->ExclusiveTime = 0.0;
  pFVar5->Parent = (FTimingProfilerButterflyNode *)0x0;
  (pFVar5->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar5->Children).ArrayNum = 0;
  (pFVar5->Children).ArrayMax = 0;
  puVar2 = &this->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  return pFVar5;
}

