// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 4

// get_left_channel @ 14f877978

int get_left_channel(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_3 + 1;
  if (param_3 < 0) {
    iVar2 = 0;
  }
  lVar1 = (longlong)iVar2;
  if (lVar1 < *param_1) {
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 * 2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}

// get_mono_channel @ 14f8779bc

int get_mono_channel(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_3 + 1;
  if (param_3 < 0) {
    iVar2 = 0;
  }
  if (iVar2 < *param_1) {
    lVar1 = (longlong)iVar2;
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 + param_1[2]) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}

// get_right_channel @ 14f877a00

int get_right_channel(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_3 + 1;
  if (param_3 < 0) {
    iVar2 = 0;
  }
  lVar1 = (longlong)iVar2;
  if (lVar1 < *param_1) {
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 * 2 + 1U) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}

// validate_layout @ 14f877a48

undefined8 validate_layout(int *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (0xff < param_1[2] + param_1[1]) {
    return 0;
  }
  lVar2 = 0;
  if (0 < (longlong)*param_1) {
    do {
      bVar1 = *(byte *)((longlong)param_1 + lVar2 + 0xc);
      if ((param_1[2] + param_1[1] <= (int)(uint)bVar1) && (bVar1 != 0xff)) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *param_1);
  }
  return 1;
}

