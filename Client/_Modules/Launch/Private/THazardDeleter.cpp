// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// Delete @ 148da0fb0

void __thiscall
FHazardPointerCollection::
THazardDeleter<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node>::Delete
          (THazardDeleter<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node>
           *this)

{
  ::operator_delete(*(void **)&this->field_0x8,0x2018);
  return;
}

