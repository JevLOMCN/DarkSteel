// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 13

// FNodeClassRegistryKey @ 14ae5a470

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
          (FNodeClassRegistryKey *this,FMetaSoundAssetKey *param_1)

{
  FName FVar1;
  
  this->Type = External;
  FVar1 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->Version = param_1->Version;
  return this;
}

// FNodeClassRegistryKey @ 14ae5a4a0

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
          (FNodeClassRegistryKey *this,FMetasoundFrontendClassMetadata *param_1)

{
  code *pcVar1;
  FName FVar2;
  EMetasoundFrontendClassType EVar3;
  bool bVar4;
  FMetasoundFrontendVersionNumber *pFVar5;
  FNodeClassRegistryKey *pFVar6;
  
  EVar3 = FMetasoundFrontendClassMetadata::GetType(param_1);
  this->Type = EVar3;
  FVar2 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar2;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  pFVar5 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
  this->Version = *pFVar5;
  EVar3 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (EVar3 == Graph) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                       ,0xa9,
                       L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FNodeClassRegistryKey *)(*pcVar1)();
      return pFVar6;
    }
  }
  return this;
}

// FNodeClassRegistryKey @ 14ae5a520

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
          (FNodeClassRegistryKey *this,FMetasoundFrontendGraphClass *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FMetasoundFrontendVersionNumber *pFVar4;
  
  this->Type = External;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar2 = *(undefined4 *)&param_1->_padding_;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ClassName).Namespace.ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ClassName).Namespace.Number = uVar1;
  (this->ClassName).Name.ComparisonIndex = (FNameEntryId)uVar2;
  (this->ClassName).Name.Number = uVar3;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ClassName).Variant.ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ClassName).Variant.Number = uVar1;
  pFVar4 = FMetasoundFrontendClassMetadata::GetVersion
                     ((FMetasoundFrontendClassMetadata *)&param_1->_padding_);
  this->Version = *pFVar4;
  return this;
}

