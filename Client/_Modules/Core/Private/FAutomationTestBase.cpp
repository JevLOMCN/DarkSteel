// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 119

// GetTestFullName @ 141471d20

FString * __thiscall
FAutomationTestBase::GetTestFullName(FAutomationTestBase *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAutomationTestFramework *pFVar3;
  longlong lVar4;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  void *local_28 [2];
  
  pFVar3 = FAutomationTestFramework::Get();
  if (pFVar3->CurrentTest == this) {
    pFVar3 = FAutomationTestFramework::Get();
    ::FString::FString(__return_storage_ptr__,&pFVar3->CurrentTestFullPath);
    return __return_storage_ptr__;
  }
  local_30 = (this->TestParameterContext).Data.ArrayNum;
  lVar4 = (longlong)local_30;
  pFVar1 = (this->TestParameterContext).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar1,lVar4 * 2);
  }
  iVar2 = local_30;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (iVar2 < 2) {
    (**(code **)(this->_padding_ + 0x10))(this,__return_storage_ptr__);
  }
  else {
    local_30 = (this->TestParameterContext).Data.ArrayNum;
    lVar4 = (longlong)local_30;
    pFVar1 = (this->TestParameterContext).Data.AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,pFVar1,lVar4 * 2);
    }
    (**(code **)(this->_padding_ + 0x10))(this,local_28);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s.%s");
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return __return_storage_ptr__;
}

// SuppressLogs @ 141471ef0

bool __thiscall FAutomationTestBase::SuppressLogs(FAutomationTestBase *this)

{
  return this->bSuppressLogs;
}

// ShouldCaptureLogCategory @ 141471f00

bool __thiscall
FAutomationTestBase::ShouldCaptureLogCategory(FAutomationTestBase *this,FName *param_1)

{
  return true;
}

// SuppressLogErrors @ 141471f10

bool __thiscall FAutomationTestBase::SuppressLogErrors(FAutomationTestBase *this)

{
  return bSuppressLogErrors;
}

// SuppressLogWarnings @ 141471f20

bool __thiscall FAutomationTestBase::SuppressLogWarnings(FAutomationTestBase *this)

{
  return bSuppressLogWarnings;
}

// ElevateLogWarningsToErrors @ 141471f30

bool __thiscall FAutomationTestBase::ElevateLogWarningsToErrors(FAutomationTestBase *this)

{
  return bElevateLogWarningsToErrors;
}

// GetSuppressedLogCategories @ 141471f40

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationTestBase::GetSuppressedLogCategories
          (FAutomationTestBase *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForAnyElementType FVar1;
  int iVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = SuppressedLogCategories.ArrayNum;
  FVar1 = SuppressedLogCategories.AllocatorInstance;
  __return_storage_ptr__->ArrayNum = SuppressedLogCategories.ArrayNum;
  if (iVar2 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)FVar1.Data,iVar2);
  return __return_storage_ptr__;
}

// GetTestSourceFileName @ 141471fd0

FString * __thiscall
FAutomationTestBase::GetTestSourceFileName
          (FAutomationTestBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  (**(code **)(this->_padding_ + 0xb8))();
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141472000

int __thiscall
FAutomationTestBase::GetTestSourceFileLine(FAutomationTestBase *this,FString *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141472003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 200))();
  return iVar1;
}

// GetTestAssetPath @ 141472010

FString * __thiscall
FAutomationTestBase::GetTestAssetPath
          (FAutomationTestBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetTestOpenCommand @ 141472040

FString * __thiscall
FAutomationTestBase::GetTestOpenCommand
          (FAutomationTestBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// CanRunInEnvironment @ 141472070

bool __thiscall
FAutomationTestBase::CanRunInEnvironment
          (FAutomationTestBase *this,FString *param_1,FString *param_2,bool *param_3)

{
  return true;
}

// SetTestContext @ 141472080

void __thiscall FAutomationTestBase::SetTestContext(FAutomationTestBase *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->TestParameterContext,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// GetTestSourceFileName @ 1414e0fa0

FString * __thiscall
FAutomationTestBase::GetTestSourceFileName
          (FAutomationTestBase *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414e0fc0

int __thiscall FAutomationTestBase::GetTestSourceFileLine(FAutomationTestBase *this)

{
  return 0;
}

// FAutomationTestBase @ 141814f20

/* WARNING: Enum "Type": Some values do not have unique names */

FAutomationTestBase * __thiscall
FAutomationTestBase::FAutomationTestBase(FAutomationTestBase *this,FString *param_1,bool param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  wchar_t *pwVar6;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [16];
  FAutomationTestBase *local_res20;
  FMemScope local_58;
  FMemScope local_50;
  FString *local_48;
  FAutomationTestBase **local_40;
  
  this->bComplexTask = param_2;
  (this->TestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FAutomationTestBase__6B_;
  (this->TestName).Data.ArrayNum = 0;
  (this->TestName).Data.ArrayMax = 0;
  (this->TestParameterContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestParameterContext).Data.ArrayNum = 0;
  (this->TestParameterContext).Data.ArrayMax = 0;
  (this->ExecutionInfo).bSuccessful = false;
  (this->ExecutionInfo).AnalyticsItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionInfo).AnalyticsItems.ArrayNum = 0;
  (this->ExecutionInfo).AnalyticsItems.ArrayMax = 0;
  (this->ExecutionInfo).TelemetryItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionInfo).TelemetryItems.ArrayNum = 0;
  (this->ExecutionInfo).TelemetryItems.ArrayMax = 0;
  (this->ExecutionInfo).TelemetryStorage.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExecutionInfo).TelemetryStorage.Data.ArrayNum = 0;
  (this->ExecutionInfo).TelemetryStorage.Data.ArrayMax = 0;
  (this->ExecutionInfo).Duration = 0.0;
  (this->ExecutionInfo).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionInfo).Entries.ArrayNum = 0;
  (this->ExecutionInfo).Entries.ArrayMax = 0;
  (this->ExecutionInfo).Errors = 0;
  (this->ExecutionInfo).Warnings = 0;
  (this->ExecutionInfo).ContextStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionInfo).ContextStack.ArrayNum = 0;
  (this->ExecutionInfo).ContextStack.ArrayMax = 0;
  *(undefined8 *)&(this->ExpectedMessages).Elements = 0;
  *(undefined8 *)&(this->ExpectedMessages).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExpectedMessages).Elements.field_0x20 = 0;
  this->bSuppressLogs = false;
  iVar4 = 0;
  *(undefined4 *)&(this->ExpectedMessages).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExpectedMessages).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpectedMessages).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpectedMessages).Elements.field_0x34 = 0;
  (this->ExpectedMessages).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExpectedMessages).HashSize = 0;
  (this->ActionCS).Mutex.Mutex.Ptr = (void *)0x0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name157,L"AutomationTest/Framework");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name157,false,None,Default,true);
  FMemScope::FMemScope(&local_50,&LLMScope_Name157,true);
  ::FString::operator=(&this->TestName,param_1);
  pFVar5 = FAutomationTestFramework::Get();
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar1 + -1;
  }
  local_res20 = this;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&pFVar5->AutomationTestClassNameToInstanceMap,uVar3,param_1);
  if (iVar4 == -1) {
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name363,L"AutomationTest/Framework");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope((FLLMScope *)(local_res10 + 8),LLMScope_Name363,false,None,Default,true);
    FMemScope::FMemScope(&local_58,&LLMScope_Name363,true);
    local_40 = &local_res20;
    local_48 = param_1;
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FAutomationTestBase_*_const_&>_>
              ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                *)&pFVar5->AutomationTestClassNameToInstanceMap,
               (TPairInitializer<FString_const_&,FAutomationTestBase_*_const_&> *)local_res10,
               (bool *)&local_48);
    FMemScope::~FMemScope(&local_58);
    FLLMScope::~FLLMScope((FLLMScope *)(local_res10 + 8));
  }
  else if (2 < (byte)LogAutomationTest._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
  }
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FAutomationTestBase @ 141816390

void __thiscall FAutomationTestBase::~FAutomationTestBase(FAutomationTestBase *this)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  
  this->_padding_ = (longlong)&___7FAutomationTestBase__6B_;
  pFVar9 = FAutomationTestFramework::Get();
  iVar1 = (this->TestName).Data.ArrayNum;
  pwVar11 = L"";
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar10 = L"";
    iVar8 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(this->TestName).Data.AllocatorInstance.Data;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
  iVar8 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&pFVar9->AutomationTestClassNameToInstanceMap,uVar7,&this->TestName);
  if ((iVar8 != -1) &&
     (*(int *)&(pFVar9->AutomationTestClassNameToInstanceMap).field_0x8 !=
      *(int *)&(pFVar9->AutomationTestClassNameToInstanceMap).field_0x34)) {
    iVar1 = (this->TestName).Data.ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    else {
      pwVar11 = (wchar_t *)(this->TestName).Data.AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                *)&pFVar9->AutomationTestClassNameToInstanceMap,uVar7,&this->TestName);
  }
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ActionCS);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ActionCS);
  }
  (this->ExpectedMessages).HashSize = 0;
  FVar2 = (this->ExpectedMessages).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FAutomationExpectedMessage>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAutomationExpectedMessage>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExpectedMessages).Elements);
  FAutomationTestExecutionInfo::~FAutomationTestExecutionInfo(&this->ExecutionInfo);
  pFVar3 = (this->TestParameterContext).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddAnalyticsItem @ 141818040

void __thiscall FAutomationTestBase::AddAnalyticsItem(FAutomationTestBase *this,FString *param_1)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  SRWLock = &this->ActionCS;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar2 = (this->ExecutionInfo).AnalyticsItems.AllocatorInstance.Data;
  if ((pFVar2 <= param_1) &&
     (param_1 < pFVar2 + (longlong)(this->ExecutionInfo).AnalyticsItems.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ExecutionInfo).AnalyticsItems.ArrayNum;
  piVar1 = &(this->ExecutionInfo).AnalyticsItems.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ExecutionInfo).AnalyticsItems.AllocatorInstance,piVar1);
  }
  (this->ExecutionInfo).AnalyticsItems.ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((this->ExecutionInfo).AnalyticsItems.AllocatorInstance.Data +
                     (longlong)iVar5 * 0x10),param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// AddError @ 141818190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddError(FAutomationTestBase *this,FString *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  Type local_res20 [8];
  FAutomationEvent local_48;
  
  local_res20[0] = Warning;
  bVar2 = IsExpectedMessage(this,param_1,local_res20);
  if (!bVar2) {
    SRWLock = &this->ActionCS;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_48.Type = Error;
    ::FString::FString(&local_48.Message,param_1);
    local_48.Artifact.A = 0;
    local_48.Artifact.B = 0;
    local_48.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Context.Data.ArrayNum = 0;
    local_48.Context.Data.ArrayMax = 0;
    local_48.Artifact.C = 0;
    local_48.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent(&this->ExecutionInfo,&local_48,param_2 + 1,true);
    if (local_48.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Context.Data.AllocatorInstance.Data);
    }
    if (local_48.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Message.Data.AllocatorInstance.Data);
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// AddErrorIfFalse @ 141818310

bool __thiscall
FAutomationTestBase::AddErrorIfFalse
          (FAutomationTestBase *this,bool param_1,FString *param_2,int param_3)

{
  if (!param_1) {
    (**(code **)(this->_padding_ + 0x28))(this,param_2,param_3 + 1);
  }
  return param_1;
}

