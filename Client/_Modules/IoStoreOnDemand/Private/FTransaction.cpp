// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 5

// BlockAccess @ 1445b5060

void __thiscall
UE::IoStore::FCasJournal::FTransaction::BlockAccess
          (FTransaction *this,FCasBlockId param_1,long64 param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  piVar1 = &(this->Entries).ArrayMax;
  iVar4 = (this->Entries).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar4 + 1;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar4 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(param_1.Id,4);
  *(long64 *)(pFVar2 + 8) = param_2;
  *(undefined8 *)(pFVar3 + (longlong)iVar4 * 0x18 + 0x10) = 0;
  return;
}

// BlockCreated @ 1445b50e0

void __thiscall
UE::IoStore::FCasJournal::FTransaction::BlockCreated(FTransaction *this,FCasBlockId param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FDateTime FVar6;
  
  FVar6 = FDateTime::UtcNow();
  piVar1 = &(this->Entries).ArrayMax;
  uVar3 = *(undefined8 *)FVar6.Ticks;
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar4 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar5 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(param_1.Id,2);
  *(undefined8 *)(pFVar2 + 8) = uVar3;
  *(undefined8 *)(pFVar4 + (longlong)iVar5 * 0x18 + 0x10) = 0;
  return;
}

// BlockDeleted @ 1445b5170

void __thiscall
UE::IoStore::FCasJournal::FTransaction::BlockDeleted(FTransaction *this,FCasBlockId param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FDateTime FVar6;
  
  FVar6 = FDateTime::UtcNow();
  piVar1 = &(this->Entries).ArrayMax;
  uVar3 = *(undefined8 *)FVar6.Ticks;
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar4 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar5 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(param_1.Id,3);
  *(undefined8 *)(pFVar2 + 8) = uVar3;
  *(undefined8 *)(pFVar4 + (longlong)iVar5 * 0x18 + 0x10) = 0;
  return;
}

// ChunkLocation @ 1445b6d00

void __thiscall
UE::IoStore::FCasJournal::FTransaction::ChunkLocation
          (FTransaction *this,FCasLocation *param_1,THash<96> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FCasBlockId FStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FStack_24 = (*param_1).BlockId;
  uStack_20 = (*param_1).BlockOffset;
  uVar3 = *(undefined4 *)(param_2->Hash + 8);
  piVar1 = &(this->Entries).ArrayMax;
  iVar5 = (this->Entries).ArrayNum;
  uStack_1c = (undefined4)*(undefined8 *)param_2->Hash;
  uStack_18 = (undefined4)((ulonglong)*(undefined8 *)param_2->Hash >> 0x20);
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar4 = (this->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar5 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(FStack_24.Id,1);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(pFVar4 + (longlong)iVar5 * 0x18 + 0x10) = CONCAT44(uVar3,uStack_18);
  return;
}

// CriticalError @ 1445c2540

void __thiscall
UE::IoStore::FCasJournal::FTransaction::CriticalError(FTransaction *this,EErrorCode param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined4 local_res8;
  
  iVar3 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  local_res8 = CONCAT31(local_res8._1_3_,5);
  if (iVar3 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data + (longlong)iVar3 * 0x18;
  *(undefined8 *)(pFVar2 + 8) = 0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  *(ulonglong *)pFVar2 = CONCAT44(param_1,local_res8);
  return;
}

