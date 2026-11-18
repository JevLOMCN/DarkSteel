// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// CollapseRelativeDirectoriesImplTemplate<TStringBuilderBase<wchar_t>_> @ 1419062e0

/* WARNING: Removing unreachable block (ram,0x000141906487) */
/* WARNING: Removing unreachable block (ram,0x0001419064a1) */
/* WARNING: Removing unreachable block (ram,0x00014190692f) */
/* WARNING: Removing unreachable block (ram,0x0001419064f1) */

void __cdecl
UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<TStringBuilderBase<wchar_t>_>
          (TStringBuilderBase<wchar_t> *param_1,bool param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  TStringView<wchar_t> *pTVar13;
  int iVar14;
  wchar_t *pwVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint local_res20;
  wchar_t local_1a8 [8];
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined8 local_170;
  wchar_t *local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  wchar_t *local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  TStringView<wchar_t> local_108;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  TArrayView<wchar_t_const_,int> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  *param_3 = true;
  local_188 = L"..";
  iVar19 = 2;
  uStack_f0 = 2;
  local_198 = L"/.";
  local_180 = 2;
  uStack_18c = 0;
  iVar14 = 3;
  iStack_190 = 2;
  local_150 = L"./";
  local_148 = 2;
  local_178 = L"/..";
  pwVar12 = param_1->Base;
  local_f8 = local_1a8;
  local_c8._12_4_ = uStack_ec;
  local_c8.ArrayNum = 2;
  iVar6 = (int)((longlong)param_1->CurPos - (longlong)pwVar12 >> 1);
  local_b8._12_4_ = uStack_dc;
  local_b8.Size = iVar6;
  local_170 = 3;
  local_res20 = 0;
  local_1a8[0] = L':';
  local_1a8[1] = L'/';
  local_e8 = pwVar12;
  iStack_e0 = iVar6;
  local_c8.DataPtr = local_f8;
  local_b8.DataPtr = pwVar12;
  iVar3 = UE::String::FindFirstOfAnyChar(&local_b8,&local_c8,CaseSensitive,(int *)0x0);
  if (iVar3 != -1) {
    if (((iVar3 < 0) || (iVar6 <= iVar3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pwVar12[iVar3] == L':') {
      local_res20 = iVar3 + 1;
    }
  }
  iVar3 = iVar6;
  if ((int)(iVar6 - local_res20) < iVar6) {
    iVar3 = iVar6 - local_res20;
  }
  iVar10 = 0;
  if (0 < iVar3) {
    iVar10 = iVar3;
  }
  iVar3 = iVar10;
  if (2 < iVar10) {
    iVar3 = 2;
  }
  iVar16 = 0;
  if (0 < iVar3) {
    iVar16 = iVar3;
  }
  if ((iVar16 == 2) &&
     (iVar3 = wcsncmp(local_150,pwVar12 + ((longlong)iVar6 - (longlong)iVar10),2), iVar3 == 0)) {
    local_138 = 0;
    uStack_130 = 0;
    local_a8.DataPtr = (wchar_t *)0x0;
    local_a8.Size = 0;
    local_a8._12_4_ = 0;
    TStringBuilderBase<wchar_t>::ReplaceAt(param_1,local_res20,2,&local_a8);
  }
  else if ((iVar10 == 2) &&
          (iVar3 = FGenericPlatformStricmp::Strnicmp
                             (pwVar12 + ((longlong)iVar6 - (longlong)iVar10),local_198,2),
          iVar3 == 0)) {
    local_res20 = local_res20 + 2;
  }
  uVar11 = (ulonglong)local_res20;
  pwVar12 = param_1->Base;
  uVar18 = (longlong)param_1->CurPos - (longlong)pwVar12 >> 1;
  if (local_res20 != (uint)uVar18) {
    uVar7 = uVar18 & 0xffffffff;
    uVar20 = local_res20;
    uVar8 = local_108._12_4_;
    do {
      uVar9 = (uint)uVar11;
      if (uVar9 == uVar20) {
        iVar6 = (int)uVar7;
        iVar3 = iVar6;
        if ((int)(iVar6 - uVar20) < iVar6) {
          iVar3 = iVar6 - uVar20;
        }
        iVar10 = 0;
        if (0 < iVar3) {
          iVar10 = iVar3;
        }
        iVar3 = iVar10;
        if (iVar19 < iVar10) {
          iVar3 = iVar19;
        }
        local_158 = pwVar12 + ((longlong)iVar6 - (longlong)iVar10);
        iVar6 = 0;
        if (0 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar19 != iVar6) goto LAB_141906643;
        if ((iVar19 != 0) && (iVar6 != 0)) {
          iVar3 = iVar6;
          if (iVar19 < iVar6) {
            iVar3 = iVar19;
          }
          iVar3 = wcsncmp(local_188,local_158,(longlong)iVar3);
          if (iVar3 != 0) goto LAB_141906643;
        }
        if (iVar19 != iVar6) goto LAB_141906643;
        if (iVar10 != iVar19) {
          if (((iVar19 < 0) || (iVar10 <= iVar19)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_158[iVar19] != L'/') goto LAB_141906643;
        }
        uVar20 = uVar20 + iVar19;
LAB_141906620:
        *param_3 = false;
        local_res20 = uVar20;
        if (!param_2) {
          return;
        }
      }
      else {
LAB_141906643:
        local_98._12_4_ = uStack_18c;
        local_98.Size = iStack_190;
        uVar17 = (uint)uVar18;
        local_98.DataPtr = local_198;
        uVar4 = uVar17;
        if ((int)(uVar17 - uVar9) < (int)uVar17) {
          uVar4 = uVar17 - uVar9;
        }
        uStack_d0 = 0;
        if (0 < (int)uVar4) {
          uStack_d0 = uVar4;
        }
        local_d8 = pwVar12 + ((longlong)(int)uVar17 - (longlong)(int)uStack_d0);
        local_88._12_4_ = uStack_cc;
        local_88.Size = uStack_d0;
        local_88.DataPtr = local_d8;
        iVar3 = UE::String::FindFirst(&local_88,&local_98,CaseSensitive);
        if (iVar3 == -1) {
          return;
        }
        uVar9 = iVar3 + uVar9;
        uVar4 = uVar9 + iStack_190;
        if (uVar4 == uVar17) {
LAB_141906968:
          pTVar13 = &local_58;
          uStack_110 = 0;
          local_118 = 0;
          local_58.DataPtr = (wchar_t *)0x0;
          local_58.Size = 0;
          local_58._12_4_ = 0;
          iVar3 = iStack_190;
        }
        else {
          if ((((int)uVar4 < 0) || ((int)uVar17 <= (int)uVar4)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pwVar12[(int)uVar4] == L'/') goto LAB_141906968;
          iVar3 = uVar9 + iStack_190;
          if (((iVar3 < 0) || ((int)uVar17 <= iVar3)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pwVar12[iVar3] != L'.') {
            uVar11 = (ulonglong)(uVar9 + 1 + iStack_190);
            goto LAB_141906996;
          }
          iVar3 = uVar9 + iVar14;
          if (iVar3 < (int)uVar17) {
            if (((iVar3 < 0) || ((int)uVar17 <= iVar3)) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (pwVar12[iVar3] != L'/') {
              uVar11 = (ulonglong)(uVar9 + 1 + iVar14);
              goto LAB_141906996;
            }
          }
          if (uVar9 == uVar20) {
            uVar20 = uVar9 + iVar14;
            uVar11 = (ulonglong)uVar20;
            goto LAB_141906620;
          }
          uVar4 = uVar17;
          if ((int)uVar9 < (int)uVar17) {
            uVar4 = uVar9;
          }
          uVar5 = 0;
          if (0 < (int)uVar4) {
            uVar5 = uVar4;
          }
          local_108._12_4_ = uStack_15c;
          local_108.Size = uVar5;
          local_168 = pwVar12;
          uStack_160 = uVar5;
          local_108.DataPtr = pwVar12;
          iVar3 = UE::String::FindLastChar(&local_108,L'/',CaseSensitive);
          uVar11 = (ulonglong)iVar3;
          bVar2 = iVar3 != -1;
          if ((iVar3 == -1) || (iVar3 != uVar9 - 1)) {
LAB_141906911:
            if (bVar2) goto LAB_141906915;
            uVar11 = (ulonglong)uVar20;
            iVar3 = (uVar9 - uVar20) + iVar14;
            if ((int)(iVar3 + uVar20) < (int)uVar17) {
              iVar3 = iVar3 + 1;
            }
          }
          else {
            if (0 < iVar3) {
              pwVar15 = pwVar12 + (uVar11 - 1);
              uVar18 = uVar11;
              do {
                iVar3 = iVar3 + -1;
                if (((iVar3 < 0) || ((int)uVar5 <= iVar3)) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index >= 0 && Index < Size",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                       ,0x234,
                                       L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if (*pwVar15 != L'/') break;
                uVar11 = (ulonglong)((int)uVar11 - 1);
                uVar18 = uVar18 - 1;
                pwVar15 = pwVar15 + -1;
              } while (0 < (longlong)uVar18);
              iVar3 = (int)uVar11;
              uVar8 = local_108._12_4_;
              iVar19 = (int)local_180;
              iVar14 = (int)local_170;
            }
            uVar20 = local_res20;
            if (iVar3 != 0) {
              uVar4 = uVar17;
              if ((int)(uint)uVar11 < (int)uVar17) {
                uVar4 = (uint)uVar11;
              }
              uStack_160 = 0;
              if (0 < (int)uVar4) {
                uStack_160 = uVar4;
              }
              local_78._12_4_ = uVar8;
              local_78.Size = uStack_160;
              local_168 = pwVar12;
              uStack_15c = uVar8;
              local_78.DataPtr = pwVar12;
              uVar4 = UE::String::FindLastChar(&local_78,L'/',CaseSensitive);
              bVar2 = uVar4 != 0xffffffff;
              uVar11 = (ulonglong)uVar4;
              goto LAB_141906911;
            }
LAB_141906915:
            if ((int)uVar11 < (int)uVar20) {
              uVar20 = uVar9 + iVar14;
              uVar11 = (ulonglong)uVar20;
              goto LAB_141906620;
            }
            iVar3 = (uVar9 - (int)uVar11) + iVar14;
          }
          pTVar13 = &local_68;
          uStack_120 = 0;
          local_128 = 0;
          uVar9 = (uint)uVar11;
          local_68.DataPtr = (wchar_t *)0x0;
          local_68.Size = 0;
          local_68._12_4_ = 0;
        }
        TStringBuilderBase<wchar_t>::ReplaceAt(param_1,uVar9,iVar3,pTVar13);
      }
LAB_141906996:
      pwVar12 = param_1->Base;
      uVar7 = (longlong)param_1->CurPos - (longlong)pwVar12 >> 1;
      uVar18 = uVar7 & 0xffffffff;
    } while ((int)uVar11 != (int)uVar7);
  }
  return;
}

// CollapseRelativeDirectoriesImplTemplate<FString> @ 1419069e0

/* WARNING: Removing unreachable block (ram,0x000141906b88) */
/* WARNING: Removing unreachable block (ram,0x000141906bd5) */
/* WARNING: Removing unreachable block (ram,0x00014190702b) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
          (FString *param_1,bool param_2,bool *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint local_res20;
  wchar_t local_148 [8];
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined8 local_e0;
  TStringView<wchar_t> local_d8;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  TArrayView<wchar_t_const_,int> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  *param_3 = true;
  uVar16 = 2;
  local_res20 = 0;
  uStack_c0 = 2;
  local_128 = L"..";
  local_120 = 2;
  local_138 = L"/.";
  iStack_130 = 2;
  uStack_12c = 0;
  iVar14 = 3;
  local_e0 = 2;
  local_e8 = L"./";
  local_110 = 3;
  local_118 = L"/..";
  pFVar15 = (param_1->Data).AllocatorInstance.Data;
  iVar4 = (param_1->Data).ArrayNum;
  local_148[0] = L':';
  local_148[1] = L'/';
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  local_c8 = local_148;
  local_98._12_4_ = uStack_bc;
  local_98.ArrayNum = 2;
  local_88._12_4_ = uStack_ac;
  local_88.Size = iVar5;
  local_b8 = pFVar15;
  iStack_b0 = iVar5;
  local_98.DataPtr = local_c8;
  local_88.DataPtr = (wchar_t *)pFVar15;
  iVar4 = UE::String::FindFirstOfAnyChar(&local_88,&local_98,CaseSensitive,(int *)0x0);
  if (iVar4 != -1) {
    if (((iVar4 < 0) || (iVar5 <= iVar4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(short *)(pFVar15 + (longlong)iVar4 * 2) == 0x3a) {
      local_res20 = iVar4 + 1;
    }
  }
  iVar4 = iVar5;
  if ((int)(iVar5 - local_res20) < iVar5) {
    iVar4 = iVar5 - local_res20;
  }
  iVar2 = 0;
  if (0 < iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = iVar2;
  if (2 < iVar2) {
    iVar4 = 2;
  }
  iVar12 = 0;
  if (0 < iVar4) {
    iVar12 = iVar4;
  }
  if ((iVar12 == 2) &&
     (iVar4 = wcsncmp(local_e8,(wchar_t *)(pFVar15 + ((longlong)iVar5 - (longlong)iVar2) * 2),2),
     iVar4 == 0)) {
    ::FString::RemoveAt(param_1,local_res20,2,No);
  }
  else if ((iVar2 == 2) &&
          (iVar5 = FGenericPlatformStricmp::Strnicmp
                             ((wchar_t *)(pFVar15 + ((longlong)iVar5 - (longlong)iVar2) * 2),
                              local_138,2), iVar5 == 0)) {
    local_res20 = local_res20 + 2;
  }
  uVar11 = (ulonglong)local_res20;
  uVar17 = local_res20;
  uVar8 = local_d8._12_4_;
LAB_141906c10:
  while( true ) {
    iVar5 = (param_1->Data).ArrayNum;
    pFVar15 = (param_1->Data).AllocatorInstance.Data;
    uVar13 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar13 = 0;
    }
    uVar10 = (uint)uVar11;
    if (uVar10 == uVar13) {
      return;
    }
    if (uVar10 != uVar17) break;
    uVar6 = uVar13;
    if ((int)(uVar13 - uVar17) < (int)uVar13) {
      uVar6 = uVar13 - uVar17;
    }
    uVar7 = 0;
    if (0 < (int)uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = uVar7;
    if ((int)uVar16 < (int)uVar7) {
      uVar6 = uVar16;
    }
    local_108 = pFVar15 + ((longlong)(int)uVar13 - (longlong)(int)uVar7) * 2;
    uVar9 = 0;
    if (0 < (int)uVar6) {
      uVar9 = uVar6;
    }
    if (uVar16 != uVar9) break;
    if ((uVar16 != 0) && (uVar9 != 0)) {
      uVar6 = uVar9;
      if ((int)uVar16 < (int)uVar9) {
        uVar6 = uVar16;
      }
      iVar5 = wcsncmp(local_128,(wchar_t *)local_108,(longlong)(int)uVar6);
      if (iVar5 != 0) break;
    }
    if (uVar16 != uVar9) break;
    if (uVar7 != uVar16) {
      if ((((int)uVar16 < 0) || ((int)uVar7 <= (int)uVar16)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(short *)(local_108 + (longlong)(int)uVar16 * 2) != 0x2f) break;
    }
    uVar17 = uVar17 + uVar16;
LAB_141906d15:
    *param_3 = false;
    local_res20 = uVar17;
    if (!param_2) {
      return;
    }
  }
  local_78._12_4_ = uStack_12c;
  local_78.Size = iStack_130;
  local_78.DataPtr = local_138;
  uVar6 = uVar13;
  if ((int)(uVar13 - uVar10) < (int)uVar13) {
    uVar6 = uVar13 - uVar10;
  }
  uStack_a0 = 0;
  if (0 < (int)uVar6) {
    uStack_a0 = uVar6;
  }
  local_a8 = pFVar15 + ((longlong)(int)uVar13 - (longlong)(int)uStack_a0) * 2;
  local_68._12_4_ = uStack_9c;
  local_68.Size = uStack_a0;
  local_68.DataPtr = (wchar_t *)local_a8;
  iVar5 = UE::String::FindFirst(&local_68,&local_78,CaseSensitive);
  if (iVar5 == -1) {
    return;
  }
  uVar10 = iVar5 + uVar10;
  uVar6 = uVar10 + iStack_130;
  if (uVar6 != uVar13) {
    if ((((int)uVar6 < 0) || ((int)uVar13 <= (int)uVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(short *)(pFVar15 + (longlong)(int)uVar6 * 2) != 0x2f) {
      iVar5 = uVar10 + iStack_130;
      if (((iVar5 < 0) || ((int)uVar13 <= iVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(short *)(pFVar15 + (longlong)iVar5 * 2) != 0x2e) {
        uVar11 = (ulonglong)(uVar10 + 1 + iStack_130);
        goto LAB_141906c10;
      }
      iVar5 = uVar10 + iVar14;
      if (iVar5 < (int)uVar13) {
        if (((iVar5 < 0) || ((int)uVar13 <= iVar5)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(short *)(pFVar15 + (longlong)iVar5 * 2) != 0x2f) {
          uVar11 = (ulonglong)(uVar10 + 1 + iVar14);
          goto LAB_141906c10;
        }
      }
      if (uVar10 == uVar17) {
        uVar17 = uVar10 + iVar14;
        uVar11 = (ulonglong)uVar17;
        goto LAB_141906d15;
      }
      uVar6 = uVar13;
      if ((int)uVar10 < (int)uVar13) {
        uVar6 = uVar10;
      }
      uVar7 = 0;
      if (0 < (int)uVar6) {
        uVar7 = uVar6;
      }
      local_d8._12_4_ = uStack_ec;
      local_d8.Size = uVar7;
      local_f8 = pFVar15;
      uStack_f0 = uVar7;
      local_d8.DataPtr = (wchar_t *)pFVar15;
      iVar5 = UE::String::FindLastChar(&local_d8,L'/',CaseSensitive);
      uVar11 = (ulonglong)iVar5;
      bVar3 = iVar5 != -1;
      if ((iVar5 == -1) || (iVar5 != uVar10 - 1)) {
LAB_14190700d:
        if (bVar3) goto LAB_141907011;
        uVar11 = (ulonglong)uVar17;
        iVar5 = (uVar10 - uVar17) + iVar14;
        if ((int)(iVar5 + uVar17) < (int)uVar13) {
          iVar5 = iVar5 + 1;
        }
      }
      else {
        if (0 < iVar5) {
          pFVar15 = pFVar15 + (uVar11 - 1) * 2;
          uVar18 = uVar11;
          do {
            iVar5 = iVar5 + -1;
            if (((iVar5 < 0) || ((int)uVar7 <= iVar5)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  ), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(short *)pFVar15 != 0x2f) break;
            uVar11 = (ulonglong)((int)uVar11 - 1);
            uVar18 = uVar18 - 1;
            pFVar15 = pFVar15 + -2;
          } while (0 < (longlong)uVar18);
          iVar5 = (int)uVar11;
          uVar8 = local_d8._12_4_;
          uVar16 = (uint)local_120;
          iVar14 = (int)local_110;
        }
        uVar17 = local_res20;
        if (iVar5 != 0) {
          uVar6 = uVar13;
          if ((int)(uint)uVar11 < (int)uVar13) {
            uVar6 = (uint)uVar11;
          }
          uStack_f0 = 0;
          if (0 < (int)uVar6) {
            uStack_f0 = uVar6;
          }
          local_58._12_4_ = uVar8;
          local_58.Size = uStack_f0;
          local_58.DataPtr = (wchar_t *)local_f8;
          uStack_ec = uVar8;
          uVar6 = UE::String::FindLastChar(&local_58,L'/',CaseSensitive);
          bVar3 = uVar6 != 0xffffffff;
          uVar11 = (ulonglong)uVar6;
          goto LAB_14190700d;
        }
LAB_141907011:
        if ((int)uVar11 < (int)uVar17) {
          uVar17 = uVar10 + iVar14;
          uVar11 = (ulonglong)uVar17;
          goto LAB_141906d15;
        }
        iVar5 = (uVar10 - (int)uVar11) + iVar14;
      }
      ::FString::RemoveAt(param_1,(int)uVar11,iVar5,No);
      goto LAB_141906c10;
    }
  }
  ::FString::RemoveAt(param_1,uVar10,iStack_130,No);
  goto LAB_141906c10;
}

// CollapseRelativeDirectoriesImpl @ 14192d3d0

/* WARNING: Removing unreachable block (ram,0x000141906487) */
/* WARNING: Removing unreachable block (ram,0x0001419064a1) */
/* WARNING: Removing unreachable block (ram,0x00014190692f) */
/* WARNING: Removing unreachable block (ram,0x0001419064f1) */

void __cdecl
UE4PathViews_Private::CollapseRelativeDirectoriesImpl
          (TStringBuilderBase<wchar_t> *param_1,bool param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  TStringView<wchar_t> *pTVar13;
  int iVar14;
  wchar_t *pwVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uStackX_20;
  wchar_t awStack_1a8 [8];
  wchar_t *pwStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  wchar_t *pwStack_188;
  undefined8 uStack_180;
  wchar_t *pwStack_178;
  undefined8 uStack_170;
  wchar_t *pwStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  wchar_t *pwStack_158;
  wchar_t *pwStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  TStringView<wchar_t> TStack_108;
  wchar_t *pwStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *pwStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  wchar_t *pwStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  TArrayView<wchar_t_const_,int> TStack_c8;
  TStringView<wchar_t> TStack_b8;
  TStringView<wchar_t> TStack_a8;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringView<wchar_t> TStack_78;
  TStringView<wchar_t> TStack_68;
  TStringView<wchar_t> TStack_58;
  
  *param_3 = true;
  pwStack_188 = L"..";
  iVar19 = 2;
  uStack_f0 = 2;
  pwStack_198 = L"/.";
  uStack_180 = 2;
  uStack_18c = 0;
  iVar14 = 3;
  iStack_190 = 2;
  pwStack_150 = L"./";
  uStack_148 = 2;
  pwStack_178 = L"/..";
  pwVar12 = param_1->Base;
  pwStack_f8 = awStack_1a8;
  TStack_c8._12_4_ = uStack_ec;
  TStack_c8.ArrayNum = 2;
  iVar6 = (int)((longlong)param_1->CurPos - (longlong)pwVar12 >> 1);
  TStack_b8._12_4_ = uStack_dc;
  TStack_b8.Size = iVar6;
  uStack_170 = 3;
  uStackX_20 = 0;
  awStack_1a8[0] = L':';
  awStack_1a8[1] = L'/';
  pwStack_e8 = pwVar12;
  iStack_e0 = iVar6;
  TStack_c8.DataPtr = pwStack_f8;
  TStack_b8.DataPtr = pwVar12;
  iVar3 = UE::String::FindFirstOfAnyChar(&TStack_b8,&TStack_c8,CaseSensitive,(int *)0x0);
  if (iVar3 != -1) {
    if (((iVar3 < 0) || (iVar6 <= iVar3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pwVar12[iVar3] == L':') {
      uStackX_20 = iVar3 + 1;
    }
  }
  iVar3 = iVar6;
  if ((int)(iVar6 - uStackX_20) < iVar6) {
    iVar3 = iVar6 - uStackX_20;
  }
  iVar10 = 0;
  if (0 < iVar3) {
    iVar10 = iVar3;
  }
  iVar3 = iVar10;
  if (2 < iVar10) {
    iVar3 = 2;
  }
  iVar16 = 0;
  if (0 < iVar3) {
    iVar16 = iVar3;
  }
  if ((iVar16 == 2) &&
     (iVar3 = wcsncmp(pwStack_150,pwVar12 + ((longlong)iVar6 - (longlong)iVar10),2), iVar3 == 0)) {
    uStack_138 = 0;
    uStack_130 = 0;
    TStack_a8.DataPtr = (wchar_t *)0x0;
    TStack_a8.Size = 0;
    TStack_a8._12_4_ = 0;
    TStringBuilderBase<wchar_t>::ReplaceAt(param_1,uStackX_20,2,&TStack_a8);
  }
  else if ((iVar10 == 2) &&
          (iVar3 = FGenericPlatformStricmp::Strnicmp
                             (pwVar12 + ((longlong)iVar6 - (longlong)iVar10),pwStack_198,2),
          iVar3 == 0)) {
    uStackX_20 = uStackX_20 + 2;
  }
  uVar11 = (ulonglong)uStackX_20;
  pwVar12 = param_1->Base;
  uVar18 = (longlong)param_1->CurPos - (longlong)pwVar12 >> 1;
  if (uStackX_20 != (uint)uVar18) {
    uVar7 = uVar18 & 0xffffffff;
    uVar20 = uStackX_20;
    uVar8 = TStack_108._12_4_;
    do {
      uVar9 = (uint)uVar11;
      if (uVar9 == uVar20) {
        iVar6 = (int)uVar7;
        iVar3 = iVar6;
        if ((int)(iVar6 - uVar20) < iVar6) {
          iVar3 = iVar6 - uVar20;
        }
        iVar10 = 0;
        if (0 < iVar3) {
          iVar10 = iVar3;
        }
        iVar3 = iVar10;
        if (iVar19 < iVar10) {
          iVar3 = iVar19;
        }
        pwStack_158 = pwVar12 + ((longlong)iVar6 - (longlong)iVar10);
        iVar6 = 0;
        if (0 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar19 != iVar6) goto LAB_141906643;
        if ((iVar19 != 0) && (iVar6 != 0)) {
          iVar3 = iVar6;
          if (iVar19 < iVar6) {
            iVar3 = iVar19;
          }
          iVar3 = wcsncmp(pwStack_188,pwStack_158,(longlong)iVar3);
          if (iVar3 != 0) goto LAB_141906643;
        }
        if (iVar19 != iVar6) goto LAB_141906643;
        if (iVar10 != iVar19) {
          if (((iVar19 < 0) || (iVar10 <= iVar19)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pwStack_158[iVar19] != L'/') goto LAB_141906643;
        }
        uVar20 = uVar20 + iVar19;
LAB_141906620:
        *param_3 = false;
        uStackX_20 = uVar20;
        if (!param_2) {
          return;
        }
      }
      else {
LAB_141906643:
        TStack_98._12_4_ = uStack_18c;
        TStack_98.Size = iStack_190;
        uVar17 = (uint)uVar18;
        TStack_98.DataPtr = pwStack_198;
        uVar4 = uVar17;
        if ((int)(uVar17 - uVar9) < (int)uVar17) {
          uVar4 = uVar17 - uVar9;
        }
        uStack_d0 = 0;
        if (0 < (int)uVar4) {
          uStack_d0 = uVar4;
        }
        pwStack_d8 = pwVar12 + ((longlong)(int)uVar17 - (longlong)(int)uStack_d0);
        TStack_88._12_4_ = uStack_cc;
        TStack_88.Size = uStack_d0;
        TStack_88.DataPtr = pwStack_d8;
        iVar3 = UE::String::FindFirst(&TStack_88,&TStack_98,CaseSensitive);
        if (iVar3 == -1) {
          return;
        }
        uVar9 = iVar3 + uVar9;
        uVar4 = uVar9 + iStack_190;
        if (uVar4 == uVar17) {
LAB_141906968:
          pTVar13 = &TStack_58;
          uStack_110 = 0;
          uStack_118 = 0;
          TStack_58.DataPtr = (wchar_t *)0x0;
          TStack_58.Size = 0;
          TStack_58._12_4_ = 0;
          iVar3 = iStack_190;
        }
        else {
          if ((((int)uVar4 < 0) || ((int)uVar17 <= (int)uVar4)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pwVar12[(int)uVar4] == L'/') goto LAB_141906968;
          iVar3 = uVar9 + iStack_190;
          if (((iVar3 < 0) || ((int)uVar17 <= iVar3)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pwVar12[iVar3] != L'.') {
            uVar11 = (ulonglong)(uVar9 + 1 + iStack_190);
            goto LAB_141906996;
          }
          iVar3 = uVar9 + iVar14;
          if (iVar3 < (int)uVar17) {
            if (((iVar3 < 0) || ((int)uVar17 <= iVar3)) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (pwVar12[iVar3] != L'/') {
              uVar11 = (ulonglong)(uVar9 + 1 + iVar14);
              goto LAB_141906996;
            }
          }
          if (uVar9 == uVar20) {
            uVar20 = uVar9 + iVar14;
            uVar11 = (ulonglong)uVar20;
            goto LAB_141906620;
          }
          uVar4 = uVar17;
          if ((int)uVar9 < (int)uVar17) {
            uVar4 = uVar9;
          }
          uVar5 = 0;
          if (0 < (int)uVar4) {
            uVar5 = uVar4;
          }
          TStack_108._12_4_ = uStack_15c;
          TStack_108.Size = uVar5;
          pwStack_168 = pwVar12;
          uStack_160 = uVar5;
          TStack_108.DataPtr = pwVar12;
          iVar3 = UE::String::FindLastChar(&TStack_108,L'/',CaseSensitive);
          uVar11 = (ulonglong)iVar3;
          bVar2 = iVar3 != -1;
          if ((iVar3 == -1) || (iVar3 != uVar9 - 1)) {
LAB_141906911:
            if (bVar2) goto LAB_141906915;
            uVar11 = (ulonglong)uVar20;
            iVar3 = (uVar9 - uVar20) + iVar14;
            if ((int)(iVar3 + uVar20) < (int)uVar17) {
              iVar3 = iVar3 + 1;
            }
          }
          else {
            if (0 < iVar3) {
              pwVar15 = pwVar12 + (uVar11 - 1);
              uVar18 = uVar11;
              do {
                iVar3 = iVar3 + -1;
                if (((iVar3 < 0) || ((int)uVar5 <= iVar3)) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index >= 0 && Index < Size",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                       ,0x234,
                                       L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if (*pwVar15 != L'/') break;
                uVar11 = (ulonglong)((int)uVar11 - 1);
                uVar18 = uVar18 - 1;
                pwVar15 = pwVar15 + -1;
              } while (0 < (longlong)uVar18);
              iVar3 = (int)uVar11;
              uVar8 = TStack_108._12_4_;
              iVar19 = (int)uStack_180;
              iVar14 = (int)uStack_170;
            }
            uVar20 = uStackX_20;
            if (iVar3 != 0) {
              uVar4 = uVar17;
              if ((int)(uint)uVar11 < (int)uVar17) {
                uVar4 = (uint)uVar11;
              }
              uStack_160 = 0;
              if (0 < (int)uVar4) {
                uStack_160 = uVar4;
              }
              TStack_78._12_4_ = uVar8;
              TStack_78.Size = uStack_160;
              pwStack_168 = pwVar12;
              uStack_15c = uVar8;
              TStack_78.DataPtr = pwVar12;
              uVar4 = UE::String::FindLastChar(&TStack_78,L'/',CaseSensitive);
              bVar2 = uVar4 != 0xffffffff;
              uVar11 = (ulonglong)uVar4;
              goto LAB_141906911;
            }
LAB_141906915:
            if ((int)uVar11 < (int)uVar20) {
              uVar20 = uVar9 + iVar14;
              uVar11 = (ulonglong)uVar20;
              goto LAB_141906620;
            }
            iVar3 = (uVar9 - (int)uVar11) + iVar14;
          }
          pTVar13 = &TStack_68;
          uStack_120 = 0;
          uStack_128 = 0;
          uVar9 = (uint)uVar11;
          TStack_68.DataPtr = (wchar_t *)0x0;
          TStack_68.Size = 0;
          TStack_68._12_4_ = 0;
        }
        TStringBuilderBase<wchar_t>::ReplaceAt(param_1,uVar9,iVar3,pTVar13);
      }
LAB_141906996:
      pwVar12 = param_1->Base;
      uVar7 = (longlong)param_1->CurPos - (longlong)pwVar12 >> 1;
      uVar18 = uVar7 & 0xffffffff;
    } while ((int)uVar11 != (int)uVar7);
  }
  return;
}

// CollapseRelativeDirectoriesImpl @ 14192d3e0

void __cdecl
UE4PathViews_Private::CollapseRelativeDirectoriesImpl(FString *param_1,bool param_2,bool *param_3)

{
  CollapseRelativeDirectoriesImplTemplate<FString>(param_1,param_2,param_3);
  ::FString::TrimToNullTerminator(param_1);
  return;
}

// CollapseRemoveAt @ 14192d410

void __cdecl
UE4PathViews_Private::CollapseRemoveAt(TStringBuilderBase<wchar_t> *param_1,int param_2,int param_3)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  TStringBuilderBase<wchar_t>::ReplaceAt(param_1,param_2,param_3,&local_18);
  return;
}

// CollapseRemoveAt @ 14192d440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl UE4PathViews_Private::CollapseRemoveAt(FString *param_1,int param_2,int param_3)

{
  ::FString::RemoveAt(param_1,param_2,param_3,No);
  return;
}

// IsNotSlashOrBackslash @ 141952210

bool __cdecl UE4PathViews_Private::IsNotSlashOrBackslash(wchar_t param_1)

{
  if ((param_1 != L'/') && (param_1 != L'\\')) {
    return true;
  }
  return false;
}

// IsSlashOrBackslash @ 141952f90

bool __cdecl UE4PathViews_Private::IsSlashOrBackslash(wchar_t param_1)

{
  if ((param_1 != L'/') && (param_1 != L'\\')) {
    return false;
  }
  return true;
}

// IsSlashOrBackslashOrPeriod @ 141952fb0

bool __cdecl UE4PathViews_Private::IsSlashOrBackslashOrPeriod(wchar_t param_1)

{
  if ((1 < (ushort)(param_1 + L'ￒ')) && (param_1 != L'\\')) {
    return false;
  }
  return true;
}

