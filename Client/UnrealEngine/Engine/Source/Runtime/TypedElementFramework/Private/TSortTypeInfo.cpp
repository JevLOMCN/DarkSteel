// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// CalculatePrefix @ 142cee8a0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
::CalculatePrefix(FPrefixInfo *__return_storage_ptr__,int param_1,int param_2,
                 TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>
                 *param_3)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  FPrefixInfo *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  
  uVar10 = 0;
  uVar11 = (param_3->View).Size;
  uVar6 = param_1 & 7;
  if (param_1 <= param_2) {
    uVar6 = 0;
  }
  uVar7 = uVar11;
  if (param_2 - param_1 < (int)uVar11) {
    uVar7 = param_2 - param_1;
  }
  uVar12 = 0;
  if (0 < (int)uVar7) {
    uVar12 = uVar7;
  }
  iVar4 = 8 - uVar6;
  if ((int)(uVar11 - uVar12) < (int)(8 - uVar6)) {
    iVar4 = uVar11 - uVar12;
  }
  switch(iVar4) {
  case 1:
    break;
  case 8:
    pcVar8 = TStringView<char>::operator[](&param_3->View,(uVar12 - 8) + iVar4);
    uVar10 = (longlong)(char)(*pcVar8 - (-((int)*pcVar8 - 0x61U < 0x1a) & 0x20U)) << 0x38;
  case 7:
    pcVar8 = TStringView<char>::operator[](&param_3->View,(uVar12 - 7) + iVar4);
    uVar10 = uVar10 | (longlong)(char)(*pcVar8 - (-((int)*pcVar8 - 0x61U < 0x1a) & 0x20U)) << 0x30;
  case 6:
    pcVar8 = TStringView<char>::operator[](&param_3->View,(uVar12 - 6) + iVar4);
    uVar10 = uVar10 | (longlong)(char)(*pcVar8 - (-((int)*pcVar8 - 0x61U < 0x1a) & 0x20U)) << 0x28;
  case 5:
    pcVar8 = TStringView<char>::operator[](&param_3->View,(uVar12 - 5) + iVar4);
    uVar10 = uVar10 | (longlong)(char)(*pcVar8 - (-((int)*pcVar8 - 0x61U < 0x1a) & 0x20U)) << 0x20;
  case 4:
    pcVar8 = TStringView<char>::operator[](&param_3->View,(uVar12 - 4) + iVar4);
    uVar10 = uVar10 | (longlong)(char)(*pcVar8 - (-((int)*pcVar8 - 0x61U < 0x1a) & 0x20U)) << 0x18;
  case 3:
    pcVar8 = TStringView<char>::operator[](&param_3->View,(uVar12 - 3) + iVar4);
    uVar10 = uVar10 | (longlong)(char)(*pcVar8 - (-((int)*pcVar8 - 0x61U < 0x1a) & 0x20U)) << 0x10;
  case 2:
    iVar1 = iVar4 + uVar12 + -2;
    if (((iVar1 < 0) || ((int)uVar11 <= iVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPrefixInfo *)(*pcVar3)();
      return pFVar9;
    }
    cVar2 = (param_3->View).DataPtr[(longlong)(int)(iVar4 + uVar12) + -2];
    uVar10 = uVar10 | (longlong)(char)(cVar2 - (-((int)cVar2 - 0x61U < 0x1a) & 0x20U)) << 8;
    break;
  default:
    goto switchD_142cee91d_default;
  }
  piVar13 = &(param_3->View).Size;
  iVar1 = iVar4 + uVar12 + -1;
  if ((iVar1 < 0) || (uVar11 = *piVar13, (int)uVar11 <= iVar1)) {
    uVar11 = *piVar13;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPrefixInfo *)(*pcVar3)();
      return pFVar9;
    }
  }
  cVar2 = (param_3->View).DataPtr[(longlong)(int)(iVar4 + uVar12) + -1];
  uVar10 = uVar10 | (longlong)(char)(cVar2 - (-((int)cVar2 - 0x61U < 0x1a) & 0x20U));
