// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// InvalidateCache @ 14a1fd290

void __thiscall FEmptyRigDependenciesProvider::InvalidateCache(FEmptyRigDependenciesProvider *this)

{
  return;
}

// GetHash @ 14a1fd2a0

uint __thiscall FEmptyRigDependenciesProvider::GetHash(FEmptyRigDependenciesProvider *this)

{
  return 0;
}

// ~FEmptyRigDependenciesProvider @ 14a225bf0

void __thiscall
FEmptyRigDependenciesProvider::~FEmptyRigDependenciesProvider(FEmptyRigDependenciesProvider *this)

{
  return;
}

// GetRigHierarchyDependencies @ 14a2c2b20

TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
* __thiscall
FEmptyRigDependenciesProvider::GetRigHierarchyDependencies(FEmptyRigDependenciesProvider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FEmptyRigDependenciesProvider::GetRigHierarchyDependencies'::__l2::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Empty;
}

// GetReverseRigHierarchyDependencies @ 14a2c2b90

TMap<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
* __thiscall
FEmptyRigDependenciesProvider::GetReverseRigHierarchyDependencies
          (FEmptyRigDependenciesProvider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FEmptyRigDependenciesProvider::GetReverseRigHierarchyDependencies'::__l2::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Empty;
}

