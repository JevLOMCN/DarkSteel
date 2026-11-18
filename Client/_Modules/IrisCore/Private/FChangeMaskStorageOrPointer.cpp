// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// Alloc<UE::Net::Private::FMemStackChangeMaskAllocator> @ 1442a19a0

void __cdecl
UE::Net::Private::FChangeMaskStorageOrPointer::Alloc<UE::Net::Private::FMemStackChangeMaskAllocator>
          (FChangeMaskStorageOrPointer *param_1,uint param_2,FMemStackChangeMaskAllocator *param_3)

{
  void *pvVar1;
  
  if (0x40 < param_2) {
    pvVar1 = FMemStackChangeMaskAllocator::Alloc(param_3,(param_2 + 0x1f >> 5) << 2,4);
    param_1->ChangeMaskOrPointer = (ulong64)pvVar1;
  }
  return;
}

// AllocAndInitBitArray<UE::Net::Private::FGlobalChangeMaskAllocator> @ 1442a19e0

FNetBitArrayView * __cdecl
UE::Net::Private::FChangeMaskStorageOrPointer::
AllocAndInitBitArray<UE::Net::Private::FGlobalChangeMaskAllocator>
          (FNetBitArrayView *__return_storage_ptr__,FChangeMaskStorageOrPointer *param_1,
          uint param_2,FGlobalChangeMaskAllocator *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0x1f >> 5;
  if (param_2 < 0x41) {
    __return_storage_ptr__->BitCount = param_2;
    __return_storage_ptr__->Storage = (uint *)param_1;
    __return_storage_ptr__->WordCount = uVar2;
    if (param_2 == 0) {
      __return_storage_ptr__->Storage = &__return_storage_ptr__->BitCount;
      param_1 = (FChangeMaskStorageOrPointer *)&__return_storage_ptr__->BitCount;
    }
  }
  else {
    puVar1 = FGlobalChangeMaskAllocator::Alloc(param_3,uVar2 * 4,4);
    param_1->ChangeMaskOrPointer = (ulong64)puVar1;
    __return_storage_ptr__->Storage = puVar1;
    __return_storage_ptr__->WordCount = uVar2;
    __return_storage_ptr__->BitCount = param_2;
    param_1 = (FChangeMaskStorageOrPointer *)puVar1;
  }
  memset(param_1,0,(ulonglong)uVar2 << 2);
  return __return_storage_ptr__;
}

// AllocAndInitBitArray<UE::Net::Private::FMemStackChangeMaskAllocator> @ 1442a1a80

FNetBitArrayView * __cdecl
UE::Net::Private::FChangeMaskStorageOrPointer::
AllocAndInitBitArray<UE::Net::Private::FMemStackChangeMaskAllocator>
          (FNetBitArrayView *__return_storage_ptr__,FChangeMaskStorageOrPointer *param_1,
          uint param_2,FMemStackChangeMaskAllocator *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0x1f >> 5;
  if (param_2 < 0x41) {
    __return_storage_ptr__->BitCount = param_2;
    __return_storage_ptr__->Storage = (uint *)param_1;
    __return_storage_ptr__->WordCount = uVar2;
    if (param_2 == 0) {
      __return_storage_ptr__->Storage = &__return_storage_ptr__->BitCount;
      param_1 = (FChangeMaskStorageOrPointer *)&__return_storage_ptr__->BitCount;
    }
  }
  else {
    puVar1 = FMemStackChangeMaskAllocator::Alloc(param_3,uVar2 * 4,4);
    param_1->ChangeMaskOrPointer = (ulong64)puVar1;
    __return_storage_ptr__->Storage = puVar1;
    __return_storage_ptr__->WordCount = uVar2;
    __return_storage_ptr__->BitCount = param_2;
    param_1 = (FChangeMaskStorageOrPointer *)puVar1;
  }
  memset(param_1,0,(ulonglong)uVar2 << 2);
  return __return_storage_ptr__;
}

// Free<UE::Net::Private::FGlobalChangeMaskAllocator> @ 1442a5bf0

void __cdecl
UE::Net::Private::FChangeMaskStorageOrPointer::Free<UE::Net::Private::FGlobalChangeMaskAllocator>
          (FChangeMaskStorageOrPointer *param_1,uint param_2,FGlobalChangeMaskAllocator *param_3)

{
  if (0x40 < param_2) {
    FGlobalChangeMaskAllocator::Free(param_3,(void *)param_1->ChangeMaskOrPointer);
    return;
  }
  return;
}

// Alloc<UE::Net::Private::FGlobalChangeMaskAllocator> @ 1442ef610

void __cdecl
UE::Net::Private::FChangeMaskStorageOrPointer::Alloc<UE::Net::Private::FGlobalChangeMaskAllocator>
          (FChangeMaskStorageOrPointer *param_1,uint param_2,FGlobalChangeMaskAllocator *param_3)

{
  void *pvVar1;
  
  if (0x40 < param_2) {
    pvVar1 = FGlobalChangeMaskAllocator::Alloc(param_3,(param_2 + 0x1f >> 5) << 2,4);
    param_1->ChangeMaskOrPointer = (ulong64)pvVar1;
  }
  return;
}

