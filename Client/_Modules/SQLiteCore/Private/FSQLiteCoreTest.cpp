// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 8

// GetTestFlags @ 14d11e4b0

EAutomationTestFlags __thiscall FSQLiteCoreTest::GetTestFlags(FSQLiteCoreTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d11e4c0

bool __thiscall FSQLiteCoreTest::IsStressTest(FSQLiteCoreTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d11e4d0

uint __thiscall FSQLiteCoreTest::GetRequiredDeviceNum(FSQLiteCoreTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d11e4e0

FString * __thiscall
FSQLiteCoreTest::GetTestSourceFileName(FSQLiteCoreTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\Tests\\SQLiteTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d11e510

int __thiscall FSQLiteCoreTest::GetTestSourceFileLine(FSQLiteCoreTest *this)

{
  return 0xb;
}

// GetTests @ 14d11e520

/* WARNING: Removing unreachable block (ram,0x00014d11e60d) */
/* WARNING: Removing unreachable block (ram,0x00014d11e6d8) */

void __thiscall
FSQLiteCoreTest::GetTests
          (FSQLiteCoreTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Plugins.Database.SQLiteCore");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14d11e700

bool __thiscall FSQLiteCoreTest::RunTest(FSQLiteCoreTest *this,FString *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ESQLitePreparedStatementExecuteRowResult EVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  IFileManager *pIVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  char cVar18;
  sqlite3 *psVar19;
  sqlite3 *psVar20;
  bool bVar21;
  byte local_res18 [8];
  byte local_res20 [8];
  uint in_stack_fffffffffffffe38;
  FSQLitePreparedStatement local_1b8;
  FSQLitePreparedStatement local_1a0;
  FSQLitePreparedStatement local_188;
  FSQLitePreparedStatement local_170;
  FSQLitePreparedStatement local_158;
  FString local_140;
  FString local_130;
  FSQLiteDatabase local_120;
  FSQLiteDatabase local_f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_d0;
  FSQLiteDatabase local_c0;
  byte *local_98;
  byte *local_90;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  ::FString::FString(&local_78,"SQLiteTest.db");
  pTVar11 = &FPaths::AutomationTransientDir(&local_48)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_d0,pTVar11,0xd - (uint)(pTVar11->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_d0,L"SQLiteTests",0xb);
  psVar20 = (sqlite3 *)0x0;
  iVar9 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  if ((local_d0.ArrayNum != 0) || (iVar8 = 2, iVar9 == -1)) {
    iVar8 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_88,&local_d0,iVar9 + iVar8);
  ::FString::PathAppend((FString *)&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar9);
  FPaths::ConvertRelativePathToFull(&local_140,(FString *)&local_88);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pIVar12 = IFileManager::Get();
  in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffff00;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar13.Data = local_140.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar12 + 0x38))(pIVar12,FVar13.Data,0,0,in_stack_fffffffffffffe38);
  local_c0.Database = (sqlite3 *)0x0;
  local_c0.OriginalPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.OriginalPath.Data.ArrayNum = 0;
  local_c0.OriginalPath.Data.ArrayMax = 0;
  local_c0.ShortName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ShortName.Data.ArrayNum = 0;
  local_c0.ShortName.Data.ArrayMax = 0;
  if ((FSQLiteCore::bInitializedSQLite == false) && (iVar9 = sqlite3_ue_config(), iVar9 == 0)) {
    iVar9 = sqlite3_initialize();
    FSQLiteCore::bInitializedSQLite = iVar9 == 0;
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar13.Data = local_140.Data.AllocatorInstance.Data;
  }
  bVar3 = FSQLiteDatabase::Open(&local_c0,(wchar_t *)FVar13.Data,ReadWrite);
  bVar3 = !bVar3;
  if (local_c0.Database != (sqlite3 *)0x0) {
    iVar9 = sqlite3_close(local_c0.Database);
    psVar19 = (sqlite3 *)(ulonglong)bVar3;
    if (iVar9 == 0) {
      psVar19 = psVar20;
      local_c0.Database = psVar20;
    }
    bVar3 = SUB81(psVar19,0);
    if ((local_c0.Database != (sqlite3 *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Database",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteDatabase.cpp"
                           ,0x19,
                           L"Destructor called while an SQLite database was still open. Did you forget to call Close?"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  if (local_c0.ShortName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.ShortName.Data.AllocatorInstance.Data);
  }
  if (local_c0.OriginalPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.OriginalPath.Data.AllocatorInstance.Data);
  }
  local_120.Database = (sqlite3 *)0x0;
  local_120.OriginalPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.OriginalPath.Data.ArrayNum = 0;
  local_120.OriginalPath.Data.ArrayMax = 0;
  local_120.ShortName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ShortName.Data.ArrayNum = 0;
  local_120.ShortName.Data.ArrayMax = 0;
  if ((FSQLiteCore::bInitializedSQLite == false) && (iVar9 = sqlite3_ue_config(), iVar9 == 0)) {
    iVar9 = sqlite3_initialize();
    FSQLiteCore::bInitializedSQLite = iVar9 == 0;
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar13.Data = local_140.Data.AllocatorInstance.Data;
  }
  bVar4 = FSQLiteDatabase::Open(&local_120,(wchar_t *)FVar13.Data,ReadWriteCreate);
  ::FString::FString(&local_130,L"CREATE TABLE users (id INTEGER NOT NULL,name TEXT, title TEXT)");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar13.Data = local_130.Data.AllocatorInstance.Data;
  }
  if (local_120.Database == (sqlite3 *)0x0) {
    bVar14 = false;
  }
  else {
    FSQLitePreparedStatement::FSQLitePreparedStatement
              (&local_188,&local_120,(wchar_t *)FVar13.Data,None);
    if (local_188.Statement == (sqlite3_stmt *)0x0) {
      DestructItems<FString,int>
                ((FString *)local_188.CachedColumnNames.AllocatorInstance.Data,
                 local_188.CachedColumnNames.ArrayNum);
      if (local_188.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.CachedColumnNames.AllocatorInstance.Data);
      }
      bVar14 = false;
    }
    else {
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId395,"FSQLitePreparedStatement::Execute",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                   ,0x18b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
      }
      psVar19 = psVar20;
      if (((local_188.Statement == (sqlite3_stmt *)0x0) ||
          (iVar9 = sqlite3_stmt_busy(local_188.Statement), iVar9 != 0)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && !IsActive()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                              ,0x18c,L"SQLite statement must be valid and not-active!"), bVar15)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      while (local_188.Statement != (sqlite3_stmt *)0x0) {
        uVar10 = sqlite3_step(local_188.Statement);
        uVar10 = uVar10 & 0xff;
        if (uVar10 == 5) {
          cVar18 = '\x01';
LAB_14d11ea65:
          if (local_188.Statement != (sqlite3_stmt *)0x0) {
            sqlite3_reset(local_188.Statement);
          }
          goto LAB_14d11ea7e;
        }
        if (uVar10 != 100) {
          if (uVar10 == 0x65) {
            cVar18 = '\x03';
          }
          else {
            cVar18 = '\0';
          }
          goto LAB_14d11ea65;
        }
        psVar19 = (sqlite3 *)((longlong)&psVar19->pVfs + 1);
      }
      cVar18 = '\0';
LAB_14d11ea7e:
      if (cVar18 == '\0') {
        psVar19 = (sqlite3 *)0xffffffffffffffff;
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar14 = psVar19 != (sqlite3 *)0xffffffffffffffff;
      if (local_188.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_finalize(local_188.Statement);
        local_188.Statement = (sqlite3_stmt *)0x0;
        if (local_188.CachedColumnNames.ArrayMax < 0) {
          DestructItems<FString,int>
                    ((FString *)local_188.CachedColumnNames.AllocatorInstance.Data,
                     local_188.CachedColumnNames.ArrayNum);
          local_188.CachedColumnNames.ArrayNum = 0;
          if (local_188.CachedColumnNames.ArrayMax != 0) {
            in_stack_fffffffffffffe38 = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_188.CachedColumnNames.AllocatorInstance,0,
                       &local_188.CachedColumnNames.ArrayMax);
          }
        }
        else {
          DestructItems<FString,int>
                    ((FString *)local_188.CachedColumnNames.AllocatorInstance.Data,
                     local_188.CachedColumnNames.ArrayNum);
          local_188.CachedColumnNames.ArrayNum = 0;
        }
      }
      DestructItems<FString,int>
                ((FString *)local_188.CachedColumnNames.AllocatorInstance.Data,
                 local_188.CachedColumnNames.ArrayNum);
      if (local_188.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.CachedColumnNames.AllocatorInstance.Data);
      }
    }
  }
  ::FString::operator=
            (&local_130,L"INSERT INTO users (id, name, title) VALUES (1, \'John\', \'Manager\')");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar13.Data = local_130.Data.AllocatorInstance.Data;
  }
  if (local_120.Database == (sqlite3 *)0x0) {
    bVar15 = false;
  }
  else {
    FSQLitePreparedStatement::FSQLitePreparedStatement
              (&local_170,&local_120,(wchar_t *)FVar13.Data,None);
    if (local_170.Statement == (sqlite3_stmt *)0x0) {
      DestructItems<FString,int>
                ((FString *)local_170.CachedColumnNames.AllocatorInstance.Data,
                 local_170.CachedColumnNames.ArrayNum);
      if (local_170.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.CachedColumnNames.AllocatorInstance.Data);
      }
      bVar15 = false;
    }
    else {
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId395,"FSQLitePreparedStatement::Execute",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                   ,0x18b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
      }
      psVar19 = psVar20;
      if (((local_170.Statement == (sqlite3_stmt *)0x0) ||
          (iVar9 = sqlite3_stmt_busy(local_170.Statement), iVar9 != 0)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && !IsActive()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                              ,0x18c,L"SQLite statement must be valid and not-active!"), bVar16)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      while (local_170.Statement != (sqlite3_stmt *)0x0) {
        uVar10 = sqlite3_step(local_170.Statement);
        uVar10 = uVar10 & 0xff;
        if (uVar10 == 5) {
          cVar18 = '\x01';
LAB_14d11ec33:
          if (local_170.Statement != (sqlite3_stmt *)0x0) {
            sqlite3_reset(local_170.Statement);
          }
          goto LAB_14d11ec4c;
        }
        if (uVar10 != 100) {
          if (uVar10 == 0x65) {
            cVar18 = '\x03';
          }
          else {
            cVar18 = '\0';
          }
          goto LAB_14d11ec33;
        }
        psVar19 = (sqlite3 *)((longlong)&psVar19->pVfs + 1);
      }
      cVar18 = '\0';
LAB_14d11ec4c:
      if (cVar18 == '\0') {
        psVar19 = (sqlite3 *)0xffffffffffffffff;
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar15 = psVar19 != (sqlite3 *)0xffffffffffffffff;
      if (local_170.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_finalize(local_170.Statement);
        local_170.Statement = (sqlite3_stmt *)0x0;
        if (local_170.CachedColumnNames.ArrayMax < 0) {
          DestructItems<FString,int>
                    ((FString *)local_170.CachedColumnNames.AllocatorInstance.Data,
                     local_170.CachedColumnNames.ArrayNum);
          local_170.CachedColumnNames.ArrayNum = 0;
          if (local_170.CachedColumnNames.ArrayMax != 0) {
            in_stack_fffffffffffffe38 = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_170.CachedColumnNames.AllocatorInstance,0,
                       &local_170.CachedColumnNames.ArrayMax);
          }
        }
        else {
          DestructItems<FString,int>
                    ((FString *)local_170.CachedColumnNames.AllocatorInstance.Data,
                     local_170.CachedColumnNames.ArrayNum);
          local_170.CachedColumnNames.ArrayNum = 0;
        }
      }
      DestructItems<FString,int>
                ((FString *)local_170.CachedColumnNames.AllocatorInstance.Data,
                 local_170.CachedColumnNames.ArrayNum);
      if (local_170.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.CachedColumnNames.AllocatorInstance.Data);
      }
    }
  }
  ::FString::operator=
            (&local_130,L"INSERT INTO users (id, name, title) VALUES (2, \'Mark\', \'Engineer\')");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar13.Data = local_130.Data.AllocatorInstance.Data;
  }
  if (local_120.Database == (sqlite3 *)0x0) {
    bVar16 = false;
  }
  else {
    FSQLitePreparedStatement::FSQLitePreparedStatement
              (&local_158,&local_120,(wchar_t *)FVar13.Data,None);
    if (local_158.Statement == (sqlite3_stmt *)0x0) {
      DestructItems<FString,int>
                ((FString *)local_158.CachedColumnNames.AllocatorInstance.Data,
                 local_158.CachedColumnNames.ArrayNum);
      if (local_158.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.CachedColumnNames.AllocatorInstance.Data);
      }
      bVar16 = false;
    }
    else {
      bVar16 = -1 < CpuChannel->Enabled;
      if (bVar16) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId395,"FSQLitePreparedStatement::Execute",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                   ,0x18b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
      }
      if (((local_158.Statement == (sqlite3_stmt *)0x0) ||
          (iVar9 = sqlite3_stmt_busy(local_158.Statement), iVar9 != 0)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && !IsActive()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                              ,0x18c,L"SQLite statement must be valid and not-active!"), bVar21)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      while (local_158.Statement != (sqlite3_stmt *)0x0) {
        uVar10 = sqlite3_step(local_158.Statement);
        uVar10 = uVar10 & 0xff;
        if (uVar10 == 5) {
          cVar18 = '\x01';
LAB_14d11edf2:
          if (local_158.Statement != (sqlite3_stmt *)0x0) {
            sqlite3_reset(local_158.Statement);
          }
          goto LAB_14d11ee09;
        }
        if (uVar10 != 100) {
          if (uVar10 == 0x65) {
            cVar18 = '\x03';
          }
          else {
            cVar18 = '\0';
          }
          goto LAB_14d11edf2;
        }
        psVar20 = (sqlite3 *)((longlong)&psVar20->pVfs + 1);
      }
      cVar18 = '\0';
