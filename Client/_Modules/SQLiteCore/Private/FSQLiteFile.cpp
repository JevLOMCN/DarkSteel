// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 2

// AllowOpenAsReadOnly @ 14d120cb0

bool __cdecl FSQLiteFile::AllowOpenAsReadOnly(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPlatformFileManager *this;
  IPlatformFile *pIVar4;
  FString local_res18;
  void *local_18 [2];
  
  this = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformFile(this);
  (**(code **)((longlong)*pIVar4 + 200))(pIVar4,local_18,param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&CurrentlyOpenAsReadOnlySection);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&CurrentlyOpenAsReadOnly,&local_res18,(bool *)local_18);
  if ((int)local_res18.Data.AllocatorInstance.Data == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAdded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x15e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&CurrentlyOpenAsReadOnlySection);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// CloseAsReadOnly @ 14d121210

void __cdecl FSQLiteFile::CloseAsReadOnly(wchar_t *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FPlatformFileManager *this;
  IPlatformFile *pIVar6;
  FString local_18;
  
  this = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(this);
  (**(code **)((longlong)*pIVar6 + 200))(pIVar6,&local_18);
  EnterCriticalSection((LPCRITICAL_SECTION)&CurrentlyOpenAsReadOnlySection);
  if (CurrentlyOpenAsReadOnly.Elements._8_4_ != CurrentlyOpenAsReadOnly.Elements._52_4_) {
    iVar5 = local_18.Data.ArrayNum + -1;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      (&CurrentlyOpenAsReadOnly,uVar4,&local_18);
    if (0 < iVar5) goto LAB_14d1212bb;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("NumRemoved > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                     ,0x16a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14d1212bb:
  LeaveCriticalSection((LPCRITICAL_SECTION)&CurrentlyOpenAsReadOnlySection);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

