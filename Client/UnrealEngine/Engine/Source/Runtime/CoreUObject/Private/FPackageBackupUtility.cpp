// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// RestorePackage @ 14221ca90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::SavePackageUtilities::FPackageBackupUtility::RestorePackage(FPackageBackupUtility *this)

{
  int iVar1;
  char cVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FString local_28;
  
  pIVar3 = IFileManager::Get();
  if (5 < (byte)LogSavePackage._0_1_) {
    FPackagePath::GetDebugName(this->PackagePath,&local_28);
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::SavePackageUtilities::FPackageBackupUtility::RestorePackage(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = (this->NewFiles).ArrayNum;
  pFVar6 = (this->NewFiles).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->NewFiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar6 == pFVar7) break;
    if (*(int *)(pFVar6 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar6;
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,pwVar4,0,0,0);
    if ((cVar2 == '\0') && (1 < (byte)LogSavePackage._0_1_)) {
      Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_UE::SavePackageUtilities::FPackageBackupUtility::RestorePackage(void)___ptr64'
                  ::__l28::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  iVar1 = (this->MovedOriginalFiles).ArrayNum;
  pFVar6 = (this->MovedOriginalFiles).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->MovedOriginalFiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if (*(int *)(pFVar6 + 0x18) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)(pFVar6 + 0x10);
    }
    if (*(int *)(pFVar6 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar6;
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,pwVar5,pwVar4,1,0,0,0);
    if ((cVar2 == '\0') && (1 < (byte)LogSavePackage._0_1_)) {
      FPackagePath::GetDebugName(this->PackagePath,&local_28);
      Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_UE::SavePackageUtilities::FPackageBackupUtility::RestorePackage(void)___ptr64'
                  ::__l53::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = pFVar6 + 0x20;
  }
  return;
}

