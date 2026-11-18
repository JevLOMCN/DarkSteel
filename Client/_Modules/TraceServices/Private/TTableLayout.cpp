// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 84

// AddColumn<unsigned_int> @ 14d407aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d407c0b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d407c0f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FNetProfilerAggregatedStats> * __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this,pdm_e7677e7b param_1,
          wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FNetProfilerAggregatedStats> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_e7677e7b pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFNetProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFNetProfilerAggregatedStats_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::AddColumn<unsigned_int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FNetProfilerAggregatedStats_const_&>
             ::Call;
  local_78 = 2;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_e7677e7b *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<unsigned_int> @ 14d407c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d407dc4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d407dc8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::AddColumn<unsigned_int>
          (TTableLayout<TraceServices::FImportTableRow> *this,wchar_t *param_1,
          TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
          *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FImportTableRow> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_1);
  local_68 = *(longlong *)param_2;
  local_78 = 2;
  local_40 = 0;
  local_74 = param_3;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  pFVar9 = (this->Columns).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar9;
    local_a8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FImportTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar9 + 0x10) = local_78;
  *(uint *)(pFVar9 + 0x14) = local_74;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  *(undefined8 *)(pFVar9 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar9 + 0x30) = local_58;
  *(undefined4 *)(pFVar9 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar9 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar9 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar9 + 0x40) = local_48;
  if (*(longlong *)(pFVar9 + 0x20) == 0) {
    if (local_68 != 0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  else {
    local_68 = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// AddColumn<float> @ 14d407e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d407f94) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d407f98 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::AddColumn<float>
          (TTableLayout<TraceServices::FImportTableRow> *this,wchar_t *param_1,
          TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
          *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FImportTableRow> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_1);
  local_68 = *(longlong *)param_2;
  local_78 = 3;
  local_40 = 0;
  local_74 = param_3;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  pFVar9 = (this->Columns).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar9;
    local_a8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FImportTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar9 + 0x10) = local_78;
  *(uint *)(pFVar9 + 0x14) = local_74;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  *(undefined8 *)(pFVar9 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar9 + 0x30) = local_58;
  *(undefined4 *)(pFVar9 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar9 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar9 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar9 + 0x40) = local_48;
  if (*(longlong *)(pFVar9 + 0x20) == 0) {
    if (local_68 != 0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  else {
    local_68 = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// AddColumn<double> @ 14d407ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d40815b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d40815f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FExportsTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>
          (TTableLayout<TraceServices::FExportsTableRow> *this,pdm_5fc97e1a param_1,wchar_t *param_2
          ,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FExportsTableRow> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_5fc97e1a pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFExportsTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
             ::Call;
  local_78 = 4;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FExportsTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_5fc97e1a *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<double> @ 14d4081a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d40830b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d40830f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

TTableLayout<TraceServices::FFileActivity> * __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<double>
          (TTableLayout<TraceServices::FFileActivity> *this,pdm_f790c1e0 param_1,wchar_t *param_2,
          uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FFileActivity> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_f790c1e0 pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
             ::Call;
  local_78 = 4;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FFileActivity> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_f790c1e0 *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<double> @ 14d408350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d4084bb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d4084bf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FLoadRequest> * __thiscall
TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>
          (TTableLayout<TraceServices::FLoadRequest> *this,pdm_4fe42ed8 param_1,wchar_t *param_2,
          uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FLoadRequest> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_4fe42ed8 pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLoadRequest_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadRequest_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadRequest>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadRequest_const_&>
             ::Call;
  local_78 = 4;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FLoadRequest> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_4fe42ed8 *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<double> @ 14d408500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d40866b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d40866f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> * __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this,pdm_2f06e9ad param_1,
          wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_2f06e9ad pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFLoadTimeProfilerAggregatedStats_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLoadTimeProfilerAggregatedStats_const_&>
             ::Call;
  local_78 = 4;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_2f06e9ad *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<double> @ 14d4086b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d40881b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d40881f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FPackagesTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>
          (TTableLayout<TraceServices::FPackagesTableRow> *this,pdm_47920dee param_1,
          wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FPackagesTableRow> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_47920dee pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFPackagesTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
             ::Call;
  local_78 = 4;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FPackagesTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_47920dee *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<double> @ 14d408860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d4089cb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d4089cf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FRequestsTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>
          (TTableLayout<TraceServices::FRequestsTableRow> *this,pdm_c495b945 param_1,
          wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FRequestsTableRow> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_c495b945 pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFRequestsTableRow_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FRequestsTableRow_const_&>
             ::Call;
  local_78 = 4;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FRequestsTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_c495b945 *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<double> @ 14d408a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d408b7b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d408b7f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

TTableLayout<TraceServices::FTimingProfilerAggregatedStats> * __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this,pdm_a1efb016 param_1,
          wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_a1efb016 pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__QEAAAEAV23_PEQFTimingProfilerAggregatedStats_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FTimingProfilerAggregatedStats_const_&>
             ::Call;
  local_78 = 4;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_a1efb016 *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<double> @ 14d408bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d408d34) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d408d38 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::AddColumn<double>
          (TTableLayout<TraceServices::FImportTableRow> *this,wchar_t *param_1,
          TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
          *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FImportTableRow> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_1);
  local_68 = *(longlong *)param_2;
  local_78 = 4;
  local_40 = 0;
  local_74 = param_3;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  pFVar9 = (this->Columns).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar9;
    local_a8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FImportTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar9 + 0x10) = local_78;
  *(uint *)(pFVar9 + 0x14) = local_74;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  *(undefined8 *)(pFVar9 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar9 + 0x30) = local_58;
  *(undefined4 *)(pFVar9 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar9 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar9 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar9 + 0x40) = local_48;
  if (*(longlong *)(pFVar9 + 0x20) == 0) {
    if (local_68 != 0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  else {
    local_68 = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// AddColumn<wchar_t_const_*> @ 14d408d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d408efd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d408f01 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FExportsTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>
          (TTableLayout<TraceServices::FExportsTableRow> *this,
          _func___cdecl_wchar_t_ptr_FExportsTableRow_ptr *param_1,wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FExportsTableRow> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFExportsTableRow_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFExportsTableRow_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FExportsTableRow>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FExportsTableRow_const_&>
             ::Call;
  local_78 = 5;
  local_40 = 0;
  uStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FExportsTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(undefined4 *)(pFVar7 + 0x38) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_50._4_4_;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<wchar_t_const_*> @ 14d408f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d4090ad) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d4090b1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

TTableLayout<TraceServices::FFileActivity> * __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>
          (TTableLayout<TraceServices::FFileActivity> *this,
          _func___cdecl_wchar_t_ptr_FFileActivity_ptr *param_1,wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FFileActivity> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFFileActivity_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
             ::Call;
  local_78 = 5;
  local_40 = 0;
  uStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FFileActivity> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(undefined4 *)(pFVar7 + 0x38) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_50._4_4_;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<wchar_t_const_*> @ 14d4090f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d40925d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d409261 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

TTableLayout<TraceServices::FLogMessageInternal> * __thiscall
TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>
          (TTableLayout<TraceServices::FLogMessageInternal> *this,
          _func___cdecl_wchar_t_ptr_FLogMessageInternal_ptr *param_1,wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FLogMessageInternal> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_P6APEB_WAEBUFLogMessageInternal_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
             ::Call;
  local_78 = 5;
  local_40 = 0;
  uStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FLogMessageInternal> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(undefined4 *)(pFVar7 + 0x38) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_50._4_4_;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<wchar_t_const_*> @ 14d4092a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d409414) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d409418 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::AddColumn<wchar_t_const_*>
          (TTableLayout<TraceServices::FImportTableRow> *this,wchar_t *param_1,
          TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
          *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FImportTableRow> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_1);
  local_68 = *(longlong *)param_2;
  local_78 = 5;
  local_40 = 0;
  local_74 = param_3;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  pFVar9 = (this->Columns).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar9;
    local_a8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FImportTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar9 + 0x10) = local_78;
  *(uint *)(pFVar9 + 0x14) = local_74;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  *(undefined8 *)(pFVar9 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar9 + 0x30) = local_58;
  *(undefined4 *)(pFVar9 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar9 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar9 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar9 + 0x40) = local_48;
  if (*(longlong *)(pFVar9 + 0x20) == 0) {
    if (local_68 != 0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  else {
    local_68 = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// AddColumn<__int64> @ 14d409470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d4095e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d4095e8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::AddColumn<__int64>
          (TTableLayout<TraceServices::FImportTableRow> *this,wchar_t *param_1,
          TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
          *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FImportTableRow> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_1);
  local_68 = *(longlong *)param_2;
  local_78 = 2;
  local_40 = 0;
  local_74 = param_3;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  pFVar9 = (this->Columns).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar9;
    local_a8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FImportTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar9 + 0x10) = local_78;
  *(uint *)(pFVar9 + 0x14) = local_74;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  *(undefined8 *)(pFVar9 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar9 + 0x30) = local_58;
  *(undefined4 *)(pFVar9 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar9 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar9 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar9 + 0x40) = local_48;
  if (*(longlong *)(pFVar9 + 0x20) == 0) {
    if (local_68 != 0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  else {
    local_68 = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// AddColumn<unsigned___int64> @ 14d409640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d4097ab) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d4097af */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

TTableLayout<TraceServices::FFileActivity> * __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>
          (TTableLayout<TraceServices::FFileActivity> *this,pdm_623452d6 param_1,wchar_t *param_2,
          uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FFileActivity> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_623452d6 pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
             ::Call;
  local_78 = 2;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FFileActivity> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_623452d6 *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<unsigned___int64> @ 14d4097f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d40995b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d40995f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FPackagesTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>
          (TTableLayout<TraceServices::FPackagesTableRow> *this,pdm_a37833e4 param_1,
          wchar_t *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FPackagesTableRow> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  code *local_68;
  undefined8 local_58;
  pdm_a37833e4 pStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_2);
  pFVar7 = (this->Columns).AllocatorInstance.Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__K___TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__QEAAAEAV23_PEQFPackagesTableRow_3__KPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::AddColumn<unsigned___int64>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FPackagesTableRow_const_&>
             ::Call;
  local_78 = 2;
  local_40 = 0;
  pStack_50 = param_1;
  local_74 = param_3;
  if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
     (lVar6 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar7 + lVar6 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar7;
    local_a8 = lVar6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FPackagesTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar7 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar7 + 0x10) = local_78;
  *(uint *)(pFVar7 + 0x14) = local_74;
  *(code **)(pFVar7 + 0x20) = local_68;
  *(undefined8 *)(pFVar7 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar7 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar7 + 0x34) = local_58._4_4_;
  *(pdm_a37833e4 *)(pFVar7 + 0x38) = pStack_50;
  *(undefined4 *)(pFVar7 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar7 + 0x40) = local_48;
  if (*(longlong *)(pFVar7 + 0x20) == 0) {
    if (local_68 != (code *)0x0) {
      (*(code *)local_58[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddColumn<unsigned___int64> @ 14d4099a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d409b14) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d409b18 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::AddColumn<unsigned___int64>
          (TTableLayout<TraceServices::FImportTableRow> *this,wchar_t *param_1,
          TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
          *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FImportTableRow> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_1);
  local_68 = *(longlong *)param_2;
  local_78 = 2;
  local_40 = 0;
  local_74 = param_3;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  pFVar9 = (this->Columns).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar9;
    local_a8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FImportTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar9 + 0x10) = local_78;
  *(uint *)(pFVar9 + 0x14) = local_74;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  *(undefined8 *)(pFVar9 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar9 + 0x30) = local_58;
  *(undefined4 *)(pFVar9 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar9 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar9 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar9 + 0x40) = local_48;
  if (*(longlong *)(pFVar9 + 0x20) == 0) {
    if (local_68 != 0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  else {
    local_68 = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// AddColumn<bool> @ 14d409b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d409ce4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014d409ce8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::AddColumn<bool>
          (TTableLayout<TraceServices::FImportTableRow> *this,wchar_t *param_1,
          TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
          *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTableLayout<TraceServices::FImportTableRow> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  FString *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  undefined4 local_78;
  uint local_74;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  ::FString::FString(&local_88,param_1);
  local_68 = *(longlong *)param_2;
  local_78 = 1;
  local_40 = 0;
  local_74 = param_3;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  pFVar9 = (this->Columns).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar9 + lVar8 * 0x50)) {
    local_a0 = (longlong)(this->Columns).ArrayNum;
    local_98 = 0x50;
    local_b8 = &local_88;
    local_b0 = pFVar9;
    local_a8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTableLayout<TraceServices::FImportTableRow> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Columns).ArrayNum;
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(this->Columns).AllocatorInstance,piVar1);
  }
  (this->Columns).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Columns).AllocatorInstance.Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar9 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar9 + 0x10) = local_78;
  *(uint *)(pFVar9 + 0x14) = local_74;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  *(undefined8 *)(pFVar9 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar9 + 0x30) = local_58;
  *(undefined4 *)(pFVar9 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar9 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar9 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar9 + 0x40) = local_48;
  if (*(longlong *)(pFVar9 + 0x20) == 0) {
    if (local_68 != 0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  else {
    local_68 = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// TTableLayout<TraceServices::FExportsTableRow> @ 14d420470

TTableLayout<TraceServices::FExportsTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::
TTableLayout<TraceServices::FExportsTableRow>
          (TTableLayout<TraceServices::FExportsTableRow> *this,
          TTableLayout<TraceServices::FExportsTableRow> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  this->_padding_ =
       (longlong)&___7__TTableLayout_UFExportsTableRow_TraceServices___TraceServices__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Columns).ArrayMax;
  iVar3 = (param_1->Columns).ArrayNum;
  pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
  (this->Columns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FExportsTableRow>::FColumnDeclaration,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> @ 14d420500

TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> * __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::
TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this,
          TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  this->_padding_ =
       (longlong)
       &___7__TTableLayout_UFLoadTimeProfilerAggregatedStats_TraceServices___TraceServices__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Columns).ArrayMax;
  iVar3 = (param_1->Columns).ArrayNum;
  pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
  (this->Columns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::FColumnDeclaration,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// TTableLayout<TraceServices::FNetProfilerAggregatedStats> @ 14d420590

TTableLayout<TraceServices::FNetProfilerAggregatedStats> * __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::
TTableLayout<TraceServices::FNetProfilerAggregatedStats>
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this,
          TTableLayout<TraceServices::FNetProfilerAggregatedStats> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  this->_padding_ =
       (longlong)&___7__TTableLayout_UFNetProfilerAggregatedStats_TraceServices___TraceServices__6B_
  ;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Columns).ArrayMax;
  iVar3 = (param_1->Columns).ArrayNum;
  pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
  (this->Columns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::FColumnDeclaration,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> @ 14d420620

TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> * __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>
          (TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  this->_padding_ =
       (longlong)
       &
       ___7__TTableLayout_UFNetProfilerAggregatedStatsCounterStats_TraceServices___TraceServices__6B_
  ;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Columns).ArrayMax;
  iVar3 = (param_1->Columns).ArrayNum;
  pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
  (this->Columns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::FColumnDeclaration,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// TTableLayout<TraceServices::FPackagesTableRow> @ 14d4206b0

TTableLayout<TraceServices::FPackagesTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::
TTableLayout<TraceServices::FPackagesTableRow>
          (TTableLayout<TraceServices::FPackagesTableRow> *this,
          TTableLayout<TraceServices::FPackagesTableRow> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  this->_padding_ =
       (longlong)&___7__TTableLayout_UFPackagesTableRow_TraceServices___TraceServices__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Columns).ArrayMax;
  iVar3 = (param_1->Columns).ArrayNum;
  pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
  (this->Columns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::FColumnDeclaration,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// TTableLayout<TraceServices::FRequestsTableRow> @ 14d420740

TTableLayout<TraceServices::FRequestsTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::
TTableLayout<TraceServices::FRequestsTableRow>
          (TTableLayout<TraceServices::FRequestsTableRow> *this,
          TTableLayout<TraceServices::FRequestsTableRow> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  this->_padding_ =
       (longlong)&___7__TTableLayout_UFRequestsTableRow_TraceServices___TraceServices__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Columns).ArrayMax;
  iVar3 = (param_1->Columns).ArrayNum;
  pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
  (this->Columns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// TTableLayout<TraceServices::FTimingProfilerAggregatedStats> @ 14d4207d0

TTableLayout<TraceServices::FTimingProfilerAggregatedStats> * __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::
TTableLayout<TraceServices::FTimingProfilerAggregatedStats>
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this,
          TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  this->_padding_ =
       (longlong)
       &___7__TTableLayout_UFTimingProfilerAggregatedStats_TraceServices___TraceServices__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Columns).ArrayMax;
  iVar3 = (param_1->Columns).ArrayNum;
  pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
  (this->Columns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::FColumnDeclaration,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// operator= @ 14d42d280

TTableLayout<TraceServices::FImportTableRow> * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::operator=
          (TTableLayout<TraceServices::FImportTableRow> *this,
          TTableLayout<TraceServices::FImportTableRow> *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FColumnDeclaration *pFVar4;
  
  pTVar1 = &this->Columns;
  if (pTVar1 != &param_1->Columns) {
    DestructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
              ((FColumnDeclaration *)(pTVar1->AllocatorInstance).Data,(this->Columns).ArrayNum);
    iVar3 = (param_1->Columns).ArrayNum;
    piVar2 = &(this->Columns).ArrayMax;
    pFVar4 = (FColumnDeclaration *)(param_1->Columns).AllocatorInstance.Data;
    (this->Columns).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,TraceServices::TTableLayout<TraceServices::FImportTableRow>::FColumnDeclaration,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// GetColumnCount @ 14d462210

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::GetColumnCount
          (TTableLayout<TraceServices::FExportsTableRow> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462220

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::GetColumnCount
          (TTableLayout<TraceServices::FFileActivity> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462230

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FLoadRequest>::GetColumnCount
          (TTableLayout<TraceServices::FLoadRequest> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462240

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnCount
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462250

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::GetColumnCount
          (TTableLayout<TraceServices::FLogMessageInternal> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462260

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnCount
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462270

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnCount
          (TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462280

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::GetColumnCount
          (TTableLayout<TraceServices::FPackagesTableRow> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d462290

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::GetColumnCount
          (TTableLayout<TraceServices::FRequestsTableRow> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d4622a0

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnCount
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnCount @ 14d4622b0

ulong64 __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::GetColumnCount
          (TTableLayout<TraceServices::FImportTableRow> *this)

{
  return (longlong)(this->Columns).ArrayNum;
}

// GetColumnDisplayHintFlags @ 14d4622e0

uint __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d462370

uint __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d462400

uint __thiscall
TraceServices::TTableLayout<TraceServices::FLoadRequest>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d462490

uint __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::
GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d462520

uint __thiscall
TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d4625b0

uint __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d462640

uint __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::
GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d4626d0

uint __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d462760

uint __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d4627f0

uint __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::
GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnDisplayHintFlags @ 14d462880

uint __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::GetColumnDisplayHintFlags
          (TTableLayout<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x14);
}

// GetColumnName @ 14d462920

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::GetColumnName
          (TTableLayout<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d4629c0

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::GetColumnName
          (TTableLayout<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462a60

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FLoadRequest>::GetColumnName
          (TTableLayout<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462b00

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnName
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462ba0

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::GetColumnName
          (TTableLayout<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462c40

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnName
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462ce0

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnName
          (TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462d80

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::GetColumnName
          (TTableLayout<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462e20

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::GetColumnName
          (TTableLayout<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462ec0

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnName
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnName @ 14d462f60

wchar_t * __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::GetColumnName
          (TTableLayout<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Columns).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x50 + 8) != 0) {
    return *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x50);
  }
  return L"";
}

// GetColumnType @ 14d4630a0

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::GetColumnType
          (TTableLayout<TraceServices::FExportsTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d463130

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::GetColumnType
          (TTableLayout<TraceServices::FFileActivity> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d4631c0

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FLoadRequest>::GetColumnType
          (TTableLayout<TraceServices::FLoadRequest> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d463250

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnType
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d4632e0

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::GetColumnType
          (TTableLayout<TraceServices::FLogMessageInternal> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d463370

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnType
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d463400

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnType
          (TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d463490

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::GetColumnType
          (TTableLayout<TraceServices::FPackagesTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d463520

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::GetColumnType
          (TTableLayout<TraceServices::FRequestsTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d4635b0

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnType
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnType @ 14d463640

ETableColumnType __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::GetColumnType
          (TTableLayout<TraceServices::FImportTableRow> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ETableColumnType EVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  return *(ETableColumnType *)
          ((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
}

// GetColumnValue @ 14d463770

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FExportsTableRow>::GetColumnValue
          (TTableLayout<TraceServices::FExportsTableRow> *this,FExportsTableRow *param_1,
          ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463840

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FFileActivity>::GetColumnValue
          (TTableLayout<TraceServices::FFileActivity> *this,FFileActivity *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463910

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FLoadRequest>::GetColumnValue
          (TTableLayout<TraceServices::FLoadRequest> *this,FLoadRequest *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d4639e0

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats>::GetColumnValue
          (TTableLayout<TraceServices::FLoadTimeProfilerAggregatedStats> *this,
          FLoadTimeProfilerAggregatedStats *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463ab0

/* WARNING: Enum "Type": Some values do not have unique names */

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::GetColumnValue
          (TTableLayout<TraceServices::FLogMessageInternal> *this,FLogMessageInternal *param_1,
          ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463b80

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStats>::GetColumnValue
          (TTableLayout<TraceServices::FNetProfilerAggregatedStats> *this,
          FNetProfilerAggregatedStats *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463c50

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats>::GetColumnValue
          (TTableLayout<TraceServices::FNetProfilerAggregatedStatsCounterStats> *this,
          FNetProfilerAggregatedStatsCounterStats *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463d20

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FPackagesTableRow>::GetColumnValue
          (TTableLayout<TraceServices::FPackagesTableRow> *this,FPackagesTableRow *param_1,
          ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463df0

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::GetColumnValue
          (TTableLayout<TraceServices::FRequestsTableRow> *this,FRequestsTableRow *param_1,
          ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463ec0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FTimingProfilerAggregatedStats>::GetColumnValue
          (TTableLayout<TraceServices::FTimingProfilerAggregatedStats> *this,
          FTimingProfilerAggregatedStats *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// GetColumnValue @ 14d463f90

FColumnValueContainer __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::GetColumnValue
          (TTableLayout<TraceServices::FImportTableRow> *this,FImportTableRow *param_1,
          ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColumnValueContainer FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  uint in_R9D;
  
  uVar4 = 0;
  if ((int)in_R9D < (this->Columns).ArrayNum) {
    uVar4 = ~in_R9D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar2)();
      return (FColumnValueContainer)FVar5.field0_0x0;
    }
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable
            (*(void **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20));
  pcVar2 = *(code **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x20);
  pFVar7 = pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x30;
  if (*(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48) !=
      (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + (longlong)(int)in_R9D * 0x50 + 0x48);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar2)(param_1,uVar6,param_2);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

// SetColumnType @ 14d489e40

void __thiscall
TraceServices::TTableLayout<TraceServices::FImportTableRow>::SetColumnType
          (TTableLayout<TraceServices::FImportTableRow> *this,ulong64 param_1,
          ETableColumnType param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Columns).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
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
  *(ETableColumnType *)((this->Columns).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50 + 0x10)
       = param_2;
  return;
}

