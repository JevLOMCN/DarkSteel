// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats> @ 148bc3b40

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
           *this)

{
  *(undefined ***)&this->field_0x10 =
       &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>(*(FString **)&this->field_0xe0,*(int *)&this->field_0xe8);
  if (*(void **)&this->field_0xe0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xe0);
  }
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  InstallBundleUtil::PersistentStats::FPersistentStatsBase::~FPersistentStatsBase
            ((FPersistentStatsBase *)&this->field_0x10);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

