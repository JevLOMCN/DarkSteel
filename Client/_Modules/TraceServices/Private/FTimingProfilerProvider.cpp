// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 59

// <lambda_invoker_cdecl> @ 14d406960

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

wchar_t * __cdecl
`TraceServices::FTimingProfilerProvider::FTimingProfilerProvider'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FTimingProfilerAggregatedStats *param_1)

{
  return param_1->Timer->Name;
}

// <lambda_invoker_cdecl> @ 14d406b00

bool __cdecl
`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l19::<lambda_3>::
<lambda_invoker_cdecl>(FAggregatedTimingStats *param_1,FAggregatedTimingStats *param_2)

{
  return param_2->TotalInclusiveTime < param_1->TotalInclusiveTime;
}

// <lambda_invoker_cdecl> @ 14d406b90

bool __cdecl
`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l19::<lambda_4>::
<lambda_invoker_cdecl>(FAggregatedTimingStats *param_1,FAggregatedTimingStats *param_2)

{
  return param_1->TotalInclusiveTime < param_2->TotalInclusiveTime;
}

// FTimingProfilerProvider @ 14d426640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d426b81) */
/* WARNING: Removing unreachable block (ram,0x00014d426ce7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff58 : 0x00014d426b85 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FTimingProfilerProvider * __thiscall
TraceServices::FTimingProfilerProvider::FTimingProfilerProvider
          (FTimingProfilerProvider *this,IAnalysisSession *param_1)

{
  int *piVar1;
  TArray<TraceServices::FTimingProfilerTimer,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ILinearAllocator *pIVar11;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *pTVar12;
  FTimingProfilerProvider *pFVar13;
  TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *pTVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_158 [32];
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *local_138;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_108;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_f8;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_e8;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_d8;
  undefined8 local_c8;
  code *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_88;
  undefined8 local_78;
  code *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pTVar2 = &this->Timers;
  pTVar3 = &this->Timelines;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ITimingProfilerProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ITimingProfilerTimerReader__;
  pTVar4 = &(this->AggregatedStatsTableLayout).Columns;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableTimingProfilerProvider__;
  this->Session = param_1;
  (this->Metadatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadatas).ArrayNum = 0;
  (this->Metadatas).ArrayMax = 0;
  (this->MetadataSpecs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataSpecs).ArrayNum = 0;
  (this->MetadataSpecs).ArrayMax = 0;
  *(undefined8 *)&this->MetadataSpecMap = 0;
  *(undefined8 *)&(this->MetadataSpecMap).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataSpecMap).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataSpecMap).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataSpecMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataSpecMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataSpecMap).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataSpecMap).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataSpecMap).field_0x48 = 0;
  (this->AggregatedStatsTableLayout)._padding_ =
       (longlong)
       &___7__TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__6B_;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Timers).ArrayNum = 0;
  (this->Timers).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Timelines).ArrayNum = 0;
  (this->Timelines).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AggregatedStatsTableLayout).Columns.ArrayNum = 0;
  (this->AggregatedStatsTableLayout).Columns.ArrayMax = 0;
  (this->GpuQueues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuQueues).ArrayNum = 0;
  (this->GpuQueues).ArrayMax = 0;
  (this->GpuQueueData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuQueueData).ArrayNum = 0;
  (this->GpuQueueData).ArrayMax = 0;
  *(undefined8 *)&this->GpuQueueIdToQueueIndexMap = 0;
  *(undefined8 *)&(this->GpuQueueIdToQueueIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->GpuQueueIdToQueueIndexMap).field_0x20 = 0;
  this->RatioOfThreadsToUse = 0.75;
  *(undefined4 *)&(this->GpuQueueIdToQueueIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->GpuQueueIdToQueueIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GpuQueueIdToQueueIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GpuQueueIdToQueueIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->GpuQueueIdToQueueIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 = 0;
  *(undefined8 *)&this->CpuThreadTimelineIndexMap = 0;
  *(undefined8 *)&(this->CpuThreadTimelineIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->CpuThreadTimelineIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->CpuThreadTimelineIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->CpuThreadTimelineIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CpuThreadTimelineIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CpuThreadTimelineIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->CpuThreadTimelineIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->CpuThreadTimelineIndexMap).field_0x48 = 0;
  this->bHasData[0] = false;
  this->bHasData[1] = false;
  this->bHasData[2] = false;
  this->bHasData[3] = false;
  pIVar11 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar12 = MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
                      (&local_108,pIVar11);
  pTVar5 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar3->AllocatorInstance).Data;
  if ((pTVar5 <= pTVar12) &&
     (lVar15 = (longlong)(this->Timelines).ArrayMax, pTVar12 < pTVar5 + lVar15)) {
    local_120 = (longlong)(this->Timelines).ArrayNum;
    local_118 = 0x10;
    local_138 = pTVar12;
    local_130 = pTVar5;
    local_128 = lVar15;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FTimingProfilerProvider *)(*pcVar8)();
      return pFVar13;
    }
  }
  iVar10 = (this->Timelines).ArrayNum;
  if (iVar10 == (this->Timelines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,&(this->Timelines).ArrayMax);
  }
  pFVar16 = (pTVar3->AllocatorInstance).Data;
  (this->Timelines).ArrayNum = iVar10 + 1;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)(pFVar16 + (longlong)iVar10 * 0x10) = pTVar12->Object;
  pTVar6 = (pTVar12->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar16 + (longlong)iVar10 * 0x10 + 8) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  pIVar11 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar12 = MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
                      (&local_f8,pIVar11);
  pTVar5 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar3->AllocatorInstance).Data;
  if ((pTVar5 <= pTVar12) &&
     (lVar15 = (longlong)(this->Timelines).ArrayMax, pTVar12 < pTVar5 + lVar15)) {
    local_120 = (longlong)(this->Timelines).ArrayNum;
    local_118 = 0x10;
    local_138 = pTVar12;
    local_130 = pTVar5;
    local_128 = lVar15;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FTimingProfilerProvider *)(*pcVar8)();
      return pFVar13;
    }
  }
  iVar10 = (this->Timelines).ArrayNum;
  if (iVar10 == (this->Timelines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,&(this->Timelines).ArrayMax);
  }
  pFVar16 = (pTVar3->AllocatorInstance).Data;
  (this->Timelines).ArrayNum = iVar10 + 1;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)(pFVar16 + (longlong)iVar10 * 0x10) = pTVar12->Object;
  pTVar6 = (pTVar12->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar16 + (longlong)iVar10 * 0x10 + 8) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  pIVar11 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTVar12 = MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
                      (&local_e8,pIVar11);
  pTVar5 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar3->AllocatorInstance).Data;
  if ((pTVar5 <= pTVar12) &&
     (lVar15 = (longlong)(this->Timelines).ArrayMax, pTVar12 < pTVar5 + lVar15)) {
    local_120 = (longlong)(this->Timelines).ArrayNum;
    local_118 = 0x10;
    local_138 = pTVar12;
    local_130 = pTVar5;
    local_128 = lVar15;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FTimingProfilerProvider *)(*pcVar8)();
      return pFVar13;
    }
  }
  iVar10 = (this->Timelines).ArrayNum;
  if (iVar10 == (this->Timelines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,&(this->Timelines).ArrayMax);
  }
  pFVar16 = (pTVar3->AllocatorInstance).Data;
  (this->Timelines).ArrayNum = iVar10 + 1;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)(pFVar16 + (longlong)iVar10 * 0x10) = pTVar12->Object;
  pTVar6 = (pTVar12->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar16 + (longlong)iVar10 * 0x10 + 8) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  ::FString::FString((FString *)&local_d8,L"Name");
  pTVar5 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar4->AllocatorInstance).Data;
  local_a8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFTimingProfilerAggregatedStats_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_c8 = 5;
  uStack_a0 = `TraceServices::FTimingProfilerProvider::FTimingProfilerProvider'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FTimingProfilerAggregatedStats_const_&>
             ::Call;
  local_90 = 0;
  if ((pTVar5 <= &local_d8) &&
     (lVar15 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayMax,
     &local_d8 < pTVar5 + lVar15 * 5)) {
    local_120 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayNum;
    local_118 = 0x50;
    local_138 = &local_d8;
    local_130 = pTVar5;
    local_128 = lVar15;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FTimingProfilerProvider *)(*pcVar8)();
      return pFVar13;
    }
  }
  iVar10 = (this->AggregatedStatsTableLayout).Columns.ArrayNum;
  if (iVar10 == (this->AggregatedStatsTableLayout).Columns.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1050,&pTVar4->AllocatorInstance,
                        &(this->AggregatedStatsTableLayout).Columns.ArrayMax);
  }
  (this->AggregatedStatsTableLayout).Columns.ArrayNum = iVar10 + 1;
  lVar15 = (longlong)iVar10;
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar7 + lVar15 * 0x50) = 0;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)(pFVar7 + lVar15 * 0x50) = local_d8.Object;
  local_d8.Object =
       (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
        *)0x0;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 8) =
       local_d8.SharedReferenceCount.ReferenceController._0_4_;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 0xc) =
       local_d8.SharedReferenceCount.ReferenceController._4_4_;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 0x10) = (undefined4)local_c8;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 0x14) = local_c8._4_4_;
  *(code **)(pFVar7 + lVar15 * 0x50 + 0x20) = local_b8;
  *(undefined8 *)(pFVar7 + lVar15 * 0x50 + 0x48) = local_90;
  local_90 = 0;
  pFVar16 = pFVar7 + lVar15 * 0x50 + 0x30;
  *(undefined4 *)pFVar16 = (undefined4)local_a8;
  *(undefined4 *)(pFVar16 + 4) = local_a8._4_4_;
  *(undefined4 *)(pFVar16 + 8) = (undefined4)uStack_a0;
  *(undefined4 *)(pFVar16 + 0xc) = uStack_a0._4_4_;
  *(undefined8 *)(pFVar7 + lVar15 * 0x50 + 0x40) = local_98;
  if (*(longlong *)(pFVar7 + lVar15 * 0x50 + 0x20) == 0) {
    if (local_b8 != (code *)0x0) {
      (*(code *)local_a8[2])();
    }
  }
  else {
    local_b8 = (code *)0x0;
  }
  if (local_d8.Object !=
      (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
       *)0x0) {
    FMemory::Free(local_d8.Object);
  }
  ::FString::FString((FString *)&local_88,L"Count");
  pTVar5 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar4->AllocatorInstance).Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFTimingProfilerAggregatedStats_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FTimingProfilerAggregatedStats_const_&>
             ::Call;
  local_78 = 2;
  local_40 = 0;
  uStack_50 = 8;
  if ((pTVar5 <= &local_88) &&
     (lVar15 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayMax,
     &local_88 < pTVar5 + lVar15 * 5)) {
    local_120 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayNum;
    local_118 = 0x50;
    local_138 = &local_88;
    local_130 = pTVar5;
    local_128 = lVar15;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FTimingProfilerProvider *)(*pcVar8)();
      return pFVar13;
    }
  }
  iVar10 = (this->AggregatedStatsTableLayout).Columns.ArrayNum;
  if (iVar10 == (this->AggregatedStatsTableLayout).Columns.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1050,&pTVar4->AllocatorInstance,
                        &(this->AggregatedStatsTableLayout).Columns.ArrayMax);
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  (this->AggregatedStatsTableLayout).Columns.ArrayNum = iVar10 + 1;
  lVar15 = (longlong)iVar10;
  *(undefined8 *)(pFVar7 + lVar15 * 0x50) = 0;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)(pFVar7 + lVar15 * 0x50) = local_88.Object;
  local_88.Object =
       (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
        *)0x0;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 8) =
       local_88.SharedReferenceCount.ReferenceController._0_4_;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 0xc) =
       local_88.SharedReferenceCount.ReferenceController._4_4_;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 0x10) = (undefined4)local_78;
  *(undefined4 *)(pFVar7 + lVar15 * 0x50 + 0x14) = local_78._4_4_;
  *(code **)(pFVar7 + lVar15 * 0x50 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + lVar15 * 0x50 + 0x48) = local_40;
  local_40 = 0;
  pFVar16 = pFVar7 + lVar15 * 0x50 + 0x30;
  *(undefined4 *)pFVar16 = (undefined4)local_58;
  *(undefined4 *)(pFVar16 + 4) = local_58._4_4_;
  *(undefined4 *)(pFVar16 + 8) = uStack_50;
  *(undefined4 *)(pFVar16 + 0xc) = uStack_4c;
  *(undefined8 *)(pFVar7 + lVar15 * 0x50 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + lVar15 * 0x50 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Object !=
      (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
       *)0x0) {
    FMemory::Free(local_88.Object);
  }
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (&this->AggregatedStatsTableLayout,(pdm_a1efb016)0x10,L"C.Avg",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x18,L"Incl",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x20,L"I.Min",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x28,L"I.Max",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x30,L"I.Avg",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x38,L"I.Med",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x40,L"Excl",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x48,L"E.Min",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x50,L"E.Max",0);
  pTVar14 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
                      (pTVar14,(pdm_a1efb016)0x58,L"E.Avg",0);
  TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
            (pTVar14,(pdm_a1efb016)0x60,L"E.Med",0);
  iVar10 = (this->Timers).ArrayNum;
  piVar1 = &(this->Timers).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x20;
  (this->Timers).ArrayNum = iVar10 + 1;
  DefaultConstructItems<TraceServices::FTimingProfilerTimer,int>(pFVar16,1);
  *(undefined4 *)(pFVar16 + 0x14) = 0;
  *(wchar_t **)pFVar16 = L"<default>";
  pFVar16[0x1c] = (FScriptContainerElement)0x0;
  return this;
}

// ~FTimingProfilerProvider @ 14d42ce80

