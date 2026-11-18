// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 17

// StaticStruct @ 1421f2e40

UScriptStruct * __cdecl FTopLevelAssetPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTopLevelAssetPath.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FTopLevelAssetPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTopLevelAssetPath,(UObject *)pUVar1,
                         L"TopLevelAssetPath");
  }
  return Z_Registration_Info_UScriptStruct_FTopLevelAssetPath.OuterSingleton;
}

// AppendString @ 142204490

void __thiscall
FTopLevelAssetPath::AppendString(FTopLevelAssetPath *this,TStringBuilderBase<char8_t> *param_1)

{
  if (this->PackageName != (FName)0x0) {
    ::FName::AppendString(&this->PackageName,param_1);
    if (this->AssetName != (FName)0x0) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(param_1,1);
      }
      *param_1->CurPos = '.';
      param_1->CurPos = param_1->CurPos + 1;
      ::FName::AppendString(&this->AssetName,param_1);
    }
  }
  return;
}

// AppendString @ 142204500

void __thiscall
FTopLevelAssetPath::AppendString(FTopLevelAssetPath *this,TStringBuilderBase<wchar_t> *param_1)

{
  if (this->PackageName != (FName)0x0) {
    ::FName::AppendString(&this->PackageName,param_1);
    if (this->AssetName != (FName)0x0) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L'.';
      param_1->CurPos = param_1->CurPos + 1;
      ::FName::AppendString(&this->AssetName,param_1);
    }
  }
  return;
}

// AppendString @ 142204570

void __thiscall FTopLevelAssetPath::AppendString(FTopLevelAssetPath *this,FString *param_1)

{
  if (this->PackageName != (FName)0x0) {
    ::FName::AppendString(&this->PackageName,param_1);
    if (this->AssetName != (FName)0x0) {
      ::FString::AppendChars(param_1,L".",1);
      ::FName::AppendString(&this->AssetName,param_1);
    }
  }
  return;
}

// ExportTextItem @ 14220afa0

