// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// openssl_fopen @ 14f743fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FILE * openssl_fopen(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  FILE *pFVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  int cbMultiByte;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined8 uStackY_80;
  undefined1 auStackY_78 [32];
  wchar_t local_48 [8];
  ulonglong local_38;
  undefined8 uStack_30;
  FILE *pFVar10;
  
  uStack_30 = 0x14f743fc3;
  local_38 = __security_cookie.value ^ (ulonglong)local_48;
  uVar13 = 0;
  cVar1 = *param_1;
  pFVar6 = (FILE *)0x0;
  uVar9 = uVar13;
  pFVar10 = pFVar6;
  pcVar5 = param_1;
  while ((cVar1 != '\0' && (uVar9 = (uint)pFVar10, uVar9 < 0x80000000))) {
    pcVar5 = pcVar5 + 1;
    uVar9 = uVar9 + 1;
    cVar1 = *pcVar5;
    pFVar10 = (FILE *)(ulonglong)uVar9;
  }
  cbMultiByte = (uVar9 & 0x7fffffff) + 1;
  uStackY_80 = 0x14f744030;
  iVar3 = MultiByteToWideChar(0xfde9,8,param_1,cbMultiByte,(LPWSTR)0x0,0);
  DVar4 = 8;
  if (iVar3 < 1) {
    uStackY_80 = 0x14f74403c;
    DVar4 = GetLastError();
    if (DVar4 == 0x3ec) {
      uStackY_80 = 0x14f744063;
      iVar3 = MultiByteToWideChar(0xfde9,0,param_1,cbMultiByte,(LPWSTR)0x0,0);
      DVar4 = 0;
      if (0 < iVar3) goto LAB_14f74408b;
    }
    uStackY_80 = 0x14f74406f;
    DVar4 = GetLastError();
    puVar11 = auStackY_78;
    puVar12 = auStackY_78;
    if (DVar4 != 0x459) goto LAB_14f74416c;
  }
  else {
LAB_14f74408b:
    uVar8 = (longlong)iVar3 * 2 + 0xf;
    if (uVar8 <= (ulonglong)((longlong)iVar3 * 2)) {
      uVar8 = 0xffffffffffffff0;
    }
    uStackY_80 = 0x14f7440b0;
    lVar2 = -(uVar8 & 0xfffffffffffffff0);
    *(int *)(&stack0xffffffffffffffb0 + lVar2) = iVar3;
    *(wchar_t **)(&stack0xffffffffffffffa8 + lVar2) = (wchar_t *)((longlong)local_48 + lVar2);
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x14f7440d5;
    iVar3 = MultiByteToWideChar(0xfde9,DVar4,param_1,cbMultiByte,
                                *(LPWSTR *)(&stack0xffffffffffffffa8 + lVar2),
                                *(int *)(&stack0xffffffffffffffb0 + lVar2));
    puVar12 = auStackY_78 + lVar2;
    if (iVar3 == 0) goto LAB_14f74416c;
    cVar1 = *param_2;
    pFVar10 = pFVar6;
    pcVar5 = param_2;
    while ((cVar1 != '\0' && (uVar13 = (uint)pFVar10, uVar13 < 0x80000000))) {
      pcVar5 = pcVar5 + 1;
      uVar13 = uVar13 + 1;
      cVar1 = *pcVar5;
      pFVar10 = (FILE *)(ulonglong)uVar13;
    }
    *(undefined4 *)(&stack0xffffffffffffffb0 + lVar2) = 8;
    *(wchar_t **)(&stack0xffffffffffffffa8 + lVar2) = local_48;
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x14f74412d;
    iVar3 = MultiByteToWideChar(0xfde9,0,param_2,(uVar13 & 0x7fffffff) + 1,
                                *(LPWSTR *)(&stack0xffffffffffffffa8 + lVar2),
                                *(int *)(&stack0xffffffffffffffb0 + lVar2));
    puVar12 = auStackY_78 + lVar2;
    if (iVar3 == 0) goto LAB_14f74416c;
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x14f74413e;
    pFVar6 = _wfopen((wchar_t *)((longlong)local_48 + lVar2),local_48);
    puVar12 = auStackY_78 + lVar2;
    if (pFVar6 != (FILE *)0x0) goto LAB_14f74416c;
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x14f74414c;
    piVar7 = _errno();
    puVar11 = auStackY_78 + lVar2;
    if (*piVar7 != 2) {
      *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x14f74415b;
      piVar7 = _errno();
      puVar11 = auStackY_78 + lVar2;
      puVar12 = auStackY_78 + lVar2;
      if (*piVar7 != 9) goto LAB_14f74416c;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x14f744086;
  pFVar6 = fopen(param_1,param_2);
  puVar12 = puVar11;
LAB_14f74416c:
  *(undefined8 *)(puVar12 + -8) = 0x14f744178;
  return pFVar6;
}

