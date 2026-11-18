// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487d9e70

EAutomationTestFlags __thiscall
FStatsVerificationMapTest::GetTestFlags(FStatsVerificationMapTest *this)

{
  return EngineFilter|ClientContext;
}

// IsStressTest @ 1487d9e80

bool __thiscall FStatsVerificationMapTest::IsStressTest(FStatsVerificationMapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487d9e90

uint __thiscall FStatsVerificationMapTest::GetRequiredDeviceNum(FStatsVerificationMapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487d9ea0

FString * __thiscall
FStatsVerificationMapTest::GetTestSourceFileName
          (FStatsVerificationMapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487d9ed0

int __thiscall FStatsVerificationMapTest::GetTestSourceFileLine(FStatsVerificationMapTest *this)

{
  return 0x6f;
}

// GetTests @ 1487d9ee0

/* WARNING: Removing unreachable block (ram,0x0001487d9fcd) */
/* WARNING: Removing unreachable block (ram,0x0001487da098) */

void __thiscall
FStatsVerificationMapTest::GetTests
          (FStatsVerificationMapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Maps.Stats Verification");
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

// RunTest @ 1487da0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FStatsVerificationMapTest::RunTest(FStatsVerificationMapTest *this,FString *param_1)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  EAutomationTestFlags EVar7;
  UClass *this_00;
  FOutputDeviceRedirector *pFVar8;
  UWorld *pUVar9;
  FAutomationTestFramework *pFVar10;
  FExecStringLatentCommand *pFVar11;
  FString *pFVar12;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar13;
  FEngineWaitLatentCommand *pFVar14;
  FEngineWaitLatentCommand *pFVar15;
  ForAnyElementType FVar16;
  TRawPtrProxy<FExecStringLatentCommand> local_res18;
  TRawPtrProxy<FEngineWaitLatentCommand> local_res20;
  TRawPtrProxy<FExecStringLatentCommand> local_1e8;
  TRawPtrProxy<FExecStringLatentCommand> local_1e0;
  TRawPtrProxy<FEngineWaitLatentCommand> local_1d8;
  TRawPtrProxy<FExecStringLatentCommand> local_1d0;
  TRawPtrProxy<FExecStringLatentCommand> local_1c8;
  TRawPtrProxy<FEngineWaitLatentCommand> local_1c0;
  TRawPtrProxy<FExecStringLatentCommand> local_1b8;
  TRawPtrProxy<FExecStringLatentCommand> local_1b0;
  TRawPtrProxy<FEngineWaitLatentCommand> local_1a8;
  TRawPtrProxy<FExecStringLatentCommand> local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TSharedPtr<IAutomationLatentCommand,1> local_158;
  TSharedPtr<IAutomationLatentCommand,1> local_148;
  FString local_138;
  TSharedPtr<IAutomationLatentCommand,1> local_128;
  FString local_118;
  TSharedPtr<IAutomationLatentCommand,1> local_108;
  TSharedPtr<IAutomationLatentCommand,1> local_f8;
  FString local_e8;
  TSharedPtr<IAutomationLatentCommand,1> local_d8;
  FString local_c8;
  TSharedPtr<IAutomationLatentCommand,1> local_b8;
  TSharedPtr<IAutomationLatentCommand,1> local_a8;
  FString local_98;
  TSharedPtr<IAutomationLatentCommand,1> local_88;
  FString local_78;
  TSharedPtr<IAutomationLatentCommand,1> local_68;
  TSharedPtr<IAutomationLatentCommand,1> local_58;
  FString local_48;
  TSharedPtr<IAutomationLatentCommand,1> local_38;
  
  this_00 = UAutomationTestSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar1 == (UObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AutomationTestSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                         ,0x7a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (*(longlong *)&pUVar1[1].field_0x20 == 0) {
    if ((byte)LogEngineAutomationTests._0_1_ < 5) goto LAB_1487da20b;
    FSoftObjectPath::GetLongPackageName((FSoftObjectPath *)&pUVar1[1].field_0x20,&local_178);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
  }
  else {
    FSoftObjectPath::GetLongPackageName((FSoftObjectPath *)&pUVar1[1].field_0x20,&local_188);
    pUVar4 = GEngine;
    pcVar3 = *(code **)(GEngine->_padding_ + 8);
    pFVar8 = GetGlobalLogSingleton();
    ::FString::PrintfImpl(&local_198,L"Open %s");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar16.Data = local_198.Data.AllocatorInstance.Data;
    }
    EVar7 = (**(code **)(*(longlong *)this + 8))(this);
    pUVar9 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestGameWorld(EVar7);
    (*pcVar3)(&pUVar4->_padding_,pUVar9,FVar16.Data,pFVar8);
    local_178.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
LAB_1487da20b:
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_168,L"stat game");
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
        (0 < *(int *)(pFVar11->_padding_ + 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pFVar15 = (FEngineWaitLatentCommand *)0x0;
  local_res18.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>
                      (&local_158,&local_res18);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar14 = ::operator_new(0x28);
  local_res20.Object = pFVar15;
  if (pFVar14 != (FEngineWaitLatentCommand *)0x0) {
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar14->Duration = 1.0;
    local_res20.Object = pFVar14;
  }
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>
                      (&local_148,&local_res20);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_138,L"stat game");
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar11->_padding_ + 8) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar5)))) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_1e8.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_128,&local_1e8);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_118,L"stat scenerendering");
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar11->_padding_ + 8) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar5)))) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_1e0.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_108,&local_1e0);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar14 = ::operator_new(0x28);
  local_1d8.Object = pFVar15;
  if (pFVar14 != (FEngineWaitLatentCommand *)0x0) {
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar14->Duration = 1.0;
    local_1d8.Object = pFVar14;
  }
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>(&local_f8,&local_1d8);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_e8,L"stat scenerendering");
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
        (0 < *(int *)(pFVar11->_padding_ + 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_1d0.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_d8,&local_1d0);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_c8,L"stat memory");
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar11->_padding_ + 8) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar5)))) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_1c8.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_b8,&local_1c8);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar14 = ::operator_new(0x28);
  local_1c0.Object = pFVar15;
  if (pFVar14 != (FEngineWaitLatentCommand *)0x0) {
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar14->Duration = 1.0;
    local_1c0.Object = pFVar14;
  }
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>(&local_a8,&local_1c0);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_98,L"stat memory");
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar11->_padding_ + 8) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar5)))) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_1b8.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_88,&local_1b8);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_78,L"stat slate");
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
        (0 < *(int *)(pFVar11->_padding_ + 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_1b0.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_68,&local_1b0);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar14 = ::operator_new(0x28);
  if (pFVar14 != (FEngineWaitLatentCommand *)0x0) {
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar14->Duration = 1.0;
    pFVar15 = pFVar14;
  }
  local_1a8.Object = pFVar15;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>(&local_58,&local_1a8);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar11 = ::operator_new(0x30);
  if (pFVar11 == (FExecStringLatentCommand *)0x0) {
    pFVar11 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar12 = ::FString::FString(&local_48,L"stat slate");
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar11->ExecCommand,pFVar12);
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar11->_padding_ + 8) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar5)))) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_1a0.Object = pFVar11;
  pTVar13 = TSharedPtr<IAutomationLatentCommand,1>::
            TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_38,&local_1a0);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar10,pTVar13);
  return true;
}

// GetBeautifiedTestName @ 1487da950

FString * __thiscall
FStatsVerificationMapTest::GetBeautifiedTestName
          (FStatsVerificationMapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Maps.Stats Verification");
  return __return_storage_ptr__;
}