bool __thiscall
FTopLevelAssetPath::ExportTextItem
          (FTopLevelAssetPath *this,FString *param_1,FTopLevelAssetPath *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  if (this->PackageName == (FName)0x0) {
    iVar4 = 4;
    pwVar3 = L"None";
  }
  else {
    if ((param_4 & 1U) == 0) {
      pFVar2 = ToString(this,&local_18);
      iVar1 = (pFVar2->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return true;
    }
    ::FString::AppendChars(param_1,L"\"",1);
    pFVar2 = ToString(this,&local_18);
    pFVar2 = ::FString::ReplaceQuotesWithEscapedQuotes(pFVar2,&local_28);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar4 = 1;
    pwVar3 = L"\"";
  }
  ::FString::AppendChars(param_1,pwVar3,iVar4);
  return true;
}

// ImportTextItem @ 142211530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTopLevelAssetPath::ImportTextItem
          (FTopLevelAssetPath *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4,FArchive *param_5)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  TOptional<FName>_u_0 TVar5;
  bool bVar6;
  TOptional<FName>_u_0 TVar7;
  undefined1 auStackY_2c8 [32];
  TOptional<FName>_u_0 local_298 [2];
  TOptional<FName>_u_0 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  TOptional<FName>_u_0 local_278;
  TOptional<FName>_u_0 local_270;
  wchar_t *local_268;
  undefined2 local_260;
  undefined1 local_258 [512];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pwVar2 = *param_1;
  local_278 = (TOptional<FName>_u_0)local_258;
  local_270 = (TOptional<FName>_u_0)local_258;
  local_260 = 0;
  local_268 = (wchar_t *)local_58;
  pwVar4 = FPropertyHelpers::ReadToken
                     (pwVar2,(TStringBuilderBase<wchar_t> *)&local_278.TypedValue,true);
  if (pwVar4 != (wchar_t *)0x0) {
    *param_1 = pwVar4;
    if (((int)((longlong)local_270 - (longlong)local_278 >> 1) == 4) &&
       (iVar3 = FGenericPlatformStricmp::Strnicmp(L"None",(wchar_t *)local_278,4), iVar3 == 0)) {
      bVar6 = true;
      (this->AssetName).ComparisonIndex = 0;
      (this->AssetName).Number = 0;
      (this->PackageName).ComparisonIndex = 0;
      (this->PackageName).Number = 0;
      goto LAB_1422116bd;
    }
    pwVar4 = *param_1;
    if (*pwVar4 == L'(') {
      *param_1 = pwVar4 + 1;
      if (pwVar4[1] == L')') {
        *param_1 = pwVar4 + 2;
        bVar6 = true;
        (this->AssetName).ComparisonIndex = 0;
        (this->AssetName).Number = 0;
        (this->PackageName).ComparisonIndex = 0;
        (this->PackageName).Number = 0;
        goto LAB_1422116bd;
      }
      *param_1 = pwVar4;
      local_288 = (TOptional<FName>_u_0)0xffffffff;
      local_298[0].TypedValue.ComparisonIndex.Value = 0xffffffff;
      local_298[0].TypedValue.Number = 0;
      pwVar4 = UE::TopLevelAssetPath::Private::ImportFormattedStruct
                         (pwVar4,(TOptional<FName> *)&local_288.TypedValue,
                          (TOptional<FName> *)&local_298[0].TypedValue,param_3,param_2,param_4);
      if (pwVar4 != (wchar_t *)0x0) {
        FOutputDevice::LogfImpl
                  (param_4,Warning,
                   L"Struct format for FTopLevelAssetPath is deprecated. Imported struct: %.*s");
        *param_1 = pwVar4;
        bVar6 = true;
        TVar7.TypedValue.Number = local_298[0].TypedValue.Number;
        TVar7.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)local_298[0]._0_4_;
        TVar5 = (TOptional<FName>_u_0)0x0;
        if (local_298[0].TypedValue.ComparisonIndex.Value != 0xffffffff) {
          TVar5 = TVar7;
        }
        this->AssetName = (FName)TVar5;
        TVar7 = (TOptional<FName>_u_0)0x0;
        if (local_288.TypedValue.ComparisonIndex.Value != 0xffffffff) {
          TVar7 = local_288;
        }
        this->PackageName = (FName)TVar7;
        goto LAB_1422116bd;
      }
    }
    else {
      if (*pwVar4 != L'\'') {
LAB_142211729:
        _uStack_280 = CONCAT44(uStack_27c,(int)((longlong)local_270 - (longlong)local_278 >> 1));
        local_288 = local_278;
        TrySetPath(this,(TStringView<wchar_t> *)&local_288.TypedValue);
        bVar6 = true;
        goto LAB_1422116bd;
      }
      local_270.TypedValue = local_278.TypedValue;
      *param_1 = pwVar4 + 1;
      pwVar4 = FPropertyHelpers::ReadToken
                         (pwVar4 + 1,(TStringBuilderBase<wchar_t> *)&local_278.TypedValue,true);
      if (pwVar4 != (wchar_t *)0x0) {
        *param_1 = pwVar4;
        wVar1 = *pwVar4;
        *param_1 = pwVar4 + 1;
        if (wVar1 == L'\'') goto LAB_142211729;
      }
    }
    *param_1 = pwVar2;
  }
  bVar6 = false;
LAB_1422116bd:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_278.TypedValue);
  return bVar6;
}

// RemapPackage @ 14221a850

bool __thiscall
FTopLevelAssetPath::RemapPackage(FTopLevelAssetPath *this,FName param_1,FName param_2)

{
  if (this->PackageName == param_1) {
    this->PackageName = param_2;
    return true;
  }
  return false;
}

// SerializeFromMismatchedTag @ 14222a170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTopLevelAssetPath::SerializeFromMismatchedTag
          (FTopLevelAssetPath *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  undefined4 extraout_var_00;
  FName FVar5;
  undefined1 auStack_8a8 [32];
  TStringView<wchar_t> local_888;
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_878);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 == FVar4) {
    local_878.DataPtr = (wchar_t *)0x0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_878);
    local_888.DataPtr = local_878.DataPtr;
    local_868.Base = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    ::FName::AppendString((FName *)&local_888,&local_868);
    local_888.Size = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
    local_888.DataPtr = local_868.Base;
    TrySetPath(this,&local_888);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    bVar2 = true;
  }
  else {
    FVar1 = param_1->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)&local_878);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (FVar1 == FVar5) {
      local_888.DataPtr = (wchar_t *)0x0;
      local_888.Size = 0;
      local_888._12_4_ = 0;
      ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),(FString *)&local_888);
      local_878.Size = local_888.Size + -1;
      if (local_888.Size == 0) {
        local_878.Size = 0;
      }
      local_878.DataPtr = local_888.DataPtr;
      TrySetPath(this,&local_878);
      if (local_888.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_888.DataPtr);
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

