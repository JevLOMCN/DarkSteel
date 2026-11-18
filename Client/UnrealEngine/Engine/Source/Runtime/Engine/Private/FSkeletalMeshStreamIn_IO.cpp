// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FSkeletalMeshStreamIn_IO @ 147340260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSkeletalMeshStreamIn_IO * __thiscall
FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO
          (FSkeletalMeshStreamIn_IO *this,USkeletalMesh *param_1,bool param_2,EThreadType param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  FSkeletalMeshStreamIn_IO *pFVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined1 auStack_118 [48];
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined **local_78;
  FSkeletalMeshStreamIn_IO *local_70;
  undefined ***local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  FSkeletalMeshStreamIn::FSkeletalMeshStreamIn((FSkeletalMeshStreamIn *)this,param_1,param_3);
  *(undefined ***)this = &___7FSkeletalMeshStreamIn_IO__6B_;
  this->BulkDataRequest = (FBulkDataBatchRequest)0x0;
  FIoBuffer::FIoBuffer(&this->BulkData);
  this->bHighPrioIORequest = param_2;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::FSkeletalMeshStreamIn_IO'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  this->bFailedOnIOError = false;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  if (param_1 == (USkeletalMesh *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x1f,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FSkeletalMeshStreamIn_IO *)(*pcVar1)();
      return pFVar10;
    }
  }
  (**(code **)(param_1->_padding_ + 0x398))(param_1);
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FSkeletalMeshStreamIn_IO *)(*pcVar1)();
      return pFVar10;
    }
  }
  *(undefined4 *)&this->field_0x68 = 2;
  local_e8 = local_88;
  uStack_c0 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar12 = local_60;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_d8);
  }
  lVar7 = *(longlong *)&this->field_0x70;
  uVar8 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined4 *)&this->field_0x80;
  uVar3 = *(undefined4 *)&this->field_0x84;
  uVar4 = *(undefined4 *)&this->field_0x88;
  uVar5 = *(undefined4 *)&this->field_0x8c;
  uVar6 = *(undefined8 *)&this->field_0x90;
  plVar13 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_e8;
  *(undefined8 *)&this->field_0x78 = uStack_e0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x84 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_d0;
  *(undefined4 *)&this->field_0x8c = uStack_cc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x94 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_c0;
  *(undefined4 *)&this->field_0x9c = uStack_c0._4_4_;
  local_d8._0_4_ = uVar2;
  local_d8._4_4_ = uVar3;
  uStack_d0 = uVar4;
  uStack_cc = uVar5;
  local_c8 = uVar6;
  uStack_c0 = plVar13;
  local_e8 = (code *)lVar7;
  uStack_e0 = uVar8;
  if (lVar7 != 0) {
    plVar11 = &local_d8;
    if (plVar13 != (longlong *)0x0) {
      plVar11 = plVar13;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 0;
  local_b8 = local_58;
  uStack_90 = (longlong *)0x0;
  if (local_58 != 0) {
    plVar13 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar13 = local_30;
    }
    (**(code **)*plVar13)(plVar13,&local_a8);
  }
  lVar7 = *(longlong *)&this->field_0xb0;
  uVar8 = *(undefined8 *)&this->field_0xb8;
  uVar2 = *(undefined4 *)&this->field_0xc0;
  uVar3 = *(undefined4 *)&this->field_0xc4;
  uVar4 = *(undefined4 *)&this->field_0xc8;
  uVar5 = *(undefined4 *)&this->field_0xcc;
  uVar6 = *(undefined8 *)&this->field_0xd0;
  plVar13 = *(longlong **)&this->field_0xd8;
  *(longlong *)&this->field_0xb0 = local_b8;
  *(undefined8 *)&this->field_0xb8 = uStack_b0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xc4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_a0;
  *(undefined4 *)&this->field_0xcc = uStack_9c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xd4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_90;
  *(undefined4 *)&this->field_0xdc = uStack_90._4_4_;
  local_b8 = lVar7;
  uStack_b0 = uVar8;
  local_a8._0_4_ = uVar2;
  local_a8._4_4_ = uVar3;
  uStack_a0 = uVar4;
  uStack_9c = uVar5;
  local_98 = uVar6;
  uStack_90 = plVar13;
  if (lVar7 != 0) {
    plVar11 = &local_a8;
    if (plVar13 != (longlong *)0x0) {
      plVar11 = plVar13;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar12 = local_60;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_58 != 0) {
    plVar13 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar13 = local_30;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return this;
}

// ~FSkeletalMeshStreamIn_IO @ 147341fb0

void __thiscall FSkeletalMeshStreamIn_IO::~FSkeletalMeshStreamIn_IO(FSkeletalMeshStreamIn_IO *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this = &___7FSkeletalMeshStreamIn_IO__6B_;
  this_00 = (this->BulkData).CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
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
  if (this->BulkDataRequest != (FBulkDataBatchRequest)0x0) {
    (**(code **)(*(longlong *)this->BulkDataRequest + 0x10))();
  }
  FSkeletalMeshStreamIn::~FSkeletalMeshStreamIn((FSkeletalMeshStreamIn *)this);
  return;
}

// Abort @ 147344d30

void __thiscall FSkeletalMeshStreamIn_IO::Abort(FSkeletalMeshStreamIn_IO *this)

{
  FQueuedThreadPool *pFVar1;
  int iVar2;
  FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *this_00;
  
  if ((this->field_0x5c == '\0') && (*(int *)&this->field_0x60 != 0)) {
    if (*(int *)&this->field_0x60 != 0) {
      this->field_0x5c = 1;
    }
    if (this->BulkDataRequest != (FBulkDataBatchRequest)0x0) {
      iVar2 = (**(code **)(*(longlong *)this->BulkDataRequest + 0x20))();
      if (iVar2 == 1) {
        this_00 = ::operator_new(0x40);
        if (this_00 == (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *)0x0)
        {
          this_00 = (FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask> *)0x0;
        }
        else {
          this_00->_padding_ = 0;
          this_00->_padding_ =
               (longlong)
               &___7__FAutoDeleteAsyncTask_VFCancelIORequestsTask_FSkeletalMeshStreamIn_IO____6B_;
          (this_00->Task).PendingUpdate.Reference = this;
          LOCK();
          *(int *)&this->field_0x64 = *(int *)&this->field_0x64 + 1;
          UNLOCK();
        }
        pFVar1 = GThreadPool;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&this_00->_padding_);
        if (pFVar1 != (FQueuedThreadPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147344dd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,this_00,3);
          return;
        }
        FAutoDeleteAsyncTask<FSkeletalMeshStreamIn_IO::FCancelIORequestsTask>::DoWork(this_00);
      }
    }
  }
  return;
}

// Cancel @ 147347000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn_IO::Cancel(FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  FName local_res8;
  FString local_28;
  
  iVar8 = 0;
  if ((param_1->RenderData != (FSkeletalMeshRenderData *)0x0) &&
     (uVar7 = (ulonglong)*(int *)&this->field_0x14,
     *(int *)&this->field_0x14 < *(int *)&this->field_0x10)) {
    lVar9 = uVar7 * 8;
    do {
      uVar6 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar6 < (param_1->LODResourcesView).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FSkeletalMeshLODRenderData::ReleaseCPUResources
                (*(FSkeletalMeshLODRenderData **)
                  (lVar9 + (longlong)(param_1->LODResourcesView).DataPtr),true);
      uVar7 = (ulonglong)(uVar6 + 1);
      lVar9 = lVar9 + 8;
    } while ((int)(uVar6 + 1) < *(int *)&this->field_0x10);
  }
  if ((*(longlong *)&this->field_0x7e0 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StreamingRHICmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0x100,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bFailedOnIOError != false) && (param_1->Mesh != (USkeletalMesh *)0x0)) {
    this_00 = IStreamingManager::Get();
    pIVar5 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_00);
    if (0 < *(int *)&this->field_0x10) {
      do {
        pcVar1 = *(code **)(*(longlong *)pIVar5 + 0x118);
        uVar4 = (**(code **)(param_1->Mesh->_padding_ + 0x2c0))(param_1->Mesh,iVar8);
        (*pcVar1)(pIVar5,uVar4);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)&this->field_0x10);
    }
    if (2 < (byte)LogContentStreaming._0_1_) {
      local_res8 = (FName)param_1->Mesh->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CancelIORequest @ 147347650

void __thiscall FSkeletalMeshStreamIn_IO::CancelIORequest(FSkeletalMeshStreamIn_IO *this)

{
  int iVar1;
  
  if (this->BulkDataRequest != (FBulkDataBatchRequest)0x0) {
    iVar1 = (**(code **)(*(longlong *)this->BulkDataRequest + 0x20))();
    if ((iVar1 == 1) && (this->BulkDataRequest != (FBulkDataBatchRequest)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147347684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->BulkDataRequest + 0x28))();
      return;
    }
  }
  return;
}