// AddErrorS @ 141818340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddErrorS
          (FAutomationTestBase *this,FString *param_1,FString *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformRWLock *SRWLock;
  Type local_18 [16];
  
  local_18[0] = Warning;
  bVar2 = IsExpectedMessage(this,param_1,local_18);
  if (!bVar2) {
    SRWLock = &this->ActionCS;
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (SRWLock != (FPlatformRWLock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418183b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return;
    }
  }
  return;
}

// AddEvent @ 1418183d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddEvent
          (FAutomationTestBase *this,FAutomationEvent *param_1,int param_2,bool param_3)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  Type local_res10 [8];
  
  if (param_1->Type == Error) {
    local_res10[0] = Error;
  }
  else {
    local_res10[0] = Display;
    if (param_1->Type == Warning) {
      local_res10[0] = Warning;
    }
  }
  bVar2 = IsExpectedMessage(this,&param_1->Message,local_res10);
  if (!bVar2) {
    SRWLock = &this->ActionCS;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FAutomationTestExecutionInfo::AddEvent(&this->ExecutionInfo,param_1,param_2 + 1,param_3);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// AddExpectedError @ 141818b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddExpectedError
          (FAutomationTestBase *this,FString *param_1,MatchType param_2,int param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  AddExpectedMessage(this,&local_18,Warning,param_2,param_3,param_4);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddExpectedErrorPlain @ 141818bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddExpectedErrorPlain
          (FAutomationTestBase *this,FString *param_1,MatchType param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  AddExpectedMessage(this,&local_18,Warning,param_2,param_3,false);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddExpectedMessage @ 141818c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddExpectedMessage
          (FAutomationTestBase *this,FString *param_1,MatchType param_2,int param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  AddExpectedMessage(this,&local_18,All,param_2,param_3,param_4);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddExpectedMessage @ 141818cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddExpectedMessage
          (FAutomationTestBase *this,FString *param_1,Type param_2,MatchType param_3,int param_4,
          bool param_5)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationExpectedMessage *pFVar4;
  FAutomationExpectedMessage local_58;
  
  SRWLock = &this->ActionCS;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar4 = FAutomationExpectedMessage::FAutomationExpectedMessage
                     (&local_58,param_1,param_2,param_3,param_4,param_5);
  TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>
  ::Emplace<FAutomationExpectedMessage>
            (&this->ExpectedMessages,(FAutomationExpectedMessage *)&stack0x00000008,(bool *)pFVar4);
  if (local_58.MessagePatternRegex.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.MessagePatternRegex.TypedValue.Implementation.SharedReferenceCount.
               ReferenceController);
  }
  if (local_58.MessagePatternString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.MessagePatternString.Data.AllocatorInstance.Data);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddExpectedMessagePlain @ 141818dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddExpectedMessagePlain
          (FAutomationTestBase *this,FString *param_1,MatchType param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  AddExpectedMessage(this,&local_18,All,param_2,param_3,false);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddExpectedMessagePlain @ 141818e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddExpectedMessagePlain
          (FAutomationTestBase *this,FString *param_1,Type param_2,MatchType param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_18.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  AddExpectedMessage(this,&local_18,param_2,param_3,param_4,false);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddInfo @ 141818ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddInfo(FAutomationTestBase *this,FString *param_1,int param_2,bool param_3)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  Type local_48 [8];
  FAutomationEvent local_40;
  
  local_48[0] = Display;
  bVar2 = IsExpectedMessage(this,param_1,local_48);
  if (!bVar2) {
    SRWLock = &this->ActionCS;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_40.Type = Info;
    ::FString::FString(&local_40.Message,param_1);
    local_40.Artifact.A = 0;
    local_40.Artifact.B = 0;
    local_40.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Context.Data.ArrayNum = 0;
    local_40.Context.Data.ArrayMax = 0;
    local_40.Artifact.C = 0;
    local_40.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent(&this->ExecutionInfo,&local_40,param_2 + 1,param_3);
    if (local_40.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Context.Data.AllocatorInstance.Data);
    }
    if (local_40.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Message.Data.AllocatorInstance.Data);
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// AddTelemetryData @ 1418193a0

/* WARNING: Removing unreachable block (ram,0x000141819703) */
/* WARNING: Removing unreachable block (ram,0x000141819712) */

void __thiscall
FAutomationTestBase::AddTelemetryData
          (FAutomationTestBase *this,
          TMap<FString,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,double,0>_>
          *param_1,FString *param_2)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  code *pcVar6;
  FString *pFVar7;
  TMap<FString,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,double,0>_> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FString *pFVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  FString *local_res18;
  int local_res20;
  FString local_108;
  FScriptContainerElement *local_f8;
  FString local_f0;
  int local_e0;
  TMap<FString,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,double,0>_> *local_d8
  ;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FString,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,double,0>_> *local_a8
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  
  SRWLock = &this->ActionCS;
  local_res18 = param_2;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar10 = *(int *)&param_1->field_0x28;
  puVar3 = &param_1->field_0x10;
  iStack_d0 = 0;
  local_b8 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_14181948e;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_cc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_bc = local_b8 + -1 + local_res20;
    if (iVar10 < iStack_bc) {
      iStack_bc = iVar10;
    }
  }
LAB_14181948e:
  uVar13 = *(uint *)&param_1->field_0x28;
  uStack_b4 = local_5c;
  uVar17 = uVar13 & 0xffffffe0;
  iStack_b0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_c0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
  TStack_a0.CurrentBitIndex = iStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_a0._28_4_ = local_5c;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = param_1;
  local_c8 = puVar3;
  local_a8 = param_1;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar7 = local_res18;
  uVar5 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar5) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1418195a0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_e0 = (int)lVar11;
    uVar13 = local_e0 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1418195a0:
  while( true ) {
    pTVar8 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a0.CurrentBitIndex == uVar13) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar8 == param_1))
    break;
    pFVar12 = (FString *)((longlong)TStack_a0.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
    pFVar4 = pFVar12[1].Data.AllocatorInstance.Data;
    ::FString::FString(&local_108,pFVar12);
    local_f8 = pFVar4;
    ::FString::FString(&local_f0,pFVar7);
    pFVar4 = (this->ExecutionInfo).TelemetryItems.AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 <
         pFVar4 + (longlong)(this->ExecutionInfo).TelemetryItems.ArrayMax * 0x28)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->ExecutionInfo).TelemetryItems.ArrayNum;
    piVar1 = &(this->ExecutionInfo).TelemetryItems.ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->ExecutionInfo).TelemetryItems.AllocatorInstance,piVar1);
    }
    (this->ExecutionInfo).TelemetryItems.ArrayNum = iVar10 + 1;
    pFVar4 = (this->ExecutionInfo).TelemetryItems.AllocatorInstance.Data;
    lVar11 = (longlong)iVar10;
    *(undefined8 *)(pFVar4 + lVar11 * 0x28) = 0;
    *(FScriptContainerElement **)(pFVar4 + lVar11 * 0x28) = local_108.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + lVar11 * 0x28 + 8) = local_108.Data.ArrayNum;
    *(int *)(pFVar4 + lVar11 * 0x28 + 0xc) = local_108.Data.ArrayMax;
    *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar4 + lVar11 * 0x28 + 0x10) = local_f8;
    *(FScriptContainerElement **)(pFVar4 + lVar11 * 0x28 + 0x18) =
         local_f0.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + lVar11 * 0x28 + 0x20) = local_f0.Data.ArrayNum;
    *(int *)(pFVar4 + lVar11 * 0x28 + 0x24) = local_f0.Data.ArrayMax;
    local_f0.Data.ArrayNum = 0;
    local_f0.Data.ArrayMax = 0;
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// AddTelemetryData @ 141819790

/* WARNING: Removing unreachable block (ram,0x000141819915) */
/* WARNING: Removing unreachable block (ram,0x000141819924) */

void __thiscall
FAutomationTestBase::AddTelemetryData
          (FAutomationTestBase *this,FString *param_1,double param_2,FString *param_3)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FString local_48;
  double local_38;
  FString local_30 [2];
  
  SRWLock = &this->ActionCS;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  ::FString::FString(&local_48,param_1);
  local_38 = param_2;
  ::FString::FString(local_30,param_3);
  pFVar2 = (this->ExecutionInfo).TelemetryItems.AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar2 + (longlong)(this->ExecutionInfo).TelemetryItems.ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->ExecutionInfo).TelemetryItems.ArrayNum;
  piVar1 = &(this->ExecutionInfo).TelemetryItems.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->ExecutionInfo).TelemetryItems.AllocatorInstance,piVar1);
  }
  (this->ExecutionInfo).TelemetryItems.ArrayNum = iVar5 + 1;
  pFVar2 = (this->ExecutionInfo).TelemetryItems.AllocatorInstance.Data;
  lVar6 = (longlong)iVar5;
  *(undefined8 *)(pFVar2 + lVar6 * 0x28) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x28) = local_48.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar6 * 0x28 + 8) = local_48.Data.ArrayNum;
  *(int *)(pFVar2 + lVar6 * 0x28 + 0xc) = local_48.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + lVar6 * 0x28 + 0x18) = 0;
  *(double *)(pFVar2 + lVar6 * 0x28 + 0x10) = local_38;
  *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x28 + 0x18) =
       local_30[0].Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar6 * 0x28 + 0x20) = local_30[0].Data.ArrayNum;
  *(int *)(pFVar2 + lVar6 * 0x28 + 0x24) = local_30[0].Data.ArrayMax;
  local_30[0].Data.ArrayNum = 0;
  local_30[0].Data.ArrayMax = 0;
  local_30[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// AddWarning @ 141819e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddWarning(FAutomationTestBase *this,FString *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  Type local_res20 [8];
  FAutomationEvent local_48;
  
  local_res20[0] = Warning;
  bVar2 = IsExpectedMessage(this,param_1,local_res20);
  if (!bVar2) {
    SRWLock = &this->ActionCS;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_48.Type = Warning;
    ::FString::FString(&local_48.Message,param_1);
    local_48.Artifact.A = 0;
    local_48.Artifact.B = 0;
    local_48.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Context.Data.ArrayNum = 0;
    local_48.Context.Data.ArrayMax = 0;
    local_48.Artifact.C = 0;
    local_48.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent(&this->ExecutionInfo,&local_48,param_2 + 1,true);
    if (local_48.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Context.Data.AllocatorInstance.Data);
    }
    if (local_48.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Message.Data.AllocatorInstance.Data);
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// AddWarningS @ 141819fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestBase::AddWarningS
          (FAutomationTestBase *this,FString *param_1,FString *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FPlatformRWLock *SRWLock;
  Type local_18 [16];
  
  local_18[0] = Warning;
  bVar2 = IsExpectedMessage(this,param_1,local_18);
  if (!bVar2) {
    SRWLock = &this->ActionCS;
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (SRWLock != (FPlatformRWLock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014181a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return;
    }
  }
  return;
}

// ClearExecutionInfo @ 14181e330

void __thiscall FAutomationTestBase::ClearExecutionInfo(FAutomationTestBase *this)

{
  FAutomationTestExecutionInfo::Clear(&this->ExecutionInfo);
  return;
}

// ExtractAutomationTestFlags @ 141823120

EAutomationTestFlags __thiscall
FAutomationTestBase::ExtractAutomationTestFlags(FAutomationTestBase *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  TMap<FString,EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EAutomationTestFlags,0>_>
  *this_00;
  longlong lVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  EAutomationTestFlags EVar8;
  wchar_t *pwVar9;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  EVar8 = None;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pFVar4 = ::FString::Replace(param_1,&local_38,L"[",L"",IgnoreCase);
  pFVar4 = ::FString::Replace(pFVar4,&local_48,L"]",L";",IgnoreCase);
  ::FString::ParseIntoArray(pFVar4,&local_58,L";",true);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar1 = local_58.ArrayNum;
  pFVar7 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
  FVar6.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar6.Data == pFVar7) break;
    this_00 = EAutomationTestFlags_GetTestFlagsMap();
    iVar3 = *(int *)(FVar6.Data + 8) + -1;
    if (*(int *)(FVar6.Data + 8) == 0) {
      pwVar9 = L"";
      iVar3 = 0;
    }
    else {
      pwVar9 = *(wchar_t **)FVar6.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar9);
    iVar3 = TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(this_00,uVar2,(FString *)FVar6.Data);
    if ((iVar3 == -1) || (lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)this_00, lVar5 == 0)) {
      FVar6.Data = FVar6.Data + 0x10;
    }
    else {
      EVar8 = EVar8 | *(EAutomationTestFlags *)(lVar5 + 0x10);
      FVar6.Data = FVar6.Data + 0x10;
    }
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return EVar8;
}

