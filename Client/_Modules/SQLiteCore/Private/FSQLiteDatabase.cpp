// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 18

// FSQLiteDatabase @ 14d1203f0

FSQLiteDatabase * __thiscall
FSQLiteDatabase::FSQLiteDatabase(FSQLiteDatabase *this,FSQLiteDatabase *param_1)

{
  this->Database = param_1->Database;
  (this->OriginalPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalPath).Data.ArrayNum = 0;
  (this->OriginalPath).Data.ArrayMax = 0;
  (this->ShortName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName).Data.ArrayNum = 0;
  (this->ShortName).Data.ArrayMax = 0;
  param_1->Database = (sqlite3 *)0x0;
  return this;
}

// FSQLiteDatabase @ 14d120420

FSQLiteDatabase * __thiscall FSQLiteDatabase::FSQLiteDatabase(FSQLiteDatabase *this)

{
  int iVar1;
  
  this->Database = (sqlite3 *)0x0;
  (this->OriginalPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalPath).Data.ArrayNum = 0;
  (this->OriginalPath).Data.ArrayMax = 0;
  (this->ShortName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShortName).Data.ArrayNum = 0;
  (this->ShortName).Data.ArrayMax = 0;
  if (FSQLiteCore::bInitializedSQLite == false) {
    iVar1 = sqlite3_ue_config();
    if (iVar1 == 0) {
      iVar1 = sqlite3_initialize();
      FSQLiteCore::bInitializedSQLite = iVar1 == 0;
    }
  }
  return this;
}

// ~FSQLiteDatabase @ 14d120670

void __thiscall FSQLiteDatabase::~FSQLiteDatabase(FSQLiteDatabase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->Database != (sqlite3 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Database",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteDatabase.cpp"
                       ,0x19,
                       L"Destructor called while an SQLite database was still open. Did you forget to call Close?"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ShortName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OriginalPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14d120720

FSQLiteDatabase * __thiscall
FSQLiteDatabase::operator=(FSQLiteDatabase *this,FSQLiteDatabase *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    if (this->Database != (sqlite3 *)0x0) {
      iVar1 = sqlite3_close(this->Database);
      if (iVar1 == 0) {
        this->Database = (sqlite3 *)0x0;
      }
    }
    this->Database = param_1->Database;
    param_1->Database = (sqlite3 *)0x0;
  }
  return this;
}

// Close @ 14d1210f0

bool __thiscall FSQLiteDatabase::Close(FSQLiteDatabase *this)

{
  int iVar1;
  
  if (this->Database != (sqlite3 *)0x0) {
    iVar1 = sqlite3_close(this->Database);
    if (iVar1 == 0) {
      this->Database = (sqlite3 *)0x0;
      return true;
    }
  }
  return false;
}

// Execute @ 14d121890

long64 __thiscall
FSQLiteDatabase::Execute
          (FSQLiteDatabase *this,wchar_t *param_1,
          TFunctionRef<ESQLitePreparedStatementExecuteRowResult___cdecl(FSQLitePreparedStatement_const_&)>
          *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long64 lVar7;
  char cVar8;
  bool bVar9;
  FSQLitePreparedStatement local_38;
  
  if (this->Database != (sqlite3 *)0x0) {
    FSQLitePreparedStatement::FSQLitePreparedStatement(&local_38,this,param_1,None);
    if (local_38.Statement != (sqlite3_stmt *)0x0) {
      pcVar1 = *(code **)param_2;
      uVar2 = *(undefined8 *)&param_2->field_0x8;
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId395,"FSQLitePreparedStatement::Execute",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                   ,0x18b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
      }
      if (((local_38.Statement == (sqlite3_stmt *)0x0) ||
          (iVar5 = sqlite3_stmt_busy(local_38.Statement), iVar5 != 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && !IsActive()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                             ,0x18c,L"SQLite statement must be valid and not-active!"), bVar3)) {
        pcVar1 = (code *)swi(3);
        lVar7 = (*pcVar1)();
        return lVar7;
      }
      lVar7 = 0;
      while( true ) {
        if (local_38.Statement == (sqlite3_stmt *)0x0) {
          cVar8 = '\0';
          goto LAB_14d1219e7;
        }
        uVar6 = sqlite3_step(local_38.Statement);
        uVar6 = uVar6 & 0xff;
        if (uVar6 == 5) {
          cVar8 = '\x01';
          goto LAB_14d1219d0;
        }
        if (uVar6 != 100) break;
        cVar8 = '\x02';
        lVar7 = lVar7 + 1;
        cVar4 = (*pcVar1)(uVar2,&local_38);
        if (cVar4 != '\0') {
          if (cVar4 == '\x02') {
            cVar8 = '\0';
          }
LAB_14d1219d0:
          if (local_38.Statement != (sqlite3_stmt *)0x0) {
            sqlite3_reset(local_38.Statement);
          }
LAB_14d1219e7:
          if (cVar8 == '\0') {
            lVar7 = -1;
          }
          if (bVar9) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (local_38.Statement != (sqlite3_stmt *)0x0) {
            sqlite3_finalize(local_38.Statement);
            local_38.Statement = (sqlite3_stmt *)0x0;
            if (local_38.CachedColumnNames.ArrayMax < 0) {
              DestructItems<FString,int>
                        ((FString *)local_38.CachedColumnNames.AllocatorInstance.Data,
                         local_38.CachedColumnNames.ArrayNum);
              local_38.CachedColumnNames.ArrayNum = 0;
              if (local_38.CachedColumnNames.ArrayMax != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,&local_38.CachedColumnNames.AllocatorInstance,0,
                           &local_38.CachedColumnNames.ArrayMax);
              }
            }
            else {
              DestructItems<FString,int>
                        ((FString *)local_38.CachedColumnNames.AllocatorInstance.Data,
                         local_38.CachedColumnNames.ArrayNum);
              local_38.CachedColumnNames.ArrayNum = 0;
            }
          }
          DestructItems<FString,int>
                    ((FString *)local_38.CachedColumnNames.AllocatorInstance.Data,
                     local_38.CachedColumnNames.ArrayNum);
          if (local_38.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.CachedColumnNames.AllocatorInstance.Data);
          }
          return lVar7;
        }
      }
      if (uVar6 == 0x65) {
        cVar8 = '\x03';
      }
      else {
        cVar8 = '\0';
      }
      goto LAB_14d1219d0;
    }
    DestructItems<FString,int>
              ((FString *)local_38.CachedColumnNames.AllocatorInstance.Data,
               local_38.CachedColumnNames.ArrayNum);
    if (local_38.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.CachedColumnNames.AllocatorInstance.Data);
    }
  }
  return 0;
}

