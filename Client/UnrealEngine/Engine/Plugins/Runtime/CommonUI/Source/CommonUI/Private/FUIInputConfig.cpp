// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 5

// StaticStruct @ 14a7814a0

UScriptStruct * __cdecl FUIInputConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIInputConfig.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FUIInputConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIInputConfig,(UObject *)pUVar1,L"UIInputConfig"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FUIInputConfig.OuterSingleton;
}

// FUIInputConfig @ 14a7aafe0

FUIInputConfig * __thiscall
FUIInputConfig::FUIInputConfig
          (FUIInputConfig *this,ECommonInputMode param_1,EMouseCaptureMode param_2,
          EMouseLockMode param_3,bool param_4)

{
  this->bHideCursorDuringViewportCapture = param_4;
  this->bIgnoreMoveInput = false;
  this->bIgnoreLookInput = false;
  this->InputMode = param_1;
  this->MouseCaptureMode = param_2;
  this->MouseLockMode = param_3;
  return this;
}

// FUIInputConfig @ 14a7ab010

FUIInputConfig * __thiscall
FUIInputConfig::FUIInputConfig
          (FUIInputConfig *this,ECommonInputMode param_1,EMouseCaptureMode param_2,bool param_3)

{
  this->InputMode = param_1;
  this->bIgnoreMoveInput = false;
  this->bIgnoreLookInput = false;
  this->MouseCaptureMode = param_2;
  this->bHideCursorDuringViewportCapture = param_3;
  if ((param_2 != CapturePermanently) && (param_2 != CapturePermanently_IncludingInitialMouseDown))
  {
    this->MouseLockMode = DoNotLock;
    return this;
  }
  this->MouseLockMode = LockOnCapture;
  return this;
}

// FUIInputConfig @ 14a7ab050

FUIInputConfig * __thiscall FUIInputConfig::FUIInputConfig(FUIInputConfig *this)

{
  this->bIgnoreMoveInput = false;
  this->bIgnoreLookInput = false;
  this->InputMode = Menu;
  this->MouseCaptureMode = NoCapture;
  this->MouseLockMode = DoNotLock;
  this->bHideCursorDuringViewportCapture = true;
  return this;
}

// ToString @ 14a823240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall FUIInputConfig::ToString(FUIInputConfig *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UEnum *pUVar3;
  FString *pFVar4;
  undefined1 auStack_8a8 [32];
  FName local_888;
  FName local_880;
  FString local_878;
  FString local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = (wchar_t *)local_38;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"bIgnoreMoveInput: %u\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"bIgnoreLookInput: %u\n");
  pUVar3 = StaticEnum<enum_ECommonInputMode>();
  if ((pUVar3 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  UEnum::GetNameByValue(pUVar3,(long64)&local_888);
  ::FName::ToString(&local_888,&local_878);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"InputMode: %s\n");
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  pUVar3 = StaticEnum<enum_EMouseCaptureMode>();
  if ((pUVar3 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  UEnum::GetNameByValue(pUVar3,(long64)&local_880);
  ::FName::ToString(&local_880,&local_868);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"MouseCaptureMode: %s\n");
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"bHideCursorDuringViewportCapture: %u\n");
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_858.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}

