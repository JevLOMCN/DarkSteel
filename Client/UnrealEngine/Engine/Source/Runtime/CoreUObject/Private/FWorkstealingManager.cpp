// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// TrySteal @ 142091f70

FWorkBlock * __thiscall
UE::GC::FWorkstealingManager::TrySteal(FWorkstealingManager *this,int param_1)

{
  atomic<unsigned_int> *paVar1;
  AlignedAtomicUint64 *pAVar2;
  atomic<unsigned_int> aVar3;
  FWorkBlock *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  FWorkstealingQueue *pFVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = 0;
  lVar6 = (longlong)(param_1 + 1);
  if (lVar6 < 0x10) {
    pFVar7 = this->Queues + lVar6;
    do {
      aVar3 = (pFVar7->SharedBlocks).Tail;
      uVar5 = (ulonglong)((uint)aVar3 & 0xf);
      pFVar4 = *(FWorkBlock **)((pFVar7->SharedBlocks).Slots + uVar5);
      while (pFVar4 != (FWorkBlock *)0x0) {
        if (pFVar4 != (FWorkBlock *)&DAT_00000001) {
          pAVar2 = (pFVar7->SharedBlocks).Slots + uVar5;
          LOCK();
          bVar9 = pFVar4 == *(FWorkBlock **)pAVar2;
          if (bVar9) {
            *(undefined8 *)pAVar2 = 1;
          }
          UNLOCK();
          if (bVar9) {
            if (aVar3 == (pFVar7->SharedBlocks).Tail) {
              LOCK();
              paVar1 = &(pFVar7->SharedBlocks).Tail;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
              UNLOCK();
              *(undefined8 *)((pFVar7->SharedBlocks).Slots + uVar5) = 0;
              if (pFVar4 != (FWorkBlock *)0x0) {
                return pFVar4;
              }
              break;
            }
            *(FWorkBlock **)((pFVar7->SharedBlocks).Slots + uVar5) = pFVar4;
          }
        }
        aVar3 = (pFVar7->SharedBlocks).Tail;
        uVar5 = (ulonglong)((uint)aVar3 & 0xf);
        pFVar4 = *(FWorkBlock **)((pFVar7->SharedBlocks).Slots + uVar5);
      }
      lVar6 = lVar6 + 1;
      pFVar7 = pFVar7 + 1;
    } while (lVar6 < 0x10);
  }
  if (0 < param_1) {
    do {
      aVar3 = (((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Tail;
      uVar5 = (ulonglong)((uint)aVar3 & 0xf);
      pFVar4 = *(FWorkBlock **)
                ((((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Slots + uVar5
                );
      while (pFVar4 != (FWorkBlock *)0x0) {
        if (pFVar4 != (FWorkBlock *)&DAT_00000001) {
          pAVar2 = (((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Slots +
                   uVar5;
          LOCK();
          bVar9 = pFVar4 == *(FWorkBlock **)pAVar2;
          if (bVar9) {
            *(undefined8 *)pAVar2 = 1;
          }
          UNLOCK();
          if (bVar9) {
            if (aVar3 == (((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Tail)
            {
              LOCK();
              paVar1 = &(((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Tail;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
              UNLOCK();
              *(undefined8 *)
               ((((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Slots + uVar5)
                   = 0;
              if (pFVar4 != (FWorkBlock *)0x0) {
                return pFVar4;
              }
              break;
            }
            *(FWorkBlock **)
             ((((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Slots + uVar5) =
                 pFVar4;
          }
        }
        aVar3 = (((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Tail;
        uVar5 = (ulonglong)((uint)aVar3 & 0xf);
        pFVar4 = *(FWorkBlock **)
                  ((((FWorkstealingQueue *)&this->Queues[0].SharedBlocks)->SharedBlocks).Slots +
                  uVar5);
      }
      lVar8 = lVar8 + 1;
      this = (FWorkstealingManager *)((longlong)this + 0x4c0);
    } while (lVar8 < param_1);
  }
  return (FWorkBlock *)0x0;
}

