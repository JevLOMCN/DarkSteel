// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FTaskPriorityCVar @ 141a71c90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskPriorityCVar * __thiscall
UE::Tasks::FTaskPriorityCVar::FTaskPriorityCVar
          (FTaskPriorityCVar *this,wchar_t *param_1,wchar_t *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FTaskPriorityCVar *pFVar7;
  wchar_t *pwVar8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FString local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  wchar_t *local_68 [4];
  wchar_t *local_48;
  FString local_40;
  
  pwVar3 = Tasks::ToString(param_4);
  if (param_3 < Count) {
    local_68[0] = L"High";
    local_68[1] = L"Normal";
    local_68[2] = L"BackgroundHigh";
    local_68[3] = L"BackgroundNormal";
    local_48 = L"BackgroundLow";
    pwVar8 = local_68[(char)param_3];
  }
  else {
    pwVar8 = (wchar_t *)0x0;
  }
  pFVar4 = ::FString::FString(&local_40,pwVar8);
  ::FString::ConcatFC(&local_b0,pFVar4,L" ");
  ::FString::ConcatFC(&this->RawSetting,&local_b0,pwVar3);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  CreateFullHelpText(&this->FullHelpText,param_1,param_2);
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_88);
  local_70 = &local_c0;
  puVar5 = Core::Private::DelegateAllocate(0x28,&local_c0);
  pwVar3 = L"";
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTaskPriorityCVar_Tasks_UE____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = OnSettingChanged;
    puVar5[3] = this;
    if (this == (FTaskPriorityCVar *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FTaskPriorityCVar *)(*pcVar1)();
        return pFVar7;
      }
    }
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if ((this->FullHelpText).Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)(this->FullHelpText).Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->Variable,param_1,&this->RawSetting,pwVar3,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_c8,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_a0);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  this->Priority = param_3;
  this->ExtendedPriority = param_4;
  return this;
}

// ConfigStringFromPriorities @ 141a7c960

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FString * __cdecl
UE::Tasks::FTaskPriorityCVar::ConfigStringFromPriorities
          (FString *__return_storage_ptr__,ETaskPriority param_1,EExtendedTaskPriority param_2)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FString local_58;
  FString local_48;
  wchar_t *local_38 [4];
  wchar_t *local_18;
  
  pwVar1 = Tasks::ToString(param_2);
  if (param_1 < Count) {
    local_38[0] = L"High";
    local_38[1] = L"Normal";
    local_38[2] = L"BackgroundHigh";
    local_38[3] = L"BackgroundNormal";
    local_18 = L"BackgroundLow";
    pwVar3 = local_38[(char)param_1];
  }
  else {
    pwVar3 = (wchar_t *)0x0;
  }
  pFVar2 = ::FString::FString(&local_48,pwVar3);
  ::FString::ConcatFC(&local_58,pFVar2,L" ");
  ::FString::ConcatFC(__return_storage_ptr__,&local_58,pwVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateFullHelpText @ 141a7cc80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Tasks::FTaskPriorityCVar::CreateFullHelpText
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_10f8 [32];
  wchar_t *local_10d8;
  wchar_t *local_10d0;
  wchar_t *local_10c8;
  undefined *local_10c0;
  wchar_t *local_10b8;
  FString *local_10a8;
  wchar_t *local_10a0;
  wchar_t *local_1098;
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[1] = 0x141a7cca2;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_10f8;
  local_1088.Base = local_1068;
  local_1088.CurPos = local_1068;
  local_1088.End = (wchar_t *)&local_868;
  local_1088.bIsDynamic = false;
  local_1088.bIsExternal = false;
  local_10a8 = __return_storage_ptr__;
  local_10a0 = param_1;
  local_1098 = param_2;
  pvVar3 = FGenericPlatformString::Memcpy(local_1068,L"High",8);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 8);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0xc)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L", ",4);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x10)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,6);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L"Normal",0xc);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 0xc);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x10)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L", ",4);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x20)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,0xe);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L"BackgroundHigh",0x1c);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 0x1c);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x20)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L", ",4);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x24)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,0x10);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L"BackgroundNormal",0x20);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 0x20);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x24)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L", ",4);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x1e)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,0xd);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L"BackgroundLow",0x1a);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 0x1a);
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar3 + 0x1e)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_1088.CurPos,L", ",4);
  local_1088.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  if (((int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1) < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0xe8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  local_1088.CurPos = local_1088.CurPos + -2;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  iVar10 = 0;
  do {
    pwVar8 = local_868.CurPos;
    pwVar5 = Tasks::ToString((EExtendedTaskPriority)iVar10);
    iVar9 = 0;
    if (pwVar5 != (wchar_t *)0x0) {
      sVar6 = wcslen(pwVar5);
      iVar9 = (int)sVar6;
    }
    uVar7 = (ulong64)iVar9;
    if (local_868.End < pwVar8 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar7);
      pwVar8 = local_868.CurPos;
    }
    if (iVar9 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(pwVar8,pwVar5,uVar7 * 2);
      pwVar8 = (wchar_t *)((longlong)pvVar3 + uVar7 * 2);
      local_868.CurPos = pwVar8;
    }
    if (local_868.End < pwVar8 + 2) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,2);
      pwVar8 = local_868.CurPos;
    }
    pvVar3 = FGenericPlatformString::Memcpy(pwVar8,L", ",4);
    pFVar4 = local_10a8;
    iVar10 = iVar10 + 1;
    local_868.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  } while (iVar10 != 0xf);
  if (((int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1) < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0xe8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  pwVar5 = local_868.CurPos + -2;
  pwVar8 = local_868.CurPos + -1;
  local_868.CurPos = pwVar5;
  if (local_868.End < pwVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  pwVar8 = local_868.Base;
  *local_868.CurPos = L'\0';
  if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1088,1);
  }
  *local_1088.CurPos = L'\0';
  local_10b8 = L"High";
  local_10c0 = &u_None;
  local_10c8 = L"High";
  local_10d0 = local_10a0;
  local_10d8 = pwVar8;
  ::FString::PrintfImpl
            (pFVar4,
             L"%s\nArguments are task priority and extended task priority (optional) separated by a space: [TaskPriority] [ExtendedTaskPriority]\nwhere TaskPriority is in [%s]\nand ExtendedTaskPriority is in [%s].\nExample: \"%s %s %s\" or \"%s\""
            );
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
  return pFVar4;
}

// OnSettingChanged @ 141a8c850

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::FTaskPriorityCVar::OnSettingChanged(FTaskPriorityCVar *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&Delimiter," ");
      atexit(`UE::Tasks::FTaskPriorityCVar::OnSettingChanged'::__l2::
             _dynamic_atexit_destructor_for__Delimiter__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar2 = ::FString::Split(&this->RawSetting,&Delimiter,&local_18,&local_28);
  if (bVar2) {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar2 = LowLevelTasks::ToTaskPriority((wchar_t *)FVar3.Data,&this->Priority);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToTaskPriority(*PriorityStr, Priority)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                         ,0x1b6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    bVar2 = ToExtendedTaskPriority((wchar_t *)FVar3.Data,&this->ExtendedPriority);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToExtendedTaskPriority(*ExtendedPriorityStr, ExtendedPriority)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                         ,0x1b7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    if ((this->RawSetting).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(this->RawSetting).Data.AllocatorInstance.Data;
    }
    bVar2 = LowLevelTasks::ToTaskPriority(pwVar4,&this->Priority);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToTaskPriority(*RawSetting, Priority)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                         ,0x1bb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->ExtendedPriority = None;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