// Execute @ 14d121ab0

bool __thiscall FSQLiteDatabase::Execute(FSQLiteDatabase *this,wchar_t *param_1)

{
  long64 lVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FSQLitePreparedStatement local_28;
  
  if (this->Database != (sqlite3 *)0x0) {
    FSQLitePreparedStatement::FSQLitePreparedStatement(&local_28,this,param_1,None);
    if (local_28.Statement == (sqlite3_stmt *)0x0) {
      bVar2 = false;
    }
    else {
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FSQLitePreparedStatement::Execute'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
                 ::Call;
      lVar1 = FSQLitePreparedStatement::Execute
                        (&local_28,
                         (TFunctionRef<ESQLitePreparedStatementExecuteRowResult___cdecl(FSQLitePreparedStatement_const_&)>
                          *)&local_38);
      bVar2 = lVar1 != -1;
      if (local_28.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_finalize(local_28.Statement);
        local_28.Statement = (sqlite3_stmt *)0x0;
        if (local_28.CachedColumnNames.ArrayMax < 0) {
          DestructItems<FString,int>
                    ((FString *)local_28.CachedColumnNames.AllocatorInstance.Data,
                     local_28.CachedColumnNames.ArrayNum);
          local_28.CachedColumnNames.ArrayNum = 0;
          if (local_28.CachedColumnNames.ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_28.CachedColumnNames.AllocatorInstance,0,
                       &local_28.CachedColumnNames.ArrayMax);
          }
        }
        else {
          DestructItems<FString,int>
                    ((FString *)local_28.CachedColumnNames.AllocatorInstance.Data,
                     local_28.CachedColumnNames.ArrayNum);
          local_28.CachedColumnNames.ArrayNum = 0;
        }
      }
    }
    DestructItems<FString,int>
              ((FString *)local_28.CachedColumnNames.AllocatorInstance.Data,
               local_28.CachedColumnNames.ArrayNum);
    if (local_28.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.CachedColumnNames.AllocatorInstance.Data);
    }
    return bVar2;
  }
  return false;
}

