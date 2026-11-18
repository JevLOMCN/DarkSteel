// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// StaticStruct @ 14ad755f0

UScriptStruct * __cdecl FMetasoundFrontendVersionNumber::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendVersionNumber.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendVersionNumber.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVersionNumber,(UObject *)pUVar1
                         ,L"MetasoundFrontendVersionNumber");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendVersionNumber.OuterSingleton;
}

// GetInvalid @ 14adbfbb0

FMetasoundFrontendVersionNumber * __cdecl FMetasoundFrontendVersionNumber::GetInvalid(void)

{
  return &::Invalid;
}

// IsValid @ 14adc7f20

bool __thiscall FMetasoundFrontendVersionNumber::IsValid(FMetasoundFrontendVersionNumber *this)

{
  if ((this->Major == 0) && (this->Minor == 0)) {
    return false;
  }
  return true;
}

// Parse @ 14adc9b00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FMetasoundFrontendVersionNumber::Parse(FString *param_1,FMetasoundFrontendVersionNumber *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *_Str_00;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  bVar2 = ::FString::StartsWith(param_1,L"v",1,IgnoreCase);
  if (!bVar2) {
    return false;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_18,L".",true);
  if (local_18.ArrayNum == 2) {
    ::FString::RemoveAt((FString *)local_18.AllocatorInstance.Data,0,1,Default);
    if (local_18.ArrayNum < 1) {
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
    _Str_00 = L"";
    if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)local_18.AllocatorInstance.Data;
    }
    iVar4 = _wtoi(_Str);
    param_2->Major = iVar4;
    if (local_18.ArrayNum < 2) {
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
    if (*(int *)(local_18.AllocatorInstance.Data + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x10);
    }
    iVar4 = _wtoi(_Str_00);
    bVar2 = true;
    param_2->Minor = iVar4;
  }
  else {
    bVar2 = false;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// ToInterfaceVersion @ 14add1740

FVersion __thiscall
FMetasoundFrontendVersionNumber::ToInterfaceVersion(FMetasoundFrontendVersionNumber *this)

{
  FVersion in_RDX;
  
  *(int *)in_RDX = this->Major;
  *(int *)((longlong)in_RDX + 4) = this->Minor;
  return in_RDX;
}

// ToString @ 14add1fb0

FString * __thiscall
FMetasoundFrontendVersionNumber::ToString
          (FMetasoundFrontendVersionNumber *this,FString *__return_storage_ptr__)

{
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  FStringFormatArg::FStringFormatArg(&local_48,this->Major);
  FStringFormatArg::FStringFormatArg(&local_28,this->Minor);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_58.AllocatorInstance,2,&local_58.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_58.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"v{0}.{1}",&local_58);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FStringFormatArg *)local_58.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

