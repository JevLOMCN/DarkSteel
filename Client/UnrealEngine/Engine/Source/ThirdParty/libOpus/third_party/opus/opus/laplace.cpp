// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// ec_laplace_decode @ 14f884f70

int ec_laplace_decode(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = ec_decode_bin(param_1,0xf);
  uVar3 = 0;
  if (uVar1 < param_2) goto LAB_14f885021;
  iVar4 = 1;
  uVar3 = ((0x7fe0 - param_2) * (0x4000 - param_3) >> 0xf) + 1;
  if (uVar3 < 2) {
LAB_14f884fe8:
    uVar2 = uVar1 - param_2 >> 1;
    iVar4 = iVar4 + uVar2;
    uVar2 = param_2 + uVar2 * 2;
  }
  else {
    do {
      uVar2 = uVar3 * 2 + param_2;
      if (uVar1 < uVar2) break;
      iVar4 = iVar4 + 1;
      uVar3 = ((uVar3 * 2 + -2) * param_3 >> 0xf) + 1;
      param_2 = uVar2;
    } while (1 < uVar3);
    uVar2 = param_2;
    if (uVar3 < 2) goto LAB_14f884fe8;
  }
  param_2 = uVar3;
  uVar3 = uVar2 + param_2;
  if (uVar1 < uVar3) {
    iVar4 = -iVar4;
    uVar3 = uVar2;
  }
  if (0x7fff < uVar3) {
    celt_fatal("assertion failed: fl<32768","../../../third_party/opus/src/celt/laplace.c",0x80);
  }
LAB_14f885021:
  if (param_2 == 0) {
    celt_fatal("assertion failed: fs>0","../../../third_party/opus/src/celt/laplace.c",0x81);
  }
  if (uVar1 < uVar3) {
    celt_fatal("assertion failed: fl<=fm","../../../third_party/opus/src/celt/laplace.c",0x82);
  }
  uVar2 = 0x8000;
  if (uVar3 + param_2 < 0x8000) {
    uVar2 = uVar3 + param_2;
  }
  if (uVar2 <= uVar1) {
    celt_fatal("assertion failed: fm<IMIN(fl+fs,32768)",
               "../../../third_party/opus/src/celt/laplace.c",0x83);
  }
  ec_dec_update(param_1,uVar3,uVar2,0x8000);
  return iVar4;
}

// ec_laplace_encode @ 14f8850bc

void ec_laplace_encode(undefined8 param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *param_2;
  iVar7 = 0;
  if (uVar5 != 0) {
    uVar1 = (int)uVar5 >> 0x1f;
    uVar6 = uVar1 + uVar5 ^ uVar1;
    uVar4 = (0x7fe0 - param_3) * (0x4000 - param_4);
    uVar5 = param_3;
    for (iVar3 = 1; (param_3 = uVar4 >> 0xf, param_3 != 0 && (iVar3 < (int)uVar6));
        iVar3 = iVar3 + 1) {
      uVar5 = uVar5 + 2 + param_3 * 2;
      uVar4 = param_3 * 2 * param_4;
    }
    if (param_3 == 0) {
      iVar7 = uVar6 - iVar3;
      iVar2 = ((int)((0x8000 - uVar1) - uVar5) >> 1) + -1;
      if (iVar7 < iVar2) {
        iVar2 = iVar7;
      }
      iVar7 = uVar5 + uVar1 + 1 + iVar2 * 2;
      param_3 = 0x8000 - iVar7;
      if (1 < param_3) {
        param_3 = 1;
      }
      *param_2 = iVar2 + iVar3 + uVar1 ^ uVar1;
    }
    else {
      param_3 = param_3 + 1;
      iVar7 = uVar5 + (~uVar1 & param_3);
    }
    if (0x8000 < iVar7 + param_3) {
      celt_fatal("assertion failed: fl+fs<=32768","../../../third_party/opus/src/celt/laplace.c",
                 0x58);
    }
    if (param_3 == 0) {
      celt_fatal("assertion failed: fs>0","../../../third_party/opus/src/celt/laplace.c",0x59);
    }
  }
  ec_encode_bin(param_1,iVar7,iVar7 + param_3,0xf);
  return;
}

