// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateOperation @ 147dc7380

void __thiscall
FDelayUntilNextFrameAction::UpdateOperation
          (FDelayUntilNextFrameAction *this,FLatentResponse *param_1)

{
  FWeakObjectPtr FVar1;
  FName FVar2;
  
  FVar1.ObjectIndex = *(int *)&this->field_0x18;
  FVar1.ObjectSerialNumber = *(int *)&this->field_0x1c;
  FVar2.ComparisonIndex.Value = *(uint *)&this->field_0xc;
  FVar2.Number = *(uint *)&this->field_0x10;
  FLatentResponse::FinishAndTriggerIf
            (param_1,((byte)GFrameCounter & 1) != this->field_0x8,FVar2,*(int *)&this->field_0x14,
             FVar1);
  return;
}