// GenerateTestNames @ 141823d80

void __thiscall
FAutomationTestBase::GenerateTestNames
          (FAutomationTestBase *this,
          TArray<FAutomationTestInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  void *pvVar1;
  FAutomationTestInfo *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAutomationTestFlags EVar11;
  FThreadHeartBeat *pFVar12;
  FGameThreadHitchHeartBeatThreaded *pFVar13;
  FAutomationTestFramework *pFVar14;
  undefined8 *puVar15;
  FString *pFVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint local_res20;
  FString *local_1c8;
  undefined8 local_1c0;
  FString local_1b8;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  FString local_198;
  longlong local_188;
  FString *local_180;
  undefined8 local_178;
  longlong local_170;
  FString local_168;
  FString local_158;
  void *local_148;
  int local_140;
  FAutomationTestInfo local_138;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_98;
  FString *local_90;
  FString *local_88;
  void *local_80 [2];
  void *local_70 [2];
  void *local_60 [4];
  
  pFVar12 = FThreadHeartBeat::GetNoInit();
  if (pFVar12 != (FThreadHeartBeat *)0x0) {
    FThreadHeartBeat::SuspendHeartBeat(pFVar12,false);
  }
  pFVar13 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar13);
  local_180 = (FString *)0x0;
  local_178 = 0;
  local_1c8 = (FString *)0x0;
  local_1c0 = 0;
  (**(code **)(this->_padding_ + 0xe8))(this,&local_180,&local_1c8);
  pFVar14 = FAutomationTestFramework::Get();
  (**(code **)(this->_padding_ + 0x10))(this,&local_148);
  local_res20 = 0;
  if (0 < (int)local_1c0) {
    local_98 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&pFVar14->TestFullNameToTagDataMap;
    local_188 = 0;
    local_170 = 0;
    do {
      pvVar1 = local_148;
      lVar19 = local_188;
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      lVar18 = (longlong)local_140;
      local_1b8.Data.ArrayNum = local_140;
      if (local_140 == 0) {
        local_1b8.Data.ArrayMax = 0;
        iVar10 = (int)local_1c0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_140,0,(ForAnyElementType *)&local_1b8,local_140,
                   &local_1b8.Data.ArrayMax);
        memcpy(local_1b8.Data.AllocatorInstance.Data,pvVar1,lVar18 * 2);
        iVar10 = (int)local_1c0;
      }
      local_1a0 = (this->TestName).Data.ArrayNum;
      lVar18 = (longlong)local_1a0;
      _Src = (this->TestName).Data.AllocatorInstance.Data;
      local_1a8.Data = (FScriptContainerElement *)0x0;
      if (local_1a0 == 0) {
        local_19c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a0,0,&local_1a8,local_1a0,&local_19c);
        memcpy(local_1a8.Data,_Src,lVar18 * 2);
        iVar10 = (int)local_1c0;
      }
      uVar20 = ~local_res20 >> 0x1f;
      uVar9 = 0;
      if ((int)local_res20 < iVar10) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = *(int *)((longlong)&(local_1c8->Data).ArrayNum + lVar19);
      uVar17 = 0;
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar17;
      }
      if (uVar9 != 0) {
        uVar9 = uVar17;
        if ((int)local_res20 < (int)local_178) {
          uVar9 = uVar20;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::PrintfImpl(&local_168,L"%s.%s");
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        local_1b8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
        local_1b8.Data.ArrayNum = local_168.Data.ArrayNum;
        local_1b8.Data.ArrayMax = local_168.Data.ArrayMax;
        uVar9 = uVar17;
        if ((int)local_res20 < (int)local_1c0) {
          uVar9 = uVar20;
        }
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::PrintfImpl(&local_158,L"%s %s");
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        local_1a8.Data = local_158.Data.AllocatorInstance.Data;
        local_1a0 = local_158.Data.ArrayNum;
        local_19c = local_158.Data.ArrayMax;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      uVar9 = local_1b8.Data.ArrayNum - 1;
      FVar4.Data = local_1b8.Data.AllocatorInstance.Data;
      if (local_1b8.Data.ArrayNum == 0) {
        uVar9 = uVar17;
        FVar4.Data = (FScriptContainerElement *)L"";
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,(wchar_t *)FVar4.Data);
      pTVar7 = local_98;
      iVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>(local_98,uVar9,&local_1b8);
      if (iVar10 == -1) {
LAB_1418241a5:
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = 0;
        local_198.Data.ArrayMax = 0;
      }
      else {
        lVar18 = *(longlong *)&pTVar7->Elements + (longlong)iVar10 * 0x28;
        puVar15 = (undefined8 *)(lVar18 + 0x10);
        if (lVar18 == 0) {
          puVar15 = (undefined8 *)0x0;
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_1418241a5;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar10 = *(int *)(puVar15 + 1);
        pvVar1 = (void *)*puVar15;
        local_198.Data.ArrayNum = iVar10;
        if (iVar10 == 0) {
          local_198.Data.ArrayNum = 0;
          local_198.Data.ArrayMax = 0;
          lVar19 = local_188;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar10,0,(ForAnyElementType *)&local_198,iVar10,&local_198.Data.ArrayMax);
          memcpy(local_198.Data.AllocatorInstance.Data,pvVar1,(longlong)iVar10 * 2);
          lVar19 = local_188;
        }
      }
      pcVar3 = *(code **)(this->_padding_ + 0xd8);
      uVar9 = uVar17;
      if ((int)local_res20 < (int)local_1c0) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_88 = (FString *)
                 (*pcVar3)(this,local_60,
                           (longlong)&(local_1c8->Data).AllocatorInstance.Data + lVar19);
      pcVar3 = *(code **)(this->_padding_ + 0xd0);
      if ((int)local_res20 < (int)local_1c0) {
        uVar17 = uVar20;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (FString *)
                (*pcVar3)(this,local_70,(longlong)&(local_1c8->Data).AllocatorInstance.Data + lVar19
                         );
      iVar10 = (**(code **)(this->_padding_ + 0xc0))(this,&local_1a8);
      local_90 = (FString *)(**(code **)(this->_padding_ + 0xb0))(this,local_80,&local_1a8);
      uVar9 = 0;
      if ((int)local_res20 < (int)local_1c0) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar5 = &local_1c8->Data;
      uVar9 = (**(code **)(this->_padding_ + 0x20))(this);
      EVar11 = (**(code **)(this->_padding_ + 8))(this);
      FVar4.Data = local_1b8.Data.AllocatorInstance.Data;
      lVar18 = (longlong)local_1b8.Data.ArrayNum;
      local_138.DisplayName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.DisplayName.Data.ArrayNum = local_1b8.Data.ArrayNum;
      if (local_1b8.Data.ArrayNum == 0) {
        local_138.DisplayName.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_138,
                   local_1b8.Data.ArrayNum,&local_138.DisplayName.Data.ArrayMax);
        memcpy(local_138.DisplayName.Data.AllocatorInstance.Data,FVar4.Data,lVar18 * 2);
      }
      iVar6 = local_1b8.Data.ArrayNum;
      FVar4.Data = local_1b8.Data.AllocatorInstance.Data;
      local_138.FullTestPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.FullTestPath.Data.ArrayNum = local_1b8.Data.ArrayNum;
      if (local_1b8.Data.ArrayNum == 0) {
        local_138.FullTestPath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_138.FullTestPath,
                   local_1b8.Data.ArrayNum,&local_138.FullTestPath.Data.ArrayMax);
        memcpy(local_138.FullTestPath.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar6 * 2);
      }
      FVar4.Data = local_1a8.Data;
      lVar18 = (longlong)local_1a0;
      local_138.TestName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.TestName.Data.ArrayNum = local_1a0;
      if (local_1a0 == 0) {
        local_138.TestName.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a0,0,(ForAnyElementType *)&local_138.TestName,local_1a0,
                   &local_138.TestName.Data.ArrayMax);
        memcpy(local_138.TestName.Data.AllocatorInstance.Data,FVar4.Data,lVar18 * 2);
      }
      ::FString::FString(&local_138.TestTags,&local_198);
      ::FString::FString(&local_138.TestParameter,
                         (FString *)((longlong)&(pTVar5->AllocatorInstance).Data + lVar19));
      ::FString::FString(&local_138.SourceFile,local_90);
      local_138.SourceFileLine = iVar10;
      ::FString::FString(&local_138.AssetPath,pFVar16);
      ::FString::FString(&local_138.OpenCommand,local_88);
      local_138.NumDevicesCurrentlyRunningTest = 0;
      local_138.TestFlags = EVar11;
      local_138.NumParticipantsRequired = uVar9;
      if (local_80[0] != (void *)0x0) {
        FMemory::Free(local_80[0]);
      }
      if (local_70[0] != (void *)0x0) {
        FMemory::Free(local_70[0]);
      }
      if (local_60[0] != (void *)0x0) {
        FMemory::Free(local_60[0]);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      pFVar2 = (FAutomationTestInfo *)(param_1->AllocatorInstance).Data;
      if (((pFVar2 <= &local_138) && (&local_138 < pFVar2 + param_1->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x898,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar10 + 1;
      FAutomationTestInfo::FAutomationTestInfo
                ((FAutomationTestInfo *)
                 ((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x98),&local_138);
      if (local_138.OpenCommand.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.OpenCommand.Data.AllocatorInstance.Data);
      }
      if (local_138.AssetPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AssetPath.Data.AllocatorInstance.Data);
      }
      if (local_138.SourceFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.SourceFile.Data.AllocatorInstance.Data);
      }
      if (local_138.TestParameter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.TestParameter.Data.AllocatorInstance.Data);
      }
      if (local_138.TestTags.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.TestTags.Data.AllocatorInstance.Data);
      }
      if (local_138.TestName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.TestName.Data.AllocatorInstance.Data);
      }
      if (local_138.FullTestPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.FullTestPath.Data.AllocatorInstance.Data);
      }
      if (local_138.DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.DisplayName.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      local_res20 = local_res20 + 1;
      local_170 = local_170 + 1;
      local_188 = local_188 + 0x10;
    } while ((int)local_res20 < (int)local_1c0);
  }
  iVar10 = (int)local_1c0;
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
    iVar10 = (int)local_1c0;
  }
  DestructItems<FString,int>(local_1c8,iVar10);
  if (local_1c8 != (FString *)0x0) {
    FMemory::Free(local_1c8);
  }
  DestructItems<FString,int>(local_180,(int)local_178);
  if (local_180 != (FString *)0x0) {
    FMemory::Free(local_180);
  }
  pFVar13 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar13);
  if ((pFVar12 != (FThreadHeartBeat *)0x0) &&
     (pFVar12 = FThreadHeartBeat::GetNoInit(), pFVar12 != (FThreadHeartBeat *)0x0)) {
    FThreadHeartBeat::ResumeHeartBeat(pFVar12,false);
  }
  return;
}

