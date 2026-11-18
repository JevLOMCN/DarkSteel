// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 125

// Call @ 14d3d5ee0

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FString_(__cdecl*)(void_const_*),FString,void_const_*>::Call
          (FString *__return_storage_ptr__,void *param_1,void **param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14d3d5f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FGpuProfilerAnalyzer::AddGpuTimer'::__l3::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
::Call(void *param_1,ITimingProfilerTimerReader *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*param_2 + 8))(param_2,*(undefined4 *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    **(undefined8 **)((longlong)param_1 + 8) = *puVar1;
  }
  return;
}

// Call @ 14d3d5f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FCpuProfilerAnalyzer::GetTimerName'::__l5::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
::Call(void *param_1,ITimingProfilerTimerReader *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*param_2 + 8))(param_2,*(undefined4 *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    **(undefined8 **)((longlong)param_1 + 8) = *puVar1;
  }
  return;
}

// Call @ 14d3d5f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FGpuProfilerAnalyzer::OnEventBreadcrumbSpec'::__l48::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
::Call(void *param_1,ITimingProfilerTimerReader *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)((longlong)*param_2 + 8))(param_2,*(undefined4 *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)((longlong)param_1 + 8);
    uVar2 = puVar3[1];
    *puVar1 = *puVar3;
    puVar1[1] = uVar2;
    uVar2 = puVar3[3];
    puVar1[2] = puVar3[2];
    puVar1[3] = uVar2;
  }
  return;
}

// Call @ 14d3d5fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FCpuProfilerAnalyzer::OnMetadataSpec'::__l51::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
::Call(void *param_1,ITimingProfilerTimerReader *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)((longlong)*param_2 + 8))(param_2,*(undefined4 *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)((longlong)param_1 + 8);
    uVar2 = puVar3[1];
    *puVar1 = *puVar3;
    puVar1[1] = uVar2;
    uVar2 = puVar3[3];
    puVar1[2] = puVar3[2];
    puVar1[3] = uVar2;
  }
  return;
}

// Call @ 14d3d6000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 *puStack_58;
  FScriptContainerElement *pFStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  ulong64 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  uStack_20 = param_2->SizeAndAlignment & 0xffffffffffffff;
  **(longlong **)param_1 = **(longlong **)param_1 + uStack_20;
  uStack_28 = param_2->Address;
  pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 8);
  pFVar3 = pFVar2->Data;
  if ((pFVar3 <= (FScriptContainerElement *)&uStack_28) &&
     (lVar7 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4),
     (FScriptContainerElement *)&uStack_28 < pFVar3 + lVar7 * 0x10)) {
    lStack_40 = (longlong)*(int *)&pFVar2[1].Data;
    uStack_38 = 0x10;
    puStack_58 = &uStack_28;
    pFStack_50 = pFVar3;
    lStack_48 = lVar7;
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
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(ulong64 *)(pFVar3 + (longlong)iVar6 * 0x10) = uStack_28;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = uStack_20;
  return;
}

// Call @ 14d3d6010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l6::<lambda_2>,void,double,double>
::Call(void *param_1,double *param_2,double *param_3)

