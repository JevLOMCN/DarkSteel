// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// OPENSSL_DIR_end @ 14f6e12d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_DIR_end(longlong *param_1)

{
  int *piVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    FindClose(*(HANDLE *)(*param_1 + 0x250));
    free((void *)*param_1);
    *param_1 = 0;
    return 1;
  }
  piVar1 = _errno();
  *piVar1 = 0x16;
  return 0;
}

// OPENSSL_DIR_read @ 14f6e1340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OPENSSL_DIR_read(longlong *param_1,LPCSTR param_2)

{
  char cVar1;
  WCHAR WVar2;
  LPWIN32_FIND_DATAW p_Var3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  BOOL BVar8;
  int iVar9;
  int *piVar10;
  void *pvVar11;
  ulonglong uVar12;
  HANDLE pvVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  LPCWSTR pWVar20;
  ulonglong uVar21;
  UINT CodePage;
  undefined8 uStackY_80;
  undefined1 auStackY_78 [32];
  ulonglong local_38 [2];
  
  local_38[1] = 0x14f6e1354;
  puVar17 = auStackY_78;
  puVar19 = auStackY_78;
  local_38[0] = __security_cookie.value ^ (ulonglong)local_38;
  puVar18 = auStackY_78;
  if ((param_1 == (longlong *)0x0) || (puVar18 = auStackY_78, param_2 == (LPCSTR)0x0)) {
LAB_14f6e1569:
    *(undefined8 *)(puVar18 + -8) = 0x14f6e156f;
    piVar10 = _errno();
    *piVar10 = 0x16;
    puVar19 = puVar18;
  }
  else {
    uStackY_80 = 0x14f6e1394;
    piVar10 = _errno();
    uVar16 = 0;
    uVar5 = 0;
    *piVar10 = 0;
    p_Var3 = (LPWIN32_FIND_DATAW)*param_1;
    if (p_Var3 != (LPWIN32_FIND_DATAW)0x0) {
      uStackY_80 = 0x14f6e15ea;
      BVar8 = FindNextFileW(*(HANDLE *)(p_Var3 + 1),p_Var3);
      if (BVar8 == 0) goto LAB_14f6e1575;
LAB_14f6e15ee:
      lVar14 = *param_1;
      WVar2 = *(WCHAR *)(lVar14 + 0x2c);
      pWVar20 = (LPCWSTR)(lVar14 + 0x2c);
      uVar21 = uVar16;
      while ((WVar2 != L'\0' && (uVar21 < 0xff))) {
        uVar21 = uVar21 + 1;
        WVar2 = pWVar20[uVar21];
      }
      *(undefined8 *)(puVar17 + 0x38) = 0;
      *(undefined8 *)(puVar17 + 0x30) = 0;
      uVar21 = uVar21 + 1;
      *(undefined4 *)(puVar17 + 0x28) = 0x100;
      *(longlong *)(puVar17 + 0x20) = lVar14 + 600;
      *(undefined8 *)(puVar17 + -8) = 0x14f6e1646;
      iVar9 = WideCharToMultiByte(0xfde9,0,pWVar20,(int)uVar21,*(LPSTR *)(puVar17 + 0x20),
                                  *(int *)(puVar17 + 0x28),*(LPCSTR *)(puVar17 + 0x30),
                                  *(LPBOOL *)(puVar17 + 0x38));
      if ((iVar9 == 0) && (uVar21 != 0)) {
        do {
          *(char *)(*param_1 + 600 + uVar16) = (char)pWVar20[uVar16];
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar21);
      }
      *(undefined1 *)(*param_1 + 0x357) = 0;
      lVar14 = *param_1 + 600;
      goto LAB_14f6e1577;
    }
    cVar1 = *param_2;
    uVar21 = uVar16;
    pcVar15 = param_2;
    while ((cVar1 != '\0' && (uVar5 = (uint)uVar21, uVar5 < 0x80000000))) {
      pcVar15 = pcVar15 + 1;
      uVar5 = uVar5 + 1;
      cVar1 = *pcVar15;
      uVar21 = (ulonglong)uVar5;
    }
    uVar5 = uVar5 & 0x7fffffff;
    if ((ulonglong)uVar5 - 1 < 0x7ffffffc) {
      uStackY_80 = 0x14f6e13e4;
      pvVar11 = malloc(0x358);
      *param_1 = (longlong)pvVar11;
      if (pvVar11 != (void *)0x0) {
        uStackY_80 = 0x14f6e140d;
        memset(pvVar11,0,0x358);
        uVar21 = (ulonglong)uVar5 + 1;
        CodePage = 0xfde9;
        iVar9 = (int)uVar21;
        uStackY_80 = 0x14f6e1430;
        iVar6 = MultiByteToWideChar(0xfde9,0,param_2,iVar9,(LPWSTR)0x0,0);
        if (iVar6 < 1) {
          uStackY_80 = 0x14f6e1441;
          DVar7 = GetLastError();
          CodePage = 0xfde9;
          if (DVar7 == 0x459) {
            uStackY_80 = 0x14f6e1464;
            iVar6 = MultiByteToWideChar(0,0,param_2,iVar9,(LPWSTR)0x0,0);
            CodePage = 0;
          }
          if (0 < iVar6) goto LAB_14f6e150c;
          uVar4 = (longlong)(int)(uVar5 + 3) * 2;
          uVar12 = uVar4 + 0xf;
          if (uVar12 <= uVar4) {
            uVar12 = 0xffffffffffffff0;
          }
          uStackY_80 = 0x14f6e149a;
          lVar14 = -(uVar12 & 0xfffffffffffffff0);
          pWVar20 = (LPCWSTR)((longlong)local_38 + lVar14);
          uVar12 = uVar16;
          puVar17 = auStackY_78 + lVar14;
          iVar6 = iVar9;
          if (uVar21 != 0) {
            do {
              pWVar20[uVar12] = (short)param_2[uVar12];
              uVar12 = uVar12 + 1;
              puVar17 = auStackY_78 + lVar14;
            } while (uVar12 < uVar21);
          }
LAB_14f6e14c1:
          WVar2 = pWVar20[iVar6 + -2];
          if (WVar2 != L'*') {
            if ((WVar2 == L'/') || (WVar2 == L'\\')) {
              (pWVar20 + (iVar6 + -1))[0] = L'*';
              (pWVar20 + (iVar6 + -1))[1] = L'\0';
            }
            else {
              *(undefined4 *)(pWVar20 + (iVar6 + -1)) = _u___;
              (pWVar20 + (iVar6 + -1))[2] = DAT_1534a970c;
            }
          }
          p_Var3 = (LPWIN32_FIND_DATAW)*param_1;
          *(undefined8 *)(puVar17 + -8) = 0x14f6e15b3;
          pvVar13 = FindFirstFileW(pWVar20,p_Var3);
          *(HANDLE *)(*param_1 + 0x250) = pvVar13;
          pvVar11 = (void *)*param_1;
          if (*(longlong *)((longlong)pvVar11 + 0x250) != -1) goto LAB_14f6e15ee;
        }
        else {
LAB_14f6e150c:
          uVar12 = (longlong)(iVar6 + 2) * 2;
          uVar21 = uVar12 + 0xf;
          if (uVar21 <= uVar12) {
            uVar21 = 0xffffffffffffff0;
          }
          uStackY_80 = 0x14f6e1532;
          lVar14 = -(uVar21 & 0xfffffffffffffff0);
          puVar17 = auStackY_78 + lVar14;
          pWVar20 = (LPCWSTR)((longlong)local_38 + lVar14);
          *(int *)(&stack0xffffffffffffffb0 + lVar14) = iVar6;
          *(LPCWSTR *)(&stack0xffffffffffffffa8 + lVar14) = pWVar20;
          *(undefined8 *)(auStackY_78 + lVar14 + -8) = 0x14f6e1555;
          iVar9 = MultiByteToWideChar(CodePage,0,param_2,iVar9,
                                      *(LPWSTR *)(&stack0xffffffffffffffa8 + lVar14),
                                      *(int *)(&stack0xffffffffffffffb0 + lVar14));
          if (iVar9 != 0) goto LAB_14f6e14c1;
          pvVar11 = (void *)*param_1;
          puVar17 = auStackY_78 + lVar14;
        }
        *(undefined8 *)(puVar17 + -8) = 0x14f6e1566;
        free(pvVar11);
        *param_1 = 0;
        puVar18 = puVar17;
        goto LAB_14f6e1569;
      }
      uStackY_80 = 0x14f6e13f2;
      piVar10 = _errno();
      *piVar10 = 0xc;
      puVar19 = auStackY_78;
    }
    else {
      uStackY_80 = 0x14f6e15d2;
      piVar10 = _errno();
      *piVar10 = 2;
      puVar19 = auStackY_78;
    }
  }
LAB_14f6e1575:
  lVar14 = 0;
  puVar17 = puVar19;
LAB_14f6e1577:
  *(undefined8 *)(puVar17 + -8) = 0x14f6e1583;
  return lVar14;
}

