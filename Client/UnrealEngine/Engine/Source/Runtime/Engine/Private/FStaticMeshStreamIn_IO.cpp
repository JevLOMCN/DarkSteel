// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FStaticMeshStreamIn_IO @ 14877bfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStaticMeshStreamIn_IO * __thiscall
FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO
          (FStaticMeshStreamIn_IO *this,UStaticMesh *param_1,bool param_2,EThreadType param_3)

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
  FStaticMeshStreamIn_IO *pFVar10;
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
  FStaticMeshStreamIn_IO *local_70;
  undefined ***local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  FStaticMeshStreamIn::FStaticMeshStreamIn((FStaticMeshStreamIn *)this,param_1,param_3);
  *(undefined ***)this = &___7FStaticMeshStreamIn_IO__6B_;
  this->BulkDataRequest = (FBulkDataBatchRequest)0x0;
  FIoBuffer::FIoBuffer(&this->BulkData);
  this->bHighPrioIORequest = param_2;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO'::__l2::<lambda_1>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  this->bFailedOnIOError = false;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  if (param_1 == (UStaticMesh *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,0x24,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FStaticMeshStreamIn_IO *)(*pcVar1)();
      return pFVar10;
    }
  }
  UStaticMesh::GetRenderData(param_1);
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FStaticMeshStreamIn_IO *)(*pcVar1)();
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

// ~FStaticMeshStreamIn_IO @ 14877fbb0

void __thiscall FStaticMeshStreamIn_IO::~FStaticMeshStreamIn_IO(FStaticMeshStreamIn_IO *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this = &___7FStaticMeshStreamIn_IO__6B_;
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
  FStaticMeshStreamIn::~FStaticMeshStreamIn((FStaticMeshStreamIn *)this);
  return;
}

// Abort @ 148785fc0

void __thiscall FStaticMeshStreamIn_IO::Abort(FStaticMeshStreamIn_IO *this)

{
  FQueuedThreadPool *pFVar1;
  int iVar2;
  FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *this_00;
  
  if ((this->field_0x5c == '\0') && (*(int *)&this->field_0x60 != 0)) {
    if (*(int *)&this->field_0x60 != 0) {
      this->field_0x5c = 1;
    }
    if (this->BulkDataRequest != (FBulkDataBatchRequest)0x0) {
      iVar2 = (**(code **)(*(longlong *)this->BulkDataRequest + 0x20))();
      if (iVar2 == 1) {
        this_00 = ::operator_new(0x40);
        if (this_00 == (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *)0x0) {
          this_00 = (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *)0x0;
        }
        else {
          this_00->_padding_ = 0;
          this_00->_padding_ =
               (longlong)
               &___7__FAutoDeleteAsyncTask_VFCancelIORequestsTask_FStaticMeshStreamIn_IO____6B_;
          (this_00->Task).PendingUpdate.Reference = this;
          LOCK();
          *(int *)&this->field_0x64 = *(int *)&this->field_0x64 + 1;
          UNLOCK();
        }
        pFVar1 = GThreadPool;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&this_00->_padding_);
        if (pFVar1 != (FQueuedThreadPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148786063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,this_00,3);
          return;
        }
        FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask>::DoWork(this_00);
      }
    }
  }
  return;
}

