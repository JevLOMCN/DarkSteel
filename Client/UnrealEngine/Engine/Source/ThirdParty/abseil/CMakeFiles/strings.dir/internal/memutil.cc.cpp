// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 1

// memcasecmp @ 14f8fe060

/* int __cdecl absl::lts_20240722::strings_internal::memcasecmp(char const * __ptr64,char const *
   __ptr64,unsigned __int64) */

int __cdecl
absl::lts_20240722::strings_internal::memcasecmp(char *param_1,char *param_2,__uint64 param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_3 != 0) {
    pbVar2 = (byte *)param_2;
    do {
      bVar4 = pbVar2[(longlong)param_1 - (longlong)param_2];
      bVar1 = *pbVar2;
      if (bVar4 != bVar1) {
        bVar3 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar3 = bVar4;
        }
        bVar4 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if ((uint)bVar3 - (uint)bVar4 != 0) {
          return (uint)bVar3 - (uint)bVar4;
        }
      }
      pbVar2 = pbVar2 + 1;
    } while ((ulonglong)((longlong)pbVar2 - (longlong)param_2) < param_3);
  }
  return 0;
}

