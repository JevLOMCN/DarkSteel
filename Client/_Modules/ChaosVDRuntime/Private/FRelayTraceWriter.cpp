// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 12

// FRelayTraceWriter @ 1436d5400

FRelayTraceWriter * __thiscall
Chaos::VD::FRelayTraceWriter::FRelayTraceWriter(FRelayTraceWriter *this)

{
  atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
  aVar1;
  
  *(undefined8 *)&this->NewDataAvailableDelegate = 0;
  *(undefined8 *)&(this->NewDataAvailableDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NewDataAvailableDelegate).field_0x10 = 0;
  (this->PendingBunchesToRelay).Tail =
       (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
        )0x0;
  (this->PendingBunchesToRelay).NumElems = (atomic<int>)0x0;
  aVar1 = (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
           )FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar1 = 0;
  (this->PendingBunchesToRelay).Tail = aVar1;
  (this->PendingBunchesToRelay).TailCopy = (FNode *)aVar1;
  (this->PendingBunchesToRelay).First = (FNode *)aVar1;
  (this->PendingBunchesToRelay).Head = (FNode *)aVar1;
  LOCK();
  (this->PendingBunchesToRelay).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->CurrentPendingBunch).Ptr = (FBufferArchive *)0x0;
  this->PendingBunchesCount = (atomic<int>)0x0;
  this->bClosed = (atomic<bool>)0x0;
  this->MaxPendingBytesPerBunch = 0;
  this->QueuedBytesNum = (atomic<__int64>)0x0;
  return this;
}

// ~FRelayTraceWriter @ 1436d5af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::VD::FRelayTraceWriter::~FRelayTraceWriter(FRelayTraceWriter *this)

