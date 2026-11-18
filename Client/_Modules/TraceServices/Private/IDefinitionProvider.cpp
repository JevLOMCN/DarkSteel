// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// ~IDefinitionProvider @ 14d42d050

void __thiscall TraceServices::IDefinitionProvider::~IDefinitionProvider(IDefinitionProvider *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Stringifiers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Stringifiers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Stringifiers);
  return;
}

