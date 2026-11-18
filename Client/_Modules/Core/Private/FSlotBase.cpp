// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetArchiveState @ 1419fc7b0

FArchiveState * __thiscall
UE::StructuredArchive::Private::FSlotBase::GetArchiveState(FSlotBase *this)

{
  return (FArchiveState *)this->StructuredArchive->Formatter->Inner;
}

// GetUnderlyingArchive @ 141a04780

FArchive * __thiscall
UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(FSlotBase *this)

{
  return this->StructuredArchive->Formatter->Inner;
}