{
  `TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l6::<lambda_2>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14d3d6030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l13::<lambda_3>,void,double,__int64>
::Call(void *param_1,double *param_2,long64 *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  
  lVar2 = *param_3;
  dVar1 = *param_2;
  if (**(char **)((longlong)param_1 + 8) == '\0') {
    if (lVar2 != 0) goto LAB_14d3d6084;
LAB_14d3d6067:
    lVar3 = **(longlong **)((longlong)param_1 + 0x18);
    if (lVar3 == 0) goto LAB_14d3d6084;
    dVar4 = **(double **)((longlong)param_1 + 0x10);
  }
  else {
    if (lVar2 == 0) goto LAB_14d3d6067;
    **(char **)((longlong)param_1 + 8) = '\0';
    lVar3 = 0;
    dVar4 = dVar1;
  }
  (**(code **)(**(longlong **)param_1 + 0x50))(*(longlong **)param_1,dVar4,lVar3);
LAB_14d3d6084:
  **(double **)((longlong)param_1 + 0x10) = dVar1;
  **(longlong **)((longlong)param_1 + 0x18) = lVar2;
  return;
}

// Call @ 14d443b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l14::<lambda_10>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *apFStack_18 [2];
  
  if ((param_2->StartTime <= *(double *)param_1) &&
     (*(double *)((longlong)param_1 + 8) < param_2->EndTime ||
      *(double *)((longlong)param_1 + 8) == param_2->EndTime)) {
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    apFStack_18[0] = param_2;
    if ((pFVar2->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d443b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l15::<lambda_11>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  dVar2 = param_2->StartTime;
  if (((*(double *)param_1 <= dVar2) &&
      (dVar2 < *(double *)((longlong)param_1 + 8) || dVar2 == *(double *)((longlong)param_1 + 8)))
     && (*(double *)((longlong)param_1 + 0x10) < param_2->EndTime ||
         *(double *)((longlong)param_1 + 0x10) == param_2->EndTime)) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d443b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l16::<lambda_12>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  if ((((*(double *)param_1 <= param_2->StartTime) &&
       (param_2->StartTime <= *(double *)((longlong)param_1 + 8))) &&
      (dVar2 = param_2->EndTime, *(double *)((longlong)param_1 + 8) <= dVar2)) &&
     (dVar2 < *(double *)((longlong)param_1 + 0x10) ||
      dVar2 == *(double *)((longlong)param_1 + 0x10))) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d443b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l17::<lambda_13>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  if (((param_2->StartTime <= *(double *)param_1) &&
      (dVar2 = param_2->EndTime, *(double *)((longlong)param_1 + 8) <= dVar2)) &&
     (dVar2 < *(double *)((longlong)param_1 + 0x10) ||
      dVar2 == *(double *)((longlong)param_1 + 0x10))) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d443b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l18::<lambda_14>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  dVar2 = param_2->StartTime;
  if ((((*(double *)param_1 <= dVar2) &&
       (dVar2 < *(double *)((longlong)param_1 + 8) || dVar2 == *(double *)((longlong)param_1 + 8)))
      && (dVar2 = param_2->EndTime, *(double *)((longlong)param_1 + 0x10) <= dVar2)) &&
     (dVar2 < *(double *)((longlong)param_1 + 0x18) ||
      dVar2 == *(double *)((longlong)param_1 + 0x18))) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x20);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d443b80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l19::<lambda_15>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  dVar2 = param_2->StartTime;
  if ((param_2->Flags & Swap) == None) {
    if (*(double *)((longlong)param_1 + 8) <= dVar2 && dVar2 != *(double *)((longlong)param_1 + 8))
    {
      return;
    }
    if (param_2->EndTime <= *(double *)param_1 && *(double *)param_1 != param_2->EndTime) {
      return;
    }
  }
  else {
    if (dVar2 < *(double *)param_1) {
      return;
    }
    if (*(double *)((longlong)param_1 + 8) <= dVar2 && dVar2 != *(double *)((longlong)param_1 + 8))
    {
      return;
    }
  }
  pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
  apFStack_18[0] = param_2;
  if (((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
      ((FScriptContainerElement *)apFStack_18 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
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
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  return;
}

// Call @ 14d443b90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l20::<lambda_16>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  if ((param_2->Flags & Swap) == None) {
    if (*(double *)((longlong)param_1 + 8) < param_2->StartTime) {
      return;
    }
    if (param_2->EndTime <= *(double *)param_1 && *(double *)param_1 != param_2->EndTime) {
      return;
    }
  }
  else {
    dVar2 = param_2->EndTime;
    if (dVar2 < *(double *)param_1) {
      return;
    }
    if (*(double *)((longlong)param_1 + 8) <= dVar2 && dVar2 != *(double *)((longlong)param_1 + 8))
    {
      return;
    }
  }
  pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
  apFStack_18[0] = param_2;
  if (((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
      ((FScriptContainerElement *)apFStack_18 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
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
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  return;
}

// Call @ 14d443ba0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
::Call(void *param_1,FLoadRequest *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)param_2->Id)();
  *(longlong *)param_1 = (longlong)iVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
::Call(void *param_1,FLogMessageInternal *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)param_2->Spec)();
  *(longlong *)param_1 = (longlong)iVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443c00

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
::Call(void *param_1,FPackagesTableRow *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)param_2->PackageInfo)();
  *(longlong *)param_1 = (longlong)iVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443c30

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
::Call(void *param_1,FRequestsTableRow *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)param_2->Id)();
  *(longlong *)param_1 = (longlong)iVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443c60

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned_int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
::Call(void *param_1,FFileActivity *param_2)

{
  longlong in_R8;
  
  *(ulonglong *)param_1 = (ulonglong)*(uint *)(*(int *)&param_2->File + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443c80

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned_int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
::Call(void *param_1,FLoadRequest *param_2)

{
  longlong in_R8;
  
  *(ulonglong *)param_1 = (ulonglong)*(uint *)((int)param_2->Id + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443ca0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FNetProfilerAggregatedStats_const_&>
::Call(void *param_1,FNetProfilerAggregatedStats *param_2)

{
  longlong in_R8;
  
  *(ulonglong *)param_1 = (ulonglong)*(uint *)((int)param_2->EventTypeIndex + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443cc0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
::Call(void *param_1,FExportsTableRow *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->ExportInfo + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443ce0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
::Call(void *param_1,FFileActivity *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->File + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443d00

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
::Call(void *param_1,FLoadRequest *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)((int)param_2->Id + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443d20

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadTimeProfilerAggregatedStats_const_&>
::Call(void *param_1,FLoadTimeProfilerAggregatedStats *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->Name + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443d40

/* WARNING: Enum "Type": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
::Call(void *param_1,FLogMessageInternal *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->Spec + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443d60

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
::Call(void *param_1,FPackagesTableRow *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->PackageInfo + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443d80

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
::Call(void *param_1,FRequestsTableRow *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)((int)param_2->Id + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443da0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FTimingProfilerAggregatedStats_const_&>
::Call(void *param_1,FTimingProfilerAggregatedStats *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->Timer + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443dc0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
::Call(void *param_1,FExportsTableRow *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->ExportInfo)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443df0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
::Call(void *param_1,FFileActivity *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->File)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443e20

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
::Call(void *param_1,FLoadRequest *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->Id)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443e50

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
::Call(void *param_1,FLoadRequest *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)((int)param_2->Id + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443e70

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadTimeProfilerAggregatedStats_const_&>
::Call(void *param_1,FLoadTimeProfilerAggregatedStats *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->Name + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443e90

/* WARNING: Enum "Type": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
::Call(void *param_1,FLogMessageInternal *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->Spec)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
::Call(void *param_1,FLogMessageInternal *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->Spec + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443ee0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
::Call(void *param_1,FPackagesTableRow *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->PackageInfo)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443f10

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
::Call(void *param_1,FRequestsTableRow *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->Id)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443f40

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
::Call(void *param_1,FRequestsTableRow *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)((int)param_2->Id + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443f60

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FTimingProfilerAggregatedStats_const_&>
::Call(void *param_1,FTimingProfilerAggregatedStats *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->Timer)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443f90

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
::Call(void *param_1,FExportsTableRow *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->ExportInfo)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443fc0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
::Call(void *param_1,FExportsTableRow *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->ExportInfo + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d443fe0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
::Call(void *param_1,FFileActivity *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->File + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444000

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
::Call(void *param_1,FLoadRequest *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->Id)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444030

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadTimeProfilerAggregatedStats_const_&>
::Call(void *param_1,FLoadTimeProfilerAggregatedStats *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->Name + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444050

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
::Call(void *param_1,FPackagesTableRow *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->PackageInfo)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444080

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
::Call(void *param_1,FPackagesTableRow *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->PackageInfo + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d4440a0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
::Call(void *param_1,FRequestsTableRow *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)param_2->Id)();
  *(undefined8 *)param_1 = uVar1;
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d4440d0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
::Call(void *param_1,FRequestsTableRow *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)((int)param_2->Id + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d4440f0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FTimingProfilerAggregatedStats_const_&>
::Call(void *param_1,FTimingProfilerAggregatedStats *param_2)

{
  longlong in_R8;
  
  *(undefined8 *)param_1 = *(undefined8 *)(*(int *)&param_2->Timer + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444110

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<bool>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
::Call(void *param_1,FFileActivity *param_2)

{
  longlong in_R8;
  
  *(undefined1 *)param_1 = *(undefined1 *)(*(int *)&param_2->File + in_R8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444130

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTimelineStatistics::GatherKeysFromTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FTimelineStatistics::
          GatherKeysFromTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444150

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FTimelineStatistics::
          ProcessTimeline<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444170

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation'::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FTimelineStatistics::
          ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation'::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444190

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation'::__l2::<lambda_1>,TraceServices::FClassInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FTimelineStatistics::
          ProcessTimeline<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,`TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation'::__l2::<lambda_1>,TraceServices::FClassInfo_const_*,void_(__cdecl*)(TraceServices::FTimelineStatistics::FInternalAggregationEntry_&,double,double)>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4441b0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTimelineStatistics::ProcessTimelineForFrameStats<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FAggregatedTimingStats_&,double,double)>'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FTimelineStatistics::
          ProcessTimelineForFrameStats<TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>,`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l2::<lambda_1>,TraceServices::FTimingProfilerTimer_const_*,void_(__cdecl*)(TraceServices::FAggregatedTimingStats_&,double,double)>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4441d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,
      TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>
      *param_2)

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
  ulonglong uStackX_8;
  uint uStackX_18;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  longlong *plStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  longlong *plStack_78;
  PSRWLOCK pRStack_70;
  longlong *plStack_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar17 = *(uint *)((longlong)param_1 + 8);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar17) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  pRStack_70 = (PSRWLOCK)(*(longlong *)param_1 + 0x50);
  AcquireSRWLockShared(pRStack_70);
  lVar13 = *(longlong *)param_1;
  uStackX_8 = CONCAT44(uStackX_8._4_4_,1);
  plStack_78 = (longlong *)(lVar13 + 0x110);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x120);
  iVar11 = *(int *)(lVar13 + 0x138);
  iStack_a8 = 0;
  iStack_90 = 0;
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
      iStack_90 = iStack_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d42eb70;
      uVar17 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStackX_8 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = uStackX_8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_94 = iStack_90 + -1 + (int)lVar12;
    if (iVar11 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d42eb70:
  uStackX_18 = *(uint *)(lVar13 + 0x138);
  plStack_b0 = (longlong *)(lVar13 + 0x110);
  uStack_a4 = (undefined4)uStackX_8;
  iStack_88 = *(int *)(lVar13 + 0x118) - *(int *)(lVar13 + 0x144);
  uVar17 = uStackX_18 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uStackX_18 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = iStack_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  pTStack_a0 = pTVar2;
  iStack_8c = iStack_94;
  plStack_68 = plStack_b0;
  TStack_60.Array = pTVar2;
  if ((((int)uStackX_18 < 0) || (iVar11 < (int)uStackX_18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar8 = plStack_78;
  uVar4 = *(uint *)(lVar13 + 0x138);
  if (uStackX_18 != uVar4) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar16 = -1 << ((byte)uStackX_18 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uStackX_18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d42eca0;
      uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_80 = (int)lVar13;
    uStackX_18 = iStack_80 + -1 + uVar17;
    if ((int)uVar4 < (int)uStackX_18) {
      uStackX_18 = uVar4;
    }
  }
LAB_14d42eca0:
  while( true ) {
    plVar9 = plStack_68;
    if ((int)plStack_68[1] - *(int *)((longlong)plStack_68 + 0x34) != (int)uStack_40) {
      uStackX_8 = uStackX_8 & 0xffffffffffffff00;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStackX_8);
    }
    if (((TStack_60.CurrentBitIndex == uStackX_18) && (TStack_60.Array == pTVar2)) &&
       (plVar9 == plVar8)) break;
    lVar13 = *plVar9;
    uVar3 = *(ulonglong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    uVar5 = *(ulonglong *)(lVar13 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(ulonglong *)((longlong)param_1 + 0x10) <= uVar3) &&
       (uVar3 < *(ulonglong *)((longlong)param_1 + 0x18))) {
      pFVar6 = (param_2->AllocatorInstance).Data;
      uStack_c0 = uVar3;
      uStack_b8 = uVar5;
      if ((pFVar6 <= (FScriptContainerElement *)&uStack_c0) &&
         (((FScriptContainerElement *)&uStack_c0 < pFVar6 + (longlong)*piVar1 * 0x10 &&
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
      iVar11 = param_2->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar11 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(ulonglong *)pFVar6 = uStack_c0;
      *(ulonglong *)(pFVar6 + 8) = uStack_b8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d42edeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(pRStack_70);
  return;
}

// Call @ 14d4441e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,
      TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>
      *param_2)

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
  ulonglong uStackX_8;
  uint uStackX_18;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  longlong *plStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  longlong *plStack_78;
  PSRWLOCK pRStack_70;
  longlong *plStack_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar17 = *(uint *)((longlong)param_1 + 8);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar17) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  pRStack_70 = (PSRWLOCK)(*(longlong *)param_1 + 0x50);
  AcquireSRWLockShared(pRStack_70);
  lVar13 = *(longlong *)param_1;
  uStackX_8 = CONCAT44(uStackX_8._4_4_,1);
  plStack_78 = (longlong *)(lVar13 + 0x110);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x120);
  iVar11 = *(int *)(lVar13 + 0x138);
  iStack_a8 = 0;
  iStack_90 = 0;
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
      iStack_90 = iStack_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d42ef20;
      uVar17 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStackX_8 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = uStackX_8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_94 = iStack_90 + -1 + (int)lVar12;
    if (iVar11 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d42ef20:
  uStackX_18 = *(uint *)(lVar13 + 0x138);
  plStack_b0 = (longlong *)(lVar13 + 0x110);
  uStack_a4 = (undefined4)uStackX_8;
  iStack_88 = *(int *)(lVar13 + 0x118) - *(int *)(lVar13 + 0x144);
  uVar17 = uStackX_18 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uStackX_18 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = iStack_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  pTStack_a0 = pTVar2;
  iStack_8c = iStack_94;
  plStack_68 = plStack_b0;
  TStack_60.Array = pTVar2;
  if ((((int)uStackX_18 < 0) || (iVar11 < (int)uStackX_18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar8 = plStack_78;
  uVar4 = *(uint *)(lVar13 + 0x138);
  if (uStackX_18 != uVar4) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar16 = -1 << ((byte)uStackX_18 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uStackX_18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d42f050;
      uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_80 = (int)lVar13;
    uStackX_18 = iStack_80 + -1 + uVar17;
    if ((int)uVar4 < (int)uStackX_18) {
      uStackX_18 = uVar4;
    }
  }
LAB_14d42f050:
  while( true ) {
    plVar9 = plStack_68;
    if ((int)plStack_68[1] - *(int *)((longlong)plStack_68 + 0x34) != (int)uStack_40) {
      uStackX_8 = uStackX_8 & 0xffffffffffffff00;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStackX_8);
    }
    if (((TStack_60.CurrentBitIndex == uStackX_18) && (TStack_60.Array == pTVar2)) &&
       (plVar9 == plVar8)) break;
    lVar13 = *plVar9;
    uVar3 = *(ulonglong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    uVar5 = *(ulonglong *)(lVar13 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(ulonglong *)((longlong)param_1 + 0x10) <= uVar3) &&
       (uVar3 < *(ulonglong *)((longlong)param_1 + 0x18))) {
      pFVar6 = (param_2->AllocatorInstance).Data;
      uStack_c0 = uVar3;
      uStack_b8 = uVar5;
      if ((pFVar6 <= (FScriptContainerElement *)&uStack_c0) &&
         (((FScriptContainerElement *)&uStack_c0 < pFVar6 + (longlong)*piVar1 * 0x10 &&
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
      iVar11 = param_2->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar11 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(ulonglong *)pFVar6 = uStack_c0;
      *(ulonglong *)(pFVar6 + 8) = uStack_b8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d42f19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(pRStack_70);
  return;
}

// Call @ 14d4441f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,
      TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>
      *param_2)

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
  ulonglong uStackX_8;
  uint uStackX_18;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  longlong *plStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  longlong *plStack_78;
  PSRWLOCK pRStack_70;
  longlong *plStack_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar17 = *(uint *)((longlong)param_1 + 8);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar17) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  pRStack_70 = (PSRWLOCK)(*(longlong *)param_1 + 0x50);
  AcquireSRWLockShared(pRStack_70);
  lVar13 = *(longlong *)param_1;
  uStackX_8 = CONCAT44(uStackX_8._4_4_,1);
  plStack_78 = (longlong *)(lVar13 + 0x110);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x120);
  iVar11 = *(int *)(lVar13 + 0x138);
  iStack_a8 = 0;
  iStack_90 = 0;
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
      iStack_90 = iStack_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14d42f2d0;
      uVar17 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStackX_8 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = uStackX_8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_94 = iStack_90 + -1 + (int)lVar12;
    if (iVar11 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_14d42f2d0:
  uStackX_18 = *(uint *)(lVar13 + 0x138);
  plStack_b0 = (longlong *)(lVar13 + 0x110);
  uStack_a4 = (undefined4)uStackX_8;
  iStack_88 = *(int *)(lVar13 + 0x118) - *(int *)(lVar13 + 0x144);
  uVar17 = uStackX_18 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uStackX_18 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = iStack_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  pTStack_a0 = pTVar2;
  iStack_8c = iStack_94;
  plStack_68 = plStack_b0;
  TStack_60.Array = pTVar2;
  if ((((int)uStackX_18 < 0) || (iVar11 < (int)uStackX_18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar8 = plStack_78;
  uVar4 = *(uint *)(lVar13 + 0x138);
  if (uStackX_18 != uVar4) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x130) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar16 = -1 << ((byte)uStackX_18 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uStackX_18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d42f400;
      uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_80 = (int)lVar13;
    uStackX_18 = iStack_80 + -1 + uVar17;
    if ((int)uVar4 < (int)uStackX_18) {
      uStackX_18 = uVar4;
    }
  }
LAB_14d42f400:
  while( true ) {
    plVar9 = plStack_68;
    if ((int)plStack_68[1] - *(int *)((longlong)plStack_68 + 0x34) != (int)uStack_40) {
      uStackX_8 = uStackX_8 & 0xffffffffffffff00;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStackX_8);
    }
    if (((TStack_60.CurrentBitIndex == uStackX_18) && (TStack_60.Array == pTVar2)) &&
       (plVar9 == plVar8)) break;
    lVar13 = *plVar9;
    uVar3 = *(ulonglong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    uVar5 = *(ulonglong *)(lVar13 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(ulonglong *)((longlong)param_1 + 0x10) <= uVar3) &&
       (uVar3 < *(ulonglong *)((longlong)param_1 + 0x18))) {
      pFVar6 = (param_2->AllocatorInstance).Data;
      uStack_c0 = uVar3;
      uStack_b8 = uVar5;
      if ((pFVar6 <= (FScriptContainerElement *)&uStack_c0) &&
         (((FScriptContainerElement *)&uStack_c0 < pFVar6 + (longlong)*piVar1 * 0x10 &&
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
      iVar11 = param_2->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar11 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(ulonglong *)pFVar6 = uStack_c0;
      *(ulonglong *)(pFVar6 + 8) = uStack_b8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d42f54b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(pRStack_70);
  return;
}

// Call @ 14d444200

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``TraceServices::FTableMergeTask::BuildCLayout'::__l4::<lambda_1>::operator()'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
::Call(void *param_1,FImportTableRow *param_2)

{
  FImportTableRow *in_R8;
  
  TraceServices::FImportTableRow::GetValue(in_R8,(ulong64)param_1);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTableImportTask::operator()'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = *(undefined8 *)((longlong)param_1 + 0x30);
  local_10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38);
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// Call @ 14d4442a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTableMergeTask::operator()'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = *(undefined8 *)((longlong)param_1 + 0x30);
  local_10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38);
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// Call @ 14d444310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FNetProfilerProvider::CreateAggregation'::__l2::<lambda_1>,void,TraceServices::FNetProfilerContentEvent_const_&>
::Call(void *param_1,FNetProfilerContentEvent *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  undefined3 uVar7;
  undefined1 uVar10;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  *this;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 uVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  longlong *plVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  TKeyInitializer<unsigned_int_const_&> TStackX_8;
  uint *puStackX_10;
  undefined3 uVar6;
  undefined5 uVar8;
  undefined1 uVar9;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  
  this = *(TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
           **)param_1;
  puVar1 = &param_2->EventTypeIndex;
  puVar25 = (uint *)0x0;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar23 = (this->Hash).SecondaryData;
    if (FVar23 == (ForElementType<FSetElementId>)0x0) {
      FVar23 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar17 = *(int *)((longlong)FVar23 + (ulonglong)(this->HashSize - 1U & *puVar1) * 4);
    if (iVar17 != -1) {
      do {
        lVar22 = *(longlong *)&this->Elements + (longlong)iVar17 * 0x28;
        if (*(uint *)(*(longlong *)&this->Elements + (longlong)iVar17 * 0x28) == *puVar1) {
          puVar21 = (uint *)(lVar22 + 4);
          if (lVar22 == 0) {
            puVar21 = puVar25;
          }
          if (puVar21 != (uint *)0x0) goto LAB_14d42f8fd;
          break;
        }
        iVar17 = *(int *)(lVar22 + 0x20);
      } while (iVar17 != -1);
    }
  }
  puStackX_10 = puVar1;
  TSet<TTuple<unsigned_int,TraceServices::FNetProfilerAggregatedStats>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FNetProfilerAggregatedStats,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>(this,&TStackX_8,(bool *)&puStackX_10);
  puVar21 = (uint *)((longlong)(int)TStackX_8.Key * 0x28 + 4 + *(longlong *)&this->Elements);
  *puVar21 = *puVar1;
LAB_14d42f8fd:
  uVar4._0_3_ = param_2->StartPos;
  uVar6 = param_2->EndPos;
  uVar9 = param_2->Level;
  uVar13 = param_2->Padding;
  uVar11 = CONCAT11(uVar13,uVar9);
  uVar4._3_5_ = CONCAT23(uVar11,uVar6);
  puVar21[1] = puVar21[1] + 1;
  uVar27 = ((uint)uVar4._3_5_ & 0xffffff) - ((uint)uVar4 & 0xffffff);
  puVar21[2] = puVar21[2] + uVar27;
  uVar20 = puVar21[3];
  if (puVar21[3] < uVar27) {
    uVar20 = uVar27;
  }
  puVar21[3] = uVar20;
  lVar22 = *(longlong *)param_1;
  uVar19 = (ulonglong)param_2->Level;
  if (uVar19 < *(ulonglong *)(lVar22 + 0x50)) {
    do {
      *(longlong *)(lVar22 + 0x50) = *(longlong *)(lVar22 + 0x50) + -1;
      lVar22 = *(longlong *)param_1;
      uVar20 = *(uint *)(lVar22 + 0x50);
      uVar18 = 0;
      if ((int)uVar20 < *(int *)(lVar22 + 0x60)) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      plVar5 = *(longlong **)param_1;
      puVar26 = (uint *)(*(longlong *)(lVar22 + 0x58) + (longlong)(int)uVar20 * 0x10);
      puVar21 = puVar25;
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        plVar24 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar24 = (longlong *)plVar5[8];
        }
        uVar20 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar5[9] - 1U & *puVar26) * 4);
        if (uVar20 != 0xffffffff) {
          do {
            puVar21 = (uint *)(*plVar5 + (longlong)(int)uVar20 * 0x28);
            if (*(uint *)(*plVar5 + (longlong)(int)uVar20 * 0x28) == *puVar26) {
              if (puVar21 != (uint *)0x0) goto LAB_14d42fa17;
              break;
            }
            uVar20 = puVar21[8];
            puVar21 = puVar25;
          } while (uVar20 != 0xffffffff);
        }
      }
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
LAB_14d42fa17:
      uVar20 = (puVar26[2] - puVar26[3]) - puVar26[1];
      puVar21[6] = puVar21[6] + uVar20;
      if (uVar20 < puVar21[7]) {
        uVar20 = puVar21[7];
      }
      puVar21[7] = uVar20;
      lVar22 = *(longlong *)param_1;
      uVar19 = (ulonglong)param_2->Level;
    } while (uVar19 < *(ulonglong *)(lVar22 + 0x50));
  }
  if ((uVar19 != *(ulonglong *)(lVar22 + 0x50)) &&
     (bVar16 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2067707362075999601>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\NetProfilerProvider.cpp"
                          ,0x28f,"ContentEvent.Level == Helper.StackSize"), bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  *(ulonglong *)(*(longlong *)param_1 + 0x50) = (ulonglong)param_2->Level + 1;
  lVar22 = *(longlong *)param_1;
  bVar3 = param_2->Level;
  if ((*(int *)(lVar22 + 0x60) <= (int)(uint)bVar3) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  puVar25 = (uint *)((ulonglong)bVar3 * 0x10 + *(longlong *)(lVar22 + 0x58));
  *puVar25 = *puVar1;
  puVar25[1] = *(uint *)param_2 & 0xffffff;
  uVar7 = param_2->EndPos;
  uVar10 = param_2->Level;
  uVar14 = param_2->Padding;
  uVar12 = CONCAT11(uVar14,uVar10);
  uVar8 = CONCAT23(uVar12,uVar7);
  puVar25[3] = 0;
  puVar25[2] = (uint)uVar8 & 0xffffff;
  bVar3 = param_2->Level;
  if (bVar3 != 0) {
    lVar22 = *(longlong *)param_1;
    uVar20 = 0;
    if ((int)(bVar3 - 1) < *(int *)(lVar22 + 0x60)) {
      uVar20 = ~(bVar3 - 1) >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    piVar2 = (int *)((ulonglong)bVar3 * 0x10 + -4 + *(longlong *)(lVar22 + 0x58));
    *piVar2 = *piVar2 + uVar27;
  }
  return;
}

// Call @ 14d444320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::ITimingProfilerProvider::CreateButterfly'::__l2::<lambda_1>,bool,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  undefined1 uVar1;
  uint local_res8 [8];
  
  local_res8[0] = *param_2;
  uVar1 = (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res8);
  return (bool)uVar1;
}

// Call @ 14d444350

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::EnumerateEvents'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,double,double,unsigned_int,TraceServices::FFileActivity_*_const_&>
::Call(void *param_1,double *param_2,double *param_3,uint *param_4,FFileActivity **param_5)

{
  double dVar1;
  double local_res8 [3];
  longlong local_res20;
  
  local_res8[0] = *param_2;
  dVar1 = *param_3;
  local_res20._1_7_ = (uint7)((ulonglong)param_4 >> 8);
  local_res20._0_1_ = 1;
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],&local_res20,local_res8,param_5);
  local_res20 = (ulonglong)local_res20._1_7_ << 8;
  local_res8[0] = dVar1;
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],&local_res20,local_res8,param_5);
  return Continue;
}

// Call @ 14d4443d0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4443f0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444410

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateEventsDownSampled'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444430

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateEventsDownSampled'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  **(int **)param_1 = *param_2;
  return;
}

// Call @ 14d444460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  **(int **)param_1 = *param_2;
  return;
}

// Call @ 14d444470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  **(int **)((longlong)param_1 + 8) = iVar1;
  **(int **)param_1 = iVar1;
  return;
}

// Call @ 14d444490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  **(int **)((longlong)param_1 + 8) = iVar1;
  **(int **)param_1 = iVar1;
  return;
}

// Call @ 14d4444b0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegions'::__l2::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->BeginTime;
}

// Call @ 14d4444c0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegionsBackwards'::__l2::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->BeginTime;
}

// Call @ 14d4444d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionProvider::GetRegionCount'::__l2::<lambda_1>,void,TraceServices::FRegionLane_const_&,int>
::Call(void *param_1,FRegionLane *param_2,int *param_3)

{
  **(longlong **)param_1 = **(longlong **)param_1 + (longlong)(int)(param_2->Regions).TotalItemCount
  ;
  return;
}

// Call @ 14d4444f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTableImportTask::LoadFileToStringArray'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `TraceServices::FTableImportTask::LoadFileToStringArray'::__l2::<lambda_1>::operator()
            (param_1,&local_18);
  return;
}

