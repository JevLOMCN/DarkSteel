// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 11

// StaticStruct @ 14ad71bd0

UScriptStruct * __cdecl FMetasoundFrontendClassName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassName.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassName,(UObject *)pUVar1,
                         L"MetasoundFrontendClassName");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassName.OuterSingleton;
}

// FMetasoundFrontendClassName @ 14ad9a490

FMetasoundFrontendClassName * __thiscall
FMetasoundFrontendClassName::FMetasoundFrontendClassName
          (FMetasoundFrontendClassName *this,FName *param_1,FName *param_2,FName *param_3)

{
  this->Namespace = *param_1;
  this->Name = *param_2;
  this->Variant = *param_3;
  return this;
}

// FMetasoundFrontendClassName @ 14ad9a4b0

FMetasoundFrontendClassName * __thiscall
FMetasoundFrontendClassName::FMetasoundFrontendClassName
          (FMetasoundFrontendClassName *this,FName *param_1,FName *param_2)

{
  this->Namespace = *param_1;
  this->Name = *param_2;
  (this->Variant).ComparisonIndex = 0;
  (this->Variant).Number = 0;
  return this;
}

// FMetasoundFrontendClassName @ 14ad9a4d0

FMetasoundFrontendClassName * __thiscall
FMetasoundFrontendClassName::FMetasoundFrontendClassName
          (FMetasoundFrontendClassName *this,FNodeClassName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  
  pFVar1 = Metasound::FNodeClassName::GetVariant(param_1);
  pFVar2 = Metasound::FNodeClassName::GetName(param_1);
  pFVar3 = Metasound::FNodeClassName::GetNamespace(param_1);
  this->Namespace = *pFVar3;
  this->Name = *pFVar2;
  this->Variant = *pFVar1;
  return this;
}

// GetFullName @ 14adbef10

FName __thiscall FMetasoundFrontendClassName::GetFullName(FMetasoundFrontendClassName *this)

{
  FName in_RDX;
  
  Metasound::FNodeClassName::FormatFullName((FName *)in_RDX,&this->Namespace,&this->Name);
  return in_RDX;
}

// GetScopedName @ 14adc2c90

FName __thiscall FMetasoundFrontendClassName::GetScopedName(FMetasoundFrontendClassName *this)

{
  FName in_RDX;
  
  Metasound::FNodeClassName::FormatScopedName((FName *)in_RDX,&this->Namespace);
  return in_RDX;
}

// IsValid @ 14adc7eb0

bool __thiscall FMetasoundFrontendClassName::IsValid(FMetasoundFrontendClassName *this)

{
  if (((this->Namespace == InvalidClassName.Namespace) && (this->Name == InvalidClassName.Name)) &&
     (this->Variant == InvalidClassName.Variant)) {
    return false;
  }
  return true;
}

// Parse @ 14adc99c0

bool __cdecl
FMetasoundFrontendClassName::Parse(FString *param_1,FMetasoundFrontendClassName *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  (param_2->Namespace).ComparisonIndex = 0;
  (param_2->Namespace).Number = 0;
  (param_2->Name).ComparisonIndex = 0;
  (param_2->Name).Number = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_2->Variant).ComparisonIndex = 0;
  (param_2->Variant).Number = 0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_48,L".",true);
  if (local_48.ArrayNum < 2) {
    bVar2 = false;
    iVar5 = local_48.ArrayNum;
  }
  else {
    pwVar7 = L"";
    if (*(int *)(local_48.AllocatorInstance.Data + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)local_48.AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res10,pwVar6);
    param_2->Namespace = *pFVar4;
    if (local_48.ArrayNum < 2) {
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
    if (*(int *)(local_48.AllocatorInstance.Data + 0x18) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)(local_48.AllocatorInstance.Data + 0x10);
    }
    pFVar4 = ::FName::FName(&local_res18,pwVar6);
    param_2->Name = *pFVar4;
    iVar5 = local_48.ArrayNum;
    if (2 < local_48.ArrayNum) {
      if (*(int *)(local_48.AllocatorInstance.Data + 0x28) != 0) {
        pwVar7 = *(wchar_t **)(local_48.AllocatorInstance.Data + 0x20);
      }
      pFVar4 = ::FName::FName(&local_res20,pwVar7);
      param_2->Variant = *pFVar4;
      iVar5 = local_48.ArrayNum;
    }
    bVar2 = true;
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,iVar5);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar2;
}

// ToNodeClassName @ 14add1760

FNodeClassName * __thiscall
FMetasoundFrontendClassName::ToNodeClassName
          (FMetasoundFrontendClassName *this,FNodeClassName *__return_storage_ptr__)

{
  Metasound::FNodeClassName::FNodeClassName
            (__return_storage_ptr__,&this->Namespace,&this->Name,&this->Variant);
  return __return_storage_ptr__;
}

// ToString @ 14add1db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMetasoundFrontendClassName::ToString
          (FMetasoundFrontendClassName *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_878 [32];
  undefined1 local_858 [16];
  wchar_t *local_848;
  undefined2 local_840;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_878;
  local_858._0_8_ = local_838;
  local_840 = 0;
  local_858._8_8_ = local_838;
  local_848 = local_22;
  Metasound::FNodeClassName::FormatFullName
            ((FNameBuilder *)local_858,&this->Namespace,&this->Name,&this->Variant);
  if (local_848 < (wchar_t *)(local_858._8_8_ + 2)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_858,1);
  }
  *(wchar_t *)local_858._8_8_ = L'\0';
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_858._0_8_);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_858);
  return __return_storage_ptr__;
}

// ToString @ 14add1e70

void __thiscall
FMetasoundFrontendClassName::ToString(FMetasoundFrontendClassName *this,FNameBuilder *param_1)

{
  Metasound::FNodeClassName::FormatFullName(param_1,&this->Namespace,&this->Name,&this->Variant);
  return;
}

