// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fc0b40

EAutomationTestFlags __thiscall
FPCGAttributeReduceIncompatibleType::GetTestFlags(FPCGAttributeReduceIncompatibleType *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fc0b50

bool __thiscall
FPCGAttributeReduceIncompatibleType::IsStressTest(FPCGAttributeReduceIncompatibleType *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fc0b60

uint __thiscall
FPCGAttributeReduceIncompatibleType::GetRequiredDeviceNum(FPCGAttributeReduceIncompatibleType *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fc0b70

FString * __thiscall
FPCGAttributeReduceIncompatibleType::GetTestSourceFileName
          (FPCGAttributeReduceIncompatibleType *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fc0ba0

int __thiscall
FPCGAttributeReduceIncompatibleType::GetTestSourceFileLine
          (FPCGAttributeReduceIncompatibleType *this)

{
  return 0x10a;
}

// GetTests @ 149fc0bb0

/* WARNING: Removing unreachable block (ram,0x000149fc0c9d) */
/* WARNING: Removing unreachable block (ram,0x000149fc0d68) */

void __thiscall
FPCGAttributeReduceIncompatibleType::GetTests
          (FPCGAttributeReduceIncompatibleType *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeReduce.IncompatibleType");
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

// RunTest @ 149fc0d90

bool __thiscall
FPCGAttributeReduceIncompatibleType::RunTest
          (FPCGAttributeReduceIncompatibleType *this,FString *param_1)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  UObject *pUVar13;
  UPCGParamData *pUVar14;
  FPCGMetadataDomain *pFVar15;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_01;
  long64 lVar16;
  FString *pFVar17;
  FPCGDataPtrWrapper *this_02;
  ForAnyElementType FVar18;
  uint uVar19;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar20;
  FName local_res20;
  ForAnyElementType local_218;
  undefined8 local_210;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_208;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1f8;
  FName local_1e8;
  UPCGParamData *local_1e0;
  FString local_1d8;
  FName local_1c8;
  FPCGMetadataDomainID local_1c0;
  FName local_1a8;
  FPCGMetadataDomainID local_1a0;
  FString local_188;
  TQuat<double> local_178;
  FPCGAttributePropertySelector local_158;
  FPCGAttributePropertySelector local_118;
  FString local_d8;
  FString local_c8;
  FPCGAttributePropertySelector local_b8;
  FPCGAttributePropertySelector local_78;
  
  ::FName::FName(&local_res20,L"string");
  ::FName::FName(&local_1e8,L"quat");
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_118);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_158);
  FPCGAttributePropertySelector::SetAttributeName(&local_118,local_res20,true);
  FPCGAttributePropertySelector::SetAttributeName(&local_158,local_1e8,true);
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UPCGParamData>(pUVar13);
  local_1c8 = local_res20;
  pFVar20 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  local_1c0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1c0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1c0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1c0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  local_1e0 = pUVar14;
  pFVar15 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar14->_padding_,&local_1c0);
  FVar18.Data = (FScriptContainerElement *)pFVar20;
  this_00 = pFVar20;
  if (pFVar15 != (FPCGMetadataDomain *)0x0) {
    this_00 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
              FPCGMetadataDomain::CreateAttribute<FString>(pFVar15,local_1c8,&local_1d8,false,false)
    ;
    FVar18.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  if ((FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)FVar18.Data !=
      (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  local_1a8 = local_1e8;
  local_1a0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1a0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1a0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_178.X = 0.0;
  local_178.Y = 0.0;
  local_178.Z = 0.0;
  local_178.W = 0.0;
  pFVar15 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar14->_padding_,&local_1a0);
  this_01 = pFVar20;
  if (pFVar15 != (FPCGMetadataDomain *)0x0) {
    this_01 = FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
                        (pFVar15,local_1a8,&local_178,true,false);
  }
  pTVar1 = &this_01->Values;
  while( true ) {
    lVar16 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar14->_padding_,-1);
    if ((lVar16 == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 < (FScriptContainerElement *)((longlong)&UE::Math::TQuat<double>::Identity.X + 1))
        && (&UE::Math::TQuat<double>::Identity <
            (TQuat<double> *)(pFVar3 + (longlong)(this_01->Values).ArrayMax * 0x20))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar12 = (this_01->Values).ArrayNum;
    if (iVar12 == (this_01->Values).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1020,&pTVar1->AllocatorInstance,&(this_01->Values).ArrayMax);
    }
    (this_01->Values).ArrayNum = iVar12 + 1;
    uVar8 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    uVar7 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uVar6 = UE::Math::TQuat<double>::Identity.X._4_4_;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar12 * 0x20;
    *(undefined4 *)pFVar3 = UE::Math::TQuat<double>::Identity.X._0_4_;
    *(undefined4 *)(pFVar3 + 4) = uVar6;
    *(undefined4 *)(pFVar3 + 8) = uVar7;
    *(undefined4 *)(pFVar3 + 0xc) = uVar8;
    uVar8 = UE::Math::TQuat<double>::Identity.W._4_4_;
    uVar7 = UE::Math::TQuat<double>::Identity.W._0_4_;
    uVar6 = UE::Math::TQuat<double>::Identity.Z._4_4_;
    pFVar4 = pFVar4 + (longlong)iVar12 * 0x20 + 0x10;
    *(undefined4 *)pFVar4 = UE::Math::TQuat<double>::Identity.Z._0_4_;
    *(undefined4 *)(pFVar4 + 4) = uVar6;
    *(undefined4 *)(pFVar4 + 8) = uVar7;
    *(undefined4 *)(pFVar4 + 0xc) = uVar8;
    iVar2 = this_01->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)this_01,lVar16,iVar2 + iVar12,false);
    pFVar17 = ::FString::FormatAsNumber(&local_188,(int)pFVar20);
    if ((lVar16 == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    iVar12 = FPCGMetadataAttribute<FString>::AddValue
                       ((FPCGMetadataAttribute<FString> *)this_00,pFVar17);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)this_00,lVar16,iVar12,false);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    uVar19 = (int)pFVar20 + 1;
    pFVar20 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)(ulonglong)uVar19;
    pUVar14 = local_1e0;
    if (4 < (int)uVar19) {
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,&local_218,(int *)((longlong)&local_210 + 4));
      local_210 = CONCAT44(local_210._4_4_,iVar12 + 1);
      this_02 = (FPCGDataPtrWrapper *)(local_218.Data + (longlong)iVar12 * 0x78);
      this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
      this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)local_1e0);
      pFVar17 = ::FString::FString(&local_d8,
                                   L"Operation was not compatible with the attribute type String or could not create attribute \'None\' for input 0"
                                  );
      FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar17,Contains,1,true);
      FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_b8,&local_118);
      FVar18.Data = local_218.Data;
      iVar12 = (int)local_210;
      local_b8._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
      local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.ArrayNum = (int)local_210;
      if ((int)local_210 == 0) {
        local_208.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,(int)local_210,0,&local_208.AllocatorInstance,(int)local_210,
                   &local_208.ArrayMax);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  (local_208.AllocatorInstance.Data,(FPCGTaggedData *)FVar18.Data,iVar12);
      }
      bVar9 = FPCGAttributeReduceTests::RunAndValidate<>
                        ((FPCGAttributeReduceTests *)this,&local_208,Average,
                         (FPCGAttributePropertyInputSelector *)&local_b8,false,false);
      pFVar17 = ::FString::FString(&local_c8,
                                   L"Operation was not compatible with the attribute type Quaternion or could not create attribute \'None\' for input 0"
                                  );
      FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar17,Contains,1,true);
      FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_78,&local_158);
      FVar18.Data = local_218.Data;
      iVar12 = (int)local_210;
      local_78._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
      local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ArrayNum = (int)local_210;
      if ((int)local_210 == 0) {
        local_1f8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,(int)local_210,0,&local_1f8.AllocatorInstance,(int)local_210,
                   &local_1f8.ArrayMax);
        ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                  (local_1f8.AllocatorInstance.Data,(FPCGTaggedData *)FVar18.Data,iVar12);
      }
      bVar11 = FPCGAttributeReduceTests::RunAndValidate<>
                         ((FPCGAttributeReduceTests *)this,&local_1f8,Min,
                          (FPCGAttributePropertyInputSelector *)&local_78,false,false);
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_218.Data,(int)local_210);
      if ((FPCGTaggedData *)local_218.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_218.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_158.ExtraNames.AllocatorInstance.Data,
                 local_158.ExtraNames.ArrayNum);
      if (local_158.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.ExtraNames.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_118.ExtraNames.AllocatorInstance.Data,
                 local_118.ExtraNames.ArrayNum);
      if (local_118.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.ExtraNames.AllocatorInstance.Data);
      }
      return bVar11 && bVar9;
    }
  }
  pcVar5 = (code *)swi(3);
  uVar10 = (*pcVar5)();
  return (bool)uVar10;
}

// GetBeautifiedTestName @ 149fc1350

FString * __thiscall
FPCGAttributeReduceIncompatibleType::GetBeautifiedTestName
          (FPCGAttributeReduceIncompatibleType *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeReduce.IncompatibleType");
  return __return_storage_ptr__;
}

