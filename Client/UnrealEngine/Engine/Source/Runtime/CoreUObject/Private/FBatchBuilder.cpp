// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// FBatchBuilder @ 141f20a20

FBatchBuilder * __thiscall
FBulkDataBatchRequest::FBatchBuilder::FBatchBuilder(FBatchBuilder *this,int param_1)

{
  *(int *)&this->field_0x8 = param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// operator() @ 141f27290

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

void __thiscall
`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>::operator()
          (void *this,TIoStatusOr<FIoBuffer> *param_1)

{
  int *piVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  BufCore *this_00;
  undefined8 *puVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  void *pvVar9;
  undefined7 uVar10;
  ulonglong uVar11;
  FArchiveState local_d8;
  undefined8 local_48;
  uchar *local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  if ((param_1->StatusValue).ErrorCode == Ok) {
    FIoStatus::operator=(&param_1->StatusValue,&FIoStatus::Unknown);
    this_00 = *(BufCore **)(param_1->Value).Pad;
    *(undefined8 *)(param_1->Value).Pad = 0;
    puVar5 = *(undefined8 **)this;
    uVar11 = (ulonglong)CONCAT14(this_00->DataSizeHigh,this_00->DataSizeLow);
    if (((*(uint *)((longlong)puVar5 + 0x14) & 0x40000000) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Owner->IsDataMemoryMapped()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x1a3,
                           L"Trying to reallocate a memory mapped BulkData object without freeing it first!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pvVar9 = FMemory::Realloc((void *)*puVar5,uVar11,0);
    *puVar5 = pvVar9;
    uVar4 = this_00->DataSizeLow;
    uVar3 = this_00->DataSizeHigh;
    puVar6 = this_00->DataPtr;
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_48 = 0;
    local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    uVar10 = (undefined7)(uVar11 >> 8);
    local_30 = 0x7fffffffffffffff;
    local_40 = puVar6;
    local_38 = (ulonglong)CONCAT14(uVar3,uVar4);
    FArchiveState::SetIsLoading(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar10,1));
    FBulkData::SerializeBulkData
              (*(FBulkData **)this,(FArchive *)&local_d8,pvVar9,
               (ulonglong)CONCAT14(this_00->DataSizeHigh,this_00->DataSizeLow),
               *(EBulkDataFlags *)(((*(FBulkData **)this)->BulkMeta).Data + 0xc));
    FArchive::~FArchive((FArchive *)&local_d8);
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(param_1);
  return;
}

// IsEmpty @ 141f3a3b0

bool __thiscall FBulkDataBatchRequest::FBatchBuilder::IsEmpty(FBatchBuilder *this)

{
  return *(int *)this == 0;
}

// Issue @ 141f3a6c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::FBatchBuilder::Issue
          (FBatchBuilder *this,TFunction<void___cdecl(FBulkDataRequest::EStatus)> *param_1,
          FBulkDataBatchRequest *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  bool bVar3;
  FBulkDataBatchRequest FVar4;
  FBulkDataBatchRequest FVar5;
  FBulkDataBatchRequest local_18 [2];
  
  if ((0 < *(int *)&this->field_0x4) && (*(int *)this == 0)) {
    FVar4 = (FBulkDataBatchRequest)::operator_new(0x10);
    FVar5 = (FBulkDataBatchRequest)0x0;
    if (FVar4 == (FBulkDataBatchRequest)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandle != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                         ,0x4fd,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      *(undefined4 *)((longlong)FVar4 + 8) = 0;
      puVar2 = PTR_AddRef_1507f3d90;
      *(undefined ***)FVar4 = &___7FHandleBase__6B_;
      *(undefined4 *)((longlong)FVar4 + 0xc) = 2;
      (*(code *)puVar2)(FVar4);
      FVar5 = FVar4;
    }
    if (param_2 == local_18) {
      if (FVar5 != (FBulkDataBatchRequest)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f3a78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)FVar5 + 0x10))(FVar5);
        return;
      }
    }
    else {
      FVar4 = *param_2;
      *param_2 = FVar5;
      if (FVar4 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)FVar4 + 0x10))();
      }
    }
    return;
  }
  FBuilder::IssueBatch((FBuilder *)this,param_2,param_1);
  return;
}

// Issue @ 141f3a7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::FBatchBuilder::Issue(FBatchBuilder *this,FBulkDataBatchRequest *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  bool bVar3;
  FBulkDataBatchRequest FVar4;
  longlong *plVar5;
  FBulkDataBatchRequest FVar6;
  undefined1 auStack_78 [32];
  FBulkDataBatchRequest local_58 [2];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FVar6 = (FBulkDataBatchRequest)0x0;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  if ((*(int *)&this->field_0x4 < 1) || (*(int *)this != 0)) {
    FBuilder::IssueBatch
              ((FBuilder *)this,param_1,
               (TFunction<void___cdecl(FBulkDataRequest::EStatus)> *)local_48);
  }
  else {
    FVar4 = (FBulkDataBatchRequest)::operator_new(0x10);
    if (FVar4 == (FBulkDataBatchRequest)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandle != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                         ,0x4fd,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      *(undefined4 *)((longlong)FVar4 + 8) = 0;
      puVar2 = PTR_AddRef_1507f3d90;
      *(undefined ***)FVar4 = &___7FHandleBase__6B_;
      *(undefined4 *)((longlong)FVar4 + 0xc) = 2;
      (*(code *)puVar2)(FVar4);
      FVar6 = FVar4;
    }
    if (param_1 == local_58) {
      if (FVar6 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)FVar6 + 0x10))(FVar6);
      }
    }
    else {
      FVar4 = *param_1;
      *param_1 = FVar6;
      if (FVar4 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)FVar4 + 0x10))();
      }
    }
  }
  if (local_48._0_8_ != 0) {
    plVar5 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar5 = local_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// Issue @ 141f3a8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FBulkDataBatchRequest::FBatchBuilder::Issue(FBatchBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((*(int *)&this->field_0x4 < 1) && (*(int *)this < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumLoaded > 0 || BatchCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                       ,0x387,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*(int *)&this->field_0x4 < 1) || (*(int *)this != 0)) {
    local_48._0_8_ = 0;
    local_20 = (longlong *)0x0;
    FBuilder::IssueBatch
              ((FBuilder *)this,(FBulkDataBatchRequest *)0x0,
               (TFunction<void___cdecl(FBulkDataRequest::EStatus)> *)local_48);
    if (local_48._0_8_ != 0) {
      plVar3 = (longlong *)(local_48 + 0x10);
      if (local_20 != (longlong *)0x0) {
        plVar3 = local_20;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return;
}

// Read @ 141f410d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FBatchBuilder * __thiscall
FBulkDataBatchRequest::FBatchBuilder::Read
          (FBatchBuilder *this,FBulkData *param_1,ulong64 param_2,ulong64 param_3,
          EAsyncIOPriorityAndFlags param_4,FIoBuffer *param_5,FBulkDataRequest *param_6)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  code *pcVar4;
  bool bVar5;
  FBatchBuilder *pFVar6;
  FIoBuffer *pFVar7;
  FBatchHandle *this_00;
  longlong *plVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  ulong64 local_res18 [2];
  undefined1 auStackY_118 [32];
  ulong64 local_e8 [2];
  FIoBuffer local_d8;
  FBulkDataRequest *local_d0;
  FBulkData *local_c8;
  ulong64 *local_c0;
  ulong64 *local_b8;
  FIoReadOptions local_b0;
  undefined1 local_88 [40];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d0 = param_6;
  local_res18[0] = param_2;
  local_e8[0] = param_3;
  if ((param_3 != 0xffffffffffffffff) &&
     ((ulonglong)*(uint5 *)(param_1->BulkMeta).Data < param_3 + param_2)) {
    local_c0 = local_e8;
    local_b8 = local_res18;
    local_c8 = param_1;
    `FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>::operator()(&local_c8);
  }
  uVar10 = (ulonglong)*(uint5 *)((param_1->BulkMeta).Data + 5);
  if (0xfffffffffe < uVar10) {
    uVar10 = 0xffffffffffffffff;
  }
  uVar11 = uVar10 + local_res18[0];
  uVar10 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(*(undefined2 *)((param_1->BulkMeta).Data + 3),
                                      (param_1->BulkMeta).Data[2]),(param_1->BulkMeta).Data[1]),
                    (param_1->BulkMeta).Data[0]);
  pBVar3 = (param_5->CorePtr).Reference;
  uVar9 = local_e8[0];
  if (uVar10 < local_e8[0]) {
    uVar9 = uVar10;
  }
  uVar10 = (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow);
  if (((uVar10 != 0) && (uVar10 != uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dst.GetSize() == 0 || Dst.GetSize() == ReadSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x362,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FBatchBuilder *)(*pcVar4)();
    return pFVar6;
  }
  pBVar3 = (param_5->CorePtr).Reference;
  if (pBVar3->DataSizeHigh == '\0' && pBVar3->DataSizeLow == 0) {
    pFVar7 = FIoBuffer::FIoBuffer(&local_d8,uVar9);
    FIoBuffer::operator=(param_5,pFVar7);
    if (local_d8.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_d8.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_d8.CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_d8.CorePtr.Reference);
        ::operator_delete((void *)local_d8.CorePtr.Reference,0x20);
      }
    }
  }
  this_00 = FBuilder::GetBatch((FBuilder *)this);
  local_88._0_8_ = 0;
  local_60 = (longlong *)0x0;
  local_b0.TargetVa = ((param_5->CorePtr).Reference)->DataPtr;
  local_b0.Flags = param_4 >> 10 & HardwareTargetBuffer;
  local_b0.RequestedOffset = uVar11;
  local_b0.RequestedSize = uVar9;
  FBatchHandle::Read(this_00,&param_1->BulkChunkId,&local_b0,param_4,
                     (TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)local_88,local_d0);
  if (local_88._0_8_ != 0) {
    plVar8 = (longlong *)(local_88 + 0x10);
    if (local_60 != (longlong *)0x0) {
      plVar8 = local_60;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  *(int *)this = *(int *)this + 1;
  return this;
}

// Read @ 141f41390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FBatchBuilder * __thiscall
FBulkDataBatchRequest::FBatchBuilder::Read
          (FBatchBuilder *this,FBulkData *param_1,EAsyncIOPriorityAndFlags param_2)

{
  FBatchHandle *this_00;
  undefined ***pppuVar1;
  undefined1 auStackY_a8 [32];
  FIoReadOptions local_78;
  code *local_58 [2];
  undefined **local_48;
  FBulkData *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if ((param_1->DataAllocation).Allocation.RawData == (void *)0x0) {
    this_00 = FBuilder::GetBatch((FBuilder *)this);
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
                  ::Call;
    local_30 = (undefined ***)0x0;
    local_78.RequestedOffset = (ulong64)*(uint5 *)((param_1->BulkMeta).Data + 5);
    local_78.TargetVa = (void *)0x0;
    local_78.Flags = None;
    if (0xfffffffffe < local_78.RequestedOffset) {
      local_78.RequestedOffset = 0xffffffffffffffff;
    }
    local_78.RequestedSize =
         (ulong64)CONCAT41(CONCAT31(CONCAT21(CONCAT11((param_1->BulkMeta).Data[4],
                                                      (param_1->BulkMeta).Data[3]),
                                             (param_1->BulkMeta).Data[2]),
                                    (param_1->BulkMeta).Data[1]),(param_1->BulkMeta).Data[0]);
    local_40 = param_1;
    FBatchHandle::Read(this_00,&param_1->BulkChunkId,&local_78,param_2,
                       (TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)local_58,
                       (FBulkDataRequest *)0x0);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    *(int *)this = *(int *)this + 1;
  }
  else {
    *(int *)&this->field_0x4 = *(int *)&this->field_0x4 + 1;
  }
  return this;
}

// operator() @ 150482fe0

bool __thiscall
`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6782433434095584093>);
  if (bVar2) {
    ::LexToString(&local_18,(FIoChunkId *)(*(longlong *)this + 0x18));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6782433434095584093>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504830b2;
    }
  }
  bVar2 = false;
LAB_1504830b2:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

