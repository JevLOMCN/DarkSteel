// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// HasHitQuota @ 1441dd410

bool __thiscall FDDoSState::HasHitQuota(FDDoSState *this,FDDoSPacketCounters *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  if ((this->EscalateQuotaPacketsPerSec < 1) ||
     (param_1->NonConnPacketCounter < this->EscalateQuotaPacketsPerSec)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((this->EscalateQuotaDisconnPacketsPerSec < 1) ||
     (param_1->DisconnPacketCounter < this->EscalateQuotaDisconnPacketsPerSec)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((this->EscalateQuotaBadPacketsPerSec < 1) ||
     (param_1->BadPacketCounter < this->EscalateQuotaBadPacketsPerSec)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((this->EscalateTimeQuotaMSPerFrame < 1) || (param_2 <= this->EscalateTimeQuotaMSPerFrame)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((((!bVar1) && (!bVar2)) && (!bVar3)) && (!bVar4)) {
    return false;
  }
  return true;
}

