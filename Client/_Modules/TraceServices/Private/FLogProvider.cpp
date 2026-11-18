// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 33

// ~FLogProvider @ 14d3d0cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FLogProvider::~FLogProvider(FLogProvider *this)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ILogProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableLogProvider__;
  DestructItems<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,int>
            ((FColumnDeclaration *)(this->MessagesTable)._padding_,
             (int)(this->MessagesTable)._padding_);
  pvVar2 = (void *)(this->MessagesTable)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar1 = (this->Messages).PagesArray.ArrayNum;
  pFVar4 = (this->Messages).PagesArray.AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Messages).PagesArray.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pFVar4 = pFVar4 + 0x10;
  }
  pFVar4 = (this->Messages).PagesArray.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  iVar1 = (this->MessageSpecs).PagesArray.ArrayNum;
  pFVar4 = (this->MessageSpecs).PagesArray.AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MessageSpecs).PagesArray.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pFVar4 = pFVar4 + 0x10;
  }
  pFVar4 = (this->MessageSpecs).PagesArray.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  iVar1 = (this->Categories).PagesArray.ArrayNum;
  pFVar4 = (this->Categories).PagesArray.AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Categories).PagesArray.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pFVar4 = pFVar4 + 0x10;
  }
  pFVar4 = (this->Categories).PagesArray.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->SpecMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SpecMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FLogMessageSpec_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FLogMessageSpec_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FLogMessageSpec_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpecMap);
  *(undefined4 *)&(this->CategoryMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CategoryMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FLogCategoryInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FLogCategoryInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FLogCategoryInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CategoryMap);
  return;
}

// GetCategoryCount @ 14d3e0450

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall TraceServices::FLogProvider::GetCategoryCount(FLogProvider *this)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  return (this->Categories).TotalItemCount;
}

// GetInsertCount @ 14d3e0c30

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall TraceServices::FLogProvider::GetInsertCount(FLogProvider *this)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  return this->NumInserts;
}

// GetMessageCount @ 14d3e0de0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall TraceServices::FLogProvider::GetMessageCount(FLogProvider *this)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  return (this->Messages).TotalItemCount;
}

// GetMessagesTable @ 14d3e0e10

/* WARNING: Enum "Type": Some values do not have unique names */

IUntypedTable * __thiscall TraceServices::FLogProvider::GetMessagesTable(FLogProvider *this)

{
  return (IUntypedTable *)&this->MessagesTable;
}

// <lambda_invoker_cdecl> @ 14d406940

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
`TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FLogMessageInternal *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = ::ToString(param_1->Spec->Verbosity);
  return pwVar1;
}

// <lambda_invoker_cdecl> @ 14d406a70

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
`TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FLogMessageInternal *param_1)

{
  return param_1->Spec->Category->Name;
}

// <lambda_invoker_cdecl> @ 14d406ab0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
`TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (FLogMessageInternal *param_1)

{
  return param_1->Spec->File;
}

// <lambda_invoker_cdecl> @ 14d406b40

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
`TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FLogMessageInternal *param_1)

{
  return param_1->Spec->Line;
}

