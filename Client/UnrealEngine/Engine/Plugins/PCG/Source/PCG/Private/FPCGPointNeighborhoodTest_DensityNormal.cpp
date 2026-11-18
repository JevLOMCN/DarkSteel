// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa4d00

EAutomationTestFlags __thiscall
FPCGPointNeighborhoodTest_DensityNormal::GetTestFlags(FPCGPointNeighborhoodTest_DensityNormal *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa4d10

bool __thiscall
FPCGPointNeighborhoodTest_DensityNormal::IsStressTest(FPCGPointNeighborhoodTest_DensityNormal *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa4d20

uint __thiscall
FPCGPointNeighborhoodTest_DensityNormal::GetRequiredDeviceNum
          (FPCGPointNeighborhoodTest_DensityNormal *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa4d30

FString * __thiscall
FPCGPointNeighborhoodTest_DensityNormal::GetTestSourceFileName
          (FPCGPointNeighborhoodTest_DensityNormal *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointNeighborhoodTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa4d60

int __thiscall
FPCGPointNeighborhoodTest_DensityNormal::GetTestSourceFileLine
          (FPCGPointNeighborhoodTest_DensityNormal *this)

{
  return 0xdc;
}

// GetTests @ 149fa4d70

/* WARNING: Removing unreachable block (ram,0x000149fa4e5d) */
/* WARNING: Removing unreachable block (ram,0x000149fa4f28) */

void __thiscall
FPCGPointNeighborhoodTest_DensityNormal::GetTests
          (FPCGPointNeighborhoodTest_DensityNormal *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointNeighborhood.DensityNormal");
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

// RunTest @ 149fa4f60

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
FPCGPointNeighborhoodTest_DensityNormal::RunTest
          (FPCGPointNeighborhoodTest_DensityNormal *this,FString *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  FObjectPtr_u_0 FVar10;
  FObjectPtr_u_0 local_res18;
  undefined8 *local_res20;
  float *local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  PCGPointNeighborhoodTestBase::GenerateTestDataAndRun
            ((PCGPointNeighborhoodTestBase *)this,(FTestParameters *)&local_res20);
  puVar4 = local_res20;
  iVar7 = *(int *)(local_res20 + 8);
  ::FString::FString(&local_a8,"Output count");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar9.Data = local_a8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar7,1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if ((*(int *)(puVar4 + 8) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_res18 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar4[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fa508e:
      if (local_res18.Handle == (UObject *)0x0) goto LAB_149fa50ac;
      pUVar8 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar8);
      FVar10 = local_res18;
      if (!bVar5) goto LAB_149fa50ac;
    }
    else {
      if (local_res18.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_149fa508e;
      }
LAB_149fa50ac:
      FVar10.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_98,"Output point data");
    if (FVar10.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(local_58,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,local_58,0);
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      iVar7 = (**(code **)(*(longlong *)FVar10.Handle + 0x488))(FVar10.Handle);
      ::FString::FString(&local_88,"Output point count");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar9.Data = local_88.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar7,9);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        (**(code **)(*(longlong *)FVar10.Handle + 0x508))(FVar10.Handle,&local_c0);
        if ((local_b0 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        fVar1 = *local_c0;
        ::FString::FString(&local_78,"Normalized Distance in Point 0 Density Attribute");
        fVar3 = __real_38d1b717;
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar9.Data = local_78.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,fVar1,__real_3f20e7f5,
                           __real_38d1b717);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          if ((local_b0 < 5) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          fVar1 = *(float *)((longlong)(int)(4 % (longlong)local_b4) * (longlong)local_b8 +
                            (longlong)local_c0);
          ::FString::FString(&local_68,"Normalized Distance in Point 4 Density Attribute");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar9.Data = local_68.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,fVar1,0.0,fVar3);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            bVar5 = true;
            goto LAB_149fa52c6;
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_149fa52c6:
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return bVar5;
}

// GetBeautifiedTestName @ 149fa5330

FString * __thiscall
FPCGPointNeighborhoodTest_DensityNormal::GetBeautifiedTestName
          (FPCGPointNeighborhoodTest_DensityNormal *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointNeighborhood.DensityNormal");
  return __return_storage_ptr__;
}

