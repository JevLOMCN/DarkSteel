// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FType @ 145b004b0

FType * __thiscall FVulkanCustomMemManager::FType::FType(FType *this)

{
  this->UsedMemory = 0;
  this->MaxAllocSize = 0;
  *(undefined8 *)&this->Allocs = 0;
  *(undefined8 *)&(this->Allocs).field_0x8 = 0;
  *(undefined8 *)&(this->Allocs).field_0x20 = 0;
  *(undefined4 *)&(this->Allocs).field_0x28 = 0;
  *(undefined4 *)&(this->Allocs).field_0x2c = 0x80;
  *(undefined4 *)&(this->Allocs).field_0x34 = 0;
  *(undefined4 *)&(this->Allocs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Allocs).field_0x40 = 0;
  *(undefined4 *)&(this->Allocs).field_0x48 = 0;
  return this;
}

// ~FType @ 145b054c0

void __thiscall FVulkanCustomMemManager::FType::~FType(FType *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Allocs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Allocs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Allocs);
  return;
}

