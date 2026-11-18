// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// Enqueue<TTuple<FIoChunkId,int>_> @ 148cb0260

void __thiscall
TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::Enqueue<TTuple<FIoChunkId,int>_>
          (TSpscQueue<TTuple<FIoChunkId,int>,FMemory> *this,TTuple<FIoChunkId,int> *param_1)

{
  TTypeCompatibleBytes<TTuple<FIoChunkId,int>_> *pTVar1;
  uchar *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar18;
  
  aVar18 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)this->First;
  if (aVar18 == (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)this->TailCopy) {
    aVar18 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)this->First;
    this->TailCopy = (FNode *)this->Tail;
    if (aVar18 == this->Tail) {
      aVar18 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)FMemory::Malloc(0x18,8);
      pTVar1 = (TTypeCompatibleBytes<TTuple<FIoChunkId,int>_> *)((longlong)aVar18 + 8);
      pTVar1->Pad[0] = '\0';
      pTVar1->Pad[1] = '\0';
      pTVar1->Pad[2] = '\0';
      pTVar1->Pad[3] = '\0';
      pTVar1->Pad[4] = '\0';
      pTVar1->Pad[5] = '\0';
      pTVar1->Pad[6] = '\0';
      pTVar1->Pad[7] = '\0';
      puVar2 = (uchar *)((longlong)aVar18 + 0x10);
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      puVar2[4] = '\0';
      puVar2[5] = '\0';
      puVar2[6] = '\0';
      puVar2[7] = '\0';
      goto LAB_148cb02b3;
    }
  }
  this->First = *(FNode **)aVar18;
LAB_148cb02b3:
  *(undefined8 *)aVar18 = 0;
  uVar3 = param_1->field_0x1;
  uVar4 = param_1->field_0x2;
  uVar5 = param_1->field_0x3;
  uVar6 = param_1->field_0x4;
  uVar7 = param_1->field_0x5;
  uVar8 = param_1->field_0x6;
  uVar9 = param_1->field_0x7;
  uVar10 = param_1->field_0x8;
  uVar11 = param_1->field_0x9;
  uVar12 = param_1->field_0xa;
  uVar13 = param_1->field_0xb;
  uVar14 = param_1->field_0xc;
  uVar15 = param_1->field_0xd;
  uVar16 = param_1->field_0xe;
  uVar17 = param_1->field_0xf;
  pTVar1 = (TTypeCompatibleBytes<TTuple<FIoChunkId,int>_> *)((longlong)aVar18 + 8);
  pTVar1->Pad[0] = param_1->field_0x0;
  pTVar1->Pad[1] = uVar3;
  pTVar1->Pad[2] = uVar4;
  pTVar1->Pad[3] = uVar5;
  pTVar1->Pad[4] = uVar6;
  pTVar1->Pad[5] = uVar7;
  pTVar1->Pad[6] = uVar8;
  pTVar1->Pad[7] = uVar9;
  puVar2 = (uchar *)((longlong)aVar18 + 0x10);
  puVar2[0] = uVar10;
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  puVar2[4] = uVar14;
  puVar2[5] = uVar15;
  puVar2[6] = uVar16;
  puVar2[7] = uVar17;
  this->Head->Next = aVar18;
  this->Head = (FNode *)aVar18;
  LOCK();
  this->NumElems = (atomic<int>)((int)this->NumElems + 1);
  UNLOCK();
  return;
}