// GetExecutionInfo @ 141826020

void __thiscall
FAutomationTestBase::GetExecutionInfo
          (FAutomationTestBase *this,FAutomationTestExecutionInfo *param_1)

{
  TArray<FAutomationTelemetryData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAutomationTelemetryData,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FAutomationTelemetryData *pFVar7;
  FAutomationExecutionEntry *pFVar8;
  
  param_1->bSuccessful = (this->ExecutionInfo).bSuccessful;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->AnalyticsItems,&(this->ExecutionInfo).AnalyticsItems);
  pTVar1 = &(this->ExecutionInfo).TelemetryItems;
  pTVar2 = &param_1->TelemetryItems;
  if (pTVar2 != pTVar1) {
    DestructItems<FAutomationTelemetryData,int>
              ((FAutomationTelemetryData *)(pTVar2->AllocatorInstance).Data,
               (param_1->TelemetryItems).ArrayNum);
    iVar6 = (this->ExecutionInfo).TelemetryItems.ArrayNum;
    piVar3 = &(param_1->TelemetryItems).ArrayMax;
    pFVar7 = (FAutomationTelemetryData *)(pTVar1->AllocatorInstance).Data;
    (param_1->TelemetryItems).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar6,*piVar3,&pTVar2->AllocatorInstance,iVar6,piVar3);
      ConstructItems<FAutomationTelemetryData,FAutomationTelemetryData,int>
                ((pTVar2->AllocatorInstance).Data,pFVar7,iVar6);
    }
  }
  ::FString::operator=(&param_1->TelemetryStorage,&(this->ExecutionInfo).TelemetryStorage);
  pTVar4 = &(this->ExecutionInfo).Entries;
  pTVar5 = &param_1->Entries;
  param_1->Duration = (this->ExecutionInfo).Duration;
  if (pTVar5 != pTVar4) {
    DestructItems<FAutomationExecutionEntry,int>
              ((FAutomationExecutionEntry *)(pTVar5->AllocatorInstance).Data,
               (param_1->Entries).ArrayNum);
    iVar6 = (this->ExecutionInfo).Entries.ArrayNum;
    piVar3 = &(param_1->Entries).ArrayMax;
    pFVar8 = (FAutomationExecutionEntry *)(pTVar4->AllocatorInstance).Data;
    (param_1->Entries).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar6,*piVar3,&pTVar5->AllocatorInstance,iVar6,piVar3);
      ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
    }
  }
  param_1->Errors = (this->ExecutionInfo).Errors;
  param_1->Warnings = (this->ExecutionInfo).Warnings;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->ContextStack,&(this->ExecutionInfo).ContextStack);
  return;
}

// GetExpectedMessages @ 141826180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FAutomationTestBase::GetExpectedMessages
          (FAutomationTestBase *this,
          TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_> *param_1,Type param_2)

