// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FindAndSetFirstZeroBit @ 142508c90

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1)

{
  ForElementType<unsigned_int> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  
  uVar9 = -1 << ((byte)param_1 & 0x1f);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar10 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar10 = FVar1;
  }
  uVar11 = this->NumBits + 0x1fU >> 5;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  uVar7 = (ulonglong)iVar5;
  if (iVar5 < (int)uVar11) {
    puVar6 = (uint *)((longlong)FVar10 + uVar7 * 4);
    do {
      iVar5 = (int)uVar7;
      if ((*puVar6 & uVar9) != uVar9) {
        uVar9 = ~*(uint *)((longlong)FVar10 + (longlong)iVar5 * 4) & uVar9;
        iVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
          }
        }
        iVar8 = 0x20;
        if (uVar9 != 0) {
          iVar8 = iVar2;
        }
        iVar8 = iVar8 + iVar5 * 0x20;
        if (this->NumBits <= iVar8) {
          return -1;
        }
        if (iVar8 != -1) {
          if ((iVar8 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          FVar1 = (this->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<unsigned_int>)this;
          if (FVar1 != (ForElementType<unsigned_int>)0x0) {
            FVar10 = FVar1;
          }
          puVar6 = (uint *)((longlong)FVar10 +
                           (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar6 = *puVar6 | 1 << ((byte)iVar8 & 0x1f);
          if ((this->MaxBits < this->NumBits) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBits <= MaxBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x238,
                                 L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBits >= 0 && MaxBits >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          uVar11 = this->NumBits >> 0x1f & 0x1f;
          uVar9 = this->NumBits + uVar11;
          iVar5 = (uVar9 & 0x1f) - uVar11;
          if (iVar5 != 0) {
            FVar1 = (this->AllocatorInstance).SecondaryData;
            if (FVar1 != (ForElementType<unsigned_int>)0x0) {
              this = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
            }
            if (((*(uint *)((longlong)this + (longlong)((int)uVar9 >> 5) * 4) &
                 -1 << ((byte)iVar5 & 0x1f)) != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(LastWord & SlackMask) == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x243,
                                   L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar5 = (*pcVar3)();
              return iVar5;
            }
          }
        }
        return iVar8;
      }
      uVar7 = (ulonglong)(iVar5 + 1U);
      puVar6 = puVar6 + 1;
      uVar9 = 0xffffffff;
    } while ((int)(iVar5 + 1U) < (int)uVar11);
  }
  return -1;
}

