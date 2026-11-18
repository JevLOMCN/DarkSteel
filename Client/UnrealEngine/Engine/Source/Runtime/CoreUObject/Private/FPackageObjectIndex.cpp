// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GenerateImportHashFromObjectPath @ 142326310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl FPackageObjectIndex::GenerateImportHashFromObjectPath(TStringView<wchar_t> *param_1)

{
  char *pcVar1;
  wchar_t wVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  ForElementType<wchar_t> FVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_898 [32];
  ForElementType<wchar_t> local_868;
  int local_48 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_898;
  iVar3 = param_1->Size;
  local_868.SecondaryData = (ForElementType<wchar_t>)0x0;
  local_48[0] = 0;
  local_48[1] = 0x40b;
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
            (2,2,iVar3,&local_868,local_48,local_48 + 1);
  uVar9 = 0;
  if (0 < iVar3) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      if ((((int)uVar9 < 0) || (param_1->Size <= (int)uVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      if (*(short *)(lVar11 + (longlong)param_1->DataPtr) == 0x2e) {
LAB_142326504:
        uVar6 = 0;
        if ((int)uVar9 < local_48[0]) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        FVar8 = (ForElementType<wchar_t>)&local_868;
        if (local_868.SecondaryData != (ForElementType<wchar_t>)0x0) {
          FVar8 = local_868.SecondaryData;
        }
        pcVar1 = (char *)((longlong)FVar8 + lVar10 * 2);
        pcVar1[0] = '/';
        pcVar1[1] = '\0';
      }
      else {
        if ((((int)uVar9 < 0) || (param_1->Size <= (int)uVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        if (param_1->DataPtr[lVar10] == L':') goto LAB_142326504;
        if ((((int)uVar9 < 0) || (param_1->Size <= (int)uVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        wVar2 = param_1->DataPtr[lVar10];
        uVar6 = 0;
        if ((int)uVar9 < local_48[0]) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        FVar8 = (ForElementType<wchar_t>)&local_868;
        if (local_868.SecondaryData != (ForElementType<wchar_t>)0x0) {
          FVar8 = local_868.SecondaryData;
        }
        *(wchar_t *)((longlong)FVar8 + lVar10 * 2) =
             (-(ushort)((ushort)wVar2 - 0x41 < 0x1a) & 0x20) + wVar2;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 2;
    } while (lVar10 < iVar3);
  }
  FVar8 = (ForElementType<wchar_t>)&local_868;
  if (local_868.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FVar8 = local_868.SecondaryData;
  }
  uVar7 = CityHash64((char *)FVar8,iVar3 * 2);
  if (local_868.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)local_868.SecondaryData);
  }
  return uVar7 & 0x3fffffffffffffff;
}

// GenerateImportHashFromVersePath @ 142326620

ulong64 __cdecl FPackageObjectIndex::GenerateImportHashFromVersePath(TStringView<char8_t> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = CityHash64((char *)param_1->DataPtr,param_1->Size);
  return uVar1 & 0x3fffffffffffffff;
}

// ToExport @ 14233f2b0

uint __thiscall FPackageObjectIndex::ToExport(FPackageObjectIndex *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->TypeAndId < 0x4000000000000000) {
    return (uint)this->TypeAndId;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsExport()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                     ,0x8e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (uint)this->TypeAndId;
}

