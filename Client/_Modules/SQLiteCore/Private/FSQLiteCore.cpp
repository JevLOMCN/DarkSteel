// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 4

// StartupModule @ 14d11e420

void __thiscall FSQLiteCore::StartupModule(FSQLiteCore *this)

{
  int iVar1;
  
  if (!bInitializedSQLite) {
    iVar1 = sqlite3_ue_config();
    if (iVar1 == 0) {
      iVar1 = sqlite3_initialize();
      bInitializedSQLite = iVar1 == 0;
    }
  }
  return;
}

// ShutdownModule @ 14d11e450

void __thiscall FSQLiteCore::ShutdownModule(FSQLiteCore *this)

{
  _func___cdecl_void **pp_Var1;
  int iVar2;
  sqlite3_mutex *psVar3;
  
  if (bInitializedSQLite) {
    psVar3 = (sqlite3_mutex *)0x0;
    if (sqlite3Config.isInit != 0) {
      sqlite3_os_end();
      if ((sqlite3Config.bCoreMutex != '\0') &&
         (psVar3 = (*sqlite3Config.mutex.xMutexAlloc)(2), psVar3 != (sqlite3_mutex *)0x0)) {
        (*sqlite3Config.mutex.xMutexEnter)(psVar3);
      }
      pp_Var1 = sqlite3Autoext.aExt;
      if (sqlite3Autoext.aExt != (_func___cdecl_void **)0x0) {
        if (sqlite3Config.bMemstat == 0) {
          (*sqlite3Config.m.xFree)(sqlite3Autoext.aExt);
        }
        else {
          if (mem0.mutex != (sqlite3_mutex *)0x0) {
            (*sqlite3Config.mutex.xMutexEnter)(mem0.mutex);
          }
          iVar2 = (*sqlite3Config.m.xSize)(pp_Var1);
          sqlite3Stat.nowValue[9] = sqlite3Stat.nowValue[9] + -1;
          sqlite3Stat.nowValue[0] = sqlite3Stat.nowValue[0] - iVar2;
          (*sqlite3Config.m.xFree)(pp_Var1);
          if (mem0.mutex != (sqlite3_mutex *)0x0) {
            (*sqlite3Config.mutex.xMutexLeave)(mem0.mutex);
          }
        }
      }
      sqlite3Autoext.aExt = (_func___cdecl_void **)0x0;
      sqlite3Autoext.nExt = 0;
      if (psVar3 != (sqlite3_mutex *)0x0) {
        (*sqlite3Config.mutex.xMutexLeave)(psVar3);
      }
      sqlite3Config.isInit = 0;
    }
    if (sqlite3Config.isPCacheInit != 0) {
      if (sqlite3Config.pcache2.xShutdown != (_func___cdecl_void_void_ptr *)0x0) {
        (*sqlite3Config.pcache2.xShutdown)(sqlite3Config.pcache2.pArg);
      }
      sqlite3Config.isPCacheInit = 0;
    }
    if (sqlite3Config.isMallocInit != 0) {
      if (sqlite3Config.m.xShutdown != (_func___cdecl_void_void_ptr *)0x0) {
        (*sqlite3Config.m.xShutdown)(sqlite3Config.m.pAppData);
      }
      sqlite3Config.isMallocInit = 0;
      mem0.mutex = (sqlite3_mutex *)0x0;
      mem0.alarmThreshold = 0;
      sqlite3_data_directory = (char *)0x0;
      mem0.hardLimit = 0;
      mem0.nearlyFull = 0;
      mem0._28_4_ = 0;
      sqlite3_temp_directory = (char *)0x0;
    }
    if (sqlite3Config.isMutexInit != 0) {
      if (sqlite3Config.mutex.xMutexEnd != (_func___cdecl_int *)0x0) {
        (*sqlite3Config.mutex.xMutexEnd)();
      }
      sqlite3Config.isMutexInit = 0;
    }
    return;
  }
  return;
}

// StaticInitializeSQLite @ 14d125970

void __cdecl FSQLiteCore::StaticInitializeSQLite(void)

{
  int iVar1;
  
  if (!bInitializedSQLite) {
    iVar1 = sqlite3_ue_config();
    if (iVar1 == 0) {
      iVar1 = sqlite3_initialize();
      bInitializedSQLite = iVar1 == 0;
    }
  }
  return;
}

// StaticShutdownSQLite @ 14d1259a0

void __cdecl FSQLiteCore::StaticShutdownSQLite(void)

{
  _func___cdecl_void **pp_Var1;
  int iVar2;
  sqlite3_mutex *psVar3;
  
  if (bInitializedSQLite) {
    psVar3 = (sqlite3_mutex *)0x0;
    if (sqlite3Config.isInit != 0) {
      sqlite3_os_end();
      if ((sqlite3Config.bCoreMutex != '\0') &&
         (psVar3 = (*sqlite3Config.mutex.xMutexAlloc)(2), psVar3 != (sqlite3_mutex *)0x0)) {
        (*sqlite3Config.mutex.xMutexEnter)(psVar3);
      }
      pp_Var1 = sqlite3Autoext.aExt;
      if (sqlite3Autoext.aExt != (_func___cdecl_void **)0x0) {
        if (sqlite3Config.bMemstat == 0) {
          (*sqlite3Config.m.xFree)(sqlite3Autoext.aExt);
        }
        else {
          if (mem0.mutex != (sqlite3_mutex *)0x0) {
            (*sqlite3Config.mutex.xMutexEnter)(mem0.mutex);
          }
          iVar2 = (*sqlite3Config.m.xSize)(pp_Var1);
          sqlite3Stat.nowValue[9] = sqlite3Stat.nowValue[9] + -1;
          sqlite3Stat.nowValue[0] = sqlite3Stat.nowValue[0] - iVar2;
          (*sqlite3Config.m.xFree)(pp_Var1);
          if (mem0.mutex != (sqlite3_mutex *)0x0) {
            (*sqlite3Config.mutex.xMutexLeave)(mem0.mutex);
          }
        }
      }
      sqlite3Autoext.aExt = (_func___cdecl_void **)0x0;
      sqlite3Autoext.nExt = 0;
      if (psVar3 != (sqlite3_mutex *)0x0) {
        (*sqlite3Config.mutex.xMutexLeave)(psVar3);
      }
      sqlite3Config.isInit = 0;
    }
    if (sqlite3Config.isPCacheInit != 0) {
      if (sqlite3Config.pcache2.xShutdown != (_func___cdecl_void_void_ptr *)0x0) {
        (*sqlite3Config.pcache2.xShutdown)(sqlite3Config.pcache2.pArg);
      }
      sqlite3Config.isPCacheInit = 0;
    }
    if (sqlite3Config.isMallocInit != 0) {
      if (sqlite3Config.m.xShutdown != (_func___cdecl_void_void_ptr *)0x0) {
        (*sqlite3Config.m.xShutdown)(sqlite3Config.m.pAppData);
      }
      sqlite3Config.isMallocInit = 0;
      mem0.mutex = (sqlite3_mutex *)0x0;
      mem0.alarmThreshold = 0;
      sqlite3_data_directory = (char *)0x0;
      mem0.hardLimit = 0;
      mem0.nearlyFull = 0;
      mem0._28_4_ = 0;
      sqlite3_temp_directory = (char *)0x0;
    }
    if (sqlite3Config.isMutexInit != 0) {
      if (sqlite3Config.mutex.xMutexEnd != (_func___cdecl_int *)0x0) {
        (*sqlite3Config.mutex.xMutexEnd)();
      }
      sqlite3Config.isMutexInit = 0;
    }
    return;
  }
  return;
}

