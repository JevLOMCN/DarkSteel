// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// StaticStruct @ 14283c210

UScriptStruct * __cdecl FCharRange::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCharRange.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FCharRange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCharRange,(UObject *)pUVar1,L"CharRange");
  }
  return Z_Registration_Info_UScriptStruct_FCharRange.OuterSingleton;
}

// InitializeFromString @ 14287fcb0

bool __thiscall
FCharRange::InitializeFromString(FCharRange *this,FString *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar10 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar10 = 0;
  }
  if ((((param_2 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar6 = *(ushort *)((param_1->Data).AllocatorInstance.Data + (longlong)param_2 * 2);
  iVar7 = param_2 + 1;
  if (uVar6 == 0x5c) {
    iVar9 = iVar7;
    if (iVar7 < iVar10) {
      lVar11 = (longlong)iVar7;
      if (iVar7 < 0) {
code_r0x00014287fd73:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      else {
        iVar9 = (param_1->Data).ArrayNum;
        iVar8 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar8 = 0;
        }
        if (iVar8 <= iVar7) goto code_r0x00014287fd73;
      }
      iVar7 = param_2 + 2;
      uVar6 = *(ushort *)((param_1->Data).AllocatorInstance.Data + lVar11 * 2);
      goto LAB_14287fd9c;
    }
LAB_14287fe94:
    bVar2 = false;
  }
  else {
LAB_14287fd9c:
    this->First = uVar6;
    this->Last = uVar6;
    iVar9 = iVar7;
    if (iVar7 < iVar10) {
      if (iVar7 < 0) {
code_r0x00014287fde1:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      else {
        iVar8 = (param_1->Data).ArrayNum;
        iVar5 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar7) goto code_r0x00014287fde1;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar7 * 2) == 0x2d) {
        iVar8 = iVar7 + 1;
        if (iVar8 < 0) {
code_r0x00014287fe49:
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        else {
          iVar9 = (param_1->Data).ArrayNum;
          iVar5 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar5 = 0;
          }
          if (iVar5 <= iVar8) goto code_r0x00014287fe49;
        }
        iVar9 = iVar7 + 2;
        uVar6 = *(ushort *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar8 * 2);
        if (uVar6 != 0x5c) {
          this->Last = uVar6;
          bVar2 = true;
          goto LAB_14287fe96;
        }
        if (iVar10 <= iVar9) goto LAB_14287fe94;
        pwVar4 = ::FString::operator[](param_1,iVar9);
        iVar9 = iVar7 + 3;
        this->Last = *pwVar4;
      }
    }
    bVar2 = true;
  }
LAB_14287fe96:
  *param_3 = iVar9;
  return bVar2;
}

// ToString @ 14289d860

FString * __thiscall FCharRange::ToString(FCharRange *this,FString *__return_storage_ptr__)

{
  wchar_t wVar1;
  wchar_t wVar2;
  ForAnyElementType FVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  wVar1 = this->First;
  wVar2 = this->Last;
  for (FVar3 = CharRangeConstants::EscapedCharacters.Data.AllocatorInstance;
      FVar3.Data !=
      CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data +
      (longlong)CharRangeConstants::EscapedCharacters.Data.ArrayNum * 2; FVar3.Data = FVar3.Data + 2
      ) {
    if (*(wchar_t *)FVar3.Data == wVar1) {
      if ((int)((longlong)FVar3.Data -
                (longlong)CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data >> 1) !=
          -1) {
        ::FString::AppendChar(__return_storage_ptr__,L'\\');
      }
      break;
    }
  }
  ::FString::AppendChar(__return_storage_ptr__,wVar1);
  if (this->First < this->Last) {
    ::FString::AppendChar(__return_storage_ptr__,L'-');
    for (FVar3 = CharRangeConstants::EscapedCharacters.Data.AllocatorInstance;
        FVar3.Data !=
        CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data +
        (longlong)CharRangeConstants::EscapedCharacters.Data.ArrayNum * 2;
        FVar3.Data = FVar3.Data + 2) {
      if (*(wchar_t *)FVar3.Data == wVar2) {
        if ((int)((longlong)FVar3.Data -
                  (longlong)CharRangeConstants::EscapedCharacters.Data.AllocatorInstance.Data >> 1)
            != -1) {
          ::FString::AppendChar(__return_storage_ptr__,L'\\');
        }
        break;
      }
    }
    ::FString::AppendChar(__return_storage_ptr__,wVar2);
  }
  return __return_storage_ptr__;
}

