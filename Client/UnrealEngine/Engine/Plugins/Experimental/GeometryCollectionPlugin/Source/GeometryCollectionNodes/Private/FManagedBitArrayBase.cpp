// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// GetAsBoolArray @ 14e952720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
FManagedBitArrayBase::GetAsBoolArray
          (FManagedBitArrayBase *this,
          TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(this->Array).NumBits,Default);
  uVar8 = 0;
  if (0 < (this->Array).NumBits) {
    uVar9 = 1;
    lVar10 = 0;
    do {
      if ((((int)uVar8 < 0) || ((this->Array).NumBits <= (int)uVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      FVar1 = (this->Array).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)&this->Array;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar1;
      }
      uVar4 = uVar8;
      if ((int)uVar8 < 0) {
        uVar4 = uVar8 + 0x1f;
      }
      uVar4 = *(uint *)((longlong)FVar7 + (longlong)((int)uVar4 >> 5) * 4) & uVar9;
      uVar5 = 0;
      if ((int)uVar8 < __return_storage_ptr__->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      (__return_storage_ptr__->AllocatorInstance).Data[lVar10] =
           (FScriptContainerElement)(uVar4 != 0);
      lVar10 = lVar10 + 1;
    } while ((int)uVar8 < (this->Array).NumBits);
  }
  return __return_storage_ptr__;
}

