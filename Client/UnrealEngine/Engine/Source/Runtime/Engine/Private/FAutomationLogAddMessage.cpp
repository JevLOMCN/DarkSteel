// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487e7310

EAutomationTestFlags __thiscall
FAutomationLogAddMessage::GetTestFlags(FAutomationLogAddMessage *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487e7320

bool __thiscall FAutomationLogAddMessage::IsStressTest(FAutomationLogAddMessage *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487e7330

uint __thiscall FAutomationLogAddMessage::GetRequiredDeviceNum(FAutomationLogAddMessage *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487e7340

FString * __thiscall
FAutomationLogAddMessage::GetTestSourceFileName
          (FAutomationLogAddMessage *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487e7370

int __thiscall FAutomationLogAddMessage::GetTestSourceFileLine(FAutomationLogAddMessage *this)

{
  return 0x165;
}

// GetTests @ 1487e7380

/* WARNING: Removing unreachable block (ram,0x0001487e746d) */
/* WARNING: Removing unreachable block (ram,0x0001487e7538) */

void __thiscall
FAutomationLogAddMessage::GetTests
          (FAutomationLogAddMessage *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Log.Add Log Message");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1487e7560

bool __thiscall FAutomationLogAddMessage::RunTest(FAutomationLogAddMessage *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  ::FString::FString(&local_28,L"Test log message.");
  (*pcVar1)(this,&local_28,0,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Test log message.");
  uVar6 = *(int *)&this->field_0x78 - 1;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)&this->field_0x78) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  lVar7 = (longlong)*(int *)&this->field_0x78 * 0x58 + *(longlong *)&this->field_0x70;
  iVar5 = *(int *)(lVar7 + -0x48);
  if (iVar5 == local_38.Data.ArrayNum) {
    if (iVar5 < 2) goto LAB_1487e767a;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar7 + -0x50),(wchar_t *)local_38.Data.AllocatorInstance.Data)
    ;
    bVar2 = iVar5 == 0;
  }
  else {
    bVar2 = iVar5 + local_38.Data.ArrayNum == 1;
  }
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_1487e767a:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FAutomationTestExecutionInfo::RemoveAllEvents
            ((FAutomationTestExecutionInfo *)&this->field_0x30,Info);
  return true;
}

// GetBeautifiedTestName @ 1487e76b0

FString * __thiscall
FAutomationLogAddMessage::GetBeautifiedTestName
          (FAutomationLogAddMessage *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Log.Add Log Message");
  return __return_storage_ptr__;
}