// Cancel @ 14878ae40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::Cancel(FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  FName local_res8;
  FString local_28;
  
  iVar7 = 0;
  if ((param_1->RenderData != (FStaticMeshRenderData *)0x0) &&
     (uVar6 = (ulonglong)*(int *)&this->field_0x14,
     *(int *)&this->field_0x14 < *(int *)&this->field_0x10)) {
    lVar8 = uVar6 * 8;
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < (param_1->LODResourcesView).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
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
      FStaticMeshLODResources::DiscardCPUData
                (*(FStaticMeshLODResources **)
                  (lVar8 + (longlong)(param_1->LODResourcesView).DataPtr));
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar8 = lVar8 + 8;
    } while ((int)(uVar5 + 1) < *(int *)&this->field_0x10);
  }
  if ((*(longlong *)&this->field_0x720 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StreamingRHICmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                         ,0x119,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bFailedOnIOError != false) && (param_1->Mesh != (UStaticMesh *)0x0)) {
    this_00 = IStreamingManager::Get();
    pIVar4 = FStreamingManagerCollection::GetTextureStreamingManager(this_00);
    if (0 < *(int *)&this->field_0x10) {
      do {
        pcVar1 = *(code **)(*(longlong *)pIVar4 + 0x118);
        uVar3 = UStaticMesh::GetMipIoFilenameHash(param_1->Mesh,iVar7);
        (*pcVar1)(pIVar4,uVar3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)&this->field_0x10);
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

// CancelIORequest @ 14878c1b0

void __thiscall FStaticMeshStreamIn_IO::CancelIORequest(FStaticMeshStreamIn_IO *this)

{
  int iVar1;
  
  if (this->BulkDataRequest != (FBulkDataBatchRequest)0x0) {
    iVar1 = (**(code **)(*(longlong *)this->BulkDataRequest + 0x20))();
    if ((iVar1 == 1) && (this->BulkDataRequest != (FBulkDataBatchRequest)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014878c1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->BulkDataRequest + 0x28))();
      return;
    }
  }
  return;
}

// ClearIORequest @ 14878d220

void __thiscall
FStaticMeshStreamIn_IO::ClearIORequest
          (FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

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

// DoCancelIO @ 148792b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::DoCancelIO(FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCancelIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCancelIO>
  FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  FNameEntryId FVar21;
  FName FVar22;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FStaticMeshStreamIn_IO *local_80;
  undefined ***local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StaticMeshStreamInIO_DoCancelIO ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCancelIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCancelIO>
           )0x0) {
        pFVar15 = ::FName::FName(&local_110,"STAT_StaticMeshStreamInIO_DoCancelIO");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshStreamInIO_DoCancelIO,
                   *pFVar15,L"FStaticMeshStreamIn_IO::DoCancelIO","STATGROUP_StreamingDetails",
                   "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_StaticMeshStreamInIO_DoCancelIO;
  if (StatPtr_STAT_StaticMeshStreamInIO_DoCancelIO ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCancelIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCancelIO>
       )0x0) {
    pFVar15 = ::FName::FName(local_108,"STAT_StaticMeshStreamInIO_DoCancelIO");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCancelIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCancelIO>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshStreamInIO_DoCancelIO
                          ,*pFVar15,L"FStaticMeshStreamIn_IO::DoCancelIO",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar16;
  bVar11 = false;
  bVar13 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar17 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar21.Value;
        local_138.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                   ,0x27a);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar21.Value;
      local_140.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar12 = true;
      goto LAB_148792d0f;
    }
  }
  bVar12 = false;
  FVar22 = local_130;
