// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// DES_ede3_cfb64_encrypt @ 14f73c880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_ede3_cfb64_encrypt
               (byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 *param_7,uint *param_8,int param_9)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  
  puVar2 = param_7;
  uVar4 = *param_8;
  if (param_9 == 0) {
    param_9 = 0;
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar4 == 0) {
        param_7._0_4_ = *puVar2;
        param_7._4_4_ = puVar2[1];
        DES_encrypt3(&param_7,param_4,param_5,param_6);
        *(undefined1 *)puVar2 = param_7._0_1_;
        *(char *)((longlong)puVar2 + 1) = (char)((uint)param_7._0_4_ >> 8);
        *(char *)((longlong)puVar2 + 2) = (char)((uint)param_7._0_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 3) = (char)((uint)param_7._0_4_ >> 0x18);
        *(undefined1 *)(puVar2 + 1) = param_7._4_1_;
        *(char *)((longlong)puVar2 + 5) = (char)((uint)param_7._4_4_ >> 8);
        *(char *)((longlong)puVar2 + 6) = (char)((uint)param_7._4_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 7) = (char)((uint)param_7._4_4_ >> 0x18);
      }
      bVar3 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *(byte *)((longlong)(int)uVar4 + (longlong)puVar2);
      *(byte *)((longlong)(int)uVar4 + (longlong)puVar2) = bVar3;
      *param_2 = bVar3 ^ bVar1;
      param_2 = param_2 + 1;
      uVar4 = uVar4 + 1 & 7;
    }
  }
  else if (param_3 != 0) {
    lVar5 = (longlong)param_1 - (longlong)param_2;
    do {
      param_3 = param_3 + -1;
      if (uVar4 == 0) {
        param_7._0_4_ = *puVar2;
        param_7._4_4_ = puVar2[1];
        DES_encrypt3(&param_7,param_4,param_5,param_6);
        *(undefined1 *)puVar2 = param_7._0_1_;
        *(char *)((longlong)puVar2 + 1) = (char)((uint)param_7._0_4_ >> 8);
        *(char *)((longlong)puVar2 + 2) = (char)((uint)param_7._0_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 3) = (char)((uint)param_7._0_4_ >> 0x18);
        *(undefined1 *)(puVar2 + 1) = param_7._4_1_;
        *(char *)((longlong)puVar2 + 5) = (char)((uint)param_7._4_4_ >> 8);
        *(char *)((longlong)puVar2 + 6) = (char)((uint)param_7._4_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 7) = (char)((uint)param_7._4_4_ >> 0x18);
      }
      bVar3 = param_2[lVar5] ^ *(byte *)((longlong)(int)uVar4 + (longlong)puVar2);
      *param_2 = bVar3;
      param_2 = param_2 + 1;
      *(byte *)((longlong)(int)uVar4 + (longlong)puVar2) = bVar3;
      uVar4 = uVar4 + 1 & 7;
    } while (param_3 != 0);
  }
  *param_8 = uVar4;
  return;
}