// FNodeClassRegistryKey @ 14ae5a560

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
          (FNodeClassRegistryKey *this,FNodeClassInfo *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FNodeClassRegistryKey *pFVar4;
  
  this->Type = param_1->Type;
  FVar2 = (param_1->ClassName).Name;
  (this->ClassName).Namespace = (param_1->ClassName).Namespace;
  (this->ClassName).Name = FVar2;
  (this->ClassName).Variant = (param_1->ClassName).Variant;
  this->Version = param_1->Version;
  if (param_1->Type == Graph) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                       ,0xb8,
                       L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNodeClassRegistryKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// FNodeClassRegistryKey @ 14ae5a5d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
          (FNodeClassRegistryKey *this,FNodeClassMetadata *param_1)

{
  int iVar1;
  
  this->Type = External;
  FMetasoundFrontendClassName::FMetasoundFrontendClassName(&this->ClassName,&param_1->ClassName);
  iVar1 = param_1->MinorVersion;
  (this->Version).Major = param_1->MajorVersion;
  (this->Version).Minor = iVar1;
  return this;
}

// FNodeClassRegistryKey @ 14ae5a620

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
          (FNodeClassRegistryKey *this,EMetasoundFrontendClassType param_1,
          FMetasoundFrontendClassName *param_2,FMetasoundFrontendVersionNumber *param_3)

{
  FName FVar1;
  
  this->Type = param_1;
  FVar1 = param_2->Name;
  (this->ClassName).Namespace = param_2->Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = param_2->Variant;
  this->Version = *param_3;
  return this;
}

// FNodeClassRegistryKey @ 14ae5a650

FNodeClassRegistryKey * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
          (FNodeClassRegistryKey *this,EMetasoundFrontendClassType param_1,
          FMetasoundFrontendClassName *param_2,int param_3,int param_4)

{
  FName FVar1;
  FMetasoundFrontendVersionNumber FVar2;
  
  this->Type = param_1;
  FVar1 = param_2->Name;
  FVar2.Minor = param_4;
  FVar2.Major = param_3;
  (this->ClassName).Namespace = param_2->Namespace;
  (this->ClassName).Name = FVar1;
  FVar1 = param_2->Variant;
  this->Version = FVar2;
  (this->ClassName).Variant = FVar1;
  return this;
}

// GetInvalid @ 14ae77250

FNodeClassRegistryKey * __cdecl Metasound::Frontend::FNodeClassRegistryKey::GetInvalid(void)

{
  return &InvalidKey;
}

// IsValid @ 14ae7aa90

bool __thiscall Metasound::Frontend::FNodeClassRegistryKey::IsValid(FNodeClassRegistryKey *this)

{
  bool bVar1;
  
  if (this->Type != Invalid) {
    bVar1 = FMetasoundFrontendClassName::IsValid(&this->ClassName);
    if (bVar1) {
      bVar1 = FMetasoundFrontendVersionNumber::IsValid(&this->Version);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// Parse @ 14ae7e380

bool __cdecl
Metasound::Frontend::FNodeClassRegistryKey::Parse(FString *param_1,FNodeClassRegistryKey *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  EMetasoundFrontendClassType local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FMetasoundFrontendClassName local_58;
  FString local_40;
  undefined4 local_30;
  FNameEntryId FStack_2c;
  uint uStack_28;
  FNameEntryId FStack_24;
  uint uStack_20;
  FNameEntryId FStack_1c;
  uint uStack_18;
  int iStack_14;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_88,L"_",true);
  if (local_88.ArrayNum == 3) {
    bVar2 = StringToClassType((FString *)local_88.AllocatorInstance.Data,local_res18);
    if (bVar2) {
      local_58.Namespace.ComparisonIndex.Value = 0;
      local_58.Namespace.Number = 0;
      local_58.Name.ComparisonIndex.Value = 0;
      local_58.Name.Number = 0;
      local_58.Variant.ComparisonIndex.Value = 0;
      local_58.Variant.Number = 0;
      if (local_88.ArrayNum < 2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      bVar2 = FMetasoundFrontendClassName::Parse
                        ((FString *)(local_88.AllocatorInstance.Data + 0x10),&local_58);
      if (bVar2) {
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        if (local_88.ArrayNum < 3) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        FVar5.Data = local_88.AllocatorInstance.Data;
        ::FString::FString(&local_40,L".");
        bVar2 = ::FString::Split((FString *)(FVar5.Data + 0x20),&local_40,&local_68,&local_78);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          FVar5.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar5.Data = local_68.Data.AllocatorInstance.Data;
          }
          iStack_14 = _wtoi((wchar_t *)FVar5.Data);
          FVar5.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar5.Data = local_78.Data.AllocatorInstance.Data;
          }
          iVar4 = _wtoi((wchar_t *)FVar5.Data);
          FStack_2c = local_58.Namespace.ComparisonIndex.Value;
          uStack_28 = local_58.Namespace.Number;
          FStack_24 = local_58.Name.ComparisonIndex.Value;
          uStack_20 = local_58.Name.Number;
          local_30 = CONCAT31(local_30._1_3_,local_res18[0]);
          FStack_1c = local_58.Variant.ComparisonIndex.Value;
          uStack_18 = local_58.Variant.Number;
          param_2->Type = local_res18[0];
          *(undefined3 *)&param_2->field_0x1 = local_30._1_3_;
          (param_2->ClassName).Namespace.ComparisonIndex = (FNameEntryId)FStack_2c.Value;
          *(ulonglong *)&(param_2->ClassName).Namespace.Number = CONCAT44(FStack_24.Value,uStack_28)
          ;
          *(ulonglong *)&(param_2->ClassName).Name.Number = CONCAT44(FStack_1c.Value,uStack_20);
          *(ulonglong *)&(param_2->ClassName).Variant.Number = CONCAT44(iStack_14,uStack_18);
          (param_2->Version).Minor = iVar4;
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          bVar2 = true;
          goto LAB_14ae7e573;
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  bVar2 = false;
LAB_14ae7e573:
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return bVar2;
}

// Reset @ 14ae888f0

void __thiscall Metasound::Frontend::FNodeClassRegistryKey::Reset(FNodeClassRegistryKey *this)

{
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  this->Type = Invalid;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  (this->Version).Major = 1;
  (this->Version).Minor = 0;
  return;
}

// ToString @ 14ae8b5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::ToString
          (FNodeClassRegistryKey *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  void *pvVar5;
  int iVar6;
  ulong64 uVar7;
  int iVar8;
  undefined1 auStack_288 [32];
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  iVar8 = (param_1->Data).ArrayNum;
  iVar6 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar6 = 0;
  }
  if (0x7f < iVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InScopeHeader.Len() < 128",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                       ,0xe3,L"Scope text is limited to 128 characters");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_258.Base = local_238;
  local_258.End = (wchar_t *)local_38;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  iVar6 = (param_1->Data).ArrayNum;
  iVar8 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_38 < local_238 + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar7);
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar1,uVar7 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
  }
  if (local_258.End < local_258.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,2);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,L" [",4);
  local_258.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
  pFVar4 = ToString(this,&local_268);
  iVar6 = (pFVar4->Data).ArrayNum;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  iVar8 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_258.End < local_258.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar7);
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar1,uVar7 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_258.End < local_258.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,2);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,L" ]",4);
  local_258.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
  if (local_258.End < (wchar_t *)((longlong)pvVar5 + 6U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_258.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return __return_storage_ptr__;
}

// ToString @ 14ae8b840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::Frontend::FNodeClassRegistryKey::ToString
          (FNodeClassRegistryKey *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  wchar_t *_Str;
  size_t sVar3;
  void *pvVar4;
  FString *pFVar5;
  ulong64 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_198 [32];
  FString local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  _Str = ::LexToString(this->Type);
  iVar7 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    iVar7 = (int)sVar3;
  }
  uVar6 = (ulong64)iVar7;
  if (local_168.End < local_168.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar6);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_168.CurPos,_Str,uVar6 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'_';
  local_168.CurPos = local_168.CurPos + 1;
  pFVar5 = FMetasoundFrontendClassName::ToString(&this->ClassName,&local_178);
  iVar7 = (pFVar5->Data).ArrayNum;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  uVar6 = (ulong64)iVar8;
  if (local_168.End < local_168.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar6);
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_168.CurPos,pFVar1,uVar6 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'_';
  local_168.CurPos = local_168.CurPos + 1;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_178,(this->Version).Major);
  FVar2.Data = local_178.Data.AllocatorInstance.Data;
  iVar7 = local_178.Data.ArrayNum + -1;
  if (local_178.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar6 = (ulong64)iVar7;
  if (local_168.End < local_168.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar6);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_168.CurPos,FVar2.Data,uVar6 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'.';
  local_168.CurPos = local_168.CurPos + 1;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_178,(this->Version).Minor);
  FVar2.Data = local_178.Data.AllocatorInstance.Data;
  iVar7 = local_178.Data.ArrayNum + -1;
  if (local_178.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar6 = (ulong64)iVar7;
  if (local_168.End < local_168.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar6);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_168.CurPos,FVar2.Data,uVar6 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_168.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return __return_storage_ptr__;
}

