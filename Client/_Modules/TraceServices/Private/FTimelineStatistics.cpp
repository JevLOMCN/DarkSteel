// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 9

// operator() @ 14d42db80

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

EEventEnumerate __thiscall
`TraceServices::FTimelineStatistics::
GatherKeysFromTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'
::__l2::<lambda_1>::operator()(void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulonglong local_res8;
  TKeyInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&> local_res10;
  ulonglong *local_res20;
  
  local_res8 = (**(code **)(*(longlong *)(*(longlong *)this + 8) + 8))
                         ((longlong *)(*(longlong *)this + 8),param_3->TimerIndex);
  if (param_1) {
    this_00 = *(TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x18);
    uVar1 = ((uint)(local_res8 >> 0x14) & 0xffff ^ (uint)(local_res8 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar3 = (this_00->Hash).SecondaryData;
      if (FVar3 == (ForElementType<FSetElementId>)0x0) {
        FVar3 = (ForElementType<FSetElementId>)&this_00->Hash;
      }
      iVar2 = *(int *)((longlong)FVar3 +
                      (ulonglong)(this_00->HashSize - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar2 != -1) {
        do {
          if (*(ulonglong *)((longlong)iVar2 * 0x70 + *(longlong *)&this_00->Elements) == local_res8
             ) {
            return Continue;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x70 + 0x68 + *(longlong *)&this_00->Elements);
        } while (iVar2 != -1);
      }
    }
    local_res20 = &local_res8;
    TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&>_>
              (this_00,&local_res10,(bool *)&local_res20);
  }
  return Continue;
}

// operator() @ 14d42dc60

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

EEventEnumerate __thiscall
`TraceServices::FTimelineStatistics::
ProcessTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'
::__l2::<lambda_1>::operator()(void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  void *_Dst;
  double dVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  bool bVar8;
  EEventEnumerate EVar9;
  int iVar10;
  longlong lVar11;
  FInternalAggregationEntry *pFVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  FTimingProfilerTimer *pFVar15;
  longlong lVar16;
  undefined4 uVar17;
  TKeyInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&> local_res8;
  undefined1 local_res10 [8];
  FTimingProfilerTimer *local_res18;
  FTimingProfilerTimer **local_res20;
  
  dVar6 = *(double *)((longlong)this + 0x18);
  if (param_2 <= *(double *)((longlong)this + 0x18)) {
    dVar6 = param_2;
  }
  if (dVar6 <= *(double *)((longlong)this + 0x10)) {
    dVar6 = *(double *)((longlong)this + 0x10);
  }
  local_res18 = (FTimingProfilerTimer *)
                (**(code **)(*(longlong *)(*(longlong *)this + 8) + 8))
                          ((longlong *)(*(longlong *)this + 8),param_3->TimerIndex);
  plVar2 = *(longlong **)((longlong)this + 0x20);
  iVar10 = (int)plVar2[1];
  if (iVar10 != 0) {
    uVar13 = 0;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar13 = ~(iVar10 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18) =
         (dVar6 - **(double **)((longlong)this + 0x28)) +
         *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18);
  }
  **(double **)((longlong)this + 0x28) = dVar6;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x20);
  iVar10 = *(int *)&pFVar3[1].Data;
  if (param_1) {
    if (iVar10 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    lVar11 = (longlong)iVar10;
    *(int *)&pFVar3[1].Data = iVar10 + 1;
    pFVar4 = pFVar3->Data;
    *(double *)(pFVar4 + lVar11 * 0x18) = dVar6;
    *(undefined8 *)(pFVar4 + lVar11 * 0x18 + 8) = 0;
    *(FTimingProfilerTimer **)(pFVar4 + lVar11 * 0x18 + 0x10) = local_res18;
    this_00 = *(TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x30);
    uVar13 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4))
             * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar14 = (this_00->Hash).SecondaryData;
      if (FVar14 == (ForElementType<FSetElementId>)0x0) {
        FVar14 = (ForElementType<FSetElementId>)&this_00->Hash;
      }
      iVar10 = *(int *)((longlong)FVar14 +
                       (ulonglong)(this_00->HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(FTimingProfilerTimer **)((longlong)iVar10 * 0x3a0 + *(longlong *)&this_00->Elements)
              == local_res18) {
            return Continue;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x3a0 + 0x398 + *(longlong *)&this_00->Elements);
        } while (iVar10 != -1);
      }
    }
    local_res20 = &local_res18;
    TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&>_>
              (this_00,&local_res8,(bool *)&local_res20);
    return Continue;
  }
  uVar13 = 0;
  if ((int)(iVar10 - 1U) < iVar10) {
    uVar13 = ~(iVar10 - 1U) >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  iVar10 = *(int *)&pFVar3[1].Data;
  pFVar4 = pFVar3->Data;
  dVar6 = dVar6 - *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + -0x18);
  uVar17 = SUB84(dVar6,0);
  if ((dVar6 < 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventInclusiveTime >= 0.0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x163,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  dVar1 = *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + -0x10);
  if (((dVar1 < 0.0) || (dVar6 < dVar1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventExclusiveTime >= 0.0 && EventExclusiveTime <= EventInclusiveTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x165,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  plVar2 = *(longlong **)((longlong)this + 0x20);
  if (((int)plVar2[1] < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  uVar13 = (int)plVar2[1] - 1;
  _Dst = (void *)(*plVar2 + (longlong)(int)uVar13 * 0x18);
  iVar10 = ~uVar13 + (int)plVar2[1];
  if (iVar10 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar10 * 0x18);
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
  plVar2 = *(longlong **)((longlong)this + 0x20);
  lVar7 = plVar2[1];
  lVar16 = *plVar2;
  lVar11 = lVar16 + (longlong)(int)lVar7 * 0x18;
  pFVar15 = local_res18;
  while( true ) {
    if ((int)plVar2[1] != (int)lVar7) {
      `TCheckedPointerIterator<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::FStackEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      pFVar15 = local_res18;
    }
    if (lVar16 == lVar11) break;
    if (*(FTimingProfilerTimer **)(lVar16 + 0x10) == pFVar15) {
      uVar17 = 0;
    }
    lVar16 = lVar16 + 0x18;
  }
  pcVar5 = *(code **)((longlong)this + 8);
  pFVar12 = TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
            ::FindChecked(*(TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
                            **)((longlong)this + 0x30),pFVar15);
  (*pcVar5)(pFVar12,uVar17,SUB84(dVar1,0));
  return Continue;
}

// operator() @ 14d42e010

EEventEnumerate __thiscall
`TraceServices::FTimelineStatistics::
ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation'::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'
::__l2::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  void *_Dst;
  double dVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  TSet<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  bool bVar8;
  EEventEnumerate EVar9;
  int iVar10;
  longlong lVar11;
  FInternalAggregationEntry *pFVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  FPackageInfo *pFVar15;
  longlong lVar16;
  undefined4 uVar17;
  TKeyInitializer<TraceServices::FPackageInfo_const_*_const_&> local_res8;
  undefined1 local_res10 [8];
  FPackageInfo *local_res18;
  FPackageInfo **local_res20;
  
  plVar2 = *(longlong **)((longlong)this + 0x20);
  local_res18 = param_3->Package;
  dVar6 = *(double *)((longlong)this + 0x18);
  if (param_2 <= *(double *)((longlong)this + 0x18)) {
    dVar6 = param_2;
  }
  iVar10 = (int)plVar2[1];
  if (dVar6 <= *(double *)((longlong)this + 0x10)) {
    dVar6 = *(double *)((longlong)this + 0x10);
  }
  if (iVar10 != 0) {
    uVar13 = 0;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar13 = ~(iVar10 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18) =
         (dVar6 - **(double **)((longlong)this + 0x28)) +
         *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18);
  }
  **(double **)((longlong)this + 0x28) = dVar6;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x20);
  iVar10 = *(int *)&pFVar3[1].Data;
  if (param_1) {
    if (iVar10 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    lVar11 = (longlong)iVar10;
    *(int *)&pFVar3[1].Data = iVar10 + 1;
    pFVar4 = pFVar3->Data;
    *(double *)(pFVar4 + lVar11 * 0x18) = dVar6;
    *(undefined8 *)(pFVar4 + lVar11 * 0x18 + 8) = 0;
    *(FPackageInfo **)(pFVar4 + lVar11 * 0x18 + 0x10) = local_res18;
    this_00 = *(TSet<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x30);
    uVar13 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4))
             * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar14 = (this_00->Hash).SecondaryData;
      if (FVar14 == (ForElementType<FSetElementId>)0x0) {
        FVar14 = (ForElementType<FSetElementId>)&this_00->Hash;
      }
      iVar10 = *(int *)((longlong)FVar14 +
                       (ulonglong)(this_00->HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(FPackageInfo **)((longlong)iVar10 * 0x3a0 + *(longlong *)&this_00->Elements) ==
              local_res18) {
            return Continue;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x3a0 + 0x398 + *(longlong *)&this_00->Elements);
        } while (iVar10 != -1);
      }
    }
    local_res20 = &local_res18;
    TSet<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TraceServices::FPackageInfo_const_*_const_&>_>
              (this_00,&local_res8,(bool *)&local_res20);
    return Continue;
  }
  uVar13 = 0;
  if ((int)(iVar10 - 1U) < iVar10) {
    uVar13 = ~(iVar10 - 1U) >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  iVar10 = *(int *)&pFVar3[1].Data;
  pFVar4 = pFVar3->Data;
  dVar6 = dVar6 - *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + -0x18);
  uVar17 = SUB84(dVar6,0);
  if ((dVar6 < 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventInclusiveTime >= 0.0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x163,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  dVar1 = *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + -0x10);
  if (((dVar1 < 0.0) || (dVar6 < dVar1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventExclusiveTime >= 0.0 && EventExclusiveTime <= EventInclusiveTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x165,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  plVar2 = *(longlong **)((longlong)this + 0x20);
  if (((int)plVar2[1] < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  uVar13 = (int)plVar2[1] - 1;
  _Dst = (void *)(*plVar2 + (longlong)(int)uVar13 * 0x18);
  iVar10 = ~uVar13 + (int)plVar2[1];
  if (iVar10 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar10 * 0x18);
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
  plVar2 = *(longlong **)((longlong)this + 0x20);
  lVar7 = plVar2[1];
  lVar16 = *plVar2;
  lVar11 = lVar16 + (longlong)(int)lVar7 * 0x18;
  pFVar15 = local_res18;
  while( true ) {
    if ((int)plVar2[1] != (int)lVar7) {
      `TCheckedPointerIterator<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation'::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::FStackEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      pFVar15 = local_res18;
    }
    if (lVar16 == lVar11) break;
    if (*(FPackageInfo **)(lVar16 + 0x10) == pFVar15) {
      uVar17 = 0;
    }
    lVar16 = lVar16 + 0x18;
  }
  pcVar5 = *(code **)((longlong)this + 8);
  pFVar12 = TMapBase<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
            ::FindChecked(*(TMapBase<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
                            **)((longlong)this + 0x30),pFVar15);
  (*pcVar5)(pFVar12,uVar17,SUB84(dVar1,0));
  return Continue;
}

// operator() @ 14d42e3b0

EEventEnumerate __thiscall
`TraceServices::FTimelineStatistics::
ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation'::__l2::<lambda_1>,TraceServices::FClassInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'
::__l2::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  void *_Dst;
  double dVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  TSet<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  bool bVar8;
  EEventEnumerate EVar9;
  int iVar10;
  longlong lVar11;
  FInternalAggregationEntry *pFVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  FClassInfo *pFVar15;
  longlong lVar16;
  undefined4 uVar17;
  TKeyInitializer<TraceServices::FClassInfo_const_*_const_&> local_res8;
  undefined1 local_res10 [8];
  FClassInfo *local_res18;
  FClassInfo **local_res20;
  
  local_res18 = (FClassInfo *)0x0;
  dVar6 = *(double *)((longlong)this + 0x18);
  if (param_2 <= *(double *)((longlong)this + 0x18)) {
    dVar6 = param_2;
  }
  if (dVar6 <= *(double *)((longlong)this + 0x10)) {
    dVar6 = *(double *)((longlong)this + 0x10);
  }
  if (param_3->Export != (FPackageExportInfo *)0x0) {
    local_res18 = param_3->Export->Class;
  }
  plVar2 = *(longlong **)((longlong)this + 0x20);
  iVar10 = (int)plVar2[1];
  if (iVar10 != 0) {
    uVar13 = 0;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar13 = ~(iVar10 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18) =
         (dVar6 - **(double **)((longlong)this + 0x28)) +
         *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18);
  }
  **(double **)((longlong)this + 0x28) = dVar6;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x20);
  iVar10 = *(int *)&pFVar3[1].Data;
  if (param_1) {
    if (iVar10 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    lVar11 = (longlong)iVar10;
    *(int *)&pFVar3[1].Data = iVar10 + 1;
    pFVar4 = pFVar3->Data;
    *(double *)(pFVar4 + lVar11 * 0x18) = dVar6;
    *(undefined8 *)(pFVar4 + lVar11 * 0x18 + 8) = 0;
    *(FClassInfo **)(pFVar4 + lVar11 * 0x18 + 0x10) = local_res18;
    this_00 = *(TSet<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x30);
    uVar13 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4))
             * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar14 = (this_00->Hash).SecondaryData;
      if (FVar14 == (ForElementType<FSetElementId>)0x0) {
        FVar14 = (ForElementType<FSetElementId>)&this_00->Hash;
      }
      iVar10 = *(int *)((longlong)FVar14 +
                       (ulonglong)(this_00->HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(FClassInfo **)((longlong)iVar10 * 0x3a0 + *(longlong *)&this_00->Elements) ==
              local_res18) {
            return Continue;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x3a0 + 0x398 + *(longlong *)&this_00->Elements);
        } while (iVar10 != -1);
      }
    }
    local_res20 = &local_res18;
    TSet<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TraceServices::FClassInfo_const_*_const_&>_>
              (this_00,&local_res8,(bool *)&local_res20);
    return Continue;
  }
  uVar13 = 0;
  if ((int)(iVar10 - 1U) < iVar10) {
    uVar13 = ~(iVar10 - 1U) >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  iVar10 = *(int *)&pFVar3[1].Data;
  pFVar4 = pFVar3->Data;
  dVar6 = dVar6 - *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + -0x18);
  uVar17 = SUB84(dVar6,0);
  if ((dVar6 < 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventInclusiveTime >= 0.0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x163,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  dVar1 = *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + -0x10);
  if (((dVar1 < 0.0) || (dVar6 < dVar1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventExclusiveTime >= 0.0 && EventExclusiveTime <= EventInclusiveTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x165,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  plVar2 = *(longlong **)((longlong)this + 0x20);
  if (((int)plVar2[1] < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  uVar13 = (int)plVar2[1] - 1;
  _Dst = (void *)(*plVar2 + (longlong)(int)uVar13 * 0x18);
  iVar10 = ~uVar13 + (int)plVar2[1];
  if (iVar10 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar10 * 0x18);
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
  plVar2 = *(longlong **)((longlong)this + 0x20);
  lVar7 = plVar2[1];
  lVar16 = *plVar2;
  lVar11 = lVar16 + (longlong)(int)lVar7 * 0x18;
  pFVar15 = local_res18;
  while( true ) {
    if ((int)plVar2[1] != (int)lVar7) {
      `TCheckedPointerIterator<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation'::__l2::<lambda_1>,TraceServices::FClassInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::FStackEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      pFVar15 = local_res18;
    }
    if (lVar16 == lVar11) break;
    if (*(FClassInfo **)(lVar16 + 0x10) == pFVar15) {
      uVar17 = 0;
    }
    lVar16 = lVar16 + 0x18;
  }
  pcVar5 = *(code **)((longlong)this + 8);
  pFVar12 = TMapBase<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
            ::FindChecked(*(TMapBase<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
                            **)((longlong)this + 0x30),pFVar15);
  (*pcVar5)(pFVar12,uVar17,SUB84(dVar1,0));
  return Continue;
}

// operator() @ 14d42e770

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

EEventEnumerate __thiscall
`TraceServices::FTimelineStatistics::
ProcessTimelineForFrameStats<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FAggregatedTimingStats_&,double,double)>'
::__l2::<lambda_1>::operator()(void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  void *_Dst;
  double dVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  EEventEnumerate EVar10;
  int iVar11;
  FTimingProfilerTimer *pFVar12;
  longlong lVar13;
  FAggregatedTimingStats *pFVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 local_res10 [8];
  
  dVar6 = *(double *)((longlong)this + 0x18);
  if (param_2 <= *(double *)((longlong)this + 0x18)) {
    dVar6 = param_2;
  }
  if (dVar6 <= *(double *)((longlong)this + 0x10)) {
    dVar6 = *(double *)((longlong)this + 0x10);
  }
  pFVar12 = (FTimingProfilerTimer *)
            (**(code **)(*(longlong *)(*(longlong *)this + 8) + 8))
                      ((longlong *)(*(longlong *)this + 8),param_3->TimerIndex);
  plVar2 = *(longlong **)((longlong)this + 0x20);
  iVar11 = (int)plVar2[1];
  if (iVar11 != 0) {
    uVar9 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar9 = ~(iVar11 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18) =
         (dVar6 - **(double **)((longlong)this + 0x28)) +
         *(double *)(*plVar2 + -0x10 + (longlong)(int)plVar2[1] * 0x18);
  }
  **(double **)((longlong)this + 0x28) = dVar6;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x20);
  iVar11 = *(int *)&pFVar3[1].Data;
  if (param_1) {
    if (iVar11 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    lVar13 = (longlong)iVar11;
    *(int *)&pFVar3[1].Data = iVar11 + 1;
    pFVar4 = pFVar3->Data;
    *(double *)(pFVar4 + lVar13 * 0x18) = dVar6;
    *(undefined8 *)(pFVar4 + lVar13 * 0x18 + 8) = 0;
    *(FTimingProfilerTimer **)(pFVar4 + lVar13 * 0x18 + 0x10) = pFVar12;
  }
  else {
    uVar9 = 0;
    if ((int)(iVar11 - 1U) < iVar11) {
      uVar9 = ~(iVar11 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    iVar11 = *(int *)&pFVar3[1].Data;
    pFVar4 = pFVar3->Data;
    dVar6 = dVar6 - *(double *)(pFVar4 + (longlong)iVar11 * 0x18 + -0x18);
    uVar16 = SUB84(dVar6,0);
    if (dVar6 < 0.0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventInclusiveTime >= 0.0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x197,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    dVar1 = *(double *)(pFVar4 + (longlong)iVar11 * 0x18 + -0x10);
    if ((dVar1 < 0.0) || (dVar6 < dVar1)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventExclusiveTime >= 0.0 && EventExclusiveTime <= EventInclusiveTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x199,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    plVar2 = *(longlong **)((longlong)this + 0x20);
    if ((int)plVar2[1] < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        EVar10 = (*pcVar5)();
        return EVar10;
      }
    }
    uVar9 = (int)plVar2[1] - 1;
    _Dst = (void *)(*plVar2 + (longlong)(int)uVar9 * 0x18);
    iVar11 = ~uVar9 + (int)plVar2[1];
    if (iVar11 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar11 * 0x18);
    }
    *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
    plVar2 = *(longlong **)((longlong)this + 0x20);
    lVar7 = plVar2[1];
    lVar15 = *plVar2;
    lVar13 = lVar15 + (longlong)(int)lVar7 * 0x18;
    while( true ) {
      if ((int)plVar2[1] != (int)lVar7) {
        `TCheckedPointerIterator<`TraceServices::FTimelineStatistics::ProcessTimelineForFrameStats<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FAggregatedTimingStats_&,double,double)>'::__l2::FStackEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (lVar15 == lVar13) break;
      if (*(FTimingProfilerTimer **)(lVar15 + 0x10) == pFVar12) {
        uVar16 = 0;
      }
      lVar15 = lVar15 + 0x18;
    }
    pcVar5 = *(code **)((longlong)this + 8);
    pFVar14 = TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
              ::FindChecked(*(TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
                              **)((longlong)this + 0x30),pFVar12);
    (*pcVar5)(pFVar14,uVar16,SUB84(dVar1,0));
  }
  return Continue;
}

// operator() @ 14d4333a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`TraceServices::FTimelineStatistics::
CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'
::__l15::<lambda_1>::operator()(void *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
  *pTVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *pTVar29;
  undefined8 *puVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  TReferenceControllerBase<1> *pTVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStackY_398 [32];
  undefined1 local_368 [8];
  longlong local_360;
  longlong local_358;
  TReferenceControllerBase<1> *local_350;
  uint local_348;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_340;
  TReferenceControllerBase<1> *local_338;
  longlong *local_330;
  undefined8 *local_328;
  ForAnyElementType local_320;
  undefined8 local_318;
  longlong *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *pTStack_2e0;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_2d8;
  undefined2 local_2d0;
  longlong *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
  *pTStack_2a0;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
  *local_298;
  undefined2 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined8 local_278;
  void *local_270;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *pTStack_240;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_238;
  undefined2 local_230;
  code *local_228;
  undefined8 *local_220;
  undefined8 local_218;
  code *local_210;
  undefined8 local_208;
  undefined8 local_200;
  ForAnyElementType *local_1f8;
  undefined8 *local_1f0;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_1e8;
  TIterator local_1e0;
  TIterator local_1b0;
  TIterator local_180;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  local_e8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_398;
  if ((*(longlong *)((longlong)this + 0x40) == 0) || (**(char **)((longlong)this + 0x40) == '\0')) {
    pTVar29 = *(TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x30);
    local_270 = this;
    pTVar24 = ::operator_new(0x60);
    if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
      pTVar29 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                 *)&DAT_00000010;
      local_350 = (TReferenceControllerBase<1> *)0x0;
      local_340 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                   *)&DAT_00000010;
      local_338 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar24->SharedReferenceCount = (atomic<int>)0x1;
      pTVar24->WeakReferenceCount = (atomic<int>)0x1;
      *(undefined8 *)
       &((TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
          *)(pTVar24 + 1))->Elements = 0;
      pTVar24->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TMap_PEBUFTimingProfilerTimer_TraceServices__UFAggregatedTimingStats_2_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEBUFTimingProfilerTimer_TraceServices__UFAggregatedTimingStats_2__0A______00_SharedPointerInternals__6B_
      ;
      pTVar24[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar24[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar24[3]._padding_ = 0;
      pTVar24[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar24[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar24[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar24[4]._padding_ + 4) = 0;
      pTVar24[5]._padding_ = 0;
      pTVar24[5].SharedReferenceCount = (atomic<int>)0x0;
      TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                   *)(pTVar24 + 1),pTVar29);
      pTVar29 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                 *)(pTVar24 + 1);
      local_350 = pTVar24;
      local_340 = pTVar29;
      if ((pTVar29 ==
           (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
            *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar21)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      local_338 = pTVar24;
    }
    pTVar24 = local_338;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_338);
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
    ::operator=(&local_e8,
                *(TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                  **)((longlong)this + 0x30));
    uVar20 = _UNK_152b1eab8;
    uVar19 = ___xmm_7fefffffffffffff0000000000000000;
    uVar18 = _UNK_150a9e6d8;
    uVar17 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uVar16 = _UNK_1508ffae8;
    uVar15 = ___xmm_0000000000000000ffefffffffffffff;
    uVar33 = (ulonglong)*(int *)this;
    if (*(int *)this < *(int *)((longlong)this + 4)) {
      local_360 = uVar33 * 8;
      local_358 = uVar33 << 4;
      do {
        if ((*(longlong *)((longlong)this + 0x40) != 0) &&
           (pTVar35 = local_338, **(char **)((longlong)this + 0x40) != '\0')) goto LAB_14d433cc0;
        local_330 = *(longlong **)((longlong)this + 8);
        local_348 = *(uint *)(local_330 + 1);
        uVar26 = (ulonglong)(int)local_348;
        puVar30 = (undefined8 *)*local_330;
        local_328 = puVar30 + uVar26;
        while( true ) {
          puVar25 = local_328;
          if ((int)local_330[1] != (int)uVar26) {
            local_368[0] = 0;
            `TCheckedPointerIterator<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*_const,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_368);
          }
          uVar32 = (uint)uVar33;
          uVar31 = 0;
          if (puVar30 == puVar25) break;
          plVar7 = *(longlong **)((longlong)this + 0x20);
          plVar8 = (longlong *)*puVar30;
          uVar22 = uVar31;
          if ((int)uVar32 < (int)plVar7[1]) {
            uVar22 = ~uVar32 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          plVar9 = *(longlong **)((longlong)this + 0x20);
          uVar1 = *(undefined8 *)(local_358 + 8 + *plVar7);
          if ((int)uVar32 < (int)plVar9[1]) {
            uVar31 = ~uVar32 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar10 = *(undefined8 *)((longlong)this + 0x18);
          local_320.Data = (FScriptContainerElement *)0x0;
          local_318 = 0;
          uVar2 = *(undefined8 *)(local_358 + *plVar9);
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0x400,&local_320,0,(int *)((longlong)&local_318 + 4));
          local_278 = 0;
          local_210 = TraceServices::FTimelineStatistics::UpdateTotalMinMaxTimerStats;
          local_1f8 = &local_320;
          local_1f0 = &local_278;
          local_1e8 = &local_e8;
          local_220 = &local_218;
          local_228 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimelineForFrameStats<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FAggregatedTimingStats_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
                      ::Call;
          local_218 = uVar10;
          local_208 = uVar2;
          local_200 = uVar1;
          (**(code **)(*plVar8 + 0x60))(plVar8,(int)uVar2,(int)uVar1,&local_228);
          if (local_320.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data);
          }
          puVar30 = puVar30 + 1;
          uVar26 = (ulonglong)local_348;
        }
        TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
        ::TIterator::TIterator(&local_1e0,&local_e8);
        pTVar29 = local_340;
        local_308 = (longlong *)local_1e0._padding_;
        TStack_300._padding_ = local_1e0._padding_;
        local_2d0 = 0;
        TStack_300._24_8_ = local_1e0._padding_;
        pTStack_2e0 = local_1e0.Set;
        TStack_300.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1e0._padding_;
        TStack_300.UnvisitedBitMask = (undefined4)local_1e0._padding_;
        TStack_300.CurrentBitIndex = local_1e0._padding_._4_4_;
        local_2d8 = &local_e8;
        if ((local_340 ==
             (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
        ::TIterator::TIterator(&local_1b0,pTVar29);
        pTVar11 = *(TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
                    **)((longlong)this + 0x38);
        local_238 = pTVar29;
        local_268 = (longlong *)local_1b0._padding_;
        TStack_260._padding_ = local_1b0._padding_;
        local_230 = 0;
        TStack_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1b0._padding_;
        TStack_260.UnvisitedBitMask = (undefined4)local_1b0._padding_;
        TStack_260.CurrentBitIndex = local_1b0._padding_._4_4_;
        TStack_260._24_8_ = local_1b0._padding_;
        pTStack_240 = local_1b0.Set;
        TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
        ::TIterator::TIterator(&local_180,pTVar11);
        local_2c8 = (longlong *)local_180._padding_;
        TStack_2c0._padding_ = local_180._padding_;
        TStack_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_180._padding_;
        TStack_2c0.UnvisitedBitMask = (undefined4)local_180._padding_;
        TStack_2c0.CurrentBitIndex = local_180._padding_._4_4_;
        TStack_2c0._24_8_ = local_180._padding_;
        pTStack_2a0 = local_180.Set;
        local_290 = 0;
        pTVar29 = &local_e8;
        lVar34 = local_360;
        local_298 = pTVar11;
        if (TStack_300.CurrentBitIndex < (TStack_300.Array)->NumBits) {
          do {
            plVar8 = local_2c8;
            lVar28 = (longlong)TStack_300.CurrentBitIndex * 0x70;
            lVar12 = *local_308;
            lVar27 = (longlong)TStack_260.CurrentBitIndex * 0x70;
            lVar13 = *local_268;
            plVar7 = (longlong *)(lVar27 + 8 + lVar13);
            *plVar7 = *plVar7 + *(longlong *)(lVar28 + 8 + lVar12);
            dVar3 = *(double *)(lVar27 + 0x20 + lVar13);
            uVar36 = SUB84(dVar3,0);
            uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
            *(double *)(lVar27 + 0x18 + lVar13) =
                 *(double *)(lVar28 + 0x18 + lVar12) + *(double *)(lVar27 + 0x18 + lVar13);
            dVar4 = *(double *)(lVar28 + 0x18 + lVar12);
            if (dVar4 <= dVar3) {
              uVar36 = SUB84(dVar4,0);
              uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
            }
            *(ulonglong *)(lVar27 + 0x20 + lVar13) = CONCAT44(uVar37,uVar36);
            dVar3 = *(double *)(lVar28 + 0x18 + lVar12);
            uVar36 = SUB84(dVar3,0);
            uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
            dVar4 = *(double *)(lVar27 + 0x28 + lVar13);
            if (dVar3 <= dVar4) {
              uVar36 = SUB84(dVar4,0);
              uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
            }
            *(ulonglong *)(lVar27 + 0x28 + lVar13) = CONCAT44(uVar37,uVar36);
            *(double *)(lVar27 + 0x40 + lVar13) =
                 *(double *)(lVar28 + 0x40 + lVar12) + *(double *)(lVar27 + 0x40 + lVar13);
            dVar3 = *(double *)(lVar28 + 0x40 + lVar12);
            uVar38 = SUB84(dVar3,0);
            uVar39 = (undefined4)((ulonglong)dVar3 >> 0x20);
            dVar4 = *(double *)(lVar27 + 0x50 + lVar13);
            uVar36 = SUB84(dVar4,0);
            uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar5 = *(double *)(lVar27 + 0x48 + lVar13);
            if (dVar5 <= dVar3) {
              uVar38 = SUB84(dVar5,0);
              uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            *(ulonglong *)(lVar27 + 0x48 + lVar13) = CONCAT44(uVar39,uVar38);
            dVar3 = *(double *)(lVar28 + 0x40 + lVar12);
            if (dVar4 <= dVar3) {
              uVar36 = SUB84(dVar3,0);
              uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            *(ulonglong *)(lVar27 + 0x50 + lVar13) = CONCAT44(uVar37,uVar36);
            if (*(char *)((longlong)this + 0x10) != '\0') {
              iVar23 = TStack_2c0.CurrentBitIndex;
              uVar1 = *(undefined8 *)(lVar28 + 0x18 + lVar12);
              local_328 = (undefined8 *)((longlong)TStack_2c0.CurrentBitIndex * 0x3c0);
              local_330 = (longlong *)*local_2c8;
              uVar22 = uVar31;
              if ((int)uVar32 < *(int *)((longlong)(local_328 + 0x74) + (longlong)local_330)) {
                uVar22 = ~uVar32 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              *(undefined8 *)
               (local_360 + *(longlong *)((longlong)(local_328 + 0x73) + (longlong)local_330)) =
                   uVar1;
              lVar34 = *plVar8;
              uVar1 = *(undefined8 *)(lVar28 + 0x40 + lVar12);
              uVar22 = uVar31;
              if ((int)uVar32 < *(int *)((longlong)iVar23 * 0x3c0 + 0x3b0 + lVar34)) {
                uVar22 = ~uVar32 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              *(undefined8 *)(local_360 + *(longlong *)((longlong)iVar23 * 0x3c0 + 0x3a8 + lVar34))
                   = uVar1;
              this = local_270;
              lVar34 = local_360;
            }
            local_f8 = 0;
            local_138 = uVar17;
            uStack_130 = uVar18;
            local_150 = 0;
            local_118 = uVar19;
            uStack_110 = uVar20;
            local_108 = uVar15;
            uStack_100 = uVar16;
            local_148 = 0;
            uStack_140 = 0;
            local_128 = 0;
            uStack_120 = 0;
            *(undefined8 *)(lVar28 + 8 + lVar12) = 0;
            *(undefined8 *)(lVar28 + 0x10 + lVar12) = 0;
            *(undefined8 *)(lVar28 + 0x18 + lVar12) = 0;
            *(undefined8 *)(lVar28 + 0x20 + lVar12) = 0x7fefffffffffffff;
            *(undefined8 *)(lVar28 + 0x28 + lVar12) = 0xffefffffffffffff;
            *(undefined8 *)(lVar28 + 0x30 + lVar12) = 0;
            *(undefined8 *)(lVar28 + 0x38 + lVar12) = 0;
            *(undefined8 *)(lVar28 + 0x40 + lVar12) = 0;
            *(undefined8 *)(lVar28 + 0x48 + lVar12) = 0x7fefffffffffffff;
            *(undefined8 *)(lVar28 + 0x50 + lVar12) = 0xffefffffffffffff;
            *(undefined8 *)(lVar28 + 0x58 + lVar12) = 0;
            *(undefined8 *)(lVar28 + 0x60 + lVar12) = 0;
            TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
            TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
            TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
          } while (TStack_300.CurrentBitIndex < (TStack_300.Array)->NumBits);
          if (((char)local_290 != '\0') && (local_290._1_1_ != '\0')) {
            uVar31 = *(int *)&(local_298->Elements).field_0x8 -
                     *(int *)&(local_298->Elements).field_0x34;
            if (uVar31 < 4) {
              iVar23 = 1;
            }
            else {
              uVar33 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
              lVar12 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_288 = (undefined4)lVar12;
              iVar23 = 1 << ((byte)lVar12 & 0x1f);
            }
            if (((0 < (int)uVar31) && (local_298->HashSize < iVar23)) ||
               (iVar23 < local_298->HashSize)) {
              local_298->HashSize = iVar23;
              TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
              ::Rehash(local_298);
            }
          }
          pTVar29 = local_2d8;
          if (((char)local_230 != '\0') && (local_230._1_1_ != '\0')) {
            uVar31 = *(int *)&(local_238->Elements).field_0x8 -
                     *(int *)&(local_238->Elements).field_0x34;
            if (uVar31 < 4) {
              iVar23 = 1;
            }
            else {
              uVar33 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
              lVar12 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_284 = (undefined4)lVar12;
              iVar23 = 1 << ((byte)lVar12 & 0x1f);
            }
            if (((0 < (int)uVar31) && (local_238->HashSize < iVar23)) ||
               (iVar23 < local_238->HashSize)) {
              local_238->HashSize = iVar23;
              TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
              ::Rehash(local_238);
              pTVar29 = local_2d8;
            }
          }
        }
        if (((char)local_2d0 != '\0') && (local_2d0._1_1_ != '\0')) {
          uVar31 = *(int *)&(pTVar29->Elements).field_0x8 - *(int *)&(pTVar29->Elements).field_0x34;
          if (uVar31 < 4) {
            iVar23 = 1;
          }
          else {
            uVar33 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_280 = (undefined4)lVar12;
            iVar23 = 1 << ((byte)lVar12 & 0x1f);
          }
          if (((0 < (int)uVar31) && (pTVar29->HashSize < iVar23)) || (iVar23 < pTVar29->HashSize)) {
            pTVar29->HashSize = iVar23;
            TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
            ::Rehash(pTVar29);
          }
        }
        local_358 = local_358 + 0x10;
        local_360 = lVar34 + 8;
        uVar33 = (ulonglong)(uVar32 + 1);
        pTVar29 = local_340;
        pTVar24 = local_350;
      } while ((int)(uVar32 + 1) < *(int *)((longlong)this + 4));
    }
    puVar30 = *(undefined8 **)((longlong)this + 0x28);
    puVar25 = ::operator_new(0x18);
    pTVar35 = local_338;
    if (puVar25 != (undefined8 *)0x0) {
      puVar25[2] = pTVar24;
      *puVar25 = 0;
      puVar25[1] = pTVar29;
      if (((ulonglong)puVar30 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      puVar6 = (undefined8 *)*puVar30;
      *puVar30 = puVar25;
      UNLOCK();
      if (((ulonglong)puVar6 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      *puVar6 = puVar25;
      UNLOCK();
      pTVar35 = (TReferenceControllerBase<1> *)0x0;
    }
LAB_14d433cc0:
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  }
  return;
}

// UpdateHistogramForTimerStats @ 14d48ec70

void __cdecl
TraceServices::FTimelineStatistics::UpdateHistogramForTimerStats
          (FInternalAggregationEntry *param_1,double param_2,double param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  dVar2 = __real_3fe0000000000000;
  iVar4 = (int)(((param_2 - (param_1->Stats).MinInclusiveTime) +
                param_1->InclDT * __real_3fe0000000000000) / param_1->InclDT);
  if ((iVar4 < 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5710650750837718551>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x1e9,"InclIndex >= 0"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  if (99 < iVar5) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5710650750837718546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                       ,0x1ee,"InclIndex < HistogramLen");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (99 < iVar5) {
      iVar5 = 99;
    }
  }
  param_1->InclHistogram[iVar5] = param_1->InclHistogram[iVar5] + 1;
  iVar4 = (int)(((param_3 - (param_1->Stats).MinExclusiveTime) + param_1->ExclDT * dVar2) /
               param_1->ExclDT);
  if ((iVar4 < 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5710650750837718538>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                         ,0x1f6,"ExclIndex >= 0"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  if (99 < iVar5) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5710650750837718533>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                       ,0x1fb,"ExclIndex < HistogramLen");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (99 < iVar5) {
      iVar5 = 99;
    }
  }
  param_1->ExclHistogram[iVar5] = param_1->ExclHistogram[iVar5] + 1;
  return;
}

// UpdateTotalMinMaxTimerAggregationStats @ 14d48f7c0

void __cdecl
TraceServices::FTimelineStatistics::UpdateTotalMinMaxTimerAggregationStats
          (FInternalAggregationEntry *param_1,double param_2,double param_3)

{
  double *pdVar1;
  
  (param_1->Stats).TotalInclusiveTime = param_2 + (param_1->Stats).TotalInclusiveTime;
  if (param_2 < (param_1->Stats).MinInclusiveTime) {
    (param_1->Stats).MinInclusiveTime = param_2;
  }
  pdVar1 = &(param_1->Stats).MaxInclusiveTime;
  if (*pdVar1 <= param_2 && param_2 != *pdVar1) {
    (param_1->Stats).MaxInclusiveTime = param_2;
  }
  (param_1->Stats).TotalExclusiveTime = param_3 + (param_1->Stats).TotalExclusiveTime;
  if (param_3 < (param_1->Stats).MinExclusiveTime) {
    (param_1->Stats).MinExclusiveTime = param_3;
  }
  (param_1->Stats).InstanceCount = (param_1->Stats).InstanceCount + 1;
  pdVar1 = &(param_1->Stats).MaxExclusiveTime;
  if (*pdVar1 <= param_3 && param_3 != *pdVar1) {
    (param_1->Stats).MaxExclusiveTime = param_3;
  }
  return;
}

// UpdateTotalMinMaxTimerStats @ 14d48f840

void __cdecl
TraceServices::FTimelineStatistics::UpdateTotalMinMaxTimerStats
          (FAggregatedTimingStats *param_1,double param_2,double param_3)

{
  param_1->TotalInclusiveTime = param_2 + param_1->TotalInclusiveTime;
  if (param_2 < param_1->MinInclusiveTime) {
    param_1->MinInclusiveTime = param_2;
  }
  if (param_1->MaxInclusiveTime <= param_2 && param_2 != param_1->MaxInclusiveTime) {
    param_1->MaxInclusiveTime = param_2;
  }
  param_1->TotalExclusiveTime = param_3 + param_1->TotalExclusiveTime;
  if (param_3 < param_1->MinExclusiveTime) {
    param_1->MinExclusiveTime = param_3;
  }
  param_1->InstanceCount = param_1->InstanceCount + 1;
  if (param_1->MaxExclusiveTime <= param_3 && param_3 != param_1->MaxExclusiveTime) {
    param_1->MaxExclusiveTime = param_3;
  }
  return;
}

