// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// RemoveAtUninitialized @ 14dc0d890

void __thiscall
TSparseArrayBase<440,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<440,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  
  if (param_2 != 0) {
    pFVar2 = (this->Data).AllocatorInstance.Data;
    uVar11 = (ulonglong)param_1;
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    pFVar13 = pFVar2 + uVar11 * 0x1b8;
    do {
      iVar10 = (int)uVar11;
      if (((iVar10 < 0) || ((this->AllocationFlags).NumBits <= iVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      if (((*(uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4) & uVar12) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x1b8) = iVar10;
      }
      *(undefined4 *)pFVar13 = 0xffffffff;
      if (this->NumFreeIndices < 1) {
        iVar7 = -1;
      }
      else {
        iVar7 = this->FirstFreeIndex;
      }
      *(int *)(pFVar13 + 4) = iVar7;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar10;
      if (((iVar10 < 0) || ((this->AllocationFlags).NumBits <= iVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      pFVar13 = pFVar13 + 0x1b8;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