switchD_142cee91d_default:
  __return_storage_ptr__->Prefix = uVar10 << ((('\b' - (char)uVar6) - (char)iVar4) * '\b' & 0x3fU);
  __return_storage_ptr__->bHasRemainingBytes = (int)(iVar4 + uVar12) < (int)uVar11;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ceeb50

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::CalculatePrefix(FPrefixInfo *__return_storage_ptr__,int param_1,int param_2,
                 TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
                 *param_3)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  FPrefixInfo *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = (param_3->View).Size;
  uVar7 = 0;
  uVar11 = param_1 & 7;
  if (param_1 <= param_2) {
    uVar11 = 0;
  }
  uVar12 = iVar10 * 2;
  if (param_2 - param_1 < iVar10 * 2) {
    uVar12 = param_2 - param_1;
  }
  uVar8 = 0;
  if (0 < (int)uVar12) {
    uVar8 = uVar12;
  }
  iVar9 = (int)uVar8 >> 1;
  uVar12 = 8 - uVar11 >> 1;
  if (iVar10 - iVar9 < (int)uVar12) {
    uVar12 = iVar10 - iVar9;
  }
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) {
        if (uVar12 != 4) goto LAB_142ceecec;
        pwVar5 = TStringView<wchar_t>::operator[](&param_3->View,iVar9);
        uVar7 = (ulonglong)(ushort)(*pwVar5 - (-(ushort)((ushort)*pwVar5 - 0x61 < 0x1a) & 0x20)) <<
                0x30;
      }
      pwVar5 = TStringView<wchar_t>::operator[](&param_3->View,iVar9 + -3 + uVar12);
      uVar7 = uVar7 | (ulonglong)
                      (ushort)(*pwVar5 - (-(ushort)((ushort)*pwVar5 - 0x61 < 0x1a) & 0x20)) << 0x20;
    }
    iVar4 = uVar12 + iVar9 + -2;
    if ((iVar4 < 0) || (iVar10 <= iVar4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPrefixInfo *)(*pcVar2)();
        return pFVar6;
      }
    }
    wVar1 = (param_3->View).DataPtr[(longlong)(int)(uVar12 + iVar9) + -2];
    uVar7 = uVar7 | (ulonglong)(ushort)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20)) <<
                    0x10;
  }
  iVar4 = uVar12 + iVar9 + -1;
  if ((iVar4 < 0) || (iVar10 = (param_3->View).Size, iVar10 <= iVar4)) {
    iVar10 = (param_3->View).Size;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  wVar1 = (param_3->View).DataPtr[(longlong)(int)(uVar12 + iVar9) + -1];
  uVar7 = uVar7 | (ushort)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20));
