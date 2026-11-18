// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// OnData @ 14d3a1340

EStatus __thiscall
UE::Trace::FMetadataStage::OnData
          (FMetadataStage *this,FStreamReader *param_1,FMachineContext *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1->Cursor;
  if (param_1->End < uVar2 + 2) {
    uVar2 = 2;
    if (2 < param_1->DemandHint) {
      uVar2 = param_1->DemandHint;
    }
    param_1->DemandHint = uVar2;
  }
  else if ((ushort *)(param_1->Buffer + uVar2) != (ushort *)0x0) {
    uVar1 = *(ushort *)(param_1->Buffer + uVar2);
    uVar3 = uVar1 + 2;
    if (param_1->End < uVar3 + uVar2) {
      if (uVar3 < param_1->DemandHint) {
        uVar3 = param_1->DemandHint;
      }
      param_1->DemandHint = uVar3;
      return NotEnoughData;
    }
    param_1->Cursor = uVar2 + 2 + (uint)uVar1;
    FAnalysisMachine::QueueStage<UE::Trace::FEstablishTransportStage>(param_2->Machine);
    FAnalysisMachine::Transition(param_2->Machine);
    return Continue;
  }
  return NotEnoughData;
}

