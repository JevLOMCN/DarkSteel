// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 1

// Wait @ 144585090

int __thiscall
UE::IoStore::HTTP::FPoller::Wait(FPoller *this,FPollFd *param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014458509b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAPoll(param_1,param_2,param_3);
  return iVar1;
}

