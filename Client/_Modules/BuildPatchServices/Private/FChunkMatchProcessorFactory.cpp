// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247550

IChunkMatchProcessor * __cdecl BuildPatchServices::FChunkMatchProcessorFactory::Create(void)

{
  IChunkMatchProcessor *pIVar1;
  
  pIVar1 = ::operator_new(0x198);
  if (pIVar1 != (IChunkMatchProcessor *)0x0) {
    *pIVar1 = (IChunkMatchProcessor)&___7FChunkMatchProcessor_BuildPatchServices__6B_;
    pIVar1[1] = (IChunkMatchProcessor)0x0;
    pIVar1[2] = (IChunkMatchProcessor)0x0;
    pIVar1[5] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 6) = 0;
    *(undefined4 *)&pIVar1[6].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 7) = 0xffffffff;
    *(undefined4 *)&pIVar1[7].field_0x4 = 0;
    pIVar1[9] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 10) = 0;
    pIVar1[0xb] = (IChunkMatchProcessor)0x0;
    pIVar1[0xc] = (IChunkMatchProcessor)0x0;
    pIVar1[0xf] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x10) = 0;
    *(undefined4 *)&pIVar1[0x10].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x11) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x11].field_0x4 = 0;
    pIVar1[0x13] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x14) = 0;
    pIVar1[0x15] = (IChunkMatchProcessor)0x0;
    pIVar1[0x16] = (IChunkMatchProcessor)0x0;
    pIVar1[0x19] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x1a) = 0;
    *(undefined4 *)&pIVar1[0x1a].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x1b) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x1b].field_0x4 = 0;
    pIVar1[0x1d] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x1e) = 0;
    pIVar1[0x1f] = (IChunkMatchProcessor)0x0;
    pIVar1[0x20] = (IChunkMatchProcessor)0x0;
    pIVar1[0x23] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x24) = 0;
    *(undefined4 *)&pIVar1[0x24].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x25) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x25].field_0x4 = 0;
    pIVar1[0x27] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x28) = 0;
    pIVar1[0x29] = (IChunkMatchProcessor)0x0;
    pIVar1[0x2a] = (IChunkMatchProcessor)0x0;
    pIVar1[0x2d] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x2e) = 0;
    *(undefined4 *)&pIVar1[0x2e].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0x2f) = 0xffffffff;
    *(undefined4 *)&pIVar1[0x2f].field_0x4 = 0;
    pIVar1[0x31] = (IChunkMatchProcessor)0x0;
    *(undefined4 *)(pIVar1 + 0x32) = 0;
    return pIVar1;
  }
  return (IChunkMatchProcessor *)0x0;
}

