// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 17

// FCoreRedirectObjectName @ 141fbd1c0

FCoreRedirectObjectName * __thiscall
FCoreRedirectObjectName::FCoreRedirectObjectName
          (FCoreRedirectObjectName *this,FSoftObjectPath *param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  (this->OuterName).ComparisonIndex = 0;
  (this->OuterName).Number = 0;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  if (((param_1->AssetPath).PackageName == (FName)0x0) ||
     ((param_1->SubPathString).Data.ArrayNum < 2)) {
    this->PackageName = (param_1->AssetPath).PackageName;
    this->ObjectName = (param_1->AssetPath).AssetName;
  }
  else {
    pFVar3 = FSoftObjectPath::ToString(param_1,&local_18);
    local_28.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    iVar1 = (pFVar3->Data).ArrayNum;
    local_28.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_28.Size = 0;
    }
    bVar2 = ExpandNames(&local_28,&this->ObjectName,&this->OuterName,&this->PackageName);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      (this->PackageName).ComparisonIndex = 0;
      (this->PackageName).Number = 0;
      (this->OuterName).ComparisonIndex = 0;
      (this->OuterName).Number = 0;
      (this->ObjectName).ComparisonIndex = 0;
      (this->ObjectName).Number = 0;
    }
  }
  return this;
}

// FCoreRedirectObjectName @ 141fbd2a0

FCoreRedirectObjectName * __thiscall
FCoreRedirectObjectName::FCoreRedirectObjectName
          (FCoreRedirectObjectName *this,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  
  FVar1 = param_1->PackageName;
  this->ObjectName = param_1->AssetName;
  (this->OuterName).ComparisonIndex = 0;
  (this->OuterName).Number = 0;
  this->PackageName = FVar1;
  return this;
}

// FCoreRedirectObjectName @ 141fbd2d0

FCoreRedirectObjectName * __thiscall
FCoreRedirectObjectName::FCoreRedirectObjectName(FCoreRedirectObjectName *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<wchar_t> local_18;
  
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  (this->OuterName).ComparisonIndex = 0;
  (this->OuterName).Number = 0;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = ExpandNames(&local_18,&this->ObjectName,&this->OuterName,&this->PackageName);
  if (!bVar2) {
    (this->PackageName).ComparisonIndex = 0;
    (this->PackageName).Number = 0;
    (this->OuterName).ComparisonIndex = 0;
    (this->OuterName).Number = 0;
    (this->ObjectName).ComparisonIndex = 0;
    (this->ObjectName).Number = 0;
  }
  return this;
}

// FCoreRedirectObjectName @ 141fbd360

FCoreRedirectObjectName * __thiscall
FCoreRedirectObjectName::FCoreRedirectObjectName(FCoreRedirectObjectName *this,UObject *param_1)

