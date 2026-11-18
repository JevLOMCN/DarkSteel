// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// CRYPTO_cbc128_decrypt @ 14f72c600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CRYPTO_cbc128_decrypt
               (ulonglong *param_1,ulonglong *param_2,byte *param_3,undefined8 param_4,
               ulonglong *param_5,code *param_6)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  code *local_70;
  byte *local_68;
  ulonglong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60 = param_5;
  local_70 = param_6;
  if (param_3 != (byte *)0x0) {
    local_78 = param_4;
    if (param_1 == param_2) {
      if (&DAT_0000000f < param_3) {
        uVar7 = (ulonglong)param_3 >> 4;
        local_68 = param_3 + uVar7 * -0x10;
        do {
          (*local_70)(param_1,&local_58,param_4);
          uVar2 = *param_1;
          *param_2 = *param_5 ^ local_58;
          *param_5 = uVar2;
          uVar2 = param_1[1];
          param_1 = param_1 + 2;
          param_2[1] = param_5[1] ^ local_50;
          param_2 = param_2 + 2;
          param_5[1] = uVar2;
          uVar7 = uVar7 - 1;
          param_3 = local_68;
        } while (uVar7 != 0);
      }
    }
    else if (&DAT_0000000f < param_3) {
      uVar7 = (ulonglong)param_3 >> 4;
      local_68 = param_3 + uVar7 * -0x10;
      do {
        puVar6 = param_1;
        (*param_6)(puVar6,param_2,param_4);
        *param_2 = *param_2 ^ *param_5;
        param_2[1] = param_2[1] ^ param_5[1];
        param_1 = puVar6 + 2;
        param_2 = param_2 + 2;
        uVar7 = uVar7 - 1;
        param_5 = puVar6;
      } while (uVar7 != 0);
      param_3 = local_68;
      param_5 = local_60;
      if (local_60 != puVar6) {
        uVar3 = *(undefined4 *)((longlong)puVar6 + 4);
        uVar7 = puVar6[1];
        uVar4 = *(undefined4 *)((longlong)puVar6 + 0xc);
        *(int *)local_60 = (int)*puVar6;
        *(undefined4 *)((longlong)local_60 + 4) = uVar3;
        *(int *)(local_60 + 1) = (int)uVar7;
        *(undefined4 *)((longlong)local_60 + 0xc) = uVar4;
      }
    }
    if (param_3 != (byte *)0x0) {
      local_60 = (ulonglong *)(1 - (longlong)&local_58);
      lVar8 = (longlong)param_2 + 1;
      do {
        (*local_70)(param_1,&local_58,local_78);
        pbVar5 = (byte *)0x0;
        do {
          if (param_3 <= pbVar5) break;
          pbVar9 = (byte *)((longlong)&local_58 + (longlong)pbVar5);
          bVar1 = (pbVar9 + -((longlong)&local_58 + 1) + 1)[(longlong)param_1];
          pbVar9[-((longlong)&local_58 + 1) + lVar8] =
               pbVar9[(longlong)param_5 - (longlong)&local_58] ^ *pbVar9;
          pbVar9[(longlong)param_5 - (longlong)&local_58] = bVar1;
          if (param_3 <= pbVar9 + (longlong)local_60) {
            pbVar5 = pbVar5 + 1;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 1];
          pbVar5[lVar8] = pbVar5[(longlong)&local_58 + 1] ^ pbVar5[(longlong)param_5 + 1];
          pbVar5[(longlong)param_5 + 1] = bVar1;
          if (param_3 <= pbVar9 + (2 - (longlong)&local_58)) {
            pbVar5 = pbVar5 + 2;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 2];
          pbVar5[lVar8 + 1] = pbVar5[(longlong)&local_58 + 2] ^ pbVar5[(longlong)param_5 + 2];
          pbVar5[(longlong)param_5 + 2] = bVar1;
          if (param_3 <= pbVar9 + (3 - (longlong)&local_58)) {
            pbVar5 = pbVar5 + 3;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 3];
          pbVar5[lVar8 + 2] = pbVar5[(longlong)&local_58 + 3] ^ pbVar5[(longlong)param_5 + 3];
          pbVar5[(longlong)param_5 + 3] = bVar1;
          pbVar5 = pbVar5 + 4;
        } while (pbVar5 < &DAT_00000010);
        if (param_3 < &DAT_00000011) {
          if (&DAT_00000010 <= pbVar5) {
            return;
          }
          pbVar9 = (byte *)((longlong)param_5 + (longlong)pbVar5);
          lVar8 = 0x10 - (longlong)pbVar5;
          do {
            *pbVar9 = pbVar9[(longlong)param_1 - (longlong)param_5];
            pbVar9 = pbVar9 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          return;
        }
        param_1 = param_1 + 2;
        lVar8 = lVar8 + 0x10;
        param_3 = param_3 + -0x10;
      } while (param_3 != (byte *)0x0);
    }
  }
  return;
}

