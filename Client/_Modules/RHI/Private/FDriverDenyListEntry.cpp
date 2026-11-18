// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FDriverDenyListEntry @ 145c44ff0

FDriverDenyListEntry * __thiscall
FDriverDenyListEntry::FDriverDenyListEntry(FDriverDenyListEntry *this,FDriverDenyListEntry *param_1)

{
  FDriverVersion *pFVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *_Src;
  long64 lVar7;
  undefined4 uVar8;
  
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*(int *)((longlong)&param_1->_padding_ + 4) != -1) {
    ::FString::FString((FString *)this,(FString *)param_1);
  }
  *(undefined1 *)&this->_padding_ = 0;
  cVar3 = (char)param_1->_padding_;
  *(char *)&this->_padding_ = cVar3;
  if (cVar3 != '\0') {
    this->_padding_ = param_1->_padding_;
    lVar6 = param_1->_padding_;
    this->_padding_ = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  (this->DriverVersion).bIsSet = false;
  bVar4 = (param_1->DriverVersion).bIsSet;
  (this->DriverVersion).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->DriverVersion).TypedValue.ComparisonOp = (param_1->DriverVersion).TypedValue.ComparisonOp
    ;
    (this->DriverVersion).TypedValue.Version.Values.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    iVar5 = (param_1->DriverVersion).TypedValue.Version.Values.ArrayNum;
    pFVar1 = &(this->DriverVersion).TypedValue.Version;
    piVar2 = &(this->DriverVersion).TypedValue.Version.Values.ArrayMax;
    _Src = (param_1->DriverVersion).TypedValue.Version.Values.AllocatorInstance.Data;
    (this->DriverVersion).TypedValue.Version.Values.ArrayNum = iVar5;
    if (iVar5 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,0,(ForAnyElementType *)pFVar1,iVar5,piVar2);
      memcpy((pFVar1->Values).AllocatorInstance.Data,_Src,(longlong)iVar5 << 2);
    }
  }
  (this->DriverDate).bIsSet = false;
  bVar4 = (param_1->DriverDate).bIsSet;
  (this->DriverDate).bIsSet = bVar4;
  if (bVar4 != false) {
    uVar8 = *(undefined4 *)&(param_1->DriverDate).TypedValue.field_0x4;
    lVar7 = (param_1->DriverDate).TypedValue.Date.Ticks;
    (this->DriverDate).TypedValue.ComparisonOp = (param_1->DriverDate).TypedValue.ComparisonOp;
    *(undefined4 *)&(this->DriverDate).TypedValue.field_0x4 = uVar8;
    (this->DriverDate).TypedValue.Date.Ticks = lVar7;
  }
  ::FString::FString(&this->DenylistReason,&param_1->DenylistReason);
  return this;
}

