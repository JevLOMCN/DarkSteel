// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ReallocGrow @ 141f957a0

void __thiscall
TScriptBitArray<FDefaultBitArrayAllocator,void>::ReallocGrow
          (TScriptBitArray<FDefaultBitArrayAllocator,void> *this,int param_1)

{
  ForElementType<unsigned_int> FVar1;
  uint uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = this->MaxBits + 0x1fU >> 5;
  uVar6 = this->NumBits + 0x1fU >> 5;
  if (uVar6 < 5) {
    uVar2 = 4;
  }
  else {
    uVar4 = (ulonglong)uVar6;
    if (uVar2 < 5) {
      uVar2 = 0;
    }
    if (uVar2 == 0) {
      uVar5 = 4;
      if (4 < uVar4) {
        uVar5 = uVar4;
      }
    }
    else {
      uVar5 = ((ulonglong)uVar6 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar5 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar6) {
      uVar2 = 0x7fffffff;
    }
  }
  this->MaxBits = uVar2 << 5;
  uVar6 = param_1 + 0x1fU >> 5;
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(&this->AllocatorInstance,uVar6,uVar2,4);
  if ((uVar2 != 0) && (uVar6 < uVar2)) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      this = (TScriptBitArray<FDefaultBitArrayAllocator,void> *)FVar1;
    }
    memset((void *)((longlong)this + (ulonglong)uVar6 * 4),0,(ulonglong)(uVar2 - uVar6) << 2);
  }
  return;
}

// Realloc @ 142107e60

void __thiscall
TScriptBitArray<TMemoryImageAllocator<0>,void>::Realloc
          (TScriptBitArray<TMemoryImageAllocator<0>,void> *this,int param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ForElementType<unsigned_int> FVar3;
  uint uVar4;
  
  uVar1 = this->MaxBits + 0x1fU >> 5;
  uVar2 = FMemory::QuantizeSize((ulonglong)uVar1 << 2,0);
  uVar4 = (uint)(uVar2 >> 2);
  if ((int)uVar4 < (int)uVar1) {
    uVar4 = 0x7fffffff;
  }
  uVar1 = param_1 + 0x1fU >> 5;
  this->MaxBits = uVar4 << 5;
  FMemoryImageAllocatorBase::ResizeAllocation((FMemoryImageAllocatorBase *)this,uVar1,uVar4,4,0);
  if ((uVar4 != 0) && (uVar1 < uVar4)) {
    FVar3 = this->AllocatorInstance;
    if (((ulonglong)FVar3 & 1) != 0) {
      FVar3 = (ForElementType<unsigned_int>)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar3 >> 0x18));
    }
    memset((void *)((longlong)FVar3 + (ulonglong)uVar1 * 4),0,(ulonglong)(uVar4 - uVar1) << 2);
  }
  return;
}

// Realloc @ 142107f20

void __thiscall
TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
          (TScriptBitArray<FDefaultBitArrayAllocator,void> *this,int param_1)

{
  ForElementType<unsigned_int> FVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = this->MaxBits + 0x1fU >> 5;
  if (uVar4 < 5) {
    uVar3 = 4;
  }
  else {
    uVar2 = FMemory::QuantizeSize((ulonglong)uVar4 << 2,0);
    uVar3 = (uint)(uVar2 >> 2);
    if ((int)uVar3 < (int)uVar4) {
      uVar3 = 0x7fffffff;
    }
  }
  this->MaxBits = uVar3 << 5;
  uVar4 = param_1 + 0x1fU >> 5;
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(&this->AllocatorInstance,uVar4,uVar3,4);
  if ((uVar3 != 0) && (uVar4 < uVar3)) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      this = (TScriptBitArray<FDefaultBitArrayAllocator,void> *)FVar1;
    }
    memset((void *)((longlong)this + (ulonglong)uVar4 * 4),0,(ulonglong)(uVar3 - uVar4) << 2);
  }
  return;
}

// ReallocGrow @ 142107fd0

void __thiscall
TScriptBitArray<TMemoryImageAllocator<0>,void>::ReallocGrow
          (TScriptBitArray<TMemoryImageAllocator<0>,void> *this,int param_1)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ForElementType<unsigned_int> FVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = this->NumBits + 0x1fU >> 5;
  uVar6 = (ulonglong)uVar5;
  if (this->MaxBits + 0x1fU < 0x20) {
    uVar2 = 4;
    if (4 < uVar6) {
      uVar2 = uVar6;
    }
  }
  else {
    uVar2 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
  }
  uVar1 = FMemory::QuantizeSize(uVar2 * 4,0);
  uVar4 = (uint)(uVar1 >> 2);
  if ((int)uVar4 < (int)uVar5) {
    uVar4 = 0x7fffffff;
  }
  uVar5 = param_1 + 0x1fU >> 5;
  this->MaxBits = uVar4 << 5;
  FMemoryImageAllocatorBase::ResizeAllocation((FMemoryImageAllocatorBase *)this,uVar5,uVar4,4,0);
  if ((uVar4 != 0) && (uVar5 < uVar4)) {
    FVar3 = this->AllocatorInstance;
    if (((ulonglong)FVar3 & 1) != 0) {
      FVar3 = (ForElementType<unsigned_int>)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar3 >> 0x18));
    }
    memset((void *)((longlong)FVar3 + (ulonglong)uVar5 * 4),0,(ulonglong)(uVar4 - uVar5) << 2);
  }
  return;
}

