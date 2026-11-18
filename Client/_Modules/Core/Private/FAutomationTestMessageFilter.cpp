// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// CanBeUsedOnMultipleThreads @ 14181d9d0

bool __thiscall
FAutomationTestFramework::FAutomationTestMessageFilter::CanBeUsedOnMultipleThreads
          (FAutomationTestMessageFilter *this)

{
  return true;
}

// Serialize @ 1418319c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::FAutomationTestMessageFilter::Serialize
          (FAutomationTestMessageFilter *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  (**(code **)(this->_padding_ + 8))();
  return;
}

// Serialize @ 1418319f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::FAutomationTestMessageFilter::Serialize
          (FAutomationTestMessageFilter *this,wchar_t *param_1,Type param_2,FName *param_3,
          double param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<FFeedbackContext_*> aVar1;
  atomic<FAutomationTestBase_*> this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  Type local_res18 [16];
  FString local_48;
  
  aVar1 = this->DestinationContext;
  bVar4 = false;
  this_00 = this->CurTest;
  if (aVar1 == (atomic<FFeedbackContext_*>)0x0) {
    return;
  }
  local_res18[0] = param_2;
  if (this_00 != (atomic<FAutomationTestBase_*>)0x0) {
    bVar4 = true;
    pFVar5 = ::FString::FString(&local_48,param_1);
    bVar3 = FAutomationTestBase::IsExpectedMessage
                      ((FAutomationTestBase *)this_00,pFVar5,local_res18);
    if (bVar3) {
      bVar3 = true;
      goto LAB_141831a6c;
    }
  }
  bVar3 = false;
LAB_141831a6c:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->ActionCS;
  if (bVar3) {
    param_2 = Verbose;
  }
  local_res18[0] = param_2;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (**(code **)(*(longlong *)aVar1 + 8))(aVar1,param_1,param_2,param_3,param_4);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SerializeRecord @ 141831f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::FAutomationTestMessageFilter::SerializeRecord
          (FAutomationTestMessageFilter *this,FLogRecord *param_1)

{
  atomic<unsigned___int64> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<unsigned___int64> aVar2;
  atomic<FFeedbackContext_*> aVar3;
  atomic<FAutomationTestBase_*> this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FString *pFVar7;
  undefined1 auStack_508 [32];
  Type local_4e8 [8];
  FString local_4e0;
  undefined4 local_4d0;
  wchar_t *local_4c8;
  char *local_4c0;
  int local_4b8;
  FName local_4b4;
  Type local_4ac;
  long64 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_490;
  FLogTemplate *local_488;
  wchar_t *local_480;
  wchar_t *local_478;
  FString local_468;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_508;
  aVar3 = this->DestinationContext;
  bVar6 = false;
  this_00 = this->CurTest;
  local_4d0 = 0;
  if (aVar3 == (atomic<FFeedbackContext_*>)0x0) {
    return;
  }
  local_4c8 = param_1->Format;
  local_4a0 = *(undefined8 *)&param_1->Fields;
  uStack_498 = *(undefined8 *)&(param_1->Fields).field_0x8;
  local_490.Owner = *(FBufferOwner **)&(param_1->Fields).field_0x10;
  local_4c0 = param_1->File;
  local_4b8 = param_1->Line;
  local_4b4 = param_1->Category;
  local_4ac = param_1->Verbosity;
  local_4a8 = (param_1->Time).UtcTicks;
  if (local_490.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_490.Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      (local_490.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_490.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_488 = param_1->Template;
  local_480 = param_1->TextNamespace;
  local_478 = param_1->TextKey;
  if (1 < (byte)(local_4ac - Error)) goto LAB_1418320eb;
  local_458.Base = local_438;
  local_458.CurPos = local_438;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  local_458.End = (wchar_t *)local_38;
  UE::FLogRecord::FormatMessageTo(param_1,&local_458);
  if (this_00 == (atomic<FAutomationTestBase_*>)0x0) {
LAB_1418320af:
    bVar5 = false;
  }
  else {
    local_4e8[0] = Warning;
    local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4e0.Data.ArrayNum = 0;
    local_4e0.Data.ArrayMax = 0;
    pFVar7 = ::FString::ConstructFromPtrSize
                       (&local_468,local_458.Base,
                        (int)((longlong)local_458.CurPos - (longlong)local_458.Base >> 1));
    if (&local_4e0 != pFVar7) {
      if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
      }
      local_4e0.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e0.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_4e0.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
    bVar5 = FAutomationTestBase::IsExpectedMessage
                      ((FAutomationTestBase *)this_00,&local_4e0,local_4e8);
    if (!bVar5) goto LAB_1418320af;
    bVar5 = true;
  }
  if ((bVar6) && (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    local_4ac = Verbose;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
LAB_1418320eb:
  lpCriticalSection = &this->ActionCS;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (**(code **)(*(longlong *)aVar3 + 0x18))(aVar3,&local_4c8);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_490);
  return;
}

