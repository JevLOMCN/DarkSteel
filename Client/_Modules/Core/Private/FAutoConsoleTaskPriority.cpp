// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FAutoConsoleTaskPriority @ 14147c920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FAutoConsoleTaskPriority * __thiscall
FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
          (FAutoConsoleTaskPriority *this,wchar_t *param_1,wchar_t *param_2,Type param_3,
          Type param_4,Type param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FAutoConsoleTaskPriority *pFVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  FDelegateAllocation local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  wchar_t local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_44 = 0x68;
  local_48 = L'n';
  if ((param_3 != MainQueue) && (local_48 = L'b', param_3 == HighThreadPriority)) {
    local_48 = L'h';
  }
  local_46 = 0x68;
  if (param_4 != HighThreadPriority) {
    local_46 = 0x6e;
  }
  if (param_5 != HighThreadPriority) {
    local_44 = 0x6e;
  }
  local_42 = 0;
  ::FString::FString(&this->RawSetting,&local_48);
  ::FString::PrintfImpl
            (&this->FullHelpText,
             L"%s\nArguments are three characters: [ThreadPriority][TaskPriority][TaskPriorityIfForcedToNormalThreadPriority] where ThreadPriority is \'h\' or \'n\' or \'b\' (high/normal/background) and TaskPriority is \'h\' or \'n\' (high/normal). Example: %s bnh"
            );
  local_98 = (undefined1  [8])0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_90;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_90);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutoConsoleTaskPriority____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = OnSettingChanged;
    puVar3[3] = this;
    if ((this == (FAutoConsoleTaskPriority *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FAutoConsoleTaskPriority *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if ((this->FullHelpText).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->FullHelpText).Data.AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->Variable,param_1,&this->RawSetting,pwVar6,
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_98,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_80);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  this->ThreadPriority = param_3;
  this->TaskPriority = param_4;
  this->TaskPriorityIfForcedToNormalThreadPriority = param_5;
  if (((param_5 == UnusedAnchor) && (param_3 != MainQueue)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskPriorityIfForcedToNormalThreadPriority != ENamedThreads::UnusedAnchor || ThreadPriority == ENamedThreads::NormalThreadPriority"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                         ,0x1c1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FAutoConsoleTaskPriority *)(*pcVar1)();
    return pFVar5;
  }
  return this;
}

// ConfigStringFromPriorities @ 14148e8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FAutoConsoleTaskPriority::ConfigStringFromPriorities
          (FString *__return_storage_ptr__,Type param_1,Type param_2,Type param_3)

{
  undefined1 auStack_38 [32];
  wchar_t local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_14 = 0x68;
  local_18 = L'n';
  if ((param_1 != MainQueue) && (local_18 = L'b', param_1 == HighThreadPriority)) {
    local_18 = L'h';
  }
  local_16 = 0x68;
  if (param_2 != HighThreadPriority) {
    local_16 = 0x6e;
  }
  if (param_3 != HighThreadPriority) {
    local_14 = 0x6e;
  }
  local_12 = 0;
  ::FString::FString(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// CreateFullHelpText @ 14148f190

FString * __cdecl
FAutoConsoleTaskPriority::CreateFullHelpText
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s\nArguments are three characters: [ThreadPriority][TaskPriority][TaskPriorityIfForcedToNormalThreadPriority] where ThreadPriority is \'h\' or \'n\' or \'b\' (high/normal/background) and TaskPriority is \'h\' or \'n\' (high/normal). Example: %s bnh"
            );
  return __return_storage_ptr__;
}

// OnSettingChanged @ 1414a7bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoConsoleTaskPriority::OnSettingChanged(FAutoConsoleTaskPriority *this,IConsoleVariable *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  Type TVar4;
  int iVar5;
  
  iVar3 = (this->RawSetting).Data.ArrayNum;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    sVar2 = *(short *)(this->RawSetting).Data.AllocatorInstance.Data;
    if (sVar2 == 0x6e) {
      this->ThreadPriority = MainQueue;
    }
    else {
      TVar4 = BackgroundThreadPriority;
      if (sVar2 == 0x68) {
        TVar4 = HighThreadPriority;
      }
      this->ThreadPriority = TVar4;
    }
  }
  piVar1 = &(this->RawSetting).Data.ArrayNum;
  iVar3 = *piVar1;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  if (1 < iVar5) {
    TVar4 = HighTaskPriority;
    if (*(short *)((this->RawSetting).Data.AllocatorInstance.Data + 2) != 0x68) {
      TVar4 = MainQueue;
    }
    this->TaskPriority = TVar4;
  }
  iVar3 = *piVar1;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  if (2 < iVar5) {
    TVar4 = HighTaskPriority;
    if (*(short *)((this->RawSetting).Data.AllocatorInstance.Data + 4) != 0x68) {
      TVar4 = MainQueue;
    }
    this->TaskPriorityIfForcedToNormalThreadPriority = TVar4;
  }
  return;
}

