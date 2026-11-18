// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 2

// GetType @ 14e666030

ECommandId __thiscall
UE::Interchange::FCompletedQueryTaskProgressCommand::GetType
          (FCompletedQueryTaskProgressCommand *this)

{
  return CompletedQueryTaskProgress;
}

// SerializeImpl @ 14e667ff0

void __thiscall
UE::Interchange::FCompletedQueryTaskProgressCommand::SerializeImpl
          (FCompletedQueryTaskProgressCommand *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,TSizedDefaultAllocator<32>_>
            (param_1,&this->TaskStates);
  return;
}

