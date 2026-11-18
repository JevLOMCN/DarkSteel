// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 19

// TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> @ 14d3cae50

TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_>::
TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_>
          (TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> @ 14d3cae70

TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_>::
TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_>
          (TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> @ 14d3cae90

TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_>::
TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_>
          (TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> *this
          ,TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_>
           *param_1)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = param_1->ArrayNum;
  this->ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  return this;
}

// TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> @ 14d3caec0

TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_>::
TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_>
          (TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> *this
          )

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<double,TSizedDefaultAllocator<64>_> @ 14d3cd690

void __thiscall
TArray<double,TSizedDefaultAllocator<64>_>::~TArray<double,TSizedDefaultAllocator<64>_>
          (TArray<double,TSizedDefaultAllocator<64>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> @ 14d3cd6b0

void __thiscall
TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_>::
~TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_>
          (TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> @ 14d3cd6d0

void __thiscall
TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_>::
~TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_>
          (TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> @ 14d3cd6f0

void __thiscall
TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_>::
~TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_>
          (TArray<TraceServices::FGpuProfilerAnalyzer::FOpenEvent,TSizedDefaultAllocator<32>_> *this
          )

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddDefaulted @ 14d3d3410

int __thiscall
TArray<TraceServices::IAllocationsProvider::FHeapSpec_*,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<TraceServices::IAllocationsProvider::FHeapSpec_*,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// RemoveAtSwapImpl @ 14d4013c0

void __thiscall
TArray<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,TSizedDefaultAllocator<32>_>
                   *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 8,
            (longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// HeapPopDiscard<TLess<TraceServices::FLaneEnumeration>_> @ 14d418270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TraceServices::FLaneEnumeration,TSizedDefaultAllocator<32>_>::
HeapPopDiscard<TLess<TraceServices::FLaneEnumeration>_>
          (TArray<TraceServices::FLaneEnumeration,TSizedDefaultAllocator<32>_> *this,
          TLess<TraceServices::FLaneEnumeration> *param_1,EAllowShrinking param_2)

{
  double *pdVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar13 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  iVar12 = this->ArrayNum + -1;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar3,pFVar3 + (longlong)(this->ArrayNum - iVar12) * 0x10,(longlong)iVar12 << 4);
  }
  iVar12 = this->ArrayNum + -1;
  this->ArrayNum = iVar12;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar12,&this->ArrayMax);
  }
  iVar12 = this->ArrayNum;
  pFVar3 = (this->AllocatorInstance).Data;
  if (1 < iVar12) {
    do {
      iVar7 = iVar13 * 2;
      iVar14 = iVar7 + 1;
      if (iVar7 + 2 < iVar12) {
        uVar4 = *(ulonglong *)(*(longlong *)(pFVar3 + (longlong)iVar14 * 0x10) + 0x28);
        uVar5 = *(ulonglong *)(*(longlong *)(pFVar3 + ((longlong)iVar7 + 2) * 0x10) + 0x28);
        dVar2 = *(double *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(pFVar3 + ((longlong)iVar7 + 2) * 0x10) + 0x18) +
                   ((ulonglong)(longlong)*(int *)(pFVar3 + ((longlong)iVar7 + 2) * 0x10 + 8) / uVar5
                   ) * 0x10) + 8 +
                 ((ulonglong)(longlong)*(int *)(pFVar3 + ((longlong)iVar7 + 2) * 0x10 + 8) % uVar5)
                 * 0x38);
        pdVar1 = (double *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(pFVar3 + (longlong)iVar14 * 0x10) + 0x18) +
                   ((ulonglong)(longlong)*(int *)(pFVar3 + (longlong)iVar14 * 0x10 + 8) / uVar4) *
                   0x10) + 8 +
                 ((ulonglong)(longlong)*(int *)(pFVar3 + (longlong)iVar14 * 0x10 + 8) % uVar4) *
                 0x38);
        if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
          iVar14 = iVar7;
        }
        iVar14 = iVar14 + 1;
      }
      lVar15 = (longlong)iVar14;
      lVar16 = (longlong)iVar13;
      uVar4 = *(ulonglong *)(*(longlong *)(pFVar3 + lVar15 * 0x10) + 0x28);
      uVar5 = *(ulonglong *)(*(longlong *)(pFVar3 + lVar16 * 0x10) + 0x28);
      dVar2 = *(double *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pFVar3 + lVar16 * 0x10) + 0x18) +
                 ((ulonglong)(longlong)*(int *)(pFVar3 + lVar16 * 0x10 + 8) / uVar5) * 0x10) + 8 +
               ((ulonglong)(longlong)*(int *)(pFVar3 + lVar16 * 0x10 + 8) % uVar5) * 0x38);
      pdVar1 = (double *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pFVar3 + lVar15 * 0x10) + 0x18) +
                 ((ulonglong)(longlong)*(int *)(pFVar3 + lVar15 * 0x10 + 8) / uVar4) * 0x10) + 8 +
               ((ulonglong)(longlong)*(int *)(pFVar3 + lVar15 * 0x10 + 8) % uVar4) * 0x38);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
        return;
      }
      uVar8 = *(undefined8 *)(pFVar3 + lVar15 * 0x10 + 8);
      uVar9 = *(undefined8 *)(pFVar3 + lVar16 * 0x10);
      uVar10 = *(undefined8 *)(pFVar3 + lVar16 * 0x10 + 8);
      *(undefined8 *)(pFVar3 + lVar16 * 0x10) = *(undefined8 *)(pFVar3 + lVar15 * 0x10);
      *(undefined8 *)(pFVar3 + lVar16 * 0x10 + 8) = uVar8;
      *(undefined8 *)(pFVar3 + lVar15 * 0x10) = uVar9;
      *(undefined8 *)(pFVar3 + lVar15 * 0x10 + 8) = uVar10;
      iVar13 = iVar14;
    } while (iVar14 * 2 + 1 < iVar12);
  }
  return;
}

