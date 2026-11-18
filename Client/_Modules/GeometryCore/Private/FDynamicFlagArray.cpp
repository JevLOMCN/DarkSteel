// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Set @ 14361a7f0

void __thiscall
UE::Geometry::FDynamicFlagArray::Set(FDynamicFlagArray *this,uint param_1,bool param_2)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if ((param_2) && (this->MaxIndex <= param_1)) {
    TBitArray<FDefaultBitArrayAllocator>::Add
              (&this->BitArray,false,(param_1 - this->MaxIndex) + 1 | 0xfff);
    uVar2 = (this->BitArray).NumBits;
    this->MaxIndex = uVar2;
    if (((int)param_1 < 0) || ((int)uVar2 <= (int)param_1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3 = (this->BitArray).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      this = (FDynamicFlagArray *)FVar3;
    }
    puVar1 = (uint *)((longlong)this +
                     (longlong)((int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  }
  else if (param_1 < this->MaxIndex) {
    if (((int)param_1 < 0) || ((this->BitArray).NumBits <= (int)param_1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3 = (this->BitArray).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      this = (FDynamicFlagArray *)FVar3;
    }
    puVar1 = (uint *)((longlong)this +
                     (longlong)((int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
    uVar6 = 1 << ((byte)param_1 & 0x1f);
    uVar2 = *puVar1;
    if (param_2) {
      uVar6 = uVar6 | uVar2;
    }
    else {
      uVar6 = ~uVar6 & uVar2;
    }
    *puVar1 = uVar6;
  }
  return;
}