LAB_148792d0f:
  ClearIORequest(this,param_1);
  iVar2 = param_1->CurrentThread;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCancelIO'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  local_70 = (undefined ***)0x0;
  local_80 = this;
  local_68 = 0;
  local_40 = (longlong *)0x0;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = 0;
  local_f8 = local_68;
  uStack_d0 = (longlong *)0x0;
  if (local_68 != 0) {
    plVar19 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar19 = local_40;
    }
    (**(code **)*plVar19)(plVar19,&local_e8);
  }
  lVar9 = *(longlong *)&this->field_0x70;
  uVar10 = *(undefined8 *)&this->field_0x78;
  uVar4 = *(undefined4 *)&this->field_0x80;
  uVar5 = *(undefined4 *)&this->field_0x84;
  uVar6 = *(undefined4 *)&this->field_0x88;
  uVar7 = *(undefined4 *)&this->field_0x8c;
  uVar8 = *(undefined8 *)&this->field_0x90;
  plVar19 = *(longlong **)&this->field_0x98;
  *(longlong *)&this->field_0x70 = local_f8;
  *(undefined8 *)&this->field_0x78 = uStack_f0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x84 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_e0;
  *(undefined4 *)&this->field_0x8c = uStack_dc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
  *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
  local_e8._0_4_ = uVar4;
  local_e8._4_4_ = uVar5;
  uStack_e0 = uVar6;
  uStack_dc = uVar7;
  local_d8 = uVar8;
  uStack_d0 = plVar19;
  local_f8 = lVar9;
  uStack_f0 = uVar10;
  if (lVar9 != 0) {
    plVar18 = &local_e8;
    if (plVar19 != (longlong *)0x0) {
      plVar18 = plVar19;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar2;
  local_c8 = local_98;
  uStack_a0 = (longlong *)0x0;
  if (local_98 != (code *)0x0) {
    pppuVar20 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar20 = local_70;
    }
    (*(code *)**pppuVar20)(pppuVar20,&local_b8);
  }
  lVar9 = *(longlong *)&this->field_0xb0;
  uVar10 = *(undefined8 *)&this->field_0xb8;
  uVar4 = *(undefined4 *)&this->field_0xc0;
  uVar5 = *(undefined4 *)&this->field_0xc4;
  uVar6 = *(undefined4 *)&this->field_0xc8;
  uVar7 = *(undefined4 *)&this->field_0xcc;
  uVar8 = *(undefined8 *)&this->field_0xd0;
  plVar19 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_c8;
  *(undefined8 *)&this->field_0xb8 = uStack_c0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xc4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_b0;
  *(undefined4 *)&this->field_0xcc = uStack_ac;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
  *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
  local_c8 = (code *)lVar9;
  uStack_c0 = uVar10;
  local_b8._0_4_ = uVar4;
  local_b8._4_4_ = uVar5;
  uStack_b0 = uVar6;
  uStack_ac = uVar7;
  local_a8 = uVar8;
  uStack_a0 = plVar19;
  if (lVar9 != 0) {
    plVar18 = &local_b8;
    if (plVar19 != (longlong *)0x0) {
      plVar18 = plVar19;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_68 != 0) {
    plVar19 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar19 = local_40;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    pppuVar20 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar20 = local_70;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DoCreateBuffers @ 148793070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::DoCreateBuffers
          (FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCreateBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCreateBuffers>
  FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  FNameEntryId FVar20;
  FName FVar21;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FStaticMeshStreamIn_IO *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FStaticMeshStreamIn_IO *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StaticMeshStreamInIO_DoCreateBuffers ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCreateBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCreateBuffers>
           )0x0) {
        pFVar15 = ::FName::FName(&local_110,"STAT_StaticMeshStreamInIO_DoCreateBuffers");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshStreamInIO_DoCreateBuffers,
                   *pFVar15,L"FStaticMeshStreamIn_IO::DoCreateBuffers","STATGROUP_StreamingDetails",
                   "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_StaticMeshStreamInIO_DoCreateBuffers;
  if (StatPtr_STAT_StaticMeshStreamInIO_DoCreateBuffers ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCreateBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCreateBuffers>
       )0x0) {
    pFVar15 = ::FName::FName(local_108,"STAT_StaticMeshStreamInIO_DoCreateBuffers");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoCreateBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoCreateBuffers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshStreamInIO_DoCreateBuffers,*pFVar15,
                          L"FStaticMeshStreamIn_IO::DoCreateBuffers","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar11 = false;
  bVar13 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar17 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar20.Value;
        local_138.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                   ,0x26b);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar20.Value;
      local_140.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar12 = true;
      goto LAB_1487931ee;
    }
  }
  bVar12 = false;
  FVar21 = local_130;
