// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d9790

EAutomationTestFlags __thiscall FSetResTest::GetTestFlags(FSetResTest *this)

{
  return EngineFilter|ClientContext;
}

// IsStressTest @ 1487d97a0

bool __thiscall FSetResTest::IsStressTest(FSetResTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d97b0

uint __thiscall FSetResTest::GetRequiredDeviceNum(FSetResTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d97c0

FString * __thiscall
FSetResTest::GetTestSourceFileName(FSetResTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d97f0

int __thiscall FSetResTest::GetTestSourceFileLine(FSetResTest *this)

{
  return 0x4b;
}

// GetTests @ 1487d9800

/* WARNING: Removing unreachable block (ram,0x0001487d98ed) */
/* WARNING: Removing unreachable block (ram,0x0001487d99b8) */

void __thiscall
FSetResTest::GetTests
          (FSetResTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Windows.Set Resolution");
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

// RunTest @ 1487d99e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSetResTest::RunTest(FSetResTest *this,FString *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  EAutomationTestFlags EVar6;
  UClass *this_00;
  FOutputDeviceRedirector *pFVar7;
  UWorld *pUVar8;
  FAutomationTestFramework *pFVar9;
  FEngineWaitLatentCommand *pFVar10;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar11;
  FExecStringLatentCommand *pFVar12;
  FString *pFVar13;
  FEngineWaitLatentCommand *pFVar14;
  ForAnyElementType FVar15;
  TRawPtrProxy<FEngineWaitLatentCommand> local_res8 [2];
  TRawPtrProxy<FExecStringLatentCommand> local_res18;
  TRawPtrProxy<FEngineWaitLatentCommand> local_res20;
  FString local_d8;
  TRawPtrProxy<FExecStringLatentCommand> local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TSharedPtr<IAutomationLatentCommand,1> local_90;
  FString local_80;
  TSharedPtr<IAutomationLatentCommand,1> local_70;
  TSharedPtr<IAutomationLatentCommand,1> local_60;
  TSharedPtr<IAutomationLatentCommand,1> local_50;
  
  this_00 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  UGameMapsSettings::GetGameDefaultMap(&local_a0,Default);
  pUVar3 = GEngine;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar7 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_c0,L"Open %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_c0.Data.ArrayNum != 0) {
    FVar15.Data = local_c0.Data.AllocatorInstance.Data;
  }
  EVar6 = (**(code **)(*(longlong *)this + 8))(this);
  pUVar8 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestGameWorld(EVar6);
  (*pcVar1)(&pUVar3->_padding_,pUVar8,FVar15.Data,pFVar7);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_b0,L"setres %dx%d");
  pFVar9 = FAutomationTestFramework::Get();
  pFVar10 = ::operator_new(0x28);
  pFVar14 = (FEngineWaitLatentCommand *)0x0;
  local_res8[0].Object = pFVar14;
  if (pFVar10 != (FEngineWaitLatentCommand *)0x0) {
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar10->Duration = 2.0;
    local_res8[0].Object = pFVar10;
  }
  pTVar11 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>(&local_90,local_res8);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar9,pTVar11);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar12 = ::operator_new(0x30);
  if (pFVar12 == (FExecStringLatentCommand *)0x0) {
    pFVar12 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar13 = ::FString::FString(&local_80,L"setres 640x480");
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar12->ExecCommand,pFVar13);
    pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((((pFVar12->_padding_ != 0) && (pFVar12->_padding_ != 0)) &&
        (0 < *(int *)(pFVar12->_padding_ + 8))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_res18.Object = pFVar12;
  pTVar11 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_70,&local_res18)
  ;
  FAutomationTestFramework::EnqueueLatentCommand(pFVar9,pTVar11);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar10 = ::operator_new(0x28);
  if (pFVar10 != (FEngineWaitLatentCommand *)0x0) {
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar10->Duration = 2.0;
    pFVar14 = pFVar10;
  }
  local_res20.Object = pFVar14;
  pTVar11 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>(&local_60,&local_res20)
  ;
  FAutomationTestFramework::EnqueueLatentCommand(pFVar9,pTVar11);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar12 = ::operator_new(0x30);
  FVar15.Data = local_b0.Data.AllocatorInstance.Data;
  if (pFVar12 == (FExecStringLatentCommand *)0x0) {
    pFVar12 = (FExecStringLatentCommand *)0x0;
  }
  else {
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_b0.Data.ArrayNum == 0) {
      local_d8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_b0.Data.ArrayNum,
                 &local_d8.Data.ArrayMax);
      memcpy(local_d8.Data.AllocatorInstance.Data,FVar15.Data,(longlong)local_b0.Data.ArrayNum * 2);
    }
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar12->ExecCommand,&local_d8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (((pFVar12->_padding_ != 0) && (pFVar12->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar12->_padding_ + 8) &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar4)))) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_c8.Object = pFVar12;
  pTVar11 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_50,&local_c8);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar9,pTVar11);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1487d9d40

FString * __thiscall
FSetResTest::GetBeautifiedTestName(FSetResTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Windows.Set Resolution");
  return __return_storage_ptr__;
}

