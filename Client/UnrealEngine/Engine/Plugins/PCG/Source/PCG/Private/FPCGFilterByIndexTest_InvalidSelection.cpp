// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149faaaf0

EAutomationTestFlags __thiscall
FPCGFilterByIndexTest_InvalidSelection::GetTestFlags(FPCGFilterByIndexTest_InvalidSelection *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149faab00

bool __thiscall
FPCGFilterByIndexTest_InvalidSelection::IsStressTest(FPCGFilterByIndexTest_InvalidSelection *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149faab10

uint __thiscall
FPCGFilterByIndexTest_InvalidSelection::GetRequiredDeviceNum
          (FPCGFilterByIndexTest_InvalidSelection *this)

{
  return 1;
}

// GetTestSourceFileName @ 149faab20

FString * __thiscall
FPCGFilterByIndexTest_InvalidSelection::GetTestSourceFileName
          (FPCGFilterByIndexTest_InvalidSelection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149faab50

int __thiscall
FPCGFilterByIndexTest_InvalidSelection::GetTestSourceFileLine
          (FPCGFilterByIndexTest_InvalidSelection *this)

{
  return 0x134;
}

// GetTests @ 149faab60

/* WARNING: Removing unreachable block (ram,0x000149faac4d) */
/* WARNING: Removing unreachable block (ram,0x000149faad18) */

void __thiscall
FPCGFilterByIndexTest_InvalidSelection::GetTests
          (FPCGFilterByIndexTest_InvalidSelection *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.FilterByIndex.InvalidSelection");
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

// RunTest @ 149faad40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGFilterByIndexTest_InvalidSelection::RunTest
          (FPCGFilterByIndexTest_InvalidSelection *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGFilterByIndexSettings *pUVar2;
  FString *pFVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  UClass *local_res18 [2];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_e8;
  FTestData local_b8;
  
  local_res18[0] = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_b8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)local_res18);
  local_e8._0_8_ = 0;
  local_e8._40_8_ = 0;
  pUVar2 = PCGTestsCommon::GenerateSettings<UPCGFilterByIndexSettings>(&local_b8,&local_e8);
  pFVar3 = ::FString::FString(&local_f8,"Invalid expression in parsed string:");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar3,Contains,2,true);
  pFVar4 = ::FString::FString(&local_f8,"4:0");
  pFVar3 = &pUVar2->SelectedIndices;
  if (pFVar3 != pFVar4) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar2->SelectedIndices).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (pUVar2->SelectedIndices).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_108,&local_b8,pUVar2);
  bVar6 = local_108.ArrayNum == 0;
  ::FString::FString(&local_f8,"Output count");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar5.Data = local_f8.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar6);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (bVar6) {
    if ((FPCGTaggedData *)local_108.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    pFVar4 = ::FString::FString(&local_f8,"-1:-3");
    if (pFVar3 != pFVar4) {
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pUVar2->SelectedIndices).Data.ArrayNum = (pFVar4->Data).ArrayNum;
      (pUVar2->SelectedIndices).Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_108,&local_b8,pUVar2);
    bVar6 = local_108.ArrayNum == 0;
    ::FString::FString(&local_f8,"Output count");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar5.Data = local_f8.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar6);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if (bVar6) {
      if ((FPCGTaggedData *)local_108.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      pFVar4 = ::FString::FString(&local_f8,"Invalid character in parsed string:");
      FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar4,Contains,1,true);
      pFVar4 = ::FString::FString(&local_f8,"0,2:3,4*");
      if (pFVar3 != pFVar4) {
        pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pUVar2->SelectedIndices).Data.ArrayNum = (pFVar4->Data).ArrayNum;
        (pUVar2->SelectedIndices).Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_108,&local_b8,pUVar2);
      bVar6 = local_108.ArrayNum == 0;
      ::FString::FString(&local_f8,"Output count");
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar5.Data = local_f8.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar6)
      ;
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
      if (bVar6) {
        if ((FPCGTaggedData *)local_108.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        bVar6 = true;
        goto LAB_149fab07f;
      }
    }
  }
  if ((FPCGTaggedData *)local_108.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  bVar6 = false;
LAB_149fab07f:
  PCGTestsCommon::FTestData::~FTestData(&local_b8);
  return bVar6;
}

// GetBeautifiedTestName @ 149fab0b0

FString * __thiscall
FPCGFilterByIndexTest_InvalidSelection::GetBeautifiedTestName
          (FPCGFilterByIndexTest_InvalidSelection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.FilterByIndex.InvalidSelection");
  return __return_storage_ptr__;
}

