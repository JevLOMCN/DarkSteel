// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PacketHandler
// Functions: 1

// AddStage @ 14463e8c0

void __cdecl FPacketAudit::AddStage(FString *param_1,FBitWriter *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  if (GPacketAuditor != (FPacketAudit *)0x0) {
    pFVar2 = ::FString::FString(&local_18,param_1);
    AddStage_Internal(GPacketAuditor,pFVar2,param_2,param_3);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

