// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Compact @ 14c8c8ca0

bool __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  
  uVar3 = this->NumFreeIndices;
  if (uVar3 == 0) {
    return false;
  }
  pFVar5 = (this->Data).AllocatorInstance.Data;
  iVar14 = (this->Data).ArrayNum;
  uVar19 = iVar14 - uVar3;
  bVar10 = false;
  iVar16 = iVar14;
  iVar4 = this->FirstFreeIndex;
  while( true ) {
    do {
      iVar9 = iVar4;
      if (iVar9 == -1) {
        uVar17 = 0;
        if (iVar14 <= (this->Data).ArrayNum) {
          uVar17 = ~(uVar19 | uVar3) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0xc;
        iVar14 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar14 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar3 * 0xc,(longlong)iVar14 * 0xc);
        }
        piVar1 = &(this->Data).ArrayNum;
        *piVar1 = *piVar1 - uVar3;
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&this->AllocationFlags,uVar19,uVar3);
        this->FirstFreeIndex = -1;
        piVar1 = &(this->Data).ArrayMax;
        this->NumFreeIndices = 0;
        iVar14 = (this->Data).ArrayNum;
        if (*piVar1 != iVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar14,(ForAnyElementType *)this,iVar14,piVar1);
        }
        return bVar10;
      }
      iVar4 = *(int *)(pFVar5 + (longlong)iVar9 * 0xc + 4);
    } while ((int)uVar19 <= iVar9);
    bVar8 = (byte)iVar16 & 0x1f;
    uVar17 = 1 << bVar8 | 1U >> 0x20 - bVar8;
    iVar15 = iVar16;
    do {
      uVar17 = uVar17 >> 1 | (uint)((uVar17 & 1) != 0) << 0x1f;
      iVar16 = iVar15 + -1;
      if (((iVar16 < 0) || ((this->AllocationFlags).NumBits <= iVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar6;
      }
      iVar13 = iVar16;
      if (iVar16 < 0) {
        iVar13 = iVar15 + 0x1e;
      }
      iVar15 = iVar16;
    } while ((*(uint *)((longlong)FVar18 + (longlong)(iVar13 >> 5) * 4) & uVar17) == 0);
    memmove(pFVar5 + (longlong)iVar9 * 0xc,pFVar5 + (longlong)iVar16 * 0xc,0xc);
    if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) break;
    FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar6;
    }
    iVar15 = iVar9;
    if (iVar9 < 0) {
      iVar15 = iVar9 + 0x1f;
    }
    bVar10 = true;
    puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
  }
  pcVar7 = (code *)swi(3);
  uVar11 = (*pcVar7)();
  return (bool)uVar11;
}

