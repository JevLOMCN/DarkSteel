// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// GatherLeafInputs @ 14e6ef850

void __cdecl
UE::Interchange::Materials::HashUtils::FInterchangeMaterialInstanceOverridesAPI::GatherLeafInputs
          (UInterchangeBaseNode *param_1,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  ForAnyElementType this;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  UInterchangeBaseNode::GetAttributeKeys(param_1,&local_38);
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar5 = local_38.ArrayNum;
  pFVar9 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  this.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    pwVar4 = OverrideParameterPrefix;
    if (this.Data == pFVar9) break;
    iVar7 = 0;
    if (OverrideParameterPrefix != (wchar_t *)0x0) {
      sVar8 = wcslen(OverrideParameterPrefix);
      iVar7 = (int)sVar8;
    }
    bVar6 = ::FString::StartsWith((FString *)this.Data,pwVar4,iVar7,IgnoreCase);
    if (bVar6) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= this.Data) && (this.Data < pFVar2 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar7 + 1;
      ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),
                         (FString *)this.Data);
    }
    this.Data = this.Data + 0x10;
  }
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetOverrideParameterName @ 14e6f0c10

bool __cdecl
UE::Interchange::Materials::HashUtils::FInterchangeMaterialInstanceOverridesAPI::
GetOverrideParameterName(FAttributeKey *param_1,FString *param_2)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::FString(&local_18,OverrideParameterSeparator);
  bVar1 = ::FString::Split(&param_1->Key,&local_18,&local_28,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// HasMaterialExpressionNameOverride @ 14e6f2680

bool __cdecl
UE::Interchange::Materials::HashUtils::FInterchangeMaterialInstanceOverridesAPI::
HasMaterialExpressionNameOverride(UInterchangeBaseNode *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FString local_28;
  FScriptContainerElement *local_18;
  int local_10;
  int local_c;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x2c0);
  ::FString::FString(&local_28,ExpressionNameAttributeKey);
  local_18 = local_28.Data.AllocatorInstance.Data;
  local_10 = local_28.Data.ArrayNum;
  local_c = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar2 = (*pcVar1)(param_1,&local_18);
  if (local_18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// MakeExpressionNameString @ 14e6f50f0

FString * __cdecl
UE::Interchange::Materials::HashUtils::FInterchangeMaterialInstanceOverridesAPI::
MakeExpressionNameString(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,ExpressionNameAttributeKey);
  return __return_storage_ptr__;
}

// MakeOverrideParameterName @ 14e6f6fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Interchange::Materials::HashUtils::FInterchangeMaterialInstanceOverridesAPI::
MakeOverrideParameterName(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  void *pvVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_178 [32];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  pwVar3 = OverrideParameterPrefix;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.Base = local_138;
  iVar8 = 0;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.End = (wchar_t *)local_38;
  local_158.CurPos = local_138;
  if (OverrideParameterPrefix != (wchar_t *)0x0) {
    sVar4 = wcslen(OverrideParameterPrefix);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  pwVar7 = local_138;
  if (local_38 < local_138 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = OverrideParameterSeparator;
  iVar8 = 0;
  if (OverrideParameterSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(OverrideParameterSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pFVar2,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  if (local_158.End < pwVar7 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
    pwVar7 = local_158.CurPos;
  }
  *pwVar7 = L'\0';
  ::FString::FString(__return_storage_ptr__,local_158.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

// MakeOverrideParameterName @ 14e6f7180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Interchange::Materials::HashUtils::FInterchangeMaterialInstanceOverridesAPI::
MakeOverrideParameterName
          (FString *__return_storage_ptr__,EAttributeTypes param_1,int param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  size_t sVar5;
  void *pvVar6;
  FString *pFVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined1 auStack_198 [32];
  FString local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  pwVar3 = OverrideParameterPrefix;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.Base = local_148;
  local_168.End = (wchar_t *)local_48;
  local_168.CurPos = local_148;
  if (param_3) {
    iVar10 = 0;
    if (OverrideParameterPrefix != (wchar_t *)0x0) {
      sVar5 = wcslen(OverrideParameterPrefix);
      iVar10 = (int)sVar5;
    }
    uVar8 = (ulong64)iVar10;
    pwVar9 = local_148;
    if (local_48 < local_148 + uVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar8);
      pwVar9 = local_168.CurPos;
    }
    if (iVar10 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pwVar9,pwVar3,uVar8 * 2);
      pwVar9 = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
      local_168.CurPos = pwVar9;
    }
    pwVar3 = OverrideParameterSeparator;
    iVar10 = 0;
    if (OverrideParameterSeparator != (wchar_t *)0x0) {
      sVar5 = wcslen(OverrideParameterSeparator);
      iVar10 = (int)sVar5;
    }
    uVar8 = (ulong64)iVar10;
    if (local_168.End < pwVar9 + uVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar8);
      pwVar9 = local_168.CurPos;
    }
    if (iVar10 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pwVar9,pwVar3,uVar8 * 2);
      local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
    }
  }
  pFVar7 = AttributeTypeToString(&local_178,param_1);
  iVar1 = (pFVar7->Data).ArrayNum;
  pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  uVar8 = (ulong64)iVar10;
  if (local_168.End < local_168.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar8);
  }
  if (iVar10 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_168.CurPos,pFVar2,uVar8 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pwVar9 = local_168.CurPos;
  pwVar3 = OverrideHashSeparator;
  iVar10 = 0;
  if (OverrideHashSeparator != (wchar_t *)0x0) {
    sVar5 = wcslen(OverrideHashSeparator);
    iVar10 = (int)sVar5;
  }
  uVar8 = (ulong64)iVar10;
  if (local_168.End < pwVar9 + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar8);
    pwVar9 = local_168.CurPos;
  }
  if (iVar10 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pwVar9,pwVar3,uVar8 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_178,param_2);
  FVar4.Data = local_178.Data.AllocatorInstance.Data;
  iVar10 = local_178.Data.ArrayNum + -1;
  if (local_178.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  uVar8 = (ulong64)iVar10;
  if (local_168.End < local_168.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar8);
  }
  if (iVar10 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_168.CurPos,FVar4.Data,uVar8 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
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

