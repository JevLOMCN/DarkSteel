// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 35

// <lambda_invoker_cdecl> @ 14d4067e0

int __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_10>::
<lambda_invoker_cdecl>(FRequestsTableRow *param_1)

{
  return (param_1->Packages).ArrayNum;
}

// <lambda_invoker_cdecl> @ 14d4067f0

ulong64 __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_11>::
<lambda_invoker_cdecl>(FRequestsTableRow *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  pFVar8 = (param_1->Packages).AllocatorInstance.Data;
  iVar2 = (param_1->Packages).ArrayNum;
  uVar7 = 0;
  local_res10 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar5 = local_res10;
    if ((param_1->Packages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FPackageInfo_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar5) break;
    lVar4 = *(longlong *)pFVar8;
    plVar6 = *(longlong **)(lVar4 + 0x30);
    iVar3 = *(int *)(lVar4 + 0x38);
    uVar7 = uVar7 + *(uint *)(lVar4 + 0x10);
    plVar1 = plVar6 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x38) != iVar3) {
        `TCheckedPointerIterator<TraceServices::FPackageExportInfo_const_*_const,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (plVar6 == plVar1) break;
      uVar7 = uVar7 + *(longlong *)(*plVar6 + 0x10);
      plVar6 = plVar6 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  return uVar7;
}

// <lambda_invoker_cdecl> @ 14d4068a0

wchar_t * __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_12>::
<lambda_invoker_cdecl>(FRequestsTableRow *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Packages).ArrayNum;
  if (iVar1 == 0) {
    return L"N/A";
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar2)();
      return pwVar4;
    }
  }
  return *(wchar_t **)(*(longlong *)(param_1->Packages).AllocatorInstance.Data + 8);
}

// <lambda_invoker_cdecl> @ 14d406930

int __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FLoadRequest *param_1)

{
  return (param_1->Packages).ArrayNum;
}

// <lambda_invoker_cdecl> @ 14d406a00

wchar_t * __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_2>::
<lambda_invoker_cdecl>(FLoadRequest *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Packages).ArrayNum;
  if (iVar1 == 0) {
    return L"N/A";
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar2)();
      return pwVar4;
    }
  }
  return *(wchar_t **)(*(longlong *)(param_1->Packages).AllocatorInstance.Data + 8);
}

// <lambda_invoker_cdecl> @ 14d406aa0

wchar_t * __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_3>::
<lambda_invoker_cdecl>(FPackagesTableRow *param_1)

{
  return param_1->PackageInfo->Name;
}

// <lambda_invoker_cdecl> @ 14d406b20

ulong64 __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_4>::
<lambda_invoker_cdecl>(FPackagesTableRow *param_1)

{
  if (param_1->PackageInfo != (FPackageInfo *)0x0) {
    return param_1->PackageInfo->RequestId;
  }
  return 0;
}

// <lambda_invoker_cdecl> @ 14d406bb0

int __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_5>::
<lambda_invoker_cdecl>(FPackagesTableRow *param_1)

{
  if (param_1->PackageInfo != (FPackageInfo *)0x0) {
    return (param_1->PackageInfo->ImportedPackages).ArrayNum;
  }
  return 0;
}

// <lambda_invoker_cdecl> @ 14d406c10

wchar_t * __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_6>::
<lambda_invoker_cdecl>(FExportsTableRow *param_1)

{
  FPackageInfo *pFVar1;
  
  pFVar1 = param_1->ExportInfo->Package;
  if (pFVar1 != (FPackageInfo *)0x0) {
    return pFVar1->Name;
  }
  return L"[unknown]";
}

// <lambda_invoker_cdecl> @ 14d406c70

ulong64 __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_7>::
<lambda_invoker_cdecl>(FExportsTableRow *param_1)

{
  FPackageInfo *pFVar1;
  
  pFVar1 = param_1->ExportInfo->Package;
  if (pFVar1 != (FPackageInfo *)0x0) {
    return pFVar1->RequestId;
  }
  return 0;
}

// <lambda_invoker_cdecl> @ 14d406cd0

wchar_t * __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_8>::
<lambda_invoker_cdecl>(FExportsTableRow *param_1)

{
  FClassInfo *pFVar1;
  
  pFVar1 = param_1->ExportInfo->Class;
  if (pFVar1 != (FClassInfo *)0x0) {
    return pFVar1->Name;
  }
  return L"[unknown]";
}

// <lambda_invoker_cdecl> @ 14d406d30

wchar_t * __cdecl
`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::<lambda_9>::
<lambda_invoker_cdecl>(FExportsTableRow *param_1)

{
  ELoadTimeProfilerObjectEventType EVar1;
  
  EVar1 = param_1->EventType;
  if (EVar1 == LoadTimeProfilerObjectEventType_Create) {
    return L"Create";
  }
  if (EVar1 == LoadTimeProfilerObjectEventType_Serialize) {
    return L"Serialize";
  }
  if (EVar1 == LoadTimeProfilerObjectEventType_PostLoad) {
    return L"PostLoad";
  }
  if (EVar1 != LoadTimeProfilerObjectEventType_None) {
    return L"[invalid]";
  }
  return L"None";
}

// FLoadTimeProfilerProvider @ 14d421c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d423617) */
/* WARNING: Removing unreachable block (ram,0x00014d423255) */
/* WARNING: Removing unreachable block (ram,0x00014d422e33) */
/* WARNING: Removing unreachable block (ram,0x00014d422a53) */
/* WARNING: Removing unreachable block (ram,0x00014d4226fe) */
/* WARNING: Removing unreachable block (ram,0x00014d4223b8) */
/* WARNING: Removing unreachable block (ram,0x00014d4220b3) */
/* WARNING: Removing unreachable block (ram,0x00014d422212) */
/* WARNING: Removing unreachable block (ram,0x00014d422552) */
/* WARNING: Removing unreachable block (ram,0x00014d4228a1) */
/* WARNING: Removing unreachable block (ram,0x00014d422c85) */
/* WARNING: Removing unreachable block (ram,0x00014d423089) */
/* WARNING: Removing unreachable block (ram,0x00014d42343d) */
/* WARNING: Removing unreachable block (ram,0x00014d4237bd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffaa8 : 0x00014d4220b7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FLoadTimeProfilerProvider * __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider
          (FLoadTimeProfilerProvider *this,IAnalysisSession *param_1,
          IEditableCounterProvider *param_2)

{
  TArray<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TraceServices::TTableLayout<TraceServices::FLoadRequest>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int *piVar5;
  IAnalysisSession *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ILinearAllocator *pIVar10;
  FLoadTimeProfilerProvider *pFVar11;
  TTableLayout<TraceServices::FLoadRequest> *pTVar12;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar13;
  TTableLayout<TraceServices::FPackagesTableRow> *pTVar14;
  TTableLayout<TraceServices::FExportsTableRow> *pTVar15;
  TTableLayout<TraceServices::FRequestsTableRow> *pTVar16;
  longlong lVar17;
  undefined ***pppuVar18;
  undefined8 *puVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_608 [32];
  FString *local_5e8;
  FScriptContainerElement *local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  undefined8 local_5c8;
  FLoadTimeProfilerProvider *local_5b8;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *local_5b0;
  TTableLayout<TraceServices::FPackagesTableRow> *local_5a8;
  TTableLayout<TraceServices::FExportsTableRow> *local_5a0;
  TTableLayout<TraceServices::FRequestsTableRow> *local_598;
  FString local_588;
  undefined8 local_578;
  code *local_568;
  undefined8 local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 local_548;
  undefined8 local_540;
  FString local_538;
  undefined8 local_528;
  code *local_518;
  undefined8 local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 local_4f0;
  FString local_4e8;
  undefined4 local_4d8;
  undefined4 local_4d4;
  code *local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  FString local_498;
  undefined4 local_488;
  undefined4 local_484;
  code *local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  FString local_448;
  undefined8 local_438;
  code *local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  FString local_3f8;
  undefined8 local_3e8;
  code *local_3d8;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined8 local_3b0;
  FString local_3a8;
  undefined4 local_398;
  undefined4 local_394;
  code *local_388;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 local_360;
  FString local_358;
  undefined8 local_348;
  code *local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  FString local_308;
  undefined8 local_2f8;
  code *local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  FString local_2b8;
  undefined4 local_2a8;
  undefined4 local_2a4;
  code *local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  FString local_268;
  undefined8 local_258;
  code *local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  FString local_218;
  undefined4 local_208;
  undefined4 local_204;
  code *local_1f8;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  undefined8 local_1b8;
  code *local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  FString local_178;
  undefined8 local_168;
  code *local_158;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [48];
  undefined **local_f8;
  code *local_f0;
  undefined ***local_e0;
  undefined1 local_d8 [48];
  undefined **local_a8;
  code *local_a0;
  undefined ***local_90;
  undefined1 local_88 [48];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_608;
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FLoadTimeProfilerProvider_TraceServices__6B_;
  this->EditableCounterProvider = param_2;
  local_5b8 = this;
  pIVar10 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->ClassInfos).PageSize = 0x4000;
  (this->ClassInfos).Allocator = pIVar10;
  (this->ClassInfos).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassInfos).PagesArray.ArrayNum = 0;
  (this->ClassInfos).PagesArray.ArrayMax = 0;
  (this->ClassInfos).FirstPage = (TPagedArrayPage<TraceServices::FClassInfo> *)0x0;
  (this->ClassInfos).LastPage = (TPagedArrayPage<TraceServices::FClassInfo> *)0x0;
  (this->ClassInfos).TotalItemCount = 0;
  pIVar10 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (this->Requests).Allocator = pIVar10;
  (this->Requests).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Requests).PagesArray.ArrayNum = 0;
  (this->Requests).PagesArray.ArrayMax = 0;
  (this->Requests).FirstPage = (TPagedArrayPage<TraceServices::FLoadRequest> *)0x0;
  (this->Requests).LastPage = (TPagedArrayPage<TraceServices::FLoadRequest> *)0x0;
  (this->Requests).PageSize = 0x4000;
  (this->Requests).TotalItemCount = 0;
  pIVar10 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (this->Packages).Allocator = pIVar10;
  (this->Packages).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Packages).PagesArray.ArrayNum = 0;
  (this->Packages).PagesArray.ArrayMax = 0;
  (this->Packages).FirstPage = (TPagedArrayPage<TraceServices::FPackageInfo> *)0x0;
  (this->Packages).LastPage = (TPagedArrayPage<TraceServices::FPackageInfo> *)0x0;
  (this->Packages).PageSize = 0x4000;
  (this->Packages).TotalItemCount = 0;
  pIVar10 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (this->IoDispatcherBatches).Allocator = pIVar10;
  (this->IoDispatcherBatches).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IoDispatcherBatches).PagesArray.ArrayNum = 0;
  (this->IoDispatcherBatches).PagesArray.ArrayMax = 0;
  (this->IoDispatcherBatches).FirstPage =
       (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch> *)0x0;
  (this->IoDispatcherBatches).LastPage =
       (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch> *)0x0;
  (this->IoDispatcherBatches).PageSize = 0x4000;
  (this->IoDispatcherBatches).TotalItemCount = 0;
  pIVar10 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pFVar11 = local_5b8;
  (this->Exports).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar5 = (int *)((longlong)&(this->RequestsTable)._padding_ + 4);
  (this->Exports).Allocator = pIVar10;
  (this->Exports).PagesArray.ArrayNum = 0;
  (this->Exports).PagesArray.ArrayMax = 0;
  (this->Exports).FirstPage = (TPagedArrayPage<TraceServices::FPackageExportInfo> *)0x0;
  (this->Exports).LastPage = (TPagedArrayPage<TraceServices::FPackageExportInfo> *)0x0;
  (this->Exports).PageSize = 0x4000;
  (this->Exports).TotalItemCount = 0;
  (this->CpuTimelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CpuTimelines).ArrayNum = 0;
  (this->CpuTimelines).ArrayMax = 0;
  *(undefined8 *)&this->CpuTimelinesThreadMap = 0;
  *(undefined8 *)&(this->CpuTimelinesThreadMap).field_0x8 = 0;
  *(undefined8 *)&(this->CpuTimelinesThreadMap).field_0x20 = 0;
  *(undefined4 *)&(this->CpuTimelinesThreadMap).field_0x28 = 0;
  *(undefined4 *)&(this->CpuTimelinesThreadMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CpuTimelinesThreadMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CpuTimelinesThreadMap).field_0x34 = 0;
  *(undefined8 *)&(this->CpuTimelinesThreadMap).field_0x40 = 0;
  *(undefined4 *)&(this->CpuTimelinesThreadMap).field_0x48 = 0;
  (this->RequestsTable)._padding_ =
       (longlong)&___7__TTableLayout_UFLoadRequest_TraceServices___TraceServices__6B_;
  (this->RequestsTable)._padding_ =
       (longlong)&___7__TTableView_UFLoadRequest_TraceServices___TraceServices__6B_;
  local_5b0 = &this->AggregatedStatsTableLayout;
  (this->RequestsTable)._padding_ = 0;
  *(undefined4 *)&(this->RequestsTable)._padding_ = 0;
  *piVar5 = 0;
  (this->RequestsTable).Rows = &this->Requests;
  pTVar1 = &(this->AggregatedStatsTableLayout).Columns;
  local_5b0->_padding_ =
       (longlong)
       &___7__TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__6B_;
  local_5a8 = &this->PackagesTableLayout;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar3 = &(this->PackagesTableLayout).Columns;
  (this->AggregatedStatsTableLayout).Columns.ArrayNum = 0;
  (this->AggregatedStatsTableLayout).Columns.ArrayMax = 0;
  local_5a8->_padding_ =
       (longlong)&___7__TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__6B_;
  local_5a0 = &this->ExportsTableLayout;
  local_5a0->_padding_ =
       (longlong)&___7__TTableLayout_UFExportsTableRow_TraceServices___TraceServices__6B_;
  (this->ExportsTableLayout).Columns.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportsTableLayout).Columns.ArrayNum = 0;
  (this->ExportsTableLayout).Columns.ArrayMax = 0;
  local_598 = &this->RequestsTableLayout;
  pTVar4 = &(this->RequestsTableLayout).Columns;
  local_598->_padding_ =
       (longlong)&___7__TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__6B_;
  pIVar6 = local_5b8->Session;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PackagesTableLayout).Columns.ArrayNum = 0;
  (this->PackagesTableLayout).Columns.ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RequestsTableLayout).Columns.ArrayNum = 0;
  (this->RequestsTableLayout).Columns.ArrayMax = 0;
  pIVar10 = (ILinearAllocator *)(**(code **)((longlong)*pIVar6 + 0xb8))();
  (pFVar11->Frames).PageSize = 0x1000;
  (pFVar11->Frames).Allocator = pIVar10;
  (pFVar11->Frames).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar11->Frames).PagesArray.ArrayNum = 0;
  (pFVar11->Frames).PagesArray.ArrayMax = 0;
  (pFVar11->Frames).FirstPage =
       (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame> *)0x0;
  (pFVar11->Frames).LastPage =
       (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame> *)0x0;
  (pFVar11->Frames).TotalItemCount = 0;
  pFVar11->bHasCreatedCounters = false;
  pFVar11->ActiveIoDispatcherBatchesCounter = (IEditableCounter *)0x0;
  pFVar11->TotalIoDispatcherBytesReadCounter = (IEditableCounter *)0x0;
  pFVar11->LoadingPackagesCounter = (IEditableCounter *)0x0;
  pFVar11->TotalLoaderBytesLoadedCounter = (IEditableCounter *)0x0;
  ::FString::FString(&local_588,L"Name");
  pFVar20 = (FScriptContainerElement *)(pFVar11->RequestsTable)._padding_;
  local_540 = 0;
  local_558 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_568 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
              ::Call;
  local_578 = 5;
  uStack_550 = 8;
  if ((pFVar20 <= (FScriptContainerElement *)&local_588) &&
     (lVar17 = (longlong)*(int *)((longlong)&(pFVar11->RequestsTable)._padding_ + 4),
     (FScriptContainerElement *)&local_588 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(int)(pFVar11->RequestsTable)._padding_;
    local_5c8 = 0x50;
    local_5e8 = &local_588;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (int)(pFVar11->RequestsTable)._padding_;
  if (iVar9 == *(int *)((longlong)&(pFVar11->RequestsTable)._padding_ + 4)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,(ForAnyElementType *)&(pFVar11->RequestsTable)._padding_,piVar5);
  }
  *(int *)&(pFVar11->RequestsTable)._padding_ = iVar9 + 1;
  puVar19 = (undefined8 *)((longlong)iVar9 * 0x50 + (pFVar11->RequestsTable)._padding_);
  *puVar19 = 0;
  *puVar19 = local_588.Data.AllocatorInstance.Data;
  local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar19 + 1) = local_588.Data.ArrayNum;
  *(int *)((longlong)puVar19 + 0xc) = local_588.Data.ArrayMax;
  local_588.Data.ArrayNum = 0;
  local_588.Data.ArrayMax = 0;
  *(undefined4 *)(puVar19 + 2) = (undefined4)local_578;
  *(undefined4 *)((longlong)puVar19 + 0x14) = local_578._4_4_;
  puVar19[4] = local_568;
  puVar19[9] = local_540;
  local_540 = 0;
  *(undefined4 *)(puVar19 + 6) = (undefined4)local_558;
  *(undefined4 *)((longlong)puVar19 + 0x34) = local_558._4_4_;
  *(undefined4 *)(puVar19 + 7) = uStack_550;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = uStack_54c;
  puVar19[8] = local_548;
  if (puVar19[4] == 0) {
    if (local_568 != (code *)0x0) {
      (*(code *)local_558[2])();
    }
  }
  else {
    local_568 = (code *)0x0;
  }
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_538,L"ThreadId");
  pFVar20 = (FScriptContainerElement *)(pFVar11->RequestsTable)._padding_;
  local_4f0 = 0;
  local_508 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_518 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned_int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
              ::Call;
  local_528 = 2;
  uStack_500 = 0x10;
  if ((pFVar20 <= (FScriptContainerElement *)&local_538) &&
     (lVar17 = (longlong)*(int *)((longlong)&(pFVar11->RequestsTable)._padding_ + 4),
     (FScriptContainerElement *)&local_538 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(int)(pFVar11->RequestsTable)._padding_;
    local_5c8 = 0x50;
    local_5e8 = &local_538;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (int)(pFVar11->RequestsTable)._padding_;
  if (iVar9 == *(int *)((longlong)&(pFVar11->RequestsTable)._padding_ + 4)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,(ForAnyElementType *)&(pFVar11->RequestsTable)._padding_,piVar5);
  }
  *(int *)&(pFVar11->RequestsTable)._padding_ = iVar9 + 1;
  puVar19 = (undefined8 *)((longlong)iVar9 * 0x50 + (pFVar11->RequestsTable)._padding_);
  *puVar19 = 0;
  *puVar19 = local_538.Data.AllocatorInstance.Data;
  local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar19 + 1) = local_538.Data.ArrayNum;
  *(int *)((longlong)puVar19 + 0xc) = local_538.Data.ArrayMax;
  local_538.Data.ArrayNum = 0;
  local_538.Data.ArrayMax = 0;
  *(undefined4 *)(puVar19 + 2) = (undefined4)local_528;
  *(undefined4 *)((longlong)puVar19 + 0x14) = local_528._4_4_;
  puVar19[4] = local_518;
  puVar19[9] = local_4f0;
  local_4f0 = 0;
  *(undefined4 *)(puVar19 + 6) = (undefined4)local_508;
  *(undefined4 *)((longlong)puVar19 + 0x34) = local_508._4_4_;
  *(undefined4 *)(puVar19 + 7) = uStack_500;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = uStack_4fc;
  puVar19[8] = local_4f8;
  if (puVar19[4] == 0) {
    if (local_518 != (code *)0x0) {
      (*(code *)local_508[2])();
    }
  }
  else {
    local_518 = (code *)0x0;
  }
  if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data.AllocatorInstance.Data);
  }
  pTVar12 = TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>
                      ((TTableLayout<TraceServices::FLoadRequest> *)
                       &(local_5b8->RequestsTable)._padding_,(pdm_4fe42ed8)0x18,L"StartTime",1);
  pTVar12 = TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>
                      (pTVar12,(pdm_4fe42ed8)0x20,L"EndTime",1);
  pTVar2 = &pTVar12->Columns;
  ::FString::FString(&local_4e8,L"PackageCount");
  pFVar20 = (pTVar2->AllocatorInstance).Data;
  local_4b8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_4b0 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  local_4c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
              ::Call;
  local_4d8 = 2;
  local_4d4 = 0x80000000;
  local_4a0 = 0;
  if ((pFVar20 <= (FScriptContainerElement *)&local_4e8) &&
     (lVar17 = (longlong)(pTVar12->Columns).ArrayMax,
     (FScriptContainerElement *)&local_4e8 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar12->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_4e8;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar12->Columns).ArrayNum;
  if (iVar9 == (pTVar12->Columns).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar2->AllocatorInstance,&(pTVar12->Columns).ArrayMax);
  }
  (pTVar12->Columns).ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_4e8.Data.AllocatorInstance.Data;
  local_4e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_4e8.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_4e8.Data.ArrayMax;
  local_4e8.Data.ArrayNum = 0;
  local_4e8.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = local_4d8;
  *(undefined4 *)(pFVar20 + 0x14) = local_4d4;
  *(code **)(pFVar20 + 0x20) = local_4c8;
  *(undefined8 *)(pFVar20 + 0x48) = local_4a0;
  local_4a0 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_4b8;
  *(undefined4 *)(pFVar20 + 0x34) = local_4b8._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = (undefined4)uStack_4b0;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_4b0._4_4_;
  *(undefined8 *)(pFVar20 + 0x40) = local_4a8;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_4c8 != (code *)0x0) {
      (*(code *)local_4b8[2])();
    }
  }
  else {
    local_4c8 = (code *)0x0;
  }
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_498,L"Size");
  pFVar20 = (pTVar2->AllocatorInstance).Data;
  local_450 = 0;
  local_468 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_460 = PackageSizeSum;
  local_478 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
              ::Call;
  local_488 = 2;
  local_484 = 0x80000002;
  if ((pFVar20 <= (FScriptContainerElement *)&local_498) &&
     (lVar17 = (longlong)(pTVar12->Columns).ArrayMax,
     (FScriptContainerElement *)&local_498 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar12->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_498;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar12->Columns).ArrayNum;
  if (iVar9 == (pTVar12->Columns).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar2->AllocatorInstance,&(pTVar12->Columns).ArrayMax);
  }
  (pTVar12->Columns).ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_498.Data.AllocatorInstance.Data;
  local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_498.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_498.Data.ArrayMax;
  local_498.Data.ArrayNum = 0;
  local_498.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = local_488;
  *(undefined4 *)(pFVar20 + 0x14) = local_484;
  *(code **)(pFVar20 + 0x20) = local_478;
  *(undefined8 *)(pFVar20 + 0x48) = local_450;
  local_450 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_468;
  *(undefined4 *)(pFVar20 + 0x34) = local_468._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = (undefined4)uStack_460;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_460._4_4_;
  *(undefined8 *)(pFVar20 + 0x40) = local_458;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_478 != (code *)0x0) {
      (*(code *)local_468[2])();
    }
  }
  else {
    local_478 = (code *)0x0;
  }
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_448,L"FirstPackage");
  pFVar20 = (pTVar2->AllocatorInstance).Data;
  local_400 = 0;
  local_418 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFLoadRequest_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_410 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
               <lambda_2>::<lambda_invoker_cdecl>;
  local_428 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
              ::Call;
  local_438 = 5;
  if ((pFVar20 <= (FScriptContainerElement *)&local_448) &&
     (lVar17 = (longlong)(pTVar12->Columns).ArrayMax,
     (FScriptContainerElement *)&local_448 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar12->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_448;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar12->Columns).ArrayNum;
  if (iVar9 == (pTVar12->Columns).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar2->AllocatorInstance,&(pTVar12->Columns).ArrayMax);
  }
  (pTVar12->Columns).ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_448.Data.AllocatorInstance.Data;
  local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_448.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_448.Data.ArrayMax;
  local_448.Data.ArrayNum = 0;
  local_448.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = (undefined4)local_438;
  *(undefined4 *)(pFVar20 + 0x14) = local_438._4_4_;
  *(code **)(pFVar20 + 0x20) = local_428;
  *(undefined8 *)(pFVar20 + 0x48) = local_400;
  local_400 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_418;
  *(undefined4 *)(pFVar20 + 0x34) = local_418._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = (undefined4)uStack_410;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_410._4_4_;
  *(undefined8 *)(pFVar20 + 0x40) = local_408;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_428 != (code *)0x0) {
      (*(code *)local_418[2])();
    }
  }
  else {
    local_428 = (code *)0x0;
  }
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_3f8,L"Name");
  pFVar20 = (pTVar1->AllocatorInstance).Data;
  local_3c8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_3d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadTimeProfilerAggregatedStats_const_&>
              ::Call;
  local_3e8 = 5;
  local_3b0 = 0;
  uStack_3c0 = 0;
  if ((pFVar20 <= (FScriptContainerElement *)&local_3f8) &&
     (lVar17 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayMax,
     (FScriptContainerElement *)&local_3f8 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_3f8;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (this->AggregatedStatsTableLayout).Columns.ArrayNum;
  if (iVar9 == (this->AggregatedStatsTableLayout).Columns.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar1->AllocatorInstance,
                       &(this->AggregatedStatsTableLayout).Columns.ArrayMax);
  }
  (this->AggregatedStatsTableLayout).Columns.ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_3f8.Data.AllocatorInstance.Data;
  local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_3f8.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_3f8.Data.ArrayMax;
  local_3f8.Data.ArrayNum = 0;
  local_3f8.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = (undefined4)local_3e8;
  *(undefined4 *)(pFVar20 + 0x14) = local_3e8._4_4_;
  *(code **)(pFVar20 + 0x20) = local_3d8;
  *(undefined8 *)(pFVar20 + 0x48) = local_3b0;
  local_3b0 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_3c8;
  *(undefined4 *)(pFVar20 + 0x34) = local_3c8._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = uStack_3c0;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_3bc;
  *(undefined8 *)(pFVar20 + 0x40) = local_3b8;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_3d8 != (code *)0x0) {
      (*(code *)local_3c8[2])();
    }
  }
  else {
    local_3d8 = (code *)0x0;
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_3a8,L"Count");
  pFVar20 = (pTVar1->AllocatorInstance).Data;
  local_378 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_388 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadTimeProfilerAggregatedStats_const_&>
              ::Call;
  local_398 = 2;
  local_394 = 0x80000000;
  local_360 = 0;
  uStack_370 = 8;
  if ((pFVar20 <= (FScriptContainerElement *)&local_3a8) &&
     (lVar17 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayMax,
     (FScriptContainerElement *)&local_3a8 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(this->AggregatedStatsTableLayout).Columns.ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_3a8;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (this->AggregatedStatsTableLayout).Columns.ArrayNum;
  if (iVar9 == (this->AggregatedStatsTableLayout).Columns.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar1->AllocatorInstance,
                       &(this->AggregatedStatsTableLayout).Columns.ArrayMax);
  }
  (this->AggregatedStatsTableLayout).Columns.ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_3a8.Data.AllocatorInstance.Data;
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_3a8.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_3a8.Data.ArrayMax;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = local_398;
  *(undefined4 *)(pFVar20 + 0x14) = local_394;
  *(code **)(pFVar20 + 0x20) = local_388;
  *(undefined8 *)(pFVar20 + 0x48) = local_360;
  local_360 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_378;
  *(undefined4 *)(pFVar20 + 0x34) = local_378._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = uStack_370;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_36c;
  *(undefined8 *)(pFVar20 + 0x40) = local_368;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_388 != (code *)0x0) {
      (*(code *)local_378[2])();
    }
  }
  else {
    local_388 = (code *)0x0;
  }
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  pTVar13 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>
                      (local_5b0,(pdm_2f06e9ad)0x10,L"Total",0x80000001);
  pTVar13 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>
                      (pTVar13,(pdm_2f06e9ad)0x18,L"Min",1);
  pTVar13 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>
                      (pTVar13,(pdm_2f06e9ad)0x20,L"Max",1);
  pTVar13 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>
                      (pTVar13,(pdm_2f06e9ad)0x28,L"Avg",1);
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>
            (pTVar13,(pdm_2f06e9ad)0x30,L"Med",1);
  ::FString::FString(&local_358,L"Package");
  pFVar20 = (pTVar3->AllocatorInstance).Data;
  local_328 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_320 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
               <lambda_3>::<lambda_invoker_cdecl>;
  local_338 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
              ::Call;
  local_348 = 5;
  local_310 = 0;
  if ((pFVar20 <= (FScriptContainerElement *)&local_358) &&
     (lVar17 = (longlong)(this->PackagesTableLayout).Columns.ArrayMax,
     (FScriptContainerElement *)&local_358 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(this->PackagesTableLayout).Columns.ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_358;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (this->PackagesTableLayout).Columns.ArrayNum;
  if (iVar9 == (this->PackagesTableLayout).Columns.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar3->AllocatorInstance,
                       &(this->PackagesTableLayout).Columns.ArrayMax);
  }
  (this->PackagesTableLayout).Columns.ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_358.Data.AllocatorInstance.Data;
  local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_358.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_358.Data.ArrayMax;
  local_358.Data.ArrayNum = 0;
  local_358.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = (undefined4)local_348;
  *(undefined4 *)(pFVar20 + 0x14) = local_348._4_4_;
  *(code **)(pFVar20 + 0x20) = local_338;
  *(undefined8 *)(pFVar20 + 0x48) = local_310;
  local_310 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_328;
  *(undefined4 *)(pFVar20 + 0x34) = local_328._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = (undefined4)uStack_320;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_320._4_4_;
  *(undefined8 *)(pFVar20 + 0x40) = local_318;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_338 != (code *)0x0) {
      (*(code *)local_328[2])();
    }
  }
  else {
    local_338 = (code *)0x0;
  }
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_308,L"RequestId");
  pFVar20 = (pTVar3->AllocatorInstance).Data;
  local_2d8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_2d0 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
               <lambda_4>::<lambda_invoker_cdecl>;
  local_2e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
              ::Call;
  local_2f8 = 2;
  local_2c0 = 0;
  if ((pFVar20 <= (FScriptContainerElement *)&local_308) &&
     (lVar17 = (longlong)(this->PackagesTableLayout).Columns.ArrayMax,
     (FScriptContainerElement *)&local_308 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(this->PackagesTableLayout).Columns.ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_308;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (this->PackagesTableLayout).Columns.ArrayNum;
  if (iVar9 == (this->PackagesTableLayout).Columns.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar3->AllocatorInstance,
                       &(this->PackagesTableLayout).Columns.ArrayMax);
  }
  (this->PackagesTableLayout).Columns.ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_308.Data.AllocatorInstance.Data;
  local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_308.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_308.Data.ArrayMax;
  local_308.Data.ArrayNum = 0;
  local_308.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = (undefined4)local_2f8;
  *(undefined4 *)(pFVar20 + 0x14) = local_2f8._4_4_;
  *(code **)(pFVar20 + 0x20) = local_2e8;
  *(undefined8 *)(pFVar20 + 0x48) = local_2c0;
  local_2c0 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_2d8;
  *(undefined4 *)(pFVar20 + 0x34) = local_2d8._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = (undefined4)uStack_2d0;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_2d0._4_4_;
  *(undefined8 *)(pFVar20 + 0x40) = local_2c8;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_2e8 != (code *)0x0) {
      (*(code *)local_2d8[2])();
    }
  }
  else {
    local_2e8 = (code *)0x0;
  }
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  pTVar14 = TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>
                      (local_5a8,(pdm_a37833e4)0x8,L"SerializedSize",0x80000002);
  pTVar14 = TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>
                      (pTVar14,(pdm_a37833e4)0x10,L"SerializedHeaderSize",0x80000002);
  pTVar14 = TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>
                      (pTVar14,(pdm_a37833e4)0x18,L"SerializedExportsCount",0x80000000);
  pTVar14 = TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>
                      (pTVar14,(pdm_a37833e4)0x20,L"SerializedExportsSize",0x80000002);
  pTVar14 = TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>
                      (pTVar14,(pdm_47920dee)0x28,L"MainThreadTime",0x80000001);
  pTVar14 = TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>
                      (pTVar14,(pdm_47920dee)0x30,L"AsyncLoadingThreadTime",0x80000001);
  pTVar3 = &pTVar14->Columns;
  ::FString::FString(&local_2b8,L"ImportedPackagesCount");
  pFVar20 = (pTVar3->AllocatorInstance).Data;
  local_288 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFPackagesTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_280 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
               <lambda_5>::<lambda_invoker_cdecl>;
  local_298 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
              ::Call;
  local_2a8 = 2;
  local_2a4 = 0x80000000;
  local_270 = 0;
  if ((pFVar20 <= (FScriptContainerElement *)&local_2b8) &&
     (lVar17 = (longlong)(pTVar14->Columns).ArrayMax,
     (FScriptContainerElement *)&local_2b8 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar14->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_2b8;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar14->Columns).ArrayNum;
  piVar5 = &(pTVar14->Columns).ArrayMax;
  if (iVar9 == *piVar5) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar3->AllocatorInstance,piVar5);
  }
  (pTVar14->Columns).ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_2b8.Data.AllocatorInstance.Data;
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_2b8.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_2b8.Data.ArrayMax;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = local_2a8;
  *(undefined4 *)(pFVar20 + 0x14) = local_2a4;
  *(code **)(pFVar20 + 0x20) = local_298;
  *(undefined8 *)(pFVar20 + 0x48) = local_270;
  local_270 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_288;
  *(undefined4 *)(pFVar20 + 0x34) = local_288._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = (undefined4)uStack_280;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_280._4_4_;
  *(undefined8 *)(pFVar20 + 0x40) = local_278;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_298 != (code *)0x0) {
      (*(code *)local_288[2])();
    }
  }
  else {
    local_298 = (code *)0x0;
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  pTVar15 = TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>
                      (local_5a0,
                       `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
                       <lambda_6>::<lambda_invoker_cdecl>,L"Package",0);
  ::FString::FString(&local_268,L"RequestId");
  pFVar20 = (pTVar15->Columns).AllocatorInstance.Data;
  local_238 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFExportsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_230 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
               <lambda_7>::<lambda_invoker_cdecl>;
  local_248 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
              ::Call;
  local_258 = 2;
  local_220 = 0;
  if ((pFVar20 <= (FScriptContainerElement *)&local_268) &&
     (lVar17 = (longlong)(pTVar15->Columns).ArrayMax,
     (FScriptContainerElement *)&local_268 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar15->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_268;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar15->Columns).ArrayNum;
  piVar5 = &(pTVar15->Columns).ArrayMax;
  if (iVar9 == *piVar5) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(pTVar15->Columns).AllocatorInstance,piVar5);
  }
  (pTVar15->Columns).ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar15->Columns).AllocatorInstance.Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_268.Data.AllocatorInstance.Data;
  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_268.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_268.Data.ArrayMax;
  local_268.Data.ArrayNum = 0;
  local_268.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = (undefined4)local_258;
  *(undefined4 *)(pFVar20 + 0x14) = local_258._4_4_;
  *(code **)(pFVar20 + 0x20) = local_248;
  *(undefined8 *)(pFVar20 + 0x48) = local_220;
  local_220 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_238;
  *(undefined4 *)(pFVar20 + 0x34) = local_238._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = (undefined4)uStack_230;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_230._4_4_;
  *(undefined8 *)(pFVar20 + 0x40) = local_228;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_248 != (code *)0x0) {
      (*(code *)local_238[2])();
    }
  }
  else {
    local_248 = (code *)0x0;
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  pTVar15 = TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>
                      (pTVar15,`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'
                               ::__l2::<lambda_8>::<lambda_invoker_cdecl>,L"Class",0);
  pTVar15 = TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>
                      (pTVar15,`TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'
                               ::__l2::<lambda_9>::<lambda_invoker_cdecl>,L"EventType",0);
  ::FString::FString(&local_218,L"SerializedSize");
  pFVar20 = (pTVar15->Columns).AllocatorInstance.Data;
  local_1e8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFExportsTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
              ::Call;
  local_208 = 2;
  local_204 = 0x80000002;
  local_1d0 = 0;
  uStack_1e0 = 8;
  if ((pFVar20 <= (FScriptContainerElement *)&local_218) &&
     (lVar17 = (longlong)(pTVar15->Columns).ArrayMax,
     (FScriptContainerElement *)&local_218 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar15->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_218;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar15->Columns).ArrayNum;
  piVar5 = &(pTVar15->Columns).ArrayMax;
  if (iVar9 == *piVar5) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(pTVar15->Columns).AllocatorInstance,piVar5);
  }
  (pTVar15->Columns).ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar15->Columns).AllocatorInstance.Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_218.Data.AllocatorInstance.Data;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_218.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_218.Data.ArrayMax;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = local_208;
  *(undefined4 *)(pFVar20 + 0x14) = local_204;
  *(code **)(pFVar20 + 0x20) = local_1f8;
  *(undefined8 *)(pFVar20 + 0x48) = local_1d0;
  local_1d0 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_1e8;
  *(undefined4 *)(pFVar20 + 0x34) = local_1e8._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = uStack_1e0;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_1dc;
  *(undefined8 *)(pFVar20 + 0x40) = local_1d8;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_1f8 != (code *)0x0) {
      (*(code *)local_1e8[2])();
    }
  }
  else {
    local_1f8 = (code *)0x0;
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pTVar15 = TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>
                      (pTVar15,(pdm_5fc97e1a)0x10,L"MainThreadTime",0x80000001);
  TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>
            (pTVar15,(pdm_5fc97e1a)0x18,L"AsyncLoadingThreadTime",0x80000001);
  ::FString::FString(&local_1c8,L"Id");
  pFVar20 = (pTVar4->AllocatorInstance).Data;
  local_198 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  piVar5 = &(this->RequestsTableLayout).Columns.ArrayMax;
  local_1b8 = 2;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
              ::Call;
  local_180 = 0;
  uStack_190 = 0;
  if ((pFVar20 <= (FScriptContainerElement *)&local_1c8) &&
     ((FScriptContainerElement *)&local_1c8 < pFVar20 + (longlong)*piVar5 * 0x50)) {
    local_5d0 = (longlong)(this->RequestsTableLayout).Columns.ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_1c8;
    local_5e0 = pFVar20;
    local_5d8 = (longlong)*piVar5;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (this->RequestsTableLayout).Columns.ArrayNum;
  if (iVar9 == *piVar5) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar4->AllocatorInstance,piVar5);
  }
  (this->RequestsTableLayout).Columns.ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_1c8.Data.AllocatorInstance.Data;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_1c8.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_1c8.Data.ArrayMax;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = (undefined4)local_1b8;
  *(undefined4 *)(pFVar20 + 0x14) = local_1b8._4_4_;
  *(code **)(pFVar20 + 0x20) = local_1a8;
  *(undefined8 *)(pFVar20 + 0x48) = local_180;
  local_180 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_198;
  *(undefined4 *)(pFVar20 + 0x34) = local_198._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = uStack_190;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_18c;
  *(undefined8 *)(pFVar20 + 0x40) = local_188;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_1a8 != (code *)0x0) {
      (*(code *)local_198[2])();
    }
  }
  else {
    local_1a8 = (code *)0x0;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_178,L"Name");
  pFVar20 = (pTVar4->AllocatorInstance).Data;
  local_148 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_158 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
              ::Call;
  local_168 = 5;
  local_130 = 0;
  uStack_140 = 8;
  if ((pFVar20 <= (FScriptContainerElement *)&local_178) &&
     ((FScriptContainerElement *)&local_178 < pFVar20 + (longlong)*piVar5 * 0x50)) {
    local_5d0 = (longlong)(this->RequestsTableLayout).Columns.ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = &local_178;
    local_5e0 = pFVar20;
    local_5d8 = (longlong)*piVar5;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (this->RequestsTableLayout).Columns.ArrayNum;
  if (iVar9 == *piVar5) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar4->AllocatorInstance,piVar5);
  }
  (this->RequestsTableLayout).Columns.ArrayNum = iVar9 + 1;
  pFVar20 = (pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_178.Data.AllocatorInstance.Data;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_178.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_178.Data.ArrayMax;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar20 + 0x10) = (undefined4)local_168;
  *(undefined4 *)(pFVar20 + 0x14) = local_168._4_4_;
  *(code **)(pFVar20 + 0x20) = local_158;
  *(undefined8 *)(pFVar20 + 0x48) = local_130;
  local_130 = 0;
  *(undefined4 *)(pFVar20 + 0x30) = (undefined4)local_148;
  *(undefined4 *)(pFVar20 + 0x34) = local_148._4_4_;
  *(undefined4 *)(pFVar20 + 0x38) = uStack_140;
  *(undefined4 *)(pFVar20 + 0x3c) = uStack_13c;
  *(undefined8 *)(pFVar20 + 0x40) = local_138;
  if (*(longlong *)(pFVar20 + 0x20) == 0) {
    if (local_158 != (code *)0x0) {
      (*(code *)local_148[2])();
    }
  }
  else {
    local_158 = (code *)0x0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pTVar16 = TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>
                      (local_598,(pdm_c495b945)0x10,L"StartTime",1);
  pTVar16 = TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>
                      (pTVar16,(pdm_c495b945)0x18,L"Duration",0x80000001);
  pTVar4 = &pTVar16->Columns;
  ::FString::FString((FString *)local_128,L"PackageCount");
  pFVar20 = (pTVar4->AllocatorInstance).Data;
  local_f8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_f0 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
             <lambda_10>::<lambda_invoker_cdecl>;
  local_128._32_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
       ::Call;
  local_128._16_4_ = TableColumnType_Int;
  local_128._20_4_ = 0x80000000;
  local_e0 = (undefined ***)0x0;
  if ((pFVar20 <= (FScriptContainerElement *)local_128) &&
     (lVar17 = (longlong)(pTVar16->Columns).ArrayMax,
     (FScriptContainerElement *)local_128 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar16->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = (FString *)local_128;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar16->Columns).ArrayNum;
  if (iVar9 == (pTVar16->Columns).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar4->AllocatorInstance,&(pTVar16->Columns).ArrayMax);
  }
  (pTVar16->Columns).ArrayNum = iVar9 + 1;
  TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration::FColumnDeclaration
            ((FColumnDeclaration *)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x50),
             (FColumnDeclaration *)local_128);
  if ((code *)local_128._32_8_ != (code *)0x0) {
    pppuVar18 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar18 = local_e0;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  ::FString::FString((FString *)local_d8,L"SerializedSize");
  pFVar20 = (pTVar4->AllocatorInstance).Data;
  local_a8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6A_KAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a0 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
             <lambda_11>::<lambda_invoker_cdecl>;
  local_d8._32_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
       ::Call;
  local_d8._16_4_ = TableColumnType_Int;
  local_d8._20_4_ = 0x80000002;
  local_90 = (undefined ***)0x0;
  if ((pFVar20 <= (FScriptContainerElement *)local_d8) &&
     (lVar17 = (longlong)(pTVar16->Columns).ArrayMax,
     (FScriptContainerElement *)local_d8 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar16->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = (FString *)local_d8;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar16->Columns).ArrayNum;
  if (iVar9 == (pTVar16->Columns).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar4->AllocatorInstance,&(pTVar16->Columns).ArrayMax);
  }
  (pTVar16->Columns).ArrayNum = iVar9 + 1;
  TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration::FColumnDeclaration
            ((FColumnDeclaration *)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x50),
             (FColumnDeclaration *)local_d8);
  if ((code *)local_d8._32_8_ != (code *)0x0) {
    pppuVar18 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar18 = local_90;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  ::FString::FString((FString *)local_88,L"FirstPackage");
  pFVar20 = (pTVar4->AllocatorInstance).Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFRequestsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `TraceServices::FLoadTimeProfilerProvider::FLoadTimeProfilerProvider'::__l2::
             <lambda_12>::<lambda_invoker_cdecl>;
  local_88._32_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
       ::Call;
  local_88._16_4_ = TableColumnType_CString;
  local_88._20_4_ = 0;
  local_40 = (undefined ***)0x0;
  if ((pFVar20 <= (FScriptContainerElement *)local_88) &&
     (lVar17 = (longlong)(pTVar16->Columns).ArrayMax,
     (FScriptContainerElement *)local_88 < pFVar20 + lVar17 * 0x50)) {
    local_5d0 = (longlong)(pTVar16->Columns).ArrayNum;
    local_5c8 = 0x50;
    local_5e8 = (FString *)local_88;
    local_5e0 = pFVar20;
    local_5d8 = lVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLoadTimeProfilerProvider *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar9 = (pTVar16->Columns).ArrayNum;
  if (iVar9 == (pTVar16->Columns).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar4->AllocatorInstance,&(pTVar16->Columns).ArrayMax);
  }
  (pTVar16->Columns).ArrayNum = iVar9 + 1;
  TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration::FColumnDeclaration
            ((FColumnDeclaration *)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x50),
             (FColumnDeclaration *)local_88);
  if ((code *)local_88._32_8_ != (code *)0x0) {
    pppuVar18 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar18 = local_40;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return local_5b8;
}

// ~FLoadTimeProfilerProvider @ 14d42b970

void __thiscall
TraceServices::FLoadTimeProfilerProvider::~FLoadTimeProfilerProvider
          (FLoadTimeProfilerProvider *this)

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
  return;
}

// operator() @ 14d431f80

EEventEnumerate __thiscall
`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l6::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
  FVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  EEventEnumerate EVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
  FVar14;
  void *_Dst;
  FScriptContainerElement *pFVar15;
  double dVar16;
  
  if (param_3->Export != (FPackageExportInfo *)0x0) {
    lVar13 = *(longlong *)this;
    dVar6 = *(double *)((longlong)this + 0x18);
    if (param_2 <= *(double *)((longlong)this + 0x18)) {
      dVar6 = param_2;
    }
    iVar11 = *(int *)(lVar13 + 0x408);
    if (dVar6 <= *(double *)((longlong)this + 0x10)) {
      dVar6 = *(double *)((longlong)this + 0x10);
    }
    if (iVar11 != 0) {
      uVar8 = 0;
      if ((int)(iVar11 - 1U) < iVar11) {
        uVar8 = ~(iVar11 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      plVar2 = *(longlong **)((longlong)this + 8);
      lVar12 = *(longlong *)(lVar13 + 0x400);
      if (*(longlong *)(lVar13 + 0x400) == 0) {
        lVar12 = lVar13;
      }
      uVar8 = *(uint *)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0x408) * 0x10);
      uVar10 = 0;
      if ((int)uVar8 < (int)plVar2[1]) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      lVar13 = (longlong)(int)uVar8 * 0x30 + *plVar2;
      dVar16 = dVar6 - **(double **)((longlong)this + 0x20);
      if (*(int *)((longlong)this + 0x28) == 0) {
        *(double *)(lVar13 + 0x18) = dVar16 + *(double *)(lVar13 + 0x18);
      }
      else {
        *(double *)(lVar13 + 0x20) = dVar16 + *(double *)(lVar13 + 0x20);
      }
    }
    **(double **)((longlong)this + 0x20) = dVar6;
    FVar3 = *(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
              *)this;
    iVar11 = *(int *)((ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
                       *)((longlong)FVar3 + 0x408))->InlineData;
    if (param_1) {
      if (iVar11 == *(int *)((longlong)FVar3 + 0x40c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FStackEntry>_>
                           (0x810,(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
                                   *)FVar3,(int *)((longlong)FVar3 + 0x40c));
      }
      *(int *)((ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
                *)((longlong)FVar3 + 0x408))->InlineData = iVar11 + 1;
      FVar14 = *(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
                 *)((longlong)FVar3 + 0x400);
      if (*(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
            *)((longlong)FVar3 + 0x400) ==
          (ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
           )0x0) {
        FVar14 = FVar3;
      }
      *(double *)((longlong)FVar14 + (longlong)iVar11 * 0x10) = dVar6;
      *(undefined4 *)((longlong)FVar14 + 8 + (longlong)iVar11 * 0x10) =
           *(undefined4 *)(*(longlong *)((longlong)this + 8) + 8);
      pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      iVar11 = *(int *)&pFVar4[1].Data;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar11 + 1;
      pFVar15 = pFVar4->Data + (longlong)iVar11 * 0x30;
      DefaultConstructItems<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FTempRow,int>
                (pFVar15,1);
      *(double *)pFVar15 = param_2;
      *(FPackageExportInfo **)(pFVar15 + 8) = param_3->Export;
      *(ELoadTimeProfilerObjectEventType *)(pFVar15 + 0x28) = param_3->EventType;
      if (param_3->EventType == LoadTimeProfilerObjectEventType_Serialize) {
        *(ulong64 *)(pFVar15 + 0x10) = param_3->Export->SerialSize;
      }
    }
    else {
      if ((iVar11 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      FVar14 = *(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
                 *)((longlong)FVar3 + 0x400);
      if (*(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
            *)((longlong)FVar3 + 0x400) ==
          (ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FExportsTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable(double,double)const_::_2_::FStackEntry>
           )0x0) {
        FVar14 = FVar3;
      }
      uVar8 = *(int *)((longlong)FVar3 + 0x408) - 1;
      _Dst = (void *)((longlong)FVar14 + (longlong)(int)uVar8 * 0x10);
      iVar11 = ~uVar8 + *(int *)((longlong)FVar3 + 0x408);
      if (iVar11 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar11 << 4);
      }
      *(int *)((longlong)FVar3 + 0x408) = *(int *)((longlong)FVar3 + 0x408) + -1;
    }
  }
  return Continue;
}

// operator() @ 14d432240

EEventEnumerate __thiscall
`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l6::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  int *piVar1;
  longlong *plVar2;
  FPackageInfo *pFVar3;
  ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
  FVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  EEventEnumerate EVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  void *_Dst;
  longlong *plVar14;
  ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
  FVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType *pFVar17;
  uint *puVar18;
  double dVar19;
  uint local_res20 [2];
  TPairInitializer<TraceServices::FPackageInfo_const_*_const_&,int_const_&> local_58;
  uint *local_48;
  
  if (param_3->Package != (FPackageInfo *)0x0) {
    lVar12 = *(longlong *)this;
    iVar10 = *(int *)(lVar12 + 0x408);
    dVar6 = *(double *)((longlong)this + 0x20);
    if (param_2 <= *(double *)((longlong)this + 0x20)) {
      dVar6 = param_2;
    }
    if (dVar6 <= *(double *)((longlong)this + 0x18)) {
      dVar6 = *(double *)((longlong)this + 0x18);
    }
    if (iVar10 != 0) {
      uVar11 = 0;
      if ((int)(iVar10 - 1U) < iVar10) {
        uVar11 = ~(iVar10 - 1U) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar8 = (*pcVar5)();
        return EVar8;
      }
      plVar2 = *(longlong **)((longlong)this + 8);
      lVar13 = *(longlong *)(lVar12 + 0x400);
      if (*(longlong *)(lVar12 + 0x400) == 0) {
        lVar13 = lVar12;
      }
      uVar11 = *(uint *)(lVar13 + -8 + (longlong)*(int *)(lVar12 + 0x408) * 0x10);
      uVar9 = 0;
      if ((int)uVar11 < (int)plVar2[1]) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar8 = (*pcVar5)();
        return EVar8;
      }
      dVar19 = dVar6 - **(double **)((longlong)this + 0x28);
      lVar12 = (longlong)(int)uVar11 * 0x38 + *plVar2;
      if (*(int *)((longlong)this + 0x30) == 0) {
        *(double *)(lVar12 + 0x28) = dVar19 + *(double *)(lVar12 + 0x28);
      }
      else {
        *(double *)(lVar12 + 0x30) = dVar19 + *(double *)(lVar12 + 0x30);
      }
    }
    **(double **)((longlong)this + 0x28) = dVar6;
    if (param_1) {
      plVar2 = *(longlong **)((longlong)this + 0x10);
      pFVar3 = param_3->Package;
      uVar11 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar14 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar14 = plVar2 + 7;
        }
        iVar10 = *(int *)((longlong)plVar14 +
                         (ulonglong)((int)plVar2[9] - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
        if (iVar10 != -1) {
          do {
            lVar12 = *plVar2 + (longlong)iVar10 * 0x18;
            if (*(FPackageInfo **)(*plVar2 + (longlong)iVar10 * 0x18) == pFVar3) {
              pFVar17 = *(ForAnyElementType **)((longlong)this + 8);
              puVar18 = (uint *)(lVar12 + 8);
              if (lVar12 == 0) {
                puVar18 = (uint *)0x0;
              }
              if (puVar18 == (uint *)0x0) goto LAB_14d432410;
              uVar11 = *puVar18;
              uVar9 = 0;
              if ((int)uVar11 < *(int *)&pFVar17[1].Data) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                EVar8 = (*pcVar5)();
                return EVar8;
              }
              local_res20[0] = *puVar18;
              pFVar16 = pFVar17->Data + (longlong)(int)uVar11 * 0x38;
              goto LAB_14d432482;
            }
            iVar10 = *(int *)(lVar12 + 0x10);
          } while (iVar10 != -1);
        }
      }
      pFVar17 = *(ForAnyElementType **)((longlong)this + 8);
LAB_14d432410:
      local_res20[0] = *(uint *)&pFVar17[1].Data;
      piVar1 = (int *)((longlong)&pFVar17[1].Data + 4);
      iVar10 = *(int *)&pFVar17[1].Data;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,pFVar17,piVar1);
      }
      *(int *)&pFVar17[1].Data = iVar10 + 1;
      pFVar16 = pFVar17->Data + (longlong)iVar10 * 0x38;
      DefaultConstructItems<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FTempRow,int>
                (pFVar16,1);
      *(double *)pFVar16 = param_2;
      *(FPackageInfo **)(pFVar16 + 8) = param_3->Package;
      local_48 = local_res20;
      local_58.Value = (int *)param_3;
      TSet<TTuple<TraceServices::FPackageInfo_const_*,int>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TraceServices::FPackageInfo_const_*_const_&,int_const_&>_>
                (*(TSet<TTuple<TraceServices::FPackageInfo_const_*,int>,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,int,0>,FDefaultSetAllocator>
                   **)((longlong)this + 0x10),&local_58,(bool *)&local_58.Value);
LAB_14d432482:
      FVar4 = *(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
                *)this;
      iVar10 = *(int *)((ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
                         *)((longlong)FVar4 + 0x408))->InlineData;
      if (iVar10 == *(int *)((longlong)FVar4 + 0x40c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FStackEntry>_>
                           (0x810,(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
                                   *)FVar4,(int *)((longlong)FVar4 + 0x40c));
      }
      *(int *)((ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
                *)((longlong)FVar4 + 0x408))->InlineData = iVar10 + 1;
      FVar15 = *(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
                 *)((longlong)FVar4 + 0x400);
      if (*(ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
            *)((longlong)FVar4 + 0x400) ==
          (ForElementType<_public:_virtual_class_TraceServices::ITable<TraceServices::FPackagesTableRow>_*___cdecl_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable(double,double)const_::_2_::FStackEntry>
           )0x0) {
        FVar15 = FVar4;
      }
      *(double *)((longlong)FVar15 + (longlong)iVar10 * 0x10) = dVar6;
      *(uint *)((longlong)FVar15 + 8 + (longlong)iVar10 * 0x10) = local_res20[0];
      if (param_3->Export == (FPackageExportInfo *)0x0) {
        if ((param_3->Package != (FPackageInfo *)0x0) && (*(longlong *)(pFVar16 + 0x10) == 0)) {
          *(ulonglong *)(pFVar16 + 0x10) = (ulonglong)(param_3->Package->Summary).TotalHeaderSize;
        }
      }
      else if (param_3->EventType == LoadTimeProfilerObjectEventType_Serialize) {
        *(ulong64 *)(pFVar16 + 0x20) = *(longlong *)(pFVar16 + 0x20) + param_3->Export->SerialSize;
        *(longlong *)(pFVar16 + 0x18) = *(longlong *)(pFVar16 + 0x18) + 1;
      }
    }
    else {
      lVar12 = *(longlong *)this;
      if ((*(int *)(lVar12 + 0x408) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar8 = (*pcVar5)();
        return EVar8;
      }
      lVar13 = *(longlong *)(lVar12 + 0x400);
      if (*(longlong *)(lVar12 + 0x400) == 0) {
        lVar13 = lVar12;
      }
      uVar11 = *(int *)(lVar12 + 0x408) - 1;
      _Dst = (void *)(lVar13 + (longlong)(int)uVar11 * 0x10);
      iVar10 = ~uVar11 + *(int *)(lVar12 + 0x408);
      if (iVar10 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar10 << 4);
      }
      *(int *)(lVar12 + 0x408) = *(int *)(lVar12 + 0x408) + -1;
    }
  }
  return Continue;
}

// AddClassInfo @ 14d43a150

FClassInfo * __thiscall
TraceServices::FLoadTimeProfilerProvider::AddClassInfo
          (FLoadTimeProfilerProvider *this,wchar_t *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FClassInfo> *pTVar3;
  ILinearAllocator *pIVar4;
  int iVar5;
  FClassInfo *pFVar6;
  wchar_t *pwVar7;
  TPagedArrayPage<TraceServices::FClassInfo> *pTVar8;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pTVar3 = (this->ClassInfos).LastPage;
  if ((pTVar3 == (TPagedArrayPage<TraceServices::FClassInfo> *)0x0) ||
     (pTVar3->Count == (this->ClassInfos).PageSize)) {
    iVar5 = (this->ClassInfos).PagesArray.ArrayNum;
    piVar1 = &(this->ClassInfos).PagesArray.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ClassInfos).PagesArray.AllocatorInstance,piVar1);
    }
    (this->ClassInfos).PagesArray.ArrayNum = iVar5 + 1;
    pTVar8 = (TPagedArrayPage<TraceServices::FClassInfo> *)
             ((this->ClassInfos).PagesArray.AllocatorInstance.Data + (longlong)iVar5 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FClassInfo>,int>(pTVar8,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FClassInfo> *)
             (this->ClassInfos).PagesArray.AllocatorInstance.Data;
    pIVar4 = (this->ClassInfos).Allocator;
    (this->ClassInfos).LastPage = pTVar8;
    (this->ClassInfos).FirstPage = pTVar3;
    pFVar6 = (FClassInfo *)
             (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->ClassInfos).PageSize << 3);
    ((this->ClassInfos).LastPage)->Items = pFVar6;
  }
  puVar2 = &(this->ClassInfos).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pTVar3 = (this->ClassInfos).LastPage;
  pFVar6 = pTVar3->Items + pTVar3->Count;
  pFVar6->Name = (wchar_t *)0x0;
  puVar2 = &((this->ClassInfos).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pwVar7 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_1);
  pFVar6->Name = pwVar7;
  return pFVar6;
}

// BeginIoDispatcherBatch @ 14d441e30

ulong64 __thiscall
TraceServices::FLoadTimeProfilerProvider::BeginIoDispatcherBatch
          (FLoadTimeProfilerProvider *this,ulong64 param_1,double param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  ulong64 uVar4;
  ILinearAllocator *pIVar5;
  ulong64 uVar6;
  int iVar7;
  FIoDispatcherBatch *pFVar8;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch> *pTVar9;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  CreateCounters(this);
  (**(code **)((longlong)*this->ActiveIoDispatcherBatchesCounter + 0x40))
            (this->ActiveIoDispatcherBatchesCounter,SUB84(param_2,0),1);
  pTVar9 = (this->IoDispatcherBatches).LastPage;
  uVar4 = (this->IoDispatcherBatches).TotalItemCount;
  if ((pTVar9 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch> *)
                 0x0) || (pTVar9->Count == (this->IoDispatcherBatches).PageSize)) {
    pTVar3 = &(this->IoDispatcherBatches).PagesArray;
    iVar7 = (this->IoDispatcherBatches).PagesArray.ArrayNum;
    piVar1 = &(this->IoDispatcherBatches).PagesArray.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    pTVar9 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch> *)
             ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
    (this->IoDispatcherBatches).PagesArray.ArrayNum = iVar7 + 1;
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch>,int>
              (pTVar9,1);
    pIVar5 = (this->IoDispatcherBatches).Allocator;
    (this->IoDispatcherBatches).FirstPage =
         (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FIoDispatcherBatch> *)
         (pTVar3->AllocatorInstance).Data;
    (this->IoDispatcherBatches).LastPage = pTVar9;
    pFVar8 = (FIoDispatcherBatch *)
             (**(code **)((longlong)*pIVar5 + 8))
                       (pIVar5,(this->IoDispatcherBatches).PageSize * 0x18);
    ((this->IoDispatcherBatches).LastPage)->Items = pFVar8;
  }
  pTVar9 = (this->IoDispatcherBatches).LastPage;
  puVar2 = &(this->IoDispatcherBatches).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  uVar6 = pTVar9->Count;
  pFVar8 = pTVar9->Items;
  pFVar8[uVar6].StartTime = 0.0;
  pFVar8[uVar6].EndTime = 0.0;
  pFVar8[uVar6].TotalSize = 0;
  puVar2 = &((this->IoDispatcherBatches).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar8[uVar6].StartTime = param_2;
  return uVar4;
}

// CreateCounters @ 14d449e50

void __thiscall
TraceServices::FLoadTimeProfilerProvider::CreateCounters(FLoadTimeProfilerProvider *this)

{
  IEditableCounterProvider *pIVar1;
  code *pcVar2;
  undefined8 *puVar3;
  IEditableCounter *pIVar4;
  
  if (this->bHasCreatedCounters == false) {
    pIVar1 = this->EditableCounterProvider;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
    puVar3 = ::operator_new(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7FLoaderFrameCounter_FLoadTimeProfilerProvider_TraceServices__6B_;
      puVar3[1] = &this->Frames;
      *(undefined4 *)(puVar3 + 2) = 0;
    }
    (*pcVar2)(pIVar1,puVar3);
    pIVar1 = this->EditableCounterProvider;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
    puVar3 = ::operator_new(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7FLoaderFrameCounter_FLoadTimeProfilerProvider_TraceServices__6B_;
      puVar3[1] = &this->Frames;
      *(undefined4 *)(puVar3 + 2) = 1;
    }
    (*pcVar2)(pIVar1,puVar3);
    pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
    this->ActiveIoDispatcherBatchesCounter = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"AssetLoading/IoDispatcher/ActiveBatches");
    pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
    this->TotalIoDispatcherBytesReadCounter = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"AssetLoading/IoDispatcher/TotalBytesRead");
    (**(code **)((longlong)*this->TotalIoDispatcherBytesReadCounter + 0x30))
              (this->TotalIoDispatcherBytesReadCounter,1);
    pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
    this->LoadingPackagesCounter = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"AssetLoading/AsyncLoading/ActiveLoadingPackages");
    pIVar4 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
    this->TotalLoaderBytesLoadedCounter = pIVar4;
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,L"AssetLoading/AsyncLoading/TotalBytesLoaded");
    (**(code **)((longlong)*this->TotalLoaderBytesLoadedCounter + 0x30))
              (this->TotalLoaderBytesLoadedCounter,1);
    this->bHasCreatedCounters = true;
  }
  return;
}

// CreateEventAggregation @ 14d44a3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ITable<TraceServices::FLoadTimeProfilerAggregatedStats> * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation
          (FLoadTimeProfilerProvider *this,double param_1,double param_2)

{
  ulong64 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar4;
  ILinearAllocator *pIVar5;
  ulong64 uVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *pIVar11;
  TReferenceControllerBase<1> *pTVar12;
  TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *pTVar13;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar14;
  TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *pTVar15;
  FLoadTimeProfilerAggregatedStats *pFVar16;
  byte bVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint *puVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auStackY_1e8 [32];
  <lambda_1> local_198;
  undefined1 local_197 [7];
  TArray<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*,TSizedDefaultAllocator<32>_>
  local_190;
  undefined8 local_180;
  TReferenceControllerBase<1> *local_178;
  longlong local_170;
  TSharedPtr<TraceServices::FCancellationToken,1> local_168;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> local_f8 [2];
  undefined4 local_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *pTVar24;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar19 = (this->CpuTimelines).ArrayNum;
  pTVar24 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)0x0;
  pFVar20 = (this->CpuTimelines).AllocatorInstance.Data;
  uVar23 = 0;
  pFVar22 = pFVar20 + (longlong)iVar19 * 0x10;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  pTVar15 = pTVar24;
  while( true ) {
    uVar10 = (uint)pTVar15;
    if ((this->CpuTimelines).ArrayNum != iVar19) {
      local_198 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_198);
      uVar10 = local_190.ArrayNum;
    }
    if (pFVar20 == pFVar22) break;
    local_180 = *(undefined8 *)pFVar20;
    if (((local_190.AllocatorInstance.Data <= (FScriptContainerElement *)&local_180) &&
        ((FScriptContainerElement *)&local_180 <
         local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar10 = local_190.ArrayNum, bVar9)) {
      pcVar7 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)(*pcVar7)();
      return pIVar11;
    }
    if (uVar10 == local_190.ArrayMax) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_190.AllocatorInstance,&local_190.ArrayMax);
    }
    local_190.ArrayNum = uVar10 + 1;
    pFVar20 = pFVar20 + 0x10;
    *(undefined8 *)(local_190.AllocatorInstance.Data + (longlong)(int)uVar10 * 8) = local_180;
    pTVar15 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)
              (ulonglong)(uint)local_190.ArrayNum;
  }
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  pTVar12 = ::operator_new(0x18);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    local_178 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_168.Object = (FCancellationToken *)&DAT_00000010;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCancellationToken_TraceServices___00_SharedPointerInternals__6B_
    ;
    *(undefined1 *)&pTVar12[1]._padding_ = 0;
    local_178 = pTVar12;
    if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)(*pcVar7)();
      return pIVar11;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    local_168.Object = (FCancellationToken *)(pTVar12 + 1);
    local_168.SharedReferenceCount.ReferenceController = pTVar12;
  }
  FTimelineStatistics::
  CreateAggregation<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,_TraceServices::FLoadTimeProfilerProvider::CreateEventAggregation_::__l2::<lambda_1>,TraceServices::FPackageInfo_const_*>
            (&local_190,local_198,param_1,param_2,&local_168,
             (TMap<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats,0>_>
              *)local_b8);
  pTVar13 = ::operator_new(0xc0);
  pTVar15 = pTVar24;
  if (pTVar13 != (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)0x0) {
    pTVar14 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::
              TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>
                        (local_f8,&this->AggregatedStatsTableLayout);
    pTVar15 = TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>::
              TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>(pTVar13,pTVar14);
  }
  uVar10 = local_90;
  uStack_14c = 1;
  local_138 = 0;
  uStack_13c = local_138;
  if (local_90 != 0) {
    puVar25 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar25 = local_98;
    }
    uVar26 = *puVar25;
    pTVar13 = pTVar24;
    local_138 = 0;
    uVar23 = 0;
    while (uVar26 == 0) {
      iVar19 = (int)pTVar24;
      local_138 = (int)pTVar13 + 0x20;
      pTVar13 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)
                (ulonglong)local_138;
      uVar23 = iVar19 + 1;
      pTVar24 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)(ulonglong)uVar23
      ;
      uStack_13c = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
      goto LAB_14d44a6c1;
      uVar26 = (puVar25 + 1)[iVar19];
    }
    uStack_14c = -uVar26 & uVar26;
    uVar3 = (ulonglong)uStack_14c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uStack_13c = (local_138 - 1) + (int)lVar18;
    local_170 = CONCAT44(local_170._4_4_,(int)lVar18);
    if ((int)local_90 < (int)uStack_13c) {
      uStack_13c = local_90;
    }
  }
LAB_14d44a6c1:
  local_158 = (longlong *)local_b8;
  uStack_134 = local_c4;
  local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  iStack_130 = local_b8._8_4_ - local_84;
  uVar26 = local_90 & 0xffffffe0;
  uStack_140 = 0xffffffff;
  TStack_120.CurrentBitIndex = uStack_13c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_14c,uVar23);
  iVar19 = (int)local_90 >> 5;
  TStack_120._28_4_ = local_c4;
  TStack_120.BaseBitIndex = local_138;
  uStack_100 = CONCAT44(uStack_12c,iStack_130);
  bVar17 = (byte)local_90;
  uStack_150 = uVar23;
  local_128 = local_158;
  TStack_120.Array = local_148;
  if (((int)local_90 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pIVar11 = (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)(*pcVar7)();
    return pIVar11;
  }
  if (uVar10 != local_90) {
    puVar25 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar25 = local_98;
    }
    uVar23 = -1 << (bVar17 & 0x1f) & puVar25[iVar19];
    while (uVar23 == 0) {
      lVar18 = (longlong)iVar19;
      uVar26 = uVar26 + 0x20;
      iVar19 = iVar19 + 1;
      uVar10 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14d44a7c0;
      uVar23 = (puVar25 + 1)[lVar18];
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar10 = (int)lVar18 + -1 + uVar26;
    if ((int)local_90 < (int)uVar10) {
      uVar10 = local_90;
    }
  }
LAB_14d44a7c0:
  while( true ) {
    plVar8 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_197);
    }
    if (((TStack_120.CurrentBitIndex == uVar10) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar8 == (longlong *)local_b8)) break;
    lVar18 = *plVar8;
    lVar27 = (longlong)TStack_120.CurrentBitIndex * 0x70;
    local_170 = *(longlong *)(lVar27 + lVar18);
    if (local_170 != 0) {
      pTVar4 = (pTVar15->Rows).LastPage;
      if ((pTVar4 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)0x0) ||
         (pTVar4->Count == (pTVar15->Rows).PageSize)) {
        iVar19 = (pTVar15->Rows).PagesArray.ArrayNum;
        piVar2 = &(pTVar15->Rows).PagesArray.ArrayMax;
        if (iVar19 == *piVar2) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pTVar15->Rows).PagesArray.AllocatorInstance,piVar2);
          (pTVar15->Rows).PagesArray.ArrayNum = iVar19;
        }
        pTVar21 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)
                  ((pTVar15->Rows).PagesArray.AllocatorInstance.Data + (longlong)iVar19 * 0x10);
        (pTVar15->Rows).PagesArray.ArrayNum = iVar19 + 1;
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>,int>
                  (pTVar21,1);
        pTVar4 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)
                 (pTVar15->Rows).PagesArray.AllocatorInstance.Data;
        pIVar5 = (pTVar15->Rows).Allocator;
        (pTVar15->Rows).LastPage = pTVar21;
        (pTVar15->Rows).FirstPage = pTVar4;
        pFVar16 = (FLoadTimeProfilerAggregatedStats *)
                  (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(pTVar15->Rows).PageSize * 0x38);
        ((pTVar15->Rows).LastPage)->Items = pFVar16;
      }
      puVar1 = &(pTVar15->Rows).TotalItemCount;
      *puVar1 = *puVar1 + 1;
      pTVar4 = (pTVar15->Rows).LastPage;
      uVar6 = pTVar4->Count;
      pFVar16 = pTVar4->Items;
      pFVar16[uVar6].Name = (wchar_t *)0x0;
      pFVar16[uVar6].Count = 0;
      pFVar16[uVar6].Total = 0.0;
      (&pFVar16[uVar6].Total)[1] = 0.0;
      pFVar16[uVar6].Max = 0.0;
      (&pFVar16[uVar6].Max)[1] = 0.0;
      pFVar16[uVar6].Median = 0.0;
      puVar1 = &((pTVar15->Rows).LastPage)->Count;
      *puVar1 = *puVar1 + 1;
      pFVar16[uVar6].Name = *(wchar_t **)(local_170 + 8);
      pFVar16[uVar6].Count = *(ulong64 *)(lVar27 + 8 + lVar18);
      pFVar16[uVar6].Total = *(double *)(lVar27 + 0x40 + lVar18);
      pFVar16[uVar6].Min = *(double *)(lVar27 + 0x48 + lVar18);
      pFVar16[uVar6].Max = *(double *)(lVar27 + 0x50 + lVar18);
      pFVar16[uVar6].Average = *(double *)(lVar27 + 0x58 + lVar18);
      pFVar16[uVar6].Median = *(double *)(lVar27 + 0x60 + lVar18);
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178);
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)pTVar15;
}

// CreateExport @ 14d44a9d0

FPackageExportInfo * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreateExport(FLoadTimeProfilerProvider *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPagedArrayPage<TraceServices::FPackageExportInfo> *pTVar4;
  ILinearAllocator *pIVar5;
  ulong64 uVar6;
  int iVar7;
  FPackageExportInfo *pFVar8;
  TPagedArrayPage<TraceServices::FPackageExportInfo> *pTVar9;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pTVar4 = (this->Exports).LastPage;
  uVar6 = (this->Exports).TotalItemCount;
  if ((pTVar4 == (TPagedArrayPage<TraceServices::FPackageExportInfo> *)0x0) ||
     (pTVar4->Count == (this->Exports).PageSize)) {
    pTVar3 = &(this->Exports).PagesArray;
    iVar7 = (this->Exports).PagesArray.ArrayNum;
    piVar1 = &(this->Exports).PagesArray.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->Exports).PagesArray.ArrayNum = iVar7 + 1;
    pTVar9 = (TPagedArrayPage<TraceServices::FPackageExportInfo> *)
             ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageExportInfo>,int>
              (pTVar9,1);
    pTVar4 = (TPagedArrayPage<TraceServices::FPackageExportInfo> *)(pTVar3->AllocatorInstance).Data;
    pIVar5 = (this->Exports).Allocator;
    (this->Exports).LastPage = pTVar9;
    (this->Exports).FirstPage = pTVar4;
    pFVar8 = (FPackageExportInfo *)
             (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->Exports).PageSize << 5);
    ((this->Exports).LastPage)->Items = pFVar8;
  }
  pTVar4 = (this->Exports).LastPage;
  puVar2 = &(this->Exports).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pFVar8 = pTVar4->Items + pTVar4->Count;
  *(undefined8 *)pFVar8 = 0;
  pFVar8->Class = (FClassInfo *)0x0;
  pFVar8->SerialSize = 0;
  pFVar8->Package = (FPackageInfo *)0x0;
  puVar2 = &((this->Exports).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar8->Id = (uint)uVar6;
  return pFVar8;
}

// CreateExportDetailsTable @ 14d44aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ITable<TraceServices::FExportsTableRow> * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable
          (FLoadTimeProfilerProvider *this,double param_1,double param_2)

{
  ELoadTimeProfilerObjectEventType *pEVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ITable<TraceServices::FExportsTableRow> *pIVar5;
  TTableLayout<TraceServices::FExportsTableRow> *pTVar6;
  TTableLayout<TraceServices::FExportsTableRow> *pTVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ITable<TraceServices::FExportsTableRow> IVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FTempRow *pFVar14;
  ulong64 *puVar15;
  undefined1 auStack_528 [32];
  FIdentityFunctor local_508;
  undefined1 local_507 [7];
  FTempRow *local_500;
  ulonglong local_4f8;
  undefined8 local_4f0;
  code *local_4e8;
  undefined1 **local_4e0;
  undefined1 *local_4d8;
  FTempRow **local_4d0;
  double local_4c8;
  double local_4c0;
  undefined8 *local_4b8;
  int local_4b0;
  TTableLayout<TraceServices::FExportsTableRow> local_4a8;
  TTableLayout<TraceServices::FExportsTableRow> local_490;
  undefined1 local_478 [1024];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_528;
  iVar2 = (this->CpuTimelines).ArrayNum;
  pFVar10 = (this->CpuTimelines).AllocatorInstance.Data;
  iVar13 = 0;
  local_500 = (FTempRow *)0x0;
  pFVar12 = pFVar10 + (longlong)iVar2 * 0x10;
  local_4f0 = 0;
  local_4f8 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x40;
  while( true ) {
    if ((this->CpuTimelines).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_508);
    }
    if (pFVar10 == pFVar12) break;
    local_4d8 = local_478;
    local_4d0 = &local_500;
    local_4b8 = &local_4f0;
    local_4e0 = &local_4d8;
    local_4e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l6::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
                ::Call;
    local_4c8 = param_1;
    local_4c0 = param_2;
    local_4b0 = iVar13;
    (**(code **)(**(longlong **)pFVar10 + 0x60))
              (*(longlong **)pFVar10,SUB84(param_1,0),SUB84(param_2,0),&local_4e8);
    iVar13 = iVar13 + 1;
    pFVar10 = pFVar10 + 0x10;
  }
  AlgoImpl::
  IntroSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable_::__l2::<lambda_2>_>
            (local_500,(int)local_4f8,local_508,(<lambda_2>)local_508);
  pIVar5 = ::operator_new(0xc0);
  if (pIVar5 == (ITable<TraceServices::FExportsTableRow> *)0x0) {
    pIVar5 = (ITable<TraceServices::FExportsTableRow> *)0x0;
  }
  else {
    pTVar6 = TTableLayout<TraceServices::FExportsTableRow>::
             TTableLayout<TraceServices::FExportsTableRow>(&local_4a8,&this->ExportsTableLayout);
    pTVar7 = TTableLayout<TraceServices::FExportsTableRow>::
             TTableLayout<TraceServices::FExportsTableRow>(&local_490,pTVar6);
    *pIVar5 = (ITable<TraceServices::FExportsTableRow>)
              &___7__TTableBase_UFExportsTableRow_TraceServices___TraceServices__6B_;
    TTableLayout<TraceServices::FExportsTableRow>::TTableLayout<TraceServices::FExportsTableRow>
              ((TTableLayout<TraceServices::FExportsTableRow> *)(pIVar5 + 1),pTVar7);
    DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar7->Columns).AllocatorInstance.Data,
               (pTVar7->Columns).ArrayNum);
    pFVar10 = (pTVar7->Columns).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    *pIVar5 = (ITable<TraceServices::FExportsTableRow>)
              &___7__TTable_UFExportsTableRow_TraceServices___0CAAAAA__TraceServices__6B_;
    pIVar5[4] = (ITable<TraceServices::FExportsTableRow>)&___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar5 + 5),4000);
    pIVar5[0xd] = (ITable<TraceServices::FExportsTableRow>)0x200000;
    pIVar5[10] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0xb] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0xc] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0xe] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0xf] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0x10] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0x11] = (ITable<TraceServices::FExportsTableRow>)(pIVar5 + 4);
    pIVar5[0x12] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0x13] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0x14] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0x15] = (ITable<TraceServices::FExportsTableRow>)0x0;
    pIVar5[0x16] = (ITable<TraceServices::FExportsTableRow>)0x400;
    pIVar5[0x17] = (ITable<TraceServices::FExportsTableRow>)0x0;
    DestructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar6->Columns).AllocatorInstance.Data,
               (pTVar6->Columns).ArrayNum);
    pFVar10 = (pTVar6->Columns).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
  }
  iVar2 = (int)local_4f8;
  uVar9 = (ulonglong)(int)local_4f8;
  puVar15 = &local_500->SerializedSize;
  pFVar14 = local_500 + uVar9;
  while( true ) {
    if ((int)uVar9 != iVar2) {
      `TCheckedPointerIterator<`TraceServices::FLoadTimeProfilerProvider::CreateExportDetailsTable'::__l2::FTempRow,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_507);
    }
    if ((FTempRow *)(puVar15 + -2) == pFVar14) break;
    if ((pIVar5[0x15] == (ITable<TraceServices::FExportsTableRow>)0x0) ||
       (*(ITable<TraceServices::FExportsTableRow> *)((longlong)pIVar5[0x15] + 8) == pIVar5[0x16])) {
      iVar13 = *(int *)(pIVar5 + 0x13);
      if (iVar13 == *(int *)&pIVar5[0x13].field_0x4) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(pIVar5 + 0x12),
                            (int *)&pIVar5[0x13].field_0x4);
        *(int *)(pIVar5 + 0x13) = iVar13;
      }
      IVar11 = (ITable<TraceServices::FExportsTableRow>)
               ((longlong)iVar13 * 0x10 + (longlong)pIVar5[0x12]);
      *(int *)(pIVar5 + 0x13) = iVar13 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>,int>
                ((void *)IVar11,1);
      pIVar5[0x14] = pIVar5[0x12];
      pIVar5[0x15] = IVar11;
      uVar8 = (**(code **)(*(longlong *)pIVar5[0x11] + 8))
                        (pIVar5[0x11],(longlong)pIVar5[0x16] * 0x28);
      *(undefined8 *)pIVar5[0x15] = uVar8;
    }
    pIVar5[0x17] = (ITable<TraceServices::FExportsTableRow>)((longlong)pIVar5[0x17] + 1);
    lVar3 = *(longlong *)((longlong)pIVar5[0x15] + 8);
    lVar4 = *(longlong *)pIVar5[0x15];
    *(undefined8 *)(lVar4 + 0x20 + lVar3 * 0x28) = 3;
    *(undefined8 *)(lVar4 + lVar3 * 0x28) = 0;
    *(undefined8 *)(lVar4 + 8 + lVar3 * 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x10 + lVar3 * 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x18 + lVar3 * 0x28) = 0;
    *(longlong *)((longlong)pIVar5[0x15] + 8) = *(longlong *)((longlong)pIVar5[0x15] + 8) + 1;
    *(FPackageExportInfo **)(lVar4 + lVar3 * 0x28) = (FPackageExportInfo *)puVar15[-1];
    *(ulong64 *)(lVar4 + 8 + lVar3 * 0x28) = *puVar15;
    *(ulong64 *)(lVar4 + 0x10 + lVar3 * 0x28) = puVar15[1];
    *(ulong64 *)(lVar4 + 0x18 + lVar3 * 0x28) = puVar15[2];
    pEVar1 = (ELoadTimeProfilerObjectEventType *)(puVar15 + 3);
    puVar15 = puVar15 + 6;
    *(ELoadTimeProfilerObjectEventType *)(lVar4 + 0x20 + lVar3 * 0x28) = *pEVar1;
    uVar9 = local_4f8 & 0xffffffff;
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_500 != (FTempRow *)0x0) {
    FMemory::Free(local_500);
  }
  return pIVar5;
}

// CreateObjectTypeAggregation @ 14d44c060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ITable<TraceServices::FLoadTimeProfilerAggregatedStats> * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation
          (FLoadTimeProfilerProvider *this,double param_1,double param_2)

{
  ulong64 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar4;
  ILinearAllocator *pIVar5;
  ulong64 uVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *pIVar11;
  TReferenceControllerBase<1> *pTVar12;
  TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *pTVar13;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar14;
  TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *pTVar15;
  FLoadTimeProfilerAggregatedStats *pFVar16;
  byte bVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint *puVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auStackY_1e8 [32];
  <lambda_1> local_198;
  undefined1 local_197 [7];
  TArray<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_const_*,TSizedDefaultAllocator<32>_>
  local_190;
  undefined8 local_180;
  TReferenceControllerBase<1> *local_178;
  undefined8 *local_170;
  TSharedPtr<TraceServices::FCancellationToken,1> local_168;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> local_f8 [2];
  undefined4 local_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *pTVar24;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar19 = (this->CpuTimelines).ArrayNum;
  pTVar24 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)0x0;
  pFVar20 = (this->CpuTimelines).AllocatorInstance.Data;
  uVar23 = 0;
  pFVar22 = pFVar20 + (longlong)iVar19 * 0x10;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  pTVar15 = pTVar24;
  while( true ) {
    uVar10 = (uint)pTVar15;
    if ((this->CpuTimelines).ArrayNum != iVar19) {
      local_198 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_198);
      uVar10 = local_190.ArrayNum;
    }
    if (pFVar20 == pFVar22) break;
    local_180 = *(undefined8 *)pFVar20;
    if (((local_190.AllocatorInstance.Data <= (FScriptContainerElement *)&local_180) &&
        ((FScriptContainerElement *)&local_180 <
         local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar10 = local_190.ArrayNum, bVar9)) {
      pcVar7 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)(*pcVar7)();
      return pIVar11;
    }
    if (uVar10 == local_190.ArrayMax) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_190.AllocatorInstance,&local_190.ArrayMax);
    }
    local_190.ArrayNum = uVar10 + 1;
    pFVar20 = pFVar20 + 0x10;
    *(undefined8 *)(local_190.AllocatorInstance.Data + (longlong)(int)uVar10 * 8) = local_180;
    pTVar15 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)
              (ulonglong)(uint)local_190.ArrayNum;
  }
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  pTVar12 = ::operator_new(0x18);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    local_178 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_168.Object = (FCancellationToken *)&DAT_00000010;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCancellationToken_TraceServices___00_SharedPointerInternals__6B_
    ;
    *(undefined1 *)&pTVar12[1]._padding_ = 0;
    local_178 = pTVar12;
    if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pIVar11 = (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)(*pcVar7)();
      return pIVar11;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    local_168.Object = (FCancellationToken *)(pTVar12 + 1);
    local_168.SharedReferenceCount.ReferenceController = pTVar12;
  }
  FTimelineStatistics::
  CreateAggregation<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,_TraceServices::FLoadTimeProfilerProvider::CreateObjectTypeAggregation_::__l2::<lambda_1>,TraceServices::FClassInfo_const_*>
            (&local_190,local_198,param_1,param_2,&local_168,
             (TMap<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats,0>_>
              *)local_b8);
  pTVar13 = ::operator_new(0xc0);
  pTVar15 = pTVar24;
  if (pTVar13 != (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)0x0) {
    pTVar14 = TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::
              TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>
                        (local_f8,&this->AggregatedStatsTableLayout);
    pTVar15 = TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>::
              TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152>(pTVar13,pTVar14);
  }
  uVar10 = local_90;
  uStack_14c = 1;
  local_138 = 0;
  uStack_13c = local_138;
  if (local_90 != 0) {
    puVar25 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar25 = local_98;
    }
    uVar26 = *puVar25;
    pTVar13 = pTVar24;
    local_138 = 0;
    uVar23 = 0;
    while (uVar26 == 0) {
      iVar19 = (int)pTVar24;
      local_138 = (int)pTVar13 + 0x20;
      pTVar13 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)
                (ulonglong)local_138;
      uVar23 = iVar19 + 1;
      pTVar24 = (TTable<TraceServices::FLoadTimeProfilerAggregatedStats,2097152> *)(ulonglong)uVar23
      ;
      uStack_13c = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
      goto LAB_14d44c351;
      uVar26 = (puVar25 + 1)[iVar19];
    }
    uStack_14c = -uVar26 & uVar26;
    uVar3 = (ulonglong)uStack_14c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uStack_13c = (local_138 - 1) + (int)lVar18;
    local_170 = (undefined8 *)CONCAT44(local_170._4_4_,(int)lVar18);
    if ((int)local_90 < (int)uStack_13c) {
      uStack_13c = local_90;
    }
  }
LAB_14d44c351:
  local_158 = (longlong *)local_b8;
  uStack_134 = local_c4;
  local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  iStack_130 = local_b8._8_4_ - local_84;
  uVar26 = local_90 & 0xffffffe0;
  uStack_140 = 0xffffffff;
  TStack_120.CurrentBitIndex = uStack_13c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_14c,uVar23);
  iVar19 = (int)local_90 >> 5;
  TStack_120._28_4_ = local_c4;
  TStack_120.BaseBitIndex = local_138;
  uStack_100 = CONCAT44(uStack_12c,iStack_130);
  bVar17 = (byte)local_90;
  uStack_150 = uVar23;
  local_128 = local_158;
  TStack_120.Array = local_148;
  if (((int)local_90 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pIVar11 = (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)(*pcVar7)();
    return pIVar11;
  }
  if (uVar10 != local_90) {
    puVar25 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar25 = local_98;
    }
    uVar23 = -1 << (bVar17 & 0x1f) & puVar25[iVar19];
    while (uVar23 == 0) {
      lVar18 = (longlong)iVar19;
      uVar26 = uVar26 + 0x20;
      iVar19 = iVar19 + 1;
      uVar10 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14d44c450;
      uVar23 = (puVar25 + 1)[lVar18];
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar10 = (int)lVar18 + -1 + uVar26;
    if ((int)local_90 < (int)uVar10) {
      uVar10 = local_90;
    }
  }
LAB_14d44c450:
  while( true ) {
    plVar8 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_197);
    }
    if (((TStack_120.CurrentBitIndex == uVar10) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar8 == (longlong *)local_b8)) break;
    lVar18 = *plVar8;
    lVar27 = (longlong)TStack_120.CurrentBitIndex * 0x70;
    local_170 = *(undefined8 **)(lVar27 + lVar18);
    if (local_170 != (undefined8 *)0x0) {
      pTVar4 = (pTVar15->Rows).LastPage;
      if ((pTVar4 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)0x0) ||
         (pTVar4->Count == (pTVar15->Rows).PageSize)) {
        iVar19 = (pTVar15->Rows).PagesArray.ArrayNum;
        piVar2 = &(pTVar15->Rows).PagesArray.ArrayMax;
        if (iVar19 == *piVar2) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pTVar15->Rows).PagesArray.AllocatorInstance,piVar2);
          (pTVar15->Rows).PagesArray.ArrayNum = iVar19;
        }
        pTVar21 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)
                  ((pTVar15->Rows).PagesArray.AllocatorInstance.Data + (longlong)iVar19 * 0x10);
        (pTVar15->Rows).PagesArray.ArrayNum = iVar19 + 1;
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>,int>
                  (pTVar21,1);
        pTVar4 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *)
                 (pTVar15->Rows).PagesArray.AllocatorInstance.Data;
        pIVar5 = (pTVar15->Rows).Allocator;
        (pTVar15->Rows).LastPage = pTVar21;
        (pTVar15->Rows).FirstPage = pTVar4;
        pFVar16 = (FLoadTimeProfilerAggregatedStats *)
                  (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(pTVar15->Rows).PageSize * 0x38);
        ((pTVar15->Rows).LastPage)->Items = pFVar16;
      }
      puVar1 = &(pTVar15->Rows).TotalItemCount;
      *puVar1 = *puVar1 + 1;
      pTVar4 = (pTVar15->Rows).LastPage;
      uVar6 = pTVar4->Count;
      pFVar16 = pTVar4->Items;
      pFVar16[uVar6].Name = (wchar_t *)0x0;
      pFVar16[uVar6].Count = 0;
      pFVar16[uVar6].Total = 0.0;
      (&pFVar16[uVar6].Total)[1] = 0.0;
      pFVar16[uVar6].Max = 0.0;
      (&pFVar16[uVar6].Max)[1] = 0.0;
      pFVar16[uVar6].Median = 0.0;
      puVar1 = &((pTVar15->Rows).LastPage)->Count;
      *puVar1 = *puVar1 + 1;
      pFVar16[uVar6].Name = (wchar_t *)*local_170;
      pFVar16[uVar6].Count = *(ulong64 *)(lVar27 + 8 + lVar18);
      pFVar16[uVar6].Total = *(double *)(lVar27 + 0x40 + lVar18);
      pFVar16[uVar6].Min = *(double *)(lVar27 + 0x48 + lVar18);
      pFVar16[uVar6].Max = *(double *)(lVar27 + 0x50 + lVar18);
      pFVar16[uVar6].Average = *(double *)(lVar27 + 0x58 + lVar18);
      pFVar16[uVar6].Median = *(double *)(lVar27 + 0x60 + lVar18);
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178);
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TraceServices::FClassInfo_const_*,TraceServices::FAggregatedTimingStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return (ITable<TraceServices::FLoadTimeProfilerAggregatedStats> *)pTVar15;
}

// CreatePackage @ 14d44c660

FPackageInfo * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreatePackage(FLoadTimeProfilerProvider *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  ILinearAllocator *pIVar4;
  ulong64 uVar5;
  int iVar6;
  FPackageInfo *pFVar7;
  TPagedArrayPage<TraceServices::FPackageInfo> *pTVar8;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pTVar8 = (this->Packages).LastPage;
  uVar5 = (this->Packages).TotalItemCount;
  if ((pTVar8 == (TPagedArrayPage<TraceServices::FPackageInfo> *)0x0) ||
     (pTVar8->Count == (this->Packages).PageSize)) {
    pTVar3 = &(this->Packages).PagesArray;
    iVar6 = (this->Packages).PagesArray.ArrayNum;
    piVar1 = &(this->Packages).PagesArray.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->Packages).PagesArray.ArrayNum = iVar6 + 1;
    pTVar8 = (TPagedArrayPage<TraceServices::FPackageInfo> *)
             ((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackageInfo>,int>(pTVar8,1)
    ;
    pIVar4 = (this->Packages).Allocator;
    (this->Packages).FirstPage =
         (TPagedArrayPage<TraceServices::FPackageInfo> *)(pTVar3->AllocatorInstance).Data;
    (this->Packages).LastPage = pTVar8;
    pFVar7 = (FPackageInfo *)
             (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->Packages).PageSize * 0x50);
    ((this->Packages).LastPage)->Items = pFVar7;
  }
  pTVar8 = (this->Packages).LastPage;
  puVar2 = &(this->Packages).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pFVar7 = pTVar8->Items + pTVar8->Count;
  *(undefined8 *)pFVar7 = 0;
  pFVar7->Name = (wchar_t *)0x0;
  (pFVar7->Summary).TotalHeaderSize = 0;
  (pFVar7->Summary).ImportCount = 0;
  (pFVar7->Summary).ExportCount = 0;
  (pFVar7->Summary).Priority = 0;
  (pFVar7->ImportedPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar7->ImportedPackages).ArrayNum = 0;
  (pFVar7->ImportedPackages).ArrayMax = 0;
  (pFVar7->Exports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar7->Exports).ArrayNum = 0;
  (pFVar7->Exports).ArrayMax = 0;
  pFVar7->TotalExportsSerialSize = 0;
  pFVar7->RequestId = 0;
  puVar2 = &((this->Packages).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar7->Id = (uint)uVar5;
  return pFVar7;
}

// CreatePackageDetailsTable @ 14d44c7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ITable<TraceServices::FPackagesTableRow> * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable
          (FLoadTimeProfilerProvider *this,double param_1,double param_2)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  ITable<TraceServices::FPackagesTableRow> *pIVar4;
  TTableLayout<TraceServices::FPackagesTableRow> *pTVar5;
  TTableLayout<TraceServices::FPackagesTableRow> *pTVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ITable<TraceServices::FPackagesTableRow> IVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FTempRow *pFVar14;
  ulong64 *puVar15;
  undefined1 auStack_578 [32];
  FIdentityFunctor local_558 [8];
  FTempRow *local_550;
  ulonglong local_548;
  undefined8 local_540;
  TTableLayout<TraceServices::FPackagesTableRow> local_538;
  undefined1 *local_520;
  FTempRow **local_518;
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_510;
  double local_508;
  double local_500;
  undefined8 *local_4f8;
  int local_4f0;
  TTableLayout<TraceServices::FPackagesTableRow> local_4e8;
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_4c8;
  void *local_488;
  undefined4 local_480;
  undefined1 local_478 [1024];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_578;
  iVar2 = (this->CpuTimelines).ArrayNum;
  pFVar10 = (this->CpuTimelines).AllocatorInstance.Data;
  iVar13 = 0;
  local_550 = (FTempRow *)0x0;
  pFVar12 = pFVar10 + (longlong)iVar2 * 0x10;
  local_540 = 0;
  local_548 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x40;
  local_4c8._0_8_ = 0;
  local_4c8._8_8_ = 0;
  local_4c8._32_8_ = 0;
  local_4c8._40_4_ = 0;
  local_4c8._44_4_ = 0x80;
  local_4c8._48_4_ = 0xffffffff;
  local_4c8._52_4_ = 0;
  local_488 = (void *)0x0;
  local_480 = 0;
  while( true ) {
    if ((this->CpuTimelines).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_558);
    }
    if (pFVar10 == pFVar12) break;
    local_518 = &local_550;
    local_510 = &local_4c8;
    local_4f8 = &local_540;
    local_538.Columns.AllocatorInstance.Data = (FScriptContainerElement *)&local_520;
    local_538._padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l6::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
         ::Call;
    local_520 = local_478;
    local_508 = param_1;
    local_500 = param_2;
    local_4f0 = iVar13;
    (**(code **)(**(longlong **)pFVar10 + 0x60))
              (*(longlong **)pFVar10,SUB84(param_1,0),SUB84(param_2,0),&local_538);
    iVar13 = iVar13 + 1;
    pFVar10 = pFVar10 + 0x10;
  }
  AlgoImpl::
  IntroSortInternal<_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::FTempRow,int,FIdentityFunctor,_TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable_::__l2::<lambda_2>_>
            (local_550,(int)local_548,local_558[0],(<lambda_2>)local_558[0]);
  pIVar4 = ::operator_new(0xc0);
  if (pIVar4 == (ITable<TraceServices::FPackagesTableRow> *)0x0) {
    pIVar4 = (ITable<TraceServices::FPackagesTableRow> *)0x0;
  }
  else {
    pTVar5 = TTableLayout<TraceServices::FPackagesTableRow>::
             TTableLayout<TraceServices::FPackagesTableRow>(&local_538,&this->PackagesTableLayout);
    pTVar6 = TTableLayout<TraceServices::FPackagesTableRow>::
             TTableLayout<TraceServices::FPackagesTableRow>(&local_4e8,pTVar5);
    *pIVar4 = (ITable<TraceServices::FPackagesTableRow>)
              &___7__TTableBase_UFPackagesTableRow_TraceServices___TraceServices__6B_;
    TTableLayout<TraceServices::FPackagesTableRow>::TTableLayout<TraceServices::FPackagesTableRow>
              ((TTableLayout<TraceServices::FPackagesTableRow> *)(pIVar4 + 1),pTVar6);
    DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar6->Columns).AllocatorInstance.Data,
               (pTVar6->Columns).ArrayNum);
    pFVar10 = (pTVar6->Columns).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    *pIVar4 = (ITable<TraceServices::FPackagesTableRow>)
              &___7__TTable_UFPackagesTableRow_TraceServices___0CAAAAA__TraceServices__6B_;
    pIVar4[4] = (ITable<TraceServices::FPackagesTableRow>)&___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar4 + 5),4000);
    pIVar4[0xd] = (ITable<TraceServices::FPackagesTableRow>)0x200000;
    pIVar4[10] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0xb] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0xc] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0xe] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0xf] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0x10] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0x11] = (ITable<TraceServices::FPackagesTableRow>)(pIVar4 + 4);
    pIVar4[0x12] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0x13] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0x14] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0x15] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    pIVar4[0x16] = (ITable<TraceServices::FPackagesTableRow>)0x400;
    pIVar4[0x17] = (ITable<TraceServices::FPackagesTableRow>)0x0;
    DestructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar5->Columns).AllocatorInstance.Data,
               (pTVar5->Columns).ArrayNum);
    pFVar10 = (pTVar5->Columns).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
  }
  iVar2 = (int)local_548;
  uVar8 = (ulonglong)(int)local_548;
  puVar15 = &local_550->SerializedHeaderSize;
  pFVar14 = local_550 + uVar8;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<`TraceServices::FLoadTimeProfilerProvider::CreatePackageDetailsTable'::__l2::FTempRow,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_558);
    }
    if ((FTempRow *)(puVar15 + -2) == pFVar14) break;
    if ((pIVar4[0x15] == (ITable<TraceServices::FPackagesTableRow>)0x0) ||
       (*(ITable<TraceServices::FPackagesTableRow> *)((longlong)pIVar4[0x15] + 8) == pIVar4[0x16]))
    {
      iVar13 = *(int *)(pIVar4 + 0x13);
      if (iVar13 == *(int *)&pIVar4[0x13].field_0x4) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(pIVar4 + 0x12),
                            (int *)&pIVar4[0x13].field_0x4);
        *(int *)(pIVar4 + 0x13) = iVar13;
      }
      IVar11 = (ITable<TraceServices::FPackagesTableRow>)
               ((longlong)iVar13 * 0x10 + (longlong)pIVar4[0x12]);
      *(int *)(pIVar4 + 0x13) = iVar13 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>,int>
                ((void *)IVar11,1);
      pIVar4[0x15] = IVar11;
      pIVar4[0x14] = pIVar4[0x12];
      uVar7 = (**(code **)(*(longlong *)pIVar4[0x11] + 8))
                        (pIVar4[0x11],(longlong)pIVar4[0x16] * 0x38);
      *(undefined8 *)pIVar4[0x15] = uVar7;
    }
    pIVar4[0x17] = (ITable<TraceServices::FPackagesTableRow>)((longlong)pIVar4[0x17] + 1);
    lVar9 = *(longlong *)((longlong)pIVar4[0x15] + 8) * 0x38;
    lVar3 = *(longlong *)pIVar4[0x15];
    *(undefined8 *)(lVar9 + lVar3) = 0;
    *(undefined8 *)(lVar9 + 8 + lVar3) = 0;
    *(undefined8 *)(lVar9 + 0x10 + lVar3) = 0;
    *(undefined8 *)(lVar9 + 0x18 + lVar3) = 0;
    *(undefined8 *)(lVar9 + 0x20 + lVar3) = 0;
    *(undefined8 *)(lVar9 + 0x28 + lVar3) = 0;
    *(undefined8 *)(lVar9 + 0x30 + lVar3) = 0;
    *(longlong *)((longlong)pIVar4[0x15] + 8) = *(longlong *)((longlong)pIVar4[0x15] + 8) + 1;
    *(FPackageInfo **)(lVar9 + lVar3) = (FPackageInfo *)puVar15[-1];
    *(ulong64 *)(lVar9 + 8 + lVar3) = puVar15[2] + *puVar15;
    *(ulong64 *)(lVar9 + 0x10 + lVar3) = *puVar15;
    *(ulong64 *)(lVar9 + 0x18 + lVar3) = puVar15[1];
    *(ulong64 *)(lVar9 + 0x20 + lVar3) = puVar15[2];
    *(ulong64 *)(lVar9 + 0x28 + lVar3) = puVar15[3];
    pdVar1 = (double *)(puVar15 + 4);
    puVar15 = puVar15 + 7;
    *(double *)(lVar9 + 0x30 + lVar3) = *pdVar1;
    uVar8 = local_548 & 0xffffffff;
  }
  local_480 = 0;
  if (local_488 != (void *)0x0) {
    FMemory::Free(local_488);
  }
  TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TraceServices::FPackageInfo_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_4c8);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_550 != (FTempRow *)0x0) {
    FMemory::Free(local_550);
  }
  return pIVar4;
}

// CreateRequest @ 14d44d260

FLoadRequest * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreateRequest(FLoadTimeProfilerProvider *this)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FLoadRequest> *pTVar3;
  ILinearAllocator *pIVar4;
  int iVar5;
  FLoadRequest *pFVar6;
  TPagedArrayPage<TraceServices::FLoadRequest> *pTVar7;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pTVar3 = (this->Requests).LastPage;
  if ((pTVar3 == (TPagedArrayPage<TraceServices::FLoadRequest> *)0x0) ||
     (pTVar3->Count == (this->Requests).PageSize)) {
    iVar5 = (this->Requests).PagesArray.ArrayNum;
    piVar1 = &(this->Requests).PagesArray.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Requests).PagesArray.AllocatorInstance,piVar1);
    }
    (this->Requests).PagesArray.ArrayNum = iVar5 + 1;
    pTVar7 = (TPagedArrayPage<TraceServices::FLoadRequest> *)
             ((this->Requests).PagesArray.AllocatorInstance.Data + (longlong)iVar5 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>,int>(pTVar7,1)
    ;
    pTVar3 = (TPagedArrayPage<TraceServices::FLoadRequest> *)
             (this->Requests).PagesArray.AllocatorInstance.Data;
    pIVar4 = (this->Requests).Allocator;
    (this->Requests).LastPage = pTVar7;
    (this->Requests).FirstPage = pTVar3;
    pFVar6 = (FLoadRequest *)
             (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->Requests).PageSize * 0x38);
    ((this->Requests).LastPage)->Items = pFVar6;
  }
  puVar2 = &(this->Requests).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pTVar3 = (this->Requests).LastPage;
  pFVar6 = pTVar3->Items + pTVar3->Count;
  *(undefined4 *)&pFVar6->field_0x14 = 0;
  pFVar6->Id = 0;
  pFVar6->Name = (wchar_t *)0x0;
  pFVar6->ThreadId = 0xffffffff;
  pFVar6->StartTime = 0.0;
  pFVar6->EndTime = 0.0;
  (pFVar6->Packages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->Packages).ArrayNum = 0;
  (pFVar6->Packages).ArrayMax = 0;
  puVar2 = &((this->Requests).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar6->Id = (this->Requests).TotalItemCount;
  return pFVar6;
}

// CreateRequestsTable @ 14d44d360

ITable<TraceServices::FRequestsTableRow> * __thiscall
TraceServices::FLoadTimeProfilerProvider::CreateRequestsTable
          (FLoadTimeProfilerProvider *this,double param_1,double param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  *pTVar4;
  int iVar5;
  ITable<TraceServices::FRequestsTableRow> *pIVar6;
  TTableLayout<TraceServices::FRequestsTableRow> *pTVar7;
  TTableLayout<TraceServices::FRequestsTableRow> *pTVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong64 uVar11;
  ITable<TraceServices::FRequestsTableRow> IVar12;
  ulong64 uVar13;
  FLoadRequest *pFVar14;
  FLoadRequest *pFVar15;
  longlong lVar16;
  ulong64 uVar17;
  FLoadRequest *pFVar18;
  ForAnyElementType *pFVar19;
  ulong64 local_res8;
  TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  local_d8;
  TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  local_a8;
  TTableLayout<TraceServices::FRequestsTableRow> local_78 [2];
  
  pIVar6 = ::operator_new(0xc0);
  if (pIVar6 == (ITable<TraceServices::FRequestsTableRow> *)0x0) {
    pIVar6 = (ITable<TraceServices::FRequestsTableRow> *)0x0;
  }
  else {
    pTVar7 = TTableLayout<TraceServices::FRequestsTableRow>::
             TTableLayout<TraceServices::FRequestsTableRow>(local_78,&this->RequestsTableLayout);
    pTVar8 = TTableLayout<TraceServices::FRequestsTableRow>::
             TTableLayout<TraceServices::FRequestsTableRow>
                       ((TTableLayout<TraceServices::FRequestsTableRow> *)&local_d8,pTVar7);
    *pIVar6 = (ITable<TraceServices::FRequestsTableRow>)
              &___7__TTableBase_UFRequestsTableRow_TraceServices___TraceServices__6B_;
    TTableLayout<TraceServices::FRequestsTableRow>::TTableLayout<TraceServices::FRequestsTableRow>
              ((TTableLayout<TraceServices::FRequestsTableRow> *)(pIVar6 + 1),pTVar8);
    DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar8->Columns).AllocatorInstance.Data,
               (pTVar8->Columns).ArrayNum);
    pFVar2 = (pTVar8->Columns).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *pIVar6 = (ITable<TraceServices::FRequestsTableRow>)
              &___7__TTable_UFRequestsTableRow_TraceServices___0CAAAAA__TraceServices__6B_;
    pIVar6[4] = (ITable<TraceServices::FRequestsTableRow>)&___7FSlabAllocator_TraceServices__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar6 + 5),4000);
    pIVar6[0xd] = (ITable<TraceServices::FRequestsTableRow>)0x200000;
    pIVar6[10] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0xb] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0xc] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0xe] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0xf] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0x10] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0x11] = (ITable<TraceServices::FRequestsTableRow>)(pIVar6 + 4);
    pIVar6[0x12] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0x13] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0x14] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0x15] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    pIVar6[0x16] = (ITable<TraceServices::FRequestsTableRow>)0x400;
    pIVar6[0x17] = (ITable<TraceServices::FRequestsTableRow>)0x0;
    DestructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar7->Columns).AllocatorInstance.Data,
               (pTVar7->Columns).ArrayNum);
    pFVar2 = (pTVar7->Columns).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  pFVar14 = (FLoadRequest *)0x0;
  local_d8.CurrentPageIndex = 0;
  local_d8.CurrentItemIndex = 0;
  local_d8.CurrentItem = (FLoadRequest *)0x0;
  local_d8.CurrentPageFirstItem = (FLoadRequest *)0x0;
  local_d8.CurrentPageLastItem = (FLoadRequest *)0x0;
  local_d8.Outer = &this->Requests;
  TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  ::SetPositionInternal(&local_d8,0);
  local_a8.CurrentPageFirstItem = (FLoadRequest *)0x0;
  local_a8.CurrentPageLastItem = (FLoadRequest *)0x0;
  local_a8.CurrentPageIndex = 0;
  local_a8.CurrentItemIndex = 0;
  local_a8.CurrentItem = (FLoadRequest *)0x0;
  local_a8.Outer = &this->Requests;
  TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  ::SetPositionInternal(&local_a8,(this->Requests).TotalItemCount);
  pTVar4 = local_d8.Outer;
  if (local_d8.CurrentItemIndex != local_a8.CurrentItemIndex) {
    local_res8 = local_d8.CurrentPageIndex;
    uVar11 = local_d8.CurrentPageIndex;
    uVar13 = local_d8.CurrentItemIndex;
    pFVar15 = local_d8.CurrentItem;
    uVar17 = local_a8.CurrentItemIndex;
    pFVar18 = local_d8.CurrentPageLastItem;
    do {
      if ((param_1 < pFVar15->EndTime || param_1 == pFVar15->EndTime) &&
         (pFVar15->StartTime <= param_2)) {
        if ((pIVar6[0x15] == (ITable<TraceServices::FRequestsTableRow>)0x0) ||
           (*(ITable<TraceServices::FRequestsTableRow> *)((longlong)pIVar6[0x15] + 8) ==
            pIVar6[0x16])) {
          iVar5 = *(int *)(pIVar6 + 0x13);
          if (iVar5 == *(int *)&pIVar6[0x13].field_0x4) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)(pIVar6 + 0x12),
                               (int *)&pIVar6[0x13].field_0x4);
            *(int *)(pIVar6 + 0x13) = iVar5;
          }
          IVar12 = (ITable<TraceServices::FRequestsTableRow>)
                   ((longlong)iVar5 * 0x10 + (longlong)pIVar6[0x12]);
          *(int *)(pIVar6 + 0x13) = iVar5 + 1;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>,int>
                    ((void *)IVar12,1);
          pIVar6[0x14] = pIVar6[0x12];
          pIVar6[0x15] = IVar12;
          uVar9 = (**(code **)(*(longlong *)pIVar6[0x11] + 8))
                            (pIVar6[0x11],(longlong)pIVar6[0x16] * 0x30);
          *(undefined8 *)pIVar6[0x15] = uVar9;
        }
        pIVar6[0x17] = (ITable<TraceServices::FRequestsTableRow>)((longlong)pIVar6[0x17] + 1);
        lVar3 = *(longlong *)pIVar6[0x15];
        lVar16 = *(longlong *)((longlong)pIVar6[0x15] + 8) * 0x30;
        pFVar19 = (ForAnyElementType *)(lVar3 + 0x20 + lVar16);
        piVar10 = (int *)(lVar3 + 0x2c + lVar16);
        *(undefined8 *)(lVar16 + lVar3) = 0;
        pFVar19->Data = (FScriptContainerElement *)0x0;
        *piVar10 = 0;
        *(undefined8 *)(lVar16 + 8 + lVar3) = 0;
        *(undefined8 *)(lVar16 + 0x10 + lVar3) = 0;
        *(undefined8 *)(lVar16 + 0x18 + lVar3) = 0;
        *(undefined4 *)(lVar16 + 0x28 + lVar3) = 0;
        *(longlong *)((longlong)pIVar6[0x15] + 8) = *(longlong *)((longlong)pIVar6[0x15] + 8) + 1;
        *(ulong64 *)(lVar16 + lVar3) = pFVar15->Id;
        *(wchar_t **)(lVar16 + 8 + lVar3) = pFVar15->Name;
        *(double *)(lVar16 + 0x10 + lVar3) = pFVar15->StartTime;
        *(double *)(lVar16 + 0x18 + lVar3) = pFVar15->EndTime - pFVar15->StartTime;
        uVar11 = local_res8;
        uVar17 = local_a8.CurrentItemIndex;
        if ((TArray<TraceServices::FPackageInfo_const_*,TSizedDefaultAllocator<32>_> *)pFVar19 !=
            &pFVar15->Packages) {
          iVar5 = (pFVar15->Packages).ArrayNum;
          pFVar2 = (pFVar15->Packages).AllocatorInstance.Data;
          iVar1 = *(int *)((longlong)&pFVar19[1].Data + 4);
          *(int *)&pFVar19[1].Data = iVar5;
          if ((iVar5 == 0) && (iVar1 == 0)) {
            *(undefined4 *)((longlong)&pFVar19[1].Data + 4) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar5,iVar1,pFVar19,iVar5,piVar10);
            uVar17 = local_a8.CurrentItemIndex;
            if (iVar5 != 0) {
              memcpy(pFVar19->Data,pFVar2,(longlong)iVar5 << 3);
              uVar17 = local_a8.CurrentItemIndex;
            }
          }
        }
      }
      if (pFVar15 == pFVar18) {
        pFVar18 = pFVar14;
        if (uVar11 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
          uVar13 = pTVar4->TotalItemCount;
          pFVar15 = pFVar14;
        }
        else {
          uVar11 = uVar11 + 1;
          pFVar15 = pTVar4->FirstPage[uVar11].Items;
          local_res8 = uVar11;
          if (pFVar15 == (FLoadRequest *)0x0) {
            uVar13 = uVar11 * pTVar4->PageSize;
          }
          else {
            uVar13 = uVar11 * pTVar4->PageSize;
            pFVar18 = pFVar15 + (pTVar4->FirstPage[uVar11].Count - 1);
          }
        }
      }
      else {
        uVar13 = uVar13 + 1;
        pFVar15 = pFVar15 + 1;
      }
    } while (uVar13 != uVar17);
  }
  return pIVar6;
}

// DistributeBytesAcrossFrames @ 14d44f910

void __thiscall
TraceServices::FLoadTimeProfilerProvider::DistributeBytesAcrossFrames
          (FLoadTimeProfilerProvider *this,ulonglong param_1,double param_2,double param_3,
          int param_5)

{
  ulong64 *puVar1;
  int *piVar2;
  longlong *plVar3;
  ILinearAllocator *pIVar4;
  ulong64 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  FLoaderFrame *pFVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame> *pTVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  double dVar27;
  undefined1 in_XMM0 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  dVar31 = param_2 * __real_404e000000000000;
  if (0.0 <= dVar31) {
    auVar28._8_8_ = 0;
    auVar28._0_8_ = dVar31;
    auVar28 = roundpd(in_XMM0,auVar28,1);
  }
  else {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar31;
    auVar28 = roundpd(in_XMM0,auVar9,2);
  }
  dVar31 = param_3 * __real_404e000000000000;
  iVar24 = (int)auVar28._0_8_;
  if (0.0 <= dVar31) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar31;
    auVar28 = roundpd(auVar28,auVar8,1);
    dVar31 = auVar28._0_8_;
  }
  else {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar31;
    auVar28 = roundpd(auVar28,auVar7,2);
    dVar31 = auVar28._0_8_;
  }
  iVar25 = (int)dVar31;
  uVar22 = (this->Frames).TotalItemCount;
  dVar31 = __real_3f91111111111111;
  while (__real_3f91111111111111 = dVar31, uVar22 <= (ulonglong)(longlong)(iVar25 + 1)) {
    pTVar21 = (this->Frames).LastPage;
    if ((pTVar21 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame> *)0x0)
       || (pTVar21->Count == (this->Frames).PageSize)) {
      iVar13 = (this->Frames).PagesArray.ArrayNum;
      piVar2 = &(this->Frames).PagesArray.ArrayMax;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->Frames).PagesArray.AllocatorInstance,piVar2);
        (this->Frames).PagesArray.ArrayNum = iVar13;
      }
      pTVar21 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame> *)
                ((this->Frames).PagesArray.AllocatorInstance.Data + (longlong)iVar13 * 0x10);
      (this->Frames).PagesArray.ArrayNum = iVar13 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>,int>
                (pTVar21,1);
      pIVar4 = (this->Frames).Allocator;
      (this->Frames).FirstPage =
           (TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame> *)
           (this->Frames).PagesArray.AllocatorInstance.Data;
      (this->Frames).LastPage = pTVar21;
      pFVar14 = (FLoaderFrame *)
                (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->Frames).PageSize * 0x18);
      ((this->Frames).LastPage)->Items = pFVar14;
    }
    puVar1 = &(this->Frames).TotalItemCount;
    *puVar1 = *puVar1 + 1;
    pTVar21 = (this->Frames).LastPage;
    uVar5 = pTVar21->Count;
    pFVar14 = pTVar21->Items;
    pFVar14[uVar5].IoDispatcherReadBytes = 0;
    pFVar14[uVar5].HeaderLoadedBytes = 0;
    pFVar14[uVar5].ExportLoadedBytes = 0;
    puVar1 = &((this->Frames).LastPage)->Count;
    *puVar1 = *puVar1 + 1;
    dVar31 = __real_3f91111111111111;
    uVar22 = (this->Frames).TotalItemCount;
  }
  if (iVar24 == iVar25) {
    uVar22 = (this->Frames).PageSize;
    plVar3 = (longlong *)
             ((longlong)
              &(this->Frames).FirstPage[(ulonglong)(longlong)iVar24 / uVar22].Items
               [(ulonglong)(longlong)iVar24 % uVar22].IoDispatcherReadBytes + (longlong)param_5);
    *plVar3 = *plVar3 + param_1;
  }
  else {
    auVar33._8_4_ = in_XMM3_Dc;
    auVar33._0_8_ = param_3;
    auVar33._12_4_ = in_XMM3_Dd;
    auVar34._8_8_ = auVar33._8_8_;
    auVar34._0_8_ = param_3 - param_2;
    param_2 = (double)(iVar24 + 1) * dVar31 - param_2;
    if ((param_2 < 0.0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TimeInFirstFrame >= 0.0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                            ,0x24c,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar11 = __real_43e0000000000000;
    dVar10 = __real_3ff0000000000000 / auVar34._0_8_;
    dVar32 = dVar10 * param_2 * (double)param_1;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = dVar32;
    if (0.0 <= dVar32) {
      auVar28 = roundpd(auVar34,auVar29,1);
      dVar32 = auVar28._0_8_;
    }
    else {
      auVar28 = roundpd(auVar34,auVar29,2);
      dVar32 = auVar28._0_8_;
    }
    uVar22 = (this->Frames).PageSize;
    lVar15 = 0;
    dVar27 = dVar32;
    if ((__real_43e0000000000000 <= dVar32) &&
       (dVar27 = dVar32 - __real_43e0000000000000, dVar27 < __real_43e0000000000000)) {
      lVar15 = -0x8000000000000000;
    }
    lVar15 = (longlong)dVar27 + lVar15;
    plVar3 = (longlong *)
             ((longlong)
              &(this->Frames).FirstPage[(ulonglong)(longlong)iVar24 / uVar22].Items
               [(ulonglong)(longlong)iVar24 % uVar22].IoDispatcherReadBytes + (longlong)param_5);
    *plVar3 = *plVar3 + lVar15;
    param_3 = param_3 - (double)iVar25 * dVar31;
    if ((param_3 < 0.0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TimeInLastFrame >= 0.0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                            ,0x253,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar31 = dVar10 * param_3 * (double)param_1;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar31;
    if (0.0 <= dVar31) {
      auVar28 = roundpd(auVar30,auVar30,1);
      dVar31 = auVar28._0_8_;
    }
    else {
      auVar28 = roundpd(auVar30,auVar30,2);
      dVar31 = auVar28._0_8_;
    }
    lVar16 = 0;
    if ((dVar11 <= dVar31) && (dVar31 = dVar31 - dVar11, dVar31 < dVar11)) {
      lVar16 = -0x8000000000000000;
    }
    lVar16 = (longlong)dVar31 + lVar16;
    if ((param_1 < (ulonglong)(lVar16 + lVar15)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("BytesInFirstFrame + BytesInLastFrame <= ByteCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                            ,0x256,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar19 = 0;
    if ((dVar11 <= dVar32) && (dVar32 = dVar32 - dVar11, dVar32 < dVar11)) {
      lVar19 = -0x8000000000000000;
    }
    iVar13 = iVar25 - iVar24;
    iVar24 = iVar24 + 1;
    uVar22 = param_1 - ((longlong)dVar32 + lVar19 + lVar16);
    if (iVar24 < iVar25) {
      uVar23 = (ulonglong)iVar24;
      uVar26 = (ulonglong)(uint)(iVar25 - iVar24);
      do {
        iVar13 = iVar13 + -1;
        uVar17 = uVar22 / (ulonglong)(longlong)iVar13;
        uVar20 = (this->Frames).PageSize;
        uVar18 = uVar23 / uVar20;
        uVar20 = uVar23 % uVar20;
        lVar15 = lVar15 + uVar17;
        uVar22 = uVar22 - uVar17;
        uVar23 = uVar23 + 1;
        plVar3 = (longlong *)
                 ((longlong)&(this->Frames).FirstPage[uVar18].Items[uVar20].IoDispatcherReadBytes +
                 (longlong)param_5);
        *plVar3 = *plVar3 + uVar17;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    uVar23 = (this->Frames).PageSize;
    plVar3 = (longlong *)
             ((longlong)
              &(this->Frames).FirstPage[(ulonglong)(longlong)iVar25 / uVar23].Items
               [(ulonglong)(longlong)iVar25 % uVar23].IoDispatcherReadBytes + (longlong)param_5);
    *plVar3 = *plVar3 + lVar16 + uVar22;
    if ((lVar16 + uVar22 + lVar15 != param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TotalDistributed == OriginalByteCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                            ,0x269,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// EditCpuTimeline @ 14d4503b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall
TraceServices::FLoadTimeProfilerProvider::EditCpuTimeline
          (FLoadTimeProfilerProvider *this,uint param_1)

{
  int *piVar1;
  TArray<TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ILinearAllocator *pIVar7;
  TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pTVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_res10[0] = param_1;
  (**(code **)((longlong)*this->Session + 0xb0))();
  if (*(int *)&(this->CpuTimelinesThreadMap).field_0x8 !=
      *(int *)&(this->CpuTimelinesThreadMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->CpuTimelinesThreadMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->CpuTimelinesThreadMap).field_0x38;
    }
    uVar5 = *(uint *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(this->CpuTimelinesThreadMap).field_0x48 - 1U & local_res10[0]) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&this->CpuTimelinesThreadMap);
        if (*puVar10 == local_res10[0]) {
          puVar9 = puVar10 + 1;
          if (puVar10 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            uVar5 = *puVar9;
            uVar11 = 0;
            if ((int)uVar5 < (this->CpuTimelines).ArrayNum) {
              uVar11 = ~uVar5 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pTVar8 = (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                          *)(*pcVar3)();
                return pTVar8;
              }
            }
            return *(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                     **)((this->CpuTimelines).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10);
          }
          break;
        }
        uVar5 = puVar10[2];
      } while (uVar5 != 0xffffffff);
    }
  }
  pIVar7 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  pTStack_20 = ::operator_new(0x48);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMonotonicTimeline_UFLoadTimeProfilerCpuEvent_TraceServices__UFMonotonicTimelineDefaultSettings_2__TraceServices___00_SharedPointerInternals__6B_
    ;
    TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    ::
    TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              ((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *)(pTStack_20 + 1),pIVar7);
    local_28 = (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *)(pTStack_20 + 1);
    if (local_28 ==
        (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
  }
  local_res8[0] = (this->CpuTimelines).ArrayNum;
  TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  ::Emplace<unsigned_int_const_&,unsigned_int_const_&>
            ((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
              *)&this->CpuTimelinesThreadMap,local_res10,local_res8);
  pTVar2 = &this->CpuTimelines;
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar13 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar13 + (longlong)(this->CpuTimelines).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  iVar6 = (this->CpuTimelines).ArrayNum;
  piVar1 = &(this->CpuTimelines).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  pTVar8 = local_28;
  pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  (this->CpuTimelines).ArrayNum = iVar6 + 1;
  *(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    **)pFVar13 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar13 + 8) = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return pTVar8;
}

// EndIoDispatcherBatch @ 14d4517d0

void __thiscall
TraceServices::FLoadTimeProfilerProvider::EndIoDispatcherBatch
          (FLoadTimeProfilerProvider *this,ulong64 param_1,double param_2,ulong64 param_3)

{
  ulonglong uVar1;
  FIoDispatcherBatch *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  uVar1 = (this->IoDispatcherBatches).PageSize;
  uVar5 = param_1 % uVar1;
  pFVar2 = (this->IoDispatcherBatches).FirstPage[param_1 / uVar1].Items;
  pFVar2[uVar5].TotalSize = param_3;
  pFVar2[uVar5].EndTime = param_2;
  if (param_2 < pFVar2[uVar5].StartTime) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Batch.EndTime >= Batch.StartTime",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                       ,0x284,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DistributeBytesAcrossFrames
            (this,pFVar2[uVar5].TotalSize,pFVar2[uVar5].StartTime,pFVar2[uVar5].EndTime,0);
  (**(code **)((longlong)*this->TotalIoDispatcherBytesReadCounter + 0x40))
            (this->TotalIoDispatcherBytesReadCounter,SUB84(param_2,0),pFVar2[uVar5].TotalSize);
                    /* WARNING: Could not recover jumptable at 0x00014d4518ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->ActiveIoDispatcherBatchesCounter + 0x40))
            (this->ActiveIoDispatcherBatchesCounter,SUB84(param_2,0),0xffffffffffffffff);
  return;
}

// GetCpuThreadTimelineIndex @ 14d464800

bool __thiscall
TraceServices::FLoadTimeProfilerProvider::GetCpuThreadTimelineIndex
          (FLoadTimeProfilerProvider *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->CpuTimelinesThreadMap).field_0x8 !=
      *(int *)&(this->CpuTimelinesThreadMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CpuTimelinesThreadMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CpuTimelinesThreadMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->CpuTimelinesThreadMap).field_0x48 - 1U & param_1) *
                               4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&this->CpuTimelinesThreadMap);
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

// GetRequestsTable @ 14d46c5a0

ITable<TraceServices::FLoadRequest> * __thiscall
TraceServices::FLoadTimeProfilerProvider::GetRequestsTable(FLoadTimeProfilerProvider *this)

{
  return (ITable<TraceServices::FLoadRequest> *)&this->RequestsTable;
}

// GetTimelineCount @ 14d46e4e0

uint __thiscall
TraceServices::FLoadTimeProfilerProvider::GetTimelineCount(FLoadTimeProfilerProvider *this)

{
  return (this->CpuTimelines).ArrayNum;
}

// PackageSizeSum @ 14d47b960

ulong64 __cdecl TraceServices::FLoadTimeProfilerProvider::PackageSizeSum(FLoadRequest *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  pFVar8 = (param_1->Packages).AllocatorInstance.Data;
  iVar2 = (param_1->Packages).ArrayNum;
  uVar7 = 0;
  local_res10 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar5 = local_res10;
    if ((param_1->Packages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FPackageInfo_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar5) break;
    lVar4 = *(longlong *)pFVar8;
    plVar6 = *(longlong **)(lVar4 + 0x30);
    iVar3 = *(int *)(lVar4 + 0x38);
    uVar7 = uVar7 + *(uint *)(lVar4 + 0x10);
    plVar1 = plVar6 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x38) != iVar3) {
        `TCheckedPointerIterator<TraceServices::FPackageExportInfo_const_*_const,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (plVar6 == plVar1) break;
      uVar7 = uVar7 + *(longlong *)(*plVar6 + 0x10);
      plVar6 = plVar6 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  return uVar7;
}

// ReadTimeline @ 14d482600

bool __thiscall
TraceServices::FLoadTimeProfilerProvider::ReadTimeline
          (FLoadTimeProfilerProvider *this,uint param_1,
          TFunctionRef<void___cdecl(TraceServices::ITimeline<TraceServices::FLoadTimeProfilerCpuEvent>_const_&)>
          *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar1 = (this->CpuTimelines).ArrayNum;
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
              ((this->CpuTimelines).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10));
  return true;
}

