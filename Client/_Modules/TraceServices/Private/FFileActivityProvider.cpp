// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 14

// <lambda_invoker_cdecl> @ 14d406910

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

wchar_t * __cdecl
`TraceServices::FFileActivityProvider::FFileActivityProvider'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FFileActivity *param_1)

{
  if (param_1->File != (FFileInfo *)0x0) {
    return param_1->File->Path;
  }
  return L"N/A";
}

// <lambda_invoker_cdecl> @ 14d4069b0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

wchar_t * __cdecl
`TraceServices::FFileActivityProvider::FFileActivityProvider'::__l2::<lambda_2>::
<lambda_invoker_cdecl>(FFileActivity *param_1)

{
  EFileActivityType EVar1;
  
  EVar1 = param_1->ActivityType;
  if (EVar1 == FileActivityType_Open) {
    return L"Open";
  }
  if (EVar1 == FileActivityType_Close) {
    return L"Close";
  }
  if (EVar1 == FileActivityType_Read) {
    return L"Read";
  }
  if (EVar1 != FileActivityType_Write) {
    return L"Invalid";
  }
  return L"Write";
}

// FFileActivityProvider @ 14d421500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d42175d) */
/* WARNING: Removing unreachable block (ram,0x00014d421918) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff68 : 0x00014d421761 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FFileActivityProvider * __thiscall
TraceServices::FFileActivityProvider::FFileActivityProvider
          (FFileActivityProvider *this,IAnalysisSession *param_1)

{
  int *piVar1;
  TArray<TraceServices::TTableLayout<TraceServices::FFileActivity>::FColumnDeclaration,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ILinearAllocator *pIVar6;
  TTableLayout<TraceServices::FFileActivity> *pTVar7;
  FFileActivityProvider *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_118 [32];
  FString *local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  FString local_c8;
  undefined8 local_b8;
  code *local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  FString local_78;
  undefined8 local_68;
  code *local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FFileActivityProvider_TraceServices__6B_;
  pIVar6 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Files).PageSize = 0x400;
  (this->Files).Allocator = pIVar6;
  (this->Files).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Files).PagesArray.ArrayNum = 0;
  (this->Files).PagesArray.ArrayMax = 0;
  (this->Files).FirstPage =
       (TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal> *)0x0;
  (this->Files).LastPage =
       (TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal> *)0x0;
  (this->Files).TotalItemCount = 0;
  pIVar6 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->FileActivities).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileActivities).Allocator = pIVar6;
  (this->FileActivities).PagesArray.ArrayNum = 0;
  (this->FileActivities).PagesArray.ArrayMax = 0;
  (this->FileActivities).FirstPage = (TPagedArrayPage<TraceServices::FFileActivity> *)0x0;
  (this->FileActivities).LastPage = (TPagedArrayPage<TraceServices::FFileActivity> *)0x0;
  (this->FileActivities).PageSize = 0x400;
  (this->FileActivities).TotalItemCount = 0;
  (this->FileActivityTable)._padding_ =
       (longlong)&___7__TTableLayout_UFFileActivity_TraceServices___TraceServices__6B_;
  (this->FileActivityTable)._padding_ =
       (longlong)&___7__TTableView_UFFileActivity_TraceServices___TraceServices__6B_;
  (this->FileActivityTable)._padding_ = 0;
  (this->FileActivityTable)._padding_ = 0;
  (this->FileActivityTable).Rows = &this->FileActivities;
  pTVar7 = TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>
                     ((TTableLayout<TraceServices::FFileActivity> *)
                      &(this->FileActivityTable)._padding_,
                      `TraceServices::FFileActivityProvider::FFileActivityProvider'::__l2::
                      <lambda_1>::<lambda_invoker_cdecl>,L"File",0);
  pTVar7 = TTableLayout<TraceServices::FFileActivity>::AddColumn<double>
                     (pTVar7,(pdm_f790c1e0)0x8,L"StartTime",0);
  pTVar7 = TTableLayout<TraceServices::FFileActivity>::AddColumn<double>
                     (pTVar7,(pdm_f790c1e0)0x10,L"EndTime",0);
  ::FString::FString(&local_c8,L"ThreadId");
  pFVar10 = (pTVar7->Columns).AllocatorInstance.Data;
  local_98 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn_I___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3_IPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned_int>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
             ::Call;
  local_b8 = 2;
  local_80 = 0;
  uStack_90 = 0x30;
  if ((pFVar10 <= (FScriptContainerElement *)&local_c8) &&
     (lVar9 = (longlong)(pTVar7->Columns).ArrayMax,
     (FScriptContainerElement *)&local_c8 < pFVar10 + lVar9 * 0x50)) {
    local_e0 = (longlong)(pTVar7->Columns).ArrayNum;
    local_d8 = 0x50;
    local_f8 = &local_c8;
    local_f0 = pFVar10;
    local_e8 = lVar9;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FFileActivityProvider *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (pTVar7->Columns).ArrayNum;
  piVar1 = &(pTVar7->Columns).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&(pTVar7->Columns).AllocatorInstance,piVar1);
  }
  (pTVar7->Columns).ArrayNum = iVar5 + 1;
  pFVar10 = (pTVar7->Columns).AllocatorInstance.Data + (longlong)iVar5 * 0x50;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_c8.Data.AllocatorInstance.Data;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 8) = local_c8.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_c8.Data.ArrayMax;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_b8;
  *(undefined4 *)(pFVar10 + 0x14) = local_b8._4_4_;
  *(code **)(pFVar10 + 0x20) = local_a8;
  *(undefined8 *)(pFVar10 + 0x48) = local_80;
  local_80 = 0;
  *(undefined4 *)(pFVar10 + 0x30) = (undefined4)local_98;
  *(undefined4 *)(pFVar10 + 0x34) = local_98._4_4_;
  *(undefined4 *)(pFVar10 + 0x38) = uStack_90;
  *(undefined4 *)(pFVar10 + 0x3c) = uStack_8c;
  *(undefined8 *)(pFVar10 + 0x40) = local_88;
  if (*(longlong *)(pFVar10 + 0x20) == 0) {
    if (local_a8 != (code *)0x0) {
      (*(code *)local_98[2])();
    }
  }
  else {
    local_a8 = (code *)0x0;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar7 = TTableLayout<TraceServices::FFileActivity>::AddColumn<wchar_t_const_*>
                     (pTVar7,`TraceServices::FFileActivityProvider::FFileActivityProvider'::__l2::
                             <lambda_2>::<lambda_invoker_cdecl>,L"Type",0);
  pTVar7 = TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>
                     (pTVar7,(pdm_623452d6)0x18,L"Offset",0);
  pTVar7 = TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>
                     (pTVar7,(pdm_623452d6)0x20,L"Size",0);
  pTVar7 = TTableLayout<TraceServices::FFileActivity>::AddColumn<unsigned___int64>
                     (pTVar7,(pdm_623452d6)0x28,L"ActualSize",0);
  pTVar2 = &pTVar7->Columns;
  ::FString::FString(&local_78,L"Failed");
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____AddColumn__N___TTableLayout_UFFileActivity_TraceServices___TraceServices__QEAAAEAV23_PEQFFileActivity_3__NPEB_WI_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::TTableLayout<TraceServices::FFileActivity>::AddColumn<bool>'::__l2::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FFileActivity_const_&>
             ::Call;
  local_68 = 1;
  local_30 = 0;
  uStack_40 = 0x38;
  if ((pFVar10 <= (FScriptContainerElement *)&local_78) &&
     (lVar9 = (longlong)(pTVar7->Columns).ArrayMax,
     (FScriptContainerElement *)&local_78 < pFVar10 + lVar9 * 0x50)) {
    local_e0 = (longlong)(pTVar7->Columns).ArrayNum;
    local_d8 = 0x50;
    local_f8 = &local_78;
    local_f0 = pFVar10;
    local_e8 = lVar9;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FFileActivityProvider *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (pTVar7->Columns).ArrayNum;
  piVar1 = &(pTVar7->Columns).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&pTVar2->AllocatorInstance,piVar1);
  }
  (pTVar7->Columns).ArrayNum = iVar5 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_78.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 8) = local_78.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  *(undefined4 *)(pFVar10 + 0x10) = (undefined4)local_68;
  *(undefined4 *)(pFVar10 + 0x14) = local_68._4_4_;
  *(code **)(pFVar10 + 0x20) = local_58;
  *(undefined8 *)(pFVar10 + 0x48) = local_30;
  local_30 = 0;
  *(undefined4 *)(pFVar10 + 0x30) = (undefined4)local_48;
  *(undefined4 *)(pFVar10 + 0x34) = local_48._4_4_;
  *(undefined4 *)(pFVar10 + 0x38) = uStack_40;
  *(undefined4 *)(pFVar10 + 0x3c) = uStack_3c;
  *(undefined8 *)(pFVar10 + 0x40) = local_38;
  if (*(longlong *)(pFVar10 + 0x20) == 0) {
    if (local_58 != (code *)0x0) {
      (*(code *)local_48[2])();
    }
  }
  else {
    local_58 = (code *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FFileActivityProvider @ 14d42b910

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FFileActivityProvider::~FFileActivityProvider(FFileActivityProvider *this)

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
  return;
}

// BeginActivity @ 14d441680

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

ulong64 __thiscall
TraceServices::FFileActivityProvider::BeginActivity
          (FFileActivityProvider *this,uint param_1,EFileActivityType param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,double param_6)

{
  int *piVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  ILinearAllocator *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FFileActivity *pFVar8;
  ulong64 uVar9;
  TPagedArrayPage<TraceServices::FFileActivity> *pTVar10;
  FFileInfoInternal *pFVar11;
  FFileActivity *local_res8;
  
  uVar3 = (this->Files).PageSize;
  pTVar10 = (this->FileActivities).LastPage;
  pFVar11 = (this->Files).FirstPage[param_1 / uVar3].Items + (ulonglong)param_1 % uVar3;
  if ((pTVar10 == (TPagedArrayPage<TraceServices::FFileActivity> *)0x0) ||
     (pTVar10->Count == (this->FileActivities).PageSize)) {
    iVar7 = (this->FileActivities).PagesArray.ArrayNum;
    piVar1 = &(this->FileActivities).PagesArray.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->FileActivities).PagesArray.AllocatorInstance,piVar1);
    }
    (this->FileActivities).PagesArray.ArrayNum = iVar7 + 1;
    pTVar10 = (TPagedArrayPage<TraceServices::FFileActivity> *)
              ((this->FileActivities).PagesArray.AllocatorInstance.Data + (longlong)iVar7 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFileActivity>,int>
              (pTVar10,1);
    pIVar4 = (this->FileActivities).Allocator;
    (this->FileActivities).FirstPage =
         (TPagedArrayPage<TraceServices::FFileActivity> *)
         (this->FileActivities).PagesArray.AllocatorInstance.Data;
    (this->FileActivities).LastPage = pTVar10;
    pFVar8 = (FFileActivity *)
             (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->FileActivities).PageSize * 0x50);
    ((this->FileActivities).LastPage)->Items = pFVar8;
  }
  puVar2 = &(this->FileActivities).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pTVar10 = (this->FileActivities).LastPage;
  pFVar8 = pTVar10->Items + pTVar10->Count;
  *(undefined8 *)&pFVar8->field_0x39 = 0;
  *(undefined8 *)((longlong)&pFVar8->FileHandle + 1) = 0;
  *(undefined4 *)((longlong)&pFVar8->ReadWriteHandle + 1) = 0;
  *(undefined2 *)((longlong)&pFVar8->ReadWriteHandle + 5) = 0;
  *(undefined1 *)((longlong)&pFVar8->ReadWriteHandle + 7) = 0;
  pFVar8->File = (FFileInfo *)0x0;
  pFVar8->StartTime = 0.0;
  pFVar8->EndTime = 0.0;
  pFVar8->Offset = 0;
  pFVar8->Size = 0;
  pFVar8->ActualSize = 0;
  pFVar8->ThreadId = 0;
  pFVar8->ActivityType = FileActivityType_Count;
  pFVar8->Failed = false;
  puVar2 = &((this->FileActivities).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar8->Offset = param_4;
  pFVar8->Size = param_5;
  pFVar8->ThreadId = param_3;
  pFVar8->ActivityType = param_2;
  pFVar8->EndTime = INFINITY;
  pFVar8->StartTime = param_6;
  pFVar8->File = &pFVar11->FileInfo;
  pFVar8->ActualSize = 0;
  pFVar8->Failed = false;
  pFVar8->FileHandle = 0xffffffffffffffff;
  pFVar8->ReadWriteHandle = 0xffffffffffffffff;
  if ((pFVar11->ActivityTimeline).Object ==
      (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
       *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
  }
  local_res8 = pFVar8;
  uVar9 = TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
          ::EmplaceBeginEvent<TraceServices::FFileActivity_*_const_&>
                    ((pFVar11->ActivityTimeline).Object,param_6,&local_res8);
  return uVar9;
}

// CheckActivityReadWriteHandle @ 14d444ab0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FFileActivityProvider::CheckActivityReadWriteHandle
          (FFileActivityProvider *this,uint param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  FFileInfoInternal *pFVar2;
  TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar1 = (this->Files).PageSize;
  uVar7 = (ulonglong)param_1 % uVar1;
  pFVar2 = (this->Files).FirstPage[param_1 / uVar1].Items;
  if (pFVar2[uVar7].ActivityTimeline.Object ==
      (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = pFVar2[uVar7].ActivityTimeline.Object;
  plVar6 = (longlong *)(**(code **)(pTVar3->_padding_ + 0x18))(pTVar3,param_2);
  if (*(ulong64 *)(*plVar6 + 0x48) != param_3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Activity->ReadWriteHandle == ReadWriteHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\FileActivity.cpp"
                       ,0x72,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// EndActivity @ 14d450f80

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FFileActivityProvider::EndActivity
          (FFileActivityProvider *this,uint param_1,ulong64 param_2,ulong64 param_3,double param_4,
          bool param_5)

{
  FFileInfoInternal *pFVar1;
  TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
  *pTVar2;
  FEventInternal *pFVar3;
  FEventPage *pFVar4;
  FFileActivity *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  
  uVar8 = (this->Files).PageSize;
  uVar9 = (ulonglong)param_1 % uVar8;
  pFVar1 = (this->Files).FirstPage[param_1 / uVar8].Items;
  if (pFVar1[uVar9].ActivityTimeline.Object ==
      (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
       *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar2 = pFVar1[uVar9].ActivityTimeline.Object;
  uVar8 = (pTVar2->Events).PageSize;
  uVar9 = param_2 % uVar8;
  pFVar3 = (pTVar2->Events).FirstPage[param_2 / uVar8].Items;
  if ((pTVar2->Events).TotalItemCount <= param_2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventIndex < Events.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\IntervalTimeline.h"
                       ,0x79,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3[uVar9].EndTime = param_4;
  uVar8 = param_2 / (pTVar2->Events).PageSize;
  pFVar4 = (pTVar2->Events).FirstPage;
  dVar10 = pFVar4[uVar8].EndTime;
  if (pFVar4[uVar8].EndTime <= param_4) {
    dVar10 = param_4;
  }
  pFVar4[uVar8].EndTime = dVar10;
  pTVar2->ModCount = pTVar2->ModCount + 1;
  if (pFVar4[uVar8].OpenEvents == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Page->OpenEvents>0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\IntervalTimeline.h"
                       ,0x7f,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4[uVar8].OpenEvents = pFVar4[uVar8].OpenEvents - 1;
  pFVar5 = pFVar3[uVar9].Event;
  pFVar5->EndTime = param_4;
  pFVar5->ActualSize = param_3;
  pFVar5->Failed = param_5;
  return;
}

// EnumerateFileActivity @ 14d4590d0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FFileActivityProvider::EnumerateFileActivity
          (FFileActivityProvider *this,
          TFunctionRef<bool___cdecl(TraceServices::FFileInfo_const_&,TraceServices::ITimeline<TraceServices::FFileActivity_*>_const_&)>
          *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  FFileInfoInternal *pFVar7;
  
  uVar1 = (this->Files).TotalItemCount;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (this->Files).PageSize;
      pFVar7 = (this->Files).FirstPage[uVar6 / uVar2].Items + uVar6 % uVar2;
      if (((pFVar7->ActivityTimeline).Object ==
           (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
            *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar5 = (**(code **)param_1)
                        (*(undefined8 *)&param_1->field_0x8,pFVar7,(pFVar7->ActivityTimeline).Object
                        );
    } while ((cVar5 != '\0') && (uVar6 = uVar6 + 1, uVar6 < uVar1));
  }
  return;
}

// GetFileActivityTable @ 14d467590

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

ITable<TraceServices::FFileActivity> * __thiscall
TraceServices::FFileActivityProvider::GetFileActivityTable(FFileActivityProvider *this)

{
  return (ITable<TraceServices::FFileActivity> *)&this->FileActivityTable;
}

// GetFileIndex @ 14d4675f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

uint __thiscall
TraceServices::FFileActivityProvider::GetFileIndex(FFileActivityProvider *this,wchar_t *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal> *pTVar3;
  ILinearAllocator *pIVar4;
  ulong64 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FFileInfoInternal *pFVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  TSharedPtr<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>,1>
  *pTVar13;
  TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal> *pTVar14;
  TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
  *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
  *local_38;
  FSharedReferencer<1> FStack_30;
  
  uVar9 = (uint)(this->Files).TotalItemCount;
  pTVar3 = (this->Files).LastPage;
  if ((pTVar3 == (TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal> *)0x0) ||
     (pTVar3->Count == (this->Files).PageSize)) {
    iVar8 = (this->Files).PagesArray.ArrayNum;
    piVar1 = &(this->Files).PagesArray.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Files).PagesArray.AllocatorInstance,piVar1);
    }
    pTVar14 = (TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal> *)
              ((this->Files).PagesArray.AllocatorInstance.Data + (longlong)iVar8 * 0x10);
    (this->Files).PagesArray.ArrayNum = iVar8 + 1;
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal>,int>
              (pTVar14,1);
    pTVar3 = (TPagedArrayPage<TraceServices::FFileActivityProvider::FFileInfoInternal> *)
             (this->Files).PagesArray.AllocatorInstance.Data;
    pIVar4 = (this->Files).Allocator;
    (this->Files).LastPage = pTVar14;
    (this->Files).FirstPage = pTVar3;
    pFVar10 = (FFileInfoInternal *)
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->Files).PageSize << 5);
    ((this->Files).LastPage)->Items = pFVar10;
  }
  puVar2 = &(this->Files).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = (this->Files).LastPage;
  uVar5 = pTVar3->Count;
  pFVar10 = pTVar3->Items;
  *(undefined4 *)&pFVar10[uVar5].FileInfo.field_0x4 = 0;
  pFVar10[uVar5].FileInfo.Id = 0xffffffff;
  pFVar10[uVar5].FileInfo.Path = (wchar_t *)0x0;
  pFVar10[uVar5].ActivityTimeline.Object =
       (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
        *)0x0;
  pFVar10[uVar5].ActivityTimeline.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  puVar2 = &((this->Files).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar10[uVar5].FileInfo.Id = uVar9;
  pwVar11 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_1);
  pFVar10[uVar5].FileInfo.Path = pwVar11;
  uVar12 = (**(code **)((longlong)*this->Session + 0xb8))();
  FStack_30.ReferenceController = ::operator_new(0x68);
  if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTVar15 = (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
               *)&DAT_00000010;
    FStack_30.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar15 = (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
               *)(FStack_30.ReferenceController + 1);
    (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_30.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TIntervalTimeline_PEAUFFileActivity_TraceServices__UFTimelineSettings_FFileActivityProvider_2__TraceServices___00_SharedPointerInternals__6B_
    ;
    FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)(int)uVar12;
    FStack_30.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)uVar12 >> 0x20);
    FStack_30.ReferenceController[1]._padding_ =
         (longlong)
         &
         ___7__TIntervalTimeline_PEAUFFileActivity_TraceServices__UFTimelineSettings_FFileActivityProvider_2__TraceServices__6B_
    ;
    FStack_30.ReferenceController[2]._padding_ = 0;
    FStack_30.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[3]._padding_ = 0;
    FStack_30.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[4]._padding_ = 0x80;
    FStack_30.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[5]._padding_ = 0;
    FStack_30.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[6]._padding_ = 0;
    if (pTVar15 ==
        (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
         *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return uVar9;
      }
    }
    LOCK();
    (FStack_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar16 = FStack_30.ReferenceController;
    local_38 = pTVar15;
  }
  pTVar13 = &pFVar10[uVar5].ActivityTimeline;
  if (pTVar13 !=
      (TSharedPtr<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>,1>
       *)&local_38) {
    pTVar13->Object = pTVar15;
    local_38 = (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&pTVar13->SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return uVar9;
}

// GetFilePath @ 14d467820

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

wchar_t * __thiscall
TraceServices::FFileActivityProvider::GetFilePath(FFileActivityProvider *this,uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (this->Files).PageSize;
  return (this->Files).FirstPage[param_1 / uVar1].Items[(ulonglong)param_1 % uVar1].FileInfo.Path;
}

// GetUnknownFileIndex @ 14d46e7d0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

uint __thiscall
TraceServices::FFileActivityProvider::GetUnknownFileIndex(FFileActivityProvider *this)

{
  uint uVar1;
  
  uVar1 = GetFileIndex(this,L"Unknown");
  return uVar1;
}

// SetActivityFileHandle @ 14d489d20

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FFileActivityProvider::SetActivityFileHandle
          (FFileActivityProvider *this,uint param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  FFileInfoInternal *pFVar2;
  TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar1 = (this->Files).PageSize;
  uVar7 = (ulonglong)param_1 % uVar1;
  pFVar2 = (this->Files).FirstPage[param_1 / uVar1].Items;
  if (pFVar2[uVar7].ActivityTimeline.Object ==
      (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = pFVar2[uVar7].ActivityTimeline.Object;
  plVar6 = (longlong *)(**(code **)(pTVar3->_padding_ + 0x18))(pTVar3,param_2);
  *(ulong64 *)(*plVar6 + 0x40) = param_3;
  return;
}

// SetActivityReadWriteHandle @ 14d489db0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::FFileActivityProvider::SetActivityReadWriteHandle
          (FFileActivityProvider *this,uint param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  FFileInfoInternal *pFVar2;
  TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar1 = (this->Files).PageSize;
  uVar7 = (ulonglong)param_1 % uVar1;
  pFVar2 = (this->Files).FirstPage[param_1 / uVar1].Items;
  if (pFVar2[uVar7].ActivityTimeline.Object ==
      (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = pFVar2[uVar7].ActivityTimeline.Object;
  plVar6 = (longlong *)(**(code **)(pTVar3->_padding_ + 0x18))(pTVar3,param_2);
  *(ulong64 *)(*plVar6 + 0x48) = param_3;
  return;
}