// FLogProvider @ 14d423c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d4240cb) */
/* WARNING: Removing unreachable block (ram,0x00014d423f1e) */
/* WARNING: Removing unreachable block (ram,0x00014d424224) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x00014d423f22 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

FLogProvider * __thiscall
TraceServices::FLogProvider::FLogProvider(FLogProvider *this,IAnalysisSession *param_1)

{
  TArray<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ILinearAllocator *pIVar5;
  FLogProvider *pFVar6;
  TTableLayout<TraceServices::FLogMessageInternal> *pTVar7;
  longlong lVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_178 [32];
  FString *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  FString local_128;
  undefined8 local_118;
  code *local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  FString local_d8;
  undefined8 local_c8;
  code *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  FString local_88;
  undefined8 local_78;
  code *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  this->Session = param_1;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ILogProvider__;
  *(undefined8 *)&this->CategoryMap = 0;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableLogProvider__;
  *(undefined8 *)&(this->CategoryMap).field_0x8 = 0;
  *(undefined8 *)&(this->CategoryMap).field_0x20 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x28 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CategoryMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CategoryMap).field_0x34 = 0;
  *(undefined8 *)&(this->CategoryMap).field_0x40 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x48 = 0;
  *(undefined8 *)&this->SpecMap = 0;
  *(undefined8 *)&(this->SpecMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpecMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpecMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpecMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpecMap).field_0x34 = 0;
  *(undefined8 *)&(this->SpecMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpecMap).field_0x48 = 0;
  pIVar5 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Categories).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).Allocator = pIVar5;
  (this->Categories).PagesArray.ArrayNum = 0;
  (this->Categories).PagesArray.ArrayMax = 0;
  (this->Categories).FirstPage = (TPagedArrayPage<TraceServices::FLogCategoryInfo> *)0x0;
  (this->Categories).LastPage = (TPagedArrayPage<TraceServices::FLogCategoryInfo> *)0x0;
  (this->Categories).PageSize = 0x80;
  (this->Categories).TotalItemCount = 0;
  pIVar5 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->MessageSpecs).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageSpecs).Allocator = pIVar5;
  (this->MessageSpecs).PagesArray.ArrayNum = 0;
  (this->MessageSpecs).PagesArray.ArrayMax = 0;
  (this->MessageSpecs).FirstPage = (TPagedArrayPage<TraceServices::FLogMessageSpec> *)0x0;
  (this->MessageSpecs).LastPage = (TPagedArrayPage<TraceServices::FLogMessageSpec> *)0x0;
  (this->MessageSpecs).PageSize = 0x400;
  (this->MessageSpecs).TotalItemCount = 0;
  pIVar5 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Messages).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Messages).Allocator = pIVar5;
  (this->Messages).PagesArray.ArrayNum = 0;
  (this->Messages).PagesArray.ArrayMax = 0;
  (this->Messages).FirstPage = (TPagedArrayPage<TraceServices::FLogMessageInternal> *)0x0;
  (this->Messages).LastPage = (TPagedArrayPage<TraceServices::FLogMessageInternal> *)0x0;
  (this->Messages).PageSize = 0x400;
  (this->Messages).TotalItemCount = 0;
  (this->MessagesTable)._padding_ =
       (longlong)&___7__TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__6B_;
  (this->MessagesTable)._padding_ =
       (longlong)&___7__TTableView_UFLogMessageInternal_TraceServices___TraceServices__6B_;
  (this->MessagesTable)._padding_ = 0;
  (this->MessagesTable)._padding_ = 0;
  (this->MessagesTable).Rows = &this->Messages;
  this->NumInserts = 0;
  ::FString::FString(&local_128,L"Time");
  pFVar10 = (FScriptContainerElement *)(this->MessagesTable)._padding_;
  local_f8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_N___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_PEQFLogMessageInternal_3_NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<double>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
              ::Call;
  local_118 = 4;
  local_e0 = 0;
  uStack_f0 = 8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_128) &&
     (lVar8 = (longlong)*(int *)((longlong)&(this->MessagesTable)._padding_ + 4),
     (FScriptContainerElement *)&local_128 < pFVar10 + lVar8 * 0x50)) {
    local_140 = (longlong)(int)(this->MessagesTable)._padding_;
    local_138 = 0x50;
    local_158 = &local_128;
    local_150 = pFVar10;
    local_148 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLogProvider *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)(this->MessagesTable)._padding_;
  if (iVar4 == *(int *)((longlong)&(this->MessagesTable)._padding_ + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,(ForAnyElementType *)&(this->MessagesTable)._padding_,
                       (int *)((longlong)&(this->MessagesTable)._padding_ + 4));
  }
  *(int *)&(this->MessagesTable)._padding_ = iVar4 + 1;
  puVar9 = (undefined8 *)((longlong)iVar4 * 0x50 + (this->MessagesTable)._padding_);
  *puVar9 = 0;
  *puVar9 = local_128.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar9 + 1) = local_128.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_128.Data.ArrayMax;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  *(undefined4 *)(puVar9 + 2) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_118._4_4_;
  puVar9[4] = local_108;
  puVar9[9] = local_e0;
  local_e0 = 0;
  *(undefined4 *)(puVar9 + 6) = (undefined4)local_f8;
  *(undefined4 *)((longlong)puVar9 + 0x34) = local_f8._4_4_;
  *(undefined4 *)(puVar9 + 7) = uStack_f0;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_ec;
  puVar9[8] = local_e8;
  if (puVar9[4] == 0) {
    if (local_108 != (code *)0x0) {
      (*(code *)local_f8[2])();
    }
  }
  else {
    local_108 = (code *)0x0;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pTVar7 = TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>
                     ((TTableLayout<TraceServices::FLogMessageInternal> *)
                      &(this->MessagesTable)._padding_,
                      `TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_1>::
                      <lambda_invoker_cdecl>,L"Verbosity",0);
  pTVar7 = TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>
                     (pTVar7,`TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_2>::
                             <lambda_invoker_cdecl>,L"Category",0);
  pTVar7 = TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>
                     (pTVar7,`TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_3>::
                             <lambda_invoker_cdecl>,L"File",0);
  pTVar1 = &pTVar7->Columns;
  ::FString::FString(&local_d8,L"Line");
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  local_a8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_H___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_P6AHAEBUFLogMessageInternal_3__ZPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_a0 = `TraceServices::FLogProvider::FLogProvider'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
             ::Call;
  local_c8 = 2;
  local_90 = 0;
  if ((pFVar10 <= (FScriptContainerElement *)&local_d8) &&
     (lVar8 = (longlong)(pTVar7->Columns).ArrayMax,
     (FScriptContainerElement *)&local_d8 < pFVar10 + lVar8 * 0x50)) {
    local_140 = (longlong)(pTVar7->Columns).ArrayNum;
    local_138 = 0x50;
    local_158 = &local_d8;
    local_150 = pFVar10;
    local_148 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLogProvider *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (pTVar7->Columns).ArrayNum;
  if (iVar4 == (pTVar7->Columns).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar1->AllocatorInstance,&(pTVar7->Columns).ArrayMax);
  }
  (pTVar7->Columns).ArrayNum = iVar4 + 1;
  pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_d8.Data.AllocatorInstance.Data;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 8) = local_d8.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_c8;
  *(undefined4 *)(pFVar10 + 0x14) = local_c8._4_4_;
  *(code **)(pFVar10 + 0x20) = local_b8;
  *(undefined8 *)(pFVar10 + 0x48) = local_90;
  local_90 = 0;
  *(undefined4 *)(pFVar10 + 0x30) = (undefined4)local_a8;
  *(undefined4 *)(pFVar10 + 0x34) = local_a8._4_4_;
  *(undefined4 *)(pFVar10 + 0x38) = (undefined4)uStack_a0;
  *(undefined4 *)(pFVar10 + 0x3c) = uStack_a0._4_4_;
  *(undefined8 *)(pFVar10 + 0x40) = local_98;
  if (*(longlong *)(pFVar10 + 0x20) == 0) {
    if (local_b8 != (code *)0x0) {
      (*(code *)local_a8[2])();
    }
  }
  else {
    local_b8 = (code *)0x0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"Message");
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_PEB_W___TTableLayout_UFLogMessageInternal_TraceServices___TraceServices__QEAAAEAV23_PEQFLogMessageInternal_3_PEB_WPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::AddColumn<wchar_t_const_*>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FLogMessageInternal_const_&>
             ::Call;
  local_78 = 5;
  local_40 = 0;
  uStack_50 = 0x10;
  if ((pFVar10 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(pTVar7->Columns).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar10 + lVar8 * 0x50)) {
    local_140 = (longlong)(pTVar7->Columns).ArrayNum;
    local_138 = 0x50;
    local_158 = &local_88;
    local_150 = pFVar10;
    local_148 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLogProvider *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (pTVar7->Columns).ArrayNum;
  if (iVar4 == (pTVar7->Columns).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar1->AllocatorInstance,&(pTVar7->Columns).ArrayMax);
  }
  (pTVar7->Columns).ArrayNum = iVar4 + 1;
  pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x50;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_78;
  *(undefined4 *)(pFVar10 + 0x14) = local_78._4_4_;
  *(code **)(pFVar10 + 0x20) = local_68;
  *(undefined8 *)(pFVar10 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar10 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(pFVar10 + 0x34) = local_58._4_4_;
  *(undefined4 *)(pFVar10 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar10 + 0x3c) = uStack_4c;
  *(undefined8 *)(pFVar10 + 0x40) = local_48;
  if (*(longlong *)(pFVar10 + 0x20) == 0) {
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

// AppendMessage @ 14d4407d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::AppendMessage
          (FLogProvider *this,ulong64 param_1,double param_2,TStringView<wchar_t> *param_3)

{
  FLogMessageSpec **ppFVar1;
  FLogMessageInternal *pFVar2;
  wchar_t *pwVar3;
  TStringView<wchar_t> local_28 [2];
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  ppFVar1 = TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
                    *)&this->SpecMap,param_1);
  if (ppFVar1 == (FLogMessageSpec **)0x0) {
    local_28[0].DataPtr = param_3->DataPtr;
    local_28[0].Size = param_3->Size;
    local_28[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
    AppendUnknownMessageInternal(this,param_1,param_2,local_28);
  }
  else if ((*ppFVar1)->Verbosity != SetColor) {
    pFVar2 = AppendMessageInternal(this,param_2);
    pFVar2->Spec = *ppFVar1;
    pwVar3 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,param_3);
    pFVar2->Message = pwVar3;
  }
  (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(param_2,0));
  return;
}

// AppendMessage @ 14d4408a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::AppendMessage
          (FLogProvider *this,ulong64 param_1,double param_2,uchar *param_3)

{
  ulong64 *_Str;
  FLogMessageSpec *pFVar1;
  FLogMessageSpec **ppFVar2;
  FLogMessageInternal *pFVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  TStringView<wchar_t> local_28 [2];
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  ppFVar2 = TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
                    *)&(this->CategoryMap).field_0x48,param_1);
  if (ppFVar2 == (FLogMessageSpec **)0x0) {
    _Str = &(this->Messages).TotalItemCount;
    FFormatArgsHelper::Format
              ((wchar_t *)_Str,0xffff,this->FormatBuffer + 0xfffc,0xffff,L"%s",param_3);
    local_28[0].Size = 0;
    local_28[0].DataPtr = (wchar_t *)_Str;
    if (_Str != (ulong64 *)0x0) {
      sVar5 = wcslen((wchar_t *)_Str);
      local_28[0].Size = (int)sVar5;
    }
    AppendUnknownMessageInternal((FLogProvider *)&this[-1].NumInserts,param_1,param_2,local_28);
  }
  else if ((*ppFVar2)->Verbosity != SetColor) {
    pFVar3 = AppendMessageInternal((FLogProvider *)&this[-1].NumInserts,param_2);
    pFVar1 = *ppFVar2;
    pFVar3->Spec = pFVar1;
    FFormatArgsHelper::Format
              ((wchar_t *)&(this->Messages).TotalItemCount,0xffff,this->FormatBuffer + 0xfffc,0xffff
               ,pFVar1->FormatString,param_3);
    pwVar4 = (wchar_t *)
             (**(code **)(*(longlong *)this->_padding_ + 0xd0))
                       ((longlong *)this->_padding_,&(this->Messages).TotalItemCount);
    pFVar3->Message = pwVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4409e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x38))((longlong *)this->_padding_,SUB84(param_2,0));
  return;
}

// AppendMessage @ 14d440a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::AppendMessage
          (FLogProvider *this,ulong64 param_1,double param_2,wchar_t *param_3)

{
  int iVar1;
  FLogMessageSpec **ppFVar2;
  FLogMessageInternal *pFVar3;
  size_t sVar4;
  TStringView<wchar_t> local_28 [2];
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  ppFVar2 = TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
                    *)&(this->CategoryMap).field_0x48,param_1);
  if (ppFVar2 != (FLogMessageSpec **)0x0) {
    if ((*ppFVar2)->Verbosity == SetColor) {
      iVar1 = 0;
      local_28[0].DataPtr = param_3;
      if (param_3 != (wchar_t *)0x0) {
        sVar4 = wcslen(param_3);
        iVar1 = (int)sVar4;
      }
      local_28[0].Size = iVar1;
      AppendUnknownMessageInternal((FLogProvider *)&this[-1].NumInserts,param_1,param_2,local_28);
    }
    else {
      pFVar3 = AppendMessageInternal((FLogProvider *)&this[-1].NumInserts,param_2);
      pFVar3->Spec = *ppFVar2;
      pFVar3->Message = param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d440acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x38))((longlong *)this->_padding_,SUB84(param_2,0));
  return;
}

// AppendMessageInternal @ 14d440ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageInternal * __thiscall
TraceServices::FLogProvider::AppendMessageInternal(FLogProvider *this,double param_1)

{
  TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  *this_00;
  undefined8 *puVar1;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FLogMessageInternal *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  FLogMessageInternal *pFVar19;
  ulong64 uVar20;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_58;
  
  this_00 = &this->Messages;
  uVar15 = (this->Messages).PagesArray.ArrayNum;
  pTVar2 = (this->Messages).FirstPage;
  if (((int)uVar15 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FLogMessageInternal *)(*pcVar6)();
    return pFVar10;
  }
  pFVar10 = (FLogMessageInternal *)0x0;
  if (0 < (int)uVar15) {
    do {
      uVar16 = uVar15 >> 1;
      iVar13 = uVar16 + (int)pFVar10;
      iVar9 = iVar13 + (uVar15 & 1);
      if (param_1 < (pTVar2[iVar13].Items)->Time) {
        iVar9 = (int)pFVar10;
      }
      pFVar10 = (FLogMessageInternal *)(longlong)iVar9;
      uVar15 = uVar16;
    } while (uVar16 != 0);
    if (iVar9 != 0) {
      uVar14 = (this->Messages).TotalItemCount;
      uVar12 = (longlong)pFVar10 * (this->Messages).PageSize;
      if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
        uVar14 = uVar12;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x3a3,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FLogMessageInternal *)(*pcVar6)();
        return pFVar10;
      }
      local_58.CurrentPageIndex = 0;
      local_58.CurrentItemIndex = 0;
      local_58.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
      local_58.CurrentPageLastItem = (FLogMessageInternal *)0x0;
      local_58.CurrentItem = (FLogMessageInternal *)0x0;
      local_58.Outer = this_00;
      TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
      ::SetPositionInternal(&local_58,uVar14 - 1);
      uVar20 = local_58.CurrentPageIndex;
      pFVar10 = local_58.CurrentPageFirstItem;
      uVar12 = local_58.CurrentItemIndex;
      pFVar19 = local_58.CurrentItem;
      while( true ) {
        while( true ) {
          if ((pFVar19 == (FLogMessageInternal *)0x0) || (pFVar19->Time <= param_1))
          goto LAB_14d440b43;
          uVar14 = uVar12;
          if (pFVar19 == pFVar10) break;
          pFVar19 = pFVar19 + -1;
          uVar12 = uVar12 - 1;
        }
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pFVar10 = (local_58.Outer)->FirstPage[uVar20].Items;
        pFVar19 = (FLogMessageInternal *)0x0;
        if (pFVar10 != (FLogMessageInternal *)0x0) {
          pFVar19 = pFVar10 + ((local_58.Outer)->FirstPage[uVar20].Count - 1);
        }
        uVar12 = ((longlong)pFVar19 - (longlong)pFVar10) / 0x18 +
                 uVar20 * (local_58.Outer)->PageSize;
      }
      goto LAB_14d440b43;
    }
  }
  uVar14 = 0;
LAB_14d440b43:
  if (uVar14 < (this->Messages).TotalItemCount) {
    this->NumInserts = this->NumInserts + 1;
    TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
    ::PushBack(this_00);
    uVar12 = (this->Messages).PageSize;
    uVar11 = uVar14 / uVar12;
    uVar14 = uVar14 % uVar12;
    uVar12 = (ulonglong)((this->Messages).PagesArray.ArrayNum + -1);
    if (uVar11 < uVar12) {
      lVar17 = uVar12 - uVar11;
      lVar18 = uVar12 << 4;
      do {
        pTVar2 = (this->Messages).FirstPage;
        _Src = *(void **)((longlong)&pTVar2->Items + lVar18);
        memmove((void *)((longlong)_Src + 0x18),_Src,
                *(longlong *)((longlong)&pTVar2->Count + lVar18) * 0x18 - 0x18);
        lVar3 = *(longlong *)(lVar18 + -8 + (longlong)pTVar2);
        puVar4 = *(undefined8 **)((longlong)&pTVar2->Items + lVar18);
        lVar5 = *(longlong *)((longlong)&pTVar2[-1].Items + lVar18);
        puVar1 = (undefined8 *)(lVar5 + -0x18 + lVar3 * 0x18);
        uVar7 = puVar1[1];
        *puVar4 = *puVar1;
        puVar4[1] = uVar7;
        puVar4[2] = *(undefined8 *)(lVar5 + -8 + lVar3 * 0x18);
        lVar17 = lVar17 + -1;
        lVar18 = lVar18 + -0x10;
      } while (lVar17 != 0);
    }
    pTVar2 = (this->Messages).FirstPage;
    memmove(pTVar2[uVar11].Items + uVar14 + 1,pTVar2[uVar11].Items + uVar14,
            (~uVar14 + pTVar2[uVar11].Count) * 0x18);
    pFVar10 = pTVar2[uVar11].Items + uVar14;
  }
  else {
    pFVar10 = TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
              ::PushBack(this_00);
  }
  pFVar10->Time = param_1;
  return pFVar10;
}

// AppendUnknownMessageInternal @ 14d441580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::AppendUnknownMessageInternal
          (FLogProvider *this,ulong64 param_1,double param_2,TStringView<wchar_t> *param_3)

{
  IAnalysisSession *pIVar1;
  code *pcVar2;
  FLogMessageSpec *pFVar3;
  FLogCategoryInfo *pFVar4;
  FLogMessageInternal *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  FString local_28 [2];
  
  pFVar3 = GetMessageSpec(this,0xffffffffffffffff);
  pFVar4 = (FLogCategoryInfo *)
           (**(code **)(this->_padding_ + 0x28))(&this->_padding_,0xffffffffffffffff);
  pFVar3->Line = 0;
  pFVar3->Category = pFVar4;
  pFVar3->Verbosity = Error;
  pFVar3->FormatString = L"%s";
  pFVar5 = AppendMessageInternal(this,param_2);
  pFVar5->Spec = pFVar3;
  pIVar1 = this->Session;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xd0);
  ::FString::PrintfImpl(local_28,L"Unknown log message spec (LogPoint=0x%llX)! Message: \"%.*s\"");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar7.Data = local_28[0].Data.AllocatorInstance.Data;
  }
  pwVar6 = (wchar_t *)(*pcVar2)(pIVar1,FVar7.Data);
  pFVar5->Message = pwVar6;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// BinarySearchClosestByTime @ 14d442390

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TraceServices::FLogProvider::BinarySearchClosestByTime(FLogProvider *this,double param_1)

{
  double *pdVar1;
  int iVar2;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  double dVar7;
  ulong64 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  ulong64 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_68 [2];
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (1 < (this->Messages).TotalItemCount) {
    uVar16 = (this->Messages).PagesArray.ArrayNum;
    pTVar3 = (this->Messages).FirstPage;
    if (((int)uVar16 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    iVar13 = 0;
    if (0 < (int)uVar16) {
      do {
        iVar2 = (uVar16 >> 1) + iVar13;
        pdVar1 = &(pTVar3[iVar2].Items)->Time;
        if (*pdVar1 <= param_1 && param_1 != *pdVar1) {
          iVar13 = iVar2 + (uVar16 & 1);
        }
        uVar17 = uVar16 >> 1;
        uVar16 = uVar16 >> 1;
      } while (uVar17 != 0);
      if (iVar13 != 0) {
        uVar4 = (this->Messages).TotalItemCount;
        uVar5 = (this->Messages).PageSize;
        uVar12 = uVar4 - 1;
        if ((longlong)iVar13 * uVar5 < uVar4) {
          uVar12 = (longlong)iVar13 * uVar5;
        }
        if (uVar12 != 0) {
          local_68[0].CurrentPageIndex = 0;
          local_68[0].CurrentPageFirstItem = (FLogMessageInternal *)0x0;
          local_68[0].CurrentPageLastItem = (FLogMessageInternal *)0x0;
          local_68[0].CurrentItemIndex = 0;
          local_68[0].CurrentItem = (FLogMessageInternal *)0x0;
          dVar7 = (this->Messages).FirstPage[uVar12 / uVar5].Items[uVar12 % uVar5].Time - param_1;
          uVar16 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar17 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          local_68[0].Outer = &this->Messages;
          TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
          ::SetPositionInternal(local_68,uVar12 - 1);
          uVar8 = local_68[0].CurrentItemIndex;
          while( true ) {
            if (local_68[0].CurrentItem == (FLogMessageInternal *)0x0) {
              return uVar12;
            }
            dVar7 = (local_68[0].CurrentItem)->Time - param_1;
            uVar14 = SUB84(dVar7,0) & uVar9;
            uVar15 = (uint)((ulonglong)dVar7 >> 0x20) & uVar10;
            if ((double)CONCAT44(uVar17,uVar16) <= (double)CONCAT44(uVar15,uVar14) &&
                (double)CONCAT44(uVar15,uVar14) != (double)CONCAT44(uVar17,uVar16)) break;
            local_68[0].CurrentItemIndex = uVar8;
            TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
            ::PrevItem(local_68);
            uVar16 = uVar14;
            uVar17 = uVar15;
            uVar12 = uVar8;
            uVar8 = local_68[0].CurrentItemIndex;
          }
          return uVar12;
        }
        return 0;
      }
    }
  }
  return 0;
}

// ConstructMessage @ 14d445990

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FLogProvider::ConstructMessage
          (FLogProvider *this,FLogMessageInternal *param_1,ulong64 param_2,
          TFunctionRef<void___cdecl(TraceServices::FLogMessageInfo_const_&)> *param_3)

{
  FLogMessageSpec *pFVar1;
  ulong64 local_38;
  double local_30;
  FLogCategoryInfo *local_28;
  wchar_t *local_20;
  wchar_t *local_18;
  int local_10;
  Type local_c;
  
  pFVar1 = param_1->Spec;
  local_30 = param_1->Time;
  local_28 = pFVar1->Category;
  local_20 = pFVar1->File;
  local_10 = pFVar1->Line;
  local_c = pFVar1->Verbosity;
  local_18 = param_1->Message;
  local_38 = param_2;
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_38);
  return true;
}

// ConstructMessage @ 14d4459f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FLogProvider::ConstructMessage
          (FLogProvider *this,FLogMessageInternal *param_1,ulong64 param_2,
          TFunctionRef<bool___cdecl(TraceServices::FLogMessageInfo_const_&)> *param_3)

{
  FLogMessageSpec *pFVar1;
  undefined1 uVar2;
  ulong64 local_38;
  double local_30;
  FLogCategoryInfo *local_28;
  wchar_t *local_20;
  wchar_t *local_18;
  int local_10;
  Type local_c;
  
  pFVar1 = param_1->Spec;
  local_30 = param_1->Time;
  local_28 = pFVar1->Category;
  local_20 = pFVar1->File;
  local_10 = pFVar1->Line;
  local_c = pFVar1->Verbosity;
  local_18 = param_1->Message;
  local_38 = param_2;
  uVar2 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_38);
  return (bool)uVar2;
}

// EnumerateCategories @ 14d451ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::EnumerateCategories
          (FLogProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FLogCategoryInfo_const_&)> *param_1)

{
  TPagedArrayPage<TraceServices::FLogCategoryInfo> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FLogCategoryInfo *pFVar4;
  longlong lVar5;
  FLogCategoryInfo *pFVar6;
  longlong lVar7;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  lVar5 = 0;
  if ((this->Categories).TotalItemCount != 0) {
    if (((this->Categories).PagesArray.ArrayNum == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = (this->Categories).FirstPage;
    if (pTVar1->Items == (FLogCategoryInfo *)0x0) {
      pFVar6 = (FLogCategoryInfo *)0x0;
    }
    else {
      pFVar6 = pTVar1->Items + (pTVar1->Count - 1);
    }
    if ((pTVar1->Count == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = pTVar1->Items;
    if (pFVar4 != (FLogCategoryInfo *)0x0) {
      lVar7 = 0;
      do {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar4);
        if (pFVar4 == pFVar6) {
          if (lVar5 == (this->Categories).PagesArray.ArrayNum + -1) {
            return;
          }
          pTVar1 = (this->Categories).FirstPage;
          lVar5 = lVar5 + 1;
          pFVar4 = *(FLogCategoryInfo **)((longlong)&pTVar1[1].Items + lVar7);
          if (pFVar4 == (FLogCategoryInfo *)0x0) {
            pFVar6 = (FLogCategoryInfo *)0x0;
            lVar7 = lVar7 + 0x10;
          }
          else {
            pFVar6 = pFVar4 + *(longlong *)((longlong)&pTVar1[1].Count + lVar7) + -1;
            lVar7 = lVar7 + 0x10;
          }
        }
        else {
          pFVar4 = pFVar4 + 1;
        }
      } while (pFVar4 != (FLogCategoryInfo *)0x0);
    }
  }
  return;
}

// EnumerateMessages @ 14d45a560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::EnumerateMessages
          (FLogProvider *this,double param_1,double param_2,
          TFunctionRef<void___cdecl(TraceServices::FLogMessageInfo_const_&)> *param_3)

{
  double *pdVar1;
  int iVar2;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar3;
  FLogMessageSpec *pFVar4;
  FLogMessageInternal *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FLogMessageInternal *pFVar12;
  ulong64 uVar13;
  int iVar14;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_c8;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_98;
  ulong64 local_68;
  double local_60;
  FLogCategoryInfo *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  int local_40;
  Type local_3c;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (param_2 < param_1) {
    return;
  }
  if ((this->Messages).TotalItemCount == 0) {
    return;
  }
  uVar10 = (this->Messages).PagesArray.ArrayNum;
  pTVar3 = (this->Messages).FirstPage;
  if (((int)uVar10 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar14 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar2 = (uVar10 >> 1) + iVar14;
      pdVar1 = &(pTVar3[iVar2].Items)->Time;
      if (*pdVar1 <= param_1 && param_1 != *pdVar1) {
        iVar14 = iVar2 + (uVar10 & 1);
      }
      uVar7 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar7 != 0);
    if (iVar14 != 0) {
      uVar11 = (this->Messages).TotalItemCount;
      uVar9 = (longlong)iVar14 * (this->Messages).PageSize;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
        uVar11 = uVar9;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x37a,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8.CurrentPageIndex = 0;
      local_c8.CurrentItemIndex = 0;
      local_c8.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
      local_c8.CurrentPageLastItem = (FLogMessageInternal *)0x0;
      local_c8.CurrentItem = (FLogMessageInternal *)0x0;
      local_c8.Outer = &this->Messages;
      TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
      ::SetPositionInternal(&local_c8,uVar11 - 1);
      uVar13 = local_c8.CurrentPageIndex;
      pFVar5 = local_c8.CurrentPageFirstItem;
      uVar9 = local_c8.CurrentItemIndex;
      pFVar12 = local_c8.CurrentItem;
      while ((pFVar12 != (FLogMessageInternal *)0x0 &&
             (param_1 < pFVar12->Time || param_1 == pFVar12->Time))) {
        uVar11 = uVar9;
        if (pFVar12 == pFVar5) {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pFVar5 = (local_c8.Outer)->FirstPage[uVar13].Items;
          pFVar12 = (FLogMessageInternal *)0x0;
          if (pFVar5 != (FLogMessageInternal *)0x0) {
            pFVar12 = pFVar5 + ((local_c8.Outer)->FirstPage[uVar13].Count - 1);
          }
          uVar9 = ((longlong)pFVar12 - (longlong)pFVar5) / 0x18 +
                  uVar13 * (local_c8.Outer)->PageSize;
        }
        else {
          pFVar12 = pFVar12 + -1;
          uVar9 = uVar9 - 1;
        }
      }
      goto LAB_14d45a60f;
    }
  }
  uVar11 = 0;
LAB_14d45a60f:
  if (uVar11 < (this->Messages).TotalItemCount) {
    local_98.CurrentPageIndex = 0;
    local_98.CurrentItemIndex = 0;
    local_98.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
    local_98.CurrentPageLastItem = (FLogMessageInternal *)0x0;
    local_98.CurrentItem = (FLogMessageInternal *)0x0;
    local_98.Outer = &this->Messages;
    TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
    ::SetPositionInternal(&local_98,uVar11);
    while ((local_98.CurrentItem != (FLogMessageInternal *)0x0 &&
           (local_60 = (local_98.CurrentItem)->Time, local_60 <= param_2))) {
      pFVar4 = (local_98.CurrentItem)->Spec;
      local_58 = pFVar4->Category;
      local_50 = pFVar4->File;
      local_40 = pFVar4->Line;
      local_3c = pFVar4->Verbosity;
      local_48 = (local_98.CurrentItem)->Message;
      local_68 = local_98.CurrentItemIndex;
      (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_68);
      TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
      ::NextItem(&local_98);
    }
  }
  return;
}

// EnumerateMessagesByIndex @ 14d45a840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::EnumerateMessagesByIndex
          (FLogProvider *this,ulong64 param_1,ulong64 param_2,
          TFunctionRef<void___cdecl(TraceServices::FLogMessageInfo_const_&)> *param_3)

{
  ulong64 uVar1;
  FLogMessageSpec *pFVar2;
  undefined5 uVar3;
  ulonglong uVar4;
  TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  *pTVar5;
  TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  *pTVar6;
  FLogMessageInternal *pFVar7;
  FLogMessageInternal *pFVar8;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_48;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  local_48.Outer = &this->Messages;
  if ((this->Messages).TotalItemCount < param_2) {
    param_2 = (ulong64)(this->Messages).TotalItemCount;
  }
  if (param_1 < param_2) {
    local_48.CurrentPageIndex = 0;
    local_48.CurrentItemIndex = 0;
    local_48.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
    local_48.CurrentPageLastItem = (FLogMessageInternal *)0x0;
    local_48.CurrentItem = (FLogMessageInternal *)0x0;
    TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
    ::SetPositionInternal(&local_48,param_1);
    pTVar5 = local_48.Outer;
    uVar1 = local_48.CurrentPageIndex;
    pFVar7 = local_48.CurrentPageLastItem;
    pTVar6 = (TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
              *)local_48.CurrentItemIndex;
    pFVar8 = local_48.CurrentItem;
    while( true ) {
      while( true ) {
        if (pFVar8 == (FLogMessageInternal *)0x0) {
          return;
        }
        if (param_2 <= pTVar6) {
          return;
        }
        pFVar2 = pFVar8->Spec;
        local_48.CurrentPageIndex = (ulong64)pFVar8->Time;
        local_48.CurrentPageFirstItem = (FLogMessageInternal *)pFVar2->Category;
        local_48.CurrentPageLastItem = (FLogMessageInternal *)pFVar2->File;
        uVar3._0_4_ = pFVar2->Line;
        uVar3._4_1_ = pFVar2->Verbosity;
        uVar4 = (ulonglong)local_48.CurrentItem >> 0x28;
        local_48.CurrentItem = (FLogMessageInternal *)CONCAT35((int3)uVar4,uVar3);
        local_48.CurrentItemIndex = (ulong64)pFVar8->Message;
        local_48.Outer = pTVar6;
        (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_48);
        if (pFVar8 == pFVar7) break;
        pTVar6 = (TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
                  *)((longlong)&pTVar6->Allocator + 1);
        pFVar8 = pFVar8 + 1;
      }
      if (uVar1 == (longlong)((pTVar5->PagesArray).ArrayNum + -1)) break;
      uVar1 = uVar1 + 1;
      pFVar8 = pTVar5->FirstPage[uVar1].Items;
      if (pFVar8 == (FLogMessageInternal *)0x0) {
        pFVar7 = (FLogMessageInternal *)0x0;
        pTVar6 = (TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
                  *)(uVar1 * pTVar5->PageSize);
      }
      else {
        pTVar6 = (TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
                  *)(uVar1 * pTVar5->PageSize);
        pFVar7 = pFVar8 + (pTVar5->FirstPage[uVar1].Count - 1);
      }
    }
  }
  return;
}

// GetCategory @ 14d461f20

/* WARNING: Enum "Type": Some values do not have unique names */

