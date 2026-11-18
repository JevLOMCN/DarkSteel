// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 5

// Call @ 14d120f10

ESQLitePreparedStatementExecuteRowResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FSQLiteCoreTest::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
::Call(void *param_1,FSQLitePreparedStatement *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  longlong lStackX_8;
  FString FStack_48;
  FString FStack_38;
  
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = 0;
  FStack_38.Data.ArrayMax = 0;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  FSQLitePreparedStatement::CacheColumnNames(param_2);
  pFVar2 = (param_2->CachedColumnNames).AllocatorInstance.Data;
  iVar4 = (param_2->CachedColumnNames).ArrayNum;
  for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)iVar4 * 0x10; pFVar7 = pFVar7 + 0x10) {
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar7;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"id");
    if (iVar3 == 0) {
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
      goto LAB_14d1208e4;
    }
  }
  iVar4 = -1;
LAB_14d1208e4:
  if (((param_2->Statement != (sqlite3_stmt *)0x0) &&
      (FSQLitePreparedStatement::CacheColumnNames(param_2), -1 < iVar4)) &&
     (iVar4 < (param_2->CachedColumnNames).ArrayNum)) {
    lStackX_8 = sqlite3_column_int64(param_2->Statement,iVar4);
  }
  FSQLitePreparedStatement::CacheColumnNames(param_2);
  pFVar2 = (param_2->CachedColumnNames).AllocatorInstance.Data;
  iVar4 = (param_2->CachedColumnNames).ArrayNum;
  for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)iVar4 * 0x10; pFVar7 = pFVar7 + 0x10) {
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar7;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"name");
    if (iVar3 == 0) {
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
      goto LAB_14d120963;
    }
  }
  iVar4 = -1;
LAB_14d120963:
  FSQLitePreparedStatement::GetColumnValueByIndex(param_2,iVar4,&FStack_38);
  FSQLitePreparedStatement::CacheColumnNames(param_2);
  pFVar2 = (param_2->CachedColumnNames).AllocatorInstance.Data;
  iVar4 = (param_2->CachedColumnNames).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + (longlong)iVar4 * 0x10) {
      iVar4 = -1;
LAB_14d1209ca:
      FSQLitePreparedStatement::GetColumnValueByIndex(param_2,iVar4,&FStack_48);
      **(byte **)param_1 = **(byte **)param_1 & lStackX_8 == 1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (FStack_38.Data.ArrayNum != 0) {
        FVar6.Data = FStack_38.Data.AllocatorInstance.Data;
      }
      bVar1 = **(byte **)param_1;
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"John");
      **(byte **)param_1 = iVar4 == 0 & bVar1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (FStack_48.Data.ArrayNum != 0) {
        FVar6.Data = FStack_48.Data.AllocatorInstance.Data;
      }
      bVar1 = **(byte **)param_1;
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"Manager");
      **(byte **)param_1 = iVar4 == 0 & bVar1;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
      return Stop;
    }
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar7;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"title");
    if (iVar3 == 0) {
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
      goto LAB_14d1209ca;
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// Call @ 14d120f20

ESQLitePreparedStatementExecuteRowResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSQLitePreparedStatement::Execute'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
::Call(void *param_1,FSQLitePreparedStatement *param_2)

{
  return Continue;
}

// Call @ 14d120f30

ESQLitePreparedStatementExecuteRowResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSQLiteDatabase::GetApplicationId'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
::Call(void *param_1,FSQLitePreparedStatement *param_2)

{
  undefined4 *puVar1;
  long64 lVar2;
  
  puVar1 = *(undefined4 **)param_1;
  if (param_2->Statement != (sqlite3_stmt *)0x0) {
    FSQLitePreparedStatement::CacheColumnNames(param_2);
    if (0 < (param_2->CachedColumnNames).ArrayNum) {
      lVar2 = sqlite3_column_int64(param_2->Statement,0);
      *puVar1 = (int)lVar2;
    }
  }
  return Stop;
}

// Call @ 14d120f80

ESQLitePreparedStatementExecuteRowResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSQLiteDatabase::GetUserVersion'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
::Call(void *param_1,FSQLitePreparedStatement *param_2)

{
  undefined4 *puVar1;
  long64 lVar2;
  
  puVar1 = *(undefined4 **)param_1;
  if (param_2->Statement != (sqlite3_stmt *)0x0) {
    FSQLitePreparedStatement::CacheColumnNames(param_2);
    if (0 < (param_2->CachedColumnNames).ArrayNum) {
      lVar2 = sqlite3_column_int64(param_2->Statement,0);
      *puVar1 = (int)lVar2;
    }
  }
  return Stop;
}

// Call @ 14d120fd0

ESQLitePreparedStatementExecuteRowResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSQLiteDatabase::PerformQuickIntegrityCheck'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
::Call(void *param_1,FSQLitePreparedStatement *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FSQLitePreparedStatement::GetColumnValueByIndex(param_2,0,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"ok");
  *(bool *)*(undefined8 *)param_1 = iVar1 == 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return Stop;
}