// ClearIORequest @ 147347ce0

void __thiscall
FSkeletalMeshStreamIn_IO::ClearIORequest
          (FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  int *piVar1;
  FBulkDataBatchRequest *this_00;
  FBulkDataBatchRequest FVar2;
  int iVar3;
  FIoBuffer *pFVar4;
  FIoBuffer local_res18 [2];
  FBulkDataBatchRequest local_18 [2];
  
  this_00 = &this->BulkDataRequest;
  if (*this_00 != (FBulkDataBatchRequest)0x0) {
    iVar3 = (**(code **)(*(longlong *)*this_00 + 0x20))();
    if (iVar3 == 1) {
      if (*this_00 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)*this_00 + 0x28))();
      }
      FBulkDataBatchRequest::Wait(this_00);
    }
  }
  if (this_00 != local_18) {
    FVar2 = *this_00;
    *this_00 = (FBulkDataBatchRequest)0x0;
    if (FVar2 != (FBulkDataBatchRequest)0x0) {
      (**(code **)(*(longlong *)FVar2 + 0x10))();
    }
  }
  pFVar4 = FIoBuffer::FIoBuffer(local_res18);
  FIoBuffer::operator=(&this->BulkData,pFVar4);
  if (local_res18[0].CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res18[0].CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_res18[0].CorePtr.Reference + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_res18[0].CorePtr.Reference);
      ::operator_delete((void *)local_res18[0].CorePtr.Reference,0x20);
    }
  }
  return;
}