// ToString @ 142231c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FTopLevelAssetPath::ToString(FTopLevelAssetPath *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_268 [32];
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.Base = local_218;
  if ((this->PackageName != (FName)0x0) &&
     (::FName::AppendString(&this->PackageName,&local_238), this->AssetName != (FName)0x0)) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'.';
    local_238.CurPos = local_238.CurPos + 1;
    ::FName::AppendString(&this->AssetName,&local_238);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_248,local_238.Base,
                      (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// ToString @ 142231d80

void __thiscall FTopLevelAssetPath::ToString(FTopLevelAssetPath *this,FString *param_1)

{
  ::FString::Reset(param_1,0);
  if (this->PackageName != (FName)0x0) {
    ::FName::AppendString(&this->PackageName,param_1);
    if (this->AssetName != (FName)0x0) {
      ::FString::AppendChars(param_1,L".",1);
      ::FName::AppendString(&this->AssetName,param_1);
    }
  }
  return;
}

// TrySetPath @ 142233540

bool __thiscall FTopLevelAssetPath::TrySetPath(FTopLevelAssetPath *this,UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  
  if (param_1 == (UObject *)0x0) {
    (this->AssetName).ComparisonIndex = 0;
    (this->AssetName).Number = 0;
    (this->PackageName).ComparisonIndex = 0;
    (this->PackageName).Number = 0;
    return false;
  }
  lVar2 = *(longlong *)&param_1->field_0x20;
  if (lVar2 == 0) {
    pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cast<UPackage>(InObject) != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\TopLevelAssetPath.cpp"
                         ,0x61,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    (this->PackageName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
    (this->PackageName).Number = uVar4;
    (this->AssetName).ComparisonIndex = 0;
    (this->AssetName).Number = 0;
    return true;
  }
  if (*(longlong *)(lVar2 + 0x20) != 0) {
    (this->AssetName).ComparisonIndex = 0;
    (this->AssetName).Number = 0;
    (this->PackageName).ComparisonIndex = 0;
    (this->PackageName).Number = 0;
    return false;
  }
  this->PackageName = *(FName *)(lVar2 + 0x18);
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  (this->AssetName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (this->AssetName).Number = uVar4;
  return true;
}

// TrySetPath @ 142233630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FTopLevelAssetPath::TrySetPath(FTopLevelAssetPath *this,TStringView<char> *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_898 [32];
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  local_868.End = local_32;
  pcVar1 = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  if (local_32 < local_848 + iVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    local_868.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(local_868.CurPos,iVar3,pcVar1,iVar3);
  }
  local_878.Size = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  local_878.DataPtr = local_868.Base;
  bVar2 = TrySetPath(this,&local_878);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return bVar2;
}

// TrySetPath @ 142233740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTopLevelAssetPath::TrySetPath(FTopLevelAssetPath *this,TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_898 [32];
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  local_868.Base = local_848;
  puVar1 = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->Size;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = local_32;
  iVar3 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,iVar4);
  if (local_868.End < local_868.CurPos + iVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar3);
  }
  if (iVar4 != 0) {
    local_868.CurPos = UE::Core::Private::Convert(local_868.CurPos,iVar3,puVar1,iVar4);
  }
  local_878.Size = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  local_878.DataPtr = local_868.Base;
  bVar2 = TrySetPath(this,&local_878);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return bVar2;
}

// TrySetPath @ 142233850

bool __thiscall
FTopLevelAssetPath::TrySetPath(FTopLevelAssetPath *this,TStringView<wchar_t> *param_1)

