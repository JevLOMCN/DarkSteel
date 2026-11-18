// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// ~TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory> @ 1432862f0

void __thiscall
TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::
~TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>
          (TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory> *this)

{
  atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*> *
             )aVar1;
    pFVar2 = this->Tail;
    if (*(longlong *)(pFVar2->Value).Pad != 0) {
      puVar3 = *(uchar **)((pFVar2->Value).Pad + 0x28);
      puVar4 = (pFVar2->Value).Pad + 0x10;
      if (puVar3 != (uchar *)0x0) {
        puVar4 = puVar3;
      }
      (**(code **)(*(longlong *)puVar4 + 0x10))();
    }
    FMemory::Free(this->Tail);
  }
  return;
}