LAB_142ceecec:
  __return_storage_ptr__->Prefix =
       uVar7 << ((('\x04' - (char)uVar12) * '\x02' - (char)uVar11) * '\b' & 0x3fU);
  __return_storage_ptr__->bHasRemainingBytes = (int)(uVar12 + iVar9) < iVar10;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ceed40

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
::CalculatePrefix(FPrefixInfo *__return_storage_ptr__,int param_1,int param_2,
                 TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>
                 *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FPrefixInfo *pFVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = 0;
  piVar8 = &(param_3->View).Size;
  uVar9 = *piVar8;
  uVar5 = param_1 & 7;
  if (param_1 <= param_2) {
    uVar5 = 0;
  }
  uVar6 = uVar9;
  if (param_2 - param_1 < (int)uVar9) {
    uVar6 = param_2 - param_1;
  }
  uVar11 = 0;
  if (0 < (int)uVar6) {
    uVar11 = uVar6;
  }
  iVar3 = 8 - uVar5;
  if ((int)(uVar9 - uVar11) < (int)(8 - uVar5)) {
    iVar3 = uVar9 - uVar11;
  }
  switch(iVar3) {
  case 8:
    iVar1 = iVar3 + uVar11 + -8;
    if (((iVar1 < 0) || ((int)uVar9 <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPrefixInfo *)(*pcVar2)();
      return pFVar7;
    }
    uVar10 = (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -8] << 0x38;
  case 7:
    iVar1 = iVar3 + uVar11 + -7;
    if (((iVar1 < 0) || (*piVar8 <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPrefixInfo *)(*pcVar2)();
      return pFVar7;
    }
    uVar10 = uVar10 | (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -7] <<
                      0x30;
  case 6:
    iVar1 = iVar3 + uVar11 + -6;
    if (((iVar1 < 0) || ((param_3->View).Size <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPrefixInfo *)(*pcVar2)();
      return pFVar7;
    }
    uVar10 = uVar10 | (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -6] <<
                      0x28;
  case 5:
    iVar1 = iVar3 + uVar11 + -5;
    if (((iVar1 < 0) || ((param_3->View).Size <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPrefixInfo *)(*pcVar2)();
      return pFVar7;
    }
    uVar10 = uVar10 | (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -5] <<
                      0x20;
  case 4:
    iVar1 = iVar3 + uVar11 + -4;
    if (((iVar1 < 0) || ((param_3->View).Size <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPrefixInfo *)(*pcVar2)();
      return pFVar7;
    }
    uVar10 = uVar10 | (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -4] <<
                      0x18;
  case 3:
    iVar1 = iVar3 + uVar11 + -3;
    if (((iVar1 < 0) || ((param_3->View).Size <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPrefixInfo *)(*pcVar2)();
      return pFVar7;
    }
    uVar10 = uVar10 | (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -3] <<
                      0x10;
  case 2:
    iVar1 = iVar3 + uVar11 + -2;
    if (((iVar1 < 0) || ((param_3->View).Size <= iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPrefixInfo *)(*pcVar2)();
      return pFVar7;
    }
    uVar10 = uVar10 | (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -2] << 8;
  case 1:
    piVar8 = &(param_3->View).Size;
    iVar1 = iVar3 + uVar11 + -1;
    if ((iVar1 < 0) || (uVar9 = *piVar8, (int)uVar9 <= iVar1)) {
      uVar9 = *piVar8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FPrefixInfo *)(*pcVar2)();
        return pFVar7;
      }
    }
    uVar10 = uVar10 | (longlong)(param_3->View).DataPtr[(longlong)(int)(iVar3 + uVar11) + -1];
  default:
    __return_storage_ptr__->Prefix = uVar10 << ((('\b' - (char)uVar5) - (char)iVar3) * '\b' & 0x3fU)
    ;
    __return_storage_ptr__->bHasRemainingBytes = (int)(iVar3 + uVar11) < (int)uVar9;
    return __return_storage_ptr__;
  }
}

// CalculatePrefix @ 142cef110

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::CalculatePrefix(FPrefixInfo *__return_storage_ptr__,int param_1,int param_2,
                 TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  FPrefixInfo *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar9 = (param_3->View).Size;
  uVar6 = 0;
  uVar10 = param_1 & 7;
  if (param_1 <= param_2) {
    uVar10 = 0;
  }
  uVar11 = iVar9 * 2;
  if (param_2 - param_1 < iVar9 * 2) {
    uVar11 = param_2 - param_1;
  }
  uVar7 = 0;
  if (0 < (int)uVar11) {
    uVar7 = uVar11;
  }
  iVar8 = (int)uVar7 >> 1;
  uVar11 = 8 - uVar10 >> 1;
  if (iVar9 - iVar8 < (int)uVar11) {
    uVar11 = iVar9 - iVar8;
  }
  if (uVar11 != 1) {
    if (uVar11 != 2) {
      if (uVar11 != 3) {
        if (uVar11 != 4) goto LAB_142cef260;
        pwVar4 = TStringView<wchar_t>::operator[](&param_3->View,iVar8);
        uVar6 = (ulonglong)(ushort)*pwVar4 << 0x30;
      }
      pwVar4 = TStringView<wchar_t>::operator[](&param_3->View,iVar8 + -3 + uVar11);
      uVar6 = uVar6 | (ulonglong)(ushort)*pwVar4 << 0x20;
    }
    iVar3 = uVar11 + iVar8 + -2;
    if ((iVar3 < 0) || (iVar9 <= iVar3)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FPrefixInfo *)(*pcVar1)();
        return pFVar5;
      }
    }
    uVar6 = uVar6 | (ulonglong)(ushort)(param_3->View).DataPtr[(longlong)(int)(uVar11 + iVar8) + -2]
                    << 0x10;
  }
  iVar3 = uVar11 + iVar8 + -1;
  if ((iVar3 < 0) || (iVar9 = (param_3->View).Size, iVar9 <= iVar3)) {
    iVar9 = (param_3->View).Size;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar6 = uVar6 | (ushort)(param_3->View).DataPtr[(longlong)(int)(uVar11 + iVar8) + -1];
LAB_142cef260:
  __return_storage_ptr__->Prefix =
       uVar6 << ((('\x04' - (char)uVar11) * '\x02' - (char)uVar10) * '\b' & 0x3fU);
  __return_storage_ptr__->bHasRemainingBytes = (int)(uVar11 + iVar8) < iVar9;
  return __return_storage_ptr__;
}

