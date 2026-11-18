// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Delete @ 141490ed0

void __thiscall
FHazardPointerCollection::THazardDeleter<FAAArrayQueue<LowLevelTasks::FTask>::Node>::Delete
          (THazardDeleter<FAAArrayQueue<LowLevelTasks::FTask>::Node> *this)

{
  ::operator_delete(*(void **)&this->field_0x8,0x2018);
  return;
}