// Call @ 14d444520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_1>::operator()(param_1,&local_18)
  ;
  return;
}

// Call @ 14d444550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsFromCache'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014d44457c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + 0x198))
            ((undefined8 *)(lVar1 + 0x198),
             ((ulonglong)(longlong)*param_2 % *(ulonglong *)(lVar1 + 0x100)) * 0x20 +
             *(longlong *)
              (*(longlong *)(lVar1 + 0xf0) +
              ((ulonglong)(longlong)*param_2 / *(ulonglong *)(lVar1 + 0x100)) * 0x10));
  return;
}

// Call @ 14d444590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsFromCache'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014d4445bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + 0x198))
            ((undefined8 *)(lVar1 + 0x198),
             ((ulonglong)(longlong)*param_2 % *(ulonglong *)(lVar1 + 0x100)) * 0x20 +
             *(longlong *)
              (*(longlong *)(lVar1 + 0xf0) +
              ((ulonglong)(longlong)*param_2 / *(ulonglong *)(lVar1 + 0x100)) * 0x10));
  return;
}

// Call @ 14d4445d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsFromCache'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00014d4445fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + 0x198))
            ((undefined8 *)(lVar1 + 0x198),
             ((ulonglong)(longlong)*param_2 % *(ulonglong *)(lVar1 + 0x100)) * 0x20 +
             *(longlong *)
              (*(longlong *)(lVar1 + 0xf0) +
              ((ulonglong)(longlong)*param_2 / *(ulonglong *)(lVar1 + 0x100)) * 0x10));
  return;
}

