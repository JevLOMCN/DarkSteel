// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// MemFnv32 @ 1418e90a0

uint __cdecl FFnv::MemFnv32(void *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_3 + 0x811c9dc5;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *(byte *)param_1;
    param_1 = (void *)((longlong)param_1 + 1);
    uVar2 = (bVar1 ^ uVar2) * 0x1000193;
  }
  return uVar2;
}

// MemFnv64 @ 1418e90d0

ulong64 __cdecl FFnv::MemFnv64(void *param_1,int param_2,ulong64 param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 + 0xcbf29ce484222325;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *(byte *)param_1;
    param_1 = (void *)((longlong)param_1 + 1);
    uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
  }
  return uVar2;
}