// DES_ede3_cfb_encrypt @ 14f73cb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void DES_ede3_cfb_encrypt
               (longlong param_1,byte *param_2,int param_3,uint param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,uint *param_8,int param_9)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_c8 [32];
  byte local_a8;
  byte local_a7;
  byte local_a6;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  ulonglong local_60;
  uint *local_58;
  byte local_50 [4];
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar16 = param_3 + 7U >> 3;
  local_80 = param_7;
  local_58 = param_8;
  local_78 = param_5;
  local_70 = param_6;
  if (param_3 < 0x41) {
    local_68 = (undefined1 *)((longlong)param_8 + 1);
    uVar13 = *param_8;
    uVar12 = param_8[1];
    local_90 = param_3;
    local_84 = uVar16;
    if (param_9 == 0) {
      if (uVar16 <= param_4) {
        uVar10 = param_3 >> 0x1f & 7;
        uVar7 = param_3 + uVar10;
        local_8c = (int)uVar7 >> 3;
        local_a0 = (uVar7 & 7) - uVar10;
        local_a4 = 8 - local_a0;
        local_9c = uVar16 - 1;
        local_60 = (ulonglong)uVar16;
        do {
          uVar16 = local_84;
          local_88 = param_4 - local_84;
          local_98 = uVar13;
          local_94 = uVar12;
          DES_encrypt3(&local_98,local_78,local_70,local_80);
          iVar2 = local_a0;
          uVar7 = 0;
          uVar11 = (ulonglong)uVar16;
          uVar16 = 0;
          param_1 = param_1 + uVar11;
          switch(local_9c) {
          case 7:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar16 = (uint)*pbVar1 << 0x18;
          case 6:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar16 = uVar16 | (uint)*pbVar1 << 0x10;
          case 5:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar16 = uVar16 | (uint)*pbVar1 << 8;
          case 4:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar16 = uVar16 | *pbVar1;
          case 3:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar7 = (uint)*pbVar1 << 0x18;
          case 2:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar7 = uVar7 | (uint)*pbVar1 << 0x10;
          case 1:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar7 = uVar7 | (uint)*pbVar1 << 8;
          case 0:
            pbVar1 = (byte *)(param_1 + -1);
            param_1 = param_1 + -1;
            uVar7 = uVar7 | *pbVar1;
          default:
            param_1 = param_1 + uVar11;
            uVar10 = uVar12;
            uVar14 = uVar7;
            if ((local_90 != 0x20) && (uVar10 = uVar7, uVar14 = uVar16, local_90 != 0x40)) {
              local_50[0] = (byte)uVar13;
              local_50[1] = (byte)(uVar13 >> 8);
              local_4c = (byte)uVar12;
              local_50[2] = (byte)(uVar13 >> 0x10);
              local_4b = (byte)(uVar12 >> 8);
              local_4a = (byte)(uVar12 >> 0x10);
              local_47 = (byte)(uVar7 >> 8);
              local_46 = (byte)(uVar7 >> 0x10);
              local_45 = (byte)(uVar7 >> 0x18);
              local_43 = (byte)(uVar16 >> 8);
              local_42 = (byte)(uVar16 >> 0x10);
              local_50[3] = (byte)(uVar13 >> 0x18);
              local_41 = (byte)(uVar16 >> 0x18);
              local_49 = (byte)(uVar12 >> 0x18);
              local_48 = (byte)uVar7;
              local_44 = (byte)uVar16;
              memmove(local_50,local_50 + local_8c,(ulonglong)(local_a0 != 0) + 8);
              if (iVar2 != 0) {
                bVar8 = (byte)iVar2;
                bVar9 = (byte)local_a4;
                local_50[0] = local_50[0] << (bVar8 & 0x1f) | local_50[1] >> (bVar9 & 0x1f);
                local_50[1] = local_50[1] << (bVar8 & 0x1f) | local_50[2] >> (bVar9 & 0x1f);
                local_50[2] = local_50[2] << (bVar8 & 0x1f) | local_50[3] >> (bVar9 & 0x1f);
                local_50[3] = local_50[3] << (bVar8 & 0x1f) | local_4c >> (bVar9 & 0x1f);
                local_4c = local_4c << (bVar8 & 0x1f) | local_4b >> (bVar9 & 0x1f);
                local_4b = local_4b << (bVar8 & 0x1f) | local_4a >> (bVar9 & 0x1f);
                local_a6 = local_4a << (bVar8 & 0x1f) | local_49 >> (bVar9 & 0x1f);
                local_a7 = local_49 << ((byte)local_a0 & 0x1f) | local_48 >> (bVar9 & 0x1f);
                local_4a = local_a6;
                local_49 = local_a7;
              }
              uVar11 = local_60;
              uVar10 = CONCAT31(CONCAT21(CONCAT11(local_50[3],local_50[2]),local_50[1]),local_50[0])
              ;
              uVar14 = CONCAT31(CONCAT21(CONCAT11(local_49,local_4a),local_4b),local_4c);
              local_a8 = local_50[0];
            }
          }
          uVar12 = uVar14;
          uVar13 = uVar10;
          uVar7 = uVar7 ^ local_98;
          param_2 = param_2 + uVar11;
          uVar16 = uVar16 ^ local_94;
          switch(local_9c) {
          case 7:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar16 >> 0x18);
          case 6:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar16 >> 0x10);
          case 5:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar16 >> 8);
          case 4:
            param_2 = param_2 + -1;
            *param_2 = (byte)uVar16;
          case 3:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar7 >> 0x18);
          case 2:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar7 >> 0x10);
          case 1:
            param_2 = param_2 + -1;
            *param_2 = (byte)(uVar7 >> 8);
          case 0:
            param_2 = param_2 + -1;
            *param_2 = (byte)uVar7;
          }
          param_2 = param_2 + uVar11;
          param_4 = local_88;
        } while (local_84 <= local_88);
      }
    }
    else if (uVar16 <= param_4) {
      uVar10 = param_3 >> 0x1f & 7;
      uVar7 = param_3 + uVar10;
      local_9c = (int)uVar7 >> 3;
      local_a0 = (uVar7 & 7) - uVar10;
      local_a4 = 8 - local_a0;
      do {
        param_4 = param_4 - uVar16;
        local_98 = uVar13;
        local_94 = uVar12;
        DES_encrypt3(&local_98,local_78,local_70,local_80);
        iVar2 = local_a0;
        uVar11 = (ulonglong)uVar16;
        param_1 = param_1 + uVar11;
        uVar15 = 0;
        uVar14 = 0;
        uVar10 = 0;
        uVar7 = 0;
        switch(uVar16 - 1) {
        case 7:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar14 = (uint)*pbVar1 << 0x18;
        case 6:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar15 = uVar14 | (uint)*pbVar1 << 0x10;
        case 5:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar15 = uVar15 | (uint)*pbVar1 << 8;
        case 4:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar15 = uVar15 | *pbVar1;
        case 3:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar7 = (uint)*pbVar1 << 0x18;
        case 2:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar10 = uVar7 | (uint)*pbVar1 << 0x10;
        case 1:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar10 = uVar10 | (uint)*pbVar1 << 8;
        case 0:
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar10 = uVar10 | *pbVar1;
        }
        uVar10 = uVar10 ^ local_98;
        param_1 = param_1 + uVar11;
        uVar15 = uVar15 ^ local_94;
        param_2 = param_2 + uVar11;
        bVar8 = (byte)(uVar15 >> 8);
        bVar9 = (byte)(uVar15 >> 0x10);
        bVar3 = (byte)(uVar15 >> 0x18);
        bVar4 = (byte)(uVar10 >> 8);
        bVar5 = (byte)(uVar10 >> 0x10);
        bVar6 = (byte)(uVar10 >> 0x18);
        switch(uVar16 - 1) {
        case 7:
          param_2 = param_2 + -1;
          *param_2 = bVar3;
        case 6:
          param_2 = param_2 + -1;
          *param_2 = bVar9;
        case 5:
          param_2 = param_2 + -1;
          *param_2 = bVar8;
        case 4:
          param_2 = param_2 + -1;
          *param_2 = (byte)uVar15;
        case 3:
          param_2 = param_2 + -1;
          *param_2 = bVar6;
        case 2:
          param_2 = param_2 + -1;
          *param_2 = bVar5;
        case 1:
          param_2 = param_2 + -1;
          *param_2 = bVar4;
        case 0:
          param_2 = param_2 + -1;
          *param_2 = (byte)uVar10;
        }
        param_2 = param_2 + uVar11;
        uVar7 = uVar12;
        uVar14 = uVar10;
        if ((local_90 != 0x20) && (uVar7 = uVar10, uVar14 = uVar15, local_90 != 0x40)) {
          local_50[1] = (byte)(uVar13 >> 8);
          local_50[2] = (byte)(uVar13 >> 0x10);
          local_4b = (byte)(uVar12 >> 8);
          local_4a = (byte)(uVar12 >> 0x10);
          local_50[0] = (byte)uVar13;
          local_4c = (byte)uVar12;
          local_50[3] = (byte)(uVar13 >> 0x18);
          local_49 = (byte)(uVar12 >> 0x18);
          local_48 = (byte)uVar10;
          local_47 = bVar4;
          local_46 = bVar5;
          local_45 = bVar6;
          local_44 = (byte)uVar15;
          local_43 = bVar8;
          local_42 = bVar9;
          local_41 = bVar3;
          memmove(local_50,local_50 + local_9c,(ulonglong)(local_a0 != 0) + 8);
          if (iVar2 != 0) {
            bVar8 = (byte)iVar2;
            bVar9 = (byte)local_a4;
            local_50[0] = local_50[0] << (bVar8 & 0x1f) | local_50[1] >> (bVar9 & 0x1f);
            local_50[1] = local_50[1] << (bVar8 & 0x1f) | local_50[2] >> (bVar9 & 0x1f);
            local_50[2] = local_50[2] << (bVar8 & 0x1f) | local_50[3] >> (bVar9 & 0x1f);
            local_50[3] = local_50[3] << (bVar8 & 0x1f) | local_4c >> (bVar9 & 0x1f);
            local_4c = local_4c << (bVar8 & 0x1f) | local_4b >> (bVar9 & 0x1f);
            local_4b = local_4b << (bVar8 & 0x1f) | local_4a >> (bVar9 & 0x1f);
            local_a7 = local_4a << (bVar8 & 0x1f) | local_49 >> (bVar9 & 0x1f);
            local_a6 = local_49 << ((byte)local_a0 & 0x1f) | local_48 >> (bVar9 & 0x1f);
            local_4a = local_a7;
            local_49 = local_a6;
          }
          uVar7 = CONCAT31(CONCAT21(CONCAT11(local_50[3],local_50[2]),local_50[1]),local_50[0]);
          uVar14 = CONCAT31(CONCAT21(CONCAT11(local_49,local_4a),local_4b),local_4c);
          local_a8 = local_50[0];
        }
        uVar12 = uVar14;
        uVar13 = uVar7;
      } while (uVar16 <= param_4);
    }
    *(char *)local_58 = (char)uVar13;
    *local_68 = (char)(uVar13 >> 8);
    local_68[1] = (char)(uVar13 >> 0x10);
    local_68[2] = (char)(uVar13 >> 0x18);
    local_68[3] = (char)uVar12;
    local_68[4] = (char)(uVar12 >> 8);
    local_68[5] = (char)(uVar12 >> 0x10);
    local_68[6] = (char)(uVar12 >> 0x18);
  }
  return;
}

