// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// Compact @ 1445b8a90

bool __thiscall
TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FScriptContainerElement *_Dst;
  
  uVar3 = this->NumFreeIndices;
  if (uVar3 == 0) {
    return false;
  }
  pFVar14 = (this->Data).AllocatorInstance.Data;
  iVar13 = (this->Data).ArrayNum;
  uVar19 = iVar13 - uVar3;
  bVar9 = false;
  iVar16 = iVar13;
  iVar4 = this->FirstFreeIndex;
  while( true ) {
    do {
      iVar8 = iVar4;
      if (iVar8 == -1) {
        uVar17 = 0;
        if (iVar13 <= (this->Data).ArrayNum) {
          uVar17 = ~(uVar19 | uVar3) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar14 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x1c;
        iVar13 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar3 * 0x1c,(longlong)iVar13 * 0x1c);
        }
        piVar1 = &(this->Data).ArrayNum;
        *piVar1 = *piVar1 - uVar3;
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&this->AllocationFlags,uVar19,uVar3);
        this->FirstFreeIndex = -1;
        piVar1 = &(this->Data).ArrayMax;
        this->NumFreeIndices = 0;
        iVar13 = (this->Data).ArrayNum;
        if (*piVar1 != iVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar13,(ForAnyElementType *)this,iVar13,piVar1);
        }
        return bVar9;
      }
      _Dst = pFVar14 + (longlong)iVar8 * 0x1c;
      iVar4 = *(int *)(_Dst + 4);
    } while ((int)uVar19 <= iVar8);
    bVar7 = (byte)iVar16 & 0x1f;
    uVar17 = 1 << bVar7 | 1U >> 0x20 - bVar7;
    iVar15 = iVar16;
    do {
      uVar17 = uVar17 >> 1 | (uint)((uVar17 & 1) != 0) << 0x1f;
      iVar16 = iVar15 + -1;
      if (((iVar16 < 0) || ((this->AllocationFlags).NumBits <= iVar16)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      FVar5 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar5;
      }
      iVar12 = iVar16;
      if (iVar16 < 0) {
        iVar12 = iVar15 + 0x1e;
      }
      iVar15 = iVar16;
    } while ((*(uint *)((longlong)FVar18 + (longlong)(iVar12 >> 5) * 4) & uVar17) == 0);
    memmove(_Dst,pFVar14 + (longlong)iVar16 * 0x1c,0x1c);
    if (((iVar8 < 0) || ((this->AllocationFlags).NumBits <= iVar8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) break;
    FVar5 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    if (FVar5 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar5;
    }
    iVar15 = iVar8;
    if (iVar8 < 0) {
      iVar15 = iVar8 + 0x1f;
    }
    bVar9 = true;
    puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
  }
  pcVar6 = (code *)swi(3);
  uVar10 = (*pcVar6)();
  return (bool)uVar10;
}

