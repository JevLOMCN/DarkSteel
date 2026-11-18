// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Enqueue @ 14809f760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TQueue<FODSCMessageHandler_*,0>::Enqueue
          (TQueue<FODSCMessageHandler_*,0> *this,FODSCMessageHandler **param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    pTVar2->Item = *param_1;
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1 = this->Head;
    this->Head = pTVar2;
    UNLOCK();
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar1->NextNode = pTVar2;
    UNLOCK();
    return true;
  }
  return false;
}

// ~TQueue<TUniqueFunction<void___cdecl(void)>,1> @ 148699620

void __thiscall
TQueue<TUniqueFunction<void___cdecl(void)>,1>::~TQueue<TUniqueFunction<void___cdecl(void)>,1>
          (TQueue<TUniqueFunction<void___cdecl(void)>,1> *this)

{
  TNode *pTVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    if (*(longlong *)&pTVar1->Item != 0) {
      plVar2 = *(longlong **)&(pTVar1->Item).field_0x28;
      plVar3 = (longlong *)&(pTVar1->Item).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar3 = plVar2;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    ::operator_delete(pTVar1,0x40);
    pTVar1 = this->Tail;
  }
  return;
}

