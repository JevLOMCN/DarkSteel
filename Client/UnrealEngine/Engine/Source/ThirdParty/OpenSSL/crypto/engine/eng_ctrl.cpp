// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ENGINE_cmd_is_executable @ 14f779710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ENGINE_cmd_is_executable(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = ENGINE_ctrl(param_1,0x12,param_2,0,0,0x14f77971c);
  if ((int)uVar1 < 0) {
    ERR_put_error(0x26,0xaa,0x8a,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar2,0xb7));
    return false;
  }
  return (uVar1 & 7) != 0;
}

// ENGINE_ctrl @ 14f779780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ENGINE_ctrl(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x14f779794;
  if (param_1 == 0) {
    ERR_put_error(0x26,0x8e,0x43,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x81),0x14f779794);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  iVar1 = *(int *)(param_1 + 0x9c);
  CRYPTO_THREAD_unlock(global_engine_lock);
  pcVar2 = *(code **)(param_1 + 0x70);
  uVar3 = (ulonglong)(pcVar2 != (code *)0x0);
  if (iVar1 < 1) {
    ERR_put_error(0x26,0x8e,0x82,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x89),uVar5);
    uVar3 = 0;
  }
  else if (param_2 != 10) {
    if (param_2 - 0xbU < 8) {
      if (pcVar2 == (code *)0x0) {
        ERR_put_error(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0x9e),uVar5);
        return 0xffffffff;
      }
      if ((*(byte *)(param_1 + 0x98) & 2) == 0) {
        uVar3 = FUN_14f779d00(param_1,param_2,param_3,param_4,param_5);
        return uVar3;
      }
    }
    if (pcVar2 == (code *)0x0) {
      ERR_put_error(0x26,0x8e,0x78,"crypto\\engine\\eng_ctrl.c",CONCAT44(uVar4,0xab),uVar5);
      uVar3 = 0;
    }
    else {
      uVar3 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return uVar3;
}

// ENGINE_ctrl_cmd @ 14f779910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ENGINE_ctrl_cmd(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                    undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f779925;
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_put_error(0x26,0xb2,0x43,"crypto\\engine\\eng_ctrl.c",199,0x14f779925);
    return false;
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (iVar1 = ENGINE_ctrl(param_1,0xd,0,param_2,0), 0 < iVar1)) {
    iVar1 = ENGINE_ctrl(param_1,iVar1,param_3,param_4,param_5);
    return 0 < iVar1;
  }
  if (param_6 == 0) {
    ERR_put_error(0x26,0xb2,0x89,"crypto\\engine\\eng_ctrl.c",0xd9,uVar2);
  }
  else {
    ERR_clear_error();
  }
  return param_6 != 0;
}

// ENGINE_ctrl_cmd_string @ 14f779a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ENGINE_ctrl_cmd_string(longlong param_1,longlong param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_res8;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f779a2f;
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_put_error(0x26,0xab,0x43,"crypto\\engine\\eng_ctrl.c",0xed,0x14f779a2f);
    return false;
  }
  if ((*(longlong *)(param_1 + 0x70) == 0) ||
     (iVar1 = ENGINE_ctrl(param_1,0xd,0,param_2,0), iVar1 < 1)) {
    if (param_4 != 0) {
      ERR_clear_error();
      return true;
    }
    uVar6 = 0xff;
    uVar5 = 0x89;
  }
  else {
    iVar2 = ENGINE_cmd_is_executable(param_1,iVar1);
    if (iVar2 == 0) {
      uVar6 = 0x104;
      uVar5 = 0x86;
    }
    else {
      uVar3 = ENGINE_ctrl(param_1,0x12,iVar1,0,0);
      if ((int)uVar3 < 0) {
        uVar6 = 0x10f;
      }
      else {
        if ((uVar3 & 4) != 0) {
          if (param_3 == (char *)0x0) {
            param_3 = (char *)0x0;
            lVar4 = 0;
            goto LAB_14f779b8e;
          }
          uVar6 = 0x118;
          uVar5 = 0x88;
          goto LAB_14f779af0;
        }
        if (param_3 == (char *)0x0) {
          uVar6 = 0x128;
          uVar5 = 0x87;
          goto LAB_14f779af0;
        }
        if ((uVar3 & 2) != 0) {
          lVar4 = 0;
LAB_14f779b8e:
          iVar1 = ENGINE_ctrl(param_1,iVar1,lVar4,param_3,0);
          return 0 < iVar1;
        }
        if ((uVar3 & 1) != 0) {
          lVar4 = strtol(param_3,&local_res8,10);
          if ((param_3 == local_res8) || (*local_res8 != '\0')) {
            uVar6 = 0x140;
            uVar5 = 0x85;
            goto LAB_14f779af0;
          }
          param_3 = (char *)0x0;
          goto LAB_14f779b8e;
        }
        uVar6 = 0x13a;
      }
      uVar5 = 0x6e;
    }
  }
