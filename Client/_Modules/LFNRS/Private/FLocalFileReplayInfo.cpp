// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 4

// ~FLocalFileReplayInfo @ 146c928f0

void __thiscall FLocalFileReplayInfo::~FLocalFileReplayInfo(FLocalFileReplayInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)(this->Events).AllocatorInstance.Data,(this->Events).ArrayNum);
  pFVar1 = (this->Events).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)(this->Checkpoints).AllocatorInstance.Data,
             (this->Checkpoints).ArrayNum);
  pFVar1 = (this->Checkpoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EncryptionKey).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 146c92a40

FLocalFileReplayInfo * __thiscall
FLocalFileReplayInfo::operator=(FLocalFileReplayInfo *this,FLocalFileReplayInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FLocalFileReplayDataInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  TArray<FLocalFileReplayDataInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  
  pFVar1 = &param_1->FriendlyName;
  this->LengthInMS = param_1->LengthInMS;
  pFVar2 = &this->FriendlyName;
  this->NetworkVersion = param_1->NetworkVersion;
  this->Changelist = param_1->Changelist;
  if (pFVar2 != pFVar1) {
    pFVar10 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FriendlyName).Data.ArrayNum = (param_1->FriendlyName).Data.ArrayNum;
    (this->FriendlyName).Data.ArrayMax = (param_1->FriendlyName).Data.ArrayMax;
    (param_1->FriendlyName).Data.ArrayNum = 0;
    (param_1->FriendlyName).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->EncryptionKey;
  (this->Timestamp).Ticks = (param_1->Timestamp).Ticks;
  pTVar4 = &this->EncryptionKey;
  this->TotalDataSizeInBytes = param_1->TotalDataSizeInBytes;
  this->bIsLive = param_1->bIsLive;
  this->bIsValid = param_1->bIsValid;
  this->bCompressed = param_1->bCompressed;
  this->bEncrypted = param_1->bEncrypted;
  if (pTVar4 != pTVar3) {
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->EncryptionKey).ArrayNum = (param_1->EncryptionKey).ArrayNum;
    (this->EncryptionKey).ArrayMax = (param_1->EncryptionKey).ArrayMax;
    (param_1->EncryptionKey).ArrayNum = 0;
    (param_1->EncryptionKey).ArrayMax = 0;
  }
  pTVar5 = &param_1->Chunks;
  pTVar6 = &this->Chunks;
  this->HeaderChunkIndex = param_1->HeaderChunkIndex;
  if (pTVar6 != pTVar5) {
    pFVar10 = (pTVar6->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Chunks).ArrayNum = (param_1->Chunks).ArrayNum;
    (this->Chunks).ArrayMax = (param_1->Chunks).ArrayMax;
    (param_1->Chunks).ArrayNum = 0;
    (param_1->Chunks).ArrayMax = 0;
  }
  pTVar7 = &param_1->Checkpoints;
  pTVar8 = &this->Checkpoints;
  if (pTVar8 != pTVar7) {
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)(pTVar8->AllocatorInstance).Data,(this->Checkpoints).ArrayNum)
    ;
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Checkpoints).ArrayNum = (param_1->Checkpoints).ArrayNum;
    (this->Checkpoints).ArrayMax = (param_1->Checkpoints).ArrayMax;
    (param_1->Checkpoints).ArrayNum = 0;
    (param_1->Checkpoints).ArrayMax = 0;
  }
  pTVar7 = &param_1->Events;
  pTVar8 = &this->Events;
  if (pTVar8 != pTVar7) {
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)(pTVar8->AllocatorInstance).Data,(this->Events).ArrayNum);
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Events).ArrayNum = (param_1->Events).ArrayNum;
    (this->Events).ArrayMax = (param_1->Events).ArrayMax;
    (param_1->Events).ArrayNum = 0;
    (param_1->Events).ArrayMax = 0;
  }
  pTVar11 = &param_1->DataChunks;
  pTVar9 = &this->DataChunks;
  if (pTVar9 != pTVar11) {
    pFVar10 = (pTVar9->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar9->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DataChunks).ArrayNum = (param_1->DataChunks).ArrayNum;
    (this->DataChunks).ArrayMax = (param_1->DataChunks).ArrayMax;
    (param_1->DataChunks).ArrayNum = 0;
    (param_1->DataChunks).ArrayMax = 0;
  }
  return this;
}

