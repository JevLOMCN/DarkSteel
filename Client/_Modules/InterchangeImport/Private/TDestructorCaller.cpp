// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 4

// Destruct @ 14e7131e0

void __cdecl
UE::Core::Private::TDestructorCaller<TOptional<UE::Interchange::FImportBlockedImage>_>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x68) != '\0') {
    if (*(char *)((longlong)param_1 + 0x60) != '\0') {
      if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x50));
      }
      if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x40));
      }
      if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x30));
      }
    }
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 8));
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(param_1);
    return;
  }
  return;
}

// Destruct @ 14e7131f0

void __cdecl
UE::Core::Private::TDestructorCaller<TOptional<UE::Interchange::FImportImage>_>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x70) != '\0') {
    if (*(char *)((longlong)param_1 + 0x68) != '\0') {
      if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x58));
      }
      if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x48));
      }
      if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x38));
      }
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Destruct @ 14e713250

void __cdecl
UE::Core::Private::TDestructorCaller<TOptional<UE::Interchange::FImportLightProfile>_>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x90) != '\0') {
    if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x78));
    }
    if (*(char *)((longlong)param_1 + 0x68) != '\0') {
      if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x58));
      }
      if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x48));
      }
      if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x38));
      }
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Destruct @ 14e713260

void __cdecl
UE::Core::Private::TDestructorCaller<TOptional<UE::Interchange::FImportSlicedImage>_>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x78) != '\0') {
    if (*(char *)((longlong)param_1 + 0x68) != '\0') {
      if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x58));
      }
      if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x48));
      }
      if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x38));
      }
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)param_1 + 8));
    return;
  }
  return;
}

