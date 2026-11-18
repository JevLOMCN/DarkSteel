// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// StaticStruct @ 14ad7e780

UScriptStruct * __cdecl FMetaSoundAssetKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundAssetKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundAssetKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundAssetKey,(UObject *)pUVar1,
                         L"MetaSoundAssetKey");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundAssetKey.OuterSingleton;
}

// FMetaSoundAssetKey @ 14ad99c00

FMetaSoundAssetKey * __thiscall
FMetaSoundAssetKey::FMetaSoundAssetKey
          (FMetaSoundAssetKey *this,FMetasoundFrontendClassMetadata *param_1)

{
  EMetasoundFrontendClassType EVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FMetaSoundAssetKey *pFVar5;
  
  (this->Version).Major = 1;
  (this->Version).Minor = 0;
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  EVar1 = param_1->Type;
  if (EVar1 != Invalid) {
    if ((EVar1 != External) && (EVar1 != Graph)) {
      ::LexToString(EVar1);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidType(InMetadata.GetType())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                         ,0x14e,L"Invalid ClassType \'%s\' for Registry Key");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetaSoundAssetKey *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar3 = (param_1->ClassName).Name;
    (this->ClassName).Namespace = (param_1->ClassName).Namespace;
    (this->ClassName).Name = FVar3;
    (this->ClassName).Variant = (param_1->ClassName).Variant;
    this->Version = param_1->Version;
  }
  return this;
}

// FMetaSoundAssetKey @ 14ad99ca0

FMetaSoundAssetKey * __thiscall
FMetaSoundAssetKey::FMetaSoundAssetKey
          (FMetaSoundAssetKey *this,FMetasoundFrontendClassName *param_1,
          FMetasoundFrontendVersionNumber *param_2)

{
  FName FVar1;
  
  FVar1 = param_1->Name;
  (this->ClassName).Namespace = param_1->Namespace;
  (this->ClassName).Name = FVar1;
  (this->ClassName).Variant = param_1->Variant;
  this->Version = *param_2;
  return this;
}

// FMetaSoundAssetKey @ 14ad99cd0

FMetaSoundAssetKey * __thiscall
FMetaSoundAssetKey::FMetaSoundAssetKey(FMetaSoundAssetKey *this,FNodeClassRegistryKey *param_1)

{
  EMetasoundFrontendClassType EVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FMetaSoundAssetKey *pFVar5;
  
  (this->Version).Major = 1;
  (this->Version).Minor = 0;
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  EVar1 = param_1->Type;
  if (EVar1 != Invalid) {
    if ((EVar1 != External) && (EVar1 != Graph)) {
      ::LexToString(EVar1);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidType(RegKey.Type)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                         ,0x142,L"Invalid ClassType \'%s\' for Registry Key");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetaSoundAssetKey *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar3 = (param_1->ClassName).Name;
    (this->ClassName).Namespace = (param_1->ClassName).Namespace;
    (this->ClassName).Name = FVar3;
    (this->ClassName).Variant = (param_1->ClassName).Variant;
    this->Version = param_1->Version;
  }
  return this;
}

// GetInvalid @ 14adbfb90

FMetaSoundAssetKey * __cdecl FMetaSoundAssetKey::GetInvalid(void)

{
  return &::Invalid;
}

// IsValid @ 14adc7e70

bool __thiscall FMetaSoundAssetKey::IsValid(FMetaSoundAssetKey *this)

{
  if (((((this->ClassName).Namespace != FMetasoundFrontendClassName::InvalidClassName.Namespace) ||
       ((this->ClassName).Name != FMetasoundFrontendClassName::InvalidClassName.Name)) ||
      ((this->ClassName).Variant != FMetasoundFrontendClassName::InvalidClassName.Variant)) &&
     (((this->Version).Major != 0 || ((this->Version).Minor != 0)))) {
    return true;
  }
  return false;
}

// IsValidType @ 14adc7f50

bool __cdecl FMetaSoundAssetKey::IsValidType(EMetasoundFrontendClassType param_1)

{
  if ((param_1 != External) && (param_1 != Graph)) {
    return false;
  }
  return true;
}

// ToString @ 14add1b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMetaSoundAssetKey::ToString(FMetaSoundAssetKey *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  FString *pFVar3;
  void *pvVar4;
  ulong64 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_198 [32];
  FString local_178;
  FString local_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_158.Base = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  Metasound::FNodeClassName::FormatFullName
            ((FName *)&local_178,(FName *)this,&(this->ClassName).Name);
  pFVar3 = ::FName::ToString((FName *)&local_178,&local_168);
  iVar6 = (pFVar3->Data).ArrayNum;
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  iVar8 = 0;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = iVar8;
  }
  uVar5 = (ulong64)iVar7;
  if (local_158.End < local_158.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,pFVar1,uVar5 * 2);
    local_158.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.End < local_158.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  *local_158.CurPos = L'_';
  local_158.CurPos = local_158.CurPos + 1;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_178,(this->Version).Major);
  FVar2.Data = local_178.Data.AllocatorInstance.Data;
  iVar6 = local_178.Data.ArrayNum + -1;
  if (local_178.Data.ArrayNum == 0) {
    iVar6 = iVar8;
  }
  uVar5 = (ulong64)iVar6;
  if (local_158.End < local_158.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
  }
  if (iVar6 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,FVar2.Data,uVar5 * 2);
    local_158.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
  }
  if ((FName)local_178.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_158.End < local_158.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  *local_158.CurPos = L'.';
  local_158.CurPos = local_158.CurPos + 1;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_178,(this->Version).Minor);
  FVar2.Data = local_178.Data.AllocatorInstance.Data;
  iVar6 = local_178.Data.ArrayNum + -1;
  if (local_178.Data.ArrayNum == 0) {
    iVar6 = iVar8;
  }
  uVar5 = (ulong64)iVar6;
  if (local_158.End < local_158.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
  }
  if (iVar6 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,FVar2.Data,uVar5 * 2);
    local_158.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
  }
  if ((FName)local_178.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_158.End < local_158.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  *local_158.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_158.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

