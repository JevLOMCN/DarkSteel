// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// SetNum<bool> @ 142ad2be0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1,bool param_2)

{
  uint *puVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  int iVar4;
  ulong64 uVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = this->NumBits;
  this->NumBits = param_1;
  if (this->MaxBits < param_1) {
    uVar8 = param_1 + 0x1fU >> 5;
    if (uVar8 < 5) {
      iVar4 = 4;
    }
    else {
      uVar5 = FMemory::QuantizeSize((ulonglong)uVar8 << 2,0);
      iVar4 = (int)(uVar5 >> 2);
      if (iVar4 < (int)uVar8) {
        iVar4 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->AllocatorInstance,iVar2 + 0x1fU >> 5,iVar4,4);
    this->MaxBits = iVar4 << 5;
  }
  uVar7 = this->NumBits >> 0x1f & 0x1f;
  uVar8 = this->NumBits + uVar7;
  iVar4 = (uVar8 & 0x1f) - uVar7;
  if (iVar4 != 0) {
    FVar3 = (this->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar3;
    }
    puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)uVar8 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  if (iVar2 < param_1) {
    SetRange(this,iVar2,param_1 - iVar2,param_2);
  }
  return;
}

// AddRange<FDefaultBitArrayAllocator> @ 142b3ab10

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::AddRange<FDefaultBitArrayAllocator>
          (TBitArray<FDefaultBitArrayAllocator> *this,TBitArray<FDefaultBitArrayAllocator> *param_1,
          int param_2,int param_3)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((param_3 < 0) || (param_1->NumBits < param_2 + param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x298,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = AddUninitialized(this,param_2);
  if (((iVar4 < 0) || (param_2 < 0)) || (this->NumBits < iVar4 + param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3cf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if ((param_3 < 0) || (param_1->NumBits < param_2 + param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3d0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)this,iVar4,(uint *)param_1,param_3,param_2);
  return iVar4;
}

// SetNumUninitialized @ 142b6b8e0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  ulong64 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = this->NumBits;
  this->NumBits = param_1;
  if (this->MaxBits < param_1) {
    uVar6 = param_1 + 0x1fU >> 5;
    if (uVar6 < 5) {
      iVar7 = 4;
    }
    else {
      uVar4 = FMemory::QuantizeSize((ulonglong)uVar6 << 2,0);
      iVar7 = (int)(uVar4 >> 2);
      if (iVar7 < (int)uVar6) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->AllocatorInstance,iVar3 + 0x1fU >> 5,iVar7,4);
    this->MaxBits = iVar7 << 5;
  }
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar6 = this->NumBits + uVar5;
  iVar3 = (uVar6 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar6 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

