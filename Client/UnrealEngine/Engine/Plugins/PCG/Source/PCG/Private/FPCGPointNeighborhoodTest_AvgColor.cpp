// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa8af0

EAutomationTestFlags __thiscall
FPCGPointNeighborhoodTest_AvgColor::GetTestFlags(FPCGPointNeighborhoodTest_AvgColor *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa8b00

bool __thiscall
FPCGPointNeighborhoodTest_AvgColor::IsStressTest(FPCGPointNeighborhoodTest_AvgColor *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa8b10

uint __thiscall
FPCGPointNeighborhoodTest_AvgColor::GetRequiredDeviceNum(FPCGPointNeighborhoodTest_AvgColor *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa8b20

FString * __thiscall
FPCGPointNeighborhoodTest_AvgColor::GetTestSourceFileName
          (FPCGPointNeighborhoodTest_AvgColor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointNeighborhoodTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa8b50

int __thiscall
FPCGPointNeighborhoodTest_AvgColor::GetTestSourceFileLine(FPCGPointNeighborhoodTest_AvgColor *this)

{
  return 0x124;
}

// GetTests @ 149fa8b60

/* WARNING: Removing unreachable block (ram,0x000149fa8c4d) */
/* WARNING: Removing unreachable block (ram,0x000149fa8d18) */

void __thiscall
FPCGPointNeighborhoodTest_AvgColor::GetTests
          (FPCGPointNeighborhoodTest_AvgColor *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointNeighborhood.AvgColor");
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

// RunTest @ 149fa8d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FPCGPointNeighborhoodTest_AvgColor::RunTest
          (FPCGPointNeighborhoodTest_AvgColor *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  TVector4<double> *pTVar11;
  FObjectPtr_u_0 FVar12;
  uint uVar13;
  FObjectPtr_u_0 FVar14;
  FObjectPtr_u_0 local_res18;
  undefined8 *local_res20;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TVector4<double>_u_0 local_98;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  
  FVar14.Handle = (UObject *)0x0;
  PCGPointNeighborhoodTestBase::GenerateTestDataAndRun
            ((PCGPointNeighborhoodTestBase *)this,(FTestParameters *)&local_res20);
  puVar4 = local_res20;
  iVar7 = *(int *)(local_res20 + 8);
  ::FString::FString(&local_f0,"Output count");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar10.Data = local_f0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar7,1)
  ;
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if ((*(int *)(puVar4 + 8) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    local_res18 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar4[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fa8e65:
      if (local_res18.Handle == (UObject *)0x0) goto LAB_149fa8e83;
      pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
      FVar12 = local_res18;
      if (!bVar5) goto LAB_149fa8e83;
    }
    else {
      if (local_res18.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_149fa8e65;
      }
LAB_149fa8e83:
      FVar12.Handle = FVar14.Handle;
    }
    ::FString::FString(&local_e0,"Output point data");
    if (FVar12.Handle == (UObject *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_b0,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_b0,0);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      iVar7 = (**(code **)(*(longlong *)FVar12.Handle + 0x488))(FVar12.Handle);
      ::FString::FString(&local_d0,"Output point count");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        FVar10.Data = local_d0.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar7,9);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        (**(code **)(*(longlong *)FVar12.Handle + 0x520))(FVar12.Handle,&local_78);
        iVar7 = (**(code **)(*(longlong *)FVar12.Handle + 0x488))(FVar12.Handle);
        dVar3 = _UNK_150689688;
        dVar2 = ___xmm_3ff00000000000003ff0000000000000;
        if (0 < iVar7) {
          do {
            uVar13 = FVar14._0_4_;
            local_98._s_0.X = dVar2;
            local_98._s_0.Y = dVar3;
            local_98._s_0.Z = dVar2;
            local_98._s_0.W = dVar3;
            uVar8 = 0;
            if ((int)uVar13 < local_68) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            pTVar11 = (TVector4<double> *)
                      ((longlong)((int)uVar13 % local_6c) * (longlong)local_70 + local_78);
            ::FString::FString(&local_c0,"Average Color in Location Attribute");
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_c0.Data.ArrayNum != 0) {
              FVar10.Data = local_c0.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestEqual<UE::Math::TVector4<double>_>
                              ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,pTVar11,
                               (TVector4<double> *)&local_98._s_0);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if (!bVar5) goto LAB_149fa9055;
            FVar14._0_4_ = uVar13 + 1;
            FVar14._4_4_ = 0;
            iVar7 = (**(code **)(*(longlong *)FVar12.Handle + 0x488))(FVar12.Handle);
          } while ((int)FVar14._0_4_ < iVar7);
        }
        bVar5 = true;
        goto LAB_149fa9057;
      }
    }
  }
LAB_149fa9055:
  bVar5 = false;
LAB_149fa9057:
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return bVar5;
}

// GetBeautifiedTestName @ 149fa90b0

FString * __thiscall
FPCGPointNeighborhoodTest_AvgColor::GetBeautifiedTestName
          (FPCGPointNeighborhoodTest_AvgColor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointNeighborhood.AvgColor");
  return __return_storage_ptr__;
}

