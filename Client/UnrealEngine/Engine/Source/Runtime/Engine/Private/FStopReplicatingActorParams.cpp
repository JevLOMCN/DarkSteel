// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FStopReplicatingActorParams @ 148014c90

FStopReplicatingActorParams * __thiscall
FStopReplicatingActorParams::FStopReplicatingActorParams
          (FStopReplicatingActorParams *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FStopReplicatingActorParams *pFVar3;
  
  this->StopReplicatingReason = Destroyed;
  this->EndPlayReason = param_1;
  if (param_1 != Destroyed) {
    if (param_1 == LevelTransition) {
      this->StopReplicatingReason = LevelTransition;
    }
    else {
      if (param_1 == EndPlayInEditor) {
        this->StopReplicatingReason = EndPlayInEditor;
        return this;
      }
      if (param_1 == RemovedFromWorld) {
        this->StopReplicatingReason = RemovedFromWorld;
        return this;
      }
      if (param_1 == Quit) {
        this->StopReplicatingReason = Quit;
        return this;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                         ,0xc4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FStopReplicatingActorParams *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return this;
}