FLogCategoryInfo * __thiscall
TraceServices::FLogProvider::GetCategory(FLogProvider *this,ulong64 param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArray<TraceServices::FLogCategoryInfo,TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>_>
  *pTVar3;
  TPagedArrayPage<TraceServices::FLogCategoryInfo> *pTVar4;
  ILinearAllocator *pIVar5;
  longlong *plVar6;
  int iVar7;
  FLogCategoryInfo *pFVar8;
  FLogCategoryInfo **ppFVar9;
  undefined1 *puVar10;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FLogCategoryInfo_*_&&> local_res8;
  FLogCategoryInfo *local_res18;
  FLogCategoryInfo ***local_28;
  FLogCategoryInfo **local_20;
  
  local_res8.Value = (FLogCategoryInfo **)param_1;
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (*(int *)&this->CategoryMap != *(int *)&(this->CategoryMap).field_0x2c) {
    puVar10 = *(undefined1 **)&(this->CategoryMap).field_0x38;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->CategoryMap).field_0x30;
    }
    iVar7 = *(int *)(puVar10 +
                    (((ulonglong)local_res8.Value >> 0x20) * 0x17 + (longlong)local_res8.Value &
                    (ulonglong)(*(int *)&(this->CategoryMap).field_0x40 - 1)) * 4);
    if (iVar7 != -1) {
      do {
        if (this->Session[(longlong)iVar7 * 3] == (IAnalysisSession)local_res8.Value) {
          ppFVar9 = TMapBase<unsigned___int64,TraceServices::FLogCategoryInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogCategoryInfo_*,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TraceServices::FLogCategoryInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogCategoryInfo_*,0>_>
                                   *)&this->Session,(ulong64)local_res8.Value);
          return *ppFVar9;
        }
        iVar7 = *(int *)(this->Session + (longlong)iVar7 * 3 + 2);
      } while (iVar7 != -1);
    }
  }
  pTVar4 = (this->Categories).FirstPage;
  if ((pTVar4 == (TPagedArrayPage<TraceServices::FLogCategoryInfo> *)0x0) ||
     ((TPagedArrayPage<TraceServices::FLogCategoryInfo> *)pTVar4->Count ==
      (this->Categories).LastPage)) {
    pTVar3 = &this->Categories;
    iVar7 = *(int *)&(this->Categories).PagesArray.AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&(this->Categories).PagesArray.AllocatorInstance.Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)pTVar3,piVar1);
    }
    *(int *)&(this->Categories).PagesArray.AllocatorInstance.Data = iVar7 + 1;
    pIVar5 = pTVar3->Allocator;
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogCategoryInfo>,int>
              ((TPagedArrayPage<TraceServices::FLogCategoryInfo> *)(pIVar5 + (longlong)iVar7 * 2),1)
    ;
    plVar6 = *(longlong **)&(this->SpecMap).field_0x48;
    pTVar4 = (this->Categories).LastPage;
    (this->Categories).FirstPage =
         (TPagedArrayPage<TraceServices::FLogCategoryInfo> *)(pIVar5 + (longlong)iVar7 * 2);
    *(ILinearAllocator **)&(this->Categories).PagesArray.ArrayNum = pTVar3->Allocator;
    pFVar8 = (FLogCategoryInfo *)(**(code **)(*plVar6 + 8))(plVar6,(longlong)pTVar4 << 4);
    ((this->Categories).FirstPage)->Items = pFVar8;
  }
  pTVar4 = (this->Categories).FirstPage;
  puVar2 = &(this->Categories).PageSize;
  *puVar2 = *puVar2 + 1;
  pFVar8 = pTVar4->Items + pTVar4->Count;
  *(undefined8 *)&pFVar8->DefaultVerbosity = 0;
  pFVar8->Name = (wchar_t *)0x0;
  puVar2 = &((this->Categories).FirstPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar8->Name = L"N/A";
  local_28 = &local_res8.Value;
  local_20 = &local_res18;
  pFVar8->DefaultVerbosity = All;
  local_res18 = pFVar8;
  TSet<TTuple<unsigned___int64,TraceServices::FLogCategoryInfo_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogCategoryInfo_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FLogCategoryInfo_*_&&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FLogCategoryInfo_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogCategoryInfo_*,0>,FDefaultSetAllocator>
              *)&this->Session,&local_res8,(bool *)&local_28);
  return pFVar8;
}

