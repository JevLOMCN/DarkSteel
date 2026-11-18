// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 1

// ConstructAndHoldImpl<TSharedRef<IMessageContext,1>_const_&,TSharedRef<FTcpSerializedMessage,1>_&,TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_>_&> @ 14eac6bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FTcpSerializeMessageTask> * __thiscall
TGraphTask<FTcpSerializeMessageTask>::FConstructor::
ConstructAndHoldImpl<TSharedRef<IMessageContext,1>_const_&,TSharedRef<FTcpSerializedMessage,1>_&,TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_>_&>
          (FConstructor *this,TSharedRef<IMessageContext,1> *param_1,
          TSharedRef<FTcpSerializedMessage,1> *param_2,
          TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  FMutex *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FTcpSerializedMessage *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  IMessageContext *pIVar10;
  TSharedPtr<FTcpMessageTransportConnection,1> *pTVar11;
  TGraphTask<FTcpSerializeMessageTask> *this_00;
  atomic<unsigned___int64> aVar12;
  TGraphTask<FTcpSerializeMessageTask> *this_01;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x108,8);
  this_01 = (TGraphTask<FTcpSerializeMessageTask> *)0x0;
  if (this_00 != (TGraphTask<FTcpSerializeMessageTask> *)0x0) {
    pTVar6 = this->Prerequisites;
    this_00->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    *(atomic<unsigned_int> *)&this_00->_padding_ = (atomic<unsigned_int>)0x1;
    ((atomic<unsigned_int> *)&this_00->_padding_)[1] = (atomic<unsigned_int>)0x1;
    ((TEventCount<unsigned_int> *)&this_00->_padding_)->Count = (atomic<unsigned_int>)0x0;
    *(atomic<bool> *)((longlong)((TEventCount<unsigned_int> *)&this_00->_padding_ + 1) + 1) =
         (atomic<bool>)0x0;
    *(atomic<unsigned_int> *)&this_00->_padding_ = (atomic<unsigned_int>)0xffffffff;
    this_00->_padding_ = 0;
    aVar12 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    *(atomic<unsigned___int64> *)&this_00->_padding_ = aVar12;
    *(ForElementType<UE::Tasks::Private::FTaskBase_*> *)&this_00->_padding_ =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    *(int *)&this_00->_padding_ = 0;
    *(int *)((longlong)&this_00->_padding_ + 4) = 1;
    ((FMutex *)&this_00->_padding_)->State = (atomic<unsigned_char>)0x1;
    this_00->_padding_ =
         (longlong)
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    this_00->_padding_ = -0x17ffffffffffffe0;
    this_00->_padding_ = 0;
    *(ForElementType<UE::Tasks::Private::FTaskBase_*> *)&this_00->_padding_ =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    *(int *)&this_00->_padding_ = 0;
    *(int *)((longlong)&this_00->_padding_ + 4) = 1;
    *(undefined2 *)&this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
    if (pTVar6 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                ((FTaskBase *)this_00,pTVar6,false);
    }
    LOCK();
    pFVar1 = (FMutex *)&this_00->_padding_;
    aVar4 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)&this_00->_padding_);
    }
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFTcpSerializeMessageTask____6B_;
    this_01 = this_00;
  }
  pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar8 = param_2->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar10 = param_1->Object;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    *(IMessageContext **)(this_01->TaskStorage).Pad = pIVar10;
    (this_01->TaskStorage).Pad[8] = '\0';
    (this_01->TaskStorage).Pad[9] = '\0';
    (this_01->TaskStorage).Pad[10] = '\0';
    (this_01->TaskStorage).Pad[0xb] = '\0';
    (this_01->TaskStorage).Pad[0xc] = '\0';
    (this_01->TaskStorage).Pad[0xd] = '\0';
    (this_01->TaskStorage).Pad[0xe] = '\0';
    (this_01->TaskStorage).Pad[0xf] = '\0';
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    *(IMessageContext **)(this_01->TaskStorage).Pad = pIVar10;
    *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 8) = pTVar9;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FTcpSerializedMessage **)((this_01->TaskStorage).Pad + 0x10) = pFVar8;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x18) = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar3 = (this_01->TaskStorage).Pad + 0x20;
  *(FScriptContainerElement **)puVar3 = (FScriptContainerElement *)0x0;
  puVar2 = (this_01->TaskStorage).Pad + 0x2c;
  iVar5 = param_3->ArrayNum;
  pTVar11 = (TSharedPtr<FTcpMessageTransportConnection,1> *)(param_3->AllocatorInstance).Data;
  *(int *)((this_01->TaskStorage).Pad + 0x28) = iVar5;
  if (iVar5 == 0) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,(ForAnyElementType *)puVar3,iVar5,(int *)puVar2);
    ConstructItems<TSharedPtr<FTcpMessageTransportConnection,1>,TSharedPtr<FTcpMessageTransportConnection,1>,int>
              (*(FScriptContainerElement **)puVar3,pTVar11,iVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)this_01,L"GraphTask",local_res18[0],local_res10[0],None);
  return this_01;
}