void __thiscall
TraceServices::FTimingProfilerProvider::~FTimingProfilerProvider(FTimingProfilerProvider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ITimingProfilerProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ITimingProfilerTimerReader__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableTimingProfilerProvider__;
  *(undefined4 *)&(this->CpuThreadTimelineIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CpuThreadTimelineIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CpuThreadTimelineIndexMap);
  *(undefined4 *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GpuQueueIdToQueueIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GpuQueueIdToQueueIndexMap);
  DestructItems<TraceServices::FGpuQueueData,int>
            ((FGpuQueueData *)(this->GpuQueueData).AllocatorInstance.Data,
             (this->GpuQueueData).ArrayNum);
  pFVar2 = (this->GpuQueueData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GpuQueues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data
             ,(this->AggregatedStatsTableLayout).Columns.ArrayNum);
  pFVar2 = (this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,int>
            ((TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
              *)(this->Timelines).AllocatorInstance.Data,(this->Timelines).ArrayNum);
  pFVar2 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Timers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->MetadataSpecMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetadataSpecMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataSpecMap);
  DestructItems<TraceServices::FMetadataSpec,int>
            ((FMetadataSpec *)(this->MetadataSpecs).AllocatorInstance.Data,
             (this->MetadataSpecs).ArrayNum);
  pFVar2 = (this->MetadataSpecs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TraceServices::FTimingProfilerProvider::FMetadata,int>
            ((FMetadata *)(this->Metadatas).AllocatorInstance.Data,(this->Metadatas).ArrayNum);
  pFVar2 = (this->Metadatas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 14d431800

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

EEventEnumerate __thiscall
`TraceServices::FTimingProfilerProvider::CreateButterflyInternal'::__l6::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  TSet<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  EEventEnumerate EVar9;
  int iVar10;
  longlong lVar11;
  FTimingProfilerButterflyNode *pFVar12;
  void *pvVar13;
  uint uVar14;
  longlong lVar15;
  TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool> *pTVar16;
  uint uVar17;
  undefined8 *puVar18;
  ForAnyElementType *pFVar19;
  undefined8 *puVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  TPairInitializer<TraceServices::FTimingProfilerCallstackKey_const_&,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_&&>
  local_res10;
  longlong local_88;
  undefined8 local_80;
  FScriptContainerElement local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  plVar5 = *(longlong **)((longlong)this + 0x18);
  puVar18 = (undefined8 *)0x0;
  local_88 = 0;
  dVar3 = (*(double **)((longlong)this + 8))[1];
  iVar10 = (int)plVar5[1];
  if (param_2 <= dVar3) {
    dVar3 = param_2;
  }
  iVar23 = 0x11;
  dVar4 = **(double **)((longlong)this + 8);
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  uVar22 = 0;
  if (iVar10 != 0) {
    uVar14 = uVar22;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar14 = ~(iVar10 - 1U) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    lVar11 = *plVar5;
    lVar15 = (longlong)(int)plVar5[1] * 0x20;
    local_88 = *(longlong *)(lVar15 + -0x20 + lVar11);
    iVar23 = *(int *)(lVar15 + -8 + lVar11);
    *(double *)(lVar15 + -0x10 + lVar11) =
         (dVar3 - **(double **)((longlong)this + 0x28)) + *(double *)(lVar15 + -0x10 + lVar11);
  }
  **(double **)((longlong)this + 0x28) = dVar3;
  if (param_1) {
    lVar11 = (**(code **)(*(longlong *)(*(longlong *)this + 8) + 8))
                       ((longlong *)(*(longlong *)this + 8),param_3->TimerIndex);
    if ((lVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Timer != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                           ,0x50a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    pFVar19 = *(ForAnyElementType **)((longlong)this + 0x18);
    piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
    iVar10 = *(int *)&pFVar19[1].Data;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,pFVar19,piVar1);
    }
    *(int *)&pFVar19[1].Data = iVar10 + 1;
    pFVar21 = pFVar19->Data + (longlong)iVar10 * 0x20;
    DefaultConstructItems<_TraceServices::FTimingProfilerProvider::CreateButterflyInternal_::__l2::FLocalStackEntry,int>
              (pFVar21,1);
    *(double *)(pFVar21 + 8) = dVar3;
    pFVar2 = (FScriptContainerElement *)(lVar11 + 0x14);
    *(int *)(pFVar21 + 0x18) = iVar23 * 0x11 + *(int *)pFVar2;
    pFVar19 = *(ForAnyElementType **)((longlong)this + 0x10);
    if (((pFVar19->Data <= pFVar2) &&
        (pFVar2 < pFVar19->Data + (longlong)*(int *)((longlong)&pFVar19[1].Data + 4) * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    iVar10 = *(int *)&pFVar19[1].Data;
    piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,pFVar19,piVar1);
    }
    *(int *)&pFVar19[1].Data = iVar10 + 1;
    *(int *)(pFVar19->Data + (longlong)iVar10 * 4) = *(int *)pFVar2;
    *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x10) = *(undefined4 *)(pFVar21 + 0x18);
    this_00 = *(TSet<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x20);
    iVar10 = TSet<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TraceServices::FTimingProfilerCallstackKey>
                       (this_00,(*(FTimingProfilerCallstackKey **)((longlong)this + 0x10))->Hash,
                        *(FTimingProfilerCallstackKey **)((longlong)this + 0x10));
    if (iVar10 != -1) {
      lVar15 = (longlong)iVar10 * 0x30 + *(longlong *)&this_00->Elements;
      puVar20 = (undefined8 *)(lVar15 + 0x18);
      if (lVar15 == 0) {
        puVar20 = puVar18;
      }
      if (puVar20 != (undefined8 *)0x0) {
        *(undefined8 *)pFVar21 = *puVar20;
        pFVar21[0x1c] = *(FScriptContainerElement *)(puVar20 + 1);
        return Continue;
      }
    }
    iVar10 = *(int *)(*(longlong *)((longlong)this + 0x18) + 8) + -1;
    pTVar16 = (TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool> *)(longlong)iVar10;
    puVar20 = puVar18;
    puVar24 = puVar18;
    local_res10.Value = pTVar16;
    if (0 < iVar10) {
      do {
        plVar5 = *(longlong **)((longlong)this + 0x18);
        uVar17 = (uint)puVar18;
        uVar14 = uVar22;
        if ((int)uVar17 < (int)plVar5[1]) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , pTVar16 = local_res10.Value, bVar8)) {
          pcVar7 = (code *)swi(3);
          EVar9 = (*pcVar7)();
          return EVar9;
        }
        if (**(longlong **)((longlong)puVar24 + *plVar5) == lVar11) {
          plVar5 = *(longlong **)((longlong)this + 0x18);
          if ((int)uVar17 < (int)plVar5[1]) {
            uVar22 = ~uVar17 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            EVar9 = (*pcVar7)();
            return EVar9;
          }
          *(undefined8 *)pFVar21 = *(undefined8 *)((longlong)(int)uVar17 * 0x20 + *plVar5);
          pFVar21[0x1c] = (FScriptContainerElement)0x1;
          break;
        }
        puVar18 = (undefined8 *)(ulonglong)(uVar17 + 1);
        puVar20 = (undefined8 *)((longlong)puVar20 + 1);
        puVar24 = puVar24 + 4;
      } while ((longlong)puVar20 < (longlong)pTVar16);
    }
    if (*(longlong *)pFVar21 == 0) {
      pFVar12 = TraceServices::
                TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
                ::PushBack((TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
                            *)(*(longlong *)((longlong)this + 0x30) + 0x70));
      *(FTimingProfilerButterflyNode **)pFVar21 = pFVar12;
      pFVar12->InclusiveTime = 0.0;
      *(undefined8 *)(*(longlong *)pFVar21 + 0x18) = 0;
      *(undefined8 *)(*(longlong *)pFVar21 + 8) = 0;
      **(longlong **)pFVar21 = lVar11;
      uVar22 = *(uint *)(lVar11 + 0x14);
      lVar11 = *(longlong *)((longlong)this + 0x30);
      uVar14 = 0;
      if ((int)uVar22 < *(int *)(lVar11 + 0xb0)) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar9 = (*pcVar7)();
        return EVar9;
      }
      pFVar19 = (ForAnyElementType *)((longlong)(int)uVar22 * 0x10 + *(longlong *)(lVar11 + 0xa8));
      if (((pFVar19->Data <= pFVar21) &&
          (pFVar21 < pFVar19->Data + (longlong)*(int *)((longlong)&pFVar19[1].Data + 4) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar9 = (*pcVar7)();
        return EVar9;
      }
      iVar10 = *(int *)&pFVar19[1].Data;
      piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar19,piVar1);
      }
      *(int *)&pFVar19[1].Data = iVar10 + 1;
      *(undefined8 *)(pFVar19->Data + (longlong)iVar10 * 8) = *(undefined8 *)pFVar21;
      *(longlong *)(*(longlong *)pFVar21 + 0x20) = local_88;
      if (local_88 != 0) {
        if (((*(FScriptContainerElement **)(local_88 + 0x28) <= pFVar21) &&
            (pFVar21 < *(FScriptContainerElement **)(local_88 + 0x28) +
                       (longlong)*(int *)(local_88 + 0x34) * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          EVar9 = (*pcVar7)();
          return EVar9;
        }
        iVar10 = *(int *)(local_88 + 0x30);
        if (iVar10 == *(int *)(local_88 + 0x34)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(local_88 + 0x28),(int *)(local_88 + 0x34))
          ;
        }
        *(int *)(local_88 + 0x30) = iVar10 + 1;
        *(undefined8 *)(((ForAnyElementType *)(local_88 + 0x28))->Data + (longlong)iVar10 * 8) =
             *(undefined8 *)pFVar21;
      }
    }
    local_80 = *(undefined8 *)pFVar21;
    local_78 = pFVar21[0x1c];
    local_70 = *(undefined8 *)((longlong)this + 0x10);
    local_68 = &local_80;
    TSet<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TraceServices::FTimingProfilerCallstackKey_const_&,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_&&>_>
              (*(TSet<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x20),&local_res10,(bool *)&local_70);
  }
  else {
    plVar5 = *(longlong **)((longlong)this + 0x18);
    uVar14 = (int)plVar5[1] - 1;
    uVar22 = 0;
    if ((int)uVar14 < (int)plVar5[1]) {
      uVar22 = ~uVar14 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    lVar11 = *plVar5;
    lVar15 = (longlong)(int)plVar5[1] * 0x20;
    dVar3 = dVar3 - *(double *)(lVar15 + -0x18 + lVar11);
    if ((dVar3 < 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InclusiveTime >= 0.0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                           ,0x53b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    dVar4 = *(double *)(lVar15 + -0x10 + lVar11);
    if (((dVar4 < 0.0) || (dVar3 < dVar4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StackEntry.ExclusiveTime >= 0.0 && StackEntry.ExclusiveTime <= InclusiveTime"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                           ,0x53c,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    if (*(char *)(lVar15 + -4 + lVar11) == '\0') {
      lVar6 = *(longlong *)(lVar15 + -0x20 + lVar11);
      *(double *)(lVar6 + 0x10) = dVar3 + *(double *)(lVar6 + 0x10);
    }
    lVar6 = *(longlong *)(lVar15 + -0x20 + lVar11);
    *(double *)(lVar6 + 0x18) = *(double *)(lVar6 + 0x18) + *(double *)(lVar15 + -0x10 + lVar11);
    plVar5 = (longlong *)(*(longlong *)(lVar15 + -0x20 + lVar11) + 8);
    *plVar5 = *plVar5 + 1;
    plVar5 = *(longlong **)((longlong)this + 0x18);
    if (((int)plVar5[1] < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    uVar22 = (int)plVar5[1] - 1;
    pvVar13 = (void *)((longlong)(int)uVar22 * 0x20 + *plVar5);
    iVar10 = ~uVar22 + (int)plVar5[1];
    if (iVar10 != 0) {
      memmove(pvVar13,(void *)((longlong)pvVar13 + 0x20),(longlong)iVar10 << 5);
    }
    *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
    plVar5 = *(longlong **)((longlong)this + 0x10);
    if (((int)plVar5[1] < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    uVar22 = (int)plVar5[1] - 1;
    pvVar13 = (void *)(*plVar5 + (longlong)(int)uVar22 * 4);
    iVar10 = ~uVar22 + (int)plVar5[1];
    if (iVar10 != 0) {
      memmove(pvVar13,(void *)((longlong)pvVar13 + 4),(longlong)iVar10 << 2);
    }
    *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
  }
  return Continue;
}

// operator() @ 14d434700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l10::<lambda_2>::operator()
          (void *this,FFrame *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  double *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_28 = param_1->StartTime;
  dStack_20 = param_1->EndTime;
  pFVar2 = *(ForAnyElementType **)this;
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
  *(double *)(pFVar3 + (longlong)iVar6 * 0x10) = local_28;
  *(double *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = dStack_20;
  return;
}

// AddGpuQueue @ 14d43ab50

void __thiscall
TraceServices::FTimingProfilerProvider::AddGpuQueue
          (FTimingProfilerProvider *this,uint param_1,uchar param_2,uchar param_3,uchar param_4,
          wchar_t *param_5)

{
  int *piVar1;
  TArray<TraceServices::FTimingProfilerTimer,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ILinearAllocator *pIVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_38;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_28;
  
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((this->GpuQueueData).ArrayNum != *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x24) {
    puVar11 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x30;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->GpuQueueIdToQueueIndexMap).field_0x28;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x38 - 1U & local_res10[0]) *
                    4);
    if (iVar7 != -1) {
      do {
        pFVar10 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        if (*(uint *)pFVar10 == local_res10[0]) {
          pFVar8 = pFVar10 + 4;
          if (pFVar10 == (FScriptContainerElement *)0x0) {
            pFVar8 = (FScriptContainerElement *)0x0;
          }
          if (pFVar8 != (FScriptContainerElement *)0x0) {
            return;
          }
          break;
        }
        iVar7 = *(int *)(pFVar10 + 8);
      } while (iVar7 != -1);
    }
  }
  local_res8[0] = *(uint *)this->bHasData;
  TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  ::Emplace<unsigned_int_const_&,unsigned_int>
            ((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
              *)&this->GpuQueueData,local_res10,local_res8);
  iVar7 = (this->GpuQueues).ArrayNum;
  piVar1 = &(this->GpuQueues).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->GpuQueues).AllocatorInstance,piVar1);
  }
  (this->GpuQueues).ArrayNum = iVar7 + 1;
  DefaultConstructItems<TraceServices::FGpuQueueData,int>
            ((this->GpuQueues).AllocatorInstance.Data + (longlong)iVar7 * 0x20,1);
  iVar7 = *(int *)this->bHasData;
  if (iVar7 == *(int *)&this->field_0xd4) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&this->RatioOfThreadsToUse,
                       (int *)&this->field_0xd4);
  }
  *(int *)this->bHasData = iVar7 + 1;
  puVar3 = (uint *)((longlong)this->RatioOfThreadsToUse + (longlong)iVar7 * 0x18);
  DefaultConstructItems<TraceServices::FGpuQueueInfo,int>(puVar3,1);
  *puVar3 = local_res10[0];
  *(uchar *)((longlong)puVar3 + 6) = param_4;
  *(wchar_t **)(puVar3 + 2) = param_5;
  *(uchar *)(puVar3 + 1) = param_2;
  *(uchar *)((longlong)puVar3 + 5) = param_3;
  puVar3[4] = (this->Timers).ArrayNum;
  pIVar9 = (ILinearAllocator *)(**(code **)(*(longlong *)this->_padding_ + 0xb8))();
  MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
            (&local_28,pIVar9);
  pTVar2 = &this->Timers;
  pTVar4 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar4 <= &local_28) && (&local_28 < pTVar4 + (this->Timers).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->Timers).ArrayNum;
  if (iVar7 == (this->Timers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->Timers).ArrayMax);
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  (this->Timers).ArrayNum = iVar7 + 1;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)pFVar10 = local_28.Object;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_28.SharedReferenceCount.ReferenceController
  ;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar3[5] = (this->Timers).ArrayNum;
  pIVar9 = (ILinearAllocator *)(**(code **)(*(longlong *)this->_padding_ + 0xb8))();
  MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
            (&local_38,pIVar9);
  pTVar4 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar4 <= &local_38) && (&local_38 < pTVar4 + (this->Timers).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->Timers).ArrayNum;
  if (iVar7 == (this->Timers).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->Timers).ArrayMax);
  }
  (this->Timers).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)pFVar10 = local_38.Object;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_38.SharedReferenceCount.ReferenceController
  ;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&(this->AggregatedStatsTableLayout).Columns.ArrayNum + 2) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGpuSignalFence @ 14d43aed0

void __thiscall
TraceServices::FTimingProfilerProvider::AddGpuSignalFence
          (FTimingProfilerProvider *this,uint param_1,FGpuSignalFence *param_2)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((this->GpuQueueData).ArrayNum != *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x24) {
    puVar8 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x30;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GpuQueueIdToQueueIndexMap).field_0x28;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x38 - 1U & param_1)
                              * 4);
    if (iVar5 != -1) {
      while (pFVar7 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)iVar5 * 0x10,
            *(uint *)pFVar7 != param_1) {
        iVar5 = *(int *)(pFVar7 + 8);
        if (iVar5 == -1) {
          return;
        }
      }
      pFVar10 = pFVar7 + 4;
      if (pFVar7 == (FScriptContainerElement *)0x0) {
        pFVar10 = (FScriptContainerElement *)0x0;
      }
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        if (((uint)(this->GpuQueues).ArrayNum <= *(uint *)pFVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("*FoundQueueIndex < (uint32)GpuQueueData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                               ,0x1f8,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = *(uint *)pFVar10;
        uVar6 = 0;
        if ((int)uVar9 < (this->GpuQueues).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = (this->GpuQueues).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
        iVar5 = *(int *)&pFVar7[8].field_0x0;
        if (iVar5 != 0) {
          uVar9 = 0;
          if ((int)(iVar5 - 1U) < iVar5) {
            uVar9 = ~(iVar5 - 1U) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar2 = *(double *)
                   (*(longlong *)&pFVar7->field_0x0 +
                   (longlong)*(int *)&pFVar7[8].field_0x0 * 0x10 + -0x10);
          if ((param_2->Timestamp <= dVar2 && dVar2 != param_2->Timestamp) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9185929053134126594>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                                 ,0x1fe,"Fence.Timestamp >= Data.SignalFenceArray.Last().Timestamp")
             , bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (((*(FGpuSignalFence **)&pFVar7->field_0x0 <= param_2) &&
            (param_2 < *(FGpuSignalFence **)&pFVar7->field_0x0 + *(int *)(pFVar7 + 0xc))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)&pFVar7[8].field_0x0;
        if (iVar5 == *(int *)(pFVar7 + 0xc)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 0xc));
        }
        *(int *)&pFVar7[8].field_0x0 = iVar5 + 1;
        dVar2 = (double)param_2->Value;
        pdVar1 = (double *)(*(longlong *)&pFVar7->field_0x0 + (longlong)iVar5 * 0x10);
        *pdVar1 = param_2->Timestamp;
        pdVar1[1] = dVar2;
      }
    }
  }
  return;
}

// AddGpuWaitFence @ 14d43b1a0

void __thiscall
TraceServices::FTimingProfilerProvider::AddGpuWaitFence
          (FTimingProfilerProvider *this,uint param_1,FGpuWaitFence *param_2)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((this->GpuQueueData).ArrayNum != *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x24) {
    puVar8 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x30;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GpuQueueIdToQueueIndexMap).field_0x28;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x38 - 1U & param_1)
                              * 4);
    if (iVar5 != -1) {
      while (pFVar7 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)iVar5 * 0x10,
            *(uint *)pFVar7 != param_1) {
        iVar5 = *(int *)(pFVar7 + 8);
        if (iVar5 == -1) {
          return;
        }
      }
      pFVar10 = pFVar7 + 4;
      if (pFVar7 == (FScriptContainerElement *)0x0) {
        pFVar10 = (FScriptContainerElement *)0x0;
      }
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        if (((uint)(this->GpuQueues).ArrayNum <= *(uint *)pFVar10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("*FoundQueueIndex < (uint32)GpuQueueData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                               ,0x20c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = *(uint *)pFVar10;
        uVar6 = 0;
        if ((int)uVar9 < (this->GpuQueues).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = (this->GpuQueues).AllocatorInstance.Data;
        lVar11 = (longlong)(int)uVar9 * 0x20;
        iVar5 = *(int *)(pFVar7 + lVar11 + 0x18);
        if (iVar5 != 0) {
          uVar9 = 0;
          if ((int)(iVar5 - 1U) < iVar5) {
            uVar9 = ~(iVar5 - 1U) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar2 = *(double *)
                   (*(longlong *)(pFVar7 + lVar11 + 0x10) + -0x18 +
                   (longlong)*(int *)(pFVar7 + lVar11 + 0x18) * 0x18);
          if ((param_2->Timestamp <= dVar2 && dVar2 != param_2->Timestamp) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9185929053134126574>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                                 ,0x212,"Fence.Timestamp >= Data.WaitFenceArray.Last().Timestamp"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (((*(FGpuWaitFence **)(pFVar7 + lVar11 + 0x10) <= param_2) &&
            (param_2 < *(FGpuWaitFence **)(pFVar7 + lVar11 + 0x10) +
                       *(int *)(pFVar7 + lVar11 + 0x1c))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(pFVar7 + lVar11 + 0x18);
        if (iVar5 == *(int *)(pFVar7 + lVar11 + 0x1c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(pFVar7 + lVar11 + 0x10),
                             (int *)(pFVar7 + lVar11 + 0x1c));
        }
        *(int *)(pFVar7 + lVar11 + 0x18) = iVar5 + 1;
        dVar2 = (double)param_2->Value;
        lVar11 = *(longlong *)(pFVar7 + lVar11 + 0x10);
        pdVar1 = (double *)(lVar11 + (longlong)iVar5 * 0x18);
        *pdVar1 = param_2->Timestamp;
        pdVar1[1] = dVar2;
        *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar5 * 0x18) =
             *(undefined8 *)&param_2->QueueToWaitForId;
      }
    }
  }
  return;
}

// AddMetadata @ 14d43b450

/* WARNING: Removing unreachable block (ram,0x00014d43b579) */

uint __thiscall
TraceServices::FTimingProfilerProvider::AddMetadata
          (FTimingProfilerProvider *this,uint param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *local_28;
  undefined8 local_20;
  uint local_18;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  local_28 = (param_2->AllocatorInstance).Data;
  uVar6 = *(uint *)&this->Session;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = param_2->ArrayNum;
  local_20._4_4_ = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  local_18 = param_1;
  if ((((FScriptContainerElement **)this->_padding_ <= &local_28) &&
      (&local_28 <
       (FScriptContainerElement **)this->_padding_ +
       (longlong)*(int *)((longlong)&this->Session + 4) * 3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  iVar7 = *(int *)&this->Session;
  piVar1 = (int *)((longlong)&this->Session + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->Session = iVar7 + 1;
  lVar3 = this->_padding_;
  *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x18) = 0;
  puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x18);
  *puVar2 = local_28;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  *(uint *)(puVar2 + 2) = local_18;
  return ~uVar6;
}

// AddMetadataSpec @ 14d43b5b0

uint __thiscall
TraceServices::FTimingProfilerProvider::AddMetadataSpec
          (FTimingProfilerProvider *this,FMetadataSpec *param_1)

{
  longlong lVar1;
  FMetadataSpec *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_90;
  FScriptContainerElement *local_80;
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_78;
  int *local_68;
  FScriptContainerElement *local_60;
  uint *local_58;
  uint *local_50;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar9 = (param_1->FieldNames).AllocatorInstance.Data;
  iVar6 = (param_1->FieldNames).ArrayNum;
  pFVar16 = pFVar9 + (longlong)iVar6 * 8;
  uVar7 = ((uint)((ulonglong)param_1->Format >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Format >> 4)) * -0x7a143595;
  local_res20[0] = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_res20[0] = local_res20[0] >> 0x10 ^ local_res20[0];
  while( true ) {
    if ((param_1->FieldNames).ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<wchar_t_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar16) break;
    uVar7 = ((uint)(*(ulonglong *)pFVar9 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar9 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_res20[0] = local_res20[0] ^ uVar7 >> 0x10 ^ uVar7;
    pFVar9 = pFVar9 + 8;
  }
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            ((TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
              *)&this->MetadataSpecs,local_res20[0],&local_90,false);
  uVar8 = (ulonglong)local_90.ArrayNum;
  local_94 = local_90.ArrayNum;
  if (0 < local_90.ArrayNum) {
    piVar12 = &(this->Metadatas).ArrayNum;
    pFVar16 = local_90.AllocatorInstance.Data + uVar8 * 4;
    FVar10.Data = local_90.AllocatorInstance.Data;
    piVar14 = piVar12;
    local_68 = piVar12;
    local_60 = pFVar16;
    do {
      local_80 = FVar10.Data;
      if (local_90.ArrayNum != (int)uVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        piVar14 = piVar12;
      }
      if (FVar10.Data == pFVar16) goto LAB_14d43b8bc;
      uVar7 = *(uint *)FVar10.Data;
      lVar15 = (longlong)(int)uVar7;
      piVar14 = &(this->Metadatas).ArrayNum;
      local_78.Value = (uint *)piVar14;
      if (((uint)*piVar14 <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FoundMetadataSpecId < uint32(MetadataSpecs.Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                             ,0x17f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar13 = 0;
      if ((int)uVar7 < *piVar14) {
        uVar13 = ~uVar7 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      pFVar9 = (this->Metadatas).AllocatorInstance.Data;
      if (param_1->Format == *(wchar_t **)(pFVar9 + lVar15 * 0x18)) {
        iVar6 = (param_1->FieldNames).ArrayNum;
        if (iVar6 == *(int *)(pFVar9 + lVar15 * 0x18 + 0x10)) {
          uVar13 = 0;
          lVar11 = 0;
          if (iVar6 < 1) goto LAB_14d43b9bf;
          while( true ) {
            uVar5 = 0;
            if ((int)uVar13 < *(int *)(pFVar9 + lVar15 * 0x18 + 0x10)) {
              uVar5 = ~uVar13 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return uVar7;
            }
            lVar1 = *(longlong *)(pFVar9 + lVar15 * 0x18 + 8);
            uVar5 = 0;
            if ((int)uVar13 < (param_1->FieldNames).ArrayNum) {
              uVar5 = ~uVar13 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return uVar7;
            }
            FVar10.Data = local_80;
            piVar12 = local_68;
            piVar14 = (int *)local_78.Value;
            pFVar16 = local_60;
            if (*(longlong *)((param_1->FieldNames).AllocatorInstance.Data + lVar11 * 8) !=
                *(longlong *)(lVar1 + lVar11 * 8)) break;
            uVar13 = uVar13 + 1;
            lVar11 = lVar11 + 1;
            if (iVar6 <= lVar11) goto LAB_14d43b9bf;
          }
        }
      }
      FVar10.Data = FVar10.Data + 4;
      uVar8 = (ulonglong)local_94;
    } while( true );
  }
  piVar14 = &(this->Metadatas).ArrayNum;
LAB_14d43b8bc:
  pFVar2 = (FMetadataSpec *)(this->Metadatas).AllocatorInstance.Data;
  local_98 = *piVar14;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Metadatas).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  iVar6 = (this->Metadatas).ArrayNum;
  piVar14 = &(this->Metadatas).ArrayMax;
  if (iVar6 == *piVar14) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Metadatas).AllocatorInstance,piVar14);
  }
  (this->Metadatas).ArrayNum = iVar6 + 1;
  pFVar16 = (this->Metadatas).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
  *(wchar_t **)pFVar16 = param_1->Format;
  *(undefined8 *)(pFVar16 + 8) = 0;
  *(FScriptContainerElement **)(pFVar16 + 8) = (param_1->FieldNames).AllocatorInstance.Data;
  (param_1->FieldNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar16 + 0x10) = (param_1->FieldNames).ArrayNum;
  *(int *)(pFVar16 + 0x14) = (param_1->FieldNames).ArrayMax;
  local_58 = local_res20;
  local_50 = &local_98;
  (param_1->FieldNames).ArrayNum = 0;
  (param_1->FieldNames).ArrayMax = 0;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
              *)&this->MetadataSpecs,&local_78,(bool *)&local_58);
  uVar7 = local_98;
LAB_14d43b9bf:
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return uVar7;
}

// AddTimer @ 14d43e190

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

uint __thiscall
TraceServices::FTimingProfilerProvider::AddTimer
          (FTimingProfilerProvider *this,ETimingProfilerTimerType param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (Verse < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("uint32(TimerType) < uint32(ETimingProfilerTimerType::Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  this->bHasData[(ulonglong)param_1 - 0x10] = true;
  puVar1 = &(this->MetadataSpecMap).field_0x4c;
  iVar5 = *(int *)&(this->MetadataSpecMap).field_0x48;
  if (iVar5 == *(int *)puVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)&(this->MetadataSpecMap).field_0x40,(int *)puVar1)
    ;
  }
  *(int *)&(this->MetadataSpecMap).field_0x48 = iVar5 + 1;
  pvVar6 = (void *)(*(longlong *)&(this->MetadataSpecMap).field_0x40 + (longlong)iVar5 * 0x20);
  DefaultConstructItems<TraceServices::FTimingProfilerTimer,int>(pvVar6,1);
  iVar5 = *(int *)&(this->MetadataSpecMap).field_0x48;
  *(ETimingProfilerTimerType *)((longlong)pvVar6 + 0x1c) = param_1;
  uVar4 = iVar5 - 1;
  *(uint *)((longlong)pvVar6 + 0x14) = uVar4;
  return uVar4;
}

// AddTimer @ 14d43e260

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

uint __thiscall
TraceServices::FTimingProfilerProvider::AddTimer
          (FTimingProfilerProvider *this,ETimingProfilerTimerType param_1,
          TStringView<wchar_t> *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (Verse < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("uint32(TimerType) < uint32(ETimingProfilerTimerType::Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  this->bHasData[(ulonglong)param_1 - 0x10] = true;
  puVar1 = &(this->MetadataSpecMap).field_0x4c;
  iVar5 = *(int *)&(this->MetadataSpecMap).field_0x48;
  if (iVar5 == *(int *)puVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)&(this->MetadataSpecMap).field_0x40,(int *)puVar1)
    ;
  }
  *(int *)&(this->MetadataSpecMap).field_0x48 = iVar5 + 1;
  puVar7 = (undefined8 *)(*(longlong *)&(this->MetadataSpecMap).field_0x40 + (longlong)iVar5 * 0x20)
  ;
  DefaultConstructItems<TraceServices::FTimingProfilerTimer,int>(puVar7,1);
  *(int *)((longlong)puVar7 + 0x14) = *(int *)&(this->MetadataSpecMap).field_0x48 + -1;
  uVar6 = (**(code **)(*(longlong *)this->_padding_ + 200))((longlong *)this->_padding_,param_2);
  *puVar7 = uVar6;
  *(ETimingProfilerTimerType *)((longlong)puVar7 + 0x1c) = param_1;
  return *(uint *)((longlong)puVar7 + 0x14);
}

// AddTimer @ 14d43e350

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

uint __thiscall
TraceServices::FTimingProfilerProvider::AddTimer
          (FTimingProfilerProvider *this,ETimingProfilerTimerType param_1,
          TStringView<wchar_t> *param_2,wchar_t *param_3,uint param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (Verse < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("uint32(TimerType) < uint32(ETimingProfilerTimerType::Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                       ,0x90,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  this->bHasData[(ulonglong)param_1 - 0x10] = true;
  puVar1 = &(this->MetadataSpecMap).field_0x4c;
  iVar5 = *(int *)&(this->MetadataSpecMap).field_0x48;
  if (iVar5 == *(int *)puVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)&(this->MetadataSpecMap).field_0x40,(int *)puVar1)
    ;
  }
  *(int *)&(this->MetadataSpecMap).field_0x48 = iVar5 + 1;
  puVar7 = (undefined8 *)(*(longlong *)&(this->MetadataSpecMap).field_0x40 + (longlong)iVar5 * 0x20)
  ;
  DefaultConstructItems<TraceServices::FTimingProfilerTimer,int>(puVar7,1);
  *(int *)((longlong)puVar7 + 0x14) = *(int *)&(this->MetadataSpecMap).field_0x48 + -1;
  uVar6 = (**(code **)(*(longlong *)this->_padding_ + 200))((longlong *)this->_padding_,param_2);
  *puVar7 = uVar6;
  if (param_3 == (wchar_t *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*(longlong *)this->_padding_ + 0xd0))((longlong *)this->_padding_,param_3);
  }
  *(uint *)(puVar7 + 3) = *(uint *)(puVar7 + 3) ^ (*(uint *)(puVar7 + 3) ^ param_4) & 0xffffff;
  puVar7[1] = uVar6;
  *(ETimingProfilerTimerType *)((longlong)puVar7 + 0x1c) = param_1;
  return *(uint *)((longlong)puVar7 + 0x14);
}

// CreateAggregation @ 14d4472e0

ITable<TraceServices::FTimingProfilerAggregatedStats> * __thiscall
TraceServices::FTimingProfilerProvider::CreateAggregation
          (FTimingProfilerProvider *this,FCreateAggregationParams *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *pTVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ITable<TraceServices::FTimingProfilerAggregatedStats> *pIVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
  local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  int local_d0;
  int local_cc;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  uVar17 = 0;
  if (*(longlong *)&param_1->GpuQueueFilter != 0) {
    iVar14 = (this->GpuQueues).ArrayNum;
    pFVar15 = (this->GpuQueues).AllocatorInstance.Data;
    pFVar1 = pFVar15 + (longlong)iVar14 * 0x18;
    while( true ) {
      if ((this->GpuQueues).ArrayNum != iVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TraceServices::FGpuQueueInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar1) break;
      local_res20[0] = *(undefined4 *)pFVar15;
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->GpuQueueFilter);
      plVar3 = *(longlong **)&(param_1->GpuQueueFilter).field_0x28;
      pcVar4 = *(code **)&param_1->GpuQueueFilter;
      plVar13 = (longlong *)&(param_1->GpuQueueFilter).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar13 = plVar3;
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      cVar6 = (*pcVar4)(uVar10,local_res20);
      if (cVar6 != '\0') {
        uVar9 = *(uint *)(pFVar15 + 0x10);
        uVar8 = uVar17;
        if ((int)uVar9 < (this->Timelines).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
          return pIVar11;
        }
        local_108 = *(undefined8 *)
                     ((this->Timelines).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10);
        if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 <
             local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
          return pIVar11;
        }
        if (local_118.ArrayNum == local_118.ArrayMax) {
          local_118.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        *(undefined8 *)(local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8) =
             local_108;
        local_118.ArrayNum = local_118.ArrayNum + 1;
      }
      pFVar15 = pFVar15 + 0x18;
    }
  }
  if (param_1->bIncludeOldGpu1 != false) {
    if (((this->Timelines).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    local_100 = *(undefined8 *)(this->Timelines).AllocatorInstance.Data;
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100) &&
        ((FScriptContainerElement *)&local_100 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_100;
  }
  uVar9 = 1;
  if (param_1->bIncludeOldGpu2 != false) {
    if (((this->Timelines).ArrayNum < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    local_f8 = *(undefined8 *)((this->Timelines).AllocatorInstance.Data + 0x10);
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_f8;
  }
  if (param_1->bIncludeVerseSampling != false) {
    if (((this->Timelines).ArrayNum < 3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    local_f0 = *(undefined8 *)((this->Timelines).AllocatorInstance.Data + 0x20);
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_f0;
  }
  if (*(longlong *)&param_1->CpuThreadFilter != 0) {
    local_b8 = &(this->CpuThreadTimelineIndexMap).field_0x10;
    uVar8 = *(uint *)&(this->CpuThreadTimelineIndexMap).field_0x28;
    local_c8 = &this->CpuThreadTimelineIndexMap;
    local_a8 = 0;
    uStack_ac = uVar17;
    uStack_bc = uVar9;
    if (uVar8 != 0) {
      puVar19 = *(uint **)&(this->CpuThreadTimelineIndexMap).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)local_b8;
      }
      uVar21 = *puVar19;
      local_a8 = 0;
      uVar17 = 0;
      while (uVar21 == 0) {
        lVar12 = (longlong)(int)uVar17;
        local_a8 = local_a8 + 0x20;
        uVar17 = uVar17 + 1;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_14d447867;
        uVar21 = puVar19[lVar12 + 1];
      }
      uVar9 = -uVar21 & uVar21;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_d0 = (int)lVar12;
      uStack_ac = (local_a8 - 1) + local_d0;
      uStack_bc = uVar9;
      if ((int)uVar8 < (int)uStack_ac) {
LAB_14d447867:
        uStack_ac = uVar8;
        uStack_bc = uVar9;
      }
    }
    puVar20 = &(this->CpuThreadTimelineIndexMap).field_0x10;
    uVar9 = *(uint *)&(this->CpuThreadTimelineIndexMap).field_0x28;
    uStack_a4 = local_4c;
    iStack_a0 = *(int *)&(this->CpuThreadTimelineIndexMap).field_0x8 -
                *(int *)&(this->CpuThreadTimelineIndexMap).field_0x34;
    uVar21 = uVar9 & 0xffffffe0;
    uStack_b0 = 0xffffffff;
    TStack_90.CurrentBitIndex = uStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    TStack_90._padding_ = CONCAT44(uStack_bc,uVar17);
    iVar14 = (int)uVar9 >> 5;
    TStack_90._28_4_ = local_4c;
    TStack_90.BaseBitIndex = local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    uStack_c0 = uVar17;
    local_98 = local_c8;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if ((((int)uVar9 < 0) || ((int)uVar8 < (int)uVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    uVar17 = *(uint *)&(this->CpuThreadTimelineIndexMap).field_0x28;
    if (uVar9 != uVar17) {
      puVar18 = *(undefined1 **)&(this->CpuThreadTimelineIndexMap).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar20;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
      while (uVar9 == 0) {
        lVar12 = (longlong)iVar14;
        uVar21 = uVar21 + 0x20;
        iVar14 = iVar14 + 1;
        uVar9 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14d44796f;
        uVar9 = *(uint *)(puVar18 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_cc = (int)lVar12;
      uVar9 = local_cc + -1 + uVar21;
      if ((int)uVar17 < (int)uVar9) {
        uVar9 = uVar17;
      }
    }
LAB_14d44796f:
    while( true ) {
      pTVar5 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == uVar9) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
         (pTVar5 == &this->CpuThreadTimelineIndexMap)) break;
      puVar16 = (undefined4 *)((longlong)TStack_90.CurrentBitIndex * 0x10 + *(longlong *)pTVar5);
      local_d8[0] = *puVar16;
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CpuThreadFilter);
      plVar3 = *(longlong **)&(param_1->CpuThreadFilter).field_0x28;
      pcVar4 = *(code **)&param_1->CpuThreadFilter;
      plVar13 = (longlong *)&(param_1->CpuThreadFilter).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar13 = plVar3;
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      cVar6 = (*pcVar4)(uVar10,local_d8);
      if (cVar6 != '\0') {
        uVar17 = puVar16[1];
        uVar8 = 0;
        if ((int)uVar17 < (this->Timelines).ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
          return pIVar11;
        }
        local_e8 = *(undefined8 *)
                    ((this->Timelines).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10);
        if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 <
             local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
          return pIVar11;
        }
        if (local_118.ArrayNum == local_118.ArrayMax) {
          local_118.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        *(undefined8 *)(local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8) =
             local_e8;
        local_118.ArrayNum = local_118.ArrayNum + 1;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  pFVar15 = (param_1->CustomTimelines).AllocatorInstance.Data;
  iVar14 = (param_1->CustomTimelines).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar14 * 8;
  while( true ) {
    if ((param_1->CustomTimelines).ArrayNum != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar1) break;
    local_e0 = *(undefined8 *)pFVar15;
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
        ((FScriptContainerElement *)&local_e0 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    pFVar15 = pFVar15 + 8;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_e0;
  }
  pIVar11 = CreateAggregationInternal(this,&local_118,param_1);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return pIVar11;
}

// CreateAggregationInternal @ 14d447c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ITable<TraceServices::FTimingProfilerAggregatedStats> * __thiscall
TraceServices::FTimingProfilerProvider::CreateAggregationInternal
          (FTimingProfilerProvider *this,
          TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
          *param_1,FCreateAggregationParams *param_2)

{
  IAnalysisSession *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  ITable<TraceServices::FTimingProfilerAggregatedStats> *pIVar6;
  TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *pTVar7;
  TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *pTVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  longlong lVar15;
  ITable<TraceServices::FTimingProfilerAggregatedStats> IVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined1 auStackY_268 [32];
  FIdentityFunctor local_238 [8];
  TArray<TraceServices::FFrameData,TSizedDefaultAllocator<32>_> local_230;
  int local_220;
  uint local_218;
  uint uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_210;
  undefined4 local_208;
  uint uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  FName local_1f4;
  TArray<TraceServices::FFrameData,TSizedDefaultAllocator<32>_> *local_1e8;
  code *local_1e0;
  code **local_1d8;
  code ***local_1d0;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  longlong *local_1a0;
  uint uStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  uint local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TSharedPtr<TraceServices::FCancellationToken,1> local_140;
  code *local_130;
  TArray<TraceServices::FFrameData,TSizedDefaultAllocator<32>_> **local_128;
  TSharedPtr<TraceServices::FCancellationToken,1> local_120;
  TTableLayout<TraceServices::FTimingProfilerAggregatedStats> local_110;
  TTableLayout<TraceServices::FTimingProfilerAggregatedStats> local_f8 [2];
  undefined4 local_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_268;
  (**(code **)((longlong)*this->Session + 0x98))();
  pIVar1 = this->Session;
  local_b8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (param_2->FrameType == TraceFrameType_Count) {
    dVar26 = (double)(**(code **)((longlong)*pIVar1 + 0x30))(pIVar1);
    if (param_2->IntervalStart <= dVar26) {
      dVar25 = (double)(**(code **)((longlong)*this->Session + 0x30))();
      local_140.Object = (param_2->CancellationToken).Object;
      dVar26 = param_2->IntervalEnd;
      if (dVar25 <= param_2->IntervalEnd) {
        dVar26 = dVar25;
      }
      local_140.SharedReferenceCount.ReferenceController =
           (param_2->CancellationToken).SharedReferenceCount.ReferenceController;
      if (local_140.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTimelineStatistics::
      CreateAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,_TraceServices::FTimingProfilerProvider::CreateAggregationInternal_::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>
                (param_1,(<lambda_1>)this,param_2->IntervalStart,dVar26,&local_140,
                 (TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
                  *)local_b8);
    }
  }
  else {
    local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.ArrayNum = 0;
    local_230.ArrayMax = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::Name,"FrameProvider");
      _Init_thread_footer(&::_TSS0);
    }
    local_1f4 = ::Name;
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar1 + 0xf8))(pIVar1,&local_1f4);
    local_1e8 = &local_230;
    local_128 = &local_1e8;
    local_130 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l10::<lambda_2>,void,TraceServices::FFrame_const_&>
                ::Call;
    (**(code **)(*plVar5 + 0x28))
              (plVar5,param_2->FrameType,param_2->IntervalStart,param_2->IntervalEnd);
    if (0 < local_230.ArrayNum) {
      uVar23 = local_230.ArrayNum - 1;
      uVar12 = 0;
      if ((int)uVar23 < local_230.ArrayNum) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pIVar6 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar3)();
        return pIVar6;
      }
      dVar26 = *(double *)(local_230.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10 + 8);
      dVar25 = (double)(**(code **)((longlong)*this->Session + 0x30))();
      if (dVar26 <= dVar25) {
        dVar25 = dVar26;
      }
      uVar23 = local_230.ArrayNum - 1;
      uVar12 = 0;
      if ((int)uVar23 < local_230.ArrayNum) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pIVar6 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar3)();
        return pIVar6;
      }
      *(double *)(local_230.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10 + 8) = dVar25;
      local_120.Object = (param_2->CancellationToken).Object;
      dVar26 = this->RatioOfThreadsToUse;
      local_120.SharedReferenceCount.ReferenceController =
           (param_2->CancellationToken).SharedReferenceCount.ReferenceController;
      if (local_120.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTimelineStatistics::
      CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,_TraceServices::FTimingProfilerProvider::CreateAggregationInternal_::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>
                (param_1,(<lambda_1>)this,&local_230,&local_120,
                 (TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
                  *)local_b8,dVar26);
    }
    if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.AllocatorInstance.Data);
    }
  }
  pIVar6 = ::operator_new(0xc0);
  if (pIVar6 == (ITable<TraceServices::FTimingProfilerAggregatedStats> *)0x0) {
    pIVar6 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)0x0;
  }
  else {
    pTVar7 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::
             TTableLayout<TraceServices::FTimingProfilerAggregatedStats>
                       (&local_110,&this->AggregatedStatsTableLayout);
    pTVar8 = TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::
             TTableLayout<TraceServices::FTimingProfilerAggregatedStats>(local_f8,pTVar7);
    *pIVar6 = (ITable<TraceServices::FTimingProfilerAggregatedStats>)
              &___7__TTableBase_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__6B_;
    TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::
    TTableLayout<TraceServices::FTimingProfilerAggregatedStats>
              ((TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *)(pIVar6 + 1),pTVar8);
    DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar8->Columns).AllocatorInstance.Data,
               (pTVar8->Columns).ArrayNum);
    pFVar2 = (pTVar8->Columns).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *pIVar6 = (ITable<TraceServices::FTimingProfilerAggregatedStats>)
              &
              ___7__TTable_UFTimingProfilerAggregatedStats_TraceServices___0CAAAAA__TraceServices__6B_
    ;
    pIVar6[4] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)
                &___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar6 + 5),4000);
    pIVar6[10] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0xb] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0xc] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0xd] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x200000;
    pIVar6[0xe] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0xf] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0x10] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0x11] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)(pIVar6 + 4);
    pIVar6[0x12] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0x13] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0x14] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0x15] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    pIVar6[0x16] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x400;
    pIVar6[0x17] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0;
    DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar7->Columns).AllocatorInstance.Data,
               (pTVar7->Columns).ArrayNum);
    pFVar2 = (pTVar7->Columns).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  if (((param_2->CancellationToken).Object != (FCancellationToken *)0x0) &&
     (((param_2->CancellationToken).Object)->bCancel != (atomic<bool>)0x0)) {
LAB_14d448752:
    local_70 = 0;
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
    return pIVar6;
  }
  if (param_2->SortBy != TotalInclusiveTime) goto LAB_14d4483ad;
  local_1e0 = `TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l19::<lambda_4>
              ::<lambda_invoker_cdecl>;
  if (param_2->SortOrder == Descending) {
    local_1e0 = `TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l19::
                <lambda_3>::<lambda_invoker_cdecl>;
  }
  local_1d8 = &local_1e0;
  local_1d0 = &local_1d8;
  if (0 < local_b8._8_4_ - local_84) {
    TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::CompactStable((TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8);
    uVar10 = local_b8._0_8_;
    iVar22 = local_b8._8_4_ - local_84;
    if ((iVar22 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar3)();
      return pIVar6;
    }
    AlgoImpl::
    StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *)uVar10,iVar22,
               local_238[0],
               (FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>
                *)&local_1d0);
  }
  uVar12 = local_70;
  uVar14 = 0;
  uVar20 = (ulonglong)local_70;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
  }
  if (uVar12 != 0) {
    uVar23 = uVar12;
    if (uVar12 < 2) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_14d4481ae;
      }
    }
    else {
LAB_14d4481ae:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar23,4);
    }
    if (0 < (int)uVar12) {
      uVar19 = uVar14;
      do {
        FVar13.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_78.Data;
        }
        uVar9 = uVar19 & (longlong)(int)uVar12 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar13.Data + uVar9 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_70 != 0) {
    uStack_214 = 1;
    local_218 = 0;
    pTStack_210 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uStack_204 = 0;
    uStack_200 = 0;
    if (local_90 != 0) {
      puVar18 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar18 = local_98;
      }
      uVar12 = *puVar18;
      uVar20 = uVar14;
      while (uVar12 == 0) {
        uStack_200 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_200;
        iVar22 = (int)uVar14;
        local_218 = iVar22 + 1;
        uVar14 = (ulonglong)local_218;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_218)
        goto LAB_14d4482cf;
        uVar12 = (puVar18 + 1)[iVar22];
      }
      uStack_214 = -uVar12 & uVar12;
      uVar14 = (ulonglong)uStack_214 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_1f8 = (int)lVar15;
      uStack_204 = (uStack_200 - 1) + local_1f8;
      uVar14 = (ulonglong)uStack_204;
      if ((int)local_90 < (int)uStack_204) {
LAB_14d4482cf:
        uVar14 = (ulonglong)local_90;
        uStack_204 = local_90;
      }
    }
    local_208 = 0xffffffff;
    local_1c8 = (longlong *)local_b8;
    local_1c0._padding_ = CONCAT44(uStack_214,local_218);
    local_1c0.CurrentBitIndex = uStack_204;
    local_1c0.UnvisitedBitMask = 0xffffffff;
    local_1c0._28_4_ = uStack_1fc;
    local_1c0.BaseBitIndex = uStack_200;
    local_1c0.Array = pTStack_210;
    if ((int)uVar14 < (int)local_90) {
      do {
        lVar15 = *local_1c8;
        lVar21 = (longlong)(int)uVar14 * 0x70;
        uVar12 = ((uint)(*(ulonglong *)(lVar21 + lVar15) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar21 + lVar15) >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_70 - 1;
        *(uint *)(lVar21 + 0x6c + lVar15) = uVar12;
        FVar13.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_78.Data;
        }
        uVar20 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar21 + 0x68 + lVar15) = *(undefined4 *)(FVar13.Data + uVar20 * 4);
        *(int *)(FVar13.Data + uVar20 * 4) = (int)uVar14;
        local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
        uVar14 = (ulonglong)(uint)local_1c0.CurrentBitIndex;
      } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
    }
  }
LAB_14d4483ad:
  uVar12 = local_90;
  iVar22 = param_2->TableEntryLimit;
  uStack_198 = 0;
  uStack_194 = 1;
  local_180 = 0;
  uStack_184 = uStack_198;
  if (local_90 != 0) {
    puVar18 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar18 = local_98;
    }
    uVar23 = *puVar18;
    local_180 = 0;
    uStack_198 = 0;
    while (uVar23 == 0) {
      lVar15 = (longlong)(int)uStack_198;
      local_180 = local_180 + 0x20;
      uStack_198 = uStack_198 + 1;
      uStack_184 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_198)
      goto LAB_14d448431;
      uVar23 = (puVar18 + 1)[lVar15];
    }
    uStack_194 = -uVar23 & uVar23;
    uVar14 = (ulonglong)uStack_194 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_220 = (int)lVar15;
    uStack_184 = (local_180 - 1) + local_220;
    if ((int)local_90 < (int)uStack_184) {
      uStack_184 = local_90;
    }
  }
LAB_14d448431:
  local_1a0 = (longlong *)local_b8;
  uStack_17c = local_c4;
  local_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  iStack_178 = local_b8._8_4_ - local_84;
  uVar23 = local_90 & 0xffffffe0;
  uStack_188 = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_194,uStack_198);
  iVar17 = (int)local_90 >> 5;
  TStack_168._28_4_ = local_c4;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  bVar11 = (byte)local_90;
  local_170 = local_1a0;
  TStack_168.Array = local_190;
  if (((int)local_90 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pIVar6 = (ITable<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar3)();
    return pIVar6;
  }
  if (uVar12 != local_90) {
    puVar18 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar18 = local_98;
    }
    uVar12 = -1 << (bVar11 & 0x1f) & puVar18[iVar17];
    while (uVar12 == 0) {
      lVar15 = (longlong)iVar17;
      uVar23 = uVar23 + 0x20;
      iVar17 = iVar17 + 1;
      uVar12 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14d448540;
      uVar12 = (puVar18 + 1)[lVar15];
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar12 = (uVar23 - 1) + (int)lVar15;
    if ((int)local_90 < (int)uVar12) {
      uVar12 = local_90;
    }
  }
LAB_14d448540:
  do {
    plVar5 = local_170;
    if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
    }
    if (((TStack_168.CurrentBitIndex == uVar12) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar5 == (longlong *)local_b8)) goto LAB_14d448752;
    puVar24 = (undefined8 *)((longlong)TStack_168.CurrentBitIndex * 0x70 + *plVar5);
    if ((pIVar6[0x15] == (ITable<TraceServices::FTimingProfilerAggregatedStats>)0x0) ||
       (*(ITable<TraceServices::FTimingProfilerAggregatedStats> *)((longlong)pIVar6[0x15] + 8) ==
        pIVar6[0x16])) {
      iVar17 = *(int *)(pIVar6 + 0x13);
      if (iVar17 == *(int *)&pIVar6[0x13].field_0x4) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(pIVar6 + 0x12),
                            (int *)&pIVar6[0x13].field_0x4);
        *(int *)(pIVar6 + 0x13) = iVar17;
      }
      IVar16 = (ITable<TraceServices::FTimingProfilerAggregatedStats>)
               ((longlong)iVar17 * 0x10 + (longlong)pIVar6[0x12]);
      *(int *)(pIVar6 + 0x13) = iVar17 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>,int>
                ((void *)IVar16,1);
      pIVar6[0x15] = IVar16;
      pIVar6[0x14] = pIVar6[0x12];
      uVar10 = (**(code **)(*(longlong *)pIVar6[0x11] + 8))
                         (pIVar6[0x11],(longlong)pIVar6[0x16] * 0x68);
      *(undefined8 *)pIVar6[0x15] = uVar10;
    }
    pIVar6[0x17] = (ITable<TraceServices::FTimingProfilerAggregatedStats>)
                   ((longlong)pIVar6[0x17] + 1);
    lVar21 = *(longlong *)((longlong)pIVar6[0x15] + 8) * 0x68;
    lVar15 = *(longlong *)pIVar6[0x15];
    *(undefined8 *)(lVar21 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 8 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 0x10 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 0x18 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 0x20 + lVar15) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar21 + 0x28 + lVar15) = 0xffefffffffffffff;
    *(undefined8 *)(lVar21 + 0x30 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 0x38 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 0x40 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 0x48 + lVar15) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar21 + 0x50 + lVar15) = 0xffefffffffffffff;
    *(undefined8 *)(lVar21 + 0x58 + lVar15) = 0;
    *(undefined8 *)(lVar21 + 0x60 + lVar15) = 0;
    *(longlong *)((longlong)pIVar6[0x15] + 8) = *(longlong *)((longlong)pIVar6[0x15] + 8) + 1;
    *(undefined8 *)(lVar21 + lVar15) = *puVar24;
    *(undefined8 *)(lVar21 + 8 + lVar15) = puVar24[1];
    *(undefined8 *)(lVar21 + 0x10 + lVar15) = puVar24[2];
    *(undefined8 *)(lVar21 + 0x18 + lVar15) = puVar24[3];
    *(undefined8 *)(lVar21 + 0x20 + lVar15) = puVar24[4];
    *(undefined8 *)(lVar21 + 0x28 + lVar15) = puVar24[5];
    *(undefined8 *)(lVar21 + 0x30 + lVar15) = puVar24[6];
    *(undefined8 *)(lVar21 + 0x38 + lVar15) = puVar24[7];
    *(undefined8 *)(lVar21 + 0x40 + lVar15) = puVar24[8];
    *(undefined8 *)(lVar21 + 0x48 + lVar15) = puVar24[9];
    *(undefined8 *)(lVar21 + 0x50 + lVar15) = puVar24[10];
    *(undefined8 *)(lVar21 + 0x58 + lVar15) = puVar24[0xb];
    *(undefined8 *)(lVar21 + 0x60 + lVar15) = puVar24[0xc];
    if ((0 < iVar22) && (iVar22 = iVar22 + -1, iVar22 == 0)) goto LAB_14d448752;
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

// CreateButterfly @ 14d448800

ITimingProfilerButterfly * __thiscall
TraceServices::FTimingProfilerProvider::CreateButterfly
          (FTimingProfilerProvider *this,FCreateButterflyParams *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *pTVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ITimingProfilerButterfly *pIVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
  local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  int local_d0;
  int local_cc;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  uVar17 = 0;
  if (*(longlong *)&param_1->GpuQueueFilter != 0) {
    iVar14 = (this->GpuQueues).ArrayNum;
    pFVar15 = (this->GpuQueues).AllocatorInstance.Data;
    pFVar1 = pFVar15 + (longlong)iVar14 * 0x18;
    while( true ) {
      if ((this->GpuQueues).ArrayNum != iVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TraceServices::FGpuQueueInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar1) break;
      local_res20[0] = *(undefined4 *)pFVar15;
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->GpuQueueFilter);
      plVar3 = *(longlong **)&(param_1->GpuQueueFilter).field_0x28;
      pcVar4 = *(code **)&param_1->GpuQueueFilter;
      plVar13 = (longlong *)&(param_1->GpuQueueFilter).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar13 = plVar3;
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      cVar6 = (*pcVar4)(uVar10,local_res20);
      if (cVar6 != '\0') {
        uVar9 = *(uint *)(pFVar15 + 0x10);
        uVar8 = uVar17;
        if ((int)uVar9 < (this->Timelines).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
          return pIVar11;
        }
        local_108 = *(undefined8 *)
                     ((this->Timelines).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10);
        if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 <
             local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
          return pIVar11;
        }
        if (local_118.ArrayNum == local_118.ArrayMax) {
          local_118.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        *(undefined8 *)(local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8) =
             local_108;
        local_118.ArrayNum = local_118.ArrayNum + 1;
      }
      pFVar15 = pFVar15 + 0x18;
    }
  }
  if (param_1->bIncludeOldGpu1 != false) {
    if (((this->Timelines).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    local_100 = *(undefined8 *)(this->Timelines).AllocatorInstance.Data;
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100) &&
        ((FScriptContainerElement *)&local_100 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_100;
  }
  uVar9 = 1;
  if (param_1->bIncludeOldGpu2 != false) {
    if (((this->Timelines).ArrayNum < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    local_f8 = *(undefined8 *)((this->Timelines).AllocatorInstance.Data + 0x10);
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_f8;
  }
  if (param_1->bIncludeVerseSampling != false) {
    if (((this->Timelines).ArrayNum < 3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    local_f0 = *(undefined8 *)((this->Timelines).AllocatorInstance.Data + 0x20);
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_f0;
  }
  if (*(longlong *)&param_1->CpuThreadFilter != 0) {
    local_b8 = &(this->CpuThreadTimelineIndexMap).field_0x10;
    uVar8 = *(uint *)&(this->CpuThreadTimelineIndexMap).field_0x28;
    local_c8 = &this->CpuThreadTimelineIndexMap;
    local_a8 = 0;
    uStack_ac = uVar17;
    uStack_bc = uVar9;
    if (uVar8 != 0) {
      puVar19 = *(uint **)&(this->CpuThreadTimelineIndexMap).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)local_b8;
      }
      uVar21 = *puVar19;
      local_a8 = 0;
      uVar17 = 0;
      while (uVar21 == 0) {
        lVar12 = (longlong)(int)uVar17;
        local_a8 = local_a8 + 0x20;
        uVar17 = uVar17 + 1;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_14d448d87;
        uVar21 = puVar19[lVar12 + 1];
      }
      uVar9 = -uVar21 & uVar21;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_d0 = (int)lVar12;
      uStack_ac = (local_a8 - 1) + local_d0;
      uStack_bc = uVar9;
      if ((int)uVar8 < (int)uStack_ac) {
LAB_14d448d87:
        uStack_ac = uVar8;
        uStack_bc = uVar9;
      }
    }
    puVar20 = &(this->CpuThreadTimelineIndexMap).field_0x10;
    uVar9 = *(uint *)&(this->CpuThreadTimelineIndexMap).field_0x28;
    uStack_a4 = local_4c;
    iStack_a0 = *(int *)&(this->CpuThreadTimelineIndexMap).field_0x8 -
                *(int *)&(this->CpuThreadTimelineIndexMap).field_0x34;
    uVar21 = uVar9 & 0xffffffe0;
    uStack_b0 = 0xffffffff;
    TStack_90.CurrentBitIndex = uStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    TStack_90._padding_ = CONCAT44(uStack_bc,uVar17);
    iVar14 = (int)uVar9 >> 5;
    TStack_90._28_4_ = local_4c;
    TStack_90.BaseBitIndex = local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    uStack_c0 = uVar17;
    local_98 = local_c8;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if ((((int)uVar9 < 0) || ((int)uVar8 < (int)uVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    uVar17 = *(uint *)&(this->CpuThreadTimelineIndexMap).field_0x28;
    if (uVar9 != uVar17) {
      puVar18 = *(undefined1 **)&(this->CpuThreadTimelineIndexMap).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar20;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
      while (uVar9 == 0) {
        lVar12 = (longlong)iVar14;
        uVar21 = uVar21 + 0x20;
        iVar14 = iVar14 + 1;
        uVar9 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14d448e8f;
        uVar9 = *(uint *)(puVar18 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_cc = (int)lVar12;
      uVar9 = local_cc + -1 + uVar21;
      if ((int)uVar17 < (int)uVar9) {
        uVar9 = uVar17;
      }
    }
LAB_14d448e8f:
    while( true ) {
      pTVar5 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == uVar9) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
         (pTVar5 == &this->CpuThreadTimelineIndexMap)) break;
      puVar16 = (undefined4 *)((longlong)TStack_90.CurrentBitIndex * 0x10 + *(longlong *)pTVar5);
      local_d8[0] = *puVar16;
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CpuThreadFilter);
      plVar3 = *(longlong **)&(param_1->CpuThreadFilter).field_0x28;
      pcVar4 = *(code **)&param_1->CpuThreadFilter;
      plVar13 = (longlong *)&(param_1->CpuThreadFilter).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar13 = plVar3;
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      cVar6 = (*pcVar4)(uVar10,local_d8);
      if (cVar6 != '\0') {
        uVar17 = puVar16[1];
        uVar8 = 0;
        if ((int)uVar17 < (this->Timelines).ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
          return pIVar11;
        }
        local_e8 = *(undefined8 *)
                    ((this->Timelines).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10);
        if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 <
             local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
          return pIVar11;
        }
        if (local_118.ArrayNum == local_118.ArrayMax) {
          local_118.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        *(undefined8 *)(local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8) =
             local_e8;
        local_118.ArrayNum = local_118.ArrayNum + 1;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  pFVar15 = (param_1->CustomTimelines).AllocatorInstance.Data;
  iVar14 = (param_1->CustomTimelines).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar14 * 8;
  while( true ) {
    if ((param_1->CustomTimelines).ArrayNum != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar1) break;
    local_e0 = *(undefined8 *)pFVar15;
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
        ((FScriptContainerElement *)&local_e0 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pIVar11 = (ITimingProfilerButterfly *)(*pcVar4)();
      return pIVar11;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar12 = (longlong)local_118.ArrayNum;
    pFVar15 = pFVar15 + 8;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(undefined8 *)(local_118.AllocatorInstance.Data + lVar12 * 8) = local_e0;
  }
  pIVar11 = CreateButterflyInternal(this,&local_118,param_1);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return pIVar11;
}

// CreateButterflyInternal @ 14d449310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ITimingProfilerButterfly * __thiscall
TraceServices::FTimingProfilerProvider::CreateButterflyInternal
          (FTimingProfilerProvider *this,
          TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
          *param_1,FCreateButterflyParams *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FTimingProfilerProvider *pFVar3;
  ITimingProfilerButterfly *pIVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  undefined8 local_108;
  FTimingProfilerProvider *local_100;
  FTimingProfilerProvider **local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  FTimingProfilerProvider *local_d0;
  FCreateButterflyParams *local_c8;
  ForAnyElementType *local_c0;
  ForAnyElementType *local_b8;
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  undefined8 *local_a8;
  ITimingProfilerButterfly *local_a0;
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_100 = this;
  (**(code **)((longlong)*this->Session + 0x98))();
  pIVar4 = ::operator_new(0x158);
  if (pIVar4 == (ITimingProfilerButterfly *)0x0) {
    pIVar4 = (ITimingProfilerButterfly *)0x0;
  }
  else {
    *pIVar4 = (ITimingProfilerButterfly)&___7FTimingProfilerButterfly_TraceServices__6B_;
    pIVar4[1] = (ITimingProfilerButterfly)&___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar4 + 2),4000);
    pIVar4[10] = (ITimingProfilerButterfly)0x200000;
    pIVar4[7] = (ITimingProfilerButterfly)0x0;
    pIVar4[8] = (ITimingProfilerButterfly)0x0;
    pIVar4[9] = (ITimingProfilerButterfly)0x0;
    pIVar4[0xb] = (ITimingProfilerButterfly)0x0;
    pIVar4[0xc] = (ITimingProfilerButterfly)0x0;
    pIVar4[0xd] = (ITimingProfilerButterfly)0x0;
    pIVar4[0xe] = (ITimingProfilerButterfly)(pIVar4 + 1);
    pIVar4[0xf] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x10] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x11] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x12] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x13] = (ITimingProfilerButterfly)0x400;
    pIVar4[0x14] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x15] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x16] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x17] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x18] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x1b] = (ITimingProfilerButterfly)0x0;
    *(undefined4 *)(pIVar4 + 0x1c) = 0;
    *(undefined4 *)&pIVar4[0x1c].field_0x4 = 0x80;
    *(undefined4 *)(pIVar4 + 0x1d) = 0xffffffff;
    *(undefined4 *)&pIVar4[0x1d].field_0x4 = 0;
    pIVar4[0x1f] = (ITimingProfilerButterfly)0x0;
    *(undefined4 *)(pIVar4 + 0x20) = 0;
    pIVar4[0x21] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x22] = (ITimingProfilerButterfly)0x0;
    pIVar4[0x25] = (ITimingProfilerButterfly)0x0;
    *(undefined4 *)(pIVar4 + 0x26) = 0;
    *(undefined4 *)&pIVar4[0x26].field_0x4 = 0x80;
    *(undefined4 *)(pIVar4 + 0x27) = 0xffffffff;
    *(undefined4 *)&pIVar4[0x27].field_0x4 = 0;
    pIVar4[0x29] = (ITimingProfilerButterfly)0x0;
    *(undefined4 *)(pIVar4 + 0x2a) = 0;
  }
  TArray<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::AddDefaulted((TArray<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(pIVar4 + 0x15),(this->Timers).ArrayNum);
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x400,&local_f0,0,(int *)((longlong)&local_e8 + 4));
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,0x400,&local_110,0,(int *)((longlong)&local_108 + 4));
  pFVar3 = local_100;
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  local_98._0_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._52_4_ = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_d8 = 0;
  local_98._8_8_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (pFVar5 == pFVar1) break;
    local_c0 = &local_f0;
    local_b8 = &local_110;
    local_b0 = &local_98;
    local_a8 = &local_d8;
    local_f8 = &local_d0;
    local_d0 = pFVar3;
    local_100 = (FTimingProfilerProvider *)
                UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimingProfilerProvider::CreateButterflyInternal'::__l6::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
                ::Call;
    local_c8 = param_2;
    local_a0 = pIVar4;
    (**(code **)(**(longlong **)pFVar5 + 0x60))
              (*(longlong **)pFVar5,param_2->IntervalStart,param_2->IntervalEnd,&local_100);
    pFVar5 = pFVar5 + 8;
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerCallstackKey,TTuple<TraceServices::FTimingProfilerButterflyNode_*,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  return pIVar4;
}

// EditGpu2Timeline @ 14d4507e0

TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall TraceServices::FTimingProfilerProvider::EditGpu2Timeline(FTimingProfilerProvider *this)

{
  code *pcVar1;
  bool bVar2;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pTVar3;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  this->bHasData[2] = true;
  if ((this->Timelines).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           **)((this->Timelines).AllocatorInstance.Data + 0x10);
}

// EditGpuTimeline @ 14d450860

TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall TraceServices::FTimingProfilerProvider::EditGpuTimeline(FTimingProfilerProvider *this)

{
  code *pcVar1;
  bool bVar2;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pTVar3;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  this->bHasData[2] = true;
  if ((this->Timelines).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           **)(this->Timelines).AllocatorInstance.Data;
}

// EnumerateGpuFences @ 14d459910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FTimingProfilerProvider::EnumerateGpuFences
          (FTimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(TraceServices::FGpuFenceWrapper_const_&)>
          *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  uint uVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TFunctionRef<TraceServices::EEnumerateResult___cdecl(TraceServices::FGpuFenceWrapper_const_&)>
  *local_88;
  undefined1 local_80 [8];
  double *local_78;
  byte local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = param_4;
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x8 !=
      *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->GpuQueueIdToQueueIndexMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x10 +
                         *(longlong *)&this->GpuQueueIdToQueueIndexMap);
        if (*puVar6 == param_1) {
          puVar5 = puVar6 + 1;
          if (puVar6 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 == (uint *)0x0) {
            return;
          }
          uVar4 = *puVar5;
          iVar1 = (this->GpuQueueData).ArrayNum;
          uVar9 = 0;
          if ((int)uVar4 < iVar1) {
            uVar9 = ~uVar4 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (local_98 = (longlong)(int)uVar4, local_90 = (longlong)iVar1,
             bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar10 = 0;
          uVar9 = 0;
          pFVar16 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
          uVar4 = *(uint *)(pFVar16 + 8);
          if (0 < (int)*(uint *)(pFVar16 + 8)) {
            do {
              uVar12 = uVar4 >> 1;
              pdVar13 = (double *)(*(longlong *)pFVar16 + (longlong)(int)(uVar12 + uVar10) * 0x10);
              if (*pdVar13 <= param_2 && param_2 != *pdVar13) {
                uVar10 = uVar12 + uVar10 + (uVar4 & 1);
              }
              uVar4 = uVar12;
            } while (uVar12 != 0);
          }
          uVar4 = *(uint *)(pFVar16 + 0x18);
          if (0 < (int)uVar4) {
            do {
              iVar1 = (uVar4 >> 1) + uVar9;
              pdVar13 = (double *)(*(longlong *)(pFVar16 + 0x10) + (longlong)iVar1 * 0x18);
              if (*pdVar13 <= param_2 && param_2 != *pdVar13) {
                uVar9 = iVar1 + (uVar4 & 1);
              }
              uVar12 = uVar4 >> 1;
              uVar4 = uVar4 >> 1;
            } while (uVar12 != 0);
          }
          local_78 = (double *)0x0;
          local_70 = 0;
          lVar14 = (longlong)(int)uVar9 * 0x18;
          lVar15 = (longlong)(int)uVar10 << 4;
          do {
            pdVar13 = (double *)0x0;
            pdVar11 = pdVar13;
            if ((int)uVar10 < *(int *)(pFVar16 + 8)) {
              if ((int)uVar10 < 0) {
                local_98 = (longlong)(int)uVar10;
                local_90 = (longlong)*(int *)(pFVar16 + 8);
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (*(double *)(*(longlong *)pFVar16 + lVar15) <= param_3) {
                uVar4 = 0;
                if ((int)uVar10 < *(int *)(pFVar16 + 8)) {
                  uVar4 = ~uVar10 >> 0x1f;
                }
                if (uVar4 == 0) {
                  local_98 = (longlong)(int)uVar10;
                  local_90 = (longlong)*(int *)(pFVar16 + 8);
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                pdVar11 = (double *)((longlong)(int)uVar10 * 0x10 + *(longlong *)pFVar16);
              }
            }
            if ((int)uVar9 < *(int *)(pFVar16 + 0x18)) {
              if ((int)uVar9 < 0) {
                local_98 = (longlong)(int)uVar9;
                local_90 = (longlong)*(int *)(pFVar16 + 0x18);
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (*(double *)(lVar14 + *(longlong *)(pFVar16 + 0x10)) <= param_3) {
                uVar4 = 0;
                if ((int)uVar9 < *(int *)(pFVar16 + 0x18)) {
                  uVar4 = ~uVar9 >> 0x1f;
                }
                if (uVar4 == 0) {
                  local_98 = (longlong)(int)uVar9;
                  local_90 = (longlong)*(int *)(pFVar16 + 0x18);
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                pdVar13 = (double *)(*(longlong *)(pFVar16 + 0x10) + (longlong)(int)uVar9 * 0x18);
              }
            }
            if (pdVar11 == (double *)0x0) {
              if (pdVar13 == (double *)0x0) {
                return;
              }
              uVar8 = (ulonglong)local_70;
              local_80[0] = 1;
              if ((1 < uVar8) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TraceServices::FGpuSignalFence_const*___ptr64,TraceServices::FGpuWaitFence_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar8] !=
                  UE::Core::Private::TDestructorCaller<TraceServices::FGpuSignalFence_const_*>::
                  Destruct) {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TraceServices::FGpuSignalFence_const*___ptr64,TraceServices::FGpuWaitFence_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar8])(&local_78);
              }
              uVar9 = uVar9 + 1;
              lVar14 = lVar14 + 0x18;
              local_70 = 1;
              local_78 = pdVar13;
            }
            else {
              uVar8 = (ulonglong)local_70;
              if (pdVar13 == (double *)0x0) {
                local_80[0] = 0;
                if ((1 < uVar8) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                       ,0xd4,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TraceServices::FGpuSignalFence_const*___ptr64,TraceServices::FGpuWaitFence_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar8])(&local_78);
                uVar10 = uVar10 + 1;
                lVar15 = lVar15 + 0x10;
                local_70 = 0;
                local_78 = pdVar11;
              }
              else if (*pdVar13 < *pdVar11) {
                local_80[0] = 1;
                if ((1 < uVar8) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                       ,0xd4,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TraceServices::FGpuSignalFence_const*___ptr64,TraceServices::FGpuWaitFence_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar8] !=
                    UE::Core::Private::TDestructorCaller<TraceServices::FGpuSignalFence_const_*>::
                    Destruct) {
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TraceServices::FGpuSignalFence_const*___ptr64,TraceServices::FGpuWaitFence_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar8])(&local_78);
                }
                uVar9 = uVar9 + 1;
                local_70 = 1;
                lVar14 = lVar14 + 0x18;
                local_78 = pdVar13;
              }
              else {
                local_80[0] = 0;
                if ((1 < uVar8) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                       ,0xd4,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TraceServices::FGpuSignalFence_const*___ptr64,TraceServices::FGpuWaitFence_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar8] !=
                    UE::Core::Private::TDestructorCaller<TraceServices::FGpuWaitFence_const_*>::
                    Destruct) {
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TraceServices::FGpuSignalFence_const*___ptr64,TraceServices::FGpuWaitFence_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar8])(&local_78);
                }
                uVar10 = uVar10 + 1;
                local_70 = 0;
                lVar15 = lVar15 + 0x10;
                local_78 = pdVar11;
              }
            }
            (**(code **)local_88)(*(undefined8 *)&local_88->field_0x8,local_80);
          } while( true );
        }
        uVar4 = puVar6[2];
      } while (uVar4 != 0xffffffff);
    }
  }
  return;
}

// EnumerateGpuQueues @ 14d459e80

void __thiscall
TraceServices::FTimingProfilerProvider::EnumerateGpuQueues
          (FTimingProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FGpuQueueInfo_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)((longlong)*this->Session + 0x98))();
  iVar2 = (this->GpuQueues).ArrayNum;
  pFVar3 = (this->GpuQueues).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->GpuQueues).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FGpuQueueInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// EnumerateGpuSignalFences @ 14d459f20

void __thiscall
TraceServices::FTimingProfilerProvider::EnumerateGpuSignalFences
          (FTimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(TraceServices::FGpuSignalFence_const_&)>
          *param_4)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x8 !=
      *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GpuQueueIdToQueueIndexMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar7 = (uint *)((longlong)(int)uVar4 * 0x10 +
                              *(longlong *)&this->GpuQueueIdToQueueIndexMap), *puVar7 != param_1) {
        uVar4 = puVar7[2];
        if (uVar4 == 0xffffffff) {
          return;
        }
      }
      puVar10 = (uint *)0x0;
      puVar5 = puVar7 + 1;
      if (puVar7 == (uint *)0x0) {
        puVar5 = puVar10;
      }
      if (puVar5 != (uint *)0x0) {
        uVar4 = *puVar5;
        uVar9 = 0;
        if ((int)uVar4 < (this->GpuQueueData).ArrayNum) {
          uVar9 = ~uVar4 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
        uVar4 = *(uint *)(pFVar12 + 8);
        uVar9 = uVar4;
        if (0 < (int)uVar4) {
          do {
            uVar13 = uVar9 >> 1;
            iVar6 = uVar13 + (int)puVar10;
            pdVar1 = (double *)(*(longlong *)pFVar12 + (longlong)iVar6 * 0x10);
            if (*pdVar1 <= param_2 && param_2 != *pdVar1) {
              puVar10 = (uint *)(ulonglong)(iVar6 + (uVar9 & 1));
            }
            uVar9 = uVar13;
          } while (uVar13 != 0);
        }
        if ((int)puVar10 < (int)uVar4) {
          lVar11 = (longlong)(int)puVar10 << 4;
          do {
            uVar9 = (uint)puVar10;
            uVar4 = 0;
            if ((int)uVar9 < *(int *)(pFVar12 + 8)) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (param_3 < *(double *)(*(longlong *)pFVar12 + lVar11)) {
              return;
            }
            uVar4 = 0;
            if ((int)uVar9 < *(int *)(pFVar12 + 8)) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = (**(code **)param_4)
                              (*(undefined8 *)&param_4->field_0x8,
                               (longlong)(int)uVar9 * 0x10 + *(longlong *)pFVar12);
            if (iVar6 == 1) {
              return;
            }
            puVar10 = (uint *)(ulonglong)(uVar9 + 1);
            lVar11 = lVar11 + 0x10;
          } while ((int)(uVar9 + 1) < *(int *)(pFVar12 + 8));
        }
      }
    }
  }
  return;
}

// EnumerateGpuWaitFences @ 14d45a1a0

void __thiscall
TraceServices::FTimingProfilerProvider::EnumerateGpuWaitFences
          (FTimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(TraceServices::FGpuWaitFence_const_&)>
          *param_4)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x8 !=
      *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->GpuQueueIdToQueueIndexMap).field_0x38;
    }
    uVar5 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar5 != 0xffffffff) {
      while (puVar7 = (uint *)((longlong)(int)uVar5 * 0x10 +
                              *(longlong *)&this->GpuQueueIdToQueueIndexMap), *puVar7 != param_1) {
        uVar5 = puVar7[2];
        if (uVar5 == 0xffffffff) {
          return;
        }
      }
      puVar11 = (uint *)0x0;
      puVar6 = puVar7 + 1;
      if (puVar7 == (uint *)0x0) {
        puVar6 = puVar11;
      }
      if (puVar6 != (uint *)0x0) {
        uVar5 = *puVar6;
        uVar10 = 0;
        if ((int)uVar5 < (this->GpuQueueData).ArrayNum) {
          uVar10 = ~uVar5 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->GpuQueueData).AllocatorInstance.Data;
        lVar12 = (longlong)(int)uVar5 * 0x20;
        uVar5 = *(uint *)(pFVar2 + lVar12 + 0x18);
        uVar10 = uVar5;
        if (0 < (int)uVar5) {
          do {
            uVar13 = uVar10 >> 1;
            iVar8 = uVar13 + (int)puVar11;
            pdVar1 = (double *)(*(longlong *)(pFVar2 + lVar12 + 0x10) + (longlong)iVar8 * 0x18);
            if (*pdVar1 <= param_2 && param_2 != *pdVar1) {
              puVar11 = (uint *)(ulonglong)(iVar8 + (uVar10 & 1));
            }
            uVar10 = uVar13;
          } while (uVar13 != 0);
        }
        if ((int)puVar11 < (int)uVar5) {
          lVar14 = (longlong)(int)puVar11 * 0x18;
          do {
            uVar10 = (uint)puVar11;
            uVar5 = 0;
            if ((int)uVar10 < *(int *)(pFVar2 + lVar12 + 0x18)) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (param_3 < *(double *)(lVar14 + *(longlong *)(pFVar2 + lVar12 + 0x10))) {
              return;
            }
            uVar5 = 0;
            if ((int)uVar10 < *(int *)(pFVar2 + lVar12 + 0x18)) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = (**(code **)param_4)
                              (*(undefined8 *)&param_4->field_0x8,
                               *(longlong *)(pFVar2 + lVar12 + 0x10) + (longlong)(int)uVar10 * 0x18)
            ;
            if (iVar8 == 1) {
              return;
            }
            puVar11 = (uint *)(ulonglong)(uVar10 + 1);
            lVar14 = lVar14 + 0x18;
          } while ((int)(uVar10 + 1) < *(int *)(pFVar2 + lVar12 + 0x18));
        }
      }
    }
  }
  return;
}

// EnumerateResolvedGpuFences @ 14d45bd90

void __thiscall
TraceServices::FTimingProfilerProvider::EnumerateResolvedGpuFences
          (FTimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(unsigned_int,TraceServices::FGpuSignalFence_const_&,unsigned_int,TraceServices::FGpuWaitFence_const_&)>
          *param_4)

{
  int iVar1;
  double *pdVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint local_res8;
  undefined4 local_a0 [2];
  uint local_98 [2];
  uint local_90 [2];
  undefined4 local_88 [2];
  uint *local_80;
  ulonglong local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x8 !=
      *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->GpuQueueIdToQueueIndexMap).field_0x38;
    }
    uVar17 = *(uint *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 - 1U & param_1) * 4);
    if (uVar17 != 0xffffffff) {
      while (puVar9 = (uint *)((longlong)(int)uVar17 * 0x10 +
                              *(longlong *)&this->GpuQueueIdToQueueIndexMap), *puVar9 != param_1) {
        uVar17 = puVar9[2];
        if (uVar17 == 0xffffffff) {
          return;
        }
      }
      local_80 = puVar9 + 1;
      if (puVar9 == (uint *)0x0) {
        local_80 = (uint *)0x0;
      }
      if (local_80 == (uint *)0x0) {
        return;
      }
      uVar17 = *local_80;
      uVar14 = 0;
      if ((int)uVar17 < (this->GpuQueueData).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = 0;
      pFVar13 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x20;
      local_res8 = 0;
      uVar17 = *(uint *)(pFVar13 + 8);
      uVar14 = uVar17;
      if (0 < (int)uVar17) {
        do {
          uVar15 = uVar14 >> 1;
          pdVar2 = (double *)(*(longlong *)pFVar13 + (longlong)(int)(uVar15 + uVar12) * 0x10);
          if (*pdVar2 <= param_2 && param_2 != *pdVar2) {
            uVar12 = uVar15 + uVar12 + (uVar14 & 1);
          }
          uVar14 = uVar15;
          local_res8 = uVar12;
        } while (uVar15 != 0);
      }
      local_68 = pFVar13;
      if ((int)local_res8 < (int)uVar17) {
        lVar18 = (longlong)(int)local_res8 << 4;
        do {
          uVar17 = 0;
          if ((int)local_res8 < *(int *)(pFVar13 + 8)) {
            uVar17 = ~local_res8 >> 0x1f;
          }
          local_70 = lVar18;
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (param_3 < *(double *)(lVar18 + *(longlong *)pFVar13)) break;
          uVar17 = 0;
          if ((int)local_res8 < *(int *)(pFVar13 + 8)) {
            uVar17 = ~local_res8 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar20 = *(longlong *)pFVar13 + lVar18;
          local_78 = 0;
          local_60 = lVar20;
          if (0 < (int)local_res8) {
            uVar17 = 0;
            if ((int)(local_res8 - 1) < *(int *)(pFVar13 + 8)) {
              uVar17 = -local_res8 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_78 = *(ulonglong *)(*(longlong *)pFVar13 + -8 + lVar18);
          }
          uVar17 = 0;
          puVar9 = local_80;
          if ((this->GpuQueueData).ArrayNum != 0) {
            do {
              uVar5 = local_78;
              if (uVar17 != *puVar9) {
                uVar14 = 0;
                if ((int)uVar17 < (this->GpuQueueData).ArrayNum) {
                  uVar14 = ~uVar17 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar13 = (this->GpuQueueData).AllocatorInstance.Data;
                uVar15 = 0;
                lVar18 = (longlong)(int)uVar17 * 0x20;
                uVar14 = *(uint *)(pFVar13 + lVar18 + 0x18);
                uVar12 = uVar14;
                if (0 < (int)uVar14) {
                  do {
                    uVar16 = uVar12 >> 1;
                    if (*(ulonglong *)
                         (*(longlong *)(pFVar13 + lVar18 + 0x10) + 8 +
                         (longlong)(int)(uVar16 + uVar15) * 0x18) < uVar5) {
                      uVar15 = uVar16 + uVar15 + (uVar12 & 1);
                    }
                    uVar12 = uVar16;
                  } while (uVar16 != 0);
                }
                puVar9 = local_80;
                if ((int)uVar15 < (int)uVar14) {
                  lVar19 = (longlong)(int)uVar15 * 0x18;
                  do {
                    uVar12 = ~uVar15 >> 0x1f;
                    uVar14 = 0;
                    if ((int)uVar15 < *(int *)(pFVar13 + lVar18 + 0x18)) {
                      uVar14 = uVar12;
                    }
                    if ((uVar14 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    puVar9 = local_80;
                    if (*(uint *)(*(longlong *)(pFVar13 + lVar18 + 0x10) + 0x10 + lVar19) != param_1
                       ) break;
                    uVar14 = 0;
                    if ((int)uVar15 < *(int *)(pFVar13 + lVar18 + 0x18)) {
                      uVar14 = uVar12;
                    }
                    if ((uVar14 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    puVar9 = local_80;
                    if (*(ulonglong *)(lVar20 + 8) <
                        *(ulonglong *)(*(longlong *)(pFVar13 + lVar18 + 0x10) + 8 + lVar19)) break;
                    uVar14 = 0;
                    if ((int)uVar15 < *(int *)(pFVar13 + lVar18 + 0x18)) {
                      uVar14 = uVar12;
                    }
                    if ((uVar14 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((local_78 <
                         *(ulonglong *)(*(longlong *)(pFVar13 + lVar18 + 0x10) + 8 + lVar19)) ||
                       (*(longlong *)(lVar20 + 8) == 0)) {
                      uVar14 = 0;
                      if ((int)uVar17 < (this->GpuQueues).ArrayNum) {
                        uVar14 = ~uVar17 >> 0x1f;
                      }
                      if ((uVar14 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      uVar3 = *(undefined4 *)
                               ((this->GpuQueues).AllocatorInstance.Data +
                               (longlong)(int)uVar17 * 0x18);
                      uVar14 = 0;
                      if ((int)uVar15 < *(int *)(pFVar13 + lVar18 + 0x18)) {
                        uVar14 = uVar12;
                      }
                      if ((uVar14 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      lVar20 = local_60;
                      local_a0[0] = uVar3;
                      local_98[0] = param_1;
                      (**(code **)param_4)
                                (*(undefined8 *)&param_4->field_0x8,local_98,local_60,local_a0,
                                 *(longlong *)(pFVar13 + lVar18 + 0x10) +
                                 (longlong)(int)uVar15 * 0x18);
                    }
                    uVar15 = uVar15 + 1;
                    lVar19 = lVar19 + 0x18;
                    puVar9 = local_80;
                  } while ((int)uVar15 < *(int *)(pFVar13 + lVar18 + 0x18));
                }
              }
              uVar17 = uVar17 + 1;
              pFVar13 = local_68;
              lVar18 = local_70;
            } while (uVar17 < (uint)(this->GpuQueueData).ArrayNum);
          }
          local_res8 = local_res8 + 1;
          lVar18 = lVar18 + 0x10;
          local_70 = lVar18;
        } while ((int)local_res8 < *(int *)(pFVar13 + 8));
      }
      uVar14 = 0;
      uVar17 = *(uint *)(pFVar13 + 0x18);
      if (0 < (int)*(uint *)(pFVar13 + 0x18)) {
        do {
          iVar8 = (uVar17 >> 1) + uVar14;
          pdVar2 = (double *)(*(longlong *)(pFVar13 + 0x10) + (longlong)iVar8 * 0x18);
          if (*pdVar2 <= param_2 && param_2 != *pdVar2) {
            uVar14 = iVar8 + (uVar17 & 1);
          }
          uVar12 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar12 != 0);
      }
      iVar8 = *(int *)(pFVar13 + 0x18);
      if ((int)uVar14 < iVar8) {
        lVar18 = (longlong)(int)uVar14 * 0x18;
        while( true ) {
          uVar17 = 0;
          if ((int)uVar14 < iVar8) {
            uVar17 = ~uVar14 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (param_3 < *(double *)(lVar18 + *(longlong *)(pFVar13 + 0x10))) break;
          uVar17 = 0;
          if ((int)uVar14 < *(int *)(pFVar13 + 0x18)) {
            uVar17 = ~uVar14 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar20 = *(longlong *)(pFVar13 + 0x10) + lVar18;
          if (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x8 !=
              *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x34) {
            puVar10 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x40;
            puVar11 = &(this->GpuQueueIdToQueueIndexMap).field_0x38;
            if (puVar10 != (undefined1 *)0x0) {
              puVar11 = puVar10;
            }
            uVar17 = *(uint *)(puVar11 +
                              (ulonglong)
                              (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 - 1U &
                              *(uint *)(lVar20 + 0x10)) * 4);
            if (uVar17 != 0xffffffff) {
              do {
                puVar9 = (uint *)((longlong)(int)uVar17 * 0x10 +
                                 *(longlong *)&this->GpuQueueIdToQueueIndexMap);
                if (*puVar9 == *(uint *)(lVar20 + 0x10)) {
                  puVar7 = puVar9 + 1;
                  if (puVar9 == (uint *)0x0) {
                    puVar7 = (uint *)0x0;
                  }
                  if (puVar7 != (uint *)0x0) {
                    uVar17 = *puVar7;
                    uVar12 = 0;
                    if ((int)uVar17 < (this->GpuQueueData).ArrayNum) {
                      uVar12 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pFVar13 = (this->GpuQueueData).AllocatorInstance.Data;
                    lVar19 = (longlong)(int)uVar17 * 0x20;
                    iVar8 = 0;
                    uVar17 = *(uint *)(pFVar13 + lVar19 + 8);
                    if (0 < (int)uVar17) {
                      uVar12 = uVar17;
                      do {
                        iVar1 = (uVar12 >> 1) + iVar8;
                        if (*(ulonglong *)
                             (*(longlong *)(pFVar13 + lVar19) + 8 + (longlong)iVar1 * 0x10) <
                            *(ulonglong *)(lVar20 + 8)) {
                          iVar8 = iVar1 + (uVar12 & 1);
                        }
                        uVar15 = uVar12 >> 1;
                        uVar12 = uVar12 >> 1;
                      } while (uVar15 != 0);
                    }
                    if (iVar8 < (int)uVar17) {
                      if ((iVar8 < 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      local_88[0] = *(undefined4 *)(lVar20 + 0x10);
                      local_90[0] = param_1;
                      (**(code **)param_4)
                                (*(undefined8 *)&param_4->field_0x8,local_88,
                                 (longlong)iVar8 * 0x10 + *(longlong *)(pFVar13 + lVar19),local_90,
                                 lVar20);
                    }
                    uVar14 = uVar14 + 1;
                    lVar18 = lVar18 + 0x18;
                    pFVar13 = local_68;
                  }
                  break;
                }
                uVar17 = puVar9[2];
              } while (uVar17 != 0xffffffff);
            }
          }
          iVar8 = *(int *)(pFVar13 + 0x18);
          if (iVar8 <= (int)uVar14) {
            return;
          }
        }
      }
    }
  }
  return;
}

// EnumerateTimelines @ 14d45d880

void __thiscall
TraceServices::FTimingProfilerProvider::EnumerateTimelines
          (FTimingProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_&)>
          *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)((longlong)*this->Session + 0x98))();
  iVar1 = (this->Timelines).ArrayNum;
  pFVar2 = (this->Timelines).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Timelines).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,*(undefined8 *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetCpuThreadEditableTimeline @ 14d4645e0

IEditableTimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::FTimingProfilerProvider::GetCpuThreadEditableTimeline
          (FTimingProfilerProvider *this,uint param_1)

{
  int *piVar1;
  undefined1 *this_00;
  TArray<TraceServices::FTimingProfilerTimer,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ILinearAllocator *pIVar8;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  uint local_res8 [2];
  uint local_res10 [2];
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_18;
  
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  this_00 = &(this->GpuQueueIdToQueueIndexMap).field_0x40;
  if (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 !=
      *(int *)&(this->CpuThreadTimelineIndexMap).field_0x24) {
    puVar13 = *(undefined1 **)&(this->CpuThreadTimelineIndexMap).field_0x30;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->CpuThreadTimelineIndexMap).field_0x28;
    }
    uVar6 = *(uint *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->CpuThreadTimelineIndexMap).field_0x38 - 1U & local_res10[0]) *
                     4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)this_00);
        if (*puVar11 == local_res10[0]) {
          puVar10 = puVar11 + 1;
          if (puVar11 == (uint *)0x0) {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            uVar6 = *puVar10;
            uVar12 = 0;
            if ((int)uVar6 < (this->Timers).ArrayNum) {
              uVar12 = ~uVar6 >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                pIVar9 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar4)();
                return pIVar9;
              }
            }
            return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)
                   (*(longlong *)
                     ((this->Timers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10) + 8);
          }
          break;
        }
        uVar6 = puVar11[2];
      } while (uVar6 != 0xffffffff);
    }
  }
  pIVar8 = (ILinearAllocator *)(**(code **)(*(longlong *)this->_padding_ + 0xb8))();
  MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
            (&local_18,pIVar8);
  local_res8[0] = (this->Timers).ArrayNum;
  TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  ::Emplace<unsigned_int_const_&,unsigned_int_const_&>
            ((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
              *)this_00,local_res10,local_res8);
  pTVar2 = &this->Timers;
  pTVar3 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
            *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= &local_18) && (&local_18 < pTVar3 + (this->Timers).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar9 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar4)();
      return pIVar9;
    }
  }
  iVar7 = (this->Timers).ArrayNum;
  piVar1 = &(this->Timers).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  (this->Timers).ArrayNum = iVar7 + 1;
  *(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)pFVar14 = local_18.Object;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_18.SharedReferenceCount.ReferenceController
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined1 *)&(this->AggregatedStatsTableLayout).Columns.ArrayNum = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)&(local_18.Object)->_padding_;
}

// GetCpuThreadTimelineIndex @ 14d4648c0

bool __thiscall
TraceServices::FTimingProfilerProvider::GetCpuThreadTimelineIndex
          (FTimingProfilerProvider *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->CpuThreadTimelineIndexMap).field_0x8 !=
      *(int *)&(this->CpuThreadTimelineIndexMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CpuThreadTimelineIndexMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CpuThreadTimelineIndexMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->CpuThreadTimelineIndexMap).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 +
                         *(longlong *)&this->CpuThreadTimelineIndexMap);
        if (*puVar2 == param_1) {
          puVar3 = puVar2 + 1;
          if (puVar2 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return false;
          }
          *param_2 = *puVar3;
          return true;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  return false;
}

// GetEditableMetadata @ 14d4651a0

TArrayView<unsigned_char,int> * __thiscall
TraceServices::FTimingProfilerProvider::GetEditableMetadata
          (FTimingProfilerProvider *this,TArrayView<unsigned_char,int> *__return_storage_ptr__,
          uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<unsigned_char,int> *pTVar5;
  uint uVar6;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((int)param_1 < 0) {
    uVar6 = ~param_1;
    if (uVar6 < *(uint *)&this->Session) {
      uVar4 = 0;
      if ((int)uVar6 < *(int *)&this->Session) {
        uVar4 = param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
        return pTVar5;
      }
      iVar1 = *(int *)(this->_padding_ + 8 + (ulonglong)uVar6 * 0x18);
      __return_storage_ptr__->DataPtr = *(uchar **)(this->_padding_ + (ulonglong)uVar6 * 0x18);
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
        return pTVar5;
      }
      __return_storage_ptr__->ArrayNum = iVar1;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGpu2TimelineIndex @ 14d467e00

bool __thiscall
TraceServices::FTimingProfilerProvider::GetGpu2TimelineIndex
          (FTimingProfilerProvider *this,uint *param_1)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  *param_1 = 1;
  return true;
}

// GetGpuQueueEditableTimeline @ 14d467e40

IEditableTimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::FTimingProfilerProvider::GetGpuQueueEditableTimeline
          (FTimingProfilerProvider *this,uint param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((this->GpuQueueData).ArrayNum != *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x24) {
    puVar9 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x30;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->GpuQueueIdToQueueIndexMap).field_0x28;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x38 - 1U & param_1)
                              * 4);
    if (iVar5 != -1) {
      do {
        pFVar8 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
        if (*(uint *)pFVar8 == param_1) {
          pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(pFVar8 + 4);
          if (pFVar8 == (FScriptContainerElement *)0x0) {
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
          }
          if (pIVar6 == (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0) {
            return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
          }
          if ((*(uint *)this->bHasData <= *(uint *)pIVar6) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("*FoundQueueIndex < (uint32)GpuQueues.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                                 ,0x2ef,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          uVar1 = *(uint *)pIVar6;
          uVar7 = 0;
          if ((int)uVar1 < *(int *)this->bHasData) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          uVar1 = *(uint *)((longlong)this->RatioOfThreadsToUse + 0x10 + (longlong)(int)uVar1 * 0x18
                           );
          if (((uint)(this->Timers).ArrayNum <= uVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TimelineIndex < (uint32)Timelines.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                                 ,0x2f1,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          uVar7 = 0;
          if ((int)uVar1 < (this->Timers).ArrayNum) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          lVar2 = *(longlong *)((this->Timers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10)
          ;
          pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(lVar2 + 8);
          if (lVar2 == 0) {
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
          }
          return pIVar6;
        }
        iVar5 = *(int *)(pFVar8 + 8);
      } while (iVar5 != -1);
    }
  }
  return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
}

// GetGpuQueueTimelineIndex @ 14d468030

bool __thiscall
TraceServices::FTimingProfilerProvider::GetGpuQueueTimelineIndex
          (FTimingProfilerProvider *this,uint param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x8 !=
      *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GpuQueueIdToQueueIndexMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x10 +
                         *(longlong *)&this->GpuQueueIdToQueueIndexMap);
        if (*puVar6 == param_1) {
          puVar5 = puVar6 + 1;
          if (puVar6 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 == (uint *)0x0) {
            return false;
          }
          uVar4 = *puVar5;
          uVar7 = 0;
          if ((int)uVar4 < (this->GpuQueues).ArrayNum) {
            uVar7 = ~uVar4 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          *param_2 = *(uint *)((this->GpuQueues).AllocatorInstance.Data +
                              (longlong)(int)uVar4 * 0x18 + 0x10);
          return true;
        }
        uVar4 = puVar6[2];
      } while (uVar4 != 0xffffffff);
    }
  }
  return false;
}

// GetGpuQueueWorkEditableTimeline @ 14d468150

IEditableTimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::FTimingProfilerProvider::GetGpuQueueWorkEditableTimeline
          (FTimingProfilerProvider *this,uint param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((this->GpuQueueData).ArrayNum != *(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x24) {
    puVar9 = *(undefined1 **)&(this->GpuQueueIdToQueueIndexMap).field_0x30;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->GpuQueueIdToQueueIndexMap).field_0x28;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->GpuQueueIdToQueueIndexMap).field_0x38 - 1U & param_1)
                              * 4);
    if (iVar5 != -1) {
      do {
        pFVar8 = (this->GpuQueueData).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
        if (*(uint *)pFVar8 == param_1) {
          pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(pFVar8 + 4);
          if (pFVar8 == (FScriptContainerElement *)0x0) {
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
          }
          if (pIVar6 == (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0) {
            return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
          }
          if ((*(uint *)this->bHasData <= *(uint *)pIVar6) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("*FoundQueueIndex < (uint32)GpuQueues.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                                 ,0x2ff,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          uVar1 = *(uint *)pIVar6;
          uVar7 = 0;
          if ((int)uVar1 < *(int *)this->bHasData) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          uVar1 = *(uint *)((longlong)this->RatioOfThreadsToUse + 0x14 + (longlong)(int)uVar1 * 0x18
                           );
          if (((uint)(this->Timers).ArrayNum <= uVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TimelineIndex < (uint32)Timelines.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                                 ,0x301,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          uVar7 = 0;
          if ((int)uVar1 < (this->Timers).ArrayNum) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar3)();
            return pIVar6;
          }
          lVar2 = *(longlong *)((this->Timers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10)
          ;
          pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(lVar2 + 8);
          if (lVar2 == 0) {
            pIVar6 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
          }
          return pIVar6;
        }
        iVar5 = *(int *)(pFVar8 + 8);
      } while (iVar5 != -1);
    }
  }
  return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
}

// GetGpuTimelineIndex @ 14d468340

bool __thiscall
TraceServices::FTimingProfilerProvider::GetGpuTimelineIndex
          (FTimingProfilerProvider *this,uint *param_1)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  *param_1 = 0;
  return true;
}

// GetMetadata @ 14d469500

TArrayView<unsigned_char_const_,int> * __thiscall
TraceServices::FTimingProfilerProvider::GetMetadata
          (FTimingProfilerProvider *this,
          TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  uint uVar6;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((int)param_1 < 0) {
    uVar1 = (this->Metadatas).ArrayNum;
    uVar6 = ~param_1;
    if (uVar6 < uVar1) {
      uVar4 = 0;
      if ((int)uVar6 < (int)uVar1) {
        uVar4 = param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
      TArrayView<unsigned_char_const_,int>::
      TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 ((this->Metadatas).AllocatorInstance.Data + (ulonglong)uVar6 * 0x18));
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMetadata`adjustor{8}' @ 14d4695bc

/* [thunk]:public: virtual class TArrayView<unsigned char const ,int> __cdecl
   TraceServices::FTimingProfilerProvider::GetMetadata`adjustor{8}' (unsigned int)const __ptr64 */

TArrayView<unsigned_char_const_,int> * __thiscall
TraceServices::FTimingProfilerProvider::GetMetadata_adjustor_8__
          (FTimingProfilerProvider *this,
          TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,uint param_1)

{
  TArrayView<unsigned_char_const_,int> *pTVar1;
  
  pTVar1 = GetMetadata((FTimingProfilerProvider *)&this[-1].CpuThreadTimelineIndexMap.field_0x48,
                       __return_storage_ptr__,param_1);
  return pTVar1;
}

// GetMetadataSpec @ 14d469690

FMetadataSpec * __thiscall
TraceServices::FTimingProfilerProvider::GetMetadataSpec(FTimingProfilerProvider *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetadataSpec *pFVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar1 = (this->MetadataSpecs).ArrayNum;
  if (uVar1 <= param_1) {
    return (FMetadataSpec *)0x0;
  }
  uVar4 = 0;
  if ((int)param_1 < (int)uVar1) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetadataSpec *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FMetadataSpec *)
         ((this->MetadataSpecs).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
}

// GetOriginalTimerIdFromMetadata @ 14d46b4f0

uint __thiscall
TraceServices::FTimingProfilerProvider::GetOriginalTimerIdFromMetadata
          (FTimingProfilerProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (-1 < (int)param_1) {
    return param_1;
  }
  uVar4 = (this->Metadatas).ArrayNum;
  uVar3 = 0;
  uVar5 = ~param_1;
  if (uVar5 < uVar4) {
    uVar3 = 0;
    if ((int)uVar5 < (int)uVar4) {
      uVar3 = param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    uVar3 = *(uint *)((this->Metadatas).AllocatorInstance.Data + (ulonglong)uVar5 * 0x18 + 0x10);
  }
  return uVar3;
}

// GetOriginalTimerIdFromMetadata`adjustor{8}' @ 14d46b594

/* [thunk]:public: virtual unsigned int __cdecl
   TraceServices::FTimingProfilerProvider::GetOriginalTimerIdFromMetadata`adjustor{8}' (unsigned
   int)const __ptr64 */

uint __thiscall
TraceServices::FTimingProfilerProvider::GetOriginalTimerIdFromMetadata_adjustor_8__
          (FTimingProfilerProvider *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = GetOriginalTimerIdFromMetadata
                    ((FTimingProfilerProvider *)&this[-1].CpuThreadTimelineIndexMap.field_0x48,
                     param_1);
  return uVar1;
}

// GetRatioOfThreadsToUse @ 14d46c210

double __thiscall
TraceServices::FTimingProfilerProvider::GetRatioOfThreadsToUse(FTimingProfilerProvider *this)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  return this->RatioOfThreadsToUse;
}

// GetReadProvider @ 14d46c260

ITimingProfilerProvider * __thiscall
TraceServices::FTimingProfilerProvider::GetReadProvider(FTimingProfilerProvider *this)

{
  return (ITimingProfilerProvider *)&this[-1].CpuThreadTimelineIndexMap.field_0x40;
}

// GetTimelineCount @ 14d46e510

uint __thiscall
TraceServices::FTimingProfilerProvider::GetTimelineCount(FTimingProfilerProvider *this)

{
  return (this->Timelines).ArrayNum;
}

// GetTimer @ 14d46e5d0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FTimingProfilerTimer * __thiscall
TraceServices::FTimingProfilerProvider::GetTimer(FTimingProfilerProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTimingProfilerTimer *pFVar4;
  
  if ((int)param_1 < 0) {
    uVar3 = 0;
    if ((int)~param_1 < *(int *)&(this->Metadatas).AllocatorInstance.Data) {
      uVar3 = param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTimingProfilerTimer *)(*pcVar1)();
        return pFVar4;
      }
    }
    param_1 = *(uint *)(this->Session + (ulonglong)~param_1 * 3 + 2);
  }
  if (param_1 < *(uint *)&(this->Timers).AllocatorInstance.Data) {
    return (FTimingProfilerTimer *)
           ((ulonglong)param_1 * 0x20 + *(longlong *)&(this->MetadataSpecMap).field_0x48);
  }
  return (FTimingProfilerTimer *)0x0;
}

// GetTimerCount @ 14d46e670

uint __thiscall TraceServices::FTimingProfilerProvider::GetTimerCount(FTimingProfilerProvider *this)

{
  return *(uint *)&(this->Timers).AllocatorInstance.Data;
}

// GetVerseEditableTimeline @ 14d471ad0

IEditableTimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::FTimingProfilerProvider::GetVerseEditableTimeline(FTimingProfilerProvider *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar4;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((this->Timers).ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(*pcVar2)();
      return pIVar4;
    }
  }
  lVar1 = *(longlong *)((this->Timers).AllocatorInstance.Data + 0x20);
  pIVar4 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)(lVar1 + 8);
  if (lVar1 == 0) {
    pIVar4 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
  }
  return pIVar4;
}