// DoCancelIO @ 14734a8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshStreamIn_IO::DoCancelIO(FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined **local_68;
  FSkeletalMeshStreamIn_IO *local_60;
  undefined ***local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  ClearIORequest(this,param_1);
  iVar1 = param_1->CurrentThread;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCancelIO'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_50 = (undefined ***)0x0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_60 = this;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = 0;
  local_d8 = local_48;
  uStack_b0 = (longlong *)0x0;
  if (local_48 != 0) {
    plVar12 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar12 = local_20;
    }
    (**(code **)*plVar12)(plVar12,&local_c8);
  }
  lVar8 = *(longlong *)&this->field_0x70;
  uVar9 = *(undefined8 *)&this->field_0x78;
  uVar3 = *(undefined4 *)&this->field_0x80;
  uVar4 = *(undefined4 *)&this->field_0x84;
  uVar5 = *(undefined4 *)&this->field_0x88;
  uVar6 = *(undefined4 *)&this->field_0x8c;
  uVar7 = *(undefined8 *)&this->field_0x90;
  plVar12 = *(longlong **)&this->field_0x98;
  *(longlong *)&this->field_0x70 = local_d8;
  *(undefined8 *)&this->field_0x78 = uStack_d0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x84 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_c0;
  *(undefined4 *)&this->field_0x8c = uStack_bc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0x94 = local_b8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_b0;
  *(undefined4 *)&this->field_0x9c = uStack_b0._4_4_;
  local_c8._0_4_ = uVar3;
  local_c8._4_4_ = uVar4;
  uStack_c0 = uVar5;
  uStack_bc = uVar6;
  local_b8 = uVar7;
  uStack_b0 = plVar12;
  local_d8 = lVar8;
  uStack_d0 = uVar9;
  if (lVar8 != 0) {
    plVar11 = &local_c8;
    if (plVar12 != (longlong *)0x0) {
      plVar11 = plVar12;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar1;
  local_a8 = local_78;
  uStack_80 = (longlong *)0x0;
  if (local_78 != (code *)0x0) {
    pppuVar13 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar13 = local_50;
    }
    (*(code *)**pppuVar13)(pppuVar13,&local_98);
  }
  lVar8 = *(longlong *)&this->field_0xb0;
  uVar9 = *(undefined8 *)&this->field_0xb8;
  uVar3 = *(undefined4 *)&this->field_0xc0;
  uVar4 = *(undefined4 *)&this->field_0xc4;
  uVar5 = *(undefined4 *)&this->field_0xc8;
  uVar6 = *(undefined4 *)&this->field_0xcc;
  uVar7 = *(undefined8 *)&this->field_0xd0;
  plVar12 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_a8;
  *(undefined8 *)&this->field_0xb8 = uStack_a0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xc4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_90;
  *(undefined4 *)&this->field_0xcc = uStack_8c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_88;
  *(undefined4 *)&this->field_0xd4 = local_88._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_80;
  *(undefined4 *)&this->field_0xdc = uStack_80._4_4_;
  local_a8 = (code *)lVar8;
  uStack_a0 = uVar9;
  local_98._0_4_ = uVar3;
  local_98._4_4_ = uVar4;
  uStack_90 = uVar5;
  uStack_8c = uVar6;
  local_88 = uVar7;
  uStack_80 = plVar12;
  if (lVar8 != 0) {
    plVar11 = &local_98;
    if (plVar12 != (longlong *)0x0) {
      plVar11 = plVar12;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_48 != 0) {
    plVar12 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar12 = local_20;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    pppuVar13 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar13 = local_50;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  return;
}

// DoCreateBuffers @ 14734aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshStreamIn_IO::DoCreateBuffers
          (FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  undefined1 auStack_f8 [32];
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined **local_68;
  FSkeletalMeshStreamIn_IO *local_60;
  undefined ***local_50;
  code *local_48;
  undefined **local_38;
  FSkeletalMeshStreamIn_IO *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FSkeletalMeshStreamIn::CreateBuffers((FSkeletalMeshStreamIn *)this,param_1);
  if (*(int *)&this->field_0x58 != 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!TaskSynchronization.GetValue()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                        ,0x27f,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_30 = this;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = 1;
  local_d8 = local_78;
  uStack_b0 = (longlong *)0x0;
  if (local_78 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar12 = local_50;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_c8);
  }
  lVar8 = *(longlong *)&this->field_0x70;
  uVar9 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined4 *)&this->field_0x80;
  uVar3 = *(undefined4 *)&this->field_0x84;
  uVar4 = *(undefined4 *)&this->field_0x88;
  uVar5 = *(undefined4 *)&this->field_0x8c;
  uVar6 = *(undefined8 *)&this->field_0x90;
  plVar7 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_d8;
  *(undefined8 *)&this->field_0x78 = uStack_d0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x84 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_c0;
  *(undefined4 *)&this->field_0x8c = uStack_bc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0x94 = local_b8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_b0;
  *(undefined4 *)&this->field_0x9c = uStack_b0._4_4_;
  local_c8._0_4_ = uVar2;
  local_c8._4_4_ = uVar3;
  uStack_c0 = uVar4;
  uStack_bc = uVar5;
  local_b8 = uVar6;
  uStack_b0 = plVar7;
  local_d8 = (code *)lVar8;
  uStack_d0 = uVar9;
  if (lVar8 != 0) {
    plVar11 = &local_c8;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 1;
  local_a8 = local_48;
  uStack_80 = (longlong *)0x0;
  if (local_48 != (code *)0x0) {
    pppuVar12 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar12 = local_20;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_98);
  }
  lVar8 = *(longlong *)&this->field_0xb0;
  uVar9 = *(undefined8 *)&this->field_0xb8;
  uVar2 = *(undefined4 *)&this->field_0xc0;
  uVar3 = *(undefined4 *)&this->field_0xc4;
  uVar4 = *(undefined4 *)&this->field_0xc8;
  uVar5 = *(undefined4 *)&this->field_0xcc;
  uVar6 = *(undefined8 *)&this->field_0xd0;
  plVar7 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_a8;
  *(undefined8 *)&this->field_0xb8 = uStack_a0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xc4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_90;
  *(undefined4 *)&this->field_0xcc = uStack_8c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_88;
  *(undefined4 *)&this->field_0xd4 = local_88._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_80;
  *(undefined4 *)&this->field_0xdc = uStack_80._4_4_;
  local_a8 = (code *)lVar8;
  uStack_a0 = uVar9;
  local_98._0_4_ = uVar2;
  local_98._4_4_ = uVar3;
  uStack_90 = uVar4;
  uStack_8c = uVar5;
  local_88 = uVar6;
  uStack_80 = plVar7;
  if (lVar8 != 0) {
    plVar11 = &local_98;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar12 = local_50;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_48 != (code *)0x0) {
    pppuVar12 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar12 = local_20;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return;
}

// DoInitiateIO @ 14734b3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshStreamIn_IO::DoInitiateIO
          (FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  undefined1 auStack_f8 [32];
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined **local_68;
  FSkeletalMeshStreamIn_IO *local_60;
  undefined ***local_50;
  code *local_48;
  undefined **local_38;
  FSkeletalMeshStreamIn_IO *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_1->CurrentThread != 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Async",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                        ,0x269,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetIORequest(this,param_1);
  local_30 = this;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = 2;
  local_d8 = local_78;
  uStack_b0 = (longlong *)0x0;
  if (local_78 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar12 = local_50;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_c8);
  }
  lVar8 = *(longlong *)&this->field_0x70;
  uVar9 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined4 *)&this->field_0x80;
  uVar3 = *(undefined4 *)&this->field_0x84;
  uVar4 = *(undefined4 *)&this->field_0x88;
  uVar5 = *(undefined4 *)&this->field_0x8c;
  uVar6 = *(undefined8 *)&this->field_0x90;
  plVar7 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_d8;
  *(undefined8 *)&this->field_0x78 = uStack_d0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x84 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_c0;
  *(undefined4 *)&this->field_0x8c = uStack_bc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0x94 = local_b8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_b0;
  *(undefined4 *)&this->field_0x9c = uStack_b0._4_4_;
  local_c8._0_4_ = uVar2;
  local_c8._4_4_ = uVar3;
  uStack_c0 = uVar4;
  uStack_bc = uVar5;
  local_b8 = uVar6;
  uStack_b0 = plVar7;
  local_d8 = (code *)lVar8;
  uStack_d0 = uVar9;
  if (lVar8 != 0) {
    plVar11 = &local_c8;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 2;
  local_a8 = local_48;
  uStack_80 = (longlong *)0x0;
  if (local_48 != (code *)0x0) {
    pppuVar12 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar12 = local_20;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_98);
  }
  lVar8 = *(longlong *)&this->field_0xb0;
  uVar9 = *(undefined8 *)&this->field_0xb8;
  uVar2 = *(undefined4 *)&this->field_0xc0;
  uVar3 = *(undefined4 *)&this->field_0xc4;
  uVar4 = *(undefined4 *)&this->field_0xc8;
  uVar5 = *(undefined4 *)&this->field_0xcc;
  uVar6 = *(undefined8 *)&this->field_0xd0;
  plVar7 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_a8;
  *(undefined8 *)&this->field_0xb8 = uStack_a0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xc4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_90;
  *(undefined4 *)&this->field_0xcc = uStack_8c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_88;
  *(undefined4 *)&this->field_0xd4 = local_88._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_80;
  *(undefined4 *)&this->field_0xdc = uStack_80._4_4_;
  local_a8 = (code *)lVar8;
  uStack_a0 = uVar9;
  local_98._0_4_ = uVar2;
  local_98._4_4_ = uVar3;
  uStack_90 = uVar4;
  uStack_8c = uVar5;
  local_88 = uVar6;
  uStack_80 = plVar7;
  if (lVar8 != 0) {
    plVar11 = &local_98;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar12 = local_50;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_48 != (code *)0x0) {
    pppuVar12 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar12 = local_20;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return;
}

// DoSerializeLODData @ 14734b630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshStreamIn_IO::DoSerializeLODData
          (FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  undefined1 auStack_108 [32];
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined **local_78;
  FSkeletalMeshStreamIn_IO *local_70;
  undefined ***local_60;
  code *local_58;
  undefined **local_48;
  FSkeletalMeshStreamIn_IO *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_1->CurrentThread != 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Async",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                        ,0x272,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SerializeLODData(this,param_1);
  ClearIORequest(this,param_1);
  iVar1 = param_1->CurrentThread;
  uVar2 = *(undefined4 *)&this->field_0x7e8;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_30 = (undefined ***)0x0;
  local_40 = this;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = uVar2;
  local_e8 = local_88;
  uStack_c0 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    pppuVar13 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar13 = local_60;
    }
    (*(code *)**pppuVar13)(pppuVar13,&local_d8);
  }
  lVar9 = *(longlong *)&this->field_0x70;
  uVar10 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined4 *)&this->field_0x80;
  uVar4 = *(undefined4 *)&this->field_0x84;
  uVar5 = *(undefined4 *)&this->field_0x88;
  uVar6 = *(undefined4 *)&this->field_0x8c;
  uVar7 = *(undefined8 *)&this->field_0x90;
  plVar8 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_e8;
  *(undefined8 *)&this->field_0x78 = uStack_e0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x84 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_d0;
  *(undefined4 *)&this->field_0x8c = uStack_cc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x94 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_c0;
  *(undefined4 *)&this->field_0x9c = uStack_c0._4_4_;
  local_d8._0_4_ = uVar2;
  local_d8._4_4_ = uVar4;
  uStack_d0 = uVar5;
  uStack_cc = uVar6;
  local_c8 = uVar7;
  uStack_c0 = plVar8;
  local_e8 = (code *)lVar9;
  uStack_e0 = uVar10;
  if (lVar9 != 0) {
    plVar12 = &local_d8;
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar1;
  local_b8 = local_58;
  uStack_90 = (longlong *)0x0;
  if (local_58 != (code *)0x0) {
    pppuVar13 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar13 = local_30;
    }
    (*(code *)**pppuVar13)(pppuVar13,&local_a8);
  }
  lVar9 = *(longlong *)&this->field_0xb0;
  uVar10 = *(undefined8 *)&this->field_0xb8;
  uVar2 = *(undefined4 *)&this->field_0xc0;
  uVar4 = *(undefined4 *)&this->field_0xc4;
  uVar5 = *(undefined4 *)&this->field_0xc8;
  uVar6 = *(undefined4 *)&this->field_0xcc;
  uVar7 = *(undefined8 *)&this->field_0xd0;
  plVar8 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_b8;
  *(undefined8 *)&this->field_0xb8 = uStack_b0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xc4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_a0;
  *(undefined4 *)&this->field_0xcc = uStack_9c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xd4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_90;
  *(undefined4 *)&this->field_0xdc = uStack_90._4_4_;
  local_b8 = (code *)lVar9;
  uStack_b0 = uVar10;
  local_a8._0_4_ = uVar2;
  local_a8._4_4_ = uVar4;
  uStack_a0 = uVar5;
  uStack_9c = uVar6;
  local_98 = uVar7;
  uStack_90 = plVar8;
  if (lVar9 != 0) {
    plVar12 = &local_a8;
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    pppuVar13 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar13 = local_60;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (local_58 != (code *)0x0) {
    pppuVar13 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar13 = local_30;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  return;
}

// ReportIOError @ 147355b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn_IO::ReportIOError
          (FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar3;
  int iVar4;
  FName local_res8;
  FString local_28;
  
  if ((this->bFailedOnIOError != false) && (param_1->Mesh != (USkeletalMesh *)0x0)) {
    this_00 = IStreamingManager::Get();
    pIVar3 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_00);
    iVar4 = 0;
    if (0 < *(int *)&this->field_0x10) {
      do {
        pcVar1 = *(code **)(*(longlong *)pIVar3 + 0x118);
        uVar2 = (**(code **)(param_1->Mesh->_padding_ + 0x2c0))(param_1->Mesh,iVar4);
        (*pcVar1)(pIVar3,uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)&this->field_0x10);
    }
    if (2 < (byte)LogContentStreaming._0_1_) {
      local_res8 = (FName)param_1->Mesh->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SerializeLODData @ 147356ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn_IO::SerializeLODData
          (FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  int *piVar1;
  FIoBuffer *this_00;
  uchar uVar2;
  uint uVar3;
  USkeletalMesh *this_01;
  BufCore *pBVar4;
  uchar *puVar5;
  FSkeletalMeshLODRenderData *this_02;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FSkeletalMeshLODRenderData **ppFVar9;
  FOutputDeviceRedirector *pFVar10;
  FIoBuffer *pFVar11;
  FName *pFVar12;
  char *pcVar13;
  undefined7 uVar14;
  int iVar15;
  FLLMScope local_res10 [2];
  uint local_res18;
  undefined4 local_res20;
  FIoBuffer local_120;
  FMemScope local_118;
  FString local_110;
  FArchiveState local_f8;
  undefined8 local_68;
  uchar *local_60;
  ulonglong local_58;
  undefined8 local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name544,L"SkeletalMesh/Serialize");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name544,false,None,Default,true);
  pFVar12 = &LLMScope_Name544;
  FMemScope::FMemScope(&local_118,&LLMScope_Name544,true);
  pcVar13 = (char *)pFVar12;
  if (*(int *)&this->field_0x58 != 0) {
    pcVar13 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
    ;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TaskSynchronization.GetValue()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x222,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (((this->field_0x5c == '\0') && (this_01 = param_1->Mesh, this_01 != (USkeletalMesh *)0x0)) &&
     (param_1->RenderData != (FSkeletalMeshRenderData *)0x0)) {
    this_00 = &this->BulkData;
    pBVar4 = (this_00->CorePtr).Reference;
    if (0xffffffff < CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow)) {
      pcVar13 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
      ;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData.GetSize() >= 0 && BulkData.GetSize() <= TNumericLimits<uint32>::Max()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0x227,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pBVar4 = (this_00->CorePtr).Reference;
    uVar2 = pBVar4->DataSizeHigh;
    puVar5 = pBVar4->DataPtr;
    uVar3 = pBVar4->DataSizeLow;
    local_f8._padding_ = 0;
    local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_f8._40_8_ = 0;
    local_f8.ArSerializingDefaults = 0;
    local_f8.ArPortFlags = 0;
    local_f8.ArMaxSerializeSize = 0;
    local_f8.ArUEVer.FileVersionUE4 = 0;
    local_f8.ArUEVer.FileVersionUE5 = 0;
    local_f8.ArLicenseeUEVer = 0;
    local_f8.ArEngineVer.Major = 0;
    local_f8.ArEngineVer.Minor = 0;
    local_f8.ArEngineVer.Patch = 0;
    local_f8.ArEngineVer._6_2_ = 0;
    local_f8.ArEngineVer.Changelist = 0;
    local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_f8.SerializedProperty = (FProperty *)0x0;
    local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_f8.bCustomVersionsAreReset = false;
    local_f8._129_7_ = 0;
    local_f8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_f8);
    local_68 = 0;
    local_f8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    uVar14 = (undefined7)((ulonglong)pcVar13 >> 8);
    local_50 = 0x7fffffffffffffff;
    local_60 = puVar5;
    local_58 = (ulonglong)CONCAT14(uVar2,uVar3);
    FArchiveState::SetIsLoading(&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,CONCAT71(uVar14,1));
    iVar15 = *(int *)&this->field_0x14;
    if (iVar15 < *(int *)&this->field_0x10) {
      do {
        ppFVar9 = TArrayView<FSkeletalMeshLODRenderData_*,int>::operator[]
                            (&param_1->LODResourcesView,iVar15);
        this_02 = *ppFVar9;
        bVar7 = FSkeletalMeshLODRenderData::ShouldForceKeepCPUResources();
        bVar8 = FSkeletalMeshLODRenderData::ShouldKeepCPUResources
                          ((USkinnedAsset *)this_01,param_1->AssetLODBias + iVar15,bVar7);
        FSkeletalMeshLODRenderData::SerializeStreamedData
                  (this_02,(FArchive *)&local_f8,(USkinnedAsset *)this_01,
                   param_1->AssetLODBias + iVar15,'\0',bVar8,bVar7);
        if (local_f8.ArIsError != 0) {
          if (1 < (byte)LogContentStreaming._0_1_) {
            local_res18 = FBulkData::GetBulkDataFlags((FBulkData *)&this_02->StreamingBulkData);
            FBulkData::GetBulkDataSize((FBulkData *)&this_02->StreamingBulkData);
            FBulkData::GetBulkDataOffsetInFile((FBulkData *)&this_02->StreamingBulkData);
            MakeIoFilenameHash((FIoChunkId *)&(this_02->StreamingBulkData).field_0x18);
            local_res20 = *(undefined4 *)&this->field_0x14;
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_110,(UObject *)0x0)
            ;
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
          }
          pFVar10 = GetGlobalLogSingleton();
          FOutputDeviceRedirector::FlushThreadedLogs(pFVar10,None);
          pFVar10 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
          FOutputDeviceRedirector::Flush(pFVar10);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)&this->field_0x10);
    }
    pFVar11 = FIoBuffer::FIoBuffer(&local_120);
    FIoBuffer::operator=(this_00,pFVar11);
    if (local_120.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_120.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_120.CorePtr.Reference + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_120.CorePtr.Reference);
        ::operator_delete((void *)local_120.CorePtr.Reference,0x20);
      }
    }
    FArchive::~FArchive((FArchive *)&local_f8);
  }
  FMemScope::~FMemScope(&local_118);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetIORequest @ 147357140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn_IO::SetIORequest
          (FSkeletalMeshStreamIn_IO *this,FSkelMeshUpdateContext *param_1)