{
  FName FVar1;
  longlong lVar2;
  FName *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  int iVar6;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  (this->OuterName).ComparisonIndex = 0;
  (this->OuterName).Number = 0;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  if (param_1 != (UObject *)0x0) {
    FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    FVar1.Number = *(uint *)&param_1->field_0x1c;
    lVar5 = *(longlong *)&param_1->field_0x20;
    if (lVar5 == 0) {
      this->PackageName = FVar1;
      return this;
    }
    local_28.Data.ArrayNum = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayMax = 0;
    this->ObjectName = FVar1;
    while (lVar2 = *(longlong *)(lVar5 + 0x20), lVar2 != 0) {
      if (1 < local_28.Data.ArrayNum) {
        ::FString::AppendChar(&local_28,L'.');
      }
      local_res8 = *(FName *)(lVar5 + 0x18);
      ::FName::ToString(&local_res8,&local_18);
      iVar6 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
      lVar5 = lVar2;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(&local_res8,(wchar_t *)FVar4.Data);
    this->OuterName = *pFVar3;
    this->PackageName = *(FName *)(lVar5 + 0x18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// AppendHash @ 141fc5a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCoreRedirectObjectName::AppendHash(FCoreRedirectObjectName *this,FBlake3 *param_1)

{
  undefined1 auStack_888 [32];
  undefined4 local_868 [4];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_868[0] = 0xabacadab;
  local_858.End = local_22;
  if (this->PackageName != (FName)0x0) {
    ::FName::AppendString(&this->PackageName,&local_858);
    FBlake3::Update(param_1,local_858.Base,
                    (longlong)(int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1) * 2)
    ;
  }
  FBlake3::Update(param_1,local_868,4);
  if (this->OuterName != (FName)0x0) {
    local_858.CurPos = local_858.Base;
    ::FName::AppendString(&this->OuterName,&local_858);
    FBlake3::Update(param_1,local_858.Base,
                    (longlong)(int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1) * 2)
    ;
  }
  FBlake3::Update(param_1,local_868,4);
  if (this->ObjectName != (FName)0x0) {
    local_858.CurPos = local_858.Base;
    ::FName::AppendString(&this->ObjectName,&local_858);
    FBlake3::Update(param_1,local_858.Base,
                    (longlong)(int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1) * 2)
    ;
  }
  FBlake3::Update(param_1,local_868,4);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// AppendObjectName @ 141fc5bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCoreRedirectObjectName * __cdecl
FCoreRedirectObjectName::AppendObjectName
          (FCoreRedirectObjectName *__return_storage_ptr__,FCoreRedirectObjectName *param_1,
          FName param_2)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FName FVar4;
  undefined1 auStack_8a8 [32];
  TStringView<wchar_t> local_888;
  TStringView<wchar_t> local_878;
  FCoreRedirectObjectName local_868;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  FVar4 = param_1->ObjectName;
  FVar1 = param_1->OuterName;
  FVar2 = param_1->PackageName;
  if (FVar4 == (FName)0x0) {
    if (FVar1 == (FName)0x0) {
      if (FVar2 == (FName)0x0) {
        (__return_storage_ptr__->ObjectName).ComparisonIndex = 0;
        (__return_storage_ptr__->ObjectName).Number = 0;
        (__return_storage_ptr__->OuterName).ComparisonIndex = 0;
        (__return_storage_ptr__->OuterName).Number = 0;
        __return_storage_ptr__->PackageName = param_2;
      }
      else {
        (__return_storage_ptr__->OuterName).ComparisonIndex = 0;
        (__return_storage_ptr__->OuterName).Number = 0;
        __return_storage_ptr__->ObjectName = param_2;
        __return_storage_ptr__->PackageName = FVar2;
      }
    }
    else {
      __return_storage_ptr__->ObjectName = param_2;
      __return_storage_ptr__->OuterName = FVar1;
      __return_storage_ptr__->PackageName = FVar2;
    }
  }
  else if (FVar1 == (FName)0x0) {
    __return_storage_ptr__->ObjectName = param_2;
    if (FVar2 == (FName)0x0) {
      __return_storage_ptr__->PackageName = FVar4;
      (__return_storage_ptr__->OuterName).ComparisonIndex = 0;
      (__return_storage_ptr__->OuterName).Number = 0;
    }
    else {
      __return_storage_ptr__->OuterName = FVar4;
      __return_storage_ptr__->PackageName = FVar2;
    }
  }
  else {
    local_848.bIsDynamic = false;
    local_848.bIsExternal = false;
    local_848.Base = local_828;
    local_848.CurPos = local_828;
    local_848.End = (wchar_t *)local_28;
    if (FVar2 == (FName)0x0) {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
      local_878.DataPtr = (wchar_t *)0x0;
      local_878.Size = 0;
      local_888.DataPtr = (wchar_t *)0x0;
      local_888.Size = 0;
      UE::CoreRedirects::SplitFirstComponent(param_1->OuterName,&local_848,&local_878,&local_888);
      if (local_878.Size == 0) {
        local_868.ObjectName = param_1->ObjectName;
        local_878.DataPtr = (wchar_t *)0x0;
        local_888.DataPtr = (wchar_t *)0x0;
        local_868.OuterName.ComparisonIndex.Value = 0;
        local_868.OuterName.Number = 0;
        local_868.PackageName.ComparisonIndex.Value = 0;
        local_868.PackageName.Number = 0;
        AppendObjectName(__return_storage_ptr__,&local_868,param_2);
      }
      else {
        if (0 < local_888.Size) {
          pFVar3 = ::FName::FName((FName *)&local_888,local_888.Size,local_888.DataPtr,FNAME_Add);
          FVar4 = *pFVar3;
        }
        pFVar3 = ::FName::FName((FName *)&local_888,local_878.Size,local_878.DataPtr,FNAME_Add);
        local_868.PackageName = *pFVar3;
        local_868.ObjectName = param_1->ObjectName;
        local_868.OuterName = FVar4;
        AppendObjectName(__return_storage_ptr__,&local_868,param_2);
      }
    }
    else {
      ::FName::AppendString(&param_1->OuterName,&local_848);
      if (local_848.End < local_848.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_848,1);
      }
      *local_848.CurPos = L'.';
      local_848.CurPos = local_848.CurPos + 1;
      ::FName::AppendString(&param_1->ObjectName,&local_848);
      FVar4 = param_1->PackageName;
      pFVar3 = ::FName::FName((FName *)&local_888,
                              (int)((longlong)local_848.CurPos - (longlong)local_848.Base >> 1),
                              local_848.Base,FNAME_Add);
      __return_storage_ptr__->OuterName = *pFVar3;
      __return_storage_ptr__->ObjectName = param_2;
      __return_storage_ptr__->PackageName = FVar4;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  }
  return __return_storage_ptr__;
}

// CombineNames @ 141fc6f00

FString * __cdecl
FCoreRedirectObjectName::CombineNames
          (FString *__return_storage_ptr__,FName param_1,FName param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  FName *this;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_2 == (FName)0x0) {
    if (param_3 == (FName)0x0) {
      this = &local_res10;
    }
    else {
      if (param_1 != (FName)0x0) {
        ::FName::ToString(&local_res10,&local_48);
        ::FName::ToString(&local_res20,&local_38);
        ::FString::PrintfImpl(__return_storage_ptr__,L"%s.%s");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)0x0,0);
        return __return_storage_ptr__;
      }
      this = &local_res20;
    }
    ::FName::ToString(this,__return_storage_ptr__);
    DestructItems<FString,int>((FString *)0x0,0);
    return __return_storage_ptr__;
  }
  ::FName::ToString(&local_res18,&local_68);
  pFVar1 = local_68.Data.AllocatorInstance.Data + (longlong)local_68.Data.ArrayNum * 2;
  FVar3.Data = local_68.Data.AllocatorInstance.Data;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.AllocatorInstance.Data == pFVar1) goto joined_r0x000141fc6f75;
  do {
    if (*(short *)FVar3.Data == 0x2e) {
      if ((int)((longlong)FVar3.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1) == -1)
      goto joined_r0x000141fc6f75;
      goto LAB_141fc6fc2;
    }
    FVar3.Data = FVar3.Data + 2;
  } while (FVar3.Data != pFVar1);
  do {
    if (*(short *)FVar2.Data == 0x3a) {
      if ((int)((longlong)FVar2.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1) != -1)
      goto LAB_141fc6fc2;
      break;
    }
    FVar2.Data = FVar2.Data + 2;
joined_r0x000141fc6f75:
  } while (FVar2.Data != pFVar1);
  if (local_res20 != (FName)0x0) {
    ::FName::ToString(&local_res10,&local_58);
    ::FName::ToString(&local_res18,&local_48);
    ::FName::ToString(&local_res20,&local_38);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s.%s:%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    goto LAB_141fc716a;
  }
  ::FName::ToString(&local_res10,&local_48);
  ::FName::ToString(&local_res18,&local_38);
  pwVar4 = L"%s:%s";
LAB_141fc714a:
  ::FString::PrintfImpl(__return_storage_ptr__,pwVar4);
  local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
LAB_141fc716a:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  return __return_storage_ptr__;
LAB_141fc6fc2:
  if (local_res20 != (FName)0x0) {
    ::FName::ToString(&local_res10,&local_38);
    ::FName::ToString(&local_res18,&local_48);
    ::FName::ToString(&local_res20,&local_58);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s.%s.%s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    goto LAB_141fc716a;
  }
  ::FName::ToString(&local_res10,&local_48);
  ::FName::ToString(&local_res18,&local_38);
  pwVar4 = L"%s.%s";
  goto LAB_141fc714a;
}

