// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// operator<< @ 141f6a4f0

FArchive * __thiscall
`FindUndeclaredObjectReferencesInStructSerializers'::__l2::FTestArchive::operator<<
          (void *this,FLazyObjectPtr *param_1)

{
  *(uint *)((longlong)this + 0x90) = *(uint *)((longlong)this + 0x90) | 2;
  return this;
}

// operator<< @ 141f6a510

FArchive * __thiscall
`FindUndeclaredObjectReferencesInStructSerializers'::__l2::FTestArchive::operator<<
          (void *this,FObjectPtr *param_1)

{
  *(uint *)((longlong)this + 0x90) = *(uint *)((longlong)this + 0x90) | 1;
  return this;
}

// operator<< @ 141f6a530

FArchive * __thiscall
`FindUndeclaredObjectReferencesInStructSerializers'::__l2::FTestArchive::operator<<
          (void *this,FSoftObjectPath *param_1)

{
  *(uint *)((longlong)this + 0x90) = *(uint *)((longlong)this + 0x90) | 4;
  return this;
}

// operator<< @ 141f6a550

FArchive * __thiscall
`FindUndeclaredObjectReferencesInStructSerializers'::__l2::FTestArchive::operator<<
          (void *this,FSoftObjectPtr *param_1)

{
  *(uint *)((longlong)this + 0x90) = *(uint *)((longlong)this + 0x90) | 6;
  return this;
}

// operator<< @ 141f6a570

FArchive * __thiscall
`FindUndeclaredObjectReferencesInStructSerializers'::__l2::FTestArchive::operator<<
          (void *this,FWeakObjectPtr *param_1)

{
  *(uint *)((longlong)this + 0x90) = *(uint *)((longlong)this + 0x90) | 2;
  return this;
}

