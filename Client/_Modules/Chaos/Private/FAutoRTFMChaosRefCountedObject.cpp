// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// GetTestFlags @ 1440bd3c0

EAutomationTestFlags __thiscall
FAutoRTFMChaosRefCountedObject::GetTestFlags(FAutoRTFMChaosRefCountedObject *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1440bd3d0

bool __thiscall FAutoRTFMChaosRefCountedObject::IsStressTest(FAutoRTFMChaosRefCountedObject *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1440bd3e0

uint __thiscall
FAutoRTFMChaosRefCountedObject::GetRequiredDeviceNum(FAutoRTFMChaosRefCountedObject *this)

{
  return 1;
}

// GetTestSourceFileName @ 1440bd3f0

FString * __thiscall
FAutoRTFMChaosRefCountedObject::GetTestSourceFileName
          (FAutoRTFMChaosRefCountedObject *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1440bd420

int __thiscall
FAutoRTFMChaosRefCountedObject::GetTestSourceFileLine(FAutoRTFMChaosRefCountedObject *this)

{
  return 0x10;
}

// GetTests @ 1440bd430

/* WARNING: Removing unreachable block (ram,0x0001440bd51d) */
/* WARNING: Removing unreachable block (ram,0x0001440bd5e8) */

void __thiscall
FAutoRTFMChaosRefCountedObject::GetTests
          (FAutoRTFMChaosRefCountedObject *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + ChaosRefCountedObject");
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

// RunTest @ 1440bd610

/* WARNING: Removing unreachable block (ram,0x0001440bd70c) */
/* WARNING: Removing unreachable block (ram,0x0001440bd714) */
/* WARNING: Removing unreachable block (ram,0x0001440bd739) */

bool __thiscall
FAutoRTFMChaosRefCountedObject::RunTest(FAutoRTFMChaosRefCountedObject *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FAutomationEvent local_78;
  undefined8 *local_40;
  FString local_38;
  undefined4 local_20;
  
  bVar3 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar3) {
    puVar6 = (undefined8 *)0x0;
    local_20 = 0;
    puVar4 = ::operator_new(0x10);
    local_40 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7FChaosRefCountedObject_Chaos__6B_;
      puVar4[1] = 0;
      local_40 = puVar4;
    }
    LOCK();
    *(int *)(local_40 + 1) = *(int *)(local_40 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(local_40 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)local_40 + 0xc) == 0)) {
      (**(code **)*local_40)(local_40,1);
    }
    puVar5 = ::operator_new(0x10);
    puVar4 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7FChaosRefCountedObject_Chaos__6B_;
      puVar5[1] = 0;
      puVar4 = puVar5;
    }
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp:47: TestEqual(TransientObject->GetRefCount(), 1)"
               ,*(int *)(puVar4 + 1),1);
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp:51: TestEqual(TransientObject->GetRefCount(), 2)"
               ,*(int *)(puVar4 + 1),2);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp:54: TestEqual(TransientObject->GetRefCount(), 1)"
               ,*(int *)(puVar4 + 1),1);
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar5 = ::operator_new(0x10);
    puVar4 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7FChaosRefCountedObject_Chaos__6B_;
      puVar5[1] = 0;
      puVar4 = puVar5;
    }
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp:62: TestEqual(TransientObject->GetRefCount(), 1)"
               ,*(int *)(puVar4 + 1),1);
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((iVar2 == 1) && (*(int *)((longlong)puVar4 + 0xc) == 0)) && (puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)(puVar4,1);
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp:68: TestEqual(TransientObject->GetRefCount(), 1)"
               ,*(int *)(puVar4 + 1),1);
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar5 = ::operator_new(0x10);
    puVar4 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7FChaosRefCountedObject_Chaos__6B_;
      puVar5[1] = 0;
      puVar4 = puVar5;
    }
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Tests\\AutoRTFMRefCountedObjectTests.cpp:81: TestEqual(TransientObject->GetRefCount(), 0)"
               ,*(int *)(puVar4 + 1),0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar5 = ::operator_new(0x10);
    puVar4 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7FChaosRefCountedObject_Chaos__6B_;
      puVar5[1] = 0;
      puVar4 = puVar5;
    }
    LOCK();
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar4 = ::operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7FChaosRefCountedObject_Chaos__6B_;
      puVar4[1] = 0;
      puVar6 = puVar4;
    }
    LOCK();
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  else {
    ::FString::FString(&local_38,
                       L"SKIPPED \'FAutoRTFMChaosRefCountedObject\' test. AutoRTFM disabled.");
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_78.Type = Info;
    local_78.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_78.Message.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_78.Message,
                 local_38.Data.ArrayNum,&local_78.Message.Data.ArrayMax);
      memcpy(local_78.Message.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_38.Data.ArrayNum * 2);
    }
    local_78.Artifact.A = 0;
    local_78.Artifact.B = 0;
    local_78.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Context.Data.ArrayNum = 0;
    local_78.Context.Data.ArrayMax = 0;
    local_78.Artifact.C = 0;
    local_78.Artifact.D = 0;
    FAutomationTestExecutionInfo::AddEvent
              ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_78,0,true);
    if (local_78.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Context.Data.AllocatorInstance.Data);
    }
    if (local_78.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Message.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 1440bda20

FString * __thiscall
FAutoRTFMChaosRefCountedObject::GetBeautifiedTestName
          (FAutoRTFMChaosRefCountedObject *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + ChaosRefCountedObject");
  return __return_storage_ptr__;
}

