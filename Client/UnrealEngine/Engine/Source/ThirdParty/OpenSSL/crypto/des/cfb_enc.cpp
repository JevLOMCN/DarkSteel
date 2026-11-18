// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// DES_cfb_encrypt @ 14f73b640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void DES_cfb_encrypt(longlong param_1,undefined1 *param_2,int param_3,uint param_4,
                    undefined8 param_5,uint *param_6,int param_7)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  int local_84;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  uint *local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78 = param_5;
  local_70 = (longlong)param_3;
  local_60 = param_6;
  uVar7 = param_3 >> 0x1f & 7;
  uVar2 = param_3 + uVar7;
  local_84 = (uVar2 & 7) - uVar7;
  local_98 = (int)uVar2 >> 3;
  uVar2 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
  uVar12 = (ulonglong)(int)uVar2;
  if (param_3 - 1U < 0x40) {
    local_68 = (undefined1 *)((longlong)param_6 + 1);
    uVar7 = *param_6;
    uVar9 = param_6[1];
    if (param_7 == 0) {
      if (uVar2 <= param_4) {
        local_80 = 8 - local_84;
        local_94 = uVar2 - 1;
        uVar13 = uVar12;
        do {
          local_7c = param_4 - (int)uVar13;
          local_90 = uVar7;
          local_8c = uVar9;
          DES_encrypt1(&local_90,local_78,1);
          param_1 = param_1 + uVar12;
          uVar14 = 0;
          uVar8 = 0;
          switch(local_94) {
          case 7:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = (uint)*pbVar1 << 0x18;
          case 6:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | (uint)*pbVar1 << 0x10;
          case 5:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | (uint)*pbVar1 << 8;
          case 4:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar14 = uVar14 | *pbVar1;
          case 3:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = (uint)*pbVar1 << 0x18;
          case 2:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar8 | (uint)*pbVar1 << 0x10;
          case 1:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar8 | (uint)*pbVar1 << 8;
          case 0:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar8 = uVar8 | *pbVar1;
          default:
            param_1 = param_1 + uVar12;
            uVar10 = uVar9;
            uVar11 = uVar8;
            if ((local_70 != 0x20) && (uVar10 = uVar8, uVar11 = uVar14, local_70 != 0x40)) {
              local_58 = uVar7;
              local_54 = uVar9;
              local_50 = uVar8;
              local_4c = uVar14;
              if (local_84 == 0) {
                memmove(&local_58,(void *)((longlong)&local_58 + (longlong)local_98),8);
                uVar10 = local_58;
                uVar11 = local_54;
              }
              else {
                lVar3 = (longlong)local_98;
                bVar4 = (byte)local_84;
                bVar5 = (byte)local_80;
                bVar6 = *(char *)((longlong)&local_58 + lVar3) << (bVar4 & 0x1f) |
                        *(byte *)((longlong)&local_58 + lVar3 + 1) >> (bVar5 & 0x1f);
                local_58._1_3_ = (undefined3)(uVar7 >> 8);
                local_58 = CONCAT31(local_58._1_3_,bVar6);
                local_58._2_2_ = (undefined2)(uVar7 >> 0x10);
                local_58._0_2_ =
                     CONCAT11(*(char *)((longlong)&local_58 + lVar3 + 1) << (bVar4 & 0x1f) |
                              *(byte *)((longlong)&local_58 + lVar3 + 2) >> (bVar5 & 0x1f),bVar6);
                local_58._3_1_ = (undefined1)(uVar7 >> 0x18);
                local_58._0_3_ =
                     CONCAT12(*(char *)((longlong)&local_58 + lVar3 + 2) << (bVar4 & 0x1f) |
                              *(byte *)((longlong)&local_58 + lVar3 + 3) >> (bVar5 & 0x1f),
                              (undefined2)local_58);
                local_58 = CONCAT13(*(char *)((longlong)&local_58 + lVar3 + 3) << (bVar4 & 0x1f) |
                                    *(byte *)((longlong)&local_54 + lVar3) >> (bVar5 & 0x1f),
                                    (undefined3)local_58);
                bVar6 = *(char *)((longlong)&local_54 + lVar3) << (bVar4 & 0x1f) |
                        *(byte *)((longlong)&local_54 + lVar3 + 1) >> (bVar5 & 0x1f);
                local_54._1_3_ = (undefined3)(uVar9 >> 8);
                local_54 = CONCAT31(local_54._1_3_,bVar6);
                local_54._2_2_ = (undefined2)(uVar9 >> 0x10);
                local_54._0_2_ =
                     CONCAT11(*(char *)((longlong)&local_54 + lVar3 + 1) << (bVar4 & 0x1f) |
                              *(byte *)((longlong)&local_54 + lVar3 + 2) >> (bVar5 & 0x1f),bVar6);
                local_54._3_1_ = (undefined1)(uVar9 >> 0x18);
                local_54._0_3_ =
                     CONCAT12(*(char *)((longlong)&local_54 + lVar3 + 2) << (bVar4 & 0x1f) |
                              *(byte *)((longlong)&local_54 + lVar3 + 3) >> (bVar5 & 0x1f),
                              (undefined2)local_54);
                local_54 = CONCAT13(*(char *)((longlong)&local_54 + lVar3 + 3) << (bVar4 & 0x1f) |
                                    *(byte *)((longlong)&local_50 + lVar3) >> (bVar5 & 0x1f),
                                    (undefined3)local_54);
                uVar10 = local_58;
                uVar11 = local_54;
              }
            }
          }
          uVar9 = uVar11;
          uVar7 = uVar10;
          uVar8 = uVar8 ^ local_90;
          param_2 = param_2 + uVar12;
          uVar14 = uVar14 ^ local_8c;
          switch(local_94) {
          case 7:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar14 >> 0x18);
          case 6:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar14 >> 0x10);
          case 5:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar14 >> 8);
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (char)uVar14;
          case 3:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar8 >> 0x18);
          case 2:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar8 >> 0x10);
          case 1:
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar8 >> 8);
          case 0:
            param_2 = param_2 + -1;
            *param_2 = (char)uVar8;
          }
          param_2 = param_2 + uVar12;
          uVar13 = (ulonglong)uVar2;
          param_4 = local_7c;
        } while (uVar2 <= local_7c);
      }
    }
    else if (uVar2 <= param_4) {
      local_94 = 8 - local_84;
      uVar13 = uVar12;
      do {
        param_4 = param_4 - (int)uVar13;
        local_90 = uVar7;
        local_8c = uVar9;
        DES_encrypt1(&local_90);
        uVar11 = 0;
        uVar10 = 0;
        uVar8 = 0;
        uVar14 = 0;
        param_1 = param_1 + uVar12;
        switch(uVar2 - 1) {
        case 7:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar10 = (uint)*pbVar1 << 0x18;
        case 6:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar11 = uVar10 | (uint)*pbVar1 << 0x10;
        case 5:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar11 = uVar11 | (uint)*pbVar1 << 8;
        case 4:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar11 = uVar11 | *pbVar1;
        case 3:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar14 = (uint)*pbVar1 << 0x18;
        case 2:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar8 = uVar14 | (uint)*pbVar1 << 0x10;
        case 1:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar8 = uVar8 | (uint)*pbVar1 << 8;
        case 0:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar8 = uVar8 | *pbVar1;
        }
        uVar8 = uVar8 ^ local_90;
        param_1 = param_1 + uVar12;
        uVar11 = uVar11 ^ local_8c;
        param_2 = param_2 + uVar12;
        switch(uVar2 - 1) {
        case 7:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar11 >> 0x18);
        case 6:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar11 >> 0x10);
        case 5:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar11 >> 8);
        case 4:
          param_2 = param_2 + -1;
          *param_2 = (char)uVar11;
        case 3:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar8 >> 0x18);
        case 2:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar8 >> 0x10);
        case 1:
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar8 >> 8);
        case 0:
          param_2 = param_2 + -1;
          *param_2 = (char)uVar8;
        }
        param_2 = param_2 + uVar12;
        uVar14 = uVar9;
        uVar10 = uVar8;
        if ((local_70 != 0x20) && (uVar14 = uVar8, uVar10 = uVar11, local_70 != 0x40)) {
          local_58 = uVar7;
          local_54 = uVar9;
          local_50 = uVar8;
          local_4c = uVar11;
          if (local_84 == 0) {
            memmove(&local_58,(void *)((longlong)&local_58 + (longlong)local_98),8);
            uVar14 = local_58;
            uVar10 = local_54;
          }
          else {
            lVar3 = (longlong)local_98;
            bVar4 = (byte)local_94;
            bVar5 = (byte)local_84;
            bVar6 = *(byte *)((longlong)&local_58 + lVar3 + 1) >> (bVar4 & 0x1f) |
                    *(char *)((longlong)&local_58 + lVar3) << (bVar5 & 0x1f);
            local_58._1_3_ = (undefined3)(uVar7 >> 8);
            local_58 = CONCAT31(local_58._1_3_,bVar6);
            local_58._2_2_ = (undefined2)(uVar7 >> 0x10);
            local_58._0_2_ =
                 CONCAT11(*(char *)((longlong)&local_58 + lVar3 + 1) << (bVar5 & 0x1f) |
                          *(byte *)((longlong)&local_58 + lVar3 + 2) >> (bVar4 & 0x1f),bVar6);
            local_58._3_1_ = (undefined1)(uVar7 >> 0x18);
            local_58._0_3_ =
                 CONCAT12(*(char *)((longlong)&local_58 + lVar3 + 2) << (bVar5 & 0x1f) |
                          *(byte *)((longlong)&local_58 + lVar3 + 3) >> (bVar4 & 0x1f),
                          (undefined2)local_58);
            local_58 = CONCAT13(*(char *)((longlong)&local_58 + lVar3 + 3) << (bVar5 & 0x1f) |
                                *(byte *)((longlong)&local_54 + lVar3) >> (bVar4 & 0x1f),
                                (undefined3)local_58);
            bVar6 = *(char *)((longlong)&local_54 + lVar3) << (bVar5 & 0x1f) |
                    *(byte *)((longlong)&local_54 + lVar3 + 1) >> (bVar4 & 0x1f);
            local_54._1_3_ = (undefined3)(uVar9 >> 8);
            local_54 = CONCAT31(local_54._1_3_,bVar6);
            local_54._2_2_ = (undefined2)(uVar9 >> 0x10);
            local_54._0_2_ =
                 CONCAT11(*(char *)((longlong)&local_54 + lVar3 + 1) << (bVar5 & 0x1f) |
                          *(byte *)((longlong)&local_54 + lVar3 + 2) >> (bVar4 & 0x1f),bVar6);
            local_54._3_1_ = (undefined1)(uVar9 >> 0x18);
            local_54._0_3_ =
                 CONCAT12(*(char *)((longlong)&local_54 + lVar3 + 2) << (bVar5 & 0x1f) |
                          *(byte *)((longlong)&local_54 + lVar3 + 3) >> (bVar4 & 0x1f),
                          (undefined2)local_54);
            local_54 = CONCAT13(*(char *)((longlong)&local_54 + lVar3 + 3) << (bVar5 & 0x1f) |
                                *(byte *)((longlong)&local_50 + lVar3) >> (bVar4 & 0x1f),
                                (undefined3)local_54);
            uVar14 = local_58;
            uVar10 = local_54;
          }
        }
        uVar9 = uVar10;
        uVar7 = uVar14;
        uVar13 = (ulonglong)uVar2;
      } while (uVar2 <= param_4);
    }
    *(char *)local_60 = (char)uVar7;
    *local_68 = (char)(uVar7 >> 8);
    local_68[1] = (char)(uVar7 >> 0x10);
    local_68[2] = (char)(uVar7 >> 0x18);
    local_68[3] = (char)uVar9;
    local_68[4] = (char)(uVar9 >> 8);
    local_68[5] = (char)(uVar9 >> 0x10);
    local_68[6] = (char)(uVar9 >> 0x18);
  }
  return;
}

