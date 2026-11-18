// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 1

// Compact @ 14df2a9e0

bool __thiscall
TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<unsigned_int> FVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *_Dst;
  
  uVar11 = this->NumFreeIndices;
  if (uVar11 == 0) {
    return false;
  }
  pFVar13 = (this->Data).AllocatorInstance.Data;
  iVar12 = (this->Data).ArrayNum;
  uVar18 = iVar12 - uVar11;
  bVar6 = false;
  iVar17 = iVar12;
  iVar10 = this->FirstFreeIndex;
  while (iVar5 = iVar10, iVar5 != -1) {
    _Dst = pFVar13 + (longlong)iVar5 * 0x40;
    iVar10 = *(int *)(_Dst + 4);
    if (iVar5 < (int)uVar18) {
      bVar4 = (byte)iVar17 & 0x1f;
      uVar19 = 1 << bVar4 | 1U >> 0x20 - bVar4;
      iVar16 = iVar17;
      do {
        uVar19 = uVar19 >> 1 | (uint)((uVar19 & 1) != 0) << 0x1f;
        iVar17 = iVar16 + -1;
        if (((iVar17 < 0) || ((this->AllocationFlags).NumBits <= iVar17)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<unsigned_int>)&this->AllocationFlags;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = FVar14;
        }
        iVar9 = iVar17;
        if (iVar17 < 0) {
          iVar9 = iVar16 + 0x1e;
        }
        iVar16 = iVar17;
      } while ((*(uint *)((longlong)FVar15 + (longlong)(iVar9 >> 5) * 4) & uVar19) == 0);
      memmove(_Dst,pFVar13 + (longlong)iVar17 * 0x40,0x40);
      if (((iVar5 < 0) || ((this->AllocationFlags).NumBits <= iVar5)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = FVar14;
      }
      iVar16 = iVar5;
      if (iVar5 < 0) {
        iVar16 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar16 >> 5) * 4);
      bVar6 = true;
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
    }
  }
  uVar19 = 0;
  if (iVar12 <= (this->Data).ArrayNum) {
    uVar19 = ~(uVar18 | uVar11) >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar13 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x40;
  iVar10 = ((this->Data).ArrayNum - uVar18) - uVar11;
  if (iVar10 != 0) {
    memmove(pFVar13,pFVar13 + (longlong)(int)uVar11 * 0x40,(longlong)iVar10 << 6);
  }
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = *piVar1 - uVar11;
  this_00 = &this->AllocationFlags;
  if (((((int)uVar18 < 0) || ((int)uVar11 < 0)) || ((this->AllocationFlags).NumBits < iVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3ee,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iVar10 = (this->AllocationFlags).NumBits;
  if (iVar12 != iVar10) {
    FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)FVar14,uVar18,(uint *)FVar14,iVar12,(iVar10 - uVar18) - uVar11);
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  *piVar1 = *piVar1 - uVar11;
  iVar12 = (this->AllocationFlags).NumBits;
  uVar18 = iVar12 >> 0x1f & 0x1f;
  uVar11 = iVar12 + uVar18;
  iVar12 = (uVar11 & 0x1f) - uVar18;
  if (iVar12 != 0) {
    FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    puVar2 = (uint *)((longlong)FVar14 + (longlong)((int)uVar11 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
  }
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
  piVar1 = &(this->Data).ArrayMax;
  this->NumFreeIndices = 0;
  this->FirstFreeIndex = -1;
  iVar12 = (this->Data).ArrayNum;
  if (*piVar1 != iVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar12,(ForAnyElementType *)this,iVar12,piVar1);
  }
  return bVar6;
}

