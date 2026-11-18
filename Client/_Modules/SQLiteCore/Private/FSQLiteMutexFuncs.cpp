// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 9

// Alloc @ 14d120c10

sqlite3_mutex * __cdecl FSQLiteMutexFuncs::Alloc(int param_1)

{
  code *pcVar1;
  bool bVar2;
  sqlite3_mutex *psVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((uint)param_1 < 2) {
    lpCriticalSection = ::operator_new(0x30);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
      *(int *)&lpCriticalSection[1].DebugInfo = param_1;
      return (sqlite3_mutex *)lpCriticalSection;
    }
    return (sqlite3_mutex *)0x0;
  }
  if ((param_1 + -2 < 0) || (0xb < param_1 + -2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SQLiteStaticMutexIndex >= 0 && SQLiteStaticMutexIndex < SQLiteStaticMutexArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0xe6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      psVar3 = (sqlite3_mutex *)(*pcVar1)();
      return psVar3;
    }
  }
  return *(sqlite3_mutex **)
          (&FSQLiteCoreTestAutomationTestInstance.field_0xe0 + (longlong)param_1 * 8);
}

// End @ 14d1217a0

int __cdecl FSQLiteMutexFuncs::End(void)

{
  FSQLiteMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSQLiteMutex **ppFVar4;
  
  ppFVar4 = SQLiteStaticMutexArray;
  do {
    if (*ppFVar4 == (FSQLiteMutex *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SQLiteStaticMutexArray[SQLiteStaticMutexIndex]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    lpCriticalSection = *ppFVar4;
    if (lpCriticalSection != (FSQLiteMutex *)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      ::operator_delete(lpCriticalSection,0x30);
    }
    *ppFVar4 = (FSQLiteMutex *)0x0;
    ppFVar4 = ppFVar4 + 1;
  } while ((longlong)ppFVar4 < 0x155358f80);
  return 0;
}

// Enter @ 14d121840

void __cdecl FSQLiteMutexFuncs::Enter(sqlite3_mutex *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (sqlite3_mutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d12187c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}

// Free @ 14d121e60

void __cdecl FSQLiteMutexFuncs::Free(sqlite3_mutex *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (sqlite3_mutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0xf3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x28) != 1)) {
    return;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)param_1);
  ::operator_delete(param_1,0x30);
  return;
}

// Held @ 14d1238e0

int __cdecl FSQLiteMutexFuncs::Held(sqlite3_mutex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (sqlite3_mutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x127,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 1;
}

// Init @ 14d123930

int __cdecl FSQLiteMutexFuncs::Init(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSQLiteMutex *lpCriticalSection;
  FSQLiteMutex **ppFVar4;
  
  iVar3 = 2;
  ppFVar4 = SQLiteStaticMutexArray;
  do {
    if (*ppFVar4 != (FSQLiteMutex *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SQLiteStaticMutexArray[SQLiteStaticMutexIndex]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                         ,200,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    lpCriticalSection = ::operator_new(0x30);
    if (lpCriticalSection == (FSQLiteMutex *)0x0) {
      lpCriticalSection = (FSQLiteMutex *)0x0;
    }
    else {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
      lpCriticalSection->SQLiteMutexId = iVar3;
    }
    *ppFVar4 = lpCriticalSection;
    iVar3 = iVar3 + 1;
    ppFVar4 = ppFVar4 + 1;
  } while ((longlong)ppFVar4 < 0x155358f80);
  return 0;
}

// Leave @ 14d123c40

void __cdecl FSQLiteMutexFuncs::Leave(sqlite3_mutex *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (sqlite3_mutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x11b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d123c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}

// Notheld @ 14d123d10

int __cdecl FSQLiteMutexFuncs::Notheld(sqlite3_mutex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (sqlite3_mutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x134,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 1;
}

// Try @ 14d125b10

int __cdecl FSQLiteMutexFuncs::Try(sqlite3_mutex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  
  if (param_1 == (sqlite3_mutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteEmbeddedPlatform.cpp"
                       ,0x10b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)param_1);
  iVar3 = 5;
  if (BVar4 != 0) {
    iVar3 = 0;
  }
  return iVar3;
}