{
  uint uVar1;
  <lambda_1> local_res18;
  
  uVar1 = *(int *)&(this->ExpectedMessages).Elements.field_0x8 -
          *(int *)&(this->ExpectedMessages).Elements.field_0x34;
  if (-1 < (int)uVar1) {
    if (param_1->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_res18 = (<lambda_1>)((ushort)param_2 << 8);
    Algo::
    CopyIf<TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>,TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_>,_FAutomationTestBase::GetExpectedMessages_::__l2::<lambda_1>_>
              (&this->ExpectedMessages,param_1,local_res18);
    AlgoImpl::
    IntroSortInternal<FAutomationExpectedMessage,int,FIdentityFunctor,TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_>_>
              ((FAutomationExpectedMessage *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               (FIdentityFunctor)local_res18.IncludeSuppressed,(TLess<void> *)&local_res18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetExpectedMessages @ 141826230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FAutomationTestBase::GetExpectedMessages
          (FAutomationTestBase *this,
          TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          Type param_3)

{
  uint uVar1;
  <lambda_1> local_res8;
  
  uVar1 = *(int *)&(this->ExpectedMessages).Elements.field_0x8 -
          *(int *)&(this->ExpectedMessages).Elements.field_0x34;
  if (-1 < (int)uVar1) {
    if (param_1->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_res8.Verbosity = param_3;
    local_res8.IncludeSuppressed = param_2;
    Algo::
    CopyIf<TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>,TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_>,_FAutomationTestBase::GetExpectedMessages_::__l2::<lambda_1>_>
              (&this->ExpectedMessages,param_1,local_res8);
    AlgoImpl::
    IntroSortInternal<FAutomationExpectedMessage,int,FIdentityFunctor,TDereferenceWrapper<FAutomationExpectedMessage,TLess<void>_>_>
              ((FAutomationExpectedMessage *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               (FIdentityFunctor)local_res8.IncludeSuppressed,(TLess<void> *)&local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetLastExecutionSuccessState @ 141826440

bool __thiscall FAutomationTestBase::GetLastExecutionSuccessState(FAutomationTestBase *this)

{
  return (this->ExecutionInfo).bSuccessful;
}

// GetStringValueToDisplay @ 1418273d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FAutomationTestBase::GetStringValueToDisplay
          (FAutomationTestBase *this,FString *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_168 [32];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_1->DataPtr == (uchar *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"nullptr");
  }
  else {
    puVar1 = param_1->DataPtr;
    local_148.Base = local_128;
    local_148.CurPos = local_128;
    iVar3 = (int)*(undefined8 *)&param_1->Size;
    local_148.End = (wchar_t *)local_28;
    local_148.bIsDynamic = false;
    local_148.bIsExternal = false;
    iVar2 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,iVar3);
    if (local_148.End < local_148.CurPos + iVar2) {
      TStringBuilderBase<wchar_t>::Extend(&local_148,(longlong)iVar2);
    }
    if (iVar3 != 0) {
      local_148.CurPos = UE::Core::Private::Convert(local_148.CurPos,iVar2,puVar1,iVar3);
    }
    if (local_148.End < local_148.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_148,1);
    }
    *local_148.CurPos = L'\0';
    ::FString::PrintfImpl(__return_storage_ptr__,L"\"%s\"");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  }
  return __return_storage_ptr__;
}

// GetStringValueToDisplay @ 141827510

FString * __thiscall
FAutomationTestBase::GetStringValueToDisplay
          (FAutomationTestBase *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  if (param_1->DataPtr != (wchar_t *)0x0) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"\"%.*s\"");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"nullptr");
  return __return_storage_ptr__;
}

// HasAnyErrors @ 141828a30

bool __thiscall FAutomationTestBase::HasAnyErrors(FAutomationTestBase *this)

{
  return 0 < (this->ExecutionInfo).Errors;
}

// HasMetExpectedErrors @ 141828af0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationTestBase::HasMetExpectedErrors(FAutomationTestBase *this)

{
  bool bVar1;
  
  bVar1 = HasMetExpectedMessages(this,Warning);
  return bVar1;
}

// HasMetExpectedMessages @ 141828b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall FAutomationTestBase::HasMetExpectedMessages(FAutomationTestBase *this,Type param_1)

{
  FPlatformRWLock *SRWLock;
  Type TVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  int *piVar10;
  int local_res18;
  FAutomationExpectedMessage *local_res20;
  TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_> local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FAutomationEvent local_100;
  FAutomationEvent local_c8;
  FAutomationEvent local_90;
  TArray<FAutomationExpectedMessage,TSizedDefaultAllocator<32>_> local_58;
  
  SRWLock = &this->ActionCS;
  local_res20 = (FAutomationExpectedMessage *)0x0;
  local_res18 = 0;
  bVar6 = true;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pTVar7 = TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>
           ::Array(&this->ExpectedMessages,&local_140);
  if (&local_58 != pTVar7) {
    DestructItems<FAutomationExpectedMessage,int>((FAutomationExpectedMessage *)0x0,0);
    local_res20 = (FAutomationExpectedMessage *)(pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_res18 = pTVar7->ArrayNum;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  DestructItems<FAutomationExpectedMessage,int>
            ((FAutomationExpectedMessage *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if ((FAutomationExpectedMessage *)local_140.AllocatorInstance.Data !=
      (FAutomationExpectedMessage *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  piVar10 = &local_res20->ExpectedNumberOfOccurrences;
  do {
    if ((FAutomationExpectedMessage *)(piVar10 + -0xb) == local_res20 + local_res18) {
      DestructItems<FAutomationExpectedMessage,int>(local_res20,local_res18);
      if (local_res20 != (FAutomationExpectedMessage *)0x0) {
        FMemory::Free(local_res20);
      }
      return bVar6;
    }
    TVar1 = *(Type *)(piVar10 + 2);
    if (TVar1 == All) {
LAB_141828c39:
      iVar2 = *piVar10;
      if (iVar2 < 1) {
        if (iVar2 == 0) {
          if ((SRWLock == (FPlatformRWLock *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Mutex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                 ,0x43,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
          if (piVar10[1] == 0) {
            bVar6 = false;
            pFVar8 = FAutomationTestExecutionInfo::GetContext(&this->ExecutionInfo);
            ::FString::PrintfImpl
                      (&local_120,
                       L"Expected suppressed (\'%s\') level log message or higher matching \'%s\' did not occur."
                      );
            local_c8.Type = Error;
            ::FString::FString(&local_c8.Message,&local_120);
            ::FString::FString(&local_c8.Context,pFVar8);
            local_c8.Artifact.A = 0;
            local_c8.Artifact.B = 0;
            local_c8.Artifact.C = 0;
            local_c8.Artifact.D = 0;
            FAutomationTestExecutionInfo::AddEvent(&this->ExecutionInfo,&local_c8,0,true);
            if (local_c8.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Context.Data.AllocatorInstance.Data);
            }
            FVar9.Data = local_120.Data.AllocatorInstance.Data;
            if (local_c8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Message.Data.AllocatorInstance.Data);
              FVar9.Data = local_120.Data.AllocatorInstance.Data;
            }
          }
          else {
            pFVar8 = FAutomationTestExecutionInfo::GetContext(&this->ExecutionInfo);
            ::FString::PrintfImpl
                      (&local_110,
                       L"Suppressed expected (\'%s\') level log message or higher matching \'%s\' %d times."
                      );
            local_90.Type = Info;
            ::FString::FString(&local_90.Message,&local_110);
            ::FString::FString(&local_90.Context,pFVar8);
            local_90.Artifact.A = 0;
            local_90.Artifact.B = 0;
            local_90.Artifact.C = 0;
            local_90.Artifact.D = 0;
            FAutomationTestExecutionInfo::AddEvent(&this->ExecutionInfo,&local_90,0,true);
            if (local_90.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Context.Data.AllocatorInstance.Data);
            }
            FVar9.Data = local_110.Data.AllocatorInstance.Data;
            if (local_90.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Message.Data.AllocatorInstance.Data);
              FVar9.Data = local_110.Data.AllocatorInstance.Data;
            }
          }
          goto LAB_141828ebd;
        }
      }
      else if (iVar2 != piVar10[1]) {
        if ((SRWLock == (FPlatformRWLock *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                               ,0x43,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
        bVar6 = false;
        pFVar8 = FAutomationTestExecutionInfo::GetContext(&this->ExecutionInfo);
        ::FString::PrintfImpl
                  (&local_130,
                   L"Expected (\'%s\') level log message or higher matching \'%s\' to occur %d times with %s match type, but it was found %d time(s)."
                  );
        local_100.Type = Error;
        ::FString::FString(&local_100.Message,&local_130);
        ::FString::FString(&local_100.Context,pFVar8);
        local_100.Artifact.A = 0;
        local_100.Artifact.B = 0;
        local_100.Artifact.C = 0;
        local_100.Artifact.D = 0;
        FAutomationTestExecutionInfo::AddEvent(&this->ExecutionInfo,&local_100,0,true);
        if (local_100.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Context.Data.AllocatorInstance.Data);
        }
        FVar9.Data = local_130.Data.AllocatorInstance.Data;
        if (local_100.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Message.Data.AllocatorInstance.Data);
          FVar9.Data = local_130.Data.AllocatorInstance.Data;
        }
LAB_141828ebd:
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
        if (SRWLock != (FPlatformRWLock *)0x0) {
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        }
      }
    }
    else if ((param_1 == All) || (TVar1 <= param_1)) {
      ::ToString(TVar1);
      goto LAB_141828c39;
    }
    piVar10 = piVar10 + 0xe;
  } while( true );
}

// InternalSetSuccessState @ 141829280

void __thiscall FAutomationTestBase::InternalSetSuccessState(FAutomationTestBase *this,bool param_1)

{
  (this->ExecutionInfo).bSuccessful = param_1;
  return;
}

// IsExpectedMessage @ 14182a6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FAutomationTestBase::IsExpectedMessage(FAutomationTestBase *this,FString *param_1,Type *param_2)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  undefined4 uStack_b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FRegexMatcher local_80;
  undefined4 local_44;
  
  SRWLock = &this->ActionCS;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  puVar1 = &(this->ExpectedMessages).Elements.field_0x10;
  iVar10 = *(int *)&(this->ExpectedMessages).Elements.field_0x28;
  iVar15 = 0;
  uVar8 = 1;
  iVar17 = 0;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->ExpectedMessages).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    iVar17 = 0;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14182a7af;
      uVar13 = puVar18[lVar12 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar9 = iVar17 + -1 + (int)lVar12;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14182a7af:
  uVar13 = *(uint *)&(this->ExpectedMessages).Elements.field_0x28;
  TStack_a8._padding_ = CONCAT44(uVar8,iVar15);
  uVar8 = uVar13 & 0xffffffe0;
  TStack_a8.CurrentBitIndex = iVar9;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_a8._28_4_ = local_44;
  TStack_a8.BaseBitIndex = iVar17;
  uStack_88 = CONCAT44(uStack_b4,
                       *(int *)&(this->ExpectedMessages).Elements.field_0x8 -
                       *(int *)&(this->ExpectedMessages).Elements.field_0x34);
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar4 = *(uint *)&(this->ExpectedMessages).Elements.field_0x28;
  if (uVar13 != uVar4) {
    puVar16 = *(undefined1 **)&(this->ExpectedMessages).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      uVar8 = uVar8 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14182a8c0;
      uVar13 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar8;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_14182a8c0:
  do {
    if (*(int *)&(this->ExpectedMessages).Elements.field_0x8 -
        *(int *)&(this->ExpectedMessages).Elements.field_0x34 != (int)uStack_88) {
      `TSparseArray<TSparseSetElement<FAutomationExpectedMessage>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_a8.CurrentBitIndex == uVar13) &&
       (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      bVar6 = false;
      goto LAB_14182a9f4;
    }
    lVar12 = *(longlong *)&(this->ExpectedMessages).Elements;
    lVar14 = (longlong)TStack_a8.CurrentBitIndex * 0x40;
    if (((*param_2 == All) || (3 < *(byte *)(lVar14 + 0x34 + lVar12))) || (*param_2 < Display)) {
      if (*(char *)(lVar14 + 0x20 + lVar12) == '\0') {
        if (*(int *)(lVar14 + 8 + lVar12) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(lVar14 + lVar12);
          if (_Str == (wchar_t *)0x0) goto LAB_14182a9d2;
        }
        sVar11 = wcslen(_Str);
        iVar10 = ::FString::Find(param_1,_Str,(int)sVar11,IgnoreCase,FromStart,-1);
        if (iVar10 != -1) {
          if (*(int *)(lVar14 + 0x28 + lVar12) != 0) {
LAB_14182a9ed:
            piVar3 = (int *)(lVar14 + 0x30 + lVar12);
            *piVar3 = *piVar3 + 1;
LAB_14182a9f1:
            bVar6 = true;
LAB_14182a9f4:
            if (SRWLock != (FPlatformRWLock *)0x0) {
              ReleaseSRWLockShared((PSRWLOCK)SRWLock);
            }
            return bVar6;
          }
          iVar15 = *(int *)(lVar14 + 8 + lVar12);
          iVar17 = (param_1->Data).ArrayNum;
          iVar10 = iVar15 + -1;
          if (iVar15 == 0) {
            iVar10 = 0;
          }
          iVar15 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar15 = 0;
          }
          if (iVar15 == iVar10) goto LAB_14182a9ed;
        }
      }
      else {
        FRegexMatcher::FRegexMatcher(&local_80,(FRegexPattern *)(lVar12 + 0x10 + lVar14),param_1);
        bVar6 = FRegexMatcher::FindNext(&local_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.Implementation.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.Pattern.Implementation.SharedReferenceCount.ReferenceController);
        piVar3 = (int *)(lVar14 + 0x30 + lVar12);
        *piVar3 = *piVar3 + (uint)bVar6;
        if (bVar6) goto LAB_14182a9f1;
      }
    }
LAB_14182a9d2:
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// LoadDefaultLogSettings @ 14182b020

void __cdecl FAutomationTestBase::LoadDefaultLogSettings(void)

{
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
             L"bSuppressLogErrors",&bSuppressLogErrors,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
             L"bSuppressLogWarnings",&bSuppressLogWarnings,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
             L"bElevateLogWarningsToErrors",&bElevateLogWarningsToErrors,&GEngineIni);
  FConfigCacheIni::GetArray
            (GConfig,L"/Script/AutomationController.AutomationControllerSettings",
             L"SuppressedLogCategories",&SuppressedLogCategories,&GEngineIni);
  return;
}

// LogCategoryMatchesSeverityInclusive @ 14182ba70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FAutomationTestBase::LogCategoryMatchesSeverityInclusive(Type param_1,Type param_2)

{
  if (((param_1 != All) && (param_2 != All)) && (param_2 < param_1)) {
    return false;
  }
  return true;
}

// SetTelemetryStorage @ 141832c50

void __thiscall FAutomationTestBase::SetTelemetryStorage(FAutomationTestBase *this,FString *param_1)

{
  ::FString::operator=(&(this->ExecutionInfo).TelemetryStorage,param_1);
  return;
}

// TestEqual @ 141834090

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined4 local_20;
  
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t *)0x0)) {
    bVar3 = param_2 == param_3;
  }
  else {
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,param_3);
    bVar3 = iVar2 == 0;
  }
  if (bVar3 == false) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    if (param_2 == (wchar_t *)0x0) {
      local_38.Data.ArrayNum = 0;
      ::FString::FString(&local_48,L"nullptr");
    }
    else {
      wcslen(param_2);
      ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
    }
    if (param_3 == (wchar_t *)0x0) {
      local_20 = 0;
      ::FString::FString(&local_58,L"nullptr");
    }
    else {
      wcslen(param_3);
      ::FString::PrintfImpl(&local_58,L"\"%.*s\"");
    }
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to be %s, but it was %s.");
    (*pcVar1)(this,&local_38,1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// TestEqual @ 141834220

bool __thiscall
FAutomationTestBase::TestEqual(FAutomationTestBase *this,wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 != param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be %d, but it was %d.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual @ 141834290

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_4 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,L"Expected \'%s\' to be %f, but it was %f and outside tolerance %f.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual @ 141834330

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_4 < (double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(param_2 - param_3,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,L"Expected \'%s\' to be %f, but it was %f and outside tolerance %f.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual @ 1418343c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,TRotator<double> *param_2,
          TRotator<double> *param_3,float param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 in_EAX;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  FString local_88;
  FString local_78;
  FString local_68 [5];
  
  dVar33 = param_3->Pitch - param_2->Pitch;
  dVar35 = param_3->Yaw - param_2->Yaw;
  dVar3 = param_3->Roll - param_2->Roll;
  auVar19._8_4_ = SUB84(dVar35,0);
  auVar19._0_8_ = dVar33;
  auVar19._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  auVar20 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  dVar10 = (double)param_4;
  auVar20 = roundpd(in_XMM1,auVar20,3);
  dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar27._0_8_ = auVar20._0_8_ * dVar8;
  dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar27._8_8_ = auVar20._8_8_ * dVar9;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar3;
  dVar33 = dVar33 - auVar27._0_8_;
  dVar35 = dVar35 - auVar27._8_8_;
  auVar20 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar20 = roundpd(auVar27,auVar20,3);
  dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar22._8_4_ = SUB84(dVar35,0);
  auVar22._0_8_ = dVar33;
  auVar22._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  dVar3 = dVar3 - auVar20._0_8_ * dVar6;
  dVar4 = 0.0 - auVar20._8_8_ * dVar7;
  uVar13 = -(ulonglong)(0.0 <= dVar33);
  uVar15 = -(ulonglong)(0.0 <= dVar35);
  auVar28._0_8_ = uVar13 & (ulonglong)dVar33;
  auVar28._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar35);
  auVar28._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar35) >> 0x20);
  dVar35 = auVar22._8_8_ + dVar9;
  uVar14 = -(ulonglong)(0.0 <= dVar3);
  uVar16 = -(ulonglong)(0.0 <= dVar4);
  auVar36._0_4_ = ~(uint)uVar13 & SUB84(dVar33 + dVar8,0);
  auVar36._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar8) >> 0x20);
  auVar36._8_4_ = ~(uint)uVar15 & SUB84(dVar35,0);
  auVar36._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
  auVar36 = auVar36 | auVar28;
  auVar23._8_4_ = SUB84(dVar4,0);
  auVar23._0_8_ = dVar3;
  auVar23._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar35 = auVar23._8_8_ + dVar7;
  auVar34._0_4_ = ~(uint)uVar14 & SUB84(dVar3 + dVar6,0);
  auVar34._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar3 + dVar6) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar16 & SUB84(dVar35,0);
  auVar34._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
  auVar20._8_4_ = (int)((ulonglong)dVar4 & uVar16);
  auVar20._0_8_ = (ulonglong)dVar3 & uVar14;
  auVar20._12_4_ = (int)(((ulonglong)dVar4 & uVar16) >> 0x20);
  auVar34 = auVar34 | auVar20;
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar34._0_8_);
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar34._8_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
  uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
  auVar29._0_8_ = uVar14 & (ulonglong)(auVar34._0_8_ - dVar6);
  uVar13 = uVar16 & (ulonglong)(auVar34._8_8_ - dVar7);
  auVar29._8_4_ = (undefined4)uVar13;
  auVar29._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar24._0_4_ = ~(uint)uVar14 & auVar34._0_4_;
  auVar24._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar34._4_4_;
  auVar24._8_4_ = ~(uint)uVar16 & auVar34._8_4_;
  auVar24._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar34._12_4_;
  auVar29 = auVar29 | auVar24;
  auVar25._8_4_ = SUB84(dVar10,0);
  auVar25._0_8_ = dVar10;
  auVar25._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar30._0_8_ =
       (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
  auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar30._8_8_);
  auVar26._0_8_ = -(ulonglong)(dVar10 < auVar30._0_8_);
  uVar12 = movmskpd((int)this,auVar26);
  auVar31._0_8_ = uVar15 & (ulonglong)(auVar36._0_8_ - dVar8);
  uVar13 = uVar17 & (ulonglong)(auVar36._8_8_ - dVar9);
  auVar31._8_4_ = (undefined4)uVar13;
  auVar31._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar5._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar36._4_4_;
  auVar5._0_4_ = ~(uint)uVar15 & auVar36._0_4_;
  auVar5._8_4_ = ~(uint)uVar17 & auVar36._8_4_;
  auVar5._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar36._12_4_;
  auVar31 = auVar31 | auVar5;
  auVar32._0_8_ =
       (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
  auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
  lVar18 = -(ulonglong)(dVar10 < auVar32._8_8_);
  auVar2._8_4_ = (int)lVar18;
  auVar2._0_8_ = -(ulonglong)(dVar10 < auVar32._0_8_);
  auVar2._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar11 = movmskpd(in_EAX,auVar2);
  if ((uVar12 & 0x3fffffff) != 0 || iVar11 != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_78,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl(&local_88,L"P=%f Y=%f R=%f");
    ::FString::PrintfImpl
              (local_68,L"Expected \'%s\' to be %s, but it was %s and outside tolerance %f.");
    (*pcVar1)(this,local_68,1);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual @ 141834650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,float param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_EAX;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  dVar15 = (param_3->Translation).ZW.m128d_f64[0] - (param_2->Translation).ZW.m128d_f64[0];
  dVar17 = (param_3->Translation).ZW.m128d_f64[1] - (param_2->Translation).ZW.m128d_f64[1];
  dVar19 = (param_3->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  dVar21 = (param_3->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)(double)param_4;
  lVar14 = -(ulonglong)
            ((double)local_88.Data.AllocatorInstance.Data <
            (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar17,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar14;
  auVar2._0_8_ = -(ulonglong)
                  ((double)local_88.Data.AllocatorInstance.Data <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  uVar11 = movmskpd((int)this,auVar2);
  lVar14 = -(ulonglong)
            ((double)local_88.Data.AllocatorInstance.Data <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar7._8_4_ = (int)lVar14;
  auVar7._0_8_ = -(ulonglong)
                  ((double)local_88.Data.AllocatorInstance.Data <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar7._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  iVar10 = movmskpd(in_EAX,auVar7);
  if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar15 = (param_3->Rotation).ZW.m128d_f64[0];
    dVar17 = (param_3->Rotation).ZW.m128d_f64[1];
    dVar19 = (param_3->Rotation).XY.m128d_f64[0];
    dVar21 = (param_3->Rotation).XY.m128d_f64[1];
    dVar16 = dVar15 - (param_2->Rotation).ZW.m128d_f64[0];
    dVar18 = dVar17 - (param_2->Rotation).ZW.m128d_f64[1];
    dVar15 = dVar15 + (param_2->Rotation).ZW.m128d_f64[0];
    dVar17 = dVar17 + (param_2->Rotation).ZW.m128d_f64[1];
    dVar20 = dVar19 - (param_2->Rotation).XY.m128d_f64[0];
    dVar22 = dVar21 - (param_2->Rotation).XY.m128d_f64[1];
    dVar19 = dVar19 + (param_2->Rotation).XY.m128d_f64[0];
    dVar21 = dVar21 + (param_2->Rotation).XY.m128d_f64[1];
    lVar14 = -(ulonglong)
              ((double)local_88.Data.AllocatorInstance.Data <
              (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar18,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar14;
    auVar3._0_8_ = -(ulonglong)
                    ((double)local_88.Data.AllocatorInstance.Data <
                    (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar12 = movmskpd(0,auVar3);
    lVar14 = -(ulonglong)
              ((double)local_88.Data.AllocatorInstance.Data <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar14;
    auVar4._0_8_ = -(ulonglong)
                    ((double)local_88.Data.AllocatorInstance.Data <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar11 = movmskpd(iVar10,auVar4);
    uVar13 = iVar12 << 2 | uVar11;
    if (uVar13 != 0) {
      lVar14 = -(ulonglong)
                ((double)local_88.Data.AllocatorInstance.Data <
                (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar17,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar14;
      auVar5._0_8_ = -(ulonglong)
                      ((double)local_88.Data.AllocatorInstance.Data <
                      (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar15,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar13 = movmskpd(uVar13,auVar5);
      lVar14 = -(ulonglong)
                ((double)local_88.Data.AllocatorInstance.Data <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar14;
      auVar8._0_8_ = -(ulonglong)
                      ((double)local_88.Data.AllocatorInstance.Data <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd(uVar11,auVar8);
      if ((uVar13 & 0x3fffffff) != 0 || uVar11 != 0) goto LAB_141834795;
    }
    dVar15 = (param_3->Scale3D).ZW.m128d_f64[0] - (param_2->Scale3D).ZW.m128d_f64[0];
    dVar17 = (param_3->Scale3D).ZW.m128d_f64[1] - (param_2->Scale3D).ZW.m128d_f64[1];
    dVar19 = (param_3->Scale3D).XY.m128d_f64[0] - (param_2->Scale3D).XY.m128d_f64[0];
    dVar21 = (param_3->Scale3D).XY.m128d_f64[1] - (param_2->Scale3D).XY.m128d_f64[1];
    lVar14 = -(ulonglong)
              ((double)local_88.Data.AllocatorInstance.Data <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar14;
    auVar6._0_8_ = -(ulonglong)
                    ((double)local_88.Data.AllocatorInstance.Data <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar13 = movmskpd(0,auVar6);
    lVar14 = -(ulonglong)
              ((double)local_88.Data.AllocatorInstance.Data <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar14;
    auVar9._0_8_ = -(ulonglong)
                    ((double)local_88.Data.AllocatorInstance.Data <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar10 = movmskpd(uVar11,auVar9);
    if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
      return true;
    }
  }
LAB_141834795:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  UE::Math::TTransform<double>::ToString(param_2,local_68);
  UE::Math::TTransform<double>::ToString(param_3,&local_78);
  ::FString::PrintfImpl
            (&local_88,L"Expected \'%s\' to be %s, but it was %s and outside tolerance %f.");
  (*pcVar1)(this,&local_88,1);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual @ 141834890

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  dVar3 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar2 = (double)param_4;
  if ((((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar2) &&
      (dVar3 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y,
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar2)) &&
     (dVar3 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z,
     (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar2)) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl
            (local_38,L"Expected \'%s\' to be %s, but it was %s and outside tolerance %f.");
  (*pcVar1)(this,local_38,1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual @ 141834a40

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,FColor param_2,FColor param_3)

{
  code *pcVar1;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_3.field0_0x0 != param_2.field0_0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    local_res18[0] = param_2.field0_0x0;
    local_res20[0] = param_3.field0_0x0;
    FColor::ToString((FColor *)&local_res18[0]._s_0,&local_28);
    FColor::ToString((FColor *)&local_res20[0]._s_0,&local_38);
    ::FString::PrintfImpl(&local_48,L"Expected \'%s\' to be %s, but it was %s.");
    (*pcVar1)(this,&local_48,1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual @ 141834b40

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,FLinearColor *param_2,FLinearColor *param_3)

{
  code *pcVar1;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (((((param_2->field0_0x0)._s_0.R == (param_3->field0_0x0)._s_0.R) &&
       ((param_2->field0_0x0)._s_0.G == (param_3->field0_0x0)._s_0.G)) &&
      ((param_2->field0_0x0)._s_0.B == (param_3->field0_0x0)._s_0.B)) &&
     ((param_2->field0_0x0)._s_0.A == (param_3->field0_0x0)._s_0.A)) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  FLinearColor::ToString(param_2,&local_28);
  FLinearColor::ToString(param_3,&local_38);
  ::FString::PrintfImpl(&local_48,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar1)(this,&local_48,1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual @ 141834c70

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<char8_t> *param_2,
          TStringView<char8_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_58;
  TStringView<char8_t> local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) goto LAB_141834cce;
  }
  if (iVar1 == iVar4) {
    return true;
  }
LAB_141834cce:
  local_48.DataPtr = param_2->DataPtr;
  local_48.Size = param_2->Size;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  GetStringValueToDisplay(this,&local_28,&local_48);
  local_48.DataPtr = param_3->DataPtr;
  local_48.Size = param_3->Size;
  local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GetStringValueToDisplay(this,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar2)(this,&local_58,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual @ 141834dc0

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) goto LAB_141834e1d;
  }
  if (iVar1 == iVar4) {
    return true;
  }
LAB_141834e1d:
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  if (param_2->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_38,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_38,L"\"%.*s\"");
  }
  if (param_3->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_48,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
  }
  ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar2)(this,&local_28,1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual @ 141834f50

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,FName param_2,FName param_3)

{
  code *pcVar1;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_2.ComparisonIndex.Value.Value == param_3.ComparisonIndex.Value.Value) &&
     (param_2.Number == param_3.Number)) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  local_res18 = param_2;
  local_res20 = param_3;
  ::FName::ToString(&local_res18,&local_28);
  ::FName::ToString(&local_res20,&local_38);
  ::FString::PrintfImpl(&local_48,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar1)(this,&local_48,1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual @ 141835060

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,FText *param_2,FText *param_3)

{
  code *pcVar1;
  ITextData *pIVar2;
  bool bVar3;
  FString local_28;
  
  bVar3 = FText::EqualToCaseIgnored(param_2,param_2);
  if (!bVar3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    FText::ToString(param_2);
    FText::ToString(param_3);
    ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to be %s, but it was %s.");
    (*pcVar1)(this,&local_28,1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pIVar2 = (param_2->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (param_3->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    return false;
  }
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (param_3->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return true;
}

// TestEqual @ 141835180

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 != param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be %lld, but it was %lld.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual @ 1418351f0

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 != param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be %llu, but it was %llu.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqualInsensitive @ 141835260

bool __thiscall
FAutomationTestBase::TestEqualInsensitive
          (FAutomationTestBase *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined4 local_20;
  
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t *)0x0)) {
    bVar3 = param_2 == param_3;
  }
  else {
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,param_3);
    bVar3 = iVar2 == 0;
  }
  if (bVar3 == false) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    if (param_2 == (wchar_t *)0x0) {
      local_38.Data.ArrayNum = 0;
      ::FString::FString(&local_48,L"nullptr");
    }
    else {
      wcslen(param_2);
      ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
    }
    if (param_3 == (wchar_t *)0x0) {
      local_20 = 0;
      ::FString::FString(&local_58,L"nullptr");
    }
    else {
      wcslen(param_3);
      ::FString::PrintfImpl(&local_58,L"\"%.*s\"");
    }
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to be %s, but it was %s.");
    (*pcVar1)(this,&local_38,1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// TestEqualInsensitive @ 1418353f0

bool __thiscall
FAutomationTestBase::TestEqualInsensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<char8_t> *param_2,
          TStringView<char8_t> *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_58;
  TStringView<char8_t> local_48;
  FString local_38;
  FString local_28;
  
  iVar3 = (int)*(undefined8 *)&param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar3 != 0) && (iVar4 != 0)) {
    iVar2 = iVar4;
    if (iVar3 < iVar4) {
      iVar2 = iVar3;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar2);
    if (iVar2 != 0) goto LAB_141835454;
  }
  if (iVar3 == iVar4) {
    return true;
  }
LAB_141835454:
  local_48.DataPtr = param_2->DataPtr;
  local_48.Size = param_2->Size;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  GetStringValueToDisplay(this,&local_28,&local_48);
  local_48.DataPtr = param_3->DataPtr;
  local_48.Size = param_3->Size;
  local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GetStringValueToDisplay(this,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar1)(this,&local_58,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqualInsensitive @ 141835540

bool __thiscall
FAutomationTestBase::TestEqualInsensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  iVar3 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar4 != 0) && (iVar3 != 0)) {
    iVar2 = iVar3;
    if (iVar4 < iVar3) {
      iVar2 = iVar4;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar2);
    if (iVar2 != 0) goto LAB_1418355a6;
  }
  if (iVar4 == iVar3) {
    return true;
  }
LAB_1418355a6:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  if (param_2->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_38,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_38,L"\"%.*s\"");
  }
  if (param_3->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_48,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
  }
  ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar1)(this,&local_28,1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqualSensitive @ 1418356c0

bool __thiscall
FAutomationTestBase::TestEqualSensitive
          (FAutomationTestBase *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined4 local_20;
  
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t *)0x0)) {
    bVar3 = param_2 == param_3;
  }
  else {
    iVar2 = wcscmp(param_2,param_3);
    bVar3 = iVar2 == 0;
  }
  if (bVar3 == false) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    if (param_2 == (wchar_t *)0x0) {
      local_38.Data.ArrayNum = 0;
      ::FString::FString(&local_48,L"nullptr");
    }
    else {
      wcslen(param_2);
      ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
    }
    if (param_3 == (wchar_t *)0x0) {
      local_20 = 0;
      ::FString::FString(&local_58,L"nullptr");
    }
    else {
      wcslen(param_3);
      ::FString::PrintfImpl(&local_58,L"\"%.*s\"");
    }
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to be %s, but it was %s.");
    (*pcVar1)(this,&local_38,1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// TestEqualSensitive @ 141835850

bool __thiscall
FAutomationTestBase::TestEqualSensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<char8_t> *param_2,
          TStringView<char8_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_58;
  TStringView<char8_t> local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = strncmp((char *)param_2->DataPtr,(char *)param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) goto LAB_1418358af;
  }
  if (iVar1 == iVar4) {
    return true;
  }
LAB_1418358af:
  local_48.DataPtr = param_2->DataPtr;
  local_48.Size = param_2->Size;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  GetStringValueToDisplay(this,&local_28,&local_48);
  local_48.DataPtr = param_3->DataPtr;
  local_48.Size = param_3->Size;
  local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GetStringValueToDisplay(this,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar2)(this,&local_58,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqualSensitive @ 1418359a0

bool __thiscall
FAutomationTestBase::TestEqualSensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = wcsncmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) goto LAB_1418359fe;
  }
  if (iVar1 == iVar4) {
    return true;
  }
LAB_1418359fe:
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  if (param_2->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_38,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_38,L"\"%.*s\"");
  }
  if (param_3->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_48,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
  }
  ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to be %s, but it was %s.");
  (*pcVar2)(this,&local_28,1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestFalse @ 141835b30

bool __thiscall
FAutomationTestBase::TestFalse(FAutomationTestBase *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be false.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestGreaterEqual @ 141835ba0

bool __thiscall
FAutomationTestBase::TestGreaterEqual
          (FAutomationTestBase *this,wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_3 <= param_2) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl
            (&local_18,L"Expected \'%s\' to be greater than or equal to %d, but it was %d.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestGreaterEqual @ 141835c10

bool __thiscall
FAutomationTestBase::TestGreaterEqual
          (FAutomationTestBase *this,wchar_t *param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2 <= param_3) &&
     (param_4 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"Expected \'%s\' to be greater than or equal to %f, but it was %f and outside equality tolerance %f."
              );
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestGreaterEqual @ 141835cc0

bool __thiscall
FAutomationTestBase::TestGreaterEqual
          (FAutomationTestBase *this,wchar_t *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2 <= param_3) &&
     (param_4 < (double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(param_2 - param_3,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"Expected \'%s\' to be greater than or equal to %f, but it was %f and outside equality tolerance %f."
              );
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestGreaterEqual @ 141835d60

bool __thiscall
FAutomationTestBase::TestGreaterEqual
          (FAutomationTestBase *this,wchar_t *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_3 <= param_2) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl
            (&local_18,L"Expected \'%s\' to be greater than or equal to %lld, but it was %lld.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestGreaterEqual @ 141835dd0

bool __thiscall
FAutomationTestBase::TestGreaterEqual
          (FAutomationTestBase *this,wchar_t *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_3 <= param_2) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl
            (&local_18,L"Expected \'%s\' to be greater than or equal to %llu, but it was %llu.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestGreaterThan @ 141835e40

bool __thiscall
FAutomationTestBase::TestGreaterThan
          (FAutomationTestBase *this,wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_3 < param_2) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be greater than %d, but it was %d.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestGreaterThan @ 141835eb0

bool __thiscall
FAutomationTestBase::TestGreaterThan
          (FAutomationTestBase *this,wchar_t *param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_4 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (param_3 < param_2) {
      return true;
    }
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and outside equality tolerance %f."
    ;
  }
  else {
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and within equality tolerance %f.";
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,pwVar2);
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestGreaterThan @ 141835f60

bool __thiscall
FAutomationTestBase::TestGreaterThan
          (FAutomationTestBase *this,wchar_t *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_4 < (double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(param_2 - param_3,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (param_3 < param_2) {
      return true;
    }
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and outside equality tolerance %f."
    ;
  }
  else {
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and within equality tolerance %f.";
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,pwVar2);
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestGreaterThan @ 141836010

bool __thiscall
FAutomationTestBase::TestGreaterThan
          (FAutomationTestBase *this,wchar_t *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_3 < param_2) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be greater than %lld, but it was %lld.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestGreaterThan @ 141836080

bool __thiscall
FAutomationTestBase::TestGreaterThan
          (FAutomationTestBase *this,wchar_t *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_3 < param_2) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be greater than %llu, but it was %llu.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessEqual @ 1418360f0

bool __thiscall
FAutomationTestBase::TestLessEqual
          (FAutomationTestBase *this,wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 <= param_3) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be less than or equal to %d, but it was %d.")
  ;
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessEqual @ 141836160

bool __thiscall
FAutomationTestBase::TestLessEqual
          (FAutomationTestBase *this,wchar_t *param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_3 <= param_2) &&
     (param_4 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"Expected \'%s\' to be less than or equal to %f, but it was %f and outside equality tolerance %f."
              );
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestLessEqual @ 141836210

bool __thiscall
FAutomationTestBase::TestLessEqual
          (FAutomationTestBase *this,wchar_t *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_3 <= param_2) &&
     (param_4 < (double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(param_2 - param_3,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"Expected \'%s\' to be less than or equal to %f, but it was %f and outside equality tolerance %f."
              );
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestLessEqual @ 1418362b0

bool __thiscall
FAutomationTestBase::TestLessEqual
          (FAutomationTestBase *this,wchar_t *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 <= param_3) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl
            (&local_18,L"Expected \'%s\' to be less than or equal to %lld, but it was %lld.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessEqual @ 141836320

bool __thiscall
FAutomationTestBase::TestLessEqual
          (FAutomationTestBase *this,wchar_t *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 <= param_3) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl
            (&local_18,L"Expected \'%s\' to be less than or equal to %llu, but it was %llu.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessThan @ 141836390

bool __thiscall
FAutomationTestBase::TestLessThan
          (FAutomationTestBase *this,wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 < param_3) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be less than %d, but it was %d.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessThan @ 141836400

bool __thiscall
FAutomationTestBase::TestLessThan
          (FAutomationTestBase *this,wchar_t *param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_4 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (param_2 < param_3) {
      return true;
    }
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and outside equality tolerance %f."
    ;
  }
  else {
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and within equality tolerance %f.";
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,pwVar2);
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessThan @ 1418364b0

bool __thiscall
FAutomationTestBase::TestLessThan
          (FAutomationTestBase *this,wchar_t *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_4 < (double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(param_2 - param_3,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (param_2 < param_3) {
      return true;
    }
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and outside equality tolerance %f."
    ;
  }
  else {
    pwVar2 = L"Expected \'%s\' to be less than %f, but it was %f and within equality tolerance %f.";
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,pwVar2);
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessThan @ 141836560

bool __thiscall
FAutomationTestBase::TestLessThan
          (FAutomationTestBase *this,wchar_t *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 < param_3) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be less than %lld, but it was %lld.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestLessThan @ 1418365d0

bool __thiscall
FAutomationTestBase::TestLessThan
          (FAutomationTestBase *this,wchar_t *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 < param_3) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be less than %llu, but it was %llu.");
  (*pcVar1)(this,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNearlyEqual @ 141836640

bool __thiscall
FAutomationTestBase::TestNearlyEqual
          (FAutomationTestBase *this,wchar_t *param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_4 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,L"Expected \'%s\' to be %f, but it was %f and outside tolerance %f.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNearlyEqual @ 1418366e0

bool __thiscall
FAutomationTestBase::TestNearlyEqual
          (FAutomationTestBase *this,wchar_t *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_4 < (double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(param_2 - param_3,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,L"Expected \'%s\' to be %f, but it was %f and outside tolerance %f.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNearlyEqual @ 141836770

bool __thiscall
FAutomationTestBase::TestNearlyEqual
          (FAutomationTestBase *this,wchar_t *param_1,TRotator<double> *param_2,
          TRotator<double> *param_3,float param_4)

{
  bool bVar1;
  TRotator<double> local_48;
  TRotator<double> local_28;
  
  local_48.Pitch = param_3->Pitch;
  local_48.Yaw = param_3->Yaw;
  local_48.Roll = param_3->Roll;
  local_28.Pitch = param_2->Pitch;
  local_28.Yaw = param_2->Yaw;
  local_28.Roll = param_2->Roll;
  bVar1 = TestEqual(this,param_1,&local_28,&local_48,param_4);
  return bVar1;
}

// TestNearlyEqual @ 1418367d0

bool __thiscall
FAutomationTestBase::TestNearlyEqual
          (FAutomationTestBase *this,wchar_t *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,float param_4)

{
  bool bVar1;
  TTransform<double> local_c8;
  TTransform<double> local_68;
  
  local_c8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  local_c8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
  local_c8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  local_c8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
  local_c8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  local_c8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
  local_c8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  local_c8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
  local_c8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  local_c8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
  local_68.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_c8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  local_c8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  bVar1 = TestEqual(this,param_1,&local_68,&local_c8,param_4);
  return bVar1;
}

// TestNearlyEqual @ 141836880

bool __thiscall
FAutomationTestBase::TestNearlyEqual
          (FAutomationTestBase *this,wchar_t *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  FString local_88;
  FString local_78;
  FString local_68;
  double local_58;
  
  local_58 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (double)param_4;
  dVar4 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  if (((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar4 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y,
      dVar2 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar4 = local_58 - (param_2->field0_0x0)._s_0.Z,
     dVar2 < (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl
              (&local_68,L"Expected \'%s\' to be %s, but it was %s and outside tolerance %f.");
    (*pcVar1)(this,&local_68,1);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// TestNotEqual @ 141836a60

bool __thiscall
FAutomationTestBase::TestNotEqual
          (FAutomationTestBase *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined4 local_20;
  
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t *)0x0)) {
    bVar3 = param_2 == param_3;
  }
  else {
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,param_3);
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    if (param_2 == (wchar_t *)0x0) {
      local_38.Data.ArrayNum = 0;
      ::FString::FString(&local_48,L"nullptr");
    }
    else {
      wcslen(param_2);
      ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
    }
    if (param_3 == (wchar_t *)0x0) {
      local_20 = 0;
      ::FString::FString(&local_58,L"nullptr");
    }
    else {
      wcslen(param_3);
      ::FString::PrintfImpl(&local_58,L"\"%.*s\"");
    }
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to differ from %s, but it was %s.");
    (*pcVar1)(this,&local_38,1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return !bVar3;
}

// TestNotEqual @ 141836bf0

bool __thiscall
FAutomationTestBase::TestNotEqual
          (FAutomationTestBase *this,wchar_t *param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_4) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"Expected \'%s\' to be unequal to %f, but it was %f and within tolerance %f.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual @ 141836c90

bool __thiscall
FAutomationTestBase::TestNotEqual
          (FAutomationTestBase *this,wchar_t *param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_2 - param_3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      param_4) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,
               L"Expected \'%s\' to be unequal to %f, but it was %f and within tolerance %f.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual @ 141836d20

bool __thiscall
FAutomationTestBase::TestNotEqual
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<char8_t> *param_2,
          TStringView<char8_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_58;
  TStringView<char8_t> local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) {
      return true;
    }
  }
  if (iVar1 != iVar4) {
    return true;
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.Size = param_2->Size;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  GetStringValueToDisplay(this,&local_28,&local_48);
  local_48.DataPtr = param_3->DataPtr;
  local_48.Size = param_3->Size;
  local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GetStringValueToDisplay(this,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"Expected \'%s\' to differ from %s, but it was %s.");
  (*pcVar2)(this,&local_58,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNotEqual @ 141836e70

bool __thiscall
FAutomationTestBase::TestNotEqual
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) {
      return true;
    }
  }
  if (iVar1 != iVar4) {
    return true;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  if (param_2->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_38,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_38,L"\"%.*s\"");
  }
  if (param_3->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_48,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
  }
  ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to differ from %s, but it was %s.");
  (*pcVar2)(this,&local_28,1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNotEqual @ 141837000

bool __thiscall
FAutomationTestBase::TestNotEqual
          (FAutomationTestBase *this,wchar_t *param_1,FName param_2,FName param_3)

{
  code *pcVar1;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_2.ComparisonIndex.Value.Value == param_3.ComparisonIndex.Value.Value) &&
     (param_2.Number == param_3.Number)) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    local_res18 = param_2;
    local_res20 = param_3;
    ::FName::ToString(&local_res18,&local_28);
    ::FName::ToString(&local_res20,&local_38);
    ::FString::PrintfImpl(&local_48,L"Expected \'%s\' to differ from %s, but it was %s.");
    (*pcVar1)(this,&local_48,1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual @ 141837110

bool __thiscall
FAutomationTestBase::TestNotEqual
          (FAutomationTestBase *this,wchar_t *param_1,FText *param_2,FText *param_3)

{
  code *pcVar1;
  ITextData *pIVar2;
  bool bVar3;
  FString local_28;
  
  bVar3 = FText::EqualToCaseIgnored(param_2,param_2);
  if (bVar3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    FText::ToString(param_2);
    FText::ToString(param_3);
    ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to differ from %s, but it was %s.");
    (*pcVar1)(this,&local_28,1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pIVar2 = (param_2->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (param_3->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    return false;
  }
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (param_3->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return true;
}

// TestNotEqualInsensitive @ 141837230

bool __thiscall
FAutomationTestBase::TestNotEqualInsensitive
          (FAutomationTestBase *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined4 local_20;
  
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t *)0x0)) {
    bVar3 = param_2 == param_3;
  }
  else {
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,param_3);
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    if (param_2 == (wchar_t *)0x0) {
      local_38.Data.ArrayNum = 0;
      ::FString::FString(&local_48,L"nullptr");
    }
    else {
      wcslen(param_2);
      ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
    }
    if (param_3 == (wchar_t *)0x0) {
      local_20 = 0;
      ::FString::FString(&local_58,L"nullptr");
    }
    else {
      wcslen(param_3);
      ::FString::PrintfImpl(&local_58,L"\"%.*s\"");
    }
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to differ from %s, but it was %s.");
    (*pcVar1)(this,&local_38,1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return !bVar3;
}

// TestNotEqualInsensitive @ 1418373c0

bool __thiscall
FAutomationTestBase::TestNotEqualInsensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<char8_t> *param_2,
          TStringView<char8_t> *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_58;
  TStringView<char8_t> local_48;
  FString local_38;
  FString local_28;
  
  iVar3 = (int)*(undefined8 *)&param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar3 != 0) && (iVar4 != 0)) {
    iVar2 = iVar4;
    if (iVar3 < iVar4) {
      iVar2 = iVar3;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar2);
    if (iVar2 != 0) {
      return true;
    }
  }
  if (iVar3 != iVar4) {
    return true;
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.Size = param_2->Size;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  GetStringValueToDisplay(this,&local_28,&local_48);
  local_48.DataPtr = param_3->DataPtr;
  local_48.Size = param_3->Size;
  local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GetStringValueToDisplay(this,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"Expected \'%s\' to differ from %s, but it was %s.");
  (*pcVar1)(this,&local_58,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNotEqualInsensitive @ 141837520

bool __thiscall
FAutomationTestBase::TestNotEqualInsensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  iVar3 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar4 != 0) && (iVar3 != 0)) {
    iVar2 = iVar3;
    if (iVar4 < iVar3) {
      iVar2 = iVar4;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar2);
    if (iVar2 != 0) {
      return true;
    }
  }
  if (iVar4 != iVar3) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  if (param_2->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_38,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_38,L"\"%.*s\"");
  }
  if (param_3->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_48,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
  }
  ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to differ from %s, but it was %s.");
  (*pcVar1)(this,&local_28,1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNotEqualSensitive @ 1418376b0

bool __thiscall
FAutomationTestBase::TestNotEqualSensitive
          (FAutomationTestBase *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined4 local_20;
  
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t *)0x0)) {
    bVar3 = param_2 == param_3;
  }
  else {
    iVar2 = wcscmp(param_2,param_3);
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    if (param_2 == (wchar_t *)0x0) {
      local_38.Data.ArrayNum = 0;
      ::FString::FString(&local_48,L"nullptr");
    }
    else {
      wcslen(param_2);
      ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
    }
    if (param_3 == (wchar_t *)0x0) {
      local_20 = 0;
      ::FString::FString(&local_58,L"nullptr");
    }
    else {
      wcslen(param_3);
      ::FString::PrintfImpl(&local_58,L"\"%.*s\"");
    }
    ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to differ from %s, but it was %s.");
    (*pcVar1)(this,&local_38,1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return !bVar3;
}

// TestNotEqualSensitive @ 141837840

bool __thiscall
FAutomationTestBase::TestNotEqualSensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<char8_t> *param_2,
          TStringView<char8_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_58;
  TStringView<char8_t> local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = strncmp((char *)param_2->DataPtr,(char *)param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) {
      return true;
    }
  }
  if (iVar1 != iVar4) {
    return true;
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.Size = param_2->Size;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  GetStringValueToDisplay(this,&local_28,&local_48);
  local_48.DataPtr = param_3->DataPtr;
  local_48.Size = param_3->Size;
  local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
  GetStringValueToDisplay(this,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"Expected \'%s\' to differ from %s, but it was %s.");
  (*pcVar2)(this,&local_58,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNotEqualSensitive @ 141837990

bool __thiscall
FAutomationTestBase::TestNotEqualSensitive
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    iVar3 = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = iVar1;
    }
    iVar3 = wcsncmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar3);
    if (iVar3 != 0) {
      return true;
    }
  }
  if (iVar1 != iVar4) {
    return true;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  if (param_2->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_38,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_38,L"\"%.*s\"");
  }
  if (param_3->DataPtr == (wchar_t *)0x0) {
    ::FString::FString(&local_48,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_48,L"\"%.*s\"");
  }
  ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to differ from %s, but it was %s.");
  (*pcVar2)(this,&local_28,1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNull @ 141837b20

bool __thiscall
FAutomationTestBase::TestNull(FAutomationTestBase *this,wchar_t *param_1,void *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 != (void *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be null.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestTrue @ 141837b90

bool __thiscall
FAutomationTestBase::TestTrue(FAutomationTestBase *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (!param_2) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be true.");
    (*pcVar1)(this,&local_18,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<FGuid> @ 141a56900

bool __thiscall
FAutomationTestBase::TestEqual<FGuid>
          (FAutomationTestBase *this,FString *param_1,FGuid *param_2,FGuid *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((param_2->D != param_3->D || param_2->C != param_3->C) || param_2->B != param_3->B) ||
      param_2->A != param_3->A) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<FIoHash> @ 141a569a0

bool __thiscall
FAutomationTestBase::TestEqual<FIoHash>
          (FAutomationTestBase *this,wchar_t *param_1,FIoHash *param_2,FIoHash *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((*(longlong *)param_2->Hash == *(longlong *)param_3->Hash) &&
      (*(longlong *)(param_2->Hash + 8) == *(longlong *)(param_3->Hash + 8))) &&
     (*(int *)(param_2->Hash + 0x10) == *(int *)(param_3->Hash + 0x10))) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TMemoryView<void_const_>_> @ 141a56a20

bool __thiscall
FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
          (FAutomationTestBase *this,wchar_t *param_1,TMemoryView<void_const_> *param_2,
          TMemoryView<void_const_> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2->Size == param_3->Size) && ((param_2->Size == 0 || (param_2->Data == param_3->Data)))
     ) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<FCbObjectId> @ 141a56aa0

bool __thiscall
FAutomationTestBase::TestEqual<FCbObjectId>
          (FAutomationTestBase *this,FString *param_1,FCbObjectId *param_2,FCbObjectId *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((*(longlong *)param_2->Bytes == *(longlong *)param_3->Bytes) &&
     (*(int *)(param_2->Bytes + 8) == *(int *)(param_3->Bytes + 8))) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNotEqual<TMemoryView<void_const_>_> @ 141a6a8f0

bool __thiscall
FAutomationTestBase::TestNotEqual<TMemoryView<void_const_>_>
          (FAutomationTestBase *this,wchar_t *param_1,TMemoryView<void_const_> *param_2,
          TMemoryView<void_const_> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2->Size == param_3->Size) && ((param_2->Size == 0 || (param_2->Data == param_3->Data)))
     ) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<TStringView<char>_> @ 141c7cf80

bool __thiscall
FAutomationTestBase::TestEqual<TStringView<char>_>
          (FAutomationTestBase *this,wchar_t *param_1,TStringView<char> *param_2,
          TStringView<char> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FString local_18;
  
  iVar1 = param_2->Size;
  iVar4 = (int)*(undefined8 *)&param_3->Size;
  if (iVar1 == iVar4) {
    if ((iVar1 != 0) && (iVar4 != 0)) {
      iVar3 = iVar4;
      if (iVar1 < iVar4) {
        iVar3 = iVar1;
      }
      iVar3 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,param_3->DataPtr,(longlong)iVar3);
      if (iVar3 != 0) goto LAB_141c7cfda;
    }
    if (iVar1 == iVar4) {
      return true;
    }
  }
LAB_141c7cfda:
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar2)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<enum_ECbValidateError> @ 141ce13c0

bool __thiscall
FAutomationTestBase::TestEqual<enum_ECbValidateError>
          (FAutomationTestBase *this,wchar_t *param_1,ECbValidateError *param_2,
          ECbValidateError *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

