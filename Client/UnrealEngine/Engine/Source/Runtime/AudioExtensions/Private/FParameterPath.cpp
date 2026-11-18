// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 2

// CombineNames @ 144532620

FName __cdecl Audio::FParameterPath::CombineNames(FName param_1,FName param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FString *pFVar3;
  size_t sVar4;
  FName *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined8 in_R8;
  wchar_t *_Str;
  FScriptContainerElement *pFVar13;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [8];
  
  if (param_2 == (FName)0x0) {
    *(undefined8 *)param_1 = in_R8;
    return param_1;
  }
  pwVar8 = L"";
  _Str = L"";
  if (NamespaceDelimiter.Data.ArrayNum != 0) {
    _Str = (wchar_t *)NamespaceDelimiter.Data.AllocatorInstance.Data;
  }
  local_res10 = param_2;
  pFVar3 = ::FName::ToString(&local_res10,&local_78);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_68,pwVar7);
  pFVar3 = ::FName::ToString(&local_res18,&local_88);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_58,pwVar8);
  lVar11 = 2;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_a8,2,&local_9c);
  ConstructItems<FString,FString,int>(local_a8.Data,&local_68,2);
  iVar6 = local_a0;
  bVar2 = true;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pFVar13 = local_a8.Data + (longlong)local_a0 * 0x10;
  FVar9.Data = local_a8.Data;
  while( true ) {
    if (local_a0 != iVar6) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (FVar9.Data == pFVar13) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      sVar4 = wcslen(_Str);
      ::FString::AppendChars(&local_98,_Str,(int)sVar4);
    }
    iVar12 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar12 = 0;
    }
    ::FString::AppendChars(&local_98,*(wchar_t **)FVar9.Data,iVar12);
    FVar9.Data = FVar9.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_a8.Data,local_a0);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  puVar10 = local_48;
  do {
    puVar1 = (undefined8 *)(puVar10 + -0x10);
    puVar10 = puVar10 + -0x10;
    lVar11 = lVar11 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar11 != 0);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar6 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FName::FName(&local_res20,iVar6,(wchar_t *)local_98.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)param_1 = *pFVar5;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// SplitName @ 144537770

void __cdecl Audio::FParameterPath::SplitName(FName param_1,FName *param_2,FName *param_3)

{
  int iVar1;
  FName *pFVar2;
  FString *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  int iVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  local_res8 = param_1;
  ::FName::ToString(&local_res8,&local_38);
  pwVar7 = L"";
  iVar1 = NamespaceDelimiter.Data.ArrayNum + -1;
  FVar5 = NamespaceDelimiter.Data.AllocatorInstance;
  if (NamespaceDelimiter.Data.ArrayNum == 0) {
    iVar1 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  iVar1 = ::FString::Find(&local_38,(wchar_t *)FVar5.Data,iVar1,IgnoreCase,FromEnd,-1);
  if (iVar1 == -1) {
    param_2->ComparisonIndex = 0;
    param_2->Number = 0;
    *param_3 = local_res8;
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
  }
  else {
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    iVar6 = 0;
    if (0 < iVar4) {
      iVar6 = iVar4;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar5.Data,iVar6);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar2 = ::FName::FName(&local_res20,(wchar_t *)FVar5.Data);
    *param_2 = *pFVar2;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = ::FString::RightChop(&local_38,&local_28,iVar1 + 1);
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    pFVar2 = ::FName::FName(&local_res20,pwVar7);
    *param_3 = *pFVar2;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

