// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticStruct @ 14211f600

UScriptStruct * __cdecl FPrimaryAssetId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetId.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FPrimaryAssetId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetId,(UObject *)pUVar1,
                         L"PrimaryAssetId");
  }
  return Z_Registration_Info_UScriptStruct_FPrimaryAssetId.OuterSingleton;
}

// ExportTextItem @ 142138c60

bool __thiscall
FPrimaryAssetId::ExportTextItem
          (FPrimaryAssetId *this,FString *param_1,FPrimaryAssetId *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  if ((param_4 & 1U) == 0) {
    pFVar3 = ToString(this,&local_28);
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  }
  else {
    pFVar3 = ToString(this,&local_18);
    ::FString::ReplaceCharWithEscapedCharInline
              (pFVar3,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&local_28,L"\"%s\"");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
      local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// ImportTextItem @ 1421421b0

bool __thiscall
FPrimaryAssetId::ImportTextItem
          (FPrimaryAssetId *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  ForAnyElementType FVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName local_48;
  FName FStack_40;
  FName local_38;
  FString local_30;
  
  ::FString::FString(&local_30,L"");
  pwVar2 = FPropertyHelpers::ReadToken(*param_1,&local_30,true);
  if (pwVar2 == (wchar_t *)0x0) {
    bVar5 = false;
  }
  else {
    uVar4 = 0;
    uVar7 = local_30.Data.ArrayNum - 1;
    FVar1.Data = local_30.Data.AllocatorInstance.Data;
    if (local_30.Data.ArrayNum == 0) {
      uVar7 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    pFVar3 = FVar1.Data;
    if (uVar7 != 0) {
      do {
        iVar6 = (int)uVar4;
        if (*(wchar_t *)pFVar3 == L':') {
          ::FName::FName(&local_48,iVar6,(wchar_t *)FVar1.Data,FNAME_Add);
          ::FName::FName(&local_38,(uVar7 - iVar6) + -1,(wchar_t *)(FVar1.Data + (uVar4 + 1) * 2),
                         FNAME_Add);
          FStack_40 = local_38;
          goto LAB_14214224a;
        }
        uVar4 = (ulonglong)(iVar6 + 1U);
        pFVar3 = pFVar3 + 2;
      } while (iVar6 + 1U < uVar7);
    }
    local_48.ComparisonIndex.Value = 0;
    local_48.Number = 0;
    FStack_40.ComparisonIndex.Value = 0;
    FStack_40.Number = 0;
LAB_14214224a:
    bVar5 = true;
    (this->PrimaryAssetType).Name = local_48;
    this->PrimaryAssetName = FStack_40;
    *param_1 = pwVar2;
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// ParseTypeAndName @ 1421464b0

FPrimaryAssetId * __cdecl
FPrimaryAssetId::ParseTypeAndName
          (FPrimaryAssetId *__return_storage_ptr__,wchar_t *param_1,uint param_2)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  int iVar3;
  FName local_res20;
  FName local_18 [2];
  
  uVar2 = 0;
  pwVar1 = param_1;
  if (param_2 != 0) {
    do {
      iVar3 = (int)uVar2;
      if (*pwVar1 == L':') {
        ::FName::FName(&local_res20,iVar3,param_1,FNAME_Add);
        ::FName::FName(local_18,(param_2 - iVar3) + -1,param_1 + uVar2 + 1,FNAME_Add);
        (__return_storage_ptr__->PrimaryAssetType).Name = local_res20;
        __return_storage_ptr__->PrimaryAssetName = local_18[0];
        return __return_storage_ptr__;
      }
      uVar2 = (ulonglong)(iVar3 + 1U);
      pwVar1 = pwVar1 + 1;
    } while (iVar3 + 1U < param_2);
  }
  (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
  (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->PrimaryAssetName).Number = 0;
  return __return_storage_ptr__;
}

// ParseTypeAndName @ 142146560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPrimaryAssetId * __cdecl
FPrimaryAssetId::ParseTypeAndName(FPrimaryAssetId *__return_storage_ptr__,FName param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  FName FVar3;
  FNameEntryId FVar4;
  FName FVar5;
  FName local_res10;
  undefined1 auStack_868 [32];
  FName local_848;
  FName local_840;
  wchar_t local_838 [1040];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_868;
  local_res10 = param_1;
  uVar1 = ::FName::ToStringInternal(&local_res10,local_838,0x40b);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (uVar1 != 0) {
    pwVar2 = local_838;
    FVar5 = FVar3;
    do {
      FVar4 = FVar5.ComparisonIndex.Value;
      if (*pwVar2 == L':') {
        ::FName::FName(&local_848,FVar4.Value,local_838,FNAME_Add);
        ::FName::FName(&local_840,(uVar1 - FVar4.Value) + -1,local_838 + (longlong)FVar5 + 1,
                       FNAME_Add);
        (__return_storage_ptr__->PrimaryAssetType).Name = local_848;
        goto LAB_1421465c3;
      }
      FVar5.ComparisonIndex.Value = FVar4.Value + 1;
      FVar5.Number = 0;
      pwVar2 = pwVar2 + 1;
    } while (FVar5.ComparisonIndex.Value < uVar1);
  }
  (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
  local_840 = FVar3;
LAB_1421465c3:
  __return_storage_ptr__->PrimaryAssetName = local_840;
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 14214d520

bool __thiscall
FPrimaryAssetId::SerializeFromMismatchedTag
          (FPrimaryAssetId *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  undefined1 auVar2 [8];
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 extraout_var_00;
  FName FVar6;
  FName FVar7;
  int iVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FNameEntryId FVar12;
  uint uVar13;
  FName local_res10 [2];
  FName local_res20;
  FName local_58;
  FName FStack_50;
  undefined1 local_48 [8];
  FName FStack_40;
  FString local_38;
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 == FVar6) {
    uVar9 = 0;
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),local_res10);
    pFVar4 = ::FName::ToString(local_res10,&local_38);
    iVar8 = (pFVar4->Data).ArrayNum;
    uVar11 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar11 = 0;
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar5 = (FScriptContainerElement *)pwVar10;
    if (uVar11 != 0) {
      do {
        iVar8 = (int)uVar9;
        if (*(short *)pFVar5 == 0x3a) {
          ::FName::FName(&local_res20,iVar8,pwVar10,FNAME_Add);
          ::FName::FName(&local_58,(uVar11 - iVar8) + -1,
                         (wchar_t *)((longlong)pwVar10 + (uVar9 + 1) * 2),FNAME_Add);
          local_48._0_4_ = local_res20.ComparisonIndex.Value;
          local_48._4_4_ = local_res20.Number;
          auVar2 = local_48;
          FStack_40 = local_58;
          FVar1 = FStack_40;
          local_48._0_4_ = local_res20.ComparisonIndex.Value;
          local_48._4_4_ = local_res20.Number;
          FStack_40.ComparisonIndex = local_58.ComparisonIndex.Value;
          FStack_40.Number = local_58.Number;
          FVar3.Value = local_48._0_4_;
          uVar11 = local_48._4_4_;
          FVar12.Value = FStack_40.ComparisonIndex.Value;
          uVar13 = FStack_40.Number;
          local_48 = auVar2;
          FStack_40 = FVar1;
          goto LAB_14214d68c;
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        pFVar5 = pFVar5 + 2;
      } while (iVar8 + 1U < uVar11);
    }
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    auVar2 = local_48;
    FStack_40.ComparisonIndex.Value = 0;
    FStack_40.Number = 0;
    FVar1 = FStack_40;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    FStack_40.ComparisonIndex.Value = 0;
    FStack_40.Number = 0;
    FVar3.Value = local_48._0_4_;
    uVar11 = local_48._4_4_;
    FVar12.Value = FStack_40.ComparisonIndex.Value;
    uVar13 = FStack_40.Number;
    local_48 = auVar2;
    FStack_40 = FVar1;
  }
  else {
    FVar1 = param_1->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (FVar1 != FVar7) {
      return false;
    }
    uVar9 = 0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    FStack_40.ComparisonIndex.Value = 0;
    FStack_40.Number = 0;
    ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),(FString *)local_48);
    uVar11 = FStack_40.ComparisonIndex.Value - 1;
    FVar1 = (FName)local_48;
    if (FStack_40.ComparisonIndex.Value == 0) {
      uVar11 = 0;
      FVar1 = (FName)L"";
    }
    FVar6 = FVar1;
    if (uVar11 != 0) {
      do {
        iVar8 = (int)uVar9;
        if (*(wchar_t *)FVar6 == L':') {
          ::FName::FName(local_res10,iVar8,(wchar_t *)FVar1,FNAME_Add);
          ::FName::FName(&local_res20,(uVar11 - iVar8) + -1,
                         (wchar_t *)((longlong)FVar1 + (uVar9 + 1) * 2),FNAME_Add);
          local_58 = local_res10[0];
          FStack_50 = local_res20;
          goto LAB_14214d688;
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        FVar6 = (FName)((longlong)FVar6 + 2);
      } while (iVar8 + 1U < uVar11);
    }
    local_58.ComparisonIndex.Value = 0;
    local_58.Number = 0;
    FStack_50.ComparisonIndex.Value = 0;
    FStack_50.Number = 0;
LAB_14214d688:
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48;
    FVar3.Value = local_58.ComparisonIndex.Value;
    uVar11 = local_58.Number;
    FVar12.Value = FStack_50.ComparisonIndex.Value;
    uVar13 = FStack_50.Number;
  }
LAB_14214d68c:
  (this->PrimaryAssetType).Name.ComparisonIndex.Value = FVar3.Value;
  (this->PrimaryAssetType).Name.Number = uVar11;
  (this->PrimaryAssetName).ComparisonIndex.Value = FVar12.Value;
  (this->PrimaryAssetName).Number = uVar13;
  if ((FName)local_38.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// ToString @ 142152d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FPrimaryAssetId::ToString(FPrimaryAssetId *this,FString *__return_storage_ptr__)

{
  void *pvVar1;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.End = (wchar_t *)local_18;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.Base = local_218;
  local_248 = 0;
  if (((this->PrimaryAssetType).Name != (FName)0x0) && (this->PrimaryAssetName != (FName)0x0)) {
    ::FName::AppendString((FName *)this,&local_238);
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L":",2);
    local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
    ::FName::AppendString(&this->PrimaryAssetName,&local_238);
  }
  ::FString::ConstructFromPtrSize
            (__return_storage_ptr__,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

