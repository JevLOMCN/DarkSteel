// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 5

// Disconnect @ 14e663000

void __thiscall UE::Interchange::FCommandQueue::Disconnect(FCommandQueue *this,double param_1)

{
  TNode *pTVar1;
  ICommand *pIVar2;
  bool bVar3;
  TNode *pTVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  TSharedPtr<UE::Interchange::ICommand,1> local_18;
  
  while( true ) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if ((this->NetworkInterface == (FNetworkNode *)0x0) ||
       (bVar3 = FNetworkNode::ReceiveMessage(this->NetworkInterface,&local_28,param_1), !bVar3))
    goto LAB_14e6630bd;
    DeserializeCommand(&local_18,&local_28);
    pIVar2 = local_18.Object;
    if (local_18.Object == (ICommand *)0x0) break;
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 != (TNode *)0x0) {
      pTVar4->NextNode = (TNode *)0x0;
      (pTVar4->Item).Object = pIVar2;
      (pTVar4->Item).SharedReferenceCount.ReferenceController =
           local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar1 = (this->InCommands).Head;
      (this->InCommands).Head = pTVar4;
      pTVar1->NextNode = pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    param_1 = 0.0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_14e6630bd:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  this->NetworkInterface = (FNetworkNode *)0x0;
  return;
}

// GetNextCommand @ 14e6655b0

TSharedPtr<UE::Interchange::ICommand,1> * __thiscall
UE::Interchange::FCommandQueue::GetNextCommand
          (FCommandQueue *this,TSharedPtr<UE::Interchange::ICommand,1> *__return_storage_ptr__,
          double param_1)

{
  TSharedPtr<UE::Interchange::ICommand,1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  ICommand *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  bVar4 = Poll(this,param_1);
  if (bVar4) {
    do {
      bVar4 = Poll(this,0.0);
    } while (bVar4);
  }
  local_38 = (ICommand *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = ((this->InCommands).Tail)->NextNode;
  if (pTVar2 == (TNode *)0x0) {
    __return_storage_ptr__->Object = (ICommand *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar5.ReferenceController = FStack_30.ReferenceController;
  }
  else {
    pTVar1 = &pTVar2->Item;
    if ((TSharedPtr<UE::Interchange::ICommand,1> *)&local_38 != pTVar1) {
      local_38 = pTVar1->Object;
      pTVar1->Object = (ICommand *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_30,&(pTVar2->Item).SharedReferenceCount);
    }
    pTVar3 = (this->InCommands).Tail;
    (this->InCommands).Tail = pTVar2;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<UE::Interchange::ICommand,1> *)&local_28) {
      pTVar1->Object = (ICommand *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar2->Item).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    if (pTVar3 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar3->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar3,0x18);
    }
    FVar5.ReferenceController = FStack_30.ReferenceController;
    if (FStack_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = local_38;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         FStack_30.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// Poll @ 14e666630

bool __thiscall UE::Interchange::FCommandQueue::Poll(FCommandQueue *this,double param_1)

{
  TNode *pTVar1;
  bool bVar2;
  TNode *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  TSharedPtr<UE::Interchange::ICommand,1> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if (this->NetworkInterface != (FNetworkNode *)0x0) {
    bVar2 = FNetworkNode::ReceiveMessage(this->NetworkInterface,&local_28,param_1);
    if (bVar2) {
      DeserializeCommand(&local_18,&local_28);
      if (local_18.Object != (ICommand *)0x0) {
        pTVar3 = ::operator_new(0x18);
        if (pTVar3 != (TNode *)0x0) {
          pTVar3->NextNode = (TNode *)0x0;
          (pTVar3->Item).Object = local_18.Object;
          (pTVar3->Item).SharedReferenceCount.ReferenceController =
               local_18.SharedReferenceCount.ReferenceController;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pTVar1 = (this->InCommands).Head;
          (this->InCommands).Head = pTVar3;
          pTVar1->NextNode = pTVar3;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        bVar2 = true;
        goto LAB_14e6666ce;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  bVar2 = false;
LAB_14e6666ce:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar2;
}

// SendCommand @ 14e667a70

bool __thiscall
UE::Interchange::FCommandQueue::SendCommand(FCommandQueue *this,ICommand *param_1,double param_2)

{
  bool bVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_res10 = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8._padding_ = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_d8.Bytes = &local_e8;
  local_d8.ArchiveName.ComparisonIndex.Value = 0;
  local_d8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_res8[0] = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (*(undefined1 **)(local_d8._padding_ + 8) < *(undefined1 **)local_d8._padding_ + 1) {
    if (*(code **)(local_d8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,local_res8,1);
    }
    else {
      (**(code **)(local_d8._padding_ + 0x188))();
    }
  }
  else {
    local_res8[0] = **(undefined1 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 1;
  }
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_d8);
  FArchive::~FArchive((FArchive *)&local_d8);
  if (this->NetworkInterface != (FNetworkNode *)0x0) {
    bVar1 = FNetworkNode::SendMessage(this->NetworkInterface,&local_e8,param_2);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14e667ba6;
    }
  }
  bVar1 = false;
LAB_14e667ba6:
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetNetworkInterface @ 14e6681e0

void __thiscall
UE::Interchange::FCommandQueue::SetNetworkInterface(FCommandQueue *this,FNetworkNode *param_1)

{
  this->NetworkInterface = param_1;
  return;
}

