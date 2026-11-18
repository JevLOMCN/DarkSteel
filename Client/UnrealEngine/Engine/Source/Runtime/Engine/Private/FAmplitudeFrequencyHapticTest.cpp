// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 147b95eb0

EAutomationTestFlags __thiscall
FAmplitudeFrequencyHapticTest::GetTestFlags(FAmplitudeFrequencyHapticTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 147b95ec0

bool __thiscall FAmplitudeFrequencyHapticTest::IsStressTest(FAmplitudeFrequencyHapticTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147b95ed0

uint __thiscall
FAmplitudeFrequencyHapticTest::GetRequiredDeviceNum(FAmplitudeFrequencyHapticTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 147b95ee0

FString * __thiscall
FAmplitudeFrequencyHapticTest::GetTestSourceFileName
          (FAmplitudeFrequencyHapticTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\Tests\\HapticTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147b95f10

int __thiscall
FAmplitudeFrequencyHapticTest::GetTestSourceFileLine(FAmplitudeFrequencyHapticTest *this)

{
  return 0x23;
}

// GetTests @ 147b95f20

/* WARNING: Removing unreachable block (ram,0x000147b9600d) */
/* WARNING: Removing unreachable block (ram,0x000147b960d8) */

void __thiscall
FAmplitudeFrequencyHapticTest::GetTests
          (FAmplitudeFrequencyHapticTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.VR.All.Haptics.AmplitudeAndFrequency");
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

// RunTest @ 147b96100

bool __thiscall
FAmplitudeFrequencyHapticTest::RunTest(FAmplitudeFrequencyHapticTest *this,FString *param_1)

{
  FAutomationTestFramework *pFVar1;
  FPlayAmplitudeFrequencyHapticLatentCommand *pFVar2;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar3;
  EControllerHand EVar4;
  uint uVar5;
  FPlayAmplitudeFrequencyHapticLatentCommand *pFVar7;
  TRawPtrProxy<FPlayAmplitudeFrequencyHapticLatentCommand> local_res18 [2];
  TSharedPtr<IAutomationLatentCommand,1> local_138;
  TSharedPtr<IAutomationLatentCommand,1> local_128;
  TSharedPtr<IAutomationLatentCommand,1> local_118;
  TSharedPtr<IAutomationLatentCommand,1> local_108;
  TSharedPtr<IAutomationLatentCommand,1> local_f8;
  TSharedPtr<IAutomationLatentCommand,1> local_e8;
  TSharedPtr<IAutomationLatentCommand,1> local_d8;
  TSharedPtr<IAutomationLatentCommand,1> local_c8;
  TSharedPtr<IAutomationLatentCommand,1> local_b8;
  TSharedPtr<IAutomationLatentCommand,1> local_a8;
  TSharedPtr<IAutomationLatentCommand,1> local_98;
  TSharedPtr<IAutomationLatentCommand,1> local_88;
  TSharedPtr<IAutomationLatentCommand,1> local_78;
  TSharedPtr<IAutomationLatentCommand,1> local_68;
  TSharedPtr<IAutomationLatentCommand,1> local_58;
  TSharedPtr<IAutomationLatentCommand,1> local_48;
  TSharedPtr<IAutomationLatentCommand,1> local_38;
  FPlayAmplitudeFrequencyHapticLatentCommand *pFVar6;
  
  pFVar7 = (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0;
  pFVar6 = pFVar7;
  do {
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    EVar4 = (EControllerHand)pFVar6;
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 0.25;
      pFVar2->Frequency = 1.0;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_138,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_128,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 0.5;
      pFVar2->Frequency = 1.0;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_118,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_108,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 0.75;
      pFVar2->Frequency = 1.0;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_f8,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_e8,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 1.0;
      pFVar2->Frequency = 1.0;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_d8,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_c8,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 1.0;
      pFVar2->Frequency = 0.25;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_b8,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_a8,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 1.0;
      pFVar2->Frequency = 0.5;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_98,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_88,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 1.0;
      pFVar2->Frequency = 0.75;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_78,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_68,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 1.0;
      pFVar2->Frequency = 1.0;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_58,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x28);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FWaitLatentCommand__6B_;
      *(undefined4 *)&pFVar2->Hand = 0x3f800000;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FWaitLatentCommand>
                       (&local_48,(TRawPtrProxy<FWaitLatentCommand> *)local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    pFVar1 = FAutomationTestFramework::Get();
    pFVar2 = ::operator_new(0x30);
    local_res18[0].Object = pFVar7;
    if (pFVar2 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = 0;
      pFVar2->_padding_ = (longlong)&___7FPlayAmplitudeFrequencyHapticLatentCommand__6B_;
      pFVar2->Hand = EVar4;
      pFVar2->Amplitude = 0.0;
      pFVar2->Frequency = 0.0;
      local_res18[0].Object = pFVar2;
    }
    pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FPlayAmplitudeFrequencyHapticLatentCommand>
                       (&local_38,local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
    uVar5 = (int)pFVar6 + 1;
    pFVar6 = (FPlayAmplitudeFrequencyHapticLatentCommand *)(ulonglong)uVar5;
  } while (uVar5 < 2);
  return true;
}

// GetBeautifiedTestName @ 147b96720

FString * __thiscall
FAmplitudeFrequencyHapticTest::GetBeautifiedTestName
          (FAmplitudeFrequencyHapticTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.VR.All.Haptics.AmplitudeAndFrequency");
  return __return_storage_ptr__;
}