// AppliesToDriver @ 145c4fd80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FDriverDenyListEntry::AppliesToDriver
          (FDriverDenyListEntry *this,FGPUDriverInfo *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FString *pFVar6;
  FDriverVersion *this_00;
  ForAnyElementType local_res8;
  FDriverVersion local_68;
  FDriverVersion local_58;
  FString local_48;
  FString local_38;
  
  *param_2 = 0;
  if ((this->DriverVersion).bIsSet == (this->DriverDate).bIsSet) {
    return false;
  }
  bVar3 = FDriverConfigEntryConstraints::AreConstraintsSatisfied
                    ((FDriverConfigEntryConstraints *)this,param_1,param_2);
  if (!bVar3) {
    return false;
  }
  if ((this->DriverVersion).bIsSet == false) {
LAB_145c4fe8d:
    if ((this->DriverDate).bIsSet != false) {
      ParseMonthDayYearDate((FString *)&local_res8);
      if ((this->DriverDate).bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (((this->DriverDate).bIsSet == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      switch((this->DriverDate).TypedValue.ComparisonOp) {
      case ECO_Equal:
        return local_res8.Data ==
               (FScriptContainerElement *)(this->DriverDate).TypedValue.Date.Ticks;
      case ECO_NotEqual:
        return local_res8.Data !=
               (FScriptContainerElement *)(this->DriverDate).TypedValue.Date.Ticks;
      case ECO_Greater:
        return (this->DriverDate).TypedValue.Date.Ticks < (longlong)local_res8.Data;
      case ECO_GreaterOrEqual:
        return (this->DriverDate).TypedValue.Date.Ticks <= (longlong)local_res8.Data;
      case ECO_Less:
        return (longlong)local_res8.Data < (this->DriverDate).TypedValue.Date.Ticks;
      case ECO_LessOrEqual:
        return (longlong)local_res8.Data <= (this->DriverDate).TypedValue.Date.Ticks;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformDriver.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return false;
  }
  if (param_1->VendorId == 0x8086) {
    pFVar6 = FGPUDriverInfo::GetUnifiedDriverVersion(param_1,&local_48);
    local_58.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Values.ArrayNum = 0;
    local_58.Values.ArrayMax = 0;
    FDriverVersion::Parse(&local_58,pFVar6);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((local_58.Values.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar1 = *(uint *)local_58.Values.AllocatorInstance.Data;
    uVar5 = FDriverVersion::GetVersionValue(&(this->DriverVersion).TypedValue.Version,0);
    if (local_58.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Values.AllocatorInstance.Data);
    }
    if (99 < uVar1 != 99 < uVar5) goto LAB_145c4fe8d;
  }
  this_00 = &(this->DriverVersion).TypedValue.Version;
  pFVar6 = FGPUDriverInfo::GetUnifiedDriverVersion(param_1,&local_38);
  local_68.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Values.ArrayNum = 0;
  local_68.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_68,pFVar6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((this->DriverVersion).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (((this->DriverVersion).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  switch((this->DriverVersion).TypedValue.ComparisonOp) {
  case ECO_Equal:
    bVar3 = FDriverVersion::operator>(&local_68,this_00);
    if ((!bVar3) && (bVar3 = FDriverVersion::operator>(this_00,&local_68), !bVar3)) {
      bVar3 = true;
      goto LAB_145c500db;
    }
    break;
  case ECO_NotEqual:
    bVar3 = FDriverVersion::operator>(&local_68,this_00);
    if ((bVar3) || (bVar3 = FDriverVersion::operator>(this_00,&local_68), bVar3)) {
LAB_145c5001f:
      bVar3 = true;
      goto LAB_145c500db;
    }
    break;
  case ECO_Greater:
    bVar3 = FDriverVersion::operator>(&local_68,this_00);
    goto LAB_145c500db;
  case ECO_GreaterOrEqual:
    bVar3 = FDriverVersion::operator>(&local_68,this_00);
    if ((!bVar3) && (bVar3 = FDriverVersion::operator>(this_00,&local_68), !bVar3))
    goto LAB_145c5001f;
    bVar3 = FDriverVersion::operator>(&local_68,this_00);
    if (bVar3) {
      bVar3 = true;
      goto LAB_145c500db;
    }
    break;
  case ECO_Less:
    bVar3 = FDriverVersion::operator>(this_00,&local_68);
    goto LAB_145c500db;
  case ECO_LessOrEqual:
    bVar3 = FDriverVersion::operator>(&local_68,this_00);
    if ((!bVar3) && (bVar3 = FDriverVersion::operator>(this_00,&local_68), !bVar3))
    goto LAB_145c5001f;
    bVar3 = FDriverVersion::operator>(this_00,&local_68);
    if (bVar3) {
      bVar3 = true;
      goto LAB_145c500db;
    }
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformDriver.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = false;
LAB_145c500db:
  if (local_68.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Values.AllocatorInstance.Data);
  }
  return bVar3;
}

// AppliesToLatestDrivers @ 145c501f0

bool __thiscall FDriverDenyListEntry::AppliesToLatestDrivers(FDriverDenyListEntry *this)

{
  EComparisonOp EVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DriverVersion).bIsSet == false) {
    if ((this->DriverDate).bIsSet == false) {
      return false;
    }
    if ((this->DriverDate).TypedValue.ComparisonOp == ECO_Greater) {
      return true;
    }
    if (((this->DriverDate).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
    EVar1 = (this->DriverDate).TypedValue.ComparisonOp;
  }
  else {
    if ((this->DriverVersion).TypedValue.ComparisonOp == ECO_Greater) {
      return true;
    }
    if (((this->DriverVersion).bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
    EVar1 = (this->DriverVersion).TypedValue.ComparisonOp;
  }
  if (EVar1 == ECO_GreaterOrEqual) {
    return true;
  }
  return false;
}