// TArray<double,TSizedDefaultAllocator<64>_> @ 14d41e450

TArray<double,TSizedDefaultAllocator<64>_> * __thiscall
TArray<double,TSizedDefaultAllocator<64>_>::TArray<double,TSizedDefaultAllocator<64>_>
          (TArray<double,TSizedDefaultAllocator<64>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// AddDefaulted @ 14d43a330

int __thiscall
TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// AddDefaulted @ 14d43a3a0

int __thiscall
TArray<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::AddDefaulted(TArray<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// AddDefaulted_GetRef @ 14d43a410

FAutoMappedFile * __thiscall
TArray<TraceServices::`anonymous_namespace'::FAutoMappedFile,TSizedDefaultAllocator<32>_>::
AddDefaulted_GetRef(TArray<TraceServices::_anonymous_namespace_::FAutoMappedFile,TSizedDefaultAllocator<32>_>
                    *this)

{
  int iVar1;
  FAutoMappedFile *pFVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar2 = (FAutoMappedFile *)((this->AllocatorInstance).Data + (longlong)iVar1 * 0x20);
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<TraceServices::_anonymous_namespace_::FAutoMappedFile,int>(pFVar2,1);
  return pFVar2;
}

// InsertDefaulted_GetRef @ 14d4733b0

TVariablePagedArrayPage<double> * __thiscall
TArray<TraceServices::TVariablePagedArrayPage<double>,TSizedDefaultAllocator<32>_>::
InsertDefaulted_GetRef
          (TArray<TraceServices::TVariablePagedArrayPage<double>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TVariablePagedArrayPage<double> *pTVar2;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  pTVar2 = (TVariablePagedArrayPage<double> *)
           ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DefaultConstructItems<TraceServices::TVariablePagedArrayPage<double>,int>(pTVar2,1);
  return pTVar2;
}

// InsertDefaulted_GetRef @ 14d473440

TVariablePagedArrayPage<TraceServices::ECounterOpType> * __thiscall
TArray<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,TSizedDefaultAllocator<32>_>
::InsertDefaulted_GetRef(void *this,int param_1)

{
  int iVar1;
  void *_Src;
  TVariablePagedArrayPage<TraceServices::ECounterOpType> *pTVar2;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  _Src = (void *)(*(longlong *)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + 0x18),_Src,(longlong)(iVar1 - param_1) * 0x18);
  pTVar2 = (TVariablePagedArrayPage<TraceServices::ECounterOpType> *)
           ((longlong)param_1 * 0x18 + *(longlong *)this);
  DefaultConstructItems<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,int>
            (pTVar2,1);
  return pTVar2;
}

// InsertDefaulted_GetRef @ 14d4734d0

TVariablePagedArrayPage<__int64> * __thiscall
TArray<TraceServices::TVariablePagedArrayPage<__int64>,TSizedDefaultAllocator<32>_>::
InsertDefaulted_GetRef
          (TArray<TraceServices::TVariablePagedArrayPage<__int64>,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TVariablePagedArrayPage<__int64> *pTVar2;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  pTVar2 = (TVariablePagedArrayPage<__int64> *)
           ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DefaultConstructItems<TraceServices::TVariablePagedArrayPage<__int64>,int>(pTVar2,1);
  return pTVar2;
}

// RemoveAt @ 14d486ab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

