// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// Alloc @ 14422f6a0

void * __thiscall
UE::Net::Private::FGlobalChangeMaskAllocator::Alloc
          (FGlobalChangeMaskAllocator *this,uint param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc((ulonglong)param_1,param_2);
  return pvVar1;
}

// Free @ 14423a770

void __thiscall
UE::Net::Private::FGlobalChangeMaskAllocator::Free(FGlobalChangeMaskAllocator *this,void *param_1)

{
  FMemory::Free(param_1);
  return;
}

