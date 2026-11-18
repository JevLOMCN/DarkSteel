// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa66d0

EAutomationTestFlags __thiscall
FPCGFilterByIndexTest_Basic::GetTestFlags(FPCGFilterByIndexTest_Basic *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa66e0

bool __thiscall FPCGFilterByIndexTest_Basic::IsStressTest(FPCGFilterByIndexTest_Basic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa66f0

uint __thiscall FPCGFilterByIndexTest_Basic::GetRequiredDeviceNum(FPCGFilterByIndexTest_Basic *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa6700

FString * __thiscall
FPCGFilterByIndexTest_Basic::GetTestSourceFileName
          (FPCGFilterByIndexTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGFilterByIndexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa6730

int __thiscall FPCGFilterByIndexTest_Basic::GetTestSourceFileLine(FPCGFilterByIndexTest_Basic *this)

{
  return 0xac;
}

// GetTests @ 149fa6740

/* WARNING: Removing unreachable block (ram,0x000149fa682d) */
/* WARNING: Removing unreachable block (ram,0x000149fa68f8) */

void __thiscall
FPCGFilterByIndexTest_Basic::GetTests
          (FPCGFilterByIndexTest_Basic *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.FilterByIndex.Basic");
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

// RunTest @ 149fa6920

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
FPCGFilterByIndexTest_Basic::RunTest(FPCGFilterByIndexTest_Basic *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGFilterByIndexSettings *pUVar5;
  FString *pFVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  UClass *local_res18 [2];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_568;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_558;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_548;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_538;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_528;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_518;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_508;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FTestData local_f8;
  FString local_68;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_58;
  
  local_res18[0] = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)local_res18);
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  pUVar5 = PCGTestsCommon::GenerateSettings<UPCGFilterByIndexSettings>(&local_f8,&local_58);
  pFVar6 = ::FString::FString(&local_68,L"Empty expression in parsed string");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar6,Contains,1,true);
  pFVar6 = &pUVar5->SelectedIndices;
  ::FString::Empty(pFVar6);
  PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_4f8,&local_f8,pUVar5);
  iVar2 = local_4f8.ArrayNum;
  ::FString::FString(&local_4e8,"Output count");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_4e8.Data.ArrayNum != 0) {
    FVar8.Data = local_4e8.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_4f8);
    ::FString::FString(&local_4d8,"Output is valid");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_4d8.Data.ArrayNum != 0) {
      FVar8.Data = local_4d8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_149fa8a2a;
    if (local_4f8.ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FVar8.Data = local_4f8.AllocatorInstance.Data;
    ::FString::FString(&local_4c8,"Output 1 filtered exclusively");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_4c8.Data.ArrayNum != 0) {
      FVar9.Data = local_4c8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                       *(FName *)(FVar8.Data + 0x60),PCGPinConstants::DefaultOutFilterLabel);
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_149fa8a2a;
    if (local_4f8.ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FVar8.Data = local_4f8.AllocatorInstance.Data;
    ::FString::FString(&local_4b8,"Output 2 filtered exclusively");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_4b8.Data.ArrayNum != 0) {
      FVar9.Data = local_4b8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                       *(FName *)(FVar8.Data + 0xd8),PCGPinConstants::DefaultOutFilterLabel);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_149fa8a2a;
    if (local_4f8.ArrayNum < 3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FVar8.Data = local_4f8.AllocatorInstance.Data;
    ::FString::FString(&local_4a8,"Output 3 filtered exclusively");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_4a8.Data.ArrayNum != 0) {
      FVar9.Data = local_4a8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                       *(FName *)(FVar8.Data + 0x150),PCGPinConstants::DefaultOutFilterLabel);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_149fa8a2a;
    if (local_4f8.ArrayNum < 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FVar8.Data = local_4f8.AllocatorInstance.Data;
    ::FString::FString(&local_498,"Output 4 filtered exclusively");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_498.Data.ArrayNum != 0) {
      FVar9.Data = local_498.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                       *(FName *)(FVar8.Data + 0x1c8),PCGPinConstants::DefaultOutFilterLabel);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_149fa8a2a;
    if (local_4f8.ArrayNum < 5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FVar8.Data = local_4f8.AllocatorInstance.Data;
    ::FString::FString(&local_488,"Output 5 filtered exclusively");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_488.Data.ArrayNum != 0) {
      FVar9.Data = local_488.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                       *(FName *)(FVar8.Data + 0x240),PCGPinConstants::DefaultOutFilterLabel);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_149fa8a2a;
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_4f8.AllocatorInstance.Data,local_4f8.ArrayNum);
    if ((FPCGTaggedData *)local_4f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_4f8.AllocatorInstance.Data);
    }
    pFVar7 = ::FString::FString(&local_168,"0,2,4");
    ::FString::operator=(pFVar6,pFVar7);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_508,&local_f8,pUVar5);
    iVar2 = local_508.ArrayNum;
    ::FString::FString(&local_478,"Output count");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_478.Data.ArrayNum != 0) {
      FVar8.Data = local_478.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_508);
      ::FString::FString(&local_468,"Output is valid");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_468.Data.ArrayNum != 0) {
        FVar8.Data = local_468.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3)
      ;
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_149fa8a18;
      if (local_508.ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      FVar8.Data = local_508.AllocatorInstance.Data;
      ::FString::FString(&local_458,"Output 1 filtered inclusively");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_458.Data.ArrayNum != 0) {
        FVar9.Data = local_458.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                         *(FName *)(FVar8.Data + 0x60),PCGPinConstants::DefaultInFilterLabel);
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_149fa8a18;
      if (local_508.ArrayNum < 2) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      FVar8.Data = local_508.AllocatorInstance.Data;
      ::FString::FString(&local_448,"Output 2 filtered exclusively");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_448.Data.ArrayNum != 0) {
        FVar9.Data = local_448.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                         *(FName *)(FVar8.Data + 0xd8),PCGPinConstants::DefaultOutFilterLabel);
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_149fa8a18;
      if (local_508.ArrayNum < 3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      FVar8.Data = local_508.AllocatorInstance.Data;
      ::FString::FString(&local_438,"Output 3 filtered inclusively");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_438.Data.ArrayNum != 0) {
        FVar9.Data = local_438.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                         *(FName *)(FVar8.Data + 0x150),PCGPinConstants::DefaultInFilterLabel);
      if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_149fa8a18;
      if (local_508.ArrayNum < 4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      FVar8.Data = local_508.AllocatorInstance.Data;
      ::FString::FString(&local_428,"Output 4 filtered exclusively");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_428.Data.ArrayNum != 0) {
        FVar9.Data = local_428.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                         *(FName *)(FVar8.Data + 0x1c8),PCGPinConstants::DefaultOutFilterLabel);
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_149fa8a18;
      if (local_508.ArrayNum < 5) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      FVar8.Data = local_508.AllocatorInstance.Data;
      ::FString::FString(&local_418,"Output 5 filtered inclusively");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_418.Data.ArrayNum != 0) {
        FVar9.Data = local_418.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                         *(FName *)(FVar8.Data + 0x240),PCGPinConstants::DefaultInFilterLabel);
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_149fa8a18;
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_508.AllocatorInstance.Data,local_508.ArrayNum);
      if ((FPCGTaggedData *)local_508.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_508.AllocatorInstance.Data);
      }
      pFVar7 = ::FString::FString(&local_158,"-2");
      ::FString::operator=(pFVar6,pFVar7);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_518,&local_f8,pUVar5);
      iVar2 = local_518.ArrayNum;
      ::FString::FString(&local_408,"Output count");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_518);
        ::FString::FString(&local_3f8,"Output is valid");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_3f8.Data.ArrayNum != 0) {
          FVar8.Data = local_3f8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3);
        if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
        }
        if (!bVar3) goto LAB_149fa8a06;
        if (local_518.ArrayNum < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        FVar8.Data = local_518.AllocatorInstance.Data;
        ::FString::FString(&local_3e8,"Output 1 filtered exclusively");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_3e8.Data.ArrayNum != 0) {
          FVar9.Data = local_3e8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                           *(FName *)(FVar8.Data + 0x60),PCGPinConstants::DefaultOutFilterLabel);
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        if (!bVar3) goto LAB_149fa8a06;
        if (local_518.ArrayNum < 2) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        FVar8.Data = local_518.AllocatorInstance.Data;
        ::FString::FString(&local_3d8,"Output 2 filtered exclusively");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_3d8.Data.ArrayNum != 0) {
          FVar9.Data = local_3d8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                           *(FName *)(FVar8.Data + 0xd8),PCGPinConstants::DefaultOutFilterLabel);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        if (!bVar3) goto LAB_149fa8a06;
        if (local_518.ArrayNum < 3) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        FVar8.Data = local_518.AllocatorInstance.Data;
        ::FString::FString(&local_3c8,"Output 3 filtered exclusively");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_3c8.Data.ArrayNum != 0) {
          FVar9.Data = local_3c8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                           *(FName *)(FVar8.Data + 0x150),PCGPinConstants::DefaultOutFilterLabel);
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
        if (!bVar3) goto LAB_149fa8a06;
        if (local_518.ArrayNum < 4) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        FVar8.Data = local_518.AllocatorInstance.Data;
        ::FString::FString(&local_3b8,"Output 4 filtered inclusively");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_3b8.Data.ArrayNum != 0) {
          FVar9.Data = local_3b8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                           *(FName *)(FVar8.Data + 0x1c8),PCGPinConstants::DefaultInFilterLabel);
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        if (!bVar3) goto LAB_149fa8a06;
        if (local_518.ArrayNum < 5) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        FVar8.Data = local_518.AllocatorInstance.Data;
        ::FString::FString(&local_3a8,"Output 5 filtered exclusively");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_3a8.Data.ArrayNum != 0) {
          FVar9.Data = local_3a8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                           *(FName *)(FVar8.Data + 0x240),PCGPinConstants::DefaultOutFilterLabel);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        if (!bVar3) goto LAB_149fa8a06;
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_518.AllocatorInstance.Data,local_518.ArrayNum);
        if ((FPCGTaggedData *)local_518.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_518.AllocatorInstance.Data);
        }
        pFVar7 = ::FString::FString(&local_148,"1:3");
        ::FString::operator=(pFVar6,pFVar7);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_528,&local_f8,pUVar5);
        iVar2 = local_528.ArrayNum;
        ::FString::FString(&local_398,"Output count");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_398.Data.ArrayNum != 0) {
          FVar8.Data = local_398.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_528);
          ::FString::FString(&local_388,"Output is valid");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_388.Data.ArrayNum != 0) {
            FVar8.Data = local_388.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3);
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          if (!bVar3) goto LAB_149fa89f1;
          if (local_528.ArrayNum < 1) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
          }
          FVar8.Data = local_528.AllocatorInstance.Data;
          ::FString::FString(&local_378,"Output 1 filtered exclusively");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_378.Data.ArrayNum != 0) {
            FVar9.Data = local_378.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                             *(FName *)(FVar8.Data + 0x60),PCGPinConstants::DefaultOutFilterLabel);
          if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.Data.AllocatorInstance.Data);
          }
          if (!bVar3) goto LAB_149fa89f1;
          if (local_528.ArrayNum < 2) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
          }
          FVar8.Data = local_528.AllocatorInstance.Data;
          ::FString::FString(&local_368,"Output 2 filtered inclusively");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_368.Data.ArrayNum != 0) {
            FVar9.Data = local_368.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                             *(FName *)(FVar8.Data + 0xd8),PCGPinConstants::DefaultInFilterLabel);
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
          }
          if (!bVar3) goto LAB_149fa89f1;
          if (local_528.ArrayNum < 3) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
          }
          FVar8.Data = local_528.AllocatorInstance.Data;
          ::FString::FString(&local_358,"Output 3 filtered inclusively");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_358.Data.ArrayNum != 0) {
            FVar9.Data = local_358.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                             *(FName *)(FVar8.Data + 0x150),PCGPinConstants::DefaultInFilterLabel);
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          if (!bVar3) goto LAB_149fa89f1;
          if (local_528.ArrayNum < 4) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
          }
          FVar8.Data = local_528.AllocatorInstance.Data;
          ::FString::FString(&local_348,"Output 4 filtered exclusively");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_348.Data.ArrayNum != 0) {
            FVar9.Data = local_348.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                             *(FName *)(FVar8.Data + 0x1c8),PCGPinConstants::DefaultOutFilterLabel);
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          if (!bVar3) goto LAB_149fa89f1;
          if (local_528.ArrayNum < 5) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
          }
          FVar8.Data = local_528.AllocatorInstance.Data;
          ::FString::FString(&local_338,"Output 5 filtered exclusively");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_338.Data.ArrayNum != 0) {
            FVar9.Data = local_338.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                             *(FName *)(FVar8.Data + 0x240),PCGPinConstants::DefaultOutFilterLabel);
          if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Data.AllocatorInstance.Data);
          }
          if (!bVar3) goto LAB_149fa89f1;
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_528.AllocatorInstance.Data,local_528.ArrayNum);
          if ((FPCGTaggedData *)local_528.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
            FMemory::Free(local_528.AllocatorInstance.Data);
          }
          pFVar7 = ::FString::FString(&local_138,"2:2");
          ::FString::operator=(pFVar6,pFVar7);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_538,&local_f8,pUVar5);
          iVar2 = local_538.ArrayNum;
          ::FString::FString(&local_328,"Output count");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_328.Data.ArrayNum != 0) {
            FVar8.Data = local_328.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
          if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_538);
            ::FString::FString(&local_318,"Output is valid");
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_318.Data.ArrayNum != 0) {
              FVar8.Data = local_318.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3);
            if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.Data.AllocatorInstance.Data);
            }
            if (!bVar3) goto LAB_149fa89dc;
            if (local_538.ArrayNum < 1) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
            }
            FVar8.Data = local_538.AllocatorInstance.Data;
            ::FString::FString(&local_308,"Output 1 filtered exclusively");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_308.Data.ArrayNum != 0) {
              FVar9.Data = local_308.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                               *(FName *)(FVar8.Data + 0x60),PCGPinConstants::DefaultOutFilterLabel)
            ;
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
            }
            if (!bVar3) goto LAB_149fa89dc;
            if (local_538.ArrayNum < 2) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
            }
            FVar8.Data = local_538.AllocatorInstance.Data;
            ::FString::FString(&local_2f8,"Output 2 filtered exclusively");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_2f8.Data.ArrayNum != 0) {
              FVar9.Data = local_2f8.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                               *(FName *)(FVar8.Data + 0xd8),PCGPinConstants::DefaultOutFilterLabel)
            ;
            if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
            }
            if (!bVar3) goto LAB_149fa89dc;
            if (local_538.ArrayNum < 3) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
            }
            FVar8.Data = local_538.AllocatorInstance.Data;
            ::FString::FString(&local_2e8,"Output 3 filtered inclusively");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_2e8.Data.ArrayNum != 0) {
              FVar9.Data = local_2e8.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                               *(FName *)(FVar8.Data + 0x150),PCGPinConstants::DefaultInFilterLabel)
            ;
            if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
            }
            if (!bVar3) goto LAB_149fa89dc;
            if (local_538.ArrayNum < 4) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
            }
            FVar8.Data = local_538.AllocatorInstance.Data;
            ::FString::FString(&local_2d8,"Output 4 filtered exclusively");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_2d8.Data.ArrayNum != 0) {
              FVar9.Data = local_2d8.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                               *(FName *)(FVar8.Data + 0x1c8),PCGPinConstants::DefaultOutFilterLabel
                              );
            if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
            }
            if (!bVar3) goto LAB_149fa89dc;
            if (local_538.ArrayNum < 5) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
            }
            FVar8.Data = local_538.AllocatorInstance.Data;
            ::FString::FString(&local_2c8,"Output 5 filtered exclusively");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_2c8.Data.ArrayNum != 0) {
              FVar9.Data = local_2c8.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                               *(FName *)(FVar8.Data + 0x240),PCGPinConstants::DefaultOutFilterLabel
                              );
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
            if (!bVar3) goto LAB_149fa89dc;
            DestructItems<FPCGTaggedData,int>
                      ((FPCGTaggedData *)local_538.AllocatorInstance.Data,local_538.ArrayNum);
            if ((FPCGTaggedData *)local_538.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
              FMemory::Free(local_538.AllocatorInstance.Data);
            }
            pFVar7 = ::FString::FString(&local_128,"-3:-1");
            ::FString::operator=(pFVar6,pFVar7);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_548,&local_f8,pUVar5);
            iVar2 = local_548.ArrayNum;
            ::FString::FString(&local_2b8,"Output count");
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_2b8.Data.ArrayNum != 0) {
              FVar8.Data = local_2b8.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
            if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
            }
            if (bVar3) {
              bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_548);
              ::FString::FString(&local_2a8,"Output is valid");
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_2a8.Data.ArrayNum != 0) {
                FVar8.Data = local_2a8.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestTrue
                                ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3);
              if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
              }
              if (!bVar3) goto LAB_149fa89c7;
              if (local_548.ArrayNum < 1) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  uVar4 = (*pcVar1)();
                  return (bool)uVar4;
                }
              }
              FVar8.Data = local_548.AllocatorInstance.Data;
              ::FString::FString(&local_298,"Output 1 filtered exclusively");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_298.Data.ArrayNum != 0) {
                FVar9.Data = local_298.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                 *(FName *)(FVar8.Data + 0x60),
                                 PCGPinConstants::DefaultOutFilterLabel);
              if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data.AllocatorInstance.Data);
              }
              if (!bVar3) goto LAB_149fa89c7;
              if (local_548.ArrayNum < 2) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  uVar4 = (*pcVar1)();
                  return (bool)uVar4;
                }
              }
              FVar8.Data = local_548.AllocatorInstance.Data;
              ::FString::FString(&local_288,"Output 2 filtered exclusively");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_288.Data.ArrayNum != 0) {
                FVar9.Data = local_288.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                 *(FName *)(FVar8.Data + 0xd8),
                                 PCGPinConstants::DefaultOutFilterLabel);
              if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_288.Data.AllocatorInstance.Data);
              }
              if (!bVar3) goto LAB_149fa89c7;
              if (local_548.ArrayNum < 3) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  uVar4 = (*pcVar1)();
                  return (bool)uVar4;
                }
              }
              FVar8.Data = local_548.AllocatorInstance.Data;
              ::FString::FString(&local_278,"Output 3 filtered inclusively");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_278.Data.ArrayNum != 0) {
                FVar9.Data = local_278.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                 *(FName *)(FVar8.Data + 0x150),
                                 PCGPinConstants::DefaultInFilterLabel);
              if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Data.AllocatorInstance.Data);
              }
              if (!bVar3) goto LAB_149fa89c7;
              if (local_548.ArrayNum < 4) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  uVar4 = (*pcVar1)();
                  return (bool)uVar4;
                }
              }
              FVar8.Data = local_548.AllocatorInstance.Data;
              ::FString::FString(&local_268,"Output 4 filtered inclusively");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_268.Data.ArrayNum != 0) {
                FVar9.Data = local_268.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                 *(FName *)(FVar8.Data + 0x1c8),
                                 PCGPinConstants::DefaultInFilterLabel);
              if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_268.Data.AllocatorInstance.Data);
              }
              if (!bVar3) goto LAB_149fa89c7;
              if (local_548.ArrayNum < 5) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  uVar4 = (*pcVar1)();
                  return (bool)uVar4;
                }
              }
              FVar8.Data = local_548.AllocatorInstance.Data;
              ::FString::FString(&local_258,"Output 5 filtered exclusively");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_258.Data.ArrayNum != 0) {
                FVar9.Data = local_258.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                 *(FName *)(FVar8.Data + 0x240),
                                 PCGPinConstants::DefaultOutFilterLabel);
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
              if (!bVar3) goto LAB_149fa89c7;
              DestructItems<FPCGTaggedData,int>
                        ((FPCGTaggedData *)local_548.AllocatorInstance.Data,local_548.ArrayNum);
              if ((FPCGTaggedData *)local_548.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
                FMemory::Free(local_548.AllocatorInstance.Data);
              }
              pFVar7 = ::FString::FString(&local_118,"0,2:3,4");
              ::FString::operator=(pFVar6,pFVar7);
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_558,&local_f8,pUVar5);
              iVar2 = local_558.ArrayNum;
              ::FString::FString(&local_248,"Output count");
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_248.Data.ArrayNum != 0) {
                FVar8.Data = local_248.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
              if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data.AllocatorInstance.Data);
              }
              if (bVar3) {
                bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_558);
                ::FString::FString(&local_238,"Output is valid");
                FVar8.Data = (FScriptContainerElement *)L"";
                if (local_238.Data.ArrayNum != 0) {
                  FVar8.Data = local_238.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3);
                if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                }
                if (!bVar3) goto LAB_149fa89b2;
                if (local_558.ArrayNum < 1) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    uVar4 = (*pcVar1)();
                    return (bool)uVar4;
                  }
                }
                FVar8.Data = local_558.AllocatorInstance.Data;
                ::FString::FString(&local_228,"Output 1 filtered inclusively");
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_228.Data.ArrayNum != 0) {
                  FVar9.Data = local_228.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                   *(FName *)(FVar8.Data + 0x60),
                                   PCGPinConstants::DefaultInFilterLabel);
                if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_228.Data.AllocatorInstance.Data);
                }
                if (!bVar3) goto LAB_149fa89b2;
                if (local_558.ArrayNum < 2) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    uVar4 = (*pcVar1)();
                    return (bool)uVar4;
                  }
                }
                FVar8.Data = local_558.AllocatorInstance.Data;
                ::FString::FString(&local_218,"Output 2 filtered exclusively");
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_218.Data.ArrayNum != 0) {
                  FVar9.Data = local_218.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                   *(FName *)(FVar8.Data + 0xd8),
                                   PCGPinConstants::DefaultOutFilterLabel);
                if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_218.Data.AllocatorInstance.Data);
                }
                if (!bVar3) goto LAB_149fa89b2;
                if (local_558.ArrayNum < 3) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    uVar4 = (*pcVar1)();
                    return (bool)uVar4;
                  }
                }
                FVar8.Data = local_558.AllocatorInstance.Data;
                ::FString::FString(&local_208,"Output 3 filtered inclusively");
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_208.Data.ArrayNum != 0) {
                  FVar9.Data = local_208.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                   *(FName *)(FVar8.Data + 0x150),
                                   PCGPinConstants::DefaultInFilterLabel);
                if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_208.Data.AllocatorInstance.Data);
                }
                if (!bVar3) goto LAB_149fa89b2;
                if (local_558.ArrayNum < 4) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    uVar4 = (*pcVar1)();
                    return (bool)uVar4;
                  }
                }
                FVar8.Data = local_558.AllocatorInstance.Data;
                ::FString::FString(&local_1f8,"Output 4 filtered exclusively");
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_1f8.Data.ArrayNum != 0) {
                  FVar9.Data = local_1f8.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                   *(FName *)(FVar8.Data + 0x1c8),
                                   PCGPinConstants::DefaultOutFilterLabel);
                if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                }
                if (!bVar3) goto LAB_149fa89b2;
                if (local_558.ArrayNum < 5) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar3) {
                    pcVar1 = (code *)swi(3);
                    uVar4 = (*pcVar1)();
                    return (bool)uVar4;
                  }
                }
                FVar8.Data = local_558.AllocatorInstance.Data;
                ::FString::FString(&local_1e8,"Output 5 filtered inclusively");
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_1e8.Data.ArrayNum != 0) {
                  FVar9.Data = local_1e8.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                   *(FName *)(FVar8.Data + 0x240),
                                   PCGPinConstants::DefaultInFilterLabel);
                if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                }
                if (!bVar3) goto LAB_149fa89b2;
                DestructItems<FPCGTaggedData,int>
                          ((FPCGTaggedData *)local_558.AllocatorInstance.Data,local_558.ArrayNum);
                if ((FPCGTaggedData *)local_558.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
                  FMemory::Free(local_558.AllocatorInstance.Data);
                }
                pUVar5->bInvertFilter = true;
                pFVar7 = ::FString::FString(&local_108,"0,2:3,4");
                ::FString::operator=(pFVar6,pFVar7);
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                PCGFilterByIndexTest::Helpers::ResetAndExecuteData(&local_568,&local_f8,pUVar5);
                iVar2 = local_568.ArrayNum;
                ::FString::FString(&local_1d8,"Output count");
                FVar8.Data = (FScriptContainerElement *)L"";
                if (local_1d8.Data.ArrayNum != 0) {
                  FVar8.Data = local_1d8.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar2,5);
                if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                }
                if (bVar3) {
                  bVar3 = PCGFilterByIndexTest::Helpers::ValidateOutputData(&local_568);
                  ::FString::FString(&local_1c8,"Output is valid");
                  FVar8.Data = (FScriptContainerElement *)L"";
                  if (local_1c8.Data.ArrayNum != 0) {
                    FVar8.Data = local_1c8.Data.AllocatorInstance.Data;
                  }
                  bVar3 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar3);
                  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    if (local_568.ArrayNum < 1) {
                      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar3) {
                        pcVar1 = (code *)swi(3);
                        uVar4 = (*pcVar1)();
                        return (bool)uVar4;
                      }
                    }
                    FVar8.Data = local_568.AllocatorInstance.Data;
                    ::FString::FString(&local_1b8,"Output 1 filtered exclusively");
                    FVar9.Data = (FScriptContainerElement *)L"";
                    if (local_1b8.Data.ArrayNum != 0) {
                      FVar9.Data = local_1b8.Data.AllocatorInstance.Data;
                    }
                    bVar3 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                       *(FName *)(FVar8.Data + 0x60),
                                       PCGPinConstants::DefaultOutFilterLabel);
                    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                    }
                    if (bVar3) {
                      if (local_568.ArrayNum < 2) {
                        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar3) {
                          pcVar1 = (code *)swi(3);
                          uVar4 = (*pcVar1)();
                          return (bool)uVar4;
                        }
                      }
                      FVar8.Data = local_568.AllocatorInstance.Data;
                      ::FString::FString(&local_1a8,"Output 2 filtered inclusively");
                      FVar9.Data = (FScriptContainerElement *)L"";
                      if (local_1a8.Data.ArrayNum != 0) {
                        FVar9.Data = local_1a8.Data.AllocatorInstance.Data;
                      }
                      bVar3 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                         *(FName *)(FVar8.Data + 0xd8),
                                         PCGPinConstants::DefaultInFilterLabel);
                      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                      }
                      if (bVar3) {
                        if (local_568.ArrayNum < 3) {
                          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar3) {
                            pcVar1 = (code *)swi(3);
                            uVar4 = (*pcVar1)();
                            return (bool)uVar4;
                          }
                        }
                        FVar8.Data = local_568.AllocatorInstance.Data;
                        ::FString::FString(&local_198,"Output 3 filtered exclusively");
                        FVar9.Data = (FScriptContainerElement *)L"";
                        if (local_198.Data.ArrayNum != 0) {
                          FVar9.Data = local_198.Data.AllocatorInstance.Data;
                        }
                        bVar3 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                           *(FName *)(FVar8.Data + 0x150),
                                           PCGPinConstants::DefaultOutFilterLabel);
                        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_198.Data.AllocatorInstance.Data);
                        }
                        if (bVar3) {
                          if (local_568.ArrayNum < 4) {
                            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              );
                            if (bVar3) {
                              pcVar1 = (code *)swi(3);
                              uVar4 = (*pcVar1)();
                              return (bool)uVar4;
                            }
                          }
                          FVar8.Data = local_568.AllocatorInstance.Data;
                          ::FString::FString(&local_188,"Output 4 filtered inclusively");
                          FVar9.Data = (FScriptContainerElement *)L"";
                          if (local_188.Data.ArrayNum != 0) {
                            FVar9.Data = local_188.Data.AllocatorInstance.Data;
                          }
                          bVar3 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                             *(FName *)(FVar8.Data + 0x1c8),
                                             PCGPinConstants::DefaultInFilterLabel);
                          if (local_188.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_188.Data.AllocatorInstance.Data);
                          }
                          if (bVar3) {
                            if (local_568.ArrayNum < 5) {
                              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar3) {
                                pcVar1 = (code *)swi(3);
                                uVar4 = (*pcVar1)();
                                return (bool)uVar4;
                              }
                            }
                            FVar8.Data = local_568.AllocatorInstance.Data;
                            ::FString::FString(&local_178,"Output 5 filtered exclusively");
                            FVar9.Data = (FScriptContainerElement *)L"";
                            if (local_178.Data.ArrayNum != 0) {
                              FVar9.Data = local_178.Data.AllocatorInstance.Data;
                            }
                            bVar3 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,
                                               *(FName *)(FVar8.Data + 0x240),
                                               PCGPinConstants::DefaultOutFilterLabel);
                            if (local_178.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_178.Data.AllocatorInstance.Data);
                            }
                            if (bVar3) {
                              DestructItems<FPCGTaggedData,int>
                                        ((FPCGTaggedData *)local_568.AllocatorInstance.Data,
                                         local_568.ArrayNum);
                              if ((FPCGTaggedData *)local_568.AllocatorInstance.Data !=
                                  (FPCGTaggedData *)0x0) {
                                FMemory::Free(local_568.AllocatorInstance.Data);
                              }
                              bVar3 = true;
                              goto LAB_149fa8a46;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                DestructItems<FPCGTaggedData,int>
                          ((FPCGTaggedData *)local_568.AllocatorInstance.Data,local_568.ArrayNum);
              }
              else {
LAB_149fa89b2:
                DestructItems<FPCGTaggedData,int>
                          ((FPCGTaggedData *)local_558.AllocatorInstance.Data,local_558.ArrayNum);
                local_568.AllocatorInstance.Data = local_558.AllocatorInstance.Data;
              }
            }
            else {
LAB_149fa89c7:
              DestructItems<FPCGTaggedData,int>
                        ((FPCGTaggedData *)local_548.AllocatorInstance.Data,local_548.ArrayNum);
              local_568.AllocatorInstance.Data = local_548.AllocatorInstance.Data;
            }
          }
          else {
LAB_149fa89dc:
            DestructItems<FPCGTaggedData,int>
                      ((FPCGTaggedData *)local_538.AllocatorInstance.Data,local_538.ArrayNum);
            local_568.AllocatorInstance.Data = local_538.AllocatorInstance.Data;
          }
        }
        else {
LAB_149fa89f1:
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_528.AllocatorInstance.Data,local_528.ArrayNum);
          local_568.AllocatorInstance.Data = local_528.AllocatorInstance.Data;
        }
      }
      else {
LAB_149fa8a06:
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_518.AllocatorInstance.Data,local_518.ArrayNum);
        local_568.AllocatorInstance.Data = local_518.AllocatorInstance.Data;
      }
    }
    else {
LAB_149fa8a18:
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_508.AllocatorInstance.Data,local_508.ArrayNum);
      local_568.AllocatorInstance.Data = local_508.AllocatorInstance.Data;
    }
  }
  else {
LAB_149fa8a2a:
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_4f8.AllocatorInstance.Data,local_4f8.ArrayNum);
    local_568.AllocatorInstance.Data = local_4f8.AllocatorInstance.Data;
  }
  if ((FPCGTaggedData *)local_568.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_568.AllocatorInstance.Data);
  }
  bVar3 = false;
LAB_149fa8a46:
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  return bVar3;
}

// GetBeautifiedTestName @ 149fa8a80

FString * __thiscall
FPCGFilterByIndexTest_Basic::GetBeautifiedTestName
          (FPCGFilterByIndexTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.FilterByIndex.Basic");
  return __return_storage_ptr__;
}

