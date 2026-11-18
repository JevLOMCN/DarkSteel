// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// Add @ 142b53c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::Add
          (TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStackY_68 [32];
  int local_38;
  int local_34;
  uint *local_30;
  uint local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (7 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyCombination <= MaxValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                       ,0x185,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPropertyCombinationPack3::Unpack(this->Storage,&local_30,&local_38);
  bVar2 = AddNonRedundant(local_30,local_38,param_1,local_28,&local_34);
  if (bVar2) {
    uVar3 = FPropertyCombinationPack3::Pack(local_28,local_34);
    this->Storage = uVar3;
  }
  return;
}

// AddNonRedundant @ 142b54040

bool __cdecl
TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
          (uint *param_1,int param_2,uint param_3,uint *param_4,int *param_5)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  bVar5 = false;
  *param_5 = 0;
  if ((param_2 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  puVar1 = param_1 + param_2;
  if (param_1 != puVar1) {
    do {
      uVar7 = *param_1;
      if ((uVar7 & param_3) == param_3) {
        return false;
      }
      if ((param_3 < uVar7) && (!bVar5)) {
        if ((1 < (uint)*param_5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewNum < ArrayMax",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x1fa,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar5 = true;
        param_4[*param_5] = param_3;
        *param_5 = *param_5 + 1;
      }
      if ((uVar7 & param_3) != uVar7) {
        if ((1 < (uint)*param_5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewNum < ArrayMax",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x200,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        param_4[*param_5] = uVar7;
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
    if (bVar5) goto LAB_142b5417f;
  }
  if ((1 < (uint)*param_5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNum < ArrayMax",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x206,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  param_4[*param_5] = param_3;
  *param_5 = *param_5 + 1;
LAB_142b5417f:
  if (((*param_5 < 1) || (2 < (uint)*param_5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("1 <= NewNum && NewNum <= ArrayMax",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x209,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar6 = *param_5;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else if (iVar6 == 0) {
    return true;
  }
  iVar6 = iVar6 + -1;
  if (iVar6 != 0) {
    uVar7 = *param_4;
    do {
      puVar1 = param_4 + 1;
      param_4 = param_4 + 1;
      if (*puVar1 < uVar7) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(TArrayView<uint32>(NewValues, NewNum))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x20a,L"");
        if (!bVar5) {
          return true;
        }
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = iVar6 + -1;
      uVar7 = *puVar1;
    } while (iVar6 != 0);
  }
  return true;
}

// AddNonRedundant @ 142b54260

bool __cdecl
TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::AddNonRedundant
          (uint *param_1,int param_2,uint param_3,uint *param_4,int *param_5)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  bVar5 = false;
  *param_5 = 0;
  if ((param_2 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  puVar1 = param_1 + param_2;
  if (param_1 != puVar1) {
    do {
      uVar7 = *param_1;
      if ((uVar7 & param_3) == param_3) {
        return false;
      }
      if ((param_3 < uVar7) && (!bVar5)) {
        if ((2 < (uint)*param_5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewNum < ArrayMax",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x1fa,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar5 = true;
        param_4[*param_5] = param_3;
        *param_5 = *param_5 + 1;
      }
      if ((uVar7 & param_3) != uVar7) {
        if ((2 < (uint)*param_5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewNum < ArrayMax",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                               ,0x200,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        param_4[*param_5] = uVar7;
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
    if (bVar5) goto LAB_142b5439f;
  }
  if ((2 < (uint)*param_5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNum < ArrayMax",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x206,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  param_4[*param_5] = param_3;
  *param_5 = *param_5 + 1;
LAB_142b5439f:
  if (((*param_5 < 1) || (3 < (uint)*param_5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("1 <= NewNum && NewNum <= ArrayMax",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x209,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar6 = *param_5;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else if (iVar6 == 0) {
    return true;
  }
  iVar6 = iVar6 + -1;
  if (iVar6 != 0) {
    uVar7 = *param_4;
    do {
      puVar1 = param_4 + 1;
      param_4 = param_4 + 1;
      if (*puVar1 < uVar7) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(TArrayView<uint32>(NewValues, NewNum))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x20a,L"");
        if (!bVar5) {
          return true;
        }
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = iVar6 + -1;
      uVar7 = *puVar1;
    } while (iVar6 != 0);
  }
  return true;
}

// AddRange @ 142b546e0

void __thiscall
TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddRange
          (TPropertyCombinationSetHardcoded<FPropertyCombinationPack2> *this,
          TPropertyCombinationSetHardcoded<FPropertyCombinationPack2> *param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint **ppuVar8;
  int iVar9;
  uint uVar10;
  uint **ppuVar11;
  uint uVar12;
  uint **ppuVar13;
  uint **ppuVar14;
  uint **local_78;
  uint *local_70;
  uint **local_68;
  uint **local_60;
  uint *local_58 [3];
  
  uVar6 = this->Storage;
  local_78 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
              ::__l7::Values;
  if (uVar6 < 4) {
    ppuVar11 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)uVar6 * 4);
    uVar6 = 1;
  }
  else {
    if ((uVar6 != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppuVar11 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                ::__l7::Values;
    uVar6 = 2;
  }
  uVar12 = param_1->Storage;
  if (uVar12 < 4) {
    local_78 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)uVar12 * 4);
    lVar7 = 4;
  }
  else {
    if ((uVar12 != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = 8;
  }
  ppuVar13 = &local_70;
  local_60 = (uint **)(lVar7 + (longlong)local_78);
  ppuVar8 = ppuVar11;
  if (local_78 != (uint **)(lVar7 + (longlong)local_78)) {
    do {
      uVar12 = *(uint *)local_78;
      bVar5 = false;
      lVar7 = 0;
      local_68 = ppuVar13;
      uVar10 = 0;
      if (((int)uVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ppuVar8 = (uint **)((longlong)ppuVar11 + (longlong)(int)uVar6 * 4);
      ppuVar14 = ppuVar11;
      if (ppuVar11 == ppuVar8) {
LAB_142b548fd:
        *(uint *)((longlong)ppuVar13 + lVar7 * 4) = uVar12;
        uVar10 = uVar10 + 1;
      }
      else {
        do {
          uVar2 = *(uint *)ppuVar14;
          if ((uVar2 & uVar12) == uVar12) {
            bVar5 = false;
            goto LAB_142b549db;
          }
          if ((uVar12 < uVar2) && (!bVar5)) {
            if ((1 < uVar10) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewNum < ArrayMax",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x1fa,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar10 = uVar10 + 1;
            *(uint *)((longlong)ppuVar13 + lVar7 * 4) = uVar12;
            lVar7 = lVar7 + 1;
            bVar5 = true;
          }
          if ((uVar2 & uVar12) != uVar2) {
            if ((1 < uVar10) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewNum < ArrayMax",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x200,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar10 = uVar10 + 1;
            *(uint *)((longlong)ppuVar13 + lVar7 * 4) = uVar2;
            lVar7 = lVar7 + 1;
          }
          ppuVar14 = (uint **)((longlong)ppuVar14 + 4);
        } while (ppuVar14 != ppuVar8);
        if (!bVar5) {
          if ((1 < uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewNum < ArrayMax",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x206,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_142b548fd;
        }
      }
      if (((int)uVar10 < 1) || (2 < uVar10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("1 <= NewNum && NewNum <= ArrayMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x209,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((int)uVar10 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_142b54966;
        }
        if (uVar10 != 0) goto LAB_142b54966;
      }
      else {
LAB_142b54966:
        iVar9 = uVar10 - 1;
        if (iVar9 != 0) {
          ppuVar8 = ppuVar13;
          uVar12 = *(uint *)ppuVar13;
          do {
            puVar1 = (uint *)((longlong)ppuVar8 + 4);
            ppuVar8 = (uint **)((longlong)ppuVar8 + 4);
            if (*puVar1 < uVar12) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Algo::IsSorted(TArrayView<uint32>(NewValues, NewNum))",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x20a,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              break;
            }
            iVar9 = iVar9 + -1;
            uVar12 = *puVar1;
          } while (iVar9 != 0);
        }
      }
      bVar5 = true;
      bVar4 = ppuVar13 != &local_70;
      ppuVar13 = local_58;
      if (bVar4) {
        ppuVar13 = &local_70;
      }
LAB_142b549db:
      ppuVar8 = local_68;
      if (!bVar5) {
        ppuVar8 = ppuVar11;
        uVar10 = uVar6;
      }
      uVar6 = uVar10;
      local_78 = (uint **)((longlong)local_78 + 4);
      ppuVar11 = ppuVar8;
    } while (local_78 != local_60);
  }
  uVar6 = FPropertyCombinationPack2::Pack((uint *)ppuVar8,uVar6);
  this->Storage = uVar6;
  return;
}

// AddRange @ 142b54a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::AddRange
          (TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> *this,
          TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b4;
  int local_b0 [2];
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> *local_70;
  uint local_68 [4];
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_70 = this;
  FPropertyCombinationPack3::Unpack(this->Storage,&local_90,(int *)&local_b4);
  FPropertyCombinationPack3::Unpack(param_1->Storage,&local_88,local_b0);
  puVar11 = local_68;
  local_a0 = local_90;
  local_b8 = local_b4;
  local_98 = local_88;
  if ((local_b0[0] < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_78 = local_88 + local_b0[0];
  puVar9 = local_90;
  uVar5 = local_b4;
  if (local_88 != local_78) {
    do {
      uVar1 = *local_88;
      bVar3 = false;
      lVar10 = 0;
      uVar8 = 0;
      local_80 = puVar11;
      if (((int)uVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar6 = puVar9 + (int)uVar5;
      local_a8 = puVar6;
      if (puVar9 == puVar6) {
LAB_142b54c54:
        puVar11[lVar10] = uVar1;
        uVar8 = uVar8 + 1;
      }
      else {
        do {
          uVar5 = *puVar9;
          if ((uVar5 & uVar1) == uVar1) {
            bVar3 = false;
            goto LAB_142b54d2e;
          }
          if ((uVar1 < uVar5) && (!bVar3)) {
            if ((2 < uVar8) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewNum < ArrayMax",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x1fa,L""), puVar6 = local_a8, bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = uVar8 + 1;
            puVar11[lVar10] = uVar1;
            lVar10 = lVar10 + 1;
            bVar3 = true;
          }
          if ((uVar5 & uVar1) != uVar5) {
            if ((2 < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewNum < ArrayMax",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                   ,0x200,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = uVar8 + 1;
            puVar11[lVar10] = uVar5;
            lVar10 = lVar10 + 1;
            puVar6 = local_a8;
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar6);
        if (!bVar3) {
          if ((2 < uVar8) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewNum < ArrayMax",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x206,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_142b54c54;
        }
      }
      if (((int)uVar8 < 1) || (3 < uVar8)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("1 <= NewNum && NewNum <= ArrayMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x209,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)uVar8 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_142b54cbd;
        }
        if (uVar8 != 0) goto LAB_142b54cbd;
      }
      else {
LAB_142b54cbd:
        iVar7 = uVar8 - 1;
        if (iVar7 != 0) {
          puVar9 = puVar11;
          uVar5 = *puVar11;
          do {
            puVar6 = puVar9 + 1;
            puVar9 = puVar9 + 1;
            if (*puVar6 < uVar5) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Algo::IsSorted(TArrayView<uint32>(NewValues, NewNum))",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                                 ,0x20a,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              break;
            }
            iVar7 = iVar7 + -1;
            uVar5 = *puVar6;
          } while (iVar7 != 0);
        }
      }
      bVar3 = true;
      bVar4 = puVar11 != local_68;
      puVar11 = local_58;
      if (bVar4) {
        puVar11 = local_68;
      }
LAB_142b54d2e:
      local_90 = local_80;
      local_b4 = uVar8;
      if (!bVar3) {
        local_90 = local_a0;
        local_b4 = local_b8;
      }
      local_88 = local_98 + 1;
      puVar9 = local_90;
      uVar5 = local_b4;
      local_b8 = local_b4;
      local_a0 = local_90;
      local_98 = local_88;
    } while (local_88 != local_78);
  }
  uVar5 = FPropertyCombinationPack3::Pack(local_90,local_b4);
  local_70->Storage = uVar5;
  return;
}