// GetVerseTimelineIndex @ 14d471b60

bool __thiscall
TraceServices::FTimingProfilerProvider::GetVerseTimelineIndex
          (FTimingProfilerProvider *this,uint *param_1)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  *param_1 = 2;
  return true;
}

// HasCpuTiming @ 14d471ba0

bool __thiscall TraceServices::FTimingProfilerProvider::HasCpuTiming(FTimingProfilerProvider *this)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  return this->bHasData[0];
}

// HasGpuTiming @ 14d471d20

bool __thiscall TraceServices::FTimingProfilerProvider::HasGpuTiming(FTimingProfilerProvider *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (this->bHasData[2] == false) {
    if ((this->Timelines).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    lVar4 = (**(code **)(**(longlong **)(this->Timelines).AllocatorInstance.Data + 0x10))();
    if (lVar4 == 0) {
      if ((this->Timelines).ArrayNum < 2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      lVar4 = (**(code **)(**(longlong **)((this->Timelines).AllocatorInstance.Data + 0x10) + 0x10))
                        ();
      if (lVar4 == 0) {
        return false;
      }
    }
  }
  return true;
}

// HasVerseTiming @ 14d471e20

bool __thiscall
TraceServices::FTimingProfilerProvider::HasVerseTiming(FTimingProfilerProvider *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (this->bHasData[3] == false) {
    if ((this->Timelines).ArrayNum < 3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    lVar4 = (**(code **)(**(longlong **)((this->Timelines).AllocatorInstance.Data + 0x20) + 0x10))()
    ;
    if (lVar4 == 0) {
      return false;
    }
  }
  return true;
}

// ReadTimeline @ 14d4826c0

bool __thiscall
TraceServices::FTimingProfilerProvider::ReadTimeline
          (FTimingProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_&)>
          *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar1 = (this->Timelines).ArrayNum;
  if (uVar1 <= param_1) {
    return false;
  }
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
  (**(code **)param_2)
            (*(undefined8 *)&param_2->field_0x8,
             *(undefined8 *)
              ((this->Timelines).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10));
  return true;
}

// ReadTimers @ 14d482780

void __thiscall
TraceServices::FTimingProfilerProvider::ReadTimers
          (FTimingProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::ITimingProfilerTimerReader_const_&)> *param_1)

{
  (**(code **)((longlong)*this->Session + 0x98))();
                    /* WARNING: Could not recover jumptable at 0x00014d4827b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&this->_padding_);
  return;
}

// SetMetadata @ 14d489f80

void __thiscall
TraceServices::FTimingProfilerProvider::SetMetadata
          (FTimingProfilerProvider *this,uint param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((int)param_1 < 0) {
    uVar4 = ~param_1;
    if (uVar4 < *(uint *)&this->Session) {
      uVar3 = 0;
      if ((int)uVar4 < *(int *)&this->Session) {
        uVar3 = param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 (this->_padding_ + (ulonglong)uVar4 * 0x18),param_2);
    }
  }
  return;
}

// SetMetadata @ 14d48a030

void __thiscall
TraceServices::FTimingProfilerProvider::SetMetadata
          (FTimingProfilerProvider *this,uint param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,uint param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if ((int)param_1 < 0) {
    uVar5 = ~param_1;
    if (uVar5 < *(uint *)&this->Session) {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&this->Session) {
        uVar4 = param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = this->_padding_;
      *(uint *)(lVar1 + 0x10 + (ulonglong)uVar5 * 0x18) = param_3;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 (lVar1 + (ulonglong)uVar5 * 0x18),param_2);
    }
  }
  return;
}

// SetMetadataSpec @ 14d48a110

void __thiscall
TraceServices::FTimingProfilerProvider::SetMetadataSpec
          (FTimingProfilerProvider *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (param_1 < *(uint *)&(this->MetadataSpecMap).field_0x48) {
    uVar3 = 0;
    if ((int)param_1 < *(int *)&(this->MetadataSpecMap).field_0x48) {
      uVar3 = ~param_1 >> 0x1f;
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
    *(uint *)((longlong)(int)param_1 * 0x20 + 0x10 +
             *(longlong *)&(this->MetadataSpecMap).field_0x40) = param_2;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9185929053134126870>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                       ,0xea,"TimerId < uint32(Timers.Num())");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetRatioOfThreadsToUse @ 14d48b030

void __thiscall
TraceServices::FTimingProfilerProvider::SetRatioOfThreadsToUse
          (FTimingProfilerProvider *this,double param_1)

{
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  (this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data =
       (FScriptContainerElement *)param_1;
  return;
}

// SetTimerLocation @ 14d48b890

void __thiscall
TraceServices::FTimingProfilerProvider::SetTimerLocation
          (FTimingProfilerProvider *this,uint param_1,wchar_t *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (param_1 < *(uint *)&(this->MetadataSpecMap).field_0x48) {
    uVar4 = 0;
    uVar3 = 0;
    if ((int)param_1 < *(int *)&(this->MetadataSpecMap).field_0x48) {
      uVar3 = ~param_1 >> 0x1f;
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
    lVar5 = (longlong)(int)param_1 * 0x20 + *(longlong *)&(this->MetadataSpecMap).field_0x40;
    if (param_2 != (wchar_t *)0x0) {
      uVar4 = (**(code **)(*(longlong *)this->_padding_ + 0xd0))
                        ((longlong *)this->_padding_,param_2);
    }
    *(undefined8 *)(lVar5 + 8) = uVar4;
    *(uint *)(lVar5 + 0x18) =
         *(uint *)(lVar5 + 0x18) ^ (*(uint *)(lVar5 + 0x18) ^ param_3) & 0xffffff;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9185929053134126892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                       ,0xd4,"TimerId < uint32(Timers.Num())");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetTimerName @ 14d48b9c0

void __thiscall
TraceServices::FTimingProfilerProvider::SetTimerName
          (FTimingProfilerProvider *this,uint param_1,TStringView<wchar_t> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (param_1 < *(uint *)&(this->MetadataSpecMap).field_0x48) {
    uVar4 = 0;
    if ((int)param_1 < *(int *)&(this->MetadataSpecMap).field_0x48) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)&(this->MetadataSpecMap).field_0x40;
    uVar5 = (**(code **)(*(longlong *)this->_padding_ + 200))((longlong *)this->_padding_,param_2);
    *(undefined8 *)((longlong)(int)param_1 * 0x20 + lVar1) = uVar5;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9185929053134126944>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                       ,0xa0,"TimerId < uint32(Timers.Num())");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetTimerNameAndLocation @ 14d48bab0

void __thiscall
TraceServices::FTimingProfilerProvider::SetTimerNameAndLocation
          (FTimingProfilerProvider *this,uint param_1,TStringView<wchar_t> *param_2,wchar_t *param_3
          ,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (param_1 < *(uint *)&(this->MetadataSpecMap).field_0x48) {
    uVar5 = 0;
    uVar3 = 0;
    if ((int)param_1 < *(int *)&(this->MetadataSpecMap).field_0x48) {
      uVar3 = ~param_1 >> 0x1f;
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
    puVar6 = (undefined8 *)
             ((longlong)(int)param_1 * 0x20 + *(longlong *)&(this->MetadataSpecMap).field_0x40);
    uVar4 = (**(code **)(*(longlong *)this->_padding_ + 200))((longlong *)this->_padding_,param_2);
    *puVar6 = uVar4;
    if (param_3 != (wchar_t *)0x0) {
      uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0xd0))
                        ((longlong *)this->_padding_,param_3);
    }
    puVar6[1] = uVar5;
    *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) ^ (*(uint *)(puVar6 + 3) ^ param_4) & 0xffffff;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9185929053134126924>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TimingProfiler.cpp"
                       ,0xb4,"TimerId < uint32(Timers.Num())");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

