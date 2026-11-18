// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EditorAnalyticsSession
// Functions: 21

// `dynamic_initializer_for_'DeprecatedVersions'' @ 140f328b0

void __cdecl EditorAnalyticsDefs::_dynamic_initializer_for__DeprecatedVersions__(void)

{
  ForAnyElementType FVar1;
  int iVar2;
  uint uVar3;
  
  FVar1.Data = SessionSummaryRoot.Data.AllocatorInstance.Data;
  iVar2 = SessionSummaryRoot.Data.ArrayNum;
  uVar3 = (5 - (uint)(iVar2 != 0)) + iVar2;
  DeprecatedVersions[0].Data.ArrayNum = iVar2;
  if ((int)uVar3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar3,0,(ForAnyElementType *)DeprecatedVersions,iVar2,
             &DeprecatedVersions[0].Data.ArrayMax);
  if (iVar2 != 0) {
    memcpy(DeprecatedVersions[0].Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  ::FString::PathAppend(DeprecatedVersions,L"1_0",3);
  FVar1 = SessionSummaryRoot.Data.AllocatorInstance;
  iVar2 = SessionSummaryRoot.Data.ArrayNum;
  DeprecatedVersions[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = (5 - (uint)(iVar2 != 0)) + iVar2;
  DeprecatedVersions[1].Data.ArrayNum = iVar2;
  if ((int)uVar3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar3,0,(ForAnyElementType *)(DeprecatedVersions + 1),iVar2,
             &DeprecatedVersions[1].Data.ArrayMax);
  if (iVar2 != 0) {
    memcpy(DeprecatedVersions[1].Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  ::FString::PathAppend(DeprecatedVersions + 1,L"1_1",3);
  FVar1 = SessionSummaryRoot.Data.AllocatorInstance;
  iVar2 = SessionSummaryRoot.Data.ArrayNum;
  DeprecatedVersions[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = (5 - (uint)(iVar2 != 0)) + iVar2;
  DeprecatedVersions[2].Data.ArrayNum = iVar2;
  if ((int)uVar3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar3,0,(ForAnyElementType *)(DeprecatedVersions + 2),iVar2,
             &DeprecatedVersions[2].Data.ArrayMax);
  if (iVar2 != 0) {
    memcpy(DeprecatedVersions[2].Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  ::FString::PathAppend(DeprecatedVersions + 2,L"1_2",3);
  FVar1 = SessionSummaryRoot.Data.AllocatorInstance;
  iVar2 = SessionSummaryRoot.Data.ArrayNum;
  DeprecatedVersions[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = (5 - (uint)(iVar2 != 0)) + iVar2;
  DeprecatedVersions[3].Data.ArrayNum = iVar2;
  if (iVar2 <= (int)uVar3) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,0,(ForAnyElementType *)(DeprecatedVersions + 3),iVar2,
               &DeprecatedVersions[3].Data.ArrayMax);
    if (iVar2 != 0) {
      memcpy(DeprecatedVersions[3].Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
    }
    ::FString::PathAppend(DeprecatedVersions + 3,L"1_3",3);
    FVar1 = SessionSummaryRoot.Data.AllocatorInstance;
    iVar2 = SessionSummaryRoot.Data.ArrayNum;
    DeprecatedVersions[4].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar3 = (5 - (uint)(iVar2 != 0)) + iVar2;
    DeprecatedVersions[4].Data.ArrayNum = iVar2;
    if ((int)uVar3 < iVar2) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,0,(ForAnyElementType *)(DeprecatedVersions + 4),iVar2,
               &DeprecatedVersions[4].Data.ArrayMax);
    if (iVar2 != 0) {
      memcpy(DeprecatedVersions[4].Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
    }
    ::FString::PathAppend(DeprecatedVersions + 4,L"1_4",3);
    FVar1 = SessionSummaryRoot.Data.AllocatorInstance;
    iVar2 = SessionSummaryRoot.Data.ArrayNum;
    DeprecatedVersions[5].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar3 = (5 - (uint)(iVar2 != 0)) + iVar2;
    DeprecatedVersions[5].Data.ArrayNum = iVar2;
    if (iVar2 <= (int)uVar3) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,(ForAnyElementType *)(DeprecatedVersions + 5),iVar2,
                 &DeprecatedVersions[5].Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(DeprecatedVersions[5].Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
      }
      ::FString::PathAppend(DeprecatedVersions + 5,L"1_5",3);
      FVar1 = SessionSummaryRoot.Data.AllocatorInstance;
      iVar2 = SessionSummaryRoot.Data.ArrayNum;
      DeprecatedVersions[6].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar3 = (5 - (uint)(iVar2 != 0)) + iVar2;
      DeprecatedVersions[6].Data.ArrayNum = iVar2;
      if (iVar2 <= (int)uVar3) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar3,0,(ForAnyElementType *)(DeprecatedVersions + 6),iVar2,
                   &DeprecatedVersions[6].Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(DeprecatedVersions[6].Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
        }
        ::FString::PathAppend(DeprecatedVersions + 6,L"1_6",3);
        atexit(_dynamic_atexit_destructor_for__DeprecatedVersions__);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// `dynamic_initializer_for_'GlobalLockName'' @ 140f32cf0

void __cdecl EditorAnalyticsDefs::_dynamic_initializer_for__GlobalLockName__(void)

{
  ::FString::FString(&GlobalLockName,L"UE4_SessionSummary_Lock");
  atexit(_dynamic_atexit_destructor_for__GlobalLockName__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantEditorAnalyticsSession'' @ 140f32d20

void __cdecl _dynamic_initializer_for__ModuleRegistrantEditorAnalyticsSession__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "EditorAnalyticsSession";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"EditorAnalyticsSession",0x16);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FEditorAnalyticsSessionModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'SessionListStoreKey'' @ 140f32d70

void __cdecl EditorAnalyticsDefs::_dynamic_initializer_for__SessionListStoreKey__(void)

{
  ::FString::FString(&SessionListStoreKey,L"SessionList");
  atexit(_dynamic_atexit_destructor_for__SessionListStoreKey__);
  return;
}

// `dynamic_initializer_for_'SessionSummaryRoot'' @ 140f32da0

void __cdecl EditorAnalyticsDefs::_dynamic_initializer_for__SessionSummaryRoot__(void)

{
  ::FString::FString(&SessionSummaryRoot,L"Unreal Engine/Session Summary");
  atexit(_dynamic_atexit_destructor_for__SessionSummaryRoot__);
  return;
}

// `dynamic_initializer_for_'SessionSummarySection'' @ 140f32dd0

void __cdecl EditorAnalyticsDefs::_dynamic_initializer_for__SessionSummarySection__(void)

{
  ForAnyElementType _Src;
  int iVar1;
  uint uVar2;
  
  _Src.Data = SessionSummaryRoot.Data.AllocatorInstance.Data;
  iVar1 = SessionSummaryRoot.Data.ArrayNum;
  uVar2 = (5 - (uint)(iVar1 != 0)) + iVar1;
  SessionSummarySection.Data.ArrayNum = iVar1;
  if (iVar1 <= (int)uVar2) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar2,0,(ForAnyElementType *)&SessionSummarySection,iVar1,
               &SessionSummarySection.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(SessionSummarySection.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar1 * 2);
    }
    ::FString::PathAppend(&SessionSummarySection,L"1_7",3);
    atexit(_dynamic_atexit_destructor_for__SessionSummarySection__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// `dynamic_initializer_for_'StoreId'' @ 140f32e90

void __cdecl EditorAnalyticsDefs::_dynamic_initializer_for__StoreId__(void)

{
  ::FString::FString(&StoreId,L"Epic Games");
  atexit(_dynamic_atexit_destructor_for__StoreId__);
  return;
}

// `dynamic_initializer_for_'TimestampStoreKey'' @ 140f32ec0

void __cdecl EditorAnalyticsDefs::_dynamic_initializer_for__TimestampStoreKey__(void)

{
  ::FString::FString(&TimestampStoreKey,L"Timestamp");
  atexit(_dynamic_atexit_destructor_for__TimestampStoreKey__);
  return;
}

// `scalar_deleting_destructor' @ 142372af0

void * __thiscall
FEditorAnalyticsSessionModule::_scalar_deleting_destructor_
          (FEditorAnalyticsSessionModule *this,uint param_1)

{
  *this = (FEditorAnalyticsSessionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator() @ 142372b30

void __thiscall
`CleanupDeprecatedAnalyticSessions'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  FDateTime FVar6;
  IFileManager *pIVar7;
  FDateTime *pFVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t _C;
  longlong lVar11;
  FString *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  ForAnyElementType FVar15;
  FString *pFVar16;
  ForAnyElementType FVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString *local_b8;
  undefined8 local_b0;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  FString local_80;
  FScriptContainerElement *local_70;
  FString **local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  FDateTime local_48 [2];
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetStoredValue
            (&EditorAnalyticsDefs::StoreId,param_1,&EditorAnalyticsDefs::SessionListStoreKey,
             &local_98);
  if (local_98.Data.ArrayNum < 2) {
LAB_142372fb7:
    FWindowsPlatformMisc::DeleteStoredSection(&EditorAnalyticsDefs::StoreId,param_1);
LAB_142372fc6:
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    return;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_98,&local_e8,L",",true);
  uVar5 = (ulonglong)local_e8.ArrayNum;
  local_88 = local_e8.AllocatorInstance.Data + uVar5 * 0x10;
  local_res20 = local_e8.ArrayNum;
  FVar17.Data = local_e8.AllocatorInstance.Data;
LAB_142372bc0:
  pFVar13 = local_88;
  if (local_e8.ArrayNum != (int)uVar5) {
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
  }
  if (FVar17.Data != pFVar13) {
    iVar4 = (param_1->Data).ArrayNum;
    iVar14 = *(int *)(FVar17.Data + 8) + -1;
    if (*(int *)(FVar17.Data + 8) == 0) {
      iVar14 = 0;
    }
    local_d8.Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar14 != -1)) {
      pFVar13 = (param_1->Data).AllocatorInstance.Data;
      iVar3 = iVar14 + 2;
LAB_142372c17:
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar3 != 0) goto LAB_142372c21;
      local_d8.Data.ArrayMax = 0;
    }
    else {
      pFVar13 = (param_1->Data).AllocatorInstance.Data;
      iVar3 = iVar14 + 1;
      if (iVar4 == 0) goto LAB_142372c17;
LAB_142372c21:
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar9 = iVar4 + iVar3;
      if ((int)uVar9 < iVar4) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,0,(ForAnyElementType *)&local_d8,iVar4,&local_d8.Data.ArrayMax);
      if (iVar4 != 0) {
        memcpy(local_d8.Data.AllocatorInstance.Data,pFVar13,(longlong)iVar4 * 2);
      }
    }
    ::FString::PathAppend(&local_d8,*(wchar_t **)FVar17.Data,iVar14);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    bVar2 = FWindowsPlatformMisc::GetStoredValue
                      (&EditorAnalyticsDefs::StoreId,&local_d8,
                       &EditorAnalyticsDefs::TimestampStoreKey,&local_a8);
    if (bVar2) {
      FVar6 = FDateTime::UtcNow();
      FVar15.Data = local_a8.Data.AllocatorInstance.Data;
      lVar11 = (longlong)local_a8.Data.ArrayNum;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = local_a8.Data.ArrayNum;
      if (local_a8.Data.ArrayNum == 0) {
        local_bc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.Data.ArrayNum,0,&local_c8,local_a8.Data.ArrayNum,&local_bc);
        memcpy(local_c8.Data,FVar15.Data,lVar11 * 2);
      }
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_c0 != 0) {
        FVar15.Data = local_c8.Data;
      }
      if (*(wchar_t *)FVar15.Data != L'\0') {
        lVar11 = _wtoi64((wchar_t *)FVar15.Data);
        if ((lVar11 == 0) && (iVar4 = _finite(0.0), iVar4 != 0)) {
          bVar2 = false;
          _C = *(wchar_t *)FVar15.Data;
          while (_C != L'\0') {
            if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar4 = iswspace(_C), iVar4 == 0)) {
              if (_C != L'\0') goto LAB_142372d90;
              break;
            }
            pFVar13 = FVar15.Data + 2;
            FVar15.Data = FVar15.Data + 2;
            _C = *(wchar_t *)pFVar13;
          }
          goto LAB_142372dbe;
        }
        goto LAB_142372eae;
      }
      goto LAB_142372dce;
    }
    goto LAB_142372f33;
  }
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  goto LAB_142372fb7;
  while( true ) {
    if ((!bVar2) && (_C != L'0')) goto LAB_142372dce;
    _C = *(wchar_t *)(FVar15.Data + 2);
    FVar15.Data = FVar15.Data + 2;
    bVar2 = true;
    if (_C == L'\0') break;
LAB_142372d90:
    iVar4 = iswspace(_C);
    if ((iVar4 != 0) || (_C == L'.')) break;
  }
LAB_142372dbe:
  if (bVar2) {
LAB_142372eae:
    pFVar8 = FDateTime::FDateTime(local_48,0x7b2,1,1,0,0,0,0);
    lVar11 = lVar11 * 10000000 + pFVar8->Ticks;
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  else {
LAB_142372dce:
    lVar11 = 0;
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  if (*(longlong *)FVar6.Ticks - lVar11 < **(longlong **)this) {
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    goto LAB_142372fc6;
  }
  local_b8 = (FString *)0x0;
  local_b0 = 0;
  pIVar7 = IFileManager::Get();
  local_68 = &local_b8;
  local_58 = &local_70;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`EditorAnalyticsUtils::DeleteLogEvents'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
             ::Call;
  pcVar1 = *(code **)((longlong)*pIVar7 + 0xa0);
  local_70 = FVar17.Data;
  FWindowsPlatformProcess::ApplicationSettingsDir();
  ::FString::PrintfImpl(&local_80,L"%sAnalytics");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar15.Data = local_80.Data.AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar7,FVar15.Data,&local_60);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  iVar4 = (int)local_b0;
  pFVar16 = local_b8 + (int)local_b0;
  pFVar12 = local_b8;
  while( true ) {
    if ((int)local_b0 != iVar4) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar12 == pFVar16) break;
    pIVar7 = IFileManager::Get();
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,pwVar10,0);
    pFVar12 = pFVar12 + 1;
  }
  DestructItems<FString,int>(local_b8,(int)local_b0);
  if (local_b8 != (FString *)0x0) {
    FMemory::Free(local_b8);
  }
LAB_142372f33:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FVar17.Data = FVar17.Data + 0x10;
  uVar5 = (ulonglong)local_res20;
  goto LAB_142372bc0;
}

// operator() @ 142373000

bool __thiscall
`EditorAnalyticsUtils::DeleteLogEvents'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  bool bVar4;
  int iVar5;
  FString *this_00;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (!param_2) {
    return true;
  }
  ::FString::FString(&local_28,param_1);
  this_00 = FPaths::GetCleanFilename(&local_18,&local_28);
  iVar2 = *(int *)(*(undefined8 **)this + 1);
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)**(undefined8 **)this;
  }
  bVar4 = ::FString::StartsWith(this_00,pwVar6,iVar5,IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar5 = *(int *)&pFVar3[1].Data;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar5 + 1;
    ::FString::FString((FString *)(pFVar3->Data + (longlong)iVar5 * 0x10),param_1);
  }
  return true;
}

// operator() @ 1423730f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
`CleanupDeprecatedAnalyticSessions'::__l8::<lambda_2>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  FDateTime FVar5;
  FString local_78;
  FString local_68;
  FRegexMatcher local_58;
  longlong local_38 [6];
  
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  if (param_2) {
    ::FString::FString(&local_78,param_1);
    pFVar3 = FPaths::GetCleanFilename(&local_68,&local_78);
    FRegexMatcher::FRegexMatcher(&local_58,*(FRegexPattern **)this,pFVar3);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    bVar1 = FRegexMatcher::FindNext(&local_58);
    if (bVar1) {
      pIVar4 = IFileManager::Get();
      (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_38,param_1);
      FVar5 = FDateTime::UtcNow();
      if ((double)**(longlong **)((longlong)this + 8) * __real_3e7ad7f29abcaf48 <=
          (double)(*(longlong *)FVar5.Ticks - local_38[0]) * __real_3e7ad7f29abcaf48) {
        pIVar4 = IFileManager::Get();
        cVar2 = (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,param_1,0,0);
        if (cVar2 != '\0') {
          **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + -1;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  }
  return true;
}

// CleanupDeprecatedAnalyticSessions @ 142373260

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl CleanupDeprecatedAnalyticSessions(FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  int local_res10 [2];
  FWindowsSystemWideMutex local_res18;
  FTimespan *local_res20;
  FString local_78;
  code *local_68;
  undefined1 **local_60;
  FRegexPattern local_58;
  FRegexPattern *local_48;
  FTimespan *local_40;
  int *local_38;
  
  uVar6 = 0;
  UE::FWindowsSystemWideMutex::FWindowsSystemWideMutex
            (&local_res18,&EditorAnalyticsDefs::GlobalLockName,(FTimespan)0x0);
  bVar2 = UE::FWindowsSystemWideMutex::IsValid(&local_res18);
  if (bVar2) {
    local_res20 = param_1;
    pIVar4 = IFileManager::Get();
    pcVar1 = *(code **)((longlong)*pIVar4 + 0x58);
    FWindowsPlatformProcess::ApplicationSettingsDir();
    FString::PrintfImpl(&local_78,L"%sAnalytics");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    cVar3 = (*pcVar1)(pIVar4,FVar5.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (cVar3 != '\0') {
      local_res10[0] = 0;
      FString::FString(&local_78,
                       L"(^[a-fA-F0-9-]+)_([0-9]+)_([0-9]+)_([0-9]+)_([0-9]+)_([0-9]+)_([0-9]+)");
      FRegexPattern::FRegexPattern(&local_58,&local_78,None);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pIVar4 = IFileManager::Get();
      local_48 = &local_58;
      local_38 = local_res10;
      local_60 = (undefined1 **)&local_48;
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x90);
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`CleanupDeprecatedAnalyticSessions'::__l8::<lambda_2>,bool,wchar_t_const_*,bool>
                 ::Call;
      local_40 = param_1;
      FWindowsPlatformProcess::ApplicationSettingsDir();
      FString::PrintfImpl(&local_78,L"%sAnalytics");
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
      }
      (*pcVar1)(pIVar4,FVar5.Data,&local_68);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_res10[0] == 0) {
        pIVar4 = IFileManager::Get();
        pcVar1 = *(code **)((longlong)*pIVar4 + 0x68);
        FWindowsPlatformProcess::ApplicationSettingsDir();
        FString::PrintfImpl(&local_78,L"%sAnalytics");
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar5.Data = local_78.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(pIVar4,FVar5.Data,0,0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.Implementation.SharedReferenceCount.ReferenceController);
    }
    do {
      `CleanupDeprecatedAnalyticSessions'::__l2::<lambda_1>::operator()
                (&local_res20,EditorAnalyticsDefs::DeprecatedVersions + (int)uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 7);
  }
  UE::FWindowsSystemWideMutex::~FWindowsSystemWideMutex(&local_res18);
  return;
}

// IMPLEMENT_MODULE_EditorAnalyticsSession @ 142373490

void __cdecl IMPLEMENT_MODULE_EditorAnalyticsSession(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'DeprecatedVersions'' @ 150355190

void __cdecl EditorAnalyticsDefs::_dynamic_atexit_destructor_for__DeprecatedVersions__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FString *pFVar3;
  
  pFVar3 = &SessionSummarySection;
  lVar2 = 7;
  do {
    pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalLockName'' @ 1503551e0

void __cdecl EditorAnalyticsDefs::_dynamic_atexit_destructor_for__GlobalLockName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GlobalLockName.Data.AllocatorInstance.Data;
  if (GlobalLockName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GlobalLockName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SessionListStoreKey'' @ 150355200

void __cdecl EditorAnalyticsDefs::_dynamic_atexit_destructor_for__SessionListStoreKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SessionListStoreKey.Data.AllocatorInstance.Data;
  if (SessionListStoreKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SessionListStoreKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SessionSummaryRoot'' @ 150355220

void __cdecl EditorAnalyticsDefs::_dynamic_atexit_destructor_for__SessionSummaryRoot__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SessionSummaryRoot.Data.AllocatorInstance.Data;
  if (SessionSummaryRoot.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SessionSummaryRoot.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SessionSummarySection'' @ 150355240

void __cdecl EditorAnalyticsDefs::_dynamic_atexit_destructor_for__SessionSummarySection__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SessionSummarySection.Data.AllocatorInstance.Data;
  if (SessionSummarySection.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SessionSummarySection.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StoreId'' @ 150355260

void __cdecl EditorAnalyticsDefs::_dynamic_atexit_destructor_for__StoreId__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StoreId.Data.AllocatorInstance.Data;
  if (StoreId.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StoreId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TimestampStoreKey'' @ 150355280

void __cdecl EditorAnalyticsDefs::_dynamic_atexit_destructor_for__TimestampStoreKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TimestampStoreKey.Data.AllocatorInstance.Data;
  if (TimestampStoreKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TimestampStoreKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

