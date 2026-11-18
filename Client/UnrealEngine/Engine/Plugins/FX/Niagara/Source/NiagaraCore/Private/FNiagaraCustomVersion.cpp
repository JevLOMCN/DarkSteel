// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 1

// GetLatestScriptCompileVersion @ 148dcb3f0

FGuid * __cdecl FNiagaraCustomVersion::GetLatestScriptCompileVersion(FGuid *__return_storage_ptr__)

{
  FDevSystemGuids *pFVar1;
  FGuid local_18;
  
  pFVar1 = FDevSystemGuids::Get();
  local_18.A = (pFVar1->Niagara_LatestScriptCompileVersion).A;
  local_18.B = (pFVar1->Niagara_LatestScriptCompileVersion).B;
  local_18.C = (pFVar1->Niagara_LatestScriptCompileVersion).C;
  local_18.D = (pFVar1->Niagara_LatestScriptCompileVersion).D;
  FDevSystemGuids::GetSystemGuid(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

