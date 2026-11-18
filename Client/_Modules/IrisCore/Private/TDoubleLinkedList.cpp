// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// ~TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext> @ 1442f70b0

void __thiscall
TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::
~TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>
          (TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TDoubleLinkedList_UFHugeObjectContext_FReplicationWriter_Private_Net_UE____6B_;
  Empty(this);
  return;
}

// AddTail @ 1442fb140

bool __thiscall
TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::AddTail
          (TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext> *this,
          FHugeObjectContext *param_1)

{
  FBatchRecord *pFVar1;
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TDoubleLinkedListNode *pTVar6;
  int *piVar7;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> _Dst;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> _Src;
  
  pTVar6 = ::operator_new(0x600);
  if (pTVar6 != (TDoubleLinkedListNode *)0x0) {
    uVar3 = param_1->RootObjectInternalIndex;
    (pTVar6->Value).BatchRecord.ObjectReplicationRecords.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0;
    (pTVar6->Value).RootObjectInternalIndex = uVar3;
    iVar4 = (param_1->BatchRecord).ObjectReplicationRecords.ArrayNum;
    _Src = (param_1->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
    pFVar1 = &(pTVar6->Value).BatchRecord;
    (pTVar6->Value).BatchRecord.ObjectReplicationRecords.ArrayNum = iVar4;
    if (_Src == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
      _Src = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
             &param_1->BatchRecord;
    }
    piVar7 = &(pTVar6->Value).BatchRecord.ObjectReplicationRecords.ArrayMax;
    if (iVar4 == 0) {
      *piVar7 = 0x10;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_>
                (0x18,8,iVar4,0,
                 (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *)pFVar1,iVar4
                 ,piVar7);
      _Dst = (pTVar6->Value).BatchRecord.ObjectReplicationRecords.AllocatorInstance.SecondaryData;
      if (_Dst == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
        _Dst = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)pFVar1;
      }
      memcpy((void *)_Dst,(void *)_Src,(longlong)iVar4 * 0x18);
    }
    (pTVar6->Value).BatchRecord.BatchCount = (param_1->BatchRecord).BatchCount;
    UE::Net::Private::FNetExportContext::FBatchExports::FBatchExports
              (&(pTVar6->Value).BatchExports,&param_1->BatchExports);
    pTVar2 = &(pTVar6->Value).Blobs;
    piVar7 = &(pTVar6->Value).Blobs.ArrayMax;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar4 = (param_1->Blobs).ArrayNum;
    pFVar5 = (param_1->Blobs).AllocatorInstance.Data;
    (pTVar6->Value).Blobs.ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar7);
      ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
                ((pTVar2->AllocatorInstance).Data,(TRefCountPtr<UE::Net::FNetBlob> *)pFVar5,iVar4);
    }
    pTVar6->NextNode = (TDoubleLinkedListNode *)0x0;
    pTVar6->PrevNode = (TDoubleLinkedListNode *)0x0;
    if (this->TailNode == (TDoubleLinkedListNode *)0x0) {
      this->HeadNode = pTVar6;
    }
    else {
      this->TailNode->NextNode = pTVar6;
      pTVar6->PrevNode = this->TailNode;
    }
    this->TailNode = pTVar6;
    (**(code **)(this->_padding_ + 8))(this,this->ListSize + 1);
    return true;
  }
  return false;
}

// Empty @ 1443015f0

void __thiscall
TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::Empty
          (TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext> *this)

{
  TDoubleLinkedListNode *pTVar1;
  TDoubleLinkedListNode *this_00;
  
  this_00 = this->HeadNode;
  while (this_00 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = this_00->NextNode;
    UE::Net::Private::FReplicationWriter::FHugeObjectContext::~FHugeObjectContext(&this_00->Value);
    ::operator_delete(this_00,0x600);
    this->HeadNode = pTVar1;
    this_00 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000144301659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 1443136f0

void __thiscall
TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext>::SetListSize
          (TDoubleLinkedList<UE::Net::Private::FReplicationWriter::FHugeObjectContext> *this,
          int param_1)

{
  this->ListSize = param_1;
  return;
}

