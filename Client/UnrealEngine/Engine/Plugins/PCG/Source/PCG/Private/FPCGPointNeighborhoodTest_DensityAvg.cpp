// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa3f30

EAutomationTestFlags __thiscall
FPCGPointNeighborhoodTest_DensityAvg::GetTestFlags(FPCGPointNeighborhoodTest_DensityAvg *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa3f40

bool __thiscall
FPCGPointNeighborhoodTest_DensityAvg::IsStressTest(FPCGPointNeighborhoodTest_DensityAvg *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa3f50

uint __thiscall
FPCGPointNeighborhoodTest_DensityAvg::GetRequiredDeviceNum
          (FPCGPointNeighborhoodTest_DensityAvg *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa3f60

FString * __thiscall
FPCGPointNeighborhoodTest_DensityAvg::GetTestSourceFileName
          (FPCGPointNeighborhoodTest_DensityAvg *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointNeighborhoodTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa3f90

int __thiscall
FPCGPointNeighborhoodTest_DensityAvg::GetTestSourceFileLine
          (FPCGPointNeighborhoodTest_DensityAvg *this)

{
  return 0x91;
}

// GetTests @ 149fa3fa0

/* WARNING: Removing unreachable block (ram,0x000149fa408d) */
/* WARNING: Removing unreachable block (ram,0x000149fa4158) */

void __thiscall
FPCGPointNeighborhoodTest_DensityAvg::GetTests
          (FPCGPointNeighborhoodTest_DensityAvg *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointNeighborhood.DensityAvg");
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

// RunTest @ 149fa4180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPointNeighborhoodTest_DensityAvg::RunTest
          (FPCGPointNeighborhoodTest_DensityAvg *this,FString *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  FObjectPtr_u_0 FVar11;
  FObjectPtr_u_0 local_res18;
  undefined8 *local_res20;
  float *local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [4];
  
  PCGPointNeighborhoodTestBase::GenerateTestDataAndRun
            ((PCGPointNeighborhoodTestBase *)this,(FTestParameters *)&local_res20);
  puVar5 = local_res20;
  iVar8 = *(int *)(local_res20 + 8);
  ::FString::FString(&local_b8,"Output count");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar10.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar8,1)
  ;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if ((*(int *)(puVar5 + 8) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_res18 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar5[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fa42b7:
      if (local_res18.Handle == (UObject *)0x0) goto LAB_149fa42d5;
      pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
      FVar11 = local_res18;
      if (!bVar6) goto LAB_149fa42d5;
    }
    else {
      if (local_res18.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_149fa42b7;
      }
LAB_149fa42d5:
      FVar11.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_a8,"Output point data");
    if (FVar11.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(local_68,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,local_68,0);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      iVar8 = (**(code **)(*(longlong *)FVar11.Handle + 0x488))(FVar11.Handle);
      ::FString::FString(&local_98,"Output point count");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar10.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar8,9);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        (**(code **)(*(longlong *)FVar11.Handle + 0x508))(FVar11.Handle,&local_d0);
        if ((local_c0 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        fVar1 = *local_d0;
        ::FString::FString(&local_88,"Average Density in Point 0 Density Attribute");
        fVar4 = __real_3b2ec33e;
        fVar3 = __real_38d1b717;
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar10.Data = local_88.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,fVar1,__real_3b2ec33e,
                           __real_38d1b717);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          if ((local_c0 < 5) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          fVar1 = *(float *)((longlong)(int)(4 % (longlong)local_c4) * (longlong)local_c8 +
                            (longlong)local_d0);
          ::FString::FString(&local_78,"Average Density in Point 4 Density Attribute");
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar10.Data = local_78.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,fVar1,fVar4,fVar3);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            bVar6 = true;
            goto LAB_149fa44f5;
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_149fa44f5:
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 149fa4560

FString * __thiscall
FPCGPointNeighborhoodTest_DensityAvg::GetBeautifiedTestName
          (FPCGPointNeighborhoodTest_DensityAvg *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointNeighborhood.DensityAvg");
  return __return_storage_ptr__;
}

