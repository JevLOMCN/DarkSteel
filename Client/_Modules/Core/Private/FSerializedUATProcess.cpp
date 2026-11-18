// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FSerializedUATProcess @ 1418bcf40

FSerializedUATProcess * __thiscall
FSerializedUATProcess::FSerializedUATProcess(FSerializedUATProcess *this,FString *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *this_00;
  ForAnyElementType FVar3;
  FString *pFVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  FString *local_res10;
  FString local_98;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = param_1;
  ::FString::FString((FString *)&local_78,"");
  ::FString::FString((FString *)&local_88,"");
  pFVar4 = FPaths::RootDir(&local_58);
  FVar3.Data = local_78.AllocatorInstance.Data;
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&FMonitoredProcess::_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&FMonitoredProcess::_vftable__for__FSingleThreadRunnable__;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined1 *)&this->_padding_ = 0;
  iVar6 = 2;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 1;
  *plVar1 = 0;
  *(int *)&this->_padding_ = local_78.ArrayNum;
  if (local_78.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.ArrayNum,0,(ForAnyElementType *)plVar1,local_78.ArrayNum,piVar2);
    memcpy((void *)*plVar1,FVar3.Data,(longlong)local_78.ArrayNum * 2);
  }
  iVar7 = local_88.ArrayNum;
  FVar3.Data = local_88.AllocatorInstance.Data;
  this_00 = &this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *this_00 = 0;
  *(int *)&this->_padding_ = local_88.ArrayNum;
  if (local_88.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.ArrayNum,0,(ForAnyElementType *)this_00,local_88.ArrayNum,piVar2);
    memcpy((void *)*this_00,FVar3.Data,(longlong)iVar7 * 2);
  }
  ::FString::FString((FString *)&this->_padding_,pFVar4);
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3c23d70a;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&FMonitoredProcess::_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&FMonitoredProcess::_vftable__for__FSingleThreadRunnable__;
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  this->NextProcessToRun = (FSerializedUATProcess *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  *(undefined8 *)&this->LaunchFailedDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  *(undefined8 *)&(this->LaunchFailedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LaunchFailedDelegate).field_0x10 = 0;
  ::FString::operator=((FString *)this_00,L"cmd.exe");
  ::FString::FString(&local_68,L"RunUAT.bat");
  pTVar5 = &FPaths::EngineDir(&local_48)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_88,pTVar5,0x12 - (uint)(pTVar5->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_88,L"Build/BatchFiles",0x10);
  iVar7 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((local_88.ArrayNum != 0) || (iVar7 == -1)) {
    iVar6 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_78,&local_88,iVar7 + iVar6);
  ::FString::PathAppend((FString *)&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar7);
  FPaths::ConvertRelativePathToFull(&local_58,(FString *)&local_78);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_98,L"/c \"\"%s\" %s\"");
  if ((FString *)plVar1 != &local_98) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_98.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_98.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bHasSetupDelegate == false) {
    bHasSetupDelegate = true;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnShutdownAfterError,(_func___cdecl_void *)&local_res10);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnExit,(_func___cdecl_void *)&local_res10);
  }
  return this;
}

// CancelQueue @ 1418c9fe0

void __cdecl FSerializedUATProcess::CancelQueue(void)

{
  FSerializedUATProcess *pFVar1;
  FSerializedUATProcess *pFVar2;
  FSerializedUATProcess *pFVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&Serializer);
  if (HeadProcess != (FSerializedUATProcess *)0x0) {
    pFVar2 = HeadProcess->NextProcessToRun;
    pFVar3 = HeadProcess;
    while (pFVar2 != (FSerializedUATProcess *)0x0) {
      pFVar1 = pFVar2->NextProcessToRun;
      HeadProcess = pFVar3;
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
      pFVar2 = pFVar1;
      pFVar3 = HeadProcess;
    }
    HeadProcess = (FSerializedUATProcess *)0x0;
    pFVar3->NextProcessToRun = (FSerializedUATProcess *)0x0;
    LOCK();
    *(undefined1 *)((longlong)&pFVar3->_padding_ + 1) = 1;
    UNLOCK();
    LOCK();
    *(undefined1 *)&pFVar3->_padding_ = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x0001418ca06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&Serializer);
  return;
}

// GetUATPath @ 1418e1b60

FString * __cdecl FSerializedUATProcess::GetUATPath(FString *__return_storage_ptr__)

{
  int iVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"RunUAT.bat");
  pTVar2 = &FPaths::EngineDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,pTVar2,0x12 - (uint)(pTVar2->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_48,L"Build/BatchFiles",0x10);
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if ((local_48.ArrayNum != 0) || (iVar1 = 2, iVar3 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,&local_48,iVar3 + iVar1);
  ::FString::PathAppend((FString *)&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,(FString *)&local_38);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Launch @ 1418e42c0

bool __thiscall FSerializedUATProcess::Launch(FSerializedUATProcess *this)

{
  FSerializedUATProcess **ppFVar1;
  bool bVar2;
  FSerializedUATProcess *pFVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&Serializer);
  pFVar3 = HeadProcess;
  if (HeadProcess == (FSerializedUATProcess *)0x0) {
    HeadProcess = this;
    bVar2 = LaunchInternal(this);
  }
  else {
    do {
      ppFVar1 = &pFVar3->NextProcessToRun;
      pFVar3 = *ppFVar1;
    } while (pFVar3 != (FSerializedUATProcess *)0x0);
    *ppFVar1 = this;
    bVar2 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&Serializer);
  return bVar2;
}

// LaunchInternal @ 1418e4330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSerializedUATProcess::LaunchInternal(FSerializedUATProcess *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FSerializedUATProcess *local_78;
  FMRSWRecursiveAccessDetector *local_70;
  bool local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  FSerializedUATProcess *local_28;
  FMRSWRecursiveAccessDetector *local_20;
  bool local_18;
  longlong *local_10;
  
  if (bHasSucceededOnce) {
    ::FString::AppendChars((FString *)&this->_padding_,L" -nocompile -nocompileuat",0x19);
  }
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_40,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  local_28 = this;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&local_20,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_78);
  local_60 = &this->_padding_;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = local_28;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 4),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70,(FDestructionSentinel *)&local_78);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  local_78 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_70,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->_padding_;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSerializedUATProcess::LaunchInternal'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = local_78;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 4),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  }
  if (local_18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20,(FDestructionSentinel *)&local_28);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  if (4 < (byte)LogMonitoredProcess._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMonitoredProcess);
  }
  bVar1 = FMonitoredProcess::Launch((FMonitoredProcess *)this);
  if (!bVar1) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->LaunchFailedDelegate);
    LaunchNext(this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70,(FDestructionSentinel *)&local_78);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_78);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70,(FDestructionSentinel *)&local_78);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return true;
}

// LaunchNext @ 1418e4600

bool __thiscall FSerializedUATProcess::LaunchNext(FSerializedUATProcess *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&Serializer);
  if (HeadProcess != (FSerializedUATProcess *)0x0) {
    if ((this != HeadProcess) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("this == HeadProcess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\MonitoredProcess.cpp"
                           ,0x149,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    HeadProcess = HeadProcess->NextProcessToRun;
    if (HeadProcess != (FSerializedUATProcess *)0x0) {
      bVar2 = LaunchInternal(HeadProcess);
      goto LAB_1418e4673;
    }
  }
  bVar2 = false;
LAB_1418e4673:
  LeaveCriticalSection((LPCRITICAL_SECTION)&Serializer);
  return bVar2;
}