LAB_14d11ee09:
      if (cVar18 == '\0') {
        psVar20 = (sqlite3 *)0xffffffffffffffff;
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar16 = psVar20 != (sqlite3 *)0xffffffffffffffff;
      if (local_158.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_finalize(local_158.Statement);
        local_158.Statement = (sqlite3_stmt *)0x0;
        if (local_158.CachedColumnNames.ArrayMax < 0) {
          DestructItems<FString,int>
                    ((FString *)local_158.CachedColumnNames.AllocatorInstance.Data,
                     local_158.CachedColumnNames.ArrayNum);
          local_158.CachedColumnNames.ArrayNum = 0;
          if (local_158.CachedColumnNames.ArrayMax != 0) {
            in_stack_fffffffffffffe38 = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_158.CachedColumnNames.AllocatorInstance,0,
                       &local_158.CachedColumnNames.ArrayMax);
          }
        }
        else {
          DestructItems<FString,int>
                    ((FString *)local_158.CachedColumnNames.AllocatorInstance.Data,
                     local_158.CachedColumnNames.ArrayNum);
          local_158.CachedColumnNames.ArrayNum = 0;
        }
      }
      DestructItems<FString,int>
                ((FString *)local_158.CachedColumnNames.AllocatorInstance.Data,
                 local_158.CachedColumnNames.ArrayNum);
      if (local_158.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.CachedColumnNames.AllocatorInstance.Data);
      }
    }
  }
  local_res18[0] = 1;
  ::FString::FString(&local_68,L"SELECT * FROM users ORDER BY id");
  local_98 = local_res18;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar13.Data = local_68.Data.AllocatorInstance.Data;
  }
  if (local_120.Database != (sqlite3 *)0x0) {
    FSQLitePreparedStatement::FSQLitePreparedStatement
              (&local_1b8,&local_120,(wchar_t *)FVar13.Data,None);
    if (local_1b8.Statement != (sqlite3_stmt *)0x0) {
      bVar21 = -1 < CpuChannel->Enabled;
      if (bVar21) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId395,"FSQLitePreparedStatement::Execute",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                   ,0x18b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
      }
      if (((local_1b8.Statement == (sqlite3_stmt *)0x0) ||
          (iVar9 = sqlite3_stmt_busy(local_1b8.Statement), iVar9 != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && !IsActive()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                             ,0x18c,L"SQLite statement must be valid and not-active!"), bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      do {
        if (local_1b8.Statement == (sqlite3_stmt *)0x0) goto LAB_14d11efc3;
        uVar10 = sqlite3_step(local_1b8.Statement);
      } while ((((uVar10 & 0xff) != 5) && ((uVar10 & 0xff) == 100)) &&
              (EVar7 = ``FSQLiteCoreTest::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>
                       ::operator()(&local_98,&local_1b8), EVar7 == Continue));
      if (local_1b8.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_reset(local_1b8.Statement);
      }
LAB_14d11efc3:
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (local_1b8.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_finalize(local_1b8.Statement);
        local_1b8.Statement = (sqlite3_stmt *)0x0;
        if (local_1b8.CachedColumnNames.ArrayMax < 0) {
          DestructItems<FString,int>
                    ((FString *)local_1b8.CachedColumnNames.AllocatorInstance.Data,
                     local_1b8.CachedColumnNames.ArrayNum);
          local_1b8.CachedColumnNames.ArrayNum = 0;
          if (local_1b8.CachedColumnNames.ArrayMax != 0) {
            in_stack_fffffffffffffe38 = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_1b8.CachedColumnNames.AllocatorInstance,0,
                       &local_1b8.CachedColumnNames.ArrayMax);
          }
        }
        else {
          DestructItems<FString,int>
                    ((FString *)local_1b8.CachedColumnNames.AllocatorInstance.Data,
                     local_1b8.CachedColumnNames.ArrayNum);
          local_1b8.CachedColumnNames.ArrayNum = 0;
        }
      }
    }
    DestructItems<FString,int>
              ((FString *)local_1b8.CachedColumnNames.AllocatorInstance.Data,
               local_1b8.CachedColumnNames.ArrayNum);
    if (local_1b8.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.CachedColumnNames.AllocatorInstance.Data);
    }
  }
  bVar17 = local_res18[0];
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar17 = bVar17 & bVar4 & bVar3 & bVar14 & bVar15 & bVar16;
  if (local_120.Database == (sqlite3 *)0x0) {
    bVar17 = 0;
  }
  else {
    iVar9 = sqlite3_close(local_120.Database);
    if (iVar9 == 0) {
      local_120.Database = (sqlite3 *)0x0;
    }
    else {
      bVar17 = 0;
    }
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if ((local_120.Database != (sqlite3 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Database",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteDatabase.cpp"
                         ,0x19,
                         L"Destructor called while an SQLite database was still open. Did you forget to call Close?"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (local_120.ShortName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ShortName.Data.AllocatorInstance.Data);
  }
  if (local_120.OriginalPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.OriginalPath.Data.AllocatorInstance.Data);
  }
  local_f8.Database = (sqlite3 *)0x0;
  local_f8.OriginalPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.OriginalPath.Data.ArrayNum = 0;
  local_f8.OriginalPath.Data.ArrayMax = 0;
  local_f8.ShortName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ShortName.Data.ArrayNum = 0;
  local_f8.ShortName.Data.ArrayMax = 0;
  if ((FSQLiteCore::bInitializedSQLite == false) && (iVar9 = sqlite3_ue_config(), iVar9 == 0)) {
    iVar9 = sqlite3_initialize();
    FSQLiteCore::bInitializedSQLite = iVar9 == 0;
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar13.Data = local_140.Data.AllocatorInstance.Data;
  }
  bVar3 = FSQLiteDatabase::Open(&local_f8,(wchar_t *)FVar13.Data,ReadWriteCreate);
  local_res20[0] = 1;
  ::FString::FString(&local_58,L"SELECT * FROM users ORDER BY id");
  local_90 = local_res20;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar13.Data = local_58.Data.AllocatorInstance.Data;
  }
  if (local_f8.Database != (sqlite3 *)0x0) {
    FSQLitePreparedStatement::FSQLitePreparedStatement
              (&local_1a0,&local_f8,(wchar_t *)FVar13.Data,None);
    if (local_1a0.Statement != (sqlite3_stmt *)0x0) {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId395,"FSQLitePreparedStatement::Execute",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                   ,0x18b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
      }
      if (((local_1a0.Statement == (sqlite3_stmt *)0x0) ||
          (iVar9 = sqlite3_stmt_busy(local_1a0.Statement), iVar9 != 0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid() && !IsActive()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                              ,0x18c,L"SQLite statement must be valid and not-active!"), bVar14)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      do {
        if (local_1a0.Statement == (sqlite3_stmt *)0x0) goto LAB_14d11f257;
        uVar10 = sqlite3_step(local_1a0.Statement);
      } while ((((uVar10 & 0xff) != 5) && ((uVar10 & 0xff) == 100)) &&
              (EVar7 = ``FSQLiteCoreTest::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>
                       ::operator()(&local_90,&local_1a0), EVar7 == Continue));
      if (local_1a0.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_reset(local_1a0.Statement);
      }
LAB_14d11f257:
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (local_1a0.Statement != (sqlite3_stmt *)0x0) {
        sqlite3_finalize(local_1a0.Statement);
        local_1a0.Statement = (sqlite3_stmt *)0x0;
        if (local_1a0.CachedColumnNames.ArrayMax < 0) {
          DestructItems<FString,int>
                    ((FString *)local_1a0.CachedColumnNames.AllocatorInstance.Data,
                     local_1a0.CachedColumnNames.ArrayNum);
          local_1a0.CachedColumnNames.ArrayNum = 0;
          if (local_1a0.CachedColumnNames.ArrayMax != 0) {
            in_stack_fffffffffffffe38 = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_1a0.CachedColumnNames.AllocatorInstance,0,
                       &local_1a0.CachedColumnNames.ArrayMax);
          }
        }
        else {
          DestructItems<FString,int>
                    ((FString *)local_1a0.CachedColumnNames.AllocatorInstance.Data,
                     local_1a0.CachedColumnNames.ArrayNum);
          local_1a0.CachedColumnNames.ArrayNum = 0;
        }
      }
    }
    DestructItems<FString,int>
              ((FString *)local_1a0.CachedColumnNames.AllocatorInstance.Data,
               local_1a0.CachedColumnNames.ArrayNum);
    if (local_1a0.CachedColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.CachedColumnNames.AllocatorInstance.Data);
    }
  }
  bVar2 = local_res20[0];
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_f8.Database != (sqlite3 *)0x0) {
    iVar9 = sqlite3_close(local_f8.Database);
    if (iVar9 == 0) {
      local_f8.Database = (sqlite3 *)0x0;
    }
    else if ((local_f8.Database != (sqlite3 *)0x0) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Database",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLiteDatabase.cpp"
                                ,0x19,
                                L"Destructor called while an SQLite database was still open. Did you forget to call Close?"
                               ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  if (local_f8.ShortName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.ShortName.Data.AllocatorInstance.Data);
  }
  if (local_f8.OriginalPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.OriginalPath.Data.AllocatorInstance.Data);
  }
  pIVar12 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar13.Data = local_140.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar12 + 0x38))
            (pIVar12,FVar13.Data,0,0,in_stack_fffffffffffffe38 & 0xffffff00);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return (bool)(bVar3 & bVar17 & bVar2);
}

// GetBeautifiedTestName @ 14d11f3d0

FString * __thiscall
FSQLiteCoreTest::GetBeautifiedTestName(FSQLiteCoreTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Plugins.Database.SQLiteCore");
  return __return_storage_ptr__;
}

