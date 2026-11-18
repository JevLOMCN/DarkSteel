// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// RemoveCurrent @ 14428e940

void __thiscall
TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
::TKeyIterator::RemoveCurrent(TKeyIterator *this)

{
  uint uVar1;
  uint uVar2;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  
  uVar1 = *(uint *)&this->field_0x10;
  this_00 = *(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)this;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this_00->AllocationFlags).NumBits)) {
    FVar8 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_14428e9bd;
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
LAB_14428e9bd:
  pTVar6 = *(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)&this_00[1].Data.ArrayNum;
  pFVar3 = (this_00->Data).AllocatorInstance.Data;
  if (pTVar6 == (TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
    pTVar6 = this_00 + 1;
  }
  pFVar7 = (FScriptContainerElement *)
           ((pTVar6->AllocationFlags).AllocatorInstance.InlineData +
           (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x20 + 0x1c) * 4 + -0x10);
  while( true ) {
    uVar2 = *(uint *)pFVar7;
    if (uVar2 == 0xffffffff) {
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
    if (uVar2 == uVar1) break;
    pFVar7 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20 + 0x18;
  }
  *(uint *)pFVar7 = *(uint *)(pFVar3 + (longlong)(int)uVar1 * 0x20 + 0x18);
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this_00,uVar1,1);
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  return;
}