LAB_1487931ee:
  FStaticMeshStreamIn::CreateBuffers((FStaticMeshStreamIn *)this,param_1);
  if (*(int *)&this->field_0x58 != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("!TaskSynchronization.GetValue()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                        ,0x26e,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  local_50 = this;
  local_70 = (undefined ***)0x0;
  local_80 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = 1;
  local_f8 = local_98;
  uStack_d0 = (longlong *)0x0;
  if (local_98 != (code *)0x0) {
    pppuVar19 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar19 = local_70;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_e8);
  }
  lVar9 = *(longlong *)&this->field_0x70;
  uVar10 = *(undefined8 *)&this->field_0x78;
  uVar3 = *(undefined4 *)&this->field_0x80;
  uVar4 = *(undefined4 *)&this->field_0x84;
  uVar5 = *(undefined4 *)&this->field_0x88;
  uVar6 = *(undefined4 *)&this->field_0x8c;
  uVar7 = *(undefined8 *)&this->field_0x90;
  plVar8 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_f8;
  *(undefined8 *)&this->field_0x78 = uStack_f0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x84 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_e0;
  *(undefined4 *)&this->field_0x8c = uStack_dc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
  *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
  local_e8._0_4_ = uVar3;
  local_e8._4_4_ = uVar4;
  uStack_e0 = uVar5;
  uStack_dc = uVar6;
  local_d8 = uVar7;
  uStack_d0 = plVar8;
  local_f8 = (code *)lVar9;
  uStack_f0 = uVar10;
  if (lVar9 != 0) {
    plVar18 = &local_e8;
    if (plVar8 != (longlong *)0x0) {
      plVar18 = plVar8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 1;
  local_c8 = local_68;
  uStack_a0 = (longlong *)0x0;
  if (local_68 != (code *)0x0) {
    pppuVar19 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar19 = local_40;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_b8);
  }
  lVar9 = *(longlong *)&this->field_0xb0;
  uVar10 = *(undefined8 *)&this->field_0xb8;
  uVar3 = *(undefined4 *)&this->field_0xc0;
  uVar4 = *(undefined4 *)&this->field_0xc4;
  uVar5 = *(undefined4 *)&this->field_0xc8;
  uVar6 = *(undefined4 *)&this->field_0xcc;
  uVar7 = *(undefined8 *)&this->field_0xd0;
  plVar8 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_c8;
  *(undefined8 *)&this->field_0xb8 = uStack_c0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xc4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_b0;
  *(undefined4 *)&this->field_0xcc = uStack_ac;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
  *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
  local_c8 = (code *)lVar9;
  uStack_c0 = uVar10;
  local_b8._0_4_ = uVar3;
  local_b8._4_4_ = uVar4;
  uStack_b0 = uVar5;
  uStack_ac = uVar6;
  local_a8 = uVar7;
  uStack_a0 = plVar8;
  if (lVar9 != 0) {
    plVar18 = &local_b8;
    if (plVar8 != (longlong *)0x0) {
      plVar18 = plVar8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    pppuVar19 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar19 = local_70;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (local_68 != (code *)0x0) {
    pppuVar19 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar19 = local_40;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DoInitiateIO @ 148793bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::DoInitiateIO(FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoInitiateIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoInitiateIO>
  FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  FNameEntryId FVar20;
  FName FVar21;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FStaticMeshStreamIn_IO *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FStaticMeshStreamIn_IO *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StaticMeshStreamInIO_DoInitiateIO ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoInitiateIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoInitiateIO>
           )0x0) {
        pFVar15 = ::FName::FName(&local_110,"STAT_StaticMeshStreamInIO_DoInitiateIO");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshStreamInIO_DoInitiateIO,
                   *pFVar15,L"FStaticMeshStreamIn_IO::DoInitiateIO","STATGROUP_StreamingDetails",
                   "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_StaticMeshStreamInIO_DoInitiateIO;
  if (StatPtr_STAT_StaticMeshStreamInIO_DoInitiateIO ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoInitiateIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoInitiateIO>
       )0x0) {
    pFVar15 = ::FName::FName(local_108,"STAT_StaticMeshStreamInIO_DoInitiateIO");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoInitiateIO(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoInitiateIO>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshStreamInIO_DoInitiateIO,*pFVar15,
                          L"FStaticMeshStreamIn_IO::DoInitiateIO","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar11 = false;
  bVar13 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar17 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar20.Value;
        local_138.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                   ,0x254);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar20.Value;
      local_140.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar12 = true;
      goto LAB_148793d2e;
    }
  }
  bVar12 = false;
  FVar21 = local_130;
LAB_148793d2e:
  if (param_1->CurrentThread != 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Async",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                        ,0x255,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SetIORequest(this,param_1);
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  local_50 = this;
  local_70 = (undefined ***)0x0;
  local_80 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = 2;
  local_f8 = local_98;
  uStack_d0 = (longlong *)0x0;
  if (local_98 != (code *)0x0) {
    pppuVar19 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar19 = local_70;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_e8);
  }
  lVar9 = *(longlong *)&this->field_0x70;
  uVar10 = *(undefined8 *)&this->field_0x78;
  uVar3 = *(undefined4 *)&this->field_0x80;
  uVar4 = *(undefined4 *)&this->field_0x84;
  uVar5 = *(undefined4 *)&this->field_0x88;
  uVar6 = *(undefined4 *)&this->field_0x8c;
  uVar7 = *(undefined8 *)&this->field_0x90;
  plVar8 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_f8;
  *(undefined8 *)&this->field_0x78 = uStack_f0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x84 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_e0;
  *(undefined4 *)&this->field_0x8c = uStack_dc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
  *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
  local_e8._0_4_ = uVar3;
  local_e8._4_4_ = uVar4;
  uStack_e0 = uVar5;
  uStack_dc = uVar6;
  local_d8 = uVar7;
  uStack_d0 = plVar8;
  local_f8 = (code *)lVar9;
  uStack_f0 = uVar10;
  if (lVar9 != 0) {
    plVar18 = &local_e8;
    if (plVar8 != (longlong *)0x0) {
      plVar18 = plVar8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 2;
  local_c8 = local_68;
  uStack_a0 = (longlong *)0x0;
  if (local_68 != (code *)0x0) {
    pppuVar19 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar19 = local_40;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_b8);
  }
  lVar9 = *(longlong *)&this->field_0xb0;
  uVar10 = *(undefined8 *)&this->field_0xb8;
  uVar3 = *(undefined4 *)&this->field_0xc0;
  uVar4 = *(undefined4 *)&this->field_0xc4;
  uVar5 = *(undefined4 *)&this->field_0xc8;
  uVar6 = *(undefined4 *)&this->field_0xcc;
  uVar7 = *(undefined8 *)&this->field_0xd0;
  plVar8 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_c8;
  *(undefined8 *)&this->field_0xb8 = uStack_c0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xc4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_b0;
  *(undefined4 *)&this->field_0xcc = uStack_ac;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
  *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
  local_c8 = (code *)lVar9;
  uStack_c0 = uVar10;
  local_b8._0_4_ = uVar3;
  local_b8._4_4_ = uVar4;
  uStack_b0 = uVar5;
  uStack_ac = uVar6;
  local_a8 = uVar7;
  uStack_a0 = plVar8;
  if (lVar9 != 0) {
    plVar18 = &local_b8;
    if (plVar8 != (longlong *)0x0) {
      plVar18 = plVar8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    pppuVar19 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar19 = local_70;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (local_68 != (code *)0x0) {
    pppuVar19 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar19 = local_40;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DoSerializeLODData @ 148794100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::DoSerializeLODData
          (FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoSerializeLODData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoSerializeLODData>
  FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  FNameEntryId FVar21;
  FName FVar22;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FStaticMeshStreamIn_IO *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FStaticMeshStreamIn_IO *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StaticMeshStreamInIO_DoSerializeLODData ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoSerializeLODData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoSerializeLODData>
           )0x0) {
        pFVar16 = ::FName::FName(&local_110,"STAT_StaticMeshStreamInIO_DoSerializeLODData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_StaticMeshStreamInIO_DoSerializeLODData,*pFVar16,
                   L"FStaticMeshStreamIn_IO::DoSerializeLODData","STATGROUP_StreamingDetails",
                   "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar17 = StatPtr_STAT_StaticMeshStreamInIO_DoSerializeLODData;
  if (StatPtr_STAT_StaticMeshStreamInIO_DoSerializeLODData ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoSerializeLODData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoSerializeLODData>
       )0x0) {
    pFVar16 = ::FName::FName(local_108,"STAT_StaticMeshStreamInIO_DoSerializeLODData");
    FVar17 = (FThreadSafeStaticStat<_protected:_void___cdecl_FStaticMeshStreamIn_IO::DoSerializeLODData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamInIO_DoSerializeLODData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshStreamInIO_DoSerializeLODData,*pFVar16,
                          L"FStaticMeshStreamIn_IO::DoSerializeLODData","STATGROUP_StreamingDetails"
                          ,"STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar12 = false;
  bVar14 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar18 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar21.Value;
        local_138.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                   ,0x25e);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar21.Value;
      local_140.s.HighPart = uVar18;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar13 = true;
      goto LAB_14879427e;
    }
  }
  bVar13 = false;
  FVar22 = local_130;
LAB_14879427e:
  if (param_1->CurrentThread != 2) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Async",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                        ,0x25f,L"");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SerializeLODData(this,param_1);
  ClearIORequest(this,param_1);
  iVar2 = param_1->CurrentThread;
  uVar3 = *(undefined4 *)&this->field_0x728;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,void,FStaticMeshUpdateContext_const_&>
             ::Call;
  local_40 = (undefined ***)0x0;
  local_50 = this;
  local_70 = (undefined ***)0x0;
  local_80 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = uVar3;
  local_f8 = local_98;
  uStack_d0 = (longlong *)0x0;
  if (local_98 != (code *)0x0) {
    pppuVar20 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar20 = local_70;
    }
    (*(code *)**pppuVar20)(pppuVar20,&local_e8);
  }
  lVar10 = *(longlong *)&this->field_0x70;
  uVar11 = *(undefined8 *)&this->field_0x78;
  uVar3 = *(undefined4 *)&this->field_0x80;
  uVar5 = *(undefined4 *)&this->field_0x84;
  uVar6 = *(undefined4 *)&this->field_0x88;
  uVar7 = *(undefined4 *)&this->field_0x8c;
  uVar8 = *(undefined8 *)&this->field_0x90;
  plVar9 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_f8;
  *(undefined8 *)&this->field_0x78 = uStack_f0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x84 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_e0;
  *(undefined4 *)&this->field_0x8c = uStack_dc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
  *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
  local_e8._0_4_ = uVar3;
  local_e8._4_4_ = uVar5;
  uStack_e0 = uVar6;
  uStack_dc = uVar7;
  local_d8 = uVar8;
  uStack_d0 = plVar9;
  local_f8 = (code *)lVar10;
  uStack_f0 = uVar11;
  if (lVar10 != 0) {
    plVar19 = &local_e8;
    if (plVar9 != (longlong *)0x0) {
      plVar19 = plVar9;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar2;
  local_c8 = local_68;
  uStack_a0 = (longlong *)0x0;
  if (local_68 != (code *)0x0) {
    pppuVar20 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar20 = local_40;
    }
    (*(code *)**pppuVar20)(pppuVar20,&local_b8);
  }
  lVar10 = *(longlong *)&this->field_0xb0;
  uVar11 = *(undefined8 *)&this->field_0xb8;
  uVar3 = *(undefined4 *)&this->field_0xc0;
  uVar5 = *(undefined4 *)&this->field_0xc4;
  uVar6 = *(undefined4 *)&this->field_0xc8;
  uVar7 = *(undefined4 *)&this->field_0xcc;
  uVar8 = *(undefined8 *)&this->field_0xd0;
  plVar9 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_c8;
  *(undefined8 *)&this->field_0xb8 = uStack_c0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xc4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_b0;
  *(undefined4 *)&this->field_0xcc = uStack_ac;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
  *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
  local_c8 = (code *)lVar10;
  uStack_c0 = uVar11;
  local_b8._0_4_ = uVar3;
  local_b8._4_4_ = uVar5;
  uStack_b0 = uVar6;
  uStack_ac = uVar7;
  local_a8 = uVar8;
  uStack_a0 = plVar9;
  if (lVar10 != 0) {
    plVar19 = &local_b8;
    if (plVar9 != (longlong *)0x0) {
      plVar19 = plVar9;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    pppuVar20 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar20 = local_70;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (local_68 != (code *)0x0) {
    pppuVar20 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar20 = local_40;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ReportIOError @ 1487bebf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::ReportIOError
          (FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  code *pcVar1;
  uint uVar2;
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar3;
  int iVar4;
  FName local_res8;
  FString local_28;
  
  if ((this->bFailedOnIOError != false) && (param_1->Mesh != (UStaticMesh *)0x0)) {
    this_00 = IStreamingManager::Get();
    pIVar3 = FStreamingManagerCollection::GetTextureStreamingManager(this_00);
    iVar4 = 0;
    if (0 < *(int *)&this->field_0x10) {
      do {
        pcVar1 = *(code **)(*(longlong *)pIVar3 + 0x118);
        uVar2 = UStaticMesh::GetMipIoFilenameHash(param_1->Mesh,iVar4);
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

// SerializeLODData @ 1487c0fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::SerializeLODData
          (FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  int *piVar1;
  uchar uVar2;
  uint uVar3;
  UStaticMesh *this_00;
  BufCore *pBVar4;
  uchar *puVar5;
  FStaticMeshLODResources *this_01;
  code *pcVar6;
  bool bVar7;
  FStaticMeshLODResources **ppFVar8;
  FOutputDeviceRedirector *pFVar9;
  FIoBuffer *pFVar10;
  undefined7 uVar12;
  char *pcVar11;
  int iVar13;
  FLLMScope local_res8 [2];
  undefined4 local_res10;
  long64 local_res18;
  TArrayView<FStaticMeshLODResources_*,int> *local_res20;
  FStaticMeshBuffersSize local_138;
  FIoBuffer *local_128;
  FIoBuffer local_120;
  FMemScope local_118;
  FString local_110;
  FArchiveState local_f8;
  undefined8 local_68;
  uchar *local_60;
  ulonglong local_58;
  undefined8 local_50;
  
  uVar12 = (undefined7)((ulonglong)param_1 >> 8);
  FLLMScope::FLLMScope(local_res8,StaticMesh,false,None,Default,true);
  pcVar11 = (char *)CONCAT71(uVar12,0x39);
  FMemScope::FMemScope(&local_118,StaticMesh,true);
  if (*(int *)&this->field_0x58 != 0) {
    pcVar11 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
    ;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TaskSynchronization.GetValue()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,0x210,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (((this->field_0x5c == '\0') && (this_00 = param_1->Mesh, this_00 != (UStaticMesh *)0x0)) &&
     (param_1->RenderData != (FStaticMeshRenderData *)0x0)) {
    pFVar10 = &this->BulkData;
    pBVar4 = (pFVar10->CorePtr).Reference;
    local_128 = pFVar10;
    if (0xffffffff < CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow)) {
      pcVar11 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
      ;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData.GetSize() >= 0 && BulkData.GetSize() <= TNumericLimits<uint32>::Max()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                         ,0x215,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pBVar4 = (pFVar10->CorePtr).Reference;
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
    local_f8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_50 = 0x7fffffffffffffff;
    uVar12 = (undefined7)((ulonglong)pcVar11 >> 8);
    local_68 = 0;
    local_60 = puVar5;
    local_58 = (ulonglong)CONCAT14(uVar2,uVar3);
    FArchiveState::SetIsLoading(&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,CONCAT71(uVar12,1));
    iVar13 = *(int *)&this->field_0x14;
    if (iVar13 < *(int *)&this->field_0x10) {
      local_res20 = &param_1->LODResourcesView;
      do {
        ppFVar8 = TArrayView<FStaticMeshLODResources_*,int>::operator[](local_res20,iVar13);
        this_01 = *ppFVar8;
        local_138.SerializedBuffersSize = 0;
        local_138.DepthOnlyIBSize = 0;
        local_138.ReversedIBsSize = 0;
        FStaticMeshLODResources::SerializeBuffers
                  (this_01,(FArchive *)&local_f8,this_00,'\0',&local_138);
        if (local_f8.ArIsError != 0) {
          if (1 < (byte)LogContentStreaming._0_1_) {
            FBulkData::GetBulkDataFlags((FBulkData *)&this_01->StreamingBulkData);
            FBulkData::GetBulkDataSize((FBulkData *)&this_01->StreamingBulkData);
            local_res18 = FBulkData::GetBulkDataOffsetInFile
                                    ((FBulkData *)&this_01->StreamingBulkData);
            MakeIoFilenameHash((FIoChunkId *)&(this_01->StreamingBulkData).field_0x18);
            local_res10 = *(undefined4 *)&this->field_0x14;
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_110,(UObject *)0x0)
            ;
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
          }
          pFVar9 = GetGlobalLogSingleton();
          FOutputDeviceRedirector::FlushThreadedLogs(pFVar9,None);
          pFVar9 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
          FOutputDeviceRedirector::Flush(pFVar9);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)&this->field_0x10);
    }
    pFVar10 = FIoBuffer::FIoBuffer(&local_120);
    FIoBuffer::operator=(local_128,pFVar10);
    if (local_120.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_120.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_120.CorePtr.Reference + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_120.CorePtr.Reference);
        ::operator_delete((void *)local_120.CorePtr.Reference,0x20);
      }
    }
    FArchive::~FArchive((FArchive *)&local_f8);
  }
  FMemScope::~FMemScope(&local_118);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetIORequest @ 1487c1fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn_IO::SetIORequest(FStaticMeshStreamIn_IO *this,FStaticMeshUpdateContext *param_1)

{
  FBulkDataBatchRequest FVar1;
  undefined8 uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  TEventRef<unsigned_int> TVar7;
  FStaticMeshLODResources **ppFVar8;
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
  FStaticMeshStreamIn_IO *local_130;
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                           ,0x1ad,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->Mesh == (UStaticMesh *)0x0) ||
       (param_1->RenderData == (FStaticMeshRenderData *)0x0)) {
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
          ppFVar8 = TArrayView<FStaticMeshLODResources_*,int>::operator[]
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
                   TFunction_OwnedObject<`FStaticMeshStreamIn_IO::SetIORequest'::`15'::<lambda_1>,0,0>
                   ::_vftable_;
      local_148[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FStaticMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,void,enum_FBulkDataRequest::EStatus>
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