// operator= @ 146c92c20

FLocalFileReplayInfo * __thiscall
FLocalFileReplayInfo::operator=(FLocalFileReplayInfo *this,FLocalFileReplayInfo *param_1)

{
  TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FLocalFileReplayDataInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  this->LengthInMS = param_1->LengthInMS;
  this->NetworkVersion = param_1->NetworkVersion;
  this->Changelist = param_1->Changelist;
  ::FString::operator=(&this->FriendlyName,&param_1->FriendlyName);
  (this->Timestamp).Ticks = (param_1->Timestamp).Ticks;
  this->TotalDataSizeInBytes = param_1->TotalDataSizeInBytes;
  this->bIsLive = param_1->bIsLive;
  this->bIsValid = param_1->bIsValid;
  this->bCompressed = param_1->bCompressed;
  this->bEncrypted = param_1->bEncrypted;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->EncryptionKey,&param_1->EncryptionKey);
  pTVar1 = &this->Chunks;
  this->HeaderChunkIndex = param_1->HeaderChunkIndex;
  if (pTVar1 != &param_1->Chunks) {
    iVar4 = (param_1->Chunks).ArrayNum;
    piVar2 = &(this->Chunks).ArrayMax;
    pFVar5 = (param_1->Chunks).AllocatorInstance.Data;
    (this->Chunks).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
      }
    }
  }
  TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->Checkpoints,&param_1->Checkpoints);
  TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_>::operator=(&this->Events,&param_1->Events)
  ;
  pTVar3 = &this->DataChunks;
  if (pTVar3 != &param_1->DataChunks) {
    iVar4 = (param_1->DataChunks).ArrayNum;
    piVar2 = &(this->DataChunks).ArrayMax;
    pFVar5 = (param_1->DataChunks).AllocatorInstance.Data;
    (this->DataChunks).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x28);
      }
    }
  }
  return this;
}

// CountBytes @ 146ca7e60

void __thiscall FLocalFileReplayInfo::CountBytes(FLocalFileReplayInfo *this,FArchive *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->FriendlyName).Data.ArrayNum * 2,
             (longlong)(this->FriendlyName).Data.ArrayMax * 2);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->EncryptionKey).ArrayNum,
             (longlong)(this->EncryptionKey).ArrayMax);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Chunks).ArrayNum * 0x18,
             (longlong)(this->Chunks).ArrayMax * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->DataChunks).ArrayNum * 0x28,
             (longlong)(this->DataChunks).ArrayMax * 0x28);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Checkpoints).ArrayNum * 0x50,
             (longlong)(this->Checkpoints).ArrayMax * 0x50);
  iVar1 = (this->Checkpoints).ArrayNum;
  pFVar3 = (this->Checkpoints).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->Checkpoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLocalFileEventInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x10) * 2,(longlong)*(int *)(pFVar3 + 0x14) * 2);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x20) * 2,(longlong)*(int *)(pFVar3 + 0x24) * 2);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x30) * 2,(longlong)*(int *)(pFVar3 + 0x34) * 2);
    pFVar3 = pFVar3 + 0x50;
  }
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Events).ArrayNum * 0x50,
             (longlong)(this->Events).ArrayMax * 0x50);
  iVar1 = (this->Events).ArrayNum;
  pFVar3 = (this->Events).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->Events).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLocalFileEventInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x10) * 2,(longlong)*(int *)(pFVar3 + 0x14) * 2);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x20) * 2,(longlong)*(int *)(pFVar3 + 0x24) * 2);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x30) * 2,(longlong)*(int *)(pFVar3 + 0x34) * 2);
    pFVar3 = pFVar3 + 0x50;
  }
  return;
}

