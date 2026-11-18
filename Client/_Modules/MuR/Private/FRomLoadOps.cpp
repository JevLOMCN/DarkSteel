// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// Create @ 14aac2b60

FRomLoadOp * __thiscall
UE::Mutable::Private::CodeRunner::FRomLoadOps::Create(FRomLoadOps *this,int param_1)

{
  int *piVar1;
  FRomLoadOp *pFVar2;
  int iVar3;
  FRomLoadOp *pFVar4;
  undefined1 local_res8 [8];
  
  iVar3 = (this->RomLoadOps).ArrayNum;
  pFVar4 = (FRomLoadOp *)(this->RomLoadOps).AllocatorInstance.Data;
  pFVar2 = pFVar4 + iVar3;
  while( true ) {
    if ((this->RomLoadOps).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Mutable::Private::CodeRunner::FRomLoadOp,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    if (pFVar4->RomIndex == -1) goto LAB_14aac2bdf;
    pFVar4 = pFVar4 + 1;
  }
  iVar3 = (this->RomLoadOps).ArrayNum;
  piVar1 = &(this->RomLoadOps).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar1);
  }
  (this->RomLoadOps).ArrayNum = iVar3 + 1;
  pFVar4 = (FRomLoadOp *)((this->RomLoadOps).AllocatorInstance.Data + (longlong)iVar3 * 0x28);
  DefaultConstructItems<UE::Mutable::Private::CodeRunner::FRomLoadOp,int>(pFVar4,1);
LAB_14aac2bdf:
  pFVar4->RomIndex = param_1;
  return pFVar4;
}

// Remove @ 14aae7340

void __thiscall
UE::Mutable::Private::CodeRunner::FRomLoadOps::Remove(FRomLoadOps *this,FRomLoadOp *param_1)

{
  int *piVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> *paVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  longlong local_18 [2];
  
  param_1->RomIndex = -1;
  piVar1 = &(param_1->m_streamBuffer).ArrayMax;
  (param_1->m_streamBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::
    ReallocTo<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>::ForAnyElementType>
              (1,1,0,&(param_1->m_streamBuffer).AllocatorInstance,0,piVar1);
  }
  pFVar2 = &param_1->Event;
  if (pFVar2 != (FTaskHandle *)local_18) {
    pFVar5 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &pFVar5->RefCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  return;
}