// GetMessageSpec @ 14d4690b0

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageSpec * __thiscall
TraceServices::FLogProvider::GetMessageSpec(FLogProvider *this,ulong64 param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TPagedArrayPage<TraceServices::FLogMessageSpec> *pTVar4;
  ILinearAllocator *pIVar5;
  int iVar6;
  FLogMessageSpec *pFVar7;
  FLogMessageSpec **ppFVar8;
  TPagedArrayPage<TraceServices::FLogMessageSpec> *pTVar9;
  undefined1 *puVar10;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FLogMessageSpec_*_&&> local_res8;
  FLogMessageSpec *local_res18;
  FLogMessageSpec ***local_28;
  FLogMessageSpec **local_20;
  
  local_res8.Value = (FLogMessageSpec **)param_1;
  (**(code **)((longlong)*this->Session + 0xb0))();
  if (*(int *)&(this->SpecMap).field_0x8 != *(int *)&(this->SpecMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->SpecMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SpecMap).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (((ulonglong)local_res8.Value >> 0x20) * 0x17 + (longlong)local_res8.Value &
                    (ulonglong)(*(int *)&(this->SpecMap).field_0x48 - 1)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FLogMessageSpec ***)(*(longlong *)&this->SpecMap + (longlong)iVar6 * 0x18) ==
            local_res8.Value) {
          ppFVar8 = TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
                                   *)&this->SpecMap,(ulong64)local_res8.Value);
          return *ppFVar8;
        }
        iVar6 = *(int *)(*(longlong *)&this->SpecMap + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  pTVar4 = (this->MessageSpecs).LastPage;
  if ((pTVar4 == (TPagedArrayPage<TraceServices::FLogMessageSpec> *)0x0) ||
     (pTVar4->Count == (this->MessageSpecs).PageSize)) {
    pTVar3 = &(this->MessageSpecs).PagesArray;
    iVar6 = (this->MessageSpecs).PagesArray.ArrayNum;
    piVar1 = &(this->MessageSpecs).PagesArray.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->MessageSpecs).PagesArray.ArrayNum = iVar6 + 1;
    pTVar9 = (TPagedArrayPage<TraceServices::FLogMessageSpec> *)
             ((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLogMessageSpec>,int>
              (pTVar9,1);
    pTVar4 = (TPagedArrayPage<TraceServices::FLogMessageSpec> *)(pTVar3->AllocatorInstance).Data;
    pIVar5 = (this->MessageSpecs).Allocator;
    (this->MessageSpecs).LastPage = pTVar9;
    (this->MessageSpecs).FirstPage = pTVar4;
    pFVar7 = (FLogMessageSpec *)
             (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->MessageSpecs).PageSize << 5);
    ((this->MessageSpecs).LastPage)->Items = pFVar7;
  }
  pTVar4 = (this->MessageSpecs).LastPage;
  puVar2 = &(this->MessageSpecs).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pFVar7 = pTVar4->Items + pTVar4->Count;
  pFVar7->Line = 0;
  pFVar7->Verbosity = NoLogging;
  *(undefined3 *)&pFVar7->field_0x1d = 0;
  pFVar7->Category = (FLogCategoryInfo *)0x0;
  pFVar7->File = (wchar_t *)0x0;
  pFVar7->FormatString = (wchar_t *)0x0;
  local_28 = &local_res8.Value;
  local_20 = &local_res18;
  puVar2 = &((this->MessageSpecs).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  local_res18 = pFVar7;
  TSet<TTuple<unsigned___int64,TraceServices::FLogMessageSpec_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FLogMessageSpec_*_&&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FLogMessageSpec_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>,FDefaultSetAllocator>
              *)&this->SpecMap,&local_res8,(bool *)&local_28);
  return pFVar7;
}

