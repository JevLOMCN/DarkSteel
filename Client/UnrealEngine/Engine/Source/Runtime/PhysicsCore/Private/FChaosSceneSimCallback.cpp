// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 2

// GetFNameForStatId @ 1441adf50

FName __thiscall FChaosSceneSimCallback::GetFNameForStatId(FChaosSceneSimCallback *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&::StaticName);
  return in_RDX;
}

// OnPreSimulate_Internal @ 1441b20c0

void __thiscall FChaosSceneSimCallback::OnPreSimulate_Internal(FChaosSceneSimCallback *this)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)&this->field_0x28;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(longlong *)(*(longlong *)&this->field_0x18 + 0xbd0);
    *(undefined8 *)(lVar2 + 0xe08) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar2 + 0xe10) = uVar3;
    *(undefined8 *)(lVar2 + 0xe18) = *(undefined8 *)(lVar1 + 0x20);
  }
  return;
}