// CRYPTO_cbc128_encrypt @ 14f72c900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_cbc128_encrypt
               (ulonglong *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
               undefined8 *param_5,code *param_6)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_3 != (byte *)0x0) {
    puVar8 = param_5;
    if (&DAT_0000000f < param_3) {
      uVar6 = (ulonglong)param_3 >> 4;
      param_3 = param_3 + uVar6 * -0x10;
      puVar7 = param_5;
      do {
        puVar8 = param_2;
        lVar5 = 2;
        puVar3 = param_1;
        do {
          *(ulonglong *)(((longlong)puVar8 - (longlong)param_1) + (longlong)puVar3) =
               *(ulonglong *)(((longlong)puVar7 - (longlong)param_1) + (longlong)puVar3) ^ *puVar3;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        (*param_6)(puVar8,puVar8,param_4);
        param_1 = param_1 + 2;
        uVar6 = uVar6 - 1;
        param_2 = puVar8 + 2;
        puVar7 = puVar8;
      } while (uVar6 != 0);
    }
    for (; param_3 != (byte *)0x0; param_3 = param_3 + -0x10) {
      pbVar2 = (byte *)0x0;
      do {
        if (param_3 <= pbVar2) {
LAB_14f72ca54:
          if (pbVar2 < &DAT_00000010) {
            pbVar4 = pbVar2 + (longlong)param_2;
            lVar5 = 0x10 - (longlong)pbVar2;
            do {
              *pbVar4 = pbVar4[(longlong)puVar8 - (longlong)param_2];
              pbVar4 = pbVar4 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          break;
        }
        pbVar4 = pbVar2 + (longlong)param_1;
        pbVar4[(longlong)param_2 - (longlong)param_1] =
             pbVar4[(longlong)puVar8 - (longlong)param_1] ^ *pbVar4;
        if (param_3 <= pbVar4 + (1 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 1;
          goto LAB_14f72ca54;
        }
        pbVar2[(longlong)param_2 + 1] =
             pbVar2[(longlong)param_1 + 1] ^ (pbVar2 + 1)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (2 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 2;
          goto LAB_14f72ca54;
        }
        pbVar2[(longlong)param_2 + 2] =
             pbVar2[(longlong)param_1 + 2] ^ (pbVar2 + 2)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (3 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 3;
          goto LAB_14f72ca54;
        }
        pbVar2[(longlong)param_2 + 3] =
             pbVar2[(longlong)param_1 + 3] ^ (pbVar2 + 3)[(longlong)puVar8];
        pbVar2 = pbVar2 + 4;
      } while (pbVar2 < &DAT_00000010);
      (*param_6)(param_2,param_2,param_4);
      puVar8 = param_2;
      if (param_3 < &DAT_00000011) break;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
    if (param_5 != puVar8) {
      uVar1 = puVar8[1];
      *param_5 = *puVar8;
      param_5[1] = uVar1;
    }
  }
  return;
}

