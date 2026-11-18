// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5ba480

UScriptStruct * __cdecl FDS_TextIcon::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_TextIcon.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_TextIcon.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_TextIcon,(UObject *)pUVar1,L"DS_TextIcon");
  }
  return Z_Registration_Info_UScriptStruct_FDS_TextIcon.OuterSingleton;
}

// GetIconPath @ 14bcf8070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FDS_TextIcon::GetIconPath(FDS_TextIcon *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_ResourceTextIconTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  UDS_LanguageManager *pUVar7;
  FString *pFVar8;
  FSoftObjectPath *this_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_1a8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar5 = FDS_ResourceTextIconTableRow::Get(this->TextIconID,true);
  if (pFVar5 == (FDS_ResourceTextIconTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_TextIcon::GetIconPath",0x19,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_168.Ptr,0xd,
                 L"Couldn\'t find FDS_ResourceTextIconTableRow. (%d)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    ::FString::FString(__return_storage_ptr__,L"");
  }
  else {
    pUVar7 = UDS_LanguageManager::GetInst();
    if (pUVar7 != (UDS_LanguageManager *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      lVar11 = (longlong)(pFVar5->LanguageEnum).ArrayNum;
      FVar1 = (FScriptContainerElement)pUVar7->CurrentLanguage;
      uVar9 = 0;
      if (0 < lVar11) {
        lVar10 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar9 < (pFVar5->LanguageEnum).ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar2)();
              return pFVar8;
            }
          }
          if ((pFVar5->LanguageEnum).AllocatorInstance.Data[lVar10] == FVar1) {
            uVar4 = 0;
            if ((int)uVar9 < (pFVar5->IconPath).ArrayNum) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            if (uVar4 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pFVar8 = (FString *)(*pcVar2)();
                return pFVar8;
              }
            }
            this_00 = (FSoftObjectPath *)
                      ((pFVar5->IconPath).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20);
            goto LAB_14bcf8205;
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar11);
      }
    }
    this_00 = &pFVar5->IconPathDefault;
LAB_14bcf8205:
    FSoftObjectPath::ToString(this_00,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

