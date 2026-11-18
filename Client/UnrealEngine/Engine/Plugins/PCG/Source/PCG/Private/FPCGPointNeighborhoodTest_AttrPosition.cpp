// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa3800

EAutomationTestFlags __thiscall
FPCGPointNeighborhoodTest_AttrPosition::GetTestFlags(FPCGPointNeighborhoodTest_AttrPosition *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa3810

bool __thiscall
FPCGPointNeighborhoodTest_AttrPosition::IsStressTest(FPCGPointNeighborhoodTest_AttrPosition *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa3820

uint __thiscall
FPCGPointNeighborhoodTest_AttrPosition::GetRequiredDeviceNum
          (FPCGPointNeighborhoodTest_AttrPosition *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa3830

FString * __thiscall
FPCGPointNeighborhoodTest_AttrPosition::GetTestSourceFileName
          (FPCGPointNeighborhoodTest_AttrPosition *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointNeighborhoodTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa3860

int __thiscall
FPCGPointNeighborhoodTest_AttrPosition::GetTestSourceFileLine
          (FPCGPointNeighborhoodTest_AttrPosition *this)

{
  return 0x6d;
}

// GetTests @ 149fa3870

/* WARNING: Removing unreachable block (ram,0x000149fa395d) */
/* WARNING: Removing unreachable block (ram,0x000149fa3a28) */

void __thiscall
FPCGPointNeighborhoodTest_AttrPosition::GetTests
          (FPCGPointNeighborhoodTest_AttrPosition *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.PointNeighborhood.AttrPosition");
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

// RunTest @ 149fa3a50

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
FPCGPointNeighborhoodTest_AttrPosition::RunTest
          (FPCGPointNeighborhoodTest_AttrPosition *this,FString *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  FObjectPtr_u_0 this_00;
  ForAnyElementType FVar10;
  FObjectPtr_u_0 FVar11;
  FObjectPtr_u_0 local_res18;
  undefined8 *local_res20;
  TVector<double>_u_0 local_188;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_15c;
  undefined1 local_154;
  FName local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  FName local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  FPCGAttributeIdentifier local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [2];
  
  local_168 = __real_406c200000000000;
  local_160 = 0;
  local_15c = 0;
  local_154 = 1;
  ::FName::FName(&local_140,L"AvgPosition");
  local_150 = local_140;
  local_148 = 0;
  local_144 = 0;
  local_142 = 1;
  PCGPointNeighborhoodTestBase::GenerateTestDataAndRun
            ((PCGPointNeighborhoodTestBase *)this,(FTestParameters *)&local_res20);
  puVar2 = local_res20;
  iVar8 = *(int *)(local_res20 + 8);
  ::FString::FString(&local_138,"Output count");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar10.Data = local_138.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar8,1)
  ;
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if ((*(int *)(puVar2 + 8) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    local_res18 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar2[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fa3b99:
      if ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)local_res18.Handle ==
          (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) goto LAB_149fa3bbd;
      pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
      FVar11 = local_res18;
      if (!bVar6) goto LAB_149fa3bbd;
    }
    else {
      if ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)local_res18.Handle !=
          (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_149fa3b99;
      }
LAB_149fa3bbd:
      FVar11.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_128,"Output point data");
    if ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)FVar11.Handle ==
        (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_e8,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_e8,0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      iVar8 = (**(code **)(*(longlong *)FVar11.Handle + 0x488))(FVar11.Handle);
      ::FString::FString(&local_118,"Output point count");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar10.Data = local_118.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar8,9);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        local_188._s_0.Y = (double)PCGMetadataDomainID::Default._0_8_;
        local_188._s_0.Z = (double)PCGMetadataDomainID::Default.DebugName;
        local_188._s_0.X = (double)local_140;
        local_a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_a8.Name = local_140;
        local_a8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_a8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_a8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        this_00.Handle =
             (UObject *)
             UPCGMetadata::GetConstAttribute
                       (*(UPCGMetadata **)&FVar11.Handle[1].field_0x10,&local_a8);
        if (((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)this_00.Handle ==
             (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
           ((short)*(longlong *)&this_00.Handle[2].field_0x20 != 5)) {
          this_00.Handle = (UObject *)0x0;
        }
        ::FString::FString(&local_108,"Average Position Attribute exists");
        if ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)this_00.Handle ==
            (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_d8,L"Expected \'%s\' to be not null.");
          (*pcVar1)(this,&local_d8,0);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (!bVar6) {
          (**(code **)(*(longlong *)FVar11.Handle + 0x538))(FVar11.Handle,&local_c8);
          if ((local_b8 < 5) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar6)) {
            pcVar1 = (code *)swi(3);
            uVar7 = (*pcVar1)();
            return (bool)uVar7;
          }
          iVar8 = FPCGMetadataAttributeBase::GetValueKey
                            ((FPCGMetadataAttributeBase *)this_00.Handle,
                             *(long64 *)
                              ((longlong)(int)(4 % (longlong)local_bc) * (longlong)local_c0 +
                              local_c8));
          FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                    ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)this_00.Handle,
                     (TVector<double> *)&local_188._s_0,iVar8);
          uVar5 = local_188._s_0.Z;
          uVar4 = local_188._s_0.Y;
          uVar3 = local_188._s_0.X;
          ::FString::FString(&local_f8,"Point 4 of Position Attribute");
          local_88._s_0.X = ___xmm_40590000000000004059000000000000;
          local_88._s_0.Y = _UNK_1512468d8;
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_f8.Data.ArrayNum != 0) {
            FVar10.Data = local_f8.Data.AllocatorInstance.Data;
          }
          local_88._s_0.Z = 0.0;
          local_68[0]._s_0.X = uVar3;
          local_68[0]._s_0.Y = uVar4;
          local_68[0]._s_0.Z = uVar5;
          bVar6 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,
                             (TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_88._s_0,
                             __real_38d1b717);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            bVar6 = true;
            goto LAB_149fa3e68;
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_149fa3e68:
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 149fa3ec0

FString * __thiscall
FPCGPointNeighborhoodTest_AttrPosition::GetBeautifiedTestName
          (FPCGPointNeighborhoodTest_AttrPosition *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointNeighborhood.AttrPosition");
  return __return_storage_ptr__;
}

