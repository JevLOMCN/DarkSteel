// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// GetSnapshotFrameId @ 14d055430

int __thiscall ILiveLinkSubject::GetSnapshotFrameId(ILiveLinkSubject *this)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x40))();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)((longlong)*this + 0xb8))(this);
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
    return *(int *)(lVar2 + 0x98);
  }
  return -1;
}

