// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_NLSF_unpack @ 14f8869bc

void silk_NLSF_unpack(short *param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  
  iVar2 = 0;
  pbVar4 = (byte *)((longlong)((*(short *)(param_3 + 2) * param_4) / 2) +
                   *(longlong *)(param_3 + 0x28));
  if (0 < *(short *)(param_3 + 2)) {
    puVar5 = (undefined1 *)(param_2 + 1);
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *param_1 = (ushort)(bVar1 >> 1 & 7) * 9;
      puVar5[-1] = *(undefined1 *)
                    ((longlong)(int)((*(short *)(param_3 + 2) + -1) * (bVar1 & 1) + iVar2) +
                    *(longlong *)(param_3 + 0x20));
      param_1[1] = (ushort)(bVar1 >> 5) * 9;
      iVar3 = (bVar1 >> 4 & 1) * (*(short *)(param_3 + 2) + -1) + iVar2;
      iVar2 = iVar2 + 2;
      *puVar5 = *(undefined1 *)((longlong)iVar3 + 1 + *(longlong *)(param_3 + 0x20));
      puVar5 = puVar5 + 2;
      param_1 = param_1 + 2;
    } while (iVar2 < *(short *)(param_3 + 2));
  }
  return;
}