// Compare @ 141fc7380

int __thiscall
FCoreRedirectObjectName::Compare(FCoreRedirectObjectName *this,FCoreRedirectObjectName *param_1)

{
  int iVar1;
  
  if (this->PackageName == param_1->PackageName) {
    if (this->OuterName != param_1->OuterName) {
      iVar1 = ::FName::Compare(&this->OuterName,&param_1->OuterName);
      return iVar1;
    }
    if (this->ObjectName == param_1->ObjectName) {
      return 0;
    }
  }
  else {
    param_1 = (FCoreRedirectObjectName *)&param_1->PackageName;
    this = (FCoreRedirectObjectName *)&this->PackageName;
  }
  iVar1 = ::FName::Compare(&this->ObjectName,&param_1->ObjectName);
  return iVar1;
}

// ExpandNames @ 141fca350

bool __cdecl
FCoreRedirectObjectName::ExpandNames
          (TStringView<wchar_t> *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FName *pFVar6;
  FName FVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  bool bVar13;
  FName local_res8;
  TStringView<wchar_t> local_58 [2];
  
  pwVar1 = param_1->DataPtr;
  iVar9 = param_1->Size;
  iVar10 = 0;
  pwVar11 = pwVar1;
  while ((pwVar11 != pwVar1 + iVar9 && (iVar3 = iswspace(*pwVar11), iVar3 != 0))) {
    iVar10 = iVar10 + 1;
    pwVar11 = pwVar11 + 1;
  }
  pwVar1 = pwVar1 + iVar10;
  iVar9 = iVar9 - iVar10;
  if (iVar9 != 0) {
    lVar12 = (longlong)iVar9;
    pwVar11 = pwVar1 + lVar12 + -1;
    do {
      iVar10 = iswspace(*pwVar11);
      if (iVar10 == 0) break;
      iVar9 = iVar9 + -1;
      pwVar11 = pwVar11 + -1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar10 = 0;
  pwVar11 = pwVar1;
  while ((pwVar11 != pwVar1 + iVar9 && (iVar3 = iswspace(*pwVar11), iVar3 != 0))) {
    iVar10 = iVar10 + 1;
    pwVar11 = pwVar11 + 1;
  }
  pwVar1 = pwVar1 + iVar10;
  iVar9 = iVar9 - iVar10;
  if (iVar9 != 0) {
    lVar12 = (longlong)iVar9;
    pwVar11 = pwVar1 + lVar12 + -1;
    do {
      iVar10 = iswspace(*pwVar11);
      if (iVar10 == 0) break;
      iVar9 = iVar9 + -1;
      pwVar11 = pwVar11 + -1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  local_58[0].Size = iVar9;
  uVar2 = local_58[0]._8_8_;
  local_58[0].DataPtr = pwVar1;
  iVar3 = UE::String::FindFirstChar(local_58,L'/',CaseSensitive);
  local_58[0].DataPtr = pwVar1;
  local_58[0]._8_8_ = uVar2;
  iVar10 = UE::String::FindFirstChar(local_58,L'.',CaseSensitive);
  local_58[0].DataPtr = pwVar1;
  local_58[0]._8_8_ = uVar2;
  iVar4 = UE::String::FindFirstChar(local_58,L':',CaseSensitive);
  if (iVar4 == -1) {
    if (iVar10 == -1) {
      pFVar6 = ::FName::FName(&local_res8,iVar9,pwVar1,FNAME_Add);
      FVar7 = *pFVar6;
      if (iVar3 != -1) {
        *param_4 = FVar7;
        return true;
      }
      goto LAB_141fca60d;
    }
  }
  else if ((iVar10 == -1) || (iVar4 < iVar10)) {
    iVar10 = iVar4;
  }
  local_58[0].DataPtr = pwVar1;
  local_58[0]._8_8_ = uVar2;
  iVar4 = UE::String::FindLastChar(local_58,L'.',CaseSensitive);
  local_58[0].DataPtr = pwVar1;
  local_58[0]._8_8_ = uVar2;
  iVar5 = UE::String::FindLastChar(local_58,L':',CaseSensitive);
  if ((iVar5 != -1) && ((iVar4 == -1 || (iVar4 < iVar5)))) {
    iVar4 = iVar5;
  }
  if (iVar3 == -1) {
    iVar10 = 0;
    if (iVar9 < 0) {
      iVar10 = iVar9;
    }
    iVar3 = iVar9 - iVar10;
    if (iVar4 < iVar9 - iVar10) {
      iVar3 = iVar4;
    }
LAB_141fca59b:
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    pFVar6 = ::FName::FName(&local_res8,iVar5,pwVar1 + iVar10,FNAME_Add);
    *param_3 = *pFVar6;
  }
  else {
    iVar3 = iVar9;
    if (iVar10 < iVar9) {
      iVar3 = iVar10;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    pFVar6 = ::FName::FName(&local_res8,iVar5,pwVar1,FNAME_Add);
    *param_4 = *pFVar6;
    if (iVar10 != iVar4) {
      iVar3 = iVar10 + 1;
      iVar5 = 0;
      if (iVar3 < 0) {
        iVar5 = iVar3;
      }
      iVar8 = (iVar5 - iVar10) + -1 + iVar4;
      iVar10 = iVar3 - iVar5;
      if (iVar9 < iVar3 - iVar5) {
        iVar10 = iVar9;
      }
      iVar3 = iVar9 - iVar10;
      if (iVar8 < iVar9 - iVar10) {
        iVar3 = iVar8;
      }
      goto LAB_141fca59b;
    }
  }
  iVar10 = iVar4 + 1;
  bVar13 = iVar10 < 0;
  if (bVar13) {
    iVar10 = 0;
  }
  iVar3 = 0x7fffffff;
  if (bVar13) {
    iVar3 = iVar4 + -0x80000000;
  }
  if (iVar9 < iVar10) {
    iVar10 = iVar9;
  }
  iVar4 = iVar9 - iVar10;
  if (iVar3 < iVar9 - iVar10) {
    iVar4 = iVar3;
  }
  iVar9 = 0;
  if (0 < iVar4) {
    iVar9 = iVar4;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar9,pwVar1 + iVar10,FNAME_Add);
  FVar7 = *pFVar6;
LAB_141fca60d:
  *param_2 = FVar7;
  return true;
}

// GetParent @ 141fd1dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCoreRedirectObjectName * __cdecl
FCoreRedirectObjectName::GetParent
          (FCoreRedirectObjectName *__return_storage_ptr__,FCoreRedirectObjectName *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  FName FVar6;
  FName *pFVar7;
  FName FVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auStack_8c8 [32];
  TStringView<wchar_t> local_8a8;
  TStringView<wchar_t> local_898;
  FCoreRedirectObjectName local_888;
  undefined8 local_870;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8c8;
  local_8a8.DataPtr = *(wchar_t **)&param_1->OuterName;
  if (param_1->ObjectName != (FName)0x0) {
    if ((FName)local_8a8.DataPtr != (FName)0x0) {
      local_868.Base = local_848;
      local_868.CurPos = local_848;
      local_868.End = (wchar_t *)local_48;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      ::FName::AppendString((FName *)&local_8a8,&local_868);
      pwVar3 = local_868.Base;
      for (pwVar9 = local_868.Base;
          pwVar9 != local_868.Base +
                    (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          pwVar9 = pwVar9 + 1) {
        if (*pwVar9 == L':') {
          *pwVar9 = L'.';
        }
      }
      iVar11 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
      local_898.Size = iVar11;
      local_898.DataPtr = local_868.Base;
      auVar13 = (undefined1  [12])local_898._0_12_;
      iVar4 = UE::String::FindLastChar(&local_898,L'.',CaseSensitive);
      if (iVar4 == -1) {
        local_8a8.Size = 0;
        local_8a8._12_4_ = 0;
        iVar10 = 0;
        local_8a8.DataPtr = (wchar_t *)0x0;
        auVar12 = ZEXT412(0) << 0x40;
      }
      else {
        iVar5 = iVar11;
        if (iVar4 < iVar11) {
          iVar5 = iVar4;
        }
        iVar10 = 0;
        if (0 < iVar5) {
          iVar10 = iVar5;
        }
        iVar5 = (iVar11 - iVar4) + -1;
        auVar12._8_4_ = iVar10;
        auVar12._0_8_ = pwVar3;
        iVar4 = iVar11;
        if (iVar5 < iVar11) {
          iVar4 = iVar5;
        }
        local_8a8.Size = 0;
        if (0 < iVar4) {
          local_8a8.Size = iVar4;
        }
        local_8a8.DataPtr = pwVar3 + ((longlong)iVar11 - (longlong)local_8a8.Size);
        auVar13._8_4_ = local_8a8.Size;
        auVar13._0_8_ = local_8a8.DataPtr;
        iVar11 = local_8a8.Size;
      }
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
      if (iVar11 == 0) {
        local_888.ObjectName = param_1->ObjectName;
        local_8a8.DataPtr = (wchar_t *)0x0;
        local_888.OuterName.ComparisonIndex.Value = 0;
        local_888.OuterName.Number = 0;
        local_888.PackageName = param_1->PackageName;
        GetParent(__return_storage_ptr__,&local_888);
      }
      else {
        if (0 < iVar10) {
          pFVar7 = ::FName::FName((FName *)&local_8a8,auVar12._8_4_,auVar12._0_8_,FNAME_Add);
          FVar8 = *pFVar7;
        }
        FVar6 = param_1->PackageName;
        pFVar7 = ::FName::FName((FName *)&local_8a8,auVar13._8_4_,auVar13._0_8_,FNAME_Add);
        __return_storage_ptr__->ObjectName = *pFVar7;
        __return_storage_ptr__->OuterName = FVar8;
        __return_storage_ptr__->PackageName = FVar6;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return __return_storage_ptr__;
    }
    FVar8 = param_1->PackageName;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_898._8_8_;
    local_898 = (TStringView<wchar_t>)(auVar1 << 0x40);
    local_8a8.DataPtr = (wchar_t *)0x0;
    if (FVar8 == (FName)0x0) {
      local_888.ObjectName.ComparisonIndex.Value = 0;
      local_888.ObjectName.Number = 0;
      local_888.OuterName.ComparisonIndex.Value = 0;
      local_888.OuterName.Number = 0;
      local_888.PackageName = param_1->ObjectName;
      GetParent(__return_storage_ptr__,&local_888);
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->ObjectName).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectName).Number = 0;
    (__return_storage_ptr__->OuterName).ComparisonIndex = 0;
    (__return_storage_ptr__->OuterName).Number = 0;
    __return_storage_ptr__->PackageName = FVar8;
    return __return_storage_ptr__;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if ((FName)local_8a8.DataPtr == (FName)0x0) {
    (__return_storage_ptr__->ObjectName).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectName).Number = 0;
    (__return_storage_ptr__->OuterName).ComparisonIndex = 0;
    (__return_storage_ptr__->OuterName).Number = 0;
    (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
    (__return_storage_ptr__->PackageName).Number = 0;
    return __return_storage_ptr__;
  }
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_898._0_12_ = ZEXT812(0);
  local_8a8.DataPtr = (wchar_t *)0x0;
  local_8a8.Size = 0;
  if (param_1->PackageName == (FName)0x0) {
    UE::CoreRedirects::SplitFirstComponent(param_1->OuterName,&local_868,&local_898,&local_8a8);
    iVar11 = local_898.Size;
    if (local_898.Size != 0) {
      if (0 < local_8a8.Size) {
        pFVar7 = ::FName::FName((FName *)&local_8a8,local_8a8.Size,local_8a8.DataPtr,FNAME_Add);
        FVar6 = *pFVar7;
      }
      pFVar7 = ::FName::FName((FName *)&local_8a8,iVar11,local_898.DataPtr,FNAME_Add);
      local_8a8.DataPtr = (wchar_t *)0x0;
      local_888.ObjectName.ComparisonIndex.Value = 0;
      local_888.ObjectName.Number = 0;
      local_888.OuterName = FVar6;
      local_888.PackageName = *pFVar7;
      goto LAB_141fd1e9e;
    }
    local_870 = 0;
  }
  else {
    UE::CoreRedirects::SplitLastComponent(param_1->OuterName,&local_868,&local_8a8,&local_898);
    iVar11 = local_898.Size;
    if (local_898.Size != 0) {
      if (0 < local_8a8.Size) {
        pFVar7 = ::FName::FName((FName *)&local_8a8,local_8a8.Size,local_8a8.DataPtr,FNAME_Add);
        FVar6 = *pFVar7;
      }
      FVar8 = param_1->PackageName;
      pFVar7 = ::FName::FName((FName *)&local_8a8,iVar11,local_898.DataPtr,FNAME_Add);
      local_888.ObjectName = *pFVar7;
      local_888.OuterName = FVar6;
      local_888.PackageName = FVar8;
      goto LAB_141fd1e9e;
    }
    FVar6 = param_1->PackageName;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_898._8_8_;
  local_898 = (TStringView<wchar_t>)(auVar2 << 0x40);
  local_888.OuterName.ComparisonIndex.Value = 0;
  local_888.OuterName.Number = 0;
  local_888.ObjectName.ComparisonIndex.Value = 0;
  local_888.ObjectName.Number = 0;
  local_8a8.DataPtr = (wchar_t *)0x0;
  local_888.PackageName = FVar6;
LAB_141fd1e9e:
  GetParent(__return_storage_ptr__,&local_888);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return __return_storage_ptr__;
}

// GetSearchKey @ 141fd30f0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FName __thiscall
FCoreRedirectObjectName::GetSearchKey(FCoreRedirectObjectName *this,ECoreRedirectFlags param_1)

{
  FName FVar1;
  FName FVar2;
  uint in_register_00000014;
  byte in_R8B;
  
  if ((in_R8B & 0xc0) != 0) {
    *(FName *)CONCAT44(in_register_00000014,param_1) = this->PackageName;
    FVar1.Number = in_register_00000014;
    FVar1.ComparisonIndex.Value = param_1;
    return FVar1;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) = this->ObjectName;
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  return FVar2;
}

// HasValidCharacters @ 141fd3f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall
FCoreRedirectObjectName::HasValidCharacters
          (FCoreRedirectObjectName *this,ECoreRedirectFlags param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  int *piVar4;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&InvalidObjectNameCharacters,L".\n\r\t");
    atexit(`FCoreRedirectObjectName::HasValidCharacters'::__l2::
           _dynamic_atexit_destructor_for__InvalidObjectNameCharacters__);
    _Init_thread_footer(&::_TSS0);
  }
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  ::FName::AppendString(&this->PackageName,&local_858);
  local_868.Size = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  local_868.DataPtr = local_858.Base;
  bVar2 = FPackageName::IsVersePackage(&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  iVar1 = *piVar4;
  if (bVar2) {
    if ((iVar1 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&InvalidVerseCharacters,L"\n\r\t");
      atexit(`FCoreRedirectObjectName::HasValidCharacters'::__l5::
             _dynamic_atexit_destructor_for__InvalidVerseCharacters__);
      _Init_thread_footer(&::_TSS1);
    }
    bVar2 = ::FName::IsValidXName
                      (this->ObjectName,&InvalidObjectNameCharacters,(FText *)0x0,(FText *)0x0);
    if (!bVar2) {
      return false;
    }
    bVar2 = ::FName::IsValidXName(this->OuterName,&InvalidVerseCharacters,(FText *)0x0,(FText *)0x0)
    ;
    if (!bVar2) {
      return false;
    }
    pFVar3 = &InvalidVerseCharacters;
  }
  else {
    if ((iVar1 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FString::FString(&InvalidRedirectNameCharacters,L"\"\',|&!~\n\r\t@#(){}[]=;^%$`");
      atexit(`FCoreRedirectObjectName::HasValidCharacters'::__l2::
             _dynamic_atexit_destructor_for__InvalidRedirectNameCharacters__);
      _Init_thread_footer(&::_TSS2);
    }
    pFVar3 = &InvalidRedirectNameCharacters;
    if ((param_1 & (Type_Property|Type_Function|Type_Object)) != None) {
      pFVar3 = &InvalidObjectNameCharacters;
    }
    bVar2 = ::FName::IsValidXName(this->ObjectName,pFVar3,(FText *)0x0,(FText *)0x0);
    if (!bVar2) {
      return false;
    }
    bVar2 = ::FName::IsValidXName
                      (this->OuterName,&InvalidRedirectNameCharacters,(FText *)0x0,(FText *)0x0);
    if (!bVar2) {
      return false;
    }
    pFVar3 = &InvalidRedirectNameCharacters;
  }
  bVar2 = ::FName::IsValidXName(this->PackageName,pFVar3,(FText *)0x0,(FText *)0x0);
  if (!bVar2) {
    return false;
  }
  return true;
}

// MatchScore @ 141fd7680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

int __thiscall
FCoreRedirectObjectName::MatchScore
          (FCoreRedirectObjectName *this,FCoreRedirectObjectName *param_1,ECoreRedirectFlags param_2
          ,ECoreRedirectMatchFlags param_3)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_4a8 [32];
  FName local_488 [2];
  FName local_478;
  FName FStack_470;
  FName local_468;
  FNameUtf8String local_458;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  iVar3 = 2;
  if ((param_2 & Option_MatchSubstring) == None) {
    if (this->ObjectName != (FName)0x0) {
      if (this->ObjectName != param_1->ObjectName) {
        return 0;
      }
      iVar3 = 0x12;
    }
    if (this->OuterName != (FName)0x0) {
      if (this->OuterName != param_1->OuterName) {
        return 0;
      }
      iVar3 = iVar3 + 8;
    }
    if (this->PackageName != (FName)0x0) {
      if (this->PackageName != param_1->PackageName) {
        return 0;
      }
      return iVar3 + 4;
    }
    return iVar3;
  }
  FVar1 = this->ObjectName;
  FStack_470 = this->OuterName;
  bVar4 = (bool)((byte)param_3 & 1);
  local_468 = this->PackageName;
  iVar3 = 1;
  local_478 = FVar1;
  if ((param_2 >> 0x18 & 1) == 0) {
    if ((param_2 >> 0x19 & 1) == 0) {
      if (FVar1 != (FName)0x0) {
        local_488[0] = param_1->ObjectName;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
        local_458.UTF8._padding_._0_1_ = false;
        local_458.UTF8._padding_._1_1_ = false;
        if (local_488[0] != (FName)0x0) {
          ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
        }
        bVar2 = UE::CoreRedirects::Private::FSubstringMatcher::Matches(FVar1,&local_458,bVar4);
        if (!bVar2) goto LAB_141fd7b30;
        iVar3 = 0x11;
        TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                  ((TStringBuilderBase<char8_t> *)&local_458);
      }
      FVar1 = FStack_470;
      if (FStack_470 != (FName)0x0) {
        local_488[0] = param_1->OuterName;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
        local_458.UTF8._padding_._0_1_ = false;
        local_458.UTF8._padding_._1_1_ = false;
        if (local_488[0] != (FName)0x0) {
          ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
        }
        bVar2 = UE::CoreRedirects::Private::FSubstringMatcher::Matches(FVar1,&local_458,bVar4);
        if (!bVar2) goto LAB_141fd7b30;
        iVar3 = iVar3 + 8;
        TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                  ((TStringBuilderBase<char8_t> *)&local_458);
      }
      FVar1 = local_468;
      if (local_468 == (FName)0x0) {
        return iVar3;
      }
      local_488[0] = param_1->PackageName;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
      local_458.UTF8._padding_._0_1_ = false;
      local_458.UTF8._padding_._1_1_ = false;
      if (local_488[0] != (FName)0x0) {
        ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
      }
      bVar4 = UE::CoreRedirects::Private::FSubstringMatcher::Matches(FVar1,&local_458,bVar4);
    }
    else {
      if (FVar1 != (FName)0x0) {
        local_488[0] = param_1->ObjectName;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
        local_458.UTF8._padding_._0_1_ = false;
        local_458.UTF8._padding_._1_1_ = false;
        if (local_488[0] != (FName)0x0) {
          ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
        }
        bVar2 = UE::CoreRedirects::Private::FSuffixMatcher::Matches(FVar1,&local_458,bVar4);
        if (!bVar2) goto LAB_141fd7b30;
        iVar3 = 0x11;
        TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                  ((TStringBuilderBase<char8_t> *)&local_458);
      }
      FVar1 = FStack_470;
      if (FStack_470 != (FName)0x0) {
        local_488[0] = param_1->OuterName;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
        local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
        local_458.UTF8._padding_._0_1_ = false;
        local_458.UTF8._padding_._1_1_ = false;
        if (local_488[0] != (FName)0x0) {
          ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
        }
        bVar2 = UE::CoreRedirects::Private::FSuffixMatcher::Matches(FVar1,&local_458,bVar4);
        if (!bVar2) goto LAB_141fd7b30;
        iVar3 = iVar3 + 8;
        TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                  ((TStringBuilderBase<char8_t> *)&local_458);
      }
      FVar1 = local_468;
      if (local_468 == (FName)0x0) {
        return iVar3;
      }
      local_488[0] = param_1->PackageName;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
      local_458.UTF8._padding_._0_1_ = false;
      local_458.UTF8._padding_._1_1_ = false;
      if (local_488[0] != (FName)0x0) {
        ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
      }
      bVar4 = UE::CoreRedirects::Private::FSuffixMatcher::Matches(FVar1,&local_458,bVar4);
    }
  }
  else {
    if (FVar1 != (FName)0x0) {
      local_488[0] = param_1->ObjectName;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
      local_458.UTF8._padding_._0_1_ = false;
      local_458.UTF8._padding_._1_1_ = false;
      if (local_488[0] != (FName)0x0) {
        ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
      }
      bVar2 = UE::CoreRedirects::Private::FPrefixMatcher::Matches(FVar1,&local_458,bVar4);
      if (!bVar2) goto LAB_141fd7b30;
      iVar3 = 0x11;
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                ((TStringBuilderBase<char8_t> *)&local_458);
    }
    FVar1 = FStack_470;
    if (FStack_470 != (FName)0x0) {
      local_488[0] = param_1->OuterName;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
      local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
      local_458.UTF8._padding_._0_1_ = false;
      local_458.UTF8._padding_._1_1_ = false;
      if (local_488[0] != (FName)0x0) {
        ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
      }
      bVar2 = UE::CoreRedirects::Private::FPrefixMatcher::Matches(FVar1,&local_458,bVar4);
      if (!bVar2) goto LAB_141fd7b30;
      iVar3 = iVar3 + 8;
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
                ((TStringBuilderBase<char8_t> *)&local_458);
    }
    FVar1 = local_468;
    if (local_468 == (FName)0x0) {
      return iVar3;
    }
    local_488[0] = param_1->PackageName;
    local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
    local_458.UTF8._padding_ = (longlong)local_458.UTF8.StringBuffer;
    local_458.UTF8._padding_ = (longlong)&local_458.UTF8.field_0x42b;
    local_458.UTF8._padding_._0_1_ = false;
    local_458.UTF8._padding_._1_1_ = false;
    if (local_488[0] != (FName)0x0) {
      ::FName::AppendString(local_488,(TStringBuilderBase<char8_t> *)&local_458);
    }
    bVar4 = UE::CoreRedirects::Private::FPrefixMatcher::Matches(FVar1,&local_458,bVar4);
  }
  if (bVar4 != false) {
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
              ((TStringBuilderBase<char8_t> *)&local_458);
    return iVar3 + 4;
  }
LAB_141fd7b30:
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_458);
  return 0;
}

// Matches @ 141fd7d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCoreRedirectObjectName::Matches
          (FCoreRedirectObjectName *this,FCoreRedirectObjectName *param_1,EMatchFlags param_2)

{
  FName FVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_cc8 [32];
  undefined1 local_ca8 [1072];
  FNameUtf8String local_878;
  FNameUtf8String local_448;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_cc8;
  uVar2 = param_2 >> 1;
  bVar4 = (bool)((byte)uVar2 & 1);
  if ((param_2 & CheckSubString) == None) {
    if ((param_2 & CheckPrefix) == None) {
      if ((param_2 & CheckSuffix) == None) {
        FVar1 = param_1->ObjectName;
        if (this->ObjectName != FVar1) {
          if (this->ObjectName == (FName)0x0) {
            if ((param_2 & DisallowPartialLHSMatch) != None) {
              return false;
            }
            if (FVar1 != (FName)0x0) goto LAB_141fd7eed;
          }
          else if (FVar1 != (FName)0x0) {
            return false;
          }
          if ((uVar2 & 1) == 0) {
            return false;
          }
        }
LAB_141fd7eed:
        FVar1 = param_1->OuterName;
        if (this->OuterName != FVar1) {
          if (this->OuterName == (FName)0x0) {
            if ((param_2 & DisallowPartialLHSMatch) != None) {
              return false;
            }
            if (FVar1 != (FName)0x0) goto LAB_141fd7f15;
          }
          else if (FVar1 != (FName)0x0) {
            return false;
          }
          if ((uVar2 & 1) == 0) {
            return false;
          }
        }
LAB_141fd7f15:
        FVar1 = param_1->PackageName;
        if (this->PackageName != FVar1) {
          if (this->PackageName == (FName)0x0) {
            if ((param_2 & DisallowPartialLHSMatch) != None) {
              return false;
            }
            if (FVar1 != (FName)0x0) {
              return true;
            }
          }
          else if (FVar1 != (FName)0x0) {
            return false;
          }
          if ((uVar2 & 1) == 0) {
            return false;
          }
        }
        return true;
      }
      UE::CoreRedirects::Private::FCoreRedirectObjectUtf8Name::FCoreRedirectObjectUtf8Name
                ((FCoreRedirectObjectUtf8Name *)local_ca8,param_1);
      bVar3 = UE::CoreRedirects::Private::FSuffixMatcher::Matches
                        (this->ObjectName,(FNameUtf8String *)local_ca8,bVar4);
      if ((!bVar3) ||
         (bVar3 = UE::CoreRedirects::Private::FSuffixMatcher::Matches
                            (this->OuterName,&local_878,bVar4), !bVar3)) goto LAB_141fd7da7;
      bVar4 = UE::CoreRedirects::Private::FSuffixMatcher::Matches
                        (this->PackageName,&local_448,bVar4);
    }
    else {
      UE::CoreRedirects::Private::FCoreRedirectObjectUtf8Name::FCoreRedirectObjectUtf8Name
                ((FCoreRedirectObjectUtf8Name *)local_ca8,param_1);
      bVar3 = UE::CoreRedirects::Private::FPrefixMatcher::Matches
                        (this->ObjectName,(FNameUtf8String *)local_ca8,bVar4);
      if ((!bVar3) ||
         (bVar3 = UE::CoreRedirects::Private::FPrefixMatcher::Matches
                            (this->OuterName,&local_878,bVar4), !bVar3)) goto LAB_141fd7da7;
      bVar4 = UE::CoreRedirects::Private::FPrefixMatcher::Matches
                        (this->PackageName,&local_448,bVar4);
    }
  }
  else {
    UE::CoreRedirects::Private::FCoreRedirectObjectUtf8Name::FCoreRedirectObjectUtf8Name
              ((FCoreRedirectObjectUtf8Name *)local_ca8,param_1);
    bVar3 = UE::CoreRedirects::Private::FSubstringMatcher::Matches
                      (this->ObjectName,(FNameUtf8String *)local_ca8,bVar4);
    if ((!bVar3) ||
       (bVar3 = UE::CoreRedirects::Private::FSubstringMatcher::Matches
                          (this->OuterName,&local_878,bVar4), !bVar3)) {
LAB_141fd7da7:
      bVar4 = false;
      goto LAB_141fd7dde;
    }
    bVar4 = UE::CoreRedirects::Private::FSubstringMatcher::Matches
                      (this->PackageName,&local_448,bVar4);
  }
  bVar4 = bVar4 != false;
LAB_141fd7dde:
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_448);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_878);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)local_ca8);
  return bVar4;
}

// Reset @ 141fe2e30

void __thiscall FCoreRedirectObjectName::Reset(FCoreRedirectObjectName *this)

{
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  (this->OuterName).ComparisonIndex = 0;
  (this->OuterName).Number = 0;
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  return;
}

// ToString @ 141fe9d20

FString * __thiscall
FCoreRedirectObjectName::ToString(FCoreRedirectObjectName *this,FString *__return_storage_ptr__)

{
  CombineNames(__return_storage_ptr__,this->ObjectName,this->OuterName,this->PackageName);
  return __return_storage_ptr__;
}

// UnionFieldsInline @ 141febab0

void __thiscall
FCoreRedirectObjectName::UnionFieldsInline
          (FCoreRedirectObjectName *this,FCoreRedirectObjectName *param_1)

{
  if (this->ObjectName == (FName)0x0) {
    this->ObjectName = param_1->ObjectName;
  }
  if (this->OuterName == (FName)0x0) {
    this->OuterName = param_1->OuterName;
  }
  if (this->PackageName == (FName)0x0) {
    this->PackageName = param_1->PackageName;
  }
  return;
}

