// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FDriverDenyListEntry @ 141be23d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDriverDenyListEntry * __thiscall
FDriverDenyListEntry::FDriverDenyListEntry(FDriverDenyListEntry *this,wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  FDateTime FVar4;
  FDriverDenyListEntry *pFVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  long64 lStack_70;
  FString local_68;
  undefined8 local_58 [2];
  EComparisonOp local_48 [2];
  FDriverVersion local_40;
  
  FDriverConfigEntryConstraints::FDriverConfigEntryConstraints
            ((FDriverConfigEntryConstraints *)this,param_1);
  (this->DriverVersion).bIsSet = false;
  (this->DenylistReason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DenylistReason).Data.ArrayNum = 0;
  (this->DenylistReason).Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  (this->DriverDate).bIsSet = false;
  FParse::Value(param_1,L"DriverVersion=",&local_98,true,(wchar_t **)0x0);
  uVar8 = 1;
  if (local_98.Data.ArrayNum < 2) goto LAB_141be256b;
  local_40.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Values.ArrayNum = 0;
  local_40.Values.ArrayMax = 0;
  wVar1 = *(wchar_t *)local_98.Data.AllocatorInstance.Data;
  pFVar6 = local_98.Data.AllocatorInstance.Data + 2;
  if ((wVar1 == L'=') && (*(wchar_t *)pFVar6 == L'=')) {
    FVar7.Data = local_98.Data.AllocatorInstance.Data + 4;
LAB_141be246d:
    pFVar6 = FVar7.Data;
    local_48[0] = ECO_Equal;
  }
  else {
    FVar7.Data = local_98.Data.AllocatorInstance.Data;
    if (wVar1 == L'!') {
      if (*(wchar_t *)(local_98.Data.AllocatorInstance.Data + 2) != L'=') goto LAB_141be246d;
      pFVar6 = local_98.Data.AllocatorInstance.Data + 4;
      local_48[0] = ECO_NotEqual;
    }
    else if (wVar1 == L'>') {
      if (*(wchar_t *)pFVar6 == L'=') {
        pFVar6 = local_98.Data.AllocatorInstance.Data + 4;
        local_48[0] = ECO_GreaterOrEqual;
      }
      else {
        local_48[0] = ECO_Greater;
      }
    }
    else {
      if (wVar1 != L'<') goto LAB_141be246d;
      if (*(wchar_t *)pFVar6 == L'=') {
        pFVar6 = local_98.Data.AllocatorInstance.Data + 4;
        local_48[0] = ECO_LessOrEqual;
      }
      else {
        local_48[0] = ECO_Less;
      }
    }
  }
  ::FString::FString(&local_88,(wchar_t *)pFVar6);
  FDriverVersion::Parse(&local_40,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((TOptional<FDriverDenyListEntry::FDriverVersionDenyListEntry> *)local_48 !=
      &this->DriverVersion) {
    if (((this->DriverVersion).bIsSet != false) &&
       (pFVar6 = (this->DriverVersion).TypedValue.Version.Values.AllocatorInstance.Data,
       pFVar6 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar6);
    }
    (this->DriverVersion).TypedValue.ComparisonOp = local_48[0];
    (this->DriverVersion).TypedValue.Version.Values.AllocatorInstance.Data =
         local_40.Values.AllocatorInstance.Data;
    (this->DriverVersion).TypedValue.Version.Values.ArrayNum = local_40.Values.ArrayNum;
    (this->DriverVersion).TypedValue.Version.Values.ArrayMax = local_40.Values.ArrayMax;
    (this->DriverVersion).bIsSet = true;
    local_40.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Values.ArrayNum = 0;
    local_40.Values.ArrayMax = 0;
  }
  if (local_40.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Values.AllocatorInstance.Data);
  }
LAB_141be256b:
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  FParse::Value(param_1,L"DriverDate=",&local_a8,true,(wchar_t **)0x0);
  if (1 < local_a8.Data.ArrayNum) {
    wVar1 = *(wchar_t *)local_a8.Data.AllocatorInstance.Data;
    pFVar6 = local_a8.Data.AllocatorInstance.Data + 2;
    if ((wVar1 == L'=') && (*(wchar_t *)pFVar6 == L'=')) {
      FVar7.Data = local_a8.Data.AllocatorInstance.Data + 4;
    }
    else {
      FVar7.Data = local_a8.Data.AllocatorInstance.Data;
      if (wVar1 == L'!') {
        if (*(wchar_t *)(local_a8.Data.AllocatorInstance.Data + 2) == L'=') {
          uVar8 = 2;
          FVar7.Data = local_a8.Data.AllocatorInstance.Data + 4;
        }
      }
      else if (wVar1 == L'>') {
        if (*(wchar_t *)pFVar6 == L'=') {
          uVar8 = 4;
          FVar7.Data = local_a8.Data.AllocatorInstance.Data + 4;
        }
        else {
          uVar8 = 3;
          FVar7.Data = pFVar6;
        }
      }
      else if (wVar1 == L'<') {
        if (*(wchar_t *)pFVar6 == L'=') {
          uVar8 = 6;
          FVar7.Data = local_a8.Data.AllocatorInstance.Data + 4;
        }
        else {
          uVar8 = 5;
          FVar7.Data = pFVar6;
        }
      }
    }
    local_78 = uVar8;
    ::FString::FString(&local_68,(wchar_t *)FVar7.Data);
    FVar4 = ParseMonthDayYearDate((FString *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    lStack_70 = *FVar4.Ticks;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((TOptional<FDriverDenyListEntry::FDriverDateDenyListEntry> *)local_58 != &this->DriverDate)
    {
      *(ulonglong *)&(this->DriverDate).TypedValue = CONCAT44(uStack_74,local_78);
      (this->DriverDate).TypedValue.Date.Ticks = lStack_70;
      (this->DriverDate).bIsSet = true;
    }
  }
  if ((this->DriverVersion).bIsSet == (this->DriverDate).bIsSet) {
    local_res8[0] = 0;
    `FDriverDenyListEntry::FDriverDenyListEntry'::__l2::<lambda_1>::operator()(local_res8);
  }
  FParse::Value(param_1,L"Reason=",&this->DenylistReason,true,(wchar_t **)0x0);
  if (((this->DenylistReason).Data.ArrayNum < 2) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2583593239961403001>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformDriver.h"
                         ,0x187,"!DenylistReason.IsEmpty()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDriverDenyListEntry *)(*pcVar2)();
    return pFVar5;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 1504804a0

bool __thiscall
`FDriverDenyListEntry::FDriverDenyListEntry'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2583593239961403004>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2583593239961403004>,
                       &`public:___cdecl_`public:___cdecl_FDriverDenyListEntry::FDriverDenyListEntry(wchar_t_const*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

