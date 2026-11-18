// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 6

// RegisterUClassInterface @ 14b2c8240

void __thiscall
Metasound::IMetasoundUObjectRegistry::RegisterUClassInterface
          (IMetasoundUObjectRegistry *this,
          TUniquePtr<Metasound::IMetasoundUObjectRegistryEntry,TDefaultDelete<Metasound::IMetasoundUObjectRegistryEntry>_>
          *param_1)

{
  return;
}

// FindInterfaceEntriesByName @ 14b2c8250

TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::IMetasoundUObjectRegistry::FindInterfaceEntriesByName
          (IMetasoundUObjectRegistry *this,
          TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindSupportedInterfaceClasses @ 14b2c8280

TArray<UClass_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::IMetasoundUObjectRegistry::FindSupportedInterfaceClasses
          (IMetasoundUObjectRegistry *this,
          TArray<UClass_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendVersion *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// NewObject @ 14b2c8560

UObject * __thiscall
Metasound::IMetasoundUObjectRegistry::NewObject
          (IMetasoundUObjectRegistry *this,UClass *param_1,FMetasoundFrontendDocument *param_2,
          FString *param_3)

{
  return (UObject *)0x0;
}

// ~IMetasoundUObjectRegistry @ 14b3523d0

void __thiscall
Metasound::IMetasoundUObjectRegistry::~IMetasoundUObjectRegistry(IMetasoundUObjectRegistry *this)

{
  return;
}

// Get @ 14b3abda0

IMetasoundUObjectRegistry * __cdecl Metasound::IMetasoundUObjectRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::IMetasoundUObjectRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IMetasoundUObjectRegistry *)&::Registry;
}