// LowerBoundByTime @ 14d478f80

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall TraceServices::FLogProvider::LowerBoundByTime(FLogProvider *this,double param_1)

{
  double *pdVar1;
  int iVar2;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_48;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar9 = (this->Messages).PagesArray.ArrayNum;
  pTVar3 = (this->Messages).FirstPage;
  if (((int)uVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  iVar11 = 0;
  if (0 < (int)uVar9) {
    do {
      iVar2 = (uVar9 >> 1) + iVar11;
      pdVar1 = &(pTVar3[iVar2].Items)->Time;
      if (*pdVar1 <= param_1 && param_1 != *pdVar1) {
        iVar11 = iVar2 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
    if (iVar11 != 0) {
      uVar10 = (this->Messages).TotalItemCount;
      uVar8 = (longlong)iVar11 * (this->Messages).PageSize;
      if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
        uVar10 = uVar8;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x37a,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      local_48.CurrentPageIndex = 0;
      local_48.CurrentItemIndex = 0;
      local_48.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
      local_48.CurrentPageLastItem = (FLogMessageInternal *)0x0;
      local_48.CurrentItem = (FLogMessageInternal *)0x0;
      local_48.Outer = &this->Messages;
      TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
      ::SetPositionInternal(&local_48,uVar10 - 1);
      while( true ) {
        if (local_48.CurrentItem == (FLogMessageInternal *)0x0) {
          return uVar10;
        }
        if ((local_48.CurrentItem)->Time <= param_1 && param_1 != (local_48.CurrentItem)->Time)
        break;
        uVar10 = local_48.CurrentItemIndex;
        if (local_48.CurrentItem == local_48.CurrentPageFirstItem) {
          if (local_48.CurrentPageIndex == 0) {
            return local_48.CurrentItemIndex;
          }
          local_48.CurrentPageIndex = local_48.CurrentPageIndex - 1;
          local_48.CurrentPageFirstItem =
               (local_48.Outer)->FirstPage[local_48.CurrentPageIndex].Items;
          if (local_48.CurrentPageFirstItem == (FLogMessageInternal *)0x0) {
            local_48.CurrentItem = (FLogMessageInternal *)0x0;
          }
          else {
            local_48.CurrentItem =
                 local_48.CurrentPageFirstItem +
                 ((local_48.Outer)->FirstPage[local_48.CurrentPageIndex].Count - 1);
          }
          local_48.CurrentItemIndex =
               ((longlong)local_48.CurrentItem - (longlong)local_48.CurrentPageFirstItem) / 0x18 +
               local_48.CurrentPageIndex * (local_48.Outer)->PageSize;
        }
        else {
          local_48.CurrentItem = local_48.CurrentItem + -1;
          local_48.CurrentItemIndex = local_48.CurrentItemIndex - 1;
        }
      }
      return uVar10;
    }
  }
  return 0;
}

// ReadMessage @ 14d481c60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FLogProvider::ReadMessage
          (FLogProvider *this,ulong64 param_1,
          TFunctionRef<void___cdecl(TraceServices::FLogMessageInfo_const_&)> *param_2)

{
  ulonglong uVar1;
  FLogMessageInternal *pFVar2;
  FLogMessageSpec *pFVar3;
  ulonglong uVar4;
  ulong64 local_38;
  double local_30;
  FLogCategoryInfo *local_28;
  wchar_t *local_20;
  wchar_t *local_18;
  int local_10;
  Type local_c;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((this->Messages).TotalItemCount <= param_1) {
    return false;
  }
  uVar1 = (this->Messages).PageSize;
  uVar4 = param_1 % uVar1;
  pFVar2 = (this->Messages).FirstPage[param_1 / uVar1].Items;
  pFVar3 = pFVar2[uVar4].Spec;
  local_30 = pFVar2[uVar4].Time;
  local_28 = pFVar3->Category;
  local_20 = pFVar3->File;
  local_10 = pFVar3->Line;
  local_c = pFVar3->Verbosity;
  local_18 = pFVar2[uVar4].Message;
  local_38 = param_1;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_38);
  return true;
}

// RegisterCategory @ 14d4827c0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall TraceServices::FLogProvider::RegisterCategory(FLogProvider *this)

{
  ulong64 uVar1;
  
  uVar1 = IdGenerator;
  IdGenerator = IdGenerator + 1;
  return uVar1;
}

// ReverseEnumerateMessages @ 14d488210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::ReverseEnumerateMessages
          (FLogProvider *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(TraceServices::FLogMessageInfo_const_&)> *param_3)

{
  double *pdVar1;
  int iVar2;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar3;
  FLogMessageInternal *pFVar4;
  FLogMessageSpec *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  FLogMessageInternal *pFVar13;
  ulong64 uVar14;
  int iVar15;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_c8;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_98;
  ulong64 local_68;
  double local_60;
  FLogCategoryInfo *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  int local_40;
  Type local_3c;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((param_2 <= param_1) && ((this->Messages).TotalItemCount != 0)) {
    uVar11 = (this->Messages).PagesArray.ArrayNum;
    pTVar3 = (this->Messages).FirstPage;
    if (((int)uVar11 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar15 = 0;
    if (0 < (int)uVar11) {
      do {
        iVar2 = (uVar11 >> 1) + iVar15;
        pdVar1 = &(pTVar3[iVar2].Items)->Time;
        if (*pdVar1 <= param_1 && param_1 != *pdVar1) {
          iVar15 = iVar2 + (uVar11 & 1);
        }
        uVar7 = uVar11 >> 1;
        uVar11 = uVar11 >> 1;
      } while (uVar7 != 0);
      if (iVar15 != 0) {
        uVar12 = (this->Messages).TotalItemCount;
        uVar10 = (longlong)iVar15 * (this->Messages).PageSize;
        if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementIndex > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                               ,0x37a,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_c8.CurrentPageIndex = 0;
        local_c8.CurrentItemIndex = 0;
        local_c8.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
        local_c8.CurrentPageLastItem = (FLogMessageInternal *)0x0;
        local_c8.CurrentItem = (FLogMessageInternal *)0x0;
        local_c8.Outer = &this->Messages;
        TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
        ::SetPositionInternal(&local_c8,uVar12 - 1);
        uVar14 = local_c8.CurrentPageIndex;
        pFVar4 = local_c8.CurrentPageFirstItem;
        uVar10 = local_c8.CurrentItemIndex;
        pFVar13 = local_c8.CurrentItem;
        while ((pFVar13 != (FLogMessageInternal *)0x0 &&
               (param_1 < pFVar13->Time || param_1 == pFVar13->Time))) {
          uVar12 = uVar10;
          if (pFVar13 == pFVar4) {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pFVar4 = (local_c8.Outer)->FirstPage[uVar14].Items;
            pFVar13 = (FLogMessageInternal *)0x0;
            if (pFVar4 != (FLogMessageInternal *)0x0) {
              pFVar13 = pFVar4 + ((local_c8.Outer)->FirstPage[uVar14].Count - 1);
            }
            uVar10 = ((longlong)pFVar13 - (longlong)pFVar4) / 0x18 +
                     uVar14 * (local_c8.Outer)->PageSize;
          }
          else {
            pFVar13 = pFVar13 + -1;
            uVar10 = uVar10 - 1;
          }
        }
        if ((uVar12 != 0) && (uVar12 < (this->Messages).TotalItemCount)) {
          local_98.CurrentPageIndex = 0;
          local_98.CurrentItemIndex = 0;
          local_98.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
          local_98.CurrentPageLastItem = (FLogMessageInternal *)0x0;
          local_98.CurrentItem = (FLogMessageInternal *)0x0;
          local_98.Outer = &this->Messages;
          TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
          ::SetPositionInternal(&local_98,uVar12 - 1);
          while ((local_98.CurrentItem != (FLogMessageInternal *)0x0 &&
                 (local_60 = (local_98.CurrentItem)->Time, param_2 <= local_60))) {
            pFVar5 = (local_98.CurrentItem)->Spec;
            local_58 = pFVar5->Category;
            local_50 = pFVar5->File;
            local_40 = pFVar5->Line;
            local_3c = pFVar5->Verbosity;
            local_48 = (local_98.CurrentItem)->Message;
            local_68 = local_98.CurrentItemIndex;
            cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_68);
            if (cVar9 != '\0') {
              return;
            }
            TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
            ::PrevItem(&local_98);
          }
        }
      }
    }
  }
  return;
}

// UpdateMessageCategory @ 14d48ee10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::UpdateMessageCategory
          (FLogProvider *this,ulong64 param_1,ulong64 param_2)

{
  FLogMessageSpec *pFVar1;
  FLogCategoryInfo *pFVar2;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar1 = GetMessageSpec((FLogProvider *)&this[-1].NumInserts,param_1);
  pFVar2 = (FLogCategoryInfo *)(**(code **)(this->_padding_ + 0x28))(this,param_2);
  pFVar1->Category = pFVar2;
  return;
}

// UpdateMessageFile @ 14d48ee70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::UpdateMessageFile
          (FLogProvider *this,ulong64 param_1,wchar_t *param_2,int param_3)

{
  FLogMessageSpec *pFVar1;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar1 = GetMessageSpec((FLogProvider *)&this[-1].NumInserts,param_1);
  pFVar1->File = param_2;
  pFVar1->Line = param_3;
  return;
}

// UpdateMessageFormatString @ 14d48eed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::UpdateMessageFormatString
          (FLogProvider *this,ulong64 param_1,wchar_t *param_2)

{
  FLogMessageSpec *pFVar1;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar1 = GetMessageSpec((FLogProvider *)&this[-1].NumInserts,param_1);
  pFVar1->FormatString = param_2;
  return;
}

// UpdateMessageSpec @ 14d48ef20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::UpdateMessageSpec
          (FLogProvider *this,ulong64 param_1,ulong64 param_2,wchar_t *param_3,wchar_t *param_4,
          int param_5,Type param_6)

{
  FLogMessageSpec *pFVar1;
  FLogCategoryInfo *pFVar2;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar1 = GetMessageSpec((FLogProvider *)&this[-1].NumInserts,param_1);
  pFVar2 = (FLogCategoryInfo *)(**(code **)(this->_padding_ + 0x28))(this,param_2);
  pFVar1->File = param_4;
  pFVar1->Line = param_5;
  pFVar1->FormatString = param_3;
  pFVar1->Verbosity = param_6;
  pFVar1->Category = pFVar2;
  return;
}

// UpdateMessageVerbosity @ 14d48efb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FLogProvider::UpdateMessageVerbosity(FLogProvider *this,ulong64 param_1,Type param_2)

{
  FLogMessageSpec *pFVar1;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar1 = GetMessageSpec((FLogProvider *)&this[-1].NumInserts,param_1);
  pFVar1->Verbosity = param_2;
  return;
}

// UpperBoundByTime @ 14d48fac0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall TraceServices::FLogProvider::UpperBoundByTime(FLogProvider *this,double param_1)

{
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  local_48;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar8 = (this->Messages).PagesArray.ArrayNum;
  pTVar1 = (this->Messages).FirstPage;
  if (((int)uVar8 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  lVar11 = 0;
  if (0 < (int)uVar8) {
    do {
      uVar9 = uVar8 >> 1;
      iVar7 = uVar9 + (int)lVar11;
      iVar4 = iVar7 + (uVar8 & 1);
      if (param_1 < (pTVar1[iVar7].Items)->Time) {
        iVar4 = (int)lVar11;
      }
      lVar11 = (longlong)iVar4;
      uVar8 = uVar9;
    } while (uVar9 != 0);
    if (iVar4 != 0) {
      uVar10 = (this->Messages).TotalItemCount;
      uVar6 = lVar11 * (this->Messages).PageSize;
      if (uVar6 < uVar10 || uVar6 - uVar10 == 0) {
        uVar10 = uVar6;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x3a3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      local_48.CurrentPageIndex = 0;
      local_48.CurrentItemIndex = 0;
      local_48.CurrentPageFirstItem = (FLogMessageInternal *)0x0;
      local_48.CurrentPageLastItem = (FLogMessageInternal *)0x0;
      local_48.CurrentItem = (FLogMessageInternal *)0x0;
      local_48.Outer = &this->Messages;
      TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
      ::SetPositionInternal(&local_48,uVar10 - 1);
      while( true ) {
        if (local_48.CurrentItem == (FLogMessageInternal *)0x0) {
          return uVar10;
        }
        if ((local_48.CurrentItem)->Time <= param_1) break;
        uVar10 = local_48.CurrentItemIndex;
        if (local_48.CurrentItem == local_48.CurrentPageFirstItem) {
          if (local_48.CurrentPageIndex == 0) {
            return local_48.CurrentItemIndex;
          }
          local_48.CurrentPageIndex = local_48.CurrentPageIndex - 1;
          local_48.CurrentPageFirstItem =
               (local_48.Outer)->FirstPage[local_48.CurrentPageIndex].Items;
          if (local_48.CurrentPageFirstItem == (FLogMessageInternal *)0x0) {
            local_48.CurrentItem = (FLogMessageInternal *)0x0;
          }
          else {
            local_48.CurrentItem =
                 local_48.CurrentPageFirstItem +
                 ((local_48.Outer)->FirstPage[local_48.CurrentPageIndex].Count - 1);
          }
          local_48.CurrentItemIndex =
               ((longlong)local_48.CurrentItem - (longlong)local_48.CurrentPageFirstItem) / 0x18 +
               local_48.CurrentPageIndex * (local_48.Outer)->PageSize;
        }
        else {
          local_48.CurrentItem = local_48.CurrentItem + -1;
          local_48.CurrentItemIndex = local_48.CurrentItemIndex - 1;
        }
      }
      return uVar10;
    }
  }
  return 0;
}

