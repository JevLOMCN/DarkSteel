// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 4

// StaticStruct @ 14d3781a0

UScriptStruct * __cdecl FPropertyBindingBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingBinding,(UObject *)pUVar1,
                         L"PropertyBindingBinding");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingBinding.OuterSingleton;
}

// GetSourceDataHandleStruct @ 14d3781e0

FConstStructView * __thiscall
FPropertyBindingBinding::GetSourceDataHandleStruct
          (FPropertyBindingBinding *this,FConstStructView *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBinding.h"
             ,0x65,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)0x0;
  __return_storage_ptr__->StructMemory = (uchar *)0x0;
  return __return_storage_ptr__;
}

// ~FPropertyBindingBinding @ 14d37cef0

void __thiscall FPropertyBindingBinding::~FPropertyBindingBinding(FPropertyBindingBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TargetPropertyPath).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourcePropertyPath).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ToString @ 14d3840c0

FString * __thiscall
FPropertyBindingBinding::ToString(FPropertyBindingBinding *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  void *pvVar7;
  ulong64 uVar8;
  FName *pFVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  int iVar13;
  int iVar14;
  FName local_res8;
  FString *local_res10;
  FName local_res18;
  FString local_b8;
  FString local_a8;
  TStringBuilderBase<wchar_t> local_98;
  TStringBuilderBase<wchar_t> local_78;
  TStringBuilderBase<wchar_t> local_58;
  
  iVar13 = (this->SourcePropertyPath).Segments.ArrayNum;
  iVar14 = 0;
  pFVar1 = (this->SourcePropertyPath).Segments.AllocatorInstance.Data;
  local_58.End = (wchar_t *)0x0;
  local_58.bIsDynamic = false;
  local_58.bIsExternal = false;
  local_98.End = (wchar_t *)0x0;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_58.Base = (wchar_t *)0x0;
  local_58.CurPos = (wchar_t *)0x0;
  local_98.Base = (wchar_t *)0x0;
  local_98.CurPos = (wchar_t *)0x0;
  local_res10 = __return_storage_ptr__;
  if ((iVar13 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = 0;
  if (iVar13 < 0) {
    iVar5 = iVar13;
  }
  pFVar9 = (FName *)(pFVar1 + (longlong)iVar5 * 0x20);
  iVar10 = 0;
  iVar11 = iVar10;
  if (0 < iVar13 - iVar5) {
    iVar11 = iVar13 - iVar5;
  }
  if ((iVar11 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  pFVar12 = pFVar9 + (longlong)iVar11 * 4;
  iVar13 = iVar14;
  for (; pFVar9 != pFVar12; pFVar9 = pFVar9 + 4) {
    if (0 < iVar13) {
      if (local_98.End < local_98.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_98,1);
      }
      *local_98.CurPos = L'.';
      local_98.CurPos = local_98.CurPos + 1;
    }
    local_res8 = *pFVar9;
    ::FName::AppendString(&local_res8,&local_98);
    if (-1 < (int)pFVar9[1].ComparisonIndex.Value) {
      if (local_98.End < local_98.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_98,1);
      }
      *local_98.CurPos = L'[';
      local_98.CurPos = local_98.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_98,L"%d");
      if (local_98.End < local_98.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_98,1);
      }
      *local_98.CurPos = L']';
      local_98.CurPos = local_98.CurPos + 1;
    }
    iVar13 = iVar13 + 1;
    __return_storage_ptr__ = local_res10;
  }
  if (local_98.End < local_98.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_98,1);
  }
  *local_98.CurPos = L'\0';
  ::FString::FString(&local_b8,local_98.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  FVar3.Data = local_b8.Data.AllocatorInstance.Data;
  iVar13 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar13 = iVar10;
  }
  uVar8 = (ulong64)iVar13;
  if (local_58.End < local_58.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,uVar8);
  }
  if (iVar13 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar3.Data,uVar8 * 2);
    local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar8 * 2);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_58.End < local_58.CurPos + 5) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,5);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,L" --> ",10);
  iVar13 = (this->TargetPropertyPath).Segments.ArrayNum;
  local_58.CurPos = (wchar_t *)((longlong)pvVar7 + 10);
  pFVar1 = (this->TargetPropertyPath).Segments.AllocatorInstance.Data;
  local_78.End = (wchar_t *)0x0;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  local_78.Base = (wchar_t *)0x0;
  local_78.CurPos = (wchar_t *)0x0;
  if ((iVar13 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = iVar10;
  if (iVar13 < 0) {
    iVar5 = iVar13;
  }
  pFVar9 = (FName *)(pFVar1 + (longlong)iVar5 * 0x20);
  if (0 < iVar13 - iVar5) {
    iVar10 = iVar13 - iVar5;
  }
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  pFVar12 = pFVar9 + (longlong)iVar10 * 4;
  for (; pFVar9 != pFVar12; pFVar9 = pFVar9 + 4) {
    if (0 < iVar14) {
      if (local_78.End < local_78.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_78,1);
      }
      *local_78.CurPos = L'.';
      local_78.CurPos = local_78.CurPos + 1;
    }
    local_res18 = *pFVar9;
    ::FName::AppendString(&local_res18,&local_78);
    if (-1 < (int)pFVar9[1].ComparisonIndex.Value) {
      if (local_78.End < local_78.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_78,1);
      }
      *local_78.CurPos = L'[';
      local_78.CurPos = local_78.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%d");
      if (local_78.End < local_78.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_78,1);
      }
      *local_78.CurPos = L']';
      local_78.CurPos = local_78.CurPos + 1;
    }
    iVar14 = iVar14 + 1;
    __return_storage_ptr__ = local_res10;
  }
  if (local_78.End < local_78.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = L'\0';
  ::FString::FString(&local_a8,local_78.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  FVar3.Data = local_a8.Data.AllocatorInstance.Data;
  iVar13 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  uVar8 = (ulong64)iVar13;
  if (local_58.End < local_58.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,uVar8);
  }
  if (iVar13 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar3.Data,uVar8 * 2);
    local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar8 * 2);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_58.End < local_58.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,1);
  }
  *local_58.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_58.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  return __return_storage_ptr__;
}

