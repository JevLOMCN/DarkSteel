// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fb17b0

EAutomationTestFlags __thiscall
FPCGAttributePartition_AttributeSet::GetTestFlags(FPCGAttributePartition_AttributeSet *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb17c0

bool __thiscall
FPCGAttributePartition_AttributeSet::IsStressTest(FPCGAttributePartition_AttributeSet *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb17d0

uint __thiscall
FPCGAttributePartition_AttributeSet::GetRequiredDeviceNum(FPCGAttributePartition_AttributeSet *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb17e0

FString * __thiscall
FPCGAttributePartition_AttributeSet::GetTestSourceFileName
          (FPCGAttributePartition_AttributeSet *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb1810

int __thiscall
FPCGAttributePartition_AttributeSet::GetTestSourceFileLine
          (FPCGAttributePartition_AttributeSet *this)

{
  return 0xd;
}

// GetTests @ 149fb1820

/* WARNING: Removing unreachable block (ram,0x000149fb190d) */
/* WARNING: Removing unreachable block (ram,0x000149fb19d8) */

void __thiscall
FPCGAttributePartition_AttributeSet::GetTests
          (FPCGAttributePartition_AttributeSet *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributePartition.AttributeSet");
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

// RunTest @ 149fb1a00

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
FPCGAttributePartition_AttributeSet::RunTest
          (FPCGAttributePartition_AttributeSet *this,FString *param_1)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  FPCGContext *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGMetadataPartitionSettings *pUVar10;
  UObject *pUVar11;
  UPCGParamData *pUVar12;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<double> *pFVar13;
  long64 lVar14;
  UClass *pUVar15;
  FObjectPtr_u_0 this_01;
  ForAnyElementType FVar16;
  FPCGDataPtrWrapper *this_02;
  longlong lVar17;
  bool bVar18;
  uint uVar19;
  FPCGMetadataAttribute<double> *pFVar20;
  uint uVar21;
  FObjectPtr_u_0 FVar23;
  undefined4 uVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  FPCGContext *local_res18;
  FObjectPtr_u_0 local_res20;
  double local_238;
  FName local_230;
  UPCGParamData *local_228;
  UClass *local_220;
  double local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  TSharedPtr<IPCGElement,1> local_1b0;
  FName local_198;
  FPCGMetadataDomainID local_190;
  FName local_178;
  FPCGMetadataDomainID FStack_170;
  FString local_158;
  FString local_148;
  FPCGAttributeIdentifier local_138;
  FTestData local_118;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_88;
  FPCGMetadataAttribute<double> *pFVar22;
  
  local_220 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_220);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_118,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_220);
  pFVar20 = (FPCGMetadataAttribute<double> *)0x0;
  local_88._0_8_ = 0;
  local_88._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGMetadataPartitionSettings>(&local_118,&local_88);
  if ((pUVar10 == (UPCGMetadataPartitionSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                         ,0x125,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iVar9 = (pUVar10->PartitionAttributeSelectors).ArrayNum;
  ::FString::FString(&local_210,"There is one Partition Attribute Selector by default");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    FVar16.Data = local_210.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar9,1)
  ;
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    ::FName::FName(&local_230,L"Double");
    if (((pUVar10->PartitionAttributeSelectors).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)
               (pUVar10->PartitionAttributeSelectors).AllocatorInstance.Data,local_230,true);
    pUVar11 = GetTransientPackageAsObject();
    pUVar12 = NewObject<UPCGParamData>(pUVar11);
    local_198 = local_230;
    local_190.Flag = PCGMetadataDomainID::Default.Flag;
    local_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_190.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_218 = 0.0;
    local_228 = pUVar12;
    this_00 = UPCGMetadata::FindOrCreateMetadataDomain
                        ((UPCGMetadata *)pUVar12->_padding_,&local_190);
    pFVar13 = pFVar20;
    if (this_00 != (FPCGMetadataDomain *)0x0) {
      pFVar13 = FPCGMetadataDomain::CreateAttribute<double>(this_00,local_198,&local_218,true,false)
      ;
    }
    dVar25 = __real_3fb999999999999a;
    pTVar1 = &pFVar13->Values;
    pFVar22 = pFVar20;
    do {
      local_238 = (double)((int)pFVar22 + (int)((ulonglong)pFVar22 / 10) * -10) * dVar25;
      lVar14 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar12->_padding_,-1);
      if ((lVar14 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar13->ValueLock);
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_238) &&
          ((FScriptContainerElement *)&local_238 < pFVar3 + (longlong)(pFVar13->Values).ArrayMax * 8
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = (pFVar13->Values).ArrayNum;
      if (iVar9 == (pFVar13->Values).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,&(pFVar13->Values).ArrayMax);
      }
      (pFVar13->Values).ArrayNum = iVar9 + 1;
      *(double *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_238;
      iVar2 = pFVar13->ValueKeyOffset;
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar13->ValueLock);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)pFVar13,lVar14,iVar2 + iVar9,false);
      pUVar12 = local_228;
      uVar21 = (int)pFVar22 + 1;
      pFVar22 = (FPCGMetadataAttribute<double> *)(ulonglong)uVar21;
    } while ((int)uVar21 < 100);
    if (local_118.InputData.TaggedData.ArrayNum == local_118.InputData.TaggedData.ArrayMax) {
      local_118.InputData.TaggedData.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x878,(ForAnyElementType *)&local_118.InputData,
                      &local_118.InputData.TaggedData.ArrayMax);
    }
    this_02 = (FPCGDataPtrWrapper *)
              (local_118.InputData.TaggedData.AllocatorInstance.Data +
              (longlong)local_118.InputData.TaggedData.ArrayNum * 0x78);
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
    local_118.InputData.TaggedData.ArrayNum = local_118.InputData.TaggedData.ArrayNum + 1;
    FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar12);
    this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
    UPCGSettings::GetElement(local_118.Settings,&local_1b0);
    PCGTestsCommon::FTestData::InitializeTestContext(&local_118,(UPCGNode *)&local_res18);
    do {
      if ((local_1b0.Object == (IPCGElement *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      bVar7 = IPCGElement::Execute(local_1b0.Object,local_res18);
    } while (!bVar7);
    iVar9 = (local_res18->OutputData).TaggedData.ArrayNum;
    ::FString::FString(&local_200,"There are 10 outputs");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_200.Data.ArrayNum != 0) {
      FVar16.Data = local_200.Data.AllocatorInstance.Data;
    }
    bVar7 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar9,10);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      if (0 < (local_res18->OutputData).TaggedData.ArrayNum) {
        uVar27 = (undefined4)__real_bff0000000000000;
        uVar5 = (ulonglong)__real_bff0000000000000 >> 0x20;
        pFVar13 = pFVar20;
        do {
          pFVar6 = local_res18;
          uVar19 = (uint)pFVar20;
          uVar21 = 0;
          if ((int)uVar19 < (local_res18->OutputData).TaggedData.ArrayNum) {
            uVar21 = ~uVar19 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          local_res20 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((longlong)&pFVar13->_padding_ +
                        (longlong)(pFVar6->OutputData).TaggedData.AllocatorInstance.Data))->Handle;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fb1f58:
            if ((FPCGMetadataAttribute<double> *)local_res20.Handle ==
                (FPCGMetadataAttribute<double> *)0x0) goto LAB_149fb1f7c;
            pUVar15 = Z_Construct_UClass_UPCGParamData_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar15);
            FVar23 = local_res20;
            if (!bVar7) goto LAB_149fb1f7c;
          }
          else {
            if ((FPCGMetadataAttribute<double> *)local_res20.Handle !=
                (FPCGMetadataAttribute<double> *)0x0) {
              UE::GC::MarkAsReachable(local_res20.Handle);
              goto LAB_149fb1f58;
            }
LAB_149fb1f7c:
            FVar23.Handle = (UObject *)0x0;
          }
          ::FString::PrintfImpl(&local_1f0,L"Output %d is a param data");
          if ((FPCGMetadataAttribute<double> *)FVar23.Handle == (FPCGMetadataAttribute<double> *)0x0
             ) {
            pcVar4 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
            (*pcVar4)(this,&local_158,0);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          if (bVar7) goto LAB_149fb21e2;
          lVar14 = UPCGMetadata::GetLocalItemCount(*(UPCGMetadata **)&FVar23.Handle[1].field_0x10);
          ::FString::PrintfImpl(&local_1e0,L"Output %d has 10 entries");
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_1e0.Data.ArrayNum != 0) {
            FVar16.Data = local_1e0.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,lVar14,10);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (!bVar7) goto LAB_149fb21e2;
          local_178 = local_230;
          FStack_170.Flag = PCGMetadataDomainID::Default.Flag;
          FStack_170._1_3_ = PCGMetadataDomainID::Default._1_3_;
          FStack_170.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          FStack_170.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_138.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_138.Name = local_230;
          local_138.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
          local_138.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
          local_138.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          this_01.Handle =
               (UObject *)
               UPCGMetadata::GetConstAttribute
                         (*(UPCGMetadata **)&FVar23.Handle[1].field_0x10,&local_138);
          if (((FPCGMetadataAttribute<double> *)this_01.Handle ==
               (FPCGMetadataAttribute<double> *)0x0) ||
             ((short)*(longlong *)&this_01.Handle[2].field_0x20 != 1)) {
            this_01.Handle = (UObject *)0x0;
          }
          ::FString::PrintfImpl(&local_1d0,L"Output %d has the \'Double\' attribute");
          if ((FPCGMetadataAttribute<double> *)this_01.Handle ==
              (FPCGMetadataAttribute<double> *)0x0) {
            pcVar4 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_148,L"Expected \'%s\' to be not null.");
            (*pcVar4)(this,&local_148,0);
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          if (bVar7) goto LAB_149fb21e2;
          bVar7 = true;
          bVar18 = true;
          lVar17 = 0;
          lVar14 = UPCGMetadata::GetLocalItemCount(*(UPCGMetadata **)&FVar23.Handle[1].field_0x10);
          uVar24 = uVar27;
          uVar26 = (int)uVar5;
          if (0 < lVar14) {
            do {
              iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)this_01.Handle,lVar17);
              dVar25 = FPCGMetadataAttribute<double>::GetValue
                                 ((FPCGMetadataAttribute<double> *)this_01.Handle,iVar9);
              if (bVar7) {
                uVar24 = SUB84(dVar25,0);
                uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
                bVar7 = false;
              }
              else {
                bVar18 = (bool)(bVar18 & (double)CONCAT44(uVar26,uVar24) == dVar25);
              }
              lVar17 = lVar17 + 1;
              lVar14 = UPCGMetadata::GetLocalItemCount
                                 (*(UPCGMetadata **)&FVar23.Handle[1].field_0x10);
            } while (lVar17 < lVar14);
          }
          ::FString::PrintfImpl(&local_1c0,L"Output values for output %d are all the same");
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_1c0.Data.ArrayNum != 0) {
            FVar16.Data = local_1c0.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar18);
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          if (!bVar7) goto LAB_149fb21e2;
          pFVar20 = (FPCGMetadataAttribute<double> *)(ulonglong)(uVar19 + 1);
          pFVar13 = (FPCGMetadataAttribute<double> *)&pFVar13->_padding_;
        } while ((int)(uVar19 + 1) < (local_res18->OutputData).TaggedData.ArrayNum);
      }
      bVar7 = true;
    }
    else {
LAB_149fb21e2:
      bVar7 = false;
    }
    if (local_res18 != (FPCGContext *)0x0) {
      (**(code **)local_res18->_padding_)(local_res18,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar7 = false;
  }
  PCGTestsCommon::FTestData::~FTestData(&local_118);
  return bVar7;
}

// GetBeautifiedTestName @ 149fb2260

FString * __thiscall
FPCGAttributePartition_AttributeSet::GetBeautifiedTestName
          (FPCGAttributePartition_AttributeSet *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributePartition.AttributeSet");
  return __return_storage_ptr__;
}

