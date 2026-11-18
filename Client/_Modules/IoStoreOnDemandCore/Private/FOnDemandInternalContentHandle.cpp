// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 1

// ~FOnDemandInternalContentHandle @ 1445879d0

void __thiscall
UE::IoStore::FOnDemandInternalContentHandle::~FOnDemandInternalContentHandle
          (FOnDemandInternalContentHandle *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  IOnDemandIoStore *pIVar4;
  atomic<int> aVar5;
  wchar_t *pwVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->IoStore).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_144587a00;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar8);
    pIVar4 = (this->IoStore).Object;
    if (pIVar4 != (IOnDemandIoStore *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0xa8))(pIVar4,this);
    }
  }
LAB_144587a00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar7 = (this->IoStore).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  pwVar6 = (this->DebugName).Chars;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar3 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  return;
}