{
  FBulkDataBatchRequest FVar1;
  undefined8 uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  TEventRef<unsigned_int> TVar7;
  FSkeletalMeshLODRenderData **ppFVar8;
  longlong lVar9;
  FWriteBuffer *pFVar10;
  IConsoleManager *pIVar11;
  EAsyncIOPriorityAndFlags EVar12;
  undefined ***pppuVar13;
  bool bVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  EAsyncIOPriorityAndFlags EVar17;
  undefined1 auStackY_1c8 [32];
  ulonglong local_194;
  FName local_18c;
  FName local_184;
  FString local_178;
  FName local_168;
  undefined4 *local_160;
  longlong local_158;
  code *local_148 [2];
  undefined **local_138;
  FSkeletalMeshStreamIn_IO *local_130;
  undefined ***local_120;
  FScatterGatherBuilder local_118;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar14 = false;
  local_194 = local_194 & 0xffffffff00000000;
  if (this->field_0x5c == '\0') {
    FVar1 = this->BulkDataRequest;
    if ((((FVar1 != (FBulkDataBatchRequest)0x0) &&
         (iVar6 = (**(code **)(*(longlong *)FVar1 + 0x20))(), iVar6 != 0)) ||
        (*(int *)&this->field_0x10 <= *(int *)&this->field_0x14)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BulkDataRequest.IsNone() && PendingFirstLODIdx < CurrentFirstLODIdx",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                           ,0x1bc,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->Mesh == (USkeletalMesh *)0x0) ||
       (param_1->RenderData == (FSkeletalMeshRenderData *)0x0)) {
      if (*(int *)&this->field_0x60 != 0) {
        this->field_0x5c = 1;
      }
    }
    else {
      if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
        local_194 = 0;
        TVar7 = (TEventRef<unsigned_int>)&local_194;
      }
      else {
        local_18c = (FName)param_1->Mesh->_padding_;
        ::FName::ToString(&local_18c,&local_178);
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_178.Data.ArrayNum != 0) {
          FVar15.Data = local_178.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_184,(wchar_t *)FVar15.Data);
        TVar7 = FStringTrace::GetNameRef(&local_168);
        bVar14 = true;
      }
      uVar2 = *(undefined8 *)TVar7;
      if ((bVar14) && (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar14 = false;
      if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                  ((TLogScope<0> *)&local_160);
        *local_160 = (int)uVar2;
        *(undefined8 *)(local_158 + 0x28) = *(undefined8 *)(local_158 + 0x20);
        bVar14 = true;
      }
      FBulkDataBatchRequest::FScatterGatherBuilder::FScatterGatherBuilder
                (&local_118,*(int *)&this->field_0x10 - *(int *)&this->field_0x14);
      iVar6 = *(int *)&this->field_0x14;
      if (iVar6 < *(int *)&this->field_0x10) {
        do {
          ppFVar8 = TArrayView<FSkeletalMeshLODRenderData_*,int>::operator[]
                              (&param_1->LODResourcesView,iVar6);
          FBulkDataBatchRequest::FScatterGatherBuilder::Read
                    (&local_118,(FBulkData *)&(*ppFVar8)->StreamingBulkData,0,0xffffffffffffffff);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)&this->field_0x10);
      }
      LOCK();
      *(int *)&this->field_0x58 = *(int *)&this->field_0x58 + 1;
      UNLOCK();
      uVar16 = (ulonglong)_tls_index;
      EVar17 = AIOP_Low;
      if (this->bHighPrioIORequest != false) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          pIVar11 = IConsoleManager::Get();
          CVarAsyncLoadingPrecachePriority =
               (IConsoleVariable *)
               (**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"s.AsyncLoadingPrecachePriority",1)
          ;
          _Init_thread_footer(&::_TSS0);
        }
        pTVar4 = CVarStreamingLowResHandlingMode.Ref;
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar9 = 0;
        }
        else {
          lVar9 = 4;
        }
        if ((CVarAsyncLoadingPrecachePriority == (IConsoleVariable *)0x0) ||
           (*(int *)((longlong)pTVar4->ShadowedValue + lVar9) != 2)) {
          EVar17 = AIOP_BelowNormal;
        }
        else {
          iVar6 = (**(code **)(*(longlong *)CVarAsyncLoadingPrecachePriority + 200))();
          EVar12 = AIOP_CriticalPath;
          if ((int)(iVar6 + AIOP_Low) < 5) {
            EVar12 = iVar6 + AIOP_Low;
          }
          EVar17 = AIOP_BelowNormal;
          if (2 < (int)EVar12) {
            EVar17 = EVar12;
          }
        }
      }
      local_120 = (undefined ***)0x0;
      local_138 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSkeletalMeshStreamIn_IO::SetIORequest'::`15'::<lambda_1>,0,0>
                   ::_vftable_;
      local_148[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FSkeletalMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,void,enum_FBulkDataRequest::EStatus>
                     ::Call;
      local_130 = this;
      FBulkDataBatchRequest::FScatterGatherBuilder::Issue
                (&local_118,&this->BulkData,EVar17,
                 (TFunction<void___cdecl(FBulkDataRequest::EStatus)> *)local_148,
                 &this->BulkDataRequest);
      if (local_148[0] != (code *)0x0) {
        pppuVar13 = &local_138;
        if (local_120 != (undefined ***)0x0) {
          pppuVar13 = local_120;
        }
        (*(code *)(*pppuVar13)[2])();
      }
      if (local_118.Requests.AllocatorInstance.SecondaryData !=
          (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
        FMemory::Free((void *)local_118.Requests.AllocatorInstance.SecondaryData);
      }
      FBulkDataBatchRequest::FBuilder::~FBuilder((FBuilder *)&local_118);
      if (bVar14) {
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8);
        if (*(char *)(lVar9 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar10 = *(FWriteBuffer **)(lVar9 + 0x20);
        if ((int)pFVar10 - *(int *)&pFVar10->Cursor < 1) {
          pFVar10 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar10->Cursor = '\n';
        pFVar10->Cursor = pFVar10->Cursor + 1;
        pFVar10->Committed = pFVar10->Cursor;
      }
    }
  }
  return;
}

