// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetTestFlags @ 149fb4f90

EAutomationTestFlags __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::GetTestFlags
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb4fa0

bool __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::IsStressTest
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb5190

uint __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::GetRequiredDeviceNum
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb51a0

FString * __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::GetTestSourceFileName
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb5800

int __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::GetTestSourceFileLine
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this)

{
  return 0x12;
}

// GetTests @ 149fb5840

/* WARNING: Removing unreachable block (ram,0x000149fb592d) */
/* WARNING: Removing unreachable block (ram,0x000149fb59f8) */

void __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::GetTests
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributePartition.NoPartitionWithPartitionIndex");
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

// RunTest @ 149fb5a20

bool __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::RunTest
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = PCGAttributePartitionTest::
          PointPartitionTest<_FPCGAttributePartition_NoPartitionWithPartitionIndex::RunTest_::__l2::<lambda_1>_>
                    ((FPCGTestBaseClass *)this,true,true,(<lambda_1>)this);
  return bVar1;
}

// GetBeautifiedTestName @ 149fb5a40

FString * __thiscall
FPCGAttributePartition_NoPartitionWithPartitionIndex::GetBeautifiedTestName
          (FPCGAttributePartition_NoPartitionWithPartitionIndex *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Plugins.PCG.AttributePartition.NoPartitionWithPartitionIndex");
  return __return_storage_ptr__;
}

// operator() @ 149ff2980

bool __thiscall
`FPCGAttributePartition_NoPartitionWithPartitionIndex::RunTest'::__l2::<lambda_1>::operator()
          (void *this,UPCGBasePointData *param_1,int param_2)

{
  float fVar1;
  longlong *plVar2;
  FAutomationTestBase *this_00;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FPCGMetadataAttribute<int> *this_01;
  ForAnyElementType FVar9;
  uint uVar10;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FPCGMetadataDomainID FStack_c0;
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  FString local_90;
  longlong local_80;
  int local_78;
  int local_74;
  int local_70;
  FPCGAttributeIdentifier local_58 [2];
  
  if (((param_1 == (UPCGBasePointData *)0x0) || (param_1->_padding_ == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputPointData && OutputPointData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                         ,400,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_c8 = PCGAttributePartitionTest::PartitionIndexAttributeName;
  FStack_c0.Flag = PCGMetadataDomainID::Default.Flag;
  FStack_c0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  FStack_c0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  FStack_c0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58[0].MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58[0].Name = PCGAttributePartitionTest::PartitionIndexAttributeName;
  local_58[0].MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
  local_58[0].MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_58[0].MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  this_01 = (FPCGMetadataAttribute<int> *)
            UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_1->_padding_,local_58);
  if ((this_01 == (FPCGMetadataAttribute<int> *)0x0) || ((short)this_01->_padding_ != 2)) {
    this_01 = (FPCGMetadataAttribute<int> *)0x0;
  }
  plVar2 = *(longlong **)this;
  ::FString::FString(&local_e8,"Partition Index attribute exists");
  if (this_01 == (FPCGMetadataAttribute<int> *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_90,L"Expected \'%s\' to be not null.");
    (*pcVar3)(plVar2,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
LAB_149ff2c49:
    bVar5 = false;
  }
  else {
    (**(code **)(param_1->_padding_ + 0x508))(param_1,&local_a8);
    (**(code **)(param_1->_padding_ + 0x538))(param_1,&local_80);
    uVar10 = 0;
    iVar7 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
    fVar4 = __real_3f000000;
    if (0 < iVar7) {
      do {
        uVar8 = 0;
        if ((int)uVar10 < local_98) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        this_00 = *(FAutomationTestBase **)this;
        fVar1 = *(float *)((longlong)((int)uVar10 % local_9c) * (longlong)local_a0 + local_a8);
        uVar8 = 0;
        if ((int)uVar10 < local_70) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this_01,
                           *(long64 *)
                            ((longlong)((int)uVar10 % local_74) * (longlong)local_78 + local_80));
        iVar7 = FPCGMetadataAttribute<int>::GetValue(this_01,iVar7);
        ::FString::FString(&local_d8,"Partition index has the right value");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_d8.Data.ArrayNum != 0) {
          FVar9.Data = local_d8.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          (this_00,(wchar_t *)FVar9.Data,iVar7,
                           (int)ROUND((fVar1 + fVar1) - fVar4) >> 1);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (!bVar5) goto LAB_149ff2c49;
        uVar10 = uVar10 + 1;
        iVar7 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
      } while ((int)uVar10 < iVar7);
    }
    bVar5 = true;
  }
  return bVar5;
}

