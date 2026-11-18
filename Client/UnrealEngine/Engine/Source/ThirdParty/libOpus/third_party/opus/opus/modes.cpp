// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// opus_custom_mode_create @ 14f878070

undefined * opus_custom_mode_create(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  
  ppuVar3 = &PTR_DAT_153513ed0;
  iVar4 = 0;
  do {
    piVar1 = (int *)*ppuVar3;
    iVar2 = 0;
    do {
      if ((param_1 == *piVar1) && (param_2 << ((byte)iVar2 & 0x1f) == piVar1[0xb] * piVar1[0xc])) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0;
        }
        return (&PTR_DAT_153513ed0)[iVar4];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar4 = iVar4 + 1;
    ppuVar3 = ppuVar3 + 1;
    if (0x153513ed7 < (longlong)ppuVar3) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0xffffffff;
      }
      return (undefined *)0x0;
    }
  } while( true );
}