LAB_14f779af0:
  ERR_put_error(0x26,0xab,uVar5,"crypto\\engine\\eng_ctrl.c",uVar6,uVar7);
  return false;
}

// FUN_14f779d00 @ 14f779d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f779d00(longlong param_1,int param_2,uint param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  
  if (param_2 == 0xb) {
    puVar4 = *(uint **)(param_1 + 0x90);
    if (((puVar4 != (uint *)0x0) && (*puVar4 != 0)) && (*(longlong *)(puVar4 + 2) != 0)) {
      return (ulonglong)*puVar4;
    }
    return 0;
  }
  if ((((param_2 - 0xdU & 0xfffffff9) == 0) && (param_2 != 0x13)) && (param_4 == (char *)0x0)) {
    ERR_put_error(0x26,0xac,0x43,"crypto\\engine\\eng_ctrl.c",0x4f);
    return 0xffffffffffffffff;
  }
  puVar4 = *(uint **)(param_1 + 0x90);
  if (param_2 == 0xd) {
    if (puVar4 != (uint *)0x0) {
      iVar12 = 0;
      for (puVar6 = puVar4; *puVar6 != 0; puVar6 = puVar6 + 8) {
        pcVar5 = *(char **)(puVar6 + 2);
        if (pcVar5 == (char *)0x0) {
LAB_14f779de0:
          if (((*puVar6 != 0) && (*(longlong *)(puVar6 + 2) != 0)) && (-1 < iVar12)) {
            return (ulonglong)puVar4[(longlong)iVar12 * 8];
          }
          break;
        }
        lVar11 = (longlong)param_4 - (longlong)pcVar5;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[lVar11];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) goto LAB_14f779de0;
        iVar12 = iVar12 + 1;
      }
    }
    uVar13 = 0x57;
    uVar10 = 0x89;
  }
  else {
    if (puVar4 != (uint *)0x0) {
      iVar12 = 0;
      for (puVar6 = puVar4;
          ((uVar3 = *puVar6, uVar3 != 0 && (*(longlong *)(puVar6 + 2) != 0)) && (uVar3 < param_3));
          puVar6 = puVar6 + 8) {
        iVar12 = iVar12 + 1;
      }
      if ((uVar3 == param_3) && (-1 < iVar12)) {
        switch(param_2) {
        case 0xc:
          if ((puVar4[(longlong)iVar12 * 8 + 8] != 0) &&
             (*(longlong *)(puVar4 + (longlong)iVar12 * 8 + 10) != 0)) {
            return (ulonglong)puVar4[(longlong)iVar12 * 8 + 8];
          }
          return 0;
        default:
          uVar13 = 0x79;
          uVar10 = 0x6e;
          break;
        case 0xe:
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (*(char *)(*(longlong *)(puVar4 + (longlong)iVar12 * 8 + 2) + uVar7) != '\0');
          return uVar7;
        case 0xf:
          pcVar5 = *(char **)(puVar4 + (longlong)iVar12 * 8 + 2);
          pcVar9 = param_4;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            *pcVar9 = cVar1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (param_4[uVar7] != '\0');
          return uVar7;
        case 0x10:
          puVar8 = *(undefined **)(puVar4 + (longlong)iVar12 * 8 + 4);
          if (*(undefined **)(puVar4 + (longlong)iVar12 * 8 + 4) == (undefined *)0x0) {
            puVar8 = PTR_s__154df9b28;
          }
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (puVar8[uVar7] != '\0');
          return uVar7;
        case 0x11:
          pcVar5 = *(char **)(puVar4 + (longlong)iVar12 * 8 + 4);
          if (*(char **)(puVar4 + (longlong)iVar12 * 8 + 4) == (char *)0x0) {
            pcVar5 = PTR_s__154df9b28;
          }
          lVar11 = (longlong)param_4 - (longlong)pcVar5;
          do {
            cVar1 = *pcVar5;
            pcVar5[lVar11] = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          uVar7 = 0xffffffffffffffff;
          do {
            uVar7 = uVar7 + 1;
          } while (param_4[uVar7] != '\0');
          return uVar7;
        case 0x12:
          return (ulonglong)puVar4[(longlong)iVar12 * 8 + 6];
        }
        goto LAB_14f779f90;
      }
    }
    uVar13 = 0x62;
    uVar10 = 0x8a;
  }
LAB_14f779f90:
  ERR_put_error(0x26,0xac,uVar10,"crypto\\engine\\eng_ctrl.c",uVar13);
  return 0xffffffffffffffff;
}