{
  FName FVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  wchar_t *pwVar9;
  TStringView<wchar_t> *pTVar10;
  FName *pFVar11;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  TStringView<wchar_t> *local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  uVar16 = 0;
  if ((param_1->Size == 0) ||
     ((iVar8 = wcsncmp(param_1->DataPtr,L"None",(longlong)param_1->Size), iVar8 == 0 &&
      (*(short *)(&u_None + (longlong)param_1->Size * 2) == 0)))) goto LAB_142233aca;
  if ((param_1->Size < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((*param_1->DataPtr == L'/') &&
     (pwVar9 = TStringView<wchar_t>::operator[](param_1,param_1->Size + -1), *pwVar9 != L'\'')) {
LAB_142233960:
    pwVar9 = param_1->DataPtr;
    pwVar12 = pwVar9;
    while ((pwVar12 != pwVar9 + (int)*(undefined8 *)&param_1->Size &&
           (((-(ulonglong)((ushort)*pwVar12 < 0x40) & 0x400000000000) >> ((byte)*pwVar12 & 0x3f) & 1
            ) == 0))) {
      pwVar12 = pwVar12 + 1;
    }
    iVar8 = (int)((longlong)pwVar12 - (longlong)pwVar9 >> 1);
    if (iVar8 != 0) {
      iVar13 = param_1->Size;
      iVar14 = iVar8 + 1;
      iVar4 = 0x7fffffff;
      if (iVar8 + 1 < 0) {
        iVar14 = 0;
        iVar4 = iVar8 + -0x80000000;
      }
      if (iVar13 < iVar14) {
        iVar14 = iVar13;
      }
      iVar3 = iVar13 - iVar14;
      if (iVar4 < iVar13 - iVar14) {
        iVar3 = iVar4;
      }
      iVar13 = 0;
      if (0 < iVar3) {
        iVar13 = iVar3;
      }
      pwVar12 = pwVar9 + iVar14;
      if (iVar13 == 0) {
        pFVar11 = ::FName::FName(&local_res20,iVar8,pwVar9,FNAME_Add);
        FVar1 = *pFVar11;
        (this->AssetName).ComparisonIndex = 0;
        (this->AssetName).Number = 0;
        this->PackageName = FVar1;
        return true;
      }
      for (pwVar15 = pwVar12; pwVar15 != pwVar12 + iVar13; pwVar15 = pwVar15 + 1) {
        uVar16 = uVar16 | 1L << ((byte)*pwVar15 & 0x3f) &
                          -(ulonglong)((ushort)*pwVar15 < 0x40) & 0x400400000000000;
      }
      if (uVar16 == 0) {
        pFVar11 = ::FName::FName(&local_58,iVar8,pwVar9,FNAME_Add);
        this->PackageName = *pFVar11;
        pFVar11 = ::FName::FName(&local_50,iVar13,pwVar12,FNAME_Add);
        this->AssetName = *pFVar11;
        return true;
      }
    }
  }
  else {
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar10 = FPackageName::ExportTextPathToObjectPath(&local_38,&local_48);
    iVar8 = pTVar10->Size;
    uVar5 = *(undefined4 *)&pTVar10->field_0xc;
    param_1->DataPtr = pTVar10->DataPtr;
    param_1->Size = iVar8;
    *(undefined4 *)&param_1->field_0xc = uVar5;
    iVar8 = param_1->Size;
    if (iVar8 != 0) {
      if ((iVar8 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      if (*param_1->DataPtr == L'/') goto LAB_142233960;
    }
    local_res18 = param_1;
    `FTopLevelAssetPath::TrySetPath'::__l13::<lambda_1>::operator()(&local_res18);
  }
LAB_142233aca:
  (this->AssetName).ComparisonIndex = 0;
  (this->AssetName).Number = 0;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  return false;
}

// TrySetPath @ 142233af0

bool __thiscall FTopLevelAssetPath::TrySetPath(FTopLevelAssetPath *this,FName param_1,FName param_2)

{
  this->PackageName = param_1;
  this->AssetName = param_2;
  return param_1 != (FName)0x0;
}

// WriteCompactBinary @ 1422345b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTopLevelAssetPath::WriteCompactBinary(FTopLevelAssetPath *this,FCbWriter *param_1)

{
  undefined1 auStack_478 [32];
  TStringView<char8_t> local_458;
  TStringBuilderBase<char8_t> local_448;
  uchar local_428 [1035];
  uchar local_1d [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_478;
  local_448.CurPos = local_428;
  local_448.End = local_1d;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.Base = local_428;
  if ((this->PackageName != (FName)0x0) &&
     (::FName::AppendString(&this->PackageName,&local_448), this->AssetName != (FName)0x0)) {
    if (local_448.End < local_448.CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(&local_448,1);
    }
    *local_448.CurPos = '.';
    local_448.CurPos = local_448.CurPos + 1;
    ::FName::AppendString(&this->AssetName,&local_448);
  }
  local_458.Size = (int)local_448.CurPos - (int)local_448.Base;
  local_458.DataPtr = local_448.Base;
  FCbWriter::SetNameOrAddString(param_1,&local_458);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_448);
  return;
}

// operator() @ 150488e70

bool __thiscall `FTopLevelAssetPath::TrySetPath'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1892940272308846460>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1892940272308846460>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

