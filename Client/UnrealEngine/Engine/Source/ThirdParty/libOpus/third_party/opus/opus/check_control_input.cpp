// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// check_control_input @ 14f87f55c

undefined8 check_control_input(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == (int *)0x0) {
    celt_fatal("assertion failed: encControl != NULL",
               "../../../third_party/opus/src/silk/check_control_input.c",0x29);
  }
  iVar1 = param_1[2];
  if ((((((((iVar1 == 8000) || (iVar1 == 12000)) || (iVar1 == 16000)) ||
         ((iVar1 == 24000 || (iVar1 == 32000)))) || ((iVar1 == 0xac44 || (iVar1 == 48000)))) &&
       (((iVar1 = param_1[5], iVar1 == 8000 || (iVar1 == 12000)) || (iVar1 == 16000)))) &&
      (((((iVar2 = param_1[3], iVar2 == 8000 || (iVar2 == 12000)) || (iVar2 == 16000)) &&
        (((iVar3 = param_1[4], iVar3 == 8000 || (iVar3 == 12000)) || (iVar3 == 16000)))) &&
       ((iVar3 <= iVar1 && (iVar1 <= iVar2)))))) && (iVar3 <= iVar2)) {
    if (((uint)param_1[6] < 0x3d) &&
       ((0x1000010000100400U >> ((longlong)param_1[6] & 0x3fU) & 1) != 0)) {
      if ((uint)param_1[8] < 0x65) {
        if ((uint)param_1[0xc] < 2) {
          if ((uint)param_1[0xd] < 2) {
            if ((uint)param_1[10] < 2) {
              if (*param_1 - 1U < 2) {
                if (param_1[1] - 1U < 2) {
                  if (param_1[1] <= *param_1) {
                    if ((uint)param_1[9] < 0xb) {
                      return 0;
                    }
                    celt_fatal("assertion failed: 0",
                               "../../../third_party/opus/src/silk/check_control_input.c",0x65);
                    return 0xffffff96;
                  }
                  uVar4 = 0x61;
                }
                else {
                  uVar4 = 0x5d;
                }
              }
              else {
                uVar4 = 0x59;
              }
              celt_fatal("assertion failed: 0",
                         "../../../third_party/opus/src/silk/check_control_input.c",uVar4);
              uVar4 = 0xffffff91;
            }
            else {
              celt_fatal("assertion failed: 0",
                         "../../../third_party/opus/src/silk/check_control_input.c",0x55);
              uVar4 = 0xffffff95;
            }
          }
          else {
            celt_fatal("assertion failed: 0",
                       "../../../third_party/opus/src/silk/check_control_input.c",0x51);
            uVar4 = 0xffffff93;
          }
        }
        else {
          celt_fatal("assertion failed: 0",
                     "../../../third_party/opus/src/silk/check_control_input.c",0x4d);
          uVar4 = 0xffffff94;
        }
      }
      else {
        celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/check_control_input.c",
                   0x49);
        uVar4 = 0xffffff97;
      }
    }
    else {
      celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/check_control_input.c",
                 0x45);
      uVar4 = 0xffffff99;
    }
  }
  else {
    celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/check_control_input.c",0x3e
              );
    uVar4 = 0xffffff9a;
  }
  return uVar4;
}

