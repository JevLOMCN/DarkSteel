// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetTestFlags @ 149fb4c40

EAutomationTestFlags __thiscall
FPCGAttributePartition_WithPartitionIndex::GetTestFlags
          (FPCGAttributePartition_WithPartitionIndex *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb4c50

bool __thiscall
FPCGAttributePartition_WithPartitionIndex::IsStressTest
          (FPCGAttributePartition_WithPartitionIndex *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb4c60

uint __thiscall
FPCGAttributePartition_WithPartitionIndex::GetRequiredDeviceNum
          (FPCGAttributePartition_WithPartitionIndex *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb4c70

FString * __thiscall
FPCGAttributePartition_WithPartitionIndex::GetTestSourceFileName
          (FPCGAttributePartition_WithPartitionIndex *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb4ca0

int __thiscall
FPCGAttributePartition_WithPartitionIndex::GetTestSourceFileLine
          (FPCGAttributePartition_WithPartitionIndex *this)

{
  return 0x11;
}

// GetTests @ 149fb4cb0

/* WARNING: Removing unreachable block (ram,0x000149fb4d9d) */
/* WARNING: Removing unreachable block (ram,0x000149fb4e68) */

void __thiscall
FPCGAttributePartition_WithPartitionIndex::GetTests
          (FPCGAttributePartition_WithPartitionIndex *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributePartition.WithPartitionIndex");
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

// RunTest @ 149fb4e90

bool __thiscall
FPCGAttributePartition_WithPartitionIndex::RunTest
          (FPCGAttributePartition_WithPartitionIndex *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = PCGAttributePartitionTest::
          PointPartitionTest<_FPCGAttributePartition_WithPartitionIndex::RunTest_::__l2::<lambda_1>_>
                    ((FPCGTestBaseClass *)this,true,false,(<lambda_1>)this);
  return bVar1;
}

// GetBeautifiedTestName @ 149fb4eb0

FString * __thiscall
FPCGAttributePartition_WithPartitionIndex::GetBeautifiedTestName
          (FPCGAttributePartition_WithPartitionIndex *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributePartition.WithPartitionIndex");
  return __return_storage_ptr__;
}

// operator() @ 149ff2c80

bool __thiscall
`FPCGAttributePartition_WithPartitionIndex::RunTest'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,int param_2)

{
  longlong *plVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FPCGMetadataAttribute<int> *this_00;
  ForAnyElementType FVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  longlong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FString local_98;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  FPCGAttributeIdentifier local_68 [2];
  
  if (((param_1 == (UPCGBasePointData *)0x0) || (param_1->_padding_ == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputPointData && OutputPointData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                         ,0x16d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_b8 = PCGAttributePartitionTest::PartitionIndexAttributeName;
  FStack_b0.Flag = PCGMetadataDomainID::Default.Flag;
  FStack_b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  FStack_b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_68[0].MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_68[0].Name = PCGAttributePartitionTest::PartitionIndexAttributeName;
  local_68[0].MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
  local_68[0].MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_68[0].MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  this_00 = (FPCGMetadataAttribute<int> *)
            UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_1->_padding_,local_68);
  if ((this_00 == (FPCGMetadataAttribute<int> *)0x0) || ((short)this_00->_padding_ != 2)) {
    this_00 = (FPCGMetadataAttribute<int> *)0x0;
  }
  plVar1 = *(longlong **)this;
  ::FString::FString(&local_f0,"Partition Index attribute exists");
  if (this_00 == (FPCGMetadataAttribute<int> *)0x0) {
    pcVar3 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_98,L"Expected \'%s\' to be not null.");
    (*pcVar3)(plVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  fVar13 = __real_bf800000;
  if (bVar4) {
LAB_149ff3015:
    bVar4 = false;
  }
  else {
    bVar4 = true;
    bVar12 = true;
    (**(code **)(param_1->_padding_ + 0x508))(param_1,&local_108);
    (**(code **)(param_1->_padding_ + 0x538))(param_1,&local_88);
    uVar11 = 0;
    iVar7 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
    if (0 < iVar7) {
      do {
        uVar10 = ~uVar11 >> 0x1f;
        if (bVar4) {
          uVar8 = 0;
          if ((int)uVar11 < local_f8) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = false;
          fVar13 = *(float *)((longlong)((int)uVar11 % local_fc) * (longlong)local_100 + local_108);
        }
        else {
          uVar8 = 0;
          if ((int)uVar11 < local_f8) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar12 = (bool)(bVar12 & fVar13 == *(float *)((longlong)((int)uVar11 % local_fc) *
                                                        (longlong)local_100 + local_108));
        }
        pFVar2 = *(FAutomationTestBase **)this;
        if (((uVar10 & (int)uVar11 < local_78) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this_00,
                           *(long64 *)
                            ((longlong)((int)uVar11 % local_7c) * (longlong)local_80 + local_88));
        iVar7 = FPCGMetadataAttribute<int>::GetValue(this_00,iVar7);
        ::FString::FString(&local_e0,"Partition index value is equal to output index");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_e0.Data.ArrayNum != 0) {
          FVar9.Data = local_e0.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)FVar9.Data,iVar7,param_2);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (!bVar6) goto LAB_149ff3015;
        uVar11 = uVar11 + 1;
        iVar7 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
      } while ((int)uVar11 < iVar7);
    }
    pFVar2 = *(FAutomationTestBase **)this;
    ::FString::PrintfImpl(&local_d0,L"Output points for output %d have all the same density");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar9.Data = local_d0.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue(pFVar2,(wchar_t *)FVar9.Data,bVar12);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  return bVar4;
}

