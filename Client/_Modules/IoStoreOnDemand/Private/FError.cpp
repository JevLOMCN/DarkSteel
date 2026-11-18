// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 6

// GetErrorContext<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> @ 14459b240

FCasErrorContext * __thiscall
UE::UnifiedError::FError::GetErrorContext<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
          (FError *this)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  FCasErrorContext *pFVar6;
  IErrorDetails *pIVar7;
  IErrorDetails *pIVar8;
  longlong lVar9;
  FCasErrorContext *pFVar10;
  longlong *local_res8;
  undefined8 local_18 [2];
  
  pIVar7 = (this->ErrorDetails).Reference;
  if (pIVar7 == (IErrorDetails *)0x0) {
    return (FCasErrorContext *)0x0;
  }
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_res8);
  while( true ) {
    lVar9 = 0x1505;
    pcVar5 = "TErrorDetails<IoStoreOnDemand::FCasErrorContext>";
    cVar2 = 'T';
    do {
      pcVar5 = pcVar5 + 1;
      lVar9 = lVar9 * 0x21 + (longlong)cVar2;
      cVar2 = *pcVar5;
    } while (cVar2 != '\0');
    lVar3 = (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7);
    if (lVar3 == lVar9) break;
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,&local_res8);
    pIVar8 = pIVar7;
    if (local_18 != puVar4) {
      pIVar8 = (IErrorDetails *)*puVar4;
      *puVar4 = 0;
      if (pIVar7 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
    pIVar7 = pIVar8;
    if (pIVar8 == (IErrorDetails *)0x0) {
      return (FCasErrorContext *)0x0;
    }
  }
  if (pIVar7 == (IErrorDetails *)0x0) {
    return (FCasErrorContext *)0x0;
  }
  LOCK();
  *(int *)(pIVar7 + 2) = *(int *)(pIVar7 + 2) + 1;
  UNLOCK();
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  pFVar10 = (FCasErrorContext *)(pIVar7 + 4);
  if (pIVar7 == (IErrorDetails *)0x0) {
    pFVar10 = (FCasErrorContext *)0x0;
  }
  pIVar8 = pIVar7 + 2;
  LOCK();
  iVar1 = *(int *)pIVar8;
  *(int *)pIVar8 = *(int *)pIVar8 + -1;
  UNLOCK();
  if (iVar1 != 1) {
    return pFVar10;
  }
  pFVar6 = (FCasErrorContext *)(pIVar7 + 1);
  if (pIVar8 == (IErrorDetails *)0x0) {
    pFVar6 = (FCasErrorContext *)0x0;
  }
  if (pFVar6 == (FCasErrorContext *)0x0) {
    return pFVar10;
  }
  (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
  return pFVar10;
}

// GetErrorContext<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> @ 14459b390

FChunkHashMismatchErrorContext * __thiscall
UE::UnifiedError::FError::
GetErrorContext<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>(FError *this)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  FChunkHashMismatchErrorContext *pFVar6;
  IErrorDetails *pIVar7;
  IErrorDetails *pIVar8;
  longlong lVar9;
  FChunkHashMismatchErrorContext *pFVar10;
  longlong *local_res8;
  undefined8 local_18 [2];
  
  pIVar7 = (this->ErrorDetails).Reference;
  if (pIVar7 == (IErrorDetails *)0x0) {
    return (FChunkHashMismatchErrorContext *)0x0;
  }
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_res8);
  while( true ) {
    lVar9 = 0x1505;
    pcVar5 = "TErrorDetails<IoStoreOnDemand::FChunkHashMismatchErrorContext>";
    cVar2 = 'T';
    do {
      pcVar5 = pcVar5 + 1;
      lVar9 = lVar9 * 0x21 + (longlong)cVar2;
      cVar2 = *pcVar5;
    } while (cVar2 != '\0');
    lVar3 = (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7);
    if (lVar3 == lVar9) break;
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,&local_res8);
    pIVar8 = pIVar7;
    if (local_18 != puVar4) {
      pIVar8 = (IErrorDetails *)*puVar4;
      *puVar4 = 0;
      if (pIVar7 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
    pIVar7 = pIVar8;
    if (pIVar8 == (IErrorDetails *)0x0) {
      return (FChunkHashMismatchErrorContext *)0x0;
    }
  }
  if (pIVar7 == (IErrorDetails *)0x0) {
    return (FChunkHashMismatchErrorContext *)0x0;
  }
  LOCK();
  *(int *)(pIVar7 + 2) = *(int *)(pIVar7 + 2) + 1;
  UNLOCK();
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  pFVar10 = (FChunkHashMismatchErrorContext *)(pIVar7 + 4);
  if (pIVar7 == (IErrorDetails *)0x0) {
    pFVar10 = (FChunkHashMismatchErrorContext *)0x0;
  }
  pIVar8 = pIVar7 + 2;
  LOCK();
  iVar1 = *(int *)pIVar8;
  *(int *)pIVar8 = *(int *)pIVar8 + -1;
  UNLOCK();
  if (iVar1 != 1) {
    return pFVar10;
  }
  pFVar6 = (FChunkHashMismatchErrorContext *)(pIVar7 + 1);
  if (pIVar8 == (IErrorDetails *)0x0) {
    pFVar6 = (FChunkHashMismatchErrorContext *)0x0;
  }
  if (pFVar6 == (FChunkHashMismatchErrorContext *)0x0) {
    return pFVar10;
  }
  (*(code *)**(undefined8 **)(pFVar6->ChunkId).Id)(pFVar6,1);
  return pFVar10;
}

// PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> @ 14459f520

void __thiscall
UE::UnifiedError::FError::PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
          (FError *this,FCasErrorContext *param_1,EDetailFilter *param_2)

{
  longlong *plVar1;
  EDetailFilter EVar2;
  FDynamicErrorDetails *this_00;
  FString *pFVar3;
  undefined8 local_res20;
  FDynamicErrorDetails *local_28 [2];
  
  this_00 = ::operator_new(0x48);
  if (this_00 == (FDynamicErrorDetails *)0x0) {
    local_28[0] = (FDynamicErrorDetails *)0x0;
  }
  else {
    EVar2 = *param_2;
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(this_00,(IErrorDetails *)&local_res20);
    plVar1 = &this_00[1]._padding_;
    this_00->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = 1;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    *plVar1 = 0;
    this_00[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    *(undefined1 *)&this_00[2]._padding_ = 5;
    this_00->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
          _vftable__for__FRefCountBase__;
    *(ECasErrorCode *)&this_00[1]._padding_ = param_1->ErrorCode;
    *(EIoErrorCode *)((longlong)&this_00[1]._padding_ + 4) = param_1->IoErrorCode;
    pFVar3 = &param_1->ErrorMessage;
    *(uint *)&this_00[1]._padding_ = param_1->SystemErrorCode;
    if ((FString *)plVar1 != pFVar3) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)(pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this_00[1].InnerErrorDetails.Reference = (param_1->ErrorMessage).Data.ArrayNum;
      *(int *)((longlong)&this_00[1].InnerErrorDetails.Reference + 4) =
           (param_1->ErrorMessage).Data.ArrayMax;
      (param_1->ErrorMessage).Data.ArrayNum = 0;
      (param_1->ErrorMessage).Data.ArrayMax = 0;
    }
    *(EDetailFilter *)&this_00[2]._padding_ = EVar2;
    local_28[0] = this_00;
    (**(code **)(this_00->_padding_ + 8))(this_00,&local_res20);
  }
  PushErrorDetails(this,(IErrorDetails *)local_28);
  return;
}

// PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> @ 14459f630

void __thiscall
UE::UnifiedError::FError::
PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>
          (FError *this,FChunkHashMismatchErrorContext *param_1,EDetailFilter *param_2)

