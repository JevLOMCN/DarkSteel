// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa3110

EAutomationTestFlags __thiscall
FPCGPointNeighborhoodTest_AttrDistance::GetTestFlags(FPCGPointNeighborhoodTest_AttrDistance *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa3120

bool __thiscall
FPCGPointNeighborhoodTest_AttrDistance::IsStressTest(FPCGPointNeighborhoodTest_AttrDistance *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa3130

uint __thiscall
FPCGPointNeighborhoodTest_AttrDistance::GetRequiredDeviceNum
          (FPCGPointNeighborhoodTest_AttrDistance *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa3140

FString * __thiscall
FPCGPointNeighborhoodTest_AttrDistance::GetTestSourceFileName
          (FPCGPointNeighborhoodTest_AttrDistance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointNeighborhoodTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa3170

int __thiscall
FPCGPointNeighborhoodTest_AttrDistance::GetTestSourceFileLine
          (FPCGPointNeighborhoodTest_AttrDistance *this)

{
  return 0x49;
}

// GetTests @ 149fa3180

/* WARNING: Removing unreachable block (ram,0x000149fa326d) */
/* WARNING: Removing unreachable block (ram,0x000149fa3338) */

void __thiscall
FPCGPointNeighborhoodTest_AttrDistance::GetTests
          (FPCGPointNeighborhoodTest_AttrDistance *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointNeighborhood.AttrDistance");
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

// RunTest @ 149fa3360

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
FPCGPointNeighborhoodTest_AttrDistance::RunTest
          (FPCGPointNeighborhoodTest_AttrDistance *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  FObjectPtr_u_0 this_00;
  ForAnyElementType FVar8;
  FObjectPtr_u_0 FVar9;
  FObjectPtr_u_0 local_res18;
  undefined8 *local_res20;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FString local_98;
  FString local_88;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  FPCGAttributeIdentifier local_58 [2];
  
  ::FName::FName(&local_110,L"Distance");
  PCGPointNeighborhoodTestBase::GenerateTestDataAndRun
            ((PCGPointNeighborhoodTestBase *)this,(FTestParameters *)&local_res20);
  puVar3 = local_res20;
  iVar6 = *(int *)(local_res20 + 8);
  ::FString::FString(&local_108,"Output count");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar8.Data = local_108.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar6,1);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if ((*(int *)(puVar3 + 8) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    local_res18 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar3[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fa34aa:
      if ((FPCGMetadataAttribute<double> *)local_res18.Handle ==
          (FPCGMetadataAttribute<double> *)0x0) goto LAB_149fa34ce;
      pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar7);
      FVar9 = local_res18;
      if (!bVar4) goto LAB_149fa34ce;
    }
    else {
      if ((FPCGMetadataAttribute<double> *)local_res18.Handle !=
          (FPCGMetadataAttribute<double> *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_149fa34aa;
      }
LAB_149fa34ce:
      FVar9.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_f8,"Output point data");
    if ((FPCGMetadataAttribute<double> *)FVar9.Handle == (FPCGMetadataAttribute<double> *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_98,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_98,0);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      iVar6 = (**(code **)(*(longlong *)FVar9.Handle + 0x488))(FVar9.Handle);
      ::FString::FString(&local_e8,"Output point count");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar8.Data = local_e8.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar6,9);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        FStack_b0.Flag = PCGMetadataDomainID::Default.Flag;
        FStack_b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
        FStack_b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_b8 = local_110;
        local_58[0].MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_58[0].Name = local_110;
        local_58[0].MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_58[0].MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_58[0].MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        this_00.Handle =
             (UObject *)
             UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)&FVar9.Handle[1].field_0x10,local_58)
        ;
        if (((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0
            ) || ((short)*(longlong *)&this_00.Handle[2].field_0x20 != 1)) {
          this_00.Handle = (UObject *)0x0;
        }
        ::FString::FString(&local_d8,"Distance Attribute exists");
        if ((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0)
        {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_88,L"Expected \'%s\' to be not null.");
          (*pcVar1)(this,&local_88,0);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          (**(code **)(*(longlong *)FVar9.Handle + 0x538))(FVar9.Handle,&local_78);
          if ((local_68 < 5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar6 = FPCGMetadataAttributeBase::GetValueKey
                            ((FPCGMetadataAttributeBase *)this_00.Handle,
                             *(long64 *)
                              ((longlong)(int)(4 % (longlong)local_6c) * (longlong)local_70 +
                              local_78));
          dVar2 = FPCGMetadataAttribute<double>::GetValue
                            ((FPCGMetadataAttribute<double> *)this_00.Handle,iVar6);
          ::FString::FString(&local_c8,"Point 4 of Distance Attribute");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_c8.Data.ArrayNum != 0) {
            FVar8.Data = local_c8.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,dVar2,0.0,
                             __real_3f1a36e2e0000000);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            bVar4 = true;
            goto LAB_149fa373b;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_149fa373b:
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 149fa3790

FString * __thiscall
FPCGPointNeighborhoodTest_AttrDistance::GetBeautifiedTestName
          (FPCGPointNeighborhoodTest_AttrDistance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointNeighborhood.AttrDistance");
  return __return_storage_ptr__;
}

