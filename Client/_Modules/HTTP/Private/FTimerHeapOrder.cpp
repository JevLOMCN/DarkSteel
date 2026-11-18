// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// operator() @ 143151ff0

bool __thiscall
UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder::operator()
          (FTimerHeapOrder *this,
          TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
          *param_1,TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
                   *param_2)

{
  TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>
  *pTVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  ulong64 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  pTVar1 = this->Storage;
  puVar2 = (ulong64 *)0x0;
  uVar5 = (uint)*(undefined8 *)&param_1->InternalIndex;
  puVar4 = puVar2;
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)&(pTVar1->Storage).field_0x28)) {
    puVar6 = *(undefined1 **)&(pTVar1->Storage).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar1->Storage).field_0x10;
    }
    if (((*(uint *)(puVar6 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar5 & 0x1f) & 1) != 0) &&
       (puVar3 = (ulong64 *)(*(longlong *)&pTVar1->Storage + (longlong)(int)uVar5 * 0x70),
       *puVar3 == (param_1->ExternalHandle).ID)) {
      puVar4 = puVar3 + 2;
    }
  }
  pTVar1 = this->Storage;
  uVar5 = (uint)*(undefined8 *)&param_2->InternalIndex;
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)&(pTVar1->Storage).field_0x28)) {
    puVar6 = *(undefined1 **)&(pTVar1->Storage).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar1->Storage).field_0x10;
    }
    if (((*(uint *)(puVar6 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar5 & 0x1f) & 1) != 0) &&
       (puVar3 = (ulong64 *)((longlong)(int)uVar5 * 0x70 + *(longlong *)&pTVar1->Storage),
       puVar2 = (ulong64 *)0x0, *puVar3 == (param_2->ExternalHandle).ID)) {
      puVar2 = puVar3 + 2;
    }
  }
  if (puVar4 != (ulong64 *)0x0) {
    if (puVar2 != (ulong64 *)0x0) {
      return (longlong)puVar4[9] < (longlong)puVar2[9];
    }
    return false;
  }
  return true;
}