{
  FBufferArchive *pFVar1;
  void *pvVar2;
  
  if ((0 < (longlong)this->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
  }
  LOCK();
  this->bClosed = (atomic<bool>)0x1;
  UNLOCK();
  pFVar1 = (this->CurrentPendingBunch).Ptr;
  if (pFVar1 != (FBufferArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::
  ~TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>
            (&this->PendingBunchesToRelay);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  pvVar2 = *(void **)&(this->NewDataAvailableDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// Close @ 1436d7b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::VD::FRelayTraceWriter::Close(FRelayTraceWriter *this)

{
  if ((0 < (longlong)this->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
  }
  LOCK();
  this->bClosed = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// CloseHelper @ 1436d7b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::VD::FRelayTraceWriter::CloseHelper(ulong64 param_1)

{
  if (param_1 != 0) {
    if ((0 < *(longlong *)(param_1 + 0x58)) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
    }
    LOCK();
    *(undefined1 *)(param_1 + 0x4c) = 1;
    UNLOCK();
  }
  return;
}

// CreateBunch @ 1436d7be0

TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_> __thiscall
Chaos::VD::FRelayTraceWriter::CreateBunch(FRelayTraceWriter *this)

{
  FBufferArchive *pFVar1;
  FBufferArchive *in_RDX;
  
  pFVar1 = ::operator_new(0xb8);
  if (pFVar1 != (FBufferArchive *)0x0) {
    pFVar1 = FBufferArchive::FBufferArchive(pFVar1);
    *(FBufferArchive **)in_RDX = pFVar1;
    return (TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>)in_RDX;
}

// DequeuePendingBunch @ 1436d8270

TOptional<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>_> * __thiscall
Chaos::VD::FRelayTraceWriter::DequeuePendingBunch
          (FRelayTraceWriter *this,
          TOptional<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>_>
          *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  longlong lVar2;
  atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
  aVar3;
  FBufferArchive *pFVar4;
  int iVar5;
  longlong *plVar6;
  
  if (this->PendingBunchesCount == (atomic<int>)0x0) goto LAB_1436d82cc;
  if (this->PendingBunchesCount == (atomic<int>)0x0) {
LAB_1436d82ae:
    iVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(this->PendingBunchesToRelay).Tail;
    plVar6 = (longlong *)0x0;
    if (lVar2 != 0) {
      plVar6 = (longlong *)(lVar2 + 8);
    }
    if ((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) goto LAB_1436d82ae;
    iVar5 = *(int *)(*plVar6 + 0xb0);
  }
  LOCK();
  this->QueuedBytesNum = (atomic<__int64>)((longlong)this->QueuedBytesNum - (longlong)iVar5);
  UNLOCK();
  LOCK();
  this->PendingBunchesCount = (atomic<int>)((int)this->PendingBunchesCount + -1);
  UNLOCK();
  aVar3 = *(atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
            *)(this->PendingBunchesToRelay).Tail;
  if (aVar3 != (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
                )0x0) {
    pFVar4 = *(FBufferArchive **)((longlong)aVar3 + 8);
    *(undefined8 *)((longlong)aVar3 + 8) = 0;
    (this->PendingBunchesToRelay).Tail = aVar3;
    LOCK();
    paVar1 = &(this->PendingBunchesToRelay).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).Ptr = pFVar4;
    return __return_storage_ptr__;
  }
LAB_1436d82cc:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetQueuedBytesNum @ 1436d97b0

long64 __thiscall Chaos::VD::FRelayTraceWriter::GetQueuedBytesNum(FRelayTraceWriter *this)

{
  return (long64)this->QueuedBytesNum;
}

// NextPendingBunchSize @ 1436d9e90

int __thiscall Chaos::VD::FRelayTraceWriter::NextPendingBunchSize(FRelayTraceWriter *this)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (this->PendingBunchesCount != (atomic<int>)0x0) {
    lVar1 = *(longlong *)(this->PendingBunchesToRelay).Tail;
    plVar2 = (longlong *)0x0;
    if (lVar1 != 0) {
      plVar2 = (longlong *)(lVar1 + 8);
    }
    if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
      return *(int *)(*plVar2 + 0xb0);
    }
  }
  return 0;
}

// SetMaxBytesPerBunch @ 1436e0980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::VD::FRelayTraceWriter::SetMaxBytesPerBunch(FRelayTraceWriter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    if (1 < (byte)LogChaosVDRuntime._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
      return;
    }
  }
  else if ((param_1 == this->MaxPendingBytesPerBunch) ||
          ((this->PendingBunchesToRelay).NumElems == (atomic<int>)0x0)) {
    this->MaxPendingBytesPerBunch = param_1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2956740329350365215>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\Trace\\RelayTraceWriter.cpp"
                       ,0x1f,"PendingBunchesToRelay.IsEmpty()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// WriteHelper @ 1436e2390

bool __cdecl Chaos::VD::FRelayTraceWriter::WriteHelper(ulong64 param_1,void *param_2,uint param_3)

{
  bool bVar1;
  
  if (param_1 == 0) {
    return false;
  }
  bVar1 = Write_Internal((FRelayTraceWriter *)param_1,param_2,param_3);
  return bVar1;
}

// Write_Internal @ 1436e23b0

bool __thiscall
Chaos::VD::FRelayTraceWriter::Write_Internal(FRelayTraceWriter *this,void *param_1,uint param_2)

{
  TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_> *pTVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
  aVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FBufferArchive *pFVar9;
  FBufferArchive *pFVar10;
  atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
  aVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint local_res8 [2];
  uint local_res18 [4];
  longlong local_68;
  longlong local_60;
  uint *local_58;
  uint *local_50;
  FReadAccessScope local_48;
  
  if (this->bClosed == (atomic<bool>)0x0) {
    local_res18[0] = param_2;
    if (this->MaxPendingBytesPerBunch != 0) {
      pTVar1 = &this->CurrentPendingBunch;
      if (pTVar1->Ptr == (FBufferArchive *)0x0) {
        pFVar9 = ::operator_new(0xb8);
        pFVar10 = (FBufferArchive *)0x0;
        if (pFVar9 != (FBufferArchive *)0x0) {
          pFVar10 = FBufferArchive::FBufferArchive(pFVar9);
        }
        param_2 = local_res18[0];
        if (pTVar1 == (TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_> *)&local_68) {
          if (pFVar10 == (FBufferArchive *)0x0) goto joined_r0x0001436e247d;
          puVar12 = *(undefined8 **)pFVar10;
        }
        else {
          pFVar9 = pTVar1->Ptr;
          pTVar1->Ptr = pFVar10;
          if (pFVar9 == (FBufferArchive *)0x0) goto joined_r0x0001436e247d;
          puVar12 = *(undefined8 **)pFVar9;
          pFVar10 = pFVar9;
        }
        (*(code *)*puVar12)(pFVar10,1);
        param_2 = local_res18[0];
      }
joined_r0x0001436e247d:
      do {
        if (param_2 == 0) {
          return (bool)((byte)~pTVar1->Ptr->field_0x29 >> 1 & 1);
        }
        iVar3 = *(int *)&pTVar1->Ptr->field_0xb0;
        uVar13 = this->MaxPendingBytesPerBunch - iVar3;
        if ((int)uVar13 < 1) {
          LOCK();
          this->QueuedBytesNum = (atomic<__int64>)((longlong)this->QueuedBytesNum + (longlong)iVar3)
          ;
          UNLOCK();
          aVar11 = (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
                    )(this->PendingBunchesToRelay).First;
          if (aVar11 == (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
                         )(this->PendingBunchesToRelay).TailCopy) {
            aVar4 = (this->PendingBunchesToRelay).Tail;
            aVar11 = (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
                      )(this->PendingBunchesToRelay).First;
            (this->PendingBunchesToRelay).TailCopy = (FNode *)aVar4;
            if (aVar11 == aVar4) {
              aVar11 = (atomic<TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::FNode_*>
                        )FMemory::Malloc(0x10,8);
              *(undefined8 *)
               ((TTypeCompatibleBytes<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>_> *
                )((longlong)aVar11 + 8))->Pad = 0;
              *(undefined8 *)aVar11 = 0;
            }
            else {
              (this->PendingBunchesToRelay).First = *(FNode **)aVar11;
              *(undefined8 *)aVar11 = 0;
            }
          }
          else {
            (this->PendingBunchesToRelay).First = *(FNode **)aVar11;
            *(undefined8 *)aVar11 = 0;
          }
          *(FBufferArchive **)
           ((TTypeCompatibleBytes<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>_> *)
           ((longlong)aVar11 + 8))->Pad = pTVar1->Ptr;
          pTVar1->Ptr = (FBufferArchive *)0x0;
          ((this->PendingBunchesToRelay).Head)->Next = aVar11;
          (this->PendingBunchesToRelay).Head = (FNode *)aVar11;
          LOCK();
          paVar2 = &(this->PendingBunchesToRelay).NumElems;
          *paVar2 = (atomic<int>)((int)*paVar2 + 1);
          UNLOCK();
          LOCK();
          this->PendingBunchesCount = (atomic<int>)((int)this->PendingBunchesCount + 1);
          UNLOCK();
          pFVar9 = ::operator_new(0xb8);
          pFVar10 = (FBufferArchive *)0x0;
          if (pFVar9 != (FBufferArchive *)0x0) {
            pFVar10 = FBufferArchive::FBufferArchive(pFVar9);
          }
          if (pTVar1 == (TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_> *)&local_60) {
            if (pFVar10 != (FBufferArchive *)0x0) {
              puVar12 = *(undefined8 **)pFVar10;
              goto LAB_1436e2560;
            }
          }
          else {
            pFVar9 = pTVar1->Ptr;
            pTVar1->Ptr = pFVar10;
            if (pFVar9 != (FBufferArchive *)0x0) {
              puVar12 = *(undefined8 **)pFVar9;
              pFVar10 = pFVar9;
LAB_1436e2560:
              (*(code *)*puVar12)(pFVar10,1);
            }
          }
          uVar13 = this->MaxPendingBytesPerBunch;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_48);
          if ((*(int *)&(this->NewDataAvailableDelegate).field_0x10 != 0) &&
             (plVar5 = *(longlong **)&(this->NewDataAvailableDelegate).field_0x8,
             plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_48);
        }
        if (param_2 < uVar13) {
          uVar13 = param_2;
        }
        local_res8[0] = local_res18[0] - param_2;
        if (((int)local_res8[0] < 0) || (local_res18[0] <= local_res8[0])) {
          local_58 = local_res8;
          local_50 = local_res18;
          bVar7 = `Chaos::VD::FRelayTraceWriter::Write_Internal'::__l17::<lambda_1>::operator()
                            (&local_58);
          if (!bVar7) {
            return false;
          }
        }
        (**(code **)(*(longlong *)pTVar1->Ptr + 0x188))
                  (pTVar1->Ptr,(longlong)(int)local_res8[0] + (longlong)param_1,uVar13);
        if ((pTVar1->Ptr->field_0x29 & 2) != 0) {
          return false;
        }
        param_2 = param_2 - uVar13;
      } while( true );
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2956740329350365269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\Trace\\RelayTraceWriter.cpp"
                       ,0x55,"bHasValidLimits");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  return false;
}

// operator() @ 1504a13a0

bool __thiscall
`Chaos::VD::FRelayTraceWriter::Write_Internal'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2956740329350365302>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2956740329350365302>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

