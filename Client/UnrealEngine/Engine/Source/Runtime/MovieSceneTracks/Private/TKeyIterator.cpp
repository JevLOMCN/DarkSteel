// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// RemoveCurrent @ 1466d7c30

void __thiscall
TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
::TKeyIterator::RemoveCurrent(TKeyIterator *this)

{
  uint uVar1;
  uint uVar2;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  
  uVar1 = *(uint *)&this->field_0xc;
  this_00 = *(TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)this;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this_00->AllocationFlags).NumBits)) {
    FVar8 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_1466d7cad;
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
LAB_1466d7cad:
  pFVar3 = (this_00->Data).AllocatorInstance.Data;
  pTVar6 = *(TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)&this_00[1].Data.ArrayNum;
  if (pTVar6 == (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
    pTVar6 = this_00 + 1;
  }
  pFVar7 = (FScriptContainerElement *)
           ((pTVar6->AllocationFlags).AllocatorInstance.InlineData +
           (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0xc + 8) * 4 + -0x10);
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
    pFVar7 = (this_00->Data).AllocatorInstance.Data + ((longlong)(int)uVar2 * 3 + 1) * 4;
  }
  *(uint *)pFVar7 = *(uint *)(pFVar3 + (longlong)(int)uVar1 * 0xc + 4);
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this_00,uVar1,1);
  *(undefined4 *)&this->field_0xc = 0xffffffff;
  return;
}

// RemoveCurrent @ 14685f6d0

void __thiscall
TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
::TKeyIterator::RemoveCurrent(TKeyIterator *this)

{
  uint uVar1;
  uint uVar2;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  
  uVar1 = *(uint *)&this->field_0x10;
  this_00 = *(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)this;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this_00->AllocationFlags).NumBits)) {
    FVar8 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_14685f74d;
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
LAB_14685f74d:
  pTVar6 = *(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)&this_00[1].Data.ArrayNum;
  pFVar3 = (this_00->Data).AllocatorInstance.Data;
  if (pTVar6 == (TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
    pTVar6 = this_00 + 1;
  }
  pFVar7 = (FScriptContainerElement *)
           ((pTVar6->AllocationFlags).AllocatorInstance.InlineData +
           (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x10 + 0xc) * 4 + -0x10);
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
    pFVar7 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10 + 8;
  }
  *(uint *)pFVar7 = *(uint *)(pFVar3 + (longlong)(int)uVar1 * 0x10 + 8);
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this_00,uVar1,1);
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  return;
}

// RemoveCurrent @ 14685f800

void __thiscall
TSet<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>,FDefaultSetAllocator>
::TKeyIterator::RemoveCurrent(TKeyIterator *this)

{
  uint uVar1;
  uint uVar2;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  
  uVar1 = *(uint *)&this->field_0x10;
  this_00 = *(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)this;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this_00->AllocationFlags).NumBits)) {
    FVar8 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_14685f87d;
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
LAB_14685f87d:
  pFVar3 = (this_00->Data).AllocatorInstance.Data;
  pTVar6 = *(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)&this_00[1].Data.ArrayNum;
  if (pTVar6 == (TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
    pTVar6 = this_00 + 1;
  }
  pFVar7 = (FScriptContainerElement *)
           ((pTVar6->AllocationFlags).AllocatorInstance.InlineData +
           (longlong)*(int *)(pFVar3 + (longlong)(int)uVar1 * 0x18 + 0x14) * 4 + -0x10);
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
    pFVar7 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x18 + 0x10;
  }
  *(uint *)pFVar7 = *(uint *)(pFVar3 + (longlong)(int)uVar1 * 0x18 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this_00,uVar1,1);
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  return;
}

