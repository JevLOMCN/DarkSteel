// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 550

// `dynamic_initializer_for_'GNotFoundCallstack'' @ 1413cbeb0

/* WARNING: Removing unreachable block (ram,0x0001413cbecc) */
/* WARNING: Removing unreachable block (ram,0x0001413cbef1) */

void __cdecl TraceServices::_dynamic_initializer_for__GNotFoundCallstack__(void)

{
  GNotFoundCallstack.CallstackLenIndex = 0x100000152b12a98;
  return;
}

// `dynamic_initializer_for_'LogDbgHelp'' @ 1413cbf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDbgHelp__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogDbgHelp,L"LogDbgHelp",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDbgHelp__);
  return;
}

// `dynamic_initializer_for_'LogPsymResolver'' @ 1413cbf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPsymResolver__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPsymResolver,L"LogPsymResolver",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPsymResolver__);
  return;
}

// `dynamic_initializer_for_'LogSymslib'' @ 1413cbfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSymslib__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSymslib,L"LogSymslib",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSymslib__);
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int> @ 14d409d40

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int> @ 14d409df0

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int> @ 14d409ea0

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int> @ 14d409f50

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int> @ 14d40a000

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int> @ 14d40a0b0

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int> @ 14d40a160

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int> @ 14d40a210

void __cdecl
ConstructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
          (void *param_1,FColumnDeclaration *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ETableColumnType *pEVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar4 = &param_2->DisplayHintFlags;
    pEVar3 = (ETableColumnType *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)(pEVar3 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pEVar3));
      *pEVar3 = puVar4[-1];
      pEVar3[1] = *puVar4;
      uVar1 = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)(pEVar3 + 4) = uVar1;
      pEVar3[0xe] = TableColumnType_Invalid;
      pEVar3[0xf] = TableColumnType_Invalid;
      if (uVar1 != TableColumnType_Invalid) {
        puVar2 = (undefined8 *)(puVar4 + 7);
        if (*(undefined8 **)(puVar4 + 0xd) != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(puVar4 + 0xd);
        }
        (**(code **)*puVar2)(puVar2,pEVar3 + 8);
      }
      puVar4 = puVar4 + 0x14;
      pEVar3 = pEVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*> @ 14d40a2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __cdecl
TraceServices::FTimelineStatistics::
CreateAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,_TraceServices::FTimingProfilerProvider::CreateAggregationInternal_::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>
          (TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2,double param_3,double param_4,
          TSharedPtr<TraceServices::FCancellationToken,1> *param_5,
          TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
          *param_6)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
  *pTVar7;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *this;
  bool bVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  uint *puVar17;
  int *piVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5 [5];
  TSharedPtr<TraceServices::FCancellationToken,1> *local_2d0;
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
  *local_2a8;
  ulonglong local_2a0;
  longlong *local_298;
  int iStack_290;
  uint uStack_28c;
  undefined1 *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  int local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  TPairInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>
  local_258;
  undefined8 local_248;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_240;
  longlong *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  int local_218;
  uint uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  undefined1 auStack_200 [16];
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  code *local_1a8;
  FTimingProfilerProvider **local_1a0;
  code *local_198;
  FTimingProfilerProvider **local_190;
  longlong local_188;
  longlong local_180;
  FTimingProfilerProvider *local_178;
  code *local_170;
  double local_168;
  double local_160;
  ForAnyElementType *local_158;
  FAggregatedTimingStats **local_150;
  undefined1 *local_148;
  FTimingProfilerProvider *local_140;
  code *local_138;
  double local_130;
  double local_128;
  ForAnyElementType *local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar14 = param_1->ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar14 * 8;
  local_2d0 = param_5;
  local_240 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
               *)param_6;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_2a8 = param_1;
  while( true ) {
    if (local_2a8->ArrayNum != iVar14) {
      local_2d8 = 0;
      `TCheckedPointerIterator<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
    }
    uVar13 = local_c0;
    iVar16 = 0;
    if (pFVar15 == pFVar1) {
      local_2a0 = 1;
      uStack_28c = 1;
      uStack_27c = 0;
      iStack_290 = iVar16;
      local_278 = iVar16;
      if (local_c0 == 0) goto LAB_14d40a550;
      puVar17 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar17 = local_c8;
      }
      uStack_28c = *puVar17;
      goto joined_r0x00014d40a50e;
    }
    plVar3 = *(longlong **)pFVar15;
    if ((local_2d0->Object != (FCancellationToken *)0x0) &&
       (local_2d0->Object->bCancel != (atomic<bool>)0x0)) break;
    local_2c8.Data = (FScriptContainerElement *)0x0;
    local_2c0 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x400,&local_2c8,0,(int *)((longlong)&local_2c0 + 4));
    local_158 = &local_2c8;
    local_258.Value = (FAggregatedTimingStats *)0x0;
    local_150 = &local_258.Value;
    local_148 = local_e8;
    local_1a0 = &local_178;
    local_170 = UpdateTotalMinMaxTimerAggregationStats;
    local_1a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
                ::Call;
    local_178 = param_2.__this;
    local_168 = param_3;
    local_160 = param_4;
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
    pFVar15 = pFVar15 + 8;
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  goto LAB_14d40ac9c;
joined_r0x00014d40a50e:
  if (uStack_28c != 0) goto LAB_14d40a52c;
  lVar11 = (longlong)iStack_290;
  local_278 = local_278 + 0x20;
  iStack_290 = iStack_290 + 1;
  uStack_28c = 1;
  uStack_27c = local_c0;
  if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_290)
  goto LAB_14d40a550;
  uStack_28c = puVar17[lVar11 + 1];
  goto joined_r0x00014d40a50e;
LAB_14d40a52c:
  uStack_28c = -uStack_28c & uStack_28c;
  uVar2 = (ulonglong)uStack_28c * 2 + 1;
  lVar11 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  local_268 = (int)lVar11;
  uStack_27c = local_278 + -1 + local_268;
  if ((int)local_c0 < (int)uStack_27c) {
    uStack_27c = local_c0;
  }
LAB_14d40a550:
  local_298 = (longlong *)local_e8;
  uStack_274 = local_ec;
  local_288 = local_e8 + 0x10;
  iStack_270 = local_e8._8_4_ - local_b4;
  uVar19 = local_c0 & 0xffffffe0;
  auStack_200._0_8_ = CONCAT44(uStack_28c,iStack_290);
  uStack_280 = 0xffffffff;
  uStack_1f0 = 0xffffffff;
  auStack_200._8_8_ = local_288;
  uStack_1ec = uStack_27c;
  iVar14 = (int)local_c0 >> 5;
  local_1e8._4_4_ = local_ec;
  local_1e8._0_4_ = local_278;
  uStack_1e0 = CONCAT44(uStack_26c,iStack_270);
  bVar10 = (byte)local_c0;
  local_208 = local_298;
  if (((int)local_c0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = __real_3f84afd6a052bf5b;
  dVar5 = __real_3ff0000000000000;
  if (uVar13 != local_c0) {
    puVar17 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar17 = local_c8;
    }
    uVar13 = -1 << (bVar10 & 0x1f) & puVar17[iVar14];
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14d40a671;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_264 = (int)lVar11;
    uVar13 = (uVar19 - 1) + local_264;
    if ((int)local_c0 < (int)uVar13) {
      uVar13 = local_c0;
    }
  }
LAB_14d40a671:
  while( true ) {
    plVar3 = local_208;
    if ((int)local_208[1] - *(int *)((longlong)local_208 + 0x34) != (int)uStack_1e0) {
      local_2d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    pTVar7 = local_2a8;
    if (((uStack_1ec == uVar13) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_200._8_8_ ==
         (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    lVar11 = (longlong)(int)uStack_1ec * 0x3a0 + *plVar3;
    dVar20 = dVar5;
    if (*(double *)(lVar11 + 0x358) != *(double *)(lVar11 + 0x350)) {
      dVar20 = (*(double *)(lVar11 + 0x358) - *(double *)(lVar11 + 0x350)) * dVar6;
    }
    *(double *)(lVar11 + 0x198) = dVar20;
    dVar20 = dVar5;
    if (*(double *)(lVar11 + 0x380) != *(double *)(lVar11 + 0x378)) {
      dVar20 = (*(double *)(lVar11 + 0x380) - *(double *)(lVar11 + 0x378)) * dVar6;
    }
    *(double *)(lVar11 + 0x330) = dVar20;
    uStack_1f0 = uStack_1f0 & ~auStack_200._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_200);
  }
  pFVar15 = (local_2a8->AllocatorInstance).Data;
  iVar14 = local_2a8->ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar14 * 8;
  while( true ) {
    if (pTVar7->ArrayNum != iVar14) {
      local_2d6 = 0;
      `TCheckedPointerIterator<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2d6);
    }
    uVar13 = local_c0;
    if (pFVar15 == pFVar1) {
      iStack_230 = 0;
      local_218 = 0;
      uStack_21c = 0;
      if (local_c0 == 0) goto LAB_14d40a8f3;
      puVar17 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar17 = local_c8;
      }
      uVar19 = *puVar17;
      goto joined_r0x00014d40a8ae;
    }
    plVar3 = *(longlong **)pFVar15;
    if ((local_2d0->Object != (FCancellationToken *)0x0) &&
       (local_2d0->Object->bCancel != (atomic<bool>)0x0)) break;
    local_2b8.Data = (FScriptContainerElement *)0x0;
    local_2b0 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x400,&local_2b8,0,(int *)((longlong)&local_2b0 + 4));
    local_248 = 0;
    local_138 = UpdateHistogramForTimerStats;
    local_120 = &local_2b8;
    local_118 = &local_248;
    local_110 = local_e8;
    local_190 = &local_140;
    local_198 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
                ::Call;
    local_140 = param_2.__this;
    local_130 = param_3;
    local_128 = param_4;
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (local_2b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data);
    }
    pFVar15 = pFVar15 + 8;
  }
  goto LAB_14d40ac70;
joined_r0x00014d40a8ae:
  if (uVar19 != 0) goto LAB_14d40a8cc;
  lVar11 = (longlong)iStack_230;
  local_218 = local_218 + 0x20;
  iStack_230 = iStack_230 + 1;
  uStack_21c = local_c0;
  if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_230)
  goto LAB_14d40a8f3;
  uVar19 = puVar17[lVar11 + 1];
  goto joined_r0x00014d40a8ae;
LAB_14d40a8cc:
  local_2a0 = (ulonglong)(-uVar19 & uVar19);
  uVar2 = local_2a0 * 2 + 1;
  lVar11 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  local_260 = (int)lVar11;
  uStack_21c = local_260 + -1 + local_218;
  if ((int)local_c0 < (int)uStack_21c) {
    uStack_21c = local_c0;
  }
LAB_14d40a8f3:
  local_238 = (longlong *)local_e8;
  uStack_22c = (undefined4)local_2a0;
  uVar19 = local_c0 & 0xffffffe0;
  uStack_214 = uStack_27c;
  local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_210 = local_e8._8_4_ - local_b4;
  uStack_220 = 0xffffffff;
  TStack_1d0.CurrentBitIndex = uStack_21c;
  TStack_1d0.UnvisitedBitMask = 0xffffffff;
  TStack_1d0._padding_ = CONCAT44(uStack_22c,iStack_230);
  iVar14 = (int)local_c0 >> 5;
  TStack_1d0._28_4_ = uStack_27c;
  TStack_1d0.BaseBitIndex = local_218;
  uStack_1b0 = CONCAT44(uStack_20c,iStack_210);
  bVar10 = (byte)local_c0;
  local_1d8 = local_238;
  TStack_1d0.Array = local_228;
  if (((int)local_c0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = local_240;
  dVar6 = __real_3fe0000000000000;
  if (uVar13 != local_c0) {
    puVar17 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar17 = local_c8;
    }
    uVar13 = -1 << (bVar10 & 0x1f) & puVar17[iVar14];
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14d40aa30;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_25c = (int)lVar11;
    uVar13 = (uVar19 - 1) + local_25c;
    if ((int)local_c0 < (int)uVar13) {
      uVar13 = local_c0;
    }
  }
LAB_14d40aa30:
  while( true ) {
    plVar3 = local_1d8;
    if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
      local_2d5[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d5);
    }
    if (((TStack_1d0.CurrentBitIndex == uVar13) &&
        (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    lVar11 = *plVar3 + (longlong)TStack_1d0.CurrentBitIndex * 0x3a0;
    if ((*(longlong *)(lVar11 + 0x338) == 0) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5710650750837718520>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                           ,0x208,"Stats.InstanceCount > 0"), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar21 = (double)*(ulonglong *)(lVar11 + 0x338);
    dVar20 = dVar5 / dVar21;
    iVar14 = 0;
    iVar16 = 0;
    lVar9 = 0;
    *(double *)(lVar11 + 0x340) = dVar21;
    *(double *)(lVar11 + 0x388) = dVar20 * *(double *)(lVar11 + 0x370);
    *(double *)(lVar11 + 0x360) = dVar20 * *(double *)(lVar11 + 0x348);
    do {
      iVar14 = iVar14 + *(int *)(lVar11 + 8 + lVar9 * 4);
      iVar12 = (int)(*(ulonglong *)(lVar11 + 0x338) >> 1);
      if (iVar12 < iVar14) {
        dVar20 = (double)iVar16 * *(double *)(lVar11 + 0x198) + *(double *)(lVar11 + 0x350);
        *(double *)(lVar11 + 0x368) = dVar20;
        if (((0 < iVar16) && ((*(byte *)(lVar11 + 0x338) & 1) == 0)) &&
           (iVar14 - *(int *)(lVar11 + 8 + lVar9 * 4) == iVar12)) {
          *(double *)(lVar11 + 0x368) =
               ((double)(iVar16 + -1) * *(double *)(lVar11 + 0x198) + *(double *)(lVar11 + 0x350) +
               dVar20) * dVar6;
        }
        break;
      }
      iVar16 = iVar16 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < 100);
    iVar14 = 0;
    piVar18 = (int *)(lVar11 + 0x1a0);
    iVar16 = 0;
    lVar9 = 0;
    do {
      iVar14 = iVar14 + *piVar18;
      if (iVar12 < iVar14) {
        dVar20 = (double)iVar16 * *(double *)(lVar11 + 0x330) + *(double *)(lVar11 + 0x378);
        *(double *)(lVar11 + 0x390) = dVar20;
        if (((0 < iVar16) && ((*(byte *)(lVar11 + 0x338) & 1) == 0)) &&
           (iVar14 - *(int *)(lVar11 + 0x1a0 + lVar9 * 4) == iVar12)) {
          *(double *)(lVar11 + 0x390) =
               ((double)(iVar16 + -1) * *(double *)(lVar11 + 0x330) + *(double *)(lVar11 + 0x378) +
               dVar20) * dVar6;
        }
        break;
      }
      iVar16 = iVar16 + 1;
      lVar9 = lVar9 + 1;
      piVar18 = piVar18 + 1;
    } while (lVar9 < 100);
    local_180 = lVar11 + 0x338;
    local_188 = lVar11;
    TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>_>
              (this,&local_258,(bool *)&local_188);
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
  }
LAB_14d40ac70:
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
LAB_14d40ac9c:
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_2d0->SharedReferenceCount).ReferenceController);
  return;
}

// CreateAggregation<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation'::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*> @ 14d40ad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TraceServices::FTimelineStatistics::
CreateAggregation<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,_TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation_::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*>
          (TArray<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2,double param_3,double param_4,
          TSharedPtr<TraceServices::FCancellationToken,1> *param_5,
          TMap<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,0>_>
          *param_6)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TSet<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *this;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5 [5];
  ForAnyElementType local_2d0;
  undefined8 local_2c8;
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  longlong *local_2a8;
  uint uStack_2a0;
  uint uStack_29c;
  undefined1 *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  uint local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  TPairInitializer<TraceServices::FPackageInfo_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>
  local_268;
  TSharedPtr<TraceServices::FCancellationToken,1> *local_258;
  undefined8 local_250;
  TSet<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_248;
  longlong *local_240;
  int iStack_238;
  undefined4 uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  undefined4 uStack_228;
  uint uStack_224;
  int local_220;
  uint uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  undefined1 auStack_208 [16];
  uint uStack_1f8;
  uint uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_180 [8];
  code *local_178;
  double local_170;
  double local_168;
  ForAnyElementType *local_160;
  FAggregatedTimingStats **local_158;
  undefined1 *local_150;
  undefined1 local_148 [8];
  code *local_140;
  double local_138;
  double local_130;
  ForAnyElementType *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar12 = param_1->ArrayNum;
  local_258 = param_5;
  pFVar1 = pFVar13 + (longlong)iVar12 * 8;
  local_248 = (TSet<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
               *)param_6;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_2d8 = 0;
      `TCheckedPointerIterator<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
    }
    uVar19 = local_c0;
    uVar14 = 0;
    uVar18 = 0;
    if (pFVar13 == pFVar1) {
      local_2b0 = 1;
      uStack_29c = 1;
      uStack_28c = uVar18;
      uStack_2a0 = uVar14;
      if (local_c0 == 0) goto LAB_14d40af70;
      puVar16 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar16 = local_c8;
      }
      uStack_29c = *puVar16;
      uVar18 = uVar14;
      goto joined_r0x00014d40af2d;
    }
    plVar3 = *(longlong **)pFVar13;
    if ((param_5->Object != (FCancellationToken *)0x0) &&
       (param_5->Object->bCancel != (atomic<bool>)0x0)) break;
    local_2d0.Data = (FScriptContainerElement *)0x0;
    local_2c8 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x400,&local_2d0,0,(int *)((longlong)&local_2c8 + 4));
    local_160 = &local_2d0;
    local_268.Value = (FAggregatedTimingStats *)0x0;
    local_158 = &local_268.Value;
    local_150 = local_e8;
    local_1a8 = local_180;
    local_178 = UpdateTotalMinMaxTimerAggregationStats;
    local_1b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation'::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
                ::Call;
    local_170 = param_3;
    local_168 = param_4;
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (local_2d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data);
    }
    pFVar13 = pFVar13 + 8;
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  goto LAB_14d40b6a6;
joined_r0x00014d40af2d:
  if (uStack_29c != 0) goto LAB_14d40af4c;
  lVar10 = (longlong)(int)uStack_2a0;
  uVar18 = uVar18 + 0x20;
  uStack_2a0 = uStack_2a0 + 1;
  uStack_29c = 1;
  uStack_28c = local_c0;
  if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2a0)
  goto LAB_14d40af70;
  uStack_29c = (puVar16 + 1)[lVar10];
  goto joined_r0x00014d40af2d;
LAB_14d40af4c:
  uStack_29c = -uStack_29c & uStack_29c;
  uVar2 = (ulonglong)uStack_29c * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  local_278 = (int)lVar10;
  uStack_28c = (uVar18 - 1) + local_278;
  if ((int)local_c0 < (int)uStack_28c) {
    uStack_28c = local_c0;
  }
LAB_14d40af70:
  local_2a8 = (longlong *)local_e8;
  uStack_284 = local_f4;
  local_298 = local_e8 + 0x10;
  iStack_280 = local_e8._8_4_ - local_b4;
  uVar14 = local_c0 & 0xffffffe0;
  auStack_208._0_8_ = CONCAT44(uStack_29c,uStack_2a0);
  uStack_290 = 0xffffffff;
  uStack_1f8 = 0xffffffff;
  auStack_208._8_8_ = local_298;
  uStack_1f4 = uStack_28c;
  iVar12 = (int)local_c0 >> 5;
  local_1f0._4_4_ = local_f4;
  local_1f0._0_4_ = uVar18;
  uStack_1e8 = CONCAT44(uStack_27c,iStack_280);
  bVar9 = (byte)local_c0;
  local_288 = uVar18;
  local_210 = local_2a8;
  if (((int)local_c0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = __real_3f84afd6a052bf5b;
  dVar5 = __real_3ff0000000000000;
  if (uVar19 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar19 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14d40b090;
      uVar18 = (puVar16 + 1)[lVar10];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_274 = (int)lVar10;
    uVar19 = (uVar14 - 1) + local_274;
    if ((int)local_c0 < (int)uVar19) {
      uVar19 = local_c0;
    }
  }
LAB_14d40b090:
  while( true ) {
    plVar3 = local_210;
    if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)uStack_1e8) {
      local_2d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    param_5 = local_258;
    if (((uStack_1f4 == uVar19) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_208._8_8_ ==
         (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    lVar10 = (longlong)(int)uStack_1f4 * 0x3a0 + *plVar3;
    dVar20 = dVar5;
    if (*(double *)(lVar10 + 0x358) != *(double *)(lVar10 + 0x350)) {
      dVar20 = (*(double *)(lVar10 + 0x358) - *(double *)(lVar10 + 0x350)) * dVar6;
    }
    *(double *)(lVar10 + 0x198) = dVar20;
    dVar20 = dVar5;
    if (*(double *)(lVar10 + 0x380) != *(double *)(lVar10 + 0x378)) {
      dVar20 = (*(double *)(lVar10 + 0x380) - *(double *)(lVar10 + 0x378)) * dVar6;
    }
    *(double *)(lVar10 + 0x330) = dVar20;
    uStack_1f8 = uStack_1f8 & ~auStack_208._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_208);
  }
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar12 = param_1->ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar12 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_2d6 = 0;
      `TCheckedPointerIterator<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2d6);
    }
    uVar18 = local_c0;
    if (pFVar13 == pFVar1) {
      iStack_238 = 0;
      local_220 = 0;
      uStack_224 = 0;
      if (local_c0 == 0) goto LAB_14d40b306;
      puVar16 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar16 = local_c8;
      }
      uVar19 = *puVar16;
      goto joined_r0x00014d40b2c1;
    }
    plVar3 = *(longlong **)pFVar13;
    if ((param_5->Object != (FCancellationToken *)0x0) &&
       (param_5->Object->bCancel != (atomic<bool>)0x0)) break;
    local_2c0.Data = (FScriptContainerElement *)0x0;
    local_2b8 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x400,&local_2c0,0,(int *)((longlong)&local_2b8 + 4));
    local_250 = 0;
    local_140 = UpdateHistogramForTimerStats;
    local_128 = &local_2c0;
    local_120 = &local_250;
    local_118 = local_e8;
    local_198 = local_148;
    local_1a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation'::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
                ::Call;
    local_138 = param_3;
    local_130 = param_4;
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (local_2c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data);
    }
    pFVar13 = pFVar13 + 8;
  }
  goto LAB_14d40b67a;
joined_r0x00014d40b2c1:
  if (uVar19 != 0) goto LAB_14d40b2df;
  lVar10 = (longlong)iStack_238;
  local_220 = local_220 + 0x20;
  iStack_238 = iStack_238 + 1;
  uStack_224 = local_c0;
  if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_238)
  goto LAB_14d40b306;
  uVar19 = (puVar16 + 1)[lVar10];
  goto joined_r0x00014d40b2c1;
LAB_14d40b2df:
  local_2b0 = (ulonglong)(-uVar19 & uVar19);
  uVar2 = local_2b0 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  local_270 = (int)lVar10;
  uStack_224 = local_220 + -1 + local_270;
  if ((int)local_c0 < (int)uStack_224) {
    uStack_224 = local_c0;
  }
LAB_14d40b306:
  local_240 = (longlong *)local_e8;
  uStack_234 = (undefined4)local_2b0;
  uVar19 = local_c0 & 0xffffffe0;
  uStack_21c = uStack_28c;
  local_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_218 = local_e8._8_4_ - local_b4;
  uStack_228 = 0xffffffff;
  TStack_1d8.CurrentBitIndex = uStack_224;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  TStack_1d8._padding_ = CONCAT44(uStack_234,iStack_238);
  iVar12 = (int)local_c0 >> 5;
  TStack_1d8._28_4_ = uStack_28c;
  TStack_1d8.BaseBitIndex = local_220;
  uStack_1b8 = CONCAT44(uStack_214,iStack_218);
  bVar9 = (byte)local_c0;
  local_1e0 = local_240;
  TStack_1d8.Array = local_230;
  if (((int)local_c0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = local_248;
  dVar6 = __real_3fe0000000000000;
  if (uVar18 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar18 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14d40b440;
      uVar18 = (puVar16 + 1)[lVar10];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_26c = (int)lVar10;
    uVar18 = (uVar19 - 1) + local_26c;
    if ((int)local_c0 < (int)uVar18) {
      uVar18 = local_c0;
    }
  }
LAB_14d40b440:
  while( true ) {
    plVar3 = local_1e0;
    if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
      local_2d5[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d5);
    }
    if (((TStack_1d8.CurrentBitIndex == uVar18) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    lVar10 = *plVar3 + (longlong)TStack_1d8.CurrentBitIndex * 0x3a0;
    if ((*(longlong *)(lVar10 + 0x338) == 0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5710650750837718520>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                           ,0x208,"Stats.InstanceCount > 0"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar21 = (double)*(ulonglong *)(lVar10 + 0x338);
    dVar20 = dVar5 / dVar21;
    iVar12 = 0;
    iVar15 = 0;
    lVar8 = 0;
    *(double *)(lVar10 + 0x340) = dVar21;
    *(double *)(lVar10 + 0x388) = dVar20 * *(double *)(lVar10 + 0x370);
    *(double *)(lVar10 + 0x360) = dVar20 * *(double *)(lVar10 + 0x348);
    do {
      iVar12 = iVar12 + *(int *)(lVar10 + 8 + lVar8 * 4);
      iVar11 = (int)(*(ulonglong *)(lVar10 + 0x338) >> 1);
      if (iVar11 < iVar12) {
        dVar20 = (double)iVar15 * *(double *)(lVar10 + 0x198) + *(double *)(lVar10 + 0x350);
        *(double *)(lVar10 + 0x368) = dVar20;
        if (((0 < iVar15) && ((*(byte *)(lVar10 + 0x338) & 1) == 0)) &&
           (iVar12 - *(int *)(lVar10 + 8 + lVar8 * 4) == iVar11)) {
          *(double *)(lVar10 + 0x368) =
               ((double)(iVar15 + -1) * *(double *)(lVar10 + 0x198) + *(double *)(lVar10 + 0x350) +
               dVar20) * dVar6;
        }
        break;
      }
      iVar15 = iVar15 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < 100);
    iVar12 = 0;
    piVar17 = (int *)(lVar10 + 0x1a0);
    iVar15 = 0;
    lVar8 = 0;
    do {
      iVar12 = iVar12 + *piVar17;
      if (iVar11 < iVar12) {
        dVar20 = (double)iVar15 * *(double *)(lVar10 + 0x330) + *(double *)(lVar10 + 0x378);
        *(double *)(lVar10 + 0x390) = dVar20;
        if (((0 < iVar15) && ((*(byte *)(lVar10 + 0x338) & 1) == 0)) &&
           (iVar12 - *(int *)(lVar10 + 0x1a0 + lVar8 * 4) == iVar11)) {
          *(double *)(lVar10 + 0x390) =
               ((double)(iVar15 + -1) * *(double *)(lVar10 + 0x330) + *(double *)(lVar10 + 0x378) +
               dVar20) * dVar6;
        }
        break;
      }
      iVar15 = iVar15 + 1;
      lVar8 = lVar8 + 1;
      piVar17 = piVar17 + 1;
    } while (lVar8 < 100);
    local_188 = lVar10 + 0x338;
    local_190 = lVar10;
    TSet<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TraceServices::FPackageInfo_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>_>
              (this,&local_268,(bool *)&local_190);
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
LAB_14d40b67a:
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
LAB_14d40b6a6:
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return;
}

// CreateAggregation<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation'::__l2::<lambda_1>,TraceServices::FClassInfo_const_*> @ 14d40b700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TraceServices::FTimelineStatistics::
CreateAggregation<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,_TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation_::__l2::<lambda_1>,TraceServices::FClassInfo_const_*>
          (TArray<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2,double param_3,double param_4,
          TSharedPtr<TraceServices::FCancellationToken,1> *param_5,
          TMap<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,0>_>
          *param_6)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TSet<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *this;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5 [5];
  ForAnyElementType local_2d0;
  undefined8 local_2c8;
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  longlong *local_2a8;
  uint uStack_2a0;
  uint uStack_29c;
  undefined1 *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  uint local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  TPairInitializer<TraceServices::FClassInfo_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>
  local_268;
  TSharedPtr<TraceServices::FCancellationToken,1> *local_258;
  undefined8 local_250;
  TSet<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_248;
  longlong *local_240;
  int iStack_238;
  undefined4 uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  undefined4 uStack_228;
  uint uStack_224;
  int local_220;
  uint uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  undefined1 auStack_208 [16];
  uint uStack_1f8;
  uint uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_180 [8];
  code *local_178;
  double local_170;
  double local_168;
  ForAnyElementType *local_160;
  FAggregatedTimingStats **local_158;
  undefined1 *local_150;
  undefined1 local_148 [8];
  code *local_140;
  double local_138;
  double local_130;
  ForAnyElementType *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar12 = param_1->ArrayNum;
  local_258 = param_5;
  pFVar1 = pFVar13 + (longlong)iVar12 * 8;
  local_248 = (TSet<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
               *)param_6;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_2d8 = 0;
      `TCheckedPointerIterator<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
    }
    uVar19 = local_c0;
    uVar14 = 0;
    uVar18 = 0;
    if (pFVar13 == pFVar1) {
      local_2b0 = 1;
      uStack_29c = 1;
      uStack_28c = uVar18;
      uStack_2a0 = uVar14;
      if (local_c0 == 0) goto LAB_14d40b970;
      puVar16 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar16 = local_c8;
      }
      uStack_29c = *puVar16;
      uVar18 = uVar14;
      goto joined_r0x00014d40b92d;
    }
    plVar3 = *(longlong **)pFVar13;
    if ((param_5->Object != (FCancellationToken *)0x0) &&
       (param_5->Object->bCancel != (atomic<bool>)0x0)) break;
    local_2d0.Data = (FScriptContainerElement *)0x0;
    local_2c8 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x400,&local_2d0,0,(int *)((longlong)&local_2c8 + 4));
    local_160 = &local_2d0;
    local_268.Value = (FAggregatedTimingStats *)0x0;
    local_158 = &local_268.Value;
    local_150 = local_e8;
    local_1a8 = local_180;
    local_178 = UpdateTotalMinMaxTimerAggregationStats;
    local_1b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation'::__l2::<lambda_1>,TraceServices::FClassInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
                ::Call;
    local_170 = param_3;
    local_168 = param_4;
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (local_2d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data);
    }
    pFVar13 = pFVar13 + 8;
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  goto LAB_14d40c0a6;
joined_r0x00014d40b92d:
  if (uStack_29c != 0) goto LAB_14d40b94c;
  lVar10 = (longlong)(int)uStack_2a0;
  uVar18 = uVar18 + 0x20;
  uStack_2a0 = uStack_2a0 + 1;
  uStack_29c = 1;
  uStack_28c = local_c0;
  if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2a0)
  goto LAB_14d40b970;
  uStack_29c = (puVar16 + 1)[lVar10];
  goto joined_r0x00014d40b92d;
LAB_14d40b94c:
  uStack_29c = -uStack_29c & uStack_29c;
  uVar2 = (ulonglong)uStack_29c * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  local_278 = (int)lVar10;
  uStack_28c = (uVar18 - 1) + local_278;
  if ((int)local_c0 < (int)uStack_28c) {
    uStack_28c = local_c0;
  }
LAB_14d40b970:
  local_2a8 = (longlong *)local_e8;
  uStack_284 = local_f4;
  local_298 = local_e8 + 0x10;
  iStack_280 = local_e8._8_4_ - local_b4;
  uVar14 = local_c0 & 0xffffffe0;
  auStack_208._0_8_ = CONCAT44(uStack_29c,uStack_2a0);
  uStack_290 = 0xffffffff;
  uStack_1f8 = 0xffffffff;
  auStack_208._8_8_ = local_298;
  uStack_1f4 = uStack_28c;
  iVar12 = (int)local_c0 >> 5;
  local_1f0._4_4_ = local_f4;
  local_1f0._0_4_ = uVar18;
  uStack_1e8 = CONCAT44(uStack_27c,iStack_280);
  bVar9 = (byte)local_c0;
  local_288 = uVar18;
  local_210 = local_2a8;
  if (((int)local_c0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = __real_3f84afd6a052bf5b;
  dVar5 = __real_3ff0000000000000;
  if (uVar19 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar19 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14d40ba90;
      uVar18 = (puVar16 + 1)[lVar10];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_274 = (int)lVar10;
    uVar19 = (uVar14 - 1) + local_274;
    if ((int)local_c0 < (int)uVar19) {
      uVar19 = local_c0;
    }
  }
LAB_14d40ba90:
  while( true ) {
    plVar3 = local_210;
    if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)uStack_1e8) {
      local_2d7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    param_5 = local_258;
    if (((uStack_1f4 == uVar19) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_208._8_8_ ==
         (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    lVar10 = (longlong)(int)uStack_1f4 * 0x3a0 + *plVar3;
    dVar20 = dVar5;
    if (*(double *)(lVar10 + 0x358) != *(double *)(lVar10 + 0x350)) {
      dVar20 = (*(double *)(lVar10 + 0x358) - *(double *)(lVar10 + 0x350)) * dVar6;
    }
    *(double *)(lVar10 + 0x198) = dVar20;
    dVar20 = dVar5;
    if (*(double *)(lVar10 + 0x380) != *(double *)(lVar10 + 0x378)) {
      dVar20 = (*(double *)(lVar10 + 0x380) - *(double *)(lVar10 + 0x378)) * dVar6;
    }
    *(double *)(lVar10 + 0x330) = dVar20;
    uStack_1f8 = uStack_1f8 & ~auStack_208._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_208);
  }
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar12 = param_1->ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar12 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_2d6 = 0;
      `TCheckedPointerIterator<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2d6);
    }
    uVar18 = local_c0;
    if (pFVar13 == pFVar1) {
      iStack_238 = 0;
      local_220 = 0;
      uStack_224 = 0;
      if (local_c0 == 0) goto LAB_14d40bd06;
      puVar16 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar16 = local_c8;
      }
      uVar19 = *puVar16;
      goto joined_r0x00014d40bcc1;
    }
    plVar3 = *(longlong **)pFVar13;
    if ((param_5->Object != (FCancellationToken *)0x0) &&
       (param_5->Object->bCancel != (atomic<bool>)0x0)) break;
    local_2c0.Data = (FScriptContainerElement *)0x0;
    local_2b8 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x400,&local_2c0,0,(int *)((longlong)&local_2b8 + 4));
    local_250 = 0;
    local_140 = UpdateHistogramForTimerStats;
    local_128 = &local_2c0;
    local_120 = &local_250;
    local_118 = local_e8;
    local_198 = local_148;
    local_1a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation'::__l2::<lambda_1>,TraceServices::FClassInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
                ::Call;
    local_138 = param_3;
    local_130 = param_4;
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (local_2c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data);
    }
    pFVar13 = pFVar13 + 8;
  }
  goto LAB_14d40c07a;
joined_r0x00014d40bcc1:
  if (uVar19 != 0) goto LAB_14d40bcdf;
  lVar10 = (longlong)iStack_238;
  local_220 = local_220 + 0x20;
  iStack_238 = iStack_238 + 1;
  uStack_224 = local_c0;
  if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_238)
  goto LAB_14d40bd06;
  uVar19 = (puVar16 + 1)[lVar10];
  goto joined_r0x00014d40bcc1;
LAB_14d40bcdf:
  local_2b0 = (ulonglong)(-uVar19 & uVar19);
  uVar2 = local_2b0 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  local_270 = (int)lVar10;
  uStack_224 = local_220 + -1 + local_270;
  if ((int)local_c0 < (int)uStack_224) {
    uStack_224 = local_c0;
  }
LAB_14d40bd06:
  local_240 = (longlong *)local_e8;
  uStack_234 = (undefined4)local_2b0;
  uVar19 = local_c0 & 0xffffffe0;
  uStack_21c = uStack_28c;
  local_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_218 = local_e8._8_4_ - local_b4;
  uStack_228 = 0xffffffff;
  TStack_1d8.CurrentBitIndex = uStack_224;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  TStack_1d8._padding_ = CONCAT44(uStack_234,iStack_238);
  iVar12 = (int)local_c0 >> 5;
  TStack_1d8._28_4_ = uStack_28c;
  TStack_1d8.BaseBitIndex = local_220;
  uStack_1b8 = CONCAT44(uStack_214,iStack_218);
  bVar9 = (byte)local_c0;
  local_1e0 = local_240;
  TStack_1d8.Array = local_230;
  if (((int)local_c0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = local_248;
  dVar6 = __real_3fe0000000000000;
  if (uVar18 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar18 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14d40be40;
      uVar18 = (puVar16 + 1)[lVar10];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_26c = (int)lVar10;
    uVar18 = (uVar19 - 1) + local_26c;
    if ((int)local_c0 < (int)uVar18) {
      uVar18 = local_c0;
    }
  }
LAB_14d40be40:
  while( true ) {
    plVar3 = local_1e0;
    if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
      local_2d5[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d5);
    }
    if (((TStack_1d8.CurrentBitIndex == uVar18) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    lVar10 = *plVar3 + (longlong)TStack_1d8.CurrentBitIndex * 0x3a0;
    if ((*(longlong *)(lVar10 + 0x338) == 0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5710650750837718520>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                           ,0x208,"Stats.InstanceCount > 0"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar21 = (double)*(ulonglong *)(lVar10 + 0x338);
    dVar20 = dVar5 / dVar21;
    iVar12 = 0;
    iVar15 = 0;
    lVar8 = 0;
    *(double *)(lVar10 + 0x340) = dVar21;
    *(double *)(lVar10 + 0x388) = dVar20 * *(double *)(lVar10 + 0x370);
    *(double *)(lVar10 + 0x360) = dVar20 * *(double *)(lVar10 + 0x348);
    do {
      iVar12 = iVar12 + *(int *)(lVar10 + 8 + lVar8 * 4);
      iVar11 = (int)(*(ulonglong *)(lVar10 + 0x338) >> 1);
      if (iVar11 < iVar12) {
        dVar20 = (double)iVar15 * *(double *)(lVar10 + 0x198) + *(double *)(lVar10 + 0x350);
        *(double *)(lVar10 + 0x368) = dVar20;
        if (((0 < iVar15) && ((*(byte *)(lVar10 + 0x338) & 1) == 0)) &&
           (iVar12 - *(int *)(lVar10 + 8 + lVar8 * 4) == iVar11)) {
          *(double *)(lVar10 + 0x368) =
               ((double)(iVar15 + -1) * *(double *)(lVar10 + 0x198) + *(double *)(lVar10 + 0x350) +
               dVar20) * dVar6;
        }
        break;
      }
      iVar15 = iVar15 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < 100);
    iVar12 = 0;
    piVar17 = (int *)(lVar10 + 0x1a0);
    iVar15 = 0;
    lVar8 = 0;
    do {
      iVar12 = iVar12 + *piVar17;
      if (iVar11 < iVar12) {
        dVar20 = (double)iVar15 * *(double *)(lVar10 + 0x330) + *(double *)(lVar10 + 0x378);
        *(double *)(lVar10 + 0x390) = dVar20;
        if (((0 < iVar15) && ((*(byte *)(lVar10 + 0x338) & 1) == 0)) &&
           (iVar12 - *(int *)(lVar10 + 0x1a0 + lVar8 * 4) == iVar11)) {
          *(double *)(lVar10 + 0x390) =
               ((double)(iVar15 + -1) * *(double *)(lVar10 + 0x330) + *(double *)(lVar10 + 0x378) +
               dVar20) * dVar6;
        }
        break;
      }
      iVar15 = iVar15 + 1;
      lVar8 = lVar8 + 1;
      piVar17 = piVar17 + 1;
    } while (lVar8 < 100);
    local_188 = lVar10 + 0x338;
    local_190 = lVar10;
    TSet<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TraceServices::FClassInfo_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>_>
              (this,&local_268,(bool *)&local_190);
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
LAB_14d40c07a:
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
LAB_14d40c0a6:
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return;
}

// CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*> @ 14d40c100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __cdecl
TraceServices::FTimelineStatistics::
CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,_TraceServices::FTimingProfilerProvider::CreateAggregationInternal_::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>
          (TArray<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2,
          TArray<TraceServices::FFrameData,TSizedDefaultAllocator<32>_> *param_3,
          TSharedPtr<TraceServices::FCancellationToken,1> *param_4,
          TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
          *param_5,double param_6)

{
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  **ppTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FCancellationToken *pFVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  double dVar8;
  TTask<void> TVar9;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  longlong *plVar16;
  longlong *plVar17;
  TTask<void> this;
  FTask *pFVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte bVar22;
  ulonglong uVar23;
  int *piVar24;
  longlong lVar25;
  ulonglong uVar26;
  TSharedPtr<TraceServices::FCancellationToken,1> *pTVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  ForElementType<unsigned_int> FVar34;
  longlong lVar35;
  TReferenceControllerBase<1> *pTVar36;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStackY_8b8 [32];
  undefined1 local_868;
  undefined1 local_867;
  undefined1 local_866 [6];
  TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_> local_860;
  ulonglong local_850;
  TTask<void> local_848;
  undefined1 local_840 [4];
  uint local_83c;
  uint local_838;
  longlong *local_828;
  longlong *local_820;
  longlong *local_818;
  undefined8 uStack_810;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  int local_7f0;
  undefined4 uStack_7ec;
  int local_7e8;
  int local_7e4;
  int local_7e0;
  TSharedPtr<TraceServices::FCancellationToken,1> *local_7d8;
  TBitArray<FDefaultBitArrayAllocator> *local_7d0;
  int local_7c8;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_7c0;
  FSharedReferencer<1> FStack_7b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_790;
  TPairInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry_&&>
  local_770;
  int local_760;
  undefined1 local_75c [20];
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_748;
  FSharedReferencer<1> FStack_740;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_738;
  longlong *local_728;
  undefined1 auStack_720 [16];
  uint uStack_710;
  uint uStack_70c;
  longlong local_708;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
  *pTStack_700;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
  *local_6f8;
  undefined2 local_6f0;
  longlong *local_6e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6e0;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *pTStack_6c0;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
  *local_6b8;
  undefined2 local_6b0;
  undefined1 local_6a8 [12];
  uint uStack_69c;
  TBitArray<FDefaultBitArrayAllocator> *local_698;
  undefined8 uStack_690;
  longlong local_688;
  undefined8 uStack_680;
  longlong *local_678;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_670;
  undefined8 uStack_650;
  longlong *local_648;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_640;
  undefined8 uStack_620;
  code *local_618;
  FTimingProfilerProvider **local_610;
  longlong local_608;
  FInternalAggregationEntry *local_600;
  longlong local_5f8;
  ulonglong *local_5f0;
  FTimingProfilerProvider *local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined1 *local_5d0;
  TRangedForIterator local_5c8;
  TIterator local_598;
  undefined1 local_568 [32];
  longlong local_548;
  TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
  *pTStack_540;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_538;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_518;
  undefined4 local_4dc;
  undefined1 local_4d8 [8];
  atomic<unsigned___int64> local_4d0;
  TBitArray<FDefaultBitArrayAllocator> local_4c8;
  undefined4 local_4a8;
  int local_4a4;
  ForElementType<FSetElementId> local_498;
  int local_490;
  undefined1 local_488 [32];
  undefined8 local_468;
  int local_460;
  undefined4 local_45c;
  undefined4 local_458;
  int local_454;
  void *local_448;
  undefined4 local_440;
  FInternalAggregationEntry local_438;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_738 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
               *)param_5;
  local_4d8 = (undefined1  [8])0x0;
  local_4d0 = (atomic<unsigned___int64>)0x0;
  local_4c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_4c8.NumBits = 0;
  local_4c8.MaxBits = 0x80;
  local_4a8 = 0xffffffff;
  local_4a4 = 0;
  local_498 = (ForElementType<FSetElementId>)0x0;
  local_490 = 0;
  local_488._0_8_ = 0;
  local_488._8_8_ = 0;
  local_468 = 0;
  local_460 = 0;
  local_45c = 0x80;
  local_458 = 0xffffffff;
  local_454 = 0;
  local_448 = (void *)0x0;
  local_440 = 0;
  local_7d8 = param_4;
  local_75c._4_8_ = param_1;
  if ((param_3->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar29 = param_3->ArrayNum - 1;
  uVar19 = *(undefined8 *)(param_3->AllocatorInstance).Data;
  uVar13 = 0;
  if ((int)uVar29 < param_3->ArrayNum) {
    uVar13 = ~uVar29 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar12 = param_1->ArrayNum;
  pFVar32 = (param_1->AllocatorInstance).Data;
  uVar3 = *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar29 * 0x10 + 8);
  pFVar2 = pFVar32 + (longlong)iVar12 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_868 = 0;
      `TCheckedPointerIterator<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_868);
    }
    if (pFVar32 == pFVar2) break;
    local_5d0 = local_488;
    local_610 = &local_5e8;
    local_618 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FTimelineStatistics::GatherKeysFromTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
                ::Call;
    local_5e8 = param_2.__this;
    local_5e0 = uVar19;
    local_5d8 = uVar3;
    (**(code **)(**(longlong **)pFVar32 + 0x60))();
    pFVar32 = pFVar32 + 8;
  }
  local_83c = param_3->ArrayNum;
  local_7b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_488 + 0x10);
  lVar37 = (longlong)(local_488._8_4_ - local_454) * (longlong)(int)local_83c;
  local_867 = lVar37 < 500000000;
  local_850 = 1;
  plVar17 = (longlong *)0x0;
  local_7b0._padding_._4_4_ = 1;
  local_7b0._padding_._0_4_ = 0;
  local_7b0.UnvisitedBitMask = 0xffffffff;
  local_7b0.CurrentBitIndex = 0;
  local_7b0.BaseBitIndex = 0;
  local_75c._12_8_ = lVar37;
  if (local_460 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7b0);
  }
  uStack_810 = CONCAT44(local_7b0._padding_._4_4_,(undefined4)local_7b0._padding_);
  local_7f0 = local_488._8_4_ - local_454;
  local_818 = (longlong *)local_488;
  uStack_800 = CONCAT44(local_7b0.CurrentBitIndex,local_7b0.UnvisitedBitMask);
  uStack_7f8 = CONCAT44(local_7b0._28_4_,local_7b0.BaseBitIndex);
  pTStack_808 = local_7b0.Array;
  uStack_680._4_4_ = uStack_7ec;
  uStack_680._0_4_ = local_7f0;
  local_698 = local_7b0.Array;
  local_6a8._0_8_ = local_818;
  unique0x1000211a = uStack_810;
  uStack_690 = uStack_800;
  local_688 = uStack_7f8;
  pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_538,(TBitArray<FDefaultBitArrayAllocator> *)(local_488 + 0x10),
                       local_460);
  local_818 = (longlong *)local_488;
  uStack_810 = pTVar15->_padding_;
  pTStack_808 = pTVar15->Array;
  uStack_800._0_4_ = pTVar15->UnvisitedBitMask;
  uStack_800._4_4_ = pTVar15->CurrentBitIndex;
  uStack_7f8 = *(longlong *)&pTVar15->BaseBitIndex;
  local_7f0 = local_488._8_4_ - local_454;
  local_5c8._44_4_ = uStack_7ec;
  local_5c8.InitialNum = local_7f0;
  local_5c8._padding_ = (longlong)local_818;
  local_5c8._padding_ = uStack_810;
  local_5c8._padding_ = (longlong)pTStack_808;
  local_5c8._padding_ = uStack_800;
  local_5c8._padding_ = uStack_7f8;
  bVar11 = TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_6a8,&local_5c8);
  uVar20 = 1;
  if (bVar11) {
    local_600 = &local_438;
    do {
      lVar33 = (longlong)uStack_690._4_4_ * 0x70 + *(longlong *)local_6a8._0_8_;
      FInternalAggregationEntry::FInternalAggregationEntry(&local_438);
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      if (lVar37 < 500000000) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,param_3->ArrayNum,&local_a8,(int *)&local_a0,(int *)((longlong)&local_a0 + 4)
                  );
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,param_3->ArrayNum,&local_98,(int *)&local_90,(int *)((longlong)&local_90 + 4)
                  );
      }
      local_438.Stats.InstanceCount = *(ulong64 *)(lVar33 + 8);
      local_438.Stats.AverageInstanceCount = *(double *)(lVar33 + 0x10);
      local_438.Stats.TotalInclusiveTime = *(double *)(lVar33 + 0x18);
      local_438.Stats.MinInclusiveTime = *(double *)(lVar33 + 0x20);
      local_438.Stats.MaxInclusiveTime = *(double *)(lVar33 + 0x28);
      local_438.Stats.AverageInclusiveTime = *(double *)(lVar33 + 0x30);
      local_438.Stats.MedianInclusiveTime = *(double *)(lVar33 + 0x38);
      local_438.Stats.TotalExclusiveTime = *(double *)(lVar33 + 0x40);
      local_438.Stats.MinExclusiveTime = *(double *)(lVar33 + 0x48);
      local_438.Stats.MaxExclusiveTime = *(double *)(lVar33 + 0x50);
      local_438.Stats.AverageExclusiveTime = *(double *)(lVar33 + 0x58);
      local_438.Stats.MedianExclusiveTime = *(double *)(lVar33 + 0x60);
      local_608 = lVar33;
      TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry_&&>_>
                ((TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
                  *)local_4d8,&local_770,(bool *)&local_608);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      uStack_690 = CONCAT44(uStack_690._4_4_,(uint)uStack_690 & ~uStack_69c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_6a8 + 8));
      bVar11 = TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_6a8,&local_5c8);
      uVar20 = local_850;
    } while (bVar11);
  }
  plVar16 = ::operator_new(0x18);
  if (plVar16 != (longlong *)0x0) {
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
    plVar17 = plVar16;
  }
  local_828 = plVar17;
  local_820 = plVar17;
  iVar12 = (**(code **)((longlong)*GThreadPool + 0x28))();
  uVar19._4_4_ = param_3->ArrayNum;
  local_860.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_860.ArrayNum = 0;
  local_860.ArrayMax = 0;
  uVar13 = (uint)((double)iVar12 * param_6);
  if ((int)uVar13 < 1) {
    uVar13 = (uint)uVar20;
  }
  local_838 = uVar19._4_4_;
  if ((int)uVar13 < (int)uVar19._4_4_) {
    local_838 = uVar13;
  }
  local_7c8 = (int)uVar19._4_4_ / (int)local_838;
  iVar12 = uVar19._4_4_ - local_7c8 * local_838;
  local_7e8 = 0;
  iVar30 = (uint)(0 < iVar12) + local_7c8;
  iVar12 = iVar12 + -1;
  local_7e4 = iVar30;
  local_7e0 = iVar12;
  if (0 < (int)local_838) {
    local_7d0 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)local_838;
    do {
      pTVar36 = (local_7d8->SharedReferenceCount).ReferenceController;
      pFVar4 = local_7d8->Object;
      if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_848 = (TTask<void>)0x0;
      local_7e4 = iVar30;
      local_7e0 = iVar12;
      this = (TTask<void>)FMemory::Malloc(0x140,0x40);
      if (this == (TTask<void>)0x0) {
        this = (TTask<void>)0x0;
        iVar31 = iVar30;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this,2,true);
        *(undefined ***)this =
             &UE::Tasks::Private::
              TExecutableTaskBase<`TraceServices::FTimelineStatistics::CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::`2'::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'::`15'::<lambda_1>,void,void>
              ::_vftable_;
        if (((*(ulonglong *)((longlong)this + 0xb0) & 0x20) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsCompleted()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                ,0x1dd,L"State: %d"), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*(longlong *)((longlong)this + 0xa0) + 0x18))
                  ((undefined1 *)((longlong)this + 0xa0),(FTask *)((longlong)this + 0x78));
        *(TTask<void> *)((longlong)this + 0x78) = this;
        *(undefined ***)((longlong)this + 0xa0) =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(TTask<void> *)((longlong)this + 0x80) = this;
        pFVar18 = LowLevelTasks::FTask::GetActiveTask();
        uVar19 = 0;
        if (pFVar18 != (FTask *)0x0) {
          uVar19 = *(undefined8 *)&pFVar18->field_0x30;
        }
        *(undefined8 *)((longlong)this + 0xa8) = uVar19;
        *(undefined8 *)((longlong)this + 0xb0) = 0xc8000054ac6ed000;
        *(EExtendedTaskPriority *)((longlong)this + 0x44) = None;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)((longlong)this + 8));
        *(int *)&((FTaskBase *)((longlong)this + 0xd8))->_padding_ = local_7e8;
        *(undefined8 *)((longlong)this + 0xe0) = local_75c._4_8_;
        *(undefined1 *)((longlong)this + 0xe8) = local_867;
        *(longlong ***)((longlong)this + 0x100) = &local_828;
        *(undefined1 **)((longlong)this + 0x108) = local_488;
        *(int *)((longlong)this + 0xdc) = local_7e4;
        *(FTimingProfilerProvider **)((longlong)this + 0xf0) = param_2.__this;
        *(FPipe **)((longlong)this + 0x110) = (FPipe *)local_4d8;
        *(TReferenceControllerBase<1> **)((longlong)this + 0x120) = pTVar36;
        pTVar36 = (TReferenceControllerBase<1> *)0x0;
        *(TArray<TraceServices::FFrameData,TSizedDefaultAllocator<32>_> **)((longlong)this + 0xf8) =
             param_3;
        *(FCancellationToken **)((longlong)this + 0x118) = pFVar4;
        *(undefined ***)this =
             &UE::Tasks::Private::
              TExecutableTask<`TraceServices::FTimelineStatistics::CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::`2'::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'::`15'::<lambda_1>_>
              ::_vftable_;
        iVar31 = local_7e4;
        iVar12 = local_7e0;
      }
      TVar9 = local_848;
      if (local_848 != (TTask<void>)0x0) {
        local_848 = (TTask<void>)0x0;
        LOCK();
        piVar24 = (int *)((longlong)TVar9 + 0x30);
        iVar30 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar30 == 1) {
          (*(code *)**(undefined8 **)TVar9)(TVar9,local_850 & 0xffffffff);
        }
      }
      local_848 = this;
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this,0x140);
      if (((local_860.AllocatorInstance.Data <= &local_848) &&
          (&local_848 <
           (TTask<void> *)(local_860.AllocatorInstance.Data + (longlong)local_860.ArrayMax * 8))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar30 = local_860.ArrayNum;
      if (local_860.ArrayNum == local_860.ArrayMax) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_860.AllocatorInstance,&local_860.ArrayMax);
      }
      local_860.ArrayNum = iVar30 + 1;
      *(undefined8 *)(local_860.AllocatorInstance.Data + (longlong)iVar30 * 8) = 0;
      *(TTask<void> *)(local_860.AllocatorInstance.Data + (longlong)iVar30 * 8) = local_848;
      local_848 = (TTask<void>)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
      bVar11 = 0 < iVar12;
      iVar12 = iVar12 + -1;
      iVar30 = iVar31 + (uint)bVar11 + local_7c8;
      local_7d0 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_7d0 - 1);
      local_7e8 = iVar31;
    } while (local_7d0 != (TBitArray<FDefaultBitArrayAllocator> *)0x0);
    local_7d0 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    lVar37 = local_75c._12_8_;
    local_7e4 = iVar30;
    local_7e0 = iVar12;
  }
  uVar19._4_4_ = local_838;
  iVar12 = 0;
  if ((local_7e8 != param_3->ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex == Frames.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                          ,0xcf,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar7 = __real_3dcccccd;
  pTVar27 = local_7d8;
  if (0 < (int)uVar19._4_4_) {
    do {
      if ((pTVar27->Object != (FCancellationToken *)0x0) &&
         (pTVar27->Object->bCancel != (atomic<bool>)0x0)) {
        UE::Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>
                  (&local_860,(FTimespan)0x7fffffffffffffff);
        DestructItems<UE::Tasks::TTask<void>,int>
                  ((TTask<void> *)local_860.AllocatorInstance.Data,local_860.ArrayNum);
        if ((TTask<void> *)local_860.AllocatorInstance.Data != (TTask<void> *)0x0) {
          FMemory::Free(local_860.AllocatorInstance.Data);
        }
        while (plVar17 = local_820, plVar17 != (longlong *)0x0) {
          local_820 = (longlong *)*plVar17;
          pTVar27 = local_7d8;
          if (plVar17 != (longlong *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)plVar17[2]);
            ::operator_delete(plVar17,0x18);
            pTVar27 = local_7d8;
          }
        }
        local_440 = 0;
        local_820 = plVar17;
        if (local_448 != (void *)0x0) {
          FMemory::Free(local_448);
        }
        TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_488);
        local_490 = 0;
        if (local_498 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_498);
        }
        goto LAB_14d40d66e;
      }
      if (*local_820 == 0) {
        FWindowsPlatformProcess::SleepNoStats(fVar7);
      }
      else {
        local_7c0 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                     *)0x0;
        FStack_7b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        plVar17 = (longlong *)*local_820;
        if (plVar17 == (longlong *)0x0) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5710650750837718815>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                              ,0xe1,"FrameResultsQueue.Dequeue(TaskResult)");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          ppTVar1 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                     **)(plVar17 + 1);
          if (&local_7c0 != ppTVar1) {
            local_7c0 = *ppTVar1;
            *ppTVar1 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                        *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&FStack_7b8,(FSharedReferencer<1> *)(plVar17 + 2));
          }
          plVar16 = local_820;
          local_748 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                       *)0x0;
          FStack_740.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_820 = plVar17;
          if (ppTVar1 != &local_748) {
            *ppTVar1 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
                        *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(plVar17 + 2),&FStack_740);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_740.ReferenceController);
          if (plVar16 != (longlong *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)plVar16[2]);
            ::operator_delete(plVar16,0x18);
          }
        }
        pTVar10 = local_7c0;
        iVar12 = iVar12 + 1;
        if ((local_7c0 ==
             (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
        ::TIterator::TIterator(&local_598,pTVar10);
        local_6b8 = pTVar10;
        local_6b0 = 0;
        local_6e8 = (longlong *)local_598._padding_;
        TStack_6e0._padding_ = local_598._padding_;
        TStack_6e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_598._padding_;
        TStack_6e0.UnvisitedBitMask = (undefined4)local_598._padding_;
        TStack_6e0.CurrentBitIndex = local_598._padding_._4_4_;
        TStack_6e0._24_8_ = local_598._padding_;
        pTStack_6c0 = local_598.Set;
        TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_568,
                   (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
                    *)local_4d8);
        local_6f8 = (TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
                     *)local_4d8;
        local_6f0 = 0;
        stack0xfffffffffffff8e8 = local_568._16_16_;
        local_728 = (longlong *)local_568._0_8_;
        auStack_720._0_8_ = local_568._8_8_;
        local_708 = local_548;
        pTStack_700 = pTStack_540;
        uVar20 = local_568._24_8_ >> 0x20;
        if (local_568._28_4_ < *(int *)(local_568._16_8_ + 0x18)) {
          do {
            lVar35 = (longlong)TStack_6e0.CurrentBitIndex * 0x70;
            lVar33 = *local_6e8;
            lVar25 = (longlong)(int)uVar20 * 0x3c0;
            lVar5 = *local_728;
            plVar17 = (longlong *)(lVar25 + 0x338 + lVar5);
            *plVar17 = *plVar17 + *(longlong *)(lVar35 + 8 + lVar33);
            TStack_6e0.UnvisitedBitMask = TStack_6e0.UnvisitedBitMask & ~TStack_6e0._padding_._4_4_;
            *(double *)(lVar25 + 0x348 + lVar5) =
                 *(double *)(lVar35 + 0x18 + lVar33) + *(double *)(lVar25 + 0x348 + lVar5);
            dVar40 = *(double *)(lVar35 + 0x20 + lVar33);
            dVar38 = *(double *)(lVar25 + 0x350 + lVar5);
            if (dVar38 <= dVar40) {
              dVar40 = dVar38;
            }
            *(double *)(lVar25 + 0x350 + lVar5) = dVar40;
            dVar40 = *(double *)(lVar35 + 0x28 + lVar33);
            dVar38 = *(double *)(lVar25 + 0x358 + lVar5);
            if (dVar40 <= dVar38) {
              dVar40 = dVar38;
            }
            *(double *)(lVar25 + 0x358 + lVar5) = dVar40;
            *(double *)(lVar25 + 0x370 + lVar5) =
                 *(double *)(lVar35 + 0x40 + lVar33) + *(double *)(lVar25 + 0x370 + lVar5);
            dVar38 = *(double *)(lVar35 + 0x48 + lVar33);
            dVar40 = *(double *)(lVar25 + 0x378 + lVar5);
            if (dVar40 <= dVar38) {
              dVar38 = dVar40;
            }
            *(double *)(lVar25 + 0x378 + lVar5) = dVar38;
            dVar40 = *(double *)(lVar35 + 0x50 + lVar33);
            dVar38 = *(double *)(lVar25 + 0x380 + lVar5);
            if (dVar40 <= dVar38) {
              dVar40 = dVar38;
            }
            *(double *)(lVar25 + 0x380 + lVar5) = dVar40;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6e0);
            uStack_710 = uStack_710 & ~auStack_720._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_720);
            uVar20 = (ulonglong)uStack_70c;
          } while ((int)uStack_70c < *(int *)(auStack_720._8_8_ + 0x18));
          if (((char)local_6f0 != '\0') && (local_6f0._1_1_ != '\0')) {
            uVar13 = *(int *)&(local_6f8->Elements).field_0x8 -
                     *(int *)&(local_6f8->Elements).field_0x34;
            iVar30 = (int)local_850;
            if (3 < uVar13) {
              uVar20 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
              lVar33 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              local_770.Key._4_4_ = (undefined4)lVar33;
              iVar30 = (int)local_850 << ((byte)lVar33 & 0x1f);
            }
            if (((0 < (int)uVar13) && (local_6f8->HashSize < iVar30)) ||
               (iVar30 < local_6f8->HashSize)) {
              local_6f8->HashSize = iVar30;
              TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry,0>,FDefaultSetAllocator>
              ::Rehash(local_6f8);
            }
          }
          if (((char)local_6b0 != '\0') && (local_6b0._1_1_ != '\0')) {
            uVar13 = *(int *)&(local_6b8->Elements).field_0x8 -
                     *(int *)&(local_6b8->Elements).field_0x34;
            iVar30 = (int)local_850;
            if (3 < uVar13) {
              uVar20 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
              lVar33 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              local_770.Value._0_4_ = (undefined4)lVar33;
              iVar30 = (int)local_850 << ((byte)lVar33 & 0x1f);
            }
            if (((0 < (int)uVar13) && (local_6b8->HashSize < iVar30)) ||
               (iVar30 < local_6b8->HashSize)) {
              local_6b8->HashSize = iVar30;
              TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
              ::Rehash(local_6b8);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_7b8.ReferenceController);
        pTVar27 = local_7d8;
      }
    } while (iVar12 < (int)uVar19._4_4_);
  }
  dVar38 = __real_3ff0000000000000;
  if (lVar37 < 500000000) {
    local_790._padding_._4_4_ = (undefined4)local_850;
    local_790.Array = &local_4c8;
    local_790._padding_._0_4_ = 0;
    local_790.UnvisitedBitMask = 0xffffffff;
    local_790.CurrentBitIndex = 0;
    local_790.BaseBitIndex = 0;
    if (local_4c8.NumBits != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_790);
    }
    uStack_810 = CONCAT44(local_790._padding_._4_4_,(undefined4)local_790._padding_);
    local_818 = (longlong *)local_4d8;
    uStack_800._4_4_ = local_790.CurrentBitIndex;
    uStack_800._0_4_ = local_790.UnvisitedBitMask;
    uStack_7f8._4_4_ = local_790._28_4_;
    uStack_7f8._0_4_ = local_790.BaseBitIndex;
    local_7f0 = local_4d0._0_4_ - local_4a4;
    pTStack_808 = local_790.Array;
    uStack_650 = CONCAT44(uStack_7ec,local_7f0);
    TStack_670.Array = local_790.Array;
    local_678 = local_818;
    TStack_670._padding_ = uStack_810;
    TStack_670._16_8_ = uStack_800;
    TStack_670._24_8_ = uStack_7f8;
    pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_518,&local_4c8,local_4c8.NumBits);
    dVar8 = __real_3f84afd6a052bf5b;
    dVar40 = __real_3fe0000000000000;
    uStack_810 = pTVar15->_padding_;
    pTStack_808 = pTVar15->Array;
    uVar19._0_4_ = pTVar15->UnvisitedBitMask;
    uVar19._4_4_ = pTVar15->CurrentBitIndex;
    uStack_7f8 = *(longlong *)&pTVar15->BaseBitIndex;
    local_838 = uVar19._4_4_;
    uStack_800 = uVar19;
    local_7d0 = pTStack_808;
    while( true ) {
      plVar17 = local_678;
      uVar13 = 0;
      if ((int)local_678[1] - *(int *)((longlong)local_678 + 0x34) != (int)uStack_650) {
        local_866[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_866);
      }
      if (((TStack_670.CurrentBitIndex == uVar19._4_4_) && (TStack_670.Array == local_7d0)) &&
         (plVar17 == (longlong *)local_4d8)) break;
      lVar37 = (longlong)TStack_670.CurrentBitIndex * 0x3c0 + *plVar17;
      if (*(longlong *)(lVar37 + 0x338) != 0) {
        dVar39 = dVar38;
        if (*(double *)(lVar37 + 0x358) != *(double *)(lVar37 + 0x350)) {
          dVar39 = (*(double *)(lVar37 + 0x358) - *(double *)(lVar37 + 0x350)) * dVar8;
        }
        *(double *)(lVar37 + 0x198) = dVar39;
        dVar39 = dVar38;
        if (*(double *)(lVar37 + 0x380) != *(double *)(lVar37 + 0x378)) {
          dVar39 = (*(double *)(lVar37 + 0x380) - *(double *)(lVar37 + 0x378)) * dVar8;
        }
        *(double *)(lVar37 + 0x330) = dVar39;
        if (0 < (int)local_83c) {
          lVar33 = 0;
          do {
            uVar19._4_4_ = 0;
            if ((int)uVar13 < *(int *)(lVar37 + 0x3b0)) {
              uVar19._4_4_ = ~uVar13 >> 0x1f;
            }
            if ((uVar19._4_4_ == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            dVar39 = *(double *)(lVar33 + *(longlong *)(lVar37 + 0x3a8));
            uVar19._4_4_ = 0;
            if ((int)uVar13 < *(int *)(lVar37 + 0x3a0)) {
              uVar19._4_4_ = ~uVar13 >> 0x1f;
            }
            if ((uVar19._4_4_ == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar12 = (int)(((*(double *)(*(longlong *)(lVar37 + 0x398) + lVar33) -
                            *(double *)(lVar37 + 0x350)) + *(double *)(lVar37 + 0x198) * dVar40) /
                          *(double *)(lVar37 + 0x198));
            if (iVar12 < 0) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5710650750837718551>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                                  ,0x1e9,"InclIndex >= 0");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar12 = 0;
            }
            else if (99 < iVar12) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5710650750837718546>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                                  ,0x1ee,"InclIndex < HistogramLen");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar12 = 99;
            }
            piVar24 = (int *)(lVar37 + 8 + (longlong)iVar12 * 4);
            *piVar24 = *piVar24 + 1;
            iVar12 = (int)(((dVar39 - *(double *)(lVar37 + 0x378)) +
                           *(double *)(lVar37 + 0x330) * dVar40) / *(double *)(lVar37 + 0x330));
            if (iVar12 < 0) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5710650750837718538>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                                  ,0x1f6,"ExclIndex >= 0");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar12 = 0;
            }
            else if (99 < iVar12) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5710650750837718533>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\TimelineStatistics.h"
                                  ,0x1fb,"ExclIndex < HistogramLen");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar12 = 99;
            }
            uVar13 = uVar13 + 1;
            lVar33 = lVar33 + 8;
            piVar24 = (int *)(lVar37 + 0x1a0 + (longlong)iVar12 * 4);
            *piVar24 = *piVar24 + 1;
            uVar19._4_4_ = local_838;
          } while ((int)uVar13 < (int)local_83c);
        }
        uVar13 = local_83c >> 1;
        uVar21 = 0;
        uVar20 = uVar21;
        uVar23 = uVar21;
        uVar26 = uVar21;
        do {
          uVar29 = (int)uVar23 + *(int *)(lVar37 + 8 + uVar20 * 4);
          uVar23 = (ulonglong)uVar29;
          iVar12 = (int)uVar26;
          if ((int)uVar13 < (int)uVar29) {
            dVar39 = (double)iVar12 * *(double *)(lVar37 + 0x198) + *(double *)(lVar37 + 0x350);
            *(double *)(lVar37 + 0x368) = dVar39;
            if (((0 < iVar12) && ((local_83c & 1) == 0)) &&
               (uVar29 - *(int *)(lVar37 + 8 + uVar20 * 4) == uVar13)) {
              *(double *)(lVar37 + 0x368) =
                   ((double)(iVar12 + -1) * *(double *)(lVar37 + 0x198) +
                    *(double *)(lVar37 + 0x350) + dVar39) * dVar40;
            }
            break;
          }
          uVar26 = (ulonglong)(iVar12 + 1);
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < 100);
        piVar24 = (int *)(lVar37 + 0x1a0);
        uVar20 = uVar21;
        uVar23 = uVar21;
        do {
          uVar29 = (int)uVar21 + *piVar24;
          uVar21 = (ulonglong)uVar29;
          iVar12 = (int)uVar23;
          if ((int)uVar13 < (int)uVar29) {
            dVar39 = (double)iVar12 * *(double *)(lVar37 + 0x330) + *(double *)(lVar37 + 0x378);
            *(double *)(lVar37 + 0x390) = dVar39;
            if (((0 < iVar12) && ((local_83c & 1) == 0)) &&
               (uVar29 - *(int *)(lVar37 + 0x1a0 + uVar20 * 4) == uVar13)) {
              *(double *)(lVar37 + 0x390) =
                   ((double)(iVar12 + -1) * *(double *)(lVar37 + 0x330) +
                    *(double *)(lVar37 + 0x378) + dVar39) * dVar40;
            }
            break;
          }
          uVar23 = (ulonglong)(iVar12 + 1);
          uVar20 = uVar20 + 1;
          piVar24 = piVar24 + 1;
        } while ((longlong)uVar20 < 100);
      }
      TStack_670.UnvisitedBitMask = TStack_670.UnvisitedBitMask & ~TStack_670._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_670);
    }
  }
  uVar29 = local_4c8.NumBits;
  uVar13 = 0;
  TStack_640.CurrentBitIndex = uVar13;
  uVar19._4_4_ = uVar13;
  if (local_4c8.NumBits == 0) {
LAB_14d40d381:
    uVar14 = (uint)local_850;
  }
  else {
    FVar34 = (ForElementType<unsigned_int>)&local_4c8;
    if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_4c8.AllocatorInstance.SecondaryData;
    }
    uVar14 = *(uint *)FVar34;
    while (uVar14 == 0) {
      lVar37 = (longlong)(int)uVar13;
      uVar19._4_4_ = uVar19._4_4_ + 0x20;
      uVar13 = uVar13 + 1;
      TStack_640.CurrentBitIndex = local_4c8.NumBits;
      if ((int)((local_4c8.NumBits - 1U) + ((int)(local_4c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          (int)uVar13) goto LAB_14d40d381;
      uVar14 = *(uint *)((uchar *)((longlong)FVar34 + 4) + lVar37 * 4);
    }
    uVar14 = -uVar14 & uVar14;
    uVar20 = (ulonglong)uVar14 * 2 + 1;
    lVar37 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    local_770.Value._4_4_ = (int)lVar37;
    TStack_640.CurrentBitIndex = (uVar19._4_4_ - 1) + local_770.Value._4_4_;
    if (local_4c8.NumBits < TStack_640.CurrentBitIndex) {
      TStack_640.CurrentBitIndex = local_4c8.NumBits;
    }
  }
  local_818 = (longlong *)local_4d8;
  pTStack_808 = &local_4c8;
  local_7f0 = local_4d0._0_4_ - local_4a4;
  uVar28 = local_4c8.NumBits & 0xffffffe0;
  uStack_800 = CONCAT44(TStack_640.CurrentBitIndex,0xffffffff);
  uStack_810 = CONCAT44(uVar14,uVar13);
  uStack_7f8 = CONCAT44(local_4dc,uVar19._4_4_);
  TStack_640._padding_ = uStack_810;
  iVar12 = local_4c8.NumBits >> 5;
  uStack_620 = CONCAT44(uStack_7ec,local_7f0);
  bVar22 = (byte)local_4c8.NumBits;
  TStack_640.UnvisitedBitMask = 0xffffffff;
  TStack_640._24_8_ = uStack_7f8;
  local_648 = local_818;
  TStack_640.Array = pTStack_808;
  if ((local_4c8.NumBits < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar10 = local_738;
  uVar19._4_4_ = local_83c;
  if (uVar29 != local_4c8.NumBits) {
    FVar34 = (ForElementType<unsigned_int>)&local_4c8;
    if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_4c8.AllocatorInstance.SecondaryData;
    }
    uVar13 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar37 = (longlong)iVar12;
      uVar28 = uVar28 + 0x20;
      iVar12 = iVar12 + 1;
      uVar29 = local_4c8.NumBits;
      if ((int)((local_4c8.NumBits - 1U) + ((int)(local_4c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar12) goto LAB_14d40d4c0;
      uVar13 = *(uint *)((uchar *)((longlong)FVar34 + 4) + lVar37 * 4);
    }
    uVar20 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar37 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    local_760 = (int)lVar37;
    uVar29 = local_760 + -1 + uVar28;
    if (local_4c8.NumBits < (int)uVar29) {
      uVar29 = local_4c8.NumBits;
    }
  }
LAB_14d40d4c0:
  while( true ) {
    plVar17 = local_648;
    if ((int)local_648[1] - *(int *)((longlong)local_648 + 0x34) != (int)uStack_620) {
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_840);
    }
    if (((TStack_640.CurrentBitIndex == uVar29) && (TStack_640.Array == &local_4c8)) &&
       (plVar17 == (longlong *)local_4d8)) break;
    dVar40 = dVar38 / (double)(int)uVar19._4_4_;
    local_5f8 = (longlong)TStack_640.CurrentBitIndex * 0x3c0 + *plVar17;
    local_5f0 = (ulonglong *)(local_5f8 + 0x338);
    *(double *)(local_5f8 + 0x388) = dVar40 * *(double *)(local_5f8 + 0x370);
    *(double *)(local_5f8 + 0x360) = dVar40 * *(double *)(local_5f8 + 0x348);
    *(double *)(local_5f8 + 0x340) = (double)*local_5f0 * dVar40;
    TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>_>
              (pTVar10,(TPairInitializer<TraceServices::FTimingProfilerTimer_const_*_const_&,TraceServices::FAggregatedTimingStats_const_&>
                        *)local_75c,(bool *)&local_5f8);
    TStack_640.UnvisitedBitMask = TStack_640.UnvisitedBitMask & ~TStack_640._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_640);
  }
  DestructItems<UE::Tasks::TTask<void>,int>
            ((TTask<void> *)local_860.AllocatorInstance.Data,local_860.ArrayNum);
  if ((TTask<void> *)local_860.AllocatorInstance.Data != (TTask<void> *)0x0) {
    FMemory::Free(local_860.AllocatorInstance.Data);
  }
  while (plVar17 = local_820, plVar17 != (longlong *)0x0) {
    local_820 = (longlong *)*plVar17;
    if (plVar17 != (longlong *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)plVar17[2]);
      ::operator_delete(plVar17,0x18);
    }
  }
  local_440 = 0;
  local_820 = plVar17;
  if (local_448 != (void *)0x0) {
    FMemory::Free(local_448);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_488);
  local_490 = 0;
  pTVar27 = local_7d8;
  if (local_498 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_498);
    pTVar27 = local_7d8;
  }
LAB_14d40d66e:
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_4d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar27->SharedReferenceCount).ReferenceController);
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FCallstack>,int> @ 14d40d6c0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FCallstack>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FClassInfo>,int> @ 14d40d6f0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FClassInfo>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>,int> @ 14d40d720

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FContextSwitch>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>,int> @ 14d40d750

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>,int> @ 14d40d780

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFileActivity>,int> @ 14d40d7b0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFileActivity>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>,int> @ 14d40d7e0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFrame>,int> @ 14d40d810

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFrame>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>,int> @ 14d40d840

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>,int> @ 14d40d870

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>,int> @ 14d40d8a0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>,int> @ 14d40d8d0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>,int> @ 14d40d900

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>,int> @ 14d40d930

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>,int> @ 14d40d960

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>,int> @ 14d40d990

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMemoryTagSample>,int> @ 14d40d9c0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMemoryTagSample>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>,int> @ 14d40d9f0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>,int> @ 14d40da20

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FModule>,int> @ 14d40da50

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FModule>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>,int> @ 14d40da80

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FDbgHelpResolver::FModuleEntry>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>,int> @ 14d40dab0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FSymslibResolver::FModuleEntry>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>,int> @ 14d40dae0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>,int> @ 14d40db10

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>,int> @ 14d40db40

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerObjectInstance>,int> @ 14d40db70

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerObjectInstance>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>,int> @ 14d40dba0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>,int> @ 14d40dbd0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageScope>,int> @ 14d40dc00

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageScope>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>,int> @ 14d40dc30

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>,int> @ 14d40dc60

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRegionCategoryImpl>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>,int> @ 14d40dc90

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRegionTimerImpl>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>,int> @ 14d40dcc0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int> @ 14d40dcf0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FResolvedSymbol>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackFrame>,int> @ 14d40dd20

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackFrame>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>,int> @ 14d40dd50

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>,int> @ 14d40dd80

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>,int> @ 14d40ddb0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>,int> @ 14d40dde0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>,int> @ 14d40de10

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>,int> @ 14d40de40

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>,int> @ 14d40de70

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>,int> @ 14d40dea0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TVariablePagedArrayPage<double>,int> @ 14d40ded0

void __cdecl
DefaultConstructItems<TraceServices::TVariablePagedArrayPage<double>,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,int> @ 14d40df00

void __cdecl
DefaultConstructItems<TraceServices::TVariablePagedArrayPage<enum_TraceServices::ECounterOpType>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::TVariablePagedArrayPage<__int64>,int> @ 14d40df30

void __cdecl
DefaultConstructItems<TraceServices::TVariablePagedArrayPage<__int64>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<double>,int> @ 14d40df60

void __cdecl
DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<double>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>,int> @ 14d40df90

void __cdecl
DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<__int64>,int> @ 14d40dfc0

void __cdecl
DefaultConstructItems<TraceServices::TVariablePagedArrayPageGroup<__int64>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::`anonymous_namespace'::FAutoMappedFile,int> @ 14d40dff0

void __cdecl
DefaultConstructItems<TraceServices::_anonymous_namespace_::FAutoMappedFile,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage,int> @ 14d40e020

void __cdecl
DefaultConstructItems<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FEventScopeEntryPage,int> @ 14d40e060

void __cdecl
DefaultConstructItems<TraceServices::FEventScopeEntryPage,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined2 *)(puVar1 + 5) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FGpuQueueData,int> @ 14d40e0a0

void __cdecl DefaultConstructItems<TraceServices::FGpuQueueData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FGpuQueueInfo,int> @ 14d40e0d0

void __cdecl DefaultConstructItems<TraceServices::FGpuQueueInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 5;
    do {
      *(undefined4 *)(lVar1 + -5) = 0;
      *(undefined2 *)(lVar1 + -1) = 0;
      *(undefined1 *)(lVar1 + 1) = 0;
      *(undefined8 *)(lVar1 + 3) = 0;
      *(undefined8 *)(lVar1 + 0xb) = 0xffffffffffffffff;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`TraceServices::FTimingProfilerProvider::CreateButterflyInternal'::__l2::FLocalStackEntry,int> @ 14d40e110

void __cdecl
DefaultConstructItems<_TraceServices::FTimingProfilerProvider::CreateButterflyInternal_::__l2::FLocalStackEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FNetProfilerEventType,int> @ 14d40e150

void __cdecl
DefaultConstructItems<TraceServices::FNetProfilerEventType,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TraceServices::FNetProfilerGameInstanceInternal,int> @ 14d40e160

void __cdecl
DefaultConstructItems<TraceServices::FNetProfilerGameInstanceInternal,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-3] = 0;
      puVar1[-2] = 0x7ff0000000000000;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      puVar1[0x43] = 0;
      *(undefined4 *)(puVar1 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x224) = 0x80;
      puVar1 = puVar1 + 0x4b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FNetProfilerName,int> @ 14d40e1c0

void __cdecl DefaultConstructItems<TraceServices::FNetProfilerName,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TraceServices::FNetProfilerStatsCounterType,int> @ 14d40e1d0

void __cdecl
DefaultConstructItems<TraceServices::FNetProfilerStatsCounterType,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::FOutputEvent,int> @ 14d40e1e0

void __cdecl
DefaultConstructItems<_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled_::__l2::FOutputEvent,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 3;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::FOutputEvent,int> @ 14d40e210

void __cdecl
DefaultConstructItems<_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled_::__l2::FOutputEvent,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x14);
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::FOutputEvent,int> @ 14d40e240

void __cdecl
DefaultConstructItems<_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime_::__l2::FOutputEvent,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 3;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::FOutputEvent,int> @ 14d40e270

void __cdecl
DefaultConstructItems<_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime_::__l2::FOutputEvent,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x14);
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`TraceServices::FNetProfilerProvider::CreateAggregation'::__l2::FStackEntry,int> @ 14d40e2a0

void __cdecl
DefaultConstructItems<_TraceServices::FNetProfilerProvider::CreateAggregation_::__l2::FStackEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FSymslibResolver::FSymsUnit,int> @ 14d40e2d0

void __cdecl
DefaultConstructItems<TraceServices::FSymslibResolver::FSymsUnit,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TraceServices::FTaskInfo,__int64> @ 14d40e2e0

void __cdecl DefaultConstructItems<TraceServices::FTaskInfo,__int64>(void *param_1,long64 param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0xff;
      *(undefined8 *)(puVar1 + 8) = 0xffefffffffffffff;
      *(undefined8 *)(puVar1 + 0x10) = 0xffefffffffffffff;
      *(undefined8 *)(puVar1 + 0x18) = 0xffefffffffffffff;
      *(undefined8 *)(puVar1 + 0x20) = 0xffefffffffffffff;
      *(undefined8 *)(puVar1 + 0x28) = 0xffefffffffffffff;
      *(undefined8 *)(puVar1 + 0x30) = 0xffefffffffffffff;
      *(undefined8 *)(puVar1 + 0x38) = 0xffefffffffffffff;
      *(undefined8 *)(puVar1 + 0x40) = 0;
      *(undefined8 *)(puVar1 + 0x48) = 0;
      *(undefined8 *)(puVar1 + 0x50) = 0;
      *(undefined8 *)(puVar1 + 0x58) = 0;
      *(undefined8 *)(puVar1 + 0x60) = 0;
      *(undefined8 *)(puVar1 + 0x68) = 0;
      *(undefined8 *)(puVar1 + 0x70) = 0;
      *(undefined8 *)(puVar1 + 0x78) = 0;
      *(undefined8 *)(puVar1 + 0x80) = 0;
      *(undefined8 *)(puVar1 + 0x88) = 0;
      *(undefined8 *)(puVar1 + 0x90) = 0;
      *(undefined8 *)(puVar1 + 0x98) = 0;
      puVar1 = puVar1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::FTempRow,int> @ 14d40e390

void __cdecl
DefaultConstructItems<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FTempRow,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::FTempRow,int> @ 14d40e3d0

void __cdecl
DefaultConstructItems<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FTempRow,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TraceServices::FTimingProfilerTimer,int> @ 14d40e410

void __cdecl
DefaultConstructItems<TraceServices::FTimingProfilerTimer,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int> @ 14d40e450

void __cdecl
DefaultConstructItems<TVariant<FEmptyVariantState,TraceServices::FTableMergeTask::FBoth,TraceServices::FTableMergeTask::FOnlyA,TraceServices::FTableMergeTask::FOnlyB,TraceServices::FTableMergeTask::FMerged>,int>
          (void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int> @ 14d40e480

void __cdecl
DestructItems<TraceServices::FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
          (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *param_1,int param_2)

{
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *this;
  
  if (param_2 != 0) {
    this = &param_1->ScopeEntries;
    do {
      TraceServices::
      TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
      ::
      ~TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                ((TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                  *)(this + 1));
      TraceServices::
      TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
      ~TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>(this);
      this = (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)
             &this[0x802].LastPage;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int> @ 14d40e4d0

void __cdecl
DestructItems<TraceServices::FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
          (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *param_1,int param_2)

{
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *this;
  
  if (param_2 != 0) {
    this = &param_1->ScopeEntries;
    do {
      TraceServices::
      TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
      ::
      ~TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                ((TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                  *)(this + 1));
      TraceServices::
      TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
      ~TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>(this);
      this = this + 0x6de;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::`anonymous_namespace'::FAutoMappedFile,int> @ 14d40e520

void __cdecl
DestructItems<TraceServices::_anonymous_namespace_::FAutoMappedFile,int>
          (FAutoMappedFile *param_1,int param_2)

{
  IMappedFileRegion *pIVar1;
  IMappedFileHandle *pIVar2;
  FScriptContainerElement *pFVar3;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->Handle;
    do {
      pIVar1 = ((TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)(pTVar4 + 1))->
               Ptr;
      if (pIVar1 != (IMappedFileRegion *)0x0) {
        (**(code **)pIVar1->_padding_)(pIVar1,1);
      }
      pIVar2 = pTVar4->Ptr;
      if (pIVar2 != (IMappedFileHandle *)0x0) {
        (**(code **)pIVar2->_padding_)(pIVar2,1);
      }
      pFVar3 = (((FAutoMappedFile *)(pTVar4 + -2))->FilePath).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pTVar4 = pTVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int> @ 14d40e590

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,int> @ 14d40e5f0

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,int> @ 14d40e650

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int> @ 14d40e6b0

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int> @ 14d40e710

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int> @ 14d40e770

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int> @ 14d40e7d0

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int> @ 14d40e830

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int> @ 14d40e890

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int> @ 14d40e8f0

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FGpuQueueData,int> @ 14d40e950

void __cdecl DestructItems<TraceServices::FGpuQueueData,int>(FGpuQueueData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->WaitFenceArray).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SignalFenceArray).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TraceServices::FTimingProfilerProvider::FMetadata,int> @ 14d40e9a0

void __cdecl
DestructItems<TraceServices::FTimingProfilerProvider::FMetadata,int>(FMetadata *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Payload).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TraceServices::FMetadataSpec,int> @ 14d40e9e0

void __cdecl DestructItems<TraceServices::FMetadataSpec,int>(FMetadataSpec *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->FieldNames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FMetadataSpec *)(&param_1->FieldNames + 1);
  }
  return;
}

// DestructItems<TraceServices::FPsymResolver::FModuleEntry,int> @ 14d40ea20

void __cdecl
DestructItems<TraceServices::FPsymResolver::FModuleEntry,int>(FModuleEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ImageId;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FNetProfilerGameInstanceInternal,int> @ 14d40ea60

void __cdecl
DestructItems<TraceServices::FNetProfilerGameInstanceInternal,int>
          (FNetProfilerGameInstanceInternal *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Connections).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x4b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FTaskInfo,__int64> @ 14d40eab0

void __cdecl DestructItems<TraceServices::FTaskInfo,__int64>(FTaskInfo *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TraceServices::FTaskInfo::FRelationInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ParentTasks;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-2].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FWaitingForTasks,__int64> @ 14d40eb30

void __cdecl
DestructItems<TraceServices::FWaitingForTasks,__int64>(FWaitingForTasks *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Tasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,int> @ 14d40eb70

void __cdecl
DestructItems<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>,int> @ 14d40ebb0

void __cdecl
DestructItems<TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>,int>
          (TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>,int> @ 14d40ebf0

void __cdecl
DestructItems<TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>,int>
          (TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,int> @ 14d40ec30

void __cdecl
DestructItems<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,int>
          (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
           *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,int> @ 14d40ec70

void __cdecl
DestructItems<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,int>
          (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
           *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EnumerateCounterOpsInternal<double,double> @ 14d414a80

void __cdecl
TraceServices::EnumerateCounterOpsInternal<double,double>
          (TCounterData<double> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,double)> *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 local_res8 [8];
  double local_238;
  double local_230;
  TArray<double,TSizedDefaultAllocator<64>_> local_228;
  TCounterDataIterator<double> local_208;
  TArray<double,TSizedDefaultAllocator<64>_> *local_148;
  long64 lStack_140;
  double local_a8;
  ulonglong uStack_a0;
  double local_98;
  double dStack_90;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    local_228.ArrayMax = 0;
    local_208.FrameStartTimesIterator.Index = 0;
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayNum = 0;
    local_208.FrameStartTimesIterator.Container = param_2;
    if (!param_3) {
      local_208.FrameStartTimesIterator.Container = &local_228;
    }
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_208.TimestampsIterator,&param_1->Timestamps,0);
    TVariablePagedArray<enum_TraceServices::ECounterOpType>::GetIterator
              (&param_1->OpTypes,&local_208.OpTypesIterator);
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_208.OpArgumentsIterator,&param_1->OpArguments,0);
    local_208._168_8_ = local_208._168_8_ & 0xffffffffffffff00;
    local_208.CurrentOpArgument = 0.0;
    local_208.CurrentValue = 0.0;
    local_208.CurrentTime = 0.0;
    TCounterDataIterator<double>::UpdateValue(&local_208);
    bVar1 = true;
    bVar2 = true;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar10 = 0;
    local_148 = local_208.FrameStartTimesIterator.Container;
    lStack_140 = local_208.FrameStartTimesIterator.Index;
    local_a8 = local_208.CurrentTime;
    uStack_a0 = local_208._168_8_;
    local_98 = local_208.CurrentOpArgument;
    dStack_90 = local_208.CurrentValue;
    uVar9 = local_res8[0];
    dVar7 = local_208.CurrentTime;
    dVar8 = local_208.CurrentOpArgument;
    while (local_res8[0] = uVar10, local_208.CurrentTime = dVar7,
          local_208.CurrentOpArgument = dVar8,
          local_208.TimestampsIterator.CurrentItem != (double *)0x0) {
      uVar10 = (undefined1)local_208._168_8_;
      if (param_4 <= dVar7) {
        if (bVar2) {
          if ((!bVar1) && (param_6)) {
            local_238 = (double)CONCAT44(uVar6,uVar5);
            local_230 = (double)CONCAT44(uVar4,uVar3);
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_230,local_res8,&local_238);
            uVar9 = local_res8[0];
          }
          local_res8[0] = uVar9;
          bVar2 = false;
          uVar9 = local_res8[0];
        }
        local_res8[0] = uVar9;
        if (param_5 < dVar7) {
          uVar9 = local_res8[0];
          if (param_6) {
            local_res8[0] = uVar10;
            local_238 = dVar7;
            local_230 = dVar8;
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_238,local_res8,&local_230);
            uVar9 = local_res8[0];
          }
          break;
        }
        local_res8[0] = uVar10;
        local_238 = dVar7;
        local_230 = dVar8;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_238,local_res8,&local_230);
        uVar9 = local_res8[0];
      }
      local_res8[0] = uVar9;
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_208.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_208.OpTypesIterator);
      TVariablePagedArrayIterator<double>::operator++(&local_208.OpArgumentsIterator);
      TCounterDataIterator<double>::UpdateValue(&local_208);
      uVar3 = SUB84(dVar7,0);
      uVar4 = (int)((ulonglong)dVar7 >> 0x20);
      uVar5 = SUB84(dVar8,0);
      uVar6 = (int)((ulonglong)dVar8 >> 0x20);
      uVar9 = local_res8[0];
      dVar7 = local_208.CurrentTime;
      dVar8 = local_208.CurrentOpArgument;
    }
    local_res8[0] = uVar9;
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
  }
  return;
}

// EnumerateCounterOpsInternal<double,__int64> @ 14d414e30

void __cdecl
TraceServices::EnumerateCounterOpsInternal<double,__int64>
          (TCounterData<double> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,__int64)> *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 local_res8 [8];
  double local_238;
  longlong local_230;
  TArray<double,TSizedDefaultAllocator<64>_> local_228;
  TCounterDataIterator<double> local_208;
  TArray<double,TSizedDefaultAllocator<64>_> *local_148;
  long64 lStack_140;
  double local_a8;
  ulonglong uStack_a0;
  double local_98;
  double dStack_90;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    local_228.ArrayMax = 0;
    local_208.FrameStartTimesIterator.Index = 0;
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayNum = 0;
    local_208.FrameStartTimesIterator.Container = param_2;
    if (!param_3) {
      local_208.FrameStartTimesIterator.Container = &local_228;
    }
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_208.TimestampsIterator,&param_1->Timestamps,0);
    TVariablePagedArray<enum_TraceServices::ECounterOpType>::GetIterator
              (&param_1->OpTypes,&local_208.OpTypesIterator);
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_208.OpArgumentsIterator,&param_1->OpArguments,0);
    local_208._168_8_ = local_208._168_8_ & 0xffffffffffffff00;
    local_208.CurrentOpArgument = 0.0;
    local_208.CurrentValue = 0.0;
    local_208.CurrentTime = 0.0;
    TCounterDataIterator<double>::UpdateValue(&local_208);
    bVar1 = true;
    bVar2 = true;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar10 = 0;
    local_148 = local_208.FrameStartTimesIterator.Container;
    lStack_140 = local_208.FrameStartTimesIterator.Index;
    local_a8 = local_208.CurrentTime;
    uStack_a0 = local_208._168_8_;
    local_98 = local_208.CurrentOpArgument;
    dStack_90 = local_208.CurrentValue;
    uVar9 = local_res8[0];
    dVar7 = local_208.CurrentTime;
    dVar8 = local_208.CurrentOpArgument;
    while (local_res8[0] = uVar10, local_208.CurrentTime = dVar7,
          local_208.CurrentOpArgument = dVar8,
          local_208.TimestampsIterator.CurrentItem != (double *)0x0) {
      uVar10 = (undefined1)local_208._168_8_;
      if (param_4 <= dVar7) {
        if (bVar2) {
          if ((!bVar1) && (param_6)) {
            local_238 = (double)(longlong)(double)CONCAT44(uVar6,uVar5);
            local_230 = CONCAT44(uVar4,uVar3);
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_230,local_res8,&local_238);
            uVar9 = local_res8[0];
          }
          local_res8[0] = uVar9;
          bVar2 = false;
          uVar9 = local_res8[0];
        }
        local_res8[0] = uVar9;
        if (param_5 < dVar7) {
          uVar9 = local_res8[0];
          if (param_6) {
            local_230 = (longlong)dVar8;
            local_res8[0] = uVar10;
            local_238 = dVar7;
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_238,local_res8,&local_230);
            uVar9 = local_res8[0];
          }
          break;
        }
        local_230 = (longlong)dVar8;
        local_res8[0] = uVar10;
        local_238 = dVar7;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_238,local_res8,&local_230);
        uVar9 = local_res8[0];
      }
      local_res8[0] = uVar9;
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_208.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_208.OpTypesIterator);
      TVariablePagedArrayIterator<double>::operator++(&local_208.OpArgumentsIterator);
      TCounterDataIterator<double>::UpdateValue(&local_208);
      uVar3 = SUB84(dVar7,0);
      uVar4 = (int)((ulonglong)dVar7 >> 0x20);
      uVar5 = SUB84(dVar8,0);
      uVar6 = (int)((ulonglong)dVar8 >> 0x20);
      uVar9 = local_res8[0];
      dVar7 = local_208.CurrentTime;
      dVar8 = local_208.CurrentOpArgument;
    }
    local_res8[0] = uVar9;
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
  }
  return;
}

// EnumerateCounterOpsInternal<__int64,double> @ 14d4151e0

void __cdecl
TraceServices::EnumerateCounterOpsInternal<__int64,double>
          (TCounterData<__int64> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,double)> *param_7)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ECounterOpType EVar10;
  TCounterDataIterator<__int64> *pTVar11;
  ECounterOpType EVar12;
  TArray<double,TSizedDefaultAllocator<64>_> *pTVar13;
  ECounterOpType local_res8 [8];
  double local_2d8;
  double local_2d0;
  TArray<double,TSizedDefaultAllocator<64>_> local_2c8;
  TCounterDataIterator<__int64> local_2a8;
  TCounterDataIterator<__int64> local_1e8;
  TCounterDataIterator<__int64> local_128;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    pTVar13 = &local_2c8;
    if (param_3) {
      pTVar13 = param_2;
    }
    local_2c8.ArrayMax = 0;
    pTVar11 = &local_1e8;
    if (param_3) {
      pTVar11 = &local_128;
    }
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.ArrayNum = 0;
    pTVar11 = TCounterData<__int64>::GetIterator(param_1,pTVar11,pTVar13);
    bVar1 = true;
    bVar3 = true;
    local_2a8.FrameStartTimesIterator.Container = (pTVar11->FrameStartTimesIterator).Container;
    local_2a8.FrameStartTimesIterator.Index = (pTVar11->FrameStartTimesIterator).Index;
    local_2a8.TimestampsIterator.Outer = (pTVar11->TimestampsIterator).Outer;
    local_2a8.TimestampsIterator.CurrentPage = (pTVar11->TimestampsIterator).CurrentPage;
    local_2a8.TimestampsIterator.CurrentItemIndex = (pTVar11->TimestampsIterator).CurrentItemIndex;
    local_2a8.TimestampsIterator.CurrentItem = (pTVar11->TimestampsIterator).CurrentItem;
    local_2a8.TimestampsIterator.CurrentPageFirstItem =
         (pTVar11->TimestampsIterator).CurrentPageFirstItem;
    local_2a8.TimestampsIterator.CurrentPageLastItem =
         (pTVar11->TimestampsIterator).CurrentPageLastItem;
    local_2a8.OpTypesIterator.Outer = (pTVar11->OpTypesIterator).Outer;
    local_2a8.OpTypesIterator.CurrentPage = (pTVar11->OpTypesIterator).CurrentPage;
    local_2a8.OpTypesIterator.CurrentItemIndex = (pTVar11->OpTypesIterator).CurrentItemIndex;
    local_2a8.OpTypesIterator.CurrentItem = (pTVar11->OpTypesIterator).CurrentItem;
    local_2a8.OpTypesIterator.CurrentPageFirstItem = (pTVar11->OpTypesIterator).CurrentPageFirstItem
    ;
    local_2a8.OpTypesIterator.CurrentPageLastItem = (pTVar11->OpTypesIterator).CurrentPageLastItem;
    local_2a8.OpArgumentsIterator.CurrentItemIndex = (pTVar11->OpArgumentsIterator).CurrentItemIndex
    ;
    local_2a8.OpArgumentsIterator.CurrentItem = (pTVar11->OpArgumentsIterator).CurrentItem;
    local_2a8.OpArgumentsIterator.Outer = (pTVar11->OpArgumentsIterator).Outer;
    local_2a8.OpArgumentsIterator.CurrentPage = (pTVar11->OpArgumentsIterator).CurrentPage;
    local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
         (pTVar11->OpArgumentsIterator).CurrentPageFirstItem;
    local_2a8.OpArgumentsIterator.CurrentPageLastItem =
         (pTVar11->OpArgumentsIterator).CurrentPageLastItem;
    local_2a8.CurrentOp = pTVar11->CurrentOp;
    local_2a8._169_3_ = *(undefined3 *)&pTVar11->field_0xa9;
    local_2a8._172_4_ = *(undefined4 *)&pTVar11->field_0xac;
    local_2a8.CurrentValue = pTVar11->CurrentValue;
    uVar4 = 0;
    uVar5 = 0;
    lVar6 = 0;
    EVar12 = Set;
    uVar7 = *(undefined4 *)&pTVar11->CurrentTime;
    uVar8 = *(undefined4 *)((longlong)&pTVar11->CurrentTime + 4);
    lVar9 = pTVar11->CurrentOpArgument;
    EVar10 = local_res8[0];
    while (local_res8[0] = EVar12, local_2a8.CurrentTime._0_4_ = uVar7,
          local_2a8.CurrentTime._4_4_ = uVar8, local_2a8.CurrentOpArgument = lVar9,
          local_2a8.TimestampsIterator.CurrentItem != (double *)0x0) {
      dVar2 = (double)CONCAT44(uVar8,uVar7);
      EVar12 = local_2a8.CurrentOp;
      if (param_4 <= dVar2) {
        if (bVar3) {
          if ((!bVar1) && (param_6)) {
            local_2d0 = (double)CONCAT44(uVar5,uVar4);
            local_2d8 = (double)lVar6;
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_2d0,local_res8,&local_2d8);
            EVar10 = local_res8[0];
          }
          local_res8[0] = EVar10;
          bVar3 = false;
          EVar10 = local_res8[0];
        }
        local_res8[0] = EVar10;
        if (param_5 < dVar2) {
          EVar10 = local_res8[0];
          if (param_6) {
            local_2d0 = (double)lVar9;
            local_res8[0] = EVar12;
            local_2d8 = dVar2;
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_2d8,local_res8,&local_2d0);
            EVar10 = local_res8[0];
          }
          break;
        }
        local_2d0 = (double)lVar9;
        local_res8[0] = EVar12;
        local_2d8 = dVar2;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2d8,local_res8,&local_2d0);
        EVar10 = local_res8[0];
      }
      local_res8[0] = EVar10;
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_2a8.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_2a8.OpTypesIterator);
      if (local_2a8.OpArgumentsIterator.CurrentItem ==
          local_2a8.OpArgumentsIterator.CurrentPageLastItem) {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             ((longlong)local_2a8.OpArgumentsIterator.CurrentPageLastItem -
              (longlong)local_2a8.OpArgumentsIterator.CurrentItem >> 3) +
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        if (local_2a8.OpArgumentsIterator.CurrentPage ==
            (local_2a8.OpArgumentsIterator.Outer)->LastPage) {
          local_2a8.OpArgumentsIterator.CurrentPage = (TVariablePagedArrayPage<__int64> *)0x0;
          local_2a8.OpArgumentsIterator.CurrentItemIndex = 0;
          local_2a8.OpArgumentsIterator.CurrentItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem = (long64 *)0x0;
        }
        else {
          local_2a8.OpArgumentsIterator.CurrentItem =
               local_2a8.OpArgumentsIterator.CurrentPage[1].Items +
               local_2a8.OpArgumentsIterator.CurrentPage[1].ItemOffset;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem =
               local_2a8.OpArgumentsIterator.CurrentItem +
               (local_2a8.OpArgumentsIterator.CurrentPage[1].ItemCount - 1);
          local_2a8.OpArgumentsIterator.CurrentPage = local_2a8.OpArgumentsIterator.CurrentPage + 1;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
               local_2a8.OpArgumentsIterator.CurrentItem;
        }
      }
      else {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        local_2a8.OpArgumentsIterator.CurrentItem = local_2a8.OpArgumentsIterator.CurrentItem + 1;
      }
      TCounterDataIterator<__int64>::UpdateValue(&local_2a8);
      uVar4 = uVar7;
      uVar5 = uVar8;
      lVar6 = lVar9;
      uVar7 = local_2a8.CurrentTime._0_4_;
      uVar8 = local_2a8.CurrentTime._4_4_;
      lVar9 = local_2a8.CurrentOpArgument;
      EVar10 = local_res8[0];
    }
    local_res8[0] = EVar10;
    if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.AllocatorInstance.Data);
    }
  }
  return;
}

// EnumerateCounterOpsInternal<__int64,__int64> @ 14d415540

void __cdecl
TraceServices::EnumerateCounterOpsInternal<__int64,__int64>
          (TCounterData<__int64> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,__int64)> *param_7)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ECounterOpType EVar9;
  double dVar10;
  TCounterDataIterator<__int64> *pTVar11;
  ECounterOpType EVar12;
  TArray<double,TSizedDefaultAllocator<64>_> *pTVar13;
  ECounterOpType local_res8 [8];
  double local_2d8;
  double local_2d0;
  TArray<double,TSizedDefaultAllocator<64>_> local_2c8;
  TCounterDataIterator<__int64> local_2a8;
  TCounterDataIterator<__int64> local_1e8;
  TCounterDataIterator<__int64> local_128;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    pTVar13 = &local_2c8;
    if (param_3) {
      pTVar13 = param_2;
    }
    local_2c8.ArrayMax = 0;
    pTVar11 = &local_1e8;
    if (param_3) {
      pTVar11 = &local_128;
    }
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.ArrayNum = 0;
    pTVar11 = TCounterData<__int64>::GetIterator(param_1,pTVar11,pTVar13);
    bVar1 = true;
    bVar4 = true;
    local_2a8.FrameStartTimesIterator.Container = (pTVar11->FrameStartTimesIterator).Container;
    local_2a8.FrameStartTimesIterator.Index = (pTVar11->FrameStartTimesIterator).Index;
    local_2a8.TimestampsIterator.Outer = (pTVar11->TimestampsIterator).Outer;
    local_2a8.TimestampsIterator.CurrentPage = (pTVar11->TimestampsIterator).CurrentPage;
    local_2a8.TimestampsIterator.CurrentItemIndex = (pTVar11->TimestampsIterator).CurrentItemIndex;
    local_2a8.TimestampsIterator.CurrentItem = (pTVar11->TimestampsIterator).CurrentItem;
    local_2a8.TimestampsIterator.CurrentPageFirstItem =
         (pTVar11->TimestampsIterator).CurrentPageFirstItem;
    local_2a8.TimestampsIterator.CurrentPageLastItem =
         (pTVar11->TimestampsIterator).CurrentPageLastItem;
    local_2a8.OpTypesIterator.Outer = (pTVar11->OpTypesIterator).Outer;
    local_2a8.OpTypesIterator.CurrentPage = (pTVar11->OpTypesIterator).CurrentPage;
    local_2a8.OpTypesIterator.CurrentItemIndex = (pTVar11->OpTypesIterator).CurrentItemIndex;
    local_2a8.OpTypesIterator.CurrentItem = (pTVar11->OpTypesIterator).CurrentItem;
    local_2a8.OpTypesIterator.CurrentPageFirstItem = (pTVar11->OpTypesIterator).CurrentPageFirstItem
    ;
    local_2a8.OpTypesIterator.CurrentPageLastItem = (pTVar11->OpTypesIterator).CurrentPageLastItem;
    local_2a8.OpArgumentsIterator.CurrentItemIndex = (pTVar11->OpArgumentsIterator).CurrentItemIndex
    ;
    local_2a8.OpArgumentsIterator.CurrentItem = (pTVar11->OpArgumentsIterator).CurrentItem;
    local_2a8.OpArgumentsIterator.Outer = (pTVar11->OpArgumentsIterator).Outer;
    local_2a8.OpArgumentsIterator.CurrentPage = (pTVar11->OpArgumentsIterator).CurrentPage;
    local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
         (pTVar11->OpArgumentsIterator).CurrentPageFirstItem;
    local_2a8.OpArgumentsIterator.CurrentPageLastItem =
         (pTVar11->OpArgumentsIterator).CurrentPageLastItem;
    local_2a8.CurrentOp = pTVar11->CurrentOp;
    local_2a8._169_3_ = *(undefined3 *)&pTVar11->field_0xa9;
    local_2a8._172_4_ = *(undefined4 *)&pTVar11->field_0xac;
    local_2a8.CurrentOpArgument._0_4_ = (undefined4)pTVar11->CurrentOpArgument;
    local_2a8.CurrentOpArgument._4_4_ = *(undefined4 *)((longlong)&pTVar11->CurrentOpArgument + 4);
    local_2a8.CurrentValue._0_4_ = (undefined4)pTVar11->CurrentValue;
    local_2a8.CurrentValue._4_4_ = *(undefined4 *)((longlong)&pTVar11->CurrentValue + 4);
    uVar5 = 0;
    uVar6 = 0;
    dVar3 = 0.0;
    EVar12 = Set;
    uVar7 = *(undefined4 *)&pTVar11->CurrentTime;
    uVar8 = *(undefined4 *)((longlong)&pTVar11->CurrentTime + 4);
    EVar9 = local_res8[0];
    dVar10 = local_2d8;
    while (local_res8[0] = EVar12, local_2d8 = dVar3, local_2a8.CurrentTime._0_4_ = uVar7,
          local_2a8.CurrentTime._4_4_ = uVar8,
          local_2a8.TimestampsIterator.CurrentItem != (double *)0x0) {
      dVar2 = (double)CONCAT44(uVar8,uVar7);
      dVar3 = (double)CONCAT44(local_2a8.CurrentOpArgument._4_4_,
                               (undefined4)local_2a8.CurrentOpArgument);
      EVar12 = local_2a8.CurrentOp;
      if (param_4 <= dVar2) {
        if (bVar4) {
          if ((!bVar1) && (param_6)) {
            local_2d0 = (double)CONCAT44(uVar6,uVar5);
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_2d0,local_res8,&local_2d8);
            EVar9 = local_res8[0];
            dVar10 = local_2d8;
          }
          local_2d8 = dVar10;
          local_res8[0] = EVar9;
          bVar4 = false;
          EVar9 = local_res8[0];
          dVar10 = local_2d8;
        }
        local_2d8 = dVar10;
        local_res8[0] = EVar9;
        if (param_5 < dVar2) {
          EVar9 = local_res8[0];
          dVar10 = local_2d8;
          if (param_6) {
            local_res8[0] = EVar12;
            local_2d8 = dVar2;
            local_2d0 = dVar3;
            (**(code **)param_7)
                      (*(undefined8 *)&param_7->field_0x8,&local_2d8,local_res8,&local_2d0);
            EVar9 = local_res8[0];
            dVar10 = local_2d8;
          }
          break;
        }
        local_res8[0] = EVar12;
        local_2d8 = dVar2;
        local_2d0 = dVar3;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2d8,local_res8,&local_2d0);
        EVar9 = local_res8[0];
        dVar10 = local_2d8;
      }
      local_2d8 = dVar10;
      local_res8[0] = EVar9;
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_2a8.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_2a8.OpTypesIterator);
      if (local_2a8.OpArgumentsIterator.CurrentItem ==
          local_2a8.OpArgumentsIterator.CurrentPageLastItem) {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             ((longlong)local_2a8.OpArgumentsIterator.CurrentPageLastItem -
              (longlong)local_2a8.OpArgumentsIterator.CurrentItem >> 3) +
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        if (local_2a8.OpArgumentsIterator.CurrentPage ==
            (local_2a8.OpArgumentsIterator.Outer)->LastPage) {
          local_2a8.OpArgumentsIterator.CurrentPage = (TVariablePagedArrayPage<__int64> *)0x0;
          local_2a8.OpArgumentsIterator.CurrentItemIndex = 0;
          local_2a8.OpArgumentsIterator.CurrentItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem = (long64 *)0x0;
        }
        else {
          local_2a8.OpArgumentsIterator.CurrentItem =
               local_2a8.OpArgumentsIterator.CurrentPage[1].Items +
               local_2a8.OpArgumentsIterator.CurrentPage[1].ItemOffset;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem =
               local_2a8.OpArgumentsIterator.CurrentItem +
               (local_2a8.OpArgumentsIterator.CurrentPage[1].ItemCount - 1);
          local_2a8.OpArgumentsIterator.CurrentPage = local_2a8.OpArgumentsIterator.CurrentPage + 1;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
               local_2a8.OpArgumentsIterator.CurrentItem;
        }
      }
      else {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        local_2a8.OpArgumentsIterator.CurrentItem = local_2a8.OpArgumentsIterator.CurrentItem + 1;
      }
      TCounterDataIterator<__int64>::UpdateValue(&local_2a8);
      uVar5 = uVar7;
      uVar6 = uVar8;
      uVar7 = local_2a8.CurrentTime._0_4_;
      uVar8 = local_2a8.CurrentTime._4_4_;
      EVar9 = local_res8[0];
      dVar10 = local_2d8;
    }
    local_2d8 = dVar10;
    local_res8[0] = EVar9;
    if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.AllocatorInstance.Data);
    }
  }
  return;
}

// EnumerateCounterValuesInternal<double,double> @ 14d415880

void __cdecl
TraceServices::EnumerateCounterValuesInternal<double,double>
          (TCounterData<double> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,double)> *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double local_res8;
  double local_218;
  TArray<double,TSizedDefaultAllocator<64>_> local_210;
  TCounterDataIterator<double> local_1f8;
  TArray<double,TSizedDefaultAllocator<64>_> *local_138;
  long64 lStack_130;
  double local_98;
  ulonglong uStack_90;
  double local_88;
  double dStack_80;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    local_210.ArrayMax = 0;
    local_1f8.FrameStartTimesIterator.Index = 0;
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_1f8.FrameStartTimesIterator.Container = param_2;
    if (!param_3) {
      local_1f8.FrameStartTimesIterator.Container = &local_210;
    }
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_1f8.TimestampsIterator,&param_1->Timestamps,0);
    TVariablePagedArray<enum_TraceServices::ECounterOpType>::GetIterator
              (&param_1->OpTypes,&local_1f8.OpTypesIterator);
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_1f8.OpArgumentsIterator,&param_1->OpArguments,0);
    local_1f8._168_8_ = local_1f8._168_8_ & 0xffffffffffffff00;
    local_1f8.CurrentOpArgument = 0.0;
    local_1f8.CurrentValue = 0.0;
    local_1f8.CurrentTime = 0.0;
    TCounterDataIterator<double>::UpdateValue(&local_1f8);
    bVar1 = true;
    bVar2 = true;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    local_138 = local_1f8.FrameStartTimesIterator.Container;
    lStack_130 = local_1f8.FrameStartTimesIterator.Index;
    local_98 = local_1f8.CurrentTime;
    uStack_90 = local_1f8._168_8_;
    local_88 = local_1f8.CurrentOpArgument;
    dStack_80 = local_1f8.CurrentValue;
    dVar7 = local_1f8.CurrentTime;
    dVar8 = local_1f8.CurrentValue;
    while (local_1f8.CurrentTime = dVar7, local_1f8.CurrentValue = dVar8,
          local_1f8.TimestampsIterator.CurrentItem != (double *)0x0) {
      if (param_4 <= dVar7) {
        if (bVar2) {
          if ((!bVar1) && (param_6)) {
            local_res8 = (double)CONCAT44(uVar6,uVar5);
            local_218 = (double)CONCAT44(uVar4,uVar3);
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_218,&local_res8);
          }
          bVar2 = false;
        }
        if (param_5 < dVar7) {
          if (param_6) {
            local_res8 = dVar8;
            local_218 = dVar7;
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_218,&local_res8);
          }
          break;
        }
        local_res8 = dVar8;
        local_218 = dVar7;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_218,&local_res8);
      }
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_1f8.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_1f8.OpTypesIterator);
      TVariablePagedArrayIterator<double>::operator++(&local_1f8.OpArgumentsIterator);
      TCounterDataIterator<double>::UpdateValue(&local_1f8);
      uVar3 = SUB84(dVar7,0);
      uVar4 = (int)((ulonglong)dVar7 >> 0x20);
      uVar5 = SUB84(dVar8,0);
      uVar6 = (int)((ulonglong)dVar8 >> 0x20);
      dVar7 = local_1f8.CurrentTime;
      dVar8 = local_1f8.CurrentValue;
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
  }
  return;
}

// EnumerateCounterValuesInternal<double,__int64> @ 14d415be0

void __cdecl
TraceServices::EnumerateCounterValuesInternal<double,__int64>
          (TCounterData<double> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,__int64)> *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  longlong local_res8;
  double local_218;
  TArray<double,TSizedDefaultAllocator<64>_> local_210;
  TCounterDataIterator<double> local_1f8;
  TArray<double,TSizedDefaultAllocator<64>_> *local_138;
  long64 lStack_130;
  double local_98;
  ulonglong uStack_90;
  double local_88;
  double dStack_80;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    local_210.ArrayMax = 0;
    local_1f8.FrameStartTimesIterator.Index = 0;
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_1f8.FrameStartTimesIterator.Container = param_2;
    if (!param_3) {
      local_1f8.FrameStartTimesIterator.Container = &local_210;
    }
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_1f8.TimestampsIterator,&param_1->Timestamps,0);
    TVariablePagedArray<enum_TraceServices::ECounterOpType>::GetIterator
              (&param_1->OpTypes,&local_1f8.OpTypesIterator);
    TVariablePagedArrayIterator<double>::TVariablePagedArrayIterator<double>
              (&local_1f8.OpArgumentsIterator,&param_1->OpArguments,0);
    local_1f8._168_8_ = local_1f8._168_8_ & 0xffffffffffffff00;
    local_1f8.CurrentOpArgument = 0.0;
    local_1f8.CurrentValue = 0.0;
    local_1f8.CurrentTime = 0.0;
    TCounterDataIterator<double>::UpdateValue(&local_1f8);
    bVar1 = true;
    bVar2 = true;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    local_138 = local_1f8.FrameStartTimesIterator.Container;
    lStack_130 = local_1f8.FrameStartTimesIterator.Index;
    local_98 = local_1f8.CurrentTime;
    uStack_90 = local_1f8._168_8_;
    local_88 = local_1f8.CurrentOpArgument;
    dStack_80 = local_1f8.CurrentValue;
    dVar7 = local_1f8.CurrentTime;
    dVar8 = local_1f8.CurrentValue;
    while (local_1f8.CurrentTime = dVar7, local_1f8.CurrentValue = dVar8,
          local_1f8.TimestampsIterator.CurrentItem != (double *)0x0) {
      if (param_4 <= dVar7) {
        if (bVar2) {
          if ((!bVar1) && (param_6)) {
            local_res8 = (longlong)(double)CONCAT44(uVar6,uVar5);
            local_218 = (double)CONCAT44(uVar4,uVar3);
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_218,&local_res8);
          }
          bVar2 = false;
        }
        if (param_5 < dVar7) {
          if (param_6) {
            local_res8 = (longlong)dVar8;
            local_218 = dVar7;
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_218,&local_res8);
          }
          break;
        }
        local_res8 = (longlong)dVar8;
        local_218 = dVar7;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_218,&local_res8);
      }
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_1f8.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_1f8.OpTypesIterator);
      TVariablePagedArrayIterator<double>::operator++(&local_1f8.OpArgumentsIterator);
      TCounterDataIterator<double>::UpdateValue(&local_1f8);
      uVar3 = SUB84(dVar7,0);
      uVar4 = (int)((ulonglong)dVar7 >> 0x20);
      uVar5 = SUB84(dVar8,0);
      uVar6 = (int)((ulonglong)dVar8 >> 0x20);
      dVar7 = local_1f8.CurrentTime;
      dVar8 = local_1f8.CurrentValue;
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
  }
  return;
}

// EnumerateCounterValuesInternal<__int64,double> @ 14d415f50

void __cdecl
TraceServices::EnumerateCounterValuesInternal<__int64,double>
          (TCounterData<__int64> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,double)> *param_7)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  TCounterDataIterator<__int64> *pTVar10;
  TArray<double,TSizedDefaultAllocator<64>_> *pTVar11;
  double local_res8;
  double local_2c8;
  TArray<double,TSizedDefaultAllocator<64>_> local_2c0;
  TCounterDataIterator<__int64> local_2a8;
  TCounterDataIterator<__int64> local_1e8;
  TCounterDataIterator<__int64> local_128;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    pTVar11 = &local_2c0;
    if (param_3) {
      pTVar11 = param_2;
    }
    local_2c0.ArrayMax = 0;
    pTVar10 = &local_1e8;
    if (param_3) {
      pTVar10 = &local_128;
    }
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    pTVar10 = TCounterData<__int64>::GetIterator(param_1,pTVar10,pTVar11);
    bVar1 = true;
    bVar3 = true;
    local_2a8.FrameStartTimesIterator.Container = (pTVar10->FrameStartTimesIterator).Container;
    local_2a8.FrameStartTimesIterator.Index = (pTVar10->FrameStartTimesIterator).Index;
    local_2a8.TimestampsIterator.Outer = (pTVar10->TimestampsIterator).Outer;
    local_2a8.TimestampsIterator.CurrentPage = (pTVar10->TimestampsIterator).CurrentPage;
    local_2a8.TimestampsIterator.CurrentItemIndex = (pTVar10->TimestampsIterator).CurrentItemIndex;
    local_2a8.TimestampsIterator.CurrentItem = (pTVar10->TimestampsIterator).CurrentItem;
    local_2a8.TimestampsIterator.CurrentPageFirstItem =
         (pTVar10->TimestampsIterator).CurrentPageFirstItem;
    local_2a8.TimestampsIterator.CurrentPageLastItem =
         (pTVar10->TimestampsIterator).CurrentPageLastItem;
    local_2a8.OpTypesIterator.Outer = (pTVar10->OpTypesIterator).Outer;
    local_2a8.OpTypesIterator.CurrentPage = (pTVar10->OpTypesIterator).CurrentPage;
    local_2a8.OpTypesIterator.CurrentItemIndex = (pTVar10->OpTypesIterator).CurrentItemIndex;
    local_2a8.OpTypesIterator.CurrentItem = (pTVar10->OpTypesIterator).CurrentItem;
    local_2a8.OpTypesIterator.CurrentPageFirstItem = (pTVar10->OpTypesIterator).CurrentPageFirstItem
    ;
    local_2a8.OpTypesIterator.CurrentPageLastItem = (pTVar10->OpTypesIterator).CurrentPageLastItem;
    local_2a8.OpArgumentsIterator.CurrentItemIndex = (pTVar10->OpArgumentsIterator).CurrentItemIndex
    ;
    local_2a8.OpArgumentsIterator.CurrentItem = (pTVar10->OpArgumentsIterator).CurrentItem;
    local_2a8.OpArgumentsIterator.Outer = (pTVar10->OpArgumentsIterator).Outer;
    local_2a8.OpArgumentsIterator.CurrentPage = (pTVar10->OpArgumentsIterator).CurrentPage;
    local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
         (pTVar10->OpArgumentsIterator).CurrentPageFirstItem;
    local_2a8.OpArgumentsIterator.CurrentPageLastItem =
         (pTVar10->OpArgumentsIterator).CurrentPageLastItem;
    local_2a8.CurrentOp = pTVar10->CurrentOp;
    local_2a8._169_3_ = *(undefined3 *)&pTVar10->field_0xa9;
    local_2a8._172_4_ = *(undefined4 *)&pTVar10->field_0xac;
    local_2a8.CurrentOpArgument = pTVar10->CurrentOpArgument;
    uVar4 = 0;
    uVar5 = 0;
    lVar6 = 0;
    uVar7 = *(undefined4 *)&pTVar10->CurrentTime;
    uVar8 = *(undefined4 *)((longlong)&pTVar10->CurrentTime + 4);
    lVar9 = pTVar10->CurrentValue;
    while (local_2a8.CurrentTime._0_4_ = uVar7, local_2a8.CurrentTime._4_4_ = uVar8,
          local_2a8.CurrentValue = lVar9, local_2a8.TimestampsIterator.CurrentItem != (double *)0x0)
    {
      dVar2 = (double)CONCAT44(uVar8,uVar7);
      if (param_4 <= dVar2) {
        if (bVar3) {
          if ((!bVar1) && (param_6)) {
            local_2c8 = (double)CONCAT44(uVar5,uVar4);
            local_res8 = (double)lVar6;
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2c8,&local_res8);
          }
          bVar3 = false;
        }
        if (param_5 < dVar2) {
          if (param_6) {
            local_res8 = (double)lVar9;
            local_2c8 = dVar2;
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2c8,&local_res8);
          }
          break;
        }
        local_res8 = (double)lVar9;
        local_2c8 = dVar2;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2c8,&local_res8);
      }
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_2a8.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_2a8.OpTypesIterator);
      if (local_2a8.OpArgumentsIterator.CurrentItem ==
          local_2a8.OpArgumentsIterator.CurrentPageLastItem) {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             ((longlong)local_2a8.OpArgumentsIterator.CurrentPageLastItem -
              (longlong)local_2a8.OpArgumentsIterator.CurrentItem >> 3) +
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        if (local_2a8.OpArgumentsIterator.CurrentPage ==
            (local_2a8.OpArgumentsIterator.Outer)->LastPage) {
          local_2a8.OpArgumentsIterator.CurrentPage = (TVariablePagedArrayPage<__int64> *)0x0;
          local_2a8.OpArgumentsIterator.CurrentItemIndex = 0;
          local_2a8.OpArgumentsIterator.CurrentItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem = (long64 *)0x0;
        }
        else {
          local_2a8.OpArgumentsIterator.CurrentItem =
               local_2a8.OpArgumentsIterator.CurrentPage[1].Items +
               local_2a8.OpArgumentsIterator.CurrentPage[1].ItemOffset;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem =
               local_2a8.OpArgumentsIterator.CurrentItem +
               (local_2a8.OpArgumentsIterator.CurrentPage[1].ItemCount - 1);
          local_2a8.OpArgumentsIterator.CurrentPage = local_2a8.OpArgumentsIterator.CurrentPage + 1;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
               local_2a8.OpArgumentsIterator.CurrentItem;
        }
      }
      else {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        local_2a8.OpArgumentsIterator.CurrentItem = local_2a8.OpArgumentsIterator.CurrentItem + 1;
      }
      TCounterDataIterator<__int64>::UpdateValue(&local_2a8);
      uVar4 = uVar7;
      uVar5 = uVar8;
      lVar6 = lVar9;
      uVar7 = local_2a8.CurrentTime._0_4_;
      uVar8 = local_2a8.CurrentTime._4_4_;
      lVar9 = local_2a8.CurrentValue;
    }
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
  }
  return;
}

// EnumerateCounterValuesInternal<__int64,__int64> @ 14d416280

void __cdecl
TraceServices::EnumerateCounterValuesInternal<__int64,__int64>
          (TCounterData<__int64> *param_1,TArray<double,TSizedDefaultAllocator<64>_> *param_2,
          bool param_3,double param_4,double param_5,bool param_6,
          TFunctionRef<void___cdecl(double,__int64)> *param_7)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long64 lVar8;
  long64 lVar9;
  long64 lVar10;
  TCounterDataIterator<__int64> *pTVar11;
  TArray<double,TSizedDefaultAllocator<64>_> *pTVar12;
  long64 local_res8;
  double local_2c8;
  TArray<double,TSizedDefaultAllocator<64>_> local_2c0;
  TCounterDataIterator<__int64> local_2a8;
  TCounterDataIterator<__int64> local_1e8;
  TCounterDataIterator<__int64> local_128;
  
  if ((param_1->Timestamps).TotalItemCount != 0) {
    pTVar12 = &local_2c0;
    if (param_3) {
      pTVar12 = param_2;
    }
    local_2c0.ArrayMax = 0;
    pTVar11 = &local_1e8;
    if (param_3) {
      pTVar11 = &local_128;
    }
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    pTVar11 = TCounterData<__int64>::GetIterator(param_1,pTVar11,pTVar12);
    bVar1 = true;
    bVar3 = true;
    local_2a8.FrameStartTimesIterator.Container = (pTVar11->FrameStartTimesIterator).Container;
    local_2a8.FrameStartTimesIterator.Index = (pTVar11->FrameStartTimesIterator).Index;
    local_2a8.TimestampsIterator.Outer = (pTVar11->TimestampsIterator).Outer;
    local_2a8.TimestampsIterator.CurrentPage = (pTVar11->TimestampsIterator).CurrentPage;
    local_2a8.TimestampsIterator.CurrentItemIndex = (pTVar11->TimestampsIterator).CurrentItemIndex;
    local_2a8.TimestampsIterator.CurrentItem = (pTVar11->TimestampsIterator).CurrentItem;
    local_2a8.TimestampsIterator.CurrentPageFirstItem =
         (pTVar11->TimestampsIterator).CurrentPageFirstItem;
    local_2a8.TimestampsIterator.CurrentPageLastItem =
         (pTVar11->TimestampsIterator).CurrentPageLastItem;
    local_2a8.OpTypesIterator.Outer = (pTVar11->OpTypesIterator).Outer;
    local_2a8.OpTypesIterator.CurrentPage = (pTVar11->OpTypesIterator).CurrentPage;
    local_2a8.OpTypesIterator.CurrentItemIndex = (pTVar11->OpTypesIterator).CurrentItemIndex;
    local_2a8.OpTypesIterator.CurrentItem = (pTVar11->OpTypesIterator).CurrentItem;
    local_2a8.OpTypesIterator.CurrentPageFirstItem = (pTVar11->OpTypesIterator).CurrentPageFirstItem
    ;
    local_2a8.OpTypesIterator.CurrentPageLastItem = (pTVar11->OpTypesIterator).CurrentPageLastItem;
    local_2a8.OpArgumentsIterator.CurrentItemIndex = (pTVar11->OpArgumentsIterator).CurrentItemIndex
    ;
    local_2a8.OpArgumentsIterator.CurrentItem = (pTVar11->OpArgumentsIterator).CurrentItem;
    local_2a8.OpArgumentsIterator.Outer = (pTVar11->OpArgumentsIterator).Outer;
    local_2a8.OpArgumentsIterator.CurrentPage = (pTVar11->OpArgumentsIterator).CurrentPage;
    local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
         (pTVar11->OpArgumentsIterator).CurrentPageFirstItem;
    local_2a8.OpArgumentsIterator.CurrentPageLastItem =
         (pTVar11->OpArgumentsIterator).CurrentPageLastItem;
    local_2a8.CurrentOp = pTVar11->CurrentOp;
    local_2a8._169_3_ = *(undefined3 *)&pTVar11->field_0xa9;
    local_2a8._172_4_ = *(undefined4 *)&pTVar11->field_0xac;
    local_2a8.CurrentOpArgument = pTVar11->CurrentOpArgument;
    uVar4 = 0;
    uVar5 = 0;
    lVar10 = 0;
    uVar6 = *(undefined4 *)&pTVar11->CurrentTime;
    uVar7 = *(undefined4 *)((longlong)&pTVar11->CurrentTime + 4);
    lVar8 = pTVar11->CurrentValue;
    lVar9 = local_res8;
    while (local_res8 = lVar10, local_2a8.CurrentTime._0_4_ = uVar6,
          local_2a8.CurrentTime._4_4_ = uVar7, local_2a8.CurrentValue = lVar8,
          local_2a8.TimestampsIterator.CurrentItem != (double *)0x0) {
      dVar2 = (double)CONCAT44(uVar7,uVar6);
      if (param_4 <= dVar2) {
        if (bVar3) {
          if ((!bVar1) && (param_6)) {
            local_2c8 = (double)CONCAT44(uVar5,uVar4);
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2c8,&local_res8);
            lVar9 = local_res8;
          }
          local_res8 = lVar9;
          bVar3 = false;
          lVar9 = local_res8;
        }
        local_res8 = lVar9;
        if (param_5 < dVar2) {
          lVar9 = local_res8;
          if (param_6) {
            local_res8 = lVar8;
            local_2c8 = dVar2;
            (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2c8,&local_res8);
            lVar9 = local_res8;
          }
          break;
        }
        local_res8 = lVar8;
        local_2c8 = dVar2;
        (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_2c8,&local_res8);
        lVar9 = local_res8;
      }
      local_res8 = lVar9;
      bVar1 = false;
      TVariablePagedArrayIterator<double>::operator++(&local_2a8.TimestampsIterator);
      TVariablePagedArrayIterator<enum_TraceServices::ECounterOpType>::operator++
                (&local_2a8.OpTypesIterator);
      if (local_2a8.OpArgumentsIterator.CurrentItem ==
          local_2a8.OpArgumentsIterator.CurrentPageLastItem) {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             ((longlong)local_2a8.OpArgumentsIterator.CurrentPageLastItem -
              (longlong)local_2a8.OpArgumentsIterator.CurrentItem >> 3) +
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        if (local_2a8.OpArgumentsIterator.CurrentPage ==
            (local_2a8.OpArgumentsIterator.Outer)->LastPage) {
          local_2a8.OpArgumentsIterator.CurrentPage = (TVariablePagedArrayPage<__int64> *)0x0;
          local_2a8.OpArgumentsIterator.CurrentItemIndex = 0;
          local_2a8.OpArgumentsIterator.CurrentItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem = (long64 *)0x0;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem = (long64 *)0x0;
        }
        else {
          local_2a8.OpArgumentsIterator.CurrentItem =
               local_2a8.OpArgumentsIterator.CurrentPage[1].Items +
               local_2a8.OpArgumentsIterator.CurrentPage[1].ItemOffset;
          local_2a8.OpArgumentsIterator.CurrentPageLastItem =
               local_2a8.OpArgumentsIterator.CurrentItem +
               (local_2a8.OpArgumentsIterator.CurrentPage[1].ItemCount - 1);
          local_2a8.OpArgumentsIterator.CurrentPage = local_2a8.OpArgumentsIterator.CurrentPage + 1;
          local_2a8.OpArgumentsIterator.CurrentPageFirstItem =
               local_2a8.OpArgumentsIterator.CurrentItem;
        }
      }
      else {
        local_2a8.OpArgumentsIterator.CurrentItemIndex =
             local_2a8.OpArgumentsIterator.CurrentItemIndex + 1;
        local_2a8.OpArgumentsIterator.CurrentItem = local_2a8.OpArgumentsIterator.CurrentItem + 1;
      }
      TCounterDataIterator<__int64>::UpdateValue(&local_2a8);
      uVar4 = uVar6;
      uVar5 = uVar7;
      lVar10 = lVar8;
      uVar6 = local_2a8.CurrentTime._0_4_;
      uVar7 = local_2a8.CurrentTime._4_4_;
      lVar8 = local_2a8.CurrentValue;
      lVar9 = local_res8;
    }
    local_res8 = lVar9;
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
  }
  return;
}

// ForEach<TArray<SYMS_DefArena_*,TSizedDefaultAllocator<32>_>_&,void_(__cdecl*)(SYMS_DefArena_*)> @ 14d417870

void __cdecl
Algo::
ForEach<TArray<SYMS_DefArena_*,TSizedDefaultAllocator<32>_>_&,void_(__cdecl*)(SYMS_DefArena_*)>
          (TArray<SYMS_DefArena_*,TSizedDefaultAllocator<32>_> *param_1,
          _func___cdecl_void_SYMS_DefArena_ptr *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<SYMS_DefArena_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (*param_2)(*(SYMS_DefArena **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ForEach<TMap<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>_>_&,`TraceServices::FRegionProvider::OnAnalysisSessionEnded'::__l2::<lambda_1>_> @ 14d4178d0

void __cdecl
Algo::
ForEach<TMap<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>_>_&,_TraceServices::FRegionProvider::OnAnalysisSessionEnded_::__l2::<lambda_1>_>
          (TMap<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions,0>_>
           *param_1,<lambda_1> param_2)

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
  FRegionProvider *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d41796d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14d41796d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res10 = param_2.__this;
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
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d417a70;
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
LAB_14d417a70:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    `TraceServices::FRegionProvider::OnAnalysisSessionEnded'::__l2::<lambda_1>::
    operator()<TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions>_>
              (&local_res10,
               (TTuple<TStringView<wchar_t>,TraceServices::FRegionProvider::FOpenRegions> *)
               (*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x28));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<TMap<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>_&,`TraceServices::FRegionProvider::OnAnalysisSessionEnded'::__l2::<lambda_1>_> @ 14d417ae0

void __cdecl
Algo::
ForEach<TMap<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>_&,_TraceServices::FRegionProvider::OnAnalysisSessionEnded_::__l2::<lambda_1>_>
          (TMap<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
           *param_1,<lambda_1> param_2)

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
  FRegionProvider *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d417b7d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14d417b7d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res10 = param_2.__this;
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
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d417c80;
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
LAB_14d417c80:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    `TraceServices::FRegionProvider::OnAnalysisSessionEnded'::__l2::<lambda_1>::
    operator()<TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions>_>
              (&local_res10,
               (TTuple<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions> *)
               ((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)param_1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_> @ 14d417cf0

void __cdecl
Algo::
ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iStack_20 = *(int *)(pFVar2 + 8) + -1;
    if (*(int *)(pFVar2 + 8) == 0) {
      iStack_20 = 0;
    }
    local_38 = (undefined4)*(undefined8 *)pFVar2;
    uStack_34 = (undefined4)((ulonglong)*(undefined8 *)pFVar2 >> 0x20);
    local_28 = local_38;
    uStack_24 = uStack_34;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_28);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_> @ 14d417d90

FInt32Interval __cdecl
TraceServices::
GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
          (TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
           *param_1,double param_2,double param_3,
          TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *param_4,
          TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  FInt32Interval FVar9;
  longlong lVar10;
  longlong in_RDX;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  uint local_res10;
  undefined8 *in_stack_00000030;
  
  param_1->Allocator = (ILinearAllocator *)0xffffffffffffffff;
  if (((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) < param_3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndTime >= StartTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                         ,0x30c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    FVar9 = (FInt32Interval)(*pcVar6)();
    return FVar9;
  }
  puVar3 = *(undefined8 **)(in_RDX + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    iVar1 = *(int *)(in_RDX + 0x30);
    uVar14 = *(uint *)(in_RDX + 0x10);
    iVar2 = *(int *)(in_RDX + 0x28);
    dVar17 = (double)(**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,*puVar3);
    if ((dVar17 < (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) ||
         dVar17 == (double)CONCAT44(in_XMM3_Db,in_XMM3_Da)) &&
       (dVar17 = (double)(*(code *)*in_stack_00000030)
                                   (in_stack_00000030[1],
                                    **(longlong **)(in_RDX + 0x20) +
                                    (*(longlong **)(in_RDX + 0x20))[1] * 0x38 + -0x38),
       param_3 < dVar17)) {
      uVar16 = 0;
      if (((int)uVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      local_res10 = 0;
      uVar12 = 0;
      uVar15 = uVar14;
      if (0 < (int)uVar14) {
        do {
          iVar13 = (uVar15 >> 1) + uVar12;
          dVar17 = (double)(*(code *)*in_stack_00000030)
                                     (in_stack_00000030[1],puVar3[(longlong)iVar13 * 2]);
          uVar11 = iVar13 + (uVar15 & 1);
          if (param_3 < dVar17) {
            uVar11 = uVar12;
          }
          uVar12 = uVar11;
          uVar11 = uVar15 >> 1;
          uVar15 = uVar15 >> 1;
          local_res10 = uVar12;
        } while (uVar11 != 0);
      }
      iVar13 = local_res10 - 1;
      if (iVar13 < 0) {
        *(undefined4 *)&param_1->Allocator = 0;
        iVar13 = 0;
      }
      else {
        lVar10 = (longlong)iVar13;
        lVar4 = puVar3[lVar10 * 2];
        uVar15 = *(uint *)(puVar3 + lVar10 * 2 + 1);
        if (((int)uVar15 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          FVar9 = (FInt32Interval)(*pcVar6)();
          return FVar9;
        }
        pcVar6 = (code *)*in_stack_00000030;
        uVar5 = in_stack_00000030[1];
        uVar12 = uVar16;
        uVar11 = uVar16;
        if (0 < (int)uVar15) {
          do {
            uVar16 = uVar15 >> 1;
            dVar17 = (double)(*pcVar6)(uVar5,(longlong)(int)(uVar16 + uVar12) * 0x38 + lVar4);
            uVar11 = uVar16 + uVar12 + (uVar15 & 1);
            if (param_3 < dVar17) {
              uVar11 = uVar12;
            }
            uVar7 = uVar15 >> 1;
            uVar15 = uVar16;
            uVar12 = uVar11;
          } while (uVar7 != 0);
          if (((int)uVar11 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                                 ,0x32f,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            FVar9 = (FInt32Interval)(*pcVar6)();
            return FVar9;
          }
        }
        if (((ulonglong)puVar3[lVar10 * 2 + 1] <= (ulonglong)(longlong)(int)uVar11) &&
           (local_res10 == uVar14)) {
          return (FInt32Interval)param_1;
        }
        *(uint *)&param_1->Allocator = iVar13 * iVar2 + uVar11;
        if ((iVar1 < (int)uVar11) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index <= NumPoints",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                               ,0x338,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          FVar9 = (FInt32Interval)(*pcVar6)();
          return FVar9;
        }
      }
      uVar14 = uVar14 - iVar13;
      if (((int)uVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      uVar15 = uVar16;
      if (0 < (int)uVar14) {
        do {
          iVar1 = (uVar14 >> 1) + uVar16;
          dVar17 = (double)(**(code **)param_5)
                                     (*(undefined8 *)&param_5->field_0x8,
                                      puVar3[(longlong)iVar13 * 2 + (longlong)iVar1 * 2]);
          uVar15 = iVar1 + (uVar14 & 1);
          if ((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) <= dVar17 &&
              dVar17 != (double)CONCAT44(in_XMM3_Db,in_XMM3_Da)) {
            uVar15 = uVar16;
          }
          uVar12 = uVar14 >> 1;
          uVar16 = uVar15;
          uVar14 = uVar14 >> 1;
        } while (uVar12 != 0);
        uVar16 = 0;
      }
      iVar13 = uVar15 + iVar13;
      if ((iVar13 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EndPageIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x343,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      lVar4 = puVar3[(longlong)iVar13 * 2 + -2];
      uVar14 = *(uint *)(puVar3 + (longlong)iVar13 * 2 + -1);
      if (((int)uVar14 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
code_r0x00014d4181f1:
        pcVar6 = (code *)swi(3);
        FVar9 = (FInt32Interval)(*pcVar6)();
        return FVar9;
      }
      pcVar6 = *(code **)param_5;
      uVar5 = *(undefined8 *)&param_5->field_0x8;
      uVar15 = uVar14;
      if (0 < (int)uVar14) {
        do {
          iVar1 = (uVar15 >> 1) + uVar16;
          dVar17 = (double)(*pcVar6)(uVar5,(longlong)iVar1 * 0x38 + lVar4);
          uVar12 = iVar1 + (uVar15 & 1);
          if ((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) <= dVar17 &&
              dVar17 != (double)CONCAT44(in_XMM3_Db,in_XMM3_Da)) {
            uVar12 = uVar16;
          }
          uVar16 = uVar12;
          uVar12 = uVar15 >> 1;
          uVar15 = uVar15 >> 1;
        } while (uVar12 != 0);
        if (((int)uVar16 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                               ,0x34b,L""), bVar8)) goto code_r0x00014d4181f1;
      }
      if ((int)uVar16 < (int)uVar14) {
        uVar14 = uVar16;
      }
      *(uint *)((longlong)&param_1->Allocator + 4) = (iVar13 + -1) * iVar2 + -1 + uVar14;
    }
  }
  return (FInt32Interval)param_1;
}

// HeapSortInternal<TraceServices::FDbgHelpResolver::FModuleEntry_*,int,FIdentityFunctor,`TraceServices::FDbgHelpResolver::QueueModuleLoad'::__l2::<lambda_1>_> @ 14d418460

void __cdecl
AlgoImpl::
HeapSortInternal<TraceServices::FDbgHelpResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FDbgHelpResolver::QueueModuleLoad_::__l2::<lambda_1>_>
          (FModuleEntry **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModuleEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14d41856f:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar6 = iVar9 * 2;
                iVar4 = iVar6 + 1;
                if (iVar6 + 2 < iVar5) {
                  if (param_1[(longlong)iVar6 + 2]->Module->Base < param_1[iVar4]->Module->Base) {
                    iVar4 = iVar6;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar9];
                if (param_1[iVar4]->Module->Base <= pFVar1->Module->Base) break;
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar8 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Module->Base < param_1[iVar8]->Module->Base) {
        iVar8 = iVar5;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar8]->Module->Base <= pFVar1->Module->Base) goto LAB_14d41856f;
    param_1[iVar4] = param_1[iVar8];
    iVar5 = iVar8 * 2 + 1;
    param_1[iVar8] = pFVar1;
    iVar4 = iVar8;
  } while( true );
}

// HeapSortInternal<TraceServices::FSymslibResolver::FModuleEntry_*,int,FIdentityFunctor,`TraceServices::FSymslibResolver::QueueModuleLoad'::__l2::<lambda_1>_> @ 14d418650

void __cdecl
AlgoImpl::
HeapSortInternal<TraceServices::FSymslibResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FSymslibResolver::QueueModuleLoad_::__l2::<lambda_1>_>
          (FModuleEntry **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModuleEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14d41875f:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar6 = iVar9 * 2;
                iVar4 = iVar6 + 1;
                if (iVar6 + 2 < iVar5) {
                  if (param_1[(longlong)iVar6 + 2]->Module->Base < param_1[iVar4]->Module->Base) {
                    iVar4 = iVar6;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar9];
                if (param_1[iVar4]->Module->Base <= pFVar1->Module->Base) break;
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar8 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Module->Base < param_1[iVar8]->Module->Base) {
        iVar8 = iVar5;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar8]->Module->Base <= pFVar1->Module->Base) goto LAB_14d41875f;
    param_1[iVar4] = param_1[iVar8];
    iVar5 = iVar8 * 2 + 1;
    param_1[iVar8] = pFVar1;
    iVar4 = iVar8;
  } while( true );
}

// HeapSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,`TraceServices::FThreadProvider::SortThreads'::__l2::<lambda_1>,TLess<void>_> @ 14d418840

void __cdecl
AlgoImpl::
HeapSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TLess<void>_>
          (FThreadInfoInternal **param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FThreadInfoInternal *pFVar4;
  FThreadInfoInternal *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  TLess<void> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar9 = param_2 + -1;
  lVar11 = (longlong)iVar9;
  if (0 < iVar9) {
    do {
      pFVar4 = *param_1;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = pFVar4;
      iVar10 = 0;
      if (1 < iVar9) {
        do {
          iVar3 = iVar10 * 2;
          iVar8 = iVar3 + 1;
          if (iVar3 + 2 < iVar9) {
            pFVar4 = param_1[(longlong)iVar3 + 2];
            iVar1 = pFVar4->PrioritySortOrder;
            pFVar5 = param_1[iVar8];
            if ((iVar1 < 0) || (iVar2 = pFVar5->PrioritySortOrder, iVar2 < 0)) {
              iVar2 = pFVar5->PrioritySortOrder;
LAB_14d418934:
              bVar7 = iVar1 < iVar2;
            }
            else {
              bVar7 = pFVar4->GroupSortOrder < pFVar5->GroupSortOrder;
              if (pFVar4->GroupSortOrder == pFVar5->GroupSortOrder) {
                if (iVar1 != iVar2) goto LAB_14d418934;
                bVar7 = pFVar4->FallbackSortOrder < pFVar5->FallbackSortOrder;
              }
            }
            if (bVar7) {
              iVar8 = iVar3;
            }
            iVar8 = iVar8 + 1;
          }
          pFVar4 = param_1[iVar10];
          pFVar5 = param_1[iVar8];
          iVar3 = pFVar4->PrioritySortOrder;
          if ((iVar3 < 0) || (iVar1 = pFVar5->PrioritySortOrder, iVar1 < 0)) {
            iVar1 = pFVar5->PrioritySortOrder;
LAB_14d418985:
            bVar7 = iVar3 < iVar1;
          }
          else {
            bVar7 = pFVar4->GroupSortOrder < pFVar5->GroupSortOrder;
            if (pFVar4->GroupSortOrder == pFVar5->GroupSortOrder) {
              if (iVar3 != iVar1) goto LAB_14d418985;
              bVar7 = pFVar4->FallbackSortOrder < pFVar5->FallbackSortOrder;
            }
          }
          if (!bVar7) break;
          param_1[iVar10] = pFVar5;
          param_1[iVar8] = pFVar4;
          iVar10 = iVar8;
        } while (iVar8 * 2 + 1 < iVar9);
      }
      iVar9 = iVar9 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapSortInternal<TraceServices::FPsymResolver::FModuleEntry,int,FIdentityFunctor,`TraceServices::FPsymResolver::QueueModuleLoad'::__l2::<lambda_1>_> @ 14d4189d0

void __cdecl
AlgoImpl::
HeapSortInternal<TraceServices::FPsymResolver::FModuleEntry,int,FIdentityFunctor,_TraceServices::FPsymResolver::QueueModuleLoad_::__l2::<lambda_1>_>
          (FModuleEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModuleEntry *pFVar1;
  code *pcVar2;
  ulong64 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FModule *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  FModuleEntry *pFVar23;
  int iVar24;
  FModuleEntry *pFVar25;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar19 = iVar18 * 2 + 1;
  iVar20 = iVar19;
  iVar24 = iVar18;
  do {
    while (param_2 <= iVar19) {
LAB_14d418b0b:
      if (iVar24 == 0) {
        iVar19 = param_2 + -1;
        lVar22 = (longlong)iVar19;
        if (0 < iVar19) {
          pFVar25 = param_1 + lVar22;
          do {
            uVar10 = pFVar25->Size;
            uVar11 = *(undefined4 *)&pFVar25->field_0xc;
            iVar21 = 0;
            iVar18 = (param_1->ImageId).ArrayNum;
            iVar24 = (param_1->ImageId).ArrayMax;
            uVar3 = param_1->Base;
            uVar13 = param_1->Size;
            uVar14 = *(undefined4 *)&param_1->field_0xc;
            pwVar4 = param_1->Name;
            pwVar5 = param_1->Path;
            pFVar6 = param_1->Module;
            pFVar7 = (param_1->ImageId).AllocatorInstance.Data;
            param_1->Base = pFVar25->Base;
            param_1->Size = uVar10;
            *(undefined4 *)&param_1->field_0xc = uVar11;
            pwVar8 = pFVar25->Path;
            param_1->Name = pFVar25->Name;
            param_1->Path = pwVar8;
            pFVar9 = (pFVar25->ImageId).AllocatorInstance.Data;
            param_1->Module = pFVar25->Module;
            (param_1->ImageId).AllocatorInstance.Data = pFVar9;
            iVar20 = (pFVar25->ImageId).ArrayMax;
            (param_1->ImageId).ArrayNum = (pFVar25->ImageId).ArrayNum;
            (param_1->ImageId).ArrayMax = iVar20;
            pFVar25->Base = uVar3;
            pFVar25->Size = uVar13;
            *(undefined4 *)&pFVar25->field_0xc = uVar14;
            pFVar25->Name = pwVar4;
            pFVar25->Path = pwVar5;
            pFVar25->Module = pFVar6;
            (pFVar25->ImageId).AllocatorInstance.Data = pFVar7;
            (pFVar25->ImageId).ArrayNum = iVar18;
            (pFVar25->ImageId).ArrayMax = iVar24;
            if (1 < iVar19) {
              do {
                iVar18 = iVar21 * 2;
                iVar20 = iVar18 + 1;
                if (iVar18 + 2 < iVar19) {
                  if (param_1[(longlong)iVar18 + 2].Base < param_1[iVar20].Base) {
                    iVar20 = iVar18;
                  }
                  iVar20 = iVar20 + 1;
                }
                pFVar23 = param_1 + iVar20;
                if (pFVar23->Base <= param_1[iVar21].Base) break;
                uVar10 = pFVar23->Size;
                uVar11 = *(undefined4 *)&pFVar23->field_0xc;
                iVar24 = param_1[iVar21].ImageId.ArrayNum;
                iVar12 = param_1[iVar21].ImageId.ArrayMax;
                pFVar1 = param_1 + iVar21;
                uVar3 = pFVar1->Base;
                uVar13 = pFVar1->Size;
                uVar14 = *(undefined4 *)&pFVar1->field_0xc;
                pwVar4 = param_1[iVar21].Name;
                pwVar5 = (&param_1[iVar21].Name)[1];
                pFVar6 = param_1[iVar21].Module;
                pFVar7 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                          (&param_1[iVar21].Module + 1))->AllocatorInstance).Data;
                pFVar1 = param_1 + iVar21;
                pFVar1->Base = pFVar23->Base;
                pFVar1->Size = uVar10;
                *(undefined4 *)&pFVar1->field_0xc = uVar11;
                pwVar8 = pFVar23->Path;
                param_1[iVar21].Name = pFVar23->Name;
                (&param_1[iVar21].Name)[1] = pwVar8;
                pFVar9 = (pFVar23->ImageId).AllocatorInstance.Data;
                param_1[iVar21].Module = pFVar23->Module;
                (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(&param_1[iVar21].Module + 1)
                 )->AllocatorInstance).Data = pFVar9;
                iVar18 = (pFVar23->ImageId).ArrayMax;
                param_1[iVar21].ImageId.ArrayNum = (pFVar23->ImageId).ArrayNum;
                param_1[iVar21].ImageId.ArrayMax = iVar18;
                pFVar23->Base = uVar3;
                pFVar23->Size = uVar13;
                *(undefined4 *)&pFVar23->field_0xc = uVar14;
                pFVar23->Name = pwVar4;
                pFVar23->Path = pwVar5;
                pFVar23->Module = pFVar6;
                (pFVar23->ImageId).AllocatorInstance.Data = pFVar7;
                (pFVar23->ImageId).ArrayNum = iVar24;
                (pFVar23->ImageId).ArrayMax = iVar12;
                iVar21 = iVar20;
              } while (iVar20 * 2 + 1 < iVar19);
            }
            iVar19 = iVar19 + -1;
            lVar22 = lVar22 + -1;
            pFVar25 = pFVar25 + -1;
          } while (0 < lVar22);
        }
        return;
      }
      iVar18 = iVar24 + -1;
      iVar19 = iVar20 + -2;
      iVar20 = iVar19;
      iVar24 = iVar18;
    }
    iVar19 = iVar18 * 2;
    iVar21 = iVar19 + 1;
    if (iVar19 + 2 < param_2) {
      if (param_1[(longlong)iVar19 + 2].Base < param_1[iVar21].Base) {
        iVar21 = iVar19;
      }
      iVar21 = iVar21 + 1;
    }
    pFVar25 = param_1 + iVar21;
    if (pFVar25->Base <= param_1[iVar18].Base) goto LAB_14d418b0b;
    uVar10 = pFVar25->Size;
    uVar11 = *(undefined4 *)&pFVar25->field_0xc;
    iVar19 = iVar21 * 2 + 1;
    iVar15 = param_1[iVar18].ImageId.ArrayNum;
    iVar16 = param_1[iVar18].ImageId.ArrayMax;
    pFVar23 = param_1 + iVar18;
    uVar3 = pFVar23->Base;
    uVar13 = pFVar23->Size;
    uVar14 = *(undefined4 *)&pFVar23->field_0xc;
    pwVar4 = param_1[iVar18].Name;
    pwVar5 = (&param_1[iVar18].Name)[1];
    pFVar6 = param_1[iVar18].Module;
    pFVar7 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(&param_1[iVar18].Module + 1))->
             AllocatorInstance).Data;
    pFVar23 = param_1 + iVar18;
    pFVar23->Base = pFVar25->Base;
    pFVar23->Size = uVar10;
    *(undefined4 *)&pFVar23->field_0xc = uVar11;
    pwVar8 = pFVar25->Path;
    param_1[iVar18].Name = pFVar25->Name;
    (&param_1[iVar18].Name)[1] = pwVar8;
    pFVar9 = (pFVar25->ImageId).AllocatorInstance.Data;
    param_1[iVar18].Module = pFVar25->Module;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(&param_1[iVar18].Module + 1))->
    AllocatorInstance).Data = pFVar9;
    iVar12 = (pFVar25->ImageId).ArrayMax;
    param_1[iVar18].ImageId.ArrayNum = (pFVar25->ImageId).ArrayNum;
    param_1[iVar18].ImageId.ArrayMax = iVar12;
    pFVar25->Base = uVar3;
    pFVar25->Size = uVar13;
    *(undefined4 *)&pFVar25->field_0xc = uVar14;
    pFVar25->Name = pwVar4;
    pFVar25->Path = pwVar5;
    pFVar25->Module = pFVar6;
    (pFVar25->ImageId).AllocatorInstance.Data = pFVar7;
    (pFVar25->ImageId).ArrayNum = iVar15;
    (pFVar25->ImageId).ArrayMax = iVar16;
    iVar18 = iVar21;
  } while( true );
}

// HeapSortInternal<TraceServices::FPsymResolver::FPsymLine,int,FIdentityFunctor,`TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_3>_> @ 14d418c80

void __cdecl
AlgoImpl::
HeapSortInternal<TraceServices::FPsymResolver::FPsymLine,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_3>_>
          (FPsymLine *param_1,int param_2,FIdentityFunctor param_3,<lambda_3> param_4)

{
  FPsymLine *pFVar1;
  FPsymLine *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FPsymLine *pFVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar17 = iVar14;
  iVar18 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14d418d90:
      if (iVar18 == 0) {
        iVar14 = param_2 + -1;
        lVar19 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar16 = param_1 + lVar19;
          do {
            uVar5 = pFVar16->Size;
            iVar17 = pFVar16->LineNumber;
            iVar18 = param_1->FileIndex;
            uVar11 = *(undefined4 *)&param_1->field_0x14;
            uVar4 = param_1->Address;
            uVar8 = param_1->Size;
            iVar13 = param_1->LineNumber;
            param_1->Address = pFVar16->Address;
            param_1->Size = uVar5;
            param_1->LineNumber = iVar17;
            uVar7 = *(undefined4 *)&pFVar16->field_0x14;
            param_1->FileIndex = pFVar16->FileIndex;
            *(undefined4 *)&param_1->field_0x14 = uVar7;
            pFVar16->Address = uVar4;
            pFVar16->Size = uVar8;
            pFVar16->LineNumber = iVar13;
            pFVar16->FileIndex = iVar18;
            *(undefined4 *)&pFVar16->field_0x14 = uVar11;
            iVar17 = 0;
            if (1 < iVar14) {
              do {
                iVar18 = iVar17 * 2;
                iVar13 = iVar18 + 1;
                if (iVar18 + 2 < iVar14) {
                  if (param_1[(longlong)iVar18 + 2].Address < param_1[iVar13].Address) {
                    iVar13 = iVar18;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar1 = param_1 + iVar13;
                if (pFVar1->Address <= param_1[iVar17].Address) break;
                uVar5 = pFVar1->Size;
                iVar18 = pFVar1->LineNumber;
                iVar6 = param_1[iVar17].FileIndex;
                uVar11 = *(undefined4 *)&param_1[iVar17].field_0x14;
                pFVar2 = param_1 + iVar17;
                uVar4 = pFVar2->Address;
                uVar8 = pFVar2->Size;
                iVar15 = pFVar2->LineNumber;
                pFVar2 = param_1 + iVar17;
                pFVar2->Address = pFVar1->Address;
                pFVar2->Size = uVar5;
                pFVar2->LineNumber = iVar18;
                uVar7 = *(undefined4 *)&pFVar1->field_0x14;
                param_1[iVar17].FileIndex = pFVar1->FileIndex;
                *(undefined4 *)&param_1[iVar17].field_0x14 = uVar7;
                pFVar1->Address = uVar4;
                pFVar1->Size = uVar8;
                pFVar1->LineNumber = iVar15;
                pFVar1->FileIndex = iVar6;
                *(undefined4 *)&pFVar1->field_0x14 = uVar11;
                iVar17 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar19 = lVar19 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar19);
        }
        return;
      }
      iVar13 = iVar18 + -1;
      iVar14 = iVar17 + -2;
      iVar17 = iVar14;
      iVar18 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar15 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Address < param_1[iVar15].Address) {
        iVar15 = iVar14;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar16 = param_1 + iVar15;
    if (pFVar16->Address <= param_1[iVar13].Address) goto LAB_14d418d90;
    uVar5 = pFVar16->Size;
    iVar6 = pFVar16->LineNumber;
    iVar14 = iVar15 * 2 + 1;
    iVar10 = param_1[iVar13].FileIndex;
    uVar11 = *(undefined4 *)&param_1[iVar13].field_0x14;
    pFVar1 = param_1 + iVar13;
    uVar4 = pFVar1->Address;
    uVar8 = pFVar1->Size;
    iVar9 = pFVar1->LineNumber;
    pFVar1 = param_1 + iVar13;
    pFVar1->Address = pFVar16->Address;
    pFVar1->Size = uVar5;
    pFVar1->LineNumber = iVar6;
    uVar7 = *(undefined4 *)&pFVar16->field_0x14;
    param_1[iVar13].FileIndex = pFVar16->FileIndex;
    *(undefined4 *)&param_1[iVar13].field_0x14 = uVar7;
    pFVar16->Address = uVar4;
    pFVar16->Size = uVar8;
    pFVar16->LineNumber = iVar9;
    pFVar16->FileIndex = iVar10;
    *(undefined4 *)&pFVar16->field_0x14 = uVar11;
    iVar13 = iVar15;
  } while( true );
}

// HeapSortInternal<TraceServices::FPsymResolver::FPsymSymbol,int,FIdentityFunctor,`TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_2>_> @ 14d418ea0

void __cdecl
AlgoImpl::
HeapSortInternal<TraceServices::FPsymResolver::FPsymSymbol,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_2>_>
          (FPsymSymbol *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FPsymSymbol *pFVar1;
  FPsymSymbol *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  ulong64 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FPsymSymbol *pFVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar15 = iVar12;
  iVar16 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14d418fb0:
      if (iVar16 == 0) {
        iVar12 = param_2 + -1;
        lVar17 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar14 = param_1 + lVar17;
          do {
            uVar6 = pFVar14->Size;
            uVar7 = *(undefined4 *)&pFVar14->field_0xc;
            pwVar3 = param_1->Name;
            uVar5 = param_1->Address;
            uVar8 = param_1->Size;
            uVar9 = *(undefined4 *)&param_1->field_0xc;
            param_1->Address = pFVar14->Address;
            param_1->Size = uVar6;
            *(undefined4 *)&param_1->field_0xc = uVar7;
            param_1->Name = pFVar14->Name;
            pFVar14->Address = uVar5;
            pFVar14->Size = uVar8;
            *(undefined4 *)&pFVar14->field_0xc = uVar9;
            pFVar14->Name = pwVar3;
            iVar15 = 0;
            if (1 < iVar12) {
              do {
                iVar16 = iVar15 * 2;
                iVar11 = iVar16 + 1;
                if (iVar16 + 2 < iVar12) {
                  if (param_1[(longlong)iVar16 + 2].Address < param_1[iVar11].Address) {
                    iVar11 = iVar16;
                  }
                  iVar11 = iVar11 + 1;
                }
                pFVar1 = param_1 + iVar11;
                if (pFVar1->Address <= param_1[iVar15].Address) break;
                uVar6 = pFVar1->Size;
                uVar7 = *(undefined4 *)&pFVar1->field_0xc;
                pwVar3 = param_1[iVar15].Name;
                pFVar2 = param_1 + iVar15;
                uVar5 = pFVar2->Address;
                uVar8 = pFVar2->Size;
                uVar9 = *(undefined4 *)&pFVar2->field_0xc;
                pFVar2 = param_1 + iVar15;
                pFVar2->Address = pFVar1->Address;
                pFVar2->Size = uVar6;
                *(undefined4 *)&pFVar2->field_0xc = uVar7;
                param_1[iVar15].Name = pFVar1->Name;
                pFVar1->Address = uVar5;
                pFVar1->Size = uVar8;
                *(undefined4 *)&pFVar1->field_0xc = uVar9;
                pFVar1->Name = pwVar3;
                iVar15 = iVar11;
              } while (iVar11 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar17 = lVar17 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar11 = iVar16 + -1;
      iVar12 = iVar15 + -2;
      iVar15 = iVar12;
      iVar16 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar13 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[(longlong)iVar12 + 2].Address < param_1[iVar13].Address) {
        iVar13 = iVar12;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar14 = param_1 + iVar13;
    if (pFVar14->Address <= param_1[iVar11].Address) goto LAB_14d418fb0;
    uVar6 = pFVar14->Size;
    uVar7 = *(undefined4 *)&pFVar14->field_0xc;
    iVar12 = iVar13 * 2 + 1;
    pwVar3 = param_1[iVar11].Name;
    pFVar1 = param_1 + iVar11;
    uVar5 = pFVar1->Address;
    uVar8 = pFVar1->Size;
    uVar9 = *(undefined4 *)&pFVar1->field_0xc;
    pFVar1 = param_1 + iVar11;
    pFVar1->Address = pFVar14->Address;
    pFVar1->Size = uVar6;
    *(undefined4 *)&pFVar1->field_0xc = uVar7;
    param_1[iVar11].Name = pFVar14->Name;
    pFVar14->Address = uVar5;
    pFVar14->Size = uVar8;
    *(undefined4 *)&pFVar14->field_0xc = uVar9;
    pFVar14->Name = pwVar3;
    iVar11 = iVar13;
  } while( true );
}

// HeapSortInternal<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::FTempRow,int,FIdentityFunctor,`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::<lambda_2>_> @ 14d4190c0

void __cdecl
AlgoImpl::
HeapSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::<lambda_2>_>
          (FTempRow *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  code *pcVar1;
  FPackageExportInfo *pFVar2;
  double dVar3;
  FPackageExportInfo *pFVar4;
  ulong64 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  ELoadTimeProfilerObjectEventType EVar11;
  undefined4 uVar12;
  ELoadTimeProfilerObjectEventType EVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  FTempRow *pFVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar17 = iVar16 * 2 + 1;
  iVar21 = iVar17;
  iVar22 = iVar16;
  do {
    while (param_2 <= iVar17) {
LAB_14d4191f4:
      if (iVar22 == 0) {
        iVar17 = param_2 + -1;
        lVar18 = (longlong)iVar17;
        if (0 < iVar17) {
          pFVar19 = param_1 + lVar18;
          do {
            pFVar2 = pFVar19->ExportInfo;
            dVar3 = param_1->StartTime;
            pFVar4 = param_1->ExportInfo;
            uVar5 = param_1->SerializedSize;
            dVar6 = param_1->MainThreadTime;
            dVar7 = param_1->AsyncLoadingThreadTime;
            EVar13 = param_1->EventType;
            uVar14 = *(undefined4 *)&param_1->field_0x2c;
            param_1->StartTime = pFVar19->StartTime;
            param_1->ExportInfo = pFVar2;
            dVar9 = pFVar19->MainThreadTime;
            param_1->SerializedSize = pFVar19->SerializedSize;
            param_1->MainThreadTime = dVar9;
            EVar11 = pFVar19->EventType;
            uVar12 = *(undefined4 *)&pFVar19->field_0x2c;
            param_1->AsyncLoadingThreadTime = pFVar19->AsyncLoadingThreadTime;
            param_1->EventType = EVar11;
            *(undefined4 *)&param_1->field_0x2c = uVar12;
            pFVar19->StartTime = dVar3;
            pFVar19->ExportInfo = pFVar4;
            pFVar19->SerializedSize = uVar5;
            pFVar19->MainThreadTime = dVar6;
            pFVar19->AsyncLoadingThreadTime = dVar7;
            pFVar19->EventType = EVar13;
            *(undefined4 *)&pFVar19->field_0x2c = uVar14;
            iVar21 = 0;
            if (1 < iVar17) {
              do {
                iVar22 = iVar21 * 2;
                iVar16 = iVar22 + 1;
                if (iVar22 + 2 < iVar17) {
                  if (param_1[(longlong)iVar22 + 2].StartTime <= param_1[iVar16].StartTime &&
                      param_1[iVar16].StartTime != param_1[(longlong)iVar22 + 2].StartTime) {
                    iVar16 = iVar22;
                  }
                  iVar16 = iVar16 + 1;
                }
                if (param_1[iVar16].StartTime < param_1[iVar21].StartTime ||
                    param_1[iVar16].StartTime == param_1[iVar21].StartTime) break;
                pFVar2 = param_1[iVar16].ExportInfo;
                dVar3 = param_1[iVar21].StartTime;
                pFVar4 = param_1[iVar21].ExportInfo;
                uVar5 = param_1[iVar21].SerializedSize;
                dVar6 = (double)(&param_1[iVar21].SerializedSize)[1];
                dVar7 = param_1[iVar21].AsyncLoadingThreadTime;
                uVar8 = (&param_1[iVar21].AsyncLoadingThreadTime)[1];
                param_1[iVar21].StartTime = param_1[iVar16].StartTime;
                param_1[iVar21].ExportInfo = pFVar2;
                dVar9 = (double)(&param_1[iVar16].SerializedSize)[1];
                param_1[iVar21].SerializedSize = param_1[iVar16].SerializedSize;
                (&param_1[iVar21].SerializedSize)[1] = (ulong64)dVar9;
                uVar10 = (&param_1[iVar16].AsyncLoadingThreadTime)[1];
                param_1[iVar21].AsyncLoadingThreadTime = param_1[iVar16].AsyncLoadingThreadTime;
                (&param_1[iVar21].AsyncLoadingThreadTime)[1] = (double)uVar10;
                param_1[iVar16].StartTime = dVar3;
                param_1[iVar16].ExportInfo = pFVar4;
                param_1[iVar16].SerializedSize = uVar5;
                (&param_1[iVar16].SerializedSize)[1] = (ulong64)dVar6;
                param_1[iVar16].AsyncLoadingThreadTime = dVar7;
                (&param_1[iVar16].AsyncLoadingThreadTime)[1] = (double)uVar8;
                iVar21 = iVar16;
              } while (iVar16 * 2 + 1 < iVar17);
            }
            iVar17 = iVar17 + -1;
            lVar18 = lVar18 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar16 = iVar22 + -1;
      iVar17 = iVar21 + -2;
      iVar21 = iVar17;
      iVar22 = iVar16;
    }
    iVar17 = iVar16 * 2;
    iVar20 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      if (param_1[(longlong)iVar17 + 2].StartTime <= param_1[iVar20].StartTime &&
          param_1[iVar20].StartTime != param_1[(longlong)iVar17 + 2].StartTime) {
        iVar20 = iVar17;
      }
      iVar20 = iVar20 + 1;
    }
    if (param_1[iVar20].StartTime < param_1[iVar16].StartTime ||
        param_1[iVar20].StartTime == param_1[iVar16].StartTime) goto LAB_14d4191f4;
    pFVar2 = param_1[iVar20].ExportInfo;
    iVar17 = iVar20 * 2 + 1;
    dVar3 = param_1[iVar16].StartTime;
    pFVar4 = param_1[iVar16].ExportInfo;
    uVar5 = param_1[iVar16].SerializedSize;
    dVar6 = (double)(&param_1[iVar16].SerializedSize)[1];
    dVar7 = param_1[iVar16].AsyncLoadingThreadTime;
    uVar8 = (&param_1[iVar16].AsyncLoadingThreadTime)[1];
    param_1[iVar16].StartTime = param_1[iVar20].StartTime;
    param_1[iVar16].ExportInfo = pFVar2;
    dVar9 = (double)(&param_1[iVar20].SerializedSize)[1];
    param_1[iVar16].SerializedSize = param_1[iVar20].SerializedSize;
    (&param_1[iVar16].SerializedSize)[1] = (ulong64)dVar9;
    uVar10 = (&param_1[iVar20].AsyncLoadingThreadTime)[1];
    param_1[iVar16].AsyncLoadingThreadTime = param_1[iVar20].AsyncLoadingThreadTime;
    (&param_1[iVar16].AsyncLoadingThreadTime)[1] = (double)uVar10;
    param_1[iVar20].StartTime = dVar3;
    param_1[iVar20].ExportInfo = pFVar4;
    param_1[iVar20].SerializedSize = uVar5;
    (&param_1[iVar20].SerializedSize)[1] = (ulong64)dVar6;
    param_1[iVar20].AsyncLoadingThreadTime = dVar7;
    (&param_1[iVar20].AsyncLoadingThreadTime)[1] = (double)uVar8;
    iVar16 = iVar20;
  } while( true );
}

// HeapSortInternal<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::FTempRow,int,FIdentityFunctor,`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::<lambda_2>_> @ 14d419330

void __cdecl
AlgoImpl::
HeapSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::<lambda_2>_>
          (FTempRow *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  double dVar1;
  code *pcVar2;
  FPackageInfo *pFVar3;
  double dVar4;
  FPackageInfo *pFVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  double dVar9;
  ulong64 uVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FTempRow *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14d419470:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar15 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar16 = param_1 + lVar15;
          do {
            pFVar3 = pFVar16->PackageInfo;
            dVar1 = param_1->AsyncLoadingThreadTime;
            dVar4 = param_1->StartTime;
            pFVar5 = param_1->PackageInfo;
            uVar6 = param_1->SerializedHeaderSize;
            uVar7 = param_1->SerializedExportsCount;
            uVar8 = param_1->SerializedExportsSize;
            dVar9 = param_1->MainThreadTime;
            param_1->StartTime = pFVar16->StartTime;
            param_1->PackageInfo = pFVar3;
            uVar10 = pFVar16->SerializedExportsCount;
            param_1->SerializedHeaderSize = pFVar16->SerializedHeaderSize;
            param_1->SerializedExportsCount = uVar10;
            dVar11 = pFVar16->MainThreadTime;
            param_1->SerializedExportsSize = pFVar16->SerializedExportsSize;
            param_1->MainThreadTime = dVar11;
            param_1->AsyncLoadingThreadTime = pFVar16->AsyncLoadingThreadTime;
            pFVar16->StartTime = dVar4;
            pFVar16->PackageInfo = pFVar5;
            pFVar16->SerializedHeaderSize = uVar6;
            pFVar16->SerializedExportsCount = uVar7;
            pFVar16->SerializedExportsSize = uVar8;
            pFVar16->MainThreadTime = dVar9;
            pFVar16->AsyncLoadingThreadTime = dVar1;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].StartTime <= param_1[iVar13].StartTime &&
                      param_1[iVar13].StartTime != param_1[(longlong)iVar19 + 2].StartTime) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].StartTime < param_1[iVar18].StartTime ||
                    param_1[iVar13].StartTime == param_1[iVar18].StartTime) break;
                pFVar3 = param_1[iVar13].PackageInfo;
                dVar1 = param_1[iVar18].AsyncLoadingThreadTime;
                dVar4 = param_1[iVar18].StartTime;
                pFVar5 = param_1[iVar18].PackageInfo;
                uVar6 = param_1[iVar18].SerializedHeaderSize;
                uVar7 = (&param_1[iVar18].SerializedHeaderSize)[1];
                uVar8 = param_1[iVar18].SerializedExportsSize;
                dVar9 = (double)(&param_1[iVar18].SerializedExportsSize)[1];
                param_1[iVar18].StartTime = param_1[iVar13].StartTime;
                param_1[iVar18].PackageInfo = pFVar3;
                uVar10 = (&param_1[iVar13].SerializedHeaderSize)[1];
                param_1[iVar18].SerializedHeaderSize = param_1[iVar13].SerializedHeaderSize;
                (&param_1[iVar18].SerializedHeaderSize)[1] = uVar10;
                dVar11 = (double)(&param_1[iVar13].SerializedExportsSize)[1];
                param_1[iVar18].SerializedExportsSize = param_1[iVar13].SerializedExportsSize;
                (&param_1[iVar18].SerializedExportsSize)[1] = (ulong64)dVar11;
                param_1[iVar18].AsyncLoadingThreadTime = param_1[iVar13].AsyncLoadingThreadTime;
                param_1[iVar13].StartTime = dVar4;
                param_1[iVar13].PackageInfo = pFVar5;
                param_1[iVar13].SerializedHeaderSize = uVar6;
                (&param_1[iVar13].SerializedHeaderSize)[1] = uVar7;
                param_1[iVar13].SerializedExportsSize = uVar8;
                (&param_1[iVar13].SerializedExportsSize)[1] = (ulong64)dVar9;
                param_1[iVar13].AsyncLoadingThreadTime = dVar1;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar15 = lVar15 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].StartTime <= param_1[iVar17].StartTime &&
          param_1[iVar17].StartTime != param_1[(longlong)iVar14 + 2].StartTime) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].StartTime < param_1[iVar13].StartTime ||
        param_1[iVar17].StartTime == param_1[iVar13].StartTime) goto LAB_14d419470;
    pFVar3 = param_1[iVar17].PackageInfo;
    iVar14 = iVar17 * 2 + 1;
    dVar1 = param_1[iVar13].AsyncLoadingThreadTime;
    dVar4 = param_1[iVar13].StartTime;
    pFVar5 = param_1[iVar13].PackageInfo;
    uVar6 = param_1[iVar13].SerializedHeaderSize;
    uVar7 = (&param_1[iVar13].SerializedHeaderSize)[1];
    uVar8 = param_1[iVar13].SerializedExportsSize;
    dVar9 = (double)(&param_1[iVar13].SerializedExportsSize)[1];
    param_1[iVar13].StartTime = param_1[iVar17].StartTime;
    param_1[iVar13].PackageInfo = pFVar3;
    uVar10 = (&param_1[iVar17].SerializedHeaderSize)[1];
    param_1[iVar13].SerializedHeaderSize = param_1[iVar17].SerializedHeaderSize;
    (&param_1[iVar13].SerializedHeaderSize)[1] = uVar10;
    dVar11 = (double)(&param_1[iVar17].SerializedExportsSize)[1];
    param_1[iVar13].SerializedExportsSize = param_1[iVar17].SerializedExportsSize;
    (&param_1[iVar13].SerializedExportsSize)[1] = (ulong64)dVar11;
    param_1[iVar13].AsyncLoadingThreadTime = param_1[iVar17].AsyncLoadingThreadTime;
    param_1[iVar17].StartTime = dVar4;
    param_1[iVar17].PackageInfo = pFVar5;
    param_1[iVar17].SerializedHeaderSize = uVar6;
    (&param_1[iVar17].SerializedHeaderSize)[1] = uVar7;
    param_1[iVar17].SerializedExportsSize = uVar8;
    (&param_1[iVar17].SerializedExportsSize)[1] = (ulong64)dVar9;
    param_1[iVar17].AsyncLoadingThreadTime = dVar1;
    iVar13 = iVar17;
  } while( true );
}

// HeapifyInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,`TraceServices::FThreadProvider::SortThreads'::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_> @ 14d4195d0

void __cdecl
AlgoImpl::
HeapifyInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TReversePredicate<TLess<void>_>_>
          (FThreadInfoInternal **param_1,int param_2,<lambda_1> param_3,
          TReversePredicate<TLess<void>_> param_4)

{
  int iVar1;
  int iVar2;
  FThreadInfoInternal *pFVar3;
  FThreadInfoInternal *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar6 = iVar9;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14d419713:
      if (iVar11 == 0) {
        return;
      }
      iVar8 = iVar11 + -1;
      iVar9 = iVar6 + -2;
      iVar6 = iVar9;
      iVar11 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      pFVar3 = param_1[(longlong)iVar9 + 2];
      iVar1 = pFVar3->PrioritySortOrder;
      pFVar4 = param_1[iVar10];
      if ((iVar1 < 0) || (iVar2 = pFVar4->PrioritySortOrder, iVar2 < 0)) {
        iVar2 = pFVar4->PrioritySortOrder;
LAB_14d4196a4:
        bVar7 = iVar1 < iVar2;
      }
      else {
        bVar7 = pFVar3->GroupSortOrder < pFVar4->GroupSortOrder;
        if (pFVar3->GroupSortOrder == pFVar4->GroupSortOrder) {
          if (iVar1 != iVar2) goto LAB_14d4196a4;
          bVar7 = pFVar3->FallbackSortOrder < pFVar4->FallbackSortOrder;
        }
      }
      if (bVar7) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar3 = param_1[iVar8];
    pFVar4 = param_1[iVar10];
    iVar9 = pFVar3->PrioritySortOrder;
    if ((iVar9 < 0) || (iVar1 = pFVar4->PrioritySortOrder, iVar1 < 0)) {
      iVar1 = pFVar4->PrioritySortOrder;
LAB_14d4196f5:
      bVar7 = iVar9 < iVar1;
    }
    else {
      bVar7 = pFVar3->GroupSortOrder < pFVar4->GroupSortOrder;
      if (pFVar3->GroupSortOrder == pFVar4->GroupSortOrder) {
        if (iVar9 != iVar1) goto LAB_14d4196f5;
        bVar7 = pFVar3->FallbackSortOrder < pFVar4->FallbackSortOrder;
      }
    }
    if (!bVar7) goto LAB_14d419713;
    iVar9 = iVar10 * 2 + 1;
    param_1[iVar8] = pFVar4;
    param_1[iVar10] = pFVar3;
    iVar8 = iVar10;
  } while( true );
}

// HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,`TraceServices::FRegionTimeline::EnumerateRegions'::__l2::<lambda_3>_>_> @ 14d419750

void __cdecl
AlgoImpl::
HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegions_::__l2::<lambda_3>_>_>
          (FLaneEnumeration *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TraceServices::FLaneEnumeration,_public:_virtual_bool___cdecl_TraceServices::FRegionTimeline::EnumerateRegions(double,double,TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)>)const_::_2_::<lambda_3>_>
          param_4)

{
  FLaneEnumeration *pFVar1;
  FLaneEnumeration *pFVar2;
  double *pdVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  FRegionLane *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar8 = iVar16;
  iVar18 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14d4198c8:
      if (iVar18 == 0) {
        return;
      }
      iVar15 = iVar18 + -1;
      iVar16 = iVar8 + -2;
      iVar8 = iVar16;
      iVar18 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
      uVar6 = ((param_1[(longlong)iVar16 + 2].Lane)->Regions).PageSize;
      dVar4 = ((param_1[(longlong)iVar16 + 2].Lane)->Regions).FirstPage
              [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart / uVar6].Items
              [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart % uVar6].BeginTime;
      pdVar3 = &((param_1[iVar17].Lane)->Regions).FirstPage
                [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
                [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime;
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
    uVar6 = ((param_1[iVar15].Lane)->Regions).PageSize;
    dVar4 = ((param_1[iVar15].Lane)->Regions).FirstPage
            [(ulonglong)(longlong)param_1[iVar15].IntervalStart / uVar6].Items
            [(ulonglong)(longlong)param_1[iVar15].IntervalStart % uVar6].BeginTime;
    pdVar3 = &((param_1[iVar17].Lane)->Regions).FirstPage
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime;
    if (dVar4 < *pdVar3 || dVar4 == *pdVar3) goto LAB_14d4198c8;
    pFVar1 = param_1 + iVar15;
    pFVar9 = pFVar1->Lane;
    iVar12 = pFVar1->IntervalStart;
    iVar13 = pFVar1->IntervalEnd;
    iVar16 = iVar17 * 2 + 1;
    pFVar1 = param_1 + iVar17;
    iVar10 = pFVar1->IntervalStart;
    iVar11 = pFVar1->IntervalEnd;
    pFVar2 = param_1 + iVar15;
    pFVar2->Lane = pFVar1->Lane;
    pFVar2->IntervalStart = iVar10;
    pFVar2->IntervalEnd = iVar11;
    pFVar1 = param_1 + iVar17;
    pFVar1->Lane = pFVar9;
    pFVar1->IntervalStart = iVar12;
    pFVar1->IntervalEnd = iVar13;
    iVar15 = iVar17;
  } while( true );
}

// HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,`TraceServices::FRegionTimeline::EnumerateRegionsBackwards'::__l2::<lambda_3>_>_> @ 14d419910

void __cdecl
AlgoImpl::
HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegionsBackwards_::__l2::<lambda_3>_>_>
          (FLaneEnumeration *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TraceServices::FLaneEnumeration,_public:_virtual_bool___cdecl_TraceServices::FRegionTimeline::EnumerateRegionsBackwards(double,double,TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)>)const_::_2_::<lambda_3>_>
          param_4)

{
  FLaneEnumeration *pFVar1;
  FLaneEnumeration *pFVar2;
  double *pdVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  FRegionLane *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar8 = iVar16;
  iVar18 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14d419a88:
      if (iVar18 == 0) {
        return;
      }
      iVar15 = iVar18 + -1;
      iVar16 = iVar8 + -2;
      iVar8 = iVar16;
      iVar18 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
      uVar6 = ((param_1[(longlong)iVar16 + 2].Lane)->Regions).PageSize;
      dVar4 = ((param_1[iVar17].Lane)->Regions).FirstPage
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime;
      pdVar3 = &((param_1[(longlong)iVar16 + 2].Lane)->Regions).FirstPage
                [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart / uVar6].Items
                [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart % uVar6].BeginTime
      ;
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
    uVar6 = ((param_1[iVar15].Lane)->Regions).PageSize;
    if (((param_1[iVar17].Lane)->Regions).FirstPage
        [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
        [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime <=
        ((param_1[iVar15].Lane)->Regions).FirstPage
        [(ulonglong)(longlong)param_1[iVar15].IntervalStart / uVar6].Items
        [(ulonglong)(longlong)param_1[iVar15].IntervalStart % uVar6].BeginTime) goto LAB_14d419a88;
    pFVar1 = param_1 + iVar15;
    pFVar9 = pFVar1->Lane;
    iVar12 = pFVar1->IntervalStart;
    iVar13 = pFVar1->IntervalEnd;
    iVar16 = iVar17 * 2 + 1;
    pFVar1 = param_1 + iVar17;
    iVar10 = pFVar1->IntervalStart;
    iVar11 = pFVar1->IntervalEnd;
    pFVar2 = param_1 + iVar15;
    pFVar2->Lane = pFVar1->Lane;
    pFVar2->IntervalStart = iVar10;
    pFVar2->IntervalEnd = iVar11;
    pFVar1 = param_1 + iVar17;
    pFVar1->Lane = pFVar9;
    pFVar1->IntervalStart = iVar12;
    pFVar1->IntervalEnd = iVar13;
    iVar15 = iVar17;
  } while( true );
}

// HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,`TraceServices::FRegionTimeline::EnumerateRegions'::__l22::<lambda_4>_>_> @ 14d419ad0

void __cdecl
AlgoImpl::
HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegions_::__l22::<lambda_4>_>_>
          (FLaneEnumeration *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TraceServices::FLaneEnumeration,_public:_virtual_bool___cdecl_TraceServices::FRegionTimeline::EnumerateRegions(double,double,TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)>)const_::_22_::<lambda_4>_>
          param_4)

{
  FLaneEnumeration *pFVar1;
  FLaneEnumeration *pFVar2;
  double *pdVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  FRegionLane *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar8 = iVar16;
  iVar18 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14d419c48:
      if (iVar18 == 0) {
        return;
      }
      iVar15 = iVar18 + -1;
      iVar16 = iVar8 + -2;
      iVar8 = iVar16;
      iVar18 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
      uVar6 = ((param_1[(longlong)iVar16 + 2].Lane)->Regions).PageSize;
      dVar4 = ((param_1[(longlong)iVar16 + 2].Lane)->Regions).FirstPage
              [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart / uVar6].Items
              [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart % uVar6].BeginTime;
      pdVar3 = &((param_1[iVar17].Lane)->Regions).FirstPage
                [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
                [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime;
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
    uVar6 = ((param_1[iVar15].Lane)->Regions).PageSize;
    dVar4 = ((param_1[iVar15].Lane)->Regions).FirstPage
            [(ulonglong)(longlong)param_1[iVar15].IntervalStart / uVar6].Items
            [(ulonglong)(longlong)param_1[iVar15].IntervalStart % uVar6].BeginTime;
    pdVar3 = &((param_1[iVar17].Lane)->Regions).FirstPage
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime;
    if (dVar4 < *pdVar3 || dVar4 == *pdVar3) goto LAB_14d419c48;
    pFVar1 = param_1 + iVar15;
    pFVar9 = pFVar1->Lane;
    iVar12 = pFVar1->IntervalStart;
    iVar13 = pFVar1->IntervalEnd;
    iVar16 = iVar17 * 2 + 1;
    pFVar1 = param_1 + iVar17;
    iVar10 = pFVar1->IntervalStart;
    iVar11 = pFVar1->IntervalEnd;
    pFVar2 = param_1 + iVar15;
    pFVar2->Lane = pFVar1->Lane;
    pFVar2->IntervalStart = iVar10;
    pFVar2->IntervalEnd = iVar11;
    pFVar1 = param_1 + iVar17;
    pFVar1->Lane = pFVar9;
    pFVar1->IntervalStart = iVar12;
    pFVar1->IntervalEnd = iVar13;
    iVar15 = iVar17;
  } while( true );
}

// HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,`TraceServices::FRegionTimeline::EnumerateRegionsBackwards'::__l22::<lambda_4>_>_> @ 14d419c90

void __cdecl
AlgoImpl::
HeapifyInternal<TraceServices::FLaneEnumeration,int,FIdentityFunctor,TDereferenceWrapper<TraceServices::FLaneEnumeration,_TraceServices::FRegionTimeline::EnumerateRegionsBackwards_::__l22::<lambda_4>_>_>
          (FLaneEnumeration *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TraceServices::FLaneEnumeration,_public:_virtual_bool___cdecl_TraceServices::FRegionTimeline::EnumerateRegionsBackwards(double,double,TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)>)const_::_22_::<lambda_4>_>
          param_4)

{
  FLaneEnumeration *pFVar1;
  FLaneEnumeration *pFVar2;
  double *pdVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  FRegionLane *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar8 = iVar16;
  iVar18 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14d419e08:
      if (iVar18 == 0) {
        return;
      }
      iVar15 = iVar18 + -1;
      iVar16 = iVar8 + -2;
      iVar8 = iVar16;
      iVar18 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
      uVar6 = ((param_1[(longlong)iVar16 + 2].Lane)->Regions).PageSize;
      dVar4 = ((param_1[iVar17].Lane)->Regions).FirstPage
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
              [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime;
      pdVar3 = &((param_1[(longlong)iVar16 + 2].Lane)->Regions).FirstPage
                [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart / uVar6].Items
                [(ulonglong)(longlong)param_1[(longlong)iVar16 + 2].IntervalStart % uVar6].BeginTime
      ;
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    uVar5 = ((param_1[iVar17].Lane)->Regions).PageSize;
    uVar6 = ((param_1[iVar15].Lane)->Regions).PageSize;
    if (((param_1[iVar17].Lane)->Regions).FirstPage
        [(ulonglong)(longlong)param_1[iVar17].IntervalStart / uVar5].Items
        [(ulonglong)(longlong)param_1[iVar17].IntervalStart % uVar5].BeginTime <=
        ((param_1[iVar15].Lane)->Regions).FirstPage
        [(ulonglong)(longlong)param_1[iVar15].IntervalStart / uVar6].Items
        [(ulonglong)(longlong)param_1[iVar15].IntervalStart % uVar6].BeginTime) goto LAB_14d419e08;
    pFVar1 = param_1 + iVar15;
    pFVar9 = pFVar1->Lane;
    iVar12 = pFVar1->IntervalStart;
    iVar13 = pFVar1->IntervalEnd;
    iVar16 = iVar17 * 2 + 1;
    pFVar1 = param_1 + iVar17;
    iVar10 = pFVar1->IntervalStart;
    iVar11 = pFVar1->IntervalEnd;
    pFVar2 = param_1 + iVar15;
    pFVar2->Lane = pFVar1->Lane;
    pFVar2->IntervalStart = iVar10;
    pFVar2->IntervalEnd = iVar11;
    pFVar1 = param_1 + iVar17;
    pFVar1->Lane = pFVar9;
    pFVar1->IntervalStart = iVar12;
    pFVar1->IntervalEnd = iVar13;
    iVar15 = iVar17;
  } while( true );
}

// IntroSortInternal<TraceServices::FDbgHelpResolver::FModuleEntry_*,int,FIdentityFunctor,`TraceServices::FDbgHelpResolver::QueueModuleLoad'::__l2::<lambda_1>_> @ 14d419e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TraceServices::FDbgHelpResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FDbgHelpResolver::QueueModuleLoad_::__l2::<lambda_1>_>
          (FModuleEntry **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModuleEntry **ppFVar1;
  FModuleEntry *pFVar2;
  int iVar3;
  FModuleEntry **ppFVar4;
  FModuleEntry **ppFVar5;
  FModuleEntry **ppFVar6;
  FModuleEntry **ppFVar7;
  FModuleEntry **ppFVar8;
  FModuleEntry ***pppFVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  FModuleEntry **local_348;
  FModuleEntry **local_338;
  FModuleEntry **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    pppFVar9 = &local_338;
    do {
      ppFVar8 = pppFVar9[1];
      ppFVar4 = *pppFVar9;
      ppFVar1 = pppFVar9[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_348._0_4_ = (int)ppFVar1;
      ppFVar7 = ppFVar4;
      if ((int)local_348 != 0) {
LAB_14d419f00:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar5 = ppFVar8 + 1;
          pFVar2 = ppFVar7[iVar3 >> 1];
          ppFVar7[iVar3 >> 1] = *ppFVar7;
          *ppFVar7 = pFVar2;
          ppFVar4 = ppFVar7;
LAB_14d419f30:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x00014d419f39;
          goto LAB_14d419f50;
        }
        for (; ppFVar4 = ppFVar7, ppFVar1 = ppFVar7, ppFVar7 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar5 = ppFVar4, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            ppFVar4 = ppFVar1;
            if ((*ppFVar1)->Module->Base <= (*ppFVar5)->Module->Base) {
              ppFVar4 = ppFVar5;
            }
          }
          pFVar2 = *ppFVar5;
          *ppFVar5 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_14d41a017;
      }
LAB_14d41a005:
      local_348 = ppFVar1;
      HeapSortInternal<TraceServices::FDbgHelpResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FDbgHelpResolver::QueueModuleLoad_::__l2::<lambda_1>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_14d41a017:
      pppFVar9 = pppFVar9 + -3;
    } while (&local_338 <= pppFVar9);
  }
  return;
code_r0x00014d419f39:
  if ((*ppFVar4)->Module->Base <= (*ppFVar7)->Module->Base) goto LAB_14d419f30;
LAB_14d419f50:
  do {
    ppFVar6 = ppFVar5;
    ppFVar5 = ppFVar6 + -1;
    if (ppFVar5 <= ppFVar7) break;
  } while ((*ppFVar7)->Module->Base <= (*ppFVar5)->Module->Base);
  if (ppFVar4 <= ppFVar5) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar5;
    *ppFVar5 = pFVar2;
    goto LAB_14d419f30;
  }
  pFVar2 = *ppFVar7;
  local_348._0_4_ = (int)local_348 + -1;
  *ppFVar7 = *ppFVar5;
  *ppFVar5 = pFVar2;
  if ((longlong)((longlong)ppFVar5 + (-8 - (longlong)ppFVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar9 = ppFVar4;
      pppFVar9[1] = ppFVar8;
      *(int *)(pppFVar9 + 2) = (int)local_348;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar5 <= ppFVar7 + 1) goto LAB_14d41a017;
    ppFVar8 = ppFVar6 + -2;
    ppFVar4 = ppFVar7;
  }
  else {
    if (ppFVar7 + 1 < ppFVar5) {
      *pppFVar9 = ppFVar7;
      pppFVar9[1] = ppFVar6 + -2;
      *(int *)(pppFVar9 + 2) = (int)local_348;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_14d41a017;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar7 = ppFVar4;
  if ((int)local_348 == 0) goto LAB_14d41a005;
  goto LAB_14d419f00;
}

// IntroSortInternal<TraceServices::FSymslibResolver::FModuleEntry_*,int,FIdentityFunctor,`TraceServices::FSymslibResolver::QueueModuleLoad'::__l2::<lambda_1>_> @ 14d41a0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TraceServices::FSymslibResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FSymslibResolver::QueueModuleLoad_::__l2::<lambda_1>_>
          (FModuleEntry **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModuleEntry **ppFVar1;
  FModuleEntry *pFVar2;
  int iVar3;
  FModuleEntry **ppFVar4;
  FModuleEntry **ppFVar5;
  FModuleEntry **ppFVar6;
  FModuleEntry **ppFVar7;
  FModuleEntry **ppFVar8;
  FModuleEntry ***pppFVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  FModuleEntry **local_348;
  FModuleEntry **local_338;
  FModuleEntry **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    pppFVar9 = &local_338;
    do {
      ppFVar8 = pppFVar9[1];
      ppFVar4 = *pppFVar9;
      ppFVar1 = pppFVar9[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_348._0_4_ = (int)ppFVar1;
      ppFVar7 = ppFVar4;
      if ((int)local_348 != 0) {
LAB_14d41a170:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar5 = ppFVar8 + 1;
          pFVar2 = ppFVar7[iVar3 >> 1];
          ppFVar7[iVar3 >> 1] = *ppFVar7;
          *ppFVar7 = pFVar2;
          ppFVar4 = ppFVar7;
LAB_14d41a1a0:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x00014d41a1a9;
          goto LAB_14d41a1c0;
        }
        for (; ppFVar4 = ppFVar7, ppFVar1 = ppFVar7, ppFVar7 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar5 = ppFVar4, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            ppFVar4 = ppFVar1;
            if ((*ppFVar1)->Module->Base <= (*ppFVar5)->Module->Base) {
              ppFVar4 = ppFVar5;
            }
          }
          pFVar2 = *ppFVar5;
          *ppFVar5 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_14d41a287;
      }
LAB_14d41a275:
      local_348 = ppFVar1;
      HeapSortInternal<TraceServices::FSymslibResolver::FModuleEntry_*,int,FIdentityFunctor,_TraceServices::FSymslibResolver::QueueModuleLoad_::__l2::<lambda_1>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_14d41a287:
      pppFVar9 = pppFVar9 + -3;
    } while (&local_338 <= pppFVar9);
  }
  return;
code_r0x00014d41a1a9:
  if ((*ppFVar4)->Module->Base <= (*ppFVar7)->Module->Base) goto LAB_14d41a1a0;
LAB_14d41a1c0:
  do {
    ppFVar6 = ppFVar5;
    ppFVar5 = ppFVar6 + -1;
    if (ppFVar5 <= ppFVar7) break;
  } while ((*ppFVar7)->Module->Base <= (*ppFVar5)->Module->Base);
  if (ppFVar4 <= ppFVar5) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar5;
    *ppFVar5 = pFVar2;
    goto LAB_14d41a1a0;
  }
  pFVar2 = *ppFVar7;
  local_348._0_4_ = (int)local_348 + -1;
  *ppFVar7 = *ppFVar5;
  *ppFVar5 = pFVar2;
  if ((longlong)((longlong)ppFVar5 + (-8 - (longlong)ppFVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar9 = ppFVar4;
      pppFVar9[1] = ppFVar8;
      *(int *)(pppFVar9 + 2) = (int)local_348;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar5 <= ppFVar7 + 1) goto LAB_14d41a287;
    ppFVar8 = ppFVar6 + -2;
    ppFVar4 = ppFVar7;
  }
  else {
    if (ppFVar7 + 1 < ppFVar5) {
      *pppFVar9 = ppFVar7;
      pppFVar9[1] = ppFVar6 + -2;
      *(int *)(pppFVar9 + 2) = (int)local_348;
      pppFVar9 = pppFVar9 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_14d41a287;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar7 = ppFVar4;
  if ((int)local_348 == 0) goto LAB_14d41a275;
  goto LAB_14d41a170;
}

// IntroSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,`TraceServices::FThreadProvider::SortThreads'::__l2::<lambda_1>,TLess<void>_> @ 14d41a330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TLess<void>_>
          (FThreadInfoInternal **param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  FThreadInfoInternal *pFVar1;
  FThreadInfoInternal *pFVar2;
  FThreadInfoInternal **ppFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FThreadInfoInternal **ppFVar7;
  FThreadInfoInternal **ppFVar8;
  FThreadInfoInternal **ppFVar9;
  FThreadInfoInternal ***pppFVar10;
  FThreadInfoInternal **ppFVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_388 [48];
  FThreadInfoInternal **local_358;
  FThreadInfoInternal **local_348;
  FThreadInfoInternal **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (param_2 < 2) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  local_340 = param_1 + (longlong)param_2 + -1;
  local_348 = param_1;
  fVar13 = logf((float)param_2 * (float)param_2);
  local_338 = (undefined4)(longlong)fVar13;
  memset(local_330,0,0x2e8);
  pppFVar10 = &local_348;
LAB_14d41a3c0:
  ppFVar11 = pppFVar10[1];
  local_358 = pppFVar10[2];
  iVar4 = (int)((longlong)ppFVar11 - (longlong)*pppFVar10 >> 3);
  ppFVar3 = *pppFVar10;
  iVar6 = (int)local_358;
  while (iVar5 = iVar4 + 1, iVar6 != 0) {
    if (iVar5 < 9) goto joined_r0x00014d41a5b2;
    if (iVar5 < 0) {
      iVar5 = iVar4 + 2;
    }
    ppFVar7 = ppFVar11 + 1;
    pFVar1 = ppFVar3[iVar5 >> 1];
    ppFVar3[iVar5 >> 1] = *ppFVar3;
    *ppFVar3 = pFVar1;
    ppFVar9 = ppFVar3;
LAB_14d41a420:
    do {
      ppFVar9 = ppFVar9 + 1;
      if (ppFVar11 < ppFVar9) break;
      pFVar1 = *ppFVar3;
      pFVar2 = *ppFVar9;
      iVar4 = pFVar1->PrioritySortOrder;
      if ((iVar4 < 0) || (iVar5 = pFVar2->PrioritySortOrder, iVar5 < 0)) {
        iVar5 = pFVar2->PrioritySortOrder;
LAB_14d41a45e:
        bVar12 = iVar4 < iVar5;
      }
      else {
        bVar12 = pFVar1->GroupSortOrder < pFVar2->GroupSortOrder;
        if (pFVar1->GroupSortOrder == pFVar2->GroupSortOrder) {
          if (iVar4 != iVar5) goto LAB_14d41a45e;
          bVar12 = pFVar1->FallbackSortOrder < pFVar2->FallbackSortOrder;
        }
      }
    } while (!bVar12);
    do {
      ppFVar8 = ppFVar7;
      ppFVar7 = ppFVar8 + -1;
      if (ppFVar7 <= ppFVar3) break;
      pFVar1 = *ppFVar7;
      pFVar2 = *ppFVar3;
      iVar4 = pFVar1->PrioritySortOrder;
      if ((iVar4 < 0) || (iVar5 = pFVar2->PrioritySortOrder, iVar5 < 0)) {
        iVar5 = pFVar2->PrioritySortOrder;
LAB_14d41a4a3:
        bVar12 = iVar4 < iVar5;
      }
      else {
        bVar12 = pFVar1->GroupSortOrder < pFVar2->GroupSortOrder;
        if (pFVar1->GroupSortOrder == pFVar2->GroupSortOrder) {
          if (iVar4 != iVar5) goto LAB_14d41a4a3;
          bVar12 = pFVar1->FallbackSortOrder < pFVar2->FallbackSortOrder;
        }
      }
    } while (!bVar12);
    if (ppFVar9 <= ppFVar7) {
      pFVar1 = *ppFVar9;
      *ppFVar9 = *ppFVar7;
      *ppFVar7 = pFVar1;
      goto LAB_14d41a420;
    }
    pFVar1 = *ppFVar3;
    iVar6 = iVar6 + -1;
    *ppFVar3 = *ppFVar7;
    *ppFVar7 = pFVar1;
    if ((longlong)((longlong)ppFVar7 + (-8 - (longlong)ppFVar3) & 0xfffffffffffffff8U) <
        (longlong)((longlong)ppFVar11 - (longlong)ppFVar9 & 0xfffffffffffffff8U)) {
      if (ppFVar9 < ppFVar11) {
        *pppFVar10 = ppFVar9;
        pppFVar10[1] = ppFVar11;
        *(int *)(pppFVar10 + 2) = iVar6;
        pppFVar10 = pppFVar10 + 3;
      }
      if (ppFVar7 <= ppFVar3 + 1) goto LAB_14d41a55b;
      ppFVar11 = ppFVar8 + -2;
      ppFVar9 = ppFVar3;
    }
    else {
      if (ppFVar3 + 1 < ppFVar7) {
        *pppFVar10 = ppFVar3;
        pppFVar10[1] = ppFVar8 + -2;
        *(int *)(pppFVar10 + 2) = iVar6;
        pppFVar10 = pppFVar10 + 3;
      }
      if (ppFVar11 <= ppFVar9) goto LAB_14d41a55b;
    }
    iVar4 = (int)((longlong)ppFVar11 - (longlong)ppFVar9 >> 3);
    ppFVar3 = ppFVar9;
  }
  HeapSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TLess<void>_>
            (ppFVar3,iVar5,param_3,param_4);
  goto LAB_14d41a55b;
joined_r0x00014d41a5b2:
  for (; ppFVar9 = ppFVar3, ppFVar7 = ppFVar3, ppFVar3 < ppFVar11; ppFVar11 = ppFVar11 + -1) {
    while (ppFVar7 = ppFVar7 + 1, ppFVar7 <= ppFVar11) {
      pFVar1 = *ppFVar9;
      pFVar2 = *ppFVar7;
      iVar6 = pFVar1->PrioritySortOrder;
      if ((iVar6 < 0) || (iVar4 = pFVar2->PrioritySortOrder, iVar4 < 0)) {
        iVar4 = pFVar2->PrioritySortOrder;
LAB_14d41a607:
        bVar12 = iVar6 < iVar4;
      }
      else {
        bVar12 = pFVar1->GroupSortOrder < pFVar2->GroupSortOrder;
        if (pFVar1->GroupSortOrder == pFVar2->GroupSortOrder) {
          if (iVar6 != iVar4) goto LAB_14d41a607;
          bVar12 = pFVar1->FallbackSortOrder < pFVar2->FallbackSortOrder;
        }
      }
      if (bVar12) {
        ppFVar9 = ppFVar7;
      }
    }
    pFVar1 = *ppFVar9;
    *ppFVar9 = *ppFVar11;
    *ppFVar11 = pFVar1;
  }
LAB_14d41a55b:
  pppFVar10 = pppFVar10 + -3;
  if (pppFVar10 < &local_348) {
    return;
  }
  goto LAB_14d41a3c0;
}

// IntroSortInternal<TraceServices::FPsymResolver::FModuleEntry,int,FIdentityFunctor,`TraceServices::FPsymResolver::QueueModuleLoad'::__l2::<lambda_1>_> @ 14d41a640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TraceServices::FPsymResolver::FModuleEntry,int,FIdentityFunctor,_TraceServices::FPsymResolver::QueueModuleLoad_::__l2::<lambda_1>_>
          (FModuleEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FModuleEntry *pFVar1;
  ulong64 uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FModule *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FModuleEntry *pFVar17;
  FModuleEntry *pFVar18;
  FModuleEntry *pFVar19;
  FModuleEntry *pFVar20;
  FModuleEntry *pFVar21;
  FModuleEntry *pFVar22;
  FModuleEntry **ppFVar23;
  float fVar24;
  undefined1 auStack_378 [48];
  FModuleEntry *local_348;
  FModuleEntry *local_338;
  FModuleEntry *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar24;
    memset(local_320,0,0x2e8);
    ppFVar23 = &local_338;
    do {
      pFVar17 = ppFVar23[1];
      pFVar22 = *ppFVar23;
      pFVar1 = ppFVar23[2];
      local_348._0_4_ = (int)pFVar1;
      iVar16 = (int)(((longlong)pFVar17 - (longlong)pFVar22) / 0x38) + 1;
      pFVar21 = pFVar22;
      if ((int)local_348 != 0) {
LAB_14d41a710:
        if (8 < iVar16) {
          uVar10 = pFVar21->Size;
          uVar11 = *(undefined4 *)&pFVar21->field_0xc;
          pFVar19 = pFVar17 + 1;
          pFVar22 = pFVar21 + iVar16 / 2;
          uVar2 = pFVar22->Base;
          uVar12 = pFVar22->Size;
          uVar13 = *(undefined4 *)&pFVar22->field_0xc;
          pwVar3 = pFVar22->Name;
          pwVar4 = pFVar22->Path;
          pFVar5 = pFVar22->Module;
          pFVar6 = (pFVar22->ImageId).AllocatorInstance.Data;
          iVar14 = (pFVar22->ImageId).ArrayNum;
          iVar15 = (pFVar22->ImageId).ArrayMax;
          pFVar22->Base = pFVar21->Base;
          pFVar22->Size = uVar10;
          *(undefined4 *)&pFVar22->field_0xc = uVar11;
          pwVar7 = pFVar21->Path;
          pFVar22->Name = pFVar21->Name;
          pFVar22->Path = pwVar7;
          pFVar8 = (pFVar21->ImageId).AllocatorInstance.Data;
          pFVar22->Module = pFVar21->Module;
          (pFVar22->ImageId).AllocatorInstance.Data = pFVar8;
          iVar16 = (pFVar21->ImageId).ArrayMax;
          (pFVar22->ImageId).ArrayNum = (pFVar21->ImageId).ArrayNum;
          (pFVar22->ImageId).ArrayMax = iVar16;
          pFVar21->Base = uVar2;
          pFVar21->Size = uVar12;
          *(undefined4 *)&pFVar21->field_0xc = uVar13;
          pFVar21->Name = pwVar3;
          pFVar21->Path = pwVar4;
          pFVar21->Module = pFVar5;
          (pFVar21->ImageId).AllocatorInstance.Data = pFVar6;
          (pFVar21->ImageId).ArrayNum = iVar14;
          (pFVar21->ImageId).ArrayMax = iVar15;
          pFVar22 = pFVar21;
LAB_14d41a780:
          pFVar18 = pFVar22;
          pFVar22 = pFVar18 + 1;
          if (pFVar22 <= pFVar17) goto code_r0x00014d41a789;
          goto LAB_14d41a791;
        }
        for (; pFVar22 = pFVar21, pFVar1 = pFVar21, pFVar21 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar17) {
            if (pFVar22->Base < pFVar1->Base) {
              pFVar22 = pFVar1;
            }
          }
          uVar2 = pFVar22->Base;
          uVar12 = pFVar22->Size;
          uVar13 = *(undefined4 *)&pFVar22->field_0xc;
          iVar14 = (pFVar22->ImageId).ArrayNum;
          iVar15 = (pFVar22->ImageId).ArrayMax;
          pwVar3 = pFVar22->Name;
          pwVar4 = pFVar22->Path;
          uVar10 = pFVar17->Size;
          uVar11 = *(undefined4 *)&pFVar17->field_0xc;
          pFVar5 = pFVar22->Module;
          pFVar6 = (pFVar22->ImageId).AllocatorInstance.Data;
          pFVar22->Base = pFVar17->Base;
          pFVar22->Size = uVar10;
          *(undefined4 *)&pFVar22->field_0xc = uVar11;
          pwVar7 = pFVar17->Path;
          pFVar22->Name = pFVar17->Name;
          pFVar22->Path = pwVar7;
          pFVar8 = (pFVar17->ImageId).AllocatorInstance.Data;
          pFVar22->Module = pFVar17->Module;
          (pFVar22->ImageId).AllocatorInstance.Data = pFVar8;
          iVar16 = (pFVar17->ImageId).ArrayMax;
          (pFVar22->ImageId).ArrayNum = (pFVar17->ImageId).ArrayNum;
          (pFVar22->ImageId).ArrayMax = iVar16;
          pFVar17->Base = uVar2;
          pFVar17->Size = uVar12;
          *(undefined4 *)&pFVar17->field_0xc = uVar13;
          pFVar17->Name = pwVar3;
          pFVar17->Path = pwVar4;
          pFVar17->Module = pFVar5;
          (pFVar17->ImageId).AllocatorInstance.Data = pFVar6;
          (pFVar17->ImageId).ArrayNum = iVar14;
          (pFVar17->ImageId).ArrayMax = iVar15;
        }
        goto LAB_14d41a902;
      }
LAB_14d41a8f2:
      local_348 = pFVar1;
      HeapSortInternal<TraceServices::FPsymResolver::FModuleEntry,int,FIdentityFunctor,_TraceServices::FPsymResolver::QueueModuleLoad_::__l2::<lambda_1>_>
                (pFVar22,iVar16,param_3,param_4);
LAB_14d41a902:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_338 <= ppFVar23);
  }
  return;
code_r0x00014d41a789:
  if (pFVar22->Base <= pFVar21->Base) goto LAB_14d41a780;
LAB_14d41a791:
  do {
    pFVar20 = pFVar19;
    pFVar19 = pFVar20 + -1;
    if (pFVar19 <= pFVar21) break;
  } while (pFVar21->Base <= pFVar19->Base);
  uVar9 = *(undefined8 *)&pFVar20[-1].Size;
  if (pFVar22 <= pFVar19) {
    uVar2 = pFVar22->Base;
    uVar10 = pFVar18[1].Size;
    uVar11 = *(undefined4 *)&pFVar18[1].field_0xc;
    pwVar3 = pFVar18[1].Name;
    pwVar4 = pFVar18[1].Path;
    pFVar5 = pFVar18[1].Module;
    pFVar8 = pFVar18[1].ImageId.AllocatorInstance.Data;
    iVar14 = pFVar18[1].ImageId.ArrayNum;
    iVar15 = pFVar18[1].ImageId.ArrayMax;
    pFVar22->Base = pFVar19->Base;
    *(undefined8 *)&pFVar18[1].Size = uVar9;
    pwVar7 = pFVar20[-1].Path;
    pFVar18[1].Name = pFVar20[-1].Name;
    pFVar18[1].Path = pwVar7;
    pFVar6 = pFVar20[-1].ImageId.AllocatorInstance.Data;
    pFVar18[1].Module = pFVar20[-1].Module;
    pFVar18[1].ImageId.AllocatorInstance.Data = pFVar6;
    iVar16 = pFVar20[-1].ImageId.ArrayMax;
    pFVar18[1].ImageId.ArrayNum = pFVar20[-1].ImageId.ArrayNum;
    pFVar18[1].ImageId.ArrayMax = iVar16;
    pFVar19->Base = uVar2;
    pFVar20[-1].Size = uVar10;
    *(undefined4 *)&pFVar20[-1].field_0xc = uVar11;
    pFVar20[-1].Name = pwVar3;
    pFVar20[-1].Path = pwVar4;
    pFVar20[-1].Module = pFVar5;
    pFVar20[-1].ImageId.AllocatorInstance.Data = pFVar8;
    pFVar20[-1].ImageId.ArrayNum = iVar14;
    pFVar20[-1].ImageId.ArrayMax = iVar15;
    goto LAB_14d41a780;
  }
  uVar2 = pFVar21->Base;
  uVar10 = pFVar21->Size;
  uVar11 = *(undefined4 *)&pFVar21->field_0xc;
  pwVar3 = pFVar21->Name;
  pwVar4 = pFVar21->Path;
  local_348._0_4_ = (int)local_348 + -1;
  pFVar5 = pFVar21->Module;
  pFVar6 = (pFVar21->ImageId).AllocatorInstance.Data;
  iVar14 = (pFVar21->ImageId).ArrayNum;
  iVar15 = (pFVar21->ImageId).ArrayMax;
  pFVar21->Base = pFVar19->Base;
  *(undefined8 *)&pFVar21->Size = uVar9;
  pwVar7 = pFVar20[-1].Path;
  pFVar21->Name = pFVar20[-1].Name;
  pFVar21->Path = pwVar7;
  pFVar8 = pFVar20[-1].ImageId.AllocatorInstance.Data;
  pFVar21->Module = pFVar20[-1].Module;
  (pFVar21->ImageId).AllocatorInstance.Data = pFVar8;
  iVar16 = pFVar20[-1].ImageId.ArrayMax;
  (pFVar21->ImageId).ArrayNum = pFVar20[-1].ImageId.ArrayNum;
  (pFVar21->ImageId).ArrayMax = iVar16;
  pFVar19->Base = uVar2;
  pFVar20[-1].Size = uVar10;
  *(undefined4 *)&pFVar20[-1].field_0xc = uVar11;
  pFVar20[-1].Name = pwVar3;
  pFVar20[-1].Path = pwVar4;
  pFVar20[-1].Module = pFVar5;
  pFVar20[-1].ImageId.AllocatorInstance.Data = pFVar6;
  pFVar20[-1].ImageId.ArrayNum = iVar14;
  pFVar20[-1].ImageId.ArrayMax = iVar15;
  if (((longlong)pFVar19 + (-0x38 - (longlong)pFVar21)) / 0x38 <
      ((longlong)pFVar17 - (longlong)pFVar22) / 0x38) {
    if (pFVar22 < pFVar17) {
      *ppFVar23 = pFVar22;
      ppFVar23[1] = pFVar17;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar19 <= pFVar21 + 1) goto LAB_14d41a902;
    pFVar17 = pFVar20 + -2;
    pFVar22 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar19) {
      *ppFVar23 = pFVar21;
      ppFVar23[1] = pFVar20 + -2;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar17 <= pFVar22) goto LAB_14d41a902;
  }
  iVar16 = (int)(((longlong)pFVar17 - (longlong)pFVar22) / 0x38) + 1;
  pFVar21 = pFVar22;
  if ((int)local_348 == 0) goto LAB_14d41a8f2;
  goto LAB_14d41a710;
}

// IntroSortInternal<TraceServices::FPsymResolver::FPsymLine,int,FIdentityFunctor,`TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_3>_> @ 14d41a9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TraceServices::FPsymResolver::FPsymLine,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_3>_>
          (FPsymLine *param_1,int param_2,FIdentityFunctor param_3,<lambda_3> param_4)

{
  FPsymLine *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong64 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  FPsymLine *pFVar14;
  FPsymLine *pFVar15;
  FPsymLine *pFVar16;
  FPsymLine *pFVar17;
  FPsymLine *pFVar18;
  FPsymLine *pFVar19;
  FPsymLine **ppFVar20;
  float fVar21;
  undefined1 auStack_378 [48];
  FPsymLine *local_348;
  FPsymLine *local_338;
  FPsymLine *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar21;
    memset(local_320,0,0x2e8);
    ppFVar20 = &local_338;
    do {
      pFVar14 = ppFVar20[1];
      pFVar19 = *ppFVar20;
      pFVar1 = ppFVar20[2];
      local_348._0_4_ = (int)pFVar1;
      iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar19) / 0x18) + 1;
      pFVar18 = pFVar19;
      if ((int)local_348 != 0) {
LAB_14d41aac0:
        if (8 < iVar13) {
          uVar5 = pFVar18->Size;
          iVar6 = pFVar18->LineNumber;
          pFVar16 = pFVar14 + 1;
          iVar13 = iVar13 / 2;
          pFVar19 = pFVar18 + iVar13;
          uVar4 = pFVar19->Address;
          uVar8 = pFVar19->Size;
          iVar9 = pFVar19->LineNumber;
          iVar10 = pFVar18[iVar13].FileIndex;
          uVar11 = *(undefined4 *)&pFVar18[iVar13].field_0x14;
          pFVar19 = pFVar18 + iVar13;
          pFVar19->Address = pFVar18->Address;
          pFVar19->Size = uVar5;
          pFVar19->LineNumber = iVar6;
          uVar7 = *(undefined4 *)&pFVar18->field_0x14;
          pFVar18[iVar13].FileIndex = pFVar18->FileIndex;
          *(undefined4 *)&pFVar18[iVar13].field_0x14 = uVar7;
          pFVar18->Address = uVar4;
          pFVar18->Size = uVar8;
          pFVar18->LineNumber = iVar9;
          pFVar18->FileIndex = iVar10;
          *(undefined4 *)&pFVar18->field_0x14 = uVar11;
          pFVar19 = pFVar18;
LAB_14d41ab10:
          pFVar15 = pFVar19;
          pFVar19 = pFVar15 + 1;
          if (pFVar19 <= pFVar14) goto code_r0x00014d41ab19;
          goto LAB_14d41ab21;
        }
        for (; pFVar19 = pFVar18, pFVar1 = pFVar18, pFVar18 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar19->Address < pFVar1->Address) {
              pFVar19 = pFVar1;
            }
          }
          uVar4 = pFVar19->Address;
          uVar8 = pFVar19->Size;
          iVar6 = pFVar19->LineNumber;
          iVar9 = pFVar19->FileIndex;
          uVar11 = *(undefined4 *)&pFVar19->field_0x14;
          uVar5 = pFVar14->Size;
          iVar13 = pFVar14->LineNumber;
          pFVar19->Address = pFVar14->Address;
          pFVar19->Size = uVar5;
          pFVar19->LineNumber = iVar13;
          uVar7 = *(undefined4 *)&pFVar14->field_0x14;
          pFVar19->FileIndex = pFVar14->FileIndex;
          *(undefined4 *)&pFVar19->field_0x14 = uVar7;
          pFVar14->Address = uVar4;
          pFVar14->Size = uVar8;
          pFVar14->LineNumber = iVar6;
          pFVar14->FileIndex = iVar9;
          *(undefined4 *)&pFVar14->field_0x14 = uVar11;
        }
        goto LAB_14d41ac42;
      }
LAB_14d41ac32:
      local_348 = pFVar1;
      HeapSortInternal<TraceServices::FPsymResolver::FPsymLine,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_3>_>
                (pFVar19,iVar13,param_3,param_4);
LAB_14d41ac42:
      ppFVar20 = ppFVar20 + -3;
    } while (&local_338 <= ppFVar20);
  }
  return;
code_r0x00014d41ab19:
  if (pFVar19->Address <= pFVar18->Address) goto LAB_14d41ab10;
LAB_14d41ab21:
  do {
    pFVar17 = pFVar16;
    pFVar16 = pFVar17 + -1;
    if (pFVar16 <= pFVar18) break;
  } while (pFVar18->Address <= pFVar16->Address);
  uVar2 = pFVar17[-1].Size;
  uVar3 = pFVar17[-1].LineNumber;
  if (pFVar19 <= pFVar16) {
    uVar4 = pFVar19->Address;
    uVar5 = pFVar15[1].Size;
    iVar13 = pFVar15[1].LineNumber;
    iVar6 = pFVar15[1].FileIndex;
    uVar11 = *(undefined4 *)&pFVar15[1].field_0x14;
    pFVar19->Address = pFVar16->Address;
    pFVar15[1].Size = uVar2;
    pFVar15[1].LineNumber = uVar3;
    uVar7 = *(undefined4 *)&pFVar17[-1].field_0x14;
    pFVar15[1].FileIndex = pFVar17[-1].FileIndex;
    *(undefined4 *)&pFVar15[1].field_0x14 = uVar7;
    pFVar16->Address = uVar4;
    pFVar17[-1].Size = uVar5;
    pFVar17[-1].LineNumber = iVar13;
    pFVar17[-1].FileIndex = iVar6;
    *(undefined4 *)&pFVar17[-1].field_0x14 = uVar11;
    goto LAB_14d41ab10;
  }
  uVar4 = pFVar18->Address;
  uVar5 = pFVar18->Size;
  iVar13 = pFVar18->LineNumber;
  iVar6 = pFVar18->FileIndex;
  uVar11 = *(undefined4 *)&pFVar18->field_0x14;
  lVar12 = (longlong)pFVar16 + (-0x18 - (longlong)pFVar18);
  local_348._0_4_ = (int)local_348 + -1;
  lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
  pFVar18->Address = pFVar16->Address;
  pFVar18->Size = uVar2;
  pFVar18->LineNumber = uVar3;
  uVar7 = *(undefined4 *)&pFVar17[-1].field_0x14;
  pFVar18->FileIndex = pFVar17[-1].FileIndex;
  *(undefined4 *)&pFVar18->field_0x14 = uVar7;
  pFVar16->Address = uVar4;
  pFVar17[-1].Size = uVar5;
  pFVar17[-1].LineNumber = iVar13;
  pFVar17[-1].FileIndex = iVar6;
  *(undefined4 *)&pFVar17[-1].field_0x14 = uVar11;
  if ((lVar12 >> 2) - (lVar12 >> 0x3f) < ((longlong)pFVar14 - (longlong)pFVar19) / 0x18) {
    if (pFVar19 < pFVar14) {
      *ppFVar20 = pFVar19;
      ppFVar20[1] = pFVar14;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar16 <= pFVar18 + 1) goto LAB_14d41ac42;
    pFVar14 = pFVar17 + -2;
    pFVar19 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar16) {
      *ppFVar20 = pFVar18;
      ppFVar20[1] = pFVar17 + -2;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar14 <= pFVar19) goto LAB_14d41ac42;
  }
  iVar13 = (int)(((longlong)pFVar14 - (longlong)pFVar19) / 0x18) + 1;
  pFVar18 = pFVar19;
  if ((int)local_348 == 0) goto LAB_14d41ac32;
  goto LAB_14d41aac0;
}

// IntroSortInternal<TraceServices::FPsymResolver::FPsymSymbol,int,FIdentityFunctor,`TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_2>_> @ 14d41ad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TraceServices::FPsymResolver::FPsymSymbol,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_2>_>
          (FPsymSymbol *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FPsymSymbol *pFVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  FPsymSymbol *pFVar11;
  FPsymSymbol *pFVar12;
  FPsymSymbol *pFVar13;
  FPsymSymbol *pFVar14;
  FPsymSymbol *pFVar15;
  FPsymSymbol *pFVar16;
  FPsymSymbol **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FPsymSymbol *local_348;
  FPsymSymbol *local_338;
  FPsymSymbol *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar11 = ppFVar17[1];
      pFVar16 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0x18) + 1;
      pFVar15 = pFVar16;
      if ((int)local_348 != 0) {
LAB_14d41ade0:
        if (8 < iVar10) {
          uVar5 = pFVar15->Size;
          uVar6 = *(undefined4 *)&pFVar15->field_0xc;
          pFVar13 = pFVar11 + 1;
          iVar10 = iVar10 / 2;
          pFVar16 = pFVar15 + iVar10;
          uVar4 = pFVar16->Address;
          uVar7 = pFVar16->Size;
          uVar8 = *(undefined4 *)&pFVar16->field_0xc;
          pwVar2 = pFVar15[iVar10].Name;
          pFVar16 = pFVar15 + iVar10;
          pFVar16->Address = pFVar15->Address;
          pFVar16->Size = uVar5;
          *(undefined4 *)&pFVar16->field_0xc = uVar6;
          pFVar15[iVar10].Name = pFVar15->Name;
          pFVar15->Address = uVar4;
          pFVar15->Size = uVar7;
          *(undefined4 *)&pFVar15->field_0xc = uVar8;
          pFVar15->Name = pwVar2;
          pFVar16 = pFVar15;
LAB_14d41ae30:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar11) goto code_r0x00014d41ae39;
          goto LAB_14d41ae41;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar11; pFVar11 = pFVar11 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar11) {
            if (pFVar16->Address < pFVar1->Address) {
              pFVar16 = pFVar1;
            }
          }
          uVar4 = pFVar16->Address;
          uVar7 = pFVar16->Size;
          uVar8 = *(undefined4 *)&pFVar16->field_0xc;
          pwVar2 = pFVar16->Name;
          uVar5 = pFVar11->Size;
          uVar6 = *(undefined4 *)&pFVar11->field_0xc;
          pFVar16->Address = pFVar11->Address;
          pFVar16->Size = uVar5;
          *(undefined4 *)&pFVar16->field_0xc = uVar6;
          pFVar16->Name = pFVar11->Name;
          pFVar11->Address = uVar4;
          pFVar11->Size = uVar7;
          *(undefined4 *)&pFVar11->field_0xc = uVar8;
          pFVar11->Name = pwVar2;
        }
        goto LAB_14d41af62;
      }
LAB_14d41af52:
      local_348 = pFVar1;
      HeapSortInternal<TraceServices::FPsymResolver::FPsymSymbol,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_2>_>
                (pFVar16,iVar10,param_3,param_4);
LAB_14d41af62:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014d41ae39:
  if (pFVar16->Address <= pFVar15->Address) goto LAB_14d41ae30;
LAB_14d41ae41:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar15) break;
  } while (pFVar15->Address <= pFVar13->Address);
  uVar3 = *(undefined8 *)&pFVar14[-1].Size;
  if (pFVar16 <= pFVar13) {
    uVar4 = pFVar16->Address;
    uVar5 = pFVar12[1].Size;
    uVar6 = *(undefined4 *)&pFVar12[1].field_0xc;
    pwVar2 = pFVar12[1].Name;
    pFVar16->Address = pFVar13->Address;
    *(undefined8 *)&pFVar12[1].Size = uVar3;
    pFVar12[1].Name = pFVar14[-1].Name;
    pFVar13->Address = uVar4;
    pFVar14[-1].Size = uVar5;
    *(undefined4 *)&pFVar14[-1].field_0xc = uVar6;
    pFVar14[-1].Name = pwVar2;
    goto LAB_14d41ae30;
  }
  uVar4 = pFVar15->Address;
  uVar5 = pFVar15->Size;
  uVar6 = *(undefined4 *)&pFVar15->field_0xc;
  pwVar2 = pFVar15->Name;
  lVar9 = (longlong)pFVar13 + (-0x18 - (longlong)pFVar15);
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  pFVar15->Address = pFVar13->Address;
  *(undefined8 *)&pFVar15->Size = uVar3;
  pFVar15->Name = pFVar14[-1].Name;
  pFVar13->Address = uVar4;
  pFVar14[-1].Size = uVar5;
  *(undefined4 *)&pFVar14[-1].field_0xc = uVar6;
  pFVar14[-1].Name = pwVar2;
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)pFVar11 - (longlong)pFVar16) / 0x18) {
    if (pFVar16 < pFVar11) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar11;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar15 + 1) goto LAB_14d41af62;
    pFVar11 = pFVar14 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar13) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar14 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar16) goto LAB_14d41af62;
  }
  iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0x18) + 1;
  pFVar15 = pFVar16;
  if ((int)local_348 == 0) goto LAB_14d41af52;
  goto LAB_14d41ade0;
}

// IntroSortInternal<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::FTempRow,int,FIdentityFunctor,`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::<lambda_2>_> @ 14d41b020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::<lambda_2>_>
          (FTempRow *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FTempRow *pFVar1;
  double dVar2;
  FPackageExportInfo *pFVar3;
  FPackageExportInfo *pFVar4;
  ulong64 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ELoadTimeProfilerObjectEventType EVar9;
  undefined4 uVar10;
  ELoadTimeProfilerObjectEventType EVar11;
  undefined4 uVar12;
  longlong lVar13;
  FTempRow *pFVar14;
  int iVar15;
  FTempRow *pFVar16;
  FTempRow *pFVar17;
  FTempRow *pFVar18;
  FTempRow *pFVar19;
  FTempRow *pFVar20;
  FTempRow **ppFVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  FTempRow *local_348;
  FTempRow *local_338;
  FTempRow *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar22;
    memset(local_320,0,0x2e8);
    ppFVar21 = &local_338;
    do {
      pFVar17 = ppFVar21[1];
      pFVar14 = *ppFVar21;
      pFVar1 = ppFVar21[2];
      local_348._0_4_ = (int)pFVar1;
      iVar15 = (int)(((longlong)pFVar17 - (longlong)pFVar14) / 0x30) + 1;
      pFVar20 = pFVar14;
      if ((int)local_348 != 0) {
LAB_14d41b100:
        if (8 < iVar15) {
          pFVar3 = pFVar20->ExportInfo;
          pFVar16 = pFVar17 + 1;
          pFVar14 = pFVar20 + iVar15 / 2;
          dVar2 = pFVar14->StartTime;
          pFVar4 = pFVar14->ExportInfo;
          uVar5 = pFVar14->SerializedSize;
          dVar6 = pFVar14->MainThreadTime;
          dVar7 = pFVar14->AsyncLoadingThreadTime;
          EVar11 = pFVar14->EventType;
          uVar12 = *(undefined4 *)&pFVar14->field_0x2c;
          pFVar14->StartTime = pFVar20->StartTime;
          pFVar14->ExportInfo = pFVar3;
          dVar8 = pFVar20->MainThreadTime;
          pFVar14->SerializedSize = pFVar20->SerializedSize;
          pFVar14->MainThreadTime = dVar8;
          EVar9 = pFVar20->EventType;
          uVar10 = *(undefined4 *)&pFVar20->field_0x2c;
          pFVar14->AsyncLoadingThreadTime = pFVar20->AsyncLoadingThreadTime;
          pFVar14->EventType = EVar9;
          *(undefined4 *)&pFVar14->field_0x2c = uVar10;
          pFVar20->StartTime = dVar2;
          pFVar20->ExportInfo = pFVar4;
          pFVar20->SerializedSize = uVar5;
          pFVar20->MainThreadTime = dVar6;
          pFVar20->AsyncLoadingThreadTime = dVar7;
          pFVar20->EventType = EVar11;
          *(undefined4 *)&pFVar20->field_0x2c = uVar12;
          pFVar14 = pFVar20;
LAB_14d41b157:
          pFVar18 = pFVar14;
          pFVar14 = pFVar18 + 1;
          if (pFVar14 <= pFVar17) goto code_r0x00014d41b160;
          goto LAB_14d41b170;
        }
        if (pFVar20 < pFVar17) {
          pFVar1 = pFVar20 + 1;
          do {
            pFVar14 = pFVar20;
            if (pFVar1 <= pFVar17) {
              pFVar16 = pFVar1;
              if (0xbf < (ulonglong)((longlong)pFVar17 + (0x30 - (longlong)pFVar1))) {
                do {
                  dVar2 = pFVar14->StartTime;
                  if (pFVar14->StartTime < pFVar16->StartTime) {
                    pFVar14 = pFVar16;
                    dVar2 = pFVar16->StartTime;
                  }
                  if (dVar2 < pFVar16[1].StartTime) {
                    pFVar14 = pFVar16 + 1;
                  }
                  dVar2 = pFVar14->StartTime;
                  if (pFVar14->StartTime < pFVar16[2].StartTime) {
                    pFVar14 = pFVar16 + 2;
                    dVar2 = pFVar16[2].StartTime;
                  }
                  if (dVar2 < pFVar16[3].StartTime) {
                    pFVar14 = pFVar16 + 3;
                  }
                  pFVar16 = pFVar16 + 4;
                } while (pFVar16 <= pFVar17 + -3);
              }
              for (; pFVar16 <= pFVar17; pFVar16 = pFVar16 + 1) {
                if (pFVar14->StartTime < pFVar16->StartTime) {
                  pFVar14 = pFVar16;
                }
              }
            }
            dVar2 = pFVar14->StartTime;
            pFVar3 = pFVar14->ExportInfo;
            pFVar16 = pFVar17 + -1;
            uVar5 = pFVar14->SerializedSize;
            dVar6 = pFVar14->MainThreadTime;
            dVar7 = pFVar14->AsyncLoadingThreadTime;
            EVar11 = pFVar14->EventType;
            uVar12 = *(undefined4 *)&pFVar14->field_0x2c;
            pFVar4 = pFVar17->ExportInfo;
            pFVar14->StartTime = pFVar17->StartTime;
            pFVar14->ExportInfo = pFVar4;
            dVar8 = pFVar17->MainThreadTime;
            pFVar14->SerializedSize = pFVar17->SerializedSize;
            pFVar14->MainThreadTime = dVar8;
            EVar9 = pFVar17->EventType;
            uVar10 = *(undefined4 *)&pFVar17->field_0x2c;
            pFVar14->AsyncLoadingThreadTime = pFVar17->AsyncLoadingThreadTime;
            pFVar14->EventType = EVar9;
            *(undefined4 *)&pFVar14->field_0x2c = uVar10;
            pFVar17->StartTime = dVar2;
            pFVar17->ExportInfo = pFVar3;
            pFVar17->SerializedSize = uVar5;
            pFVar17->MainThreadTime = dVar6;
            pFVar17->AsyncLoadingThreadTime = dVar7;
            pFVar17->EventType = EVar11;
            *(undefined4 *)&pFVar17->field_0x2c = uVar12;
            pFVar17 = pFVar16;
          } while (pFVar20 < pFVar16);
        }
        goto LAB_14d41b2b5;
      }
LAB_14d41b2a5:
      local_348 = pFVar1;
      HeapSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::<lambda_2>_>
                (pFVar14,iVar15,param_3,param_4);
LAB_14d41b2b5:
      ppFVar21 = ppFVar21 + -3;
    } while (&local_338 <= ppFVar21);
  }
  return;
code_r0x00014d41b160:
  if (pFVar14->StartTime < pFVar20->StartTime || pFVar14->StartTime == pFVar20->StartTime)
  goto LAB_14d41b157;
LAB_14d41b170:
  do {
    pFVar19 = pFVar16;
    pFVar16 = pFVar19 + -1;
    if (pFVar16 <= pFVar20) break;
  } while (pFVar20->StartTime < pFVar16->StartTime || pFVar20->StartTime == pFVar16->StartTime);
  pFVar3 = pFVar19[-1].ExportInfo;
  if (pFVar14 <= pFVar16) {
    dVar2 = pFVar14->StartTime;
    pFVar4 = pFVar18[1].ExportInfo;
    uVar5 = pFVar18[1].SerializedSize;
    dVar6 = pFVar18[1].MainThreadTime;
    dVar7 = pFVar18[1].AsyncLoadingThreadTime;
    EVar11 = pFVar18[1].EventType;
    uVar12 = *(undefined4 *)&pFVar18[1].field_0x2c;
    pFVar14->StartTime = pFVar16->StartTime;
    pFVar18[1].ExportInfo = pFVar3;
    dVar8 = pFVar19[-1].MainThreadTime;
    pFVar18[1].SerializedSize = pFVar19[-1].SerializedSize;
    pFVar18[1].MainThreadTime = dVar8;
    EVar9 = pFVar19[-1].EventType;
    uVar10 = *(undefined4 *)&pFVar19[-1].field_0x2c;
    pFVar18[1].AsyncLoadingThreadTime = pFVar19[-1].AsyncLoadingThreadTime;
    pFVar18[1].EventType = EVar9;
    *(undefined4 *)&pFVar18[1].field_0x2c = uVar10;
    pFVar16->StartTime = dVar2;
    pFVar19[-1].ExportInfo = pFVar4;
    pFVar19[-1].SerializedSize = uVar5;
    pFVar19[-1].MainThreadTime = dVar6;
    pFVar19[-1].AsyncLoadingThreadTime = dVar7;
    pFVar19[-1].EventType = EVar11;
    *(undefined4 *)&pFVar19[-1].field_0x2c = uVar12;
    goto LAB_14d41b157;
  }
  dVar2 = pFVar20->StartTime;
  pFVar4 = pFVar20->ExportInfo;
  uVar5 = pFVar20->SerializedSize;
  dVar6 = pFVar20->MainThreadTime;
  local_348._0_4_ = (int)local_348 + -1;
  dVar7 = pFVar20->AsyncLoadingThreadTime;
  EVar11 = pFVar20->EventType;
  uVar12 = *(undefined4 *)&pFVar20->field_0x2c;
  lVar13 = (longlong)pFVar16 + (-0x30 - (longlong)pFVar20);
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  pFVar20->StartTime = pFVar16->StartTime;
  pFVar20->ExportInfo = pFVar3;
  dVar8 = pFVar19[-1].MainThreadTime;
  pFVar20->SerializedSize = pFVar19[-1].SerializedSize;
  pFVar20->MainThreadTime = dVar8;
  EVar9 = pFVar19[-1].EventType;
  uVar10 = *(undefined4 *)&pFVar19[-1].field_0x2c;
  pFVar20->AsyncLoadingThreadTime = pFVar19[-1].AsyncLoadingThreadTime;
  pFVar20->EventType = EVar9;
  *(undefined4 *)&pFVar20->field_0x2c = uVar10;
  pFVar16->StartTime = dVar2;
  pFVar19[-1].ExportInfo = pFVar4;
  pFVar19[-1].SerializedSize = uVar5;
  pFVar19[-1].MainThreadTime = dVar6;
  pFVar19[-1].AsyncLoadingThreadTime = dVar7;
  pFVar19[-1].EventType = EVar11;
  *(undefined4 *)&pFVar19[-1].field_0x2c = uVar12;
  if ((lVar13 >> 3) - (lVar13 >> 0x3f) < ((longlong)pFVar17 - (longlong)pFVar14) / 0x30) {
    if (pFVar14 < pFVar17) {
      *ppFVar21 = pFVar14;
      ppFVar21[1] = pFVar17;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar16 <= pFVar20 + 1) goto LAB_14d41b2b5;
    pFVar17 = pFVar19 + -2;
    pFVar14 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar16) {
      *ppFVar21 = pFVar20;
      ppFVar21[1] = pFVar19 + -2;
      *(int *)(ppFVar21 + 2) = (int)local_348;
      ppFVar21 = ppFVar21 + 3;
    }
    if (pFVar17 <= pFVar14) goto LAB_14d41b2b5;
  }
  iVar15 = (int)(((longlong)pFVar17 - (longlong)pFVar14) / 0x30) + 1;
  pFVar20 = pFVar14;
  if ((int)local_348 == 0) goto LAB_14d41b2a5;
  goto LAB_14d41b100;
}

// IntroSortInternal<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::FTempRow,int,FIdentityFunctor,`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::<lambda_2>_> @ 14d41b3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::<lambda_2>_>
          (FTempRow *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FTempRow *pFVar1;
  double dVar2;
  FPackageInfo *pFVar3;
  double dVar4;
  FPackageInfo *pFVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  double dVar9;
  ulong64 uVar10;
  double dVar11;
  FTempRow *pFVar12;
  int iVar13;
  FTempRow *pFVar14;
  FTempRow *pFVar15;
  FTempRow *pFVar16;
  FTempRow *pFVar17;
  FTempRow *pFVar18;
  FTempRow **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FTempRow *local_348;
  FTempRow *local_338;
  FTempRow *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar15 = ppFVar19[1];
      pFVar12 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      local_348._0_4_ = (int)pFVar1;
      iVar13 = (int)(((longlong)pFVar15 - (longlong)pFVar12) / 0x38) + 1;
      pFVar18 = pFVar12;
      if ((int)local_348 != 0) {
LAB_14d41b4c0:
        if (8 < iVar13) {
          pFVar3 = pFVar18->PackageInfo;
          pFVar14 = pFVar15 + 1;
          pFVar12 = pFVar18 + iVar13 / 2;
          dVar4 = pFVar12->StartTime;
          pFVar5 = pFVar12->PackageInfo;
          uVar6 = pFVar12->SerializedHeaderSize;
          uVar7 = pFVar12->SerializedExportsCount;
          uVar8 = pFVar12->SerializedExportsSize;
          dVar9 = pFVar12->MainThreadTime;
          dVar2 = pFVar12->AsyncLoadingThreadTime;
          pFVar12->StartTime = pFVar18->StartTime;
          pFVar12->PackageInfo = pFVar3;
          uVar10 = pFVar18->SerializedExportsCount;
          pFVar12->SerializedHeaderSize = pFVar18->SerializedHeaderSize;
          pFVar12->SerializedExportsCount = uVar10;
          dVar11 = pFVar18->MainThreadTime;
          pFVar12->SerializedExportsSize = pFVar18->SerializedExportsSize;
          pFVar12->MainThreadTime = dVar11;
          pFVar12->AsyncLoadingThreadTime = pFVar18->AsyncLoadingThreadTime;
          pFVar18->StartTime = dVar4;
          pFVar18->PackageInfo = pFVar5;
          pFVar18->SerializedHeaderSize = uVar6;
          pFVar18->SerializedExportsCount = uVar7;
          pFVar18->SerializedExportsSize = uVar8;
          pFVar18->MainThreadTime = dVar9;
          pFVar18->AsyncLoadingThreadTime = dVar2;
          pFVar12 = pFVar18;
LAB_14d41b530:
          pFVar16 = pFVar12;
          pFVar12 = pFVar16 + 1;
          if (pFVar12 <= pFVar15) goto code_r0x00014d41b539;
          goto LAB_14d41b545;
        }
        if (pFVar18 < pFVar15) {
          pFVar1 = pFVar18 + 1;
          do {
            pFVar12 = pFVar18;
            if (pFVar1 <= pFVar15) {
              pFVar14 = pFVar1;
              if (0xdf < (ulonglong)((longlong)pFVar15 + (0x38 - (longlong)pFVar1))) {
                do {
                  dVar2 = pFVar12->StartTime;
                  if (pFVar12->StartTime < pFVar14->StartTime) {
                    pFVar12 = pFVar14;
                    dVar2 = pFVar14->StartTime;
                  }
                  if (dVar2 < pFVar14[1].StartTime) {
                    pFVar12 = pFVar14 + 1;
                  }
                  dVar2 = pFVar12->StartTime;
                  if (pFVar12->StartTime < pFVar14[2].StartTime) {
                    pFVar12 = pFVar14 + 2;
                    dVar2 = pFVar14[2].StartTime;
                  }
                  if (dVar2 < pFVar14[3].StartTime) {
                    pFVar12 = pFVar14 + 3;
                  }
                  pFVar14 = pFVar14 + 4;
                } while (pFVar14 <= pFVar15 + -3);
              }
              for (; pFVar14 <= pFVar15; pFVar14 = pFVar14 + 1) {
                if (pFVar12->StartTime < pFVar14->StartTime) {
                  pFVar12 = pFVar14;
                }
              }
            }
            dVar4 = pFVar12->StartTime;
            pFVar3 = pFVar12->PackageInfo;
            pFVar14 = pFVar15 + -1;
            dVar2 = pFVar12->AsyncLoadingThreadTime;
            uVar6 = pFVar12->SerializedHeaderSize;
            uVar7 = pFVar12->SerializedExportsCount;
            pFVar5 = pFVar15->PackageInfo;
            uVar8 = pFVar12->SerializedExportsSize;
            dVar9 = pFVar12->MainThreadTime;
            pFVar12->StartTime = pFVar15->StartTime;
            pFVar12->PackageInfo = pFVar5;
            uVar10 = pFVar15->SerializedExportsCount;
            pFVar12->SerializedHeaderSize = pFVar15->SerializedHeaderSize;
            pFVar12->SerializedExportsCount = uVar10;
            dVar11 = pFVar15->MainThreadTime;
            pFVar12->SerializedExportsSize = pFVar15->SerializedExportsSize;
            pFVar12->MainThreadTime = dVar11;
            pFVar12->AsyncLoadingThreadTime = pFVar15->AsyncLoadingThreadTime;
            pFVar15->StartTime = dVar4;
            pFVar15->PackageInfo = pFVar3;
            pFVar15->SerializedHeaderSize = uVar6;
            pFVar15->SerializedExportsCount = uVar7;
            pFVar15->SerializedExportsSize = uVar8;
            pFVar15->MainThreadTime = dVar9;
            pFVar15->AsyncLoadingThreadTime = dVar2;
            pFVar15 = pFVar14;
          } while (pFVar18 < pFVar14);
        }
        goto LAB_14d41b6bd;
      }
LAB_14d41b6ad:
      local_348 = pFVar1;
      HeapSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::<lambda_2>_>
                (pFVar12,iVar13,param_3,param_4);
LAB_14d41b6bd:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x00014d41b539:
  if (pFVar12->StartTime < pFVar18->StartTime || pFVar12->StartTime == pFVar18->StartTime)
  goto LAB_14d41b530;
LAB_14d41b545:
  do {
    pFVar17 = pFVar14;
    pFVar14 = pFVar17 + -1;
    if (pFVar14 <= pFVar18) break;
  } while (pFVar18->StartTime < pFVar14->StartTime || pFVar18->StartTime == pFVar14->StartTime);
  pFVar3 = pFVar17[-1].PackageInfo;
  if (pFVar12 <= pFVar14) {
    dVar4 = pFVar12->StartTime;
    pFVar5 = pFVar16[1].PackageInfo;
    uVar6 = pFVar16[1].SerializedHeaderSize;
    uVar7 = pFVar16[1].SerializedExportsCount;
    uVar8 = pFVar16[1].SerializedExportsSize;
    dVar9 = pFVar16[1].MainThreadTime;
    dVar2 = pFVar16[1].AsyncLoadingThreadTime;
    pFVar12->StartTime = pFVar14->StartTime;
    pFVar16[1].PackageInfo = pFVar3;
    uVar10 = pFVar17[-1].SerializedExportsCount;
    pFVar16[1].SerializedHeaderSize = pFVar17[-1].SerializedHeaderSize;
    pFVar16[1].SerializedExportsCount = uVar10;
    dVar11 = pFVar17[-1].MainThreadTime;
    pFVar16[1].SerializedExportsSize = pFVar17[-1].SerializedExportsSize;
    pFVar16[1].MainThreadTime = dVar11;
    pFVar16[1].AsyncLoadingThreadTime = pFVar17[-1].AsyncLoadingThreadTime;
    pFVar14->StartTime = dVar4;
    pFVar17[-1].PackageInfo = pFVar5;
    pFVar17[-1].SerializedHeaderSize = uVar6;
    pFVar17[-1].SerializedExportsCount = uVar7;
    pFVar17[-1].SerializedExportsSize = uVar8;
    pFVar17[-1].MainThreadTime = dVar9;
    pFVar17[-1].AsyncLoadingThreadTime = dVar2;
    goto LAB_14d41b530;
  }
  dVar4 = pFVar18->StartTime;
  pFVar5 = pFVar18->PackageInfo;
  uVar6 = pFVar18->SerializedHeaderSize;
  uVar7 = pFVar18->SerializedExportsCount;
  local_348._0_4_ = (int)local_348 + -1;
  uVar8 = pFVar18->SerializedExportsSize;
  dVar9 = pFVar18->MainThreadTime;
  dVar2 = pFVar18->AsyncLoadingThreadTime;
  pFVar18->StartTime = pFVar14->StartTime;
  pFVar18->PackageInfo = pFVar3;
  uVar10 = pFVar17[-1].SerializedExportsCount;
  pFVar18->SerializedHeaderSize = pFVar17[-1].SerializedHeaderSize;
  pFVar18->SerializedExportsCount = uVar10;
  dVar11 = pFVar17[-1].MainThreadTime;
  pFVar18->SerializedExportsSize = pFVar17[-1].SerializedExportsSize;
  pFVar18->MainThreadTime = dVar11;
  pFVar18->AsyncLoadingThreadTime = pFVar17[-1].AsyncLoadingThreadTime;
  pFVar14->StartTime = dVar4;
  pFVar17[-1].PackageInfo = pFVar5;
  pFVar17[-1].SerializedHeaderSize = uVar6;
  pFVar17[-1].SerializedExportsCount = uVar7;
  pFVar17[-1].SerializedExportsSize = uVar8;
  pFVar17[-1].MainThreadTime = dVar9;
  pFVar17[-1].AsyncLoadingThreadTime = dVar2;
  if (((longlong)pFVar14 + (-0x38 - (longlong)pFVar18)) / 0x38 <
      ((longlong)pFVar15 - (longlong)pFVar12) / 0x38) {
    if (pFVar12 < pFVar15) {
      *ppFVar19 = pFVar12;
      ppFVar19[1] = pFVar15;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar14 <= pFVar18 + 1) goto LAB_14d41b6bd;
    pFVar15 = pFVar17 + -2;
    pFVar12 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar14) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar17 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar12) goto LAB_14d41b6bd;
  }
  iVar13 = (int)(((longlong)pFVar15 - (longlong)pFVar12) / 0x38) + 1;
  pFVar18 = pFVar12;
  if ((int)local_348 == 0) goto LAB_14d41b6ad;
  goto LAB_14d41b4c0;
}

// LowerBoundInternal<double_const_,int,double,FIdentityFunctor,TLess<void>_> @ 14d41bb20

int __cdecl
AlgoImpl::LowerBoundInternal<double_const_,int,double,FIdentityFunctor,TLess<void>_>
          (double *param_1,int param_2,double *param_3,FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] <= *param_3 && *param_3 != param_1[iVar1]) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<double_const_,__int64,double,FIdentityFunctor,TLess<void>_> @ 14d41bb60

long64 __cdecl
AlgoImpl::LowerBoundInternal<double_const_,__int64,double,FIdentityFunctor,TLess<void>_>
          (double *param_1,long64 param_2,double *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = 0;
  if (0 < param_2) {
    do {
      uVar2 = (ulonglong)param_2 >> 1;
      if (param_1[uVar2 + lVar1] <= *param_3 && *param_3 != param_1[uVar2 + lVar1]) {
        lVar1 = (ulonglong)((uint)param_2 & 1) + uVar2 + lVar1;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return lVar1;
}

// LowerBoundInternal<double_const_,unsigned___int64,double,FIdentityFunctor,TLess<void>_> @ 14d41bbb0

ulong64 __cdecl
AlgoImpl::LowerBoundInternal<double_const_,unsigned___int64,double,FIdentityFunctor,TLess<void>_>
          (double *param_1,ulong64 param_2,double *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      uVar2 = param_2 >> 1;
      if (param_1[uVar2 + uVar1] <= *param_3 && *param_3 != param_1[uVar2 + uVar1]) {
        uVar1 = (ulonglong)((uint)param_2 & 1) + uVar2 + uVar1;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return uVar1;
}

// LowerBoundInternal<TraceServices::TPagedArrayPage<double>_const_,int,double,`TraceServices::PagedArrayAlgoImpl::LowerBoundInternal<unsigned___int64,double,TraceServices::TPagedArrayPage<double>,double,FIdentityFunctor,TLess<void>_>'::__l2::<lambda_1>,TLess<void>_> @ 14d41bc00

int __cdecl
AlgoImpl::
LowerBoundInternal<TraceServices::TPagedArrayPage<double>_const_,int,double,_TraceServices::PagedArrayAlgoImpl::LowerBoundInternal<unsigned___int64,double,TraceServices::TPagedArrayPage<double>,double,FIdentityFunctor,TLess<void>_>_::__l2::<lambda_1>,TLess<void>_>
          (TPagedArrayPage<double> *param_1,int param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*param_1[iVar1].Items <= *param_3 && *param_3 != *param_1[iVar1].Items) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<unsigned___int64_const_,__int64,double,FIdentityFunctor,`TraceServices::FTasksProvider::TryGetTask'::__l2::<lambda_1>_> @ 14d41bc40

long64 __cdecl
AlgoImpl::
LowerBoundInternal<unsigned___int64_const_,__int64,double,FIdentityFunctor,_TraceServices::FTasksProvider::TryGetTask_::__l2::<lambda_1>_>
          (ulong64 *param_1,long64 param_2,double *param_3,FIdentityFunctor param_4,
          <lambda_1> param_5)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (0 < param_2) {
    do {
      dVar1 = *param_3;
      uVar4 = (ulonglong)param_2 >> 1;
      lVar3 = (**(code **)((param_5.__this)->_padding_ + 0x20))
                        (param_5.__this,param_1[uVar4 + lVar5]);
      if ((lVar3 == 0) || (dVar1 < *(double *)(lVar3 + 0x30))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = uVar4 + lVar5 + (ulonglong)((uint)param_2 & 1);
      }
      param_2 = uVar4;
    } while (uVar4 != 0);
  }
  return lVar5;
}

// LowerBoundInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_> @ 14d41bcf0

int __cdecl
AlgoImpl::
LowerBoundInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,
          TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_3,FIdentityFunctor param_4
          ,FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>
           param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = (**((((param_5.Predicate)->Predicate).Predicate)->Predicate).Predicate)
                        ((FAggregatedTimingStats *)((longlong)iVar1 * 0x70 + 8 + (longlong)param_1),
                         (FAggregatedTimingStats *)((param_3->ElementData).Pad + 8));
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// MakeShared<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> @ 14d41bd90

TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> * __cdecl
MakeShared<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>
          (TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>
           *__return_storage_ptr__)

{
  FSlabAllocator *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *pTVar5;
  
  pTVar4 = operator_new(0x180);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TImportTable<TraceServices::FImportTableRow> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TImportTable_VFImportTableRow_TraceServices___TraceServices___00_SharedPointerInternals__6B_
    ;
    *(undefined ***)&pTVar4[1].SharedReferenceCount =
         &___7__TTableLayout_VFImportTableRow_TraceServices___TraceServices__6B_;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1]._padding_ =
         (longlong)&___7__TTable_VFImportTableRow_TraceServices___0CAAAAAA__TraceServices__6B_;
    pFVar1 = (FSlabAllocator *)(pTVar4 + 3);
    pFVar1->_padding_ = (longlong)&___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar4[3].SharedReferenceCount,4000);
    pTVar4[6]._padding_ = 0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[7]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x2000000;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[9]._padding_ = 0;
    pTVar4[1]._padding_ =
         (longlong)&___7__TImportTable_VFImportTableRow_TraceServices___TraceServices__6B_;
    *(FSlabAllocator **)&pTVar4[9].SharedReferenceCount = pFVar1;
    pTVar4[10]._padding_ = 0;
    pTVar4[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb]._padding_ = 0;
    pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xc]._padding_ = 0x400;
    pTVar4[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xc].WeakReferenceCount = (atomic<int>)0x0;
    TraceServices::FStringStore::FStringStore((FStringStore *)(pTVar4 + 0xd),pFVar1);
    __return_storage_ptr__->Object = (TImportTable<TraceServices::FImportTableRow> *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((TImportTable<TraceServices::FImportTableRow> *)(pTVar4 + 1) ==
        (TImportTable<TraceServices::FImportTableRow> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *)
                 (*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&> @ 14d41bf00

TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
* __cdecl MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
                    (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
                     *__return_storage_ptr__,ILinearAllocator *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *pTVar4;
  
  pTVar3 = operator_new(0x48);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMonotonicTimeline_UFTimingProfilerEvent_TraceServices__UFMonotonicTimelineDefaultSettings_2__TraceServices___00_SharedPointerInternals__6B_
    ;
    TraceServices::
    TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    ::
    TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              ((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object =
         (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          *)(pTVar3 + 1);
    if ((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
         *)(pTVar3 + 1) ==
        (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
         *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_> @ 14d41bfc0

void __cdecl
AlgoImpl::
Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,int param_3
          ,FIdentityFunctor param_4,
          FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>
          param_5)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar23;
  uint uVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar25;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar26;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar27;
  int local_88;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar22;
  
  if (0 < param_2) {
    local_88 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar19 = 0;
      if (0 < param_2 - local_88) {
        uVar20 = param_2 - local_88;
        iVar19 = 0;
        do {
          uVar24 = uVar20 >> 1;
          bVar16 = (**((((param_5.Predicate)->Predicate).Predicate)->Predicate).Predicate)
                             ((FAggregatedTimingStats *)
                              ((longlong)param_1 + (longlong)param_2 * 0x70 + 8),
                              (FAggregatedTimingStats *)
                              (((longlong)(int)(uVar24 + iVar19) + (longlong)local_88) * 0x70 + 8 +
                              (longlong)param_1));
          if (!bVar16) {
            iVar19 = uVar24 + iVar19 + (uVar20 & 1);
          }
          uVar20 = uVar24;
        } while (uVar24 != 0);
      }
      local_88 = local_88 + iVar19;
      if (param_2 <= local_88) {
        return;
      }
      iVar19 = 0;
      uVar20 = param_3 - param_2;
      pTVar25 = param_1 + local_88;
      if (0 < (int)uVar20) {
        do {
          uVar24 = uVar20 >> 1;
          bVar16 = (**((((param_5.Predicate)->Predicate).Predicate)->Predicate).Predicate)
                             ((FAggregatedTimingStats *)
                              (((longlong)(int)(uVar24 + iVar19) + (longlong)param_2) * 0x70 + 8 +
                              (longlong)param_1),
                              (FAggregatedTimingStats *)((pTVar25->ElementData).Pad + 8));
          if (bVar16) {
            iVar19 = uVar24 + iVar19 + (uVar20 & 1);
          }
          uVar20 = uVar24;
        } while (uVar24 != 0);
      }
      iVar18 = (iVar19 - local_88) + param_2;
      iVar17 = param_2 - local_88;
      if ((iVar17 != 0) && (iVar17 < iVar18)) {
        pTVar21 = pTVar25 + iVar17;
        pTVar26 = pTVar25;
        pTVar22 = pTVar25 + iVar17;
        do {
          while( true ) {
            pTVar23 = pTVar21 + 1;
            pTVar27 = pTVar26 + 1;
            uVar1 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8);
            TVar2 = pTVar26->_s_1;
            uVar3 = *(undefined8 *)((pTVar26->ElementData).Pad + 8);
            uVar4 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x10);
            uVar5 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x18);
            uVar6 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x20);
            uVar7 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x28);
            uVar8 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x30);
            uVar9 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x38);
            uVar10 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x40);
            uVar11 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x48);
            uVar12 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x50);
            uVar13 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x58);
            uVar14 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x60);
            uVar15 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x68);
            pTVar26->_s_1 = pTVar21->_s_1;
            *(undefined8 *)((pTVar26->ElementData).Pad + 8) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x28);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x20);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x28) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x38);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x30);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x38) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x48);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x40);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x48) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x58);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x50) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x50);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x58) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x68);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x60) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x60);
            *(undefined8 *)((pTVar26->ElementData).Pad + 0x68) = uVar1;
            pTVar21->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8) = uVar3;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10) = uVar4;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x20) = uVar6;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x28) = uVar7;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x30) = uVar8;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x38) = uVar9;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x40) = uVar10;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x48) = uVar11;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x50) = uVar12;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x58) = uVar13;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x60) = uVar14;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x68) = uVar15;
            pTVar26 = pTVar27;
            if (pTVar23 == pTVar25 + iVar18) break;
            pTVar21 = pTVar23;
            if (pTVar27 == pTVar22) {
              pTVar22 = pTVar23;
            }
          }
          pTVar21 = pTVar22;
        } while (pTVar27 != pTVar22);
      }
      local_88 = local_88 + 1 + iVar19;
      param_2 = param_2 + iVar19;
    } while (local_88 < param_2);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::FStackEntry>_> @ 14d41c630

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FStackEntry>_>
          (ushort param_1,
          ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::FStackEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::FStackEntry>_> @ 14d41c700

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FStackEntry>_>
          (ushort param_1,
          ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::FStackEntry>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_> @ 14d41ca40

int __cdecl
AlgoImpl::RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,int param_3
          )

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar17;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar16 = param_1 + param_3;
    pTVar19 = param_1;
    pTVar17 = param_1 + param_3;
    do {
      while( true ) {
        pTVar18 = pTVar16 + 1;
        pTVar20 = pTVar19 + 1;
        uVar1 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
        TVar2 = pTVar19->_s_1;
        uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
        uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
        uVar5 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
        uVar6 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
        uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
        uVar8 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
        uVar9 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
        uVar10 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x40);
        uVar11 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x48);
        uVar12 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x50);
        uVar13 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x58);
        uVar14 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x60);
        uVar15 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x68);
        pTVar19->_s_1 = pTVar16->_s_1;
        *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) =
             *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x28);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) =
             *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x20);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x38);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) =
             *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x30);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x48);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x40) =
             *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x40);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x48) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x58);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x50) =
             *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x50);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x58) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x68);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x60) =
             *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x60);
        *(undefined8 *)((pTVar19->ElementData).Pad + 0x68) = uVar1;
        pTVar16->_s_1 = TVar2;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar3;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) = uVar4;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar5;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x20) = uVar6;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x28) = uVar7;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x30) = uVar8;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x38) = uVar9;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x40) = uVar10;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x48) = uVar11;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x50) = uVar12;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x58) = uVar13;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x60) = uVar14;
        *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x68) = uVar15;
        pTVar19 = pTVar20;
        if (pTVar18 == param_1 + param_2) break;
        pTVar16 = pTVar18;
        if (pTVar20 == pTVar17) {
          pTVar17 = pTVar18;
        }
      }
      pTVar16 = pTVar17;
    } while (pTVar20 != pTVar17);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_> @ 14d41ce30

void __cdecl
AlgoImpl::
StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>
          param_4)

{
  int iVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar21;
  int iVar22;
  FAggregatedTimingStats *pFVar23;
  
  iVar18 = 0;
  if (0 < param_2) {
    pTVar21 = param_1 + 1;
    pFVar23 = (FAggregatedTimingStats *)((longlong)param_1 + 0x78);
    do {
      if ((iVar18 + 1 < param_2) &&
         (bVar17 = (**((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate)
                             (pFVar23,(FAggregatedTimingStats *)((longlong)pTVar21 + -0x68)), bVar17
         )) {
        uVar2 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
        TVar3 = pTVar21[-1]._s_1;
        uVar4 = *(undefined8 *)((longlong)pTVar21 + -0x68);
        uVar5 = *(undefined8 *)((longlong)pTVar21 + -0x60);
        uVar6 = *(undefined8 *)((longlong)pTVar21 + -0x58);
        uVar7 = *(undefined8 *)((longlong)pTVar21 + -0x50);
        uVar8 = *(undefined8 *)((longlong)pTVar21 + -0x48);
        uVar9 = *(undefined8 *)((longlong)pTVar21 + -0x40);
        uVar10 = *(undefined8 *)((longlong)pTVar21 + -0x38);
        uVar11 = *(undefined8 *)((longlong)pTVar21 + -0x30);
        uVar12 = *(undefined8 *)((longlong)pTVar21 + -0x28);
        uVar13 = *(undefined8 *)((longlong)pTVar21 + -0x20);
        uVar14 = *(undefined8 *)((longlong)pTVar21 + -0x18);
        uVar15 = *(undefined8 *)((longlong)pTVar21 + -0x10);
        uVar16 = *(undefined8 *)((longlong)pTVar21 + -8);
        pTVar21[-1]._s_1 = pTVar21->_s_1;
        *(undefined8 *)((longlong)pTVar21 + -0x68) = uVar2;
        uVar2 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
        *(undefined8 *)((longlong)pTVar21 + -0x60) =
             *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
        *(undefined8 *)((longlong)pTVar21 + -0x58) = uVar2;
        uVar2 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x28);
        *(undefined8 *)((longlong)pTVar21 + -0x50) =
             *(undefined8 *)((pTVar21->ElementData).Pad + 0x20);
        *(undefined8 *)((longlong)pTVar21 + -0x48) = uVar2;
        uVar2 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x38);
        *(undefined8 *)((longlong)pTVar21 + -0x40) =
             *(undefined8 *)((pTVar21->ElementData).Pad + 0x30);
        *(undefined8 *)((longlong)pTVar21 + -0x38) = uVar2;
        uVar2 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x48);
        *(undefined8 *)((longlong)pTVar21 + -0x30) =
             *(undefined8 *)((pTVar21->ElementData).Pad + 0x40);
        *(undefined8 *)((longlong)pTVar21 + -0x28) = uVar2;
        uVar2 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x58);
        *(undefined8 *)((longlong)pTVar21 + -0x20) =
             *(undefined8 *)((pTVar21->ElementData).Pad + 0x50);
        *(undefined8 *)((longlong)pTVar21 + -0x18) = uVar2;
        uVar2 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x68);
        *(undefined8 *)((longlong)pTVar21 + -0x10) =
             *(undefined8 *)((pTVar21->ElementData).Pad + 0x60);
        *(undefined8 *)((longlong)pTVar21 + -8) = uVar2;
        pTVar21->_s_1 = TVar3;
        *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar4;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) = uVar5;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar6;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x20) = uVar7;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x28) = uVar8;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x30) = uVar9;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x38) = uVar10;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x40) = uVar11;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x48) = uVar12;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x50) = uVar13;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x58) = uVar14;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x60) = uVar15;
        *(undefined8 *)((pTVar21->ElementData).Pad + 0x68) = uVar16;
      }
      iVar18 = iVar18 + 2;
      pFVar23 = (FAggregatedTimingStats *)&pFVar23[2].MaxInclusiveTime;
      pTVar21 = pTVar21 + 2;
    } while (iVar18 < param_2);
  }
  iVar18 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar18 * 2;
      iVar19 = 0;
      iVar20 = param_2;
      do {
        iVar22 = iVar20;
        if (iVar1 <= iVar20) {
          iVar22 = iVar1;
        }
        Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_>
                  (param_1 + iVar19,iVar18,iVar22,param_3,param_4);
        iVar19 = iVar19 + iVar1;
        iVar20 = iVar20 + iVar18 * -2;
      } while (iVar19 < param_2);
      iVar18 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::SaveSymbolsToCache'::__l2::<lambda_1>_> @ 14d41d090

void __cdecl
Algo::
Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::SaveSymbolsToCache_::__l2::<lambda_1>_>
          (TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
           *param_1,
          TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_9c;
  TPairInitializer<TraceServices::FResolvedSymbol_const_*_&&,unsigned___int64_&&> local_98;
  undefined8 local_88;
  TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  ulong64 **local_50;
  undefined8 *local_48;
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d41d12d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14d41d12d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar8,iVar13);
  TStack_78.CurrentBitIndex = iVar9;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iVar9;
  TStack_78.BaseBitIndex = iVar15;
  uStack_58 = CONCAT44(uStack_9c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d41d230;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14d41d230:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar12) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    puVar2 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    local_98.Value = (ulong64 *)puVar2[1];
    local_88 = *puVar2;
    local_50 = &local_98.Value;
    local_48 = &local_88;
    TSet<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TraceServices::FResolvedSymbol_const_*_&&,unsigned___int64_&&>_>
              ((TSet<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                *)param_2,&local_98,(bool *)&local_50);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::SaveSymbolsToCache'::__l2::<lambda_1>_> @ 14d41d2d0

void __cdecl
Algo::
Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::SaveSymbolsToCache_::__l2::<lambda_1>_>
          (TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
           *param_1,
          TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_9c;
  TPairInitializer<TraceServices::FResolvedSymbol_const_*_&&,unsigned___int64_&&> local_98;
  undefined8 local_88;
  TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  ulong64 **local_50;
  undefined8 *local_48;
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d41d36d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14d41d36d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar8,iVar13);
  TStack_78.CurrentBitIndex = iVar9;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iVar9;
  TStack_78.BaseBitIndex = iVar15;
  uStack_58 = CONCAT44(uStack_9c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d41d470;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14d41d470:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar12) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    puVar2 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    local_98.Value = (ulong64 *)puVar2[1];
    local_88 = *puVar2;
    local_50 = &local_98.Value;
    local_48 = &local_88;
    TSet<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TraceServices::FResolvedSymbol_const_*_&&,unsigned___int64_&&>_>
              ((TSet<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                *)param_2,&local_98,(bool *)&local_50);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::SaveSymbolsToCache'::__l2::<lambda_1>_> @ 14d41d510

void __cdecl
Algo::
Transform<TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>,TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>_&,_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::SaveSymbolsToCache_::__l2::<lambda_1>_>
          (TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
           *param_1,
          TMap<TraceServices::FResolvedSymbol_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>_>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_9c;
  TPairInitializer<TraceServices::FResolvedSymbol_const_*_&&,unsigned___int64_&&> local_98;
  undefined8 local_88;
  TMap<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  ulong64 **local_50;
  undefined8 *local_48;
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d41d5ad;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14d41d5ad:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar8,iVar13);
  TStack_78.CurrentBitIndex = iVar9;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iVar9;
  TStack_78.BaseBitIndex = iVar15;
  uStack_58 = CONCAT44(uStack_9c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d41d6b0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14d41d6b0:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar12) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    puVar2 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    local_98.Value = (ulong64 *)puVar2[1];
    local_88 = *puVar2;
    local_50 = &local_98.Value;
    local_48 = &local_88;
    TSet<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TraceServices::FResolvedSymbol_const_*_&&,unsigned___int64_&&>_>
              ((TSet<TTuple<TraceServices::FResolvedSymbol_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<TraceServices::FResolvedSymbol_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                *)param_2,&local_98,(bool *)&local_50);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// UpperBoundInternal<TraceServices::TPagedArrayPage<double>_const_,int,double,`TraceServices::PagedArrayAlgoImpl::UpperBoundInternal<unsigned___int64,double,TraceServices::TPagedArrayPage<double>,double,FIdentityFunctor,TLess<void>_>'::__l2::<lambda_1>,TLess<void>_> @ 14d41d750

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::TPagedArrayPage<double>_const_,int,double,_TraceServices::PagedArrayAlgoImpl::UpperBoundInternal<unsigned___int64,double,TraceServices::TPagedArrayPage<double>,double,FIdentityFunctor,TLess<void>_>_::__l2::<lambda_1>,TLess<void>_>
          (TPagedArrayPage<double> *param_1,int param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = iVar1 + (param_2 & 1U);
      if (*param_3 < *param_1[iVar1].Items) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_const_,int,double,`TraceServices::GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>'::__l2::<lambda_1>,TLess<void>_> @ 14d41d7a0

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_const_,int,double,_TraceServices::GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>_::__l2::<lambda_1>,TLess<void>_>
          (TPagedArrayPage<TraceServices::FTimeRegion> *param_1,int param_2,double *param_3,
          <lambda_1> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      dVar4 = (double)(**(code **)param_4.ItemEndProjection)
                                (*(undefined8 *)&(param_4.ItemEndProjection)->field_0x8,
                                 param_1[iVar1].Items);
      iVar1 = iVar1 + (param_2 & 1U);
      if (*param_3 <= dVar4 && dVar4 != *param_3) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_const_,int,double,`TraceServices::GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>'::__l2::<lambda_2>,TLess<void>_> @ 14d41d830

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_const_,int,double,_TraceServices::GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>_::__l2::<lambda_2>,TLess<void>_>
          (TPagedArrayPage<TraceServices::FTimeRegion> *param_1,int param_2,double *param_3,
          <lambda_2> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      dVar4 = (double)(**(code **)param_4.ItemStartProjection)
                                (*(undefined8 *)&(param_4.ItemStartProjection)->field_0x8,
                                 param_1[iVar1].Items);
      iVar1 = iVar1 + (param_2 & 1U);
      if (*param_3 <= dVar4 && dVar4 != *param_3) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<TraceServices::TVariablePagedArrayPageGroup<double>_const_,int,unsigned___int64,unsigned___int64_TraceServices::TVariablePagedArrayPageGroup<double>::*,TLess<void>_> @ 14d41d8c0

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::TVariablePagedArrayPageGroup<double>_const_,int,unsigned___int64,unsigned___int64_TraceServices::TVariablePagedArrayPageGroup<double>::*,TLess<void>_>
          (TVariablePagedArrayPageGroup<double> *param_1,int param_2,ulong64 *param_3,
          pdm_98acae2c param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)((longlong)&param_1[iVar1].FirstItemIndex + (longlong)(int)param_4) <=
          *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>_const_,int,unsigned___int64,unsigned___int64_TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>::*,TLess<void>_> @ 14d41d910

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>_const_,int,unsigned___int64,unsigned___int64_TraceServices::TVariablePagedArrayPageGroup<enum_TraceServices::ECounterOpType>::*,TLess<void>_>
          (TVariablePagedArrayPageGroup<TraceServices::ECounterOpType> *param_1,int param_2,
          ulong64 *param_3,pdm_5eab1e07 param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)((longlong)&param_1[iVar1].FirstItemIndex + (longlong)(int)param_4) <=
          *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<TraceServices::TVariablePagedArrayPageGroup<__int64>_const_,int,unsigned___int64,unsigned___int64_TraceServices::TVariablePagedArrayPageGroup<__int64>::*,TLess<void>_> @ 14d41d960

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::TVariablePagedArrayPageGroup<__int64>_const_,int,unsigned___int64,unsigned___int64_TraceServices::TVariablePagedArrayPageGroup<__int64>::*,TLess<void>_>
          (TVariablePagedArrayPageGroup<__int64> *param_1,int param_2,ulong64 *param_3,
          pdm_f556cb76 param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)((longlong)&param_1[iVar1].FirstItemIndex + (longlong)(int)param_4) <=
          *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>,TLess<void>_> @ 14d41d9b0

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>,TLess<void>_> @ 14d41da00

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::<lambda_1>,TLess<void>_> @ 14d41da50

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::<lambda_1>,TLess<void>_> @ 14d41daa0

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync'::__l2::<lambda_1>,TLess<void>_> @ 14d41daf0

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync'::__l2::<lambda_1>,TLess<void>_> @ 14d41db40

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetDepthAt'::__l2::<lambda_1>,TLess<void>_> @ 14d41db90

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetDepthAt_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetDepthAt'::__l2::<lambda_1>,TLess<void>_> @ 14d41dbe0

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetDepthAt_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetEventInfo'::__l2::<lambda_1>,TLess<void>_> @ 14d41dc30

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetEventInfo_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetEventInfo'::__l2::<lambda_1>,TLess<void>_> @ 14d41dc80

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetEventInfo_::__l2::<lambda_1>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync'::__l2::<lambda_2>,TLess<void>_> @ 14d41dcd0

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync_::__l2::<lambda_2>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_2> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync'::__l2::<lambda_2>,TLess<void>_> @ 14d41dd20

ulong64 __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FEventScopeEntryPage_const_,unsigned___int64,double,_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampledAsync_::__l2::<lambda_2>,TLess<void>_>
          (FEventScopeEntryPage *param_1,ulong64 param_2,double *param_3,<lambda_2> param_4,
          TLess<void> param_5)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = param_2 >> 1;
      uVar1 = uVar3 + uVar2 + (ulonglong)((uint)param_2 & 1);
      if (*param_3 < param_1[uVar3 + uVar2].BeginTime) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      param_2 = uVar3;
    } while (uVar3 != 0);
  }
  return uVar2;
}

// UpperBoundInternal<TraceServices::FPsymResolver::FPsymLine_const_,int,unsigned___int64,unsigned___int64_TraceServices::FPsymResolver::FPsymLine::*,TLess<void>_> @ 14d41dd70

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FPsymResolver::FPsymLine_const_,int,unsigned___int64,unsigned___int64_TraceServices::FPsymResolver::FPsymLine::*,TLess<void>_>
          (FPsymLine *param_1,int param_2,ulong64 *param_3,pdm_0730f0e8 param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)((longlong)&param_1[iVar1].Address + (longlong)(int)param_4) <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<TraceServices::FPsymResolver::FPsymSymbol_const_,int,unsigned___int64,unsigned___int64_TraceServices::FPsymResolver::FPsymSymbol::*,TLess<void>_> @ 14d41ddd0

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FPsymResolver::FPsymSymbol_const_,int,unsigned___int64,unsigned___int64_TraceServices::FPsymResolver::FPsymSymbol::*,TLess<void>_>
          (FPsymSymbol *param_1,int param_2,ulong64 *param_3,pdm_38890f84 param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)((longlong)&param_1[iVar1].Address + (longlong)(int)param_4) <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_> @ 14d41de30

int __cdecl
AlgoImpl::
UpperBoundInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,
          TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_3,FIdentityFunctor param_4
          ,FElementCompareClass<TSet<TTuple<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats>,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>::FValueComparisonClass<bool_(__cdecl*)(TraceServices::FAggregatedTimingStats_const_&,TraceServices::FAggregatedTimingStats_const_&)>_>_>
           param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = (**((((param_5.Predicate)->Predicate).Predicate)->Predicate).Predicate)
                        ((FAggregatedTimingStats *)((param_3->ElementData).Pad + 8),
                         (FAggregatedTimingStats *)((longlong)iVar1 * 0x70 + 8 + (longlong)param_1))
      ;
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<TraceServices::FTimeRegion,int,double,TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)>,TLess<void>_> @ 14d41ded0

int __cdecl
AlgoImpl::
UpperBoundInternal<TraceServices::FTimeRegion,int,double,TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)>,TLess<void>_>
          (FTimeRegion *param_1,int param_2,double *param_3,
          TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      dVar4 = (double)(**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,param_1 + iVar1);
      iVar1 = iVar1 + (param_2 & 1U);
      if (*param_3 <= dVar4 && dVar4 != *param_3) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::EModuleStatus>_> @ 14d41df60

/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::EModuleStatus>_>
          (_Atomic_padded<TraceServices::EModuleStatus> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::EModuleStatus>_> @ 14d41df70

/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::EModuleStatus>_>
          (_Atomic_padded<TraceServices::EModuleStatus> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::EResolvedSymbolFilterStatus>_> @ 14d41df80

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::EResolvedSymbolFilterStatus>_>
          (_Atomic_padded<TraceServices::EResolvedSymbolFilterStatus> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::ESymbolQueryResult>_> @ 14d41df90

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::ESymbolQueryResult>_>
          (_Atomic_padded<TraceServices::ESymbolQueryResult> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::ESymbolQueryResult>_> @ 14d41dfa0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_TraceServices::ESymbolQueryResult>_>
          (_Atomic_padded<TraceServices::ESymbolQueryResult> *param_1)

{
  return (char *)param_1;
}

// _Atomic_reinterpret_as<char,enum_TraceServices::EModuleStatus> @ 14d41dfb0

/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

char __cdecl
std::_Atomic_reinterpret_as<char,enum_TraceServices::EModuleStatus>(EModuleStatus *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<char,enum_TraceServices::EResolvedSymbolFilterStatus> @ 14d41dfc0

char __cdecl
std::_Atomic_reinterpret_as<char,enum_TraceServices::EResolvedSymbolFilterStatus>
          (EResolvedSymbolFilterStatus *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<char,enum_TraceServices::ESymbolQueryResult> @ 14d41dfd0

char __cdecl
std::_Atomic_reinterpret_as<char,enum_TraceServices::ESymbolQueryResult>
          (ESymbolQueryResult *param_1)

{
  return *param_1;
}

// FThreadSafeStaticStat<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId'::__l2::FStat_EnumerateAsyncTask> @ 14d41e2a0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const_::_2_::FStat_EnumerateAsyncTask>
* __thiscall
FThreadSafeStaticStat<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId'::__l2::FStat_EnumerateAsyncTask>
::
FThreadSafeStaticStat<_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId_::__l2::FStat_EnumerateAsyncTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"EnumerateAsyncTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"EnumerateAsyncTask","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId'::__l2::FStat_EnumerateAsyncTask> @ 14d41e330

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const_::_2_::FStat_EnumerateAsyncTask>
* __thiscall
FThreadSafeStaticStat<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId'::__l2::FStat_EnumerateAsyncTask>
::
FThreadSafeStaticStat<_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId_::__l2::FStat_EnumerateAsyncTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"EnumerateAsyncTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"EnumerateAsyncTask","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`TraceServices::FAllocationsQueryAsyncTask::GetStatId'::__l2::FStat_FAllocationsQueryAsyncTask> @ 14d41e3c0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_TraceServices::FAllocationsQueryAsyncTask::GetStatId(void)const_::_2_::FStat_FAllocationsQueryAsyncTask>
* __thiscall
FThreadSafeStaticStat<`TraceServices::FAllocationsQueryAsyncTask::GetStatId'::__l2::FStat_FAllocationsQueryAsyncTask>
::
FThreadSafeStaticStat<_TraceServices::FAllocationsQueryAsyncTask::GetStatId_::__l2::FStat_FAllocationsQueryAsyncTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FAllocationsQueryAsyncTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FAllocationsQueryAsyncTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<int>'::__l2::<lambda_1>,0,0> @ 14d427320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<int>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<int>'::__l2::<lambda_1>,0,0> @ 14d427340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<int>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFLogMessageInternal_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<int>'::__l2::<lambda_1>,0,0> @ 14d427360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<int>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<int>'::__l2::<lambda_1>,0,0> @ 14d427380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<int>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0> @ 14d4273a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned_int>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0> @ 14d4273c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned_int>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0> @ 14d4273e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFNetProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFNetProfilerAggregatedStats_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d427400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFExportsTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d427420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d427440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d427460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d427480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_PEQFLogMessageInternal_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d4274a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFPackagesTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d4274c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,0,0> @ 14d4274e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFTimingProfilerAggregatedStats_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFExportsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFFileActivity_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d4275a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFLogMessageInternal_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d4275c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_PEQFLogMessageInternal_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d4275e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0> @ 14d427640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<wchar_t_const_*>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFTimingProfilerAggregatedStats_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d427660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFExportsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d427680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFExportsTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d4276a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d4276c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d4276e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d427700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d427720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFPackagesTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d427740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d427760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0> @ 14d427780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<unsigned___int64>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFTimingProfilerAggregatedStats_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<bool>'::__l2::<lambda_1>,0,0> @ 14d4277a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<bool>'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<bool>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__N___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3__NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 14d4277c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<___TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath_::__l13::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 14d4277e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<___TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath_::__l13::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 14d427800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<___TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath_::__l13::<lambda_1>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 14d427820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__TraceServices::FTableMergeTask::BuildCLayout_::__l4::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::FTableImportTask::operator()'::__l2::<lambda_1>,1,1> @ 14d427840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FTableImportTask::operator()'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_TraceServices::FTableImportTask::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FTableImportTask::operator()'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x48));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d42787a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`TraceServices::FTableMergeTask::operator()'::__l2::<lambda_1>,1,1> @ 14d427890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FTableMergeTask::operator()'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_TraceServices::FTableMergeTask::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FTableMergeTask::operator()'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x48));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d4278ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`TraceServices::ITimingProfilerProvider::CreateButterfly'::__l2::<lambda_1>,0,0> @ 14d4278e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::ITimingProfilerProvider::CreateButterfly'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_TraceServices::ITimingProfilerProvider::CreateButterfly_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CreateButterfly_ITimingProfilerProvider_TraceServices__UEBAPEAVITimingProfilerButterfly_4_NNV__TFunctionRef___A6A_NI_Z___N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::FSymslibResolver::OnAnalysisComplete'::__l2::<lambda_1>,1,0> @ 14d427900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FSymslibResolver::OnAnalysisComplete'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_TraceServices::FSymslibResolver::OnAnalysisComplete_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FSymslibResolver::OnAnalysisComplete'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleReload'::__l2::<lambda_1>,1,1> @ 14d427920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleReload'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_TraceServices::FSymslibResolver::QueueModuleReload_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleReload'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d427943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,0,0> @ 14d427950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,0,0>::
~TFunction_OwnedObject<_TraceServices::FTableImportTask::CreateLayout_::__l7::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::`7'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1> @ 14d427970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath_::__l13::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1> @ 14d427990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath_::__l13::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1> @ 14d4279b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath_::__l13::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleLoad'::__l2::<lambda_2>,1,0> @ 14d4279d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleLoad'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_TraceServices::FSymslibResolver::QueueModuleLoad_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleLoad'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// operator() @ 14d42ea60

void __thiscall
```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  uint uVar17;
  ulonglong local_res8;
  uint local_res18;
  ulonglong local_c0;
  ulonglong uStack_b8;
  longlong *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  longlong *local_78;
  PSRWLOCK local_70;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar17 = *(uint *)((longlong)this + 8);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  local_70 = (PSRWLOCK)(*(longlong *)this + 0x50);
  AcquireSRWLockShared(local_70);
  lVar13 = *(longlong *)this;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  local_78 = (longlong *)(lVar13 + 0x110);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x120);
  iVar11 = *(int *)(lVar13 + 0x138);
  iStack_a8 = 0;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar11 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar17 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d42eb70;
      uVar17 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    local_res8 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = local_res8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_94 = local_90 + -1 + (int)lVar12;
    if (iVar11 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d42eb70:
  local_res18 = *(uint *)(lVar13 + 0x138);
  local_b0 = (longlong *)(lVar13 + 0x110);
  uStack_a4 = (undefined4)local_res8;
  iStack_88 = *(int *)(lVar13 + 0x118) - *(int *)(lVar13 + 0x144);
  uVar17 = local_res18 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_res18 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_a0 = pTVar2;
  iStack_8c = iStack_94;
  local_68 = local_b0;
  TStack_60.Array = pTVar2;
  if ((((int)local_res18 < 0) || (iVar11 < (int)local_res18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar8 = local_78;
  uVar4 = *(uint *)(lVar13 + 0x138);
  if (local_res18 != uVar4) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar16 = -1 << ((byte)local_res18 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      local_res18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d42eca0;
      uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_80 = (int)lVar13;
    local_res18 = local_80 + -1 + uVar17;
    if ((int)uVar4 < (int)local_res18) {
      local_res18 = uVar4;
    }
  }
LAB_14d42eca0:
  while( true ) {
    plVar9 = local_68;
    if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_60.CurrentBitIndex == local_res18) && (TStack_60.Array == pTVar2)) &&
       (plVar9 == plVar8)) break;
    lVar13 = *plVar9;
    uVar3 = *(ulonglong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    uVar5 = *(ulonglong *)(lVar13 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(ulonglong *)((longlong)this + 0x10) <= uVar3) &&
       (uVar3 < *(ulonglong *)((longlong)this + 0x18))) {
      pFVar6 = (param_1->AllocatorInstance).Data;
      local_c0 = uVar3;
      uStack_b8 = uVar5;
      if ((pFVar6 <= (FScriptContainerElement *)&local_c0) &&
         (((FScriptContainerElement *)&local_c0 < pFVar6 + (longlong)*piVar1 * 0x10 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(ulonglong *)pFVar6 = local_c0;
      *(ulonglong *)(pFVar6 + 8) = uStack_b8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d42edeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(local_70);
  return;
}

// operator() @ 14d42ee10

void __thiscall
```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  uint uVar17;
  ulonglong local_res8;
  uint local_res18;
  ulonglong local_c0;
  ulonglong uStack_b8;
  longlong *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  longlong *local_78;
  PSRWLOCK local_70;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar17 = *(uint *)((longlong)this + 8);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  local_70 = (PSRWLOCK)(*(longlong *)this + 0x50);
  AcquireSRWLockShared(local_70);
  lVar13 = *(longlong *)this;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  local_78 = (longlong *)(lVar13 + 0x110);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x120);
  iVar11 = *(int *)(lVar13 + 0x138);
  iStack_a8 = 0;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar11 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar17 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d42ef20;
      uVar17 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    local_res8 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = local_res8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_94 = local_90 + -1 + (int)lVar12;
    if (iVar11 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d42ef20:
  local_res18 = *(uint *)(lVar13 + 0x138);
  local_b0 = (longlong *)(lVar13 + 0x110);
  uStack_a4 = (undefined4)local_res8;
  iStack_88 = *(int *)(lVar13 + 0x118) - *(int *)(lVar13 + 0x144);
  uVar17 = local_res18 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_res18 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_a0 = pTVar2;
  iStack_8c = iStack_94;
  local_68 = local_b0;
  TStack_60.Array = pTVar2;
  if ((((int)local_res18 < 0) || (iVar11 < (int)local_res18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar8 = local_78;
  uVar4 = *(uint *)(lVar13 + 0x138);
  if (local_res18 != uVar4) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar16 = -1 << ((byte)local_res18 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      local_res18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d42f050;
      uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_80 = (int)lVar13;
    local_res18 = local_80 + -1 + uVar17;
    if ((int)uVar4 < (int)local_res18) {
      local_res18 = uVar4;
    }
  }
LAB_14d42f050:
  while( true ) {
    plVar9 = local_68;
    if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_60.CurrentBitIndex == local_res18) && (TStack_60.Array == pTVar2)) &&
       (plVar9 == plVar8)) break;
    lVar13 = *plVar9;
    uVar3 = *(ulonglong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    uVar5 = *(ulonglong *)(lVar13 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(ulonglong *)((longlong)this + 0x10) <= uVar3) &&
       (uVar3 < *(ulonglong *)((longlong)this + 0x18))) {
      pFVar6 = (param_1->AllocatorInstance).Data;
      local_c0 = uVar3;
      uStack_b8 = uVar5;
      if ((pFVar6 <= (FScriptContainerElement *)&local_c0) &&
         (((FScriptContainerElement *)&local_c0 < pFVar6 + (longlong)*piVar1 * 0x10 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(ulonglong *)pFVar6 = local_c0;
      *(ulonglong *)(pFVar6 + 8) = uStack_b8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d42f19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(local_70);
  return;
}

// operator() @ 14d42f1c0

void __thiscall
```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  uint uVar17;
  ulonglong local_res8;
  uint local_res18;
  ulonglong local_c0;
  ulonglong uStack_b8;
  longlong *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  longlong *local_78;
  PSRWLOCK local_70;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar17 = *(uint *)((longlong)this + 8);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  local_70 = (PSRWLOCK)(*(longlong *)this + 0x50);
  AcquireSRWLockShared(local_70);
  lVar13 = *(longlong *)this;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  local_78 = (longlong *)(lVar13 + 0x110);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x120);
  iVar11 = *(int *)(lVar13 + 0x138);
  iStack_a8 = 0;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar11 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar17 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d42f2d0;
      uVar17 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    local_res8 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = local_res8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_94 = local_90 + -1 + (int)lVar12;
    if (iVar11 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d42f2d0:
  local_res18 = *(uint *)(lVar13 + 0x138);
  local_b0 = (longlong *)(lVar13 + 0x110);
  uStack_a4 = (undefined4)local_res8;
  iStack_88 = *(int *)(lVar13 + 0x118) - *(int *)(lVar13 + 0x144);
  uVar17 = local_res18 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_res18 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_a0 = pTVar2;
  iStack_8c = iStack_94;
  local_68 = local_b0;
  TStack_60.Array = pTVar2;
  if ((((int)local_res18 < 0) || (iVar11 < (int)local_res18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar8 = local_78;
  uVar4 = *(uint *)(lVar13 + 0x138);
  if (local_res18 != uVar4) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar16 = -1 << ((byte)local_res18 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      local_res18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d42f400;
      uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_80 = (int)lVar13;
    local_res18 = local_80 + -1 + uVar17;
    if ((int)uVar4 < (int)local_res18) {
      local_res18 = uVar4;
    }
  }
LAB_14d42f400:
  while( true ) {
    plVar9 = local_68;
    if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_60.CurrentBitIndex == local_res18) && (TStack_60.Array == pTVar2)) &&
       (plVar9 == plVar8)) break;
    lVar13 = *plVar9;
    uVar3 = *(ulonglong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    uVar5 = *(ulonglong *)(lVar13 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(ulonglong *)((longlong)this + 0x10) <= uVar3) &&
       (uVar3 < *(ulonglong *)((longlong)this + 0x18))) {
      pFVar6 = (param_1->AllocatorInstance).Data;
      local_c0 = uVar3;
      uStack_b8 = uVar5;
      if ((pFVar6 <= (FScriptContainerElement *)&local_c0) &&
         (((FScriptContainerElement *)&local_c0 < pFVar6 + (longlong)*piVar1 * 0x10 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(ulonglong *)pFVar6 = local_c0;
      *(ulonglong *)(pFVar6 + 8) = uStack_b8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d42f54b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(local_70);
  return;
}

// operator() @ 14d42f570

/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

EModuleStatus __thiscall
``TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FModule *param_1,wchar_t *param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  longlong lVar3;
  ulong64 uVar4;
  FDbgHelpResolver *this_00;
  float fVar5;
  undefined4 uStack_5c;
  code *local_48 [5];
  undefined8 *local_20;
  
  aVar1 = (param_1->Stats).Discovered;
  lVar3 = *(longlong *)this;
  uVar4 = param_1->Base;
  uVar2 = param_1->Size;
  this_00 = *(FDbgHelpResolver **)(lVar3 + 0x180);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_20[1] = lVar3;
  local_20[2] = CONCAT44(uStack_5c,aVar1);
  local_20[3] = uVar4;
  local_20[4] = uVar2 + uVar4;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
  }
  TraceServices::FDbgHelpResolver::QueueModuleReload
            (this_00,param_1,param_2,
             (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
              *)local_48);
  fVar5 = __real_3dcccccd;
  do {
    FWindowsPlatformProcess::Sleep(fVar5);
  } while (param_1->Status == (atomic<TraceServices::EModuleStatus>)0x1);
  return (EModuleStatus)param_1->Status;
}

// operator() @ 14d42f660

/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

EModuleStatus __thiscall
``TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FModule *param_1,wchar_t *param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  longlong lVar3;
  ulong64 uVar4;
  FPsymResolver *this_00;
  float fVar5;
  undefined4 uStack_5c;
  code *local_48 [5];
  undefined8 *local_20;
  
  aVar1 = (param_1->Stats).Discovered;
  lVar3 = *(longlong *)this;
  uVar4 = param_1->Base;
  uVar2 = param_1->Size;
  this_00 = *(FPsymResolver **)(lVar3 + 0x180);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_20[1] = lVar3;
  local_20[2] = CONCAT44(uStack_5c,aVar1);
  local_20[3] = uVar4;
  local_20[4] = uVar2 + uVar4;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
  }
  TraceServices::FPsymResolver::QueueModuleReload
            (this_00,param_1,param_2,
             (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
              *)local_48);
  fVar5 = __real_3dcccccd;
  do {
    FWindowsPlatformProcess::Sleep(fVar5);
  } while (param_1->Status == (atomic<TraceServices::EModuleStatus>)0x1);
  return (EModuleStatus)param_1->Status;
}

// operator() @ 14d42f750

/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

EModuleStatus __thiscall
``TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::
__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FModule *param_1,wchar_t *param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  longlong lVar3;
  ulong64 uVar4;
  FSymslibResolver *this_00;
  float fVar5;
  undefined4 uStack_5c;
  code *local_48 [5];
  undefined8 *local_20;
  
  aVar1 = (param_1->Stats).Discovered;
  lVar3 = *(longlong *)this;
  uVar4 = param_1->Base;
  uVar2 = param_1->Size;
  this_00 = *(FSymslibResolver **)(lVar3 + 0x180);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  local_20[1] = lVar3;
  local_20[2] = CONCAT44(uStack_5c,aVar1);
  local_20[3] = uVar4;
  local_20[4] = uVar2 + uVar4;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
  }
  TraceServices::FSymslibResolver::QueueModuleReload
            (this_00,param_1,param_2,
             (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
              *)local_48);
  fVar5 = __real_3dcccccd;
  do {
    FWindowsPlatformProcess::Sleep(fVar5);
  } while (param_1->Status == (atomic<TraceServices::EModuleStatus>)0x1);
  return (EModuleStatus)param_1->Status;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435498

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::TModuleProvider<class
   TraceServices::FDbgHelpResolver>::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::
_vector_deleting_destructor__adjustor_8__
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TModuleProvider<TraceServices::FDbgHelpResolver> *)
                      &this[-1].SymbolFilter.IgnoreSymbolsByFilePath.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d4354a8

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::TModuleProvider<class
   TraceServices::FPsymResolver>::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::
_vector_deleting_destructor__adjustor_8__
          (TModuleProvider<TraceServices::FPsymResolver> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TModuleProvider<TraceServices::FPsymResolver> *)
                      &this[-1].SymbolFilter.IgnoreSymbolsByFilePath.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d4354b8

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::TModuleProvider<class
   TraceServices::FSymslibResolver>::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::
_vector_deleting_destructor__adjustor_8__
          (TModuleProvider<TraceServices::FSymslibResolver> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TModuleProvider<TraceServices::FSymslibResolver> *)
                      &this[-1].SymbolFilter.IgnoreSymbolsByFilePath.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d4354c8

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::TMonotonicTimeline<struct
   TraceServices::FLoadTimeProfilerCpuEvent,struct
   TraceServices::FMonotonicTimelineDefaultSettings>::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::_vector_deleting_destructor__adjustor_8__
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                       *)&this[-1].ModCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d4354d8

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::TMonotonicTimeline<struct
   TraceServices::FTimingProfilerEvent,struct
   TraceServices::FMonotonicTimelineDefaultSettings>::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::_vector_deleting_destructor__adjustor_8__
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                       *)&this[-1].ModCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d4354e8

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FContextSwitchesProvider::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FContextSwitchesProvider::_vector_deleting_destructor__adjustor_8__
          (FContextSwitchesProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FContextSwitchesProvider *)&this[-1].NumCpuCores,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d4354f8

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FCookProfilerProvider::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FCookProfilerProvider::_vector_deleting_destructor__adjustor_8__
          (FCookProfilerProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FCookProfilerProvider *)&this[-1].ScopeEntries.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435508

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FCounter::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FCounter::_vector_deleting_destructor__adjustor_8__(FCounter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FCounter *)&this[-1].DisplayHint,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435518

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FCounterProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FCounterProvider::_vector_deleting_destructor__adjustor_8__
          (FCounterProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FCounterProvider *)&this[-1].Counters.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435528

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FDefinitionProvider::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FDefinitionProvider::_vector_deleting_destructor__adjustor_8__
          (FDefinitionProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDefinitionProvider *)&this[-1].Definitions.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435538

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FMemoryProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FMemoryProvider::_vector_deleting_destructor__adjustor_8__
          (FMemoryProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMemoryProvider *)&this[-1].TagsSerial,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435548

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FMetadataProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FMetadataProvider::_vector_deleting_destructor__adjustor_8__
          (FMetadataProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435558

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FStackSamplesProvider::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FStackSamplesProvider::_vector_deleting_destructor__adjustor_8__
          (FStackSamplesProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FStackSamplesProvider *)&this[-1].TotalNumSamples,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435568

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FThreadProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FThreadProvider::_vector_deleting_destructor__adjustor_8__
          (FThreadProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FThreadProvider *)&this[-1].SortedThreads.ArrayNum,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14d435578

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FTimingProfilerProvider::`vector
   deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FTimingProfilerProvider::_vector_deleting_destructor__adjustor_16__
          (FTimingProfilerProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FTimingProfilerProvider *)&this[-1].CpuThreadTimelineIndexMap.field_0x40,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435588

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::IDefinitionProvider::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::IDefinitionProvider::_vector_deleting_destructor__adjustor_8__
          (IDefinitionProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((IDefinitionProvider *)&this[-1].Stringifiers.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d435598

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::IModuleAnalysisProvider::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::IModuleAnalysisProvider::_vector_deleting_destructor__adjustor_8__
          (IModuleAnalysisProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((IModuleAnalysisProvider *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d4355a8

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::IModuleProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::IModuleProvider::_vector_deleting_destructor__adjustor_8__
          (IModuleProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((IModuleProvider *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d4355c0

void * __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::_scalar_deleting_destructor_
          (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->Task).Data.EventCallback != 0) {
    plVar1 = *(longlong **)&(this->Task).Data.EventCallback.field_0x28;
    plVar2 = (longlong *)&(this->Task).Data.EventCallback.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->Task).Data.EventRangeCallback != 0) {
    plVar1 = *(longlong **)&(this->Task).Data.EventRangeCallback.field_0x28;
    plVar2 = (longlong *)&(this->Task).Data.EventRangeCallback.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435650

void * __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::_scalar_deleting_destructor_
          (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->Task).Data.EventCallback != 0) {
    plVar1 = *(longlong **)&(this->Task).Data.EventCallback.field_0x28;
    plVar2 = (longlong *)&(this->Task).Data.EventCallback.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->Task).Data.EventRangeCallback != 0) {
    plVar1 = *(longlong **)&(this->Task).Data.EventRangeCallback.field_0x28;
    plVar2 = (longlong *)&(this->Task).Data.EventRangeCallback.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4356e0

void * __thiscall
TraceServices::IEditableTimeline<TraceServices::FLoadTimeProfilerCpuEvent>::
_scalar_deleting_destructor_
          (IEditableTimeline<TraceServices::FLoadTimeProfilerCpuEvent> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435710

void * __thiscall
TraceServices::IEditableTimeline<TraceServices::FTimingProfilerEvent>::_scalar_deleting_destructor_
          (IEditableTimeline<TraceServices::FTimingProfilerEvent> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435740

void * __thiscall
TraceServices::ITable<TraceServices::FExportsTableRow>::_scalar_deleting_destructor_
          (ITable<TraceServices::FExportsTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435770

void * __thiscall
TraceServices::ITable<TraceServices::FFileActivity>::_scalar_deleting_destructor_
          (ITable<TraceServices::FFileActivity> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4357a0

void * __thiscall
TraceServices::ITable<TraceServices::FLoadRequest>::_scalar_deleting_destructor_
          (ITable<TraceServices::FLoadRequest> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4357d0

void * __thiscall
TraceServices::ITable<TraceServices::FLoadTimeProfilerAggregatedStats>::_scalar_deleting_destructor_
          (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435800

void * __thiscall
TraceServices::ITable<TraceServices::FLogMessageInternal>::_scalar_deleting_destructor_
          (ITable<TraceServices::FLogMessageInternal> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435830

void * __thiscall
TraceServices::ITable<TraceServices::FNetProfilerAggregatedStats>::_scalar_deleting_destructor_
          (ITable<TraceServices::FNetProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435860

void * __thiscall
TraceServices::ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
_scalar_deleting_destructor_
          (ITable<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435890

void * __thiscall
TraceServices::ITable<TraceServices::FPackagesTableRow>::_scalar_deleting_destructor_
          (ITable<TraceServices::FPackagesTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4358c0

void * __thiscall
TraceServices::ITable<TraceServices::FRequestsTableRow>::_scalar_deleting_destructor_
          (ITable<TraceServices::FRequestsTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4358f0

void * __thiscall
TraceServices::ITable<TraceServices::FTimingProfilerAggregatedStats>::_scalar_deleting_destructor_
          (ITable<TraceServices::FTimingProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435920

void * __thiscall
TraceServices::ITable<TraceServices::FImportTableRow>::_scalar_deleting_destructor_
          (ITable<TraceServices::FImportTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435950

void * __thiscall
TraceServices::ITableReader<TraceServices::FExportsTableRow>::_scalar_deleting_destructor_
          (ITableReader<TraceServices::FExportsTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435980

void * __thiscall
TraceServices::ITableReader<TraceServices::FFileActivity>::_scalar_deleting_destructor_
          (ITableReader<TraceServices::FFileActivity> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4359b0

void * __thiscall
TraceServices::ITableReader<TraceServices::FLoadRequest>::_scalar_deleting_destructor_
          (ITableReader<TraceServices::FLoadRequest> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4359e0

void * __thiscall
TraceServices::ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (ITableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435a10

void * __thiscall
TraceServices::ITableReader<TraceServices::FLogMessageInternal>::_scalar_deleting_destructor_
          (ITableReader<TraceServices::FLogMessageInternal> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435a40

void * __thiscall
TraceServices::ITableReader<TraceServices::FNetProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (ITableReader<TraceServices::FNetProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435a70

void * __thiscall
TraceServices::ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
_scalar_deleting_destructor_
          (ITableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435aa0

void * __thiscall
TraceServices::ITableReader<TraceServices::FPackagesTableRow>::_scalar_deleting_destructor_
          (ITableReader<TraceServices::FPackagesTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435ad0

void * __thiscall
TraceServices::ITableReader<TraceServices::FRequestsTableRow>::_scalar_deleting_destructor_
          (ITableReader<TraceServices::FRequestsTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435b00

void * __thiscall
TraceServices::ITableReader<TraceServices::FTimingProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (ITableReader<TraceServices::FTimingProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435b30

void * __thiscall
TraceServices::ITableReader<TraceServices::FImportTableRow>::_scalar_deleting_destructor_
          (ITableReader<TraceServices::FImportTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435b60

void * __thiscall
TraceServices::ITimeline<TraceServices::FFileActivity_*>::_scalar_deleting_destructor_
          (ITimeline<TraceServices::FFileActivity_*> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435b90

void * __thiscall
TraceServices::ITimeline<TraceServices::FLoadTimeProfilerCpuEvent>::_scalar_deleting_destructor_
          (ITimeline<TraceServices::FLoadTimeProfilerCpuEvent> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435bc0

void * __thiscall
TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>::_scalar_deleting_destructor_
          (ITimeline<TraceServices::FTimingProfilerEvent> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435bf0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`TraceServices::FTimelineStatistics::CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'::__l15::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435c50

void * __thiscall
UE::Tasks::Private::TExecutableTask<TraceServices::FTableImportTask>::_scalar_deleting_destructor_
          (TExecutableTask<TraceServices::FTableImportTask> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x180,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435cb0

void * __thiscall
UE::Tasks::Private::TExecutableTask<TraceServices::FTableMergeTask>::_scalar_deleting_destructor_
          (TExecutableTask<TraceServices::FTableMergeTask> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x180,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435d10

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`TraceServices::FTimelineStatistics::CreateFrameStatsAggregation<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'::__l15::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435d50

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<TraceServices::FTableImportTask,void,void>::
_scalar_deleting_destructor_
          (TExecutableTaskBase<TraceServices::FTableImportTask,void,void> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435d90

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<TraceServices::FTableMergeTask,void,void>::
_scalar_deleting_destructor_
          (TExecutableTaskBase<TraceServices::FTableMergeTask,void,void> *this,uint param_1)

{
  FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFLogMessageInternal_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<int>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFNetProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFNetProfilerAggregatedStats_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFExportsTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d435fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_PEQFLogMessageInternal_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4360d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFPackagesTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFTimingProfilerAggregatedStats_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFExportsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4361d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFFileActivity_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4362d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFLogMessageInternal_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_PEQFLogMessageInternal_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4363d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFTimingProfilerAggregatedStats_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFExportsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFExportsTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4364d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4365d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFPackagesTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFTimingProfilerAggregatedStats_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4366d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<bool>'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__N___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3__NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4367d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``TraceServices::FTableMergeTask::BuildCLayout'::`4'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FTableImportTask::operator()'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FTableImportTask::operator()'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x48));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FTableMergeTask::operator()'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FTableMergeTask::operator()'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x48));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4368f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::ITimingProfilerProvider::CreateButterfly'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CreateButterfly_ITimingProfilerProvider_TraceServices__UEBAPEAVITimingProfilerButterfly_4_NNV__TFunctionRef___A6A_NI_Z___N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FSymslibResolver::OnAnalysisComplete'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FSymslibResolver::OnAnalysisComplete'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleReload'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleReload'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4369d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::`7'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleLoad'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`TraceServices::FSymslibResolver::QueueModuleLoad'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436b40

void * __thiscall
TGraphTask<TraceServices::FAllocationsQueryAsyncTask>::_scalar_deleting_destructor_
          (TGraphTask<TraceServices::FAllocationsQueryAsyncTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436ba0

void * __thiscall
TraceServices::TImportTable<TraceServices::FImportTableRow>::_scalar_deleting_destructor_
          (TImportTable<TraceServices::FImportTableRow> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TImportTable_VFImportTableRow_TraceServices___TraceServices__6B_;
  FStringStore::~FStringStore(&this->StringStore);
  TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
  ::
  ~TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
            ((TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
              *)&this->_padding_);
  FSlabAllocator::~FSlabAllocator((FSlabAllocator *)&this->_padding_);
  DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436c20

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void * __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::_scalar_deleting_destructor_
          (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
           *this,uint param_1)

{
  TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
  ::
  ~TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
            (&this->Events);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436c60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarkInternal,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FBookmarkInternal,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436ca0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarkSpec,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FBookmarkSpec,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436ce0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FScreenshot,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FScreenshot,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTableDiffCallbackParams,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FTableDiffCallbackParams,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436d60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FTableImportCallbackParams,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FTableImportCallbackParams,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436da0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436de0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436e20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436e60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436ea0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TMap<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436ee0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436f20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FPsymResolver>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FPsymResolver>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436f60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::TModuleProvider<TraceServices::FSymslibResolver>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436fa0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d436fe0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCancellationToken,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FCancellationToken,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437060

void * __thiscall
TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::_scalar_deleting_destructor_
          (TModuleProvider<TraceServices::FDbgHelpResolver> *this,uint param_1)

{
  ~TModuleProvider<TraceServices::FDbgHelpResolver>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4370a0

void * __thiscall
TraceServices::TModuleProvider<TraceServices::FPsymResolver>::_scalar_deleting_destructor_
          (TModuleProvider<TraceServices::FPsymResolver> *this,uint param_1)

{
  ~TModuleProvider<TraceServices::FPsymResolver>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4370e0

void * __thiscall
TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::_scalar_deleting_destructor_
          (TModuleProvider<TraceServices::FSymslibResolver> *this,uint param_1)

{
  ~TModuleProvider<TraceServices::FSymslibResolver>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437120

void * __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::_scalar_deleting_destructor_
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)(this->DetailLevels).AllocatorInstance.Data,(this->DetailLevels).ArrayNum);
  pFVar1 = (this->DetailLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437170

void * __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::_scalar_deleting_destructor_
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)(this->DetailLevels).AllocatorInstance.Data,(this->DetailLevels).ArrayNum);
  pFVar1 = (this->DetailLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4371c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TraceServices::IUntypedTableReader,SharedPointerInternals::DefaultDeleter<TraceServices::IUntypedTableReader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TraceServices::IUntypedTableReader,SharedPointerInternals::DefaultDeleter<TraceServices::IUntypedTableReader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437200

void * __thiscall
TraceServices::TTable<TraceServices::FExportsTableRow,2097152>::_scalar_deleting_destructor_
          (TTable<TraceServices::FExportsTableRow,2097152> *this,uint param_1)

{
  TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
  ::
  ~TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437270

void * __thiscall
TraceServices::TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>::
_scalar_deleting_destructor_
          (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *this,uint param_1)

{
  TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
  ::
  ~TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4372e0

void * __thiscall
TraceServices::TTable<TraceServices::FNetProfilerAggregatedStats,2097152>::
_scalar_deleting_destructor_
          (TTable<TraceServices::FNetProfilerAggregatedStats,2097152> *this,uint param_1)

{
  TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
  ::
  ~TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437350

void * __thiscall
TraceServices::TTable<TraceServices::FNetProfilerAggregatedStatsCounterStats,2097152>::
_scalar_deleting_destructor_
          (TTable<TraceServices::FNetProfilerAggregatedStatsCounterStats,2097152> *this,uint param_1
          )

{
  TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
  ::
  ~TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4373c0

void * __thiscall
TraceServices::TTable<TraceServices::FPackagesTableRow,2097152>::_scalar_deleting_destructor_
          (TTable<TraceServices::FPackagesTableRow,2097152> *this,uint param_1)

{
  TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
  ::
  ~TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437430

void * __thiscall
TraceServices::TTable<TraceServices::FRequestsTableRow,2097152>::_scalar_deleting_destructor_
          (TTable<TraceServices::FRequestsTableRow,2097152> *this,uint param_1)

{
  TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
  ::
  ~TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4374a0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void * __thiscall
TraceServices::TTable<TraceServices::FTimingProfilerAggregatedStats,2097152>::
_scalar_deleting_destructor_
          (TTable<TraceServices::FTimingProfilerAggregatedStats,2097152> *this,uint param_1)

{
  TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
  ::
  ~TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437510

void * __thiscall
TraceServices::TTable<TraceServices::FImportTableRow,33554432>::_scalar_deleting_destructor_
          (TTable<TraceServices::FImportTableRow,33554432> *this,uint param_1)

{
  TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
  ::
  ~TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
            (&this->Rows);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437580

void * __thiscall
TraceServices::TTableBase<TraceServices::FExportsTableRow>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FExportsTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4375d0

void * __thiscall
TraceServices::TTableBase<TraceServices::FFileActivity>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FFileActivity> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437620

void * __thiscall
TraceServices::TTableBase<TraceServices::FLoadRequest>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FLoadRequest> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437670

void * __thiscall
TraceServices::TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableBase<TraceServices::FLoadTimeProfilerAggregatedStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4376c0

void * __thiscall
TraceServices::TTableBase<TraceServices::FLogMessageInternal>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FLogMessageInternal> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437710

void * __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStats>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FNetProfilerAggregatedStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437760

void * __thiscall
TraceServices::TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
_scalar_deleting_destructor_
          (TTableBase<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4377b0

void * __thiscall
TraceServices::TTableBase<TraceServices::FPackagesTableRow>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FPackagesTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437800

void * __thiscall
TraceServices::TTableBase<TraceServices::FRequestsTableRow>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FRequestsTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437850

void * __thiscall
TraceServices::TTableBase<TraceServices::FTimingProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableBase<TraceServices::FTimingProfilerAggregatedStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4378a0

void * __thiscall
TraceServices::TTableBase<TraceServices::FImportTableRow>::_scalar_deleting_destructor_
          (TTableBase<TraceServices::FImportTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Layout).Columns.AllocatorInstance.Data,
             (this->Layout).Columns.ArrayNum);
  pFVar1 = (this->Layout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4378f0

void * __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FExportsTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437940

void * __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FFileActivity> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437990

void * __thiscall
TraceServices::TTableLayout<TraceServices::FLoadRequest>::_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FLoadRequest> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4379e0

void * __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437a30

void * __thiscall
TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FLogMessageInternal> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437a80

void * __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437ad0

void * __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437b20

void * __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FPackagesTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437b70

void * __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FRequestsTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437bc0

void * __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437c10

void * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::_scalar_deleting_destructor_
          (TTableLayout<TraceServices::FImportTableRow> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->Columns).AllocatorInstance.Data,(this->Columns).ArrayNum);
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437c60

void * __thiscall
TraceServices::TTableReader<TraceServices::FExportsTableRow>::_scalar_deleting_destructor_
          (TTableReader<TraceServices::FExportsTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437c90

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void * __thiscall
TraceServices::TTableReader<TraceServices::FFileActivity>::_scalar_deleting_destructor_
          (TTableReader<TraceServices::FFileActivity> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437cc0

void * __thiscall
TraceServices::TTableReader<TraceServices::FLoadRequest>::_scalar_deleting_destructor_
          (TTableReader<TraceServices::FLoadRequest> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437cf0

void * __thiscall
TraceServices::TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableReader<TraceServices::FLoadTimeProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437d20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TraceServices::TTableReader<TraceServices::FLogMessageInternal>::_scalar_deleting_destructor_
          (TTableReader<TraceServices::FLogMessageInternal> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437d50

void * __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableReader<TraceServices::FNetProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437d80

void * __thiscall
TraceServices::TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
_scalar_deleting_destructor_
          (TTableReader<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437db0

void * __thiscall
TraceServices::TTableReader<TraceServices::FPackagesTableRow>::_scalar_deleting_destructor_
          (TTableReader<TraceServices::FPackagesTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437de0

void * __thiscall
TraceServices::TTableReader<TraceServices::FRequestsTableRow>::_scalar_deleting_destructor_
          (TTableReader<TraceServices::FRequestsTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437e10

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void * __thiscall
TraceServices::TTableReader<TraceServices::FTimingProfilerAggregatedStats>::
_scalar_deleting_destructor_
          (TTableReader<TraceServices::FTimingProfilerAggregatedStats> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437e40

void * __thiscall
TraceServices::TTableReader<TraceServices::FImportTableRow>::_scalar_deleting_destructor_
          (TTableReader<TraceServices::FImportTableRow> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437e70

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void * __thiscall
TraceServices::TTableView<TraceServices::FFileActivity>::_scalar_deleting_destructor_
          (TTableView<TraceServices::FFileActivity> *this,uint param_1)

{
  DestructItems<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437ec0

void * __thiscall
TraceServices::TTableView<TraceServices::FLoadRequest>::_scalar_deleting_destructor_
          (TTableView<TraceServices::FLoadRequest> *this,uint param_1)

{
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437f10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TraceServices::TTableView<TraceServices::FLogMessageInternal>::_scalar_deleting_destructor_
          (TTableView<TraceServices::FLogMessageInternal> *this,uint param_1)

{
  DestructItems<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,int>
            ((FColumnDeclaration *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d437f60

void * __thiscall
TraceServices::FCallstacksProvider::_scalar_deleting_destructor_
          (FCallstacksProvider *this,uint param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FCallstacksProvider_TraceServices__6B_;
  *(undefined4 *)&(this->CallstackMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CallstackMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CallstackMap);
  TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_>
  ::
  ~TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_>
            (&this->Frames);
  TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
  ::
  ~TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
            (&this->Callstacks);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438030

void * __thiscall
TraceServices::FContextSwitchesProvider::_scalar_deleting_destructor_
          (FContextSwitchesProvider *this,uint param_1)

{
  ~FContextSwitchesProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438070

void * __thiscall
TraceServices::FCookProfilerProvider::_scalar_deleting_destructor_
          (FCookProfilerProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ICookProfilerProvider__;
  *(undefined4 *)&(this->ScopeEntries).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableCookProfilerProvider__;
  pvVar5 = *(void **)&(this->ScopeEntries).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScopeEntries);
  pFVar1 = (this->Packages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PackageIdToIndexMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PackageIdToIndexMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackageIdToIndexMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438160

void * __thiscall TraceServices::FCounter::_scalar_deleting_destructor_(FCounter *this,uint param_1)

{
  TVariablePagedArray<double>::~TVariablePagedArray<double>(&(this->DoubleCounterData).OpArguments);
  TVariablePagedArray<enum_TraceServices::ECounterOpType>::
  ~TVariablePagedArray<enum_TraceServices::ECounterOpType>(&(this->DoubleCounterData).OpTypes);
  TVariablePagedArray<double>::~TVariablePagedArray<double>(&(this->DoubleCounterData).Timestamps);
  TVariablePagedArray<__int64>::~TVariablePagedArray<__int64>(&(this->IntCounterData).OpArguments);
  TVariablePagedArray<enum_TraceServices::ECounterOpType>::
  ~TVariablePagedArray<enum_TraceServices::ECounterOpType>(&(this->IntCounterData).OpTypes);
  TVariablePagedArray<double>::~TVariablePagedArray<double>(&(this->IntCounterData).Timestamps);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4381f0

void * __thiscall
TraceServices::FCounterProvider::_scalar_deleting_destructor_(FCounterProvider *this,uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ICounterProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableCounterProvider__;
  pFVar4 = (this->Counters).AllocatorInstance.Data;
  iVar1 = (this->Counters).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Counters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::ICounter_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar4 == pFVar3) break;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->Counters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4382a0

void * __thiscall
TraceServices::FCsvProfilerProvider::_scalar_deleting_destructor_
          (FCsvProfilerProvider *this,uint param_1)

{
  ~FCsvProfilerProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4382e0

void * __thiscall
TraceServices::FDbgHelpResolver::_scalar_deleting_destructor_(FDbgHelpResolver *this,uint param_1)

{
  ~FDbgHelpResolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438320

void * __thiscall
TraceServices::FDefinitionProvider::_scalar_deleting_destructor_
          (FDefinitionProvider *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  pFVar7 = (this->Pages).AllocatorInstance.Data;
  iVar1 = (this->Pages).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Pages).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar2) break;
    FMemory::Free(*(void **)pFVar7);
    pFVar7 = pFVar7 + 8;
  }
  *(undefined4 *)&(this->Definitions).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Definitions).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Definitions);
  pFVar2 = (this->Pages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438450

void * __thiscall
TraceServices::FDiagnosticsProvider::_scalar_deleting_destructor_
          (FDiagnosticsProvider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDiagnosticsProvider_TraceServices__6B_;
  FSessionInfo::~FSessionInfo(&this->SessionInfo);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4384a0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void * __thiscall
TraceServices::FFileActivityProvider::_scalar_deleting_destructor_
          (FFileActivityProvider *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FFileActivityProvider_TraceServices__6B_;
  DestructItems<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->FileActivityTable)._padding_,
             (int)(this->FileActivityTable)._padding_);
  pvVar1 = (void *)(this->FileActivityTable)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
  ::
  ~TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
            (&this->FileActivities);
  TPagedArray<TraceServices::FFileActivityProvider::FFileInfoInternal,TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>_>
  ::
  ~TPagedArray<TraceServices::FFileActivityProvider::FFileInfoInternal,TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>_>
            (&this->Files);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438520

void * __thiscall
TraceServices::FLoadTimeProfilerProvider::_scalar_deleting_destructor_
          (FLoadTimeProfilerProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FLoadTimeProfilerProvider_TraceServices__6B_;
  TPagedArray<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>_>
  ::
  ~TPagedArray<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>_>
            (&this->Frames);
  DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->RequestsTableLayout).Columns.AllocatorInstance.Data,
             (this->RequestsTableLayout).Columns.ArrayNum);
  pFVar1 = (this->RequestsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->ExportsTableLayout).Columns.AllocatorInstance.Data,
             (this->ExportsTableLayout).Columns.ArrayNum);
  pFVar1 = (this->ExportsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->PackagesTableLayout).Columns.AllocatorInstance.Data,
             (this->PackagesTableLayout).Columns.ArrayNum);
  pFVar1 = (this->PackagesTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data
             ,(this->AggregatedStatsTableLayout).Columns.ArrayNum);
  pFVar1 = (this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->RequestsTable)._padding_,
             (int)(this->RequestsTable)._padding_);
  pvVar2 = (void *)(this->RequestsTable)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CpuTimelinesThreadMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CpuTimelinesThreadMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CpuTimelinesThreadMap);
  DestructItems<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,int>
            ((TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
              *)(this->CpuTimelines).AllocatorInstance.Data,(this->CpuTimelines).ArrayNum);
  pFVar1 = (this->CpuTimelines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPagedArray<TraceServices::FPackageExportInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>_>
  ::
  ~TPagedArray<TraceServices::FPackageExportInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>_>
            (&this->Exports);
  TPagedArray<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>_>
  ::
  ~TPagedArray<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>_>
            (&this->IoDispatcherBatches);
  TPagedArray<TraceServices::FPackageInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>_>
  ::
  ~TPagedArray<TraceServices::FPackageInfo,TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>_>
            (&this->Packages);
  TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  ::
  ~TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
            (&this->Requests);
  TPagedArray<TraceServices::FClassInfo,TraceServices::TPagedArrayPage<TraceServices::FClassInfo>_>
  ::
  ~TPagedArray<TraceServices::FClassInfo,TraceServices::TPagedArrayPage<TraceServices::FClassInfo>_>
            (&this->ClassInfos);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4386b0

void * __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::_scalar_deleting_destructor_
          (FLoaderFrameCounter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLoaderFrameCounter_FLoadTimeProfilerProvider_TraceServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4386f0

void * __thiscall
TraceServices::FMemoryProvider::_scalar_deleting_destructor_(FMemoryProvider *this,uint param_1)

{
  ~FMemoryProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438730

void * __thiscall
TraceServices::FMetadataProvider::_scalar_deleting_destructor_(FMetadataProvider *this,uint param_1)

{
  ~FMetadataProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438770

void * __thiscall
TraceServices::FNetProfilerProvider::_scalar_deleting_destructor_
          (FNetProfilerProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TraceServices::FNetProfilerGameInstanceInternal> FVar2;
  
  this->_padding_ = (longlong)&___7FNetProfilerProvider_TraceServices__6B_;
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)
             (this->AggregatedStatsCounterStatsTableLayout).Columns.AllocatorInstance.Data,
             (this->AggregatedStatsCounterStatsTableLayout).Columns.ArrayNum);
  pFVar1 = (this->AggregatedStatsCounterStatsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data
             ,(this->AggregatedStatsTableLayout).Columns.ArrayNum);
  pFVar1 = (this->AggregatedStatsTableLayout).Columns.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_>
  ::
  ~TPagedArray<TraceServices::FNetProfilerConnectionInternal,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerConnectionInternal>_>
            (&this->Connections);
  FVar2 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FVar2 = (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)&this->GameInstances;
  }
  DestructItems<TraceServices::FNetProfilerGameInstanceInternal,int>
            ((FNetProfilerGameInstanceInternal *)FVar2,(this->GameInstances).ArrayNum);
  FVar2 = (this->GameInstances).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TraceServices::FNetProfilerGameInstanceInternal>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->StatsCounterTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EventTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Names).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438870

void * __thiscall
TraceServices::FPsymResolver::_scalar_deleting_destructor_(FPsymResolver *this,uint param_1)

{
  ~FPsymResolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4388b0

void * __thiscall
TraceServices::FRegionTimeline::_scalar_deleting_destructor_(FRegionTimeline *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::FRegionLane,int>
            ((FRegionLane *)(this->Lanes).AllocatorInstance.Data,(this->Lanes).ArrayNum);
  pFVar1 = (this->Lanes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438900

void * __thiscall
TraceServices::FResolvedSymbolFilter::_scalar_deleting_destructor_
          (FResolvedSymbolFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FResolvedSymbolFilter_TraceServices__6B_;
  pFVar1 = (this->IgnoreSymbolsByFilePath).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoreSymbolsByFunctionName).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoreSymbolsByModuleName).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438970

void * __thiscall
TraceServices::FStackSamplesProvider::_scalar_deleting_destructor_
          (FStackSamplesProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IStackSamplesProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  pFVar1 = (this->PendingTimers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StackFramesByTimerId).field_0x48 = 0;
  pvVar5 = *(void **)&(this->StackFramesByTimerId).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StackFramesByTimerId);
  *(undefined4 *)&(this->StackFramesByAddress).field_0x48 = 0;
  pvVar5 = *(void **)&(this->StackFramesByAddress).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StackFramesByAddress);
  TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_>
  ::
  ~TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_>
            (&this->StackFrames);
  *(undefined4 *)&(this->ThreadsBySystemId).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ThreadsBySystemId).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadsBySystemId);
  pFVar1 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
  ::
  ~TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
            (&this->Threads);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438ab0

void * __thiscall
TraceServices::FCsvProfilerProvider::FTable::_scalar_deleting_destructor_(FTable *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438ae0

void * __thiscall
TraceServices::FCsvProfilerProvider::FTableLayout::_scalar_deleting_destructor_
          (FTableLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438b10

void * __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::_scalar_deleting_destructor_
          (FTableReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438b40

void * __thiscall
TraceServices::FTasksProvider::_scalar_deleting_destructor_(FTasksProvider *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FTasksProvider_TraceServices__6B_;
  *(undefined4 *)&(this->WaitingThreads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WaitingThreads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WaitingThreads);
  *(undefined4 *)&(this->ExecutionThreads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExecutionThreads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecutionThreads);
  DestructItems<TraceServices::FTaskInfo,__int64>
            ((FTaskInfo *)(this->Tasks).AllocatorInstance.Data,(this->Tasks).ArrayNum);
  pFVar2 = (this->Tasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438bf0

void * __thiscall
TraceServices::FThreadProvider::_scalar_deleting_destructor_(FThreadProvider *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IThreadProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableThreadProvider__;
  pFVar4 = (this->SortedThreads).AllocatorInstance.Data;
  iVar1 = (this->SortedThreads).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->SortedThreads).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar2) break;
    ::operator_delete(*(void **)pFVar4,0x28);
    pFVar4 = pFVar4 + 8;
  }
  pFVar2 = (this->SortedThreads).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ThreadMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ThreadMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438cc0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void * __thiscall
TraceServices::FTimingProfilerButterfly::_scalar_deleting_destructor_
          (FTimingProfilerButterfly *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->CachedCalleeTrees).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedCalleeTrees).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedCalleeTrees);
  *(undefined4 *)&(this->CachedCallerTrees).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedCallerTrees).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedCallerTrees);
  DestructItems<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_> *)
             (this->TimerCallstacksMap).AllocatorInstance.Data,(this->TimerCallstacksMap).ArrayNum);
  pFVar2 = (this->TimerCallstacksMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
  ::
  ~TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
            (&this->Nodes);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438d90

void * __thiscall
TraceServices::FTimingProfilerProvider::_scalar_deleting_destructor_
          (FTimingProfilerProvider *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ITimingProfilerProvider__;
  *(undefined4 *)&(this->CpuThreadTimelineIndexMap).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ITimingProfilerTimerReader__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableTimingProfilerProvider__;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438f30

void * __thiscall
TraceServices::IBookmarkProvider::_scalar_deleting_destructor_(IBookmarkProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438f60

void * __thiscall
TraceServices::ICallstacksProvider::_scalar_deleting_destructor_
          (ICallstacksProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438f90

void * __thiscall
TraceServices::IChannelProvider::_scalar_deleting_destructor_(IChannelProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438fc0

void * __thiscall
TraceServices::IContextSwitchesProvider::_scalar_deleting_destructor_
          (IContextSwitchesProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d438ff0

void * __thiscall
TraceServices::ICookProfilerProvider::_scalar_deleting_destructor_
          (ICookProfilerProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439020

void * __thiscall TraceServices::ICounter::_scalar_deleting_destructor_(ICounter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439050

void * __thiscall
TraceServices::ICounterProvider::_scalar_deleting_destructor_(ICounterProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439080

void * __thiscall
TraceServices::ICsvProfilerProvider::_scalar_deleting_destructor_
          (ICsvProfilerProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4390b0

void * __thiscall
TraceServices::IDefinitionProvider::_scalar_deleting_destructor_
          (IDefinitionProvider *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Stringifiers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Stringifiers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Stringifiers);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439110

void * __thiscall
TraceServices::IDiagnosticsProvider::_scalar_deleting_destructor_
          (IDiagnosticsProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439140

void * __thiscall
TraceServices::IEditableBookmarkProvider::_scalar_deleting_destructor_
          (IEditableBookmarkProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439170

void * __thiscall
TraceServices::IEditableCookProfilerProvider::_scalar_deleting_destructor_
          (IEditableCookProfilerProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4391a0

void * __thiscall
TraceServices::IEditableCounter::_scalar_deleting_destructor_(IEditableCounter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4391d0

void * __thiscall
TraceServices::IEditableCounterProvider::_scalar_deleting_destructor_
          (IEditableCounterProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439200

void * __thiscall
TraceServices::IEditableLogProvider::_scalar_deleting_destructor_
          (IEditableLogProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439230

void * __thiscall
TraceServices::IEditableMetadataProvider::_scalar_deleting_destructor_
          (IEditableMetadataProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439260

void * __thiscall
TraceServices::IEditableRegionProvider::_scalar_deleting_destructor_
          (IEditableRegionProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439290

void * __thiscall
TraceServices::IEditableThreadProvider::_scalar_deleting_destructor_
          (IEditableThreadProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4392c0

void * __thiscall
TraceServices::IEditableTimingProfilerProvider::_scalar_deleting_destructor_
          (IEditableTimingProfilerProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4392f0

void * __thiscall
TraceServices::IFileActivityProvider::_scalar_deleting_destructor_
          (IFileActivityProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439320

void * __thiscall
TraceServices::IFrameProvider::_scalar_deleting_destructor_(IFrameProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439350

void * __thiscall
TraceServices::ILoadTimeProfilerProvider::_scalar_deleting_destructor_
          (ILoadTimeProfilerProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439380

void * __thiscall
TraceServices::ILogProvider::_scalar_deleting_destructor_(ILogProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4393b0

void * __thiscall
TraceServices::IMemoryProvider::_scalar_deleting_destructor_(IMemoryProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4393e0

void * __thiscall
TraceServices::IMetadataProvider::_scalar_deleting_destructor_(IMetadataProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439410

void * __thiscall
TraceServices::IModuleAnalysisProvider::_scalar_deleting_destructor_
          (IModuleAnalysisProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439440

void * __thiscall
TraceServices::IModuleProvider::_scalar_deleting_destructor_(IModuleProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439470

void * __thiscall
TraceServices::INetProfilerProvider::_scalar_deleting_destructor_
          (INetProfilerProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4394a0

void * __thiscall
TraceServices::IRegionProvider::_scalar_deleting_destructor_(IRegionProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4394d0

void * __thiscall
TraceServices::IScreenshotProvider::_scalar_deleting_destructor_
          (IScreenshotProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439500

void * __thiscall
TraceServices::IStackSamplesProvider::_scalar_deleting_destructor_
          (IStackSamplesProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439530

void * __thiscall
TraceServices::ITableLayout::_scalar_deleting_destructor_(ITableLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439560

void * __thiscall
TraceServices::ITasksProvider::_scalar_deleting_destructor_(ITasksProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439590

void * __thiscall
TraceServices::IThreadProvider::_scalar_deleting_destructor_(IThreadProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4395c0

void * __thiscall
TraceServices::ITimingProfilerButterfly::_scalar_deleting_destructor_
          (ITimingProfilerButterfly *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4395f0

void * __thiscall
TraceServices::ITimingProfilerProvider::_scalar_deleting_destructor_
          (ITimingProfilerProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439620

void * __thiscall
TraceServices::IUntypedTable::_scalar_deleting_destructor_(IUntypedTable *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d439650

void * __thiscall
TraceServices::IUntypedTableReader::_scalar_deleting_destructor_
          (IUntypedTableReader *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CreateModuleProvider @ 14d44bb50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<TraceServices::IModuleAnalysisProvider,1> * __cdecl
TraceServices::CreateModuleProvider
          (TSharedPtr<TraceServices::IModuleAnalysisProvider,1> *__return_storage_ptr__,
          IAnalysisSession *param_1,TStringView<char> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<TraceServices::IModuleAnalysisProvider,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<TraceServices::IModuleAnalysisProvider,1> local_58;
  TSharedPtr<TraceServices::IModuleAnalysisProvider,1> local_48;
  TSharedPtr<TraceServices::IModuleAnalysisProvider,1> local_38;
  
  __return_storage_ptr__->Object = (IModuleAnalysisProvider *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if ((((param_2->Size != 0) &&
       (iVar3 = strncmp(param_2->DataPtr,"pdb",(longlong)param_2->Size), iVar3 == 0)) &&
      ("pdb"[param_2->Size] == '\0')) ||
     (((param_2->Size != 0 &&
       (iVar3 = strncmp(param_2->DataPtr,"dwarf",(longlong)param_2->Size), iVar3 == 0)) &&
      ("dwarf"[param_2->Size] == '\0')))) {
    pTVar4 = ::operator_new(0x1e0);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (IModuleAnalysisProvider *)___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_58.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TModuleProvider_VFSymslibResolver_TraceServices___TraceServices___00_SharedPointerInternals__6B_
      ;
      TModuleProvider<TraceServices::FSymslibResolver>::
      TModuleProvider<TraceServices::FSymslibResolver>
                ((TModuleProvider<TraceServices::FSymslibResolver> *)(pTVar4 + 1),param_1);
      pTVar6 = pTVar4 + 1;
      if ((pTVar6 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<TraceServices::IModuleAnalysisProvider,1> *)(*pcVar1)();
        return pTVar5;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_58.SharedReferenceCount.ReferenceController = pTVar4;
      local_58.Object = (IModuleAnalysisProvider *)pTVar6;
    }
    if (__return_storage_ptr__ != &local_58) {
      __return_storage_ptr__->Object = (IModuleAnalysisProvider *)pTVar6;
      local_58.Object = (IModuleAnalysisProvider *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_58.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  if ((((__return_storage_ptr__->Object == (IModuleAnalysisProvider *)0x0) && (param_2->Size != 0))
      && (iVar3 = strncmp(param_2->DataPtr,"pdb",(longlong)param_2->Size), iVar3 == 0)) &&
     ("pdb"[param_2->Size] == '\0')) {
    pTVar4 = ::operator_new(0x1e0);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_48.Object = (IModuleAnalysisProvider *)___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices___00_SharedPointerInternals__6B_
      ;
      TModuleProvider<TraceServices::FDbgHelpResolver>::
      TModuleProvider<TraceServices::FDbgHelpResolver>
                ((TModuleProvider<TraceServices::FDbgHelpResolver> *)(pTVar4 + 1),param_1);
      pTVar6 = pTVar4 + 1;
      if ((pTVar6 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<TraceServices::IModuleAnalysisProvider,1> *)(*pcVar1)();
        return pTVar5;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_48.SharedReferenceCount.ReferenceController = pTVar4;
      local_48.Object = (IModuleAnalysisProvider *)pTVar6;
    }
    if (__return_storage_ptr__ != &local_48) {
      __return_storage_ptr__->Object = (IModuleAnalysisProvider *)pTVar6;
      local_48.Object = (IModuleAnalysisProvider *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  if (((__return_storage_ptr__->Object == (IModuleAnalysisProvider *)0x0) && (param_2->Size != 0))
     && ((iVar3 = strncmp(param_2->DataPtr,"psym",(longlong)param_2->Size), iVar3 == 0 &&
         ("psym"[param_2->Size] == '\0')))) {
    pTVar4 = ::operator_new(0x1e0);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_38.Object = (IModuleAnalysisProvider *)___xmm_00000000000000000000000000000010;
      local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TModuleProvider_VFPsymResolver_TraceServices___TraceServices___00_SharedPointerInternals__6B_
      ;
      TModuleProvider<TraceServices::FPsymResolver>::TModuleProvider<TraceServices::FPsymResolver>
                ((TModuleProvider<TraceServices::FPsymResolver> *)(pTVar4 + 1),param_1);
      pTVar7 = pTVar4 + 1;
      if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<TraceServices::IModuleAnalysisProvider,1> *)(*pcVar1)();
        return pTVar5;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_38.SharedReferenceCount.ReferenceController = pTVar4;
      local_38.Object = (IModuleAnalysisProvider *)pTVar7;
    }
    if (__return_storage_ptr__ != &local_38) {
      __return_storage_ptr__->Object = (IModuleAnalysisProvider *)pTVar7;
      local_38.Object = (IModuleAnalysisProvider *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return __return_storage_ptr__;
}

// EditBookmarkProvider @ 14d450110

IEditableBookmarkProvider * __cdecl TraceServices::EditBookmarkProvider(IAnalysisSession *param_1)

{
  IEditableBookmarkProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"BookmarkProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableBookmarkProvider *)
           (**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8);
  return pIVar1;
}

// EditCounterProvider @ 14d450320

IEditableCounterProvider * __cdecl TraceServices::EditCounterProvider(IAnalysisSession *param_1)

{
  IEditableCounterProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CounterProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableCounterProvider *)(**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8)
  ;
  return pIVar1;
}

// EditDefinitionProvider @ 14d450660

IDefinitionProvider * __cdecl TraceServices::EditDefinitionProvider(IAnalysisSession *param_1)

{
  longlong lVar1;
  IDefinitionProvider *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"DefinitionProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  lVar1 = (**(code **)((longlong)*param_1 + 0x100))(param_1);
  pIVar2 = (IDefinitionProvider *)(lVar1 + -8);
  if (lVar1 == 0) {
    pIVar2 = (IDefinitionProvider *)0x0;
  }
  return pIVar2;
}

// EditLogProvider @ 14d4508e0

IEditableLogProvider * __cdecl TraceServices::EditLogProvider(IAnalysisSession *param_1)

{
  IEditableLogProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"LogProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableLogProvider *)(**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8);
  return pIVar1;
}

// EditMetadataProvider @ 14d450970

IEditableMetadataProvider * __cdecl TraceServices::EditMetadataProvider(IAnalysisSession *param_1)

{
  IEditableMetadataProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"MetadataProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableMetadataProvider *)
           (**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8);
  return pIVar1;
}

// EditRegionProvider @ 14d450d20

IEditableRegionProvider * __cdecl TraceServices::EditRegionProvider(IAnalysisSession *param_1)

{
  IEditableRegionProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"RegionProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableRegionProvider *)(**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8);
  return pIVar1;
}

// EditThreadProvider @ 14d450db0

IEditableThreadProvider * __cdecl TraceServices::EditThreadProvider(IAnalysisSession *param_1)

{
  IEditableThreadProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ThreadProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IEditableThreadProvider *)(**(code **)((longlong)*param_1 + 0x100))(param_1,local_res8);
  return pIVar1;
}

// EnumerateEventsDownSampled @ 14d4551c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
TraceServices::
EnumerateAsyncAlgoritm<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *param_1,TFunctionRef<void___cdecl(int)> *param_2,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
          *param_3)

{
  FLoadTimeProfilerCpuEvent *pFVar1;
  ushort uVar2;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar3;
  FEventStackEntry *pFVar4;
  FLoadTimeProfilerCpuEvent *pFVar5;
  code *pcVar6;
  FPackageExportInfo *pFVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FEventScopeEntryPage *pFVar19;
  FEventScopeEntryPage *pFVar20;
  ulonglong uVar21;
  FEventScopeEntry *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar26;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulong64 uVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auStack_8188 [32];
  undefined1 local_8168 [8];
  undefined1 local_8160 [8];
  undefined1 local_8158 [8];
  undefined1 local_8150 [8];
  undefined1 local_8148 [8];
  FEventScopeEntryPage *local_8140;
  undefined8 *local_8138;
  FEventScopeEntryPage *local_8130;
  TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
  *local_8128;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_8120;
  uint local_80f0;
  TFunctionRef<void___cdecl(int)> *local_80e8;
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  local_80e0;
  double local_80b0;
  double local_80a8 [4];
  FPackageInfo *local_8088;
  FPackageExportInfo *apFStack_8080 [3];
  double local_8068;
  double local_8060 [2];
  double local_8050 [10];
  ulonglong auStack_8000 [4083];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_8188;
  pFVar3 = param_1->DetailLevel;
  local_8128 = param_3;
  local_80e8 = param_2;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            (&local_8120,&pFVar3->ScopeEntries,
             (pFVar3->ScopeEntries).PageSize * param_1->StartPageIndex);
  uVar31 = local_8120.CurrentPageIndex;
  pFVar20 = (local_8120.Outer)->FirstPage + local_8120.CurrentPageIndex;
  local_8130 = pFVar20;
  TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  ::GetIteratorFromItem(&pFVar3->Events,&local_80e0,pFVar20->BeginEventIndex);
  lVar15 = 0x400;
  pdVar13 = local_8060 + 1;
  puVar28 = (undefined8 *)0x0;
  do {
    pdVar13[-1] = 0.0;
    *pdVar13 = 0.0;
    *(undefined4 *)(pdVar13 + 1) = 3;
    pdVar13 = pdVar13 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar2 = pFVar20->InitialStackCount;
  uVar24 = (ulonglong)uVar2;
  uVar33 = (uint)__xmm_80000000000000008000000000000000;
  uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar21 = (ulonglong)(int)(uint)uVar2;
  puVar14 = puVar28;
  if (3 < uVar21) {
    local_8140 = (FEventScopeEntryPage *)(-(longlong)(local_8050 + 2) + 0x40);
    lVar15 = (uVar21 - 4 >> 2) + 1;
    pdVar13 = local_8050 + 2;
    puVar14 = (undefined8 *)(lVar15 * 4);
    do {
      pFVar4 = pFVar20->InitialStack;
      uVar30 = *(ulonglong *)((longlong)&pFVar4->EnterScopeIndex + (longlong)puVar28);
      uVar18 = (pFVar3->ScopeEntries).PageSize;
      dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar30 / uVar18].Items[uVar30 % uVar18].Time;
      if (dVar32 < 0.0) {
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                  SUB84(dVar32,0) ^ uVar33);
      }
      *(double *)((longlong)&local_8068 + (longlong)puVar28) = dVar32;
      uVar30 = *(ulonglong *)((longlong)&pFVar4->EventIndex + (longlong)puVar28);
      uVar18 = (pFVar3->Events).PageSize;
      uVar17 = uVar30 % uVar18;
      pFVar5 = (pFVar3->Events).FirstPage[uVar30 / uVar18].Items;
      pFVar1 = pFVar5 + uVar17;
      pFVar7 = pFVar1->Export;
      pdVar13[-4] = (double)pFVar1->Package;
      pdVar13[-3] = (double)pFVar7;
      pdVar13[-2] = *(double *)&pFVar5[uVar17].EventType;
      pFVar4 = pFVar20->InitialStack;
      uVar30 = *(ulonglong *)((longlong)&pFVar4[1].EnterScopeIndex + (longlong)puVar28);
      uVar18 = (pFVar3->ScopeEntries).PageSize;
      dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar30 / uVar18].Items[uVar30 % uVar18].Time;
      if (dVar32 < 0.0) {
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                  SUB84(dVar32,0) ^ uVar33);
      }
      *(double *)((longlong)(local_8050 + 1) + (longlong)puVar28) = dVar32;
      uVar30 = *(ulonglong *)((longlong)&pFVar4[1].EventIndex + (longlong)puVar28);
      uVar18 = (pFVar3->Events).PageSize;
      uVar17 = uVar30 % uVar18;
      puVar25 = (undefined8 *)((longlong)(local_8050 + 2) + (longlong)puVar28);
      pFVar5 = (pFVar3->Events).FirstPage[uVar30 / uVar18].Items;
      pFVar1 = pFVar5 + uVar17;
      pFVar7 = pFVar1->Export;
      *puVar25 = pFVar1->Package;
      *(FPackageExportInfo **)((longlong)(local_8050 + 3) + (longlong)puVar28) = pFVar7;
      *(undefined8 *)((longlong)(local_8050 + 4) + (longlong)puVar28) =
           *(undefined8 *)&pFVar5[uVar17].EventType;
      puVar9 = &pFVar20->InitialStack->EnterScopeIndex;
      uVar30 = *(ulonglong *)((longlong)puVar25 + (longlong)local_8140 + (longlong)puVar9);
      uVar18 = (pFVar3->ScopeEntries).PageSize;
      dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar30 / uVar18].Items[uVar30 % uVar18].Time;
      if (dVar32 < 0.0) {
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                  SUB84(dVar32,0) ^ uVar33);
      }
      *(double *)((longlong)(local_8050 + 5) + (longlong)puVar28) = dVar32;
      uVar30 = *(ulonglong *)
                ((longlong)puVar25 + (longlong)puVar9 + -(longlong)(local_8050 + 2) + 0x48);
      uVar18 = (pFVar3->Events).PageSize;
      uVar17 = uVar30 % uVar18;
      pFVar5 = (pFVar3->Events).FirstPage[uVar30 / uVar18].Items;
      pFVar1 = pFVar5 + uVar17;
      pFVar7 = pFVar1->Export;
      *(FPackageInfo **)((longlong)(local_8050 + 6) + (longlong)puVar28) = pFVar1->Package;
      *(FPackageExportInfo **)((longlong)(local_8050 + 7) + (longlong)puVar28) = pFVar7;
      *(undefined8 *)((longlong)(local_8050 + 8) + (longlong)puVar28) =
           *(undefined8 *)&pFVar5[uVar17].EventType;
      pFVar4 = pFVar20->InitialStack;
      uVar30 = *(ulonglong *)((longlong)&pFVar4[3].EnterScopeIndex + (longlong)puVar28);
      uVar18 = (pFVar3->ScopeEntries).PageSize;
      dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar30 / uVar18].Items[uVar30 % uVar18].Time;
      if (dVar32 < 0.0) {
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                  SUB84(dVar32,0) ^ uVar33);
      }
      *(double *)((longlong)(local_8050 + 9) + (longlong)puVar28) = dVar32;
      pdVar13 = pdVar13 + 0x10;
      uVar30 = *(ulonglong *)((longlong)&pFVar4[3].EventIndex + (longlong)puVar28);
      uVar18 = (pFVar3->Events).PageSize;
      uVar17 = uVar30 % uVar18;
      pFVar5 = (pFVar3->Events).FirstPage[uVar30 / uVar18].Items;
      pFVar1 = pFVar5 + uVar17;
      pFVar7 = pFVar1->Export;
      *(FPackageInfo **)((longlong)auStack_8000 + (longlong)puVar28) = pFVar1->Package;
      *(FPackageExportInfo **)((longlong)(auStack_8000 + 1) + (longlong)puVar28) = pFVar7;
      *(undefined8 *)((longlong)(auStack_8000 + 2) + (longlong)puVar28) =
           *(undefined8 *)&pFVar5[uVar17].EventType;
      puVar28 = puVar28 + 0x10;
      lVar15 = lVar15 + -1;
      param_2 = local_80e8;
      local_8138 = puVar14;
    } while (lVar15 != 0);
  }
  if ((longlong)puVar14 < (longlong)uVar21) {
    lVar15 = (longlong)puVar14 << 5;
    lVar29 = uVar21 - (longlong)puVar14;
    do {
      pFVar4 = pFVar20->InitialStack;
      uVar21 = *(ulonglong *)((longlong)&pFVar4->EnterScopeIndex + lVar15);
      uVar30 = (pFVar3->ScopeEntries).PageSize;
      dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar21 / uVar30].Items[uVar21 % uVar30].Time;
      if (dVar32 < 0.0) {
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                  SUB84(dVar32,0) ^ uVar33);
      }
      *(double *)((longlong)&local_8068 + lVar15) = dVar32;
      uVar21 = *(ulonglong *)((longlong)&pFVar4->EventIndex + lVar15);
      uVar30 = (pFVar3->Events).PageSize;
      uVar18 = uVar21 % uVar30;
      pFVar5 = (pFVar3->Events).FirstPage[uVar21 / uVar30].Items;
      pFVar1 = pFVar5 + uVar18;
      pFVar7 = pFVar1->Export;
      *(FPackageInfo **)((longlong)local_8060 + lVar15) = pFVar1->Package;
      *(FPackageExportInfo **)((longlong)local_8050 + lVar15 + -8) = pFVar7;
      *(undefined8 *)((longlong)local_8050 + lVar15) = *(undefined8 *)&pFVar5[uVar18].EventType;
      lVar15 = lVar15 + 0x20;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  uVar23 = (uint)uVar2;
  if ((param_1->SortOrder == ByEndTime) ||
     ((param_1->TaskIndex == 0 && (param_1->SortOrder == ByStartTime)))) {
    local_80e8 = (TFunctionRef<void___cdecl(int)> *)((ulonglong)local_80e8 & 0xffffffff00000000);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
    iVar12 = 0;
    uVar21 = uVar24;
    if (uVar23 != 0) {
      lVar15 = 0;
      pdVar13 = &local_8068;
      do {
        local_80b0 = *pdVar13;
        local_8168[0] = 1;
        iVar11 = (**(code **)local_8128)
                           (*(undefined8 *)&local_8128->field_0x8,local_8168,&local_80b0,
                            (longlong)local_8060 + (longlong)iVar12 * 0x20);
        if (iVar11 == 1) {
          return;
        }
        iVar12 = iVar12 + 1;
        uVar21 = (ulonglong)(int)uVar23;
        lVar15 = lVar15 + 1;
        pdVar13 = pdVar13 + 4;
      } while (lVar15 < (longlong)uVar21);
    }
  }
  else {
    local_80f0 = (uint)uVar2;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
    uVar21 = (longlong)(int)uVar23;
  }
  uVar30 = param_1->StartPageIndex;
  local_8140 = (FEventScopeEntryPage *)local_80e0.CurrentItem;
  pFVar22 = local_8120.CurrentItem;
  if (local_8120.CurrentItem != (FEventScopeEntry *)0x0) {
    local_8138 = (undefined8 *)((longlong)local_8060 + (uVar21 * 4 + -1) * 8);
    pFVar20 = (FEventScopeEntryPage *)local_80e0.CurrentItem;
    do {
      pFVar22 = local_8120.CurrentItem;
      if (param_1->EndPageIndex <= uVar30) break;
      iVar12 = (int)uVar24;
      if (0.0 < (local_8120.CurrentItem)->Time || (local_8120.CurrentItem)->Time == 0.0) {
        if ((iVar12 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                                ,0x68,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_80a8[1] = pFVar22->Time;
        local_8138 = local_8138 + -4;
        uVar24 = (ulonglong)(iVar12 - 1U);
        local_8158[0] = 0;
        iVar12 = (**(code **)local_8128)
                           (*(undefined8 *)&local_8128->field_0x8,local_8158,local_80a8 + 1,
                            (longlong)local_8060 + (longlong)(int)(iVar12 - 1U) * 0x20);
        if (iVar12 == 1) {
          return;
        }
      }
      else {
        if ((0x3ff < iVar12) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth < SettingsType::MaxDepth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                                ,0x5a,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_8160[0] = 1;
        uVar24 = (ulonglong)(iVar12 + 1);
        uVar8 = local_8140->Count;
        local_8138[1] = local_8140->Items;
        local_8138[2] = uVar8;
        local_8138[3] = local_8140->BeginTime;
        *local_8138 = CONCAT44((uint)((ulonglong)pFVar22->Time >> 0x20) ^ uVar34,
                               SUB84(pFVar22->Time,0) ^ uVar33);
        local_80a8[0] =
             (double)CONCAT44((uint)((ulonglong)pFVar22->Time >> 0x20) ^ uVar34,
                              SUB84(pFVar22->Time,0) ^ uVar33);
        local_8138 = local_8138 + 4;
        iVar12 = (**(code **)local_8128)
                           (*(undefined8 *)&local_8128->field_0x8,local_8160,local_80a8);
        if (iVar12 == 1) {
          return;
        }
        if (pFVar20 == (FEventScopeEntryPage *)local_80e0.CurrentPageLastItem) {
          if (local_80e0.CurrentPageIndex ==
              (longlong)(((local_80e0.Outer)->PagesArray).ArrayNum + -1)) {
            local_80e0.CurrentItemIndex = (local_80e0.Outer)->TotalItemCount;
            local_80e0.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
            pFVar20 = (FEventScopeEntryPage *)0x0;
            local_80e0.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_80e0.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_8140 = (FEventScopeEntryPage *)0x0;
          }
          else {
            local_80e0.CurrentPageIndex = local_80e0.CurrentPageIndex + 1;
            pTVar26 = (local_80e0.Outer)->FirstPage + local_80e0.CurrentPageIndex;
            pFVar20 = (FEventScopeEntryPage *)pTVar26->Items;
            if (pFVar20 == (FEventScopeEntryPage *)0x0) {
              local_80e0.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            }
            else {
              local_80e0.CurrentPageLastItem =
                   (FLoadTimeProfilerCpuEvent *)((longlong)pFVar20 + (pTVar26->Count * 3 + -3) * 8);
            }
            local_80e0.CurrentItemIndex = local_80e0.CurrentPageIndex * (local_80e0.Outer)->PageSize
            ;
            local_8140 = pFVar20;
            local_80e0.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)pFVar20;
            local_80e0.CurrentItem = (FLoadTimeProfilerCpuEvent *)pFVar20;
            if (pTVar26 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) {
              local_8140 = (FEventScopeEntryPage *)0x0;
            }
          }
        }
        else {
          local_80e0.CurrentItemIndex = local_80e0.CurrentItemIndex + 1;
          pFVar20 = (FEventScopeEntryPage *)&pFVar20->EndTime;
          local_8140 = pFVar20;
          local_80e0.CurrentItem = (FLoadTimeProfilerCpuEvent *)pFVar20;
        }
      }
      if (pFVar22 == local_8120.CurrentPageLastItem) {
        if (uVar31 == (longlong)(((local_8120.Outer)->PagesArray).ArrayNum + -1)) {
          local_8120.CurrentItemIndex = (local_8120.Outer)->TotalItemCount;
          local_8120.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          local_8120.CurrentItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar30 = uVar31 + 1;
          pFVar19 = (local_8120.Outer)->FirstPage + uVar30;
          pFVar22 = pFVar19->Items;
          if (pFVar22 == (FEventScopeEntry *)0x0) {
            local_8120.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          }
          else {
            local_8120.CurrentPageLastItem = pFVar22 + (pFVar19->Count - 1);
          }
          local_8120.CurrentItemIndex = uVar30 * (local_8120.Outer)->PageSize;
          uVar31 = uVar30;
          local_8120.CurrentPageIndex = uVar30;
          local_8120.CurrentPageFirstItem = pFVar22;
          local_8120.CurrentItem = pFVar22;
          if (pFVar19 != (FEventScopeEntryPage *)0x0) goto LAB_14d455871;
        }
        pFVar22 = (FEventScopeEntry *)0x0;
        local_8120.CurrentPageFirstItem = local_8120.CurrentItem;
        break;
      }
      local_8120.CurrentItemIndex = local_8120.CurrentItemIndex + 1;
      pFVar22 = pFVar22 + 1;
      uVar30 = uVar31;
LAB_14d455871:
      uVar31 = uVar30;
      local_8120.CurrentItem = pFVar22;
    } while (pFVar22 != (FEventScopeEntry *)0x0);
  }
  if ((param_1->TaskIndex == param_1->NumTasks - 1) || (param_1->SortOrder != ByEndTime)) {
    iVar12 = (int)uVar24;
    if ((param_1->SortOrder == ByStartTime) &&
       (((param_1->TaskIndex != 0 && (0 < iVar12)) &&
        (iVar12 <= (int)(uint)local_8130->InitialStackCount)))) {
      uVar21 = local_8130->InitialStack[(longlong)iVar12 + -1].EnterScopeIndex;
      uVar30 = (pFVar3->ScopeEntries).PageSize;
      dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar21 / uVar30].Items[uVar21 % uVar30].Time;
      if (dVar32 < 0.0) {
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                  SUB84(dVar32,0) ^ uVar33);
      }
      if (dVar32 == (double)(&local_8088)[(longlong)iVar12 * 4]) {
        return;
      }
    }
    if (pFVar22 != (FEventScopeEntry *)0x0) {
      lVar15 = (longlong)iVar12;
      pTVar27 = local_8120.Outer;
      do {
        local_8140 = pTVar27->FirstPage;
        if (((int)(uint)local_8140[uVar31].InitialStackCount < (int)uVar24) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth <= CurrentScopePage->InitialStackCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                                ,0x87,L""), pTVar27 = local_8120.Outer, bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (0 < lVar15) {
          lVar16 = lVar15 << 5;
          lVar29 = lVar15;
          do {
            pFVar4 = local_8140[uVar31].InitialStack;
            lVar15 = lVar29;
            pTVar27 = local_8120.Outer;
            if (*(double *)((longlong)pFVar4 + lVar16 + -8) <= 0.0) break;
            lVar15 = lVar29 + -1;
            uVar23 = (int)uVar24 - 1;
            uVar24 = (ulonglong)uVar23;
            lVar16 = lVar15 * 0x20;
            uVar21 = (pFVar3->Events).PageSize;
            uVar30 = pFVar4[lVar15].EventIndex % uVar21;
            pFVar5 = (pFVar3->Events).FirstPage[pFVar4[lVar15].EventIndex / uVar21].Items;
            pFVar1 = pFVar5 + uVar30;
            local_8088 = pFVar1->Package;
            apFStack_8080[0] = pFVar1->Export;
            apFStack_8080[1] = *(FPackageExportInfo **)&pFVar5[uVar30].EventType;
            local_80a8[2] = pFVar4[lVar15].EndTime;
            local_8150[0] = 0;
            iVar12 = (**(code **)local_8128)
                               (*(undefined8 *)&local_8128->field_0x8,local_8150,local_80a8 + 2,
                                &local_8088);
            if (iVar12 == 1) {
              return;
            }
            if (((param_1->SortOrder == ByStartTime) && (param_1->TaskIndex != 0)) &&
               ((0 < lVar15 && ((int)uVar23 <= (int)(uint)local_8130->InitialStackCount)))) {
              uVar21 = local_8130->InitialStack[lVar29 + -2].EnterScopeIndex;
              uVar30 = (pFVar3->ScopeEntries).PageSize;
              dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar21 / uVar30].Items[uVar21 % uVar30].Time
              ;
              if (dVar32 < 0.0) {
                dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                          SUB84(dVar32,0) ^ uVar33);
              }
              if (dVar32 == (double)(&local_8088)[lVar15 * 4]) {
                return;
              }
            }
            lVar29 = lVar15;
            pTVar27 = local_8120.Outer;
          } while (0 < lVar15);
        }
        if (uVar31 == (longlong)((pTVar27->PagesArray).ArrayNum + -1)) break;
        uVar31 = uVar31 + 1;
        pFVar20 = pTVar27->FirstPage + uVar31;
        local_8120.CurrentPageFirstItem = pFVar20->Items;
        if (local_8120.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          local_8120.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_8120.CurrentPageLastItem = local_8120.CurrentPageFirstItem + (pFVar20->Count - 1);
        }
        local_8120.CurrentItemIndex = uVar31 * pTVar27->PageSize;
        local_8120.CurrentPageIndex = uVar31;
        local_8120.CurrentItem = local_8120.CurrentPageFirstItem;
      } while (pFVar20 != (FEventScopeEntryPage *)0x0);
    }
    pFVar20 = local_8130;
    if (0 < (int)uVar24) {
      lVar15 = (longlong)(int)uVar24 << 5;
      do {
        local_80a8[3] = (pFVar3->InsertionState).LastTime;
        uVar23 = (int)uVar24 - 1;
        local_8148[0] = 0;
        iVar12 = (**(code **)local_8128)
                           (*(undefined8 *)&local_8128->field_0x8,local_8148,local_80a8 + 3,
                            apFStack_8080 + uVar24 * 4);
        if (iVar12 == 1) {
          return;
        }
        if ((param_1->SortOrder == ByStartTime) && (param_1->TaskIndex != 0)) {
          if ((int)uVar23 < 1) {
            return;
          }
          if ((int)uVar23 <= (int)(uint)pFVar20->InitialStackCount) {
            uVar24 = *(ulonglong *)((longlong)&pFVar20->InitialStack[-2].EnterScopeIndex + lVar15);
            uVar21 = (pFVar3->ScopeEntries).PageSize;
            dVar32 = (pFVar3->ScopeEntries).FirstPage[uVar24 / uVar21].Items[uVar24 % uVar21].Time;
            if (dVar32 < 0.0) {
              dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar34,
                                        SUB84(dVar32,0) ^ uVar33);
            }
            if (dVar32 == *(double *)((longlong)&local_8088 + lVar15 + -0x20)) {
              return;
            }
          }
        }
        lVar15 = lVar15 + -0x20;
        uVar24 = (ulonglong)uVar23;
      } while (0 < (int)uVar23);
    }
  }
  return;
}

// EnumerateEventsDownSampled @ 14d455bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TraceServices::
EnumerateAsyncAlgoritm<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *param_1,TFunctionRef<void___cdecl(int)> *param_2,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
          *param_3)

{
  ushort uVar1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar2;
  ulonglong uVar3;
  FEventStackEntry *pFVar4;
  code *pcVar5;
  FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  double *pdVar11;
  FTimingProfilerEvent *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FEventScopeEntryPage *pFVar16;
  FEventScopeEntry *pFVar17;
  longlong lVar18;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar19;
  FEventScopeEntry **ppFVar20;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar21;
  longlong lVar22;
  FEventScopeEntryPage *pFVar23;
  ulonglong uVar24;
  ulong64 uVar25;
  double dVar26;
  FEventStackEntry *pFVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_4178 [32];
  undefined1 local_4158 [8];
  undefined1 local_4150 [8];
  undefined1 local_4148 [8];
  undefined1 local_4140 [8];
  undefined1 local_4138 [8];
  FEventScopeEntryPage *local_4130;
  FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_4128;
  FEventScopeEntryPage *local_4120;
  TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
  *local_4118;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_4110;
  FTimingProfilerEvent *local_40e0;
  uint local_40d8;
  undefined4 local_40d0;
  uint local_40c8 [2];
  TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  local_40c0;
  FEventScopeEntry *local_4090;
  undefined8 local_4088;
  double local_4080;
  double local_4078;
  double local_4070;
  FEventScopeEntryPage local_4068 [256];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_4178;
  pFVar2 = param_1->DetailLevel;
  local_4130 = (FEventScopeEntryPage *)param_2;
  local_4128 = param_1;
  local_4118 = param_3;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            (&local_4110,&pFVar2->ScopeEntries,
             (pFVar2->ScopeEntries).PageSize * param_1->StartPageIndex);
  uVar25 = local_4110.CurrentPageIndex;
  pFVar23 = (local_4110.Outer)->FirstPage + local_4110.CurrentPageIndex;
  local_4120 = pFVar23;
  TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  ::GetIteratorFromItem(&pFVar2->Events,&local_40c0,pFVar23->BeginEventIndex);
  lVar10 = 0x400;
  pdVar11 = (double *)&local_4068[0].Count;
  do {
    *(undefined4 *)pdVar11 = 0xffffffff;
    pdVar11 = pdVar11 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar1 = pFVar23->InitialStackCount;
  uVar14 = (ulonglong)uVar1;
  lVar10 = 0;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar29 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar15 = (ulonglong)(int)(uint)uVar1;
  if (3 < uVar15) {
    lVar18 = 0;
    pdVar11 = &local_4068[0].EndTime;
    lVar22 = (uVar15 - 4 >> 2) + 1;
    lVar10 = lVar22 * 4;
    do {
      pFVar27 = pFVar23->InitialStack;
      uVar24 = *(ulonglong *)((longlong)&pFVar27->EnterScopeIndex + lVar18);
      uVar3 = (pFVar2->ScopeEntries).PageSize;
      pFVar17 = (FEventScopeEntry *)
                (pFVar2->ScopeEntries).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].Time;
      if ((double)pFVar17 < 0.0) {
        pFVar17 = (FEventScopeEntry *)
                  CONCAT44((uint)((ulonglong)pFVar17 >> 0x20) ^ uVar29,(uint)pFVar17 ^ uVar28);
      }
      ((FEventScopeEntryPage *)(pdVar11 + -3))->Items = pFVar17;
      uVar24 = *(ulonglong *)((longlong)&pFVar27->EventIndex + lVar18);
      uVar3 = (pFVar2->Events).PageSize;
      *(uint *)(pdVar11 + -2) =
           (pFVar2->Events).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].TimerIndex;
      pFVar27 = pFVar23->InitialStack;
      uVar24 = *(ulonglong *)((longlong)&pFVar27[1].EnterScopeIndex + lVar18);
      uVar3 = (pFVar2->ScopeEntries).PageSize;
      dVar26 = (pFVar2->ScopeEntries).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].Time;
      if (dVar26 < 0.0) {
        dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) ^ uVar29,
                                  SUB84(dVar26,0) ^ uVar28);
      }
      pdVar11[-1] = dVar26;
      uVar24 = *(ulonglong *)((longlong)&pFVar27[1].EventIndex + lVar18);
      uVar3 = (pFVar2->Events).PageSize;
      *(uint *)pdVar11 = (pFVar2->Events).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].TimerIndex
      ;
      pFVar27 = pFVar23->InitialStack;
      uVar24 = *(ulonglong *)((longlong)&pFVar27[2].EnterScopeIndex + lVar18);
      uVar3 = (pFVar2->ScopeEntries).PageSize;
      dVar26 = (pFVar2->ScopeEntries).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].Time;
      if (dVar26 < 0.0) {
        dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) ^ uVar29,
                                  SUB84(dVar26,0) ^ uVar28);
      }
      pdVar11[1] = dVar26;
      uVar24 = *(ulonglong *)((longlong)&pFVar27[2].EventIndex + lVar18);
      uVar3 = (pFVar2->Events).PageSize;
      *(uint *)(pdVar11 + 2) =
           (pFVar2->Events).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].TimerIndex;
      pFVar4 = pFVar23->InitialStack;
      uVar24 = *(ulonglong *)((longlong)&pFVar4[3].EnterScopeIndex + lVar18);
      uVar3 = (pFVar2->ScopeEntries).PageSize;
      pFVar27 = (FEventStackEntry *)
                (pFVar2->ScopeEntries).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].Time;
      if ((double)pFVar27 < 0.0) {
        pFVar27 = (FEventStackEntry *)
                  CONCAT44((uint)((ulonglong)pFVar27 >> 0x20) ^ uVar29,(uint)pFVar27 ^ uVar28);
      }
      pdVar11[3] = (double)pFVar27;
      uVar24 = *(ulonglong *)((longlong)&pFVar4[3].EventIndex + lVar18);
      lVar18 = lVar18 + 0x80;
      uVar3 = (pFVar2->Events).PageSize;
      *(uint *)(pdVar11 + 4) =
           (pFVar2->Events).FirstPage[uVar24 / uVar3].Items[uVar24 % uVar3].TimerIndex;
      pdVar11 = pdVar11 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  if (lVar10 < (longlong)uVar15) {
    ppFVar20 = &local_4068[0].Items + lVar10 * 2;
    lVar18 = lVar10 << 5;
    lVar10 = uVar15 - lVar10;
    do {
      pFVar27 = pFVar23->InitialStack;
      uVar15 = *(ulonglong *)((longlong)&pFVar27->EnterScopeIndex + lVar18);
      uVar24 = (pFVar2->ScopeEntries).PageSize;
      pFVar17 = (FEventScopeEntry *)
                (pFVar2->ScopeEntries).FirstPage[uVar15 / uVar24].Items[uVar15 % uVar24].Time;
      if ((double)pFVar17 < 0.0) {
        pFVar17 = (FEventScopeEntry *)
                  CONCAT44((uint)((ulonglong)pFVar17 >> 0x20) ^ uVar29,(uint)pFVar17 ^ uVar28);
      }
      *ppFVar20 = pFVar17;
      uVar15 = *(ulonglong *)((longlong)&pFVar27->EventIndex + lVar18);
      lVar18 = lVar18 + 0x20;
      uVar24 = (pFVar2->Events).PageSize;
      *(uint *)(ppFVar20 + 1) =
           (pFVar2->Events).FirstPage[uVar15 / uVar24].Items[uVar15 % uVar24].TimerIndex;
      ppFVar20 = ppFVar20 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  uVar13 = (uint)uVar1;
  if ((param_1->SortOrder == ByEndTime) ||
     ((param_1->TaskIndex == 0 && (param_1->SortOrder == ByStartTime)))) {
    local_40d0 = 0;
    (*(code *)local_4130->Items)(local_4130->Count);
    iVar9 = 0;
    uVar15 = uVar14;
    if (uVar13 != 0) {
      lVar10 = 0;
      pFVar16 = local_4068;
      do {
        local_4090 = pFVar16->Items;
        local_4158[0] = 1;
        iVar8 = (**(code **)local_4118)
                          (*(undefined8 *)&local_4118->field_0x8,local_4158,&local_4090,
                           &local_4068[0].Count + (longlong)iVar9 * 2);
        if (iVar8 == 1) {
          return;
        }
        iVar9 = iVar9 + 1;
        uVar15 = (ulonglong)(int)uVar13;
        lVar10 = lVar10 + 1;
        pFVar16 = (FEventScopeEntryPage *)&pFVar16->BeginTime;
      } while (lVar10 < (longlong)uVar15);
    }
  }
  else {
    local_40d8 = (uint)uVar1;
    (*(code *)local_4130->Items)(local_4130->Count);
    uVar15 = (longlong)(int)uVar13;
  }
  local_40e0 = local_40c0.CurrentItem;
  uVar24 = local_4128->StartPageIndex;
  pFVar17 = local_4110.CurrentItem;
  if (local_4110.CurrentItem != (FEventScopeEntry *)0x0) {
    local_4130 = (FEventScopeEntryPage *)(&local_4068[0].Items + uVar15 * 2);
    pFVar12 = local_40c0.CurrentItem;
    do {
      pFVar17 = local_4110.CurrentItem;
      pFVar23 = local_4120;
      if (local_4128->EndPageIndex <= uVar24) break;
      iVar9 = (int)uVar14;
      if (0.0 < (local_4110.CurrentItem)->Time || (local_4110.CurrentItem)->Time == 0.0) {
        if ((iVar9 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                               ,0x68,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_4080 = pFVar17->Time;
        local_4130 = (FEventScopeEntryPage *)&local_4130[-1].InitialStack;
        uVar14 = (ulonglong)(iVar9 - 1U);
        local_4148[0] = 0;
        iVar9 = (**(code **)local_4118)
                          (*(undefined8 *)&local_4118->field_0x8,local_4148,&local_4080,
                           &local_4068[0].Count + (longlong)(int)(iVar9 - 1U) * 2);
        if (iVar9 == 1) {
          return;
        }
      }
      else {
        if ((0x3ff < iVar9) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth < SettingsType::MaxDepth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                               ,0x5a,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_4150[0] = 1;
        uVar14 = (ulonglong)(iVar9 + 1);
        *(uint *)&local_4130->Count = local_40e0->TimerIndex;
        local_4130->Items =
             (FEventScopeEntry *)
             CONCAT44((uint)((ulonglong)pFVar17->Time >> 0x20) ^ uVar29,
                      SUB84(pFVar17->Time,0) ^ uVar28);
        local_4088 = CONCAT44((uint)((ulonglong)pFVar17->Time >> 0x20) ^ uVar29,
                              SUB84(pFVar17->Time,0) ^ uVar28);
        local_4130 = (FEventScopeEntryPage *)&local_4130->BeginTime;
        iVar9 = (**(code **)local_4118)
                          (*(undefined8 *)&local_4118->field_0x8,local_4150,&local_4088);
        if (iVar9 == 1) {
          return;
        }
        if (pFVar12 == local_40c0.CurrentPageLastItem) {
          if (local_40c0.CurrentPageIndex ==
              (longlong)(((local_40c0.Outer)->PagesArray).ArrayNum + -1)) {
            local_40c0.CurrentItemIndex = (local_40c0.Outer)->TotalItemCount;
            local_40c0.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
            pFVar12 = (FTimingProfilerEvent *)0x0;
            local_40c0.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            local_40c0.CurrentItem = (FTimingProfilerEvent *)0x0;
            local_40e0 = (FTimingProfilerEvent *)0x0;
          }
          else {
            local_40c0.CurrentPageIndex = local_40c0.CurrentPageIndex + 1;
            pTVar19 = (local_40c0.Outer)->FirstPage + local_40c0.CurrentPageIndex;
            pFVar12 = pTVar19->Items;
            if (pFVar12 == (FTimingProfilerEvent *)0x0) {
              local_40c0.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            }
            else {
              local_40c0.CurrentPageLastItem = pFVar12 + (pTVar19->Count - 1);
            }
            local_40c0.CurrentItemIndex = local_40c0.CurrentPageIndex * (local_40c0.Outer)->PageSize
            ;
            local_40e0 = pFVar12;
            local_40c0.CurrentPageFirstItem = pFVar12;
            local_40c0.CurrentItem = pFVar12;
            if (pTVar19 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) {
              local_40e0 = (FTimingProfilerEvent *)0x0;
            }
          }
        }
        else {
          local_40c0.CurrentItemIndex = local_40c0.CurrentItemIndex + 1;
          pFVar12 = pFVar12 + 1;
          local_40e0 = pFVar12;
          local_40c0.CurrentItem = pFVar12;
        }
      }
      pFVar23 = local_4120;
      if (pFVar17 == local_4110.CurrentPageLastItem) {
        if (uVar25 == (longlong)(((local_4110.Outer)->PagesArray).ArrayNum + -1)) {
          local_4110.CurrentItemIndex = (local_4110.Outer)->TotalItemCount;
          local_4110.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          local_4110.CurrentItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar24 = uVar25 + 1;
          pFVar16 = (local_4110.Outer)->FirstPage + uVar24;
          pFVar17 = pFVar16->Items;
          if (pFVar17 == (FEventScopeEntry *)0x0) {
            local_4110.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          }
          else {
            local_4110.CurrentPageLastItem = pFVar17 + (pFVar16->Count - 1);
          }
          local_4110.CurrentItemIndex = uVar24 * (local_4110.Outer)->PageSize;
          uVar25 = uVar24;
          local_4110.CurrentPageIndex = uVar24;
          local_4110.CurrentPageFirstItem = pFVar17;
          local_4110.CurrentItem = pFVar17;
          if (pFVar16 != (FEventScopeEntryPage *)0x0) goto LAB_14d4561d6;
        }
        pFVar17 = (FEventScopeEntry *)0x0;
        local_4110.CurrentPageFirstItem = local_4110.CurrentItem;
        break;
      }
      local_4110.CurrentItemIndex = local_4110.CurrentItemIndex + 1;
      pFVar17 = pFVar17 + 1;
      uVar24 = uVar25;
LAB_14d4561d6:
      uVar25 = uVar24;
      local_4110.CurrentItem = pFVar17;
    } while (pFVar17 != (FEventScopeEntry *)0x0);
  }
  if ((local_4128->TaskIndex == local_4128->NumTasks - 1) || (local_4128->SortOrder != ByEndTime)) {
    iVar9 = (int)uVar14;
    if ((local_4128->SortOrder == ByStartTime) &&
       (((local_4128->TaskIndex != 0 && (0 < iVar9)) &&
        (iVar9 <= (int)(uint)pFVar23->InitialStackCount)))) {
      uVar15 = pFVar23->InitialStack[(longlong)iVar9 + -1].EnterScopeIndex;
      uVar24 = (pFVar2->ScopeEntries).PageSize;
      dVar26 = (pFVar2->ScopeEntries).FirstPage[uVar15 / uVar24].Items[uVar15 % uVar24].Time;
      if (dVar26 < 0.0) {
        dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) ^ uVar29,
                                  SUB84(dVar26,0) ^ uVar28);
      }
      if (dVar26 == *(double *)((longlong)local_4068 + ((longlong)iVar9 + -1) * 0x10)) {
        return;
      }
    }
    if (pFVar17 != (FEventScopeEntry *)0x0) {
      lVar10 = (longlong)iVar9;
      pTVar21 = local_4110.Outer;
      do {
        local_4130 = pTVar21->FirstPage;
        if (((int)(uint)local_4130[uVar25].InitialStackCount < (int)uVar14) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth <= CurrentScopePage->InitialStackCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                               ,0x87,L""), pTVar21 = local_4110.Outer, bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (0 < lVar10) {
          lVar22 = lVar10 << 5;
          pdVar11 = &local_4078 + lVar10 * 2;
          lVar18 = lVar10;
          do {
            pFVar27 = local_4130[uVar25].InitialStack;
            lVar10 = lVar18;
            pTVar21 = local_4110.Outer;
            if (*(double *)(lVar22 + -8 + (longlong)pFVar27) <= 0.0) break;
            lVar10 = lVar18 + -1;
            uVar13 = (int)uVar14 - 1;
            uVar14 = (ulonglong)uVar13;
            lVar22 = lVar10 * 0x20;
            pdVar11 = pdVar11 + -2;
            uVar15 = (pFVar2->Events).PageSize;
            local_40c8[0] =
                 (pFVar2->Events).FirstPage[pFVar27[lVar10].EventIndex / uVar15].Items
                 [pFVar27[lVar10].EventIndex % uVar15].TimerIndex;
            local_4078 = pFVar27[lVar10].EndTime;
            local_4140[0] = 0;
            iVar9 = (**(code **)local_4118)
                              (*(undefined8 *)&local_4118->field_0x8,local_4140,&local_4078,
                               local_40c8);
            if (iVar9 == 1) {
              return;
            }
            if (((local_4128->SortOrder == ByStartTime) && (local_4128->TaskIndex != 0)) &&
               ((0 < lVar10 && ((int)uVar13 <= (int)(uint)local_4120->InitialStackCount)))) {
              uVar15 = local_4120->InitialStack[lVar18 + -2].EnterScopeIndex;
              uVar24 = (pFVar2->ScopeEntries).PageSize;
              dVar26 = (pFVar2->ScopeEntries).FirstPage[uVar15 / uVar24].Items[uVar15 % uVar24].Time
              ;
              if (dVar26 < 0.0) {
                dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) ^ uVar29,
                                          SUB84(dVar26,0) ^ uVar28);
              }
              if (dVar26 == *pdVar11) {
                return;
              }
            }
            lVar18 = lVar10;
            pTVar21 = local_4110.Outer;
          } while (0 < lVar10);
        }
        if (uVar25 == (longlong)((pTVar21->PagesArray).ArrayNum + -1)) break;
        uVar25 = uVar25 + 1;
        pFVar23 = pTVar21->FirstPage + uVar25;
        local_4110.CurrentPageFirstItem = pFVar23->Items;
        if (local_4110.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          local_4110.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_4110.CurrentPageLastItem = local_4110.CurrentPageFirstItem + (pFVar23->Count - 1);
        }
        local_4110.CurrentItemIndex = uVar25 * pTVar21->PageSize;
        local_4110.CurrentPageIndex = uVar25;
        local_4110.CurrentItem = local_4110.CurrentPageFirstItem;
      } while (pFVar23 != (FEventScopeEntryPage *)0x0);
    }
    pFVar23 = local_4120;
    pFVar6 = local_4128;
    iVar9 = (int)uVar14;
    if (0 < iVar9) {
      pdVar11 = &local_4078 + (longlong)iVar9 * 2;
      lVar10 = (longlong)iVar9 << 5;
      do {
        local_4070 = (pFVar2->InsertionState).LastTime;
        uVar13 = (int)uVar14 - 1;
        local_4138[0] = 0;
        pdVar11 = pdVar11 + -2;
        iVar9 = (**(code **)local_4118)
                          (*(undefined8 *)&local_4118->field_0x8,local_4138,&local_4070,
                           (longlong)local_4068 + uVar14 * 0x10 + -8);
        if (iVar9 == 1) {
          return;
        }
        if ((pFVar6->SortOrder == ByStartTime) && (pFVar6->TaskIndex != 0)) {
          if ((int)uVar13 < 1) {
            return;
          }
          if ((int)uVar13 <= (int)(uint)pFVar23->InitialStackCount) {
            uVar14 = *(ulonglong *)((longlong)&pFVar23->InitialStack[-2].EnterScopeIndex + lVar10);
            uVar15 = (pFVar2->ScopeEntries).PageSize;
            dVar26 = (pFVar2->ScopeEntries).FirstPage[uVar14 / uVar15].Items[uVar14 % uVar15].Time;
            if (dVar26 < 0.0) {
              dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) ^ uVar29,
                                        SUB84(dVar26,0) ^ uVar28);
            }
            if (dVar26 == *pdVar11) {
              return;
            }
          }
        }
        uVar14 = (ulonglong)uVar13;
        lVar10 = lVar10 + -0x20;
      } while (0 < (int)uVar13);
    }
  }
  return;
}

// FindBinaryFileInPath @ 14d45fa50

FString * __cdecl
TraceServices::`anonymous_namespace'::FindBinaryFileInPath
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  FPlatformFileManager *this;
  IPlatformFile *pIVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48;
  int local_40;
  TStringView<wchar_t> local_38;
  FScriptContainerElement *local_28;
  int local_20;
  
  this = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformFile(this);
  ::FString::FString((FString *)&local_38,L"debug");
  FPaths::SetExtension((FString *)&local_58,param_1,(FString *)&local_38);
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  local_38.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  local_28 = (FScriptContainerElement *)local_58.DataPtr;
  local_20 = local_58.Size + -1;
  if (local_58.Size == 0) {
    local_20 = 0;
  }
  FPaths::CombineInternal(&local_68,&local_38,2);
  pwVar9 = L"";
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar8.Data = local_68.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,FVar8.Data);
  if (cVar2 == '\0') {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    FPaths::GetCleanFilename(&local_78,param_1);
    bVar3 = ::FString::EndsWith(param_2,L".pdb",4,IgnoreCase);
    if (!bVar3) {
      if ((param_2->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,pwVar7);
      if (cVar2 != '\0') {
        ::FString::FString(__return_storage_ptr__,param_2);
        goto LAB_14d45fda5;
      }
    }
    local_38.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iVar6 = 0;
    local_38.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_38.Size = iVar6;
    }
    local_28 = local_78.Data.AllocatorInstance.Data;
    local_20 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      local_20 = iVar6;
    }
    FPaths::CombineInternal(&local_68,&local_38,2);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,FVar8.Data);
    if (cVar2 == '\0') {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar5 = FPaths::GetPath((FString *)&local_38,param_2);
      local_58.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      iVar1 = (pFVar5->Data).ArrayNum;
      local_58.Size = iVar1 + -1;
      if (iVar1 == 0) {
        local_58.Size = iVar6;
      }
      local_48 = local_78.Data.AllocatorInstance.Data;
      local_40 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        local_40 = 0;
      }
      FPaths::CombineInternal(&local_68,&local_58,2);
      if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.DataPtr);
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,FVar8.Data);
      if (cVar2 == '\0') {
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        bVar3 = FPaths::IsRelative(param_1);
        if (bVar3) {
          local_38.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          iVar1 = (param_2->Data).ArrayNum;
          local_28 = (param_1->Data).AllocatorInstance.Data;
          local_38.Size = iVar1 + -1;
          if (iVar1 == 0) {
            local_38.Size = 0;
          }
          iVar1 = (param_1->Data).ArrayNum;
          local_20 = iVar1 + -1;
          if (iVar1 == 0) {
            local_20 = iVar6;
          }
          FPaths::CombineInternal(&local_68,&local_38,2);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar8.Data = local_68.Data.AllocatorInstance.Data;
          }
          cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,FVar8.Data);
          if (cVar2 != '\0') {
            (__return_storage_ptr__->Data).AllocatorInstance.Data =
                 local_68.Data.AllocatorInstance.Data;
            (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
            (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            goto LAB_14d45fda5;
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        if ((param_1->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,pwVar9);
        if (cVar2 == '\0') {
          (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayNum = 0;
          (__return_storage_ptr__->Data).ArrayMax = 0;
        }
        else {
          ::FString::FString(__return_storage_ptr__,param_1);
        }
      }
      else {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    else {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58.DataPtr;
  }
LAB_14d45fda5:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindFileInEngineFolder @ 14d460840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
TraceServices::`anonymous_namespace'::FindFileInEngineFolder
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  int iVar1;
  char cVar2;
  FPlatformFileManager *this;
  IPlatformFile *pIVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_e8 [32];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int local_80;
  wchar_t *local_78;
  undefined4 local_70;
  FScriptContainerElement *local_68;
  int local_60;
  FScriptContainerElement *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(this);
  FPaths::GetCleanFilename(&local_b8,param_1);
  local_98.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_80 = 6;
  local_78 = L"Binaries";
  local_70 = 8;
  iVar4 = 0;
  local_98.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_98.Size = iVar4;
  }
  local_88 = (FScriptContainerElement *)0x150653430;
  local_68 = (param_3->Data).AllocatorInstance.Data;
  iVar1 = (param_3->Data).ArrayNum;
  local_60 = iVar1 + -1;
  if (iVar1 == 0) {
    local_60 = iVar4;
  }
  local_58 = local_b8.Data.AllocatorInstance.Data;
  local_50 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    local_50 = iVar4;
  }
  FPaths::CombineInternal(&local_c8,&local_98,5);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar5.Data = local_c8.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,FVar5.Data);
  if (cVar2 == '\0') {
    local_98.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    local_78 = L"Binaries";
    local_70 = 8;
    local_98.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_98.Size = iVar4;
    }
    local_88 = (param_4->Data).AllocatorInstance.Data;
    iVar1 = (param_4->Data).ArrayNum;
    local_68 = (param_3->Data).AllocatorInstance.Data;
    local_80 = iVar1 + -1;
    if (iVar1 == 0) {
      local_80 = 0;
    }
    iVar1 = (param_3->Data).ArrayNum;
    local_60 = iVar1 + -1;
    if (iVar1 == 0) {
      local_60 = iVar4;
    }
    local_58 = local_b8.Data.AllocatorInstance.Data;
    local_50 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      local_50 = iVar4;
    }
    FPaths::CombineInternal(&local_a8,&local_98,5);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar5.Data = local_a8.Data.AllocatorInstance.Data;
    }
    local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    local_c8.Data.ArrayNum = local_a8.Data.ArrayNum;
    local_c8.Data.ArrayMax = local_a8.Data.ArrayMax;
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,FVar5.Data);
    if (cVar2 == '\0') {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    else {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_c8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_c8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindSymbolFileInPath @ 14d460eb0

FString * __cdecl
TraceServices::`anonymous_namespace'::FindSymbolFileInPath
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  char cVar2;
  int iVar3;
  FPlatformFileManager *this;
  IPlatformFile *pIVar4;
  FString *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  
  this = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformFile(this);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,pwVar7);
  if (cVar2 == '\0') {
    if (&local_88 != param_2) {
      iVar3 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_88.Data.ArrayNum = iVar3;
      if ((iVar3 != 0) || (local_88.Data.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,local_88.Data.ArrayMax,(ForAnyElementType *)&local_88,iVar3,
                   &local_88.Data.ArrayMax);
        if (iVar3 != 0) {
          memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
        }
      }
    }
  }
  else {
    pFVar5 = FPaths::GetCleanFilename((FString *)&local_48,param_1);
    pFVar6 = FPaths::GetCleanFilename(&local_58,param_2);
    iVar3 = (pFVar5->Data).ArrayNum;
    iVar1 = (pFVar6->Data).ArrayNum;
    if (iVar1 == iVar3) {
      if (iVar1 < 2) {
        bVar9 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
        bVar9 = iVar3 == 0;
      }
    }
    else {
      bVar9 = iVar3 + iVar1 == 1;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (bVar9) {
      ::FString::FString(__return_storage_ptr__,param_2);
      goto LAB_14d46118a;
    }
    pFVar5 = FPaths::GetPath((FString *)&local_48,param_2);
    if (&local_88 != pFVar5) {
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_88.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  FPaths::GetCleanFilename(&local_68,param_1);
  local_48.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  local_48.Size = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    local_48.Size = 0;
  }
  local_38 = local_68.Data.AllocatorInstance.Data;
  iVar3 = 0;
  local_30 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_30 = iVar3;
  }
  FPaths::CombineInternal(&local_78,&local_48,2);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar8.Data = local_78.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,FVar8.Data);
  if (cVar2 == '\0') {
    local_48.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
    local_38 = (param_1->Data).AllocatorInstance.Data;
    local_48.Size = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      local_48.Size = iVar3;
    }
    iVar1 = (param_1->Data).ArrayNum;
    local_30 = iVar1 + -1;
    if (iVar1 == 0) {
      local_30 = iVar3;
    }
    FPaths::CombineInternal(&local_58,&local_48,2);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_78.Data.ArrayMax = local_58.Data.ArrayMax;
    local_78.Data.ArrayNum = local_58.Data.ArrayNum;
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,FVar8.Data);
    if (cVar2 == '\0') {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    else {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14d46118a:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindWindowsSymbolFile @ 14d4611d0

FString * __cdecl
TraceServices::`anonymous_namespace'::FindWindowsSymbolFile
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FPlatformFileManager *this;
  IPlatformFile *pIVar5;
  FString *this_00;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FScriptContainerElement *local_70;
  int local_68;
  FString local_60;
  TStringView<wchar_t> local_50;
  FScriptContainerElement *local_40;
  int local_38;
  
  this = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(this);
  bVar2 = ::FString::StartsWith(param_2,L"srv*",4,IgnoreCase);
  if ((bVar2) || (bVar2 = ::FString::StartsWith(param_2,L"cache*",6,IgnoreCase), bVar2)) {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    this_00 = ::FString::RightChop(param_2,&local_60,4);
    ::FString::ParseIntoArray(this_00,&local_80,L"*",true);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    iVar4 = local_80.ArrayNum;
    pFVar8 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x10;
    FVar7.Data = local_80.AllocatorInstance.Data;
    while( true ) {
      if (local_80.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar7.Data == pFVar8) {
        DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
        local_60.Data.AllocatorInstance.Data = local_80.AllocatorInstance.Data;
        goto LAB_14d46142e;
      }
      local_50.DataPtr = *(wchar_t **)FVar7.Data;
      local_40 = (param_1->Data).AllocatorInstance.Data;
      local_50.Size = *(int *)(FVar7.Data + 8) + -1;
      if (*(int *)(FVar7.Data + 8) == 0) {
        local_50.Size = 0;
      }
      iVar1 = (param_1->Data).ArrayNum;
      local_38 = iVar1 + -1;
      if (iVar1 == 0) {
        local_38 = 0;
      }
      FPaths::CombineInternal(&local_60,&local_50,2);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_60.Data.ArrayNum != 0) {
        FVar6.Data = local_60.Data.AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,FVar6.Data);
      if (cVar3 != '\0') break;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      FVar7.Data = FVar7.Data + 0x10;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_60.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_60.Data.ArrayMax;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  else {
    iVar4 = ::FString::Find(param_2,L"*",1,IgnoreCase,FromStart,-1);
    if (iVar4 != -1) {
      local_80.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
      iVar4 = (param_2->Data).ArrayNum;
      local_70 = (param_1->Data).AllocatorInstance.Data;
      local_80.ArrayNum = iVar4 + -1;
      if (iVar4 == 0) {
        local_80.ArrayNum = 0;
      }
      iVar4 = (param_1->Data).ArrayNum;
      local_68 = iVar4 + -1;
      if (iVar4 == 0) {
        local_68 = 0;
      }
      FPaths::CombineInternal(&local_60,(TStringView<wchar_t> *)&local_80,2);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_60.Data.ArrayNum != 0) {
        FVar7.Data = local_60.Data.AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,FVar7.Data);
      if (cVar3 != '\0') {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_60.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_60.Data.ArrayMax;
        return __return_storage_ptr__;
      }
LAB_14d46142e:
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// FormatString @ 14d461470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
TraceServices::FormatString(wchar_t *param_1,uint param_2,wchar_t *param_3,uchar *param_4)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_48 [48];
  ulonglong local_18;
  wchar_t awStack_10 [4];
  
  puVar2 = auStack_48;
  local_18 = __security_cookie.value ^ (ulonglong)&local_18;
  if (param_2 == 0) {
    pwVar3 = (wchar_t *)0x0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 2 + 0x1e;
    if (uVar1 <= (ulonglong)param_2 * 2 + 0xf) {
      uVar1 = 0xffffffffffffff0;
    }
    puVar2 = auStack_48 + -(uVar1 & 0xfffffffffffffff0);
    pwVar3 = (wchar_t *)((longlong)awStack_10 + -(uVar1 & 0xfffffffffffffff0));
  }
  *(uchar **)(puVar2 + 0x28) = param_4;
  *(wchar_t **)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + -8) = 0x14d4614f0;
  FFormatArgsHelper::Format
            (param_1,(ulonglong)(param_2 - 1),pwVar3,(ulonglong)(param_2 - 1),
             *(wchar_t **)(puVar2 + 0x20),*(uchar **)(puVar2 + 0x28));
  *(undefined8 *)(puVar2 + -8) = 0x14d4614fc;
  return;
}

// GetBookmarkProviderName @ 14d461c70

FName __cdecl TraceServices::GetBookmarkProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"BookmarkProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetCallstacksProviderName @ 14d461ea0

FName __cdecl TraceServices::GetCallstacksProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CallstacksProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetChannelProviderName @ 14d462180

FName __cdecl TraceServices::GetChannelProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ChannelProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetContextSwitchesProviderName @ 14d464380

FName __cdecl TraceServices::GetContextSwitchesProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ContextSwitchesProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetCounterProviderName @ 14d464530

FName __cdecl TraceServices::GetCounterProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CounterProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetDefinitionProviderName @ 14d464b60

FName __cdecl TraceServices::GetDefinitionProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"DefinitionProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetDiagnosticsProviderName @ 14d4650f0

FName __cdecl TraceServices::GetDiagnosticsProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"DiagnosticsProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetFileActivityTypeString @ 14d4675a0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

wchar_t * __cdecl TraceServices::GetFileActivityTypeString(EFileActivityType param_1)

{
  if (param_1 == FileActivityType_Open) {
    return L"Open";
  }
  if (param_1 == FileActivityType_Close) {
    return L"Close";
  }
  if (param_1 == FileActivityType_Read) {
    return L"Read";
  }
  if (param_1 != FileActivityType_Write) {
    return L"Invalid";
  }
  return L"Write";
}

// GetFrameProviderName @ 14d467d60

FName __cdecl TraceServices::GetFrameProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"FrameProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetLoadTimeProfilerObjectEventTypeString @ 14d468f40

wchar_t * __cdecl
TraceServices::GetLoadTimeProfilerObjectEventTypeString(ELoadTimeProfilerObjectEventType param_1)

{
  if (param_1 == LoadTimeProfilerObjectEventType_Create) {
    return L"Create";
  }
  if (param_1 == LoadTimeProfilerObjectEventType_Serialize) {
    return L"Serialize";
  }
  if (param_1 == LoadTimeProfilerObjectEventType_PostLoad) {
    return L"PostLoad";
  }
  if (param_1 != LoadTimeProfilerObjectEventType_None) {
    return L"[invalid]";
  }
  return L"None";
}

// GetLogProviderName @ 14d468f90

FName __cdecl TraceServices::GetLogProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"LogProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetMemoryProviderName @ 14d469030

FName __cdecl TraceServices::GetMemoryProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"MemoryProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetMetadataProviderName @ 14d469610

FName __cdecl TraceServices::GetMetadataProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"MetadataProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetModuleProviderName @ 14d469bf0

FName __cdecl TraceServices::GetModuleProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ModuleProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetNetProfilerProviderName @ 14d469e10

FName __cdecl TraceServices::GetNetProfilerProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"NetProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetRegionProviderName @ 14d46c2f0

FName __cdecl TraceServices::GetRegionProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"RegionProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetScreenshotProviderName @ 14d46c900

FName __cdecl TraceServices::GetScreenshotProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ScreenshotProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetStackSamplesProviderName @ 14d46cbe0

FName __cdecl TraceServices::GetStackSamplesProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"StackSamplesProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetThreadProviderName @ 14d46e370

FName __cdecl TraceServices::GetThreadProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ThreadProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetTypeHash @ 14d46e720

uint __cdecl GetTypeHash(TStringView<wchar_t> *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  
  pwVar7 = param_1->DataPtr;
  uVar4 = param_1->Size;
  uVar8 = (ulonglong)uVar4;
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xc6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar5 = 0;
  if (0 < (int)uVar4) {
    do {
      wVar1 = *pwVar7;
      pwVar7 = pwVar7 + 1;
      uVar6 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
      uVar4 = uVar5 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar5 ^ (byte)uVar6)];
      uVar5 = uVar4 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar6 >> 8 ^ uVar4) & 0xff];
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return uVar5;
}

// LexToString @ 14d475510

wchar_t * __cdecl TraceServices::LexToString(ENetProfilerChannelCloseReason param_1)

{
  if (param_1 == Destroyed) {
    return L"Destroyed";
  }
  if (param_1 == Dormancy) {
    return L"Dormancy";
  }
  if (param_1 == LevelUnloaded) {
    return L"LevelUnloaded";
  }
  if (param_1 != Relevancy) {
    if (param_1 != TearOff) {
      return L"Unknown";
    }
    return L"TearOff";
  }
  return L"Relevancy";
}

// LexToString @ 14d475570

wchar_t * __cdecl TraceServices::LexToString(ENetProfilerConnectionState param_1)

{
  if (param_1 != USOCK_Invalid) {
    if (param_1 == USOCK_Closed) {
      return L"Closed";
    }
    if (param_1 == USOCK_Pending) {
      return L"Pending";
    }
    if (param_1 == USOCK_Open) {
      return L"Open";
    }
  }
  return L"Invalid";
}

// LoadBinary @ 14d4757d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TraceServices::`anonymous_namespace'::LoadBinary
          (wchar_t *param_1,SYMS_DefArena *param_2,SYMS_ParseBundle *param_3,
          TArray<TraceServices::_anonymous_namespace_::FAutoMappedFile,TSizedDefaultAllocator<32>_>
          *param_4,FString *param_5,FString *param_6,FString *param_7)

{
  uchar *puVar1;
  ulong64 uVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  SYMS_String8 *pSVar6;
  undefined8 uVar7;
  SYMS_BinAccel *pSVar8;
  FStaticBasicLogRecord *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *this;
  FString local_98;
  FString local_88;
  SYMS_String8 local_78;
  SYMS_String8 local_68;
  SYMS_String8 local_58;
  TStringView<wchar_t> local_48;
  uchar *local_38;
  int local_30;
  
  ::FString::FString(&local_88,param_1);
  bVar3 = ::FString::EndsWith(&local_88,L"eboot.bin",9,IgnoreCase);
  if (((bVar3) && (1 < (param_6->Data).ArrayNum)) && (1 < (param_7->Data).ArrayNum)) {
    ::FString::PrintfImpl((FString *)&local_68,L"%s.self");
    pFVar5 = FPaths::GetPath((FString *)&local_58,&local_88);
    local_48.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar4 = (pFVar5->Data).ArrayNum;
    local_48.Size = iVar4 + -1;
    if (iVar4 == 0) {
      local_48.Size = 0;
    }
    local_38 = local_68.str;
    local_30 = (int)local_68.size + -1;
    if ((int)local_68.size == 0) {
      local_30 = 0;
    }
    FPaths::CombineInternal((FString *)&local_78,&local_48,2);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_78.str;
    local_88.Data.ArrayNum = (int)local_78.size;
    local_88.Data.ArrayMax = local_78.size._4_4_;
    local_78.size = 0;
    local_78.str = (uchar *)0x0;
    if ((void *)CONCAT44(local_58.str._4_4_,local_58.str._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_58.str._4_4_,local_58.str._0_4_));
    }
    if (local_68.str != (uchar *)0x0) {
      FMemory::Free(local_68.str);
    }
  }
  FindBinaryFileInPath(&local_98,&local_88,param_5,param_6);
  if (local_98.Data.ArrayNum < 2) {
    if (1 < (param_6->Data).ArrayNum) {
      pFVar5 = FindFileInEngineFolder((FString *)&local_58,&local_88,param_5,param_6,param_7);
      if (&local_98 != pFVar5) {
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if ((void *)CONCAT44(local_58.str._4_4_,local_58.str._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_58.str._4_4_,local_58.str._0_4_));
      }
    }
    if (1 < local_98.Data.ArrayNum) goto LAB_14d4759b0;
    if (5 < (byte)LogSymslib._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`TraceServices::LoadBinary'::`12'::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
  }
  else {
LAB_14d4759b0:
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar4 + 1;
    this = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
    DefaultConstructItems<TraceServices::_anonymous_namespace_::FAutoMappedFile,int>(this,1);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar10.Data = local_98.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutoMappedFile::Load(this,(wchar_t *)FVar10.Data);
    if (bVar3) {
      pSVar6 = FAutoMappedFile::GetData(this,&local_68);
      local_58.str._0_4_ = *(undefined4 *)&pSVar6->str;
      local_58.str._4_4_ = *(undefined4 *)((longlong)&pSVar6->str + 4);
      local_58.size._0_4_ = (undefined4)pSVar6->size;
      local_58.size._4_4_ = *(undefined4 *)((longlong)&pSVar6->size + 4);
      uVar7 = syms_file_accel_from_data(param_2,&local_58);
      pSVar6 = FAutoMappedFile::GetData(this,&local_78);
      local_58.str._0_4_ = *(undefined4 *)&pSVar6->str;
      local_58.str._4_4_ = *(undefined4 *)((longlong)&pSVar6->str + 4);
      local_58.size._0_4_ = (undefined4)pSVar6->size;
      local_58.size._4_4_ = *(undefined4 *)((longlong)&pSVar6->size + 4);
      pSVar8 = (SYMS_BinAccel *)syms_bin_accel_from_file(param_2,&local_58,uVar7);
      if ((pSVar8 != (SYMS_BinAccel *)0x0) && (pSVar8->format != SYMS_FileFormat_Null)) {
        iVar4 = local_98.Data.ArrayNum + -1;
        if (local_98.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        ::FString::AssignRange
                  ((FString *)this,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar4);
        pSVar6 = FAutoMappedFile::GetData(this,&local_58);
        puVar1 = pSVar6->str;
        uVar2 = pSVar6->size;
        param_3->bin = pSVar8;
        bVar3 = true;
        (param_3->bin_data).str = puVar1;
        (param_3->bin_data).size = uVar2;
        goto LAB_14d475acd;
      }
      if (2 < (byte)LogSymslib._0_1_) {
        pFVar9 = &`TraceServices::LoadBinary'::`54'::LOG_Static;
        goto LAB_14d475ab3;
      }
    }
    else if (2 < (byte)LogSymslib._0_1_) {
      pFVar9 = &`TraceServices::LoadBinary'::`33'::LOG_Static;
LAB_14d475ab3:
      UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogSymslib);
    }
  }
  bVar3 = false;
LAB_14d475acd:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// LoadDebug @ 14d475b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TraceServices::`anonymous_namespace'::LoadDebug
          (SYMS_DefArena *param_1,SYMS_ParseBundle *param_2,
          TArray<TraceServices::_anonymous_namespace_::FAutoMappedFile,TSizedDefaultAllocator<32>_>
          *param_3,FString *param_4)

{
  SYMS_BinAccel *pSVar1;
  longlong lVar2;
  char *_Str;
  code *pcVar3;
  uchar *puVar4;
  ulong64 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  SYMS_String8 *pSVar9;
  SYMS_DbgAccel *pSVar10;
  longlong *plVar11;
  size_t sVar12;
  FString *pFVar13;
  FAutoMappedFile *this;
  undefined8 uVar14;
  FStaticBasicLogRecord *pFVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_358 [32];
  FString local_2d8;
  FString local_2c8;
  TArray<TraceServices::_anonymous_namespace_::FAutoMappedFile,TSizedDefaultAllocator<32>_>
  *local_2b8;
  SYMS_ParseBundle *local_2b0;
  SYMS_DefArena *local_2a8;
  FString *local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FString local_248;
  FString local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  SYMS_String8 local_208;
  SYMS_String8 local_1f8;
  SYMS_String8 local_1e8;
  SYMS_String8 local_1d8;
  SYMS_String8 local_1c8 [2];
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2b8 = param_3;
  local_2b0 = param_2;
  local_2a8 = param_1;
  local_2a0 = param_4;
  iVar8 = syms_bin_is_dbg(param_2->bin);
  pSVar1 = param_2->bin;
  if (iVar8 != 0) {
    if ((param_3->ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pSVar9 = FAutoMappedFile::GetData((param_3->AllocatorInstance).Data,&local_208);
    local_268 = *(undefined4 *)&pSVar9->str;
    uStack_264 = *(undefined4 *)((longlong)&pSVar9->str + 4);
    uStack_260 = (undefined4)pSVar9->size;
    uStack_25c = *(undefined4 *)((longlong)&pSVar9->size + 4);
    pSVar10 = (SYMS_DbgAccel *)syms_dbg_accel_from_bin(param_1,&local_268,pSVar1);
    puVar4 = (param_2->bin_data).str;
    uVar5 = (param_2->bin_data).size;
    param_2->dbg = pSVar10;
    (param_2->dbg_data).str = puVar4;
    (param_2->dbg_data).size = uVar5;
    if (5 < (byte)LogSymslib._0_1_) {
      if ((param_3->ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      UE::Logging::Private::BasicLog<6>
                (&`TraceServices::LoadDebug'::`6'::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
    return true;
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pSVar9 = FAutoMappedFile::GetData((param_3->AllocatorInstance).Data,&local_1f8);
  local_258 = *(undefined4 *)&pSVar9->str;
  uStack_254 = *(undefined4 *)((longlong)&pSVar9->str + 4);
  uStack_250 = (undefined4)pSVar9->size;
  uStack_24c = *(undefined4 *)((longlong)&pSVar9->size + 4);
  plVar11 = (longlong *)syms_ext_file_list_from_bin(local_198,param_1,&local_258,pSVar1);
  local_1a8 = plVar11[2];
  lVar2 = *plVar11;
  if (lVar2 == 0) {
    if (2 < (byte)LogSymslib._0_1_) {
      if ((param_3->ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      UE::Logging::Private::BasicLog<3>
                (&`TraceServices::LoadDebug'::`27'::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
    return false;
  }
  local_1a8 = *(undefined8 *)(lVar2 + 0x18);
  uStack_1a0 = *(undefined8 *)(lVar2 + 0x20);
  _Str = *(char **)(lVar2 + 8);
  local_178._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_178.StringLength = 0;
    local_178.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar12 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,_Str,(int)sVar12,Yes);
  }
  ::FString::FString(&local_2c8,local_178.Ptr);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FPaths::GetPath(&local_278,(FString *)(param_3->AllocatorInstance).Data);
  FindSymbolFileInPath(&local_2d8,&local_2c8,&local_278);
  if (local_2d8.Data.ArrayNum < 2) {
    pFVar13 = FindSymbolFileInPath(&local_248,&local_2c8,param_4);
    if (&local_2d8 != pFVar13) {
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      local_2d8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_2d8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  if (local_2d8.Data.ArrayNum < 2) {
    if ((param_2->bin->format == SYMS_FileFormat_PE) &&
       (iVar8 = ::FString::Find(param_4,L"*",1,IgnoreCase,FromStart,-1), iVar8 != -1)) {
      FPaths::GetCleanFilename(&local_298,&local_2c8);
      ::FString::PrintfImpl(&local_288,L"%s/%08X%04X%04X%02X%02X%02X%02X%02X%02X%02X%02X%X/%s");
      pFVar13 = FindWindowsSymbolFile(&local_238,&local_288,local_2a0);
      if (&local_2d8 != pFVar13) {
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        local_2d8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
        local_2d8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      param_1 = local_2a8;
      param_3 = local_2b8;
      param_2 = local_2b0;
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
        param_1 = local_2a8;
        param_3 = local_2b8;
        param_2 = local_2b0;
      }
    }
    if (1 < local_2d8.Data.ArrayNum) goto LAB_14d47600e;
    if (5 < (byte)LogSymslib._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`TraceServices::LoadDebug'::`57'::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
  }
  else {
LAB_14d47600e:
    this = TArray<TraceServices::`anonymous_namespace'::FAutoMappedFile,TSizedDefaultAllocator<32>_>
           ::AddDefaulted_GetRef(param_3);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_2d8.Data.ArrayNum != 0) {
      FVar16.Data = local_2d8.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutoMappedFile::Load(this,(wchar_t *)FVar16.Data);
    if (bVar6) {
      pSVar9 = FAutoMappedFile::GetData(this,&local_1e8);
      local_228 = *(undefined4 *)&pSVar9->str;
      uStack_224 = *(undefined4 *)((longlong)&pSVar9->str + 4);
      uStack_220 = (undefined4)pSVar9->size;
      uStack_21c = *(undefined4 *)((longlong)&pSVar9->size + 4);
      uVar14 = syms_file_accel_from_data(param_1,&local_228);
      pSVar9 = FAutoMappedFile::GetData(this,&local_1d8);
      local_218 = *(undefined4 *)&pSVar9->str;
      uStack_214 = *(undefined4 *)((longlong)&pSVar9->str + 4);
      uStack_210 = (undefined4)pSVar9->size;
      uStack_20c = *(undefined4 *)((longlong)&pSVar9->size + 4);
      pSVar10 = (SYMS_DbgAccel *)syms_dbg_accel_from_file(param_1,&local_218,uVar14);
      if ((pSVar10 != (SYMS_DbgAccel *)0x0) && (pSVar10->format != SYMS_FileFormat_Null)) {
        iVar8 = local_2d8.Data.ArrayNum + -1;
        if (local_2d8.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        ::FString::AssignRange
                  (&this->FilePath,(wchar_t *)local_2d8.Data.AllocatorInstance.Data,iVar8);
        param_2->dbg = pSVar10;
        pSVar9 = FAutoMappedFile::GetData(this,local_1c8);
        bVar6 = true;
        uVar5 = pSVar9->size;
        (param_2->dbg_data).str = pSVar9->str;
        (param_2->dbg_data).size = uVar5;
        goto LAB_14d476100;
      }
      if (2 < (byte)LogSymslib._0_1_) {
        pFVar15 = &`TraceServices::LoadDebug'::`99'::LOG_Static;
        goto LAB_14d4760e6;
      }
    }
    else if (2 < (byte)LogSymslib._0_1_) {
      pFVar15 = &`TraceServices::LoadDebug'::`78'::LOG_Static;
LAB_14d4760e6:
      UE::Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogSymslib);
    }
  }
  bVar6 = false;
LAB_14d476100:
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// MatchImageId @ 14d4791c0

bool __cdecl
TraceServices::`anonymous_namespace'::MatchImageId
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,SYMS_ParseBundle *param_2)

{
  FScriptContainerElement *pFVar1;
  SYMS_BinAccel *pSVar2;
  ulong64 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uchar *puVar14;
  SYMS_String8 *pSVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uchar *local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uchar *local_c8;
  ulong64 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  if (param_2->dbg->format == SYMS_FileFormat_PDB) {
    if ((param_1->ArrayNum != 0x14) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ImageId.Num() == 20",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SymslibResolver.cpp"
                           ,0x18e,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    local_f8 = (param_2->dbg_data).str;
    uStack_f0 = (param_2->dbg_data).size;
    pFVar1 = (param_1->AllocatorInstance).Data;
    puVar11 = (undefined8 *)syms_ext_match_key_from_dbg(local_98,&local_f8,param_2->dbg);
    if ((((int)((ulonglong)puVar11[1] >> 0x20) != *(int *)(pFVar1 + 0xc) ||
         (int)((ulonglong)*puVar11 >> 0x20) != *(int *)(pFVar1 + 4)) ||
        (int)puVar11[1] != *(int *)(pFVar1 + 8)) || (int)*puVar11 != *(int *)pFVar1) {
      return false;
    }
  }
  else {
    pSVar2 = param_2->bin;
    if (pSVar2->format == SYMS_FileFormat_ELF) {
      uVar5 = (pSVar2->elf_accel).sections.count;
      uVar17 = 0;
      puVar14 = (param_2->bin_data).str;
      if (uVar5 != 0) {
        pSVar15 = &((pSVar2->elf_accel).sections.v)->name;
        do {
          uVar3 = ((SYMS_U64Range *)(pSVar15 + -1))->min;
          uVar16 = ((SYMS_U64Range *)(pSVar15 + -1))->max - uVar3;
          puVar11 = (undefined8 *)syms_str8(local_88,".note.gnu.build-id",0x12);
          local_d8 = *(undefined4 *)&pSVar15->str;
          uStack_d4 = *(undefined4 *)((longlong)&pSVar15->str + 4);
          uStack_d0 = (undefined4)pSVar15->size;
          uStack_cc = *(undefined4 *)((longlong)&pSVar15->size + 4);
          local_e8 = *puVar11;
          uStack_e0 = puVar11[1];
          iVar10 = syms_string_match(&local_d8,&local_e8,0);
          if (iVar10 != 0) {
            if (uVar16 < 0xd) {
              return true;
            }
            if (*(int *)(puVar14 + uVar3) != 4) {
              return true;
            }
            if (*(uint *)(puVar14 + uVar3 + 4) < 0x10) {
              return true;
            }
            if (*(int *)(puVar14 + uVar3 + 8) != 3) {
              return true;
            }
            puVar11 = (undefined8 *)syms_str8(local_68,puVar14 + uVar3 + 0xc,4);
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            puVar11 = (undefined8 *)syms_str8(local_58,"GNU",4);
            local_b8 = *puVar11;
            uStack_b0 = puVar11[1];
            local_a8 = uVar6;
            uStack_a0 = uVar7;
            iVar10 = syms_string_match(&local_a8,&local_b8,0);
            if (iVar10 == 0) {
              return true;
            }
            if (uVar16 < 0x20) {
              return true;
            }
            puVar14 = puVar14 + 0x10;
            puVar13 = local_48;
LAB_14d479400:
            puVar11 = (undefined8 *)syms_str8(puVar13,puVar14 + uVar3,0x10);
            if (puVar11[1] != 0x10) {
              return true;
            }
            if (param_1->ArrayNum != 0x10) {
              return true;
            }
            pFVar1 = (param_1->AllocatorInstance).Data;
            lVar12 = *(longlong *)pFVar1 - *(longlong *)*puVar11;
            if (lVar12 == 0) {
              lVar12 = *(longlong *)(pFVar1 + 8) - ((longlong *)*puVar11)[1];
            }
            return lVar12 == 0;
          }
          local_c8 = pSVar15->str;
          uStack_c0 = pSVar15->size;
          lVar12 = syms_hash_djb2(&local_c8);
          if (lVar12 == -0x5547b0ab20598212) {
            if (uVar16 < 0x10) {
              return true;
            }
            puVar13 = local_78;
            goto LAB_14d479400;
          }
          uVar17 = uVar17 + 1;
          pSVar15 = pSVar15 + 7;
        } while (uVar17 < uVar5);
      }
    }
  }
  return true;
}

// NextToken @ 14d47a510

FString * __cdecl
TraceServices::NextToken(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,int *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Empty(__return_storage_ptr__,0x20);
  iVar4 = param_1->Size;
  iVar6 = *param_2;
  if (iVar6 < iVar4) {
    do {
      if (((iVar6 < 0) || (iVar4 <= iVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      wVar1 = param_1->DataPtr[iVar6];
      if (((wVar1 != L' ') && (wVar1 != L'\n')) && (wVar1 != L'\r')) break;
      *param_2 = *param_2 + 1;
      iVar6 = *param_2;
      iVar4 = param_1->Size;
    } while (iVar6 < iVar4);
  }
  iVar6 = *param_2;
  iVar4 = param_1->Size;
  if (iVar6 < iVar4) {
    do {
      if (((iVar6 < 0) || (iVar4 <= iVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      wVar1 = param_1->DataPtr[iVar6];
      if (wVar1 == L' ') {
        return __return_storage_ptr__;
      }
      if (wVar1 == L'\n') {
        return __return_storage_ptr__;
      }
      if (wVar1 == L'\r') {
        return __return_storage_ptr__;
      }
      iVar6 = *param_2;
      if (((iVar6 < 0) || (param_1->Size <= iVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      ::FString::AppendChar(__return_storage_ptr__,param_1->DataPtr[iVar6]);
      *param_2 = *param_2 + 1;
      iVar6 = *param_2;
      iVar4 = param_1->Size;
    } while (iVar6 < iVar4);
  }
  return __return_storage_ptr__;
}

// ReadBookmarkProvider @ 14d481250

IBookmarkProvider * __cdecl TraceServices::ReadBookmarkProvider(IAnalysisSession *param_1)

{
  IBookmarkProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"BookmarkProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IBookmarkProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadCallstacksProvider @ 14d4812e0

ICallstacksProvider * __cdecl TraceServices::ReadCallstacksProvider(IAnalysisSession *param_1)

{
  ICallstacksProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CallstacksProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ICallstacksProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadChannelProvider @ 14d481370

IChannelProvider * __cdecl TraceServices::ReadChannelProvider(IAnalysisSession *param_1)

{
  IChannelProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ChannelProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IChannelProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadContextSwitchesProvider @ 14d481600

IContextSwitchesProvider * __cdecl
TraceServices::ReadContextSwitchesProvider(IAnalysisSession *param_1)

{
  IContextSwitchesProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ContextSwitchesProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IContextSwitchesProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadCounterProvider @ 14d481730

ICounterProvider * __cdecl TraceServices::ReadCounterProvider(IAnalysisSession *param_1)

{
  ICounterProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"CounterProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ICounterProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadDefinitionProvider @ 14d4817c0

IDefinitionProvider * __cdecl TraceServices::ReadDefinitionProvider(IAnalysisSession *param_1)

{
  IDefinitionProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"DefinitionProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IDefinitionProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadDiagnosticsProvider @ 14d481850

IDiagnosticsProvider * __cdecl TraceServices::ReadDiagnosticsProvider(IAnalysisSession *param_1)

{
  IDiagnosticsProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"DiagnosticsProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IDiagnosticsProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadFrameProvider @ 14d481a10

IFrameProvider * __cdecl TraceServices::ReadFrameProvider(IAnalysisSession *param_1)

{
  IFrameProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"FrameProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IFrameProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadLogProvider @ 14d481b40

ILogProvider * __cdecl TraceServices::ReadLogProvider(IAnalysisSession *param_1)

{
  ILogProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"LogProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (ILogProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadMemoryProvider @ 14d481bd0

IMemoryProvider * __cdecl TraceServices::ReadMemoryProvider(IAnalysisSession *param_1)

{
  IMemoryProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"MemoryProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IMemoryProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadMetadataProvider @ 14d481d30

IMetadataProvider * __cdecl TraceServices::ReadMetadataProvider(IAnalysisSession *param_1)

{
  IMetadataProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"MetadataProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IMetadataProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadModuleProvider @ 14d481dc0

IModuleProvider * __cdecl TraceServices::ReadModuleProvider(IAnalysisSession *param_1)

{
  IModuleProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ModuleProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IModuleProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadNetProfilerProvider @ 14d481f80

INetProfilerProvider * __cdecl TraceServices::ReadNetProfilerProvider(IAnalysisSession *param_1)

{
  INetProfilerProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"NetProfilerProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (INetProfilerProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadRegionProvider @ 14d4823c0

IRegionProvider * __cdecl TraceServices::ReadRegionProvider(IAnalysisSession *param_1)

{
  IRegionProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"RegionProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IRegionProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadScreenshotProvider @ 14d482450

IScreenshotProvider * __cdecl TraceServices::ReadScreenshotProvider(IAnalysisSession *param_1)

{
  IScreenshotProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ScreenshotProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IScreenshotProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadStackSamplesProvider @ 14d4824e0

IStackSamplesProvider * __cdecl TraceServices::ReadStackSamplesProvider(IAnalysisSession *param_1)

{
  IStackSamplesProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"StackSamplesProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IStackSamplesProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// ReadThreadProvider @ 14d482570

IThreadProvider * __cdecl TraceServices::ReadThreadProvider(IAnalysisSession *param_1)

{
  IThreadProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"ThreadProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IThreadProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// `dynamic_atexit_destructor_for_'Cs'' @ 150456200

void __cdecl
`TraceServices::UndecorateAndCopySymbolName'::__l5::_dynamic_atexit_destructor_for__Cs__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150456207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`void___cdecl_TraceServices::UndecorateAndCopySymbolName(char*___ptr64,char_const*___ptr64,unsigned_int)'
              ::__l5::Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogDbgHelp'' @ 150456220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDbgHelp__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDbgHelp);
  return;
}

// `dynamic_atexit_destructor_for_'LogPsymResolver'' @ 150456240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPsymResolver__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPsymResolver);
  return;
}

// `dynamic_atexit_destructor_for_'LogSymslib'' @ 150456260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSymslib__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSymslib);
  return;
}