// GetApplicationId @ 14d122000

bool __thiscall FSQLiteDatabase::GetApplicationId(FSQLiteDatabase *this,int *param_1)

{
  long64 lVar1;
  int *local_res10 [3];
  code *local_18;
  int **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSQLiteDatabase::GetApplicationId'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
             ::Call;
  local_res10[0] = param_1;
  lVar1 = Execute(this,L"PRAGMA application_id;",
                  (TFunctionRef<ESQLitePreparedStatementExecuteRowResult___cdecl(FSQLitePreparedStatement_const_&)>
                   *)&local_18);
  return lVar1 == 1;
}

// GetFilename @ 14d1235d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FSQLiteDatabase::GetFilename(FSQLiteDatabase *this,FString *__return_storage_ptr__)

{
  char *pcVar1;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  undefined1 auStack_158 [32];
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((this->Database != (sqlite3 *)0x0) &&
     (pcVar1 = sqlite3_db_filename(this->Database,"main"), pcVar1 != (char *)0x0)) {
    pTVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_138,pcVar1);
    ::FString::FString(__return_storage_ptr__,pTVar2->Ptr);
    if ((void *)local_138._padding_ == (void *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free((void *)local_138._padding_);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLastError @ 14d123670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FSQLiteDatabase::GetLastError(FSQLiteDatabase *this,FString *__return_storage_ptr__)

{
  char *pcVar1;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  undefined1 auStack_158 [32];
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((this->Database != (sqlite3 *)0x0) &&
     (pcVar1 = sqlite3_errmsg(this->Database), pcVar1 != (char *)0x0)) {
    pTVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_138,pcVar1);
    ::FString::FString(__return_storage_ptr__,pTVar2->Ptr);
    if ((void *)local_138._padding_ == (void *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free((void *)local_138._padding_);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLastInsertRowId @ 14d123870

long64 __thiscall FSQLiteDatabase::GetLastInsertRowId(FSQLiteDatabase *this)

{
  if (this->Database == (sqlite3 *)0x0) {
    return 0;
  }
  return this->Database->lastRowid;
}

// GetUserVersion @ 14d123890

bool __thiscall FSQLiteDatabase::GetUserVersion(FSQLiteDatabase *this,int *param_1)

{
  long64 lVar1;
  int *local_res10 [3];
  code *local_18;
  int **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSQLiteDatabase::GetUserVersion'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
             ::Call;
  local_res10[0] = param_1;
  lVar1 = Execute(this,L"PRAGMA user_version;",
                  (TFunctionRef<ESQLitePreparedStatementExecuteRowResult___cdecl(FSQLitePreparedStatement_const_&)>
                   *)&local_18);
  return lVar1 == 1;
}

// IsValid @ 14d123be0

bool __thiscall FSQLiteDatabase::IsValid(FSQLiteDatabase *this)

{
  return this->Database != (sqlite3 *)0x0;
}

// Open @ 14d123d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSQLiteDatabase::Open(FSQLiteDatabase *this,wchar_t *param_1,ESQLiteDatabaseOpenMode param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  IFileManager *pIVar7;
  FString *pFVar8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar9;
  wchar_t *pwVar10;
  undefined1 auStack_148 [32];
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (this->Database == (sqlite3 *)0x0) {
    ::FString::operator=(&this->OriginalPath,param_1);
    ::FString::FString(&local_128,param_1);
    pFVar6 = FPaths::GetBaseFilename(&local_108,&local_128,true);
    pFVar8 = &this->ShortName;
    if (pFVar8 != pFVar6) {
      pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar8->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ShortName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->ShortName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    iVar5 = 0;
    if (param_2 == ReadOnly) {
      iVar5 = 1;
    }
    else if (param_2 == ReadWrite) {
      iVar5 = 2;
    }
    else if (param_2 == ReadWriteCreate) {
      iVar5 = 6;
      pIVar7 = IFileManager::Get();
      pcVar2 = *(code **)((longlong)*pIVar7 + 0x60);
      ::FString::FString(&local_118,param_1);
      pFVar8 = FPaths::GetPath(&local_f8,&local_118);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      (*pcVar2)(pIVar7,pwVar10,1);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenFlags != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteDatabase.cpp"
                         ,0x4a,L"SQLite open flags were zero! Unhandled ESQLiteDatabaseOpenMode?");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pTVar9 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_d8,param_1);
    iVar5 = sqlite3_open_v2(pTVar9->Ptr,&this->Database,iVar5,(char *)0x0);
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    if (iVar5 == 0) {
      if (4 < (byte)LogSQLiteDatabase._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSQLiteDatabase);
      }
      return true;
    }
    if (this->Database != (sqlite3 *)0x0) {
      if (2 < (byte)LogSQLiteDatabase._0_1_) {
        GetLastError(this,&local_e8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSQLiteDatabase);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      sqlite3_close(this->Database);
      this->Database = (sqlite3 *)0x0;
    }
  }
  return false;
}

// PerformQuickIntegrityCheck @ 14d124380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSQLiteDatabase::PerformQuickIntegrityCheck(FSQLiteDatabase *this)

{
  short sVar1;
  longlong lVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  longlong lVar6;
  long64 lVar7;
  ulong64 uVar8;
  FWriteBuffer *pFVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_68 [32];
  char local_48 [8];
  char *local_40;
  code *local_38;
  char **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar11 = (ulonglong)_tls_index;
  bVar3 = false;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuSqlite_PerformQuickIntegrityCheckFields>
              ((TLogScope<1> *)&local_38);
    if ((this->OriginalPath).Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->OriginalPath).Data.AllocatorInstance.Data;
    }
    iVar12 = 0;
    sVar1 = *pwVar10;
    pFVar4 = (FScriptContainerElement *)pwVar10;
    while (sVar1 != 0) {
      pFVar4 = pFVar4 + 2;
      iVar12 = iVar12 + 1;
      sVar1 = *(short *)pFVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar10,iVar12);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar6 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar6;
    if ((char **)lVar2 != local_30) {
      *(longlong *)(lVar2 + 0x28) = lVar6;
    }
    bVar3 = true;
    *(undefined8 *)((longlong)local_30 + 0x28) = *(undefined8 *)((longlong)local_30 + 0x20);
  }
  local_40 = local_48;
  local_48[0] = '\x01';
  local_30 = &local_40;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSQLiteDatabase::PerformQuickIntegrityCheck'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
             ::Call;
  lVar7 = Execute(this,L"pragma quick_check;",
                  (TFunctionRef<ESQLitePreparedStatementExecuteRowResult___cdecl(FSQLitePreparedStatement_const_&)>
                   *)&local_38);
  if ((lVar7 == 1) && (local_48[0] != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar3) {
    uVar8 = UE::Trace::Private::TimeGetTimestamp();
    lVar6 = uVar8 - UE::Trace::Private::GStartCycle;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar9 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar9 - *(int *)&pFVar9->Cursor < 8) {
      pFVar9 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar9->Cursor = lVar6 * 0x100 + 0x12;
    pFVar9->Cursor = pFVar9->Cursor + 8;
    pFVar9->Committed = pFVar9->Cursor;
  }
  return bVar5;
}

// PrepareStatement @ 14d124540

FSQLitePreparedStatement * __thiscall
FSQLiteDatabase::PrepareStatement
          (FSQLiteDatabase *this,FSQLitePreparedStatement *__return_storage_ptr__,wchar_t *param_1,
          ESQLitePreparedStatementFlags param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FSQLitePreparedStatement *pFVar5;
  sqlite3_stmt *psVar6;
  bool bVar7;
  FSQLitePreparedStatement local_48;
  FSQLitePreparedStatement local_30;
  
  psVar6 = (sqlite3_stmt *)0x0;
  bVar7 = this->Database == (sqlite3 *)0x0;
  if (bVar7) {
    local_48.CachedColumnNames.ArrayNum = 0;
    local_48.CachedColumnNames.ArrayMax = 0;
    local_48.Statement = (sqlite3_stmt *)0x0;
    local_48.CachedColumnNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = &local_48;
  }
  else {
    pFVar5 = FSQLitePreparedStatement::FSQLitePreparedStatement(&local_30,this,param_1,param_2);
    psVar6 = pFVar5->Statement;
  }
  (__return_storage_ptr__->CachedColumnNames).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar1 = &pFVar5->CachedColumnNames;
  __return_storage_ptr__->Statement = psVar6;
  piVar2 = &(pFVar5->CachedColumnNames).ArrayMax;
  (__return_storage_ptr__->CachedColumnNames).AllocatorInstance.Data =
       (pTVar1->AllocatorInstance).Data;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CachedColumnNames).ArrayNum = (pFVar5->CachedColumnNames).ArrayNum;
  (__return_storage_ptr__->CachedColumnNames).ArrayMax = *piVar2;
  (pFVar5->CachedColumnNames).ArrayNum = 0;
  *piVar2 = 0;
  pFVar5->Statement = (sqlite3_stmt *)0x0;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (pFVar5->CachedColumnNames).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<FString,int>((FString *)pFVar4,iVar3);
    (pFVar5->CachedColumnNames).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar4,iVar3);
    (pFVar5->CachedColumnNames).ArrayNum = 0;
  }
  if (bVar7) {
    if (local_48.Statement != (sqlite3_stmt *)0x0) {
      sqlite3_finalize(local_48.Statement);
      local_48.Statement = (sqlite3_stmt *)0x0;
      if ((longlong)local_48.CachedColumnNames._8_8_ < 0) {
        DestructItems<FString,int>
                  ((FString *)local_48.CachedColumnNames.AllocatorInstance.Data,
                   local_48.CachedColumnNames.ArrayNum);
        iVar3 = local_48.CachedColumnNames.ArrayMax;
        local_48.CachedColumnNames._8_8_ = local_48.CachedColumnNames._8_8_ & 0xffffffff00000000;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_48.CachedColumnNames.AllocatorInstance,0,
                     &local_48.CachedColumnNames.ArrayMax);
        }
      }
      else {
        DestructItems<FString,int>
                  ((FString *)local_48.CachedColumnNames.AllocatorInstance.Data,
                   local_48.CachedColumnNames.ArrayNum);
        local_48.CachedColumnNames._8_8_ = local_48.CachedColumnNames._8_8_ & 0xffffffff00000000;
      }
    }
    DestructItems<FString,int>
              ((FString *)local_48.CachedColumnNames.AllocatorInstance.Data,
               local_48.CachedColumnNames.ArrayNum);
    if (local_48.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.CachedColumnNames.AllocatorInstance.Data);
    }
  }
  if (!bVar7) {
    if (local_30.Statement != (sqlite3_stmt *)0x0) {
      sqlite3_finalize(local_30.Statement);
      local_30.Statement = (sqlite3_stmt *)0x0;
      if (local_30.CachedColumnNames.ArrayMax < 0) {
        DestructItems<FString,int>
                  ((FString *)local_30.CachedColumnNames.AllocatorInstance.Data,
                   local_30.CachedColumnNames.ArrayNum);
        local_30.CachedColumnNames.ArrayNum = 0;
        if (local_30.CachedColumnNames.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_30.CachedColumnNames.AllocatorInstance,0,
                     &local_30.CachedColumnNames.ArrayMax);
        }
      }
      else {
        DestructItems<FString,int>
                  ((FString *)local_30.CachedColumnNames.AllocatorInstance.Data,
                   local_30.CachedColumnNames.ArrayNum);
        local_30.CachedColumnNames.ArrayNum = 0;
      }
    }
    DestructItems<FString,int>
              ((FString *)local_30.CachedColumnNames.AllocatorInstance.Data,
               local_30.CachedColumnNames.ArrayNum);
    if (local_30.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.CachedColumnNames.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// SetApplicationId @ 14d124980

bool __thiscall FSQLiteDatabase::SetApplicationId(FSQLiteDatabase *this,int param_1)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"PRAGMA application_id = %d;");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar1 = Execute(this,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetUserVersion @ 14d1258b0

bool __thiscall FSQLiteDatabase::SetUserVersion(FSQLiteDatabase *this,int param_1)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"PRAGMA user_version = %d;");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar1 = Execute(this,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

