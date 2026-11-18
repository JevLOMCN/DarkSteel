// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// SendToLogging @ 14d5629c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraBuildLogMessage::SendToLogging(FCameraBuildLogMessage *this,FString *param_1)

{
  Type TVar1;
  FString local_18;
  
  TVar1 = this->Severity;
  if (TVar1 == Error) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    ToString(this,&local_18);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
  }
  else if ((TVar1 == PerformanceWarning) || (TVar1 == Warning)) {
    if ((byte)LogCameraSystem._0_1_ < 3) {
      return;
    }
    ToString(this,&local_18);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
  }
  else {
    if ((byte)LogCameraSystem._0_1_ < 5) {
      return;
    }
    ToString(this,&local_18);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ToString @ 14d568860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Cameras::FCameraBuildLogMessage::ToString
          (FCameraBuildLogMessage *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  void *pvVar5;
  FString *pFVar6;
  ulong64 uVar7;
  int iVar8;
  undefined1 auStack_298 [32];
  FString local_278;
  FName local_268 [2];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pUVar2 = this->Object;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  if (pUVar2 != (UObject *)0x0) {
    local_268[0].ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
    local_268[0].Number = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString(local_268,&local_278);
    FVar4.Data = local_278.Data.AllocatorInstance.Data;
    iVar8 = local_278.Data.ArrayNum + -1;
    if (local_278.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar7 = (ulong64)iVar8;
    if (local_258.End < local_258.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar7);
    }
    if (iVar8 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,FVar4.Data,uVar7 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_258.End < local_258.CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,2);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,&u___,4);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
  }
  pFVar6 = FText::ToString(&this->Text);
  iVar1 = (pFVar6->Data).ArrayNum;
  pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_258.End < local_258.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar7);
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar3,uVar7 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_258.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return __return_storage_ptr__;
}