{
  EDetailFilter EVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_res20;
  FDynamicErrorDetails *local_18 [2];
  
  local_18[0] = ::operator_new(0x58);
  if (local_18[0] == (FDynamicErrorDetails *)0x0) {
    local_18[0] = (FDynamicErrorDetails *)0x0;
  }
  else {
    EVar1 = *param_2;
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(local_18[0],(IErrorDetails *)&local_res20);
    local_18[0]->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    local_18[0]->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
          _vftable__for__FRefCountBase__;
    *(undefined8 *)((longlong)&local_18[0][1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&local_18[0][1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&local_18[0][1].InnerErrorDetails.Reference + 4) = 0;
    local_18[0][2]._padding_ = 0;
    local_18[0][2]._padding_ = 0;
    *(undefined4 *)&local_18[0][2]._padding_ = 0;
    *(undefined1 *)((longlong)&local_18[0][2]._padding_ + 4) = 5;
    lVar5 = *(longlong *)((param_1->ChunkId).Id + 8);
    local_18[0][1]._padding_ = *(longlong *)(param_1->ChunkId).Id;
    local_18[0][1]._padding_ = lVar5;
    uVar2 = *(undefined4 *)((param_1->ExpectedHash).Hash + 8);
    uVar3 = *(undefined4 *)((param_1->ExpectedHash).Hash + 0xc);
    uVar4 = *(undefined4 *)((param_1->ExpectedHash).Hash + 0x10);
    *(undefined4 *)&local_18[0][1]._padding_ = *(undefined4 *)((param_1->ExpectedHash).Hash + 4);
    *(undefined4 *)((longlong)&local_18[0][1]._padding_ + 4) = uVar2;
    *(undefined4 *)&local_18[0][1].InnerErrorDetails.Reference = uVar3;
    *(undefined4 *)((longlong)&local_18[0][1].InnerErrorDetails.Reference + 4) = uVar4;
    uVar2 = *(undefined4 *)((param_1->ActualHash).Hash + 4);
    uVar3 = *(undefined4 *)((param_1->ActualHash).Hash + 8);
    uVar4 = *(undefined4 *)((param_1->ActualHash).Hash + 0xc);
    *(undefined4 *)&local_18[0][2]._padding_ = *(undefined4 *)(param_1->ActualHash).Hash;
    *(undefined4 *)((longlong)&local_18[0][2]._padding_ + 4) = uVar2;
    *(undefined4 *)&local_18[0][2]._padding_ = uVar3;
    *(undefined4 *)((longlong)&local_18[0][2]._padding_ + 4) = uVar4;
    *(undefined4 *)&local_18[0][2]._padding_ = *(undefined4 *)((param_1->ActualHash).Hash + 0x10);
    *(EDetailFilter *)((longlong)&local_18[0][2]._padding_ + 4) = EVar1;
    (**(code **)(local_18[0]->_padding_ + 8))(local_18[0],&local_res20);
  }
  PushErrorDetails(this,(IErrorDetails *)local_18);
  return;
}

// PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> @ 14459f710

void __thiscall
UE::UnifiedError::FError::
PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
          (FError *this,FInstallCacheErrorContext *param_1,EDetailFilter *param_2)

{
  EDetailFilter EVar1;
  undefined8 local_res20;
  FDynamicErrorDetails *local_28 [2];
  
  local_28[0] = ::operator_new(0x60);
  if (local_28[0] == (FDynamicErrorDetails *)0x0) {
    local_28[0] = (FDynamicErrorDetails *)0x0;
  }
  else {
    EVar1 = *param_2;
    local_res20 = 0;
    FDynamicErrorDetails::FDynamicErrorDetails(local_28[0],(IErrorDetails *)&local_res20);
    local_28[0]->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
          _vftable__for__UE__UnifiedError__IErrorDetails__;
    local_28[0]->_padding_ =
         (longlong)
         &TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
          _vftable__for__FRefCountBase__;
    FIoStatus::FIoStatus((FIoStatus *)(local_28[0] + 1),Unknown);
    local_28[0][1]._padding_ = 0;
    local_28[0][1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    local_28[0][2]._padding_ = 0;
    local_28[0][2]._padding_ = 0;
    *(undefined4 *)&local_28[0][2]._padding_ = 0xab;
    *(undefined1 *)((longlong)&local_28[0][2]._padding_ + 4) = 0;
    *(undefined1 *)&local_28[0][2].InnerErrorDetails.Reference = 5;
    FIoStatus::operator=((FIoStatus *)(local_28[0] + 1),&param_1->IoError);
    local_28[0][1]._padding_ = param_1->MaxCacheSize;
    local_28[0][1].InnerErrorDetails.Reference = (IErrorDetails *)param_1->CacheSize;
    local_28[0][2]._padding_ = param_1->DiskTotalBytes;
    local_28[0][2]._padding_ = param_1->DiskFreeBytes;
    *(uint *)&local_28[0][2]._padding_ = param_1->LineNo;
    *(bool *)((longlong)&local_28[0][2]._padding_ + 4) = param_1->bDiskQuerySucceeded;
    *(EDetailFilter *)&local_28[0][2].InnerErrorDetails.Reference = EVar1;
    (**(code **)(local_28[0]->_padding_ + 8))(local_28[0],&local_res20);
  }
  PushErrorDetails(this,(IErrorDetails *)local_28);
  return;
}

// ~FError @ 1445a8450

void __thiscall UE::UnifiedError::FError::~FError(FError *this)

{
  IErrorDetails *pIVar1;
  
  this->ErrorCode = 0;
  this->ModuleId = 0;
  pIVar1 = (this->ErrorDetails).Reference;
  if (pIVar1 != (IErrorDetails *)0x0) {
    (this->ErrorDetails).Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ErrorDetails).Reference;
  if (pIVar1 != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445a8482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

