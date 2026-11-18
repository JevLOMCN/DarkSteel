// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FBuilder @ 141f20a80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FBuilder * __thiscall FBulkDataBatchRequest::FBuilder::FBuilder(FBuilder *this,int param_1)

{
  this->BatchMax = param_1;
  this->BatchCount = 0;
  this->NumLoaded = 0;
  (this->Batch).Reference = (FBatchHandle *)0x0;
  return this;
}

// ~FBuilder @ 141f236d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FBulkDataBatchRequest::FBuilder::~FBuilder(FBuilder *this)

{
  longlong *plVar1;
  FBatchHandle *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Batch).Reference;
  if (pFVar2 != (FBatchHandle *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141f236f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// GetBatch @ 141f330b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FBatchHandle * __thiscall FBulkDataBatchRequest::FBuilder::GetBatch(FBuilder *this)

{
  longlong *plVar1;
  int iVar2;
  FBatchHandle *pFVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  FBatchHandle *pFVar7;
  
  if ((this->Batch).Reference == (FBatchHandle *)0x0) {
    pFVar7 = ::operator_new(0x80);
    if (pFVar7 == (FBatchHandle *)0x0) {
      pFVar7 = (FBatchHandle *)0x0;
    }
    else {
      iVar2 = this->BatchMax;
      pFVar7->_padding_ = 0;
      pFVar7->_padding_ = (longlong)&___7FBatchHandle_FBulkDataBatchRequest__6B_;
      FIoBatch::FIoBatch(&pFVar7->IoBatch);
      TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::
      TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>(&pFVar7->Requests,0);
      (pFVar7->DoneEvent).State = (atomic<unsigned_char>)0x0;
      *(undefined8 *)&pFVar7->CompletionCallback = 0;
      *(undefined8 *)&(pFVar7->CompletionCallback).field_0x28 = 0;
      if (0 < iVar2) {
        iVar2 = iVar2 + 7;
        uVar6 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        if ((pFVar7->Requests).Chunks.Array.ArrayMax < (int)uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar6,(ForAnyElementType *)&pFVar7->Requests,
                     (pFVar7->Requests).Chunks.Array.ArrayNum,
                     &(pFVar7->Requests).Chunks.Array.ArrayMax);
        }
      }
      LOCK();
      __GTraceCounterBulkDataBatchRequest_Count.Value =
           (atomic<__int64>)((longlong)__GTraceCounterBulkDataBatchRequest_Count.Value + 1);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterBulkDataBatchRequest_Count.CounterId == (atomic<unsigned_int>)0x0) {
          uVar5 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterBulkDataBatchRequest_Count.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterBulkDataBatchRequest_Count.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterBulkDataBatchRequest_Count.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterBulkDataBatchRequest_Count.CounterId._2_2_ = 0;
            __GTraceCounterBulkDataBatchRequest_Count.CounterId._0_2_ = uVar5;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterBulkDataBatchRequest_Count.CounterId._0_2_,
                   (long64)__GTraceCounterBulkDataBatchRequest_Count.Value);
      }
    }
    pFVar3 = (this->Batch).Reference;
    if (pFVar3 != pFVar7) {
      (this->Batch).Reference = pFVar7;
      if (pFVar7 != (FBatchHandle *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar3 != (FBatchHandle *)0x0) {
        LOCK();
        plVar1 = &pFVar3->_padding_;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  return (this->Batch).Reference;
}

// IssueBatch @ 141f3ae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::FBuilder::IssueBatch
          (FBuilder *this,FBulkDataBatchRequest *param_1,
          TFunction<void___cdecl(FBulkDataRequest::EStatus)> *param_2)

{
  longlong *plVar1;
  int iVar2;
  FBulkDataBatchRequest this_00;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  ushort uVar12;
  longlong lVar13;
  undefined ***pppuVar14;
  FBulkDataBatchRequest FVar15;
  undefined1 auStack_88 [32];
  FBulkDataBatchRequest local_68 [2];
  code *local_58 [2];
  undefined **local_48;
  FBulkDataBatchRequest local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (((this->Batch).Reference == (FBatchHandle *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Batch.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                          ,0x31c,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1 == (FBulkDataBatchRequest *)0x0) && ((uint)((this->Batch).Reference)->_padding_ < 2)
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutRequest != nullptr || Batch->GetRefCount() > 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                                ,0x31d,
                                L"At least one request handle needs to be used when creating a batch request"
                               ), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FBulkDataBatchRequest)(this->Batch).Reference;
  (this->Batch).Reference = (FBatchHandle *)0x0;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  uVar5 = *(undefined8 *)((longlong)this_00 + 0x50);
  uVar6 = *(undefined8 *)((longlong)this_00 + 0x58);
  uVar7 = *(undefined8 *)((longlong)this_00 + 0x60);
  uVar8 = *(undefined8 *)((longlong)this_00 + 0x68);
  uVar9 = *(undefined8 *)((longlong)this_00 + 0x70);
  uVar10 = *(undefined8 *)((longlong)this_00 + 0x78);
  *(undefined8 *)((longlong)this_00 + 0x50) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)this_00 + 0x58) = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)((longlong)this_00 + 0x60) = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)((longlong)this_00 + 0x68) = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)((longlong)this_00 + 0x70) = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)((longlong)this_00 + 0x78) = uVar4;
  *(undefined8 *)param_2 = uVar5;
  *(undefined8 *)&param_2->field_0x8 = uVar6;
  *(undefined8 *)&param_2->field_0x10 = uVar7;
  *(undefined8 *)&param_2->field_0x18 = uVar8;
  *(undefined8 *)&param_2->field_0x20 = uVar9;
  *(undefined8 *)&param_2->field_0x28 = uVar10;
  if (*(int *)((longlong)this_00 + 0x38) == 0) {
    FBatchHandle::CompleteBatch((FBatchHandle *)this_00,Ok);
  }
  else {
    LOCK();
    __GTraceCounterBulkDataBatchRequest_PendingCount.Value =
         (atomic<__int64>)((longlong)__GTraceCounterBulkDataBatchRequest_PendingCount.Value + 1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar12 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterName,
                            TraceCounterType_Int,
                            __GTraceCounterBulkDataBatchRequest_PendingCount.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId == (atomic<unsigned_int>)0x0)
        {
          __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._2_2_ = 0;
          __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._0_2_ = uVar12;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._0_2_,
                 (long64)__GTraceCounterBulkDataBatchRequest_PendingCount.Value);
    }
    local_30 = (undefined ***)0x0;
    local_48 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__Issue_FBatchHandle_FBulkDataBatchRequest__QEAAX__QEAV__TFunction___A6AXW4EStatus_FBulkDataRequest___Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,void>
                  ::Call;
    *(undefined4 *)((longlong)this_00 + 0xc) = 1;
    local_40 = this_00;
    FIoBatch::IssueWithCallback
              ((FIoBatch *)((longlong)this_00 + 0x10),(TFunction<void___cdecl(void)> *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar14 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar14 = local_30;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if (param_1 != (FBulkDataBatchRequest *)0x0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
    if (param_1 == local_68) {
      if (this_00 == (FBulkDataBatchRequest)0x0) goto LAB_141f3b02c;
      lVar13 = *(longlong *)this_00;
      FVar15 = this_00;
    }
    else {
      FVar15 = *param_1;
      *param_1 = this_00;
      if (FVar15 == (FBulkDataBatchRequest)0x0) goto LAB_141f3b02c;
      lVar13 = *(longlong *)FVar15;
    }
    (**(code **)(lVar13 + 0x10))(FVar15);
  }
LAB_141f3b02c:
  LOCK();
  plVar1 = (longlong *)((longlong)this_00 + 8);
  iVar2 = *(int *)plVar1;
  *(int *)plVar1 = *(int *)plVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (*(code *)**(undefined8 **)this_00)(this_00,1);
  }
  return;
}

