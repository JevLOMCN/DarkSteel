// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ExecuteTask @ 14ae70d20

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Metasound::Frontend::FNodeClassRegistry::UnregisterGraph'::__l41::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FNodeClassRegistry *pFVar1;
  
  if (Metasound::Frontend::FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    pFVar1 = ::operator_new(0x182b0);
    if (pFVar1 == (FNodeClassRegistry *)0x0) {
      Metasound::Frontend::FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
    }
    else {
      Metasound::Frontend::FNodeClassRegistry::LazySingleton =
           Metasound::Frontend::FNodeClassRegistry::FNodeClassRegistry(pFVar1);
    }
  }
  pFVar1 = Metasound::Frontend::FNodeClassRegistry::LazySingleton;
  Metasound::Frontend::FNodeClassRegistry::UnregisterGraphInternal
            (Metasound::Frontend::FNodeClassRegistry::LazySingleton,
             (FGraphClassRegistryKey *)((longlong)this + 0xd8));
  Metasound::Frontend::FNodeClassRegistry::RemoveRegistrationTask
            (pFVar1,(FGraphClassRegistryKey *)((longlong)this + 0xd8),
             *(int *)((longlong)this + 0x110),NodeUnregistration);
  return;
}

// ExecuteTask @ 14ae70d90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::__l92::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `Metasound::Frontend::FNodeClassRegistry::RegisterGraph'::__l92::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0x1b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1b8));
  }
  *(undefined4 *)((longlong)this + 0x1b0) = 0;
  if (*(void **)((longlong)this + 0x1a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1a8));
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x168));
  return;
}

