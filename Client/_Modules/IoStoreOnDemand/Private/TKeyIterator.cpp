// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// RemoveCurrent @ 1445f6850

void __thiscall
TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
::TKeyIterator::RemoveCurrent(TKeyIterator *this)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  code *pcVar4;
  bool bVar5;
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  uint *puVar7;
  undefined1 *puVar8;
  
  uVar2 = *(uint *)&this->field_0x10;
  this_00 = *(TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)this;
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)&this_00->field_0x28)) {
    puVar8 = *(undefined1 **)&this_00->field_0x20;
    if (*(undefined1 **)&this_00->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &this_00->field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) goto LAB_1445f68cd;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1445f68cd:
  lVar1 = *(longlong *)this_00 + (longlong)(int)uVar2 * 0x48;
  pTVar6 = *(TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)&this_00[1].field_0x8;
  if (*(TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        **)&this_00[1].field_0x8 ==
      (TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    pTVar6 = this_00 + 1;
  }
  puVar7 = (uint *)(&pTVar6->field_0x0 + (longlong)*(int *)(lVar1 + 0x44) * 4);
  while( true ) {
    uVar3 = *puVar7;
    if (uVar3 == 0xffffffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar3 == uVar2) break;
    puVar7 = (uint *)(*(longlong *)this_00 + (longlong)(int)uVar3 * 0x48 + 0x40);
  }
  *puVar7 = *(uint *)(lVar1 + 0x40);
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAt(this_00,uVar2,1);
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  return;
}