// Call @ 14d444610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FSymslibResolver::OnAnalysisComplete'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStackX_8 [8];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x8090);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar3 = *(longlong *)param_1;
    do {
      iVar2 = *(int *)(lVar3 + 0x8088);
      FWindowsPlatformProcess::Sleep(0.0);
    } while (iVar2 != 0);
    SRWLock = *(PSRWLOCK *)param_1;
    AcquireSRWLockShared(SRWLock);
    lVar3 = *(longlong *)param_1;
    uVar5 = 0;
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      do {
        lVar3 = *(longlong *)
                 (*(longlong *)(lVar3 + 0x20) + (uVar5 / *(ulonglong *)(lVar3 + 0x30)) * 0x10) +
                (uVar5 % *(ulonglong *)(lVar3 + 0x30)) * 0x68;
        puVar4 = *(undefined8 **)(lVar3 + 0x18);
        iVar2 = *(int *)(lVar3 + 0x20);
        puVar1 = puVar4 + iVar2;
        while( true ) {
          if (*(int *)(lVar3 + 0x20) != iVar2) {
            `TCheckedPointerIterator<SYMS_DefArena_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(auStackX_8);
          }
          if (puVar4 == puVar1) break;
          syms_arena_def_release(*puVar4);
          puVar4 = puVar4 + 1;
        }
        *(undefined4 *)(lVar3 + 0x20) = 0;
        if (*(int *)(lVar3 + 0x24) != 0) {
          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)(lVar3 + 0x18),0,(int *)(lVar3 + 0x24));
        }
        lVar3 = *(longlong *)param_1;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while (uVar5 < *(ulonglong *)(lVar3 + 0x38));
    }
    ReleaseSRWLockShared(SRWLock);
    if (3 < (byte)LogSymslib._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d430f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 14d444620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FSymslibResolver::QueueModuleReload'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  ulong64 uVar4;
  char cVar5;
  size_t sVar6;
  FPlatformFileManager *this;
  IPlatformFile *pIVar7;
  FString *pFVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar16;
  bool bVar17;
  undefined4 auStackX_8 [2];
  FString FStack_98;
  TStringView<wchar_t> TStack_88;
  FString FStack_78;
  FString FStack_68;
  FSymbolStringAllocator FStack_58;
  
  uVar16 = 0;
  auStackX_8[0] = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x8090);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  FStack_98.Data.AllocatorInstance.Data = *(FScriptContainerElement **)((longlong)param_1 + 0x10);
  if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen((wchar_t *)FStack_98.Data.AllocatorInstance.Data);
    uVar16 = (undefined4)sVar6;
  }
  FStack_98.Data.ArrayNum = uVar16;
  TStack_88.DataPtr = (wchar_t *)FStack_98.Data.AllocatorInstance.Data;
  TStack_88.Size = uVar16;
  TStack_88._12_4_ = FStack_98.Data.ArrayMax;
  TraceServices::FSymslibResolver::LoadModuleTracked
            (*(FSymslibResolver **)param_1,*(FModuleEntry **)((longlong)param_1 + 8),&TStack_88);
  if (*(char *)(**(longlong **)((longlong)param_1 + 8) + 0x1d) == '\x02') {
    lVar13 = *(longlong *)param_1;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0x80d0));
    this = FPlatformFileManager::Get();
    pIVar7 = FPlatformFileManager::GetPlatformFile(this);
    cVar5 = (**(code **)((longlong)*pIVar7 + 0x118))
                      (pIVar7,*(undefined8 *)((longlong)param_1 + 0x10));
    bVar17 = cVar5 == '\0';
    if (bVar17) {
      ::FString::FString((FString *)&TStack_88,*(wchar_t **)((longlong)param_1 + 0x10));
      pFVar8 = FPaths::GetPath(&FStack_78,(FString *)&TStack_88);
    }
    else {
      pFVar8 = ::FString::FString(&FStack_68,*(wchar_t **)((longlong)param_1 + 0x10));
    }
    FStack_98.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_98.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    FStack_98.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if ((bVar17) && (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if ((bVar17) && ((FScriptContainerElement *)TStack_88.DataPtr != (FScriptContainerElement *)0x0)
       ) {
      FMemory::Free(TStack_88.DataPtr);
    }
    if ((!bVar17) && (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
    }
    if (1 < FStack_98.Data.ArrayNum) {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(*(longlong *)param_1 + 0x80d8),
                 &FStack_98);
    }
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0x80d0));
    lVar13 = **(longlong **)((longlong)param_1 + 8);
    LOCK();
    *(undefined4 *)(lVar13 + 0x28) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(lVar13 + 0x30) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(lVar13 + 0x34) = 0;
    UNLOCK();
    FStack_58.Allocator =
         (ILinearAllocator *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x8140) + 0xb8))();
    FStack_58.Block = (wchar_t *)0x0;
    FStack_58.BlockSize = 0x8000;
    FStack_58.BlockRemaining = 0;
    FStack_58.NumAllocatedBlocks = 0;
    FStack_58.TotalAllocatedSize = 0;
    FStack_58.TotalUsedSize = 0;
    FStack_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_98.Data.ArrayNum = 0;
    FStack_98.Data.ArrayMax = 0;
    CheckCallable(*(void **)((longlong)param_1 + 0x20));
    pcVar3 = *(code **)((longlong)param_1 + 0x20);
    plVar11 = (longlong *)((longlong)param_1 + 0x30);
    if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)param_1 + 0x48);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar3)(uVar9,&FStack_98);
    iVar2 = FStack_98.Data.ArrayNum;
    uVar10 = (ulonglong)FStack_98.Data.ArrayNum;
    pFVar15 = FStack_98.Data.AllocatorInstance.Data + uVar10 * 0x10;
    FVar12.Data = FStack_98.Data.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar2) {
        `TCheckedPointerIterator<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      uVar4 = FStack_58.TotalAllocatedSize;
      if (FVar12.Data == pFVar15) break;
      if (*(char *)(*(longlong *)param_1 + 0x80c8) != '\0') break;
      TraceServices::FSymslibResolver::ResolveSymbolTracked
                (*(FSymslibResolver **)param_1,*(ulong64 *)FVar12.Data,
                 *(FResolvedSymbol **)(FVar12.Data + 8),&FStack_58);
      uVar10 = FStack_98.Data._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x10;
    }
    lVar13 = FStack_58.TotalAllocatedSize - FStack_58.TotalUsedSize;
    if (6 < (byte)LogSymslib._0_1_) {
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSymslib);
    }
    LOCK();
    *(longlong *)(*(longlong *)param_1 + 0x8130) =
         *(longlong *)(*(longlong *)param_1 + 0x8130) + uVar4;
    UNLOCK();
    LOCK();
    *(longlong *)(*(longlong *)param_1 + 0x8138) =
         *(longlong *)(*(longlong *)param_1 + 0x8138) + lVar13;
    UNLOCK();
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    lVar13 = *(longlong *)param_1;
    if (*(longlong *)(lVar13 + 0x80b8) != 0) {
      do {
        iVar2 = *(int *)(lVar13 + 0x8088);
        FWindowsPlatformProcess::Sleep(0.0);
      } while (iVar2 != 0);
      lVar13 = *(longlong *)((longlong)param_1 + 8);
      puVar14 = *(undefined8 **)(lVar13 + 0x18);
      iVar2 = *(int *)(lVar13 + 0x20);
      puVar1 = puVar14 + iVar2;
      while( true ) {
        if (*(int *)(lVar13 + 0x20) != iVar2) {
          `TCheckedPointerIterator<SYMS_DefArena_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStackX_8);
        }
        if (puVar14 == puVar1) break;
        syms_arena_def_release(*puVar14);
        puVar14 = puVar14 + 1;
      }
      lVar13 = *(longlong *)((longlong)param_1 + 8);
      *(undefined4 *)(lVar13 + 0x20) = 0;
      if (*(int *)(lVar13 + 0x24) != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(lVar13 + 0x18),0,(int *)(lVar13 + 0x24));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d431383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// Call @ 14d444630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::Run'::__l2::<lambda_1>,void,unsigned_int,TraceServices::IAllocationsProvider::FHeapSpec_const_&>
::Call(void *param_1,uint *param_2,FHeapSpec *param_3)

{
  `TraceServices::FAllocationsQuery::Run'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14d444640

ETaskEnumerationResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTasksProvider::TryGetParallelForTasks'::__l2::<lambda_1>,enum_TraceServices::ETaskEnumerationResult,TraceServices::FTaskInfo_const_&>
::Call(void *param_1,FTaskInfo *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  ETaskEnumerationResult EVar5;
  int iVar6;
  
  if (((param_2->LaunchedThreadId == *(uint *)param_1) &&
      (*(double *)((longlong)param_1 + 8) < param_2->LaunchedTimestamp)) &&
     (param_2->FinishedTimestamp <= *(double *)((longlong)param_1 + 0x10) &&
      *(double *)((longlong)param_1 + 0x10) != param_2->FinishedTimestamp)) {
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x18);
    if (((FTaskInfo *)pFVar2->Data <= param_2) &&
       (param_2 < (FTaskInfo *)
                  (&((FTaskInfo *)pFVar2->Data)->Id + *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    *(ulong64 *)(pFVar2->Data + (longlong)iVar6 * 8) = param_2->Id;
  }
  return Continue;
}

// Call @ 14d444650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FSymslibResolver::DispatchQueuedAddresses'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `TraceServices::FSymslibResolver::DispatchQueuedAddresses'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14d444660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l5::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  dVar2 = *(double *)param_1;
  if ((param_2->StartTime <= dVar2) && (dVar2 < param_2->EndTime || dVar2 == param_2->EndTime)) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 8);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d444670

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTimingProfilerProvider::CreateButterflyInternal'::__l6::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FTimingProfilerProvider::CreateButterflyInternal'::__l6::<lambda_1>::
          operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444690

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l6::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l6::<lambda_1>::
          operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4446b0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l6::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l6::<lambda_1>::
          operator()(param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4446d0

FColumnValueContainer __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
::Call(void *param_1,FImportTableRow *param_2)

{
  FImportTableRow *in_R8;
  
  TraceServices::FImportTableRow::GetValue(in_R8,(ulong64)param_1);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// Call @ 14d444700

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegions'::__l9::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->BeginTime;
}

// Call @ 14d444710

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegionsBackwards'::__l9::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->BeginTime;
}

// Call @ 14d444720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,void>
::Call(void *param_1)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  FModule *pFVar2;
  FDbgHelpResolver *this;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  EModuleStatus EVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined4 auStackX_8 [2];
  FScriptContainerElement *pFStackX_10;
  ForAnyElementType FStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ForAnyElementType FStack_c0;
  int iStack_b8;
  int iStack_b4;
  FString FStack_b0;
  FString FStack_a0;
  ulong64 uStack_90;
  longlong lStack_88;
  code *apcStack_78 [5];
  undefined8 *puStack_50;
  
  uVar12 = 0;
  auStackX_8[0] = 0;
  pFVar13 = *(FScriptContainerElement **)param_1;
  pFStackX_10 = pFVar13;
  if (3 < (byte)LogTraceServices._0_1_) {
    Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (*(int *)((longlong)param_1 + 0x18) == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = *(wchar_t **)((longlong)param_1 + 0x10);
  }
  EVar6 = ``TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::
          LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::
          operator()(&pFStackX_10,*(FModule **)((longlong)param_1 + 8),pwVar16);
  if (EVar6 == Loaded) {
    this_00 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
    cVar7 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10);
    if (cVar7 == '\0') {
      pFVar11 = FPaths::GetPath(&FStack_a0,(FString *)((longlong)param_1 + 0x10));
      bVar4 = false;
      bVar8 = true;
    }
    else {
      iVar9 = *(int *)((longlong)param_1 + 0x18);
      _Src = *(void **)((longlong)param_1 + 0x10);
      FStack_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_b0.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        FStack_b0.Data.ArrayMax = 0;
        pFVar11 = &FStack_b0;
        bVar4 = true;
        bVar8 = false;
      }
      else {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&FStack_b0,iVar9,&FStack_b0.Data.ArrayMax);
        memcpy(FStack_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        pFVar11 = &FStack_b0;
        bVar4 = true;
        bVar8 = false;
      }
    }
    FStack_c0.Data = (FScriptContainerElement *)0x0;
    iStack_b8 = (pFVar11->Data).ArrayNum;
    lVar14 = (longlong)iStack_b8;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (iStack_b8 == 0) {
      iStack_b4 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_b8,0,&FStack_c0,iStack_b8,&iStack_b4);
      memcpy(FStack_c0.Data,pFVar1,lVar14 * 2);
    }
    if ((bVar8) && (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
    }
    lVar14 = *(longlong *)param_1;
    FStack_d8.Data = (FScriptContainerElement *)0x0;
    uStack_d0 = 0;
    AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    lVar17 = *(longlong *)param_1;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      do {
        lStack_c8 = *(longlong *)
                     (*(longlong *)(lVar17 + 0x30) + (uVar12 / *(ulonglong *)(lVar17 + 0x40)) * 0x10
                     ) + (uVar12 % *(ulonglong *)(lVar17 + 0x40)) * 0x40;
        if ((lStack_c8 != *(longlong *)((longlong)param_1 + 8)) && (2 < *(byte *)(lStack_c8 + 0x1d))
           ) {
          if ((FStack_d8.Data <= (FScriptContainerElement *)&lStack_c8) &&
             (((FScriptContainerElement *)&lStack_c8 <
               FStack_d8.Data + (longlong)uStack_d0._4_4_ * 8 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)uStack_d0;
          if ((int)uStack_d0 == uStack_d0._4_4_) {
            iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_d8,(int *)((longlong)&uStack_d0 + 4));
          }
          uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar9 + 1);
          *(longlong *)(FStack_d8.Data + (longlong)iVar9 * 8) = lStack_c8;
        }
        lVar17 = *(longlong *)param_1;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        pFVar13 = pFStackX_10;
      } while (uVar12 < *(ulonglong *)(lVar17 + 0x48));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    fVar5 = __real_3dcccccd;
    iVar9 = (int)uStack_d0;
    uVar12 = (ulonglong)(int)uStack_d0;
    pFStackX_10 = FStack_d8.Data + uVar12 * 8;
    FVar15.Data = FStack_d8.Data;
    while( true ) {
      pFVar1 = pFStackX_10;
      if ((int)uVar12 != iVar9) {
        `TCheckedPointerIterator<TraceServices::FModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (FVar15.Data == pFVar1) {
        if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d8.Data);
        }
        if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_c0.Data);
        }
        goto LAB_14d432a5a;
      }
      pFVar2 = *(FModule **)FVar15.Data;
      if (*(char *)(*(longlong *)param_1 + 400) != '\0') break;
      FStack_a0.Data.ArrayNum = *(int *)&(pFVar2->Stats).Discovered;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (iStack_b8 != 0) {
        FVar18.Data = FStack_c0.Data;
      }
      uStack_90 = pFVar2->Base;
      this = *(FDbgHelpResolver **)(pFVar13 + 0x180);
      lStack_88 = pFVar2->Size + uStack_90;
      apcStack_78[0] = (code *)0x0;
      puStack_50 = (undefined8 *)0x0;
      FStack_a0.Data.AllocatorInstance.Data = pFVar13;
      puStack_50 = FMemory::Malloc(0x28,8);
      *puStack_50 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFDbgHelpResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
      ;
      puStack_50[1] = FStack_a0.Data.AllocatorInstance.Data;
      puStack_50[2] = CONCAT44(FStack_a0.Data.ArrayMax,FStack_a0.Data.ArrayNum);
      puStack_50[3] = uStack_90;
      puStack_50[4] = lStack_88;
      if (puStack_50 + 1 != (undefined8 *)0x0) {
        apcStack_78[0] =
             TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
             ::Call;
      }
      TraceServices::FDbgHelpResolver::QueueModuleReload
                (this,pFVar2,(wchar_t *)FVar18.Data,
                 (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
                  *)apcStack_78);
      do {
        FWindowsPlatformProcess::Sleep(fVar5);
      } while (pFVar2->Status == (atomic<TraceServices::EModuleStatus>)0x1);
      uVar12 = uStack_d0 & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d8.Data);
    }
    if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c0.Data);
    }
  }
  else {
LAB_14d432a5a:
    if (3 < (byte)LogTraceServices._0_1_) {
      Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FDbgHelpResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// Call @ 14d444730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,void>
::Call(void *param_1)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  FModule *pFVar2;
  FPsymResolver *this;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  EModuleStatus EVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined4 auStackX_8 [2];
  FScriptContainerElement *pFStackX_10;
  ForAnyElementType FStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ForAnyElementType FStack_c0;
  int iStack_b8;
  int iStack_b4;
  FString FStack_b0;
  FString FStack_a0;
  ulong64 uStack_90;
  longlong lStack_88;
  code *apcStack_78 [5];
  undefined8 *puStack_50;
  
  uVar12 = 0;
  auStackX_8[0] = 0;
  pFVar13 = *(FScriptContainerElement **)param_1;
  pFStackX_10 = pFVar13;
  if (3 < (byte)LogTraceServices._0_1_) {
    Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (*(int *)((longlong)param_1 + 0x18) == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = *(wchar_t **)((longlong)param_1 + 0x10);
  }
  EVar6 = ``TraceServices::TModuleProvider<TraceServices::FPsymResolver>::
          LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::
          operator()(&pFStackX_10,*(FModule **)((longlong)param_1 + 8),pwVar16);
  if (EVar6 == Loaded) {
    this_00 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
    cVar7 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10);
    if (cVar7 == '\0') {
      pFVar11 = FPaths::GetPath(&FStack_a0,(FString *)((longlong)param_1 + 0x10));
      bVar4 = false;
      bVar8 = true;
    }
    else {
      iVar9 = *(int *)((longlong)param_1 + 0x18);
      _Src = *(void **)((longlong)param_1 + 0x10);
      FStack_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_b0.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        FStack_b0.Data.ArrayMax = 0;
        pFVar11 = &FStack_b0;
        bVar4 = true;
        bVar8 = false;
      }
      else {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&FStack_b0,iVar9,&FStack_b0.Data.ArrayMax);
        memcpy(FStack_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        pFVar11 = &FStack_b0;
        bVar4 = true;
        bVar8 = false;
      }
    }
    FStack_c0.Data = (FScriptContainerElement *)0x0;
    iStack_b8 = (pFVar11->Data).ArrayNum;
    lVar14 = (longlong)iStack_b8;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (iStack_b8 == 0) {
      iStack_b4 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_b8,0,&FStack_c0,iStack_b8,&iStack_b4);
      memcpy(FStack_c0.Data,pFVar1,lVar14 * 2);
    }
    if ((bVar8) && (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
    }
    lVar14 = *(longlong *)param_1;
    FStack_d8.Data = (FScriptContainerElement *)0x0;
    uStack_d0 = 0;
    AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    lVar17 = *(longlong *)param_1;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      do {
        lStack_c8 = *(longlong *)
                     (*(longlong *)(lVar17 + 0x30) + (uVar12 / *(ulonglong *)(lVar17 + 0x40)) * 0x10
                     ) + (uVar12 % *(ulonglong *)(lVar17 + 0x40)) * 0x40;
        if ((lStack_c8 != *(longlong *)((longlong)param_1 + 8)) && (2 < *(byte *)(lStack_c8 + 0x1d))
           ) {
          if ((FStack_d8.Data <= (FScriptContainerElement *)&lStack_c8) &&
             (((FScriptContainerElement *)&lStack_c8 <
               FStack_d8.Data + (longlong)uStack_d0._4_4_ * 8 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)uStack_d0;
          if ((int)uStack_d0 == uStack_d0._4_4_) {
            iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_d8,(int *)((longlong)&uStack_d0 + 4));
          }
          uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar9 + 1);
          *(longlong *)(FStack_d8.Data + (longlong)iVar9 * 8) = lStack_c8;
        }
        lVar17 = *(longlong *)param_1;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        pFVar13 = pFStackX_10;
      } while (uVar12 < *(ulonglong *)(lVar17 + 0x48));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    fVar5 = __real_3dcccccd;
    iVar9 = (int)uStack_d0;
    uVar12 = (ulonglong)(int)uStack_d0;
    pFStackX_10 = FStack_d8.Data + uVar12 * 8;
    FVar15.Data = FStack_d8.Data;
    while( true ) {
      pFVar1 = pFStackX_10;
      if ((int)uVar12 != iVar9) {
        `TCheckedPointerIterator<TraceServices::FModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (FVar15.Data == pFVar1) {
        if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d8.Data);
        }
        if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_c0.Data);
        }
        goto LAB_14d432eca;
      }
      pFVar2 = *(FModule **)FVar15.Data;
      if (*(char *)(*(longlong *)param_1 + 400) != '\0') break;
      FStack_a0.Data.ArrayNum = *(int *)&(pFVar2->Stats).Discovered;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (iStack_b8 != 0) {
        FVar18.Data = FStack_c0.Data;
      }
      uStack_90 = pFVar2->Base;
      this = *(FPsymResolver **)(pFVar13 + 0x180);
      lStack_88 = pFVar2->Size + uStack_90;
      apcStack_78[0] = (code *)0x0;
      puStack_50 = (undefined8 *)0x0;
      FStack_a0.Data.AllocatorInstance.Data = pFVar13;
      puStack_50 = FMemory::Malloc(0x28,8);
      *puStack_50 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFPsymResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
      ;
      puStack_50[1] = FStack_a0.Data.AllocatorInstance.Data;
      puStack_50[2] = CONCAT44(FStack_a0.Data.ArrayMax,FStack_a0.Data.ArrayNum);
      puStack_50[3] = uStack_90;
      puStack_50[4] = lStack_88;
      if (puStack_50 + 1 != (undefined8 *)0x0) {
        apcStack_78[0] =
             TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
             ::Call;
      }
      TraceServices::FPsymResolver::QueueModuleReload
                (this,pFVar2,(wchar_t *)FVar18.Data,
                 (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
                  *)apcStack_78);
      do {
        FWindowsPlatformProcess::Sleep(fVar5);
      } while (pFVar2->Status == (atomic<TraceServices::EModuleStatus>)0x1);
      uVar12 = uStack_d0 & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d8.Data);
    }
    if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c0.Data);
    }
  }
  else {
LAB_14d432eca:
    if (3 < (byte)LogTraceServices._0_1_) {
      Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FPsymResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// Call @ 14d444740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EModuleStatus": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>,void>
::Call(void *param_1)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  FModule *pFVar2;
  FSymslibResolver *this;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  EModuleStatus EVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined4 auStackX_8 [2];
  FScriptContainerElement *pFStackX_10;
  ForAnyElementType FStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ForAnyElementType FStack_c0;
  int iStack_b8;
  int iStack_b4;
  FString FStack_b0;
  FString FStack_a0;
  ulong64 uStack_90;
  longlong lStack_88;
  code *apcStack_78 [5];
  undefined8 *puStack_50;
  
  uVar12 = 0;
  auStackX_8[0] = 0;
  pFVar13 = *(FScriptContainerElement **)param_1;
  pFStackX_10 = pFVar13;
  if (3 < (byte)LogTraceServices._0_1_) {
    Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (*(int *)((longlong)param_1 + 0x18) == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = *(wchar_t **)((longlong)param_1 + 0x10);
  }
  EVar6 = ``TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::
          LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::
          operator()(&pFStackX_10,*(FModule **)((longlong)param_1 + 8),pwVar16);
  if (EVar6 == Loaded) {
    this_00 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
    cVar7 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10);
    if (cVar7 == '\0') {
      pFVar11 = FPaths::GetPath(&FStack_a0,(FString *)((longlong)param_1 + 0x10));
      bVar4 = false;
      bVar8 = true;
    }
    else {
      iVar9 = *(int *)((longlong)param_1 + 0x18);
      _Src = *(void **)((longlong)param_1 + 0x10);
      FStack_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_b0.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        FStack_b0.Data.ArrayMax = 0;
        pFVar11 = &FStack_b0;
        bVar4 = true;
        bVar8 = false;
      }
      else {
        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&FStack_b0,iVar9,&FStack_b0.Data.ArrayMax);
        memcpy(FStack_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
        pFVar11 = &FStack_b0;
        bVar4 = true;
        bVar8 = false;
      }
    }
    FStack_c0.Data = (FScriptContainerElement *)0x0;
    iStack_b8 = (pFVar11->Data).ArrayNum;
    lVar14 = (longlong)iStack_b8;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (iStack_b8 == 0) {
      iStack_b4 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_b8,0,&FStack_c0,iStack_b8,&iStack_b4);
      memcpy(FStack_c0.Data,pFVar1,lVar14 * 2);
    }
    if ((bVar8) && (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
    }
    lVar14 = *(longlong *)param_1;
    FStack_d8.Data = (FScriptContainerElement *)0x0;
    uStack_d0 = 0;
    AcquireSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    lVar17 = *(longlong *)param_1;
    if (*(longlong *)(lVar17 + 0x48) != 0) {
      do {
        lStack_c8 = *(longlong *)
                     (*(longlong *)(lVar17 + 0x30) + (uVar12 / *(ulonglong *)(lVar17 + 0x40)) * 0x10
                     ) + (uVar12 % *(ulonglong *)(lVar17 + 0x40)) * 0x40;
        if ((lStack_c8 != *(longlong *)((longlong)param_1 + 8)) && (2 < *(byte *)(lStack_c8 + 0x1d))
           ) {
          if ((FStack_d8.Data <= (FScriptContainerElement *)&lStack_c8) &&
             (((FScriptContainerElement *)&lStack_c8 <
               FStack_d8.Data + (longlong)uStack_d0._4_4_ * 8 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)uStack_d0;
          if ((int)uStack_d0 == uStack_d0._4_4_) {
            iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_d8,(int *)((longlong)&uStack_d0 + 4));
          }
          uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar9 + 1);
          *(longlong *)(FStack_d8.Data + (longlong)iVar9 * 8) = lStack_c8;
        }
        lVar17 = *(longlong *)param_1;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        pFVar13 = pFStackX_10;
      } while (uVar12 < *(ulonglong *)(lVar17 + 0x48));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar14 + 0x10));
    fVar5 = __real_3dcccccd;
    iVar9 = (int)uStack_d0;
    uVar12 = (ulonglong)(int)uStack_d0;
    pFStackX_10 = FStack_d8.Data + uVar12 * 8;
    FVar15.Data = FStack_d8.Data;
    while( true ) {
      pFVar1 = pFStackX_10;
      if ((int)uVar12 != iVar9) {
        `TCheckedPointerIterator<TraceServices::FModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (FVar15.Data == pFVar1) {
        if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d8.Data);
        }
        if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_c0.Data);
        }
        goto LAB_14d43333a;
      }
      pFVar2 = *(FModule **)FVar15.Data;
      if (*(char *)(*(longlong *)param_1 + 400) != '\0') break;
      FStack_a0.Data.ArrayNum = *(int *)&(pFVar2->Stats).Discovered;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (iStack_b8 != 0) {
        FVar18.Data = FStack_c0.Data;
      }
      uStack_90 = pFVar2->Base;
      this = *(FSymslibResolver **)(pFVar13 + 0x180);
      lStack_88 = pFVar2->Size + uStack_90;
      apcStack_78[0] = (code *)0x0;
      puStack_50 = (undefined8 *)0x0;
      FStack_a0.Data.AllocatorInstance.Data = pFVar13;
      puStack_50 = FMemory::Malloc(0x28,8);
      *puStack_50 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_N___LoadSymbolsForModuleUsingPath___TModuleProvider_VFSymslibResolver_TraceServices___TraceServices__UEAA_AV__TRefCountPtr_VFBaseGraphTask_____KPEB_W_Z_QEBA_XZ_QEBA_PEAUFModule_4_1_Z__0A__00_Function_Private_Core_UE__6B_
      ;
      puStack_50[1] = FStack_a0.Data.AllocatorInstance.Data;
      puStack_50[2] = CONCAT44(FStack_a0.Data.ArrayMax,FStack_a0.Data.ArrayNum);
      puStack_50[3] = uStack_90;
      puStack_50[4] = lStack_88;
      if (puStack_50 + 1 != (undefined8 *)0x0) {
        apcStack_78[0] =
             TFunctionRefCaller<```TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&>
             ::Call;
      }
      TraceServices::FSymslibResolver::QueueModuleReload
                (this,pFVar2,(wchar_t *)FVar18.Data,
                 (TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
                  *)apcStack_78);
      do {
        FWindowsPlatformProcess::Sleep(fVar5);
      } while (pFVar2->Status == (atomic<TraceServices::EModuleStatus>)0x1);
      uVar12 = uStack_d0 & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d8.Data);
    }
    if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c0.Data);
    }
  }
  else {
LAB_14d43333a:
    if (3 < (byte)LogTraceServices._0_1_) {
      Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_virtual_class_TRefCountPtr<FBaseGraphTask>___cdecl_TraceServices::TModuleProvider<TraceServices::FSymslibResolver>::LoadSymbolsForModuleUsingPath(unsigned___int64,wchar_t_const*___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// Call @ 14d444750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  return;
}

// Call @ 14d444760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  return;
}

// Call @ 14d444770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FSymslibResolver::LoadModule'::__l15::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `TraceServices::FSymslibResolver::LoadModule'::__l15::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d444780

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateOrderedByEndTime'::__l2::<lambda_2>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4447a0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateOrderedByEndTime'::__l2::<lambda_2>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4447c0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateOrderedByStartTime'::__l2::<lambda_2>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d4447e0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  EEventEnumerate EVar1;
  
  EVar1 = `TraceServices::
          FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          ::EnumerateOrderedByStartTime'::__l2::<lambda_2>::operator()
                    (param_1,*param_2,*param_3,param_4);
  return EVar1;
}

// Call @ 14d444800

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegions'::__l2::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->EndTime;
}

// Call @ 14d444810

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegionsBackwards'::__l2::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->EndTime;
}

// Call @ 14d444820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FSymslibResolver::QueueModuleLoad'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  TraceServices::FSymslibResolver::LoadModuleTracked
            (*(FSymslibResolver **)param_1,*(FModuleEntry **)((longlong)param_1 + 8),&local_18);
  LOCK();
  *(int *)(*(longlong *)param_1 + 0x8088) = *(int *)(*(longlong *)param_1 + 0x8088) + -1;
  UNLOCK();
  return;
}

// Call @ 14d444870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l6::<lambda_2>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *apFStack_18 [2];
  
  if (param_2->EndTime <= *(double *)param_1) {
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 8);
    apFStack_18[0] = param_2;
    if ((pFVar2->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d444880

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegions'::__l9::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->EndTime;
}

// Call @ 14d444890

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FRegionTimeline::EnumerateRegionsBackwards'::__l9::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->EndTime;
}

// Call @ 14d4448a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FTimingProfilerProvider::CreateAggregationInternal'::__l10::<lambda_2>,void,TraceServices::FFrame_const_&>
::Call(void *param_1,FFrame *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  double *pdStack_58;
  FScriptContainerElement *pFStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  dStack_28 = param_2->StartTime;
  dStack_20 = param_2->EndTime;
  pFVar2 = *(ForAnyElementType **)param_1;
  pFVar3 = pFVar2->Data;
  if ((pFVar3 <= (FScriptContainerElement *)&dStack_28) &&
     (lVar7 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4),
     (FScriptContainerElement *)&dStack_28 < pFVar3 + lVar7 * 0x10)) {
    lStack_40 = (longlong)*(int *)&pFVar2[1].Data;
    uStack_38 = 0x10;
    pdStack_58 = &dStack_28;
    pFStack_50 = pFVar3;
    lStack_48 = lVar7;
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
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(double *)(pFVar3 + (longlong)iVar6 * 0x10) = dStack_28;
  *(double *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = dStack_20;
  return;
}

// Call @ 14d4448b0

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FLoadTimeProfilerCpuEvent *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  EEventEnumerate EVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  double local_res18 [2];
  
  puVar1 = *(undefined4 **)param_1;
  local_res18[0] = *param_3;
  local_res10[0] = *puVar1;
  local_res8[0] = *param_2;
  CheckCallable(*(void **)(puVar1 + 0x1c));
  pcVar2 = *(code **)(puVar1 + 0x1c);
  plVar5 = (longlong *)(puVar1 + 0x20);
  if (*(longlong **)(puVar1 + 0x26) != (longlong *)0x0) {
    plVar5 = *(longlong **)(puVar1 + 0x26);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  EVar3 = (*pcVar2)(uVar4,local_res8,local_res18,param_4,local_res10);
  return EVar3;
}

// Call @ 14d444930

EEventEnumerate __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
::Call(void *param_1,bool *param_2,double *param_3,FTimingProfilerEvent *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  EEventEnumerate EVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  double local_res18 [2];
  
  puVar1 = *(undefined4 **)param_1;
  local_res18[0] = *param_3;
  local_res10[0] = *puVar1;
  local_res8[0] = *param_2;
  CheckCallable(*(void **)(puVar1 + 0x1c));
  pcVar2 = *(code **)(puVar1 + 0x1c);
  plVar5 = (longlong *)(puVar1 + 0x20);
  if (*(longlong **)(puVar1 + 0x26) != (longlong *)0x0) {
    plVar5 = *(longlong **)(puVar1 + 0x26);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  EVar3 = (*pcVar2)(uVar4,local_res8,local_res18,param_4,local_res10);
  return EVar3;
}

// Call @ 14d4449b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l7::<lambda_3>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *apFStack_18 [2];
  
  if (*(double *)param_1 < param_2->StartTime || *(double *)param_1 == param_2->StartTime) {
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 8);
    apFStack_18[0] = param_2;
    if ((pFVar2->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d4449c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l8::<lambda_4>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  if (((param_2->StartTime <= *(double *)param_1) &&
      (dVar2 = param_2->EndTime, *(double *)param_1 <= dVar2)) &&
     (dVar2 < *(double *)((longlong)param_1 + 8) || dVar2 == *(double *)((longlong)param_1 + 8))) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d4449d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l9::<lambda_5>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  if (((*(double *)param_1 <= param_2->StartTime) &&
      (dVar2 = *(double *)((longlong)param_1 + 8), param_2->StartTime <= dVar2)) &&
     (dVar2 < param_2->EndTime || dVar2 == param_2->EndTime)) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d4449e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l10::<lambda_6>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FAllocationItem *apFStack_18 [2];
  
  dVar2 = *(double *)param_1;
  dVar3 = param_2->StartTime;
  if (dVar3 <= dVar2) {
    dVar4 = param_2->EndTime;
    if ((dVar2 <= dVar4) &&
       (dVar4 < *(double *)((longlong)param_1 + 8) || dVar4 == *(double *)((longlong)param_1 + 8)))
    goto LAB_14d434ab9;
    if (dVar3 < dVar2) {
      return;
    }
  }
  dVar2 = *(double *)((longlong)param_1 + 8);
  if (dVar2 < dVar3) {
    return;
  }
  if (param_2->EndTime <= dVar2 && dVar2 != param_2->EndTime) {
    return;
  }
LAB_14d434ab9:
  pFVar5 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
  apFStack_18[0] = param_2;
  if (((pFVar5->Data <= (FScriptContainerElement *)apFStack_18) &&
      ((FScriptContainerElement *)apFStack_18 <
       pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)&pFVar5[1].Data;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar8 + 1;
  *(FAllocationItem **)(pFVar5->Data + (longlong)iVar8 * 8) = apFStack_18[0];
  return;
}

// Call @ 14d4449f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l11::<lambda_7>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  dVar2 = param_2->EndTime;
  if ((*(double *)param_1 <= dVar2) &&
     (dVar2 < *(double *)((longlong)param_1 + 8) || dVar2 == *(double *)((longlong)param_1 + 8))) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d444a00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l12::<lambda_8>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *apFStack_18 [2];
  
  dVar2 = param_2->StartTime;
  if ((*(double *)param_1 <= dVar2) &&
     (dVar2 < *(double *)((longlong)param_1 + 8) || dVar2 == *(double *)((longlong)param_1 + 8))) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    apFStack_18[0] = param_2;
    if ((pFVar3->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
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
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d444a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l13::<lambda_9>,void,TraceServices::FAllocationItem_const_&>
::Call(void *param_1,FAllocationItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *apFStack_18 [2];
  
  if ((*(double *)param_1 < param_2->StartTime || *(double *)param_1 == param_2->StartTime) &&
     (param_2->EndTime <= *(double *)((longlong)param_1 + 8))) {
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    apFStack_18[0] = param_2;
    if ((pFVar2->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = apFStack_18[0];
  }
  return;
}

// Call @ 14d497410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::BookmarksToCsv'::__l2::<lambda_1>,void,TraceServices::FBookmark_const_&>
::Call(void *param_1,FBookmark *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_e8 [32];
  FString FStack_c8;
  TStringConversion<TStringConvert<wchar_t,char>,128> TStack_b8;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  ::FString::PrintfImpl(&FStack_c8,L"%s,%.4f\n");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (FStack_c8.Data.ArrayNum != 0) {
    FVar4.Data = FStack_c8.Data.AllocatorInstance.Data;
  }
  StringCast<char,128,wchar_t>(&TStack_b8,(wchar_t *)FVar4.Data);
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = (longlong *)*plVar1;
  (**(code **)(*plVar1 + 0x188))(plVar1,TStack_b8.Ptr,(longlong)TStack_b8.StringLength);
  if ((void *)TStack_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_b8._padding_);
  }
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14d497420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FLoadTimeProfilerModule::GenerateReports'::__l2::<lambda_1>,void,TraceServices::FBookmark_const_&>
::Call(void *param_1,FBookmark *param_2)

{
  int iVar1;
  
  if ((__real_ffefffffffffffff == **(double **)((longlong)param_1 + 0x20)) &&
     (1 < *(int *)((longlong)param_1 + 8))) {
    iVar1 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)param_1,param_2->Text);
    if (iVar1 == 0) {
      **(double **)((longlong)param_1 + 0x20) = param_2->Time;
    }
  }
  if ((__real_7fefffffffffffff == **(double **)((longlong)param_1 + 0x28)) &&
     (1 < *(int *)((longlong)param_1 + 0x18))) {
    iVar1 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)((longlong)param_1 + 0x10),param_2->Text);
    if (iVar1 == 0) {
      **(double **)((longlong)param_1 + 0x28) = param_2->Time;
    }
  }
  return;
}

// Call @ 14d497430

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_1>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->BeginTime;
}

// Call @ 14d497440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TraceServices::FCsvProfilerModule::GenerateReports'::__l5::<lambda_1>,void,TraceServices::FCaptureInfo_const_&>
::Call(void *param_1,FCaptureInfo *param_2)

{
  wchar_t *_Str;
  int iVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  size_t sVar3;
  IUntypedTable *pIVar4;
  int iVar5;
  ForAnyElementType FVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TStack_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TStack_28;
  FString FStack_18;
  
  _Str = param_2->Filename;
  pTVar2 = &::FString::FString(&FStack_18,(wchar_t *)**(undefined8 **)((longlong)param_1 + 8))->Data
  ;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&TStack_28,pTVar2,0xd - (uint)(pTVar2->ArrayNum != 0));
  ::FString::PathAppend((FString *)&TStack_28,L"CsvProfiler",0xb);
  sVar3 = wcslen(_Str);
  iVar1 = (int)sVar3;
  if ((TStack_28.ArrayNum != 0) || (iVar5 = 2, iVar1 == -1)) {
    iVar5 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&TStack_38,&TStack_28,iVar5 + iVar1);
  ::FString::PathAppend((FString *)&TStack_38,_Str,iVar1);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (TStack_38.ArrayNum != 0) {
    FVar6.Data = TStack_38.AllocatorInstance.Data;
  }
  pIVar4 = (IUntypedTable *)
           (**(code **)(**(longlong **)param_1 + 0x28))(*(longlong **)param_1,param_2->Id);
  TraceServices::Table2Csv(pIVar4,(wchar_t *)FVar6.Data);
  if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_38.AllocatorInstance.Data);
  }
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14d497450

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPagedArrayFilteringTest::RunTest'::__l2::<lambda_2>,double,`FPagedArrayFilteringTest::RunTest'::__l2::FTimeRegion_const_&>
::Call(void *param_1,FTimeRegion *param_2)

{
  return param_2->EndTime;
}

