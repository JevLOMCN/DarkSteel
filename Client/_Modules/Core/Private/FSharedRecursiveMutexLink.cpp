// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Owns @ 1414a7ef0

bool __cdecl UE::Core::Private::FSharedRecursiveMutexLink::Owns(FSharedRecursiveMutex *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x48);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return false;
    }
    if ((FSharedRecursiveMutex *)*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return true;
}

// Pop @ 1414a8610

void __thiscall UE::Core::Private::FSharedRecursiveMutexLink::Pop(FSharedRecursiveMutexLink *this)

{
  FSharedRecursiveMutexLink *pFVar1;
  FSharedRecursiveMutexLink **ppFVar2;
  
  ppFVar2 = (FSharedRecursiveMutexLink **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x48);
  pFVar1 = *ppFVar2;
  if (pFVar1 != (FSharedRecursiveMutexLink *)0x0) {
    while (pFVar1 != this) {
      ppFVar2 = &pFVar1->Next;
      pFVar1 = pFVar1->Next;
      if (pFVar1 == (FSharedRecursiveMutexLink *)0x0) {
        return;
      }
    }
    *ppFVar2 = this->Next;
    this->OwnedMutex = (FSharedRecursiveMutex *)0x0;
    this->Next = (FSharedRecursiveMutexLink *)0x0;
  }
  return;
}

// Push @ 1414abdb0

void __thiscall
UE::Core::Private::FSharedRecursiveMutexLink::Push
          (FSharedRecursiveMutexLink *this,FSharedRecursiveMutex *param_1)

{
  longlong lVar1;
  void *pvVar2;
  
  pvVar2 = ThreadLocalStoragePointer;
  this->OwnedMutex = param_1;
  lVar1 = *(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8);
  this->Next = *(FSharedRecursiveMutexLink **)(lVar1 + 0x48);
  *(FSharedRecursiveMutexLink **)(lVar1 + 0x48) = this;
  return;
}

