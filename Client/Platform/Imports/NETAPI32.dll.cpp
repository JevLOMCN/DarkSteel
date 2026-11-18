// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 2

// NetShareGetInfo @ 15015a936

DWORD __stdcall
NetShareGetInfo(char *pszServer,char *pszNetName,short sLevel,char *pbBuffer,ushort cbBuffer,
               ushort *pcbTotalAvail)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = NetShareGetInfo(pszServer,pszNetName,sLevel,pbBuffer,cbBuffer,pcbTotalAvail);
  return DVar1;
}

// NetApiBufferFree @ 15015a942

void NetApiBufferFree(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NetApiBufferFree();
  return;
}

