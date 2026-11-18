// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// operator++ @ 1445aa5c0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  longlong lVar1;
  FIoHash *pFVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = this->NextIndex;
  this->Index = iVar5;
  if (iVar5 != -1) {
    pFVar2 = this->Key;
    do {
      lVar4 = (longlong)iVar5;
      iVar5 = *(int *)(*(longlong *)&this->Set->Elements + 0x40 + lVar4 * 0x48);
      this->NextIndex = iVar5;
      lVar3 = *(longlong *)&this->Set->Elements;
      lVar1 = lVar3 + lVar4 * 0x48;
      if (((*(longlong *)(lVar3 + lVar4 * 0x48) == *(longlong *)pFVar2->Hash) &&
          (*(longlong *)(lVar1 + 8) == *(longlong *)(pFVar2->Hash + 8))) &&
         (*(int *)(lVar1 + 0x10) == *(int *)(pFVar2->Hash + 0x10))) {
        return this;
      }
      this->Index = iVar5;
    } while (iVar5 != -1);
  }
  return this;
}

